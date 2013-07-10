/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5891
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

class ExtraBall {
public:
    double expectedPayout(vector<int> card, vector<int> balls, vector<string> patterns, vector<int> prizes);
};

double ExtraBall::expectedPayout(vector<int> card, vector<int> balls, vector<string> patterns, vector<int> prizes) {
    double ret;
    return ret;
}


int test0() {
    vector<int> card = {1, 2, 3};
    vector<int> balls = {1, 2, 4};
    vector<string> patterns = {"XXX"};
    vector<int> prizes = {10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 138.88888888888889;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> card = {1, 2, 3, 4, 5};
    vector<int> balls = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    vector<string> patterns = {"X.X.X"};
    vector<int> prizes = {10};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
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
    vector<int> card = {29, 16, 2, 35, 75};
    vector<int> balls = {75, 4, 16, 3, 21, 44, 2, 38, 11};
    vector<string> patterns = {"X....", "X.X.X", "XXX..", "XXXXX"};
    vector<int> prizes = {10, 100, 300, 1000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 6.212121212121213;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> card = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> balls = {75};
    vector<string> patterns = {"X.........", ".X........", "..X.......", "...X......", "....X.....", "XXXXXXXXXX"};
    vector<int> prizes = {50, 40, 30, 20, 10, 1000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.027027027027027;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> card = {1, 2, 3, 4};
    vector<int> balls = {12, 34, 45, 56, 67, 1, 2, 3, 4};
    vector<string> patterns = {"X..X", "XXXX"};
    vector<int> prizes = {10, 100};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> card = {41, 12, 33, 45, 19, 13, 11, 27, 69, 35, 72, 8, 73, 2, 24, 36, 16, 60, 15, 68, 55, 51, 17, 21, 74};
    vector<int> balls = {56, 74, 70, 46, 14, 66, 29, 6, 62, 50, 19, 31, 3, 34, 73, 68, 5, 42, 30, 65, 54, 26, 7, 60, 51, 40, 52, 35, 4, 37, 41, 71, 32, 2, 57, 72, 58, 39, 17, 11};
    vector<string> patterns = {"..X...XXXX...X.X.X.XX.X..", "X..XXXX.XXX.X.XX....X.XX.", "X..X...XXXXXXXX..X.X...X.", "XXXXXXX.XX.XXXX.X..X...XX", "XXX.XX...XX...X.X...X...X", "X.X.X.XXX.XX...X.XX.X.XXX", "....XX....X.XX..X..XXX.XX", "X..XXXXX.XXX...X.XXX..X.X", ".X.X..XXX.XXX.XXXXXXXXXXX", "XX.X..X..XX....XXXX..X.XX", "XX.XX.....XXXXXX.X...XXXX", "XXX.XXXXX...X..XX..XX..X.", "XX....X.XXXXXX.XX.XX.XX..", "XXXX.XX......X.X..XX..X..", "XXXXX.XXX..XXXXX.X....X.X", ".X.X.X.XXXX...XX.XXXX.XXX", "XXXXXX.XXX..XX..X.XX.X...", ".X...XXXXX...XXXXX.XXX.X.", ".X..XXX.XX....XXX.XXXXX.X", "XXXX...XX.....X.XXXXXXX..", "...XXX...X..X...XXX.XX...", "X.X.XXX.X..XX..XX.X...XXX", "...XXXX.X.XXX...X.X......", "....X..XX.X.X..XX.XXX...X", "XX.X.X.....X.XX..X.X.X.X.", "XXXX.....XX.....X....XXXX", "X..XX.X.X.....XXXX..X..X.", "X..XXXXXXXX......XXXX...X", "XXXX.XX...X..X.XXXX......", "X.X.XXXXXXX..X.X...XX.X.X", "XX.XXX...X.X..X.X.X..X...", "XXXXX.X.X.X.X...X..XX..XX", ".XXXX.XXXXX.XX....XXXXX.X", "XX..X.X.XXXX..XX...X..X..", "XX.XXXX..X.X.X....XX..X..", "XXXX..X.XXX.XX..X.XX..X..", "X..XXXX...X......XXX.X..X", "X...XX.XX..XX..X...XX.X..", "...X.X..XX.....X..X..X.X.", "X.X.X.XXX.XXXXX..XX.XX...", "XXX..XX....X..X.X.XXX..X.", "..XX..XXXXXX..XXXXXXX..X.", "..XX.X.XXXXX..X.XXX..XX.X", "X.XXXX.XXX..XX.X.XX.X.XX.", ".XX.X...XX.XX..X.X..XX.XX", "X..X.XXXXXX.XX.XXXX....XX", ".XXX.X.X..XXXX.XX.X.....X", ".X.XX......X.X..X....XXX.", ".X.XX.....X......X.X.X...", "XX.XXX.XXX.XXXX..XXXX...X"};
    vector<int> prizes = {2773, 8879, 2623, 3, 6957, 7645, 2341, 3347, 2535, 1649, 1394, 5300, 4127, 2040, 13, 7743, 106, 2501, 3121, 6532, 9561, 305, 2720, 6731, 7872, 4322, 2665, 702, 1511, 8368, 4630, 261, 8369, 5124, 841, 2338, 5740, 5025, 2184, 7918, 2712, 4887, 4502, 7892, 971, 4053, 2500, 4973, 8436, 352};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
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
    vector<int> card = {36, 41, 64, 51, 75, 27, 16, 61, 71, 12, 2, 30, 50, 31, 3, 56, 67, 60, 22, 43, 45, 23, 49, 73, 11};
    vector<int> balls = {42, 68, 53, 29, 41, 60, 33, 56, 26, 45, 11, 7, 70, 2, 62, 39, 20, 15, 25, 17, 6, 55, 52, 73, 18, 43, 16, 50, 35, 59, 65, 32, 1, 24, 3, 34, 36, 19, 49, 12};
    vector<string> patterns = {"..X.X.X.....X...X.X....X.", "XX.X.XXXX..XXX..XX..X.X.X", "XXX....XXX.....XXX....XX.", "X.X..X.X.X.XX.XX..X.XX..X", ".X......XX.XXX..X.XXX.X.X", "X..XX.....X..X.X...X.XX..", "....XX.X...XXXXXXXXXX....", "....X.XX..XXXXX.XX.XX..X.", "...XX....XX.......X....XX", "XX...XX.X.X...X..XX....X.", "XXXX.X..X.X.XX.X.....XX..", "X.XXXX..X..XX...XXXX.XX..", ".....XX....XX.....X......", "XX...X.XXX......X..XX..XX", "X..X.XX.XX...X.XXX...XX.X", "XX..X...XXX...XXX.XXX..XX", "X.X.XX...XX.........XXX.X", "X...X....XX.XXXX...XXXXX.", "...X..X.X.XXX........X..X", "XX.X..X...X.XX...X.XXXXX.", "....X.XX....XXX.XXXX....X", "X.X....X.X.X....X.X.XXX.X", "X.XXX.X.X......XX..X....X", "X..XXXX.XX.XXX.X..XX..X..", "X......XXXX.XX.X.XX.....X", "X..XX.XX..XXXXX....X.X.XX", "XXX.XX..X.X..XXX.XXX..XX.", "..X.......X.X....X.X..X..", ".XX..XXXXX...XX...X.XX..X", "XXXX..XX..X.X.XX.X.XX.XX.", ".X.X....X.X.X.XXX...X.XX.", "....X.X..X...X.X..XXX...X", ".XX.XXX..XX.XXXX..X.X.XXX", ".XX.X.........X...XXX....", "XXXXXX..X...X.XXX.X.X.X.X", "XX.X..X..XXXXX..X....XX..", "X..XX...X.X....X...XX...X", "X.XXXXXXX..X.X......XX..X", ".XX.XX.XX..X...XXX.X.X.X.", ".X.X..X..XXXX.XX.X.XXXX.X", "X.X..X..X..X.X..X.X...X.X", ".X.X..XXX.X.XXXX..XXXXX..", "X.X..XX...XXXXXX..X.X.X..", "X.XX..X...X...XXXX.XX.XX.", "..X.XX.XXX.X.XXXX..X.X.X.", "X.XXXX..XX.X.XXXXXXX...X.", "...X..XX..XX....XXX....XX", "...XX...XX.XXXX......X.X.", ".X..X....X...X.X.XXXX..XX", "XXX..X.XX...XX..XXX.X.X.."};
    vector<int> prizes = {2034, 1477, 4250, 9247, 9926, 4873, 74, 9904, 9828, 3826, 6564, 8554, 3466, 9701, 6384, 7622, 4061, 9873, 6063, 4726, 9709, 5303, 7820, 7043, 2664, 7629, 4084, 3785, 1565, 644, 551, 4278, 212, 793, 5391, 8959, 8044, 8793, 2320, 1427, 405, 8265, 7296, 372, 80, 4981, 4233, 5219, 6308, 6471};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 108.14285714285714;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> card = {28, 33, 23, 44, 4, 52, 53, 9, 35, 36, 68, 61, 43, 47, 39, 10, 54, 24, 71, 11, 46, 40, 15, 20, 22};
    vector<int> balls = {8, 57, 24, 21, 4, 75, 64, 6, 59, 34, 60, 61, 30, 63, 40, 49, 19, 31, 35, 71, 45, 1, 69, 43, 15, 17, 3, 50, 39, 7, 23, 20, 10, 18, 73, 65, 22, 70, 16, 55};
    vector<string> patterns = {"XXX..XX....XXX..X.XXXX.XX", "X..X..XXXXXX.X...X..X..XX", "X...XX.X.XXXX...X.XXXXX.X", "XXXX.XX.XXXX..XX....XXX..", "X.XXX.......X.X.XX..X.XXX", ".X..XXXX.X...XX.X.XXX.X.X", "XX.XX..XXXXXXXX.X.XX...XX", "XXX..XXXXXX.XX...X.X..XXX", "X.XX.X.X.X.X....X..XXX..X", ".XX..XX.XX..X...X.XX.X..X", "X..X.X..X.X.X.....X...XXX", "XXXXX.XX.XXXX......XX...X", "X..X.X.X.....XX.XXX.XXX..", ".X...XX.X.X.XX...XX..X.XX", "X.XX...X.X......X.X.....X", "..XX.X....X...XXX.X.....X", "X..X.X.XXX..X..X......XXX", "..XX..XX..X.X..X.X.X.XXX.", ".........XXXX.X.XXX..X.X.", "XXX.XX.XX.X.XX....X.XX..X", "X.X.X.X.X..X....X.....X..", ".....X.X..XX.XXX..XXXXXX.", "XXX.....XX....XXXX.XXX..X", "XXXXX..XXXXX...X.XX..X...", ".X..XXXXXX....X..XX...XX.", ".....XXX.X.....X.X..X.X.X", "X.X..XX....X.XXX.XXXX.XXX", "X...X..X.....XXXXXXXX..XX", "XXX..X.X...X.X..XX.X.....", "X....X..XXXXXX.X.X.XXX..X", "XX..XX.XX...XX..XXXX.X.XX", "..X.X.X.....XX...X....XXX", "....X.X....XXXX..X..XX.X.", "....X.......X..X.X.X..X.X", "...X.XXXX..XXXXX...X.XX..", "..X.XXXXX.XXX..X.XXXXX.X.", "XXXX...XXX.XXX.X.XXX.X..X", ".......X..X..XXXXXX..X.X.", ".X....XXXX.XXXXX..X.....X", ".X...X.XX..X.XXX.XXX.XX..", "X.X..XX.X..X..X..XXXXX.XX", "XXXXXX.XXXXX.X..X.XX.X...", ".X....XXXX..X...X.......X", "X.XX...X..X.X.....X.....X", "X.X...XXX.X.X.X.XXX.XX..X", ".XXXX...X.X.X.XX.XX.XXX.X", ".X.X.X..XX..XX...X...X...", "XXXXXXX..XXXX....X.....XX", ".XXX.....XX...X.X.X.XXX..", "..X....X.X..XXXXX...XXXXX"};
    vector<int> prizes = {2304, 3637, 4920, 1207, 4836, 1410, 7065, 4748, 6251, 2377, 8829, 1782, 8139, 7835, 50, 1835, 740, 6822, 3034, 561, 7894, 284, 5460, 3615, 2324, 5028, 1305, 9658, 2840, 496, 9765, 3055, 5622, 5791, 3127, 6843, 1173, 1235, 890, 7523, 6763, 21, 1892, 6945, 8920, 567, 2815, 3949, 2839, 5595};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 165.45714285714286;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> card = {46, 74, 72, 68, 23, 31, 51, 75, 43, 33, 20, 59, 63, 62, 44, 29, 25, 40, 19, 16, 1, 47, 10, 49, 36};
    vector<int> balls = {13, 26, 65, 11, 46, 70, 29, 39, 6, 14, 30, 75, 55, 33, 57, 47, 22, 32, 20, 3, 40, 37, 43, 36, 28, 48, 42, 12, 53, 54, 60, 31, 64, 23, 63, 10, 72, 35, 8, 15};
    vector<string> patterns = {"X.XX.XXXXXXX..X.X.XX..X..", ".....X.XX.....XXXX..XX...", "........XXX...XX...XX.X.X", ".X.XXX.XX.XXXX.XX.XX.X.XX", "...X.X..XXXXXX.XX.X..X...", "...XXXXX.X..XXXXX.....X.X", ".X.X..XX.X..X....X.X...X.", "XXXXX..X.X....X.XXXXX..X.", "XX....XXXXX..X.....XXXX..", "X.X.XX...X.X.XXXX.X....X.", ".XXX.XXXX.XX....XX.XXX.X.", ".XXX.X...X.X.XXX..X......", "X.XXXXXX..X...........XX.", ".X.XX..X.X.X.XX.X..X..XX.", ".XXXX...X.XXXXXX..XX.....", ".XX...XXXX..X..XXXX.X...X", ".....X.X.XX..XXXX.X.XX...", "XXXX.X.........X.XXXX.X.X", "...X.XX.XXXXX....XXXXX...", "XX..X........XXXXX..XXXXX", "XXX....XX.X...X..X.XX.X.X", ".XX.X..XXXXXXXX..X..XX..X", "....X..XX.......XX.XXX.XX", "XX..XXX...........X.XX.XX", ".X..XXX.XX.XX.....X...X.X", "X..XXXX.....XX.XX..X....X", "...X.XXXX.X..XX.XX.XXX.X.", ".XXX....X.XXXXXXXX..XX...", "X.XXX.X...XXXXXX.X....XX.", "X..X.X..XXXX..XX.XX..XXX.", "XXXXX...X.XX.X..XX.XXX.X.", ".X..XXXX.X..X..XXX.XX..XX", "XX.....X...XX..XXX.X.X...", "X..XXXX..X.X.X..XX..XXX.X", ".XX...XX..X...X....XX.X.X", "...X.XX....XXXX......XX..", "X..X.X.XX...X.XXXX.XXX.XX", "XXXXXX.X.XX..XXXXX...XXX.", ".XXXXX..X.X..XXX.X...X.XX", "XXXXX..XXX.X.....XXX..X.X", "X...X.XXXXX.XX.XX..X.XXX.", "XXXXXXX....XX..X.X...XX.X", "..X.XX....XX...X.XX.....X", "X.X...XXX...X.XX.XXX....X", "XX.XXXX...XXXXXX.XXX.X.XX", "XXX.XXX....XX.XXX.XXX...X", ".X...X....XXX.X.....X..X.", "X..XX.XX.XXX.X.X.XXX.X..X", "XX..X.X.XX..X......XX..X.", "XXXXX.XXX.XX..X...X.XXXX."};
    vector<int> prizes = {9720, 4472, 396, 8916, 3317, 5654, 3830, 8534, 1927, 2164, 8880, 9142, 5447, 3914, 1868, 3798, 6058, 4791, 2831, 8777, 9401, 868, 2659, 5397, 4881, 1028, 2087, 2440, 8939, 4255, 5465, 6409, 8095, 2224, 7, 8272, 948, 4219, 9426, 6697, 8283, 8562, 8389, 437, 4285, 3098, 1589, 338, 338, 1242};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> card = {57, 4, 61, 13, 16, 20, 10, 34, 44, 36, 1, 53, 11, 30, 68, 26, 32, 58, 2, 42, 73, 7, 9, 8, 45};
    vector<int> balls = {68, 24, 33, 38, 2, 47, 30, 37, 5, 31, 4, 75, 50, 34, 52, 29, 22, 36, 67, 65, 57, 42, 51, 13, 19, 69, 71, 35, 46, 6, 63, 54, 26, 12, 49, 72, 17, 55, 16, 32};
    vector<string> patterns = {".X...X.XX.X.........XX..X", ".XX.XXXXXX.X.X.X.X...X.XX", ".XXX..X..XXX.XX...X....XX", "X.XXXXXX.X..XXX.XXXXX..XX", ".X....XX.X.XX.XX....XXX.X", "X..X..XXXXXXXXXXX.XX.X...", "X.X..X.XXX..X.X.X.X..X.XX", "XXXX..XXX...X.XX....X.X..", ".XX.XXXX.XX.XX..XX..XXXX.", "XX.X......XXX..X...XXX.XX", "...X.X....XX.XX.XXXX.XX..", "X.XX....X.XX..XX..XXXX..X", "X......XXX.X.X...XXXXX.X.", ".XXX.XXX.XX...XXX..X.....", "XXX........X..X.XXXX.XXXX", "........X...XXXXXXXX..X..", "X.X..XXXX..X.XX..X.X...X.", "..X.XXX.XXX......XX.X...X", "..XXXXX.X.X..X...XX..XX..", "...X.X.XX..X.XX....XXX.XX", "..X.XXXX....X.X.X..XXX..X", "XX.X..X.XX......X.X.X...X", ".X.X.XXX.X..X.XX...X....X", "X..X.XX...X.XX..X.XX...X.", "XXX.X.XXXX....XXX...XX..X", "X.X..X...XX.XX..XXXX.XXXX", "XX...X..X.XX.X..X....X.XX", "X...X..X.XXXX..X....X.XXX", "XX.X...XXX...X..X.XXXXXX.", "..X.XXXX.X.XXXX.XXXXX...X", "...XXXXX.X....XX.XX...XX.", "XXX.X..XX...XX..XXX.X.XXX", "..XXXX...XX..X.XXXXXXXX..", "...X..X..XXXXXXX.XXXXXX..", "....XXX....XX....XXXXXX..", "X..X.X.X.XX..X...XXXXXX.X", ".XXXXX..XXX.X.XXX.XXX.XX.", ".XX.X..X.X.XX...XX.X.....", ".XX.X..XXXX.X...XXX.X.X.X", "XX....X....XX.XX........X", "..XX..X..X.X..XXX.XXXXX..", "...XX.XXX.XX.X.X.XXX.XX.X", "XX.......X.XX.XX..XX.X.X.", "XXXXX....X.XXXXX..X...XXX", "XXX.XXXXXXX..X......X...X", "....X.X.X.XX.....XX.XXXX.", "X..X...XXXXX...XXXX.XX...", "X...X.....XX..XX.XXXX.X..", ".X.X....X.X...XXXXXXX....", "XX..X.XXXXXX.XX.X.X..XXX."};
    vector<int> prizes = {5567, 9045, 8583, 5846, 2665, 4669, 5561, 602, 2346, 1772, 114, 5824, 6185, 6080, 2421, 8043, 2521, 5599, 2830, 122, 1453, 4366, 9395, 1483, 9551, 6703, 1737, 1419, 2706, 618, 9643, 2768, 9446, 4719, 3862, 8059, 8509, 666, 6648, 3256, 396, 8761, 827, 7224, 1619, 9306, 8508, 4337, 736, 9672};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> card = {64, 67, 61, 19, 71, 36, 24, 68, 57, 26, 58, 18, 13, 4, 35, 20, 37, 40, 15, 2, 46, 11, 32, 6, 22};
    vector<int> balls = {40, 45, 38, 62, 31, 16, 53, 17, 43, 26, 72, 29, 4, 9, 32, 33, 36, 69, 66, 10, 75, 15, 58, 52, 51, 48, 67, 11, 64, 34, 13, 30, 35, 61, 12, 25, 73, 7, 57, 49};
    vector<string> patterns = {"....X.XX..XX.XXX..XX.X.XX", "...XXXX.XX.X...XX........", ".XX...X..X.X...XXX.XXXX..", ".XXXXX.X..X..X...XXX....X", "XX....X.X.XX.XX.XX.X.XX.X", ".XXX.X.XX..X....XXXX..XX.", "XX...X.XXXXXXX....X..X.XX", "X.XX..X..X.XX.X...X.X....", "XXXXXXX..X....XX......XXX", "XX...XX.X......XX.X.XX.XX", "X.XX..XXXX...XXX.X.XXXX..", "...XX...XXXX.X....XX.XXXX", "X.XX.X.X.XX..XXX.XX.X..X.", "X..X...XXX.X.X.XX.XXXXX..", "XXXX..XX.X.X.XX.X.X..XXXX", "..XXXXXX.X.XX...X..X.X.XX", ".X.....XX..X.XXXX....XX.X", ".X.X..X..XXX..X.X.....X.X", "XX.XXXXXXX.XX..XXX...X.X.", ".XX.X.XXXX...X..X..XX.XX.", ".X.XXX.XXXXXXXX..X..XXX.X", "X...X.X..X....XXXX.XXXX.X", "X.XXXX...XXX.XX.X.XX.XX.X", ".X..X.XX..X..X.X.X...XXXX", "..XXXX.XXX...X..X..XXXXX.", ".X.X..X..XX.X..XX...X.X.X", ".X...XX.XX.X.XX....XXX.XX", ".XXX.X.X...XXX.XX.X.XXXX.", "X.XXX.XXXXXXX.X...XX.X.XX", ".....XX..X..X.X...X..XX.X", "X....X.XXXX..X..XXX.XXX..", "..X.X..X.X.XXXX..X.X.XXX.", "X.XXX...XX..X..XX.....XX.", ".XXX..X.XXX..XX....XX.XXX", "...XX..X.X..X..X.XX.XX...", "...X....X..XXXX.....XXX.X", "XXX.XXX.X.X..XXXX.X....X.", "XXX..XXX...X...X.XXXXXXXX", ".X.XX.XXXX...XXX...XX..XX", ".XX.X..XXXX.XXX.XXX.X....", "XXX...XXX.XX....X.......X", "......X..X.X....XX.X.X...", "XXXXX..X..XXX.X.X.XXXX.X.", "..XXXX.XX.X.XXX.X...XX...", "....XXXXX.XX..X.XX.XXX.XX", ".X.XXX..X.XXXXX....XX.XX.", "X.......X.XX.XXX..X...XXX", ".X.XX.X.X.X...XX.X..XX...", "..XXX..XX....X..XX.XX.X..", "XX...X.XXXX..X.X.XX..X..X"};
    vector<int> prizes = {9687, 7105, 3762, 2675, 3906, 956, 9369, 291, 6867, 3901, 9632, 6786, 2428, 9063, 8076, 795, 2355, 4095, 2513, 827, 1070, 5648, 1930, 7592, 859, 4912, 8392, 8580, 6467, 9619, 704, 3746, 5135, 7582, 3822, 1544, 7899, 1806, 5710, 773, 2843, 3130, 6044, 6853, 2908, 4902, 4186, 7539, 6460, 2442};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
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
    vector<int> card = {3, 61, 13, 54, 71, 15, 75, 69, 17, 40, 57, 30, 7, 39, 4, 2, 24, 10, 32, 38, 1, 59, 29, 22, 53};
    vector<int> balls = {52, 58, 60, 48, 10, 14, 26, 70, 53, 55, 16, 36, 45, 64, 21, 61, 32, 42, 5, 23, 68, 39, 74, 47, 72, 69, 13, 30, 9, 22, 34, 11, 67, 15, 28, 50, 27, 56, 35, 19};
    vector<string> patterns = {".X..XX...XXXX...XXX..XXXX", "XXX..X..X.X...XX...XXX..X", "..X.X...X.X.XX..X...X....", ".X.X......XXXX..XX.X.X..X", "X.XXX.XXXX..XX.X.X....X.X", "X.XXX.X.XXX.X..X.X.XXXXXX", "...X.X..X...XX.......XX.X", ".XXX..X.X.X..X..XXXXXX.X.", "..XX.XX.X.X.X.XX.X.XX.X..", "X.XXX.X....X...XX.X.XX...", "..XX.....X.XXX.X.XX..X.X.", "X.XX..XXX...XXXXXXX...XX.", ".XXX.X..XX.X.X.XXXX.XXX..", "XX.XXX..X..X.XXX..XXXXXXX", "X.XX..X......X.X....X.XX.", "X..XX..XXX..XXX.XXXX...XX", "..X...XXX.X..X.XXX..XX.X.", "X.X...XXXX.X.XX..X.X..X.X", "XXXXXXXXX.XX..X...X..XXXX", "X..X...XXXXXX..XXX.XX..X.", "XXXXX..X....XXXX...X..X.X", "XX....X..XXX.X.X.X..X.X..", "XX..X.XXXX.X..X.XXX.XXXX.", "..X..X.X...X.XX.XXX.XX..X", "XX...XX.X...X.X..X....X.X", "X.X.X.XXX..XXX.XX..XXX.XX", ".X.XX.......X..XX.XXX..XX", "...XXX.XXX..XXXX.XX...XX.", "..X.......XX..X......X.X.", "X..X....XX.XXX.X.X.X.X..X", ".XXX.XXXXX....XXXXX.X.X.X", "...XXXXX.X.........X.XX.X", "..X.XXXX.X.XXXX..X...X..X", "XXXXX...XX.X.XXX.XX.XXX.X", ".X.XXXXXX...X.X..XX.X.XXX", "X.X.X..X..XX.XX.X.X.X..XX", ".XXXX....X..XX.X.XXXXXXXX", "X.X.X..XXX.X..XX...XXX.X.", "XXX....XX.X.X...XXX.X.X.X", "..XXXXXX.X...X.XXXXXXX...", "..XX..XX..X..XXX..XX.XXXX", "XXX..XX......XXXXXXXX.X.X", "XX.XX.X...X...XX.X.X.X.X.", ".....X..XXXXXXX...XXX.XXX", "X..X..X.XX.XX.XXXXX..XX.X", "...XXX.X.XXXX.XXXX..X..X.", ".X..X.....X.X....XXXXX.X.", ".X.XX..X.XXXXX.XX.X.....X", "XXXXXXXXXXX..X.X..X..XX..", "XX..X..X.XX....X.XXX.XXX."};
    vector<int> prizes = {4142, 6124, 2048, 2421, 5990, 7657, 8783, 4735, 4907, 8643, 2663, 6104, 1481, 3093, 5350, 3178, 4665, 4922, 6862, 220, 2144, 9405, 1228, 5355, 7624, 8017, 760, 4429, 3123, 3683, 8012, 5570, 2364, 6653, 7561, 8843, 5697, 5724, 4967, 9616, 4318, 3941, 4171, 1708, 219, 723, 333, 4508, 4266, 4036};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> card = {58, 29, 54, 49, 48, 43, 67, 32, 56, 62, 21, 16, 72, 41, 57, 66, 27, 36, 71, 44, 46, 50, 42, 31, 18};
    vector<int> balls = {37, 45, 18, 73, 38, 65, 64, 9, 10, 50, 20, 62, 30, 12, 63, 75, 56, 58, 11, 28, 29, 2, 16, 66, 8, 59, 42, 54, 48, 36, 1, 71, 46, 21, 40, 44, 51, 32, 41, 5};
    vector<string> patterns = {"XXX..X...XXXXXX.XX..XXXX.", "X.X..X......X....X..X...X", "X..XX......X.X..XXXXX....", "XXX..X.XX...X.X.XXXX.X.XX", "...X...XX.X.XXXXXX...X.X.", "..X.....XX.XX...XX.X.X...", "XXXX.XX.X.X.X....X.X.....", "X...X.XXXX...X.XXX...X...", "..X.XXXXX..X.XXXX....XX.X", "XXXX.XX.XX..X.X.X..XXXXXX", "XXX.XX...XX....XXXXX.X.X.", "..X.X..XXXX.XX.X.X.XXX.XX", "XX.X...X..XXX.X.XX.XXX.XX", "XX.XX......XXXXXX.X.X.X..", "XXXXX.....XX.XXX...XX...X", ".....XXXXXX.XX...X.X.X..X", ".XX.X..XX.XXXX.....X...X.", "XXXX....XXXX.X..X......X.", "X.X..XXX.X..XX.X.X..XXX..", ".XX.XX.X.X.XX..X.X...XX..", "XX.XX.XXX...XX...XXX.X..X", "XX.XXXXX.X.XX.XX.XX.X.XX.", "XXXX....XXXX.X.X...XXX...", ".XXXXXXX...X.XX..XX..X...", "XX..X.X...X.XXX.X..X...XX", "XX...X.X.X.XX.X..X..XXXX.", "XXX.X.XX....X.XX.X..X...X", "XXXXXXX..X.X...X.XXXXXXX.", "XX.XXXX.X..X...XXXXX.XX..", ".XX...X.X...X...XX.X.X.XX", "X.XX...X.XX.X.XXX....XX..", "..X.XX..X..XXX.XXX..XXXXX", ".XXX...X.XXX..X.X.X.X..XX", "X.XXX.XXXXXXXXXXXXX.X..X.", ".XX....XXXX..X.XXXX.XX...", "..XXXXXX.X...XXXXXXX.XXXX", "X...X..XX..XX..X.XX....X.", "XXXXXX.XX.XX.XX..XXXX.XX.", ".....X.X..XX..X..XXXXX.XX", "X..XXXXX.X....X.X.X.X.X.X", "XXX...XX.XXXX.XXXXXXXXX.X", "XX..XX..X.XX.X....X...XXX", "XX...XXXXX.XXX.X..X..XXX.", "XX....XXX.XXXXX.XXXXX...X", "X.....X.XXXXXXX.....XXX..", ".X..X...XXX.XX...X.X.XXX.", "X..XX..XX.X...XXX...XXXX.", "X.XXX...X.X..........X..X", "X.X.X..XX.XXX...XXX.X.X..", "...X.XX..X.X.X.X.XXXX...."};
    vector<int> prizes = {3681, 7948, 7796, 275, 5573, 4847, 2687, 149, 2382, 7205, 7981, 3931, 7731, 8950, 4952, 7330, 2264, 938, 1383, 181, 2236, 558, 689, 9998, 7589, 1402, 1651, 43, 7369, 1921, 6353, 894, 638, 4280, 9418, 455, 4117, 2954, 8639, 8261, 5954, 6859, 4196, 267, 3311, 284, 1832, 9536, 2690, 5166};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 561.2285714285715;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> card = {18, 46, 34, 25, 63, 36, 47, 39, 70, 22, 37, 33, 55, 54, 1, 38, 67, 32, 74, 75, 15, 3, 6, 9, 68};
    vector<int> balls = {68, 7, 61, 2, 39, 45, 42, 60, 37, 27, 41, 65, 6, 43, 9, 8, 63, 1, 29, 40, 24, 58, 52, 21, 18, 22, 47, 15, 33, 55, 67, 20, 17, 53, 66, 14, 56, 32, 28, 13};
    vector<string> patterns = {".X...XXXXX.X.X.X.X...X..X", "X..XX.XXXX.XXXXX.XX....XX", "XXX.XXX..X.X.XXXX..XX...X", "..X..XX.XXXX..X.X.X....XX", "..X..XXXX..X.XXX.XX..X.XX", "..X..X..XXXX...X......XXX", ".X..XX...XX.XX..XX..X...X", "X.X.....X.X..XX.....X..X.", ".X.X.X.X.X.XXX.XXXXX..XX.", "XX...XXX..XX....X..X.X.XX", "X..X...XX..XXXXXX..XXXXXX", "X..X...XX.X.XXXXX..X.XXX.", ".XX.XX.XXXX.XXX..XX.X.XX.", "X.XX..XX.X...XX.XX..X.X..", "XX.XXX..X.XXXXXX.XX.XXXX.", "...XX.XXX.X.X..XXXX.XX.X.", "....X.X.XX......X.X..X...", ".XXX..X.XX.....X......X.X", ".X...XX.XXX.XXX.XXXX..XXX", "X...X..........XX.X..X..X", "..X.XX.X.XX..X.XX.XXX.XX.", ".X.XXX.XX..XX...X...X...X", ".X.X.XXX.XX.X.XX.X.XX...X", "X.XXXX.X...XX.XXX.X.X...X", ".X.XX..XX..X.X.X.....X...", "X.X....X.XX.X.XXXX..XXX..", "XX..X.X.XXXX....XXX.....X", "XX....XX.X.X..X.X.X.XX.XX", "..X.XX..X.X......XX.XXX..", "X.XXX.X.XX..XX.....X..X.X", "...X.XX......XX.X...XXXXX", "XXXXX........X.XX..XXXXX.", "XX.XX..X....XX....XX.....", "..X....XXXX...XX.X.X...X.", ".XX....X.XXXX.X..X.X.XX.X", ".....XX..X.XXXX..X..XX...", "XXXX.XX.......XX....XX...", "..X......XX...X.XXX......", "X..XX..XXX..X.XX.XX...X.X", "XX...XX.XXX..X...XXX...XX", "X.XXX..XXX.X.XX...XX.....", "....XXX.XX...X....XX.XXXX", "...XXXXX....X..X.X.XXX...", ".....X..XXX.X..X...X.XX..", ".X.XXXXX.....X.XX....XXX.", "XXXX....XX.X....X.X.X....", "X.X.XXX.XX.XXX.X.X......X", "X..X....XX..XXXX.XX.XXX.X", "..XX..X..X......XXXX.XX.X", ".XX.....XX..XX.XX..XXXXX."};
    vector<int> prizes = {5531, 2155, 8465, 9598, 3807, 1184, 3533, 6572, 9630, 252, 1954, 1948, 6253, 5338, 1732, 5825, 4665, 8792, 551, 548, 5267, 5169, 8316, 1004, 1320, 523, 1884, 6414, 6982, 2401, 1113, 5926, 6380, 6083, 1235, 7639, 2722, 8141, 1593, 591, 8793, 2245, 209, 431, 2308, 4009, 2698, 9353, 4695, 9161};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
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
    vector<int> card = {65, 12, 72, 52, 66, 24, 15, 71, 55, 21, 14, 29, 10, 19, 13, 5, 50, 68, 60, 42, 48, 62, 70, 39, 36};
    vector<int> balls = {35, 60, 47, 43, 64, 41, 46, 12, 26, 9, 21, 63, 49, 34, 5, 61, 51, 52, 16, 32, 62, 19, 58, 30, 24, 6, 31, 39, 37, 66, 70, 25, 13, 50, 75, 27, 2, 42, 59, 4};
    vector<string> patterns = {"X.XX.....X.X..X...X.X..XX", "X...X.XX.XXX..XX.XXXX..X.", "X.XXX.XX.X.........X...XX", "X....XXXXXX..X...X.XXX.X.", "X.X.XXX.X..X..XXXXX..X...", ".XX..X..XX...X.X....X...X", "X...XX.XXXXXXX..X.X......", "XX..X.XX.XX.XX..X...XXX.X", ".X.X..X.X..X..XXXX.XX.X.X", "XXX.XX.X..X..X..X.X..X.X.", "..X.X.X.X..XXX.X.XXXX..XX", "XXX..X.X..XX...XXXXXX..X.", "X.X..X.XX..X...X...XXXX.X", "X.XX...X.XX.XXX.X.XXXX..X", ".X.X.X.XXXX..XX.X.XXXXXXX", "...X....X..XX..XX....XXX.", "...XX...XX...XX.XXXX.....", ".X.X..X..X....X...X.X.XXX", "X..XXXXX..X.XX...XX..XXX.", "X.X..X.X.X.XXXXXXX.XX...X", "..X.X.X..X.XX...X.X...XXX", "...X...XXX.X.XX.XXX.X.XXX", "..X.X.X.XX.XX..XX.XX.XXX.", "X...XXXXX...X.XX.XX..X.XX", ".XXXX..X....X.XX.XXX.XX.X", ".XX.XX....XX.X...XX..X...", "X....X.XX.X..XXX.X.X.X.X.", "X.X....XXXX...X...XX.X..X", ".........X.X..XXX...XXXX.", "X...XXXX......X...XXX...X", ".X...XX.X..X.X.XX.X..XX.X", "....XXXX.XX.XX.XX.X...X..", "XXX.XX..X.XXXXXXXX.....X.", "X.XX..XXXXX...XXX...XXXXX", "....X.XX.X..XXX..X..X..X.", "XXX.XX...XXX...X.XX.X.XX.", "XX...X...X.X..XXXXXXX..X.", "X....XX.XX.X.X.X...XXXXX.", ".X.X..X...XXXXXXX.XXX....", "XXXX.XXX.......X..X...X..", "..X.XXX.XX.X..X..XX.XX..X", "..X.XXXXX.X..X.X.XX...X..", "...X.XX.X.XXX....X.XX...X", "X.XX.X..X..X.X.X...XX.XXX", "XX...XX.XX..XX.XXX..XXX..", "X.X......X.XX..XXX..X.X.X", "XX.XX.X..X.X.X..XXXXXXXXX", "..XX..XXXX.XX.X.X.XX.X.X.", ".X..XXX.X...XX..X.XXX.X..", "XXXX....X..X.XXX...XXX.XX"};
    vector<int> prizes = {7495, 1444, 52, 4941, 4441, 2606, 2981, 3948, 1668, 197, 181, 9054, 8497, 9217, 2458, 197, 9535, 4962, 6787, 7457, 7722, 3301, 5741, 2360, 3903, 9044, 4777, 8027, 7710, 9932, 4366, 2807, 5217, 5235, 7227, 7801, 9836, 5849, 4272, 4166, 1302, 7214, 7805, 5498, 6439, 3013, 4522, 8879, 5042, 8647};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> card = {19};
    vector<int> balls = {34, 28, 33, 43, 49, 60, 62, 66, 67, 9, 27, 39, 4, 69, 59, 8, 26, 31, 41, 20, 51, 25, 16, 45, 24, 36, 3, 46, 52, 53, 2, 74, 35, 63, 6, 47, 1, 55, 18, 21};
    vector<string> patterns = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    vector<int> prizes = {6414, 1333, 8415, 3152, 2865, 6737, 891, 328, 4609, 2121, 2663, 5936, 4795, 1036, 1999, 303, 9126, 2239, 3898, 4594, 8624, 6410, 1293, 8524, 2668, 6834, 1980, 3214, 3067, 2360, 9138, 343, 7068, 6927, 2610, 7310, 5135, 2468, 3455, 8926, 6958, 7305, 5993, 3665, 1501, 6706, 3706, 9456, 1168, 1715};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 6285.171428571427;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> card = {1};
    vector<int> balls = {33};
    vector<string> patterns = {"X"};
    vector<int> prizes = {5689};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 76.87837837837837;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> card = {55};
    vector<int> balls = {5};
    vector<string> patterns = {"X"};
    vector<int> prizes = {6185};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 83.58108108108108;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> card = {47};
    vector<int> balls = {7, 63, 16, 34, 42, 58, 10, 67, 61, 73, 59, 60, 11, 2, 18, 25, 52, 28, 62, 24, 13, 74, 64, 20, 51, 27, 45, 3, 41, 23, 30, 37, 75, 39, 9, 40, 1, 47, 46, 36};
    vector<string> patterns = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    vector<int> prizes = {3116, 9873, 8218, 8259, 1417, 1873, 9916, 3126, 90, 1675, 4813, 5508, 6857, 6360, 2642, 735, 3004, 7918, 1386, 2778, 926, 3204, 5343, 3305, 3869, 759, 3226, 620, 9334, 3820, 9388, 1574, 4685, 5238, 4682, 2658, 6274, 6571, 9624, 3336, 9072, 9650, 6362, 3372, 4936, 767, 855, 3383, 2286, 850};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> card = {14, 49, 73, 75, 1, 43, 60, 52, 9, 3};
    vector<int> balls = {9, 59, 3, 2, 7, 50, 20, 55, 43, 31, 52, 6, 58, 66, 44, 32, 38, 23, 24, 51, 22, 42, 13, 35, 33, 46, 74, 27, 54, 47, 67, 73, 26, 69, 61, 30, 19, 25, 49, 16};
    vector<string> patterns = {".X...X...."};
    vector<int> prizes = {4683};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> card = {25};
    vector<int> balls = {51, 13, 9, 7, 27, 75, 30, 50, 49, 42, 62, 20, 22, 48, 8, 41, 72, 63, 4, 35, 58, 28, 69, 39, 16, 25, 11, 2, 19, 23, 12, 40, 37, 5, 67, 29, 38, 3, 70, 44};
    vector<string> patterns = {"X"};
    vector<int> prizes = {2505};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> card = {35, 75, 41, 62, 52, 72, 18, 38, 29, 33, 45, 69, 68, 32, 70, 16, 11, 3, 65, 44, 63, 12, 57, 34, 39};
    vector<int> balls = {52};
    vector<string> patterns = {".X.....X.X.X..X.XX.....X.", "......XXXX..XXXXX..XXXXX.", "X.XX.XX....XX.X.XX.X....X", "XXX..XX....X....XXXX....X", ".X..X....X...X..XXX.XXXXX", "X.X..X..XX.X.XX....X..X..", "XX.X.X.XX.X..X.XXX....XXX", ".X.XX.XXXXX...X.XX..XX.XX", "X..XXX.XX..XXXX.XXX.XX.X.", "X..X.X......X..X.X..X.XXX", "..X..X..XX.X.....X...X..X", "..XXXX.X.XX...X.X....XXX.", ".XXX.X..XX.X...X.X......X", "X....XX..X.XX.XXXXX.X...X", "XX...XXX..X.XX.XXX.X.XX.X", "XX..X...X.X.X...X.XXX..XX", "..XX....XX.X.XX..XX.X...X", "X....X..XX..XXX..XX.X....", "XX...X.XX...XXX......X..X", "X.X.X.X.X..X..XXX..X.X.XX", ".XXXXXX.XXXXX.X.XXX..XX..", "........XXX..XXXX..XXX..X", "XX..X...X.X....XXXXX..X..", "XX.....XXX..XXXXX..X...X.", "..X....XXX.XXX..X...XX.XX", "XXX..XXX..X.XXX.X.....X..", "..X.X..XXX.X...X....XX.X.", "XXXXX...X.XX.X...XX..XXX.", "XXXX..X..XX.XXX.XXXX.X.XX", "X...X.X..X...XX..XX.X..X.", ".XX.XX..X...X....XXX..X.X", "XX.XX..XXXX...X....X.X..X", "X..XX...XXX.XXX..XXXX..X.", "XXX....XXX...XXX....X.X.X", "XXX.XXXX.XX.X.X..X.X..XXX", "X..X.XXX..X..X.XX..XXX...", ".XX.XX.XX.XXXX.XXXX..XX.X", "XXXXXXXX...XX.X.XXX.XXXXX", "X..XXX.XX.X...XXX.XX...X.", "X.XX..X....XXX..X.XXXX.XX", ".XXXX.X.XXX.XXXX.....X.XX", "..XX.XXXX.X.XX.XXX..XX.XX", "X.X..X...XXXXX.XX.XXX.X..", "XX.X.X.X.X.XX.X.XXX...XX.", "X.XXXXX..X.XX.XX.X..XX..X", "X..XX.....XXXX.X..XXX.XXX", ".XXXXX.XX.X.XXX..XX.XXXX.", ".XXXXXX....X..XXX.X.XX.XX", "X..X....X....XXX.......X.", "X.X...XX.XXX..XXX....XXXX"};
    vector<int> prizes = {6814, 4356, 3837, 2305, 714, 646, 1980, 6059, 8327, 9835, 4677, 2584, 5735, 8625, 8910, 8998, 1010, 7519, 8616, 6147, 8958, 467, 4465, 8050, 7328, 7167, 4923, 7681, 6514, 9524, 6925, 3544, 2038, 2989, 5080, 7188, 6297, 7327, 4349, 4404, 3963, 8767, 637, 5172, 718, 7029, 1489, 8041, 1421, 2383};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> card = {55, 63, 15, 20, 37, 17, 46, 21, 12, 44, 14, 74, 36, 24, 23, 18, 58, 7, 33, 3, 66, 51, 57, 13, 19};
    vector<int> balls = {29, 30};
    vector<string> patterns = {".X.XXX.X.XX.X.X..XXX.XXXX", "X..XX....X.XXXXXXX..XX..X", "XXXX.XXXXXXXX.XXX.XX.X.X.", "X.X..XX.X.X.....XXXXXX.XX", ".X...X..X....X..XXXXX..X.", "X..XX..XXX..XXX.X..X.XXXX", "XX.XXX..XX.X.X.XX..X.XX..", "XXX.XX.XXXXX.X.....XX.XX.", "X..XXXX.X..XX.X.X........", ".X.X.....X.X.XXX.XXX...XX", "X.......X....XXXXXXX.XXXX", ".X...X.....X.X.....X.X...", "..X..X..XXX..XXXXXX....X.", "XXX.XX..X..X.XXXX..X.X.XX", ".XX.XX.X.....X..XXX.X.X.X", "X.XX..X.XX.X.....XXX.X.XX", "XX..X.....X.XX.XX.XXX.XX.", "XXX.X.XXX..XXX..XX.X.X.X.", "X..X..X.XXXX.XX.XXX.X..X.", "X...X.XX.......XX.....XXX", "XXX.X...XXXXXX..XX....XXX", "..XX.X.XXX.X.X.XXXX..XX..", ".X..X..XX..X.X..XXXXXX...", ".X....XX...X.XXXX....XX.X", ".XXXXX..XXXXX.X.X.X.XX...", "XX.X..X....X...XXXXXX....", "X.XXXX.....XX......X.X...", ".X.X.XXXX...XXXXX.X...XX.", ".X.....X.X.XX.X....X.X...", ".XXXXX.....X.X.X.XXXXX...", "XXX..XXX...XXXXXX.X....X.", ".XX...XX...XXX..X.XXX.X.X", ".X..XX.XX.X..XX..X.XX..XX", "XX...XX..XX...X...X.XXX.X", "X..XXXXX.XXX.XXXX.X...XXX", "XXXXXX....XX.XXXXX.XXX..X", ".X.XXXXXXX.....X...X.X..X", ".XX..XXXX..X..X...XXXXXX.", ".XXXX..XX....X.XXXXX..X.X", "..XX.X.XX..X...XXX.X.X.XX", "X..XXX...XXXXX........X.X", "XXXX..X...X.XX..XXX.XX..X", ".XX.XXXXXXX...X..XX.X...X", "..X...XX.XX.X..XX..XX..XX", "XX..XX.X.XX.....XX..X.X..", ".....X..X...XX..XX.X...XX", "XX.XXXX..X..XX....XX.X.XX", "X.XXX.X..XXX....X..XX.X.X", "XXX..XX..XX.XXXXXXX.....X", "XXXX.X.X...X.XXX..X.XXXXX"};
    vector<int> prizes = {4544, 9373, 6493, 7706, 9483, 9344, 84, 9580, 3817, 8471, 1115, 1318, 9280, 9906, 4224, 9434, 522, 3680, 8210, 3661, 5546, 7175, 6978, 696, 3874, 1508, 2379, 688, 3284, 3088, 1264, 8007, 8248, 4100, 6038, 2628, 8766, 1790, 2994, 5809, 5941, 5220, 5747, 8371, 4235, 1064, 9570, 7311, 8277, 9885};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> card = {12, 2, 31, 56, 9, 55, 20, 25, 49, 48, 74, 59, 71, 43, 32, 1, 70, 39, 5, 67, 46, 11, 29, 69, 42};
    vector<int> balls = {44, 49, 72};
    vector<string> patterns = {"X.XXXX..X.XX.X......X.XXX", "..XX.XXXX....XXXX..XX.X.X", "..X.XX.X.XXXX....XXXX.XX.", "..XXXX..X....XXXXX..X.X..", ".XXX.X..X.X.XX.X..XX..XXX", ".XXXXX.XXXX..X.XXX..XX.X.", "X...XX..X..X.XX...XX.X.XX", ".XXX.X.XXX.X...XX...X...X", "X...X.X..XX.X...X.XX..X.X", ".X..X.X...X.....X..XXXXXX", "...X...X.XXX...XX...X.XXX", ".XX...XX..X..XX.XXXXXXXX.", "X..X..XXX.....X...X......", "....XX.X...X..XX....XX...", ".XX.XX..X.XX.XXXXXXXXX..X", "X..XXX....X.XXXX..XXXX..X", "..X.XX.X..X..XXX....XX..X", "XXX.XXXXXX......X.XXXX.X.", ".XXXXX..X.X.XX.X.....X.X.", ".X.XX.XX.X...XX...XX...XX", "X.XX.X....XX.XX.X..X.....", ".X.X.X.XX.X.XX.....XXX.XX", ".XXX......X.XX..X..X.XXXX", ".XX..XXXXX..XX..X......X.", "X...XXX..XXXX..X.......X.", "X..XXXXX.XXX.X...X.XXX.X.", "XXX..XXX...X...X..X..X...", "X.XX.X...XXX.X.XXXXX...X.", "..X.XXX...X......X..XX.XX", "XXXXX..X..XX...X..X......", ".XX...XXX.XX.....XXX.XX..", "X.X.XXX..XX..X.X....XXXXX", "XXXX..X.XX..X.X.XXXXX..XX", ".X..XX.X.....XXX..X.X..X.", "XX...X...XXXX.X..XXX..XXX", "..XXXX.X.X.XX..XX.X.XX...", "XXXXX...X.XXX.X.....XX.XX", "X..X.X.X...X...XXX.XXXX.X", ".X.X.XX.X..XX.XX..XX.XX..", "X.X..XXXXX.X......XX..XX.", "XX.XXXXX..X.XXX.XX....X..", ".XXX.X.XX..XXX......XX...", "..X.X.XX....X.XXX.X.XXXXX", "..XX.XX.XX.X.X..XXX....XX", "XXXX.XX.X..X.XXX.X...X.XX", "..X..XX.......XX.XX..XX.X", "X.X.XXXXXXXX.XXX.XXXX..XX", "XX.XX..XXX.XXX...X.X..XXX", ".X.XXXX.X.X..XX...X...XX.", "XXX.....XXX.X....XXXXX.X."};
    vector<int> prizes = {3648, 7938, 2011, 7976, 7032, 3826, 901, 2266, 6810, 9931, 4216, 629, 7827, 2284, 7674, 2562, 1841, 596, 6137, 5097, 9292, 7021, 5901, 868, 6425, 5705, 5659, 5074, 2333, 3212, 1035, 2985, 4543, 7323, 8876, 8623, 8610, 2147, 1734, 5803, 8625, 5804, 880, 6007, 5372, 9855, 7379, 8137, 9026, 7815};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> card = {16, 22, 1, 40, 35, 54, 67, 11, 45, 47, 73, 20, 42, 2, 32, 33, 49, 6, 10, 19, 41, 51, 60, 64, 26};
    vector<int> balls = {5, 65, 4, 47, 64, 42, 7, 45, 74, 52, 58, 12, 26, 73, 11, 24, 75, 43, 35, 38, 69, 25, 20, 31, 72, 10, 22, 1, 34, 2};
    vector<string> patterns = {"XXXXXX..XXXX.XX..X.X.X.XX", "X.X...XX..X.XX.X.X.X..XXX", "....XXX.XXX..X.X.X.X...XX", "X.....X.X...XX.X....X..XX", "X.XX.X.XXXXXX.X.X.XXXXXXX", "X.XXX.XX.XXXX..X.XX.X.X.X", "XXX...X.X.XX.XX...XX.X...", "X.XX.XXXX..X.X.X.X..XXXX.", "X.XX...XXX...XXX.X.XXXXXX", "X..X.XXXXX...XXX.XXXX.XXX", "XXX..XXX.....XXXX.X.X.XXX", ".X.XX.XXXXX.X.....XX..X..", "X..XX...X....XX..X.XX.XXX", "...X..X....X..XXXXXX.....", "...XXX.X...X.XXXX..X.XXXX", ".XX..XXX.XX..X...X.XX.XXX", "..X.XX...X...X...X.XX.X.X", ".XXXXXX.XX..X.X.XX...X.X.", ".X..X....X.X...X...XXX.XX", ".XXX..X...X...XXX.X...XXX", "XX..X...X.XXX..X..X...XX.", "..XXXXX..XXX.X.X.X......X", "X...XX.XXXX.XXX.X...X.XX.", "XX.XXX.XX..XX..XXX..XXXX.", "X.X.X.XX.X..X.XXXX...XXXX", "..X.X.X.XX.X......X.X..X.", "X.XXX.X.XX.X..X.XX..X..XX", ".X.XX.X..X..X.X...XXXX.XX", "XXXX.XXX....XX.X.XX......", ".X...X...XX..X.X.XXXXXXXX", ".XXX..X.....X.X...X...XXX", "......X.X....X....XXX.XX.", "X..X.XX..X.X...XX..X.X..X", ".X....X.X.X.XXXXXXX.X.X.X", ".XX.XX..X...X.X.X..X...XX", ".XX.........X...X..XX..X.", ".XXXXXXXX.X.......X..XX..", "XXXXXXXX.XX.....X.X...XXX", "XXX.XX..XXXX.XXX.X.XXX.X.", "X.X..XX.X.........X.X.X.X", "XXX.XX.....XXXXX...XXXXXX", "X.XXXXX.X.XX.....X.X.X.X.", "........X..XX......X.XX..", ".XX..XXXXX...XXX..X...X.X", "XXX....XXXXX...X....XX..X", ".X..XX.XX.XXXX..X..X....X", "...XX.X.X.......XX.XX.X..", "XX.XXX..X.XXXX.XX.XXX..XX", "..XX.....XXXX.XX..XXXXXXX", "..X..XXX...X..X..X.X...X."};
    vector<int> prizes = {490, 8946, 5758, 8049, 6226, 1709, 9315, 2718, 8922, 5631, 2869, 9472, 1994, 1978, 7662, 1836, 9334, 3594, 3719, 3827, 4856, 9083, 560, 4519, 1261, 6793, 5090, 2030, 7651, 9447, 2211, 517, 3312, 4580, 1673, 3447, 5799, 5004, 8851, 110, 4455, 1259, 1253, 5881, 2437, 8407, 4178, 8287, 5771, 3118};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> card = {63, 68};
    vector<int> balls = {5, 23};
    vector<string> patterns = {".X", ".X"};
    vector<int> prizes = {1703, 6214};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 108.45205479452055;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> card = {71, 50, 53, 22, 40, 30, 24, 1, 25, 29, 42, 44, 34, 43, 14, 69, 39, 55, 5, 10, 64, 61, 74, 27, 51};
    vector<int> balls = {66, 1, 59, 74, 20, 43, 44, 8, 62, 68, 52, 40, 12, 36, 24, 72, 34, 15, 17, 45, 26, 13, 22, 48, 63};
    vector<string> patterns = {".XX.XX.X.XX.XX.X....XX...", "X..XX.XX..XXXX......XXX.X", "XX.X..XX....XX.X.XX.X.XX.", "..X.X.X..X.X.X...X..XX.X.", "XX..X.X..X....X...X.....X", "...XXXXXX.X.XXXXXXXX...X.", ".XXXXXX.X.X...X.......XXX", "X.XXXX.XXXXXXXXX.XXX.XX.X", "X.X..XXX.X..X..X...X.XX.X", ".X...X.X.X.XXX.XXXX.....X", ".XXX.X...XXXX.X...XXX.XXX", "X..X.X....X.X.X.....X.X.X", "......XXX.X.X.XX..X.XXX..", "XX.XXXXX.X..X....X...X.X.", "X.X..X.......XXX.XX..X..X", "X.....X..X.X...X.X..X.XXX", "XX.X...XX..X.X...X.XXXXXX", "X..X..X.X.X.X.XXX..X.X..X", "..X..XXXXXX.X..X.X.XX....", "X....X.X.X..X.X...XX.XXX.", "...X.X.X.X.XXX...X.X.X..X", ".X.X.X...XXXXXXX......X.X", ".XX..XXXX......XXX....XX.", "..X...XX.XXX...XXXX...X..", "..XXX...X..XX.XX..XX.XXXX"};
    vector<int> prizes = {4436, 5249, 9453, 5089, 383, 2369, 2359, 579, 90, 9843, 3096, 7911, 4256, 790, 3045, 9268, 3586, 501, 9416, 8886, 4139, 8559, 8714, 5923, 3446};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> card = {73, 65, 40, 31, 4, 18, 10, 24, 20, 30, 9, 68, 75, 70, 56, 43, 28, 35, 25, 41, 23, 66};
    vector<int> balls = {51, 4, 20, 24, 69, 50, 66, 22, 14, 71, 8, 64, 75, 7, 3, 15, 35, 63, 67, 21, 48, 45};
    vector<string> patterns = {"X.XX.X..XXX.....XXX.X.", "X..XXX....XXX.X...X.XX", "X.XXX...........X.XXXX", "X.XX.X.X.X.X...XX.XXXX", ".X.XX.X..XXXX..X.X...X", "..X.X..X..XX.XXX..X...", "...X.XXXXXXX..X..XXXXX", ".X.X..XX.XXX.XXXX...XX", "X.XX....XX..XXX...X...", ".X.X.XX..XX.X..X.XX..X", "..X.XX....X....X....XX", ".XX.XX.X.X.....XXX..X.", "XXX.XXX...X.XX.X..XXX.", ".X.XXXX..X.X..XXXXXX..", "X..X..X.XX.XX..X....X.", "X...X....XXXXXX.X.XXX.", "..XX..XXX.X..XXXX.XX..", "XXX.XX.XXX.X.X..XX.XX.", "..X...X.XXX.X....XXXXX", "X.....XXXX.X.X.X.XX...", "XX..X.X.X...XXX.X.X.X.", "XXX..XXX.X.....XX.X.X."};
    vector<int> prizes = {37, 9399, 2645, 6221, 2145, 4239, 1256, 2016, 7867, 3749, 3622, 6680, 4002, 5966, 4400, 3097, 3853, 2580, 9031, 5783, 2047, 2639};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> card = {41, 12, 33, 45, 19, 13};
    vector<int> balls = {11, 27, 69, 19, 35, 72, 8, 73, 2, 24, 36, 16, 60, 15, 68, 55, 51, 33, 17, 21};
    vector<string> patterns = {".X...X", "XX....", "XXXXXX", "X...X.", "XX..XX", "..X...", "XX..X.", "X...X.", "XXX.X.", ".X...X", "XXX...", "X.X.X.", "XX.X..", "X..XXX", "X.XXX.", "X.XX..", "..X.XX", ".X..X.", "..XXXX", "XXXX..", "X.X...", "X.XXXX", "XXX.XX", ".XXXX.", "X..X..", ".XXXXX", ".XX...", "XX...X", ".X...X", "...XX.", "X.X.XX", "X.XX..", ".X.XX.", "X.XXX.", "...XX.", "...X.X", "X..X..", "XXX.XX", "X..XXX", "XX.XXX", "...X.X", "XX..X.", "X.X.X.", ".XXX.X", "XX.XXX", "XXXXXX", "XXXX.X", "..X..X", "X....X", "XXX..X"};
    vector<int> prizes = {183, 4462, 9924, 8358, 5664, 6623, 4028, 620, 8465, 5681, 1157, 7777, 7621, 340, 6480, 4546, 5758, 448, 7494, 5569, 268, 5207, 6705, 7059, 750, 7306, 2252, 6822, 2600, 2814, 1256, 8359, 9878, 5648, 4352, 1140, 720, 8151, 9743, 7405, 1646, 7849, 3185, 3584, 8046, 1121, 9831, 8182, 9956, 175};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 800.2545454545453;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> card = {39, 52, 38, 7, 57, 64};
    vector<int> balls = {4, 54, 31, 69, 55, 68, 53, 51, 25, 30, 9, 48, 65, 58, 33, 3, 46, 41, 32, 2};
    vector<string> patterns = {"XXXX.X", "X.....", ".X.X..", "XX..X.", ".XXXXX", ".XXX..", "XXXXX.", "X....X", ".X.X.X", ".X.XXX", "X...XX", ".XXXX.", "XXXXXX", "XXX.XX", "X..XX.", ".X.XX.", "X....X", "...XXX", "XX...X", "XXXX.X", "XX.X..", "X..XXX", ".XX...", ".XXX.X", "XXXX.X", "XXXX..", ".XX...", "..X.XX", "XXXXX.", "....XX", "X...X.", ".X...X", "XX.XX.", "..X.X.", "XXX.X.", ".XX..X", "X.X...", "XXX...", "XXXX.X", ".XXX..", ".X.X..", ".....X", "...X..", "XX.X.X", "..XX.X", "XX...X", "XX.X.X", ".....X", "X.XX..", "X.X.X."};
    vector<int> prizes = {2598, 1971, 2, 8910, 8590, 948, 2721, 5357, 7545, 9637, 1859, 9926, 8486, 9405, 2887, 9417, 2833, 2607, 8016, 2351, 3631, 5413, 3525, 3616, 2042, 4492, 1018, 2260, 4041, 7871, 2174, 5560, 1235, 8488, 2359, 3604, 3365, 7797, 4347, 267, 7939, 1800, 2624, 370, 2236, 2129, 9335, 2116, 545, 8207};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 154.74545454545455;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> card = {45, 34, 59, 42, 8, 9};
    vector<int> balls = {31, 21, 50, 16, 71, 74, 19, 15, 75, 47};
    vector<string> patterns = {"..XXXX", "...XXX", "XX.XX.", "..X..X", ".XXXX.", ".....X", "X.X.XX", "XXXXX.", ".X.X..", ".XX.X.", "XXX.XX", "X...X.", "X..X.X", ".X..X.", "..XXXX", "X.X.X.", "X.X...", "X..XX.", ".XX.XX", "XX.XXX", "XX.XX.", "...XXX", "XX.XXX", "..X.X.", "XXXX..", "XX...X", "..X..X", "X.XXXX", "..X.X.", "X....X", "X..X..", "XXXX..", "X.XXX.", "XX..X.", "XX..X.", ".X..XX", "XX...X", ".....X", ".XXX.X", "..XX..", ".XX.XX", "..XX..", "X...XX", ".X....", ".X.X..", "XX....", ".X..X.", ".X.X.X", ".X.X.X", "XX.XXX"};
    vector<int> prizes = {3010, 3536, 7379, 4617, 1302, 8316, 2869, 3322, 2698, 7389, 7243, 7279, 636, 860, 2106, 8901, 2739, 5950, 7870, 8793, 5559, 8749, 7739, 2078, 547, 1913, 1876, 6429, 6586, 6251, 2492, 5980, 3656, 9803, 1563, 578, 2347, 4211, 4515, 3914, 8690, 115, 3267, 1702, 276, 5398, 5372, 1750, 6980, 9701};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 218.9076923076923;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> card = {71, 18, 6, 29, 61, 39};
    vector<int> balls = {43, 25, 28, 40, 36, 14, 49, 8, 66, 64, 6, 53, 74, 51, 30, 48, 1, 4, 26, 63, 72, 70, 16, 65, 9, 69, 24, 47, 32, 50, 5, 57, 19, 22, 33, 46, 34, 58, 54, 56};
    vector<string> patterns = {"X.X...", "XX.XX.", ".X.X..", "XX.XXX", "..X.XX", "XXXX.X", "X.XXXX", "....XX", ".XXX.X", ".X..XX", "XX.XX.", "X.....", "X.X.XX", ".....X", ".X.X..", "X....X", "XX..X.", "XX....", ".X....", "..X.X.", "X...XX", ".XXX.X", "XX.XXX", "X..XXX", "X...X.", ".....X", "....XX", ".X..X.", ".X..X.", "XX.X.X", "X..X.X", "X.XXX.", "XX..X.", "XXX.XX", "..XX..", ".X...X", "...X.X", ".X.XXX", ".XX.X.", "XX.X.X", "X...XX", ".XXXX.", "X...XX", ".XXX.X", ".X...X", ".X.XX.", ".XX..X", ".X.X..", "...X..", ".X.X.."};
    vector<int> prizes = {1899, 1629, 4934, 8115, 2240, 5112, 9441, 708, 5107, 7424, 8460, 2054, 2188, 8507, 5035, 2900, 8858, 236, 1017, 597, 934, 7924, 4707, 3905, 748, 8983, 9198, 547, 5576, 7870, 3104, 8512, 4045, 9275, 6381, 1591, 4188, 1458, 2064, 2121, 1507, 5509, 8765, 2667, 9044, 2016, 4116, 7465, 7367, 4743};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 1051.5714285714287;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> card = {20, 52, 36, 27, 49, 74};
    vector<int> balls = {60, 61};
    vector<string> patterns = {".X.X.X", ".XX.XX", "..X.XX", "..X.X.", ".....X", "XX.XXX", "..X.XX", "X.X.XX", "..XX..", "...X..", "X.X...", "X.XX..", "....XX", ".X...X", "XXXXXX", "XXX...", ".....X", "X.XX..", "XXXXX.", "XX.XX.", ".X....", "XX....", "XX....", "...X..", "..XXXX", "...XX.", "X.X...", "X..XX.", "...X.X", "XXX.X.", ".X.X.X", "X.X...", "..XX..", "X.XXXX", "..X..X", "X...XX", "XX.XX.", ".....X", ".XX...", ".XX...", "..X...", "...XX.", "..X.XX", "X.....", ".X..XX", "..XXX.", ".X.XX.", "XX...X", ".XXX..", ".XX.XX"};
    vector<int> prizes = {7518, 3689, 217, 7314, 8457, 517, 6525, 2976, 6406, 5524, 8587, 4141, 8245, 8436, 9566, 4718, 2469, 3948, 2476, 7966, 7075, 5589, 3774, 4068, 8176, 1609, 7188, 9119, 8630, 6634, 2055, 597, 4859, 790, 4686, 973, 9463, 8329, 2565, 6681, 8867, 5155, 2651, 7689, 1026, 8524, 1290, 2539, 548, 2598};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 718.8767123287671;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> card = {49, 23, 5, 24, 11, 62};
    vector<int> balls = {19};
    vector<string> patterns = {"X.XXXX", "...XXX", "XX....", "X..X.X", ".XXX..", ".....X", ".X..XX", "X.X..X", "...X.X", "X...X.", "XXXXX.", "....X.", "XX....", "XXX.XX", "XX....", "XX.X..", "..X.X.", "X....X", ".X.XXX", ".XX.XX", "X.X.X.", ".....X", "XX..X.", "...XX.", ".XXXX.", "XX.XXX", ".X..XX", "..X..X", ".....X", ".XXXX.", "XX.X.X", "X.....", "XX..XX", ".XX..X", "XXXX..", "..X.X.", "XXXXX.", "XX..X.", "X..XXX", ".XXX..", "XX...X", ".....X", "..X.X.", "...X.X", "..X...", "XX..XX", "XXX...", "XX...X", ".XX..X", "XXXX.."};
    vector<int> prizes = {1288, 8154, 7615, 5183, 1556, 8039, 742, 2287, 5670, 1390, 3241, 3504, 9267, 5010, 1470, 9505, 4548, 8022, 9579, 8767, 3244, 6451, 1608, 5201, 8971, 8103, 3029, 5030, 6611, 1744, 7999, 7884, 8441, 9578, 8096, 5298, 189, 5957, 2213, 5136, 4413, 90, 3828, 6645, 9015, 1999, 4237, 7617, 8126, 7177};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 562.081081081081;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> card = {55, 20, 16, 22, 28, 47};
    vector<int> balls = {35};
    vector<string> patterns = {"X.X..X", "XX...X", ".XX.XX", "X..XX.", "XXXX..", "X.X.XX", "X.XX.X", ".....X", "....X.", "..XXX.", "...XXX", "XXX..X", "...X.X", "XX.X.X", ".X.XXX", ".X..X.", ".XXXXX", "..X...", ".XX..X", "..XX..", ".X.X..", "..X...", "XX...X", "X.XXXX", "XXX..X", ".X....", "..XX..", "X.XX.X", "X.XX..", "X...XX", "X.X.X.", "X..X.X", "..X..X", "XXX.XX", ".X.XXX", "X.XX.X", "..X..X", "..X.X.", ".X.X..", ".X.X.X", ".X..XX", "X.X.XX", "XX..XX", "XXX..X", ".X..XX", "...XXX", "XXX..X", ".X.X..", "X.XX..", "X...X."};
    vector<int> prizes = {4815, 8611, 5306, 6252, 416, 6230, 4465, 282, 82, 4851, 5412, 5706, 7869, 451, 8949, 8146, 449, 7716, 2044, 1533, 3900, 7788, 776, 5681, 2094, 3181, 8656, 4338, 874, 3978, 4239, 3525, 8880, 4201, 1232, 3767, 3210, 9705, 1638, 1999, 4628, 9254, 9440, 7826, 7119, 2891, 1674, 2246, 7111, 1592};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 257.41891891891896;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> card = {74, 41, 66, 60, 3, 6};
    vector<int> balls = {43, 33, 73, 50, 27, 31, 20, 29, 56, 13};
    vector<string> patterns = {"..XX..", "XX....", "XXX...", ".XX...", "XX...X", "X.XXXX", ".....X", ".X.X..", "X..X..", "..X...", "X.X.XX", "XX..XX", "XXX..X", ".XX...", "XX..XX", "X.X.X.", ".X.X.X", ".XXXXX", "XX.XX.", "..X..X", ".X.X..", "X.XX..", ".X.X..", ".XXX..", ".X...X", "XX.X.X", "X.XXX.", "X.XXX.", ".X.X.X", ".XX.XX", "..XX.X", "X.XXX.", "X...XX", "XXX...", "X.XX.X", "X..X.X", "X.XXXX", "..X...", ".X.XX.", "XXX.XX", ".X.XX.", "XX....", "XX.X..", ".XX..X", "...X..", "..X.XX", ".X..XX", "X.X.X.", "X.X.X.", "X....X"};
    vector<int> prizes = {7708, 4462, 3672, 8107, 1855, 2255, 264, 411, 2425, 1551, 2382, 2826, 9761, 9320, 2571, 2655, 7968, 2661, 1083, 4887, 4621, 9289, 887, 2327, 859, 6913, 9738, 5809, 7830, 9671, 3763, 1814, 6634, 5176, 4395, 8715, 9445, 2472, 2488, 670, 638, 8293, 3584, 5915, 3909, 4249, 6658, 9098, 3148, 5556};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 126.0923076923077;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> card = {62, 60, 27, 32, 14, 34};
    vector<int> balls = {29, 45, 13};
    vector<string> patterns = {".XXX..", ".X.X..", ".XX.X.", ".X.X.X", "X.X..X", "X.X...", ".XXXX.", "XX.XX.", "XX.X..", ".X..XX", "X.XX..", "X.XXXX", "XXXX..", "...X.X", ".XX..X", "XXXX..", ".XXX..", ".XXXXX", "....X.", "XX.X..", "XXX..X", "..X..X", ".XXX.X", "X...XX", "X...X.", "XX.X.X", "X.XX..", ".X...X", ".X..XX", "XXXXX.", ".X.X..", "..XX.X", "X.X.X.", "X...XX", "XXX..X", ".X..X.", "..XXXX", "XXX.XX", "X....X", "XXX.XX", "X.....", "..X..X", "...X..", "..X.XX", "X.XX.X", "..X..X", "X.XX..", "X..X.X", "XXXX.X", "..X.X."};
    vector<int> prizes = {6110, 2144, 8553, 5387, 895, 778, 1783, 2945, 1937, 3801, 955, 9396, 327, 2788, 1662, 8301, 588, 6475, 2082, 6210, 648, 7033, 5929, 8769, 6385, 1814, 8085, 8578, 9556, 7921, 1615, 2039, 3924, 892, 2395, 872, 4386, 6743, 9420, 1661, 7933, 5090, 5061, 1723, 5084, 429, 2544, 1619, 4458, 3795};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 209.3888888888889;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> card = {58, 13, 57, 28, 38, 42};
    vector<int> balls = {74, 43, 4, 75, 55, 22, 62, 69, 5, 20, 25, 54, 72, 64, 15, 73, 6, 45, 9, 12};
    vector<string> patterns = {"XX..X.", "X.....", ".X.XX.", ".XXX..", "X.X.XX", "X.XX.X", "..X.X.", "X..XXX", "XXXXXX", "..XX..", "XXXX.X", "X.X.X.", "XX.X.X", "..X..X", "XX.X..", ".XX..X", ".XXX.X", "..XXXX", "....X.", ".X.XXX", "...XXX", ".XX.XX", "..X.XX", "..X..X", "..X..X", "..X.X.", ".XXX..", "...X.X", "XXX.X.", ".X.X..", "X..XXX", "X.....", ".....X", "..X...", "..X.X.", "..X..X", ".X.X.X", "X..X..", "X.X.X.", "X..X.X", "X..XXX", ".X.XX.", ".....X", "XXXX..", ".XXX..", "...X..", "..XX..", "XX..X.", "..X.X.", "X....X"};
    vector<int> prizes = {6712, 2146, 1332, 5371, 34, 5860, 4396, 5053, 353, 1454, 3869, 1233, 2401, 3335, 1551, 4286, 2864, 4235, 8980, 5102, 1261, 2184, 7596, 837, 9168, 8027, 8838, 7634, 1450, 9819, 4360, 7476, 7262, 2692, 5056, 2254, 6800, 5000, 7115, 1582, 9868, 3328, 6391, 5291, 2250, 873, 373, 5005, 5937, 8525};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 651.2727272727274;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> card = {29, 35, 60, 21, 59, 63, 20, 26, 71, 44, 11, 39, 34, 15, 70, 23, 75, 49, 9, 3};
    vector<int> balls = {15, 65, 40, 17, 25, 41, 5, 67, 62, 23, 38, 27, 14, 36, 10, 71, 52, 28, 50, 63, 2, 72, 29, 55, 58, 51, 60, 26, 3, 18, 45, 24, 35, 32, 42, 70, 34, 20, 11, 6};
    vector<string> patterns = {".....X.X.XX.X.XX..X.", "..X...X.X..X.XXXX.XX", "XXX.XX.X.XX.X.XX....", "XXXX.XX....X..XX.XX.", "XXX...X..X.XX..XX.XX", "....XXX..X.XX.XX.X.X", ".X.....XX..XX..XX..X", "XX.X.XX..XXX..XXXX.X", ".XXXX....XX.XX.....X", "X.X...XXX..X.XX.XXXX", "XX....XXXXXX.XXXX.XX", "XXXXX...XX....X....X", "X...X..XXX.XX..X..X.", "......XXXX....XXXXX.", "..XX...X.XXX...XX..X", "....X.XX.X.X.XX..XX.", "XXXX..XXX.XXX.....X.", "X..XXX.XXXXX.X.X.X..", "XXX.XXX.X.XX.X..X.XX", "XX.XX.XX.XXX.XX.XX..", ".X.X..XX...X.X....X.", "..X.........XX.X.X.X", "X..X.X.XXX.X.X.X.XX.", "X..X..XX.XX...XXX...", "..X.......X...XXXXXX", "X.XXX...X.XXXX.X.X..", "...X.X.X..X.XX.....X", ".......XXXX..XXXXX..", "XXXXX.X.XX.XX....XX.", "X.XX.X....XXXX..XX..", "..X....XXXX....X.X..", "X....X...X..XXX.XXXX", "XX.X..X..XX.X.XX....", "X..X..XX.X.X.XX.X..X", ".XXX....XXX.X.XX.XXX", "XX...X.XX..XX.XXX..X", "XX.XX..XXXX.XXX.XX.X", ".X..X.X......X..X.X.", ".X.XXX..X..X..XX.X..", "...X...X..X..XXXX.X.", "XX...X.X....XXX..XXX", ".X..XX.X...X.X......", "XX....XX..X.XX.XXXXX", ".X...XXX...XXX..X.XX", ".XXX.X.XX.XXX..X...X", ".X.X...X.XXX..XX..XX", "....XX.X.XX..XX.X...", "XX....X..XX..XXX..XX", ".X....XX...X.XX...XX", "X......X..XX.X.X.X.X"};
    vector<int> prizes = {4135, 2487, 3804, 2643, 1367, 3936, 684, 816, 1673, 9041, 5360, 923, 3668, 4713, 8000, 3562, 8009, 9716, 9250, 926, 1494, 2230, 4778, 3189, 5838, 5708, 372, 770, 3286, 6337, 8288, 8065, 6304, 4014, 9486, 7237, 6893, 4886, 6730, 8309, 5343, 7073, 2121, 6439, 5421, 7463, 4661, 4155, 6699, 5664};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 74.34285714285714;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> card = {65, 7, 48, 70, 39, 72, 34, 46, 18, 30, 28, 22, 35, 43, 10, 8, 24, 6, 73, 58};
    vector<int> balls = {58, 46, 33, 2, 50, 21, 31, 71, 13, 52, 1, 34, 60, 29, 37, 28, 70, 57, 36, 9, 55, 15, 44, 12, 41, 67, 22, 49, 30, 26, 35, 56, 40, 54, 10, 45, 5, 8, 53, 66};
    vector<string> patterns = {"..XX.XXXXX..XXX..X.X", "XX.X.....X....X.X..X", "XX.X...X....XX.X.XXX", "XX...X.XX.X...XX..XX", "X.XXXX..X..XX.XXX.XX", "XX.X.XXX...X.X..X...", "XX..XX.X..X..XX.XX..", "X...X....XXX..X.XXX.", "XX..XXXX...X....X.X.", ".XX..XX...XXX.XXX..X", "XXX..X.XXX....XXX...", "XXX....X.X.XXXX.XXXX", ".XX.X.X..X.X..XXXX..", "X.XXX..X..X.XX..XXX.", "...XX.XX.XX.XXXX.XXX", "X..XX.XXXXXXXXX...XX", ".X.XXX.XXXXXX..XXX.X", "X.X...XXX.XX...X.X.X", "X..X....XXX..X.XXXX.", "XX.XXXX.X.XXX.XXXX..", "...X.XX..XX.XXXX.X.X", "X.XXX..XX.XXX.X..X..", ".XXXXX.XX.XXX.X..XX.", "X.X.X.X.XX.X.XXX...X", "X.X.XXXXX..X.XX.XX.X", "..XX..XX..XX.....XXX", "X.X..XXX.XXX.XXXXX.X", "X.X.XXX..XX.XXXX..XX", "XXXX....X..XXX.X.XX.", "XXX..X....X....XXX..", ".....X.X.X...XX.XXX.", ".XXX....XXXXXX..XXX.", "...X..XXX.X.X..XX...", "XX.XX.XX...X...XX...", ".......XXXXX.XX.X.X.", "..X.X....X..X...X.X.", "XXX.X.XX.X.X..XXX.XX", "XXX..XX....X.XXXXXXX", "..XX..XXXXX.XXXXXXXX", ".XXX.XX.X.X.X.X..XX.", "X.X.....XXXXXX.XX.X.", "..X..X....X..XXXXX..", "X.X..XX..XXX..XXX.X.", ".X.XXXXXX.XXX..XX.X.", "X.XX..X.XX..XXX.XX.X", "XXXX.X.....XX.XX.X..", "XXXX.X..XX.X.X......", "...X.X.....X.X.XXX.X", "XX...XXX.......X....", "XXXXXXX.XXXX.X...X.."};
    vector<int> prizes = {879, 3817, 5227, 9524, 8315, 422, 6179, 5871, 991, 8177, 3349, 9676, 5901, 5340, 6815, 5939, 2123, 5597, 2953, 1740, 13, 1609, 1304, 3351, 9689, 7714, 6708, 938, 2519, 1023, 1644, 1852, 9384, 9884, 4472, 7794, 1561, 641, 2191, 4983, 312, 871, 1882, 7890, 9958, 6967, 3912, 7154, 3741, 4725};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> card = {22, 65, 44, 49, 48, 63, 72, 68, 57, 32, 47, 69, 34, 70, 46, 74, 42, 2, 27, 53};
    vector<int> balls = {52, 18, 14, 72, 49, 47, 69, 34, 60, 45, 48, 11, 75, 65, 51, 1, 67, 16, 36, 32, 15, 35, 3, 10, 20, 39, 43, 63, 19, 56, 29, 9, 54, 33, 58, 53, 28, 68, 22, 27};
    vector<string> patterns = {".XX.XXX.XX.XXX.X.XXX", "..XXX..XX.X.X.X.X..X", "..X.XXXX.XX.XXX.X..X", ".X...X.XX.......XX..", "...XXXXXX.X...XXXXXX"};
    vector<int> prizes = {1801, 1431, 1632, 4408, 1607};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> card = {57, 74, 61, 66, 7, 45, 46, 59, 53, 67, 52, 9, 43, 23, 1, 51, 18, 56, 71, 54};
    vector<int> balls = {61, 1, 6, 25, 43, 67, 58, 21, 63, 14, 18, 47, 29, 71, 20, 32, 30, 28, 42, 7, 24, 31, 23, 22, 48, 2, 12, 69, 45, 37, 4, 38, 57, 8, 34, 33, 56, 60, 46, 9};
    vector<string> patterns = {"....XX.X.XXXXX..XXXX", "X.X.X.X.XX...XX.X..X", "....X...XXXXXX....X.", "XXXX.....XX......X.X", "....X.X.XXXX...XXXXX", ".X...XX..X.....X.X.X", "X.X....X.X....XXXXX.", "....X.X.X.XXXXX...XX", "X..XXX...XXXXXX.X...", ".X..XX...XX...XXX..X", ".XXX.X.X.X..XX.XX.X.", ".XX..X.XX..XXXX...XX", "..XX...X...X.XXX.XX.", ".XXXXX.XXX.XXXX.X...", "XXXXXXXXX....XX.XXXX", "X.XXX..X.X.XXXXXXX..", "...X...X.X..X.XX..XX", "XX..X..X...XXXXXX..X", "XXX..XX....X.XXXXX..", "X.X..XX.X.XX..X...XX", "X.X.X.XXX..XXX...XXX", "XX........X.XXXXX..X", "...X.XX..XXX.XX..X.X", "X.XXXXXXX...X..XX.X.", "..X..X...XX.XX.X..XX", "..XX..XXXX..XX.X.XX.", "....XX..X.X.......X.", ".X...XX..XX.X...XXXX", ".XXXX..X..XX....XX.X", ".XXX.XXX.X..XXX....X", "..XX.X.XXXX..XX..XX.", "XXXXXXX.....XXXXX.X.", "X...X.XXX..X.XXXXXX.", ".X.XXX...XXXXXXXX.X.", "XXXX.XXXX.XXXXXXX..X", "...XX.........XX.X.X", ".XX.XXXX..XXXXX...XX", "XX.XXXX..X.XX.X.....", ".X.XXX..XX.XXXX....X", "XXX..XX.X.X..X.XX.X.", "XXXX....XXXX.XX...XX", "XX..X....XXXXX..X.X.", "..XXX.X..X.X.XX.X..X", "X..XXX.XXXXX.XXXX..X", ".XXX..XX.X.X...XX..X", "..X.XX...XX.X.XX.XXX", ".X.XXX.X...XX...X...", "XX...X.X..XX.X...X.X", "X..X.X.X..X.X...X...", "..X..XXXXXX...X...X."};
    vector<int> prizes = {4378, 1678, 1930, 7171, 1871, 1025, 8296, 266, 9281, 8241, 6931, 7192, 7001, 4502, 3008, 5918, 9009, 8272, 8192, 231, 315, 9655, 7880, 3016, 7413, 8405, 606, 8903, 2075, 1362, 4502, 7937, 9134, 6784, 3102, 2054, 4116, 888, 6182, 6856, 9055, 9604, 2853, 261, 5922, 4703, 1319, 6688, 5634, 4522};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> card = {8, 22, 45, 3, 21, 7, 52, 71, 18, 64, 1, 5, 35, 15, 16, 9, 19, 37, 58, 51};
    vector<int> balls = {30, 55, 62, 15, 64, 1, 10, 40, 26, 43, 41, 51, 33, 39, 74, 21, 56, 35, 9, 16, 54, 32, 18, 8, 7, 48, 38, 34, 3, 2, 45, 12, 66, 20, 4, 52, 47, 75, 42, 72};
    vector<string> patterns = {"....X.XXXX..XXXX..X.", ".X.XX.X..X..XXX....X", "X..XXXX.XXXXXX......", "X.XXXX.X..XXXXX..X.X", ".XX.X.....X.X..X.XX.", "XX.X...XX...XX...XXX", ".XX.X....XX.XX.X..X.", ".....X.X.X.XX.X.XX..", "...XXX.XX.XXX......X", ".XX..X..X.XXXX.XX..X", "XXXX..XX..X......X.X", "...XXX..XXXX..X.....", "..X.X..XXXXX.XXX.X..", ".X.XXX.X.XXX..XXX...", "X...X..X..X...X.XX.X", "...XXX.X.XXXXX...X..", ".X.XXX...X......X..X", "X.XXXXXXX..X..XX...X", "..X.......XX...XXX.X", "X.....XXX.XX..X.X.XX", "X..XX..X.X....XXXXXX", "XXX..X.XX..X.X.XXXXX", "..XX.X..XX.X.....XXX", "..X.X..X.XX...X...XX", "XX.X..XXX..XXX..XXXX", ".X.X.XX..XX.X.XX...X", "XXXX...X.XXX.X.....X", "X.XXX..X.X.X...X...X", "XX.XXXX.X.X.X.XX.X..", "XX.XX..XX.XX..X.X..X", "XXXX.X......XX..XX.X", "X.XXXXX..X.XXX.XX...", ".X...XXX.X.XX..XXX..", "....XX.....X.X.XX...", ".X.XXX.X.XXXXX..XX.X", "X.XX.X.X..XXX....XXX", "XXX.XX.X..X.XXX.X...", "X.XX..X..XX.......XX", ".XX..XX.XX.X.XXXXXXX", "X.XXX.XXXX..XXXX.XX.", ".XXX.XXX...X.X..XXX.", "X.XXXX.X.X..XX...X..", ".XX.XXX.....XXX.X...", ".XXXXX.X.XX.XXX.XX.X", "..XXX.X..X..X...X.X.", "...X.X.X..XX.X...X..", "..X.XX.X.X.X..XXX...", "..X..X.X.X..X.XX.X..", "XXX.X.X..X....X..X..", "XXX.XXXXXX..XXXX.XX."};
    vector<int> prizes = {9017, 5782, 2305, 7898, 2405, 476, 1505, 1800, 4926, 8490, 6145, 6860, 8357, 6775, 4713, 876, 4204, 8405, 6891, 5750, 9683, 8976, 5264, 6441, 1712, 4627, 676, 3301, 6180, 7983, 2741, 3728, 7036, 9790, 6487, 3387, 1861, 4245, 3452, 8276, 1236, 2585, 8178, 846, 3636, 9987, 5677, 1886, 3009, 2662};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 680.5428571428571;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> card = {4, 23, 57, 64, 68, 73, 72, 48, 31, 59, 19, 9, 22, 45, 38, 27, 11, 16, 21, 6};
    vector<int> balls = {72, 31, 51, 53, 69, 41, 49, 26, 24, 21, 71, 28, 46, 17, 7, 5, 32, 57, 66, 58, 10, 54, 6, 40, 55, 20, 68, 30, 47, 19, 70, 22, 44, 8, 59, 13, 4, 52, 23, 38};
    vector<string> patterns = {"X...X.X.XX.XX...XX.X", "...X.XX.XXXX..X.X.X.", "X..XXXX.X.XX...XXX..", ".XXX.X.XXXXXXX..X.XX", "XXX...XXX.XXXX.XXXXX", "X..XXX.....XXXX.X.X.", "XXX.X.XX.XXXXX.X....", ".XX..X..X..XX...X...", ".XX..X.XX.XXX...X..X", "....X..XXXXXX.......", ".XXX.X...X.XXXX..X.X", "XXX.XX..XXX.XX..X...", "X.XX.XXX..X.XX...X..", ".X...X.XX.X.X.XXXXXX", ".XX..X.X.XX...X.X..X", "..X....X.X...X...XXX", ".XX.XXX..X...X...XXX", ".X...XXXXX..X...X.XX", "X..X..X...XX...XXXXX", "..XXX.X.X.X......XX.", "..XX.XXXX.XXX.X...X.", "XX.XX.XXX.XX..XX..XX", "X..XXXX.X.X.X.XX.X..", "X.XXXX...XXXX..X.X.X", ".XX.X......X.X..X.X.", "XXX.X.XX.X..X.XX..X.", ".XX.X.XX.X..X..X.X..", ".XXXX.XXXXXX.XXX....", "XX.X.XX.......X...X.", "..XX..X.X.XXXXXXXX.X", "XX..X.....X.X...X...", "XXX......X.X....X...", ".XXX.XX.X..X.XX..X.X", "...XX..X.X..X.X....X", ".X.X.XXXXXXX.X.X.X.X", "X.XX..X...X.X.X..X..", ".XX.XX.........X...X", "..XX..X..XXXXXXXX.X.", "......X..XX..XXXXXXX", "X.XX.....X.X...XXXXX", "X.XX..XXXX.XXX.X.XXX", ".X.X.X..XX.X........", ".X.X.X.XXXX.XX.....X", "XXXX...XXXXXXX.XXXXX", ".X.XX.....X.X.X.X...", "......X..XX......X.X", "X...XX..XXXXX...XXX.", ".X...X.XXXX....XXXXX", "...X....XX..X.X..XX.", "XX.XXXX..X..X....X.."};
    vector<int> prizes = {3229, 3156, 7962, 4613, 5036, 8893, 5276, 811, 1977, 8841, 191, 8259, 275, 205, 6638, 3816, 4403, 4170, 9166, 8083, 4358, 9883, 7613, 102, 9422, 8955, 696, 6682, 9446, 9097, 5583, 540, 3205, 2974, 1372, 9684, 9492, 269, 4882, 1174, 5411, 8604, 6866, 9980, 1817, 3443, 3844, 980, 2251, 8163};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 257.88571428571424;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> card = {29, 16, 2, 35, 75};
    vector<int> balls = {75, 4, 16, 3, 21, 44, 2, 38, 11};
    vector<string> patterns = {"X....", "X.X.X", "XXX..", "XXXXX"};
    vector<int> prizes = {10, 100, 300, 1000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 6.212121212121213;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> card = {1, 2, 3};
    vector<int> balls = {1, 2, 4};
    vector<string> patterns = {"XXX"};
    vector<int> prizes = {10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 138.88888888888889;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> card = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> balls = {75};
    vector<string> patterns = {"X.........", ".X........", "..X.......", "...X......", "....X.....", "XXXXXXXXXX"};
    vector<int> prizes = {50, 40, 30, 20, 10, 1000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.027027027027027;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> card = {3, 5, 7, 45, 34, 23, 67, 75, 12, 24};
    vector<int> balls = {71, 50, 49, 3, 66, 67, 70, 12, 55, 34};
    vector<string> patterns = {"X.X.X.X.X.", "XXXXX.....", "XXXX..XXXX", "XXXXXXXXXX"};
    vector<int> prizes = {128, 578, 2753, 10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9692307692307693;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> card = {1, 2, 3, 4, 5, 6, 7, 8, 75, 22};
    vector<int> balls = {75, 22};
    vector<string> patterns = {"X.........", ".X........", "..X.......", "...X......", "....X.....", "XXXXXXXXXX", "..X.....X.", "..X.....XX", "..X......X", ".X......X."};
    vector<int> prizes = {50, 40, 17, 20, 31, 1000, 23, 2, 5674, 34};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 80.6986301369863;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> card = {1, 2, 3, 4};
    vector<int> balls = {1, 2, 3};
    vector<string> patterns = {"...X"};
    vector<int> prizes = {100};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3888888888888888;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> card = {1, 2, 3};
    vector<int> balls = {1, 2, 4, 5, 6, 7, 67};
    vector<string> patterns = {"XXX"};
    vector<int> prizes = {10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 147.05882352941177;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> card = {1, 2, 3, 4};
    vector<int> balls = {12, 34, 45, 56, 67, 1, 2, 4};
    vector<string> patterns = {"X..X", "XXXX"};
    vector<int> prizes = {10, 100};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.492537313432836;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> card = {1, 2, 3, 4, 5};
    vector<int> balls = {12, 34, 45, 56, 67, 1, 2, 3, 4};
    vector<string> patterns = {"X..X.", "XXXX."};
    vector<int> prizes = {10, 100};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> card = {1};
    vector<int> balls = {1};
    vector<string> patterns = {"X"};
    vector<int> prizes = {1234};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> card = {1, 2, 3};
    vector<int> balls = {1, 2, 3};
    vector<string> patterns = {"XXX", "X.X", "..X"};
    vector<int> prizes = {100, 1000, 50};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> card = {1, 2, 3};
    vector<int> balls = {3, 2, 1};
    vector<string> patterns = {"..X", ".X.", "X.."};
    vector<int> prizes = {10000, 10000, 10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> card = {75};
    vector<int> balls = {1};
    vector<string> patterns = {"X"};
    vector<int> prizes = {10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 135.13513513513513;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> card = {75};
    vector<int> balls = {1};
    vector<string> patterns = {"X", "X"};
    vector<int> prizes = {10000, 10000};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 270.27027027027026;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> card = {1, 2};
    vector<int> balls = {1};
    vector<string> patterns = {"X.", "XX"};
    vector<int> prizes = {100, 100};
    ExtraBall* pObj = new ExtraBall();
    clock_t start = clock();
    double result = pObj->expectedPayout(card, balls, patterns, prizes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3513513513513513;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=8083&pm=5891
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
#define df double
class ExtraBall { public: df expectedPayout(vi card, vi balls, vs pat, vi prize) {
int i,j,k;
vi ok(card.sz,0);
fir(balls.sz) fjr(card.sz) if(card[j]==balls[i]) ok[j]=1;
int ret=0;
fir(pat.sz) {
k=0;
fjr(pat[i].sz) if(pat[i][j]=='X' && ok[j]==0) k++;
if(k==1) ret+=prize[i];
}
return (df) ret/(df) (75-balls.sz);
}};

********************************************************************************
*******************************************************************************/