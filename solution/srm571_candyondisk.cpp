/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12416
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

class CandyOnDisk {
public:
    string ableToAchieve(vector<int> x, vector<int> y, vector<int> r, int sx, int sy, int tx, int ty);
};

string CandyOnDisk::ableToAchieve(vector<int> x, vector<int> y, vector<int> r, int sx, int sy, int tx, int ty) {
    string ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 4};
    vector<int> y = {0, 0};
    vector<int> r = {3, 3};
    int sx = -1;
    int sy = -2;
    int tx = 6;
    int ty = 1;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    vector<int> r = {5, 3};
    int sx = -4;
    int sy = 0;
    int tx = -2;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1};
    int sx = 0;
    int sy = 0;
    int tx = 571;
    int ty = 571;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> r = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int sx = 2;
    int sy = 2;
    int tx = 19;
    int ty = 19;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1};
    int sx = 571;
    int sy = 571;
    int tx = 571;
    int ty = 571;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> r = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int sx = 2;
    int sy = 2;
    int tx = 19;
    int ty = 19;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {1, 2};
    vector<int> y = {1, 2};
    vector<int> r = {2, 2};
    int sx = 1;
    int sy = 1;
    int tx = 2;
    int ty = 2;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-5, -2, -3, 5};
    vector<int> y = {-2, 7, 3, 4};
    vector<int> r = {3, 4, 2, 4};
    int sx = -5;
    int sy = 5;
    int tx = 2;
    int ty = -6;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {-1};
    vector<int> y = {1};
    vector<int> r = {1};
    int sx = -1;
    int sy = 0;
    int tx = 999;
    int ty = 999;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {1, 6};
    vector<int> y = {-4, -4};
    vector<int> r = {8, 6};
    int sx = 3;
    int sy = -2;
    int tx = -7;
    int ty = -2;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-1, 0};
    vector<int> y = {1, -2};
    vector<int> r = {4, 2};
    int sx = 99;
    int sy = 99;
    int tx = 99;
    int ty = 99;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {4, 3};
    vector<int> y = {3, -4};
    vector<int> r = {1, 7};
    int sx = -3;
    int sy = -3;
    int tx = -2;
    int ty = 4;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> r = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int sx = 0;
    int sy = 0;
    int tx = 49;
    int ty = 49;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {0, 5, 6, 2, -3, -4, -6, -8, -3, 0, -3, 1, 4, 9, 12, 12, 7, 10, 12, 7, 10, 5, 3, 3, 1, -2, -1, -2, -2, -2, 2, 6, 11, 9, 8, 11, 10, 14, 18, 21, 24, 24, 19, 17, 16, 15, 10, 15, 17, 20};
    vector<int> y = {0, 5, 6, 2, -3, -4, -6, -8, -3, 0, -3, 1, 4, 9, 12, 12, 7, 10, 12, 7, 10, 5, 3, 3, 1, -2, -1, -2, -2, -2, 2, 6, 11, 9, 8, 11, 10, 14, 18, 21, 24, 24, 19, 17, 16, 15, 10, 15, 17, 20};
    vector<int> r = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int sx = 0;
    int sy = 0;
    int tx = 20;
    int ty = 15;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {0, 0, 0, 1, 4, 4, 4, 4, 9, 11, 12, 17, 18, 19, 21, 23, 27, 27, 30, 30, 31, 33, 36, 40, 43, 48, 53, 58, 63, 63, 63, 63, 68, 70, 72, 77, 79, 82, 84, 86, 90, 92, 95, 99, 102, 102, 102, 102, 104, 108};
    vector<int> y = {0, 3, 5, 5, 10, 13, 13, 13, 17, 19, 23, 24, 24, 29, 32, 34, 36, 41, 43, 47, 51, 53, 53, 58, 62, 64, 67, 71, 71, 71, 75, 79, 80, 82, 85, 85, 85, 89, 90, 91, 95, 97, 100, 100, 103, 104, 105, 107, 110, 112};
    vector<int> r = {10, 12, 14, 17, 17, 10, 15, 13, 12, 13, 16, 15, 16, 17, 11, 18, 10, 17, 15, 13, 11, 16, 14, 10, 16, 14, 20, 17, 10, 19, 17, 10, 18, 14, 12, 14, 16, 13, 17, 18, 12, 12, 15, 17, 11, 14, 12, 20, 15, 20};
    int sx = -4;
    int sy = 8;
    int tx = 91;
    int ty = 92;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 4, 9, 13, 18, 19, 20, 20, 23, 25, 29, 29, 29, 30, 30, 31, 34, 37, 41, 44, 47, 49, 54, 57, 58, 59, 60, 62, 65, 68, 72, 73, 77, 81, 86, 88, 89, 92, 92, 94, 95, 97, 97, 100, 102, 106, 108, 113, 114, 114};
    vector<int> y = {0, 1, 3, 6, 8, 12, 12, 17, 17, 18, 21, 22, 25, 29, 29, 34, 38, 43, 43, 44, 44, 47, 49, 50, 55, 57, 57, 60, 60, 62, 63, 68, 71, 73, 75, 76, 79, 83, 86, 88, 92, 92, 92, 92, 93, 98, 102, 107, 110, 114};
    vector<int> r = {10, 14, 17, 18, 17, 17, 10, 10, 12, 14, 15, 20, 13, 17, 17, 12, 11, 18, 16, 11, 16, 18, 18, 14, 16, 12, 12, 14, 10, 18, 11, 13, 11, 12, 20, 20, 14, 10, 15, 15, 18, 18, 20, 19, 18, 10, 10, 19, 15, 15};
    int sx = 26;
    int sy = 17;
    int tx = 94;
    int ty = 94;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {0, 4, 4, 5, 8, 9, 14, 15, 16, 19, 20, 21, 26, 30, 32, 32, 34, 38, 40, 40, 42, 44, 46, 48, 51, 53, 53, 57, 57, 62, 67, 69, 70, 72, 74, 76, 80, 80, 85, 86, 90, 94, 95, 100, 104, 104, 104, 109, 109, 112};
    vector<int> y = {0, 2, 7, 9, 10, 15, 15, 15, 16, 17, 19, 24, 24, 27, 31, 31, 34, 37, 42, 47, 49, 49, 49, 52, 53, 55, 59, 59, 63, 68, 72, 73, 73, 73, 74, 79, 82, 83, 84, 84, 89, 94, 98, 100, 101, 106, 111, 112, 112, 113};
    vector<int> r = {10, 17, 10, 14, 15, 13, 16, 10, 10, 12, 17, 18, 18, 16, 16, 17, 20, 15, 18, 17, 20, 15, 11, 13, 15, 12, 16, 10, 11, 20, 12, 17, 15, 17, 12, 17, 13, 19, 11, 19, 18, 17, 17, 11, 18, 17, 10, 20, 20, 10};
    int sx = -5;
    int sy = 5;
    int tx = 91;
    int ty = 92;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 3, 8, 10, 10, 15, 17, 20, 23, 24, 24, 29, 33, 33, 33, 35, 35, 40, 40, 45, 48, 50, 55, 57, 57, 58, 62, 63, 65, 65, 65, 68, 73, 75, 79, 83, 84, 87, 90, 94, 94, 98, 100, 103, 104, 108, 110, 112, 115, 118};
    vector<int> y = {0, 0, 3, 8, 11, 16, 17, 17, 19, 24, 28, 33, 34, 34, 35, 39, 43, 45, 45, 46, 51, 52, 57, 62, 65, 65, 69, 71, 76, 77, 81, 84, 88, 93, 95, 96, 101, 102, 106, 107, 109, 113, 113, 115, 119, 121, 122, 127, 132, 133};
    vector<int> r = {10, 12, 10, 19, 16, 18, 14, 10, 14, 10, 11, 10, 14, 10, 13, 19, 10, 12, 19, 20, 15, 17, 17, 11, 13, 14, 14, 14, 14, 18, 19, 14, 20, 20, 20, 12, 11, 12, 11, 18, 10, 11, 17, 15, 19, 19, 11, 12, 18, 16};
    int sx = 4;
    int sy = -4;
    int tx = 115;
    int ty = 135;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {0, 1, 4, 7, 11, 11, 11, 14, 19, 24, 26, 29, 32, 35, 37, 41, 45, 47, 49, 54, 55, 55, 56, 59, 60, 62, 63, 67, 70, 75, 75, 75, 79, 82, 86, 88, 91, 95, 98, 102, 107, 107, 109, 114, 115, 117, 121, 126, 130, 132};
    vector<int> y = {0, 4, 9, 10, 15, 17, 22, 27, 30, 34, 39, 41, 44, 44, 45, 47, 48, 53, 56, 60, 65, 70, 73, 76, 81, 83, 87, 89, 92, 96, 101, 102, 105, 105, 107, 110, 110, 111, 116, 118, 123, 125, 126, 126, 130, 132, 133, 136, 139, 144};
    vector<int> r = {10, 14, 20, 19, 16, 19, 14, 19, 19, 14, 10, 17, 20, 14, 20, 17, 13, 14, 10, 13, 20, 11, 14, 17, 11, 11, 15, 11, 20, 10, 11, 15, 10, 10, 15, 16, 13, 11, 19, 18, 17, 20, 15, 14, 12, 12, 20, 17, 10, 20};
    int sx = 19;
    int sy = 34;
    int tx = 109;
    int ty = 122;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {0, 2, 5, 7, 10, 14, 18, 19, 21, 26, 30, 34, 37, 40, 45, 45, 49, 49, 53, 58, 60, 64, 67, 70, 72, 76, 81, 82, 85, 87, 92, 96, 96, 100, 100, 102, 103, 104, 108, 111, 113, 115, 117, 117, 121, 124, 129, 130, 133, 137};
    vector<int> y = {0, 0, 3, 5, 8, 11, 16, 17, 17, 22, 27, 27, 32, 32, 32, 36, 37, 38, 39, 39, 41, 43, 44, 48, 50, 52, 54, 56, 56, 60, 63, 68, 70, 70, 73, 78, 81, 82, 83, 84, 88, 89, 91, 93, 97, 97, 101, 104, 104, 109};
    vector<int> r = {10, 13, 18, 18, 14, 20, 12, 10, 20, 15, 16, 18, 15, 14, 16, 16, 16, 16, 17, 17, 19, 20, 15, 14, 11, 19, 17, 19, 10, 18, 10, 13, 20, 19, 20, 12, 19, 13, 20, 16, 10, 15, 19, 12, 10, 11, 14, 17, 12, 20};
    int sx = 16;
    int sy = 8;
    int tx = 125;
    int ty = 95;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {0, 3, 3, 7, 12, 15, 16, 21, 26, 29, 33, 35, 40, 44, 46, 50, 52, 52, 55, 58, 61, 63, 68, 68, 69, 71, 74, 76, 80, 85, 85, 90, 93, 97, 99, 104, 109, 111, 115, 120, 125, 129, 134, 137, 139, 139, 140, 142, 142, 146};
    vector<int> y = {0, 4, 5, 9, 10, 11, 12, 15, 19, 20, 21, 26, 31, 34, 37, 40, 45, 45, 46, 51, 53, 53, 54, 54, 58, 60, 60, 60, 65, 65, 68, 70, 73, 77, 78, 83, 87, 90, 94, 96, 99, 100, 105, 110, 112, 112, 114, 119, 119, 119};
    vector<int> r = {10, 12, 12, 20, 18, 15, 15, 17, 16, 19, 13, 18, 14, 18, 10, 15, 16, 10, 18, 16, 18, 20, 17, 13, 14, 12, 11, 19, 17, 12, 17, 19, 14, 12, 19, 15, 18, 11, 16, 11, 17, 17, 11, 19, 18, 15, 14, 19, 19, 12};
    int sx = 28;
    int sy = 17;
    int tx = 140;
    int ty = 120;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {0, 4, 6, 11, 16, 20, 22, 27, 29, 29, 34, 39, 40, 40, 44, 45, 48, 53, 56, 60, 63, 65, 66, 67, 69, 72, 74, 78, 83, 84, 87, 89, 92, 97, 100, 103, 103, 107, 110, 115, 119, 119, 119, 124, 127, 127, 132, 135, 138, 138};
    vector<int> y = {0, 0, 4, 5, 8, 9, 10, 13, 18, 20, 20, 21, 26, 26, 28, 29, 32, 32, 35, 35, 37, 38, 39, 43, 46, 47, 47, 50, 53, 54, 57, 61, 62, 64, 65, 67, 69, 73, 77, 79, 82, 83, 85, 90, 95, 95, 99, 104, 104, 104};
    vector<int> r = {10, 15, 17, 11, 13, 10, 18, 17, 15, 11, 14, 19, 20, 12, 19, 13, 19, 16, 11, 20, 14, 15, 14, 20, 18, 20, 17, 11, 18, 13, 12, 20, 12, 16, 15, 10, 14, 19, 18, 13, 18, 11, 17, 18, 19, 16, 18, 10, 10, 17};
    int sx = 24;
    int sy = 10;
    int tx = 137;
    int ty = 107;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {0, 4, 4, 7, 11, 16, 19, 21, 23, 24, 26, 30, 32, 33, 38, 42, 45, 45, 45, 50, 53, 54, 58, 61, 63, 67, 69, 74, 74, 79, 79, 84, 89, 90, 90, 90, 91, 94, 98, 100, 105, 105, 105, 107, 110, 114, 118, 119, 120, 120};
    vector<int> y = {0, 2, 2, 5, 5, 5, 10, 14, 14, 18, 22, 26, 31, 36, 41, 44, 46, 49, 49, 50, 53, 54, 56, 60, 60, 61, 63, 66, 69, 73, 76, 80, 80, 81, 81, 83, 87, 87, 88, 91, 93, 97, 98, 102, 105, 109, 111, 114, 116, 120};
    vector<int> r = {10, 14, 12, 19, 14, 18, 17, 16, 13, 16, 20, 18, 19, 16, 11, 17, 17, 17, 10, 18, 11, 20, 20, 12, 11, 19, 20, 18, 14, 18, 18, 16, 12, 18, 19, 13, 16, 18, 19, 18, 14, 11, 11, 16, 20, 17, 12, 15, 15, 17};
    int sx = 22;
    int sy = 11;
    int tx = 124;
    int ty = 109;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {0, 4, 6, 8, 13, 15, 15, 18, 18, 21, 24, 28, 29, 30, 30, 31, 34, 35, 35, 40, 40, 41, 43, 44, 45, 48, 48, 48, 48, 53, 57, 60, 63, 64, 67, 70, 73, 78, 82, 83, 88, 89, 93, 94, 95, 100, 100, 104, 106, 111};
    vector<int> y = {0, 4, 6, 6, 9, 9, 11, 15, 18, 21, 22, 22, 24, 26, 31, 35, 36, 36, 40, 44, 48, 49, 52, 57, 62, 67, 72, 73, 75, 79, 84, 85, 89, 89, 93, 94, 97, 97, 101, 105, 105, 110, 110, 113, 117, 118, 121, 122, 126, 131};
    vector<int> r = {10, 16, 18, 11, 19, 16, 10, 19, 11, 11, 17, 12, 10, 11, 18, 10, 15, 14, 12, 18, 17, 12, 13, 10, 13, 14, 10, 16, 16, 17, 19, 16, 14, 18, 20, 13, 17, 12, 15, 16, 18, 13, 20, 11, 18, 16, 10, 19, 19, 20};
    int sx = 6;
    int sy = 11;
    int tx = 88;
    int ty = 102;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 4, 9, 11, 12, 15, 15, 18, 23, 28, 29, 30, 34, 36, 38, 39, 42, 42, 43, 43, 44, 44, 49, 51, 55, 57, 62, 64, 67, 67, 72, 74, 74, 77, 81, 83, 83, 88, 89, 89, 91, 95, 95, 95, 98, 102, 106, 108, 111, 114};
    vector<int> y = {0, 1, 2, 3, 6, 11, 15, 18, 18, 21, 25, 26, 29, 34, 36, 37, 42, 46, 47, 52, 55, 59, 61, 64, 69, 71, 74, 76, 76, 79, 79, 83, 86, 90, 95, 97, 99, 99, 102, 107, 110, 115, 119, 124, 124, 129, 132, 132, 137, 138};
    vector<int> r = {10, 17, 16, 17, 14, 11, 19, 15, 14, 14, 16, 14, 13, 13, 17, 16, 16, 17, 10, 14, 12, 10, 18, 19, 19, 16, 20, 20, 13, 17, 15, 11, 17, 17, 20, 14, 19, 20, 17, 18, 15, 20, 20, 14, 13, 19, 15, 19, 19, 11};
    int sx = 14;
    int sy = 14;
    int tx = 113;
    int ty = 134;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {0, 0, 3, 6, 6, 6, 10, 12, 13, 13, 15, 15, 18, 23, 25, 29, 29, 32, 35, 36, 36, 38, 41, 45, 50, 53, 53, 57, 61, 61, 66, 66, 69, 69, 70, 72, 74, 75, 75, 77, 81, 84, 89, 92, 95, 96, 99, 104, 104, 104};
    vector<int> y = {0, 0, 3, 5, 9, 12, 13, 16, 16, 19, 19, 20, 20, 20, 22, 27, 29, 34, 36, 41, 41, 41, 44, 47, 47, 49, 53, 55, 56, 60, 63, 64, 67, 72, 75, 76, 80, 85, 90, 91, 96, 100, 105, 105, 106, 106, 110, 114, 115, 120};
    vector<int> r = {10, 18, 10, 12, 13, 13, 12, 11, 18, 18, 15, 16, 14, 11, 13, 12, 17, 16, 20, 18, 12, 14, 15, 20, 13, 17, 13, 14, 13, 16, 11, 13, 18, 19, 16, 13, 17, 17, 11, 13, 19, 16, 19, 10, 11, 16, 11, 14, 19, 14};
    int sx = 15;
    int sy = 18;
    int tx = 105;
    int ty = 111;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {0, 2, 3, 8, 8, 10, 15, 16, 18, 20, 23, 27, 27, 27, 28, 28, 29, 33, 33, 33, 33, 36, 38, 38, 43, 48, 49, 53, 56, 60, 61, 66, 70, 74, 75, 80, 83, 85, 85, 86, 89, 92, 93, 94, 98, 100, 103, 106, 111, 113};
    vector<int> y = {0, 4, 7, 8, 11, 11, 12, 16, 20, 21, 21, 24, 24, 28, 30, 35, 40, 42, 45, 45, 45, 50, 52, 56, 58, 62, 64, 64, 67, 68, 69, 70, 72, 75, 76, 81, 86, 86, 90, 92, 96, 97, 99, 101, 101, 104, 109, 110, 111, 112};
    vector<int> r = {10, 14, 13, 11, 18, 18, 10, 18, 10, 18, 17, 13, 15, 15, 14, 16, 20, 14, 17, 14, 12, 14, 15, 19, 16, 12, 20, 12, 13, 14, 17, 17, 10, 17, 12, 12, 17, 12, 14, 19, 19, 16, 20, 11, 17, 11, 20, 19, 14, 15};
    int sx = 19;
    int sy = 20;
    int tx = 98;
    int ty = 106;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {0, 5, 8, 9, 10, 13, 16, 21, 23, 27, 29, 32, 37, 37, 38, 38, 40, 41, 42, 44, 46, 50, 53, 56, 59, 63, 64, 68, 73, 74, 77, 81, 82, 85, 89, 94, 96, 99, 100, 102, 102, 102, 102, 105, 108, 112, 114, 117, 118, 119};
    vector<int> y = {0, 2, 3, 6, 11, 14, 14, 17, 22, 24, 28, 32, 35, 35, 39, 43, 48, 49, 52, 57, 57, 61, 63, 67, 70, 73, 74, 77, 81, 86, 90, 92, 93, 98, 102, 106, 110, 112, 114, 114, 119, 123, 126, 130, 130, 131, 135, 140, 145, 147};
    vector<int> r = {10, 11, 19, 16, 19, 13, 12, 17, 20, 14, 12, 11, 12, 12, 18, 12, 11, 18, 16, 16, 15, 14, 10, 20, 20, 17, 14, 20, 16, 13, 15, 10, 13, 15, 10, 19, 19, 15, 15, 16, 16, 11, 19, 19, 16, 20, 15, 14, 14, 12};
    int sx = 9;
    int sy = 1;
    int tx = 121;
    int ty = 151;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {0, 4, 4, 6, 6, 9, 13, 14, 19, 19, 22, 25, 27, 28, 33, 36, 38, 40, 44, 47, 50, 50, 52, 56, 60, 65, 68, 68, 73, 77, 79, 83, 86, 86, 89, 92, 96, 101, 101, 104, 105, 105, 107, 107, 111, 113, 116, 121, 124, 129};
    vector<int> y = {0, 5, 7, 8, 9, 14, 16, 18, 18, 22, 23, 24, 25, 29, 31, 35, 40, 43, 48, 48, 48, 50, 54, 56, 58, 61, 66, 66, 67, 72, 74, 78, 79, 79, 79, 82, 85, 88, 89, 90, 95, 96, 97, 98, 102, 103, 104, 106, 110, 110};
    vector<int> r = {10, 19, 10, 10, 11, 17, 19, 15, 10, 13, 19, 11, 15, 14, 10, 12, 12, 17, 19, 11, 16, 18, 13, 19, 17, 15, 12, 10, 19, 13, 15, 18, 11, 10, 17, 16, 19, 15, 14, 17, 13, 12, 11, 15, 12, 19, 14, 16, 14, 17};
    int sx = 4;
    int sy = 6;
    int tx = 110;
    int ty = 94;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {0, 1, 2, 2, 2, 3, 6, 11, 13, 15, 18, 22, 24, 25, 29, 34, 36, 37, 41, 43, 43, 44, 49, 52, 53, 57, 60, 63, 66, 71, 72, 76, 79, 79, 83, 87, 90, 92, 92, 95, 97, 102, 104, 105, 107, 108, 110, 115, 120, 123};
    vector<int> y = {0, 4, 4, 8, 8, 12, 14, 16, 19, 19, 21, 26, 26, 26, 28, 31, 36, 38, 39, 41, 41, 42, 42, 46, 48, 48, 53, 58, 63, 66, 68, 73, 74, 74, 76, 80, 84, 87, 90, 93, 97, 98, 99, 103, 105, 105, 108, 112, 115, 117};
    vector<int> r = {10, 11, 20, 18, 18, 12, 18, 14, 10, 13, 19, 10, 18, 16, 19, 10, 17, 16, 16, 14, 19, 12, 13, 13, 20, 10, 17, 17, 18, 11, 10, 17, 10, 19, 10, 19, 18, 13, 20, 16, 14, 12, 14, 14, 14, 13, 14, 19, 13, 16};
    int sx = 1;
    int sy = 9;
    int tx = 110;
    int ty = 99;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {0, 0, 4, 6, 11, 12, 15, 19, 22, 24, 27, 31, 32, 36, 36, 36, 38, 41, 44, 48, 53, 57, 57, 57, 62, 65, 67, 71, 73, 74, 75, 78, 81, 83, 84, 87, 92, 95, 98, 101, 104, 105, 106, 108, 108, 110, 112, 113, 116, 118};
    vector<int> y = {0, 4, 5, 6, 8, 13, 18, 22, 24, 29, 34, 38, 42, 43, 46, 48, 50, 50, 51, 56, 57, 59, 60, 62, 65, 67, 68, 69, 69, 74, 76, 77, 80, 81, 84, 89, 91, 94, 94, 95, 100, 103, 105, 110, 114, 118, 121, 126, 131, 135};
    vector<int> r = {10, 14, 18, 17, 13, 15, 20, 17, 17, 19, 16, 14, 11, 18, 13, 20, 20, 18, 11, 10, 15, 18, 15, 17, 11, 12, 13, 17, 16, 20, 18, 13, 16, 10, 18, 20, 12, 11, 18, 15, 10, 14, 11, 20, 14, 17, 20, 10, 19, 14};
    int sx = 14;
    int sy = 21;
    int tx = 115;
    int ty = 137;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {0, 2, 4, 4, 7, 10, 13, 15, 20, 24, 25, 30, 35, 37, 37, 39, 41, 45, 49, 51, 54, 56, 61, 66, 69, 71, 72, 77, 78, 79, 81, 82, 82, 82, 82, 85, 85, 88, 90, 94, 94, 98, 102, 107, 109, 110, 111, 114, 114, 119};
    vector<int> y = {0, 5, 7, 8, 8, 8, 13, 15, 17, 18, 19, 22, 25, 29, 30, 30, 33, 37, 38, 39, 40, 43, 48, 52, 57, 59, 63, 63, 67, 69, 72, 74, 78, 79, 80, 84, 85, 90, 91, 91, 92, 97, 102, 104, 106, 110, 112, 115, 115, 116};
    vector<int> r = {10, 10, 10, 17, 18, 12, 19, 18, 10, 12, 19, 11, 14, 17, 11, 14, 15, 13, 17, 16, 20, 10, 18, 13, 17, 13, 11, 15, 11, 17, 16, 16, 14, 19, 13, 14, 14, 14, 20, 19, 14, 13, 18, 12, 19, 14, 19, 10, 13, 12};
    int sx = 7;
    int sy = 0;
    int tx = 115;
    int ty = 108;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {0, 4, 5, 6, 11, 15, 16, 20, 21, 22, 25, 29, 30, 32, 35, 39, 41, 45, 46, 49, 52, 56, 56, 59, 63, 66, 66, 67, 70, 75, 78, 81, 81, 81, 86, 86, 88, 91, 91, 95, 99, 104, 104, 108, 109, 110, 110, 110, 113, 116};
    vector<int> y = {0, 1, 5, 6, 10, 11, 16, 20, 24, 28, 28, 28, 32, 36, 37, 42, 43, 47, 49, 53, 54, 59, 63, 63, 68, 70, 72, 76, 80, 81, 86, 87, 92, 97, 98, 99, 102, 105, 109, 109, 114, 117, 119, 122, 123, 124, 127, 130, 131, 136};
    vector<int> r = {10, 12, 11, 19, 20, 17, 12, 19, 16, 13, 12, 12, 11, 11, 15, 19, 13, 17, 16, 14, 19, 19, 10, 19, 17, 10, 16, 19, 10, 11, 10, 12, 17, 14, 18, 12, 20, 15, 20, 10, 13, 19, 10, 13, 10, 10, 18, 19, 15, 12};
    int sx = 15;
    int sy = 17;
    int tx = 116;
    int ty = 132;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {0, 3, 8, 12, 13, 18, 20, 25, 25, 26, 28, 33, 35, 37, 37, 42, 45, 47, 49, 53, 55, 55, 57, 60, 61, 66, 69, 73, 76, 79, 80, 84, 89, 93, 94, 95, 97, 97, 100, 100, 105, 105, 105, 109, 109, 110, 114, 115, 119, 121};
    vector<int> y = {0, 4, 6, 8, 13, 17, 21, 25, 27, 32, 36, 40, 43, 43, 43, 43, 48, 52, 52, 57, 57, 61, 62, 62, 65, 65, 67, 71, 76, 80, 81, 83, 87, 90, 90, 90, 90, 94, 99, 101, 103, 107, 112, 113, 116, 116, 120, 124, 125, 128};
    vector<int> r = {10, 13, 12, 14, 14, 10, 17, 20, 15, 15, 10, 14, 18, 18, 12, 18, 18, 20, 19, 16, 14, 18, 16, 20, 11, 20, 16, 15, 18, 12, 16, 11, 17, 13, 18, 19, 20, 11, 10, 14, 13, 18, 12, 10, 18, 18, 14, 17, 13, 18};
    int sx = 18;
    int sy = 13;
    int tx = 122;
    int ty = 127;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {0, 5, 7, 9, 13, 14, 18, 21, 23, 24, 26, 26, 31, 36, 38, 39, 39, 44, 46, 51, 55, 59, 63, 67, 72, 76, 76, 77, 81, 84, 84, 87, 89, 89, 92, 95, 96, 100, 100, 101, 103, 104, 109, 110, 113, 113, 116, 117, 120, 121};
    vector<int> y = {0, 0, 3, 8, 13, 18, 23, 25, 25, 25, 30, 31, 31, 33, 35, 38, 41, 43, 48, 48, 53, 57, 57, 59, 60, 61, 62, 64, 68, 72, 75, 80, 80, 80, 84, 84, 86, 86, 89, 91, 96, 99, 99, 104, 109, 112, 114, 117, 119, 123};
    vector<int> r = {10, 11, 11, 20, 18, 12, 17, 16, 11, 15, 20, 15, 18, 18, 20, 15, 11, 10, 17, 16, 10, 11, 12, 16, 17, 12, 19, 17, 19, 20, 20, 20, 15, 18, 19, 12, 15, 12, 14, 20, 20, 16, 12, 14, 19, 16, 14, 13, 10, 10};
    int sx = 11;
    int sy = 9;
    int tx = 116;
    int ty = 119;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {0, 0, 3, 4, 6, 7, 9, 9, 13, 15, 15, 18, 19, 21, 24, 27, 31, 36, 41, 42, 44, 47, 49, 49, 50, 53, 53, 54, 58, 60, 61, 64, 67, 70, 73, 77, 77, 78, 78, 81, 84, 84, 84, 86, 86, 91, 94, 94, 95, 95};
    vector<int> y = {0, 5, 5, 5, 8, 11, 15, 15, 20, 23, 25, 30, 35, 35, 38, 38, 38, 39, 44, 46, 47, 50, 54, 57, 57, 57, 60, 60, 60, 63, 68, 72, 72, 76, 79, 82, 85, 88, 91, 94, 97, 101, 106, 106, 111, 115, 116, 116, 119, 124};
    vector<int> r = {10, 11, 15, 12, 18, 17, 14, 15, 11, 17, 16, 14, 19, 15, 11, 15, 17, 13, 13, 19, 11, 16, 18, 19, 11, 10, 10, 18, 13, 16, 15, 10, 16, 17, 16, 17, 14, 19, 10, 13, 20, 12, 20, 13, 18, 15, 15, 16, 13, 11};
    int sx = 7;
    int sy = 10;
    int tx = 89;
    int ty = 98;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {0, 3, 3, 3, 3, 7, 12, 12, 12, 16, 18, 23, 28, 30, 30, 33, 37, 40, 42, 45, 50, 55, 59, 62, 66, 67, 72, 76, 81, 86, 86, 89, 90, 94, 94, 98, 103, 106, 106, 106, 110, 112, 115, 115, 118, 119, 119, 124, 127, 128};
    vector<int> y = {0, 2, 6, 8, 9, 14, 15, 17, 22, 23, 27, 27, 28, 30, 35, 36, 38, 39, 44, 48, 50, 51, 56, 59, 64, 67, 69, 73, 76, 80, 82, 87, 91, 91, 95, 95, 99, 99, 102, 104, 109, 114, 116, 116, 117, 119, 122, 126, 128, 133};
    vector<int> r = {10, 13, 14, 20, 10, 10, 20, 15, 14, 16, 10, 16, 15, 17, 19, 17, 11, 12, 15, 17, 11, 19, 15, 12, 17, 20, 13, 13, 19, 10, 20, 20, 19, 17, 11, 18, 19, 18, 14, 12, 13, 18, 15, 18, 20, 15, 12, 15, 16, 11};
    int sx = 11;
    int sy = 18;
    int tx = 116;
    int ty = 114;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 4, 9, 10, 11, 15, 16, 19, 23, 27, 30, 32, 35, 36, 40, 40, 40, 44, 45, 46, 50, 52, 55, 59, 61, 66, 67, 67, 67, 68, 68, 70, 74, 77, 77, 82, 86, 88, 90, 91, 91, 94, 99, 104, 106, 108, 108, 111, 116, 117};
    vector<int> y = {0, 3, 5, 5, 8, 9, 10, 11, 14, 15, 20, 20, 21, 21, 23, 26, 28, 33, 34, 39, 42, 44, 44, 49, 50, 51, 56, 57, 59, 63, 66, 71, 73, 76, 81, 81, 83, 88, 88, 91, 93, 97, 97, 100, 103, 103, 105, 109, 111, 113};
    vector<int> r = {10, 11, 15, 19, 16, 15, 18, 15, 16, 17, 15, 17, 12, 13, 17, 16, 17, 11, 10, 11, 16, 16, 10, 12, 19, 12, 10, 16, 14, 14, 15, 18, 12, 12, 13, 16, 11, 18, 18, 11, 10, 19, 18, 20, 19, 19, 10, 17, 16, 20};
    int sx = 5;
    int sy = 3;
    int tx = 110;
    int ty = 102;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, 4, 5, 6, 9, 10, 12, 17, 22, 26, 30, 34, 37, 39, 40, 43, 43, 43, 45, 50, 55, 60, 60, 60, 61, 61, 63, 68, 71, 73, 78, 79, 79, 83, 87, 90, 93, 98, 101, 102, 104, 108, 109, 112, 115, 116, 116, 118, 121, 125};
    vector<int> y = {0, 2, 4, 8, 8, 12, 17, 19, 21, 22, 26, 28, 32, 35, 39, 39, 41, 45, 49, 49, 51, 52, 52, 55, 58, 62, 66, 70, 74, 79, 82, 82, 84, 86, 90, 91, 94, 95, 96, 101, 105, 105, 109, 109, 109, 109, 111, 115, 118, 118};
    vector<int> r = {10, 19, 19, 18, 11, 18, 20, 18, 13, 12, 14, 13, 11, 15, 13, 20, 11, 15, 11, 17, 17, 13, 12, 17, 16, 13, 14, 14, 20, 13, 14, 17, 20, 17, 13, 11, 19, 11, 10, 20, 13, 16, 14, 20, 10, 14, 19, 20, 13, 11};
    int sx = -3;
    int sy = 1;
    int tx = 103;
    int ty = 102;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, 2, 6, 10, 12, 15, 15, 16, 17, 19, 21, 24, 28, 32, 37, 40, 40, 40, 43, 43, 46, 51, 54, 54, 54, 57, 58, 62, 67, 70, 74, 74, 76, 81, 83, 83, 84, 89, 91, 94, 97, 98, 102, 107, 112, 115, 119, 119, 124, 127};
    vector<int> y = {0, 3, 8, 13, 17, 21, 23, 28, 31, 33, 35, 37, 38, 41, 42, 42, 47, 52, 52, 54, 55, 59, 61, 64, 66, 71, 75, 76, 78, 79, 81, 82, 83, 87, 88, 93, 95, 97, 100, 100, 102, 102, 103, 104, 104, 104, 106, 108, 110, 114};
    vector<int> r = {10, 19, 15, 17, 16, 19, 18, 11, 16, 16, 19, 18, 12, 18, 20, 11, 13, 13, 19, 11, 12, 19, 12, 12, 20, 12, 12, 14, 17, 11, 14, 18, 16, 13, 15, 11, 16, 17, 18, 18, 15, 20, 14, 20, 19, 14, 15, 11, 15, 14};
    int sx = 14;
    int sy = 11;
    int tx = 116;
    int ty = 104;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {0, 4, 7, 8, 9, 13, 13, 14, 17, 18, 22, 26, 28, 28, 33, 36, 39, 40, 42, 44, 49, 54, 59, 64, 64, 69, 69, 74, 78, 81, 83, 88, 91, 92, 97, 97, 100, 100, 104, 104, 108, 113, 116, 119, 120, 123, 124, 125, 125, 127};
    vector<int> y = {0, 3, 6, 10, 11, 15, 16, 16, 18, 21, 23, 23, 26, 27, 30, 32, 32, 33, 35, 37, 42, 44, 45, 47, 48, 51, 51, 53, 53, 54, 59, 59, 62, 67, 69, 73, 77, 78, 82, 87, 90, 90, 90, 95, 98, 99, 100, 104, 104, 107};
    vector<int> r = {10, 17, 19, 17, 19, 15, 18, 10, 10, 11, 13, 12, 16, 11, 16, 15, 19, 10, 11, 15, 19, 19, 13, 14, 17, 11, 13, 11, 19, 13, 12, 17, 12, 12, 14, 11, 15, 11, 12, 11, 18, 12, 14, 17, 20, 18, 19, 13, 14, 17};
    int sx = 9;
    int sy = 14;
    int tx = 109;
    int ty = 91;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {0, 1, 1, 5, 9, 13, 15, 17, 20, 21, 26, 30, 33, 37, 37, 38, 39, 39, 40, 43, 44, 48, 48, 52, 57, 61, 65, 65, 70, 74, 74, 79, 81, 86, 88, 90, 90, 90, 93, 93, 98, 101, 105, 107, 110, 112, 113, 114, 117, 120};
    vector<int> y = {0, 2, 5, 5, 9, 12, 16, 20, 20, 22, 25, 27, 31, 33, 37, 41, 45, 45, 46, 49, 53, 55, 55, 58, 63, 64, 68, 68, 71, 74, 76, 77, 78, 81, 83, 84, 87, 91, 93, 96, 97, 101, 104, 107, 110, 110, 110, 110, 113, 117};
    vector<int> r = {10, 18, 10, 16, 17, 15, 12, 15, 10, 10, 18, 15, 12, 18, 15, 10, 14, 18, 18, 20, 14, 17, 18, 12, 20, 14, 17, 10, 13, 17, 19, 16, 13, 19, 10, 12, 15, 20, 14, 20, 18, 17, 13, 15, 16, 10, 10, 10, 18, 16};
    int sx = 11;
    int sy = 13;
    int tx = 109;
    int ty = 114;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {0, 4, 5, 8, 13, 17, 22, 23, 23, 27, 30, 34, 37, 37, 37, 40, 41, 41, 41, 46, 48, 51, 55, 59, 61, 63, 64, 67, 72, 77, 77, 77, 82, 87, 92, 97, 102, 103, 104, 106, 110, 110, 110, 110, 114, 117, 118, 118, 118, 119};
    vector<int> y = {0, 4, 7, 12, 13, 17, 19, 21, 26, 27, 30, 32, 32, 34, 34, 38, 38, 43, 46, 48, 49, 51, 53, 55, 58, 61, 61, 66, 68, 70, 75, 77, 80, 82, 82, 84, 87, 92, 96, 97, 98, 98, 100, 105, 108, 110, 111, 111, 116, 116};
    vector<int> r = {10, 15, 17, 19, 14, 13, 10, 20, 14, 16, 20, 14, 15, 19, 10, 11, 16, 18, 20, 14, 10, 14, 17, 13, 12, 19, 13, 18, 12, 14, 11, 16, 15, 14, 13, 20, 16, 12, 15, 10, 19, 16, 12, 12, 11, 20, 12, 16, 15, 12};
    int sx = 3;
    int sy = -5;
    int tx = 115;
    int ty = 100;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {0, 0, 2, 6, 6, 11, 14, 15, 19, 19, 20, 22, 26, 28, 28, 33, 37, 39, 39, 39, 40, 44, 49, 54, 54, 54, 55, 56, 61, 62, 66, 68, 73, 77, 81, 86, 87, 87, 90, 91, 94, 97, 100, 101, 102, 102, 107, 112, 115, 119};
    vector<int> y = {0, 1, 6, 6, 9, 9, 10, 10, 15, 20, 25, 30, 31, 32, 37, 38, 39, 40, 45, 48, 50, 52, 53, 55, 56, 58, 58, 58, 63, 66, 71, 73, 74, 78, 83, 88, 92, 97, 100, 100, 102, 105, 105, 107, 110, 111, 111, 116, 119, 119};
    vector<int> r = {10, 10, 14, 12, 19, 16, 15, 19, 18, 18, 17, 13, 17, 13, 10, 11, 20, 18, 17, 19, 16, 18, 15, 18, 18, 11, 13, 15, 20, 20, 14, 17, 17, 13, 13, 13, 20, 19, 13, 19, 14, 14, 15, 19, 10, 16, 12, 16, 11, 20};
    int sx = 20;
    int sy = 20;
    int tx = 116;
    int ty = 121;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {69, 70, 78, 79, 88, 89, 92, 98, 98, 107, 108, 113, 118, 120, 125, 125, 133, 139, 142, 147, 157, 160, 167, 177, 185, 192, 193, 195, 202, 205, 211, 220, 225, 230, 236, 243, 243, 252, 256, 266, 268, 276, 284, 285, 289, 294, 297, 299, 299, 307};
    vector<int> y = {-76, -69, -60, -53, -47, -40, -30, -27, -21, -20, -19, -15, -11, -8, -1, 5, 12, 13, 14, 24, 28, 31, 34, 41, 46, 48, 56, 66, 76, 84, 89, 92, 98, 103, 103, 108, 110, 117, 117, 126, 129, 136, 146, 149, 159, 164, 164, 173, 174, 174};
    vector<int> r = {10, 10, 14, 4, 17, 15, 3, 18, 2, 16, 18, 5, 8, 13, 20, 4, 20, 12, 15, 9, 7, 16, 5, 14, 9, 19, 6, 7, 14, 10, 14, 5, 16, 13, 6, 20, 4, 7, 7, 6, 11, 9, 18, 12, 12, 19, 15, 17, 4, 10};
    int sx = 65;
    int sy = -75;
    int tx = 286;
    int ty = 149;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {13, 23, 28, 35, 42, 49, 55, 56, 60, 63, 63, 69, 76, 79, 82, 88, 95, 105, 106, 107, 111, 118, 121, 124, 128, 138, 147, 150, 156, 162, 170, 174, 177, 177, 183, 188, 192, 201, 206, 215, 222, 225, 228, 229, 230, 232, 239, 246, 252, 256};
    vector<int> y = {-35, -28, -27, -18, -10, -1, 5, 14, 21, 21, 26, 29, 34, 43, 45, 52, 62, 63, 65, 69, 76, 83, 87, 89, 89, 99, 99, 109, 118, 120, 122, 128, 130, 140, 140, 145, 147, 153, 153, 156, 160, 165, 175, 177, 178, 179, 180, 189, 194, 201};
    vector<int> r = {8, 19, 3, 19, 20, 20, 18, 20, 17, 8, 12, 20, 17, 3, 4, 2, 15, 10, 17, 4, 7, 2, 2, 19, 3, 19, 6, 6, 16, 2, 3, 14, 15, 10, 15, 2, 13, 15, 8, 5, 4, 12, 6, 12, 8, 16, 15, 13, 18, 4};
    int sx = 41;
    int sy = -13;
    int tx = 253;
    int ty = 197;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-25, -18, -8, -1, -1, 7, 14, 22, 28, 35, 43, 53, 57, 60, 65, 71, 79, 89, 90, 93, 103, 107, 117, 122, 127, 135, 141, 149, 158, 162, 166, 166, 176, 186, 187, 195, 205, 206, 215, 216, 226, 231, 231, 232, 236, 244, 245, 246, 248, 251};
    vector<int> y = {93, 103, 106, 115, 120, 127, 134, 134, 134, 140, 148, 150, 159, 162, 170, 180, 185, 194, 200, 204, 206, 214, 221, 221, 228, 235, 238, 247, 251, 259, 263, 265, 275, 283, 290, 300, 301, 301, 311, 315, 321, 331, 339, 345, 351, 351, 356, 364, 369, 376};
    vector<int> r = {6, 6, 4, 20, 6, 14, 6, 20, 9, 8, 18, 16, 2, 4, 14, 11, 11, 18, 12, 7, 10, 13, 20, 17, 12, 6, 3, 13, 12, 7, 16, 16, 12, 12, 3, 14, 19, 12, 2, 12, 14, 5, 17, 17, 6, 16, 17, 5, 12, 10};
    int sx = 15;
    int sy = 137;
    int tx = 233;
    int ty = 347;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-18, -13, -11, -8, -1, 7, 8, 16, 21, 30, 35, 40, 50, 60, 62, 68, 72, 78, 84, 90, 92, 101, 102, 112, 117, 118, 122, 127, 134, 142, 150, 155, 163, 172, 174, 183, 183, 190, 195, 196, 202, 206, 209, 212, 212, 220, 226, 235, 245, 255};
    vector<int> y = {-27, -22, -22, -18, -15, -11, -1, 7, 13, 22, 28, 35, 37, 43, 51, 59, 68, 70, 78, 79, 89, 90, 92, 100, 108, 111, 115, 123, 126, 129, 138, 143, 147, 155, 161, 169, 175, 178, 185, 185, 185, 190, 196, 198, 201, 201, 201, 205, 206, 212};
    vector<int> r = {6, 20, 14, 11, 11, 17, 2, 19, 18, 3, 8, 12, 10, 2, 5, 17, 7, 11, 4, 8, 11, 8, 10, 20, 17, 2, 15, 18, 20, 16, 14, 3, 17, 9, 5, 16, 14, 11, 2, 10, 4, 9, 3, 14, 7, 10, 4, 16, 13, 3};
    int sx = -3;
    int sy = -19;
    int tx = 205;
    int ty = 198;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-78, -77, -72, -67, -67, -66, -58, -51, -41, -33, -28, -28, -25, -18, -10, -9, -9, 0, 6, 10, 10, 17, 17, 23, 30, 40, 47, 47, 47, 54, 61, 65, 74, 80, 81, 91, 95, 100, 100, 108, 109, 115, 119, 121, 124, 124, 134, 139, 146, 146};
    vector<int> y = {-33, -32, -28, -26, -18, -12, -2, 6, 16, 16, 18, 27, 32, 34, 39, 48, 48, 49, 49, 54, 58, 66, 73, 81, 83, 85, 85, 90, 96, 106, 110, 116, 116, 118, 123, 128, 129, 130, 136, 136, 137, 137, 140, 147, 149, 153, 160, 166, 171, 174};
    vector<int> r = {8, 18, 11, 3, 17, 4, 5, 9, 15, 12, 11, 13, 2, 11, 17, 5, 5, 14, 16, 8, 8, 14, 15, 9, 17, 10, 10, 18, 9, 7, 13, 5, 6, 13, 3, 19, 7, 5, 9, 14, 3, 7, 17, 6, 20, 8, 15, 2, 9, 20};
    int sx = -28;
    int sy = 18;
    int tx = 129;
    int ty = 153;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {86, 87, 94, 94, 101, 109, 117, 123, 131, 136, 139, 139, 148, 149, 158, 168, 175, 181, 185, 188, 197, 205, 208, 210, 211, 215, 216, 225, 228, 231, 233, 233, 238, 243, 253, 257, 262, 272, 277, 284, 288, 288, 290, 299, 307, 313, 316, 326, 329, 333};
    vector<int> y = {85, 92, 101, 106, 107, 108, 117, 118, 121, 123, 129, 138, 146, 147, 150, 160, 165, 166, 174, 177, 179, 186, 194, 199, 208, 213, 214, 223, 227, 231, 240, 246, 253, 257, 263, 271, 273, 283, 284, 287, 290, 290, 296, 302, 306, 313, 321, 330, 338, 348};
    vector<int> r = {5, 12, 4, 6, 17, 11, 8, 17, 15, 9, 14, 16, 11, 5, 5, 18, 18, 5, 11, 11, 18, 5, 14, 15, 14, 2, 17, 14, 6, 5, 2, 10, 16, 20, 8, 4, 8, 10, 8, 6, 12, 14, 16, 4, 8, 16, 9, 2, 16, 14};
    int sx = 118;
    int sy = 121;
    int tx = 304;
    int ty = 309;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {24, 33, 43, 46, 48, 50, 50, 59, 65, 69, 79, 82, 92, 95, 105, 111, 117, 123, 130, 137, 137, 142, 143, 144, 153, 159, 166, 170, 170, 171, 177, 181, 185, 192, 201, 203, 208, 217, 220, 220, 220, 221, 223, 232, 236, 241, 244, 251, 251, 260};
    vector<int> y = {9, 18, 18, 25, 25, 28, 31, 41, 46, 50, 60, 65, 65, 71, 75, 83, 89, 95, 96, 106, 107, 109, 112, 114, 123, 132, 139, 145, 152, 161, 169, 172, 182, 184, 188, 189, 192, 201, 202, 212, 216, 222, 231, 231, 235, 239, 239, 244, 252, 255};
    vector<int> r = {7, 16, 7, 15, 8, 6, 18, 12, 14, 15, 19, 2, 20, 14, 7, 17, 20, 12, 10, 18, 13, 14, 6, 11, 9, 7, 20, 13, 18, 13, 16, 11, 14, 14, 19, 15, 9, 7, 15, 17, 16, 14, 16, 15, 17, 7, 4, 2, 18, 17};
    int sx = 50;
    int sy = 36;
    int tx = 256;
    int ty = 254;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {78, 81, 81, 83, 89, 98, 107, 107, 116, 116, 125, 132, 140, 147, 153, 160, 165, 170, 171, 174, 177, 180, 182, 190, 194, 196, 201, 210, 210, 212, 218, 218, 228, 228, 234, 244, 248, 257, 262, 269, 272, 276, 285, 295, 295, 297, 307, 316, 318, 327};
    vector<int> y = {-66, -65, -56, -56, -50, -43, -43, -35, -26, -18, -9, -5, 3, 4, 13, 16, 16, 17, 17, 24, 28, 38, 38, 48, 57, 64, 71, 80, 90, 94, 96, 105, 106, 107, 115, 120, 122, 131, 133, 133, 133, 143, 153, 160, 166, 167, 170, 179, 180, 186};
    vector<int> r = {1, 2, 20, 19, 18, 9, 12, 15, 6, 8, 4, 4, 11, 8, 18, 13, 16, 10, 17, 5, 3, 20, 19, 7, 11, 12, 18, 16, 4, 8, 4, 3, 4, 7, 10, 12, 11, 5, 10, 4, 18, 16, 7, 13, 6, 13, 16, 5, 15, 15};
    int sx = 126;
    int sy = -9;
    int tx = 315;
    int ty = 177;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-72, -72, -63, -59, -58, -53, -43, -38, -36, -34, -29, -27, -25, -17, -13, -6, -3, -3, 7, 17, 27, 37, 43, 49, 52, 53, 58, 65, 73, 82, 86, 91, 92, 95, 97, 101, 104, 105, 105, 114, 116, 116, 120, 127, 133, 135, 135, 143, 151, 152};
    vector<int> y = {91, 101, 103, 103, 108, 113, 118, 126, 126, 134, 136, 144, 154, 155, 159, 161, 161, 162, 163, 163, 173, 173, 181, 191, 192, 194, 200, 201, 209, 211, 218, 220, 221, 225, 235, 240, 246, 253, 261, 261, 263, 263, 270, 271, 278, 281, 284, 291, 294, 294};
    vector<int> r = {7, 12, 16, 7, 18, 10, 14, 16, 9, 12, 11, 5, 9, 17, 8, 5, 20, 5, 7, 8, 20, 5, 12, 19, 11, 8, 19, 17, 19, 13, 3, 18, 15, 6, 15, 12, 11, 16, 10, 4, 7, 16, 3, 18, 20, 11, 6, 17, 19, 19};
    int sx = -58;
    int sy = 116;
    int tx = 131;
    int ty = 279;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-72, -71, -70, -68, -64, -59, -55, -50, -45, -40, -33, -25, -18, -15, -9, -4, 3, 6, 14, 15, 22, 27, 31, 35, 42, 46, 56, 66, 71, 76, 85, 91, 92, 94, 99, 107, 117, 123, 127, 132, 132, 142, 150, 155, 156, 158, 158, 161, 166, 174};
    vector<int> y = {-45, -44, -36, -28, -18, -16, -9, -4, 6, 15, 22, 29, 36, 42, 46, 52, 54, 60, 61, 70, 74, 76, 77, 77, 85, 95, 97, 102, 106, 111, 121, 128, 136, 141, 143, 143, 143, 147, 147, 153, 162, 164, 165, 167, 171, 175, 184, 190, 200, 210};
    vector<int> r = {1, 15, 14, 3, 13, 16, 14, 15, 7, 18, 2, 15, 3, 7, 7, 4, 4, 14, 20, 7, 17, 18, 12, 7, 16, 11, 14, 12, 16, 3, 5, 14, 15, 11, 2, 13, 10, 18, 12, 4, 14, 7, 10, 12, 9, 12, 9, 7, 11, 18};
    int sx = -67;
    int sy = -24;
    int tx = 133;
    int ty = 157;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {70, 72, 75, 84, 91, 99, 101, 103, 105, 111, 121, 131, 133, 143, 153, 155, 165, 166, 174, 178, 181, 186, 191, 200, 201, 204, 210, 213, 222, 227, 234, 238, 240, 246, 252, 253, 262, 269, 275, 277, 283, 293, 302, 305, 307, 310, 312, 320, 321, 321};
    vector<int> y = {-39, -38, -33, -23, -18, -9, -7, -1, -1, 3, 10, 16, 21, 22, 25, 29, 31, 39, 45, 49, 50, 58, 68, 68, 71, 81, 89, 98, 101, 101, 108, 113, 119, 124, 133, 135, 145, 154, 161, 171, 172, 174, 175, 176, 179, 184, 184, 186, 189, 192};
    vector<int> r = {5, 18, 11, 8, 6, 11, 10, 4, 18, 17, 6, 5, 17, 20, 6, 8, 10, 5, 17, 14, 17, 2, 20, 10, 20, 17, 20, 13, 16, 17, 15, 5, 12, 12, 12, 20, 17, 10, 13, 20, 7, 4, 3, 14, 2, 9, 14, 5, 16, 18};
    int sx = 112;
    int sy = 2;
    int tx = 278;
    int ty = 169;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {53, 63, 73, 78, 83, 85, 93, 103, 103, 110, 114, 122, 127, 134, 139, 140, 146, 148, 156, 165, 170, 180, 183, 189, 194, 203, 212, 220, 225, 230, 231, 234, 241, 251, 255, 259, 268, 276, 282, 282, 287, 293, 300, 303, 305, 308, 314, 315, 317, 324};
    vector<int> y = {45, 50, 55, 60, 65, 68, 68, 76, 80, 83, 85, 93, 99, 108, 108, 113, 114, 123, 128, 137, 144, 153, 159, 163, 170, 180, 189, 194, 198, 207, 215, 222, 226, 231, 241, 241, 246, 250, 253, 263, 271, 276, 281, 281, 282, 283, 291, 293, 300, 304};
    vector<int> r = {2, 12, 10, 9, 18, 20, 15, 2, 2, 15, 18, 20, 12, 19, 16, 5, 18, 11, 17, 8, 15, 20, 12, 2, 9, 13, 14, 6, 8, 20, 7, 19, 16, 3, 14, 16, 12, 7, 6, 14, 5, 11, 8, 8, 6, 11, 5, 2, 8, 5};
    int sx = 88;
    int sy = 68;
    int tx = 301;
    int ty = 283;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-96, -90, -80, -80, -79, -78, -72, -64, -62, -58, -56, -54, -48, -42, -34, -24, -16, -9, -7, -4, -3, 4, 6, 16, 23, 26, 30, 38, 45, 54, 56, 61, 66, 71, 71, 77, 78, 82, 85, 87, 89, 97, 107, 113, 115, 121, 131, 140, 145, 145};
    vector<int> y = {-52, -52, -42, -37, -27, -18, -17, -16, -11, -5, 4, 4, 12, 15, 15, 19, 20, 25, 25, 28, 30, 39, 39, 46, 46, 48, 56, 61, 70, 80, 81, 89, 99, 104, 104, 105, 105, 108, 109, 114, 122, 130, 138, 142, 147, 149, 154, 156, 160, 166};
    vector<int> r = {4, 15, 3, 11, 4, 8, 10, 13, 2, 5, 14, 15, 15, 2, 18, 14, 19, 14, 8, 7, 4, 8, 9, 4, 13, 18, 7, 14, 3, 14, 19, 3, 10, 2, 3, 5, 3, 20, 5, 7, 15, 14, 18, 4, 10, 15, 10, 5, 11, 20};
    int sx = -54;
    int sy = 6;
    int tx = 119;
    int ty = 146;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {26, 28, 35, 37, 41, 51, 56, 66, 69, 74, 81, 91, 91, 98, 101, 110, 117, 121, 127, 127, 134, 139, 146, 148, 155, 163, 170, 172, 180, 190, 200, 201, 205, 209, 212, 220, 223, 233, 235, 236, 239, 240, 247, 249, 258, 267, 267, 271, 280, 280};
    vector<int> y = {-79, -75, -73, -72, -65, -59, -54, -45, -44, -39, -33, -31, -24, -14, -6, 0, 1, 10, 15, 20, 20, 29, 38, 42, 48, 55, 64, 72, 74, 82, 89, 91, 94, 98, 107, 112, 115, 122, 126, 136, 146, 150, 150, 153, 163, 167, 174, 178, 185, 193};
    vector<int> r = {10, 3, 13, 14, 13, 9, 7, 9, 15, 13, 20, 20, 13, 13, 5, 13, 12, 9, 14, 2, 8, 12, 2, 8, 2, 19, 13, 13, 5, 8, 7, 10, 7, 16, 9, 19, 9, 20, 4, 18, 15, 20, 5, 7, 12, 2, 2, 14, 9, 18};
    int sx = 31;
    int sy = -78;
    int tx = 238;
    int ty = 148;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {24, 32, 38, 38, 47, 54, 61, 70, 76, 82, 90, 99, 106, 110, 118, 118, 122, 123, 125, 134, 138, 147, 156, 166, 168, 172, 172, 174, 182, 188, 191, 199, 203, 212, 216, 218, 220, 227, 228, 228, 236, 240, 246, 250, 251, 260, 266, 273, 276, 276};
    vector<int> y = {-60, -58, -50, -49, -41, -41, -38, -31, -27, -25, -20, -16, -7, -2, 8, 12, 18, 22, 22, 24, 25, 28, 34, 44, 48, 58, 67, 68, 70, 78, 82, 90, 91, 101, 104, 113, 122, 127, 136, 137, 145, 153, 157, 158, 164, 165, 165, 174, 180, 187};
    vector<int> r = {5, 20, 7, 19, 7, 18, 14, 12, 15, 19, 8, 10, 8, 5, 3, 10, 14, 18, 18, 15, 17, 11, 6, 19, 7, 4, 20, 4, 19, 9, 11, 10, 2, 12, 19, 7, 9, 15, 12, 17, 9, 18, 11, 9, 5, 14, 10, 3, 16, 4};
    int sx = 34;
    int sy = -48;
    int tx = 276;
    int ty = 184;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {92, 102, 102, 112, 120, 121, 124, 134, 140, 144, 144, 148, 155, 160, 168, 178, 181, 189, 196, 202, 203, 208, 208, 213, 215, 221, 231, 237, 240, 249, 254, 255, 256, 266, 272, 272, 278, 279, 283, 288, 289, 299, 301, 301, 301, 306, 311, 316, 318, 328};
    vector<int> y = {5, 6, 6, 7, 7, 14, 18, 21, 29, 35, 37, 40, 46, 52, 55, 65, 68, 74, 79, 85, 88, 93, 103, 106, 115, 122, 122, 126, 133, 136, 145, 145, 153, 153, 159, 164, 174, 183, 190, 199, 209, 212, 213, 223, 229, 229, 229, 230, 235, 239};
    vector<int> r = {10, 6, 2, 3, 2, 16, 16, 7, 8, 17, 10, 11, 16, 16, 18, 20, 9, 5, 5, 7, 13, 20, 11, 8, 10, 13, 10, 6, 2, 16, 18, 7, 14, 15, 11, 15, 17, 20, 9, 10, 2, 5, 10, 18, 19, 9, 8, 16, 2, 5};
    int sx = 88;
    int sy = 0;
    int tx = 310;
    int ty = 229;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-42, -42, -35, -25, -20, -17, -10, -1, 1, 5, 12, 13, 21, 31, 39, 48, 56, 60, 62, 71, 80, 87, 96, 96, 97, 97, 99, 109, 115, 115, 124, 126, 132, 138, 145, 153, 161, 168, 169, 172, 177, 187, 188, 189, 194, 195, 198, 203, 213, 220};
    vector<int> y = {-70, -70, -60, -50, -50, -50, -45, -44, -42, -35, -27, -19, -16, -12, -4, -3, 0, 5, 15, 16, 24, 28, 37, 37, 39, 49, 58, 63, 63, 67, 75, 81, 88, 96, 105, 109, 118, 119, 126, 128, 133, 135, 139, 146, 153, 159, 159, 164, 165, 167};
    vector<int> r = {5, 18, 15, 10, 4, 12, 15, 13, 17, 19, 6, 9, 9, 12, 9, 6, 8, 13, 15, 20, 17, 15, 3, 16, 5, 2, 17, 19, 19, 5, 5, 17, 16, 7, 12, 18, 19, 11, 14, 6, 20, 15, 20, 13, 2, 12, 9, 19, 20, 3};
    int sx = 8;
    int sy = -27;
    int tx = 192;
    int ty = 150;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-15, -7, -2, 3, 12, 14, 21, 29, 37, 47, 47, 55, 57, 63, 67, 71, 76, 82, 82, 83, 83, 90, 97, 100, 106, 110, 112, 113, 122, 129, 131, 139, 142, 146, 152, 160, 170, 174, 178, 181, 186, 190, 195, 196, 202, 211, 216, 221, 226, 226};
    vector<int> y = {-16, -12, -6, 2, 9, 18, 22, 26, 35, 35, 43, 51, 60, 66, 72, 75, 78, 86, 87, 89, 89, 94, 101, 103, 109, 115, 121, 121, 122, 124, 131, 137, 145, 145, 150, 152, 160, 169, 175, 179, 179, 187, 191, 199, 200, 203, 205, 214, 219, 227};
    vector<int> r = {8, 11, 5, 6, 11, 5, 17, 13, 19, 16, 17, 7, 11, 13, 11, 13, 18, 19, 12, 17, 9, 9, 14, 18, 15, 4, 20, 15, 8, 4, 20, 9, 13, 2, 14, 4, 16, 6, 19, 9, 20, 11, 7, 5, 6, 13, 6, 13, 15, 2};
    int sx = 32;
    int sy = 34;
    int tx = 194;
    int ty = 192;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-29, -27, -19, -14, -8, -8, -3, -3, 7, 9, 13, 18, 28, 37, 39, 46, 51, 53, 61, 64, 70, 76, 79, 86, 96, 104, 106, 110, 114, 119, 126, 136, 141, 146, 151, 156, 166, 168, 170, 171, 177, 187, 196, 201, 203, 204, 209, 219, 220, 227};
    vector<int> y = {71, 75, 81, 81, 88, 93, 97, 99, 103, 108, 109, 117, 117, 126, 130, 132, 141, 149, 153, 155, 164, 174, 181, 183, 192, 202, 205, 210, 212, 220, 224, 231, 233, 242, 252, 261, 265, 267, 270, 276, 280, 289, 290, 300, 303, 306, 315, 318, 323, 326};
    vector<int> r = {5, 8, 9, 17, 9, 18, 6, 3, 4, 5, 6, 12, 13, 15, 2, 7, 11, 13, 8, 3, 11, 5, 15, 19, 18, 10, 8, 13, 13, 19, 4, 11, 5, 12, 7, 9, 12, 2, 12, 4, 10, 6, 12, 3, 3, 7, 9, 12, 17, 7};
    int sx = 4;
    int sy = 102;
    int tx = 208;
    int ty = 298;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {43, 48, 58, 58, 65, 74, 77, 79, 82, 90, 99, 106, 111, 111, 113, 116, 121, 127, 130, 130, 132, 138, 147, 154, 157, 162, 172, 177, 178, 182, 189, 194, 197, 199, 208, 208, 215, 222, 230, 233, 235, 236, 239, 241, 244, 254, 263, 263, 267, 270};
    vector<int> y = {23, 28, 37, 46, 47, 57, 60, 68, 76, 80, 85, 92, 96, 106, 116, 116, 118, 127, 135, 135, 141, 144, 150, 155, 165, 175, 184, 187, 187, 189, 194, 200, 205, 205, 210, 214, 220, 225, 225, 227, 231, 239, 246, 256, 264, 264, 265, 271, 276, 279};
    vector<int> r = {2, 11, 6, 16, 6, 9, 2, 2, 7, 17, 3, 2, 17, 11, 5, 18, 4, 13, 12, 12, 5, 16, 15, 12, 9, 19, 6, 20, 17, 13, 2, 20, 16, 4, 18, 5, 12, 18, 19, 5, 20, 12, 11, 8, 9, 7, 11, 4, 2, 16};
    int sx = 91;
    int sy = 82;
    int tx = 240;
    int ty = 258;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {3, 4, 5, 5, 14, 21, 30, 30, 36, 43, 43, 49, 52, 55, 56, 63, 68, 71, 78, 80, 90, 99, 104, 108, 110, 115, 123, 129, 129, 137, 140, 145, 151, 154, 157, 166, 169, 171, 175, 178, 178, 180, 186, 196, 204, 206, 216, 218, 219, 229};
    vector<int> y = {99, 106, 110, 114, 121, 123, 130, 138, 143, 146, 151, 161, 170, 177, 187, 193, 203, 205, 210, 219, 226, 228, 235, 239, 249, 253, 256, 265, 269, 277, 282, 282, 282, 284, 285, 290, 295, 295, 303, 304, 309, 317, 327, 330, 331, 341, 343, 346, 346, 351};
    vector<int> r = {8, 18, 11, 13, 8, 12, 7, 10, 3, 5, 5, 11, 3, 2, 9, 15, 3, 9, 20, 2, 6, 17, 7, 10, 15, 15, 7, 15, 18, 10, 9, 6, 11, 19, 11, 4, 15, 3, 18, 2, 2, 9, 19, 17, 15, 19, 14, 16, 20, 15};
    int sx = 3;
    int sy = 102;
    int tx = 201;
    int ty = 332;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-41, -41, -38, -35, -27, -26, -21, -15, -11, -6, 2, 3, 11, 19, 28, 31, 39, 43, 51, 59, 60, 66, 75, 76, 85, 88, 92, 95, 97, 99, 109, 112, 112, 121, 123, 128, 134, 143, 143, 145, 145, 148, 152, 158, 161, 162, 164, 164, 174, 183};
    vector<int> y = {60, 62, 64, 68, 73, 80, 80, 80, 89, 95, 103, 111, 121, 126, 128, 128, 128, 134, 139, 143, 150, 154, 156, 160, 165, 165, 169, 179, 181, 186, 187, 193, 194, 194, 199, 207, 216, 221, 226, 236, 241, 250, 252, 257, 258, 261, 269, 276, 284, 284};
    vector<int> r = {6, 15, 17, 17, 17, 2, 11, 11, 8, 20, 18, 7, 18, 5, 4, 8, 14, 13, 13, 19, 2, 12, 2, 2, 17, 3, 15, 7, 7, 20, 10, 10, 8, 4, 15, 19, 18, 4, 18, 4, 14, 15, 2, 17, 20, 4, 2, 7, 11, 17};
    int sx = -30;
    int sy = 63;
    int tx = 159;
    int ty = 261;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-59, -59, -58, -52, -50, -45, -39, -30, -22, -15, -15, -8, -2, 2, 6, 14, 21, 31, 35, 43, 51, 59, 66, 73, 75, 83, 91, 97, 105, 115, 119, 129, 139, 140, 143, 151, 158, 168, 172, 178, 187, 196, 203, 209, 212, 214, 215, 218, 228, 228};
    vector<int> y = {61, 67, 76, 79, 89, 98, 99, 105, 107, 117, 118, 120, 128, 137, 146, 150, 155, 158, 166, 175, 182, 188, 196, 199, 203, 210, 214, 219, 227, 232, 234, 238, 238, 241, 250, 250, 255, 263, 263, 263, 272, 281, 286, 286, 296, 302, 310, 313, 315, 324};
    vector<int> r = {4, 14, 9, 6, 12, 6, 14, 14, 5, 4, 5, 12, 7, 7, 15, 7, 5, 10, 16, 14, 15, 11, 14, 14, 4, 4, 2, 12, 3, 17, 6, 12, 13, 4, 6, 3, 2, 7, 3, 16, 9, 6, 6, 18, 8, 6, 10, 6, 17, 6};
    int sx = -62;
    int sy = 61;
    int tx = 198;
    int ty = 283;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {40, 49, 51, 58, 67, 71, 73, 82, 88, 93, 101, 105, 107, 107, 117, 120, 130, 137, 142, 143, 147, 152, 153, 155, 158, 159, 167, 173, 173, 176, 186, 195, 200, 207, 209, 214, 217, 227, 234, 240, 243, 245, 246, 250, 255, 261, 265, 272, 278, 278};
    vector<int> y = {23, 27, 34, 37, 37, 42, 50, 59, 66, 73, 77, 87, 89, 99, 109, 110, 116, 126, 127, 129, 132, 138, 139, 149, 159, 169, 170, 176, 180, 184, 189, 198, 200, 206, 211, 221, 231, 237, 246, 253, 254, 261, 262, 265, 268, 268, 276, 276, 286, 287};
    vector<int> r = {4, 5, 19, 3, 14, 8, 10, 19, 6, 4, 19, 16, 15, 10, 20, 16, 12, 18, 16, 11, 12, 14, 17, 6, 18, 14, 5, 18, 3, 12, 10, 17, 2, 8, 12, 15, 6, 6, 3, 19, 20, 4, 14, 14, 3, 4, 14, 13, 19, 16};
    int sx = 64;
    int sy = 37;
    int tx = 252;
    int ty = 267;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-50, -48, -47, -42, -38, -33, -32, -31, -28, -21, -14, -11, -3, 3, 8, 15, 19, 22, 23, 30, 40, 46, 49, 59, 66, 74, 76, 85, 93, 103, 104, 110, 114, 123, 131, 140, 141, 146, 154, 164, 174, 176, 183, 183, 192, 198, 203, 206, 216, 225};
    vector<int> y = {-19, -16, -10, -3, -2, 4, 7, 13, 17, 24, 32, 42, 45, 49, 49, 57, 59, 59, 67, 69, 77, 80, 82, 82, 91, 91, 92, 100, 108, 111, 111, 112, 113, 119, 124, 133, 143, 152, 152, 162, 171, 172, 178, 178, 182, 189, 198, 206, 212, 217};
    vector<int> r = {5, 6, 11, 16, 16, 20, 11, 6, 5, 5, 2, 15, 20, 7, 11, 6, 11, 11, 10, 2, 16, 17, 15, 15, 9, 19, 16, 15, 20, 20, 5, 4, 14, 6, 4, 10, 16, 9, 5, 3, 20, 20, 15, 11, 8, 13, 4, 3, 17, 17};
    int sx = -23;
    int sy = 22;
    int tx = 193;
    int ty = 177;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-86, -79, -71, -63, -56, -46, -46, -45, -36, -28, -25, -21, -20, -14, -12, -3, 3, 11, 20, 23, 23, 27, 30, 38, 40, 46, 56, 56, 66, 73, 74, 79, 86, 90, 100, 109, 117, 126, 134, 138, 143, 152, 162, 168, 172, 173, 177, 186, 192, 194};
    vector<int> y = {-15, -14, -8, -1, 9, 13, 13, 13, 15, 22, 32, 35, 43, 46, 55, 61, 65, 70, 78, 86, 92, 96, 99, 109, 115, 119, 129, 131, 140, 147, 156, 160, 168, 178, 188, 192, 201, 210, 219, 226, 231, 239, 241, 241, 250, 254, 260, 265, 267, 277};
    vector<int> r = {8, 14, 13, 5, 3, 10, 9, 14, 4, 8, 4, 14, 5, 16, 20, 19, 13, 14, 16, 4, 8, 9, 9, 7, 12, 6, 15, 7, 15, 4, 6, 16, 20, 3, 8, 20, 13, 2, 19, 5, 8, 5, 18, 8, 4, 8, 19, 7, 8, 20};
    int sx = -80;
    int sy = -18;
    int tx = 181;
    int ty = 264;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {68, 78, 82, 87, 96, 101, 110, 114, 119, 129, 131, 136, 146, 153, 155, 156, 162, 162, 164, 164, 165, 172, 175, 182, 183, 192, 200, 203, 208, 208, 212, 222, 230, 232, 242, 248, 258, 268, 275, 285, 286, 295, 297, 298, 307, 313, 316, 320, 329, 338};
    vector<int> y = {75, 84, 86, 96, 97, 99, 107, 110, 115, 119, 124, 130, 138, 143, 151, 154, 161, 163, 169, 169, 173, 181, 186, 196, 203, 213, 219, 224, 232, 236, 244, 251, 251, 255, 264, 267, 275, 278, 288, 291, 300, 303, 305, 310, 317, 319, 323, 329, 333, 338};
    vector<int> r = {7, 20, 10, 12, 6, 4, 20, 11, 17, 10, 9, 11, 8, 18, 8, 10, 20, 15, 16, 12, 5, 10, 15, 5, 16, 10, 9, 8, 15, 14, 9, 20, 16, 5, 6, 15, 8, 13, 18, 12, 16, 17, 10, 18, 14, 18, 20, 9, 7, 18};
    int sx = 86;
    int sy = 83;
    int tx = 326;
    int ty = 332;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-45, -40, -31, -23, -22, -14, -10, -10, -5, -4, -3, -1, 1, 5, 14, 14, 14, 21, 29, 29, 30, 32, 39, 41, 48, 49, 58, 59, 68, 71, 81, 87, 91, 96, 104, 105, 114, 114, 115, 122, 122, 129, 137, 144, 144, 148, 152, 154, 157, 158};
    vector<int> y = {31, 41, 44, 52, 52, 53, 62, 63, 71, 76, 79, 89, 96, 105, 105, 115, 124, 125, 133, 142, 146, 147, 153, 155, 165, 169, 170, 177, 187, 192, 199, 202, 204, 208, 212, 215, 225, 230, 234, 234, 235, 235, 235, 243, 252, 255, 260, 266, 266, 276};
    vector<int> r = {5, 9, 2, 11, 20, 15, 13, 19, 18, 14, 2, 4, 19, 19, 13, 14, 16, 6, 7, 8, 5, 12, 15, 5, 7, 11, 16, 7, 18, 11, 15, 10, 11, 18, 11, 8, 13, 14, 15, 20, 7, 8, 14, 19, 19, 18, 12, 10, 16, 18};
    int sx = -31;
    int sy = 48;
    int tx = 153;
    int ty = 262;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {-37, -29, -25, -20, -17, -9, -3, 2, 8, 15, 18, 20, 24, 31, 37, 43, 53, 59, 68, 78, 78, 84, 90, 91, 93, 98, 101, 110, 111, 112, 121, 130, 137, 145, 149, 155, 163, 168, 171, 179, 181, 183, 187, 189, 190, 195, 200, 204, 204, 212};
    vector<int> y = {74, 84, 90, 97, 106, 107, 117, 118, 124, 127, 137, 146, 155, 165, 174, 176, 176, 179, 180, 188, 191, 196, 204, 212, 220, 230, 231, 235, 237, 244, 252, 256, 262, 267, 277, 284, 293, 303, 303, 305, 314, 324, 333, 340, 342, 352, 356, 359, 367, 368};
    vector<int> r = {10, 20, 19, 9, 2, 2, 16, 9, 10, 14, 16, 4, 17, 20, 14, 19, 3, 14, 18, 4, 16, 13, 9, 15, 19, 16, 3, 17, 3, 5, 6, 8, 15, 10, 13, 6, 12, 20, 15, 16, 15, 18, 7, 8, 5, 6, 2, 9, 18, 12};
    int sx = -19;
    int sy = 98;
    int tx = 214;
    int ty = 368;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-4, 0, 7, 12, 13, 14, 23, 24, 33, 34, 36, 46, 52, 57, 59, 59, 64, 64, 68, 71, 73, 77, 84, 90, 96, 98, 107, 117, 118, 127, 131, 138, 146, 155, 158, 164, 171, 181, 182, 189, 190, 195, 201, 206, 207, 213, 215, 222, 222, 226};
    vector<int> y = {-27, -23, -13, -8, 0, 7, 10, 17, 21, 21, 23, 26, 36, 44, 44, 48, 51, 55, 60, 65, 72, 80, 80, 80, 80, 82, 88, 94, 96, 102, 108, 112, 115, 125, 128, 132, 132, 132, 137, 138, 138, 140, 146, 146, 152, 153, 161, 170, 172, 179};
    vector<int> r = {4, 5, 12, 3, 14, 6, 16, 13, 14, 7, 5, 11, 13, 8, 7, 6, 9, 15, 17, 20, 18, 17, 10, 16, 8, 7, 10, 13, 7, 14, 4, 2, 19, 4, 8, 12, 8, 14, 5, 5, 8, 12, 10, 17, 10, 19, 6, 11, 16, 18};
    int sx = 15;
    int sy = -5;
    int tx = 218;
    int ty = 168;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    vector<int> r = {1000, 1000};
    int sx = 0;
    int sy = 0;
    int tx = 1000;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    vector<int> r = {1000000000, 1000000000};
    int sx = 0;
    int sy = 0;
    int tx = 1000000000;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-49765478, -45928771};
    vector<int> y = {78437325, 76904605};
    vector<int> r = {375481957, 460658039};
    int sx = -19047899;
    int sy = 90148767;
    int tx = -88719701;
    int ty = -40816573;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {650014103, 317514646, 212055469, -457033683, -724176359, -559478403, -425701700, -831955992, -418975557};
    vector<int> y = {-921306348, 305013912, 343654161, -580438247, -467704141, -78364281, -711931886, 934692751, -377805592};
    vector<int> r = {199963696, 919691513, 914221542, 85594116, 302884656, 34441412, 730504973, 703272827, 34206401};
    int sx = -760938265;
    int sy = 605679138;
    int tx = 280606617;
    int ty = 794499063;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {383584688, -482727925, 529823328, -425000119, 550090059, 526161948};
    vector<int> y = {461787537, -430753572, 547421532, -141815754, -263270297, -416666417};
    vector<int> r = {324345762, 417526181, 493754519, 277474034, 718003441, 289206350};
    int sx = 403613235;
    int sy = -73759457;
    int tx = -135300458;
    int ty = -510146706;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {1485739, 1526489, -391804, -1281130, 664857, -787921, -910527, 672759, -1387517, 1429267, -1523439, 1498160, -925327, 1011573, -2145156, -1363922, 700844};
    vector<int> y = {-2178291, 1431418, 1607653, -1444861, 1576220, -350729, 1898754, 1643996, -1090326, 2038503, -721914, 1886712, 1971798, 72728, 462815, 1408253, -1831621};
    vector<int> r = {439974, 177995, 475052, 886642, 442807, 380117, 181927, 1195339, 1178090, 200091, 1233891, 559246, 728536, 103621, 1071030, 274939, 1187299};
    int sx = 368496;
    int sy = 1016947;
    int tx = 184180;
    int ty = -2176490;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {-13561237, -422928378, -227710886, -306426169, -489554028, -159288004, 269657646, 281826209, 180198515};
    vector<int> y = {463670256, 502825906, 20920925, 151493360, 67059157, -436923061, -376723928, -376644540, 323317558};
    vector<int> r = {429358435, 367919858, 218395629, 458997399, 61389390, 28800401, 491747469, 363461915, 416019684};
    int sx = 155222349;
    int sy = -223628790;
    int tx = -333603716;
    int ty = 434279987;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {-6, -9};
    vector<int> y = {-42, -40};
    vector<int> r = {598846875, 787678181};
    int sx = -21;
    int sy = -30;
    int tx = -3;
    int ty = 30;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-889736087, 625014058, -69918355, -6857123, -854429315, 174979020, -558403331, 392259411};
    vector<int> y = {643055255, -497696202, -449374481, 943538539, 147412357, -790462577, 569600824, 386748009};
    vector<int> r = {469854604, 460761462, 651721935, 766726290, 444439073, 932742893, 465982321, 263156249};
    int sx = 499405313;
    int sy = 194119938;
    int tx = 174169797;
    int ty = 135921093;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {932952185, 174504787, -361333518, 995727059, 57677107, -112459541, -160679917, 704927292, 821129465, -225633385, 158671998, -36789031, -25544035};
    vector<int> y = {-825261287, -864747765, 50852724, -496203697, 566296585, 694383307, 452253165, -802724379, 613172374, -110852028, 144315179, -136365824, 654808294};
    vector<int> r = {497163932, 63030339, 337048489, 57816284, 143406839, 106545008, 112018265, 484316247, 206783453, 19817483, 183297588, 258923057, 402462399};
    int sx = 226958874;
    int sy = 788513446;
    int tx = -502504229;
    int ty = 116530495;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {5105204, -4768305, -2411735, 4822202, -526666, -6677026, -4347573, -5721308, 5360553, -9219193, -7762334, -585505, 8552177, 1548371, 1531108, 7165537, 16777, -7278928, 7897616, -7857559, 3541133, 2265503, -456205, 8797153, -3035252, -8200923, 414524, -3239549, 2213018, 2597345, -3980881, 3253354, 2078701, -2157310, -5004816, 1226461, 9537184, -6155304, -8503523};
    vector<int> y = {-7232460, -65103, 7517591, -1919770, -550355, -6704173, 4896917, -1642099, 8411017, -3104290, 2468478, 8619149, 9014634, 9178545, 8474162, -1207168, -8214023, 3703334, -5822788, 377579, 8548637, 5941530, 8178244, -2486104, 1704186, -8264772, -4534212, 8007948, -3733193, 7563228, -3078223, -6582314, 3184408, -2929478, 8204101, -7025054, -2743893, -9593623, -794463};
    vector<int> r = {1409562, 108279, 3672613, 1403057, 3476989, 1721627, 2592423, 1770526, 3533036, 1960788, 728389, 3541121, 2643880, 3274162, 1096664, 2907275, 96584, 1274186, 55533, 2212463, 1295774, 3873896, 3887605, 2935661, 1644967, 1708702, 1459123, 805698, 93164, 493781, 2018850, 3521292, 3647016, 883713, 2941012, 3169095, 908045, 3061833, 1635419};
    int sx = -7712875;
    int sy = 7441585;
    int tx = 3899779;
    int ty = -2895315;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {-362402004, 110594039, -273267877, 906341883, -493124029, -754151662, -751386416, -603122406, -15974107, -405203292, -636356635, -147143061, 603774425, -216903996, -639236210, 263462792, 227653041, -795463542, 361062363, 196492232, -403284417, 501838651, 964225259, 364590073, 286404452, -752567409, -297286660, 533327258, -86344603, 942350827, -324093761, -650474460, -453658910, -434745398, 855196538, 628174245, 243997957, 272196782, 566151415, -866068939, 244403203, -299806503, -218343486, -663923784, 833470404, -483759619, -948792747, 70293066, -457122698};
    vector<int> y = {27265130, 598483833, 770710894, -632942475, -794587590, -709810842, 853285289, 202448502, -992375142, -148310639, -29574329, 431630528, -595903889, 416592305, -773949987, 574348348, 630502918, -441243562, 194507876, 43785153, 656824602, -150956538, 692206964, 97480140, -568314391, -59865966, 29021042, -107139894, -369589299, 426428948, 286413436, 988228081, -978051823, -180488979, -42269163, 392285786, 528583626, -731360223, 759533831, -21672657, 859081410, -881607410, -660871545, 17452759, 992146374, 348279861, 726085585, -795248225, -772394200};
    vector<int> r = {239007017, 117412538, 276927433, 271353127, 28349265, 161932546, 54343416, 8259781, 97249921, 147506447, 196325210, 131268728, 295581022, 156361837, 253076846, 116043596, 315354056, 331579706, 231652488, 113379532, 142459081, 79640418, 63838641, 280372393, 123190079, 226287473, 14465780, 290100696, 149817590, 118190756, 24173865, 136563980, 142821879, 273815657, 287155539, 149277647, 64033541, 105463364, 41639475, 216174509, 31392080, 68716579, 295395839, 234041009, 254569340, 205545981, 2991830, 37916707, 27339919};
    int sx = 865507292;
    int sy = -894751625;
    int tx = -540462942;
    int ty = -983611895;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> r = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int sx = 2;
    int sy = 2;
    int tx = 19;
    int ty = 19;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 0};
    vector<int> r = {1, 2};
    int sx = 0;
    int sy = -1;
    int tx = 0;
    int ty = -2;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {10};
    vector<int> y = {10};
    vector<int> r = {1};
    int sx = 0;
    int sy = 1;
    int tx = 0;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 1};
    vector<int> r = {1000000000, 1000000000};
    int sx = 700000000;
    int sy = 700000000;
    int tx = 1;
    int ty = 2;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 0};
    vector<int> r = {5, 6};
    int sx = 0;
    int sy = 3;
    int tx = 1;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 1};
    vector<int> r = {111, 111};
    int sx = 4;
    int sy = 4;
    int tx = 1;
    int ty = 1;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 0};
    vector<int> r = {1, 3};
    int sx = 0;
    int sy = 1;
    int tx = 2;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 0};
    vector<int> r = {100, 10};
    int sx = 0;
    int sy = 5;
    int tx = 0;
    int ty = 20;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1};
    int sx = 2;
    int sy = 0;
    int tx = -2;
    int ty = 0;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1000000000};
    int sx = 700000000;
    int sy = 700000000;
    int tx = 699999999;
    int ty = 700000001;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1000000000};
    int sx = 999999998;
    int sy = 0;
    int tx = 999999998;
    int ty = 1;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1000000000};
    int sx = 500000000;
    int sy = 0;
    int tx = 500000000;
    int ty = 1;
    CandyOnDisk* pObj = new CandyOnDisk();
    clock_t start = clock();
    string result = pObj->ableToAchieve(x, y, r, sx, sy, tx, ty);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15491&pm=12416
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
 
using namespace std;
 
class CandyOnDisk {
public:
  string ableToAchieve(vector <int>, vector <int>, vector <int>, int, int, int, int);
};
 
map < pair <int, int>, int > mp;
 
const int N = 2610;
 
int ver;
int t[N], c[N], q[N], was[N];
int g[N][N];
long double r1[N], r2[N];
 
int addv(int tt, long double rs, long double rf, int up, int cc) {
  if (rs < 0) rs = 0;
  if (rf > up) rf = up;
  t[ver] = tt;
  r1[ver] = rs;
  r2[ver] = rf;
  c[ver] = cc;
  ver++;
  return ver-1;
}
 
string CandyOnDisk::ableToAchieve(vector <int> x, vector <int> y, vector <int> r, int sx, int sy, int tx, int ty) {
  if (sx == tx && sy == ty) return "YES";
  int n = x.size();
  mp.clear();
  for (int i=0;i<n;i++) {
    pair <int, int> p = make_pair(x[i], y[i]);
    if (r[i] > mp[p]) mp[p] = r[i];
  }
  int nn = 0;
  for (int i=0;i<n;i++) {
    pair <int, int> p = make_pair(x[i], y[i]);
    if (mp[p] > 0) {
      x[nn] = x[i];
      y[nn] = y[i];
      r[nn] = mp[p];
      nn++;
      mp[p] = 0;
    }
  }
  n = nn;
  memset(g, 0, sizeof(g));
  ver = 0;
  for (int i=0;i<n;i++)
    for (int j=i+1;j<n;j++) {
      long double dist = sqrt(1.0*(x[i]-x[j])*(x[i]-x[j]) + 1.0*(y[i]-y[j])*(y[i]-y[j]));
      if (dist > r[i]+r[j]) continue;
      int x = addv(i, dist-r[j], dist+r[j], r[i], 0);
      int y = addv(j, dist-r[i], dist+r[i], r[j], 0);
      g[x][y] = g[y][x] = 1;
    }
  for (int i=0;i<n;i++) {
    long double dist = sqrt(1.0*(x[i]-sx)*(x[i]-sx) + 1.0*(y[i]-sy)*(y[i]-sy));
    if (dist <= r[i]) addv(i, dist, dist, r[i], 1);
  }
  for (int i=0;i<n;i++) {
    long double dist = sqrt(1.0*(x[i]-tx)*(x[i]-tx) + 1.0*(y[i]-ty)*(y[i]-ty));
    if (dist <= r[i]) addv(i, dist, dist, r[i], 2);
  }
  long double eps = 1e-10;
  for (int i=0;i<ver;i++)
    for (int j=0;j<ver;j++)
      if (t[i] == t[j])
        if (r2[i]+eps < r1[j] || r2[j]+eps < r1[i]) continue;
        else g[i][j] = 1;
  for (int ii=0;ii<ver;ii++) was[ii] = 0;
  for (int ii=0;ii<ver;ii++)
    if (!was[ii]) {
      int i = 1, e = 1;
      q[1] = ii;
      int z = c[ii];
      was[ii] = 1;
      while (i <= e) {
        for (int j=0;j<ver;j++)
          if (!was[j] && g[q[i]][j]) {
            e++;
            q[e] = j;
            z |= c[j];
            was[j] = 1;
          }
        i++;
      }
      if (z == 3) return "YES";
    }
  return "NO";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/