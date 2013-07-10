/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8243
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

class FloodRelief {
public:
    int minimumPumps(vector<string> heights);
};

int FloodRelief::minimumPumps(vector<string> heights) {
    int ret;
    return ret;
}


int test0() {
    vector<string> heights = {"ccccc", "cbbbc", "cbabc", "cbbbc", "ccccc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
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
    vector<string> heights = {"cbabcbabc", "cbabcbabc", "cbabcbabc", "cbabcbabc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
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
    vector<string> heights = {"ccccccccccc", "caaaaaaaaac", "caaaaaaaaac", "caazpppzaac", "caapdddpaac", "caapdddpaac", "caapdddpaac", "caazpppzaac", "caaaaaaaaac", "caaaaaaaaac", "ccccccccccc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
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
    vector<string> heights = {"ab", "ba"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
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
    vector<string> heights = {"zzzzzzzzzzzzzzzzz", "ccccccczzzcccczzz", "zzzczzzzzczzzzczz", "zzzczzzzzczzzzzzz", "zzzczzzzzczzzzzzz", "zzzczzzzzczzzzczz", "zzzczzzzzzcccczzz", "zzzzzzzzzzzzzzzzz", "zddddzddddzzdzzzd", "zdzzdzdzzzdzddzdd", "zdzzzzdzzzdzdzdzd", "zddddzddddzzdzzzd", "zzzzdzdzzzdzdzzzd", "zdzzdzdzzzdzdzzzd", "zddddzdzzzdzdzzzd"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> heights = {"xxxxxxxxxxxxxxxxxxxxx", "xcccccccccccxxcccccxx", "xcxxxxxxxxxcxxcxxxcxx", "xcxccccccxxcxxcxxxcxx", "xcxcxcxxcxxcxxcxcxcxx", "xcccccxxcccccccxcxcxx", "ycycyyyycyycyycycycyy", "ycyccccccyycyycyyycyy", "ycyyyyyyyyycyycccccyy", "ycccccccccccyyyycyyyy", "yyyyyyycyyycyyyyccccc", "yyyyyyyycccccccycmnoc", "pqrstcccuvwxyzzcccccc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> heights = {"aaaaaaaaaaaaaaaaaaaaa", "azzzzzzzzzzzzzzzzzzza", "azcccccccczffffffffza", "azczzzzzzczfzzzzzzfza", "azczeeeezczfzhhhhzfza", "azczegzezczfzhazhzfza", "azczezgezczfzhzihzfza", "azczeeeezczfzhhhhzfza", "azczzzzzzczfzzzzzzfza", "azcccccccczffffffffza", "azzzzzzzzzzzzzzzzzzza", "aaaaaaaaaaaaaaaaaaaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> heights = {"ababababababababababababababababababababababababab"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> heights = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> heights = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> heights = {"a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> heights = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> heights = {"p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p", "p"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> heights = {"abcdefghij", "klmnopqrst", "uvwxyzabcd", "efghijklmn", "opqrstuvwx", "yzabcdefgh", "ijklmnopqr", "stuvwxyzab"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> heights = {"ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa", "ababababababababababababababababababababababababab", "bababababababababababababababababababababababababa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> heights = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> heights = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ababababababababababababababababababababababababab"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> heights = {"cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcb"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> heights = {"yjlawqdlmeofyrrhzjpcmconsocprpxoznkbfczejyxmlkzqti", "dmlvzutcxbtijxnnagmhmaysahwovxpwtmvdygcrgybiwjqjot", "hzhryxmhzuqxfcgirhtjvdxjkxpiwatbjjdalmxntgjqmcxlae", "octohnrypiunobtefwiiixeqrvbbaazqwcekfsperywzkfwejs", "cltisbvmxhrgmtyvnvfjpalyncyujqkmxpzhzodojiciwzombv", "fyvxrzqhqczdyqpcrlfuowekxkrqoybspprebsunhszrjbuxeo", "rzcqalwagqaeoesacswnyrvyoomgkachhjnkfhdpuwyaeswykv", "dnlpdzdyhqcyqlsxteukhreanhpvptezadwxsoljfryriebzly", "pxiteogbllrvkchhebqbfkorfuspvcizbdgdithueadzwbaron", "keensxgqnaldyctgqlkhxcayznqixalcaklncnresiinxeqmaz", "keznrwhswqhjnlwlwjfbprzedfixhwrrglqewxunrmwawmvwkc", "houzbtvrnwqxzfxvdbvbownjddwektcgyeoqpnufeptfroefpo", "vkpigzwgknwewxuicwazzsvfbysncjefkoozbwudxclakqrulb", "nyrrlvpzhuxjxcmuyfyrmcnrsoowacjhjoskoranfglwhjqpqh", "zwvrdxtiufulpigweywagqmrkqgzwvctjgegtentjgplvrwhlp", "mqxvjhxwyhqcubwpfhiomdmgioicsgxskcrinexgymocdvlqrb", "kxugzibpizaeussyeisowjilbytdbmxywgaoenimwrwmxobgyc", "nnkpdizphqvxrxosrujgwdigktjnyduwodbljybbptazjuhrsc", "fzpdrdjbedzbhaxneicaeujnvhmuiriyxyxalrtmyohqtizpwo", "njqddqrwzukttggendaeoxigsefclwumepjpsdjlknjwtglrqw", "yvtqtcdfxfrntwkhyedgbouzfhuuxqgcqnpoqmunwyhyedqjjw", "zylxzrpiphtiejwbtedcjvztigdufrcvcmitjsfahbemcmvocb", "ftlnyyinaevhoyswidngedjilnebwfabjsqrydzwlaowbedgvn", "hhianqjlceudtiniveiqydkdrixurdugcgvyywqldgaqysttih", "nxcqdprgawctnflsmeiyycbuapiacgdhmjujqolbiuqtunqtgp", "frgiwkyjrwbsdhbvzjmhobrjbsudvuuawpheoxfivenmhiwbxm", "oqpqfnppywfxxcabpzjlkoakappxlwtgefsnbkyyeannbwvtsl", "ktfzdjrzpenldkurdzmcxicpsqaukfwnsprhnthqfdqigbjtzx", "ktjerayohwikvnjcisnffkaicjwwhjxhhfugymtdwszcfoljrl", "silnhdblfbyrkhnixdavjfpwcqccwfuytxhkggziquoykmxjfn", "gbqzdjpiynatzxwilqxjkcxycnwiclmsofpjgcuiujhjrxgcoh", "kaupnzjqshrazocdwfuqlgydorjbupeswtwuuiyfncmhzuznyw", "eciwvvjlvdsyiltizzlxloskmnvvjruydybthgawipwbiqlmex", "oyszotssevpsqcmgyjfbrsdipsenumwotcbpnygvbopqgvvsxq", "kcftaflclqthlflvvnktqixbqmbwidgxubuackgeosqusbbgus", "ezvrlgzmyfpyyuchqpmekjkpxbuqpyqfbvkrnscqskfnjgspfb", "nxenvzjhfsngtnsqdbavsqoixhrjarwfwletyramkdzwxypyfu", "lpmvzrbfrnubtbsmhroabrfneraxhbkupmneppxdhfkaznipnr", "mzufabgvcyarfbezekqcbopmudlqqyykvcrhrpkgednctleojc", "doudepdfopuuemhbbxgoddlxksualqqsbenwnqvhaxkzqdekjr", "prbegektfousrhynetlgqhgwcuhiuvubomvonhdpaynbehguvg", "jgjbotdwjtkkfaxalswzgfpwlnlkuexgbnrjpqkrjdhmfmgdub", "bbpzjdadwsoibtxpisjpaxdsxquhqrqeplryyfmwxlgpdzwuvg", "bvwjgurdikustbypyppstyulbjjnurfhzdmcomcpiehqjaokih", "dcfffwjijphjlofzqrproclxktamirdcdvushyaocmkawwalup", "wcffbqunqimtlxrflnquubdyqfbajkvlkmtbgevuwkkzjtjrbg", "vfsprbkretdmurhcfzqiypykqeuvvnuvtshbswkmnbgsadvdtx", "zkklkwxuqkmfworkhndidvilqnznhpcycuesrtipzqwcuyydgk", "zkhqaqbpxkjbpjqwjrmvjqnzivwmiqzmqembvjxcuckshquhls", "ubmovwwzlhirmyxgqjsistgedqaezbjdbleqgutmevuiujkaym"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> heights = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "ccccccccccccccccccccccccccccccccccccccccccccccccba", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacba", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacba", "abcccccccccccccccccccccccccccccccccccccccccccbacba", "abcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbacba", "abcabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacbacba", "abcabcccccccccccccccccccccccccccccccccccccbacbacba", "abcabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbacbacba", "abcabcabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacbacbacba", "abcabcabcccccccccccccccccccccccccccccccbacbacbacba", "abcabcabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbacbacbacba", "abcabcabcabbbbbbbbbbbbbbbbbbbbbbbbbbbacbacbacbacba", "abcabcabcabcccccccccccccccccccccccccbacbacbacbacba", "abcabcabcabcaaaaaaaaaaaaaaaaaaaaaaacbacbacbacbacba", "abcabcabcabcabbbbbbbbbbbbbbbbbbbbbacbacbacbacbacba", "abcabcabcabcabcccccccccccccccccccbacbacbacbacbacba", "abcabcabcabcabcaaaaaaaaaaaaaaaaacbacbacbacbacbacba", "abcabcabcabcabcabbbbbbbbbbbbbbbacbacbacbacbacbacba", "abcabcabcabcabcabcccccccccccccbacbacbacbacbacbacba", "abcabcabcabcabcabcaaaaaaaaaaacbacbacbacbacbacbacba", "abcabcabcabcabcabcabbbbbbbbbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcccccccbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcaaaaacbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcabbaacbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcabbcccbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcabbbbbbacbacbacbacbacbacbacba", "abcabcabcabcabcabcabcaaaaaaaacbacbacbacbacbacbacba", "abcabcabcabcabcabcabccccccccccbacbacbacbacbacbacba", "abcabcabcabcabcabcabbbbbbbbbbbbacbacbacbacbacbacba", "abcabcabcabcabcabcaaaaaaaaaaaaaacbacbacbacbacbacba", "abcabcabcabcabcabccccccccccccccccbacbacbacbacbacba", "abcabcabcabcabcabbbbbbbbbbbbbbbbbbacbacbacbacbacba", "abcabcabcabcabcaaaaaaaaaaaaaaaaaaaacbacbacbacbacba", "abcabcabcabcabccccccccccccccccccccccbacbacbacbacba", "abcabcabcabcabbbbbbbbbbbbbbbbbbbbbbbbacbacbacbacba", "abcabcabcabcaaaaaaaaaaaaaaaaaaaaaaaaaacbacbacbacba", "abcabcabcabccccccccccccccccccccccccccccbacbacbacba", "abcabcabcabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacbacbacba", "abcabcabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbacbacba", "abcabcabccccccccccccccccccccccccccccccccccbacbacba", "abcabcabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacbacba", "abcabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbacba", "abcabccccccccccccccccccccccccccccccccccccccccbacba", "abcabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbacba", "abcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacba", "abccccccccccccccccccccccccccccccccccccccccccccccba", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> heights = {"a"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> heights = {"z"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
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
    vector<string> heights = {"bedbdabdddfedabceccabafbafdbfabbfdabbfcbbabdaedcb", "dbadaaafcbabdbaeafedccfafbbbadfcaedaeadbfeddbddcc", "badaececfebeaceefeaedecccfacacafbbaccadbcfebdcedc", "ccbdbccaeebbafeecedfcabeefdeacdaedafececdbefaaebd", "bfaebabbcbbeeffcadefffacdfddcedccdfbfecaddfdcbedc", "afbbcdfecacefabeeddfdbbceebdecaaddaccafabbbeddeba", "fcacaeddebeceecededffdaeaafdfccfbfadbcdfdfdbfeace", "fbafdfadbdababaedbecffbeecbdeeafdadcefabacebbbcdb", "bbfcffbebdecadfebdfbeebceffbdaadcaeadaaeafccfefbe", "fbeddefddfecaadbeccbceecffafecfaeedeadecfcbcacddf", "baccfbdbaefdfeeddececacccefbfaebedbacaddfafecfdde", "dcbacbaaefaeddbfabdeecaceefdbcbadbaabdaaedcbabbfc", "bdabffffaeccadbffadebdafedaddffdbaadcadaaaddcbbef", "abfdcddcfbaaedfcfdbcadcdeeddcaedfdeddbcafdeecafcd", "eebbeebfbafcdcebfbdbedcbafdeccfcbecbfbffcfbebecdb", "cecffffbaaafceaacafdcbeecdcbeeecddccbbfeabbebcedf", "cbfeedfbafddbccebeeabaadeedabafafeffbafeafadffaac", "bdeecbabbfbeecabefdecddefdcffddecacbbbcafeffebbee", "cabfdaceaacfffaebccfeebcedeacbecadcabedefcfdeccdc", "fdefafcdaeabfefebccfaaabfdcdafdcabebacfaeafeaaabf", "eabcbbcdbccdeeffbbcfbaaebbdeeaaabcbfcbccbedcbdcda", "dbfcfbcdcefaedbdebfdaaefbfbecbccbfadbabccbcacdcbf", "eefabdabecabcbbcfcfccdbaadaffeefeedbcbcacedbcbeea", "abffceeaeccdcedddefdaaabcdfbdafbaaecedfeaebcbecab", "bddfebfedebceccceadcfccaaeafaaeddffaecbcbeeccdbbb", "fccfccdbaedebecfbfaebbdcfaccaedbbbdfcbfbbfdefabbc", "fcbbabdfdafccebeefeceedaaceddebdfabdcbedeadebfacd", "dadbabbdebeabbefeebbeffbaaedabcdbefeecbffaadeddef", "afffdfdabbebbddcceacafcdeafaefbeddeedcdbecdabdefc", "efcbcfafdadadfdbaebafcabdafffaadaafcfdbbfedcaafbc", "fcaeffdaeadcfcfeecbecbddeeefccebddfabfedbbdbfeacd", "dfbedefaadffbeebeaddfafdddcbddbeabfddadacffbdcccb", "fadabdbabfffbcdbbcfdddffdfaecccdadcedbecafdedefbf", "daeeeadededcffacbadefadadaaacbeaacaefaebfbcadeccf", "adaefbffecdfddedcdccaeddfccbafffcfaabfebebcabefad", "feaebabcedccefbbcecdeefdcdbbdaffbfddcdebfefdffafc", "acffeacfdbcdfebdfcaeacfeefaacaccbecabaccacedaffff", "aeaadacdfedabaaaaaaafdddbbacfdffdcbcfcbccdcabedbc", "bbfdabcefecacbbbabbefdfcbfcebaacbebdfcbbdbbaadcce", "aebbcdbafffcdeafbedfadaabdadddccafecbeafafabcdddf", "daedbfbfcfefccffccdadccbbcdccfcbadfceacabccceeaaa", "eacdfcececbebcdedadcadadfacddbbcfccabfcadffedebeb", "cbebceaafaecdefccbeadabedcbacdcebbbdebfabfdfdcebd", "dfcbdeddefcbebcdcffbdfdcbddefaaeebedefdbabbfcbeaa", "afadcccecbfbbfabdaacbbbfebcdedccdafbdecffbebcccbd", "fcfccdafeacfcabfffebdacaaaafcfecefdfeffabfaaddddd", "afaefcadefedbeaffddccfcfbcfdebfbafcdbfefaaaabaafc", "feaffcddbdaddffcfdccbddabedbaceccdbcbcebeefcbfafe", "cfbacedadabeefbabccbfecdbfaeccbdcdbbcbdcaadcaaccf"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 397;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> heights = {"bejigjeidbcdjjdggjhghhgdigedefiafagahjaajcaceggabh", "dcedjcadgchjjgdheabefiefijecajcfjgajhhefjjagaiagaa", "gacefiiffhhabaihfjfacfifhggjejgheggfhbehicdedfhgbd", "gjcfdfgbagejhbhdeiacddbbbiiddfiggafebhiajhjgacdhbi", "bgbcjbiidebfhaijeibafdagccgbaiahjdccdbdhehgcidjcjh", "jjbbaegdbjghafgfidfiadcegcichdadceiifhehfcdcahehfj", "chbhfdbhedaaefiffbgajbafggbgecefcdiecgdjiehjbbedbh", "bfbedhfdfgheaieedabjifdahafehidejbgdbiibjffaacfjch", "ecfbfbaiggiafacdbjecjcgjdjcaefgiddfecagbdfhhdjjhha", "fgeibhefeeabjhgfbhjdadjehfajaibfdfjhjigeghhggejjgj"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> heights = {"vbhlhnjnad", "nqrlaxbszm", "faqjbkbcvk", "dqukyzhzvw", "biznwzkyyi", "raymtvjemp", "pnyeulxadc", "phxobymcpv", "jfxvakqgny", "ryudiqwddp", "vuvkjljqzu", "wkgbtlosrn", "cjzumkrbgl", "izojrzndrq", "aptxtiuqjy", "ycmfmwqcis", "hlgxrtwwgx", "cbgrshwusy", "mmxaltodew", "gwjhfrdusk", "extstkttug", "zuucugbwjo", "qyiznpshyw", "lplgnhwhwk", "etdvoyikzi", "lcmrokoway", "fufsykemli", "tibzdkfvlu", "fetpdivmua", "vbrpvrised", "meevkmelzk", "cxdxfftprh", "zzxsytqwoh", "gxmkptvmqr", "behxbsuivs", "ipfqzzwpbr", "jartviqgrb", "pyekfdeypw", "bbeqynkhns", "apvcawgusn", "avhbaihcnf", "atqifyxecz", "dvhtfibkyq", "ibpodscrsr", "htrknltyza", "mmuqtjzknv", "zdruhyatzw", "sycserxpsa", "myidzyiqum", "ozmbcwjuvw"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> heights = {"mjjllfdjalcjfajcccdkaecjjcijlgldgjfijceehdlljafacf", "clgfkabhackclhljfafjheefbfadllheaimcmcbkdmaehbmhdg", "lmkikdmligmicdiljlemljefmcifieekbgajgkimakdglhhmah", "fmaklajdaemkgbbfblgjffcafhaijmkcieiefhbdijggheabab", "gdgbkdbcaebkjdgcibilgejkhmkbdckchlehcleikfcmieaehc", "illbjilbfemaiccdjechkfakbffeafkfgdmjgeiahcgbljhebf", "ibmagkilgfiefkggcdiaaahhdiicmhkghlbkeblmccdiihbkab", "adkddggfgkchlklfmfcicgbjjclhihabldgmcdiahcekbgeggg", "dgacgdimahhjmccjllldlihhebidfemcehljfhggkgccdlkcjf", "kaeaddeimjlciblcgdkedifkaaeiecmjkmbkmibhcdgfeakccf", "iciadimiibgkhekkaccgcmgbagijemejkdcmlekadmhdjledld", "ibdcgagmhjajiijmimkhcchhmkhemhcmjlhklamiljaghilgbg", "ijkmaaiclddldeajlgfgljhamfbdgemjmbeifjldhhbgajmmkk", "cmbeclkliakaichhimladjmkamchffdfdfgcfmmaikjcihjffg", "jeifdmfcbegacflldcdjliacgaagmbadmbmaedkbjkacbaehgm", "ffhfdemlemmdfdcfigmegggbhkbgcbelkclejgbamlhdfikjii", "balkjkbilakmfalaflllldbabfjbcgifdmbmhlggkglkkekifc", "glijbedfcbhebffgfhfemmgmhdimlkgakjkckjcheidlhbehaf", "fjelkgkklfbjghhldmdicehicikhcbhmelbhaiblklakafehhm", "ackgjjgdffdmmldcjhdgdjhbdccjckhddmlgbldiaemgcfhdlg", "ffgbmlmeadedafdlllhdmaldfamfilmebchggbibegejemklgl", "lldfhjgdkfcaalbbkmdhlbejjbbakeffccllcljgllamifgcdj", "ahelcghaddkhhghfaljmmalclcakddkgljmjahigjcbjcmfmik", "gdgfebiecjjfdaaadjdilafmhcffeimglflkeamiaahkeblmjg", "bcjkjjgbaalmfaeeajkbggflegcfehihlehkbamgdidbibkgla", "kjjbigbgchlegglbhakdmgfahchldklmilkedfajcgmgcklmge", "allaimiicmlkedcggmghbajkghmhgaegcjmjbhbjjmmgdfblfj", "jhhmcglkahbfadkclkllaiakbgfceejmhagcmebjbfambbgdem", "edmimfgkgdiildlmfhhfefafkjdmembddhbcgmbbcgldldmjif", "bhdahiamkeahblfmglcljabehhcjdmkaaaidjlajgmaikgfkbd", "ldeidbijfjacidliihjgeilbfmbklkfijaclkkkmfejkkjcgli", "bbalfjklehagmambgghghmdkhkkjihmlleedlaebhjmkfcfcim", "lejiajmecdhiieealfigcbbeaemjaklachdkmmdlabedkfgalm", "jbebhffkbbhcahkdbbahmjagmblbklhgceehkbkigfekiejbam", "ajicclmbhcclcdlhfgimjdcahkdfdckljkgkjhhdedebmbdjmf", "mdghkehmfblklcfgagiiklljfdhkifdfimmhhfghhfmkgcafde", "bmmljbbmgklabiabbgbcicbkljbhaiibddmfelhjedbfdijaai", "jemelheamfgkfghjcelfkbikhiigimdihajmdfkkllfheehlid", "dgkdelbabblgljlgdchamcakhibjbghaejealghlegamelglfi", "chlbgeghflbbciiiedfghjjfbjiefjbgjbggheahfejejlmelf", "mlcimlgdibbeikibfjagaeegbhemkcfkbjleaklbchimljkikc", "kicbhajgjcjlcgffhkdamedhlhbehadeeimhdbelbmlkidlhib", "cbfkjhleifllddaehibccfgbgckdmfgfichlgeffhjijglccmi", "gmhhljhfeheakgggafkeicimhbhlemfemhhfjhmmjijccgeeef", "ffdaklmaffmbkidbeblheaedmekijggehmlbejlmdmgdcbkddg", "lcjcbidhgkllmllkhbiffchelgmmjfdmhdkmibflblfjchdffb", "bjhldmhmiihaadaabigaabgfghlffldicckhmmeejhclgckkdk", "jbeaaclcmhkichgaflmlefhdkdfmjiehjebleehlamiabafbik", "glmmemjjdbggimalaehllcfaklkfmiekmjbkchcfliikdiaaal", "halhlcjjgibelladbaeembkdgmhmijefldfklmlmamhmlglllg"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> heights = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaazzzzzzzzzzzzzzzzzzzzzzzzzzaaaaaazzzzzzaaaaaaaa", "aaaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzaaaaaaaa", "aaaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzaaaaaaaa", "aaaaazzzzzazzzaavaaaaaaaaaazzzzzzzzzzzazzzaaaaaaaa", "aaaaaazzzzazzzaavaaaaaaaaaaaaaaaaaaaaazzzzaaaaaaaa", "aaaaaaazzzzzzzaavvvvaavvvvavvvaaaaaaazzzzzaaaaaaaa", "aaaaaaazzzzzzzaavaavaavvvvavaaaaaaaaazzzzzaaaaaaaa", "aaaaaaaazzzzzaaavaavavvavvavaaaaaaaazzzzaaaaaaaaaa", "aaaaaaaaazzzzzaavvvvaavvvvavaaaaaaazzzzzaaaaaaaaaa", "aaaaaaaaaazzzzzaaaaaaaaaaaaaaaaaaazzzzzaaaaaaaaaaa", "aaaaaaaaaaazzzzzaaaazzzzzzaaaaaaaazzzzzaaaaaaaaaaa", "aaaaaaaaaaaazzzzzzzzzzzzzzzzzzaaazzzzzaaaaaaaaaaaa", "aaaaaaaaaaaaazzzzzzzzzzzzzzzzzzzzzzzzaaaaaaaaaaaaa", "aaaaaaaaaaaaaazzzzzzzzoooozzzzzzzzzzaaaaaaaaaaaaaa", "aaaaaaaaaaaaaazzzzzzoooooooozzzzzzzzaaaaaaaaaaaaaa", "aaaaaaaaaaaaaazzzzzzzoooooooozzzzzzzaaaaaaaaaaaaaa", "aaaahhhaaaaaazzzzzzzzooooooozzzzzzzzzaaaaaaaaaaaaa", "aaaahohaaaaaazzzzazzzzzoooozzzzzazzzzaaaaaaaaaaaaa", "aaaahohaaaaazzzzaazzzzzooozzzzzaaazzzzaaaaaaaaaaaa", "aaaahohaaaaazzzzaaazzzzzoozzzzaaaazzzzaaaaaaaaaaaa", "aaaahohaaaaazzzzaaaazzzzzzzzzaaaaaazzzzaaaaaaaaaaa", "aaaahohaaaaazzzaaaaaazzzzzzzzaaaaaazzzzzaaaaaaaaaa", "aaaahohaaaaazzzaaaaaaazzzzzzaaaaaaaazzzzaaaaaaaaaa", "aaaahohaaaaazzzaaaaaaazzzzzzaaaaaaaaazzzaaaaaaaaaa", "aaaahohaaaaazzzaaaaaazzzzzzzzaaaaaaaazzzaaaaaaaaaa", "aaaahohaaaaazzzzaaaazzzzzzzzzzaaaaaazzzzaahhhaaaaa", "aaaahohaaaaazzzzaaazzzzzhhhzzzzzaaaazzzzaahhhaaaaa", "aaaahohaaaaaazzzaazzzzzahhhzzzzzaaaazzzaaahhhaaaaa", "aaaahohaaaaaazzzzzzzzzaahhhazzzzzaaazzzaaahhhaaaaa", "aaaahohaaaaaazzzzzzzzhhhaaoaazzzzzazzzzaaahhhaaaaa", "aaaahohaaaaaazzzzzzzahhhhhhaaazzzzzzzzzaaahhhaaaaa", "aaaahhhaaaaazzzzzzzaahhhhhhaaaazzzzzzzaaaahhhaaaaa", "aaaaaaaaaazzzzzzzzzzzaaahhhaaazzzzzzzzzaaahhhaaaaa", "aaaaaaaaazzzzzzzzzzzzzaaaaaazzzzzzzzzzzzaahhhaaaaa", "aaaaaaaazzzzzzaazzzzzzzzzzzzzzzzzzzzzzzzhhhhhaaaaa", "aaaaaaazzzzzaaaaaazzzzzzzzzzzzzzaaaazzzhhhhhhaaaaa", "aaaaaazzzzzaaaaaaaazzzzzzzzzzzzaaaaaazhhhhhaaaaaaa", "aaaaaazzzzabaaaaaaaaaaaazzzzzaaaaaaaahhhhhhzaaaaaa", "aaaaaazzzartjaaaaaaaaaaaaaaaaaaaaaaaahhhhhzzaaaaaa", "aaaaaaaaaivldejiaaaejiaaaaaaaaaaaaaaahhhhzzzaaaaaa", "aaaaaaaaamvplunrqafunrqaaaaaaaaaaaaaahhhaaaaaaaaaa", "aaaaaaaaadvfnrahvcnrahvcaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaadvfltajubltajubaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaadvfcruujacruujaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> heights = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzaaaaaazzzzzzzz", "zzzzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzz", "zzzzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzz", "zzzzzaaaaazaaazzezzzzzzzzzzaaaaaaaaaaazaaazzzzzzzz", "zzzzzzaaaazaaazzezzzzzzzzzzzzzzzzzzzzzaaaazzzzzzzz", "zzzzzzzaaaaaaazzeeeezzeeeezeeezzzzzzzaaaaazzzzzzzz", "zzzzzzzaaaaaaazzezzezzeeeezezzzzzzzzzaaaaazzzzzzzz", "zzzzzzzzaaaaazzzezzezeezeezezzzzzzzzaaaazzzzzzzzzz", "zzzzzzzzzaaaaazzeeeezzeeeezezzzzzzzaaaaazzzzzzzzzz", "zzzzzzzzzzaaaaazzzzzzzzzzzzzzzzzzzaaaaazzzzzzzzzzz", "zzzzzzzzzzzaaaaazzzzaaaaaazzzzzzzzaaaaazzzzzzzzzzz", "zzzzzzzzzzzzaaaaaaaaaaaaaaaaaazzzaaaaazzzzzzzzzzzz", "zzzzzzzzzzzzzaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzz", "zzzzzzzzzzzzzzaaaaaaaakkkkaaaaaaaaaazzzzzzzzzzzzzz", "zzzzzzzzzzzzzzaaaaaakkkkkkkkaaaaaaaazzzzzzzzzzzzzz", "zzzzzzzzzzzzzzaaaaaaakkkkkkkkaaaaaaazzzzzzzzzzzzzz", "zzzzssszzzzzzaaaaaaaakkkkkkkaaaaaaaaazzzzzzzzzzzzz", "zzzzskszzzzzzaaaazaaaaakkkkaaaaazaaaazzzzzzzzzzzzz", "zzzzskszzzzzaaaazzaaaaakkkaaaaazzzaaaazzzzzzzzzzzz", "zzzzskszzzzzaaaazzzaaaaakkaaaazzzzaaaazzzzzzzzzzzz", "zzzzskszzzzzaaaazzzzaaaaaaaaazzzzzzaaaazzzzzzzzzzz", "zzzzskszzzzzaaazzzzzzaaaaaaaazzzzzzaaaaazzzzzzzzzz", "zzzzskszzzzzaaazzzzzzzaaaaaazzzzzzzzaaaazzzzzzzzzz", "zzzzskszzzzzaaazzzzzzzaaaaaazzzzzzzzzaaazzzzzzzzzz", "zzzzskszzzzzaaazzzzzzaaaaaaaazzzzzzzzaaazzzzzzzzzz", "zzzzskszzzzzaaaazzzzaaaaaaaaaazzzzzzaaaazzssszzzzz", "zzzzskszzzzzaaaazzzaaaaasssaaaaazzzzaaaazzssszzzzz", "zzzzskszzzzzzaaazzaaaaazsssaaaaazzzzaaazzzssszzzzz", "zzzzskszzzzzzaaaaaaaaazzssszaaaaazzzaaazzzssszzzzz", "zzzzskszzzzzzaaaaaaaassszzkzzaaaaazaaaazzzssszzzzz", "zzzzskszzzzzzaaaaaaazsssssszzzaaaaaaaaazzzssszzzzz", "zzzzssszzzzzaaaaaaazzsssssszzzzaaaaaaazzzzssszzzzz", "zzzzzzzzzzaaaaaaaaaaazzzssszzzaaaaaaaaazzzssszzzzz", "zzzzzzzzzaaaaaaaaaaaaazzzzzzaaaaaaaaaaaazzssszzzzz", "zzzzzzzzaaaaaazzaaaaaaaaaaaaaaaaaaaaaaaassssszzzzz", "zzzzzzzaaaaazzzzzzaaaaaaaaaaaaaazzzzaaasssssszzzzz", "zzzzzzaaaaazzzzzzzzaaaaaaaaaaaazzzzzzassssszzzzzzz", "zzzzzzaaaazyzzzzzzzzzzzzaaaaazzzzzzzzssssssazzzzzz", "zzzzzzaaazigqzzzzzzzzzzzzzzzzzzzzzzzzsssssaazzzzzz", "zzzzzzzzzreowvqrzzzvqrzzzzzzzzzzzzzzzssssaaazzzzzz", "zzzzzzzzznekoemhjzuemhjzzzzzzzzzzzzzzssszzzzzzzzzz", "zzzzzzzzzweumhzsexmhzsexzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzweuogzqfyogzqfyzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzweuxiffqzxiffqzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzyzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> heights = {"aaaaazzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaa", "aaaaazzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaa", "aaaazaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaa", "aaaazaazzaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazaaaaaaaaa", "aaaazaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaazazaaaaaaaaaa", "aaazaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaazazaaaaaaaaaaa", "aaazaaaazaaaaaaaaazzaaaaaaaaaaaaaaazazaaaaaaaaaaaa", "hhhhhhhhhhhhhhaaazzazaaaaaaaaaaaaazazaaaaaaaaaaaaa", "aazaaaaazaaaaahhhaaazaaaaazzzzzzazazaaaaaaaaaaaaaa", "aazazzzazaaaaaahhhhazaaazzaaaazzzazaaaaaaaaaaaaaaa", "aazaaaazzzaaaahaaohhzzzzoooooooooozzzaaaaaaaaaaaaa", "azaaaaaazazzzhzooaazhzzzzzzzaaaazzaazoaaaaaaaaaaaa", "azaaaaaazaaaahoaazzzhzaaazzzaazzazaazaoooaaaaaaaaa", "azaaaaaazaaoohzzzzaaohooozaazzzzzaaazaaaooaaaaaaaa", "azaaaaaazaoahazazzaoahhazozzazaazzzazaaaaaoaaaaaaa", "azaaaaaazoaahzzzaaoaaahhzzoaazzazaazzaaaaaoaaaaaaa", "azaaaaaaoaaazazzazozaazzhaaoazazaaaazzaaaaahaaaaaa", "azaaaaaaoaaazazzzaozazhahaaaozzzzaaazazaaahaoaaaaa", "azaaaaaaoaaazazzaaoazzhahaaaozzazaaazaazhhaaoaaaaa", "azaaaaazoaaazazzzzzzzzhzzhzzzohaazaazahhzaaaaoaaaa", "azaaaaazoaaazzazaazozzhaahaahhhaaazhzhaazaaaaoaaaa", "azaaaaazoaaahzazazaaoahaahhhhaoahhhazaaaazaaaaoaaa", "azaaaaazoaazhazzzaaaozhhhahaaahhaaazzaaaaazaaaoaaa", "azaaaaazoazahaazzaaaahhaaahhhhoaaazzzzaaaazaaaoaaa", "azaaaaazozaahaazzhhhhahzhhahaaoahhhzhhaaaaazaaoaaa", "hzaaaazaaoaaahzhhzaaahhhzaahhhhhzaazzahhaaazooaaaa", "ahhaaazazoaaaazaazzhhhhaohhahaozaaazzazzhooozaaaaa", "azzhhhhhhhhhhzaahhhzzzhhhhhhhzozaaazzaooohaazaaaaa", "aazahhhhaoooozhhhhhhazzzaazzhhoooozoooozaahazaaaaa", "aazhazzahhhhzhhhhhozzhaazzazhohazzzaazazaahazaaaaa", "aahazazaaooazhahaazohaaaaazzzzzzzaaazzazaaahzaaaaa", "ahzzaazaaaohzhahazaahoaaaazohzhzaaaazazzaaahzaaaaa", "hhzaaazaahhozhazhaaahooaoooahahazzzazazzaaahzaaaaa", "haaaaazahzaazhoohooohoooaazahahzaaozooozooaahaaaaa", "haaaaazahaaazhzaahaahaaoaazaahhoooazaaaazaoahaaaaa", "haaaaazhzaaaazhaahaahazozaazahoazazaaaaazaaohaaaaa", "hhaaaahazzzaazzaahaahazooooohhoooazaaaaaazaohaaaaa", "ahazzhazaazaazazahaahooaozhhahzzzzoaaaaaaazahaaaaa", "aahzahazaazaazzazhoohzaahhzohaaazaaoozzaaazahaaaaa", "aaahhzazazzaaazaazhhhhhhoaoahaazaaazzoazaazzhaaaaa", "aazzhhhhhhhhhhhhhhzzhhaaozohzzzaaazaaaozzzahzaaaaa", "aazhaaaazaaaaaoohaaazzzzzzzzaaaaazaaaaaozahaazaaaa", "aaahzaazzaaaaaozhaaaaahhhhoaaaaaazaaaaazohaaaazaaa", "aaahzzzzaaaaaaahooaaaoaazhhhzaaaazzaaazhhzaaaazaaa", "aaahaaaaaaaaaahazooooaazaaaohhhhhhhhhhhoaazaaaazaa", "aaahaaaaaaaaahaazzaaaazaaaaaoooooooooaaaaazaaaaaaa", "aaahaaaaaaahhaaaazzzzzzaaaaaaaaaaazzaaazzzaaaaaaaa", "aaahhaaaaahhaaaaaaaaaaaaaaaaaaaaaaaazzzaaaaaaaaaaa", "aaaahaahhhaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaahhhaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> heights = {"zzzzyyyyxxxxwwwwvvvuuuuutttssssrrrrqqqqppppoooonnn", "zzzyyyyxxxxwwwwvvvvuuuttttssssrrrrqqqqppppooonnnnm", "zzyyyyxxxxwwwwvvvvuuuttttssssrrrrqqqqppppooonnnnmm", "zyyyyxxxxwwwwvvvvuuuutttssssrrrrqqqqppppoooonnnmmm", "yyyyxxxxwwwwvvvvuuuutttssssrrrrqqqqppppooonnnnmmmm", "yyyxxxxwwwwvvvvuuuutttssssrrrrqqqqppppooonnnnmmmml", "yyxxxxwwwwvvvvuuuutttssssrrrrqqqqppppooonnnnmmmmll", "yxxxxwwwwvvvvuuuutttssssrrrrqqqqpppoooonnnnmmmmlll", "xxxxwwwwvvvvuuuttttssssrrrrqqqqppppooonnnnmmmmllll", "xxxwwwwvvvvuuuttttssssrrrrqqqqpppoooonnnnmmmmllllk", "xxwwwwvvvvuuuutttssssrrrrqqqqppppoooonnnmmmmllllkk", "xwwwwvvvvuuuttttssssrrrrqqqqppppooonnnnmmmmllllkkk", "wwwwvvvvuuuutttssssrrrrqqqqpppooooonnnmmmmllllkkkj", "wwwvvvvuuuutttssssrrrrqqqqppppoooonnnmmmmllllkkkkj", "wwvvvvuuuutttssssrrrrqqqpppppooonnnnmmmmllllkkkkjj", "wvvvvuuuutttssssrrrrqqqqppppoooonnnmmmmllllkkkkjjj", "vvvvuuuttttssssrrrrqqqqppppooonnnnmmmmllllkkkkjjjj", "vvvuuuttttssssrrrrqqqqpppoooonnnnmmmmllllkkkkjjjii", "vvuuuutttssssrrrraadfghgfdbaaaanmmmmllllkkkkjjjiii", "vuuuutttssssrrrrqadgiklkjhebaaammmmllllkkkjjjjiiii", "uuuttttssssrrrrqqcgjmopomkhdaaammmllllkkkkjjjiiiih", "uuutttssssrrrrqqqehlorsspmjfbaammllllkkkkjjjiiiihh", "uutttssssrrrrqqqqfjmquwvsokgcaamllllkkkjjjjiiiihhh", "utttssssrrrrqqqqpfjnrvywsokgcaallllkkkjjjjiiiihhhh", "tttssssrrrrqqqqppeimpsutrnjgcaalllkkkkjjjjiiihhhhg", "ttssssrrrrqqqqpppdhknpqqoliebaallkkkkjjjjiiihhhhgg", "tssssrrrrqqqqppppbehkmmmkifcaaalkkkjjjjiiiihhhhggg", "ssssrrrrqqqqppppoacegiiihfdaaaakkkjjjjiiiiihhhgggg", "sssrrrrqqqqppppooaabdeeedcaaaaakkkjjjiiiihhhhggggf", "ssrrrrqqqqpppoooonnnnmmmmllllkkkkjjjjiiihhhhggggff", "srrrrqqqqppppoooonnnmmmmllllkkkkjjjjiiihhhhggggfff", "rrrrqqqqpppoooonnnnmmmmllllkkkjjjjjiiihhhhggggfffe", "rrrqqqqppppooonnnnmmmmllllkkkkjjjiiiihhhhggggffffe", "rrqqqqppppoooonnnmmmmllllkkkjjjjiiiihhhhggggfffeee", "rqqqqppppooonnnnmmmmllllkkkkjjjjiiihhhhggggfffeeee", "qqqqppppooonnnnmmmmllllkkkkjjjiiiihhhhggggffffeeee", "qqqpppooooonnnmmmmllllkkkkjjjiiiihhhhggggfffeeeedd", "qqppppooonnnnmmmmlllkkkkjjjjiiiihhhhggggffffeeeedd", "qppppooonnnnmmmmllllkkkkjjjiiiihhhhggggfffeeeedddd", "ppppoooonnnmmmmllllkkkjjjjjiiihhhhggggffffeeeddddc", "pppoooonnnmmmmllllkkkkjjjjiiihhhhggggffffeeeedddcc", "ppooonnnnmmmmllllkkkjjjjiiiihhhhggggffffeeeddddccc", "pooonnnnmmmmllllkkkkjjjiiiihhhhggggfffeeeeddddcccc", "ooonnnnmmmmllllkkkkjjjiiiihhhhggggffffeeeddddccccb", "ooonnnmmmmllllkkkjjjjiiiiihhhggggfffeeeeedddccccbb", "onnnnmmmmllllkkkkjjjiiiiihhhggggfffeeeeedddccccbbb", "nnnnmmmmllllkkkjjjjjiiihhhhggggffffeeedddddcccbbbb", "nnnmmmmllllkkkkjjjiiiihhhhggggffffeeeedddccccbbbba", "nnmmmmllllkkkjjjjiiiihhhhggggfffeeeeddddccccbbbbaa", "nmmmmllllkkkkjjjiiiihhhhggggfffeeeeddddccccbbbbaaa"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> heights = {"ccccccccccc", "caaaaaaaaac", "caaaaaaaaac", "caazpppzaac", "caapdddpaac", "caapdddpaac", "caapdddpaac", "caazpppzaac", "caaaaaaaaac", "caaaaaaaaac", "ccccccccccc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> heights = {"abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf", "abcdefabcdefabcdefabcdefabcdefabcdefabadsfasdfdaf"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> heights = {"ab", "ba"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> heights = {"mrjndrdvrshkipmetigdrrwavakcnpmlqgafdfdvbviwatsgie", "oifsvlbhhfojnsksbjfelnbqwlmjjtmaawspjsgmfbsuuwebnt", "ftcrvfrtpgedgwfvgcpetftnfolkeupkosvaoacpoifuebagqf", "qnvtklgntgrouhsqcvjsibwrvkwtstedjbjjhpchohugiejksd", "jlehilwhcjsjqcqeircjuwgudjortdufrllgtteuwuepqbeqla", "qodoflpahviqhkjgvleaqcuvludvtrtcgigefanujiaqhatule", "tsmvpjkkspwsbnpnfdvtnpkmbbeemfpsmocqhrbvoknjiwqdvr", "nntwgkqnwdafflowjpccohqqutjugdcmirtcshsewrsfcgnrwd", "nthiacwcqvelftltdhewcsoqdvnqnenlemvjucwcbinlgqsrod", "drngrshgqwmuspbvvikeffmihcnhsekkpmdntqsrarcwvuqfnq", "eeqdakwajalnfrofiiqsewhvktglnujfivcpfusffgsafffbqn", "jcwfbwnsoefccmsbkamtwavmgqcgbtumjvrqmvkbsmhehepdoh", "ghdnlhpinbwnkbvhlqtqfhukhobrdvulhqjpknffsppfrdouka", "leoudiuvbflelbufdvnnuthcbawkjbstremsneiflcfftjlaiq", "lpwpcvjiliqkwpcecqquiibsnjpjhchcuivhwqgwqgpiwrrjtf", "kctjggibnaptgdpwkqbfsdnbbodfsjclicfvrlwjtitonnrcrr", "slmldqvwwicnptbvcdcrkhjwwoufqofwuhdllkucecaeuvtunr", "rcehbeobrkstguttmursjljqrhpateogkfqbdcbkkbkvfudqgs", "pdmdlwplwoduarldkwdfbiwaplvetaclwnrurdaemadbulnrcu", "sbbfihuobhqavannbltvqpunhdobsufjiljnhsdwfllmskinmk", "hpukhthultsiwaaitftjgfrlrfjdtetugurflgtwegjsuvsrfd", "jwiqfrijlklbblgdtwculidvdtiqlusdervhcpuvaharwdiukn", "sedpemkocmwaccrmmqfasjvocbkeprebitbvpgrmukqtwioumr", "iacqrhamvpvebvcsdjofabkcknthksgbbbdlbdbbmflanvqigu", "dlmetjiidjkfcbohthmkqvbliqcvabwwfurmwrfnjapiiwrcqr", "tfjwiqphpvfbmusnpnekvoscartlntvwckgebrkhsojociomfw", "lbgvarcsaectrelqikkwfbovdveudhckoobfevsqhoqvureabg", "ntmwlwmbhvwdoonjeaetnishbuojhvlipfbukgflauvjcfmlhf", "geipnjccopitprqrlfiwbivthterneokqrownakunlvnltkkfd", "upnhmshtrtecpuvjnaakuloejfcelirgwdbtmaobrmnctbqcut", "rgiadscglsncsbnqpcuvpdnhnotjslgwkmsuahrvlllqhhnkwt", "gumwirmlhiogrfcqpbtmaotupubvuumvcfrpwvnkaoifrdcmnh", "mwgvkbjevvtatpobqpqpenbogitiwarthwvqhbkqhodforqotv", "rnvkicdfhmuapwnfnfwfiatgiwdcuiqmopgskibqmcdvshkmqb", "bupfeplewkfbmqsvfilkloucbjpwgpooijrgdichvmniwlsfja", "llpcntwqjeiljjqljrioehdftgvmiscawnsvhqmcuchnijllkl", "nhairhagvgckcrmqgbldikdrgsokffoauhfdharinwuibmacio", "ftsctljgagowpmorkwucwpdpecvppnpadmweemtpengpqvadtu", "eiuupoeppssjnhejawtpsjudmjdhovwwcvcjcseejojdcskluk", "mjupoqsbcjiibefeejtrjkkoeduanmuikdqdopnmwqpfkdwrif", "invvcdaslqmvafwvpfrcknndtjednsighicvcvditkwewaaccn", "ahppwcqeaupmsopqrgrmfwfwofvlelqqdcjlchqckrwcjnbncq", "ggfuchmgihjlvviwfwfjpvhbdnupsgsacgqwluktwhovwppvmn", "dkovivadvsnswhtvhlkpsbbmdmvswukqrsgjesbteqsothbgnu", "adqedgrhvjaiejferijcaevnceifseuiwwdgruhnuotedktgeq", "cevfpdudkmreucheoiirsrhwgpnlmapflgdaeomptkhtsdsoco", "waavlpbvqloreisdatmijbtdjlhgnjoviaeemlljmojdjskmih", "sgmlcmscnkjbdrchnoknirjcqpulodmfmfdchhmdlbskptordd", "kpawohvemcptmusnpircteeuoefvjwodmmroeprscggalqlfam", "ouwlqvsjtwpcbmkrhoetfwflmciuoscqrrkngqkmawbmdfmmvr"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 492;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> heights = {"cccc", "cccc"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> heights = {"abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj", "abcderkkkslkjfiekjfozlzlllzzzzzkjfoiejflizekroifjs", "zzzzzzzzzzzzzzzzkkkkkkkkkkkkaaaaaabbbbbbzzzzzllkjl", "lkjdfljsdofjwojflsdolwjflsjdfojlfjdfpowlkkfjlskdfj"};
    FloodRelief* pObj = new FloodRelief();
    clock_t start = clock();
    int result = pObj->minimumPumps(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696504&rd=10787&pm=8243
********************************************************************************
#include <string> 
#include <vector> 
#include <queue> 
#include <utility> 
 
using namespace std; 
 
class FloodRelief { 
public: 
  int minimumPumps(vector<string> heights) { 
    int n = heights.size(), m = heights[0].size(); 
    int i, j, x, y, tx, ty, sol(0); 
    bool visit[50][50]; 
    int xmove[4] = {0, 0, 1, -1}; 
    int ymove[4] = {1, -1, 0, 0}; 
     
    for(i = 0; i < 50; ++ i) { 
      for(j = 0; j < 50; ++ j) { 
        visit[i][j] = false; 
      } 
    } 
     
    while(true) { 
      x = y = -1; 
      for(i = 0; i < n; ++ i) { 
        for(j = 0; j < m; ++ j) { 
          if(visit[i][j]) continue; 
          if(x == -1 || (heights[x][y] > heights[i][j])) { 
            x = i; 
            y = j; 
          } 
        } 
      } 
       
      if(x == -1) break; 
      ++ sol; 
       
      queue<pair<int, int> > que; 
      que.push(make_pair(x, y)); 
      visit[x][y] = true; 
       
      while(!que.empty()) { 
        x = que.front().first; 
        y = que.front().second; 
        que.pop(); 
         
        for(i = 0; i < 4; ++ i) { 
          tx = x + xmove[i]; 
          ty = y + ymove[i]; 
           
          if(tx < 0 || ty < 0 || tx >= n || ty >= m || visit[tx][ty] || heights[tx][ty] < heights[x][y]) continue; 
          visit[tx][ty] = true; 
          que.push(make_pair(tx, ty)); 
        } 
      } 
    } 
     
    return sol; 
  } 
};

********************************************************************************
*******************************************************************************/