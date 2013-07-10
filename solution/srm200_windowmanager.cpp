/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2415
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

class WindowManager {
public:
    vector<string> screen(int height, int width, vector<string> windows);
};

vector<string> WindowManager::screen(int height, int width, vector<string> windows) {
    vector<string> ret;
    return ret;
}


int test0() {
    int height = 4;
    int width = 6;
    vector<string> windows = {"-5 -5 20 20 O", "0 0 2 2 Y", "0 0 4 6 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"+----+", "|XXXX|", "|XXXX|", "+----+"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int height = 7;
    int width = 7;
    vector<string> windows = {"-5 -5 20 12 9", "2 2 15 15 @", "2 2 3 3 *"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999|", "999999|", "99+-+--", "99|*|@@", "99+-+@@", "99|@@@@", "99|@@@@"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int height = 5;
    int width = 7;
    vector<string> windows = {"-5 -5 7 7 A", "-1 5 3 3 I", "1 -1 3 3 M", "1 5 3 3 A", "3 -1 3 3 T", "3 1 3 3 T", "3 3 3 3 E", "-1 1 3 3 N", "3 5 3 3 R", "-1 3 3 3 T"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A|N|T|I", "-+-+-+-", "M| |A", "-+-+-+-", "T|T|E|R"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int height = 1;
    int width = 1;
    vector<string> windows = {"-20000 -20000 5 5 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" "};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int height = 23;
    int width = 75;
    vector<string> windows = {"-44 -128 10 36 i", "-21 134 36 82 }";
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |LLLLLLLLLLLLLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| +------------------------------+LLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|LLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|LLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|LLLLLLLL", "VVVVVVVVVVVVVVVVVVVVVVVV| |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|--------", "VVVVVVVVVVVVVVVVVVVVVVVV| |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", "------------------------+ |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| ", " |EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE| "};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int height = 98;
    int width = 11;
    vector<string> windows = {"-83 4 90 22 =", "187 0 78 17 z", "-146 8 30 12 N", "-41 -19 129 23 "", "-160 21 23 13 E", "-36 -1 177 6 R", "-166 -21 186 3 p", "-138 -18 149 9 _", "-129 -10 118 2 L", "125 -14 174 9 v", "179 -5 49 9 Z", "-116 -15 9 23 D", "7 -7 86 12 O", "53 -9 53 14 Z", "102 -12 32 20 h", "95 14 3 23 q", "-190 2 127 3 "", "111 14 13 5 *", "139 0 139 9 ^", "150 -22 91 7 5"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RRRR|======", "RRRR|======", "RRRR|======", "RRRR|======", "RRRR|======", "RRRR|======", "RRRR|------", "----+ ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "OOOO| ", "----+ ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| ", "ZZZZ| "};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int height = 58;
    int width = 50;
    vector<string> windows = {"31 -13 91 78 7", "55 22 113 89 y", "-8 -17 111 49 h", "2 -54 117 88 z", "16 -99 112 85 #", "28 44 109 50 (", "-109 85 28 23 k", "75 63 101 67 >", "23 -90 83 57 N", "25 -24 43 36 q", "92 -35 107 45 *"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh| ", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh| ", "---------------------------------+ ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| ", "-----------+zzzzzzzzzzzzzzzzzzzzz| ", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz| ", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz| ", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz| +-----", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz| |(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz| |(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|----------|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|7777777777|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|----------|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|yyyyyyyyyy|(((((", "qqqqqqqqqqq|zzzzzzzzzzzzzzzzzzzzz|yyyyyyyyyy|((((("};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int height = 78;
    int width = 29;
    vector<string> windows = {"-3 -5 126 40 N", "-82 54 67 11 [", "-32 -6 99 49 }";
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}}}}}}}}}}}}}}}}}}}}", "}}}}}}}}}}+------------------", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "}}}}}}}}}}|..................", "----------|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|..................", "NNNNNNNNNN|.................."};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int height = 49;
    int width = 44;
    vector<string> windows = {"-83 83 84 26 ]", "-16 53 85 12 b", "-23 -18 48 89 G", "22 50 44 33 l", "81 1 61 11 f", "75 25 59 5 n", "63 78 12 75 #", "14 82 17 32 s", "6 -20 28 6 p", "-14 82 67 59 q", "69 -35 69 42 ]", "-50 27 55 23 _", "-68 -68 76 18 t", "-47 -67 33 81 0", "73 61 78 14 A", "7 17 16 63 (", "46 49 7 48 ;", "-50 -13 76 52 ^", "6 -83 6 22 Y", "27 -28 15 83 q", "-85 -83 93 10 f", "-47 -39 62 65 <", "-44 -27 58 11 n", "-16 62 42 73 =", "71 18 60 30 &", "10 50 4 44 #", "-92 -74 22 64 C"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|_____", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|_____", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|_____", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|_____", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|-----", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|GGGGG", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|GGGGG", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|-----", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "<<<<<<<<<<<<<<<<<<<<<<<<<|^^^^^^^^^^^^|(((((", "-------------------------+^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|(((((", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|-----", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|GGGGG", "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|-----", "--------------------------------------+ ", " ", "--------------------------------------------", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "--------------------------------------------", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int height = 57;
    int width = 51;
    vector<string> windows = {"91 -56 89 90 D", "-101 53 105 17 {", "95 53 77 4 r", "102 -55 66 88 h", "-106 7 45 71 v", "31 -25 105 35 p", "-80 -29 89 63 o", "37 -40 113 67 i", "-29 83 75 4 ,", "66 71 45 7 V", "-65 64 44 83 e", "-53 65 16 9 k", "108 62 34 6 ?", "87 85 98 84 O", "-7 55 77 31 y", "-51 57 88 88 {", "-73 71 35 65 W", "-85 -86 87 71 r", "-69 18 59 43 a", "101 -96 11 98 K", "-83 40 29 38 #", "9 -63 6 75 2", "17 5 28 88 '", "-93 88 60 6 H", "-21 19 98 19 G", "-53 10 43 24 %", "27 41 7 56 r", "-40 -86 32 70 2"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "ooooooooooooooooooo|GGGGGGGGGGGGGGGGG| ", "-------------------|GGGGGGGGGGGGGGGGG| ", "-----------+ |GGGGGGGGGGGGGGGGG| ", "22222222222| |GGGGGGGGGGGGGGGGG| ", "22222222222| |GGGGGGGGGGGGGGGGG| ", "22222222222| |GGGGGGGGGGGGGGGGG| ", "22222222222| |GGGGGGGGGGGGGGGGG| ", "-----------+ |GGGGGGGGGGGGGGGGG| ", " |GGGGGGGGGGGGGGGGG| ", " |GGGGGGGGGGGGGGGGG| ", " +-------------|GGGGGGGGGGGGGGGGG|-------------", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''+---------", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''|rrrrrrrrr", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''|rrrrrrrrr", " |'''''''''''''|GGGGGGGGGGGGGGGGG|'''|rrrrrrrrr", "-----|'''''''''''''|GGGGGGGGGGGGGGGGG|'''|rrrrrrrrr", "ppppp|'''''''''''''|GGGGGGGGGGGGGGGGG|'''|rrrrrrrrr", "ppppp|'''''''''''''|GGGGGGGGGGGGGGGGG|'''+---------", "ppppp|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "ppppp|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "ppppp|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "-----|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii|'''''''''''''|GGGGGGGGGGGGGGGGG|'''''''''''''", "iiiii+-------------|GGGGGGGGGGGGGGGGG|-------------", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| ", "iiiiiiiiiiiiiiiiiii|GGGGGGGGGGGGGGGGG| "};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int height = 2;
    int width = 74;
    vector<string> windows = {"0 -99 3 4 G", "3 -110 4 138 K", "0 87 2 10 y", "0 94 3 85 A", "0 50 5 138 C", "-3 -52 3 37 g", "3 -140 5 24 !"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" +-----------------------", " |CCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int height = 28;
    int width = 4;
    vector<string> windows = {"53 -4 19 8 g", "-51 4 58 3 Q", "-50 0 22 8 9", "-2 -4 35 3 t", "55 0 56 5 <", "-55 -5 49 7 Y", "29 -7 17 2 @", "2 -3 17 5 x", "20 0 20 7 c", "-25 6 41 4 ;", "55 6 39 8 /", "-55 -6 8 2 r", "28 -7 17 5 =", "-44 3 13 5 o", "-34 -1 8 2 O", "-35 0 37 3 9", "-33 0 17 3 I", "14 -2 13 6 $"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"|9| ", "+-+ ", "-+ ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "x| ", "---+", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "$$$|", "---+", "|ccc"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int height = 10;
    int width = 15;
    vector<string> windows = {"13 -25 19 20 d", "5 9 20 11 4", "14 8 17 16 6", "-6 -27 21 17 5", "-11 -24 17 9 q", "19 -30 19 23 2", "4 8 2 13 z", "-12 -28 11 14 &"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " +------", " +------", " |44444", " |44444", " |44444", " |44444"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int height = 5;
    int width = 81;
    vector<string> windows = {"0 45 3 39 "", "9 -100 11 56 3", "-7 124 7 89 k", "-7 -44 7 111 7", "2 -35 2 158 l", "-6 -16 4 118 2", "2 -99 5 46 A", "2 151 4 116 *", "-8 -27 11 117 "", "-5 45 8 88 l", "-1 -109 2 141 R", "9 112 8 14 f", "2 -105 9 55 X", "-2 40 7 158 y", "3 -39 9 31 y", "1 151 2 50 G", "5 -135 3 162 b", "1 -116 10 25 I", "-1 -9 8 48 Z", "-10 9 8 44 I", "2 32 10 58 ,", "2 88 4 132 A", "8 145 11 108 6", "5 101 9 19 '", "7 129 2 119 "", "-1 -82 7 91 Z", "-9 -65 7 126 z", "2 68 3 53 3", "4 141 7 109 b", "-6 -84 5 4 0", "3 -31 5 18 Y", "-6 18 5 147 @", "-5 67 8 56 H", "4 3 9 97 3", "5 58 2 74 e", "1 93 7 51 4", "-7 109 8 135 s", "5 -12 3 101 s", "-3 91 2 119 w", "0 84 2 59 !", "0 -98 8 15 G"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZZZZZZZZ|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ|"|yyyyyyyyyyyyyyyyyyyyyyyyyy|HHHHHHHHHHHHH", "ZZZZZZZZ|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ|"|yyyyyyyyyyyyyyyyyyyyyyyyyy|HHHHHHHHHHHHH", "ZZZZZZZZ|ZZZZZZZZZZZZZZZZZZZZZZZ+----------------------------------+-------------", "ZZZZZZZZ|ZZZZZZZZZZZZZZZZZZZZZZZ|,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|333333333333", "ZZZ+-----------------------------------------------------------------------------"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int height = 86;
    int width = 39;
    vector<string> windows = {"-10 10 155 6 p", "-33 -47 158 34 H", "-160 76 16 42 e", "-117 73 13 44 B", "78 3 37 51 ]", "80 -49 58 47 D", "-113 60 7 70 4", "-56 21 149 27 T", "152 -16 114 38 u", "166 -34 83 33 w", "-129 -74 47 26 ,", "76 -38 107 8 N", "-86 46 170 13 %"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " |pppp| |TTTTTTTTTTTTTTTTT", " +-----------------|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT", " |]]]]]]]]]]]]]]]]]|TTTTTTTTTTTTTTTTT"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int height = 20;
    int width = 73;
    vector<string> windows = {"24 -45 37 3 `", "-20 -48 26 58 (", "-13 32 30 139 u", "-23 -131 40 19 "", "-9 140 4 81 h", "22 145 24 75 5", "0 35 2 84 %", "-7 2 15 24 B", "-13 -94 21 26 f", "-2 -16 10 102 d", "23 2 39 118 Y", "13 84 30 9 .", "29 35 24 142 0", "14 66 27 61 (", "12 73 35 75 T", "32 -121 7 129 N", "-4 121 33 43 7", "20 95 33 9 m", "2 103 40 92 U", "6 -82 13 110 d", "-7 99 21 19 C", "34 -51 8 21 R", "2 21 12 125 j", "-25 89 17 101 v", "36 140 33 30 C", "11 29 13 73 B", "-38 60 36 126 f", "25 -47 8 28 s", "20 35 24 3 @", "-30 41 6 86 )", "-12 108 31 117 k", "-33 -140 8 41 4", "1 -128 39 141 V", "-9 134 15 125 P", "-3 71 28 109 F", "-17 39 16 106 T", "-25 61 38 89 0"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd|00000000000", "------------+dddddddddddddddddddddddddddddddddddddddddddddddd|00000000000", "VVVVVVVVVVVV|dddddddd+---------------------------------------|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|--------|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjj+-------------------------------|00000000000", "VVVVVVVVVVVV|dddddddd|jjjjjjj|BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB+-----------", "VVVVVVVVVVVV|dddddddd+-------|BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV|dddddddddddddd| |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV|dddddddddddddd| |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV|dddddddddddddd| |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV|dddddddddddddd| |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV|--------------+ |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F", "VVVVVVVVVVVV| |BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|F"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int height = 73;
    int width = 71;
    vector<string> windows = {"-85 -49 48 38 B", "-138 1 110 59 G", "-129 38 128 124 K", "110 -30 71 99 O", "-76 -59 131 101 b", "-34 67 82 94 .", "138 -16 40 42 #", "129 46 7 49 *", "-35 83 133 37 q", "-42 -56 123 12 w", "-133 -3 68 5 [", "52 35 8 139 S", "49 83 101 63 ?", "45 -81 64 141 u", "85 -7 124 96 !", "48 -32 39 138 g", "133 -107 5 95 #", "20 -44 57 55 X", "-58 5 146 40 z", "132 -47 63 25 *", "94 -68 140 85 g", "119 -10 23 100 9", "-15 -78 86 69 /", "-131 33 127 134 l"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "bbbbb|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "-----|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|--------------+ |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|uuuuuuuuuuuuuu| |...", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|uuuuuuuuuuuuuu| +---", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|--------------------------", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg", "XXXXX|zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|gggggggggggggggggggggggggg"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int height = 24;
    int width = 30;
    vector<string> windows = {"46 26 31 23 X", "-27 -31 13 36 S", "-28 11 2 49 {", "-45 -44 41 34 ,", "-4 28 12 19 e"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" |e", " |e", " |e", " |e", " |e", " |e", " |e", " +-", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int height = 60;
    int width = 53;
    vector<string> windows = {"-22 -67 82 10 &", "-108 -58 38 91 U", "43 -87 29 81 \", "79 63 5 60 d", "42 50 27 4 k", "65 -83 115 82 X", "71 -21 73 13 d", "21 -53 70 20 D", "-70 1 45 57 j", "-115 -99 27 48 o", "-17 37 115 9 %", "-38 73 69 106 G", "-73 74 17 49 Z", "117 -91 12 33 q", "-11 49 107 17 a", "-10 -3 8 65 h", "36 103 109 52 >", "18 -35 73 40 E", "-80 76 21 24 A", "-118 10 14 101 !", "-91 -24 73 93 u", "115 -98 46 14 q", "-48 21 47 45 j", "90 24 75 97 1", "-31 -92 22 103 c", "-100 -97 54 13 O", "94 -75 75 84 >", "56 -13 24 27 !", "-113 34 75 17 H", "18 -31 88 15 (", "-25 15 81 21 X", "19 9 19 35 ]", "2 -59 44 36 '", "43 26 4 90 W", "65 -83 6 45 G", "47 -38 16 13 r"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", " |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "----+ |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| +---------------------------------+%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| |]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]|%| |aaa", "EEEE| +---------------------------------+%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXX+--------------------------", "EEEE| |XXXXXXXXXX|WWWWWWWWWWWWWWWWWWWWWWWWWW", "EEEE| |XXXXXXXXXX|WWWWWWWWWWWWWWWWWWWWWWWWWW", "EEEE| |XXXXXXXXXX+--------------------------", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| |XXXXXXXXXXXXXXXXXXX| |%%%%%%%| |aaa", "EEEE| +-------------------+ |%%%%%%%| |aaa", "-------------+ |%%%%%%%| |aaa", "!!!!!!!!!!!!!| |%%%%%%%| |aaa", "!!!!!!!!!!!!!| |%%%%%%%| |aaa", "!!!!!!!!!!!!!| |%%%%%%%| |aaa"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int height = 78;
    int width = 37;
    vector<string> windows = {"-26 54 110 65 s", "24 54 6 3 g", "-135 8 98 54 $", "-144 31 9 49 i", "106 62 157 62 [", "130 -74 80 5 ,", "-148 3 109 10 ~", "10 55 39 20 H", "-55 -61 136 44 2", "-123 -41 65 16 b", "141 -5 85 16 o", "-97 -56 121 57 z", "-15 -41 20 23 %", "134 64 152 50 7", "35 -23 79 54 [", "-118 47 129 45 '", "-52 23 84 4 =", "37 -53 78 42 I", "-80 -64 69 8 W", "112 -59 128 71 d", "1 60 93 24 E", "-82 -1 116 38 <", "-10 70 80 36 z", "88 58 3 40 T", "110 -5 13 6 T", "70 15 119 6 4", "-35 6 30 11 {", "-75 -27 134 43 K", "13 40 20 25 6", "7 40 53 51 y", "-35 -68 91 16 G", "-93 -74 157 7 `", "-15 40 104 12 "", "-52 59 77 5 ("};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|<<<<<<<<<<<<<<<<<<<<|", "KKKKKKKKKKKKKKK|--------------------+", "KKKKKKKKKKKKKKK| ", "KKKKKKKKKKKKKKK|--------------+ ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "KKKKKKKKKKKKKKK|[[[[[[[[[[[[[[| ", "---------------+[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[| ", "[[[[[[[[[[[[[[[+----+[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| ", "[[[[[[[[[[[[[[[|4444|[[[[[[[[[| "};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int height = 3;
    int width = 46;
    vector<string> windows = {"3 -13 4 28 R", "-6 -23 6 44 ^", "1 -14 3 73 h", "2 39 3 22 C", "-4 -7 3 81 9", "5 -66 3 40 s", "0 -51 6 40 @", "-3 55 6 34 O", "-5 -38 6 29 S", "5 -59 4 45 ;", "2 -67 2 13 V", "4 17 7 33 3", "-6 -77 2 24 "", "-4 49 6 26 {", "0 -39 5 54 l", "-2 33 6 27 Z", "-1 -39 4 84 M", "-2 79 2 52 C", "1 -7 2 16 ;", "3 87 3 40 P", "3 -67 7 29 $", "5 -8 3 73 U", "5 -81 3 73 m", "2 70 5 20 (", "5 91 6 61 ,", "2 25 3 53 '", "3 -81 5 24 F", "2 -50 5 33 8", "-6 -88 3 38 S", "-2 10 2 25 .", "5 63 3 38 N", "5 -28 5 68 R", "-1 -35 6 50 }", "-1 6 3 91 1", "2 -5 7 35 _", "-5 -72 4 87 4", "2 -52 4 70 }";
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv|11111", "vv+---------------------------------+vvv|-----", "vv|888888888888888888888888888888888|vvv|-----"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int height = 8;
    int width = 21;
    vector<string> windows = {"-9 33 10 5 Z", "-6 -30 6 20 ~", "3 20 2 31 r", "-10 -17 2 14 X", "-13 -24 3 20 t"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " +", " +", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int height = 56;
    int width = 8;
    vector<string> windows = {"-41 -15 72 2 z", "-81 15 70 7 q", "-79 9 92 14 *", "-104 7 97 7 A", "49 14 29 8 1", "61 11 52 17 T", "102 -1 101 16 r", "106 -8 76 10 J", "-1 6 39 6 G", "-38 -8 30 2 p", "11 8 82 12 N", "-21 10 49 13 R", "-43 -3 43 9 '", "93 10 35 6 =", "-106 -7 7 15 `", "-10 -5 97 4 )", "20 -7 63 3 d", "-107 -8 87 15 z", "74 -14 70 14 N", "-85 -6 67 13 3", "-61 -6 93 7 $", "-37 -4 111 2 c", "97 -8 67 9 *", "42 -6 35 2 3", "44 13 4 6 )", "67 -10 29 7 x", "-73 12 47 5 %", "-85 9 28 8 g", "-103 -10 106 8 7", "-11 -3 47 16 t", "-58 2 17 13 Y", "-13 2 20 16 8", "-50 -7 51 16 =", "-14 -1 56 8 &", "-40 8 46 17 p", "-4 6 67 16 y", "82 -7 71 12 N", "-57 -15 60 12 .", "-36 -15 67 10 Z", "91 -5 39 3 5"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "&&&&&&|y", "------|y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y", " |y"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int height = 34;
    int width = 36;
    vector<string> windows = {"66 6 67 36 Z", "56 -72 31 5 }";
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|MMMMM|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|-----|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", ";;;;|DDDDD|rrrrrrrrrrrrrrrrrrrrrrrrr", "----------|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWWWWW|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWWWWW|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWWWWW|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWW+--|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWW|II|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWW|II|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWW|II|rrrrrrrrrrrrrrrrrrrrrrrrr", "WWWWWWW|II|rrrrrrrrrrrrrrrrrrrrrrrrr"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int height = 62;
    int width = 51;
    vector<string> windows = {"-12 59 57 39 ;", "58 99 10 99 f", "-52 -56 105 74 \", "-39 -93 11 44 N", "7 -10 115 95 .", "84 -11 117 21 h"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "\\\\\\\\\\\\\\\\\| ", "---------------------------------------------------", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "...................................................", "..................................................."};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int height = 12;
    int width = 70;
    vector<string> windows = {"-17 -136 11 55 S", "11 80 4 139 K", "10 101 15 74 4", "1 138 12 98 8", "-18 111 18 15 l", "8 -118 5 7 y", "-14 60 22 23 x", "16 -29 4 45 2", "20 -137 9 98 ?", "16 -65 12 140 b", "18 23 24 122 ;", "-19 -70 18 76 &", "6 69 22 118 k", "21 123 19 25 =", "10 -127 6 133 ]", "23 -67 2 116 V", "4 -26 6 55 X", "14 44 16 31 $", "15 132 16 135 >", "-1 -10 15 126 z", "21 -60 25 49 ?", "14 111 6 63 K", "-11 -4 11 73 #", "-3 -7 4 82 &", "-9 -7 13 3 ?", "-11 60 25 89 0", "5 -133 7 37 h", "-9 23 6 5 $", "11 121 17 48 l", "12 -83 24 50 6", "-3 -138 21 86 N", "-15 104 16 141 ;"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"------------------------------------------------------------|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz|000000000"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int height = 36;
    int width = 6;
    vector<string> windows = {"40 11 23 13 #", "-50 9 22 6 E", "-56 10 31 10 T", "-52 0 25 13 O", "-4 -9 16 5 p", "58 -5 67 6 H", "-43 6 70 9 <", "-31 11 2 3 E", "4 -7 55 10 X", "17 11 7 7 K", "-65 -8 35 8 q", "4 -6 8 13 .", "-23 6 27 12 =", "39 4 32 7 c", "55 -12 9 2 e", "-50 -8 36 5 U", "16 3 69 13 T", "20 3 47 5 .", "-22 -1 72 2 q", "63 -1 16 8 #", "15 10 8 2 g", "-33 -12 3 6 !", "-66 5 39 9 y", "-34 11 30 2 2", "-37 11 42 3 s", "-43 4 57 13 :", "-47 6 34 3 3", "-43 0 8 11 N", "-25 -10 65 4 I", "29 9 62 6 {", "15 -6 16 5 $", "-1 10 46 13 g"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"| |:", "| |:", "| |:", "| |:", "|---|:", "|...|:", "|...|:", "|...|:", "|...|:", "|...|:", "|...|:", "|---|:", "|X| |:", "|X| +-", "|X| ", "|X| ", "|X|+--", "|X||TT", "|X||TT", "|X||TT", "|X|+--", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||..", "|X||.."};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int height = 92;
    int width = 75;
    vector<string> windows = {"181 -46 15 105 )", "-160 -139 29 126 S", "175 -6 184 117 :", "143 -139 95 143 N", "180 55 133 35 [", "147 82 148 37 p", "150 -18 83 10 5", "47 82 162 22 L", "-133 -116 96 142 t", "-27 -39 5 84 M", "-116 -33 162 134 \", "-58 50 80 111 3", "102 -63 20 122 h", "2 35 173 43 i", "-26 -127 12 49 Q", "-50 -103 165 147 5", "-51 -73 93 44 Y", "172 -1 127 120 .", "14 -26 70 84 s", "-2 88 149 19 ^", "-141 -122 148 11 y", "-96 57 104 11 6", "158 -127 130 73 6", "175 -66 43 97 1", "148 117 68 70 ,", "-152 -23 88 106 h", "77 -136 27 14 /", "2 -33 7 36 m"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5555555555555555555555555555555555555555555|\\\\\\|333333|666666666|3333333", "5555555555555555555555555555555555555555555|\\\\\\|333333|666666666|3333333", "--+5555555555555555555555555555555555555555|-------------|666666666|-------", "mm|5555555555555555555555555555555555555555|iiiiiiiiiiiii|666666666|iiiiiii", "mm|5555555555555555555555555555555555555555|iiiiiiiiiiiii|666666666|iiiiiii", "mm|5555555555555555555555555555555555555555|iiiiiiiiiiiii|666666666|iiiiiii", "mm|5555555555555555555555555555555555555555|iiiiiiiiiiiii|666666666|iiiiiii", "mm|5555555555555555555555555555555555555555|iiiiiiiiiiiii+---------+iiiiiii", "--+5555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "---------------------------------------------------------+iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "sssssssssssssssssssssssssssssssssssssssssssssssssssssssss|iiiiiiiiiiiiiiiii", "---------------------------------------------------------+iiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "5555555555555555555555555555555555555555555|iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int height = 64;
    int width = 83;
    vector<string> windows = {"123 -46 34 9 C", "104 -53 34 107 !", "126 98 105 32 U", "-62 -56 97 38 /", "22 144 77 114 0", "104 9 102 46 6", "77 -165 66 54 y", "114 -75 4 138 [", "74 138 111 148 @", "-60 -74 104 121 \", "101 158 22 16 t", "47 123 91 48 Z", "28 -24 60 49 4", "-6 -31 3 2 2", "94 -20 30 34 j", "-33 33 41 145 D", "30 -104 47 53 h", "-99 132 42 6 =", "69 104 128 81 %", "30 130 5 149 i", "-27 -17 110 28 `", "-127 -125 50 73 W", "117 35 2 79 y", "-79 -23 115 89 _", "-23 -34 91 132 T", "120 -3 78 100 Q", "81 -142 17 40 >", "65 1 10 20 t", "49 -109 126 121 B", "-126 -73 91 85 T", "3 136 37 54 3", "-127 89 43 167 f", "49 9 40 163 d", "-113 -60 5 61 n", "87 -24 99 69 ,", "33 -15 72 135 p", "14 25 41 112 Z", "10 -143 50 167 6", "-86 104 91 148 o", "34 -95 67 76 B", "112 -45 81 137 q", "67 -114 104 161 G", "-118 -12 101 86 b"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "-----------------------+TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "66666666666666666666666|TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "66666666666666666666666|TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "66666666666666666666666|TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "66666666666666666666666|T+---------------------------------------------------------", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|T|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|-|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p|ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "66666666666666666666666|p+---------------------------------------------------------", "66666666666666666666666|ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "66666666666666666666666|ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "66666666666666666666666|ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "66666666666666666666666|ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "-----------------------+ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int height = 15;
    int width = 8;
    vector<string> windows = {"-3 -5 10 14 G", "11 -9 10 2 D", "11 4 15 13 m", "20 -11 28 16 o", "18 -8 12 9 _", "13 1 3 6 }";
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"**|+@@|3", "**||-+|3", "**||K||3", "**||K||3", "**||K||3", "**||K||3", "**|--+|3", "**|ee||3", "**|ee||3", "**|ee||3", "**|ee||3", "**|ee||3", "**|ee||3", "--+ee||3", "---+e|+-"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int height = 71;
    int width = 78;
    vector<string> windows = {"-94 -91 110 149 s", "-58 28 142 28 7", "46 -79 11 139 g", "51 -96 20 156 7", "17 105 43 104 /", "10 99 83 89 x", "-4 90 41 53 I", "65 -101 15 2 w", "41 -59 32 154 5", "0 83 54 123 W", "-102 148 97 111 0", "-41 -16 128 57 R", "-8 -58 132 14 V", "127 -82 111 17 p", "80 35 54 2 q", "114 -80 104 55 c", "10 -77 121 43 A", "52 -79 118 2 w", "141 151 72 80 X", "-79 16 53 155 R", "45 -77 77 141 K", "-120 53 9 3 V", "-50 94 23 30 Y", "-135 -121 107 97 x", "-135 -111 7 67 N", "36 65 43 88 U", "-70 29 8 91 P", "-13 -134 54 31 a", "-35 99 14 107 `", "-58 73 63 142 n", "48 107 23 149 F", "-88 120 51 133 ~", "-126 1 85 43 z", "40 -97 128 85 1", "-40 12 94 34 e", "-123 -135 127 48 W", "117 -87 116 18 ;", "84 -76 79 150 c", "67 -84 127 20 \"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| |nnnn", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| |nnnn", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| |nnnn", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| |nnnn", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| +----", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|s| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777|-+ ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| ", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| +------------", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| |UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| |UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| |UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|777777777| |UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|-------------------|UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|5555555555555555555|UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|5555555555555555555|UUUUUUUUUUUU", "RRRRRRRRRRRR|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|5555555555555555555|UUUUUUUUUUUU", "------------|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|-----------------+5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK|eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee|KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKK+--------------------------------+KKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK|5|UUUUUUUUUUUU"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int height = 91;
    int width = 49;
    vector<string> windows = {"-52 85 168 7 y", "-36 -91 100 55 q"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int height = 9;
    int width = 38;
    vector<string> windows = {"5 54 15 11 O", "14 46 18 73 ~", "-16 28 4 28 u", "6 72 3 2 ]", "5 40 16 22 [", "-4 -66 16 22 :", "1 -20 19 9 f", "-8 -17 19 71 T", "-9 -67 9 21 m", "2 -39 6 33 @", "15 55 13 2 M", "10 -44 4 54 O", "-15 -2 15 53 H", "10 35 15 17 <", "-5 56 15 31 6", "-8 17 3 58 4", "-12 10 19 51 l", "13 -20 5 2 m", "-2 8 5 52 4", "-7 -10 17 46 T", "-10 -70 18 57 i", "-11 47 17 30 H", "7 15 18 2 '", "8 15 2 6 z", "-7 69 2 46 *", "17 -56 9 50 !", "0 20 6 50 U", "-3 35 13 69 2", "-10 19 18 37 X", "-14 -55 7 49 L", "-8 -71 9 64 p", "-4 50 4 70 0", "0 29 13 11 L", "-5 -12 5 47 :", "9 16 12 74 V", "5 -30 19 74 y", "15 10 8 55 r", "11 21 4 19 d"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TTTTTTTTTTTTTTTTTTT|XXXXXXXXX+--------", "TTTTTTTTTTTTTTTTTTT|XXXXXXXXX|LLLLLLLL", "TTTTTTTTTTTTTTTTTTT|XXXXXXXXX|LLLLLLLL", "TTTTTTTTTTTTTTTTTTT|XXXXXXXXX|LLLLLLLL", "TTTTTTTTTTTTTTTTTTT|XXXXXXXXX|LLLLLLLL", "--------------------------------------", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int height = 16;
    int width = 88;
    vector<string> windows = {"20 -115 16 143 A", "-31 86 27 144 )", "26 -26 20 11 0", "6 -110 4 104 o", "-18 48 33 7 )", "-19 3 10 42 [", "-32 70 7 79 R", "2 78 19 161 m", "-26 -174 15 80 E", "22 22 4 135 Z", "-26 -78 14 124 H", "-6 -147 10 119 *", "-17 160 11 149 q", "-8 83 9 119 =", "31 3 32 19 R", "1 37 5 6 6", "26 -77 30 16 b", "10 49 4 113 #", "21 72 29 7 F", "-12 -126 7 50 %", "-28 -6 12 126 t", "29 -128 24 168 t", "-19 66 15 105 n", "-29 123 4 83 8", "27 93 25 18 J", "-9 -51 32 165 C", "-20 166 27 157 v", "-29 -58 15 143 G", "15 175 33 106 x", "27 41 7 117 \", "10 -19 10 108 u", "-27 150 22 24 u", "21 -18 3 157 <", "4 77 3 6 x", "14 -108 12 77 Y", "3 -106 21 86 `"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC+----+CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC|xxxx|CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC+----+CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "----------------------------------------------------------------------------------------", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int height = 13;
    int width = 74;
    vector<string> windows = {"10 -143 22 134 K", "-25 -88 13 118 W", "-10 -82 18 3 m", "8 -26 26 63 9", "10 5 25 7 (", "9 87 12 103 @", "-3 -94 26 25 &", "-13 56 10 31 $", "-23 105 27 70 a", "8 89 16 118 w", "-22 -21 17 128 6", "1 10 12 50 #", "-20 35 22 102 <", "10 -36 2 129 )", "5 -82 6 26 N", "14 -4 4 7 ;", "-16 78 24 82 R", "0 -41 5 93 ,", "-22 82 20 11 "", "13 96 11 128 q", "-18 -1 14 31 ;", "-25 42 15 20 *"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---------------------------------------------------+<<<<<<<<<<<<<<<<<<<<<<", ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|----------------------", ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|#######| ", ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|#######| ", "---------------------------------------------------+#######| ", " |################################################| ", " |################################################| ", " |################################################| ", "----------|################################################| ", "9999999999|################################################| ", "--------------------------------------------------------------------------", "--------------------------------------------------------------------------", "99999|((((+------------------------------------------------+ "};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int height = 47;
    int width = 84;
    vector<string> windows = {"10 1 78 163 #", "-32 -152 47 95 Y", "-41 58 52 87 L", "33 -120 79 135 O", "8 103 52 120 i", "49 19 54 82 V", "60 48 7 102 5", "74 58 19 86 I", "93 79 8 12 6", "33 55 14 10 =", "7 147 7 29 A", "-32 -40 34 30 Z", "-24 -110 33 13 Z", "-52 53 70 135 Y", "-44 89 69 59 O", "-44 -102 14 167 !", "93 -139 48 142 M", "86 -39 30 85 $", "42 20 63 108 h"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " +---------------------------------------------------|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################|YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", " |###################################################+------------------------------", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", " |##################################################################################", "--------------+########################################+--------+###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|########################################|========|###################", "OOOOOOOOOOOOOO|#####+---------------------------------------------------------------", "OOOOOOOOOOOOOO|#####|hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "OOOOOOOOOOOOOO|#####|hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "OOOOOOOOOOOOOO|#####|hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "OOOOOOOOOOOOOO|#####|hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int height = 7;
    int width = 90;
    vector<string> windows = {"6 124 11 54 D", "2 45 12 18 H", "12 -53 5 70 D", "11 -19 11 109 4", "10 41 15 111 O", "2 94 6 135 7", "3 -145 15 152 J", "3 -127 2 20 !", "12 131 7 3 b", "-1 64 5 107 A", "-7 64 8 151 B", "6 -25 6 44 7", "4 126 2 92 s", "4 -172 4 44 N", "-14 -113 14 50 w", "6 -92 7 60 Y"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" +-------------------------", " |AAAAAAAAAAAAAAAAAAAAAAAAA", " +----------------+ |AAAAAAAAAAAAAAAAAAAAAAAAA", "------+ |HHHHHHHHHHHHHHHH| +-------------------------", "JJJJJJ| |HHHHHHHHHHHHHHHH| ", "JJJJJJ| |HHHHHHHHHHHHHHHH| ", "------------------+ |HHHHHHHHHHHHHHHH| "};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int height = 23;
    int width = 44;
    vector<string> windows = {"-39 10 6 88 7", "-6 62 26 87 1", "-16 -46 39 69 w", "45 75 27 2 0", "-41 -16 30 17 N", "43 47 19 54 0", "30 29 10 43 W", "16 73 33 14 g", "36 53 21 43 l", "-9 -57 44 20 a", "-24 -12 5 65 b", "19 37 10 61 \", "-43 24 29 59 F", "43 -31 25 28 ,"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| ", "wwwwwwwwwwwwwwwwwwwwww| +------", "wwwwwwwwwwwwwwwwwwwwww| |\\\\\\", "wwwwwwwwwwwwwwwwwwwwww| |\\\\\\", "----------------------+ |\\\\\\"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int height = 5;
    int width = 5;
    vector<string> windows = {"-1000000 -1000000 2000000 2000000 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LLLLL", "LLLLL", "LLLLL", "LLLLL", "LLLLL"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int height = 5;
    int width = 5;
    vector<string> windows = {"-100000000 -100000000 100000000 100000000 X", "-100000000 -100000000 100000000 100000000 V", "-100000000 -100000000 100000000 100000000 N", "-100000000 -100000000 100000000 100000000 R", "-100000000 -100000000 100000000 100000000 /", "-100000000 -100000000 100000000 100000000 %", "-100000000 -100000000 100000000 100000000 o", "-100000000 -100000000 100000000 100000000 p", "-100000000 -100000000 100000000 100000000 0", "-100000000 -100000000 100000000 100000000 (", "0 1 3 5 J", "-100000000 -100000000 100000000 100000000 Q", "-100000000 -100000000 100000000 100000000 y", "-100000000 -100000000 100000000 100000000 n", "-100000000 -100000000 100000000 100000000 Z", "-100000000 -100000000 100000000 100000000 \", "-3 -2 5 6 b", "-100000000 -100000000 100000000 100000000 $"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb|-", "---+J", " +---", " ", " "};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int height = 7;
    int width = 7;
    vector<string> windows = {"-5 -5 20 12 9"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999|", "999999|", "999999|", "999999|", "999999|", "999999|", "999999|"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int height = 5;
    int width = 5;
    vector<string> windows = {"-1000000 -1000000 2000000 2000000 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LLLLL", "LLLLL", "LLLLL", "LLLLL", "LLLLL"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int height = 7;
    int width = 7;
    vector<string> windows = {"-5 -5 20 12 9", "2 2 15 15 @", "2 2 3 3 *"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999|", "999999|", "99+-+--", "99|*|@@", "99+-+@@", "99|@@@@", "99|@@@@"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int height = 1;
    int width = 1;
    vector<string> windows = {"5 5 100 100 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" "};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int height = 80;
    int width = 80;
    vector<string> windows = {"3 3 8 8 L", "2 2 4 4 K", "5 9 8 6 ?", "-99999997 -99999997 100000000 100000000 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX| ", "XX| ", "--+--+ ", " |KK|----+ ", " |KK|LLLL| ", " +--+LLL+----+ ", " |LLLLL|????| ", " |LLLLL|????| ", " |LLLLL|????| ", " |LLLLL|????| ", " +-----|????| ", " |????| ", " +----+ ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int height = 5;
    int width = 5;
    vector<string> windows = {"-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J", "-50000000 -5000000 100000000 1000000000 J"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JJJJJ", "JJJJJ", "JJJJJ", "JJJJJ", "JJJJJ"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int height = 10;
    int width = 10;
    vector<string> windows = {"4 -5 2 10 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", "----+ ", "----+ ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int height = 7;
    int width = 7;
    vector<string> windows = {"-5 -5 20 12 9", "2 2 15 15 @", "2 2 3 3 *", "100 100 100 100 #"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999|", "999999|", "99+-+--", "99|*|@@", "99+-+@@", "99|@@@@", "99|@@@@"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int height = 100;
    int width = 80;
    vector<string> windows = {"0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X", "0 -500 30 100000000 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------------------------------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------------------------------------", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int height = 20;
    int width = 39;
    vector<string> windows = {"-100000000 -100000000 100000000 100000000 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int height = 80;
    int width = 100;
    vector<string> windows = {"-1000000000 -1000000000 1000000000 1000000000 Y", "-1000000000 -1000000000 1000000000 1000000000 Q", "-1000000000 -1000000000 1000000000 1000000000 R", "-1000000000 -1000000000 1000000000 1000000000 P", "-1000000000 -1000000000 1000000000 1000000000 Z", "-1000000000 -1000000000 1000000000 1000000000 W", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 /", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 A", "-1000000000 -1000000000 1000000000 1000000000 Y", "-1000000000 -1000000000 1000000000 1000000000 V", "-1000000000 -1000000000 1000000000 1000000000 d", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 3", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 5", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 e", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 7", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 f", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 3", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 d", "-1000000000 -1000000000 1000000000 1000000000 q", "-1000000000 -1000000000 1000000000 1000000000 r", "-1000000000 -1000000000 1000000000 1000000000 s", "-1000000000 -1000000000 1000000000 1000000000 t", "-1000000000 -1000000000 1000000000 1000000000 u", "-1000000000 -1000000000 1000000000 1000000000 v", "-1000000000 -1000000000 1000000000 1000000000 g", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 Y", "-1000000000 -1000000000 1000000000 1000000000 h", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 i", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "-1000000000 -1000000000 1000000000 1000000000 X", "0 0 25 100 /", "-1000000000 -1000000000 1000000000 1000000000 A"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"+--------------------------------------------------------------------------------------------------+", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "|//////////////////////////////////////////////////////////////////////////////////////////////////|", "+--------------------------------------------------------------------------------------------------+", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int height = 1;
    int width = 1;
    vector<string> windows = {"-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-100000000 -100000000 99999997 99999997 X", "-1000000 -1000000 99997 99997 X", "-10000000 -10000000 9999 99997 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" "};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int height = 10;
    int width = 10;
    vector<string> windows = {"5 2 5 2 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ++ ", " || ", " || ", " || ", " ++ "};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int height = 4;
    int width = 6;
    vector<string> windows = {"-5 -5 20 20 O", "0 0 2 2 Y", "0 0 4 6 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"+----+", "|XXXX|", "|XXXX|", "+----+"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int height = 10;
    int width = 10;
    vector<string> windows = {"0 0 100000000 100000000 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"+---------", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX", "|XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int height = 90;
    int width = 30;
    vector<string> windows = {"10 20 1000 2000 Z"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " +---------", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ", " |ZZZZZZZZZ"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int height = 5;
    int width = 5;
    vector<string> windows = {"1 0 2 2 A"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", "++ ", "++ ", " ", " "};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int height = 4;
    int width = 2;
    vector<string> windows = {"0 0 4 2 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"++", "||", "||", "++"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int height = 50;
    int width = 50;
    vector<string> windows = {"-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int height = 4;
    int width = 6;
    vector<string> windows = {"-1 0 2 2 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"++ ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int height = 80;
    int width = 80;
    vector<string> windows = {"-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X", "-99999907 -99999907 100000000 100000000 X"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int height = 50;
    int width = 50;
    vector<string> windows = {"-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L", "-100000000 -100000000 100000000 100000000 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int height = 10;
    int width = 10;
    vector<string> windows = {"2 5 5 3 L"};
    WindowManager* pObj = new WindowManager();
    clock_t start = clock();
    vector<string> result = pObj->screen(height, width, windows);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ", " ", " +-+ ", " |L| ", " |L| ", " |L| ", " +-+ ", " ", " ", " "};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5075&pm=2415
********************************************************************************
#line 2 "WindowManager.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> vi; typedef vector<string> vs; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
#define INF 2000000000 
int tcize(int n) {return n<INF ? n : -1;} 
 
class WindowManager { 
  public: 
  vector <string> screen(int height, int width, vector <string> windows) { 
    // !FDI 
    vector <string> res; 
    string s = ""; 
    FOR(k,0,width) s += ' '; 
    FOR(l,0,height) res.push_back(s); 
    FOR(c,0,Size(windows)) { 
      string t = windows[c]; 
      char c; 
      int oy, ox, sy, sx; 
      sscanf(t.c_str(), "%d%d%d%d %c\n", &oy, &ox, &sy, &sx, &c); 
      char tx[2][2]; 
      tx[0][0] = '+'; 
      tx[0][1] = '-'; 
      tx[1][0] = '|'; 
      tx[1][1] = c; 
      FOR(x,ox >? 0, ox+sx <? width) 
      FOR(y,oy >? 0, oy+sy <? height) 
        res[y][x] = tx[(y>oy && y<oy+sy-1)][(x>ox && x<ox+sx-1)]; 
      } 
    return res; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/