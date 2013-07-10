/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1157
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

class Jumper {
public:
    int minTime(vector<string> patterns, vector<int> speeds, string rows);
};

int Jumper::minTime(vector<string> patterns, vector<int> speeds, string rows) {
    int ret;
    return ret;
}


int test0() {
    vector<string> patterns = {"###..", "..###"};
    vector<int> speeds = {1, 1};
    string rows = "01";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> patterns = {"###..", "..###"};
    vector<int> speeds = {5, 5};
    string rows = "01";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> patterns = {"....#", "....#"};
    vector<int> speeds = {4, 5};
    string rows = "0111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> patterns = {"#....", "#...."};
    vector<int> speeds = {-4, -5};
    string rows = "0111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> patterns = {"##.#.", "####.", "##...", "#.#.#"};
    vector<int> speeds = {1, -1, 2, -2};
    string rows = "0123012301230123";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> patterns = {"#####", "#####"};
    vector<int> speeds = {10, 10};
    string rows = "01";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> patterns = {"#####", "#####", "....."};
    vector<int> speeds = {1, -1, 1};
    string rows = "01010101010101010102";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> patterns = {"#####", "####."};
    vector<int> speeds = {1, -1};
    string rows = "01";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
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
    vector<string> patterns = {"#....", "#....", "#...."};
    vector<int> speeds = {5, -5, 6};
    string rows = "2012";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> patterns = {"#....", "#....", "#....", "#####"};
    vector<int> speeds = {5, -5, 6, -1};
    string rows = "2012320123201232012";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> patterns = {"#.#.#", "#.#.."};
    vector<int> speeds = {6, -3};
    string rows = "000110101001110011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> patterns = {".###.", ".#.##", ".##.."};
    vector<int> speeds = {-6, -2, 4};
    string rows = "2220221120210";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
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
    vector<string> patterns = {"#...#", "#..#."};
    vector<int> speeds = {4, -2};
    string rows = "001011100011111011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> patterns = {".###.", "##...", "#.###"};
    vector<int> speeds = {2, -3, 4};
    string rows = "0100110202";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> patterns = {".#.##", "#...#", "..#.#"};
    vector<int> speeds = {-1, 3, -6};
    string rows = "0121000101201000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> patterns = {"####.", "..###", "....#"};
    vector<int> speeds = {-4, 8, -3};
    string rows = "20101120101011221";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> patterns = {".#..."};
    vector<int> speeds = {-1};
    string rows = "000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> patterns = {".###.", ".#.##", "...##", "..###"};
    vector<int> speeds = {5, 1, -4, -8};
    string rows = "22220303301321130020";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> patterns = {"..##.", "###.#", "#...#"};
    vector<int> speeds = {4, 6, -4};
    string rows = "2212002100021220020";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> patterns = {"##.#.", "###.#"};
    vector<int> speeds = {6, -6};
    string rows = "10110110001000110";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> patterns = {"..##.", ".###."};
    vector<int> speeds = {-1, 1};
    string rows = "11100010011010100";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> patterns = {"##.#.", "#.#.."};
    vector<int> speeds = {6, -2};
    string rows = "000110110111011100";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> patterns = {"#...#", "#.#.."};
    vector<int> speeds = {6, -4};
    string rows = "0110111001000101111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> patterns = {".####"};
    vector<int> speeds = {-1};
    string rows = "000000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> patterns = {"...##", ".#.##"};
    vector<int> speeds = {3, -1};
    string rows = "0011101001011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> patterns = {"#.###", "#..#.", "##.##", ".####"};
    vector<int> speeds = {1, 1, -5, 8};
    string rows = "302303012001322";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> patterns = {".###."};
    vector<int> speeds = {1};
    string rows = "000000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> patterns = {"...#.", "#..##"};
    vector<int> speeds = {-3, 7};
    string rows = "1100001011000011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> patterns = {".####", "..###"};
    vector<int> speeds = {2, -5};
    string rows = "0001110101";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
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
    vector<string> patterns = {"##.#.", "###.#"};
    vector<int> speeds = {-6, 3};
    string rows = "01111100111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> patterns = {".#..."};
    vector<int> speeds = {-1};
    string rows = "00000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> patterns = {"..##.", "#...#", "#..#."};
    vector<int> speeds = {-5, 3, 1};
    string rows = "22221201212";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> patterns = {"..##.", "#...#"};
    vector<int> speeds = {-7, 5};
    string rows = "011011001101";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> patterns = {"..#.#"};
    vector<int> speeds = {-1};
    string rows = "00000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> patterns = {".#.##", "##...", ".##.#"};
    vector<int> speeds = {4, 3, -1};
    string rows = "10201022122";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> patterns = {"####.", ".#...", "##.##", "...##"};
    vector<int> speeds = {7, -3, 8, -2};
    string rows = "203031003111101";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> patterns = {"###..", "..#..", "##.#."};
    vector<int> speeds = {7, -8, 4};
    string rows = "0012211022";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> patterns = {"####.", ".##..", ".#.##"};
    vector<int> speeds = {-4, -1, 5};
    string rows = "12021020021";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> patterns = {"###.#", "..###"};
    vector<int> speeds = {-1, -1};
    string rows = "11010011110001101";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> patterns = {".####"};
    vector<int> speeds = {-1};
    string rows = "000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> patterns = {"##.##", "#.#.#"};
    vector<int> speeds = {9, -4};
    string rows = "10011110011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> patterns = {"#.#.#", "###.#"};
    vector<int> speeds = {-1, 1};
    string rows = "10101100101110100011";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> patterns = {"...#.", "#.###"};
    vector<int> speeds = {-3, 4};
    string rows = "0011000010";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> patterns = {".#.#."};
    vector<int> speeds = {1};
    string rows = "000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> patterns = {"##..#", ".##.."};
    vector<int> speeds = {3, -6};
    string rows = "111010001011000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> patterns = {".##.."};
    vector<int> speeds = {-1};
    string rows = "0000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> patterns = {"#...#", "..###", "...#."};
    vector<int> speeds = {-2, 3, 2};
    string rows = "011001001010";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> patterns = {"...##"};
    vector<int> speeds = {-1};
    string rows = "000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> patterns = {"..###"};
    vector<int> speeds = {1};
    string rows = "000000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> patterns = {"..##.", "##.##", "##.##", "....#"};
    vector<int> speeds = {1, -5, 1, 4};
    string rows = "1121121022111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> patterns = {"#....", "..#.."};
    vector<int> speeds = {-3, 1};
    string rows = "10101010101010101010";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> patterns = {".#..#"};
    vector<int> speeds = {3};
    string rows = "0000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> patterns = {"...#.", "##..."};
    vector<int> speeds = {-8, -1};
    string rows = "1011110011111010";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> patterns = {".#.##", "##.##"};
    vector<int> speeds = {-1, -7};
    string rows = "0000111010001";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> patterns = {"##.##", "....#", "####.", "##..."};
    vector<int> speeds = {6, -3, 5, -3};
    string rows = "3211301012212113";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> patterns = {"...#.", "##.#.", "..###", ".##.#"};
    vector<int> speeds = {-6, -6, 7, -9};
    string rows = "031021013100300";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> patterns = {".####", "##.##", "####."};
    vector<int> speeds = {7, 8, -5};
    string rows = "1120220112200021";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> patterns = {"#...#"};
    vector<int> speeds = {-10};
    string rows = "0000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> patterns = {".###.", "....#", "##..#", "..###"};
    vector<int> speeds = {4, -6, -10, 6};
    string rows = "2331302311033212";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> patterns = {".#..#"};
    vector<int> speeds = {4};
    string rows = "0000000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> patterns = {"##.#."};
    vector<int> speeds = {3};
    string rows = "00000000000000";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> patterns = {"#..#.", "...#."};
    vector<int> speeds = {10, -5};
    string rows = "0111";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> patterns = {"#....", "#...."};
    vector<int> speeds = {1, -1};
    string rows = "10";
    Jumper* pObj = new Jumper();
    clock_t start = clock();
    int result = pObj->minTime(patterns, speeds, rows);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4598&pm=1157
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
 
using namespace std; 
 
bool atps[ 20 ][ 21 ]; 
bool anps[ 20 ][ 21 ]; 
 
bool (*tps)[ 21 ]; 
bool (*nps)[ 21 ]; 
 
vector< string > spans; 
vector< int > speeds; 
string rows; 
 
int tick; 
 
bool issolid( int x, int y ) { 
  if( !y ) 
    return true; 
  int ry = rows[ y - 1 ]; 
  int hshift = -tick * speeds[ ry ] + x; 
  if( hshift < 50 ) 
    hshift += tick * 20; 
  hshift %= 5; 
  return spans[ ry ][ hshift ] == '#'; 
} 
 
void place( int x, int y ) { 
  if( y ) { 
    int ry; 
    ry = rows[ y - 1 ]; 
    x += speeds[ ry ]; 
  } 
  if( x < 0 || x >= 20 ) 
    return; 
  nps[ x ][ y ] = true; 
} 
 
class Jumper { 
  public: 
  int minTime(vector <string> a, vector <int> b, string c) { 
    spans = a; 
    speeds = b; 
    for( int i = 0; i < c.size(); i++ ) 
      rows += c[ i ] - '0'; 
    tps = atps; 
    nps = anps; 
    tick = 0; 
    memset( tps, 0, sizeof( atps ) ); 
    memset( nps, 0, sizeof( anps ) ); 
    tps[ 0 ][ 0 ] = true; 
    while( 1 ) { 
      /* 
      for( int y = 0; y <= c.size(); y++ ) { 
        for( int x = 0; x < 20; x++ ) { 
          printf( "%c", tps[ x ][ y ] ? '#' : '.' ); 
        } 
        printf( "\n" ); 
      }*/   
      for( int x = 0; x < 20; x++ ) { 
        for( int y = 0; y <= c.size(); y++ ) { 
          if( tps[ x ][ y ] ) { 
            if( y == c.size() ) 
              return tick + 1; 
            if( y ) 
              if( issolid( x, y - 1 ) ) 
                place( x, y - 1 ); 
            if( x ) 
              if( issolid( x - 1, y ) ) 
                place( x - 1, y ); 
            if( x < 19 ) 
              if( issolid( x + 1, y ) ) 
                place( x + 1, y ); 
            place( x, y ); 
            if( issolid( x, y + 1 ) ) 
              place( x, y + 1 ); 
          } 
        } 
      } 
      swap( tps, nps ); 
      memset( nps, 0, sizeof( anps ) ); 
      tick++; 
      if( tick > 10000 ) 
        return -1; 
    }; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/