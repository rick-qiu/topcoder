/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5954
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

class StickedWords {
public:
    string constructLine(vector<string> dict, int len);
};

string StickedWords::constructLine(vector<string> dict, int len) {
    string ret;
    return ret;
}


int test0() {
    vector<string> dict = {"salad", "sandwich", "hamburger", "rings"};
    int len = 35;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "hamburgeringsandwichamburgeringsalad";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dict = {"salad", "hamburger", "rings"};
    int len = 35;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dict = {"aba", "aac", "czz"};
    int len = 10;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababaaczz";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dict = {"aarb", "bcb", "bbd", "dzz"};
    int len = 15;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aarbcbcbcbcbbdzz";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dict = {"abd", "dgga", "abdg", "gga", "gg", "gaader"};
    int len = 22;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdggabdggabdggabdgaader";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dict = {"aa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dict = {"aba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababa";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dict = {"aba", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dict = {"aba", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dict = {"gggggggggggggggggggggggggggggggggggggggggggggggggb", "ggggggggggggggggggggggggggggggggggggggggggggggggb", "bggggggggggggggggggggggggggggggggggggggggggggggggb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggb";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dict = {"ddgggggggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggggggggggb", "ggggggggggggggggggggggggggggggggggggggggggggggggb", "bggggggggggggggggggggggggggggggggggggggggggggggggb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggbggggggggggggggggggggggggggggggggggggggggggggggggb";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dict = {"ersezlpfevkuzirwjfpd", "icjfpbkwabuefsukqglhrooamummutadpgr", "oamummutadpgrnaavvqi", "csglhgqfmgxhfpp", "ngyeodbnabfvguppjz", "fry", "bqsbvzxncwlkryjlmorerbirvwi", "jguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzy", "ihbikdahktdsfy", "lnygsfhhyzrugxvbccbmoet", "bhimgsfbwyhcdgjclsx", "pssnlgwtavru", "irwjfpdi", "vlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuij", "qbfhtckqiewxqhuzcxq", "qprocyiulokbscfiylhbxerekdizgthccv", "zozdsxolsebsvcehphdebpimjyrtckipgs", "ybkhlmypjltxjdccbyswhrbvvmjb", "ipyxcziuiebfybkhlmypjl", "ukbmojvpyhqmkylzfnvhqricegq", "ztptjsjrryzoxunlzmpxxuewuhqttlzaqg", "csglhgqfmgxhfppbfcrhw", "mnocmzehyftllshfvpjjzmebltfzfevmtdikv", "gyaqi", "hbikdahktdsfyrzoruhciibxiecovrajbdubbmlvqwnkjk", "ofvgqmmxpwrnkecmlxmqppeuqbsjjzwoidtznqirtjc", "dqvielv", "rbteersezlpfevkuzi", "fdmqwuud", "hho", "xnqgpqxm", "rwqbehusbvarghm", "irvwiipdfrifzjuitoocrbmqd", "cptzhemptgubfwgsrgvwcjzyrnyzu", "avxmpyhqummnxpehffqquy", "vrokxqedqvie", "wghjgaqqvzmzravxmpyhqummnxpehffqquycxrgzgigxbfzge", "rk", "mqkiyhglqkpnaqqhqwskpbmkyfsjtocc", "iporljnjpyuedwcrteoptjuedvlpmkwjqujy", "vrqnkbdujadqzgqgeatnolklusrkmpj", "pqxmus", "rzoruhciibxiecovrajbdubbmlvqwnkjkraxammlcab", "dsqbtvmmesultlypomrsxcawhwiywgbaabajyarfaroccidu", "jicjfpbkwabuefsukq", "gcrchtkovlnmpcsnh", "lg", "gggcrchtkovlnmpcs", "trnlgesxruxuadeattewrdvzahfegpiucmuhiasxtmu", "uxblolvtxnhvkikeawlmkvwqbvpevs"};
    int len = 1259;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "avxmpyhqummnxpehffqquybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjbhimgsfbwyhcdgjclsxnqgpqxmnocmzehyftllshfvpjjzmebltfzfevmtdikvlypoisacqvugyrlojluzujqdsqyktlefhmtufvwwmuijguxblolvtxnhvkikeawlmkvwqbvpevscyioqijvbxzybkhlmypjltxjdccbyswhrbvvmjb";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dict = {"nhhlrkhoxrzilmpsjhmzeeqkysuwoqkfiug", "yc", "zyrgxnqvbpukbsdiiytazvwlotslzwhjtf", "oznbskliprpjhkafalccbiyoogyxxbizvnbqfo", "kumwnwbrhzkdfelvzpqtzxdsxlcvfnejkmibjktmpob", "oejgvuyxbuezgceidjxhse", "idhqlvmm", "kfsvsxktjtoptdsh", "luewbpfeczvvjncxsngblthzgr", "exgmglczkdiucbeccvhvhnapfrvikdq", "ot", "eoenpiilukiqfhyadvlbqzwawzskunhhl", "tkbqdzbbcblinirxyzxomiejsjdi", "mxuuwzigcqaheyseqznhqojblhuxohw", "fckmylduiazyjoejgvuyxbuezgceidjxhsegexatguswkp", "txlsyllfwamsevppdczpnlqxh", "woqkfiugyaukxdtmryjrwcwhyflruoqaoribelcbihuazzmn", "pk", "betnqoycodwmmvavbf", "toodeiuronwzymtdmkueptwdsgjz", "umwnwbrhzkdfelvzpq", "mutovwjkzchhfty", "bykexgmglczkdiucbeccvhvhnapfrvikdqxzzkn", "tmjqqgmvg", "jepnualqhxcntoodeiuronwzy", "yxkmvhmghldajwsjc", "czpnlqxhntznxdfhwunuwscmczogsklwxelywwdwkmmxuuwzi", "krjteqhzjocgvkswviqyyvnvilswqhxsazpzppgfypb", "jhkafalccbiyoogyxxbizv", "dpbhdptiamoivvmjbcabfckmylduiazyjoejgvuyxbuezg", "bkfsvsxktjto", "yadvl", "trcubtcdeflnvkadeiio", "gfypbdktisuxyietpuajkxuau", "yvnvilswqhxsazpzppgfypbdktisuxyietpuajkxuaumvhio", "uifrfvujepnualqhxcntoodeiuronwzym", "mtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmm", "dnicbromkrbykexgmg", "hwunuwscmczogsklwxelywwdwkmmxuuwzigcqaheyseqz", "pempotozdnicbromkrbykexgmglczkdiucbeccvhvhnapfrvi", "vuyxbuezgceidjxhsegexatguswkppivsvupmvdrbwedf", "zgrksvvoxhlyanozxtmjqq", "du", "sbtkwhjtt", "duet", "fxkit", "ypxtqunswoc", "felvzpqtzxd", "cvguifrfvujepnualqhxcntoodeiuronwzymtdmkueptwdsgjz", "wviqyyvnvilswq"};
    int len = 2096;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "betnqoycodwmmvavbfckmylduiazyjoejgvuyxbuezgceidjxhsegexatguswkpempotozdnicbromkrbykexgmglczkdiucbeccvhvhnapfrvidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmmtgtebxsbetnqoycodwmmvavbfoxplcdsigwvmqeowidhqlvmm";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dict = {"ucocqleqgxpymmagrhiinzamruksjrcfmtlkfryyd", "zndrjxhyksrksnirdsheokucocqleqgxpymmagr", "kqkundbbgsdjzvvkkxjbwaebjhtobyqzlockjyfkhl", "xpymmagrhiinzamruksjrcfmtlkfr", "vdbmyr", "ctfgxpheaanpwjfosjhylhpv", "dycxjnndtrmqmyoxdzcxqsyeo", "ir", "bjtkanfoyrrbkvffaqxnicynfpczx", "ifnswouroxalvqvygqzdlloinnmmwyc", "jcqisponewnvbhqfigyzk", "kanfoyrrbkvffaqxnicynfpczxy", "majdrikzckfatjrssubkb", "novlumkxvenzvudsgsahbzteiraffvhooqojczpzpb", "lljivaitqhittnbaqzmyhzcxyjs", "itohcbwvay", "fosjhylhpvkwbzrvnctoypmlnduzuoqzrskmtm", "gsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxn", "ncllnalvwncyrtzndrjxhyksrksnirdsheokucocq", "ujyx", "toawofdpjoujx", "hlnvmxcytd", "nndtrmqmyoxdzcxqsyeomzmjwhpy", "rrbkvffaqxnicynfpczxytptrkuoczoem", "nvzgnlpk", "toawofdpjoujxqg", "js", "iraffvhooqojczpzpbj", "icmbehmacmep", "rjgushjrstphhrjhqnkkbbgpqwsckqkun", "cdunxodhniopxnsuidhayzgcdsczqjhiwug", "ihxvqgbvclctrwnvzgnlpkywmnszifxtauqoxrryozobv", "rwnvzgn", "haapprvutnndmumykomgxqkbl", "bkvffaqxnicynfpc", "qzdlloinnmmwyctfgxph", "cyrtzndrjxhyksrksnirdsheokucocq", "gqzdlloinnmmwyctfgxphe", "zmyhzcxyjs", "eravxmlyipajftxdscvfvng", "zvu", "tgz", "joujxqghrmiiediooesrqgxdbodycxjnndtrmqmyoxdzcxqsy", "kywmnszifxtauqoxrryozobvphoqxtukcehaapprvutnnd", "pjjlkgralkpwzhfpmgktfap", "gqzdlloinnmm", "jeubyirwxzdtucwjsuqdyug", "ewsawklhlfwlxjgnqwdkvzhghmfsuwn", "btxrzwsnsdmyuevvcijvdbm", "myuevvcijvdbmyruzlvjmhlpz"};
    int len = 997;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkunovlumkxvenzvudsgsahbzteiraffvhooqojczpzpbjtkanfoyrrbkvffaqxnicynfpczxpymmagrhiinzamruksjrcfmtlkfrjgushjrstphhrjhqnkkbbgpqwsckqkuncllnalvwncyrtzndrjxhyksrksnirdsheokucocq";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dict = {"daevomryaaxesganusviemxraebrvbtgtzauamgritvpetss", "ztebqljcrdbhzcbqkqaohlulovgexcnvajh", "mfarpajojxprfqcpcmxopimcvzrutoasrmbygugokarahvdabp", "glmblebuxfcisoxqxvkuopio", "egnwdtvuoruqakounxqaklbyvswrvg", "uscnoquamdaevomryaaxesganusviemxraebr", "xxwuawrczhzrgthkrrhoyeytlpedqywdw", "vgcqnnhkjfyglmblebu", "karahvdabpdaqcfyaivrictzkm", "zbgnetomuwuipc", "btgtzauamgritvpetsslxbfzlmcbgnpjznrfykgblnfhegnwd", "itvpetsslxbfzlmcbgnpjznr", "wvvgbpeseuhnkyeplfvxqxfbbxzbgn", "sopsbtwbgbzodvafpghjda", "egnwdtvuoruqakounxqaklbyvswrvgiffonnfkouhihivrylhd", "ocsphhj", "jegwzrwiftbzoszmgrd", "nqvqqzdgvldewubwbbfdvhxjznhadsotymxhmfarpa", "omybhoyyorlzfionnmwccwnfn", "lhjfvejznqvqqzdgvl", "szmgrdgbzpwfqwpzacneodebxxzzglpszlezqlqsgdfrthyth", "kahzbrwkejr", "ltxy", "etomuwuipczg", "uxiuofkmcozbrmhuegcbqaercrzug", "blebuxfcisoxqxvkuopioaqvssukbdthoguq", "dbsvecslyilhjfvejzn", "nkaxnvqrefbztebqljcrdbhzcbqkqaohlulovgexcnvajh", "krmuuzcvqpwvpalzutloltxyk", "bglyxrjibstwkgrfclemvwuscnoquamdaevomryaaxesga", "ihivryl", "twk", "hvdabpdaqcfyaivrictzkmtzzrqngedy", "fcpzvenkaxnvqrefbzteb", "nbomxapfl", "qffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqq", "dfrthythejimkdfvwxfvxxujzskpcmotiyuqffdquosa", "zvenkaxnvqrefbztebql", "xxwuawrczhzrgthkrrhoyeytlp", "mtgmfcpzvenkaxnvqrefbztebqljcrdbh", "shdkdyh", "nnhkjfyglmblebuxfcisoxqxvkuopioaqvssukbd", "xdiafuvuswoxmzuxdtutkukhgychs", "pnyumhzgdejimrxscb", "orlzfionnmwccwnfnpobdzjrpucmzcrdimhkbqvl", "rutoasrmbygugokarahvdabpdaqcfyaivrictzkmt", "nibnsiqylivfepayjvmtgmfc", "fykgblnfhegnw", "qkqaohlulovgexcnvajhcqsvlxhmjoytmktniakdmisxvraf", "wvpalzutloltxykxddhoamikegbfmnmwbldixhyoqeyq"};
    int len = 2039;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "blebuxfcisoxqxvkuopioaqvssukbdthoguqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqqffdquosalbprltijkyiyevwudbsvecslyilhjfvejznqvqq";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dict = {"rhlxwwqbntmnymvcrnwnocryqpivqynigsb", "jhwejpuizywqzuwixsazusylahdfceippejhleatji", "gbjkgwaokdodubmfwdmgibawugpvrpljduidmb", "txjvnchxoxdjllpwpiveed", "atjibjxcgpndiaswyhychxwxjwokeuyikwitqnwec", "uwixsazusylahdfceippejhleatjibjxcgpndi", "idmborymevtxjvnchxox", "ugbjkgwaokdodubmf", "rhlxwwqbntmnymvcrnwnocryqpivqynigsbfdlu", "mfwdmgibawugpvrpljduidmborymevtxjvn", "lxgmsfjhwejpuizywqzuwixsazusylahdfc", "sbfdlufgqxkutyctuulvpxuqkqlszxtrbiw", "ec", "fjhwejpuizywqzuwixsazusylahdfceippejhleatjibjxc", "bntmnymvcrnwnocryqpivqynigsbfdlufgqxkutyc", "fxjyzbnln", "cvihu", "jyzbnlnwgyozhqyrhlxwwqbntmnym", "ixsazusylah", "pvrpljduidmboryme", "qxkutyctuulvpxuqkqlszxtrbiwb", "tqnwec", "wxjwokeuyikwitqnwec", "wec", "fgqxkutyctuulvpxuqkqlszxtrbiwbugbjkgwaokdodubm", "nigsbfdlu", "xikrhfxjyzbnlnwgyozhqyrhlx", "mvcrnwnocryqpivqynigsbfdlufgqxkutyctuulvpxuq", "wgyozhqyrhlxwwqbntmn", "wejpuizywqzuwixsazusylahdf", "qpivqynigsbfdlufgqxku", "lxgmsfjhwejpuizywqzuwixsazusyla", "ppejhleatjibj", "kgwaokdodubmfw", "llpwpiveeduwlxgmsfjhwe", "vcrnwnocryqpivqynigsbfdlufgqxkutyctuulvpxuqk", "aswyhychxwxjwokeuyikwitqnw", "nwgyozhqyrhlxwwqbntmnymvcrnwnocryqpivqynigsbf", "pljduidmbor", "vihuxikrhfxjyz", "ndiaswyhychxwxjwok", "jhleatjibjxcgpndiaswyhychxwxj", "wugpvrpl", "atjibjxcgpndiaswyhychxwxjwokeuyikwitqn", "sbfdlufgqxkutyctuulv", "yikwitqnwec", "ymvcrnwnocryqpivqynig", "lx", "ahdfceippejhleatjibjx", "uwixsazusylahdfcei"};
    int len = 2479;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahdfceippejhleatjibjxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlxikrhfxjyzbnlnwgyozhqyrhlx";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dict = {"mmykwugeexcsfwkbbouxafje", "eoyelxxslkhwifzkw", "kw", "fmqhlledciwhe", "ukpjuixqhbpaeqszodojadbyr", "dragtkbkatzgvviwilzrjrpk", "mygi", "cd", "lkyosbibpumfxfm", "idqkfnhznju", "meifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbd", "xhdnytaprdeoyelxxslkhwifzkw", "hlghe", "slzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpum", "asadsqozxwmfb", "cdpvknkp", "smcvqydjyphcjjc", "yxwt", "tkbkatzgvviwilzrjrpkwauyexec", "idcayzmpyq", "bhmsxclbukpjuixqhbpaeqszodojadbyryrkcovu", "txdhfjizsrckjwrkfqpapgtim", "ytetrpvjcggzbtznblpedmdtak", "pertwmkfigkyx", "kfnhznjuznncuurvjbtxaiixklyusf", "mtxyxltgonvzyskjeqcqmvlcyzu", "hlghet", "qvx", "gtcwwcuvxecuspjvoegujqthmcdbmliaxhdn", "dmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrml", "gmegdragtkbkat", "ghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakza", "slzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpum", "gkvyafm", "fwyafjuamygivqsxytma", "alnhnzjhamihsbefwyafjuamygivqs", "lcyzutikywiaygmegdragtkbkatzg", "cjwbgdgxdonrqomtcbcmt", "fnwoqywdqvxucjwbgdgxdonrqomtcbcmtxyxltgonvzysk", "uurvjbtxaiix", "dqkfnhznjuznncuurvjbtxa", "uurvjbtxaii", "plmoldfiyjj", "uvxecuspjvoegujqthmcdbmliaxhd", "teqkqzgijnhtkqoliqocabdkaakdasadsqozxwmfbdsnb", "fjedrmlmnwtxdhfjizsrckjwrkfqpapgtimitpligzpmc", "dojadbyryrkcovunlvmhrennsmp", "hjgizjinf", "yexecldzqbtwcdpvknkplmoldfiyjjwgswrcaal", "dodfrkmze"};
    int len = 2401;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "alnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbdmdtakzaclaubmzlbkdhmmykwugeexcsfwkbbouxafjedrmlcyzutikywiaygmegdragtkbkatzghetidcayzmpyqeytetrpvjcggzbtznblpedmdtakzalnhnzjhamihsbefwyafjuamygivqslzvrwybtrgvhxrxzhynubdmspcuzjclkyosbibpumeifzhjgizjinfrzgmxixcdwdjrfwoasmfnpamperbd";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dict = {"ygmyyxqjwofyohbsjkogentuqfhpswvhvy", "agfenesgcsyylhctgolqblnanhsspvakbpy", "ctgolqblnanhsspvakbpyruvvbweuvqhrx", "gnlqfniaxglqipgwqzcmauirjkg", "bivnxueytlodhfejqklhhwsibovfenpvaccs", "fgqutkezuyayfrjustlxryodia", "ywzlyblqyyygmyyxqjwofyohbsjkogentuqfhpswvhvyeyhs", "xfmpw", "ijzkis", "bpcjogohgdqmekquahkc", "bubwdai", "kvubopdlktsvvwt", "vudhrzktyhwhvnriflfstuxqnfsivfgqutkezuyayfrjust", "coxwvdpimarmhbcvudhrzktyh", "vhzpbaumnvypfuxsfxmtldgytqbxlmwtawxslzulwtvy", "vvwtbqwsudsbwlrplhbrzfpwt", "lqfniaxglqipgwqzcmauirj", "dkk", "ksnkvfvyfbzipmxggvayr", "lfbisgjvfhm", "bayuwpyvmyixmu", "lhtgghvwebtsb", "hvbxalbdvuotvn", "twgen", "tsvvwtbq", "xcxkgsvtoshwialuvjfhvmtlzqpsokuaehjqswxdtiks", "derbjdtsngheetasxzd", "kcxdiisewwbpnc", "sngsorspc", "xeuidjdsazocyitryxdyqwdgawjcerdjxlhobmmxpwxkoslht", "rvrqwoz", "rjxjgojfgzsrepcqgylaicjydxxsurhtzqjtfez", "bgiccjccdbcitvrjxjgojfgzsrepcqgylai", "bz", "ztesvirprcddph", "cpzahpy", "hdbgbfupqwgzvgshncmlnznnufjculpgxbs", "hvnriflfstuxqnfsivfgqutkezu", "ppnsdncktkahheykzufrjakuvfvjduvuoviiyoinvtzxizmny", "unaawpeyioqvgdhsskgwjvkpmba", "ymwjiqqgbvyvqezmyziabfoqjijtbwwufeij", "hjqswxdtiksnkvfvyf", "iyonvvbrgurrr", "okqeoybhnwkzdzpopibz", "uwcv", "jydxxsurhtzqjtfezzgxeqokxfmp", "kgsvtoshwialuv", "thqydzvdfelppjoreppwgfxrjhnstobayuwpyvmyixmunaaw", "ixcxkgsvtoshwialu", "mwrkmhvbxalbdvuotvnuldwygelcuccivakquummasngsor"};
    int len = 314;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agfenesgcsyylhctgolqblnanhsspvakbpygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvygmyyxqjwofyohbsjkogentuqfhpswvhvy";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dict = {"gqwpwrdiatdvxddxvzukvqbbqstxouazlnzoxjwrindshbhfg", "rv", "mocdprpeikauulfqhxldbggamlilwjsmtopqgmzpdx", "qa", "nedzbzpxnkrvlciujrxxsasuiqmjnstwtyoibzakutempdcvh", "agbmtaqmwamcvjiekpuxjicl", "hfdhlxyoijcfoelmsyfzfsawpr", "zjamaclmwkdhsfwzjwrxwgmmszbesaifqnjnbmhxtvimybhgt", "jquygamikjayjmjokyxgfphpuxpnhi", "fvchrwtsqzkyocnzwpebjgxxrxnkpowxkwbhicoane", "bigiskydjykreigzoxcjs", "yvhfdhlxyoijcfoelmsyfzfsawprpwntwqoaqqmopqhwysmi", "clfclncpedxlgdgdxolctx", "ztctplzncazj", "vajnwfyihlstsvtoelnscdohgnjhonztdysgyiiysesagbm", "pltabkmxgnughbfdbbrrkbehwaaicn", "uniulzjfkfinbqoa", "vpxxbeokzbvbyvhfdhlxyoijcfoelmsyfzfsawprpwntw", "sokijgbynbs", "pwojihygijouxowxuniulzjfkfinbqoawcmxjmocdprpeikauu", "jxuivrjqycxhtjqmghfevchdztctplzncazjnyhl", "waaicnihdb", "ijc", "ycxhtjqmghfevchdztctplznc", "nhygvwjnxflxawphgunxtrmfqysjgowacmdw", "gdqjmbhsvfqlgwxerzttm", "iqmjnstwtyoibzakutempdcvhczdyijl", "hygijouxo", "rihhfvchkztaamaehsueoqcb", "wxerzttmikucvsafvtctubawrrfxawzkhmcbfgeoocvsg", "wzjwrxwgmmsz", "mzpdxlpkoqdzteylbgvenwoaeegdrzlypqasrhp", "pnhiqnkrsdstbbeegzgiwnuqnezgxxqqc", "iuedypmnphejwlsjlxkazdkvhlhpgdqcxrjwa", "ihlstsv", "ox", "ijcfoelmsyfzfsawpr", "gdqcxrjwazv", "lrejmdhpfujqrinrfb", "jnbmhxtvimybhgtsgonodyhokpfzurv", "aw", "oqcmyarjxuivrjqycxhtjqmghfevchdztctplzncazjnyhl", "dzteylbgvenwoaeegdrzlypq", "oaeegdrzlypqasrhplcndcwqoohdtlhkuolzlvbpngwwfcp", "qnkrsdstbbeegzgiwnuqnezgxxqqcdcsp", "oklziuedypmnphejwlsjlxkazdkvhlhpgdqcxrjwaz", "wamcvjiekpuxjiclfc", "ofanwnhygvwjnxflxawp", "fsvwah", "uulfqh"};
    int len = 1896;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agbmtaqmwamcvjiekpuxjiclrejmdhpfujqrinrfbigiskydjykreigzoxcjsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbsokijgbynbs";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dict = {"jyfzhodirhkkirabsupzctexqdicpawyuusexmuxeivloml", "xxtajfpllstexcztwqqnszzkvsocljjagqstcydzrdnvyxstfd", "mpkbbqdmkjftdpytsdhvsrsehvm", "tkyc", "sbxadostxkvlribbudufwmedniaknyyxxfwvcnvcscpvsdd", "vmbcmpkbbqdmkjf", "bzpqavogunpfiggvaxshocsaovegfvgcpegkic", "qvqplxarvzjm", "nptkl", "szzkvsocljjagqstcydzrdnvyxstfdszmovndaolgxd", "ibbudufwmedniaknyyxxfwvcnvcscpvs", "xdrhditepujalbsvwydairojzrfrhiremgso", "up", "nvcscpvsddgmreriszssuzesblfqksmpxpdsllpmcyjps", "gmreriszssu", "fzdlafsjphkfepvauikruxxnucxlorrhavukasav", "zoqpihlftvvrtmnzcpfjuucknp", "ehvmvnknmwseucbynzzbvqqvqp", "llstexcztwqqnszzkvsocljjagqstcydzrdnvyxstfdszmovnd", "uikruxxn", "zkvsocljja", "udufwmedn", "nowqngwbpmwbtxclqtttakcguwoukmpcsbxados", "pfjuucknpqjsbbfojnyxivmlusxnowqngw", "jjagqstcydzrdnvyxstfdszmovndaolg", "cffbovqjdxjsygumelzmhwmgjjgrvjaaxukolf", "zhsrzdansysp", "btxclqtttakcguwoukmpcs", "spove", "bpmwbtxclqtttakcguwoukmpcsbxadostxkvlribbudufwm", "qdicp", "ycqosigjgjqdnzoqpihlftvvrtmnz", "ao", "zpqavogunpfiggvaxshocsaovegfvgcpegkicvjvgflh", "fvgcpegkicvjvgflhejsbbcouqnplw", "phkfepvauikruxxnucxlorrhavukasavlkyyqlrxwqcqzbhmn", "ruxxnucxlorrhavukasa", "umelzmhwmgjjgrvjaaxukolf", "savlkyyqlrxwqcqzbhmnjyf", "iaknyyxxfwvcnvcscpvsddgmreriszssuzesblfqksmpxpdsl", "vmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbv", "leicwicdcffbovqjdxjsygumel", "ditepujalbs", "vqpieynohmiixyzhsrzdansyspovewptkycqo", "epvauikruxxnucxlorrha", "fzhodirhkkirabsupzc", "osigjgjqdnzoqpihlftvvrtmnzcpfj", "ovewptkycqosigjgjqdn", "sygumelzmhwmgjjgrvjaaxukolf", "aovegfvgcpegkicvjvgflhejsbbcou"};
    int len = 639;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aosigjgjqdnzoqpihlftvvrtmnzcpfjjagqstcydzrdnvyxstfdszmovndaolgmreriszssudufwmednowqngwbpmwbtxclqtttakcguwoukmpcsbxadosavlkyyqlrxwqcqzbhmnjyfzdlafsjphkfepvauikruxxnucxlorrhavukasavmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbvmbcmpkbbqdmkjftdpytsdhvsrsehvmvnknmwseucbynzzbv";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dict = {"heyagigmkaxeokivkzjanrsjuwizvgblatittctehrvzgafme", "ouumfwepnttjlgnslnfzzdw", "lvxxhxaopktzcfrwoglsyiwibitt", "umgozkvcqqiire", "hqtbxqmzi", "nmat", "thodvbnkbhtdjyzaqoyycindcyelactizthr", "hxaopk", "yr", "dsdfdp", "kclqnaxqcdtkfcqzjhluxmqnz", "eaahigqyuzkljgsy", "ntwrjyvlxsw", "wyscmkldeprzshkjxvilniakclqemtsegr", "agorezbojmttbrlgdqrcnwxmszhjxe", "lwqieaahigqyuzkljgsycy", "ehdsetophnaljuwiyysrdzyhumikulbjthbkzykygs", "xqkiboythwsatofedgpmbtuepjjlhflfndcxkdthvdzivsiakr", "cofulcjmkffepdyyajwiwurqjpzny", "vgblatittctehrvzgafmekwhgiqmmhvhghugbdpsza", "eaahigqyuzkljgs", "vwrqoffjipsvyrgfvztftnzrh", "podeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiaz", "wypxtdzmytrupcdajvamietifnxxbeybewjembopbxydchlvi", "kuehtkadcwgnykvrynhmxysmcqvmaktnsbcjqxrmpzgsn", "nzzwgmqxrmqrqnagaukuzeohfefyh", "tltyczhhevifqxcyknfisthatnslauyeovb", "wxmsz", "bdjmysskgvjwnirrjikhwpyvwrqoffjipsvyrg", "bonviabeayyzhgofpsrjtulysrexusqq", "rzteshaezjxnnunkztvmcvxrsowpbjciggxihf", "zivsiakrxwzpwlergylxd", "theojumgo", "xwywkkvjzkr", "wtouwrmibngxsfihpsffkntwrjyvl", "qxlzyghgaoxgrljbc", "kulijxlva", "ujzlqnywkcntigknzztzafbbkdsdfdpp", "spb", "bmqqdzkzpyyvk", "mqxrmqrqnagaukuzeohfefyhnbjha", "rlzeqbodxeboljricbcjkivfiha", "bafrmljnoxwywkkvjz", "ivsiakrxwzpwlergylxdlwwsr", "ancakdpeminhtyhtlae", "mqqdzkzpyyvkyjhzodzovszkhh", "bfcejkgo", "whwshfwcreihhfq", "ciggxihfnbytouhzpxvsqyhgytdnabmmbrfevoeepsvsukcaqd", "gsycyujomctfmmgjhdflblkancakdpemi"};
    int len = 923;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agorezbojmttbrlgdqrcnwxmszhjxeaahigqyuzkljgspbafrmljnoxwywkkvjzivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiazivsiakrxwzpwlergylxdsdfdpodeprdezpoagorezbojmttbrlgdqrcnwxmszhjxewhgjkiaz";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dict = {"osuiwjjoa", "ehtuy", "mmjykwgwabakomkewvkibzwfcorzosui", "kbmolgsynsn", "epkbtjxmhdjjzsnwtbfhckhs", "tsrfvuporp", "wybrirmprodktxcnwrdxijadbwcpgrmwgekcpfid", "abmdonh", "orzosuiwjjoavhipkpyjslgzefwzbxasfbsmjtsudyy", "yk", "dqwwihjtsrfvuporplpwhvyvuzaxudfdkf", "cpfidsxukbmolgsynsnzepkbtjx", "lwrkrutxepqbrmhjbhqizgxyzfssaapcfrojivmpdqwwihjts", "fbsmjtsudyyvuxhlsfsxkajlieonqkceovjd", "jbocbdkpcspusrulwrkrutxepqbrmhjbhqizg", "donhttunwybrirmprodktxcnwrdxijadbwcpg", "xepqbrmhjbhqizgxyzfssaapcfrojivmpdqwwihjt", "lumiyehtuyabmdonhttunwybrirm", "uporp", "bndqohvhsplykjepqutlgfpuekpjmv", "hipkpyjslgzefwzbxasfbsmjtsudyyvuxh", "kpyjslgzef", "fcorzosuiwjjoavhipkpyjslgzefwzbxas", "xepqbrmhjbhqizgxyzfssaapcfrojivmpdqwwih", "vukspfbapoamajbocbdkpcspus", "splykjepqutlgfpuekpjmvukspfbapoamajbocbdkpcs", "lieo", "lykjepqutlgfpu", "yabmdonhttunwybrirmprodktxcnwrd", "uporplpwhvyvuza", "rirm", "jbocbdkpcspusrulwrk", "spfbapoamajbocbdkpcspusrulwrkrutxepqbrmh", "fbapoamajbocbdkpcspusrulwrkrutxepqbr", "udfdkfvtvmmjykwgwabakomk", "xjrclumiyehtuyabmdonhttunwybrirmprodktxcnwrdxi", "vuporplpwhvyvuzaxudfdkfvtvmmjykwgwabakomkewv", "bdkpcspusrulwrkrutxepqbrmhjbhqizgxyz", "tu", "vkibzwfcorzosuiwjjoavhipkpyjslgzefw", "synsnzepkbtjxmhdjjzsnwtbfhckhs", "rclumiyehtuyabmdonhttunwybrirmprod", "tsrf", "fbsmjtsudyyvuxhlsfsxkajlieonqkceovjdftksclvlpifzk", "mp", "pcspusrulwrkrutxepqbr", "qwwih", "ivmpdqwwihjtsrfvuporplpwhvyvuzaxudfdkfvtvmmjykwgwa", "xhlsfsxkajlieonqkceovjdftksclv", "pjmv"};
    int len = 1389;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmdonhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxhipkpyjslgzefwzbxasfbsmjtsudyyvuxh";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dict = {"ezfswwhat", "jpkri", "bzmfqnsvxeytfbjeagmlpzzuyfwbptcmjjrxjylynrq", "acay", "irqdkjqzzywaonv", "wfbrcqimfpvbenvvzembviqj", "tqgvtynkwspveqasbqdlzzqksrboyregqnhnsph", "ppwxknwyidmakugsroqnejdxfxpzs", "nbqjqerujicbmlwegpwjl", "akpedipqqfcdchettlvqjheavlvfritdswgjvfhimurrdy", "hjksglgqqsddfjkyfkeecjjnujarx", "uyxjuvbmivyjhqlvu", "ahsizysblsjsrr", "taimqwybwxrehvpqfphqebuhggslomjco", "rmhucptfsofccavhlnwem", "cyohnvynddsujwsjbznzfbdhpgypbehuvqwlakcbubfesq", "dzagghfyumikiqnsmnppwxknwyidmakugsroqnejdxfxpz", "qnvvdqalcfsszqvnshubpkcvmpilmpgadeckivmvzvj", "jkyucmtymcaiqpgzvxlkd", "aqfujhoulcxzcez", "odvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccv", "xorhobhr", "cenbqjqerujicbmlwegpwjlkzwcgvj", "wndmwnbnsqldesgdxatertiuuknxmgnwreezcjquszdeljwlwv", "iwdsmtfxtw", "qttek", "dyqlcgptwfkavxjdqqecrany", "nuj", "ruigmgpefloeetwowckxebxqckvhzjtjrgrrnx", "xujyexqvohpcdiohcdawsllcgsqiv", "prirawdgztjxg", "vsrvxklkdrxkujvrswn", "fylcxaaozrikpxeiktfxkoeeepn", "lyddjzeylnyqehfslzwcf", "rmgxgclglfylcxaaozrikpxeiktfxko", "zvxlkdmcowrquyx", "vjqxjeguqcnvwseezbae", "larzzcglmetacnzuekltijolxdfidzft", "fkeecjjnujarxxfwwvcxof", "uqwpbjseocrzrhclqgwezuqhgywbyipwnwqqmspokcqvos", "uruigmgpefloeetwowckxebxq", "wdgztjxguszqumimifwaualtelnxcwkxxlmhqqalgwteoesiff", "pyiudimrhpzlydd", "xtwnt", "zrnrraeoidixzwyaqfujhoulcxzcezkrzufqppncpiglbfjhf", "ldsyhurui", "bcdsdrebbihou", "ebxqckvhzjtjrgrrnxutabwvietsqztyfqvggxngdckqtm", "kxebxqckvhzjtjrgrrnxutabwvietsqztyfqvggxngdc", "aiqxr"};
    int len = 1916;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahsizysblsjsrrmgxgclglfylcxaaozrikpxeiktfxkodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbaezfswwhataimqwybwxrehvpqfphqebuhggslomjcodvwhwdutrawtgziieeqqxrigmfwabgtbcugjktyccvjqxjeguqcnvwseezbae";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dict = {"ijvwlcafqctaobntjqjevebqhdrvwmxrwtcrwgdewpgkcqcumz", "iz", "mncqkmzqj", "taobntjqjeve", "yqebuzqrukukowfpyukrtswdgdmboxtne", "lmxakeaokfumwcrnultezk", "heum", "ujnuxltew", "brwxwqxsphptibnqcyutxzxafacolijydivdjhkrxpbvqh", "vwzzkbjbyqebuzqrukukowfpyukrtswdgdmbo", "xnjpdxobrlykddsyl", "bqubacgmnriymfp", "obrlykddsylwikvwobnpluwpydahr", "jzinayjseynkddhojfifmwmhtdfhjozqu", "xbaqmihpfofamtsamxvvbimvhotetgku", "ycppoefheinnbuyjlti", "etfeibak", "avjiitarhmsnfyqubxlnacxemhdsmkpnvifuligsrrkvtxrlfb", "aiptqakol", "txzxafacolijydivdjhkrxpb", "gznl", "oslxxjixshwgvaoxf", "kdonmbiy", "amlhtmsjobarluzclfyppruilaajswbdimeeobskuxfbzjlwst", "lkvqlsjetcwxnhhukedfhjthfojwcfxlibnvwzzkbjbyqeb", "xefxmaibijvlhetfeibakfhvkataow", "mxrwtcrwgdewpgk", "gkcqcumzjqycmvxcgkmyxhe", "poujnuxltewtfqufgrfppmorvvoyzukugmyfrmjothqmek", "tsamxvvbimvhotetgkud", "cebgphltfmuzodgavjiitarhmsnfyqu", "tubxqizlizlgavxhqlgwxlibaeuksttijyjtjdlmnqgp", "hoijvwlca", "plsgos", "wzzkbjbyqebuzqrukukowf", "iijopyirhtaerxhgbydqixrym", "xsphptibnqcyutxzxafacolijydivdjhk", "agtpwkpskjsmvulvevoopqncfapcnctyv", "djdwlbdznogrbqgoveeddadlciebjckiijop", "rhtaerxhgbydqixrymijxtgrlwlxmjaziiviecddnniftf", "vxjihqaxcmskvkbhprnfdbveecayuswearuug", "acswpweec", "fqctaobntjqjevebqhdrvwmxrwtcrwgd", "ztxemrmxedam", "hjthfojwcf", "ttijyjtjdlmnqgpyehulqhpqybrhkgtfvw", "izvegmdrmaugylkbjwmsbvxjihqaxcmskvk", "paybvcjfvmvazsakoggrkrnineakbrwxwqxsphpti", "heinnbu", "poefheinnbuyjlt"};
    int len = 2093;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "acswpweecebgphltfmuzodgavjiitarhmsnfyqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijopaybvcjfvmvazsakoggrkrnineakbrwxwqxsphptiijopyirhtaerxhgbydqixrymncqkmzqjzinayjseynkddhojfifmwmhtdfhjozqujnuxltewzzkbjbyqebuzqrukukowfqctaobntjqjevebqhdrvwmxrwtcrwgdjdwlbdznogrbqgoveeddadlciebjckiijop";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dict = {"hwrruzqbywmjcdaoagimcsuffngztaclqehiyn", "axjcwffrdnjrhhwrruzqbywmjcdaoagimcsuffngztacl", "pmehaxoddmlascdcawvhaj", "fnmzrngu", "iiiasdkmyqwiauzqbe", "imcsuffngztaclqeh", "nsrcvldqvdlqm", "dwdcsvqeeemuragpkgnypeuhcpwndamuntruaota", "fsvvvfbz", "hxhoybqpxseshozduixcdtuqafqmfclrafic", "ptwnhhepbxf", "yyklpauzabkx", "opfhbwptwnhhepbxfzptthfgmlgqtyeqlxpd", "bnsttsadqubxebedmqroonkruhnvwjq", "ragpkgn", "zwesoiprzunsnfdlfepmxcpgsnzxibcybeq", "pfqavuycj", "iemozakbjlzvzwesoiprzunsn", "enanjvgdplahzbrxeedbownzitsbuasxgexi", "vmzpciwgxsuobifhs", "egqyjpsrhdwdwztdtgmzfc", "oahogwnwbpninjmxrjkgzadrzrrxruaaklbyofexbtueoxit", "rgsrbgedfowqgosjgwosdm", "aklbyofexbtueoxitnlnsrcvldqvdl", "xitnlnsrcvldqvdl", "xkdihriiemozakbjlzvzwesoi", "vqeeemur", "zalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciw", "jjtqrdccpsfuubygdrhxhoybqpxseshozduixcdtuqa", "plujftqdcaocvennopfhbwptwnhhepbxfzptthfgmlgqtyeqlx", "ofexbtueoxitnlnsrcvldqvdlqmmqibhbtmlupnkj", "mdwdcsvqeeemuragpkgnypeuhcpwndamuntruaotazlq", "tanuidl", "hrgfv", "xitnlnsrcvldqvdlqmmqibhbtmlupnkjlxloazaenanj", "etsqidzjmvrjdnffnmzrnguliieysrdssicwskxh", "oafbwdvcgklrljmoufwpwagc", "vkfjyrusrozbzalxiy", "pwntznyvmdq", "wefivjwiyngzewwy", "rxcyoxvesnf", "hfgmlgqtyeqlxpdifhwkvube", "nwbpni", "gorldchjswyrhgemealjtzfzsifjuzqfkwinl", "xcpgsnzxibcybeqvkonnmebnsttsadqubxebedmq", "upnkjlxloazaenanjvgdplahzbrxeedbownzitsbuasx", "mdmgxtlnqauhyfssllgmanpugdnfzsz", "iauzqb", "vxqwgssljrhtyccrodt", "jwiyngzewwyvrxcyoxvesnfuveza"};
    int len = 1672;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "enanjvgdplahzbrxeedbownzitsbuasxgexiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxkdihriiemozakbjlzvzwesoiemozakbjlzvzwesoiprzunsnsrcvldqvdlqmdmgxtlnqauhyfssllgmanpugdnfzszalxiyqszrgsrbgedfowqgosjgwosdmqzxewcqvmzpciwefivjwiyngzewwyyklpauzabkxitnlnsrcvldqvdlqmmqibhbtmlupnkjlxloazaenanjjtqrdccpsfuubygdrhxhoybqpxseshozduixcdtuqa";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dict = {"cpelhqexqfcmpgjsm", "slwmfbkqasybjnyvdpt", "uhndvlycczqvffghusglkrsgrgryc", "gzwbmduxxoqtubgucpelhqexqfcmpgjsmuwvhin", "tmotwcgtxscabcvuhn", "ududxvekxoyxnienpgmwquppprhrtllhbzmweqwkl", "bfhoakwfvyubpdovuuqlfcn", "afomvbdujcqgmhyaunfxowisl", "gkdlgmnofoagrmnbjzsvvrlvtaldwleqozvdq", "mvgsqkqeebklzoneshdizpjmqxwsgqptokmudlixsrqomr", "gevpw", "zxhvegsjmoaibxdgevpwriioxjohoun", "nvyvvfxycxvqyjemuyhoi", "ciflbmrfuhrusphcgeywibzhmkbgmpukfwopzawabva", "iflbmrfuhrusphcgeywibzhmkbg", "fvwjeoyyhgzwbmduxxoqtubgucpelhqexqfcmpgjsmuwvhinlk", "xbcwnwlkdaaxmujqkizasnlxphnrhmixdqtqypvbachsatrr", "jorwsnhduztcobzafqliomgzx", "tcob", "eobchvxzqlossdjfiyhydyybkkxjydjjmounaaeqqisblohwz", "qcjwsvkskrorpdngja", "uhndvlycczqvffghusglkrsgrgryclxbty", "smuwvhinlkuvmyynevuaj", "qxfksvjjkefrfbobdeerlpajg", "voyzqppeesroulewihub", "yopyansqsnsqyfybkqnojwuejsbsi", "husglkrsgrgryclxbtyujcznwgzzqmm", "lokbhwvdtshxbcwnwlkdaaxmujqkizasnlxphnrhmixdq", "gkvtzdovlokbhw", "zfyqtjciflbmrfuhrusphcgeywibzhmkbgmpukfwopzawa", "cxwswqwdrawhjvszhkfosngkzbshbghvvududxvekxoyx", "xcblap", "zkaj", "nhduztcobzafqliomgzxh", "wtmotwcgtxscabcvuhndvlycczqvffghusglkrsgr", "gsjmoaibxdgevpwriioxjohounqkvkivfgkd", "vrlvtaldwleqozvdqu", "oyxnienpgmwquppprhrt", "aknahojnirkzstncbytsjyyxgxbdtcfipdhkr", "htcpbfhoakwfvyubpdovuuqlfcn", "lfcnfxwjorwsnhduztcobzafqliomgzxhvegsjmoai", "eebklzoneshdizpjmqxwsgqptokmudlixsrqomrqxfksv", "mkbgmpukfwopzawabvacpbdphahddlfr", "rorpdngjarwyisnpn", "fwphscvibezszgmixysdvph", "zoneshdizpjmqxwsgqpt", "vfgk", "khsmihltqcjwsvkskrorpdngja", "chzmdnvpvtsxuycqlrhzvhjswqnbt", "bphy"};
    int len = 1016;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "afomvbdujcqgmhyaunfxowislfcnfxwjorwsnhduztcobzafqliomgzxhvegsjmoaiflbmrfuhrusphcgeywibzhmkbgevpwtmotwcgtxscabcvuhndvlycczqvffghusglkrsgrorpdngjarwyisnpnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcnhduztcobzafqliomgzxhtcpbfhoakwfvyubpdovuuqlfcn";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dict = {"jmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewk", "kxivvcupbjt", "uqmtzljjzxgdxeglrwiruzlwbaodhtzerqpfzxltaanlxu", "eglrwiruzlwbaodhtzerqpfzxltaanlx", "fmtvajtjhcptmotejmzjviihrai", "ehkeyouqmtzljjzxgdxeglrwiruzl", "pfmtv", "pwirpkxi", "xdfgpigplvehkeyouqmtz", "nmmvkwtjyvglynayjreomjyvdxazdfjtdbjyjvru", "gppwirpkxivv", "tcvzmkesetvwmyaesogrcmvmgcwhvhezguewk", "lvgz", "kvqlvgzgieepmhvspbyepejlb", "xnaxdjmtmt", "vmgcwhv", "myaesogrcmvmgcwhvhezguewkvqlv", "ruzlwbaodhtzerqpfzxlt", "mkesetvwmyaesogrcmv", "qlvgzgieepmhvspbyepejlb", "uewkvqlvgzgieepmhvspbyepejlblho", "gdxeglrwiruzlwbaod", "hraiywqdxnaxdjmtmtcvzmkesetvwmy", "jyjvrumusoqhmqnghjuycn", "wqdxn", "yjvrumusoqhmqnghjuycn", "jtjhcptmotejmzjviihraiywqdxnaxdj", "gplvehkeyouqm", "rpkxivvcupbjtytsuyznmmvkwt", "mmvkwtjyvglynayjreomjy", "ynayjreomjyvdxazdfjtdb", "vkwtjyvglynayjreomjyvdxazdfj", "jreomjyvdxazdfjtdbjyjvrumusoqhmqnghjuycn", "dxnaxdjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvql", "djmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvg", "tcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvq", "rwiruzlwbaodhtzer", "tmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkv", "erqpfzx", "youqmtzljjzxgdxeglrwiruzlwbaodht", "qdxnaxdjmtmtcvzmkesetvwmyaesogrcmvmgc", "ezguewkvqlvgzgieepmhvspbyepejlblholxxdfgpigplve", "iihraiywqdxnaxdjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhe", "vgzgieepmhvsp", "suyznmmvkwtjyvglynayjreomjyvdxazdf", "juycn", "uycn", "jtdbjyjvrumu", "mtcvzmkesetvwmyaesogrcmvmgcwhvhezguew", "xnaxdjmtmtcvzmkesetvwmyaesogrcmvmgcwhv"};
    int len = 602;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "djmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvgdxeglrwiruzlwbaodjmtmtcvzmkesetvwmyaesogrcmvmgcwhvhezguewkvqlvg";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dict = {"uyqojozglexeuvrddthcai", "nsmqnaljlsy", "wpahkxzpxatnvhtrucvbnzaojsa", "nqptdunmicqffvbzwcupipzsyjmcrtv", "gid", "dvpnyymjclcpmyckq", "dgppzafjfamqqwhtlyaodqnygxikj", "jgbalfjborbbwvnxyqdotvyenyzvobfzjjltfpysxavvww", "tnryqbdsonorgqynrg", "zxckrnsffkjneobaxiulb", "ctfrqvstkvrl", "zsinlradvgnedrk", "chhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgw", "fqo", "llqdvpnyymjclcpm", "naqkqjgbalfjborbbwvnxyqdotvyenyzvobfzj", "obzqelolihoiqpapvxdmlbtekkolqcbcliwjlgjxcbbfvwvmd", "rchsckbvwkgkcfpdyicjrftagiypkj", "kortqqvr", "dpmmazixjlwgwzbqwbkwi", "fvbzwcupipzsyjmcrtvrtqawrfikhyek", "ansmqnaljlsyjkkagjuazeqrayektrqawqqfqyzefs", "es", "igseiiiactggiycdv", "ecfntoiskgeucimfucyutoxffweqwqegcknewkkeflj", "qqvrfadehjwpzyfjrighdoycihmezjyaqhanl", "yektrqawqqfqyzefsmdkktnxkdwkkizcrcizmrnghuz", "rk", "xfnlzptkbkckortqqvrfadeh", "kxwtnryqbdsonorgqynrgqngqfnueyvimqucfeazxsu", "lmbwruunwfksmhtmuuefmyfqodzmisc", "wjv", "nwznbvexryszdwyppxxtqxlfzzzk", "ase", "nugpzahfrgdembprwqywthkspbubmutzqdpn", "zligzftobmmlfigpyjdclswablwudzodkxwtnryqbdsono", "bnzaojsadqsgnngyuqoxyrfcyavbhesxrgme", "mcrtvrtqawrfikhyekkzasgivcrkadecan", "sckbvwkgkcfpdyicjrftagiypkjdjiepzvja", "vsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezq", "awhqwvlsklykhwljqgbvbpvfbrmniasesjcee", "rfadehjwpzyfjrighdoycihmezjyaqhanllwpahkxzpxat", "qbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqc", "tzhqcxzrgttrkun", "raye", "xikjfqzbvufzjpjwqejntuhwiztbjtuhkqgbjaqjfivykck", "wmlcblrhrhdqvhqrsbxxlulucsysjdicaujesayuyfc", "kqaonfzemokohxlruzligzftobmmlfigpyjdclswablwu", "cmdpxleodkgnbngv", "agjuazeqrayektrqawqqfqyzefsmdkktnxk"};
    int len = 2298;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agjuazeqrayektrqawqqfqyzefsmdkktnxkortqqvrayecfntoiskgeucimfucyutoxffweqwqegcknewkkefljgbalfjborbbwvnxyqdotvyenyzvobfzjjltfpysxavvwwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqchhhzuhqgwwbklcgpioamyzejpfbudhjkbxecjatrnzgwjvsedrvwultbtvxjiefnepzzptxefhxdupkgdtwmhnbezqbdsonorgqynrgqngqfnueyvimqucfeazxsudntpqc";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dict = {"qdlivxnexjwtdtxowijes", "xcsyjgefbadytrblihnisvysvjzbgdji", "yivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefba", "ltnuxkgpujxcsyjgefbadytrblihn", "kejhvfajxuzqprzusmwfzebrajppojcoobttwfauypeuise", "einmmjnnrvgpkosmazfcwzwrmwlnqnvicnidzowwcmbppbskm", "bttwfauypeuisebe", "ucsjkzpxobskjgluchlvlhppmpkpczaenajoguennxmmnib", "lhppmpkpczaenajoguennxmmnibpu", "dkldddxoset", "rtoorjpkzmwbnzltnuxkgpujxcsyjgefbadyt", "zowwcmbppbskmqtfzpfzhsaqjpmfxtvevygdfad", "aenajoguennxmmnibpussky", "rqtngekpwdkldddxosetcvprgjchnhkucsjkzpxobs", "svjzbgdj", "hkucsjkzpxobs", "eznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbady", "wcmbppbskmq", "esjzsqqqbuohisojynndlx", "pkzmwbnzltnuxk", "exjwtdtxowijesjzsqqqbuohisoj", "eapkejhvfajxuzq", "kyivszczspbeznrtoo", "rmwlnqnvicnidzowwcmbppbskmqtfzpfzhsaqjpmfxtvevyg", "jisdxwwlttlcavvipijsfvzlkkquekkagppxf", "gpkosmazfcwzwrmwlnqnvic", "vgizmxzqobqnzufigxyeoqdlivxnexjwtdtxowijesjz", "dkldddxosetcvprgjchnhkuc", "hp", "pojcoobttwfauypeuisebekyivsz", "kzmwbnzltn", "kpczaenajoguennxmmnibpusskykvgizmxz", "qprzus", "ekyivszczspbeznrtoorjpkzmwbnzltnuxk", "syjgefbadytrblihnisvysvjzbgdjisdxwwlt", "rmwlnqnvicnidzowwcmbppbskmqtfzpfzh", "kzmwbnzltnuxkgpujxcsyjgefbadyt", "befpvrkh", "pusskykvgizmxzqobqnzufi", "osetcvprgjchnhkucsjkzpxobskjgluchlvlhppmpkpcz", "rvgpkosmazfcwzwrm", "mmjnnrvgpkosmazfcwzwrmwlnq", "hy", "vxnexjwtdtxowijesjz", "zqprzusmwfz", "vfajxuzqprzusmwfzebrajppoj", "kagppxfyjfijxcbe", "kosmazfcwzwrmwlnqnvicnidzowwcmbppbskmqtfzpfzhsaqjp", "mbppbskmqtfzpfzhsaqjpmfxtvevygdfadegpshyrnfojdsh", "rvgpkosmazfcwzwrmwlnqnvicnidzowwc"};
    int len = 2498;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefbaenajoguennxmmnibpusskyivszczspbeznrtoorjpkzmwbnzltnuxkgpujxcsyjgefba";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dict = {"saufglgygpajxkl", "trmlgugrlkonoevzrfxovenptrrxgfqlbo", "xtod", "rrmwcj", "gpa", "ewpkjhsbmwyhqbijuquxijypyetzrbrjhsbuubtyoqbipfb", "gslkwkejihfxlplimqldfqncztitzx", "wnpioghxh", "rs", "jwqrifumifqgslkwkejihfxlpli", "vacrczkkjeovzcutbg", "smbh", "wjdrxxlsokbnoyqtugfqxpin", "vqdtynbcwzvgvlzovbbdfxszcueamkfyyad", "eynafybfapbvgxlneutphndemayhzwvapqsyubciaimlxfq", "xwtinpjwqrifumifqgslkwkej", "nodocxywqfveynafybfapbvgxlneutphndemayhzwvapqsyu", "awg", "lhdfmkvvmffhzydofhhgkjawkl", "pysrwnpioghxhslbybayyl", "kloyvbucbbeortymvjwwlwtfwtfhgligwflwdnqdoaro", "cn", "ufglgygpajxkl", "pttszunfdsbcaogsqjrpyetczxejwipvlimvnvapuhtbbdolil", "avvacrczkkjeovzcutbgdujeazs", "dbmnwnuldoaucgpkhcgsairunodocxywqfveynafybfapbv", "mnwnuldoaucgpkhcgsairunodocxywqfve", "vpaubuqypotqxrdhsmnhyehakhwnqhgrqno", "gfhrjjuhnhmkcholnkxo", "cqspp", "ygpajxkloyvbucbbeortymvjwwlwtfwtfhgligwflwdnqdo", "nmnnjelcqxqyeszhuqllujdnvadyjtotcmjme", "kjhsbmwyhqbijuquxijypyetzrb", "abigolwcpbuvltqchjfrjrakfiwqymooyzfyepfh", "nvcdeohbyevvwaokfnmnnjelcqxqyeszhuqllujd", "efzergfykihovbdrpgumhatrmlgugrlk", "biaaphyhfkzwwymomkaqvqd", "kazpftnlffmlxyydtywcdrzpybfzrzxeqsctjiip", "mnhyehakhwnqhgrqnoaajfvicampvyhg", "rzqokiqrrmwcjqjgqtgjmglyjcup", "veuikkowgqlfavbqycxfixrquucn", "lborahxyxvxtqxtodcjius", "airunodocxywqfveynafybfapbvgxlneutph", "vbbdfxszcuea", "gfqlborahxyxvxtqxtodcjiusglhdfmkvvm", "nfazwyrutiecnhyvyybcfft", "gfqlborah", "tfphnfvsbmyftojvdzkpnziuuuqivsmbh", "drvpaubuqypotqxrdhsmnhye", "otqxrdhs"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "avvacrczkkjeovzcutbgdujeazsaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjiusaufglgygpajxklborahxyxvxtqxtodcjius";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dict = {"kg", "rxkv", "ltzvxuszfooyx", "yiqhfvewocfrqmcvtglrbbjgcwb", "pqxbrey", "mwqwijadfklplscvgtedrwge", "yals", "comyihvpxkqwggzcqqnsltzvxuszfooyx", "veisqablgtivyiloxmgtpertjhngqgbmw", "pakuiwluhrihycsysltoxmilxyxljctnieeljrjz", "jtjjtyyarkzpbrar", "uui", "ntppfwtmwqwijadfklplscvg", "uchfpqxbreyrtvxntppfwtmwqwijadfklplscvgte", "tyyarkzpbrarxkvlezcqgaceyiqh", "breyrtvxnt", "bbjgcwbmzvei", "wgeawvedzquzstpppakuiwluh", "fvewocfrqmcvtglrbbjgcwbmzveisqablgtivyilo", "zpbrarxkvlezcqgaceyiqhf", "dzquzstpppak", "hngqgbmwwqhtlstkxhjkyxvbwifiuytlouxshkgqxvmzzcomy", "oxmilxyxljctnieeljrjzmebqozbtsjjegnuuiwaelaobx", "isqa", "hrihycsysltoxmilxyxljctnieeljr", "ljrjzmebqozbtsjjegnuuiwaelaobxkvdphqjtjjtyyark", "tivyiloxmgtpert", "ebqozbtsjjegnuuiwaela", "vdphqjtjjtyyarkzpbrarxkvlezcqgaceyiqhfvewocfrq", "sltzvxuszfo", "eljrjzmebqozbtsjjegnuuiwa", "pfwtmwqwijadfklplscvgtedrwgeawvedzqu", "jtdcvdgemknmibrhocloejnyalsefvktmk", "iuytlouxshkgqxvmzzco", "zveisqablgtivyiloxmgtpertjhngqgbm", "cwbmzveisqablgtivyiloxmgtpertjhngqgbmwwqhtlstkxhjk", "cqqnsltzvxuszfooyx", "htlstkxhjkyxvbwifiuytlouxshkgqxvmzzcomyihvpxkq", "gtpertjhngqgbmwwq", "yiloxmgtpertjhn", "geawv", "elaobxkvdphqjtjjtyyarkzpbrarxkvlezcqgaceyiqhfv", "yyarkzpbrarxkvlez", "wifiuytlouxshkgqxvmzzcomyihvpxkqwggzcqqnsl", "hfvew", "tpp", "emknmibrhocloejnyalsefvktmkahpuchfpqxbreyrtvxntppf", "ijadfklplscvgtedrwgeawvedzquzstpppa", "qozbtsjjegnuui", "st"};
    int len = 2499;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "breyrtvxntivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpertivyiloxmgtpert";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dict = {"dwrghwaeywbcqbrserbuiket", "uiketdzrkdybmayxoggwakcm", "ljrhhhxihgazenedwrgh", "rserbuiketdzrkdybmayxoggwak", "ywbcqbrserbuiketdzrkdybmayxoggwakc", "edwrghwaeywbcqbrserbuiketdzrkdybmayxoggwakcm", "qbrserbuiketdzrkdybmayxoggwakcm", "gljrhhhxihgazenedwrghwaeywbc", "brserbuiketdzrkdybmayxogg", "nedwrghwaeywbcqbrserbuiketd", "zenedwrghwaeywbcqbrserbuiketdzrkdybmayxoggwak", "azenedwrghwaeywbcqbrserbuiketdzrkdybmayxoggwakcm", "brserbuiketdzrkdybmayxoggwakcm", "azenedwrghwaeywbcqbrserbui", "rghwaeywbcqbrserbuiket", "rghwaeywbcqbrserbuiketdzrkdybmayxoggwakcm", "ketdzrkdybmayxoggwakcm", "rhhhxihgazenedwrghwaeywbcqbrser", "edwrghwaeywbcqbrserbuiketdzrkdy", "nxgljrhhhxihgazenedwrghwaeywbcqb", "iketdzrkdybmayxoggwakcm", "nedwrghwaeywbcqbrserbuiketdzrkdybmayxoggwakcm", "enedwrghwaeywbcqbrserbui", "rghwaeywbcqbrserbuiketdzrkdybmayx", "edwrghwaeywbcqbrserbuike", "hwaeywbcqbrserbuiketdzrkdybmayxoggw", "erbuiketdzrkdybmayxoggwakcm", "ihgazenedwrghwaeywbcqbrserbuike", "buiketdzrkdybmayxoggwakcm", "xihgazenedwrghwaeywbcqbrserbu", "rghwaeywbcqbrserbuiketdzrkdybmayxog", "gazenedwrghwaeywbcqbrserbuiketdzrkdybmayxoggwak", "rghwaeywbcqbrserbuiketdzrkdybmayxoggw", "aeywbcqbrserbuiketdzrkdybmayxoggwakcm", "gpnxgljrhhhxihgazenedwrghwaeywbcqbrs", "ketdzrkdybmayxoggwakcm", "gljrhhhxihgazenedwrghwaeywbcqb", "ywbcqbrserbuiketdzrkdybmayxoggwakcm", "pnxgljrhhhxihgazenedwrghwaeywbcqbrserbuiketdzrk", "erbuiketdzrkdybmayxoggwakcm", "ljrhhhxihgazenedwrghwaeywbc", "wrghwaeywbcqbrserbuiketdzrkd", "ywbcqbrserbuiketdzrkdybmayxoggwakcm", "qbrserbuiketdzrkdybmayxoggwakcm", "serbuiketdzrkdybmayxoggwakcm", "eywbcqbrserbuiketdzrkdybmayxoggwakcm", "kgpnxgljrhhhxihgazenedwrghwaeywbcqb", "hwaeywbcqbrserbuiketdzrkdybmayxoggwa", "gpnxgljrhhhxihgazenedwrghwaeywbcqbrserbuiket", "ljrhhhxihgazenedwrghwaeywbcqbrserbuiketdzrk"};
    int len = 2419;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "azenedwrghwaeywbcqbrserbuihgazenedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuikedwrghwaeywbcqbrserbuike";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dict = {"iqlkmcvgqsmgeaftazozbwlpgatrudi", "ycxdgyqebdlbmfwcezlxqksulqaawcebkhxpmlnkuwyiql", "xpmlnkuwyiqlkmcvgqsmgeafta", "yiqlkmcvgqsmgeaftazozbwlpgatrudillgd", "dwhckdwyzwdzedgbrqjgpjs", "bwlpgatrudillgdjizhuevkiwjkw", "wdwhckdwyzwdzedgbrqjgpjsyrrwnxbycay", "gqsmgeaftazozbwlpgatrudillgdjizhuevkiwjkwdwhckdw", "sjqzhxwlmrezxceknynvcmrwdqpikxwrcvehtmyrdyeiyprm", "huevkiwjkwdwhckdwyzwdzedgbrqjgpjsyrrwnx", "dwhckdwyzwdzedgbrqjgpjsyrrwnxbyc", "kiwjkwdwhckdwyzwdzedgbrqjg", "myrdyeiyprmakepdisxsujvyn", "cxdgyqebdlbmfwcezlxqksulqaawcebkhxpmlnkuwy", "ezlxqksulqaawcebkhxpmlnkuwyiqlk", "yiqlkmcvgqsmgeaftazozbwlpgatrudillgdjizhuevkiwjk", "ybwlgsjqzhxwlmrezxceknyn", "dyeiyprmakepdisxsujvyn", "yuqqdvmxpymhhknfucmgfpwycxdgyqebdlbmfwcezl", "aawcebkhxpmlnkuwyiqlkmcvgqs", "hxpmlnkuwyiqlkmcvgqsmgeaftazozbwlpg", "ezxceknynvcmrwdqpikxwrcvehtmyr", "ckdwyzwdzedgbrqjgpjsyrrwnxbycayy", "ucmgfpwycxdgyqebdlbmfwc", "mxpymhhknfucmgfpwycx", "xiyuqqdvmxpymhhknfucmgfpwycxdgyqebdlbmfwcezlxq", "iqlkmcvgqsmgeaftazozbwlpgatrudillgd", "mlnkuwyiqlkmcvgqsmgeaftazozbw", "hokqccrffqgsxiyuqqdvmxpymh", "azozbwlpgatrudillgdjizhuevkiwjkwdwhckdwyzwdz", "bwlpgatrudillgdjizhuevkiwjkwdwhckdwyzw", "gatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjg", "aftazozbwlpgatrudillgdjizh", "jsyrrwnxbycayybwlgsjqzhxwlmrezxceknynvcmrwdq", "llgdjizhuevkiwjkwdwhc", "jizhuevkiwjkwdwhckdwyzwdzed", "dzedgbrqjgpjsyrrwnxbycayybwlgsjqzhxwlmrezx", "cmgfpwycxdgyqebdlbmfwcezlxqksulqa", "hxpmlnkuwyiqlkmcvgqs", "bkhxpmlnkuwyiqlkmcvgqsmge", "dlbmfwcezlxqksulqaawcebkhxpmlnkuwyiqlk", "uevkiwjkwdwhckdwyzwdzedgbrqjgpjsyrrwnxbycayybw", "nxbycayybwlgsjqzhxwlmre", "yuqqdvmxpymhhknfucmgfpwycxdgyqebdlbmfwcezlxqksu", "ccrffqgsxiyuqqdvmxpymhhknfucmgfpwycxdgyqe", "sxiyuqqdvmxpymhhknfucmgfpwycx", "gfpwycxdgyqebdlbmfwcezlxqksu", "trudillgdjizhuevkiwjkwdwhc", "yqebdlbmfwcezlxqksulqaawce", "wnxbycayybwlgsjqzhxwlmrezxceknynvcmrwdq"};
    int len = 2168;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aawcebkhxpmlnkuwyiqlkmcvgqsjqzhxwlmrezxceknynvcmrwdqpikxwrcvehtmyrdyeiyprmlnkuwyiqlkmcvgqsmgeaftazozbwdwhckdwyzwdzedgbrqjgpjsyrrwnxbycaybwlgsjqzhxwlmrezxceknynxbycayybwlgsjqzhxwlmrezlxqksulqaawcebkhxpmlnkuwyiqlkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjgatrudillgdjizhuevkiwjkwdwhckdwyzwdzedgbrqjg";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dict = {"ahilsnskkhuuzzhunecezuszpulpsrnlgycddiv", "eohrwbojrlyybqsrbqwvjtrqkdcsoz", "yahilsnskkhuuzzhunecezuszpulpsrnlgyc", "oxepsrbchdcjjmxfijsjwujijbafschwq", "rbchdcjjmxfijsjwujijbafschwqbxrkhqcebr", "epsrbchdcjjmxfijsjwujijbafschwqbxrkhqceb", "hdcjjmxfijsjwujijbafschwqbxrkhqcebrm", "weyyahilsnskkhuuzzhunecez", "gycddivlayslktwozcdsfmamdfixkqnbzavm", "eohrwbojrlyybqsrbqwvjtrqkdcsozqoxepsrbchd", "szpulpsrnlgycddivlayslktwozcdsfm", "schwqbxrkhqcebrmioftadgpk", "hrwbojrlyybqsrbqwvjtrqkd", "yahilsnskkhuuzzhunecezuszpulpsr", "ulpsrnlgycddivlayslktwozcdsfmam", "kdcsozqoxepsrbchdcjjmxfijsjwujijbafschwqbxrkhqceb", "ozqoxepsrbchdcjjmxfijsjwujijba", "wvjtrqkdcsozqoxepsrbc", "szpulpsrnlgycddivlayslktwozcdsfmamdfixkqnbzavm", "vjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijba", "ycddivlayslktwozcdsfmamdfixkqnbzav", "yslktwozcdsfmamdfixkqnbzavmhfcanfkxx", "chwqbxrkhqcebrmioftadgpkxobwesayn", "sozqoxepsrbchdcjjmxfijsjwujijbafschwqbxrkhqcebrmi", "swrzapxalbweyyahilsnskkhuuzzhune", "uuzzhunecezuszpulpsrnlgycddivlayslktwozcdsfmamdfix", "ohrwbojrlyybqsrbqwvjtrqkdcsozqoxep", "hrwbojrlyybqsrbqwvjtrqkdcsozqoxepsrbchdcjjmxfi", "rbqwvjtrqkdcsozqoxepsrbchdcjjmx", "anfkxxoeohrwbojrlyybqsrbqwvjtrqkd", "qwvjtrqkdcsozqoxepsrbchdcjj", "jrlyybqsrbqwvjtrqkdcsozqoxepsrbchdcjjmxfij", "kdcsozqoxepsrbchdcjjmxfijsjwuji", "jmxfijsjwujijbafschwqbxrk", "ohrwbojrlyybqsrbqwvjtrqkdc", "dfixkqnbzavmhfcanfkxxoeohrwbojrlyybqsrbqwvj", "khqcebrmioftadgpkxobwesayn", "dcsozqoxepsrbchdcjjmxf", "schwqbxrkhqcebrmioftadgpkxobwesayn", "jmxfijsjwujijbafschwqbxrkhqceb", "fcanfkxxoeohrwbojrlyybq", "jtrqkdcsozqoxepsrbchdcjjmxfijsjwujij", "amdfixkqnbzavmhfcanfkxxoeohrwbo", "qoxepsrbchdcjjmxfijsjwujijbafschwqbxrkh", "hilsnskkhuuzzhunecezuszpulpsrnlg", "oeohrwbojrlyybqsrbqwvjtrqkdcsozqoxepsrbchdcjj", "ezuszpulpsrnlgycddivlayslktwozcdsfmamdfixkqnbza", "trqkdcsozqoxepsrbchdcjjmxfijsjwujijb", "qoxepsrbchdcjjmxfijsjwuji", "xkqnbzavmhfcanfkxxoeohrwbojrlyybqs"};
    int len = 2284;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddivjtrqkdcsozqoxepsrbchdcjjmxfijsjwujijbahilsnskkhuuzzhunecezuszpulpsrnlgycddiv";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dict = {"vxnnlwvejepjiyfbfoduilqbrqjm", "pobmkkzvveyfbbykrnpnuovxucwhaivjy", "awyounmpuqsyhqycvtowzjqhilieo", "pkvjbsityodrjxiblabnimvvxnnlwvejepjiyfbfoduil", "qbrqjmvvrdsyrcwzwyyzzdlzqjkhcvjudgyiyyqhfpktszl", "wyounmpuqsyhqycvtowzjqhilieolhdf", "rnpnuovxucwhaivjypsjldhqtlgjjfxuvx", "ojpobumofdlgxumpggyqwkzzmtqpobmkkzvveyfbbykrnpn", "dbbrfidqjfutbffmtrsptezzp", "yhcxcmfwuirwenffnhgdmdbbrfidqjfutbffmtrsptezzpspks", "lzqjkhcvjudgyiyyqhfp", "zqjkhcvjudgyiyyqhfpktszlzj", "yiyyqhfpktszlzjtbozkqdjvkiuzcltqggikjnjtipre", "nlwvejepjiyfbfoduilqbrqjmvvrdsyrcwzwyyzzdlzqjkhcv", "hilieolhdfssokkqazjfkxaqzjyz", "wuirwenffnhgdmdbbrfidqjfutbff", "lwvejepjiyfbfoduilqbrqjmvvrdsy", "gdmdbbrfidqjfutbffmtrsptezzpspksrxpdv", "fnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsb", "irwenffnhgdmdbbrfidqjfutbffmtrsptezz", "daypkvjbsityodrjxiblabnimvvxnnlwvejepjiyfbfoduilq", "wzwyyzzdlzqjkhcvjudg", "uqsyhqycvtowzjqhilieolhdfssokk", "ofdlgxumpggyqwkzzmtqpobmkkzvveyfbbykrnpnuovxucw", "jypsjldhqtlgjjfxuvxyqzgoelww", "lzexhgftumrxjfrudaypkvjbsityodr", "unmpuqsyhqycvtowzjqhilieo", "dlgxumpggyqwkzzmtqpobmkkzvv", "bsityodrjxiblabnimvvxnnlwvejepjiyfb", "sobzbtlyqfhawyounmpuqsyhqycvtowzjqhilieo", "yqwkzzmtqpobmkkzvveyfbbykrnp", "lfxdcqpkbvyhcxcmfwuir", "enffnhgdmdbbrfidqjfutbffmtrsptezzpspks", "cvjudgyiyyqhfpktszlzjtbozkqdjvkiuzcltqggikjnj", "lzjtbozkqdjvkiuzcltqggikjnjtipreohqnonaiqwuksl", "vxnnlwvejepjiyfbfoduilq", "khcvjudgyiyyqhfpktszl", "zcltqggikjnjtipreohqnonaiqwukslohxgfttiu", "bbykrnpnuovxucwhaivjypsjldhqt", "vxucwhaivjypsjldhqtlgjjfxuvxyqzg", "bbykrnpnuovxucwhaivj", "xpdvxvbsbpnwdojpobumofdlgxumpggyqwkzzmtqpobmkkzvve", "blabnimvvxnnlwvejepjiyfbfoduilqbr", "mdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbpnwdojp", "zexhgftumrxjfrudaypkvjbsityodrjxiblabni", "gxumpggyqwkzzmtqpobmkkzvveyfbbykrnpnu", "muhralzexhgftumrxjfruday", "vjypsjldhqtlgjjfxuvxyqzgoelwwwztvlfvlsob", "kiuzcltqggikjnjtipreohqnonaiqwukslohxgfttiuv", "gfttiuvtgfzjvljpbhofbvwhflmvjln"};
    int len = 2033;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "awyounmpuqsyhqycvtowzjqhilieofdlgxumpggyqwkzzmtqpobmkkzvveyfbbykrnpnuovxucwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsbbykrnpnuovxucwhaivjypsjldhqtlgjjfxuvxyqzgoelwwuirwenffnhgdmdbbrfidqjfutbffnhgdmdbbrfidqjfutbffmtrsptezzpspksrxpdvxvbsb";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dict = {"uqkactczubxpvdzjgarbdpklfaznhyprmlfyszwojari", "fyszwojaridqsoiuxceefwjfzkmxxkbxqpetmclzycj", "ceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsde", "wckdfmtjkbaznvqfgnpuqkactczubx", "mlfyszwojaridqsoiuxceefwjfzkm", "oiuxceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsde", "qkactczubxpvdzjgarbdpklfaznhyprmlfyszwojaridqs", "qfgnpuqkactczubxpvdzjga", "dfmtjkbaznvqfgnpuqkactczubxpvdzjgarbdpklfaznhyprml", "fyszwojaridqsoiuxceefw", "qmzoiqeagzihdcagppzpun", "mtjkbaznvqfgnpuqkactczubxpv", "ctczubxpvdzjgarbdpklfaznhyprmlfyszwoj", "agzihdcagppzpunoqiyzdwck", "hyprmlfyszwojaridqsoiuxceefwjfzkmxx", "idqsoiuxceefwjfzkmxxkbxq", "efwjfzkmxxkbxqpetmclzyc", "eagzihdcagppzpunoqiyzdwckdfmtjkbazn", "unoqiyzdwckdfmtjkbaznvqfgnpuqkactczu", "soiuxceefwjfzkmxxkbxqpetmcl", "fzkmxxkbxqpetmclzycjd", "uqkactczubxpvdzjgarbdpklfaznhyprmlfyszwojari", "yprmlfyszwojaridqsoiuxceefwjfzkmxxkbxqpetm", "etmclzycjdcnlbivyvsde", "zjgarbdpklfaznhyprmlf", "ctczubxpvdzjgarbdpklfaznhyprmlfyszwojaridqsoiux", "npuqkactczubxpvdzjgarbdpklfa", "dzjgarbdpklfaznhyprmlfyszwojaridqsoiuxceefwj", "kbxqpetmclzycjdcnlbivyvsde", "dfmtjkbaznvqfgnpuqkactczubxpvdzjgarbdpklfaznhyprml", "mtjkbaznvqfgnpuqkactczubxpvdzjgarbdpklfaznhyprm", "agppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkac", "aridqsoiuxceefwjfzkmxxkbxqpetmclzycjdcnlbiv", "kactczubxpvdzjgarbdpklfaznhyprm", "kdfmtjkbaznvqfgnpuqkactczubxpvd", "bxpvdzjgarbdpklfaznhyprmlfyszwojaridqs", "yzdwckdfmtjkbaznvqfgnpuqkactczubxpvdzjga", "faznhyprmlfyszwojaridqsoiuxceefwjfzkmxxkbxqpe", "ceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsde", "tczubxpvdzjgarbdpklfazn", "lfaznhyprmlfyszwojaridqsoiu", "tllbqepvqmzoiqeagzihdcagppzpunoqiyzdwckdfmtj", "rbdpklfaznhyprmlfyszwojaridqsoiuxceefwjfzk", "oiuxceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsde", "ebigpxvtllbqepvqmzoiqeagzihdcagppzpuno", "efwjfzkmxxkbxqpetmclzycjdcnlbivyvsde", "vqfgnpuqkactczubxpvdzjgarbdpklfaznhyprmlfyszwo", "punoqiyzdwckdfmtjkbaznvqfgnpuqkactczubx", "kmxxkbxqpetmclzycjdcnlbivyvsd", "xxkbxqpetmclzycjdcnlbivyvsde"};
    int len = 2091;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsdeagzihdcagppzpunoqiyzdwckdfmtjkbaznpuqkactczubxpvdzjgarbdpklfagppzpunoqiyzdwckdfmtjkbaznvqfgnpuqkaceefwjfzkmxxkbxqpetmclzycjdcnlbivyvsde";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dict = {"tcerrxgmuzwydkkrmemurfkqmiyao", "urfkqmiyaoialoyxymntplooixktisboihbjrwkg", "tvgadmehcbqglfwkthpgqaquv", "kglayhgckiylpfuiswseqwty", "lrgomupjmopgrsjonidktvgadmehcbqglfwkthpgqaquvlnt", "isboihbjrwkglayhgckiylpfuisws", "dmrmeqgcqbnjzfsnoiytsjcvfjwxdujacbjjpcy", "plooixktisboihbjrwkglayhgcki", "idktvgadmehcbqglfwkthpgqaquvlntau", "lazdcijdcwcfhdwjjqghhvamhy", "wwgyttbpxtswsavcbnfwkywpjhbbhjgjnfynkzoldledl", "wjjqghhvamhyyktcerrxgmuzwydkkrmem", "bnejycxbdiiqvkhuobasvexhuiahwwg", "exhuiahwwgyttbpxtsws", "tswsavcbnfwkywpjhbbhjgjnfynkzoldl", "ldledldaayqrijrrdouil", "rgomupjmopgrsjonidktvg", "vbnejycxbdiiqvkhuobasvexhuiahwwgyttb", "iytsjcvfjwxdujacbjjpcywcystlnbgybdiw", "lnbgybdiwphxbdjvlmbzdxssfeunotvbn", "bdiiqvkhuobasvexhuiahwwgytt", "kqmiyaoialoyxymntplooixktisboih", "qbnjzfsnoiytsjcvfjwxdujacbjjpcyw", "exhuiahwwgyttbpxtswsa", "quvlntaulazdcijdcwcf", "pgrsjonidktvgadmehcbqglfwkthpgqaquv", "jwxdujacbjjpcywcystlnbgybdiwphxbdjvlmbzdxssfeunotv", "nejycxbdiiqvkhuobasvexhuiahwwgyttbpxtswsa", "wpjhbbhjgjnfynkzoldledldaayqrijrrdouilrgomupjmop", "nfwkywpjhbbhjgjnfynkzoldledldaayqrijrrdouilrgomup", "stlnbgybdiwphxbdjvlmbzdxssfeunotvbnejycxbdiiqvkhuo", "wkglayhgckiylpfuisws", "mbzdxssfeunotvbnejycxbdiiqvkhuobasvexhuiahw", "ymntplooixktisboihbjrwkglayhgckiylpfuiswseqwty", "qrijrrdouilrgomupjmopgrsjonidktvgadme", "tbpxtswsavcbnfwkywpjhbbhj", "azdcijdcwcfhdwjjqghhvamhyyk", "hdwjjqghhvamhyyktcerrxgmuzwydkkrmemurfkqmiyaoial", "rrxgmuzwydkkrmemurfkqmiy", "hdwjjqghhvamhyyktcerrxgmuzwydkkrmem", "pgrsjonidktvgadmehcbqglfwkthpgqaquvln", "cvfjwxdujacbjjpcywcystlnbgybdiwphxbd", "boihbjrwkglayhgckiylpfuiswseqwty", "kkrmemurfkqmiyaoialoyxymntploo", "ahwwgyttbpxtswsavcbnfwky", "khuobasvexhuiahwwgyttbpxtsws", "nxkvwumtbqkqicgdgycjrddmr", "admehcbqglfwkthpgqaquvlntaulazdcijdcwcfhdwjjqg", "iwphxbdjvlmbzdxssfeunotvbnejycxbdiiqvkhuoba", "jycxbdiiqvkhuobasvexhuiahwwgyttbpxtswsavcbnfwky"};
    int len = 2371;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahwwgyttbpxtswsavcbnfwkymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwtymntplooixktisboihbjrwkglayhgckiylpfuiswseqwty";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dict = {"mzyqdjbazyascweojjnrhywwybgiripjgmhntsgtkisvnogv", "rbtlroiaokojamzyqdjbazyascweojjnrhywwy", "hntsgtkisvnogvgtflfljsuibcu", "mzfdmnnrbtlroiaokojamzyqdjbazy", "ojamzyqdjbazyascweojjnrhyww", "nrbtlroiaokojamzyqdjbazyascweo", "lroiaokojamzyqdjbazyascweojjn", "ojamzyqdjbazyascweojjnrhywwybgir", "nrhywwybgiripjgmhntsgtkisvnogvgtflfljsui", "ntsgtkisvnogvgtflfljsuibcu", "bgiripjgmhntsgtkisvnogvgtflflj", "vanmuphdxeaearumzfdm", "djbazyascweojjnrhywwybgiripjgmhntsgtkisvnogvgtflf", "nrhywwybgiripjgmhntsgtkisvnogvgtflfljsuibcu", "sgtkisvnogvgtflfljsuibcu", "sgtkisvnogvgtflfljsuibcu", "yascweojjnrhywwybgiripjgmhntsgtkisvnogvgtf", "hntsgtkisvnogvgtflfljsuibcu", "uphdxeaearumzfdmnnrbtlroiaokojamzyqdjba", "gtkisvnogvgtflfljsuibcu", "azyascweojjnrhywwybgiripjgmhntsgtkisvnogvgtflfl", "aokojamzyqdjbazyascweojjnr", "lroiaokojamzyqdjbazyascweojjnrhywwybgiri", "xeaearumzfdmnnrbtlroiaokojamzyqd", "mnnrbtlroiaokojamzyqdjbazyascweojjnrhywwybgir", "ntsgtkisvnogvgtflfljsuibcu", "giripjgmhntsgtkisvnogvgtf", "vanmuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbazy", "ojjnrhywwybgiripjgmhntsgtkisvnogvgtflfl", "oxvanmuphdxeaearumzfdmnnrbt", "wwybgiripjgmhntsgtkisvnogvgtflfljsuibcu", "eojjnrhywwybgiripjgmhntsgtkisvnogvgtflfljs", "tsgtkisvnogvgtflfljsuibcu", "hdxeaearumzfdmnnrbtlroiaokojamzyqdj", "hdxeaearumzfdmnnrbtlroiaokojamzyqd", "weojjnrhywwybgiripjgmhntsgtkisvnogvgtflfljsuibcu", "tkisvnogvgtflfljsuibcu", "tsgtkisvnogvgtflfljsuib", "earumzfdmnnrbtlroiaokojamzyqdjb", "jgmhntsgtkisvnogvgtflfljsuibcu", "nrhywwybgiripjgmhntsgtkisvnogvgtflfljsuib", "wwybgiripjgmhntsgtkisvnogvgt", "nrbtlroiaokojamzyqdjba", "ywwybgiripjgmhntsgtkisvnogvgtflfljsui", "mzyqdjbazyascweojjnrhyw", "lroiaokojamzyqdjbazyascweo", "amzyqdjbazyascweojjnrhywwybgiripjg", "jamzyqdjbazyascweojjnrhy", "umzfdmnnrbtlroiaokojamzyqdjbazyascweojjnrhy", "gtkisvnogvgtflfljsuibcu"};
    int len = 2084;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "amzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcuphdxeaearumzfdmnnrbtlroiaokojamzyqdjbamzyqdjbazyascweojjnrhywwybgiripjgtkisvnogvgtflfljsuibcumzfdmnnrbtlroiaokojamzyqdjbazyascweojjnrhyascweojjnrhywwybgiripjgmhntsgtkisvnogvgtf";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dict = {"gjpoxgeadtnbkggbqirrelkppb", "lzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbm", "fbacwcgjpoxgeadtnbkggb", "frcbmmhmwvhimrjlfmtzmmzgoeimvcy", "gjpoxgeadtnbkggbqirrelkppbqoigu", "fisaunjynjsfpqzkdugcizvlsvfbacwcgjpoxgea", "oeviftussdahpbjmbowlcwgiyozwxmyqhpoenclpqw", "eviftussdahpbjmbowlcwgiyozwxmyqhpoenclpqwrfuwef", "kffnnvyzhiltnhtztiykycepgyfebsmhmvomkchfi", "yozwxmyqhpoenclpqwrfuwefeeypehsrbllij", "qhpoenclpqwrfuwefeeypehsrbllijbzrjl", "ztiykycepgyfebsmhmvomkchfisaunjynjsfpqzkd", "ussdahpbjmbowlcwgiyozwxmyqh", "hfisaunjynjsfpqzkdugcizvlsvfbacwcgjpoxgead", "wrfuwefeeypehsrbllijbzrjlzkwh", "nnvyzhiltnhtztiykycepgyfe", "yqhpoenclpqwrfuwefeeypehsrbllijbzrjlzkwhvpbfdivw", "kycepgyfebsmhmvomkchfisaunjynjsfpqzk", "wqkqipkhgieplrvgninyrdmpjhtjtnpungrofykcajhmtcb", "ppbqoigurnyoeviftussdahpbjmbowlcwgiyo", "iyozwxmyqhpoenclpqwrfu", "myqhpoenclpqwrfuwefeey", "ahzjbbdfeizaqkffnnvyzhiltnhtzti", "dahpbjmbowlcwgiyozwxmyqhpoenc", "pgyfebsmhmvomkchfisaunjynjsfpqzkdugcizvls", "jhmtcbhsahzjbbdfeizaqkffnnvyzhilt", "eypehsrbllijbzrjlzkwhvpbfdivwjjmotpuo", "mbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehs", "cizvlsvfbacwcgjpoxgeadtnbk", "cgjpoxgeadtnbkggbqirrelkppbqoigurnyo", "bfdivwjjmotpuorgifdkswhrlmozvgtdfbggyf", "dahpbjmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehsr", "lzkwhvpbfdivwjjmotpuorgifdksw", "kqipkhgieplrvgninyrd", "ozvgtdfbggyfrcbmmhmwvhimrjlfmtz", "rlmozvgtdfbggyfrcbmmhmwvhimrjlf", "yozwxmyqhpoenclpqwrfuwefeeypehsrbllijbzrjlzkwh", "fisaunjynjsfpqzkdugcizvlsvfbacwc", "grofykcajhmtcbhsahzjbbdfeizaqkffnnvyzhiltnhtztiy", "zaqkffnnvyzhiltnhtztiykycepgyf", "bhsahzjbbdfeizaqkffnnvyzhiltnhtztiykycepgyfebsmhm", "zaqkffnnvyzhiltnhtztiykyc", "fuwefeeypehsrbllijbzrjlzkw", "rjlzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrc", "ssdahpbjmbowlcwgiyozwxmyqhpoencl", "yoeviftussdahpbjmbowlcwgiyozwxmyqhpoe", "kycepgyfebsmhmvomkchfisaunjynjsfpq", "mkchfisaunjynjsfpqzkdugcizvlsv", "bowlcwgiyozwxmyqhpoenclp", "wlcwgiyozwxmyqhpoenclpq"};
    int len = 2343;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahzjbbdfeizaqkffnnvyzhiltnhtztiyozwxmyqhpoenclpqwrfussdahpbjmbowlcwgiyozwxmyqhfisaunjynjsfpqzkdugcizvlsvfbacwcgjpoxgeadahpbjmbowlcwgiyozwxmyqhpoencgjpoxgeadtnbkggbqirrelkppbqoigurnyoeviftussdahpbjmbowlcwgiyozwxmyqhpoenclpqwlcwgiyozwxmyqhpoenclpqhpoenclpqwrfuwefeeypehsrbllijbzrjlzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehssdahpbjmbowlcwgiyozwxmyqhpoenclzkwhvpbfdivwjjmotpuorgifdkswhrlmozvgtdfbggyfrcbmbowlcwgiyozwxmyqhpoenclpqwrfuwefeeypehs";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dict = {"ldsvzebkiomttkrnaalwpc", "ucptaxpgsgedrckpfescnwzfvsqidfffwwhnt", "fyefrqvssjvhotldsvzebkiomt", "tkztnkpwrezzywucptaxpgs", "slahlwftivccfajcpnlvaxyapjeeffsaqrulctkztnkpwrez", "tvhhoeifeqjizkdduzzvhbmvnpqpsuyfkzxs", "kbllsmucmkijppvojslahlwftiv", "aophqancejltbacgknyztoterxtbvbfyefrqvssjvhot", "aalwpcitrshjejcmqkbllsmucmkijppv", "jeeffsaqrulctkztnkpwrezzywucp", "yefrqvssjvhotldsvzebkiomttkrnaalwpcit", "bllsmucmkijppvojslahlwftivccfajcpnl", "ejltbacgknyztoterxtbvbfye", "oyqcvaophqancejltbac", "cejltbacgknyztoterxtbvbf", "smucmkijppvojslahlwftivccfajcpnlva", "tbacgknyztoterxtbvbfyefrqvssjvhotldsvzebk", "rezzywucptaxpgsgedrckpfescn", "ffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqp", "ijppvojslahlwftivccfajcpnlvaxyapjeeffsaqrulct", "sqidfffwwhntghtvhhoeifeqjizkddu", "cvaophqancejltbacgknyztoterxtbvbfyefrqvssj", "drckpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhb", "pcitrshjejcmqkbllsmucmkijppvojslahlw", "hlwftivccfajcpnlvaxyapjeeffsaqrulctkztnkpwrezzywu", "zkdduzzvhbmvnpqpsuyf", "eeffsaqrulctkztnkpwrez", "cptaxpgsgedrckpfescnwzfvsqidfffwwhntghtvhho", "cgknyztoterxtbvbfyefrqvssjvh", "hqancejltbacgknyztoterxtbvbfyefrqv", "jejcmqkbllsmucmkijppvojslahlwftivccfajcpnlvaxyap", "otldsvzebkiomttkrnaalwpcitrshjejcmqkbllsm", "vaophqancejltbacgknyztote", "pfescnwzfvsqidfffwwhntghtvhhoeifeqjiz", "cptaxpgsgedrckpfescnwzfvsqidfffwwhntg", "pnlvaxyapjeeffsaqrulctkztnkpwr", "toterxtbvbfyefrqvssjvhotldsvzeb", "fyefrqvssjvhotldsvzebkiomttkrnaalwpcitrshjej", "rulctkztnkpwrezzywucp", "nwzfvsqidfffwwhntght", "cpnlvaxyapjeeffsaqrulctkztnkpwre", "trshjejcmqkbllsmucmkijppvoj", "cgknyztoterxtbvbfyefrqvssjvhotldsvzebkiomt", "rnaalwpcitrshjejcmqkbllsmucmki", "llsmucmkijppvojslahlwftivccfajcpnlvaxyapjeeffs", "itrshjejcmqkbllsmucmkijppvo", "pjeeffsaqrulctkztnkpwrezzywucp", "slahlwftivccfajcpnlvaxyapjeeffsaqrulctkztnkpwre", "alwpcitrshjejcmqkbllsmucmkijppvojslahl", "fvsqidfffwwhntghtvhhoeifeqjizk"};
    int len = 2018;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aalwpcitrshjejcmqkbllsmucmkijppvaophqancejltbacgknyztoteeffsaqrulctkztnkpwrezkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpfescnwzfvsqidfffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqpsuyffwwhntghtvhhoeifeqjizkdduzzvhbmvnpqp";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dict = {"bwbufoymbgsrzdrfyhaoizkltulrowamlczi", "spqswbgscugkcxbagwasjwmqgrrpfgigjjdgmrr", "hlvpsxvvmepwscjzuabofdsibydigdrskjcpuvlwzkdlg", "agwasjwmqgrrpfgigjjdgmrrty", "sibydigdrskjcpuvlwzkdlgvcrwuu", "detgxpuonluyjxzzdizlhuhk", "hdetgxpuonluyjxzzdizlhuhkne", "eagsjvwiqzvmspqswbgscugkcxbagwasjw", "zdizlhuhknezylantnxofbehahvilwjtnjhmzzd", "behahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftw", "luyjxzzdizlhuhknezylantnxof", "jtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvps", "sibydigdrskjcpuvlwzkdlgvcrwuuhtyiccrrkvjhkprifzaa", "zipkwijzgeagsjvwiqzvmspqswbgscugkc", "yiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltul", "pyadvxbtiktedyttcexmfneftwkqh", "ccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltu", "zlhuhknezylantnxofbehahvilwjtnjhmzzdrypyadvxbtik", "oizkltulrowamlczipkwijzgeagsjvw", "hahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfn", "aoizkltulrowamlczipkwijzgeagsjvwiqzvmspqswbgsc", "drypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzua", "kdlgvcrwuuhtyiccrrkvjhkprifzaanybwbuf", "tyiccrrkvjhkprifzaanybwbufo", "wscjzuabofdsibydigdrskjcpu", "skjcpuvlwzkdlgvcrwuuht", "izlhuhknezylantnxofbehahvilwjt", "scugkcxbagwasjwmqgrrpfgigjjdgmrrty", "bgscugkcxbagwasjwmqgrrpfgigjjd", "lantnxofbehahvilwjtnjhmzzdryp", "zdizlhuhknezylantnxofbeh", "xofbehahvilwjtnjhmzzdrypyadvxbti", "ifzaanybwbufoymbgsrzdrfyhaoizkltulro", "sxvvmepwscjzuabofdsibydigdrskjcpuvlwzkdlg", "kdlgvcrwuuhtyiccrrkvjhkprifzaanybwbufoymbg", "qswbgscugkcxbagwasjwmqgrrpf", "ttcexmfneftwkqhlvpsxvvmepwscj", "qswbgscugkcxbagwasjwmq", "neftwkqhlvpsxvvmepwscjzuabofd", "zlhuhknezylantnxofbeha", "bgscugkcxbagwasjwmqgrrpfg", "eagsjvwiqzvmspqswbgscugkcxbagwasj", "zdizlhuhknezylantnxofbehahvilwjtnjhmzzdrypyadvxbt", "uabofdsibydigdrskjcpuvlwzkdlgvcrwuuhtyi", "drskjcpuvlwzkdlgvcrwuuhtyiccrrk", "lwzkdlgvcrwuuhtyiccrrkvjhkpr", "drfyhaoizkltulrowamlczipkwijzgea", "cjzuabofdsibydigdrskjcpuvlwzkdlgvc", "jhkprifzaanybwbufoymbgsrzdrfyhaoizkltulro", "rskjcpuvlwzkdlgvcrwuuhtyiccrrkvjhkpri"};
    int len = 2044;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdrfyhaoizkltulrowamlczipkwijzgeagwasjwmqgrrpfgigjjdgmrrtyiccrrkvjhkprifzaanybwbufoymbgsrzdrfyhaoizkltulantnxofbehahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhahvilwjtnjhmzzdrypyadvxbtiktedyttcexmfneftwkqhlvpsxvvmepwscjzuabofdetgxpuonluyjxzzdizlhuhkdlgvcrwuuhtyiccrrkvjhkprifzaanybwbuf";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dict = {"ncopjeuxwjjywafvbdkiq", "uguwsnpwhlvhhfrnkvyxjorqluwt", "fxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvh", "rkwgjzbvauguwsnpwhlvhhfrnkvyx", "xjfntancopjeuxwjjywafvbdkiq", "wxjfntancopjeuxwjjywafvb", "ancopjeuxwjjywafvbdkiq", "ocrkwgjzbvauguwsnpwh", "odvcmcozocrkwgjzbvauguwsnp", "uwsnpwhlvhhfrnkvyxjorqluwtuhmyjlhnmj", "wtuhmyjlhnmjjacxkzxsuwpaiiw", "hlvhhfrnkvyxjorqluwtuhmyjlhnmjjacxkzxsuwpaiiwxjfnt", "jjacxkzxsuwpaiiwxjfntanco", "hfrnkvyxjorqluwtuhmyjlhnmjjacxkzxsuwpaiiwxj", "paiiwxjfntancopjeuxwjjywafvbdkiq", "uwtuhmyjlhnmjjacxkzxsuwpai", "zocrkwgjzbvauguwsnpwh", "wpaiiwxjfntancopjeuxwjjywafvbdki", "hnmjjacxkzxsuwpaiiwxjfntancop", "tuhmyjlhnmjjacxkzxsuwpaiiwxjf", "luwtuhmyjlhnmjjacxkzxsuwpaiiwxjfntan", "nkvyxjorqluwtuhmyjlhnmjjac", "tosfxgdcakxodvcmcozocrkwgjzbvau", "mjjacxkzxsuwpaiiwxjfntancopjeuxwjjywaf", "paiiwxjfntancopjeuxwjjywafvbdkiq", "yjlhnmjjacxkzxsuwpaiiwx", "hnmjjacxkzxsuwpaiiwxjfnt", "mjjacxkzxsuwpaiiwxjfntancopjeuxwjjywafvbdkiq", "qluwtuhmyjlhnmjjacxkzxsuw", "zbvauguwsnpwhlvhhfrnkvyxjorqluwt", "rkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtuhmyjlhnm", "xodvcmcozocrkwgjzbvaugu", "nmjjacxkzxsuwpaiiwxjfntancopjeu", "jjacxkzxsuwpaiiwxjfntancopjeux", "jacxkzxsuwpaiiwxjfnta", "uwpaiiwxjfntancopjeuxwjjywafvbdkiq", "xjfntancopjeuxwjjywafv", "cxkzxsuwpaiiwxjfntancopjeuxwj", "luwtuhmyjlhnmjjacxkzxsuwpaiiwxjfnt", "hmyjlhnmjjacxkzxsuwpa", "luwtuhmyjlhnmjjacxkzxsuwpaiiwxjfntancopjeuxwjj", "fntancopjeuxwjjywafvbdkiq", "iiwxjfntancopjeuxwjj", "akxodvcmcozocrkwgjzbvau", "kxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjor", "auguwsnpwhlvhhfrnkvyxjorqluwtuhmyjlhnmjjacxkz", "wpaiiwxjfntancopjeuxwjjywafvbdk", "snpwhlvhhfrnkvyxjorqluwtuhmyjlhnmjjacxkzxsuwp", "crkwgjzbvauguwsnpwhlvhhfrn", "cmcozocrkwgjzbvauguwsnp"};
    int len = 2065;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "akxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvauguwsnpwhlvhhfrnkvyxjorqluwtosfxgdcakxodvcmcozocrkwgjzbvau";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dict = {"eydmlroiwfzbjvtxiakmhwtt", "ooebpqeydmlroiwfzbjvtxiakmhwttoqfxifklaqz", "xthawubwafttuwhkmauk", "qtzhptoworwttevxcvanhnxfzmeyzoopnzuhclouslqeaosp", "afttuwhkmaukdceotcsvfasnpzwtaqvadongljcirggciyjg", "ebhcyytowhegpvkmljcdkvnzbcyv", "zqlqtkcymkpcpyivxcsafgooebpqey", "pcpyivxcsafgooebpqeydmlroiwfzbjvtxiakmhwttoqfxifkl", "xulkfsgeqatbmfilwcpymxxidlx", "rrlqkkrrahisqpqtzhptoworwttevxcvanhnxfzmeyzoopnzu", "wfzbjvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskf", "tnvmujynuybjctatoihzqlqtkcymkpcpyi", "owhegpvkmljcdkvnzbcyvkk", "ekpxeihbrsblwoouqbiueebhcyytowhegpvkml", "fzbjvtxiakmhwttoqfxifklaqzcdzq", "hidhkpbuxrstoivtkunxthawubwaf", "cpzvzyoalksfzmftiovejqalfacdrmwshekpxeihbrsblwoouq", "tkcymkpcpyivxcsafgooebpqeydmlroiwfzbjvt", "gooebpqeydmlroiwfzbjvt", "whegpvkmljcdkvnzbcyvkkkaigwcip", "wcipnzftyhidhkpbuxrstoivtkunxthawubwaftt", "pfexbtnvmujynuybjctatoihzqlqtkcymkpcpyivxcsafgoo", "kmljcdkvnzbcyvkkkaigwcipn", "vyxbgvuzkhyvxrrlqkkrrahisqp", "bgvuzkhyvxrrlqkkrrahisqpqtzhptoworwttevxcvanhnx", "ouslqeaospfexbtnvmujynuybjctatoihzq", "wpgbskfbppedelpxhnasfn", "rrahisqpqtzhptoworwttevxcvanhnxfzmeyzoopnzuh", "fzbjvtxiakmhwttoqfxifkl", "btnvmujynuybjctatoihzqlqtkcymkpcpyivxcsafgooebpqe", "jevdigahfonomvyxbgvuzkhyvx", "ujynuybjctatoihzqlqtkcymkpcpyiv", "clouslqeaospfexbtnvmujynuybjctatoihzql", "tnvmujynuybjctatoihzqlqtkcymkpcpyivxcsafgooebpq", "fvcrroeljevdigahfonomvyxbgvuzkhyvxrrlqkk", "delpxhnasfncfcpzvzyoalksfzmftiovejqalfacdrmwsh", "ttuwhkmaukdceotcsvfasnpzwtaqvadongljcirggc", "qatbmfilwcpymxxidlxfv", "krrahisqpqtzhptoworw", "fklaqzcdzqhezwwpgbskfbppedelpxhnasfncfcp", "vxrrlqkkrrahisqpqtzhptoworwttevxcvanhnxfzmeyzoo", "vtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbp", "tbmfilwcpymxxidlxfvcrroeljevdigahfonomvyxbgvuzkhy", "acdrmwshekpxeihbrsblwoouqbiueebhcyytowhegpv", "ivtkunxthawubwafttuwhkmaukdceotcsvfasnp", "hisqpqtzhptoworwttev", "oworwttevxcvanhnxfzmeyzoopnzuhclouslqeaospfexbtn", "pbuxrstoivtkunxthawubwafttuwhkmaukdceo", "txiakmhwttoqfxifklaqzcdzqhezwwpgbskf", "sfncfcpzvzyoalksfzmftiovejqalfa"};
    int len = 2270;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "acdrmwshekpxeihbrsblwoouqbiueebhcyytowhegpvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbpbuxrstoivtkunxthawubwafttuwhkmaukdceouslqeaospfexbtnvmujynuybjctatoihzqatbmfilwcpymxxidlxfvtxiakmhwttoqfxifklaqzcdzqhezwwpgbskfbp";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dict = {"iuqicincdxgvtainznhrahdfdu", "xbnlerkmuavjquzqegcjnokbrpxahmqoliccfjvlzqlmnl", "qoliccfjvlzqlmnlvinatoppczgguesswqm", "ycnxbxstgiuqicincdxgvtainzn", "cfjvlzqlmnlvinatoppczgguesswqm", "xhzqvjbqhnccwdwzghpfvpvswkpjetizbtmsblouew", "fcjvzhoiyvqkfbdomlbwhfosgory", "tcgmvywmmazoqkqyphhoa", "duwybjrqcdcfntmgvitlffnmmbmdqivykswukd", "muavjquzqegcjnokbrpxahmqoliccfjvlzq", "swukdrdwxbnlerkmuavjquzqegcjnokbrpxahmqo", "egcjnokbrpxahmqoliccfjvlzqlmnlvinatop", "rpxahmqoliccfjvlzqlmnlvinatoppczgguesswqm", "oryhksjqojycnxbxstgiuqicincdxgv", "qvjbqhnccwdwzghpfvpvswkpjetizbtmsblouewrkjwp", "mqoliccfjvlzqlmnlvinatoppczggue", "lzqlmnlvinatoppczgguesswqm", "cnxbxstgiuqicincdxgvtai", "wkpjetizbtmsblouewrkjwpcfcjv", "qojycnxbxstgiuqicincdxgv", "zoqkqyphhoanzxvolodqykj", "wsgjowqitcgmvywmmazoqkqyphhoa", "mvywmmazoqkqyphhoanzxv", "hhoanzxvolodqykjdexgnx", "tmsblouewrkjwpcfcjvzhoiyvqkf", "muavjquzqegcjnokbrpxahmqoliccf", "lerkmuavjquzqegcjnokbrpxahmqoliccfjvlzqlmnlvina", "jnokbrpxahmqoliccfjvlzqlmnlvinatoppczgg", "nmmbmdqivykswukdrdwxbnlerkmuavjquz", "ghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdom", "jvzhoiyvqkfbdomlbwhfosgoryhksjqojycnxbxstgiuqic", "lzqlmnlvinatoppczgguesswqm", "jnokbrpxahmqoliccfjvlzqlm", "qojycnxbxstgiuqicincdxgvtainznhrahdfduwybjrqcd", "dmxfnzjhrlbnkmbuuumyohokeaxshipw", "ybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavj", "qoliccfjvlzqlmnlvinatoppczggues", "lbnkmbuuumyohokeaxshipwsgjowqitcgmvywmma", "cfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmu", "vtainznhrahdfduwybjrqcdcfntmgvitlffnmm", "dwzghpfvpvswkpjetizbtmsblouewrkjwpcfcj", "qykjdexgnxhzqvjbqhnccwdwzghpfvpv", "nlerkmuavjquzqegcjnokbrpxahmqolicc", "oanzxvolodqykjdexgnxhzqvjbqhnccwdwzghpfvpvswkpjet", "zbtmsblouewrkjwpcfcjvz", "jycnxbxstgiuqicincdxgvtainznhrahdfduwybjrqcdcf", "brpxahmqoliccfjvlzqlmnlvinatoppczg", "cincdxgvtainznhrahdfduwybjrqcdcfntmgvitlffnm", "dmxfnzjhrlbnkmbuuumyohokeaxshipwsgjowqitcgmvywmm", "goryhksjqojycnxbxstgiu"};
    int len = 2401;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "brpxahmqoliccfjvlzqlmnlvinatoppczghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomuavjquzqegcjnokbrpxahmqoliccfcjvzhoiyvqkfbdomlbwhfosgorybjrqcdcfntmgvitlffnmmbmdqivykswukdrdwxbnlerkmuavjnokbrpxahmqoliccfjvlzqlmnlvinatoppczgghpfvpvswkpjetizbtmsblouewrkjwpcfcjvzhoiyvqkfbdomqoliccfjvlzqlmnlvinatoppczggue";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dict = {"smmccnynxcbpptmtzofwumzkhooiaenjwkfxf", "tbvvlutkwyihuaudxnecrbn", "ccnynxcbpptmtzofwumzkhooiaenjwkfxfoykcbejrbbwzr", "snotrtmrjhvnipfqevepswxyhjssydhwgwidlyuw", "xqqjoskmxyjyzmlzuvwh", "tkwyihuaudxnecrbnfdkjqrulppbtibewnpchjnsozq", "rdapiscsnotrtmrjhvnipf", "cynhlixkosaitjavxbikhbfxrceeqfshuk", "wgwidlyuwxmrypdpdbjouttvqwqvoloijqyzvdwcyn", "lyuwxmrypdpdbjouttvqwqvolo", "qvoloijqyzvdwcynhlixkosaitjavxbikhbfxrceeqfshuk", "foykcbejrbbwzrstrbtkxjlrwpfgnpvshwkallcjwpi", "chjnsozqxrdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgw", "vxbikhbfxrceeqfshukuf", "uvwhfiqamytwoqhcjldcnlxqnwuwk", "kcbejrbbwzrstrbtkxjlrwpfgnpvshwkal", "xcbpptmtzofwumzkhooiaenjwkfxfoykcbejrbbwzrstrbtkxj", "bjouttvqwqvoloijqyzvdwcynhlix", "qqjoskmxyjyzmlzuvwhfiqamytwoqhcjldcnl", "ooiaenjwkfxfoykcbejrbbwzrstrbtkx", "vxbikhbfxrceeqfshukufuouivnhoi", "fqevepswxyhjssydhwgwidlyuwxmrypdpdbjoutt", "dbjouttvqwqvoloijqyzvdwcynh", "oiaenjwkfxfoykcbejrbbwzrstrbtkxjlrwpfgn", "vnipfqevepswxyhjssydhwgwidlyuwxmrypdpdbjouttvqwq", "nhoirtzhflhsmmccnynxcbpptmtzofwumzkhooiae", "xkosaitjavxbikhbfxrceeqfshukufuouivnhoirtzhflhs", "hjssydhwgwidlyuwxmrypdpd", "irtzhflhsmmccnynxcbpptmtzofwumzkhooia", "ibewnpchjnsozqxrdapiscsnotr", "ynhlixkosaitjavxbikhbfxrceeqfshukufuouivn", "uaudxnecrbnfdkjqrulppbtibe", "dapiscsnotrtmrjhvnipfqevepswxyh", "ouivnhoirtzhflhsmmccnynxcbpptmtzofwumzkhooi", "osaitjavxbikhbfxrceeqfsh", "uwxmrypdpdbjouttvqwqvo", "ibewnpchjnsozqxrdapiscsnotrtmrjhvnipfqeveps", "wxmrypdpdbjouttvqwqvoloijqyzvdwcynhl", "vepswxyhjssydhwgwidlyuwxmrypdpdbjouttvqwqvo", "zvdwcynhlixkosaitjavxbikhbfxrceeqfshukufu", "fcnsklgaexqqjoskmxyjyzmlzuvwhfiqamytwoqhcjl", "bbwzrstrbtkxjlrwpfgnp", "ihuaudxnecrbnfdkjqrulppbtibewnpchjnsozqx", "outtvqwqvoloijqyzvdwcynhl", "fqevepswxyhjssydhwgwidlyuwxmrypdpdbjou", "ouivnhoirtzhflhsmmccnynx", "scsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpd", "rbbwzrstrbtkxjlrwpfgnpvshwkallcjwpirhrfcnsk", "pdpdbjouttvqwqvoloijqyzvdw", "zuvwhfiqamytwoqhcjldc"};
    int len = 2396;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bbwzrstrbtkxjlrwpfgnpdpdbjouttvqwqvoloijqyzvdwxmrypdpdbjouttvqwqvoloijqyzvdwcynhlyuwxmrypdpdbjouttvqwqvolooiaenjwkfxfoykcbejrbbwzrstrbtkxkosaitjavxbikhbfxrceeqfshukufuouivnhoirtzhflhscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpdapiscsnotrtmrjhvnipfqevepswxyhjssydhwgwidlyuwxmrypdpd";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dict = {"ufsvabmpbrfxojwyudogrddadwmtjrqwoedaabouvp", "djxaembhcznxbhmcorlfraeknlpycglsnqudcbadojy", "ddadwmtjrqwoedaabouvpmpdnqaeslfnauzhloikbyqwdw", "kgmekncucjdjxaembhcznxbhmcorlfr", "abouvpmpdnqaeslfnauzhloikbyqwdwmqaxptonkwijfimdzj", "lsnqudcbadojybpjylvnwhyrkndkcxlfocfumufsvabmpbrfx", "qdbctunmvhejbbpqoskgmeknc", "jwsffdtoxjzqtwalwhydjmj", "woedaabouvpmpdnqaeslfnauzhloikbyqwdwmqaxptonkwijfi", "dojybpjylvnwhyrkndkcxlfocfumufsva", "wmtjrqwoedaabouvpmpdnqaes", "qwdwmqaxptonkwijfimdzj", "dkcxlfocfumufsvabmpb", "xlfocfumufsvabmpbrfxojwyudogrddadwmt", "rddadwmtjrqwoedaabouvpmpdnqaeslfnauzhloikb", "yhrjwsffdtoxjzqtwalwhydjmjlfwmdktmwyvqdbc", "dnqaeslfnauzhloikbyqwdwmqaxptonkwi", "aeslfnauzhloikbyqwdwmqaxpto", "rlfraeknlpycglsnqudcbadojybpjylvnwhyrknd", "dwmtjrqwoedaabouvpmpdnqaeslf", "gmekncucjdjxaembhcznxbhmcorlfraeknlpycglsnq", "ndkcxlfocfumufsvabmpbrfxojwyudogrddadwmtj", "cbadojybpjylvnwhyrknd", "whydjmjlfwmdktmwyvqdbctunmvhejbbpqos", "rfxojwyudogrddadwmtjrqwoedaabouvpmpdnq", "bpqoskgmekncucjdjxaembhcznxbhmcorlfraeknl", "oikbyqwdwmqaxptonkwijfimdzj", "ojybpjylvnwhyrkndkcxlfocfumufsvabmpbrf", "qdbctunmvhejbbpqoskgmekncucjdjxaembhcznxbhmcorlfra", "dnqaeslfnauzhloikbyqwdwmqaxpton", "cbadojybpjylvnwhyrkndkcxlfocfumufsvabmp", "pycglsnqudcbadojybpjylvnwhyrkndkcxlfocf", "dbctunmvhejbbpqoskgmekncucjdjxaembhc", "qudcbadojybpjylvnwhyrkndkcxlfocfumufsvabmp", "dbctunmvhejbbpqoskgmekncucjdjxaembhcznxbhmc", "adwmtjrqwoedaabouvpmpdnqaeslfnauzhloikb", "ojybpjylvnwhyrkndkcxlf", "udogrddadwmtjrqwoedaabouvpmpdnqaeslfnauzhloikbyqw", "walwhydjmjlfwmdktmwyvqdbctunmvhejbbpqoskgm", "yqwdwmqaxptonkwijfimdzj", "fdtoxjzqtwalwhydjmjlfwmdktmwyvqdbc", "snqudcbadojybpjylvnwhyrkndkcxlfocfumufsvab", "tjrqwoedaabouvpmpdnqaeslfna", "jzqtwalwhydjmjlfwmdktmwyvqdb", "dnqaeslfnauzhloikbyq", "rjwsffdtoxjzqtwalwhydjmjlfwmdktmwy", "hloikbyqwdwmqaxptonkwijf", "nwyhrjwsffdtoxjzqtwalwhydjmjlfwmdktmwyvqdbctun", "fdtoxjzqtwalwhydjmjlfwmdktmwyvqdbctunmvhejbbpqo", "eslfnauzhloikbyqwdwmqaxp"};
    int len = 2376;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abouvpmpdnqaeslfnauzhloikbyqwdwmqaxptonkwijfimdzjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmjwsffdtoxjzqtwalwhydjmj";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dict = {"jautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayx", "bzfzsjjvzuxzlagacqlqmilszo", "ztcmwlflrbzfzsjjvzuxzlag", "xwufrcknptnbmknvuaodnxdyeedvltgiusukuy", "yryvxrqeeyjavvozayxemjkidvhuh", "naquskevymhkbvtqeimdpqrnc", "dyeedvltgiusukuyndfjsdpfab", "hazlogrwzpwmgtonslyryvxrq", "wmgtonslyryvxrqeeyjavvozayxemjkidvhuhvabxxwufrckn", "wmgtonslyryvxrqeeyjavvozayxemjkidvhuhvabxxwufrc", "vabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpf", "yeedvltgiusukuyndfjsdpfa", "dyeedvltgiusukuyndfjsdpfabgyfch", "abxxwufrcknptnbmknvuaodnxdyeedvl", "dpqrncfkjautstphazlogrwzpwmgtonslyryvx", "imdpqrncfkjautstphazlogrwzpwmgtonslyryvxrqeeyjav", "eyjavvozayxemjkidvhuhvabxx", "gtonslyryvxrqeeyjavv", "ohnbnaquskevymhkbvtqeimdpqrncfk", "yfchxvgjonycshvlnduhjmfudlyorutujqpjbiokwwzmzt", "gyfchxvgjonycshvlnduhjmfudlyor", "vabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsd", "kjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxemjk", "ltgiusukuyndfjsdpfabgyfchxvgjonycsh", "wlflrbzfzsjjvzuxzlagacqlq", "tnbmknvuaodnxdyeedvltgiusukuyndfjsdpfabgyfc", "tujqpjbiokwwzmztcmwlflrbzfzsj", "duhjmfudlyorutujqpjbiok", "sukuyndfjsdpfabgyfchxvgjonycshvlnduhjm", "lrbzfzsjjvzuxzlagacqlq", "azlogrwzpwmgtonslyryvxrqeey", "biokwwzmztcmwlflrbzfz", "kevymhkbvtqeimdpqrncfkjauts", "onycshvlnduhjmfudlyorutujqpjbiokwwzmztcmwlf", "nptnbmknvuaodnxdyeedvltgiusukuyndf", "vvozayxemjkidvhuhvabxx", "ogrwzpwmgtonslyryvxrqeeyjavvozayxemjk", "mknvuaodnxdyeedvltgiusukuyndfj", "dyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvlnduh", "zayxemjkidvhuhvabxxwu", "qpjbiokwwzmztcmwlflrbzfz", "onycshvlnduhjmfudlyorutujqpjbiokwwzmztcmwlfl", "fzsjjvzuxzlagacqlqmilszo", "jqpjbiokwwzmztcmwlflrbzfzsj", "vvozayxemjkidvhuhvabxxwufrcknptn", "xdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshv", "wufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfabgy", "nxdyeedvltgiusukuyndfjsdpfabgy", "lflrbzfzsjjvzuxzlagac", "qeimdpqrncfkjautstphazlogrwzpwm"};
    int len = 2096;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abxxwufrcknptnbmknvuaodnxdyeedvlrbzfzsjjvzuxzlagacqlqeimdpqrncfkjautstphazlogrwzpwmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfjautstphazlogrwzpwmgtonslyryvxrqeeyjavvozayxdyeedvltgiusukuyndfjsdpfabgyfchxvgjonycshvabxxwufrcknptnbmknvuaodnxdyeedvltgiusukuyndfjsdpfzsjjvzuxzlagacqlqmilszogrwzpwmgtonslyryvxrqeeyjavvozayxemjkevymhkbvtqeimdpqrncfkjautsukuyndfjsdpfabgyfchxvgjonycshvlnduhjmknvuaodnxdyeedvltgiusukuyndfj";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dict = {"zlkqalezrrjwlriperndaratzoteo", "lezrrjwlriperndaratzoteorqllnxdw", "avownebzlkqalezrrjwlriperndaratzoteorqllnxdw", "yftnkbbxutjzhindzokbrfzcfeadnrtaiecbr", "wehlhtiymolqwyyftnkbb", "perndaratzoteorqllnxdwehlhtiymolq", "jzhindzokbrfzcfeadnrtaiecbrigmloagsokuc", "zcfeadnrtaiecbrigmloagsokuchs", "atzoteorqllnxdwehlhtiymolqwyyftnkbbxutjzhindzokbr", "ratzoteorqllnxdwehlhtiymolqwyyftnkbbxutjzh", "zoteorqllnxdwehlhtiymolqwyyftnkbb", "zcfeadnrtaiecbrigmloagsok", "htiymolqwyyftnkbbxutjzhindzokbrfzcfeadnrtaie", "htiymolqwyyftnkbbxutjzhindzokbrfzcfeadnrtai", "rrjwlriperndaratzoteorqllnxdwehlhtiymolqwyyftnkb", "brfzcfeadnrtaiecbrigmloagsokuchs", "ftnkbbxutjzhindzokbrfzcf", "ndaratzoteorqllnxdwehlhtiymolqwyyftnk", "nrtaiecbrigmloagsokuchs", "rfzcfeadnrtaiecbrigmloagsokuc", "rtaiecbrigmloagsokuchs", "vownebzlkqalezrrjwlriperndaratzoteorqllnxdwehl", "wehlhtiymolqwyyftnkbbxutjz", "ymolqwyyftnkbbxutjzhindzokbrfzcfeadnrtaiecb", "zokbrfzcfeadnrtaiecbrigmloags", "qwyyftnkbbxutjzhindzokbrfzcfeadnrtaiecbrigmloagso", "zhindzokbrfzcfeadnrta", "tjzhindzokbrfzcfeadnrtaiecbrigmloagsokuc", "lkqalezrrjwlriperndaratzoteorqll", "utjzhindzokbrfzcfeadnrtaiec", "qwyyftnkbbxutjzhindzokbrfzcfeadnrtaiec", "hindzokbrfzcfeadnrtaiecbrigmloagsokuchs", "yyftnkbbxutjzhindzokb", "lhtiymolqwyyftnkbbxutjzh", "lkqalezrrjwlriperndaratzoteorqlln", "kbbxutjzhindzokbrfzcfeadnrtaiecbrigmloagsoku", "kqalezrrjwlriperndaratzoteorqllnxdwehlhti", "olqwyyftnkbbxutjzhindzokbrfzcfeadnrtaiecbrigmloag", "zlkqalezrrjwlripernd", "qwyyftnkbbxutjzhindzokbrfzcfeadnrtaiecb", "aavownebzlkqalezrrjwlriperndaratzoteorqll", "indzokbrfzcfeadnrtaiecbri", "dwehlhtiymolqwyyftnkbbxutjzhindzokbrfzcfeadnrta", "lnxdwehlhtiymolqwyyftnkbbxutjzhindzokbr", "tiymolqwyyftnkbbxutjzhindzokbrfzcf", "ratzoteorqllnxdwehlhtiymolqwyyftnk", "wehlhtiymolqwyyftnkbbxutjzhindzokbrfzcfeadnrtai", "dzokbrfzcfeadnrtaiecbrigmloa", "utjzhindzokbrfzcfeadnrt", "rndaratzoteorqllnxdweh"};
    int len = 2017;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aavownebzlkqalezrrjwlriperndaratzoteorqllezrrjwlriperndaratzoteorqllnxdwehlhtiymolqwyyftnkbbxutjzcfeadnrtaiecbrigmloagsokbbxutjzhindzokbrfzcfeadnrtaiecbrigmloagsokutjzhindzokbrfzcfeadnrtiymolqwyyftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcftnkbbxutjzhindzokbrfzcf";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dict = {"owkxqluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeehadl", "youfrfgzekaowkxqluhxmccifawynfrqbt", "ovzqkrnorocpcfvfehpwisvl", "qbtrqvhcbycfrzfxtbzzsamzeehadlatowaoscwcnmkeptky", "atowaoscwcnmkeptkyiioljwkrhksvaqathe", "dovzqkrnorocpcfvfehpwisvl", "vaqathehgndovzqkrnorocp", "owkxqluhxmccifawynfrqbtrqvhcbycfrzfxtbz", "ljwkrhksvaqathehgndovzqkrnorocpcfv", "aowkxqluhxmccifawynfrqbt", "ehadlatowaoscwcnmkeptkyiioljwkrhksvaqathe", "kaowkxqluhxmccifawynfrqbtrqvhcby", "qbtrqvhcbycfrzfxtbzzsamzeehadlatowaoscw", "yiioljwkrhksvaqathehgndovzq", "wkxqluhxmccifawynfrqbtrqvhcbyc", "latowaoscwcnmkeptkyiioljwkrh", "vaqathehgndovzqkrnorocpcfvfehpwisvl", "mkeptkyiioljwkrhksvaqathehgn", "qluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeehadl", "xqluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeehad", "hehgndovzqkrnorocpcfvfehpwisvl", "towaoscwcnmkeptkyiioljwkrhksvaqathehgndovzq", "kxqluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeeh", "qathehgndovzqkrnorocpcfvfehpwisvl", "ccifawynfrqbtrqvhcbycfrzfxt", "aowkxqluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeeh", "tbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhks", "jwkrhksvaqathehgndovzqkrnorocpcfvfehpwisvl", "hxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeeha", "dagyoufrfgzekaowkxqluhxmccif", "cbycfrzfxtbzzsamzeehadlatowaoscwcnmkeptkyiioljw", "btrqvhcbycfrzfxtbzzsamzeehadlatowaoscwcnmkeptkyii", "hxmccifawynfrqbtrqvhcbycfrzfxtbzzs", "qluhxmccifawynfrqbtrqvhcbycfrzfxtb", "ptkyiioljwkrhksvaqathehgndovzqkrnorocpcfvf", "tkyiioljwkrhksvaqathehgndovzqkrnoro", "ynfrqbtrqvhcbycfrzfxtbzzsamzeeh", "kxqluhxmccifawynfrqbtrqvhcbycfrzfxtbzzsamzeehadlat", "awynfrqbtrqvhcbycfrzfxtbzzsamzeehadlatowao", "ccifawynfrqbtrqvhcbyc", "zqkrnorocpcfvfehpwisvl", "rqvhcbycfrzfxtbzzsamzeehadla", "ekaowkxqluhxmccifawynfrqbtrqv", "btrqvhcbycfrzfxtbzzsamzeehadlatow", "kyiioljwkrhksvaqathehgndovzqkrnorocpcfvfehpwisvl", "bzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhksvaqat", "scwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnor", "mzeehadlatowaoscwcnmkeptkyiioljwkrhks", "bhlhbdagyoufrfgzekaowkxqluhx", "aqathehgndovzqkrnorocpcfvfehpw"};
    int len = 2246;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnorqvhcbycfrzfxtbzzsamzeehadlaowkxqluhxmccifawynfrqbtbzzsamzeehadlatowaoscwcnmkeptkyiioljwkrhkscwcnmkeptkyiioljwkrhksvaqathehgndovzqkrnor";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dict = {"cogxwpaqjnhpmdqqspefqxjujnvcggtzrsrxnbtlf", "paslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfka", "kqouhbactqmjizrtxagqpkscfysclgekvctibkzuyhcfvptrwa", "ibkzuyhcfvptrwapmfeqkkddk", "rrqpaslufnvercymllygyjsgvonssgkpdva", "klxelggakwckaxzjpaipvzrxau", "feqkkddkafhznuupednvpofjhbzxyvuzwolsblahicsfgcpp", "nvpofjhbzxyvuzwolsblahicsfgcppcigocojifgcog", "actqmjizrtxagqpkscfysclgekvctibkzuyhcfvpt", "dvaeohurxpajhbfkambibaimzknpfpnqzgtkqou", "aimzknpfpnqzgtkqouhbactqmjizrtxagqp", "aeohurxpajhbfkambibaimzknpfpnqzgtkqouhbactqmjizrt", "zwsscrkpwltyxkiclbbfeglbwoqeifbcztfqieztcdpampt", "wapmfeqkkddkafhznuupednv", "kqouhbactqmjizrtxagqpkscfysclgekv", "vuzwolsblahicsfgcppcigocojifgcogxwpaq", "hbactqmjizrtxagqpkscfy", "hznuupednvpofjhbzxyvuzwolsblahicsfgc", "lgekvctibkzuyhcfvptrwapmfeqkkddkafhzn", "pdvaeohurxpajhbfkambibaimzkn", "csfgcppcigocojifgcogxwpaqjnhpmdqqspefqxju", "gakwckaxzjpaipvzrxaunnxaeglz", "jifgcogxwpaqjnhpmdqqspefqxjujnvcggtzrsrx", "cgttwtzwsscrkpwltyxkiclbbfeglbwoqeifbcztfqieztcdp", "rxaunnxaeglzpfcnggddkqmtsbkprzxmlgydx", "ssgkpdvaeohurxpajhbfkambibaimzknpfpnqzgtkqo", "slufnvercymllygyjsgvonssgkpd", "gddkqmtsbkprzxmlgydxoqfrph", "rxnbtlfkdyklxelggakw", "ptrwapmfeqkkddkafhznu", "vzrxaunnxaeglzpfcnggddkqm", "lsblahicsfgcppcigocojifgcogxwpaqjnh", "nvcggtzrsrxnbtlfkdyklxelggakwckaxzjpaipvzrxaunnx", "rcymllygyjsgvonssgkpdva", "zrtxagqpkscfysclgekvc", "ddkafhznuupednvpofjhbzxyvuzwolsblahicsfgcppci", "ajhbfkambibaimzknpfpnqzgtkqouhbactqmjiz", "sblahicsfgcppcigocojifgco", "gkpdvaeohurxpajhbfkambibaimzknpfpn", "ofjhbzxyvuzwolsblahicsfgcppc", "ctqmjizrtxagqpkscfysclgek", "efqxjujnvcggtzrsrxnbtlfkdyklxel", "ocojifgcogxwpaqjnhpmdqqspefqxjujnvcggtzrsrx", "slufnvercymllygyjsgvonssgkpd", "fcnggddkqmtsbkprzxmlgydxoqfrph", "vcggtzrsrxnbtlfkdyklxelggakw", "jhbzxyvuzwolsblahicsfgcppcigocojifgcogxwpaqjnh", "gtzrsrxnbtlfkdyklxelggakwckaxzjp", "ddkafhznuupednvpofjhbzxyvuzwolsblahicsfgcppcigo", "iqlcdzmkcgttwtzwsscrkpwltyx"};
    int len = 2104;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfkaimzknpfpnqzgtkqouhbactqmjizrtxagqpaslufnvercymllygyjsgvonssgkpdvaeohurxpajhbfka";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dict = {"zkmxlzvdhgjmoaurumdxmdlm", "hcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkj", "rhksgkzvovyrqaphcgrtksiegqtt", "rtksiegqttlqjkfjvuxfiefypddrlbzosgqhc", "cdjdamiuhxlghgwalymqkflkgxbzvrddd", "gxbzvrdddwzedrvjjpzzcbnrroltqckehg", "amiuhxlghgwalymqkflkgxbzvrdddwzedrvj", "hxlghgwalymqkflkgxbzvrdddwzedrvjjpzzcbnrroltqckehg", "ttlqjkfjvuxfiefypddrlbzosgqhcvtjbgthcdjda", "azfkjtazzclvdqzkmxlzvdhgjmoa", "lfuzqdjvvsdylvgnptbhutieewgtlox", "jbgthcdjdamiuhxlghgwalymqkflkgxbzvrd", "bgthcdjdamiuhxlghgwalymqkflkgxbzvr", "ovyrqaphcgrtksiegqttlqj", "ddrlbzosgqhcvtjbgthc", "fiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwaly", "rywhhsecvaaynznovnugclidtgzazfkjtazzclvdqzkmxlz", "vrdddwzedrvjjpzzcbnrroltqckehgvfqvcurhyxswdmtjna", "zcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfuzqdjvvsd", "fjvuxfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalym", "oltqckehgvfqvcurhyxswdmtjnanggdlf", "cbnrroltqckehgvfqvcurhyxswdmtjnanggdlf", "zzcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfuzqdj", "eewgtloxshsuhcbronlyosvbrbcj", "ghgwalymqkflkgxbzvrdddw", "drlbzosgqhcvtjbgthcdjdamiuhxlghgwal", "fjvuxfiefypddrlbzosgqhcvtjbgthcdjdamiu", "nggdlfuzqdjvvsdylvgnptbhutieewgtloxshsuhcb", "rbcjgmrywhhsecvaaynznovnugclidtgzazfkjtazzc", "loxshsuhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclid", "dylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhse", "sgqhcvtjbgthcdjdamiuhxlghgwalymqkf", "clvdqzkmxlzvdhgjmoaurumdxmdlm", "rywhhsecvaaynznovnug", "bronlyosvbrbcjgmrywhhs", "dylvgnptbhutieewgtloxshsuhcbronlyosvb", "xfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwal", "alymqkflkgxbzvrdddwzedrvjjpzzcb", "qjkfjvuxfiefypddrlbzosgqhcvt", "kmxlzvdhgjmoaurumdxm", "bhutieewgtloxshsuhcbronlyosvbrbc", "gclidtgzazfkjtazzclvdqzkmxlzvdhgjmoaurumdxmdlm", "ksgkzvovyrqaphcgrtksiegq", "dqzkmxlzvdhgjmoaurumdxmdlm", "ylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhh", "gqttlqjkfjvuxfiefypddrlbzosgqhcvtjbg", "urhyxswdmtjnanggdlfuzqdjvvsdylvgnptbhutieewgt", "fypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalymqkflkgxbz", "yxswdmtjnanggdlfuzqdjvvsdylvgnp", "oxshsuhcbronlyosvbrbcjgm"};
    int len = 2234;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "alymqkflkgxbzvrdddwzedrvjjpzzcbgthcdjdamiuhxlghgwalymqkflkgxbzvrbcjgmrywhhsecvaaynznovnugclidtgzazfkjtazzcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwalylvgnptbhutieewgtloxshsuhcbronlyosvbrbcjgmrywhhcbronlyosvbrbcjgmrywhhsecvaaynznovnugclidtgzazfkjbgthcdjdamiuhxlghgwalymqkflkgxbzvrddrlbzosgqhcvtjbgthcbnrroltqckehgvfqvcurhyxswdmtjnanggdlfiefypddrlbzosgqhcvtjbgthcdjdamiuhxlghgwaly";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dict = {"dgsgmryhlphbzpyyploudlzmxpxgmdp", "hoblgscwdxobzkaucfuriflajagatjjlecv", "pcyoaziccofitijwfzgxlbombhzqu", "jkfukdepjvcbfusazzuhjjslc", "wrdsqhjkfukdepjvcbfusazzuhjjslcsgchxlhysxqvn", "ysxqvnzdgsgmryhlphbzpyyploudlzmxpxgmd", "zquczlyifoovgchoblgscwdxobzka", "sazzuhjjslcsgchxlhysxqv", "yoaziccofitijwfzgxlbombhzquczlyifoov", "oaziccofitijwfzgxlbombhzquczly", "zkaucfuriflajagatjjlecvv", "dskxauibfuzgtvwrdsqhjkfukdepjvcbfusazzuhjjslcs", "fcfjtpcyoaziccofitijwfzgxlbombhzq", "zgtvwrdsqhjkfukdepjvcbfusazzuhjjslcsg", "iccofitijwfzgxlbombhzquc", "ibfuzgtvwrdsqhjkfukd", "lhysxqvnzdgsgmryhlphbzpyypl", "ofitijwfzgxlbombhzquczly", "fukdepjvcbfusazzuhjjslcsgch", "lcsgchxlhysxqvnzdgsgmryhlp", "vwrdsqhjkfukdepjvcbfusazzuhjjslcsgchxlhysxqvnzdg", "scwdxobzkaucfuriflajagatjjlecvv", "skxauibfuzgtvwrdsqhjkfukdepjvc", "uczlyifoovgchoblgscwdxob", "yoaziccofitijwfzgxlbombhzquczlyifoov", "fjtpcyoaziccofitijwfzgxlbo", "hjkfukdepjvcbfusazzu", "oblgscwdxobzkaucfuriflajagatjjlecv", "yyploudlzmxpxgmdpogyzjtyrfcfjtpcy", "cfjtpcyoaziccofitijwfzgxlbom", "sgmryhlphbzpyyploudlzmxpxgmdpogyzj", "hbzpyyploudlzmxpxgmdpogyzjtyrfcfjtpcyoaziccofitij", "jvcbfusazzuhjjslcsgchxlhysxqvnzdgsgmryhlphbz", "cyoaziccofitijwfzgxlbombhzquczly", "dxobzkaucfuriflajagatjjlecvv", "jkfukdepjvcbfusazzuhjjslcsgchxlhysxqvnzdgsg", "zgxlbombhzquczlyifoovgchoblgscwdxobzk", "ibfuzgtvwrdsqhjkfukdepjvc", "epjvcbfusazzuhjjslcsgchxlhysxqvnzdgsgmryhl", "kaucfuriflajagatjjlecvv", "rfcfjtpcyoaziccofitijwfzgxlbombhzqu", "sxqvnzdgsgmryhlphbzp", "ombhzquczlyifoovgchoblgscwdxobzkaucfurifl", "hjkfukdepjvcbfusazzuhjjs", "lphbzpyyploudlzmxpxgmdpogyzjtyrfcfjtp", "hysxqvnzdgsgmryhlphbzpyyploudlzmxpxgmdpogyz", "ucfuriflajagatjjlecvv", "fukdepjvcbfusazzuhjjslc", "sgmryhlphbzpyyploudlzmxpxgmdpogyzjtyrfc", "mdpogyzjtyrfcfjtpcyoaziccof"};
    int len = 34;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cfjtpcyoaziccofitijwfzgxlbomdpogyzjtyrfcfjtpcyoaziccof";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dict = {"qooolxmxgneibvssdngqouoy", "rvmespxjvubcwbxseqhcharptpknqcnz", "epkwkxocflequgkchupimsedaxwajhfrgxogmrqlmh", "xwpuqkgimgmqspqahiuvdgopzm", "jnzknsdiinunnepkwkxocfleq", "jaopekxkdhhvkqavqyolkogjkgonmzmxoleutkpdt", "fglxzbcdhhjnzknsdiinunnepkwkxocflequgkchupimsed", "mxoleutkpdtxlewdqxycwuvxwybnlfygfglxzbcd", "jrbgrtnhkhoupshujxftukbgalbqjmjsmsthhhvtzasjv", "qspqahiuvdgopzmonqcqcgqullvpzsruwnxjqooolxm", "qahiuvdgopzmonqcqcgqullvpzsruwnxjqooolx", "mxoleutkpdtxlewdqxycwuv", "msthhhvtzasjvpjpfdbivjpzga", "znsifrvmespxjvubcwbxseqhcharpt", "xwpuqkgimgmqspqahiuvdgopzmonqc", "sthhhvtzasjvpjpfdbivjpzg", "bnlfygfglxzbcdhhjnzknsdiinunnepkwkxocflequgkchupi", "qxycwuvxwybnlfygfglxzbcdhhjnzknsdiinunnepkwkxoc", "tnhkhoupshujxftukbgalbqjmjsmsthhhvtzasjvpjpfdbivj", "kgimgmqspqahiuvdgopzmonqcqcgqull", "pknqcnzikrdjrbgrtnhkhoupshujxft", "vxwybnlfygfglxzbcdhhjnzknsdiinunnepkwkxocflequg", "ntnpfbdghkybvutoeikowwg", "qkgimgmqspqahiuvdgopzmon", "monqcqcgqullvpzsruwnxjqo", "ntnpfbdghkybvutoeikowwgdzppmgnjtznsifrvmes", "inunnepkwkxocflequgk", "sifrvmespxjvubcwbxseqhcharptpknqcn", "bivjpzgappkxbkvxwpuqkgimgmqspqahiuvdgopzmonqcqcg", "cwuvxwybnlfygfglxzbcdhhjnzknsdiinunn", "mgmqspqahiuvdgopzmonqcqcgq", "xkdhhvkqavqyolkogjkgonmzmx", "houpshujxftukbgalbqjmjsmsthhhvtzasjvpjpfdbivj", "ntnpfbdghkybvutoeikowwgdzppmgnjtzn", "vxwpuqkgimgmqspqahiuvdgopz", "dqxycwuvxwybnlfygfglxzbcdhhjnzknsdii", "xycwuvxwybnlfygfglxzbcdhhjnzkn", "uwnxjqooolxmxgneibvssdngqo", "dghkybvutoeikowwgdzppmgnjtznsifrvmespx", "jvpjpfdbivjpzgappkxb", "pkxbkvxwpuqkgimgmqspqahiuvdgopzmonqcqcgqullv", "tzasjvpjpfdbivjpzgappkxbkvxwpuqkgimgmqs", "kdhhvkqavqyolkogjkgonmzmxoleutkpdtxl", "nsifrvmespxjvubcwbxseqhcharptp", "sthhhvtzasjvpjpfdbivjp", "ahiuvdgopzmonqcqcgqullvpzsruw", "ppkxbkvxwpuqkgimgmqspqahiuvdgopzmonqcqcgqullvpzs", "ycwuvxwybnlfygfglxzbcdhhjnzknsd", "rzjyoyvdnintnpfbdghkybvutoeikowwgdzppmgnjtznsi", "qxycwuvxwybnlfygfglxzbcdhhj"};
    int len = 23;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahiuvdgopzmonqcqcgqullvpzsruw";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dict = {"jiplbfqgbewznjpeakdrzcxjhpvuzethftvuyhgkx", "dudjdwwnnnboowoscgvpityafpdcftacwyqg", "deuhtbprvelmuksdiudnkbzkawtbqhkcccwqaha", "bfdahmghpvopmvdrzmpinbqjzjnnyzimowylz", "cftacwyqgvnfvhesekyaenwwyggktkavgx", "skpzvrozknuvzkipazyartdjvhgacqhwblbcivqvumisnrgtlg", "ultmeyhynbyjgfhejdcvdyzfbideuhtbprvelmuksdiudn", "iiyyvpwjiplbfqgbewznjpeakdrzcxjhpvuzethf", "nyzimowylzitcrikdifbilpmq", "mrhyrbatdudjdwwnnnboowoscgvpityafpdcftacwyqgvnfvhe", "byjgfhejdcvdyzfbideuht", "rzmpinbqjzjnnyzimowylzitcrikdifbilpmqcbf", "mmqbcjewwdwlofmrhyrb", "hgkxvjaecyxfddcoeshadltqxbaqfstp", "gacqhwblbcivqvumisnrgtlgsmoxpykatzlzdcbtjx", "cbtjxhjxsboncgkiumfsxitmokhyrixgsmbqwxlbkhiiyy", "batdudjdwwnnnboowoscgvp", "kxvjaecyxfddcoeshadltqxbaqf", "xgsmbqwxlbkhiiyyvpwjiplbfqgbewznjpeakdrzcxjhpvu", "rhyrbatdudjdwwnnnboowoscgvpityafpdcftacwy", "wwdwlofmrhyrbatdudjdwwnnnboo", "gzhboezvuzgjcfsnabsreksymygxmmqbcjewwdwlofmrhyrb", "dltqxbaqfstpcxsxgzhboezvuzgjcfsnabsreksymy", "symygxmmqbcjewwdwlofmrhyrbatdudjdwwnnnboowo", "avgxiwpccphoeqcmylpas", "jiplbfqgbewznjpeakdrzcxjhpvuz", "kdrzcxjhpvuzethftvuyhgkxvjaecyxfddcoeshadltq", "qgvnfvhesekyaenwwyggktkavgxiwpccphoeqcmylpas", "gtlgsmoxpykatzlzdcbtjxh", "pvuzethftvuyhgkxvjaecyxfddcoeshadltqxbaqfs", "okhyrixgsmbqwxlbkhiiyyvpwjiplbfqgbewznjp", "kavgxiwpccphoeqcmylpas", "oyeyhdycbclpdxnjzmorpwtzlwjskpzvrozknuvzkipazya", "cgvpityafpdcftacwyqgvn", "iiyyvpwjiplbfqgbewznjpeakdrzcxjhpvuzet", "meyhynbyjgfhejdcvdyzfbideuhtbprv", "nkbzkawtbqhkcccwqahapmoyeyhd", "lmuksdiudnkbzkawtbqhkcccwqahapmoyeyh", "knuvzkipazyartdjvhgacqhwblb", "jnnyzimowylzitcrikdifbilpmqcbfxtwroqnmqfls", "peakdrzcxjhpvuzethftvuy", "yjgfhejdcvdyzfbideuhtbprvelmuksdiudnkbzkawtb", "oxpykatzlzdcbtjxhjxsboncgkiumfsxitm", "skpzvrozknuvzkipazyartdjvhgacqhwblbci", "ftvuyhgkxvjaecyxfddcoeshadltqxbaqfstpcxs", "oxpykatzlzdcbtjxhjxsboncgkiumfsxitmokhyrixgs", "boncgkiumfsxitmokhyrixgsmbqwxlbk", "katzlzdcbtjxhjxsboncgkiumfsxitmokhyrixgsmb", "bcjewwdwlofmrhyrbatdu", "blbcivqvumisnrgtlgsmoxp"};
    int len = 50;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "avgxiwpccphoeqcmylpaskpzvrozknuvzkipazyartdjvhgacqhwblbci";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dict = {"ckekndfwbaqugrcwqxghboizjd", "bclkhowhrnflmpajptspgolpdvklvmkchfmcl", "qugrcwqxghboizjdniicpydizxawbgegadzadnqyj", "pmdkrzocukexagltkqscchtnkzjumirxzeu", "flmpajptspgolpdvklvmkchfmcl", "iicpydizxawbgegadzadnqyjqlkwmalwrwp", "xaopmdkrzocukexagltkqscch", "adnqyjqlkwmalwrwpzlwj", "qscchtnkzjumirxzeudegbclkhowhrnflmpajptspgolpdvk", "ajptspgolpdvklvmkchfmcl", "adnqyjqlkwmalwrwpzlwjiimzwyijaqhhm", "zadnqyjqlkwmalwrwpzlwjiim", "oizjdniicpydizxawbgegadzadnqyjqlkwmalw", "xghboizjdniicpydizxawbgegadzad", "qwljxaopmdkrzocukexagltkqsc", "ariiezckekndfwbaqugrcwqxghboizjdniicpydiz", "egadzadnqyjqlkwmalwrwpzlwjiimzwyijaqhhmxqwljxao", "mirxzeudegbclkhowhrnflmpajptspg", "egbclkhowhrnflmpajptspgolpd", "clkhowhrnflmpajptspgolpdvklvm", "fcwkmtugsariiezckekndfwbaqugrc", "nqyjqlkwmalwrwpzlwjiimzwyij", "zeudegbclkhowhrnflmpajptspgolpdvklvmkchf", "agltkqscchtnkzjumirxze", "malwrwpzlwjiimzwyijaqhhmxq", "hmxqwljxaopmdkrzocukexagltkqscchtnkzju", "jqlkwmalwrwpzlwjiimzwyijaqhhmxqwljxaopmdkrzocuk", "udegbclkhowhrnflmpaj", "ydizxawbgegadzadnqyjqlkwmalwrwpzlwjiimzwyija", "nflmpajptspgolpdvklvmkchfmcl", "ezckekndfwbaqugrcwqxgh", "pydizxawbgegadzadnqyjqlkwma", "dzadnqyjqlkwmalwrwpzlwjiimzwyijaqhhmxqw", "dzadnqyjqlkwmalwrwpzlwjiimzwyija", "qyjqlkwmalwrwpzlwjiimzwy", "lwjiimzwyijaqhhmxqwljxaopmdkrzocu", "yijaqhhmxqwljxaopmdkrzocukexagltkq", "owhrnflmpajptspgolpdvklvmkchf", "gbclkhowhrnflmpajptspgolpdvklvmk", "opmdkrzocukexagltkqscchtnkzjumirxzeud", "rwpzlwjiimzwyijaqhhmxqwljxa", "pajptspgolpdvklvmkchfmcl", "eudegbclkhowhrnflmpajptspgolpdvklvmkchfmcl", "ugrcwqxghboizjdniicpydizxawbgegadzadnqyjql", "icpydizxawbgegadzadnqyjqlkwmalwrwpzlwjiimzwyijaqhh", "owhrnflmpajptspgolpdvklvmkchfmcl", "umirxzeudegbclkhowhrnflmpajpt", "cukexagltkqscchtnkzju", "gbclkhowhrnflmpajptspgolpdvklvmkchfmcl", "jiimzwyijaqhhmxqwljxaopmdkrzocukexagl"};
    int len = 50;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "adnqyjqlkwmalwrwpzlwjiimzwyijaqhhmalwrwpzlwjiimzwyijaqhhmxq";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dict = {"ecvwitmisnaqcahgsjqsot", "xibxlisfsgggkufjaiqxzwteoxpugnxofxbq", "ajugfrnkhxpieksbcqznqmuygonwpcd", "cmsllxxuseglcfjzrtepbnwaupqtxfvvpbajugfrnkhxpie", "cdvpifgrkkyxxodwmlausghaakaobecvwitmisnaqcahgs", "vwitmisnaqcahgsjqsottkcxntldwnhguckktgfljujwu", "dldnvdlsfwezymxpixavngpirthlxgctkaxynayilxdolwgo", "cahgsjqsottkcxntldwnhguckktgfljujwulzvvbxqql", "ptwqpptxmleenwnrlztdigbvcln", "jzrtepbnwaupqtxfvvpbajugfrnkh", "ilxdolwgopopwgguwmwlsbjrsfl", "fsgggkufjaiqxzwteoxpugnxof", "ausghaakaobecvwitmisnaqcahgsjqsottkcxntldwnhguckk", "ttkcxntldwnhguckktgfljujwul", "ptxmleenwnrlztdigbvcl", "ixavngpirthlxgctkaxynayilxdol", "xzwteoxpugnxofxbqogfgfgvhezz", "twqpptxmleenwnrlztdigbvclnfomqvteqzeqobcgctpzcn", "thlxgctkaxynayilxdolwgopopwgguwmwl", "cznbstfmmhmnvkvejxieimjmffmymxcioc", "stfmmhmnvkvejxieimjmffmymxciocjicmsllxxuseglcf", "nwaupqtxfvvpbajugfrnkhxpieksbcqznqmuygon", "guqexclsfahhdrdyljmgcznbstfmmhmnvk", "cmsllxxuseglcfjzrtepbnwaupqtxfvvpbaju", "omqvteqzeqobcgctpzcndfzgziqvebrrtfiethguqe", "nbstfmmhmnvkvejxieimjmffmymxciocj", "tmisnaqcahgsjqsottkcxntldwnhguckktgflju", "onwpcdvpifgrkkyxxodwmlaus", "znbstfmmhmnvkvejxieimjmffmymxciocjicm", "imjmffmymxciocjicmsllxxuseglcfjzrtep", "xdolwgopopwgguwmwlsbjrsflfgkuzasirhemptwqpp", "ksbcqznqmuygonwpcdvpifgrkkyxxodwmlausghaakaobecvw", "natrjqlkslvwrnbackfexhxjdl", "rdyljmgcznbstfmmhmnvkvejxieim", "digbvclnfomqvteqzeqobcgctpzcndfzgziqvebrrtfiethg", "ngpirthlxgctkaxynayilxdolwgop", "natrjqlkslvwrnbackfexhxjdldnvdl", "kktgfljujwulzvvbxqqlexzvdrpnuqetfbnt", "vpbajugfrnkhxpieksbcqznqmuygonwpcdvpifgrkkyxxodw", "etfbntagxibxlisfsgggkufjaiqxzwteoxpugnxofxbqo", "gbvclnfomqvteqzeqobcgctpzcndfzgziqvebrrtfiethg", "lcfjzrtepbnwaupqtxfvvpbajugfrnkhxpieksbcqznqmuygo", "kufjaiqxzwteoxpugnxofxbqogfgfgvhez", "gfljujwulzvvbxqqlexzvdrpnuqetfbntagxibxl", "ldwnhguckktgfljujwulz", "jnatrjqlkslvwrnbackfexhxjdldnvdlsfwe", "cfjzrtepbnwaupqtxfvvpbajugfrnkhxpieksbcqznqmuygo", "pwgguwmwlsbjrsflfgkuzasirhemptwqpptxm", "jnatrjqlkslvwrnbackfexhxj", "lsfwezymxpixavngpirthlxgctkaxynayilxdolwg"};
    int len = 22;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ajugfrnkhxpieksbcqznqmuygonwpcd";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dict = {"sxrkehxhzamoppdsfscdqdfarmihymnwrywdysadlhr", "hklybmfstkimvqqmylpjpztzeqrqpsbkskftzdfdunjy", "mflslhzwbvtoefidcspdijojf", "nvkuajpanfktekmflslhzwbvtoe", "fidcspdijojfolxuhkdqvudsjktfdeoaun", "wnweatogqlsyrssenqtrpiqglbspbx", "fvtrlvaryrwodaadpoycdnhmutngwnwea", "zsnvkuajpanfktekmflslhzwbvtoefi", "aryrwodaadpoycdnhmutngwnweatogqlsyrssenqtrpi", "deoaunkmeesfccaaeesfabwpkwzfxfnmbpbrtoqysxr", "swwiihklybmfstkimvqqmyl", "esfccaaeesfabwpkwzfxfnmbpbrtoqysxrkehxhzam", "fnmbpbrtoqysxrkehxhzamoppdsfscdqdfarmihy", "ajpanfktekmflslhzwbvtoefidcspdijoj", "skftzdfdunjyfvtrlvaryrwodaadpo", "vkuajpanfktekmflslhzwbvtoefidcspdijojfolxuhkd", "eatogqlsyrssenqtrpiqglbspbxkadhkrx", "glbspbxkadhkrxzkyzjdauyw", "dnhmutngwnweatogqlsyrssenqtrpiqg", "sjktfdeoaunkmeesfccaaees", "abwpkwzfxfnmbpbrtoqysx", "kdqvudsjktfdeoaunkmeesfccaaeesfabwpkwzfxfnmbpbr", "ymnwrywdysadlhrmvkankwzimnmkdnjdwuwsfantp", "tmrezajzsnvkuajpanfktekmflsl", "zsnvkuajpanfktekmflslhzwbvtoefidcspdijojfo", "efidcspdijojfolxuhkdqvudsjktfdeoaunkmeesfccaa", "imnmkdnjdwuwsfantplpiwliolhmsw", "zdfdunjyfvtrlvaryrwodaadpoycdnhmut", "daadpoycdnhmutngwnweatogqlsyrssenqtrpiqglbspbx", "poycdnhmutngwnweatogqlsyrssenqtrpiqglbspbxkadhkrx", "dijojfolxuhkdqvudsjktfdeoaunkm", "rwodaadpoycdnhmutngwnwe", "snvkuajpanfktekmflslh", "ysadlhrmvkankwzimnmkdnjdwuwsfantplpiwli", "mswwiihklybmfstkimvqqmylpjpztzeqrqpsbkskftzd", "mbpbrtoqysxrkehxhzamoppdsfscdqdfarmihymnwrywdysadl", "pdijojfolxuhkdqvudsjktfdeoaun", "rywdysadlhrmvkankwzimnmkdnjdwuwsfantplpiwliolhmsw", "imvqqmylpjpztzeqrqpsb", "wzfxfnmbpbrtoqysxrkehxhzamop", "udsjktfdeoaunkmeesfccaaeesfabwpkwzfxfn", "scdqdfarmihymnwrywdysadlhrmvkan", "aeesfabwpkwzfxfnmbpbrtoq", "vtoefidcspdijojfolxuhkdq", "uhkdqvudsjktfdeoaunkmeesfc", "pdijojfolxuhkdqvudsjktfdeoaunkmeesfcc", "iqglbspbxkadhkrxzkyzjdauy", "ajzsnvkuajpanfktekmflslhzwbvtoefidcspdijojfolx", "sfscdqdfarmihymnwrywdysadlhrmvkankwzimnmkdnjd", "mutngwnweatogqlsyrssenqtrpiqglbspbxkadhkrxzkyzj"};
    int len = 35;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ajzsnvkuajpanfktekmflslhzwbvtoefidcspdijojfolx";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> dict = {"oqjzwkdzjmmhydxgwlnwmfitltkagixmzehwv", "keswjhhrestxgrdvfquvutarcf", "qgmwfqaplhdaqerekeec", "anedncstovkpoprqzhsaulsfcgjdiddnma", "ytcckeswjhhrestxgrdvfquvutarcfllxoo", "kpoprqzhsaulsfcgjdiddnm", "nhfmzeampetzlcbestqhifxzslxswekdofoqjzwkdzj", "latttxesyganedncstovkpoprq", "lxoosgsdtnwmxmprzoknujglnlyavzckm", "ckeswjhhrestxgrdvfquvutarcfllxo", "eqbigdnkkyjagatyibti", "dtiywugogaqaruysvjmclmvluwixgcucfnbqgmwfqa", "gogaqaruysvjmclmvluwi", "utarcfllxoosgsdtnwmxmprzoknujglnlyavzc", "oknujglnlyavzckmcemnhbh", "ippcdtiywugogaqaruysvjmclmvluwixgcucfnbqgmwfqaplhd", "ixgcucfnbqgmwfqaplhdaqerekeecvxyycmbqgwlc", "mtfhkflcbveytcckeswjhhrestxgrdvfquvutarcfllxoosg", "kmcemnhbhpolbjupmjynzpwtijymfisvxblqeqbig", "gsdtnwmxmprzoknujglnly", "qerekeecvxyycmbqgwlcyurfwktplatttx", "hkflcbveytcckeswjhhrestxgrdvfquvutarcfllxo", "pmjynzpwtijymfisvxblqeqb", "mtfhkflcbveytcckeswjhhrestxgrdvfquvutarcf", "erekeecvxyycmbqgwlcyurfwktplatttxesyg", "zhsaulsfcgjdiddnmalrbayidiaougtbqsjy", "nhbhpolbjupmjynzpwti", "przoknujglnlyavzckmcemnhbhpolbjupmjynzpwtijymfisvx", "vkpoprqzhsaulsfcgjdiddnmalrbayidiaougtbqs", "mhydxgwlnwmfitltkagixm", "ynzpwtijymfisvxblqeqbigdnkkyjagatyibtippcdtiywu", "kagixmzehwvtspijggkbmtfhkflcbv", "nzpwtijymfisvxblqeqbigdnkkyjagatyibtippcdtiywugog", "zlcbestqhifxzslxswekdofoqjzwkdzjmmhyd", "gcucfnbqgmwfqaplhdaqerekeecvxyycmbqgwlcyurfw", "latttxesyganedncstovkpoprqzhsaul", "tttxesyganedncstovkpoprqzhsaulsfcgjdiddnmalrbayid", "bmtfhkflcbveytcckeswjhhrestxgrdvfquvutarcfl", "kdzjmmhydxgwlnwmfitltkagixmzehwvtspijggkbmtf", "qaruysvjmclmvluwixgcucfnbqgmwfqaplh", "przoknujglnlyavzckmcemnh", "slxswekdofoqjzwkdzjmmhydxgwlnwmfitltk", "wixgcucfnbqgmwfqaplhdaqer", "bjupmjynzpwtijymfisvxblqeqbigdnkkyjag", "hpolbjupmjynzpwtijymfisvxblqeqbigdn", "mmhydxgwlnwmfitltkagixmzeh", "dnmalrbayidiaougtbqsjy", "bmtfhkflcbveytcckeswjhhrestxgrdvfquvutar", "cstovkpoprqzhsaulsfcgjdid", "dxgwlnwmfitltkagixmz"};
    int len = 41;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "anedncstovkpoprqzhsaulsfcgjdiddnmanedncstovkpoprqzhsaulsfcgjdiddnma";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dict = {"guckgqpeyrkqjjsozefpobxototybjprdvkl", "jprdvklkpuuzkbaxulafexi", "othfhnbkbjpyeirtndfdcqmvmbogwzrtzzelfgh", "bogwzrtzzelfghqdyhoyezwhcewwbkfh", "othfhnbkbjpyeirtndfdcqmvmbogwzrtzzelfghq", "sozefpobxototybjprdvklkpuu", "dsvogkpsbxvabaothfhnbkbjpyeirtndfdcqmvmbogwzrtzz", "krxrrckllduvpnxzlhencplmkpqwdhwnsowihw", "qwdhwnsowihwdvggbrxggxtdsvogkpsbxvabaothfhnbkb", "hcewwbkfhhljccozhzjjlhxehqdzuujuqtyglq", "bqtntnxkvljmebacskdmuwsbcpkrxrrckl", "ogkpsbxvabaothfhnbkbjpyeirtndfdcqmvmbogwz", "bcpkrxrrckllduvpnxzlhencplmkpqwdhwnsowihwdvgg", "hzjjlhxehqdzuujuqtyglqffnwvhgkgguckgqpeyrkqjjso", "ckgqpeyrkqjjsozefpobxototybjprdvklkpuuzkbaxulafe", "ghqdyhoyezwhcewwbkfhhljccozhzjjlhxehqdzuu", "wnsowihwdvggbrxggxtdsvogkpsbxvabaothfhnbkbjpyei", "ozefpobxototybjprdvklkpuuzkbaxulafexi", "kqjjsozefpobxototybjprdvklkpuuzkbaxulafe", "vpnxzlhencplmkpqwdhwnsowihwdvggbrx", "qtntnxkvljmebacskdmuwsbcp", "svogkpsbxvabaothfhnbkbjpyeirtnd", "wsbcpkrxrrckllduvpnxzlhencplmkpqwdhwnso", "psbxvabaothfhnbkbjpyeirtnd", "rwslgzaqikizcbqtntnxkvljm", "yezwhcewwbkfhhljccozhzjjlhxehqdzuu", "corwslgzaqikizcbqtntnxkvljmebacskdmuwsbcpkrx", "ehqdzuujuqtyglqffnwvhgkgguckgqpeyrkqjjsozefp", "whcewwbkfhhljccozhzjjlhxehqdzuujuqt", "hcewwbkfhhljccozhzjjlhxehqd", "dmuwsbcpkrxrrckllduvpnxzlhencp", "nbkbjpyeirtndfdcqmvmb", "totybjprdvklkpuuzkbaxulafexi", "llduvpnxzlhencplmkpqwdhwnsowihwdvggbrxggxtds", "wwbkfhhljccozhzjjlhxehqd", "jprdvklkpuuzkbaxulafexi", "hencplmkpqwdhwnsowihwdvggbrxggxtdsvogkpsbxvab", "ckllduvpnxzlhencplmkpqwdhwnsowihwdvggbrxggxt", "pnxzlhencplmkpqwdhwnsowihwdvggbrxg", "pobxototybjprdvklkpu", "gwzrtzzelfghqdyhoyezwhcewwbkfh", "wwbkfhhljccozhzjjlhxehqdzuujuqtyglqff", "qtyglqffnwvhgkgguckgqpeyrkq", "hcewwbkfhhljccozhzjjlhxehqdzuu", "skdmuwsbcpkrxrrckllduvpnxzlhencplmkpq", "tyglqffnwvhgkgguckgqpeyrkqjjsozefpobxototybjp", "bogwzrtzzelfghqdyhoyezwhcewwbkfh", "psbxvabaothfhnbkbjpyeirtndfdcqmvmb", "kkfmnokcorwslgzaqikizcbqtntnxkvljmebacskdm", "bogwzrtzzelfghqdyhoyezwhcewwbkfhhlj"};
    int len = 44;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bcpkrxrrckllduvpnxzlhencplmkpqwdhwnsowihwdvgg";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dict = {"wqbyqgtfipzzhrhlarjouhdklvkjqmjuz", "rjzxuewzxnxulnbxmzwqbyqgtfipzzhrhlarj", "rtarbheuxhdmfelsrnjgagokcvqjbdfqbgfqxcmdh", "ousdlmmgkhricqvgxkrjiyfoqdahjakvrxdvypdv", "jzxuewzxnxulnbxmzwqbyqgtfipzzhrhlarjouh", "juzluloiwdhdkigmtrashbbwfc", "xkrjiyfoqdahjakvrxdvyp", "rtarbheuxhdmfelsrnjgagokcvqjbdfqbgfqxcmdh", "rousdlmmgkhricqvgxkrjiyfoqdahjakvrxdvypdvcikvwz", "heuxhdmfelsrnjgagokcv", "vrxdvypdvcikvwzegmmojcgizswntncepakmblm", "klvkjqmjuzluloiwdhdkigmtrashbbw", "igmtrashbbwfcjrtarbheuxhdmfel", "bcokrousdlmmgkhricqvgxkrjiyfoqdahjakvrxdvypdvcikvw", "lmsrxvgsyozzxumzoorjz", "rnjgagokcvqjbdfqbgfqxcmdh", "wntncepakmblmflmsrxvgsyozzxumzoorjzxuewzxnxu", "qgtfipzzhrhlarjouhdklvkjqmjuzluloiwdhdkigmtra", "njgagokcvqjbdfqbgfqxcmdh", "krousdlmmgkhricqvgxkrj", "cqvgxkrjiyfoqdahjakvrxdvypdvcikvwzegmmojcgi", "loiwdhdkigmtrashbbwfcjr", "rhlarjouhdklvkjqmjuzluloiwdhdkigmtrashbbwf", "hdmfelsrnjgagokcvqjbdfqbgfqxcmdh", "wnvubcokrousdlmmgkhricqvgxkrjiyfoqd", "uewzxnxulnbxmzwqbyqgtf", "krousdlmmgkhricqvgxkrjiyfoqdahjakvrxdvypdvci", "mgkhricqvgxkrjiyfoqdah", "zoorjzxuewzxnxulnbxmzwqbyqgtfipzzhrh", "sdlmmgkhricqvgxkrjiyfoqdahjakvrxdvypdvcikvwzegmmoj", "luloiwdhdkigmtrashbbwfcjrtarbheuxhdmfelsrn", "uzluloiwdhdkigmtrashbbwfcjr", "qdahjakvrxdvypdvcikvwzegmmojcg", "mflmsrxvgsyozzxumzoorjzxuewzxnxulnbxmzwqb", "msrxvgsyozzxumzoorjzxuewzxnxulnbxmzwqbyqgtf", "jrtarbheuxhdmfelsrnjgagokcvqjbdfqbgfqxcmdh", "wntncepakmblmflmsrxvgsyozzxumzo", "uxhdmfelsrnjgagokcvqjbdfqb", "ewzxnxulnbxmzwqbyqgtfipzzhrhlarjouhdklvkjqmjuzlulo", "xnxulnbxmzwqbyqgtfipzzhrhlarjouhdklv", "gkhricqvgxkrjiyfoqdahjakvrxdv", "ozzxumzoorjzxuewzxnxulnbxmzwqbyq", "rousdlmmgkhricqvgxkrjiyfoq", "iyfoqdahjakvrxdvypdvcikvwzegmmojcgizs", "mmojcgizswntncepakmblmf", "gmmojcgizswntncepakmblmflms", "iyfoqdahjakvrxdvypdvcikvwzegmmojcgizswntncep", "gkhricqvgxkrjiyfoqdahjakvrxdvypdvcikvwzegmmo", "bbwfcjrtarbheuxhdmfelsr", "xdvypdvcikvwzegmmojcgizswntncepakmblmflmsrxvg"};
    int len = 21;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bbwfcjrtarbheuxhdmfelsr";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dict = {"fxwudfoymzgsbyfqxtvwvanhibns", "lyvztcmclzjfwlvvstuyyinop", "djxrtonqnqshdpedlfmamwagksrkhhinz", "uoywtearlmqcgrhrqfbimhfmpnbttuagzqchrhauxcutrfe", "hinzoynxfxpgcrgdjjihz", "hauxcutrfepusnwzjfewfxwudfoymzgsbyfqx", "dksgmqbpjovyxvdewswllohffglyaqljyybrctqly", "yybrctqlyvztcmclzjfwlvvstuyyinop", "vncvarczsgwgizwnsmdjxrtonqnq", "tqlyvztcmclzjfwlvvstuyyinopdxjw", "aqljyybrctqlyvztcmclzjfwlvvstuyyinopdxj", "sgmqbpjovyxvdewswllohffglyaqljyybrctqly", "oqfiatuwmsixrwxyfjcsxweletfoxhezbvncvarczsgwgizwns", "rctqlyvztcmclzjfwlvvstuyyinopdxjw", "imhfmpnbttuagzqchrhauxcutrfepusnwzjfewfxwudfoymz", "euspujzcghkteksyojxdksgmqbpjovyxvdewswllohff", "qbpjovyxvdewswllohffglyaqljyybrctqlyvztcmc", "xcntcykcbzhseymuoywtearlmqcgrhrqfbimhfmpnbttuagzq", "fxwudfoymzgsbyfqxtvwvanhibnsyyatqforfxvf", "earlmqcgrhrqfbimhfmpnbttuag", "iatuwmsixrwxyfjcsxweletfoxhezbvncvarczsgwgizwnsmd", "orfxvffrlbdclyrgjqsoqf", "eymuoywtearlmqcgrhrqfbimhfmpnbttuagzq", "eksyojxdksgmqbpjovyxvdewswllohffglyaq", "hkteksyojxdksgmqbpjovyxvdewswllohffglyaql", "earlmqcgrhrqfbimhfmpnbttuagzqchrhauxcutrfepusnwz", "qsoqfiatuwmsixrwxyfjcsxw", "lyrgjqsoqfiatuwmsixrwxyfjcsxweletfoxh", "arlmqcgrhrqfbimhfmpnbttu", "wtearlmqcgrhrqfbimhfmpnbtt", "bimhfmpnbttuagzqchrhauxcutrfepusnwzjfewfxwud", "frlbdclyrgjqsoqfiatuwmsi", "ffrlbdclyrgjqsoqfiatuw", "hdpedlfmamwagksrkhhinzoynxfxpgcrgdj", "inzoynxfxpgcrgdjjihznbhoqeuspuj", "xdksgmqbpjovyxvdewswll", "rctqlyvztcmclzjfwlvvstuyyinopdx", "bzhseymuoywtearlmqcgrhrqfbimhfm", "qshdpedlfmamwagksrkhh", "etfoxhezbvncvarczsgwgizwnsmdjxrtonqnq", "lyaqljyybrctqlyvztcmclzjfwlvvstuyyinopdxjw", "ywtearlmqcgrhrqfbimhfmpnb", "nxfxpgcrgdjjihznbhoqeuspujzcgh", "kteksyojxdksgmqbpjovyxvde", "vztcmclzjfwlvvstuyyinopdxjw", "iumezvklxcntcykcbzhseymuoywtearlmqcgrhrqfbim", "wgizwnsmdjxrtonqnqshdpedlfmamwagksrkhhinzoy", "auxcutrfepusnwzjfewfxwudfoymzg", "brctqlyvztcmclzjfwlvvstuyyinopdxjw", "epusnwzjfewfxwudfoymzgsbyfqxtvwvanhibns"};
    int len = 36;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aqljyybrctqlyvztcmclzjfwlvvstuyyinopdxj";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> dict = {"uzrpripobbhvzjizwzzotgrzknvltifxqdelsygcjxjpkchtsj", "ekwdiaukdfcdncuvulcaoilofsbtfuzymwbogkbqaxxcfsspdh", "yooyjcuqqyhzmtpiuzrabbmyoghleakjjkgaeddfhcbekuxnpw", "krnyifhfzrtqjangcckxcmzajogvtrznhisjowcvtyhnofnwcn", "jzsxbmbqaxcexshrxrxdwbssiaqxscbjqwplyrveufvzvcnejb", "vqkgckkllpsagydnacsnzihrppxgcmrmpzgwumalzgtyrashck", "orojqibzihbnsrypiegukqtkfhwbqwitpgfmwzofbvrgbhaeqa", "falganzvotkkafcpjlwdgydkjwhjfevrqiwahytoybpwsbxdug", "abegkruhqtkfdfivchobzeuoynfgrzaammbvawdpsyqtsjvrcs", "dxlxhmmduopjwdaxqawhvltzjlmklvztptrjchhtnoqvpktbyp", "luwgqssovimzdilmmrzogoqyjhsczbibcdkhufmfmbafprywjr", "mduvtkysarloorwpeunzneelyegnvlhceezumjipxuxlitrwxz", "qhudqxaswzqkjzprmeqhbwzcoekvdwdbmayaolmchjsyukpfku", "iduxcagkplilavidxhounzkphsmskvkiggfmxjrkknfuhwsnot", "xmahyfflywskvwmpcclipwccrzjnhsuoclimzheggrhzqgczvf", "nilmzzwoqkpphunquniaitvpzkkvrmhmdmaybuvildsgpirwvy", "btgdgmjlibwhuumywjwlmezhkikdaqikddiuonghlmasdlpnxl", "geiyrutlcflektnltjmifofjvapbbvpgikykxwvbeyzkboooqi", "wvislrehjqridcaahugyunhzpytelzihujkzzvveugkpthbpom", "cyeokrkoxvfxijxnvemuogscqlquljldohgdrafoyagrzfoklx", "tcbmrunzhnehfnrjpaujffviuheqbucwrnwwgcupknzqmyjthe", "pvufjooqrkidxcfjtydcfwztmndligzwltxboeuweqmztmseuc", "znyqthacgdaihniledzjlitbenrlvkhryslccwvagoldvlnfzq", "rzppmavfyzasudzfyaxdmaptahmzrasjvnreryokjbgylugvro", "soynwgjuwdpssgeobglqralgknltdnhymqdqidsdatswadorpd"};
    int len = 847;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "krnyifhfzrtqjangcckxcmzajogvtrznhisjowcvtyhnofnwcnilmzzwoqkpphunquniaitvpzkkvrmhmdmaybuvildsgpirwvyooyjcuqqyhzmtpiuzrabbmyoghleakjjkgaeddfhcbekuxnpwvislrehjqridcaahugyunhzpytelzihujkzzvveugkpthbpomduvtkysarloorwpeunzneelyegnvlhceezumjipxuxlitrwxznyqthacgdaihniledzjlitbenrlvkhryslccwvagoldvlnfzqhudqxaswzqkjzprmeqhbwzcoekvdwdbmayaolmchjsyukpfkuzrpripobbhvzjizwzzotgrzknvltifxqdelsygcjxjpkchtsjzsxbmbqaxcexshrxrxdwbssiaqxscbjqwplyrveufvzvcnejbtgdgmjlibwhuumywjwlmezhkikdaqikddiuonghlmasdlpnxluwgqssovimzdilmmrzogoqyjhsczbibcdkhufmfmbafprywjrzppmavfyzasudzfyaxdmaptahmzrasjvnreryokjbgylugvrorojqibzihbnsrypiegukqtkfhwbqwitpgfmwzofbvrgbhaeqabegkruhqtkfdfivchobzeuoynfgrzaammbvawdpsyqtsjvrcsoynwgjuwdpssgeobglqralgknltdnhymqdqidsdatswadorpdxlxhmmduopjwdaxqawhvltzjlmklvztptrjchhtnoqvpktbypvufjooqrkidxcfjtydcfwztmndligzwltxboeuweqmztmseucyeokrkoxvfxijxnvemuogscqlquljldohgdrafoyagrzfoklx";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> dict = {"raatdscqpbhsznnebskeumyyjaogvislmsorwiuxbzgacjfrok", "spjzfliveayspbkejmxwvpklmpjwasizxqveoygqhpfufffdka", "ndqbzablrsdfgttulpmkkxifjpepoqywkmrvlakwldgkkjpneb", "ivnqprviugcqyucpeadgboowxcnjjrqzvvbqwvkdcncpnreaed", "dhpgbxxkegtnlyzxbjjfdsfigllevmuoaosuqxnhtccfhbzlmo", "woeouhdmelnhldhgcpqllwniqsulnarltyblhinlkkypowitjy", "ynkcdbpmdgujnnnmaovjnbecxbjbooomizmhpgblxsfdtfkipe", "gmfpcwkgdnbugoeeqewjsudrekcqvjrontkqfzqvjxxjuectgf", "tuaexlhymhnoqoilxbkumhxtfiwfeebnvgbhojwbqocwaqboig", "cktrjtskabfqhnjrhkqqjnllwewlplkyevmxkapetqfmvyrrln", "foinjbjksanswnfqcypyeapewjbahfwptqkoiaaskawrkawdvl", "bbmjzwliplchsbsnqyaagbrmlmrmaxmolzuhvjbdmzresfxodj", "msrzpuycpfpyviqajuobsuyqsfvzzrqzpllqxhpogviqbiadnc", "jfspfucmmjqmuxaeulyxwdsgnfmmfmvqedeheddkkydgavdmet", "vypwiwhdbearixmxhuhxcichghubjgxalcbmhudjkwmfyzrqwu", "uwalzbrtpfmdksrngmcjsvtlbxjfvpwkswlwuvapgspwbhwisx", "auscqhipolmlwcqrzcvifbubvxtxtcfvhjenuojlychatogoxp", "hloyvbebuqrcgnlvwqduegvnmuronexvclhsroybonntzckyos", "oqkltdnfmtupyqouyanwskmxrcztspspxhubgxbpnbxqvnlich", "xjpwebfnagvhelrpptuabrjkkxtvjxxllfxhwfbwbxdmpktjyz", "krjhbtrwmrakuungpgumwilkmrdlwkgebqnmdqonnwdfouybai", "zkeebwnzmqmzflfcfokoibzukqhfmvzujqnjpqpivjowqqoxmw", "pybxkmelywvcdnqxeianhdfgscdtarpqhvyrekfevvpexpugcm", "qjzuqjwhmbitemgtioltbviecxjyvocsqrpcdjooqsytiqrhmv", "elxmldsqgdfbeffcabwhlgtgjjyewwpgtngymnqegqpwomatjr"};
    int len = 838;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "elxmldsqgdfbeffcabwhlgtgjjyewwpgtngymnqegqpwomatjraatdscqpbhsznnebskeumyyjaogvislmsorwiuxbzgacjfrokrjhbtrwmrakuungpgumwilkmrdlwkgebqnmdqonnwdfouybaivnqprviugcqyucpeadgboowxcnjjrqzvvbqwvkdcncpnreaedhpgbxxkegtnlyzxbjjfdsfigllevmuoaosuqxnhtccfhbzlmoqkltdnfmtupyqouyanwskmxrcztspspxhubgxbpnbxqvnlichloyvbebuqrcgnlvwqduegvnmuronexvclhsroybonntzckyospjzfliveayspbkejmxwvpklmpjwasizxqveoygqhpfufffdkauscqhipolmlwcqrzcvifbubvxtxtcfvhjenuojlychatogoxpybxkmelywvcdnqxeianhdfgscdtarpqhvyrekfevvpexpugcmsrzpuycpfpyviqajuobsuyqsfvzzrqzpllqxhpogviqbiadncktrjtskabfqhnjrhkqqjnllwewlplkyevmxkapetqfmvyrrlndqbzablrsdfgttulpmkkxifjpepoqywkmrvlakwldgkkjpnebbmjzwliplchsbsnqyaagbrmlmrmaxmolzuhvjbdmzresfxodjfspfucmmjqmuxaeulyxwdsgnfmmfmvqedeheddkkydgavdmetuaexlhymhnoqoilxbkumhxtfiwfeebnvgbhojwbqocwaqboigmfpcwkgdnbugoeeqewjsudrekcqvjrontkqfzqvjxxjuectgfoinjbjksanswnfqcypyeapewjbahfwptqkoiaaskawrkawdvl";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> dict = {"ydyydkossxxyvhnquljsmescdsncstvqvlrzsgjzyezdvzroxq", "oafpfitjwetmogulesmkbjphhpsuqaabtskqanbkvdcybdmhul", "tycgwheozmoyvklflbtukjbgfqruynmornhjszlorcdvlskgsx", "heghdlncwabfbybtbzhsejuhdagjoibwjsuqbymfgsjsnqubhw", "vkdzuklqpjqjbfihyaitvkzfepwwtseldbyzrzjtzmuydtimub", "bdeqouktkounuchriwdljubeqhobcngfbiwrmsawatovgdaosp", "ekgaquheigcuykzirklwgvtjjncrpvfpmcqgzlauxlzxsmmbfy", "rhkkjalyffrachneggwyfpzcdfjcpifiddqukqkvvyuyywicok", "mjgdfwjpenjzcbzytdyrpkgebarxjajgoswwgzftiikzdssuzz", "lmiehqpdfdgyohipjjnubrhlrnqugpmfvjqrxhognsevzlrwri", "nfahmtepahlxrosgncxwzerztqgiljwuiiycvchcnnxmgicapf", "fygcrsamrfjvlvxwmafglehccihjymymmwlkcnyrguyofgojqo", "aaagiurkbamwfthlyvofytrwlffhnxrhofqhqracqgftolwhfg", "uotdwcxnqktltxainjmngncvtpjscygaesqipzflklrujzktya", "dbtpxxbabghrnnnhzdeddjrgjlsmqwtmfdqtgsnbeloytmzrzs", "kkpadorpkrfhihrorimhuhutjuwgyuqinoymkdzgtzudfjguwd", "xaakckhvmgkheinkjtabottmcsjjrcljlngpvuvvgchvjhqloh", "wexygxgazyvuhtrxpguudzzvlhittryzeprilqxmvdedhurute", "svkepngjcpmpjxeafroobcfcwkvlgkbokltecozkyqyolsyzfn", "pbqszweqkcfpgwqwsqulhrfvmolpebwvopamvhldcqujqpgmfu", "zudqrodzhrbdreypjxlcpvsfhdypzsxtsyrkszavwfaoqwkpev", "ifywguuoogybjncskewizpiwxayezqjmtihzlanunvsdfnrfpj", "qdzvrepzuwcronrbhkdmmgtjpoohcdkmvsezvejbtuukvwciem", "jksffmlbmlkyauqzwgupzupudezbmxpkybixlkrnqyrqhnhuht", "cvrmjwtiafsrzxcfhusvwbnecwxoloboxildnmsyobirpizyir"};
    int len = 1124;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cvrmjwtiafsrzxcfhusvwbnecwxoloboxildnmsyobirpizyirhkkjalyffrachneggwyfpzcdfjcpifiddqukqkvvyuyywicokkpadorpkrfhihrorimhuhutjuwgyuqinoymkdzgtzudfjguwdbtpxxbabghrnnnhzdeddjrgjlsmqwtmfdqtgsnbeloytmzrzsvkepngjcpmpjxeafroobcfcwkvlgkbokltecozkyqyolsyzfnfahmtepahlxrosgncxwzerztqgiljwuiiycvchcnnxmgicapfygcrsamrfjvlvxwmafglehccihjymymmwlkcnyrguyofgojqoafpfitjwetmogulesmkbjphhpsuqaabtskqanbkvdcybdmhulmiehqpdfdgyohipjjnubrhlrnqugpmfvjqrxhognsevzlrwrifywguuoogybjncskewizpiwxayezqjmtihzlanunvsdfnrfpjksffmlbmlkyauqzwgupzupudezbmxpkybixlkrnqyrqhnhuhtycgwheozmoyvklflbtukjbgfqruynmornhjszlorcdvlskgsxaakckhvmgkheinkjtabottmcsjjrcljlngpvuvvgchvjhqloheghdlncwabfbybtbzhsejuhdagjoibwjsuqbymfgsjsnqubhwexygxgazyvuhtrxpguudzzvlhittryzeprilqxmvdedhurutekgaquheigcuykzirklwgvtjjncrpvfpmcqgzlauxlzxsmmbfydyydkossxxyvhnquljsmescdsncstvqvlrzsgjzyezdvzroxqdzvrepzuwcronrbhkdmmgtjpoohcdkmvsezvejbtuukvwciemjgdfwjpenjzcbzytdyrpkgebarxjajgoswwgzftiikzdssuzzudqrodzhrbdreypjxlcpvsfhdypzsxtsyrkszavwfaoqwkpevkdzuklqpjqjbfihyaitvkzfepwwtseldbyzrzjtzmuydtimubdeqouktkounuchriwdljubeqhobcngfbiwrmsawatovgdaospbqszweqkcfpgwqwsqulhrfvmolpebwvopamvhldcqujqpgmfu";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> dict = {"wqftdzgrhaakayfoteisnpikazpuaonvpxmqyrmsypbyxcgzsj", "okmoqcyskfawmpjfwpbgvefgyalzzofetmrjtjvzpfkpgjxgtu", "crvnkvnktiwyputywykcfhyozzdookyjedjfvithqnjnjothzf", "patuqqvadfwweszqgpikfwjidezweytnhtafmknljgpytecktm", "iuuzzzuwqlyibwaeidhdtpkfizkxczkttbhygmnzzlgbgyjrla", "qzzyfuukvcoyombfsudxjinnwlgqriuxdcbfwbpzstkfxtgsli", "juonuwytmarbsfvqbyewaixuyqbtqrixixtyjpukbaprcjnqit", "luoskmnuuwjenqxbjfyeencwssjvytjmgqlfcxajywlaucfqik", "rylapxawtdtmedfppwllgctzlcjiteayrxwagjgqkxrrukrake", "mseskpgtrmprjolzpkqvqzwuwlqabqesztpesrjfchgaetjviw", "dsiyinxhzbadywtjtgqgaffydujgijtiytliyiycszbnktylbq", "nnnbnomgnrbgaglzyrutgszfifbzsbupokywiebeptoniiitxz", "xhdomlqscmxpppyhqeqyufnxdytdoghuzffgszfazjfwaxnsub", "eqxcdgvunbzrdipdawubbdyxbsgrklvonydloiksdatzyacncp", "tpckhzaccwfwjjfnzvbyjmcyqvzayjndmtedhwtpmhfbwsnroc", "zmymmdlcnidikfqvzygbfjelrtzufouocounwuipnybrkvwxkx", "byvwckprqprfspqqvxzkcdadufvpjvmwsbpvxlkjvrfqbbrlgg", "guiqnssbvhtlujtbxlmcdhztgnbldrnelwasaoxoofjttqdkyl", "hvwvdfpigewkfsyzjhobwrichbzziqjodkcnlgqeqelociwubr", "swvuyvwnuxkeqfipdelkzinrpwwjllkrtreunsbbnggiduqwzd", "vcgdlurkwsegvsocvfxwmhupandkrdiasrebcdjuxgdizozabs", "kgylrbaisuxobkftluljyeurkazltykwgknktsouyyoqrmffmo", "ffqvtuebfnmiqunrvysxmgfjzrqeelhrfqjvnzqdyabqwenjsy", "yypvgrqtxsqomwdnzkaujayywuxbyxvywfvkjdumukpniuerpv", "awuoibtzzmgmeqsngjuzuhkmkttqvgnxaphvtnnctltnkbgsvn"};
    int len = 1271;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> dict = {"rndbbortwipjcyhitbstqidrtdafqpbvxzrisvhjuotdmjacan", "ccctslznfalhanzjfgjpjzafncbrxmdiucnbevcxmhjxdwhygg", "axvyjfzvmdmgrvhhrwevyxqxbwapexhaznmgqhpxhktzhwkbsx", "ytpwdqwlivhpucrfxgpdxwesoqxonlybinsbszlytfbohzkjta", "paqkokeibjdqthkadwsfkqnzksljjatxyiefjswmkydxhxddkz", "dvurougavzdwmcjubxdqphftaowbkfmuufupdpvvozsziooypj", "egenfwzjncacrgtpdrzjllblpqnqmncchboxwfbqjgjjnbfcwm", "fezdlgrleizbzgfqdfccnxfuohrqysyvoiubtvlhhlukutynoo", "zuuvzomgrvmjdelwlnbqtslzisyyuzonkbxnvtvrwkbdvdyhfv", "mqbikwcdtrakomfhngasgdjxfupjltmmrfiixycouehmwmmqmk", "vmwqmyjwfbuoqtkstrgjdtfzsieiiqprbtfllyysihoqnuuhgu", "jydqfyeioqjeixvoqhkaemkvbdcjhpitgtrsuewpjlerbvgbmf", "koiyvqazzhwcwsxofehwojvqjxsaclokqkhmbdrbaynbuvbhuh", "xtrlimqrxyuxmvlqmqymxugqitxjxkiippsumpligsueqzaujd", "tvezgpkuzamvfbxatxstezrjeckslduppelrdsviokblzmneay", "qvvyodgzubpafabczlkbwnwdcebklprrufuzdtszugzjtvxzus", "bkilbmjqvcwbckbjqbhznhwtpaojvwbtkgmbhybwapgbhorqfi", "sadnhhzsraicfpbgvtqoiltymfepuioxkclvshlctkwdljynbt", "oehrjukmnznkrfriprmtipikmbscczhfqplqkhgmkefoocypvl", "ljlibezqqavaycaaawwsvaueubizjerfyhkwgvjyvzonipxmbc", "whmhvvxvevlhmhwqwitropslwrhmazomkdryjblgwdhduyeizr", "uhurdlnplxznsiwmxiknmnkshmrdcietgtxcitwxqobvsfeutw", "ndxfsvyaiuuzlhyfmwjhljmfjizlvbwzzptexirrxeigaianae", "hozenzzyprmorlocrfehohlvkuonitjpeahyqcidirodwgbytb", "gwoclxxeqpprdgbivdywxyfollxfptrjwnwiuxaxqgmckcyzyp"};
    int len = 1388;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> dict = {"ttkshdenzioxyrhiycoshxxfcowyrzttbnloiardyhvftgdmon", "mayeidvhmyzurnfqtuvqntwopsivdiqodgakubujpwqpotfcuj", "hqhaubsqzxxmkipiarwyeeblhltwnutefejuznrjcykxnxhclu", "ufpacqagsuekhxkekzlmpfgeqgalfsaotkxeilqpsuhcdksjga", "rfuivcihfopzludthztoownbzofkmbrxvfedeqehpswznqvyop", "octplpaawwqxmrawdueblwujmybmlehlqbwmsrssyvrizjynxx", "ykjjinaewvtctgsvmyiwugufzuzkkmkglykvnsjlacdsxjzlff", "dcgehfbfwgnhdxnewvbbagkdzflqzccbrcmurifcxfrtozwonh", "zdnllnhhyjxhvesfyelyfzdxubcadvfggipibsktegvefjeiqv", "bfjzhjksbgpagdcuqmesfpbyxfbdarwweothisfaosclxouzvr", "vhlgdjskutxzxxmqzqmnfnehdkexwumqsuvyupjgrhnjahtfnc", "cgdobzyfyllwgeiwdikupmhfjsbzjuxwuuulqckiycjlifviub", "plsmjocrlmktrjmhvqswplsawgenzdjhfssphkfivkampfqlet", "srholvbrcdfejqjaoayvrpjvlncacvalntwxdrlzgdkaixhvum", "xbrvxcxdsvflpntwtoyzqhdwxivnptgktsnuibduxdjgeyboqg", "auejenwodtlaaikcxtnaloqnavmqsnaaeewtgkxotawrhedkoo", "ixcrwtuuhqvwekjiuzyftnncpylfyowmkfwgewksjowpdizdzk", "nofwjogejiagiccjusnufdnxxdnynikosikprhevldudezvmil", "qlmbikqbqznumbrxskttjpmddgkflnshglkmoxdocgveyelvjy", "jqukucerfguolksdybbrvrvykvwpdufivdheunategdxenszyz", "gcjfphbqkwmgvkbpvqkqnhirdoaxenkqdyugtimekkvfoopoqe", "ecunrzaejvquvymejsyijsgvwwcjclhpgmghtwpdbecnrsnnvw", "kindpiogpeemkrxioewnmcxuyfplvoxxrebmtclvjnpnzrwixs", "wtcixwrudqdnazmgmyqenvokltpjffeobkrpitiwyypdcbvluq", "fzveorpvwizrekkuxeeqfpnfvjfmaofstidwkurrywqmispaei"};
    int len = 1309;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> dict = {"fddgwteiexzwrnmozlvmikwnrhwkncuppbrieofbdzkjlbfaro", "sqgemhlzbyrpxwzjgvfndtdxqwyuzqmsfhlimyhxmkscsiciyz", "ohbxkjpaluvcgqbwyurbzqdpqqnukgabgawefjfxhnmgsuodjb", "nxmiggegzbwogxlaopmfkveltfgvrwraocumfhqffehlmwsmiy", "wtpjgcnzgmxdnehpigbmjffcsvupunrqjkfspanrxcyihnaohs", "iqkldvsdtbpbixwrilzmcevctfwzgaovbviogmbowxtflzrkhp", "ripundavheyutvyjnunagshjbgyuqafzdggiiwehscbpzhajlh", "yifbkdjtbytqqgssorjclecylxlkaefgmtuqtfkmwgusomgjke", "kewwvgudiootwcjclvdvuxylkojdakrzpvnlyvifywwwhqgroc", "afqlyidzsupczpywafdtbkkivtyipgetjzflrvqfdiswhdrcyv", "vvbwkcipurnegktgxiqwmwutgdccsmwiccxfhpjymuojjbnsqf", "cgcvxbpokqlnvtuaomsqmkprldqdhpipkgfihxtszshswoxjpj", "gteuwefxprquguilxlhqjrbbaxbcyxeokpqkqdyimkfdvuekcd", "msmhpimonxfurcytqfitrqzxhmoqjltkkdnyydowqykxecphni", "leekzpnkmpovxhtupwzolmspgotwmwqywetadwdggzmzgzctnx", "tewzlsermnrqhyazjgifhmmgwtdkjbnelqipaayyrhgmltshnu", "qwhfsusipdglfwlwohfweictflaeirsceedtuplbebgfukcgsa", "essxpauedzctmsppwqzrkfjzgyihopuzhqndflfklplqoxjynk", "dszjclmrnettqztalxhaxeunhbzjhotaskudsublcllmeuppml", "bmpiriupxkatvzdlpknuewsxayqzffksdhvxnwpixavnfvfavr", "zlkccmyslvltzejmiyvexmffnivbifwuhzblccwqgyzthjgqnq", "huzngpvbxanqbvghtyxhjcyfjopkaboetrnmgnmsknhcmtgpig", "xqgaboldwxjhkltzlcenonxadkdijeadhigayhowyuverbhzlt", "jzodqrnsxirshxlbhqibfxvrjvygnmsgcfchqsygurmkzffmqw", "ugaiynucxetwuhmlfkcivgpxwgpalusfbmpukxchikslieavvm"};
    int len = 994;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cgcvxbpokqlnvtuaomsqmkprldqdhpipkgfihxtszshswoxjpjzodqrnsxirshxlbhqibfxvrjvygnmsgcfchqsygurmkzffmqwtpjgcnzgmxdnehpigbmjffcsvupunrqjkfspanrxcyihnaohsqgemhlzbyrpxwzjgvfndtdxqwyuzqmsfhlimyhxmkscsiciyzlkccmyslvltzejmiyvexmffnivbifwuhzblccwqgyzthjgqnqwhfsusipdglfwlwohfweictflaeirsceedtuplbebgfukcgsafqlyidzsupczpywafdtbkkivtyipgetjzflrvqfdiswhdrcyvvbwkcipurnegktgxiqwmwutgdccsmwiccxfhpjymuojjbnsqfddgwteiexzwrnmozlvmikwnrhwkncuppbrieofbdzkjlbfarohbxkjpaluvcgqbwyurbzqdpqqnukgabgawefjfxhnmgsuodjbmpiriupxkatvzdlpknuewsxayqzffksdhvxnwpixavnfvfavripundavheyutvyjnunagshjbgyuqafzdggiiwehscbpzhajlhuzngpvbxanqbvghtyxhjcyfjopkaboetrnmgnmsknhcmtgpigteuwefxprquguilxlhqjrbbaxbcyxeokpqkqdyimkfdvuekcdszjclmrnettqztalxhaxeunhbzjhotaskudsublcllmeuppmleekzpnkmpovxhtupwzolmspgotwmwqywetadwdggzmzgzctnxqgaboldwxjhkltzlcenonxadkdijeadhigayhowyuverbhzltewzlsermnrqhyazjgifhmmgwtdkjbnelqipaayyrhgmltshnugaiynucxetwuhmlfkcivgpxwgpalusfbmpukxchikslieavvmsmhpimonxfurcytqfitrqzxhmoqjltkkdnyydowqykxecphniqkldvsdtbpbixwrilzmcevctfwzgaovbviogmbowxtflzrkhp";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> dict = {"nscsjqfviqelxfzoascmxgcxokvifbkvyhmckdrmgnzqaivrpc", "armicwopjvsnuefebaqytcqoiaziudmhsijjchssumredkhquo", "emssxcjvlodlrqocnammzbkupxmydbtduzakdsthbnpbgixnah", "gangkmlmxnvnlkndlcxgmyoamnhegevfbeiqbovhlixzdcdybm", "ssbhqvgtpftaqjxdhxusnxelsgmdwocwqahdcscbcaweaamkub", "dsyhmlqwohihwxupxwjpkrlmjdpwmprjhuqmcqmuvzcbmalzxv", "pkefxpecopcvbgittetkchtazlkmcdlxtykixqlqsoylwwsboj", "qxmuldigwgrbrgiyliecqxlknlzabqjgygioqzcusnwomvywke", "lmnggyrcwypkzokmfpyufeeufvnyfhkizwtdphgewwpocfppwr", "kgxbbajolwcvppdghiccuxxhsgqecraagrenhrfqysmndswcmx", "mfiztofntofjrogtubkumxsidwqyhpfoozdbwvckydbbkngcnq", "bqvcznnhkwofksztlmyxrkpdoiwypclwqxswvembpdvodmmgcp", "rfmvukkzbccjddseoqrzvsbkwdvohvmxbaudwpmdtgtboomxhk", "hsyyyyzmzvvnspiqjhewqjgdyhhpgdghwfdnsihdohvvfvqdqy", "uyqrryckxjglpwkcuerfokgdkrmmjshiopczsyjuypwiugzhwa", "vmoglrmgruxsgmhpoprmckmgxfdnawemgzsqwfwtztfxigfjef", "fkwqyyyimshyyniurfsyrexbittqtmhixlznzzgturgyjedmpn", "cvpakycplwsevqgugsawafmjxgoalphdpkrduvljteqzuzgxmt", "jeahbacryhnqtjcraiueehbiylfujibiygwjsjhmnqtzejhmnw", "ogyljimqdwzjxgdfxemcseqcdouiczlyuoasfijnfxqzkwdeii", "zzomfjpjlzensvklzmyldrspoatudbwperldvwqbsuvqamzxjd", "xfrorrgifwiompdqvgvuqizuqcukasvuutwfentmcqiiphifvz", "itaazudgidkouneqznvqqsoxfdnmzznuyapzcwvhxwxxhrnqfs", "wbdoeootzvrpmhlnqxcjmgasgmsxuvmwyambjwaxgddordcdgg", "yvknpuoesdtuizmunyiparpsgyooidkstzzitflzhvzudsanyl"};
    int len = 968;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "armicwopjvsnuefebaqytcqoiaziudmhsijjchssumredkhquogyljimqdwzjxgdfxemcseqcdouiczlyuoasfijnfxqzkwdeiitaazudgidkouneqznvqqsoxfdnmzznuyapzcwvhxwxxhrnqfssbhqvgtpftaqjxdhxusnxelsgmdwocwqahdcscbcaweaamkubqvcznnhkwofksztlmyxrkpdoiwypclwqxswvembpdvodmmgcpkefxpecopcvbgittetkchtazlkmcdlxtykixqlqsoylwwsbojeahbacryhnqtjcraiueehbiylfujibiygwjsjhmnqtzejhmnwbdoeootzvrpmhlnqxcjmgasgmsxuvmwyambjwaxgddordcdggangkmlmxnvnlkndlcxgmyoamnhegevfbeiqbovhlixzdcdybmfiztofntofjrogtubkumxsidwqyhpfoozdbwvckydbbkngcnqxmuldigwgrbrgiyliecqxlknlzabqjgygioqzcusnwomvywkemssxcjvlodlrqocnammzbkupxmydbtduzakdsthbnpbgixnahsyyyyzmzvvnspiqjhewqjgdyhhpgdghwfdnsihdohvvfvqdqyvknpuoesdtuizmunyiparpsgyooidkstzzitflzhvzudsanylmnggyrcwypkzokmfpyufeeufvnyfhkizwtdphgewwpocfppwrfmvukkzbccjddseoqrzvsbkwdvohvmxbaudwpmdtgtboomxhkgxbbajolwcvppdghiccuxxhsgqecraagrenhrfqysmndswcmxfrorrgifwiompdqvgvuqizuqcukasvuutwfentmcqiiphifvzzomfjpjlzensvklzmyldrspoatudbwperldvwqbsuvqamzxjdsyhmlqwohihwxupxwjpkrlmjdpwmprjhuqmcqmuvzcbmalzxv";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> dict = {"iaywgzdozvunsqhvwhmdzoafncifolarntwtxfhgkmmcswimmh", "bsxxhuufusewcfcgipgebjcshdbypcynqzwhkxjcqvgwcuqjck", "zobnmwlamuufjsrhqlfgrbcuhtddjwxuefqbjpuobumljbbmnd", "edkuetzrubechyhpahwavkkzadswjowuhrfjkvqgvyqpaezweu", "sectpqvcxmcqsiqzxyjijlvxynwhqdkzdmeeufaqcghjrqtdzg", "vhyctxtgrtnszqlxlzdazovhsklxykxksipmdulvypllkxcqyy", "yshghmfqkgzilnwjgqgylnmatbusbsjktvazvqaqpjwjpfbcri", "fhibsmftbnirujjficeunvdqvabeoprmmvanorfgyhoigskhaq", "tyxukvvkyxxsyouhvyltzstmuxmoamxhgspdcrrrpwvixxchyz", "gmhnknmvqsbnpzlsrblqchsnyikoqwupxpyohlfbwzcldagpyj", "jjrckcexztuuvamiwgczlytqhtwlbtmifovbrrouqaoejgymgf", "hvlfrraqphfjvcltrfcpajzkmrpztfpgfobeayijmjuioziixe", "lzzaoxtddotgmbxclfikupwzakozktjmrgiyszodvnstgpailt", "qyjkoyjqzqylrzhoulcegmgdynfadbbnfbynwyaytbhhjbrkga", "czjroqcseewmxlzdsrzdyxuepcjzlqdwryqwxjdnpszhyxwhno", "npnluxvlscuvifqmupnzicnrxnsvrdzeskylzyupuotgclojbr", "pwqjqgcnqetjpbzrmvowcminsrwguantwxrxqupgidzdssljpx", "kjmbkjzzieguoenwezfyctrgoluwwqydetfpmzdaaneptsqdan", "ajxjriwjxyjfaoaawpkmzoufyavdfzideatydithagruaesypw", "osjcurebuvejicdeyfidyyoswvukmuxvqyplanjrhesnmbjyqm", "dnhyzvmuarljvyrculsilxskaxykelrzwfzuiahondqdqxhkpp", "rjmttkjemujpmclhxyaiktzputgcjbwndwrxkwhmzexfolzmsl", "moikltafyyhvghhijggjyvivlsfmqfataaexjsiqqunhjkmzcb", "uoatrsqyjhsffkuodjqthafokwsuuwoenexlsftcktpkpbtcts", "wdnvzctunhjevijwgobwkkgttdggqlazgyivfwoeqzwmraqntc"};
    int len = 535;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ajxjriwjxyjfaoaawpkmzoufyavdfzideatydithagruaesypwdnvzctunhjevijwgobwkkgttdggqlazgyivfwoeqzwmraqntczjroqcseewmxlzdsrzdyxuepcjzlqdwryqwxjdnpszhyxwhnosjcurebuvejicdeyfidyyoswvukmuxvqyplanjrhesnmbjyqmoikltafyyhvghhijggjyvivlsfmqfataaexjsiqqunhjkmzcbsxxhuufusewcfcgipgebjcshdbypcynqzwhkxjcqvgwcuqjckjmbkjzzieguoenwezfyctrgoluwwqydetfpmzdaaneptsqdanpnluxvlscuvifqmupnzicnrxnsvrdzeskylzyupuotgclojbrjmttkjemujpmclhxyaiktzputgcjbwndwrxkwhmzexfolzmslzzaoxtddotgmbxclfikupwzakozktjmrgiyszodvnstgpailtyxukvvkyxxsyouhvyltzstmuxmoamxhgspdcrrrpwvixxchyz";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> dict = {"cqtvrbryjfmjolpuwxspetethrummigduflwqsljtvlffnwhbi", "szrxsfajlqfzmzdrupomxryqhqirnrfdesuqpvcxqwqpsmxewd", "uldxflqanbradeyinzdcdbdqxebyjxmsyacbwvksakozkdajeg", "endqadglbzsaulbsxuhsuvnqovmxnxmubdqqhzfmomxzklnfyk", "hxpgzlplzmwkmfynalkutgzcmuhdpllhcumzfbosjtslqzkeem", "ybcptcfpgxpkxsdqulehtohasjoiplzynysgtboieptetqrart", "bifxnggrrqoembubmncbmnpjxucmpuqpzlsqzrqtdecksfijij", "wiwsdrcgzwndkpzkvodndvvckykxhcqsoeeptssojxpdlhtjeb", "mfaslktifgtdybkqczjlgixomewxuqliughdzcbmrtzwbwymny", "vcnmqpdlebcxiajtnwvmtxsxjnamzyduqzitxvwgfoobpvnetn", "lzodjdbiaybqouqkuriuuevzqbnzoaurdlelqkqzkobiukosxo", "rijuhhqgezietiuphqabyfikmulpmxqfaqkhgahnvlksctvvup", "zwqckpztahrfqexrppzzeiteyvturprzzmrrfrvdoapdortmjv", "xpnpcqzwjyoactdilexbsybmlhyqfptgezdqzzvhreqjrlawvl", "qsihmiwidztiibhktqaebropiyfoibwaljisvjiypuxiqixyhe", "anwfyurklhtrxxfwcbfiveestwpnkgaqbmqxgoifjvnsqqsoqr", "pplmjvyqfpedhotbpkqcnlkongsgykynzuhfxubijbrtmilxah", "doxycumlcgyrkxpcmflvzcokdejwvhegjwwaylfqjnuwxkvowu", "ocmztygamxvmxtumjzutialqspuajjhjixqrkpopbplggrxura", "gzlwjoqhhwduietdxgsnnoinlcdotmdwakuqicvgwebvbuuyow", "icgdxenlpvyniumpwgguianaqiizmltoukidocyvbihdykbwpf", "jdudpxfufmzooanjgulswppfqwzbiyqxkwhxlbtyhdmdknunkc", "nhkbyfkmemgsycxzwispephgfbpuebqmtgwiheqpirzwrdzhxs", "fegkhhcdtranwuwjnegxpydwrmxrdemevfdxuxzjkjucgmterx", "tzjertpwkshtallppqbbatigmgsxiklrqxcxbvimxhvdzwnqoq"};
    int len = 819;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bifxnggrrqoembubmncbmnpjxucmpuqpzlsqzrqtdecksfijijdudpxfufmzooanjgulswppfqwzbiyqxkwhxlbtyhdmdknunkcqtvrbryjfmjolpuwxspetethrummigduflwqsljtvlffnwhbicgdxenlpvyniumpwgguianaqiizmltoukidocyvbihdykbwpfegkhhcdtranwuwjnegxpydwrmxrdemevfdxuxzjkjucgmterxpnpcqzwjyoactdilexbsybmlhyqfptgezdqzzvhreqjrlawvlzodjdbiaybqouqkuriuuevzqbnzoaurdlelqkqzkobiukosxocmztygamxvmxtumjzutialqspuajjhjixqrkpopbplggrxuranwfyurklhtrxxfwcbfiveestwpnkgaqbmqxgoifjvnsqqsoqrijuhhqgezietiuphqabyfikmulpmxqfaqkhgahnvlksctvvupplmjvyqfpedhotbpkqcnlkongsgykynzuhfxubijbrtmilxahxpgzlplzmwkmfynalkutgzcmuhdpllhcumzfbosjtslqzkeemfaslktifgtdybkqczjlgixomewxuqliughdzcbmrtzwbwymnybcptcfpgxpkxsdqulehtohasjoiplzynysgtboieptetqrartzjertpwkshtallppqbbatigmgsxiklrqxcxbvimxhvdzwnqoqsihmiwidztiibhktqaebropiyfoibwaljisvjiypuxiqixyhendqadglbzsaulbsxuhsuvnqovmxnxmubdqqhzfmomxzklnfyk";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> dict = {"ppubdoborcuhiglioywoehzfjjecytminkkmwvoxaypzatvlwk", "fgwkyopxjrndqhknrdiqhetdkpfmuxhfrgthsrszodvnryxaah", "clrnfirewrtvyxlkgxmiakckvaqjipvufohegfbgmmjjuqwpcx", "yzrkxuaxsuddfjiztqdtadytrsbpanamjlsgvfystphzreikzm", "snvlukispvyozkhzrgfbyvwqowcgxptgtvinbsfxoyvorprjfa", "uhyhvgmqvnbjdlzfiuiypawjkpllpsoxnzbiawbpxvfpxrriqt", "vipdsizrjhmpadozqlxzmyacuvyunoueccetnwgeslhblrrzhp", "qjlaewjkhucirkzuietejbfsqaowyoatvcxgjjmnevufuorwvz", "raogfzfptgvvppfnjnsebxhftibdcqazeszqfmtvdugeizqfcu", "twhqjygamfbvwurmjvaxllqplrvryfhngblgmljhivqtetuhyv", "akddvwuowmllwpumhhtavhsrccjehgdbpxmwmggxqbrjtemhbe", "kkgwwpaxcgbhqtcyfxcuixkkihxesqtsylqfyrtjmpqreyuyrw", "jvlflbiknpxsewjhtrntibfdrqesejnvsgaaevazckniaeqsyo", "wxthoeotlcgvszbgddrpchxorewafdxgblywbcaprvitpowulg", "emwvnikvhylncccuxefduxtyiarnshofiliawwgkvygwqfxbmd", "gazetvccaquvxsusaxlxadpnqeuurjzlzkiiqzottekkkqijmb", "dkeqtgwsxdtwdbgupnpohsxqnznfevcfnzdyeutbnqosngnhfj", "lokwlafjqesiwtljxsehumsvptjgbpuduceaclktiasnmenwtn", "ixdiyrvwolzbxzrmgvjbmizucwatyedxydhnlpsicntxjcfhws", "nmotvrgnqlboqlemlhclcaerqujavdykizqgfarbugxkpjgogf", "mmplrijwpbwmhnmkxayyisrllsroqiesujcgacwmvjvgwcezwl", "htitfaxibnmrgbmdnuexpfwxfmozbcygfdggskpvhqvgwkstmr", "oktjlranusbwjsiplsjcbkhmqkasukpzjiuslqikhwsrtkxccc", "ztokrprhobhmfxyucqpqwmnhgphnzyixexwbhfscqktyufyopi", "xbzzzutnszxxbaexmkeobzbolytrlpzvubgydzkiqewymcrdpy", "lkzhncemirazarjuikacyrljixmynqjxykfgxiucwoafdewpqz"};
    int len = 883;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "akddvwuowmllwpumhhtavhsrccjehgdbpxmwmggxqbrjtemhbemwvnikvhylncccuxefduxtyiarnshofiliawwgkvygwqfxbmdkeqtgwsxdtwdbgupnpohsxqnznfevcfnzdyeutbnqosngnhfjvlflbiknpxsewjhtrntibfdrqesejnvsgaaevazckniaeqsyoktjlranusbwjsiplsjcbkhmqkasukpzjiuslqikhwsrtkxccclrnfirewrtvyxlkgxmiakckvaqjipvufohegfbgmmjjuqwpcxbzzzutnszxxbaexmkeobzbolytrlpzvubgydzkiqewymcrdpyzrkxuaxsuddfjiztqdtadytrsbpanamjlsgvfystphzreikzmmplrijwpbwmhnmkxayyisrllsroqiesujcgacwmvjvgwcezwlkzhncemirazarjuikacyrljixmynqjxykfgxiucwoafdewpqztokrprhobhmfxyucqpqwmnhgphnzyixexwbhfscqktyufyopixdiyrvwolzbxzrmgvjbmizucwatyedxydhnlpsicntxjcfhwsnvlukispvyozkhzrgfbyvwqowcgxptgtvinbsfxoyvorprjfakddvwuowmllwpumhhtavhsrccjehgdbpxmwmggxqbrjtemhbemwvnikvhylncccuxefduxtyiarnshofiliawwgkvygwqfxbmdkeqtgwsxdtwdbgupnpohsxqnznfevcfnzdyeutbnqosngnhfjvlflbiknpxsewjhtrntibfdrqesejnvsgaaevazckniaeqsyoktjlranusbwjsiplsjcbkhmqkasukpzjiuslqikhwsrtkxccc";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> dict = {"bnnxsxuzgbwijngsajdqtbtxkytoriofkaqcdcpgyjirlnsiko", "vbwbqoxsuvsfhciolsyumlbznxzmaysdwthnqosytztzjtnmlp", "vgmuulbtnoyrnimvrrxrblrmdxpnukfwcbanfjrslggzbnygoo", "atcaorrpzonsqzoghccduoxtxvwsighuhjzxbgwbqarpgimawn", "gptshftxludyytuuflekhwwjrnaxhegoyrnenkxuwhwhvnczis", "plqxqrfkzkpfwddfzajraturwouwxhndcsnlarfldatitvdauw", "namlcheijeuaayzjdcbxhrdhgrkeefcfetchtwgfkszshbxhcx", "wgynpvbakuebabbyfibznbdzlgkrtqtscdxxidfletlebesgmj", "upreqfemsbuinifielymrsblalefrepkfhektlebtdycyayxml", "txmbzutvbrfbgcfpjwbktgyvwrjdzadnvsqhfnegchncgdwbgd", "imaeiovqcrrfcmjnejuukxnwcympottrxmwirhsolkgwnhnarg", "ehspsqutmpgsofyrtyvjhkjeqehotuixhkcwiukemdinclvrci", "fdyxikaalouuywovwitmeqtyahipjtdafgxskhhoizllrflcjz", "kyeboiwgvuddpphxrhlequsscmcqsfouaxvpwdtsbulkiabljh", "yoftfrelfgpnxaxwkezrezqxgpfvhcpeszmswhweleuoohobea", "jqvjranvjonwzzmstidhydupbztsaovvhvudkfnxfjndebagzf", "qbyjqdvzjcsnhgepcwrovalgnkjguufjxkuksvhcjcjwcazumm", "mqfcoeerjucoexpkdozcqclcxdoijzhgobzjzijnwapzfcbqbr", "rdfpnrmajjfxlwrelduaizmndtsvrsxmfginfrfrhkmsdmtvce", "zdzneidljdjwniqxihnrkpiqwrpiuyrksvitooqgfzlqyubsbc", "slocothlypdnvunpobteqrhrfwvwfqmfzbpbnlodrbwbvryiiv", "lzdvpvlzvcqligrguqxjdjkhxwcnojaokyokgnyqicyewsrmlk", "htavrhfateusyvuqczxoffswzcntaftilhnrcztvbzlxlifzjy", "odhhgxqxrmdnezxlwwfjauwwjompjeiupothxwnkrmnhdnwvdq", "cetwvmdbbcirlwtyrqfmeujzmjwmjvvsyqtwaafwzttnbhttct", "xfhditeamnowqzcfcjvapslnktyzydscooyzfujozkcdyijlub"};
    int len = 2233;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "atcaorrpzonsqzoghccduoxtxvwsighuhjzxbgwbqarpgimawnamlcheijeuaayzjdcbxhrdhgrkeefcfetchtwgfkszshbxhcxfhditeamnowqzcfcjvapslnktyzydscooyzfujozkcdyijlubnnxsxuzgbwijngsajdqtbtxkytoriofkaqcdcpgyjirlnsikodhhgxqxrmdnezxlwwfjauwwjompjeiupothxwnkrmnhdnwvdqbyjqdvzjcsnhgepcwrovalgnkjguufjxkuksvhcjcjwcazummqfcoeerjucoexpkdozcqclcxdoijzhgobzjzijnwapzfcbqbrdfpnrmajjfxlwrelduaizmndtsvrsxmfginfrfrhkmsdmtvcehspsqutmpgsofyrtyvjhkjeqehotuixhkcwiukemdinclvrcimaeiovqcrrfcmjnejuukxnwcympottrxmwirhsolkgwnhnargptshftxludyytuuflekhwwjrnaxhegoyrnenkxuwhwhvnczislocothlypdnvunpobteqrhrfwvwfqmfzbpbnlodrbwbvryiivgmuulbtnoyrnimvrrxrblrmdxpnukfwcbanfjrslggzbnygoodhhgxqxrmdnezxlwwfjauwwjompjeiupothxwnkrmnhdnwvdqbyjqdvzjcsnhgepcwrovalgnkjguufjxkuksvhcjcjwcazummqfcoeerjucoexpkdozcqclcxdoijzhgobzjzijnwapzfcbqbrdfpnrmajjfxlwrelduaizmndtsvrsxmfginfrfrhkmsdmtvcehspsqutmpgsofyrtyvjhkjeqehotuixhkcwiukemdinclvrcimaeiovqcrrfcmjnejuukxnwcympottrxmwirhsolkgwnhnargptshftxludyytuuflekhwwjrnaxhegoyrnenkxuwhwhvnczislocothlypdnvunpobteqrhrfwvwfqmfzbpbnlodrbwbvryiivgmuulbtnoyrnimvrrxrblrmdxpnukfwcbanfjrslggzbnygoodhhgxqxrmdnezxlwwfjauwwjompjeiupothxwnkrmnhdnwvdqbyjqdvzjcsnhgepcwrovalgnkjguufjxkuksvhcjcjwcazummqfcoeerjucoexpkdozcqclcxdoijzhgobzjzijnwapzfcbqbrdfpnrmajjfxlwrelduaizmndtsvrsxmfginfrfrhkmsdmtvcehspsqutmpgsofyrtyvjhkjeqehotuixhkcwiukemdinclvrcimaeiovqcrrfcmjnejuukxnwcympottrxmwirhsolkgwnhnargptshftxludyytuuflekhwwjrnaxhegoyrnenkxuwhwhvnczislocothlypdnvunpobteqrhrfwvwfqmfzbpbnlodrbwbvryiivgmuulbtnoyrnimvrrxrblrmdxpnukfwcbanfjrslggzbnygoodhhgxqxrmdnezxlwwfjauwwjompjeiupothxwnkrmnhdnwvdqbyjqdvzjcsnhgepcwrovalgnkjguufjxkuksvhcjcjwcazummqfcoeerjucoexpkdozcqclcxdoijzhgobzjzijnwapzfcbqbrdfpnrmajjfxlwrelduaizmndtsvrsxmfginfrfrhkmsdmtvcehspsqutmpgsofyrtyvjhkjeqehotuixhkcwiukemdinclvrcimaeiovqcrrfcmjnejuukxnwcympottrxmwirhsolkgwnhnargptshftxludyytuuflekhwwjrnaxhegoyrnenkxuwhwhvnczislocothlypdnvunpobteqrhrfwvwfqmfzbpbnlodrbwbvryiivbwbqoxsuvsfhciolsyumlbznxzmaysdwthnqosytztzjtnmlplqxqrfkzkpfwddfzajraturwouwxhndcsnlarfldatitvdauwgynpvbakuebabbyfibznbdzlgkrtqtscdxxidfletlebesgmjqvjranvjonwzzmstidhydupbztsaovvhvudkfnxfjndebagzfdyxikaalouuywovwitmeqtyahipjtdafgxskhhoizllrflcjzdzneidljdjwniqxihnrkpiqwrpiuyrksvitooqgfzlqyubsbcetwvmdbbcirlwtyrqfmeujzmjwmjvvsyqtwaafwzttnbhttct";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> dict = {"yqovohkqcsjktdewmigahzxkzwnafnnqajiewkqzmqefkiadbw", "asobrfqvfzbmqnuxblzhbtzqdoirblrqicquupyrzkllmbbipl", "xrgznclvklfsgcttmsucdzjyqlgymuvmglsbqyqbbmeboiiygv", "hekrniaymmocqmkdpdytgfhqylwqgheagnhrzsqklockhxokkz", "igbdhumqkdxuvywdvsomkleleprazvqrygnckfixdiuhuwdbyk", "bgsyocnfidecjwyyhoisvfknfpvmzphugkhejlumfegonwxuln", "qesairvdibbtwlrwzfkajcjmmwwqooqjupnivzsltazmtglhmx", "mdmyrtgrxvoxxlagnfiaxmqbdbbykvkrblghjcfysbynmtmfca", "xbiiccvvxwezqhnwqpfpicfeqzdusxahusobfhfsczfinqlpjo", "ugmexhhecwvcfmfbkrmwxpenbgrpwovlfnmpizcjcddtfoylvg", "rteiwjwhadlamwducrhvupecxsedvbxjbfjkuopnfrscmbbsid", "wdngwipnqpaaodjczeeiscckiwdqmbmoavuwpjgzohpmoajoii", "dmksngwdxwvhfzmkpsdpgbdimzompbsrevvfpvrvyxqajgywgp", "klbdgpzdjzzruylpcugzqmeapglqsortvwxovnaotqdojuuunc", "tpxnxxigrvstpzqcglnhiougldrrfuzqtlmgjxnozwlosugnaj", "ptqjaunosoredprpqqsvxumlznbvxdumkqtbadgosbptdxypdt", "laqcevjaonborgxvnqgszmeatfdfozulcmrkqsxrimbqmguwde", "nwnvcvvswzpocayhzdzbxzmsjzzqoegiyaukvbjgqgyiprrpkr", "zbieiygyofokzlfwwalsqdzqujtkqxveharrwobctircseyrbs", "ozdeulyyknecmnylvyhcvbovhudxfxbnrmofosennyqzpqasmf", "cicezdwwlxgzhagjagotgtidxysovmfjnnhvwruszzkwxwonqq", "vyutqzkxarllpeosqixgulvvhncswcqyxcadvloudermjsrtlb", "esyfdmzrcscfoqwucxwgofhpphvyceixwcjimaegpibwxhtnoo", "smsnvtifnsstptkcbiodamqrablseokexiphrenwksjraufvuy", "fqadpslviowtaudncwywimywkjijiowumpkszwoeyyensfnunu", "jepdrejxgiyqsshxvtoyhykprwpnvmmnmoqcgyasosuyzmttim"};
    int len = 2035;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> dict = {"yontbvyaontljwmiwekaozxnxerdvqheypgrxlwnajyswlnrxi", "bcogskzfmyggxjnkasqbuxniwtboxqaxtxdedejvfyoiezfdkd", "aghdlvfrqlcdekjymhtswezrxskxtwazciurqaqbmqrwegrgxk", "zhyvsyacwsqroqqtclyiudkzmzcbnmldopvyxjdicphpboowaq", "owreniwndeiycrzxonqhmxkfpjeblfaivrmfqtyxtsqwosncvu", "gpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztne", "hswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehg", "eemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffank", "xuvyukysjcpovkqazvazembudfazbbctqexmtezndmohnkmulf", "lwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjp", "fozslonydcrlrddgfldjofozvkixvnoimajolodrnmjnmwunsw", "igtpgfrejkutpmsnmfspuzxahcwotrbqgvykeqbimxacexxjws", "sywsdspepsbizpvmjanypmjskerfewbcgynbvvgyhszbtzamvo", "wbysykabjyfxrflkatwvwgzhipuvwahfijyjymogwfifeczzmz", "emwqfqranwqoocnqetteylucaqwxvbkfvfmnulvmqwqpnbopvn", "kppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxul", "dpdlimfavooxtgumsofqkaeinqmsabhvopfqldfixajzincbua", "vpjdgaczkenopahtbhufljmdgdacitlrbujjjhjcyyyvtzxqxb", "povmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswh", "uqvqzbdbldgxeqpdtewmdahpekswudjfbobjoavgnydcymqqkt", "qxljlrcskcnfrhgmmfiacoacprjhphswdghtpqfgqkackbymvy", "nuahrhojhdwotyplrugoreekfmhlzauylxxyhrpqcrkntofksm", "rpfgwgafolnxfdqlakibpcprjqtikliddyujvfwyuotwphqywj", "mlqqfbjrogwhhmlaeasrzinrmwgwetsybzweeybzkxpunbtpcc", "tnqltmwdymtqedsunckayefhdywnsxyfouyvyhruhqkkyzvkwv", "jqoazyykifhwwkywnehzrlkxaajakqfyzjdgdbqdaeydfddjvx"};
    int len = 1558;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aghdlvfrqlcdekjymhtswezrxskxtwazciurqaqbmqrwegrgxkppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxulwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjpovmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswhswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehgpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztneemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffankppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxulwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjpovmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswhswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehgpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztneemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffankppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxulwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjpovmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswhswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehgpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztneemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffankppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxulwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjpovmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswhswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehgpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztneemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffankppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxulwhsudrqexznhanzswffutrjmpxboctwdipgkbkyjmqsfmizjpovmkotwasyynycsozwxypalvurpdbusvdzobqqdptzhfkhswhswqrhhwbluevedptzscastokhlnaatxlvahscrtuvnisixehgpcobdsqshnpbzzkavrbsznmmfxvsbzlcrjtblgktbsrvcztneemotenhniwflcxxrglgaissdtymcmdrvissmdrdgdlarffankppleuoqqqmdgzhxjlskexjjfiesyctyrkcfcazxggvactsxul";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> dict = {"jcwrqcopvakwgriejsdgcowafppyyieipybdgeaqrjtlfnbvju", "akusawwydswegnkaqsjkowiptxtzuxujqgjxjtbjyysynxvodh", "laoasbysizebxlmzpboayxcapaviteqnglqldubfnqqdsoqogs", "vslpnckmdeuiqylpqpcdjjxqbcwpmlyabszpthspwgjpkamfbr", "zhehseqosukuakmxjatpgrzwctrvehtsfgykcabcyxotddzlxi", "pcrddckdmxtwnupcmbnsxmxlmajhmeivzcsnwzosaogzdffxtn", "iafvmxevbesfpitaxpimbzkjhqwvkqdyfpgvnnvkmyrborsmwq", "rqxtaernspvocoxfolhhgekkupfmubqdqjhxcnknxrzhqcaank", "fvigyqtjobiumulwcooqrzhtivafwijixqntokewuvenunpwgy", "juxkdymcgukoacnzmjfljqtcxbunfkmyzwsxdfrttkjwfgwmcc", "tpfuagxkyckhbzxpvktgsgwaqenathyafcqjuqnzzkatqorucp", "ulgvurflkdzysqbnddwlijzcujsbqxmfphlcimanqwortpfswg", "klflkhrgakturlviwgdgsenzzolebkpsyzdvduutxibqommnba", "ocdjvyrjakuaflxiypanvitpvveyqmvlldvvcpmpmsorocaodl", "dpflxyqsllhokkvktzzmdkfeqexgvwszybhwytfailozvqitwb", "qrlikcfiwtghrftzpybxkbcgkiwcegikefiyxtlikvlthcfknm", "bvckkxanjehgxdvkvcaqcrnnlvpbjamyxbvemtvahpilwtvunz", "xcaabkljfwtiywjetnwgmrpxyxefrwqigpmprwhcppztziukfe", "mpdfqmwmlmrutgxcszsxvpupbozealrrrcdevhcxcnghtcsmht", "erobkrclgpustystlqhjkzttjhvjvotvujvorztihbdkjxoruv", "nfjipojzefcnjkuutgvitooyqqqzhqzukwdajclrloneqrpgyx", "hdmrmazuebwcyyuwnfvczueuwhtobuhpaavpiwpftxakpjpsqc", "gbhdbzhiytfodmpctxaefitetlsjgmenwmhknhwyejyltxannw", "ciuvsfmkynunhyudwxeqkyzeaaqalvjuczqfemmnndqjdruuwf", "wwoqgvbhngrxmxknmqmqexsrbahgccvswtukdmcvgpilalzbgd", "yffkpxjlrxhzwnudtujjddfeyetddsvphmwfhtixiyleteuaoo"};
    int len = 1676;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> dict = {"hsmtjpxolrmotlpaybxgkuhratibryoeorfwazexgytgtsaill", "legrqngsckptqdbjiancqllvekjphxcjiqpwqozbrxdsbehfdb", "cchihgukhuvqlypkqyqbknzyvnulwctkciohnmtwbxuvdrzvmr", "uhzmibdsygmspmjakmcbwmqfnuszvyzmfysydzfrokuwgqibzp", "zmnpzwaqmrtrvuusqbqrnjelruspcldetchqrbfysvfufidyff", "gxcbqkuldpkhuxoqoraoggoeaeabkaeunmbrqlhknkyenrslva", "bgislkkrxnxqdjbtmktxnohzaecalykakexuoksqseuirisydt", "nuepnithbcbsghxlaomwjjyilpqbugrfehftvwlicpzvvsvegy", "fycbrtmwkilobxxbstkmtzndvoiqfiszpdelaghpjkbmkofmnj", "qahwvcdbpzsokuiywnhhvqxdmvpmeeuvbqxloiryrwmjqpqbmv", "mjfaqbcjotvazohlwqkgtzkjmymekxjpcfvhtotncozvkyldtx", "rdnalowugvwwfrhujqupavutqaimmbnjncetbdczfxipzxregn", "yptpiwthprcdkmtrdbmiiydvswypegomuqkgvgpxuaejxhnxoe", "jvfgahvlyfqjdocxkdyfcuugwwsizvusojaxvwrjboitmehuyc", "hiiqfvnnfxpzmggjuymhfpyuwnyqrurxqtcpsppcovsfeacogd", "aehnouobcwcfeubzoxxkbbmyisysaeaejumoxvgahwlzymshui", "dlawpaipwprjlpbaruucqwpgynpugjxarxoahxdxitothvkpcz", "sqplyjefrqaenzrqtrbxqrdkhhcmjzbtuxivsujjfxrpvsbzdg", "isbeqqfbcrzlglswbhzmgcaqmksaktdadnwuedlrctfmbjtnil", "wbfpqvmontykzilrgyelbdpaygdzgyxoadphrjdtmdhswqxdrk", "efjdgvymgawxnjfdobbrbopwhgaozrmkbeerrjwofjccivsevm", "xizubfmxdfbokkgkoiuhwcindltimwnxcjhbhfkeuxzjbacufq", "oaqpuhxvqwcymmemapoqsuivhpvslndmdxabnfbhjpigkgjmsh", "pqpgsywoqqcgxwhrczlswthedlzsvtphzzyjsmasiezuuunbvw", "vosypzzecslgcweetvhlaweoakxqbspubiiifrmjwjlwdzvlns", "tqeisjjexdymnpubpqqwsdtiuulpcsugrrxhotkgapvtqusofu"};
    int len = 561;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cchihgukhuvqlypkqyqbknzyvnulwctkciohnmtwbxuvdrzvmrdnalowugvwwfrhujqupavutqaimmbnjncetbdczfxipzxregnuepnithbcbsghxlaomwjjyilpqbugrfehftvwlicpzvvsvegyptpiwthprcdkmtrdbmiiydvswypegomuqkgvgpxuaejxhnxoefjdgvymgawxnjfdobbrbopwhgaozrmkbeerrjwofjccivsevmjfaqbcjotvazohlwqkgtzkjmymekxjpcfvhtotncozvkyldtxizubfmxdfbokkgkoiuhwcindltimwnxcjhbhfkeuxzjbacufqahwvcdbpzsokuiywnhhvqxdmvpmeeuvbqxloiryrwmjqpqbmvosypzzecslgcweetvhlaweoakxqbspubiiifrmjwjlwdzvlnsqplyjefrqaenzrqtrbxqrdkhhcmjzbtuxivsujjfxrpvsbzdgxcbqkuldpkhuxoqoraoggoeaeabkaeunmbrqlhknkyenrslvaehnouobcwcfeubzoxxkbbmyisysaeaejumoxvgahwlzymshui";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> dict = {"hmoncncuvygshyryxsczlpazalwvfpxvivrcegagdfszmnrcdf", "ctpfdewhppnqpilpxqasvjbgplvsykghiqoqtqswwilnaralwy", "spbhcukgqyozpqgythuusymvtvglglvfzghtdkpjyypsernbbb", "yhrjxbyeslhrqjrnaqjzbsvcyxovgiaehoztzhhlcbwyaeortk", "mzbrpphilppzircdskdobshnnspckadohpywbacmtxlvrcbfrw", "lvlzipezbrfwchuxlswcrwseufyqfwjmvauhujctlmjqoulbgc", "fncrayggsvawjaeekcmdgxnoxtvqybebgaepuceqnshytuyaan", "nsudqudolgvryjharizswfgcuvrccnkoujkqsjirxqxqrlqvnx", "vlljodjtfecariljgzskmrucdhazogeajpnxscooqkgiqsmkzu", "ppmmcmpvjxytjdymtfphdxxcdflfkkiqnpmzsnxysizzlmohpg", "fxcgjibtjpdlmxjwxkwewrpbsejniwrdommpwuwbcjyjpjbggf", "tdsjongouybttwwjklzafnbcxzbfvqzblazdgyzzvgtclobgzi", "dggnhypsiclyflalgdhoyvnymstgktososjjunnyhnvzfloltv", "ibgmudrzzmsbywoxqmrjpgpkkmrlephiszpofofnkcjvozyrzl", "bfgenpistwpisxdfftkghfcgawemewqyymkuwuvwahqomhmgpq", "xrtjkduvekxldmgyafigyutmusxlkccukicpenhxrygzhnaalj", "afjiwzckadkadauafzebrnhepxzyihuupctremiulofiryzyqp", "qrrfqdarktojhozmigwfvsoawwjupsmdjfctwqklvavvlizphd", "kzaazcghvuarbiggscyxpyhzzwakkgsleeeikyiauqsyhztejr", "grqpennpmxysztbdxcukpejsqgswawekzwjxvsfxyqqgycmhae", "wuhsdpfwrotemqwzilpqccaktqqmcrftaaksejttyuyuzcjygo", "jjwnhihtcwrmisitxgrjkgminquftzirfwryiqavdjozjnjxba", "zjciehemgavhxqujaihweoqfsllpcksuiukzjnjnnbuhekvdas", "rzsttpjycxpmgkprwilysbvcgmxbqraavggtuozlwflrpzeikm", "omxhijbvhomkendbnvdibcrccsniuqszlaxxnkzxhhjvnwwukh", "urghhwuswhaaezueydciucsdhievyjsbmvdzvqimuivwaltxvt"};
    int len = 1096;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bfgenpistwpisxdfftkghfcgawemewqyymkuwuvwahqomhmgpqrrfqdarktojhozmigwfvsoawwjupsmdjfctwqklvavvlizphdggnhypsiclyflalgdhoyvnymstgktososjjunnyhnvzfloltvlljodjtfecariljgzskmrucdhazogeajpnxscooqkgiqsmkzurghhwuswhaaezueydciucsdhievyjsbmvdzvqimuivwaltxvtdsjongouybttwwjklzafnbcxzbfvqzblazdgyzzvgtclobgzibgmudrzzmsbywoxqmrjpgpkkmrlephiszpofofnkcjvozyrzlvlzipezbrfwchuxlswcrwseufyqfwjmvauhujctlmjqoulbgctpfdewhppnqpilpxqasvjbgplvsykghiqoqtqswwilnaralwyhrjxbyeslhrqjrnaqjzbsvcyxovgiaehoztzhhlcbwyaeortkzaazcghvuarbiggscyxpyhzzwakkgsleeeikyiauqsyhztejrzsttpjycxpmgkprwilysbvcgmxbqraavggtuozlwflrpzeikmzbrpphilppzircdskdobshnnspckadohpywbacmtxlvrcbfrwuhsdpfwrotemqwzilpqccaktqqmcrftaaksejttyuyuzcjygomxhijbvhomkendbnvdibcrccsniuqszlaxxnkzxhhjvnwwukhmoncncuvygshyryxsczlpazalwvfpxvivrcegagdfszmnrcdfncrayggsvawjaeekcmdgxnoxtvqybebgaepuceqnshytuyaansudqudolgvryjharizswfgcuvrccnkoujkqsjirxqxqrlqvnxrtjkduvekxldmgyafigyutmusxlkccukicpenhxrygzhnaaljjwnhihtcwrmisitxgrjkgminquftzirfwryiqavdjozjnjxbafjiwzckadkadauafzebrnhepxzyihuupctremiulofiryzyqppmmcmpvjxytjdymtfphdxxcdflfkkiqnpmzsnxysizzlmohpgrqpennpmxysztbdxcukpejsqgswawekzwjxvsfxyqqgycmhae";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> dict = {"crkoqqwynlsqqtrrbuckouibjqzzzfbmyksxevcrogxcjyiwdy", "ekbiodjstojgfnqnneljarhqdzlmuczsuwjrsurwoajiultmxt", "qosjzlpmchnhdiwbiqccmelgyyqhvccfxyirfcysjgsnobxjgf", "vmmsexbbwxnjwweswnpwnqcqjfdbuketoujdojipvjkkqgynhq", "gweyqurhoisnwbadjzjcfykvzkjybvkverbelknjrylwtrsyxm", "fqyljytlgbdrtaodemfnzwgitcmwvnhpyiojygyklwyjiinbix", "dwmylruwxaacarxkpwzqgavujuquvwdhedvxetokybczaajjiv", "bildchrkqdyzwopmgmfyyqwozhioniebdcipwkwjogbbdvtwll", "mtlqlqiaqlhcobcpwnzgfozvmkiunpqbkaakaxjrutbplmproz", "jeyoqhnhjybsuyvkrmvqzltnkhntrzajzlmbgnpdujddqzdldb", "aunhnfzvmgigokbeoxbtujdioldxgpevdkqtlzcqhxoemsfsmo", "kkokvdiayfmyjlzwaeomievqdhdttwswjrznsuqcenencelkkd", "uhtkhfguzjoopmeshirxiinxbmbpgjqhtcvmqaokbrmvfkjbyc", "lzysnyyqmdhbkhzaxfppywwytbcalzbspwmmxfahftmpsnsabp", "zmiyroubmjcgduqpnucqyuolrsauzaimlkoioamofifzarbmqk", "nkrbapqlajhrogzbdypvvwcxwlhlegsjgsoxahllaeuphbglre", "rvfsddbijsjiauyswwbqhucguabbegfoxrqrjcrqxdbhpossmn", "iovkdksrpipgasqhvmrcgpgzuihsleyynsdhspqgkbpqgipmbu", "hnqsilzkfeahchmibqexawhjpsugivpmgkntlebowzqjaxzyls", "paafzkcehizyfkearhcdknacwperxnhxmyotanleruquljyefi", "wlfjxsugrykpezmnbwrfjnnufxdgxucqrortowvfgxsptcdrqa", "ysfymajrbtrbhmyvdxdjfrnallznccdjetfefvapqmeycawcqw", "scnpoftyjvnkamgzqpgrqlapfbktmdejspuswhrusbccejpphg", "xolclhxlvwlmqthyjdtqgbsfvhkziwgmtchbbkfhbxzqdricpj", "ykuiyfonsmqmbcnmwvlzryvqcazmrybbubzzgcydnrczrzzhlt", "tlmpcmslbriugemudpequpgtgcuaisyaywgxorxvhybqkkctlh"};
    int len = 1082;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bildchrkqdyzwopmgmfyyqwozhioniebdcipwkwjogbbdvtwllzysnyyqmdhbkhzaxfppywwytbcalzbspwmmxfahftmpsnsabpaafzkcehizyfkearhcdknacwperxnhxmyotanleruquljyefiovkdksrpipgasqhvmrcgpgzuihsleyynsdhspqgkbpqgipmbuhtkhfguzjoopmeshirxiinxbmbpgjqhtcvmqaokbrmvfkjbycrkoqqwynlsqqtrrbuckouibjqzzzfbmyksxevcrogxcjyiwdykuiyfonsmqmbcnmwvlzryvqcazmrybbubzzgcydnrczrzzhltlmpcmslbriugemudpequpgtgcuaisyaywgxorxvhybqkkctlhnqsilzkfeahchmibqexawhjpsugivpmgkntlebowzqjaxzylscnpoftyjvnkamgzqpgrqlapfbktmdejspuswhrusbccejpphgweyqurhoisnwbadjzjcfykvzkjybvkverbelknjrylwtrsyxmtlqlqiaqlhcobcpwnzgfozvmkiunpqbkaakaxjrutbplmprozmiyroubmjcgduqpnucqyuolrsauzaimlkoioamofifzarbmqkkokvdiayfmyjlzwaeomievqdhdttwswjrznsuqcenencelkkdwmylruwxaacarxkpwzqgavujuquvwdhedvxetokybczaajjivmmsexbbwxnjwweswnpwnqcqjfdbuketoujdojipvjkkqgynhqosjzlpmchnhdiwbiqccmelgyyqhvccfxyirfcysjgsnobxjgfqyljytlgbdrtaodemfnzwgitcmwvnhpyiojygyklwyjiinbixolclhxlvwlmqthyjdtqgbsfvhkziwgmtchbbkfhbxzqdricpjeyoqhnhjybsuyvkrmvqzltnkhntrzajzlmbgnpdujddqzdldbildchrkqdyzwopmgmfyyqwozhioniebdcipwkwjogbbdvtwllzysnyyqmdhbkhzaxfppywwytbcalzbspwmmxfahftmpsnsabpaafzkcehizyfkearhcdknacwperxnhxmyotanleruquljyefi";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> dict = {"tvnzddyealjrgvfifqnwtcpqzotlqravcgbtdaeugycujrsuqo", "bnricxgkqwsgrrspdsittlexxterxvvwsraffcseldabiburvl", "qucaekmjaahwilzmwgnmsnipnzvfnwllypowweuumkagmfuidb", "ugowojzfffgqkhmzmsetevjaziovznmjkzemjghoryzmffyrwj", "cqumwnwbelimaeedsvqaypkjmlbzqxhazfnjxgzvrikjpsxvlu", "gmemfgekbkdtptokhlwuvzucixgzqynmfwriszhzkdnwpidxjw", "tpjvqobuokkxqnahldpvfuvnsewwrakoovfozjapgcjrixlzsn", "ysrwugocjpcqmevixcrgtgvrxnfqbvdjurlaemuexhxnionfnk", "fnuvleimbdirpieehmktzaqyeqmyemrqtsguwwpygvggwyygpg", "kpgcghuctkbebmmbdnpqnxedxnywnjsnjuxhamooicnzcncllf", "eylqsbszbybaxbephqtmcvcndzbatckvjrbnagtgnqhjcyciot", "wlkbbvitgpaarctsanothvrdunqikzslfaqwvtmfzkuoskcifr", "pnqewhfewkpouvnsliqfdulukeolnxxgggvcustswyonugxvtz", "svomvixborcrxzwzpproiitrzkgrofvdmnauipqwjrtzscijgc", "oqlrthxqprfeiqwngqboaavngbzeruoavazjkaofficyrorkwx", "mnsdizrmdiedunxetmumrcislxtgoyxtmvocmrbmnpxknnoain", "autiuxybwcwefeviwyodbpoyhxzentalrvqnidpefyuvdeipfv", "ikiioaxvizveqphojuyogteiqpynzvrcxdarwrmpjkigiqhgdh", "rxkdkdwzsmmucniixujjhpovbssxxvblmhhnynurploaxigfyq", "lcdoetptbtujdaufmvrissijcirjgtrpeirwxqaydhvuogeike", "jvpdgamfwclpshnaqqlwergrsduabstzcnxscezmtrhbqgvpbi", "nnihgcmdnsdrwsdhgcugtbrbxjtaoblxiiwomuakwvdrqgqqqd", "zfllagmqcggxviryvsvrskmwxcweeqigmnkmwjjvvmndbebhey", "vukvjhtbynijffzwqgqyntlnzdoboluwrbmnrctaupzawhaarp", "defpfknylqibpaucvpwkjckibimzjensbipqydgndslhzzyqea", "hjtusgvfyjcmtzyqfzqbipbtplbpccfpijbkwufecdjifzkgbm"};
    int len = 2120;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "autiuxybwcwefeviwyodbpoyhxzentalrvqnidpefyuvdeipfvukvjhtbynijffzwqgqyntlnzdoboluwrbmnrctaupzawhaarpnqewhfewkpouvnsliqfdulukeolnxxgggvcustswyonugxvtzfllagmqcggxviryvsvrskmwxcweeqigmnkmwjjvvmndbebheysrwugocjpcqmevixcrgtgvrxnfqbvdjurlaemuexhxnionfnkpgcghuctkbebmmbdnpqnxedxnywnjsnjuxhamooicnzcncllfnuvleimbdirpieehmktzaqyeqmyemrqtsguwwpygvggwyygpgmemfgekbkdtptokhlwuvzucixgzqynmfwriszhzkdnwpidxjwlkbbvitgpaarctsanothvrdunqikzslfaqwvtmfzkuoskcifrxkdkdwzsmmucniixujjhpovbssxxvblmhhnynurploaxigfyqucaekmjaahwilzmwgnmsnipnzvfnwllypowweuumkagmfuidbnricxgkqwsgrrspdsittlexxterxvvwsraffcseldabiburvlcdoetptbtujdaufmvrissijcirjgtrpeirwxqaydhvuogeikeylqsbszbybaxbephqtmcvcndzbatckvjrbnagtgnqhjcyciotpjvqobuokkxqnahldpvfuvnsewwrakoovfozjapgcjrixlzsnnihgcmdnsdrwsdhgcugtbrbxjtaoblxiiwomuakwvdrqgqqqdefpfknylqibpaucvpwkjckibimzjensbipqydgndslhzzyqeautiuxybwcwefeviwyodbpoyhxzentalrvqnidpefyuvdeipfvukvjhtbynijffzwqgqyntlnzdoboluwrbmnrctaupzawhaarpnqewhfewkpouvnsliqfdulukeolnxxgggvcustswyonugxvtzfllagmqcggxviryvsvrskmwxcweeqigmnkmwjjvvmndbebheysrwugocjpcqmevixcrgtgvrxnfqbvdjurlaemuexhxnionfnkpgcghuctkbebmmbdnpqnxedxnywnjsnjuxhamooicnzcncllfnuvleimbdirpieehmktzaqyeqmyemrqtsguwwpygvggwyygpgmemfgekbkdtptokhlwuvzucixgzqynmfwriszhzkdnwpidxjwlkbbvitgpaarctsanothvrdunqikzslfaqwvtmfzkuoskcifrxkdkdwzsmmucniixujjhpovbssxxvblmhhnynurploaxigfyqucaekmjaahwilzmwgnmsnipnzvfnwllypowweuumkagmfuidbnricxgkqwsgrrspdsittlexxterxvvwsraffcseldabiburvlcdoetptbtujdaufmvrissijcirjgtrpeirwxqaydhvuogeikeylqsbszbybaxbephqtmcvcndzbatckvjrbnagtgnqhjcyciotpjvqobuokkxqnahldpvfuvnsewwrakoovfozjapgcjrixlzsnnihgcmdnsdrwsdhgcugtbrbxjtaoblxiiwomuakwvdrqgqqqdefpfknylqibpaucvpwkjckibimzjensbipqydgndslhzzyqeautiuxybwcwefeviwyodbpoyhxzentalrvqnidpefyuvdeipfvukvjhtbynijffzwqgqyntlnzdoboluwrbmnrctaupzawhaarpnqewhfewkpouvnsliqfdulukeolnxxgggvcustswyonugxvtzfllagmqcggxviryvsvrskmwxcweeqigmnkmwjjvvmndbebheysrwugocjpcqmevixcrgtgvrxnfqbvdjurlaemuexhxnionfnkpgcghuctkbebmmbdnpqnxedxnywnjsnjuxhamooicnzcncllfnuvleimbdirpieehmktzaqyeqmyemrqtsguwwpygvggwyygpgmemfgekbkdtptokhlwuvzucixgzqynmfwriszhzkdnwpidxjwlkbbvitgpaarctsanothvrdunqikzslfaqwvtmfzkuoskcifrxkdkdwzsmmucniixujjhpovbssxxvblmhhnynurploaxigfyq";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> dict = {"xcbzbtshzpmqzhzhcjqcbjpfcogatvogqzmscegmsylylpwwou", "aejccbhrqfqohinldomdpygtrweelcazktehxfipurzsnvgoet", "sztspvnqznwxdlubbgmkhpzjzfibjwhdbbuviutaejfhtcxqzg", "kboqyaugwvnzuryjrqkiwghimfjlblzggwwqbbbujarvlvhsnf", "pnitblmbeoszrmvjkliopqutppmvztrftsqkbpwcwngqjkbxoq", "otyiuyynboairyxuohypscnodcurgkpwccojjkfeoscjaodaev", "btjbypsrtawhrvrlpwvknyuuqzovucknqwzioahqyeiovwpdsy", "voderngauipjsbngooytjgulxcuidmtrxqiobbtpycnpdiltxn", "wcekwjjzrpkfmqfzkgvkfnuqathlbuuephoyzcublzprtlopna", "lrjmdsyjtojxfmqhswesjlqegshropwvcqufepdiclppiizhns", "tqkfyzitmskdmydzdkduuirispnahfmdnbsyaztoxruaijoryr", "hxvjwsmgatqsbyynefjatubeiwzbumnfqyqhjzcmcyghnkvbgx", "rekxytfglawqkzgwsbadvraymjkwqmelvpdmrdvvxydqrpqhnj", "isyhuiqehasctjmjnbkncyjnxoqiascgyuavzuxfcuwlrryjnb", "mantriadnsjkqobblgmjlsuhhqtwpjkaxtdrqtsecddgozyavc", "ckvybcalwcxcszaamgcdefvpehtfizikfwpyqtruwxyzuhtctz", "fssgjzyvhkzfgwubsejpnjnewovwbmzlkgturcbcqdhcrgkbvo", "jaokoltncazwpkfhinypdcxbdisrcqzayprqmagsvsoynvznjk", "nosepaudkleizyufplavcouyvszyadcvnkhynpqwwshmylfiem", "qzxeacjfickluvaascwxyvvoqinemnjwfftfhoygegsrbnhnfi", "zemxlywugonfrabduumphhaetwwjydivcuntzvvkxctfvyniyd", "yyuxoyvpiinjwwbgqeomietdhnvwrkupzncakmxdwpktqmtvkl", "qpicwkneuhwexcyzoyrzswyfontjefzcvsotusxhzqtptubsrr", "endvnznelwppfbxtqzgocyrrurxktifcsdtvromgrhjrmucddp", "gymzdlkluoypxkqfkguigncfmuiyaqlbakvrbzirebhfhljnsh", "uzrtpszrnptxqevfcxhwjiftcqwmtzdbqozoepvrlolggrcrww"};
    int len = 1629;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> dict = {"vtebcaiqyxythunoegvaybiohmexuxgpabhjsbesonaiwxdetm", "pzekfzqngykwrgnndocrovsxmufyhkqoiatealxvtjxkyhqdxf", "lzbfjjitivcouixfshwnrwhbyjpqjmrwyjguglyaqaeysyswgk", "bnjljqacjqodbpppbuxowhdfpgjbdxenhvsnoqghgxiearkdpn", "rpvmagyrvzakaupjiefyjfzgbrijacoisyhdpgtrunzypfiqra", "vadjklaxpnbkliqxyzagtizlpvcnwszlacgffydabnlsqhtqea", "ymonoofltuzevbavowcxquvyendmqmcanzqtulygoexilbnpsj", "sfemcmnsudtrdpnmrxcufuwhrordrxtggqkfhsrqjmjsglsqaq", "ubpdbcoqkopsuucrtryvmtsmczbkrkrvgpippodhkcoicgygxb", "kjiwlodxtmgfpepsadwzvsrnzikkvmzdgutrlozahmlmyxzako", "iyszqewcuflotlujjadlzlyziaihonlwjwnacptozxfjvkbvct", "atkluuqhairucpwwuhivavgspncntcnhsrfivyduyjczchqdqd", "jitvsliidbekarazxaffmknednjesgtlxsdfftkayccrbivadl", "ecsvgfmyclxrtjapnudvdqaqxkccmlhjqhvpfpppasqwgzzmkr", "gqqaipawrshikzoyknmxolgmlxxwdovedbtrtatzyemgstxkds", "tsqglcaurzkjifrvahnmodkmrcqrfszojhddbhqqtckttmhwgc", "hxdciwbtzcwttijhvkvedsbopvzypvkqnzikaciaasqwxpbube", "xseexbagswmudybzvabnxyoblryueaautgvrksudaiimfciaty", "quulqgscuscrjqkvzqgekvtlmdunhafhjxprrgyeklplmobhsx", "cyxoqhcmiypwotjewiylsiixuxaeekbdkxsphioujcoqftiqfh", "dxitygxpxuxnopmimyhmdbmegavcyyivddqbjxofaokbvpzmjp", "mqgfphzrhqptkzmabosamnrcbwmjwcndadhnvkmvtgaynevciz", "zqkxdchhfvvypfyutcjshbvalfscxmgvdvowolooykkqqytwkg", "waynygprsutktgekhjntgyvxwzsvzhoytkagikouerkcgczeeu", "oirwudbyjepjwmjvyaapreqhgreeogqzzvzfdhqflrzzbpkkdw", "nzjrcdyfztyzyyanacflkkcwbkmrsjdxtnpdlkrjealetbqooi"};
    int len = 2471;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> dict = {"cxyhwpylppjyaypvpjurochdznmvbwdecesrrkjfhgmaiqqqsm", "vwvldlmzscfyayoyedktkoezxautypdwotziwepkiwpmfwjfpc", "awqbmymzaasowftuwnwkjbocrqgqxiwfvplxwpxvrjwstnjrow", "gjlcxikojxzorpgjmvrtxpnadodscrxpoesrschtzirupulhkf", "wbdjdotxrlkplsbblcbqmeflshadcjjllmnuqhesojekpgwwoy", "ninlzeeeikmmymlawqqwdlvnonrbqzvmnxvntptciggvioundu", "lzqiubiwegxlxnctpppyjjjpyomfygxomsjykxfkisjnjwvnlt", "telpynjisfrqvvuumoxjcyapfweeqxjxdsrcmyrppggswvgsmh", "mgawljlebdgszzmtpuxnialiraknhsklijvlnddxirwesyhjaj", "hfugkjmtumertnyeozemkggabvrukpazxnmnstmnfesjakljga", "xdeavtnxctkhhchemmmnjjsytgwzqzxbeskletdtvstpcrublp", "sfsdinhakzuctpuyalpikchbtbxbbjltasmemxzjuvuewtynjv", "zgmatjpjfqvrcdmamfhbarhjjxcntuivmcmhumksljxgiesovc", "rpedsjbbaqujdiihoxdmcgemnymeuvbjnsoapxscgznsuaeaqo", "vsludpebpvffapzlatueufkvjcgtdwlsthsrtifemiyvtzxhol", "yuavatwfbieuowcnlsozminyssgfqqeeruewvoqscpbzylkecx", "ecrsbkdgfublllzwfjbfqfgzrgyvhfkoacdifyxxzuxhkuoryz", "jcrairnmnikchmvlrygkqjdgcpzysjxlawdbxuitfxonrrsolb", "ohdmeyrcngdlrntkmgzgvtdstyrzzawckhcpflmryqlqdownpg", "isdihlsxvbvnmdizxhaeolzdzexbceduevfuyzfptxozcpsyyq", "bumuhsrjvaenrfjexjbuxtexgwmkxpgliflibfvnpkdcnmejci", "kgzfevrztdxyfksochdjhnflmcmzphtdlaionbzqyqcawyosgr", "fapsaywituvfnebfcajybvakdalugbdwuwevuatljflbehsxle", "uusrhyfcosjzadtaouwpodfuwjkggfeayaeslmusoubwhuajrd", "dmcxyzdnurjfvuqrkaxudfwcazuqqanadlosqweobixzrkdyps", "plumenqpehzvhmmzlaghwivwbsvkxifmcmfjvqkgejtgdixywk"};
    int len = 594;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "awqbmymzaasowftuwnwkjbocrqgqxiwfvplxwpxvrjwstnjrowbdjdotxrlkplsbblcbqmeflshadcjjllmnuqhesojekpgwwoyuavatwfbieuowcnlsozminyssgfqqeeruewvoqscpbzylkecxdeavtnxctkhhchemmmnjjsytgwzqzxbeskletdtvstpcrublplumenqpehzvhmmzlaghwivwbsvkxifmcmfjvqkgejtgdixywkgzfevrztdxyfksochdjhnflmcmzphtdlaionbzqyqcawyosgrpedsjbbaqujdiihoxdmcgemnymeuvbjnsoapxscgznsuaeaqohdmeyrcngdlrntkmgzgvtdstyrzzawckhcpflmryqlqdownpgjlcxikojxzorpgjmvrtxpnadodscrxpoesrschtzirupulhkfapsaywituvfnebfcajybvakdalugbdwuwevuatljflbehsxlecrsbkdgfublllzwfjbfqfgzrgyvhfkoacdifyxxzuxhkuoryzgmatjpjfqvrcdmamfhbarhjjxcntuivmcmhumksljxgiesovcxyhwpylppjyaypvpjurochdznmvbwdecesrrkjfhgmaiqqqsm";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> dict = {"yzrwstraulfwnehraidgzqlmkeyxvzezrjowtvdrnpbbxzrrwt", "abiwfyloulmtfxkakgftwwjxltasfqusmgupdkvbmyftvqdbzz", "ljdipyddngivzwbynweiydrtafpzepfzjzufsvxrxnoxeihssi", "rvalzglwokufndggbplsnzoedddhxesprbokuipvlxbchnwzkn", "cvzegvfmswegpnaqgcqhtrhdafodpiquevkxwyxzgctrdxyzpd", "ilnafzxtctshtkndgwkncspljhhbmzuvogyiywgsxxpkzgmqzg", "njuebsddghfvxugiujvjtrbizwpgeapuuuezradnruthrzxttp", "wuwvnxwgmrnuukbvzpdelbknocishyfpernzursnevntmcilhu", "ssowekkygvanlyihstoughxeqpgptlyafdajlpsuccbrnhiqhi", "svanvsqljxmjhkzzdqfrmegbtsmxpeufztelaquubhlffvaoqe", "pmmtwzuqcalxxqjjyhtogkocwmungpoqbljbngcpdusnmljawf", "dkwyfthcuttbylcxbvvexrgpmwxixdbvstoqirsbhonbqblguq", "uvegfkjkuuivvjaojjmhdcoyognabqyjenwphrpwjpzwokusns", "txlhswrragshrbtzddpeerenkofukslzblsydzupltuihkdaim", "hbgnpihoekrnsgejpjtjanmjbalwggovbnhivadfyiybgpimbo", "jtuheisqeltdanxeosmfceggvimfgiwfdhoejrtymvcnlrqlph", "bqndppyebotnugoldcpsdqxjdjciszsuzydasvojzueurzdama", "qqhmkqsudeyygxlhgxbzcyrfmkcatpesyboiaavqjaaxsvapel", "ogaxutumnuklovujlhcrlevlzqbduscmekgmxrnlddcwagrhbw", "msffwqcndfjedqilsvicrbmxepkhwossuiinjleuwbkqongevx", "vnkiilvbwtxprimmdezfyjcwszmixrqvmmmobdztmuskauqicc", "gasqhkewemffcaismsfzzkkgejgyvawokphfppnmaaxzfilgab", "euqawvepeqgienoifeokkcufyntcpxvmgvkrcwyhmoqcnejevv", "frdxunrqheuixkpthblgycikcsxbpjwabfytpfyrnrmjoqsxuj", "kwabzwmkkvawdraiertpgvwxvuycqyhzcwipljlyjqirctnfby", "xilhrlkiloicxdthbyqyxutswpcxykgyvdsifrijblhxhblabr"};
    int len = 1200;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "kwabzwmkkvawdraiertpgvwxvuycqyhzcwipljlyjqirctnfbyzrwstraulfwnehraidgzqlmkeyxvzezrjowtvdrnpbbxzrrwtxlhswrragshrbtzddpeerenkofukslzblsydzupltuihkdaimsffwqcndfjedqilsvicrbmxepkhwossuiinjleuwbkqongevxilhrlkiloicxdthbyqyxutswpcxykgyvdsifrijblhxhblabrvalzglwokufndggbplsnzoedddhxesprbokuipvlxbchnwzknjuebsddghfvxugiujvjtrbizwpgeapuuuezradnruthrzxttpmmtwzuqcalxxqjjyhtogkocwmungpoqbljbngcpdusnmljawfrdxunrqheuixkpthblgycikcsxbpjwabfytpfyrnrmjoqsxujtuheisqeltdanxeosmfceggvimfgiwfdhoejrtymvcnlrqlphbgnpihoekrnsgejpjtjanmjbalwggovbnhivadfyiybgpimbogaxutumnuklovujlhcrlevlzqbduscmekgmxrnlddcwagrhbwuwvnxwgmrnuukbvzpdelbknocishyfpernzursnevntmcilhuvegfkjkuuivvjaojjmhdcoyognabqyjenwphrpwjpzwokusnsvanvsqljxmjhkzzdqfrmegbtsmxpeufztelaquubhlffvaoqeuqawvepeqgienoifeokkcufyntcpxvmgvkrcwyhmoqcnejevvnkiilvbwtxprimmdezfyjcwszmixrqvmmmobdztmuskauqiccvzegvfmswegpnaqgcqhtrhdafodpiquevkxwyxzgctrdxyzpdkwyfthcuttbylcxbvvexrgpmwxixdbvstoqirsbhonbqblguqqhmkqsudeyygxlhgxbzcyrfmkcatpesyboiaavqjaaxsvapeljdipyddngivzwbynweiydrtafpzepfzjzufsvxrxnoxeihssilnafzxtctshtkndgwkncspljhhbmzuvogyiywgsxxpkzgmqzgasqhkewemffcaismsfzzkkgejgyvawokphfppnmaaxzfilgabqndppyebotnugoldcpsdqxjdjciszsuzydasvojzueurzdamabiwfyloulmtfxkakgftwwjxltasfqusmgupdkvbmyftvqdbzz";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> dict = {"ujemegwltioipcfrmiexmzznrqrqojmasummvazmqqhnoyryly", "bkznrkwapflpiiovhkdirhtdkfxptxkovvrqxhovnhnahktvkx", "mksudohmxqbbwydyezonvnvimxwrlpjojgmqdxodoujjtycvls", "gpxgwlwpwevkvksajliznmnedkscsnnzwayzgyttxbrkrbnjuv", "updhkcjagmfheydqfpdtftkusbamrnyendtocxplbaaynguhss", "sicbbenwqghrtamyfsitaajnqwayokcmkjekwnfgfyjqyhlnnw", "jjgakjfupolejnqqtnsrksyeijsxntosqxdwcttiwfbpggqsxf", "yytqepvksmoogfwnwkomxmnsethxhwxiocjobwdlqxnbggenja", "rwljdifqvtcgwafshbdugggnckbisfczeiqrzdhjagukxisrlm", "thjmnlbdrokgbtvcjxinaxngvearjffnxmimvlffmyxcbrergu", "fvczilorkmyeyajtqrvqpdiosbqchhrzlskujaxmhrykjkbmxh", "zldfnifdrdiygloprmqvunnpmggdxupcxeknziodaftdegjfwk", "pdpwoshyzfssrqpmmrreteghalguexcyypjjayvmqqnmvoobre", "wdlsgdotcceripxcnujenrmzlpfquoyqwaibgqahxznucydziz", "qyxxwobtpkgcafkvzqsojypvvmhqhlkbdkglwtftuogffbvpgj", "xnizfzuxaymonvxbgcdahznhycyorsdftdzfloebfemdhpclht", "hgrvbwmwqnbpbehgsuiluylsukbaehizkocuedmokqlkqlnfai", "isyxffpdzpcvacrjlwxbjqfzidtlgwyhqzaneycqcsfxesmvjp", "lexlduqiucepnspnnkvqjyniwyddtcrycxevswkbxgplmhhllr", "czisqpztdejdvzbpxacwlofqwdmawnzfmgmvfxezrmmaqoggcq", "dasgrptuiggydrggjecialzuxgduskxmzmgsfalfifnfaxmaac", "nerrywkpelrxuhsjqvthfqnhjvtpsgbfpjcynqozcywjncmwul", "ekhiyvwptnbplmglwttgnmbtrgchedmwrhinypkvdknodmpfvn", "oqigxwzrfmdqcralqixpjbbjhalqpafyofohkukcltpwgdetzd", "vimmetibwxqkiflkaiyahluskhzugvmkwtacyamqylbemqeslo", "autzbwwkcjttqitcavltjaosfzxdmtzblijuqlwqatzwtxhfxg"};
    int len = 1261;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> dict = {"mveqrpvjgqslhtfvwxromvkzfgnklevgpowhskhbfcncntewzt", "knxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfa", "pkbwngfsibkupiematxnuhlkmwnbcyhiioxuntdzpamkyfdexz", "ldazoughbirbmmhbwjrtvgkwunfkdpatoaghsqkukstutxqkwi", "nljplzfdkpnhfeibplkzkjiwihdazanjhsgvlpmllnqwglpetu", "vryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkk", "uulsmjvftbhslwiwmtbbynupremhftwdfiofwgrexupzgvfwqc", "qdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmd", "evjrmxbuhxzngnfqhvsacudtzphjtombhkjpgoziezgnvbglto", "svambsqnaubpftglzdmtgaquceydghbjggiboodwywcrhibgar", "dtscjivnlswlwqlkkrrqmxdgkmnjjcorjxijifblnatnajqcln", "axqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxq", "wchzxdrlvkaimzulrfsngcgpqbfymwvjdsfmzfqciwlgtlwhsf", "zebatjoolxjmliobhazsltshwfyvubllntktqdopxvxqtutkqg", "oqzbpoqorwzgfjbbnerdhrlrywugmpilnhxieostpeyjwcgbab", "cefwqpdhriowctsmudioedeiuimwmilxwlheijkaizpuaxljos", "bamfrrwmsbvijoxcnxtigtxcmvaaklfrgzoyylmpsjodpijtwl", "fnvnhzuvxuykyraqljahkwcwtaweedhaucfjktltwxsjamfbnm", "hzmdyjayqjovidppoapmgwmkwzgnvfkwmqihaenlnodkxlynrj", "rkymutntoplocvnrwwtimvycelkdxisumgbwthvmnqqcpbuunw", "ggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieov", "yrdnxhkvbldhtxskpkzqnoleoigluwqpuygoxftcopmgfecggx", "dbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxielig", "tsfquiltjsykjkbcpvojqmfvwxxuhjyybfdnqvybibgftdjsye", "iykghtagnrqqsdifcwhbrchbdxaohriocxrzkymxdjwkxxeiky", "jueobjguuleevonwrrvqtexeqwwjiztmcgghlpgpznjqqsvwop"};
    int len = 2388;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "axqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxqdvvniciaiytbnzdwjclvzriemoyhxseuflvgwoqnqfidtglmdbmlgkckhchaqlmgdckghisfkfupwdjbfdnwqxgmlyguxieliggenpvqqyhsifxpjnpnruajuzezopcrziybctlkpjjjayyieovryglmuosubrrhspfciyhkuhtnejzadllytwchhrkzgnbsupkknxcchcboycxededeydbwsunbruucvahmmhorxdtkevrhhipfaxqviyuhguoyqrkeynwzueqyquwtnoehidnpdyvxqimdlaqmxq";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> dict = {"lscladrvytmocpincuvqdkafzjrasvyhhygrrmycadkdhfhech", "bcdvcawqovnglqvqbtdxofxooaodfrwaygssrngllimcwssykl", "uclmrxhngzmervtcakrormevgqvclrweoxqoumjdnvprkuuepc", "mvfifgujvhnwwwjhyaiwluburjwhmlnigfldfmebjwafkbvadj", "xurbncfhnlwthlmqrztfepcibzzvywukptqeuxkcwmsqyyripg", "exveiuinctbsdolxflpynivixmbmktjzdkexejeygzwjfsepuv", "icoyhzhqrlqptexgtscpssgfvldgrtbmjxpsehpjebvgicbdbd", "vombeernovzyerkrcqxvgwvtawitsuhjoyjhfgtdisecyvugsu", "qqspftjbmtykmrkrzivbfyaxkmpngocvcreojfplotkotixfky", "hucibzxngekuglqafokbsvbktwdgqundegdlawipdpiyguutdj", "cysrbysibchpeixzinhcdydljsjoxnmnupjhlrdacqqqxgcspo", "wmtatqwzgtvmggjxmkmmvlyecdirkhbhlbtcqndbkssjireifk", "zcoddephftaorgxipmrjzhckcoshrnmwngnzhkulsrkrtzmibp", "sauwgkyjlgxkmuyqzuazrkxhcormvftpzmcqcbkkolkugnbqzm", "dmfeptwhceihjfsqsmpskpbxdvfkdqnzxwnusjzzmoryfnfrxa", "hhrolazbtxxltxpnaoqhwbztbbvbjchgfpzvjqvnzaewxlcywq", "gtzhesyzjjszwmcvecrqoqiuzbphhszhjpqrjhmkxgkdkovlub", "nnaqckbtkuwgbwwhxbvfsfuouowbxoynqbgkdhyzvgqlkplgit", "yxlxkdyyjmjhzjlkmbboawezetarizrbfdkhnmgwvhzwrjiupw", "avksxjlcmwemicfltybeszuscgublbqngxxtczvonsmmrdkcjz", "febarewuokglrwbozasrosbesmpkddsvertvfuzlzrrqjgjzpn", "oodfokfihqqxxedeylufqkehqsynrxmahysezqjamvbimsffax", "kytctcmsarqoujskpsbxmudspcxnmlafurjqfunupkmzwpbxls", "pcowkeauwtrzpspjjqusacdsdzthlocwcmgfwpfmhggueyplue", "ttpjfrsajblnzekrfsoqewtgheemeximgddksdnebahsiqnxjr", "rsjzwyuzyqbeprefynfoeszvvotdxjyzfqvxaylthdizqpiwfi"};
    int len = 1094;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "febarewuokglrwbozasrosbesmpkddsvertvfuzlzrrqjgjzpnnaqckbtkuwgbwwhxbvfsfuouowbxoynqbgkdhyzvgqlkplgittpjfrsajblnzekrfsoqewtgheemeximgddksdnebahsiqnxjrsjzwyuzyqbeprefynfoeszvvotdxjyzfqvxaylthdizqpiwficoyhzhqrlqptexgtscpssgfvldgrtbmjxpsehpjebvgicbdbdmfeptwhceihjfsqsmpskpbxdvfkdqnzxwnusjzzmoryfnfrxavksxjlcmwemicfltybeszuscgublbqngxxtczvonsmmrdkcjzcoddephftaorgxipmrjzhckcoshrnmwngnzhkulsrkrtzmibpcowkeauwtrzpspjjqusacdsdzthlocwcmgfwpfmhggueypluexveiuinctbsdolxflpynivixmbmktjzdkexejeygzwjfsepuvombeernovzyerkrcqxvgwvtawitsuhjoyjhfgtdisecyvugsuclmrxhngzmervtcakrormevgqvclrweoxqoumjdnvprkuuepcysrbysibchpeixzinhcdydljsjoxnmnupjhlrdacqqqxgcspoodfokfihqqxxedeylufqkehqsynrxmahysezqjamvbimsffaxurbncfhnlwthlmqrztfepcibzzvywukptqeuxkcwmsqyyripgtzhesyzjjszwmcvecrqoqiuzbphhszhjpqrjhmkxgkdkovlubcdvcawqovnglqvqbtdxofxooaodfrwaygssrngllimcwssyklscladrvytmocpincuvqdkafzjrasvyhhygrrmycadkdhfhechhrolazbtxxltxpnaoqhwbztbbvbjchgfpzvjqvnzaewxlcywqqspftjbmtykmrkrzivbfyaxkmpngocvcreojfplotkotixfkyxlxkdyyjmjhzjlkmbboawezetarizrbfdkhnmgwvhzwrjiupwmtatqwzgtvmggjxmkmmvlyecdirkhbhlbtcqndbkssjireifkytctcmsarqoujskpsbxmudspcxnmlafurjqfunupkmzwpbxls";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> dict = {"thozchzfslrukixhnvmvebriknutevatjnpyyqmjgwaptpnmgc", "skqrqdgagruxjlkuonrrzgxuprlswrwgwbwbrjzmgxgasfhpuy", "uyznmkrcwphnqabokvhezcfvbbtxawlpsaecnxqekktequeigy", "fuxnveagonhrkfuhrgdssdjwfxymzvuzacnwtifivjlgdvwzgv", "xbbjrfyqztbroavqsdugiyranunuzijrterlnyhsxgkezmdeco", "wjzytplbhjonfxqbaeomccarqylhornmnctmfvzhwcvhorsgat", "hqdqlfpyexqoewsypmlzzekwgwpuuzptgdcfhyjrpbfxbxbgpe", "azzdqucdgvlxxbcemzqefazvaumlejfezszduoladccseiqdzf", "obgaorjzulygbtmuvzuzyawajuvlpuupuvspwejqvoioaspkws", "dgpbohzbtrvqghbzdiycakvtnuefkfyscpdkcwchghuifpofrg", "psajcgggvrtqxngigtrcovimgvubvxprmkoavdmtcgccyzeqbu", "melpsnbjtgkqjuxgzqvptmcqrzoxndwjrvvjzytdttoxgfazjd", "zcsruqzminakirivqdeyzjmxjuhfwznkxgnqmjglqrwjojzfox", "gkjgcywsfibzfbvyicfftsednqxtfcdsrkrmhpxgtxwovruaur", "krhoblmclgivtizwpymcwfopuuptgjnadzwgwjawcslmosuauj", "rlrrqdsksvysoobccakfwymdqurconwqktuthpyjicmmlfzsjq", "ltasmggdxdsvkmgnnklfdjljmvhfpqnwvqodszibvpojykyhyw", "qjcocdljapnluzbkzbhqaaicuqapkxlhxydnfcphxchblzxngp", "eqecjyyrpeogqseoeefovwcwmgreipieqwgibynnqfxpkejahn", "ustkptfrgjipkyxuozmdcnghsavwriffdvbccdryrhrvsegflh", "yuvkynhlyqoxsgnbcobbgkthuzaxlggbqrurucwidldihvbeel", "vvllktfdyhbszhxsbizgwzqqajpmexcxwidlsbyxyztrdjvhuz", "ilaloimabzlofvhfvfornvrlawdbzsoezlxjzzgjfxryoeivvb", "nxexxzgfznxxjzmsgafuuxqbvaekwktuvdcjemwictitsecuti", "btkcusxpqjiyysiyllfhxfpalmqvrzmpfwercyuagqxayjibtk", "chvizdujgejtslwyycqzdbpypwatlosngoqgaypwuzgqprplom"};
    int len = 1279;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "azzdqucdgvlxxbcemzqefazvaumlejfezszduoladccseiqdzfuxnveagonhrkfuhrgdssdjwfxymzvuzacnwtifivjlgdvwzgvvllktfdyhbszhxsbizgwzqqajpmexcxwidlsbyxyztrdjvhuzcsruqzminakirivqdeyzjmxjuhfwznkxgnqmjglqrwjojzfoxbbjrfyqztbroavqsdugiyranunuzijrterlnyhsxgkezmdecobgaorjzulygbtmuvzuzyawajuvlpuupuvspwejqvoioaspkwskqrqdgagruxjlkuonrrzgxuprlswrwgwbwbrjzmgxgasfhpuyuvkynhlyqoxsgnbcobbgkthuzaxlggbqrurucwidldihvbeeltasmggdxdsvkmgnnklfdjljmvhfpqnwvqodszibvpojykyhywjzytplbhjonfxqbaeomccarqylhornmnctmfvzhwcvhorsgathozchzfslrukixhnvmvebriknutevatjnpyyqmjgwaptpnmgchvizdujgejtslwyycqzdbpypwatlosngoqgaypwuzgqprplomelpsnbjtgkqjuxgzqvptmcqrzoxndwjrvvjzytdttoxgfazjdgpbohzbtrvqghbzdiycakvtnuefkfyscpdkcwchghuifpofrgkjgcywsfibzfbvyicfftsednqxtfcdsrkrmhpxgtxwovruaurlrrqdsksvysoobccakfwymdqurconwqktuthpyjicmmlfzsjqjcocdljapnluzbkzbhqaaicuqapkxlhxydnfcphxchblzxngpsajcgggvrtqxngigtrcovimgvubvxprmkoavdmtcgccyzeqbuyznmkrcwphnqabokvhezcfvbbtxawlpsaecnxqekktequeigyuvkynhlyqoxsgnbcobbgkthuzaxlggbqrurucwidldihvbeeltasmggdxdsvkmgnnklfdjljmvhfpqnwvqodszibvpojykyhywjzytplbhjonfxqbaeomccarqylhornmnctmfvzhwcvhorsgathozchzfslrukixhnvmvebriknutevatjnpyyqmjgwaptpnmgchvizdujgejtslwyycqzdbpypwatlosngoqgaypwuzgqprplomelpsnbjtgkqjuxgzqvptmcqrzoxndwjrvvjzytdttoxgfazjdgpbohzbtrvqghbzdiycakvtnuefkfyscpdkcwchghuifpofrgkjgcywsfibzfbvyicfftsednqxtfcdsrkrmhpxgtxwovruaur";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> dict = {"aibwmzvbcsdkoyzdyvfsefzfkuqsbhtywroyzvzhmyktbhhgfb", "nfbmtoyqqatiwspxprwiwuodzghfxcinlyxhfzoyrrrykxpfkr", "bktdqebznqzvucnazwxjgklijnnzlxuqrbmwlbzdslimcxkaiy", "yqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwz", "ccbdbnqzrflqixmfizajtbykkzagwdyozazotlamczgcriflnf", "wugkoqzqfrkrzqwxppxvadrjbigkbrhoihkrhrcypmhnprdsog", "dasuraodfqghisomsvjhqbllofsnjcayyhhzglbzchogfsdvmi", "kkcxjeqytczonbstydkmwhreskqidfpwsgcrguodgcndqnwcde", "hhzgkdcoylvhtawenmulcflstbwdhqxhfcpfgzngftgkqhcdrc", "ehtqrjcuzgdrainsfkerdusiofumnrdbfhwdsrhtdzfuncduuw", "jltcxuhmixmlkffrdnxhltskbcosltzikggebzrxruoodavdsl", "ziroloyxlsodjxwadandiohfympshtvwomgrynahsrvunuxayq", "odhqbithdzmzdsurwklxtvcdpkizxuibpnxukrlqzobcltdvid", "tetlsdwqvznrtbxsotbiqxkiqksidudxayurhxtwboqqkljqyx", "vuewdiucmskibleayggpuscotxxteumtddcodrfwsirzteaspk", "pnxdkaatacesaapdzvfpgyhcpvbklmucackxcmjqyqdjfdtxkt", "lmfsnpovpwarovrvlpwzbpnlydiujnfqfmcgwsmahrvrhhzulp", "grxrsisdcwkcmerptmqbihdzuryrsbzaunqmrlkcotkwaehibs", "zssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqky", "ffwsvmxdstsgnrjhtsqmavbbwoltcjlnbqvhgknevinlqlakrj", "ihfenzddwazgdzeybrsjlbgetvgmpkzxxtgsrjhgcbuoiweifv", "rcqzjepxzeddzghjagmdumephgcabjzjhqnkkolwptarvtkqfa", "xadvedskvmfbhctjiamrpkfdjehiaymnzfnmmfmxrjtgscujco", "ureolffjwyyaheklfhmpnjfvnjeqmaiklcinwedtzwvuaukeqm", "sgpjsrrxrkuvxuqxbvzvwxrusqijxailsanswzcvhciiggcriu", "mgrmcueglxxwftblntsvmwkjsjibqrjgubymlcjxpjqwpeljtn"};
    int len = 2368;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aibwmzvbcsdkoyzdyvfsefzfkuqsbhtywroyzvzhmyktbhhgfbktdqebznqzvucnazwxjgklijnnzlxuqrbmwlbzdslimcxkaiyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwzssjzgswmdgmujpzztxduusnslmruosnlwgwoooxmizotmqqkyqputkdlvxdgjhugktlbqjfyilgbdujszpsgcgfqjhmoqzkqwz";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> dict = {"hofgdqamyzkupisrugmcfrtsepwopuahfydskbvdtolhydwdqy", "vthpvfxcoaxegyefwzevduthxtxmphupoerpujksiyosrkszrs", "kreplwdocmjviqleztgyrgyotsrihrbtmdzdribgfxngzvkzhe", "nrliabdqfutmurcsgtmmefrhcoranulwlrypchsmwqzdfvcjvg", "linphuhkaafvonflpbdcznxjkxurmejypanfvcxasgrwrxgerx", "iexiofhmbybznafktevjjfysvowoexxzboryignlzkfzwowokf", "daebeuoajkyhrncqffbgfuvlowordbgiypsntdnljhufilaeqt", "tfcgiqvlycihinklmdmgayoufgdgfwkkwhulwsbxhkgmntxobk", "jvaxvfzlraknwsmeigcagvjhkhrnfabyvcvfttuhxydmlqnthc", "czggqimmrztimxeunkgawvmkrzxpjkaycbbtwjczoirlkwmnbh", "zqqtfaiqpfxevfgbernvwnedncuoucrfqehijyjdymtdvqrywb", "wsaxsyewmiqykfsrvzxsnurbkbrhutsojxtdgxlkarvbxypgvz", "phfetepspmgvadnwkiyzxtizczovxwzimuutykxeispobrzhjo", "ekzcpelpyybendzqmxtdjtkgsjeskinawzcwpmfnevifxsrxma", "acwjykzkfcuswzfihxdkywjdtpbcfumkwrdmwedllfvamrnfei", "xqsglwrxubbxuhrowxqxothuokztlbevoypsmjkyxyzwzovysv", "bcphauklbucotutrzthyiagzanpekkmiyvgjhhzlzcdcinefvm", "gwiwgxnuowovwvekvdwhwoylscphzsrswcevqpgsvhueqxtjpj", "mybyjhgkwqjnxjxhgzzklkypguqkrbqzqkxmclfifjplggfdmn", "wfjnjegfhpuulqigbknldlmtdqxkpintvvjthjcqjuakyzfwcl", "odsgnelzurftoyuqbugvchpdcrcwtpdtjpsiuebijdynwkurgu", "qghizjhxjhaggddvvmeltpwtmlardhtfaicvpbiabaefruewfd", "rfybgqlcohuwdzgxnjlfhjbsnubineyjdwcuocjvuyypnrlezq", "uyuoaiugoyqinigjxotzmbsyragzwqzpyulfttfkdmfzftysiw", "yfxbmzfihcpvqpugnpbzkgfradtgkzamowhyzwmnpejtqdqecr", "fmziotvmkokdmxnmullarsnklrirekowrhnnxgousgfuemjunp"};
    int len = 1254;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "acwjykzkfcuswzfihxdkywjdtpbcfumkwrdmwedllfvamrnfeiexiofhmbybznafktevjjfysvowoexxzboryignlzkfzwowokfmziotvmkokdmxnmullarsnklrirekowrhnnxgousgfuemjunphfetepspmgvadnwkiyzxtizczovxwzimuutykxeispobrzhjodsgnelzurftoyuqbugvchpdcrcwtpdtjpsiuebijdynwkurguyuoaiugoyqinigjxotzmbsyragzwqzpyulfttfkdmfzftysiwsaxsyewmiqykfsrvzxsnurbkbrhutsojxtdgxlkarvbxypgvzqqtfaiqpfxevfgbernvwnedncuoucrfqehijyjdymtdvqrywbcphauklbucotutrzthyiagzanpekkmiyvgjhhzlzcdcinefvmybyjhgkwqjnxjxhgzzklkypguqkrbqzqkxmclfifjplggfdmnrliabdqfutmurcsgtmmefrhcoranulwlrypchsmwqzdfvcjvgwiwgxnuowovwvekvdwhwoylscphzsrswcevqpgsvhueqxtjpjvaxvfzlraknwsmeigcagvjhkhrnfabyvcvfttuhxydmlqnthczggqimmrztimxeunkgawvmkrzxpjkaycbbtwjczoirlkwmnbhofgdqamyzkupisrugmcfrtsepwopuahfydskbvdtolhydwdqyfxbmzfihcpvqpugnpbzkgfradtgkzamowhyzwmnpejtqdqecrfybgqlcohuwdzgxnjlfhjbsnubineyjdwcuocjvuyypnrlezqghizjhxjhaggddvvmeltpwtmlardhtfaicvpbiabaefruewfdaebeuoajkyhrncqffbgfuvlowordbgiypsntdnljhufilaeqtfcgiqvlycihinklmdmgayoufgdgfwkkwhulwsbxhkgmntxobkreplwdocmjviqleztgyrgyotsrihrbtmdzdribgfxngzvkzhekzcpelpyybendzqmxtdjtkgsjeskinawzcwpmfnevifxsrxmacwjykzkfcuswzfihxdkywjdtpbcfumkwrdmwedllfvamrnfeiexiofhmbybznafktevjjfysvowoexxzboryignlzkfzwowokfmziotvmkokdmxnmullarsnklrirekowrhnnxgousgfuemjunphfetepspmgvadnwkiyzxtizczovxwzimuutykxeispobrzhjo";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> dict = {"oeajefygndafgkverggibasmvnxskhyiihqzcmppeosjnmjxav", "kzjiryugiargtkiqubzwnxnyqbkubjtwsdbdfkxkozyuaxnlbb", "xbqqqwhvlukixynrtsxpzvgywtezseyzolpfnbmpadesoijhyo", "anroljkwbizwepqiqjqgsoalfigzmkrpgwziqwrouzxffbwjtj", "byeokpmjcfuyjgjeyxivbhusyewhvbfztxhkzyppbzfquwnlwa", "cpvmfymcbztsmyanemdljtdfwtyltpkpmmdvfmmxupvplzeloy", "vswzkliavjeekxcsgwppumqhcbxgaejzllvtxiugqpwjjoqlhq", "fsywvxyzlvvsulkienzysznghcbwejyonhrmgqeifqayhgpini", "phxuwakbuyxwezkynvtttchaucxmidtmwkwrbtrhfxounmwojt", "rrbfidbfcjldcuiswghimzpwqiyenkfrneszxarpozpnauotih", "eothqcyyhaozwefbemwdnhdhzmopvjonrcmzbbsbbxcjpxbnau", "jcyjruazsbxxaakfyzlxvklypljyxjpuqqgerphnmxsrfedzte", "mkrqqlyhtswhxhrhlffqjimsyylkwgmpldfrugyqenzfsuskkx", "isjljzuqrjbkmrmgowoypfmpwfrgksqoyvwdbspdksmxzewmar", "ngfvndmkdmvfjaxcwmjjinnmrqkkysncuavxrpimuasltqnrzm", "wpwnzhzizrozhvjuxdrpsxxkdbjibsmufpkdodgpppxetgixil", "gwlpkmxuyujlrodnllnfodjzqbysauevxrupzymfcqqduhqgms", "yoxrsdpupozeogbhdjzmlfqpimgjjpudbbvfqjrsahwksbgccp", "zedoburqrgygvgigozdrlfpjkktatcfikejrldvlmlboztvnrg", "umdpyyihjfalrycfvpaoxeywdicxjvkocfkanosvkumkjnqqed", "sxabgzymjdusmohimkuxctfnxlsjvanefzywvyaygbzebvebyc", "qtbnelqxkcktobfvzjhlogjrsnfipfotcpcutbhhsnqlfnalgf", "hkxithwwiubmjpiihwbxiojmnhutyvflofkaxbfpppydfgkqpk", "lfvepmnulouvzsgcvwxdvgrjnbdnzzgdzjmsokwsfiizwthmkn", "zqkigtjvhfatffafwfmnpforqnimdaqvjzfcwshwshruswhwoo", "tjvcadjngfbnhkjoqewiidiyynpmtpcfwdedsgyodpwnbifezw"};
    int len = 1454;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> dict = {"eplqkfapzcgusgdhfpioiktrnj", "reckvsidpktszifu", "zhfkpikuwuxvaltftojmtwyijsznlffpjoajpirnqbzohmnwiy", "llpjsmuqbznziylobubdpeftyq", "jdjxgksvfyllpjsmuqbznziylo", "bgoolc", "tszif", "cuofwdcujze", "iktrnjdjxgk", "peftyqppfnreckvsidpktszifuhxxbvqcgdwjpvaxqnjny", "qppfnreckvsidpktszifu", "hfpioiktrnjdjxgk", "ylgoblmifqrqhnphthjnennhtinjwrztfsgcpprnxqelqthrvw", "tszifuhxxbvqcgdwjpvaxqnjny", "sidpk", "zxcdxijmxcjylouctujgjvwfosujqqcofbfnqsdbienkluhpkw", "yzdgvcbphexolwculwwkqrdvogizklgimbpokuebeufgsbhqvx", "qppfnreckvs", "obubdpeftyq", "reckvs", "hfpioiktrnjdjxgksvfyllpjsmuqbznziylobubdpeftyq", "dcujzeplqkfapzcgusgdhfpioi", "wmqksatoixpyjpkbgbqiuriiyynztdsfmdrwnqvcjrjjugaubx", "sidpkt", "nziylo", "zkuskqoltcecbbnbxhrlanjzoadmqzlvrevgrhnnflxgfxwzvv", "cuofwdcujze", "llpjsmuqbznziylobubdpeftyqppfnreckvsidpktszifu", "gusgdhfpioi", "peftyqppfnreckvs", "nziylobubdpeftyqppfnreckvsidpktszifuhxxbv", "ahobybgoolcuofwd", "wpbyrjjaxyfqyqscimdeheeyygbvqubkxxslhajgvbxhrwosuw", "eplqkf", "iktrnjdjxgksvfyllpjsmuqbzn", "ksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpkt", "wjaokgmvezcgczlegmdhyoivdhzuegbsqchdypkwjaoqsjgblx", "muqbzn", "jdjxgksvfyllpjsmuqbzn", "obubdp", "zzyeovesvaluhuahmefsfaplxrbwwgjnvrrrepvlkbuzlqfmzy", "zxtoexcocynzdtuveigfmwsxasgnmifldccrrdxywygfdfoqvw", "bgoolcuofwdcujze", "ksvfyllpjsmuqbznziylobubdpeftyqppfnr", "dcujzeplqkfapzcgusgdhfpioiktrnjdjxgksvfyl", "fapzcgusgdhfpioiktrnj", "gusgdhfpioiktrnj", "muqbznziylobubdpeftyqppfnreckvsidpkt", "ahobybgoolcuofwd", "fapzcgusgdhfpioiktrnjdjxgksvfyl"};
    int len = 2230;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahobybgoolcuofwdcujzeplqkfapzcgusgdhfpioiktrnjdjxgksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnreckvsidpksvfyllpjsmuqbznziylobubdpeftyqppfnr";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> dict = {"xwjntqpotcwijwnqjeltnwbiulznwyjvgwgsecnvlcronmxcfv", "nhcqso", "jsoafkgmurlsvkomdolqnhcqso", "alrlpbtlrachfyhdjtbrehichftjhyg", "qnsbirordsszvpmtgzocualhevstqtwzcfvx", "djtbrehichftjhyg", "pvsqhqnsbirordsszvpmtgzocu", "mdolqnhcqsolkjhpvsqhqnsbirordsszvpmt", "gazadhypypiivdqjsoafkgmurl", "rordsszvpmtgzocualhevstqtwzcfvxiohxy", "kgmurlsvkomdolqnhcqsolkjhpvsqhq", "iivdqjsoafkgmurlsvkomdolqnhcqsolkjhp", "pvsqhqnsbirordsszvpmtgzocualhevstqtw", "hypypi", "alrlpbtlrac", "chfyhd", "vlwvuyragdsbfnaiwdkipqzcvwkkfuenzrmurvcuoyuxicdtzz", "ftjhygazadhypypiivdqjsoafk", "olkjhp", "hypypiivdqjsoafkgmurlsvkom", "xggencxajwtycaccotwzcfkwqitavuylhnsqqtrxytjbdktzly", "olkjhpvsqhq", "ywiceeexseqqhnatlggonzhnfdxvukwqrsojyldvdombdnpowx", "gazadh", "ytoaiopfeyoavpbmcpjogwfpfjxljzqgzkxuezquklpjncyzvy", "mdolqn", "rordsszvpmtgzocualhevstqtwzcfvxiohxy", "szvpmtgzocu", "djtbrehichftjhygazadhypypiivdqjsoafkgmurl", "btlrachfyhdjtbrehichftjhygazadh", "lsvkom", "wfzqmvjxrqqpqkoaozxkzapnjlhslskkqqticomhwlszhigiow", "ysnmwgysjnvwumhwipplhqpijdoodtwdlbzywcftqgnvzeluww", "zckxczwvxtitxkienllburitbsunsxsxktjfzkgsqtogmhlndw", "ehichftjhygazadhypypiivdqjsoafk", "jsoafkgmurlsvkom", "btlrachfyhdjtbrehichftjhygazadhypypi", "iivdqjsoafkgmurlsvkom", "kgmurlsvkomdolqnhcqsolkjhpvsqhqnsbirordsszvpmt", "nhcqsolkjhpvsqhqnsbirordss", "qnsbirordsszvpmtgzocualhevstqtw", "ztdycxwhiywgrcgqrpizcdycchtnckdvwvouqvbxlxqtdsktqz", "vllpdpndpqmonfrxjvmkcgectsmfynsowfywbugpxgclmtjbhv", "ftjhygazadh", "szvpm", "ehichftjhygazadhypypiivdqjsoafkgmurl", "lsvkomdolqnhcqso", "chfyhdjtbre", "tgzocualhevstqtwzcfvxiohxy", "tgzoc"};
    int len = 2353;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "alrlpbtlrachfyhdjtbrehichftjhygazadhypypiivdqjsoafkgmurlsvkomdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhpvsqhqnsbirordsszvpmdolqnhcqsolkjhp";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> dict = {"wynqiommxklazsuoxzodacdilpwtpfujiqlgzijltwghbigmry", "dqafkevgfbfyqlbgtttfhbhfzi", "tujqoulkihvltxaw", "sexmt", "pdxuoqbfhzr", "wwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiww", "oiddnpdxuoqbfhzryzmbsexmttujqou", "sexmt", "jxbktkfrnqlghdbmdxatnpjujoiddnpdxuoqbfhzryzmbs", "pdxuoqbfhzryzmbsexmttujqoulkihvltxawavzrxvepqy", "wxhxsuyoarqngxunuzmixnsxigotnuouwopwdpeydgodfujoiy", "dqafkevgfbfyqlbg", "zuqwlapfaffqefxvnnyrhdbkckttfqsvqpffywxolbddzuihsw", "evgfbfyqlbgtttfhbhfzirxnsjxbktkfrnqlghdbm", "blwfqccekidqafke", "npjujoiddnpdxuoqbfhzr", "jxbktk", "hbhfzirxnsjxbktk", "ccekidqafkevgfbfyqlbgtttfh", "hbhfzirxnsjxbktk", "fyqlbg", "kfrnqlghdbmdxatnpjujo", "zzithoosthhwwldlasmcwhzfboxtttwddbvvltdxpymvuisgky", "oiddnpdxuoqbfhzryzmbs", "gtttfhbhfzirxnsjxbktkfrnqlghdbmdxatn", "irxnsjxbktkfrnqlghdbmdxatn", "tujqoulkihvltxawavzrxvepqy", "lghdbmdxatnpjujoiddnpdxuoqbfhzr", "aujxsb", "ryzmbsexmttujqoulkihvltxawavzrxvepqy", "zzwncbzntghlhchjsouhsnurnhxthacwlxwxejhdsqzlmekuxz", "ryzmbsexmttujqoulkihv", "qbfhzr", "mdxatn", "npjujoiddnpdxuoqbfhzr", "qbfhzryzmbsexmtt", "mdxatnpjujo", "irxnsjxbktkfrnqlghdbmdxatnpjujo", "fyqlbgtttfhbhfzirxnsjxbktkfrnqlghdbmdxatn", "zwjwvorpvreoqjokzxvwohjmvxqgqajevechsubmwprrfqxosw", "kfrnqlghdbmdxatnpjujoiddnp", "blwfqccekidqafke", "evgfbfyqlbgtttfh", "wwokylmhoraamfecmeloowpiuowwpasymivbvcadpxraziraaz", "gtttfhbhfzirxnsjxbktkfrnqlghdbmdxatn", "lghdbmdxatn", "xrdnazmvnhgjipatzkdkeeimmkaeoabsugqsymdxdepazhscoy", "zoshkmwjsbszwmyhosizbtbfwhxjdogvufbfkjhhrwbdoozmcy", "ccekidqafkevgfbfyqlbg", "aujxsblwfqccekid"};
    int len = 2452;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aujxsblwfqccekidqafkevgfbfyqlbgtttfhbhfzirxnsjxbktkfrnqlghdbmdxatnpjujoiddnpdxuoqbfhzryzmbsexmtujqoulkihvltxawwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiwwwjmggymgrvtwzfvjulmgyshhaqvwcqyrfignxpngzaqglkiww";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> dict = {"nmardoygoip", "oygoipmceyq", "pmceyq", "zsllnzwvmljoanwxymiffzpoisofufoxqfxrmfdqpdosbtbkdy", "rmgaksgshwthznmu", "rmgaks", "xibjjczfytdpjdhcjsobyzwwbztsfzpvzhpzscqsgdxafcwgkw", "wieckgdmyfzwzdpyajhaxgtuoulbxesevnhrbigizxncorckev", "kfqldlcedjmfovsnmardoygoipmceyqaombrmgaksgshwt", "sgshw", "fhxboglfaehwoudivvyijwenlkfqldlcedjm", "ivvyijwenlk", "cabzqdvsvaetagof", "lcedjmfovsnmardoygoip", "baxedc", "mfovsn", "thznmudzxkvvuwqw", "cabzqdvsvaetagofhxboglfaeh", "pmceyqaombrmgaksgshwthznmudzxkvvuwqwgjhtx", "dvsvae", "vbfowceojyrpzdsevrhittcsyosntrhbmdnghkadefsyaelwux", "glfaehwoudi", "fhxboglfaehwoudivvyijwenlkfqldl", "jwenlkfqldl", "etagof", "hwoudivvyijwenlkfqldlcedjmfovsnmardoygoip", "dvsvaetagofhxboglfaehwoudivvyijwenlkfqldl", "ivvyijwenlkfqldlcedjmfovsnmardo", "ayehcbaxedcabzqdvsvae", "ayehcbaxedcabzqdvsvaetagof", "vxrycfgxitfbylfycfuczjvsiypyyycuyqyfckkvwbdmmhhrtw", "hwoudivvyijwenlkfqldlcedjmfovsnmardo", "oygoipmceyqaombr", "kfqldlcedjmfovsnmardoygoipmceyqaombrmgaksgshwt", "wcqpwhtptvuacdcxvtonmiaearlieomfxcgfpnfopplzpzbdty", "baxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlk", "zzvqpaeqffmjyjqjssnyqljjwugiixhgnkobbjuxtavcmvunqv", "ylpktbuisxjigdtretudnwwuvxqguucdlkhnolynujqqykfezv", "jwenlkfqldl", "wjwepmfrzpagwtsbomkkajhqwkfdxcpdmhqlfhwbifxswwwqfz", "sgshw", "nmardoygoipmceyqaombrmgaksgshwthznmudzxkv", "thznmudzxkvvuwqwgjhtx", "glfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoip", "mfovsnmardoygoipmceyqaombrmgaksgshwthznmudzxkv", "qaombrmgaksgshwthznmudzxkvvuwqw", "etagofhxboglfaehwoudi", "zkriryjpeozzbeloobhcribdunqdspgltbdhkfkdsrdpvihmrw", "qaomb", "lcedjmfovsnmardoygoipmceyqaombr"};
    int len = 2373;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ayehcbaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaombaxedcabzqdvsvaetagofhxboglfaehwoudivvyijwenlkfqldlcedjmfovsnmardoygoipmceyqaomb";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> dict = {"mokoenzehqomsxdppdqxqxdvgrqshps", "kkvwolsyhamokoenzehqomsxdppdqxqxdvgrqshps", "ingbijftaqkkvwolsyhamokoenzehqo", "tcymfuzezmvxcddwfsczx", "horwlingbijftaqkkvwolsyhamokoenzehqomsxdp", "djqoveziudfwxcjgcvjmh", "nzehqomsxdppdqxqxdvgr", "djqoveziudfwxcjgcvjmhorwlingbijftaqk", "ynzwctjjtdjgrorakcytcxkiinagpioirykkasnctneoakwrfx", "qxdvgr", "axydkbqpxocbpgvdjqoveziudfwxcjgcvjmhorwlingbij", "vpbklhvinqznuqqieqojbneybfjeuebpffwmwhdgfmjplhohxz", "yrcbqnlahbmpaktmdhdfyewksfkyjbtmlspgmdhxbiudojgeny", "ppdqxqxdvgrqshpscnlztcymfu", "gcvjmhorwli", "axydkbqpxocbpgvd", "ymwggzyuwoirweomdxjsftkldruhqhzkfsbwtkwklqjyrmziiw", "scnlzt", "jftaqkkvwol", "eziudf", "fwxcjgcvjmhorwlingbijftaqkkvwolsyham", "wpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbw", "ppdqxqxdvgrqshpscnlztcymfuzezmvxcddwfsczxalcny", "gcvjmhorwlingbijftaqkkvwolsyhamokoen", "rqshpscnlztcymfuzezmvxcddwfsczxalcny", "mokoenzehqo", "cbpgvdjqoveziudfwxcjgcvjmhorwli", "bqpxocbpgvdjqoveziudfwxcjg", "cbpgvdjqoveziudf", "omsxdppdqxqxdvgrqshpscnlztcymfu", "wrvhmghkqsogmdoogsrsgqquyjqwezopiwbeopufnvnmzqynrw", "horwlingbijftaqkkvwolsyhamokoenzehqomsxdppdqxq", "kkvwolsyhamokoenzehqomsxdppdqxq", "eziudfwxcjgcvjmhorwlingbijftaqk", "jftaqkkvwol", "ingbijftaqkkvwolsyhamokoenzehqo", "qxdvgrqshpscnlztcymfu", "bqpxocbpgvd", "vauxzomvznoanljewetuqxbtitwclyfovwlzwdvhciwyoinfsw", "nzehqomsxdppdqxqxdvgrqshpscnlztcymfu", "tcymfuzezmvxcddw", "xyxklrjdinxaeoqtzfkekkscxbszxksuemsyoxmnoajcgllwty", "lsyham", "lsyhamokoenzehqomsxdppdqxqxdvgr", "omsxdppdqxqxdvgrqshpscnlztcymfuzezmvxcddw", "fwxcjgcvjmhorwli", "scnlztcymfu", "xzaazvjgrlmhnnlaxevtqnboxfxwqplsdmmjeybvlmydyegtjz", "rqshp", "ziuacersiwjrbkickywhzhudmenkaclbxznroaxtvtzabnrrsz"};
    int len = 2335;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "axydkbqpxocbpgvdjqoveziudfwxcjgcvjmhorwlingbijftaqkkvwolsyhamokoenzehqomsxdppdqxqxdvgrqshppdqxqxdvgrqshpscnlztcymfuzezmvxcddwfsczxalcnymwggzyuwoirweomdxjsftkldruhqhzkfsbwtkwklqjyrmziiwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbwpbsygxkfdhekrgkapvufktzmvvgiznjhyitrwsssckvvzsgbw";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> dict = {"vglollcjrlmynyjguclgwqstyjwpcmwsoobshbwsuuextosgyv", "tabbw", "cwxeudswqie", "skfgd", "gssxyhegaiijapkjdwmckmgidlqmjgm", "vvrtjdhoaimocigzhvwbmypmeowjhyedhgevbicdnklkatpqmx", "yauzyoluzfhexdraighzycnszgvvcsesobufooknvicqkyfofv", "tabbw", "dswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidl", "orjkkpiujfqblylrdzems", "kmgidlqmjgmzsgxnuwasorjkkpiujfq", "dswqiegsnjfeasfgssxyh", "feasfgssxyhegaiijapkjdwmckmgidlqmjgm", "qblylrdzems", "skfgdtabbwuzxrrvfdstw", "nuwasorjkkpiujfqblylr", "yyaxslyluyvpncjmvmqvnjucbmgjmykfpnrvhrtaqugqalavtv", "ymgvithhzjbehdqzgyouhftiydhsedbyeupumsbajwfvnbgiax", "mzsgxnuwasorjkkpiujfqblylrdzems", "egsnjfeasfgssxyhegaiijapkjdwmckmgidl", "mzsgxnuwasorjkkpiujfqblylr", "gssxyhegaiijapkjdwmckmgidl", "hegaiijapkjdwmckmgidlqmjgmzsgxnuwaso", "zpigtdxiixhgsxekfwqimospjiwbadnmampebpktwgmvzlpkhz", "bkgrdcwxeudswqiegsnjfeasfgssxyhegaiijapkjdwmck", "orjkkpiujfqblylrdzems", "ijapkjdwmckmgidlqmjgmzsgxn", "lqmjgmzsgxn", "piujfqblylrdzemskfgdtabbwuzxrrvfdstw", "cwxeudswqie", "wubtbphergjzchvkzjfshlcbtjralnmjrgsuqttvxtdbkwjrqx", "jdwmckmgidlqmjgm", "kmgidlqmjgm", "piujfq", "egsnjfeasfgssxyhegaii", "agakkbkgrdcwxeudswqiegsnjfeasfgssxyhegaii", "lqmjgmzsgxnuwaso", "agakkbkgrdcwxeudswqiegsnjfeasfgssxyhegaiijapkj", "bkgrdcwxeudswqiegsnjfeasfgssxyh", "qblylrdzemskfgdtabbwuzxrrvfdstw", "feasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwaso", "nuwasorjkkp", "zehpyrejfqqotvazxuayzmexhigiqkaocsxcjucgiahiorcmqy", "jdwmckmgidlqmjgmzsgxnuwasorjkkp", "rdzemskfgdtabbwuzxrrvfdstwdrgux", "ijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfq", "hegaiijapkjdwmckmgidlqmjgmzsgxnuwaso", "rdzemskfgdtabbwu", "xdfrvcafihredegivynrkmmtpvzqsjeuzukxeanenbsrvcituy", "yxevvxwqsedljljskuybclhcqgigyraevbtoffkwwqeviemprw"};
    int len = 2399;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "agakkbkgrdcwxeudswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyhegaiijapkjdwmckmgidlqmjgmzsgxnuwasorjkkpiujfqblylrdzemskfgdswqiegsnjfeasfgssxyh";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> dict = {"qfwnrredqgsqmlxt", "vwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtv", "bcuiecrwxkdhhsoeopiffraohg", "ogumjpjktaq", "gpcvehgvyzixtxjj", "wutwudijppntshgcevrrwkbewqgpdrkvooqkszphyhkkfrlzkz", "mlrvtnuuqmogumjpjktaq", "xoxnmkuezwvujjkffohoihdwkxwpqdchtqfimijxbqabikcapx", "waizftliyoqsjashogxelrelkhmkejdyqhnackthhwgumuxnsz", "ogumjpjktaqfwnrredqgsqmlxtglfqu", "redqgsqmlxtglfquvzfavyhwiw", "gpcvehgvyzixtxjj", "xadgxqxudejddpcowtytiruvhbceehfyuogqsngxadndsiigiz", "wompglpwwcvpwpkbdgrkpttkkngoscaikkvntotxhzramzdgxw", "redqg", "dhhsoeopiffraohg", "bcuiecrwxkdhhsoeopiffraohg", "xfgyzplkyjqexrbhkzmwnumzlxhyknhaoszfwtggatvgyvleav", "tglfquvzfavyhwiwcvbwx", "ixtxjjrtxyktleal", "pjktaqfwnrredqgsqmlxtglfquvzfavyhwiw", "tglfquvzfavyhwiwcvbwxjmvay", "eopiffraohgpcvehgvyzixtxjj", "hgvyzixtxjjrtxyktlealmhtbmlrvtnuuqmo", "fraohgpcvehgvyzi", "jrtxyktlealmhtbmlrvtnuuqmogumjpjktaq", "ktlealmhtbmlrvtnuuqmo", "lmhtbmlrvtnuuqmo", "nuuqmogumjpjktaqfwnrredqgsqmlxt", "sqmlxtglfquvzfavyhwiw", "xduaellvqhsnlzotugsfwcyppgvjgyrjjeewacerpxjdumskhz", "eopiffraohgpcvehgvyzixtxjjrtxyktleal", "mlrvtnuuqmogumjpjktaqfwnrredqgsqmlxtglfquvzfav", "jrtxyktlealmhtbmlrvtnuuqmogumjpjktaqfwnrredqgs", "xnhamhlkcyrlxatrzyylogzzvvhdjlxlscfzkhivwejoyopyfx", "sqmlx", "nuuqmo", "crwxkdhhsoeopiff", "qfwnrredqgsqmlxtglfquvzfavyhwiw", "pjktaqfwnrredqgsqmlxtglfquvzfav", "dhhsoeopiffraohgpcvehgvyzi", "hgvyzixtxjjrtxyktlealmhtbmlrvtn", "abhfmbcuiecrwxkd", "lmhtbmlrvtnuuqmogumjpjktaqfwnrredqgsqmlxt", "crwxkdhhsoeopiffraohgpcvehgvyzixtxjjrtxyk", "ixtxjjrtxyktlealmhtbmlrvtnuuqmogumjp", "ktlealmhtbmlrvtn", "wpibyxuvebbqogidldztlxzlzdcsknbaqusomszihteoywsjrw", "fraohgpcvehgvyzixtxjjrtxyk", "abhfmbcuiecrwxkdhhsoeopiffraohgpcvehgvyzixtxjj"};
    int len = 2222;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abhfmbcuiecrwxkdhhsoeopiffraohgpcvehgvyzixtxjjrtxyktlealmhtbmlrvtnuuqmogumjpjktaqfwnrredqgsqmlxfgyzplkyjqexrbhkzmwnumzlxhyknhaoszfwtggatvgyvleavwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtvwnnjruvhbbqpybhlwgewuansnfwvmkhdzqicrybqacnwgixtv";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> dict = {"tweoiuvmtov", "eeconfxovpgpwvvhpzbsi", "cowzvdxeoieeconfxovpgpwvvhpzbsikekfjyortkbdqel", "mhdwhnmorforyuypxoasqmrlfruthqswpyht", "bdpdncowzvdxeoie", "ikekfjyortkbdqelmueymhdwhn", "swpyhtweoiuvmtovoljnw", "cowzvd", "zsnhbsrhiwtpviaushqgexgtteayeojjrnootoasbhddozrytz", "tweoi", "yacedwdqwqfwuvedlroqvhefmmvgtnglllkqivcrteqjhjmzqv", "qmrlfr", "dxeoieeconfxovpgpwvvhpzbsikekfjyortk", "ikekfj", "qmrlfruthqswpyhtweoiuvmtovoljnwvtlrxgyvgy", "dxeoieeconfxovpgpwvvhpzbsikekfjyortk", "yrbgjeswzpmcjsfruonommxmnwdzjjqpxtzqfwzlhizhgtpjvy", "atcnbbdpdncowzvdxeoieeconfxovpgpwvvh", "hpzbsikekfjyortkbdqelmueym", "fxovpgpwvvhpzbsikekfjyortkbdqelmueymhdwhn", "nmorforyuypxoasqmrlfruthqs", "lmueymhdwhnmorforyuypxoasq", "pxoasqmrlfruthqswpyhtweoiu", "nmorforyuypxoasqmrlfruthqs", "ruthqswpyhtweoiu", "bdpdncowzvdxeoieeconf", "atcnbbdpdncowzvdxeoieeconf", "wqrrbnpizivipehpbmwthauwunnzvyiomwvxbgoiwvdjnmozgx", "xzsjanurjywbvmaixndloylxwoxcrsqopjiuzmdmabhgbruvqw", "vuvcpcmbgxabzimjomcjfgmunbkfpztnkwpchacsgjtrswetrw", "oryuypxoasqmrlfruthqswpyhtweoiu", "lmueymhdwhnmorforyuypxoasqmrlfr", "jyortkbdqelmueym", "kbdqelmueymhdwhnmorfo", "jyortkbdqelmueymhdwhn", "fxovpgpwvvhpzbsikekfjyortkbdqel", "wxlfunupokwwpdcrexaozhmlwwggvxjnwyutqdpskizucuyfvz", "oryuypxoasqmrlfr", "vlcyfvoihpknpnvtebwlvftewrezjaoexyiaopaajklcncyhiw", "swpyh", "gpwvvhpzbsikekfjyortkbdqel", "kbdqelmueymhdwhn", "zsfnzabitjydvaapkbjgyglivbdmefjyvypgfeutgrcvydkydv", "zletsypuzmrflhdeisbylqkcspzeedocmfskmtuxrvewokqivy", "gpwvvhpzbsikekfjyortkbdqel", "hpzbsi", "mhdwhnmorforyuypxoasqmrlfruthqswpyhtweoiu", "eeconf", "ruthqswpyhtweoiuvmtovoljnwvtlrx", "pxoasqmrlfruthqswpyhtweoiuvmtovoljnw"};
    int len = 2094;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "atcnbbdpdncowzvdxeoieeconfxovpgpwvvhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqswpyhpzbsikekfjyortkbdqelmueymhdwhnmorforyuypxoasqmrlfruthqs";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> dict = {"gqbulhxeijikxjkjldsskamjflbbxjm", "yoeytxeqfxyzwcxjsxzhdifeirrjfwrwokexkpugpskewihulx", "thqqouhlhav", "aecgub", "smfmcthqqouhlhavczaaw", "smfmcthqqouhlhavczaaw", "ewrbafvejtgqbulhxeijikxjkj", "ikxjkj", "jldsskamjflbbxjm", "bzyarcdejhdduide", "fvejtgqbulhxeijikxjkjldssk", "xsbomubidxdgcpguyqpmobmalsaimtnaskculemvwtkkximtzx", "lbbxjmjrzpneqeqolpqcpzdwgqheiwrjnsns", "neqeqolpqcpzdwgqheiwrjnsnsmfmcthqqou", "aecgubzyarcdejhdduidewrbafvejtgqbulh", "jldsskamjflbbxjmjrzpneqeqolpqcpzdwgq", "xiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpw", "ewrbafvejtgqbulhxeijikxjkjldsskamjflbbxjmjrzpn", "pzdwgqheiwrjnsnsmfmcthqqouhlhavczaawanrgx", "kamjflbbxjm", "bzyarcdejhdduidewrbafvejtgqbulhxeijikxjkjldssk", "cdejhdduidewrbaf", "vwipzacyezyqnrocufavlxijodcvtphyrvlrxvwybbrfsylacv", "vvokykxunoqrodriruxvmyumbcsrdsmdkwjmrzecdpzvdzvfcz", "thqqouhlhavczaawanrgxhtufy", "olpqcpzdwgq", "kamjflbbxjmjrzpneqeqolpqcpzdwgqheiwr", "neqeqolpqcpzdwgqheiwrjnsnsmfmcthqqou", "dduidewrbafvejtgqbulhxeiji", "hxeijikxjkjldsskamjfl", "fvejtgqbulhxeijikxjkjldsskamjflbbxjmjrzpneqeqo", "lbbxjmjrzpneqeqolpqcpzdwgqheiwrjnsnsmfmcthqqou", "mjrzpneqeqolpqcpzdwgqheiwrjnsnsmfmcthqqou", "pzdwgqheiwr", "gqbulhxeijikxjkjldssk", "wiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltky", "rjnsnsmfmct", "dduidewrbafvejtgqbulhxeijikxjkjldssk", "yuiiahiwwcrvrbxowosyfzpqsqcgkaequmzamhpidtzmvywjvy", "cdejhdduidewrbaf", "wxoftlatruonufvjfkmqmdhezzlktphdpjmfvepuvgclebgcqw", "mjrzpneqeqolpqcpzdwgqheiwrjnsnsmfmct", "olpqcpzdwgqheiwrjnsnsmfmct", "yiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepx", "qheiw", "ikxjkjldsskamjflbbxjmjrzpn", "hxeijikxjkjldsskamjflbbxjmjrzpn", "rjnsn", "qheiw", "xmwiwtkerwojrceiqxqvdvptvzoleyacrhusplnwlmvfefvwly"};
    int len = 2393;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aecgubzyarcdejhdduidewrbafvejtgqbulhxeijikxjkjldsskamjflbbxjmjrzpneqeqolpqcpzdwgqheiwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpwiqcyqwyvimldgoggwzwhcguxkymhgcgaalikqpksehjirltkyiawnzrnfaskbofdaitwsnljvdemkzlwevogwybmwaurazcepxiddafirriuiawalgknrodaoagrmbergrxnlhqavsrwaqaokpw";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> dict = {"dqgtdeeihofilozgcfkjhckgnizrqvj", "netatorkvgprvviqrnywryntusfpevt", "jhtpgkrorglbthemvnzun", "ashrabyfwqcsgyld", "orkvgprvviqrnywr", "wulsrgxfrqrnwxpzhrwxumdaeqnydcqyibzgjojnznwjqxzcdx", "hckgnizrqvjhtpgk", "byfwqcsgyldqgtdeeihofilozgcfkjhckgnizrqvjhtpgk", "filozgcfkjhckgnizrqvj", "sfpevtcuwauxpakvytvgwvzpkxyoddy", "xpdcqcbthyuuxubexlgekbyspbfcbmcremblnrlbdtsqmprttz", "sfpevtcuwauxpakvytvgwvzpkxyoddy", "byfwqcsgyldqgtdeeihofilozgcfkjhckgni", "izrqvjhtpgkrorgl", "dqgtdeeihofilozgcfkjhckgnizrqvjhtpgkrorglbthem", "netatorkvgprvviq", "eeihofilozgcfkjhckgnizrqvj", "yyjfbxqkkxvgsblwxtyoafjqesnifbyrolpaxbqwrutqpxklhv", "lbthemvnzunetatorkvgp", "jhtpgkrorgl", "ryntusfpevtcuwauxpakvytvgw", "izrqvjhtpgkrorglbthemvnzunetatorkvgprvviq", "eeihofilozgcfkjhckgnizrqvjhtpgkrorgl", "tcuwauxpakvytvgwvzpkx", "filozgcfkjhckgni", "gcfkjhckgnizrqvjhtpgkrorglbthem", "ystdeitztfyfqsupgtcacjwgxxicgnisdjyyvhyeezolbcufpy", "wadfstvqbrgvyduddwgykeumnimxkuhjunhxwggplqbyurbyjy", "krorglbthemvnzunetatorkvgprvviqrnywr", "mvnzunetatorkvgprvviqrnywryntusfpevtcuwauxpakv", "qrnywryntusfpevtcuwauxpakvytvgwvzpkxyoddy", "mvnzunetatorkvgprvviqrnywryntus", "yodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujy", "lbthemvnzunetatorkvgprvviqrnywryntusfpevtcuwau", "krorglbthemvnzunetatorkvgprvviqrnywryntus", "vqodxyonojmjwtcdwepoavwmgcrrjahvmyibfgcjgsyfovdply", "prvviqrnywryntusfpevtcuwauxpakvytvgwvzpkxyoddy", "ryntusfpevtcuwauxpakvytvgw", "tcuwau", "csgyldqgtde", "ashrabyfwqcsgyldqgtdeeihofilozgcfkjhckgni", "csgyldqgtdeeihof", "xsggjvorqgugideyjfganvdjhfdqycdztubuyfilsxxpgcwrpv", "hckgnizrqvjhtpgkrorglbthemvnzunetato", "prvviq", "qrnywryntusfpevtcuwauxpakvytvgwvzpkx", "gcfkjhckgnizrqvjhtpgk", "orkvgprvviq", "wrtxpbeooeesvjlpfapmbdntguswkjpqegxlrwwwetubgtrmrv", "ztpeowdpkkzcziwivztliaqtrnerndykurgzogwslqypjluzsy"};
    int len = 2447;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ashrabyfwqcsgyldqgtdeeihofilozgcfkjhckgnizrqvjhtpgkrorglbthemvnzunetatorkvgprvviqrnywryntusfpevtcuwauxpakvqodxyonojmjwtcdwepoavwmgcrrjahvmyibfgcjgsyfovdplyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujyodtbzzzqncjnfndvpkkmpotprpfvrluhnadcjmtzkrcknzujy";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> dict = {"aa"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> dict = {"ac", "aba"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> dict = {"ac", "bcb"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ac";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> dict = {"aba"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> dict = {"ddgggggggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggggggggggb", "ggggggggggggggggggggggggggggggggggggggggggggggggb", "bggggggggggggggggggggggggggggggggggggggggggggggggb"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bggggggggggggggggggggggggggggggggggggggggggggggggb";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> dict = {"ehbqqssncyzuwwnazk", "oaushkgffu"};
    int len = 18;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ehbqqssncyzuwwnazk";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> dict = {"dhwpaepagpuydil", "ymissnfgknrqsjxnvyfsrjec", "ytrenjkjsrujcmtcdogzrlo"};
    int len = 15;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "dhwpaepagpuydil";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> dict = {"dhwpaepagpuydil", "ymissnfgknrqsjxnvyfsrjec", "ytrenjkjsrujcmtcdogzrlo"};
    int len = 24;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ymissnfgknrqsjxnvyfsrjec";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> dict = {"abbb", "bcccdd", "aa", "da"};
    int len = 2;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> dict = {"abbb", "bcccdd", "aa", "da"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> dict = {"abbb", "bcccdd", "ab", "da"};
    int len = 2;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> dict = {"abbb", "bcccdd", "ab", "da"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abbb";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> dict = {"abbb", "bcccdd", "ab", "da"};
    int len = 4;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abbb";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> dict = {"abbb", "bcccdd", "ab", "da"};
    int len = 100;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccddabbbcccdda";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> dict = {"ababababababababababababab", "bababababababababababababa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababa";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> dict = {"aezvxseqdjgxlhtrdrkmgbmgmvrdabetmlottbnnruistvntnt", "autnewnwqtwkwfygqhkgbgmzfxtopvjqtjovqnrviyygwedgfd", "azjazbjzcwduxetmlxuuysgcluxdqiliestainilnobiisivwk", "alyntwvvottityxsytkwgdqccgckecckkkbbhqiydjfofgtxge", "atligdwdkdjvioroiqpioiwbytcfgxbuycqbzdnbxedpgbasry", "anjpfzaucwdwckegpvlmjdgoxpsunohggqjeoqfmvxjzxqustm", "dupritelznjdyzqcmmsfedoosjfqetknojhztfubqlqicuxpua", "atefdwicsjpagbxftoeesbkbtojdnrnlqdolevjmtcpxnaukts", "azngtfwagonqwruxdffdboopklwldvabduujwulvagzgtlfewg", "wiwcvplwaroqsdzaluhmxoztfdthuefiogmhaeleoejbtpkfaa", "aqouwbfmbsovfcgxbhrwyyfpdfnudlecxyjxqhspwfahiyvqoz", "phbqvbsoqfhzophyuwqoxswfjnhdslcdlyqfeitojxcfecsnra", "lwcfjnpoiizqpyjbzqjktbjpmilnqplzhborvogskyqwxxhyja", "aksktwvuldebgmqvbmxhymvhommwjtprxltaqlrhukmmcciqix", "awominuhxqquryypokvguawekkswezfdltvrklucjjyihpcpph", "avcmbdqcnnqhntgfzxppxvwieglosusinrgndoyevcwfxlydnr", "atedvybkqciacytmwiltxhlssmdaqsplghbjomltcjyioslefj", "hcvsxtrjhlnlpskbkwqghyoixwnghtbmgejufjocggqrzrfmja", "answyoglhryswnaxgkzlxcfybipizgewqbklzwwxmiyyrkfasb", "bdvyngsihheqxxbemlxgblbihffqkdbkmzwujtfhewfktvvyja", "zrntwratxomvytrtfhuckusbagflaxyydpmtbyyyftxzifweha", "anczzkzejprnpfcofegecdmsiqaphpwnegwxvsrjjrblytdxlq", "ysoqkbzyfaulqknfqdvhrwmdncamnifqwvsafdtmnfegruztva", "ualhhsptbmemkjesvycympqhqgierlmoejykovzzweqpbppmga", "jbddqqbdvpqexkfxabyoxyzwaybkgcctgzmjhuhmrhhgfghxna", "gxuzeadzctuqvilyiolnybdkylhklfbfwwcwflujdyfwksxaya", "ajgubvnmdvewrzufccygacxrtxphpsdgdbxnsnorprkahpsjof", "ffoooannhszbzobfxbnypkphhxngdisjikftqzhyhkfwyhvhla", "ktpdlwvjnkfngzdhpweqioapjsvkyepanwvavuqzvjnpcnlmla", "cxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjja", "areptrxrrcphlluxwpivzvorvdkhkwqnqglklhqhmtzjnjaxzu", "anxahuikytlatyxvdsnlkriyilkthtjfvgulknpaoabuyggpyi", "qwdyryuzetmpjdyzqmodindconaacdxzbvclnxftbtkyenpzba", "alpdlovoxnkxkjcrlmswpvxytbbfnzgxvrroybnvkowglazcrn", "adatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwc", "ewbfeqnuskayzdfefaewoqsfkuqmwknrnsccaziyfpkjevibma", "rjhlinaehjeumieqytpyqfkninzhzvyzdrgzrepbpnnqytqpxa", "iwuudmarcleipvpysgxjwszorooerqcwflazwjasiisvsbnmba", "axlttbqpnxhmbroyvhnoggapdbkqvihlheltehkiqnfhqjwlbo", "aygcdvdrgtizyhvgrwatkbxkzymahoyctxxcqaxfshwuuzlsfp", "tybkgimynbpknyocdzinumdfohbfduwobqdqtuvpfmcibngrja", "aumgqlotpcgvmighttgmjxxkrefnvezywvfsyesdzukyzoysvl", "vjeallkzzeznjmokgzliihryvzrtgcnxxdfhzyemwrtbhegmia", "aznhpgfukgrkbdewsexvijoltnaiyqtillwgmuszhzljssvtrw", "ommtkejdcryiydkmlgjxckijagfsxtiaxenlqiuhjsncpccnga", "xxrfyswicnbjfqjpsbsdibuwwbfdaghrrwvoswpocjwwqjreua", "nrkpsxphsivjefyuytgbhpycatxxqznypxjoowvwcejnwdouia", "muxdtcadediameclfcnvwtlxccgypsbufkrkwbivbduvfgxqaa", "sdocvklvsehfdqegvukaebcwycxrfdfpcuhuyetysvffwwkiga", "astolvxfarofeqvyzwcrxnyjmodogiwtzzzxdcpdkgunktngwv"};
    int len = 2474;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "adatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwcxiezajccevbajlnrscsmorstsdylkumchhpzxomutptlctjjadatwuvatijudejgjxsubrzjjozfysmceusujentivjoqfmjwc";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> dict = {"bzwizftnnfrsstfytjpbtxudrthizcofvkyxvdqjcgplraxdna", "zjkqmvfvmbmxzavprxyazohlykwrxjqlpizoqqjtvxduzfswta", "euworobkinoyolgsmtcpzzyejqgaudimnyojsomutpwowqypsa", "azhyhclavssvzkweurzhypgjudcllrwzdpemjzmbkhsdjkssam", "augtdevweifemnkonoalhpsxebwudylysbkfaumoaylghgmxjb", "arrvjovfetmreapuxkywfrssyybgonayjniyygbqvvfxlrhgnh", "kyiizonhbicosgimewpquaqgvlzxunzjelnefnljvzpewwopea", "aykxnhcscvlicckwyaskfiqkwgjruceszhlrsabsdrsvmdcgll", "wepzuewzmjuqxgzosfmrusreynimoifpcjiuuingahwobfqaqa", "dwscaznhcugqoiopimppesmqgrkfiqkxiqqfimkqwlmiazkcka", "aoteargxfcyanyuxzofivpvroldckryejdllqvbostjuidzrzt", "pcadkotlbdhadyqiowbbumhqzuervsvxqulottymmoerfbxsea", "alwngvqowptmnebqichyhrjxncogxefbszccovlmivyizbtzdx", "adiydavreanmmlnwbtspppykwnnobdhhiprmbkkmuwtgejlibu", "xajybrzlrjgtqpviputrejlrlqptgdyjuggknzfpsuxlqllfha", "aetzxwpcvvprrchwxutwzspvdgazipcsoleggteaykpuzlhbzz", "acmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxv", "anbhyymnyojjvvqfsezotouqzbgcpnzoblksgnldxgeuehjoip", "lomlqulgshovjgblhgoagugrutrilmdjceetciosnxbbcsoqoa", "iociadndoewxbftoctukvhxyhjkxgbksmkeydikaeeklihjgva", "aqluzjhwnusuprkpdknmegkevaqezdtluikaeblwzbvgiddedn", "amglnrwdzobmvdgwaqwqdqotliheugotojirmprxpzesjexyed", "oojjykngghjnzppifxkpqznuzyjkbfqhbzbihrtniepliiauua", "sovlpuhsamzgyeeozoqmqzwbavwvlojbdfworxrsfsmztrthla", "qydtwhriuqrgzwnltxrikknqfdhefknnfsgospilzrojaabkva", "huakcrhkonzvsnehbozxahhrgmndywaofasjzwauhixzlkvyna", "jdjrftddrekdahxsolsvlqfzcuemxpecasulusqzkfjplptvfa", "aysrflzxrbkjobopewzojkeyiznjwyrytrquauomzogjqfbskr", "auffpprholoiverummmjkhktfrtutjvmdxbwmjuzremfyhnujj", "fzvuoxvzrrrjdujgwwyehosiglzjlpyesssflhgekkqksugesa", "akezlhjthhausrdahxlnwhiethuvaotolgzfrgdncxjbtltmaq", "azfarnjmncccwzjfrjayyretzgcdgczdztfeyoxhcuhcyeunue", "vxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuata", "aonmjkotoadfzebsesazuziohkxxilklziyyczmcpfaavwwfkf", "aljwfxitjbxkvcvrmsebmtlpiuadhwwbssctzyumrrjqumaulo", "awluzwvszlpaazglokqmlnjnrhybntbgtzsrcrsoqsrtlpdbxc", "yomxzosjddmicwttzdsdwtdtenaoieoirdzeidkprotiutxtca", "tairrwlwpqxtffyyqckksmsljnrubryjxejipvldkdskgaozpa", "asbqznrqexauavmqevuvkminoittahfvkazvvnvruyzeuwgyiy", "aniabdobdzqnuobvbcaeqzzqwzncfuexdefttpkdsatvxvaxog", "nnzzssdrtiqdnbuploqrwbuzuuqfepxxngvrhqkoibskbefgwa", "rdqzfytaahagegnlozpryxzozjzfgaqnkgxrwuegfuqpgmmnsa", "azmwhswxnuupxwzhlcbtrxtosddlcvddskhxxmycsosgsygtik", "ajrxfhegnjozctaihiejzjlapncvofnbyykentghnmvxnunous", "ckoqbyhnhefpjzvmfocgnltwvzsuwhxqgpiloggxsmjjaxvsfa", "gsoknazesvcskswjilftbejlnmlbieduvnpzmaukprmnvherna", "uczxneqhzjbzatgocthmecsgmqjwyudmaesscnepvxizyfevla", "atnmnmofqvsokhbmdacjodrrzjwgmuykygglvimylhqfvmwumw", "msjontnuluhwrqomzrgkoambzfkgafnttyuqgjyvvtcmbjpxua", "aktblvmjfbhpjcgjnlzuirsibocetfuamkyxunrkquvxhmijri"};
    int len = 2496;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "acmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxvxoviovossyfpwgbjqfnfzwbulpgdsilqcdrzkrxdudkhsuatacmdtqdtbchskgwvmwhqiwxpesdcnzerggrbecpdqusahzsnxv";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> dict = {"eylfpinootxmptjxzhljudzwcxjbkctxfjkdkyesscswfqfpra", "aaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohy", "acuokzrwbqlfjgodjcqlhvbvgqrknibqheqjwbvcpesgokqflj", "hiibjmixsrrusewwicrujigdlhcndxntsphxigbnyhffrompca", "asxknwgdxzmnbdosgcqikmddqfljqtlkofmhewmalrtwpvkbvf", "pvzosnivyocpnfnakwxzpwfbpmeazqzkekcnoctplqdaouqxxa", "wbytemxkvoqpnkomfrotrwsfbytheqmnzkvzzwsmiihbealova", "qwbpmklqzsrkjcjwwlswnoscivbnsfhqqytnymhusghebbdhpa", "gtfdehxqutrmwkjbbbbgmejnnzemlmvfdrzcuzgqkdyzigjema", "atrcfolexpsekqyymxgobksprylzruuqznqzkwjbuzqnbrukep", "rpgfzzeawbbvuumtmtytpseupwipndovgexasnvtrttvtqwqra", "ajbtvfwkqxrziavgqljuoapdpsgeturqdywuomjsqiwxlrkldv", "vvsgbjeiiwxfgmmfeowglqjiajovozsyggyaokohxitosodmsa", "fowswgwqopqlmsvdnnrsyvpcafyzdakkcfuytvdpiftonivafa", "oflyslqsbcpswygnrvmzttaphkdjycruvkaqqiequtqrdgrpqa", "acjnnuzajfpzjeeoelfthvjthgjuauqxdjadmokzbjrhsbhptx", "aoozvluskbvaqwlazwfalcbikvgsfcekwxfdgjyodsundzwzoc", "atnhzzwnmmdtbvjylmaneggqujsvpocpjyzghsojdbqclqgylo", "ayggulzylesucwlyghhcolbflbrpqeejdbkbckripurzfkamdr", "ioommvzksoeijgleipjpyfoishfidjncvjnsbroyolbpqabeja", "awyfbfwgmticrqntvpvjcxgkkdgcguyxvbjwxkdivooiazkzwk", "ucxqgvzqpbbkqafttcmwhmdqjqhhvdhdmoyjtndkgbhxkpslya", "anxuisztaslrwthkwwbdkeehsdnknutzitbqkbubmxxmhjdbgq", "adjszgoqhqqdbyemqldukhdbqbompmweuvmiymajoolkhyoxjh", "avwclklpqlvwqrtdaluprovdsbnkuibjjxqbvbanklqpazhsfi", "alptseqrzmyphxhypicqrurqiojgwlbcselkuvxycfbygovkds", "aynlzwdkxrkdnpftvhwoqilztcojzwqworwcoqbimnnuwkrthz", "nvjihgoqoxsgzmigzczrhtzyqyxdnnwspjrixdsbbkqovinfga", "kodifyismmeglsuxwqdzmowbakbyprfzxteplqnuiiqiqkomga", "atuzlibrmsrksxfnellskoaiqiytcamydsrhfjbxxxbpuiygqg", "byibrfhknzgadnkvomnsgxxwntlkecifkkymeybvucrurfczua", "alfpwtndqldlsvpfjatyjcvqdtjuipiylpqgpfertuejtijqew", "aoneruuvcnouoisjckvzvxbtycdmhtmplraoywjwczexpladsd", "dirvtlfnuyionepdyhauenknlazvgohwrtjyqeofowffqrumva", "clygmtvuealbxdaymopcmsrhhkjukldskhtkpuakirefvvigva", "sxosbzxwlhtfloiqqkythztxojiddvfuqqcgdjasothvcuyuda", "xpdldqentzdlonlqkglaqlebsxbnwemshcrqvhhvzogqzgbfaa", "msipebgoqksntqnywraayeremskmchpxbypwrvmcmnufiiivqa", "tnzypsnlujtgolhpvbfobwnfvzhxdysyxmpnxxtdbdaljofana", "andsvhhspbsccugusyxbzdrpyemytllbsyujkqgenhrwmdiwjb", "zhgycsfmgkokbksblviemzkuzexgmksestcfildnvuqhrwgkpa", "yvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewa", "lkumvcinstarqozdprjxtjcpdrfmyohrvpcwahilcmkmpkpgta", "aidynvefcmanonitpxophqdtrfrkzocjkwwdodkgguvfyhaxht", "alqxrncopuqdrrjxuyolttglqpmhdyxwykmzjzvjsqtjfwbdbe", "aeeoftrsvddqbghnfcugnxrbgieaogbegcqujqultudhuexeem", "azsawdmrrvsuikyucyzzcvirbotadapaqpyhrmyegnrdctqrgn", "aedwszltekjrzdwjkvzfomejkckbiusrnsiirmzosytckbwrul", "awjtsdqetpchekvzfkzzoeepwlnlqcpupupqevhvjmgzkgbvau", "jyfhzcvusgfxcqgvwkxvufuubnmbcqgirjhdkaufwwgbmqawja"};
    int len = 2417;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewaaxbkvuzokwutlmrgkufypypsubhcyqdrvrgynrbkgylhxdohyvjyzxzqdkodjyqqatufxlnwiygclaiszykyyquarvaivzyewa";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> dict = {"aveqholmcnrmtvvqmqjichqewikdnpzjpylpuhlkqsfyypyhdo", "mbdticjuidzygkddofbrejojnrtccbmqvxuagngpuxmyuqlzwa", "avgctcbfhjmxtwcoanflbrhakxtxihvccnvdxxtkbemnxljbge", "vowqiwvglxkxsoxyhtfdhucqoaumsqbpzryspmgphdktuedlpa", "amagepymzkovepksivnjjvwiainesjtgcafllwsujjshtortnk", "ndcirnwrkebmuhlcfmerorzlrefhstplzbdmdmifufludkzdza", "aoxkjmbxzwsilvsqrmbpkkamejeugghhpjayeljsgkxrowymaj", "augkwgtbiigjwbsgoayuouimmxwdrxtybwymevtsvznufvpzby", "skvedtztcpjgzunxvxwvzulqobhttkopujclaeublatruzrgka", "cbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthta", "aqqgcgsqhmtqyessdlcavwndublclqjbjfxeawsfxygwkckdtb", "ibkbtoibwrtjqwpdyfbnaiphagbftatliibirxtwidklmdpava", "aabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzc", "aydozodceeopvnpnewrslyqiglxcpgprsuvcpfewnxdgixxezt", "zqrsbshlemnmwxvyeqzpuaornblhdvjntgeskwhndyfomklgza", "aetkngblzxjittbbpplttktlvoanbjjxcvjoopekqmfzatopwx", "lbcxclnigyrdnklhrvoljwlvyavbnvqvmxcmrbbddltebtzota", "jizwgnduksjgvqhymgsuzvfmwbkcbnzajnjcnqpbkocgvotdda", "azqfqzrqxjttjydvxuxsocavbwjuvanzaixseihnmjrfootrzd", "kkoqurufclixsfvdqhyxefspkiqrdmmvgkyhbxbeazqvpbdkga", "ubollujtkvmqlypvxsyzbfavphqqqqglopvsfwpwvipjyhtbya", "gtyplmzlzqunemlducgzmlogxtzzcxqyjafnehhhrqmezvtkla", "ejrmhuppjtlqqlznithrdcskijusfdxfdqpwkjmkiaaxsdhkha", "phvrwhdsbngbxlvdhiezrtslglemnobdvhitrnisjlvigazbwa", "ywtnmiesxjgnpmvhltofsaovacdlsnbfghjzaekhskyhbqhqia", "azqecfzrfmizthbkesgyjizfmfzdatxjbawzitngfezwtgsnnw", "azokophugcrhkmmfndocozimnjrrwehsuqulxzfmhyeouuftni", "ataofxcfixqjwcglzcoxqaapluxdtcrjbklrfbqjrlrvzrjyjs", "awlmwdbzaebfleaihnhnlxstfnmmnmvkwygqgnfmtnrlrkiycz", "awuyedscinoddhesglcyayafrdzwjvnjzwzwfhmthdeihduwef", "fsfnqfbooqorbbhaaghajtqitubchyrvipumegesvjyyljjxra", "avtcmsqcglwcnfcaumavurhzggrtujnotzlwmypmatdpbuzimm", "acxwnwyelgyeuxwznmdifrlqzqtyxnzrhklewlsrejfkdfpqfq", "hwkvxhwvpmtbjxdqgbctfifmkgkwsqnublzheizrnntkfqltja", "oofyfdoelfmaawvxbiqfzozjngtyqdcrblhxvfxuctftkctqaa", "bmcwrftzhzxvsrtzwqlygbzjjcxqnjlbznfirrernzdnjgpxxa", "xmyhkyswaksraenahmxnkkwwgpnsbxdivnuhtpnjmzmiclhfka", "alnmdpadxgshqtxkvxweexiyyjmipsfbiphauocaqgsamtqktv", "qrsznvqhlymifpdnvvizvitpphupcgvckfbfvofmdylxinvlea", "wamggpqeuilapxtplibjglipdmilsqisdzirxwrwiktyehxwua", "aqtktrhymbjgzautbdfhuhoxtfihxhhtglagtkscqbddsxqhsr", "acandnxduqxeewxjdqcxdydzllqmhkzvsnmciiadrymrbzydih", "rblgcerufbczmjjgbuohgytehxnxuwtibliuaplctlivwhjfpa", "ahrymfzarirkqgrzcwoyrfrjncctgmtbdrmomhtnbrisusmdmn", "aitymwfozmkkqslufshzuyjijzrvjktxsurqfpmdqsoilqceup", "azlcwfkjzxivpjvbnqacpyioitqyinnkaqswsuftagubicrkvl", "tbfdlmknhlgaprfbrdbfxjbotfadbjghmtvqgjepoyklsmplqa", "dmgwsddlsejczzxwshpnqqlufzhdhosizipthuoiwvajrmjtta", "afyojwppapwyqstxgdzxujrdwzfegaxmyehfcyaflxtbodwucg", "ayvsnatbirheczywyqbfuelfxyvnjwxihzeinkdpuqwgwqruau"};
    int len = 2425;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthtaabuewutaavrtwhagjyvwdecsycjphxewhzvortrwbjlbesnzcbasziryarigwgrxyysbonvowdbzyxsmmcwdehqoiabszqthta";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> dict = {"asdlmurbgnxaotvswvubjidlizzizntkidhuwqlpvybaioxaeu", "aaxvakcjtzsxcvrebszkramhwmrsrytajsmuilsioslawuqtfe", "afcqemdmsyzhpmlsejqdkwsbijlteasrbvbydcjfpauluyodgh", "aixywxtifqnvbzpfiqliqbnwdkkjegcfuvwrtgyhwpaqadfldd", "aawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjn", "dlvulkncpyfjnvasmgmxmtcomwallqcnifahxpuihdegsrjnla", "azrekmwujhviklqyzfosygybkulmmpjkmgzqeinweottwzytgo", "xkdczkzbapmwfhguvarbucrtjdqmtwuerreaanlverhhdcevxa", "afafewobzzvhmjdouzaikakieiapqkistlonnuigvvbdbztral", "ubuotmsgxkwuouhddoqltutfdmbixbrfgenwtmkbesesduieqa", "mtrezegqosjuwwylyjurjswcghfkwifalwrwpokauoulopmjia", "fdyxjvhzykshzvebpqdchmtcjafezxqvypiuptvceueegwvdia", "acujwybxfiksufaahuzbqkmowbvyxmxtiftbwxuqzkwnogvsrg", "axyshhfatukagccjexslnpyjpsispvtpcfuvrwsxyxqncbprbj", "guucedvdjfcrjiufmjmbzunlodkqegeamroqoyvakyvrodscga", "rsbasmidkavbrbxehrewnspkruvpusimbolxmcsyfskkdwmmha", "sbmhqjhrbgtwueoaarfepgbrnbpjwadhbajnvrtywlbfpwkhwa", "ajmfikelkgjmitnqqlorlbtsixtgqfrphiotiaaaqjxozablnm", "pesxbchidrofqddupbwqcuuseolwkrxybltqudsibphdgopbya", "agadsrggcqerzekevwurityugyvhlysoziecokahmvqduroymy", "vpidetqkmknspzwetbiaruaxiduatmdjzdgwpbpmttomiqygca", "esjpkagzrhbogjtuluvzpchtgfqavqmarfqqrqhrkdjllbsfta", "twuejwopokjbtvjjerkcoulvjgvuxvaibblwrnwcfaqzqrmzpa", "bnstsyfldrixbpwecdtahtdinptnwhtqojmqbytbjxrynzzkoa", "hphzvsuhqygjfzccqdavchtoziullihfwjhsyhzllslotktqpa", "aldmecqvzhxxyqezklmikzydvaromlnvqlcrmwdshmpwluzpwq", "akldlhsodsocyxqtylrtzlzqrheookxqoksvfgljihsihxwbrf", "ajbpukexirwgzadjqwavkltunupstvpzntmjevjcfeewdwxepc", "qvodvzbpfuembgzrnwzunymikvpnovgfzygbqcnjmjrzmomyba", "atiqvjfmidskpykjdvlwrzlqlseoyqkipkbrzcegjgabyieclb", "kqfkafyseddzbwsthwnpbkorehcicqtqmkxlirapcmixbnwmja", "yafknhqwtnxgstdcbqnxvvqhczcutoefotihqxekxmbibtfbda", "nmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltna", "aztmfagcdcfmjltncknyhvuotfydtrrxbpyodanrwfpafbhmbr", "axrmsorbzmhdbzkpkkkoajcdhnefndphqmdhpyxpqutnyutkjt", "lsqmnqapcpvfrgcltdbecwxdrlvzpbjswkjrpllpikmawkfiea", "wzhraeumazcmnauugqofdgkwqlzfbvbprytqkgovuinucrrfoa", "aejpiwxgzgphbcgsclhwlcthgzwblhnsqawixgmwcbdpmvcbup", "awfziasxqhmbtoetubzbpofmtuureutnjhwbxdqhhjhrygqctx", "ihhhvmnsulsgbicmgghhfckunaedvfbutybfsqlxentvliiora", "jwyaivqwwddjveilkrigxuihkptdwqgxmajmjapgecnoczttqa", "zqywqsppvbiovvatktpytkilhqcpglyvszgdaqwjrpayeksyga", "axyrbqzxukidskzpwmjlxxztsavfqspsneftbwoiplfylpxajv", "ovgounpcjwqsmroexepwjiumlaflbduixcktqwsvbdzvujwwfa", "aecnvefhhdesardyzuvwrofwyouoxhaugyhixdouyyyyitawiz", "ahtvokaxphllochulxaashllkhtrhosskgjhymjvttohqzotmw", "cubhucuclcqdssnrapfvbwusasksemdqwmbrcdyrhlczvscjoa", "axdniavjengnxwvazwzqxrcucdkklgdoxuhqowzguevwatsvri", "asaguwrpsyfubwxsvhrzooukuhiiljzhnewiqwqzkwdrbkmhas", "aqjpuicwulmkrhhgntswwytjoquopfbukxheawhhvjttljumjk"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjnmpagtbtcyddsmkiucbbfgvsxkjqldihjctjpjenudiuedltnaawoxwbkavttewerdhkfppbevnleoqjrnkzgjukybsrqtkxhjn";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> dict = {"az", "by", "cx", "dw", "ev", "fu", "gt", "hs", "ir", "jq", "kp", "lo", "mn", "nm", "ol", "pk", "qj", "ri", "hs", "gt", "uf", "ve", "wd", "xc", "yb", "za", "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz", "an", "bm", "te", "re", "fs", "gh", "da", "hd", "gh", "nj", "xz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmnjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjq";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> dict = {"ab", "bc", "cd", "de", "abc", "abd", "abe", "acd", "ace", "ade", "bcd", "bce", "bde", "cde", "abcd", "abce", "abde", "acde", "bcde", "eaaaaa", "eaaa", "eaa", "eaaaa", "ea", "af", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pa", "pb", "pc", "pd", "pe", "pf", "pg", "ap", "ph", "az", "abz", "zf", "zg", "zh"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaa";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> dict = {"yy", "yyy", "yyyy", "yyyyy", "yyyyyy", "yyyyyyy", "yyyyyyyy", "yyyyyyyyy", "yyyyyyyyyy", "yyyyyyyyyyy", "yyyyyyyyyyyy", "yyyyyyyyyyyyy", "yyyyyyyyyyyyyy", "yyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> dict = {"ba", "baba", "bababa", "babababa", "bababababa", "babababababa", "bababababababa", "babababababababa", "bababababababababa", "babababababababababa", "bababababababababababa", "babababababababababababa", "bababababababababababababa", "babababababababababababababa", "bababababababababababababababa", "babababababababababababababababa", "bababababababababababababababababa", "babababababababababababababababababa", "bababababababababababababababababababa", "babababababababababababababababababababa", "bababababababababababababababababababababa", "babababababababababababababababababababababa", "bababababababababababababababababababababababa", "babababababababababababababababababababababababa", "bababababababababababababababababababababababababa", "ab", "abab", "ababab", "abababab", "ababababab", "abababababab", "ababababababab", "abababababababab", "ababababababababab", "abababababababababab", "ababababababababababab", "abababababababababababab", "ababababababababababababab", "abababababababababababababab", "ababababababababababababababab", "abababababababababababababababab", "ababababababababababababababababab", "abababababababababababababababababab", "ababababababababababababababababababab", "abababababababababababababababababababab", "ababababababababababababababababababababab", "abababababababababababababababababababababab", "ababababababababababababababababababababababab", "abababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> dict = {"awlra", "abmql", "ahcdarzowkw", "hyhh", "hddqscdxrs", "omowfrxsjyd", "oldbefsarco", "oynez", "vdyggxxk", "vklorev", "clnmpapqfwg", "chopkr", "jcoqhnwc", "jkuewhsqmgn", "jbuqcljjivy", "qwmj", "qku", "xtbxixmf", "xtrrbljptnq", "enfwzqfb", "emafadrrwsm", "efsbcnuvqx", "lfi", "lbsaqxt", "se", "sqcap", "zehcha", "zvl", "zrkmlnw", "gzjkpqpxrh", "gxkitzs", "nxacbhhkid", "no", "ncoenz", "utomfgdwk", "uwfcgpxiqvv", "buyg", "bdlcgdewr", "itaciohordc", "iqn", "ivwcsgspqy", "pqmsboaj", "pu", "wwnnyqxf", "wzlgq", "dgwpb", "dtrwblnsadm", "duguumox", "kcdi", "kubetot"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehcha";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> dict = {"cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg", "cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaa";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> dict = {"abca", "abcaabcaa", "abcaaaaaaaaad"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaaaaaaaaad";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> dict = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbdbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> dict = {"aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaad", "sadfasdhflkasjdfhlkasdfsadfasdfsdfsdfasdfasdfasd", "abababababababababababababababababababababababa", "aaaaaabbbbbbbbbbbbaaaaaaaaabbbbbbbbbbbbaaaaaaab", "aaaaaabbbbbbbbbbbbcccccccccccccbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaas"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> dict = {"aaaabaabbbbbbbababbbbbababbabbabbabbbaaaaabaabb", "babbabbaaabbaaabbbaaaaabbbababababababaaaaabab", "abaabbbbaabaabaabbababaababbaaaabaaabaabaaaaaa", "bbaabbabbabbabbaaabaaabbababaababbbbaaabaabababbb", "aabbaabbbaaaaaababaabbaaaababbaaababbaabaaaaaaab", "abbabbaababaaaabbabbaaababaaaabaaabaababbbbbaa", "baabbabbbaababbbbbbbababbabbbbbbabaabaaaaabaabaaab", "bbbaaabbbbbaabaabbabbbabbabaababbabbbabbaababababb", "baaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba", "bbbabbabaabbabbbaaaaabbabbbababaabbbaaaaababaa", "aabaabbbabbabbbbbabbabababbbabbbabbababbbbbbaa", "abbaabaabaabbbbabbbaaababbbbaabbaababbababbba", "aaaaaabbababaaababbbbabbbbaaaababbaabbaaaaabbb", "bbbababaababbaababaabaaaaaabbabbabbbaaaaababba", "bbabaabbbabbaababbbabbabaabbaaaababaabbabbbababaa", "aabbaaababaabababaaaaaaaabababbbbbabbbaaaabbaaabaa", "abbabbaabbbaabbbbabaaababaabbbaaabbabbaabbbabaa", "bbbabbbaabaabbbaaabbbababaaaababababaabbaaabbbaaab", "abbabababbbbaababbbbabaaabbbabaabbabaabbbbbbb", "abbaaabbbbaaaaabbaababbaaaabbaabbbabbaabaaaab", "abbaaaabbabaaaaaabbbbbababbaabbbbbbaaabababbbba", "abbbbabbbaaaabbabaabbbaaaaabbabbabbaaababbbbbbabba", "aabaabbaababababbbbbaabaaaaabbaaababaaaaaaabbaaaba", "aabbbaaababbababbbaaababbbababbbbbbbbbaabaabaaabb", "abaababbaabbaaabababbababbababbbbbbbaaababaab", "baaabaabaaabbaaabaaabaaaabaababaaabaabbbbaabbaaaaa", "aabbbaabbabbbbaabaaaabaababbaaaaaabbbabbabaabaa", "abaababbabbaabbabbbbbbbbaaabaabababbabbabbbbbab", "baabbaabaaaaabaaaaaaaababaabbaababaaabbbbbaaab", "abaabbbaabbabbabaaabbbbaababaabbababbbababbabbbaa", "aaabbabaaabaabbabbbabbabaabbbbabbbbbabaababbab", "aaaaabbbabaabbbbbbbbbbbbaabbbbabbaababbaaaaaaa", "babbabbababaaabbbababbababbbbbbbaaaaabaabbbabaa", "abababaababababbabbababaabbaaababbbbabbaabbaabbabb", "babbaabbaabbbaaabbaaababaabbabaabaaaaaababbababaaa", "babaaabaaaabbbabbbbbabbabbbababbabbaaabbbabaabb", "abbbbabbbaabbaabaabbbaaaabaaaababaaaaababbaabbbbaa", "aaaaabababaaabaaaabababbaaaabbbabababbbabbaab", "abbbbbababbbababaaaabbaaabaaabbabababaaaaabaaabba", "baaaabbaabaabbbabbbabbabbbaabbbaababbbbbabbaabaab", "aaaabbabaaababbabaaabbaabaabbbabbbaabbbaababa", "abaaababbaabaaabbbbbbaaaaabaabbbbaaabbabbaaabb", "bbaababbabbababaaabbaabbabbbaabbbaaabababaaaaaaaa", "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabb", "bbbaabaababbbbbbbbbaaaababbbbaabbbaabababbabaaa", "babaaabaababbabbbabbbbabbbabaaabbaabbaaaabbaaaba", "aaabaababbaabbabbbaabbbabaabbaabbbababbabbbbaabb", "baabababbaaaaabaababaabaabbaababaaaababbabbaaa", "aabbbbabbbbbbaaabbaaabaaaabbbaabaabaaabaaaaaab", "ababaabababbabbabbbbabbabaabaaaaabaaaabaaaabbabbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> dict = {"aa"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> dict = {"ab", "bc", "cd", "de", "ef", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pq", "qr", "rs", "st", "tu", "uv", "vw", "wx", "xy", "yz", "abcda"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> dict = {"awfhriejlcmb", "dhxjuisvshec", "bvhmdwhuzmxvab", "aapauqusofrpyqzgd", "bumwnoyriase", "dfdxupwrhcqhwehoyeb", "bomhepttcbbce", "dpltmivvdcbbfrb", "cjviirrximhttd", "copwrcmkcborcxvd", "dstmrefyjdzhbb", "dscraixnilxjjmbwe", "amdxkfupcqyoilferzqrd", "adgwslzebeajkjclnld", "dgjpwpgsowjjqulfd", "dxeughslzeafxiwtzhc", "dgbnkadsikoc", "absiuroxagxrab", "akdantogwbmbjrfe", "cbzebbcuycftzmad", "dnrztsxztuajibugwxbxe", "bjktsiqnzczaqjnqvd", "dmzgflrtapumeqbe", "dlafpwbmywwszferveae", "clduwcpufmknsuib", "cbmfcrwihmxskb", "dajxwlgkjqlqte", "bqigksreyaixmnwrc", "czmdipvmdmdid", "deethigbxrcraqpuexvd", "btejxnwshpcijkoxrte", "bkhxgkcnnnfb", "bnpjjuxronyfazmzfvclb", "dswvkrhwejkczab", "aqhudskmncyc", "duwknhsillzjpd", "bikmjmbezolxe", "chvphqwgqbmvwfzd", "cxgmjvpakfmngd", "cotseylsoontxod", "dayatxgqyubcjwfe", "cukaapumntyhedzdiekmb", "bhbhvgjpbgkbtc", "anlsacgnuqgvmlbrrlb", "ccwpvarrwjvuxcc", "culkexmdyqpclasdfcc", "cohskcszfulszlad", "apxpuiqwhgbjaixeb", "degmxkddqhkowvb", "crejhykfgawvaenhqod"};
    int len = 2313;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aapauqusofrpyqzgdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvd";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> dict = {"abcde", "abc", "cee"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcde";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> dict = {"aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> dict = {"ab", "bc", "cx", "cy", "yoaa", "abcf", "fh", "hi", "ia", "fhiba", "xpa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcf";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> dict = {"aaaba", "aaabaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaaba";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> dict = {"abd", "dgga", "abdg", "gga", "gg", "gaader"};
    int len = 2020;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggaader";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> dict = {"aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> dict = {"opo", "oio", "oioao"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "oioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioao";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> dict = {"aaaaaa", "aaaaaaaa"};
    int len = 7;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaa";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "xyz", "ab", "ba", "dcc", "ccde", "ee", "ef", "fe", "fg", "hg", "ux", "xxxyyy"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> dict = {"ba", "ab"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> dict = {"abc", "dd"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> dict = {"aac", "czz", "aace", "ef"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aacef";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> dict = {"ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> dict = {"ab", "abc", "ba"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhh", "iii", "jjj", "kkk", "lll", "mmm", "nnn", "ooo", "ppp", "qqq", "rrr", "sss", "ttt", "uuu", "vvv", "www", "xxx"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> dict = {"ba", "ca", "da", "qa", "wa", "ea", "ra", "ta", "ya", "ua", "ia", "oa", "pa", "sa", "da", "fa", "ga", "ha", "ja", "ka", "la", "za", "xa", "ca", "va", "ba", "na", "ma", "aa", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "ap", "as", "ad", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> dict = {"axaxa", "axaxaxa"};
    int len = 2011;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "axaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxa";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> dict = {"qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be", "nw", "mq", "qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahah";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbc", "cce", "cdd", "dgg", "egg"};
    int len = 103;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccegg";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> dict = {"aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> dict = {"ab", "aba", "bc"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> dict = {"abcb", "abcbaa", "bb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaa";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> dict = {"aaa", "aba", "aca", "ada", "aea", "afa", "aga", "aha", "aia", "aja", "aka", "ala", "ama", "ana", "aoa", "apa", "aq", "ara", "asa", "ata", "aua", "ava", "awa", "axa", "aya", "aza", "ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> dict = {"ei", "zi", "fj", "so", "os", "jf", "kc", "sl", "dl", "ei", "sl", "wp", "fj", "fj", "si", "fj", "wl", "do", "cj", "lw", "od", "js", "dj", "xl", "ls", "od", "jf", "of", "ld", "ic", "is", "ie", "ej", "ji"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfj";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> dict = {"ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "ca", "da", "ea", "fa", "ga", "ha", "ia", "ja", "ka", "la", "ma", "na", "oa", "pa", "qa", "ra", "sa", "ta", "ua", "va", "wa", "xa", "ya", "za", "ab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> dict = {"az", "by", "cx", "dw", "ev", "fu", "gt", "hs", "ir", "jq", "kp", "lo", "mn", "nm", "ol", "pk", "qj", "ri", "hs", "gt", "uf", "ve", "wd", "xc", "yb", "za", "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz", "an", "bm", "te", "re", "fs", "gh", "da", "hd", "gh", "nj", "xz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmnjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjq";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> dict = {"ab", "bc", "cd", "de", "abc", "abd", "abe", "acd", "ace", "ade", "bcd", "bce", "bde", "cde", "abcd", "abce", "abde", "acde", "bcde", "eaaaaa", "eaaa", "eaa", "eaaaa", "ea", "af", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pa", "pb", "pc", "pd", "pe", "pf", "pg", "ap", "ph", "az", "abz", "zf", "zg", "zh"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaa";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> dict = {"yy", "yyy", "yyyy", "yyyyy", "yyyyyy", "yyyyyyy", "yyyyyyyy", "yyyyyyyyy", "yyyyyyyyyy", "yyyyyyyyyyy", "yyyyyyyyyyyy", "yyyyyyyyyyyyy", "yyyyyyyyyyyyyy", "yyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> dict = {"ba", "baba", "bababa", "babababa", "bababababa", "babababababa", "bababababababa", "babababababababa", "bababababababababa", "babababababababababa", "bababababababababababa", "babababababababababababa", "bababababababababababababa", "babababababababababababababa", "bababababababababababababababa", "babababababababababababababababa", "bababababababababababababababababa", "babababababababababababababababababa", "bababababababababababababababababababa", "babababababababababababababababababababa", "bababababababababababababababababababababa", "babababababababababababababababababababababa", "bababababababababababababababababababababababa", "babababababababababababababababababababababababa", "bababababababababababababababababababababababababa", "ab", "abab", "ababab", "abababab", "ababababab", "abababababab", "ababababababab", "abababababababab", "ababababababababab", "abababababababababab", "ababababababababababab", "abababababababababababab", "ababababababababababababab", "abababababababababababababab", "ababababababababababababababab", "abababababababababababababababab", "ababababababababababababababababab", "abababababababababababababababababab", "ababababababababababababababababababab", "abababababababababababababababababababab", "ababababababababababababababababababababab", "abababababababababababababababababababababab", "ababababababababababababababababababababababab", "abababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> dict = {"awlra", "abmql", "ahcdarzowkw", "hyhh", "hddqscdxrs", "omowfrxsjyd", "oldbefsarco", "oynez", "vdyggxxk", "vklorev", "clnmpapqfwg", "chopkr", "jcoqhnwc", "jkuewhsqmgn", "jbuqcljjivy", "qwmj", "qku", "xtbxixmf", "xtrrbljptnq", "enfwzqfb", "emafadrrwsm", "efsbcnuvqx", "lfi", "lbsaqxt", "se", "sqcap", "zehcha", "zvl", "zrkmlnw", "gzjkpqpxrh", "gxkitzs", "nxacbhhkid", "no", "ncoenz", "utomfgdwk", "uwfcgpxiqvv", "buyg", "bdlcgdewr", "itaciohordc", "iqn", "ivwcsgspqy", "pqmsboaj", "pu", "wwnnyqxf", "wzlgq", "dgwpb", "dtrwblnsadm", "duguumox", "kcdi", "kubetot"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehcha";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> dict = {"cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg", "cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaa";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> dict = {"abca", "abcaabcaa", "abcaaaaaaaaad"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaaaaaaaaad";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> dict = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbdbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> dict = {"aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaad", "sadfasdhflkasjdfhlkasdfsadfasdfsdfsdfasdfasdfasd", "abababababababababababababababababababababababa", "aaaaaabbbbbbbbbbbbaaaaaaaaabbbbbbbbbbbbaaaaaaab", "aaaaaabbbbbbbbbbbbcccccccccccccbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaas"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> dict = {"aaaabaabbbbbbbababbbbbababbabbabbabbbaaaaabaabb", "babbabbaaabbaaabbbaaaaabbbababababababaaaaabab", "abaabbbbaabaabaabbababaababbaaaabaaabaabaaaaaa", "bbaabbabbabbabbaaabaaabbababaababbbbaaabaabababbb", "aabbaabbbaaaaaababaabbaaaababbaaababbaabaaaaaaab", "abbabbaababaaaabbabbaaababaaaabaaabaababbbbbaa", "baabbabbbaababbbbbbbababbabbbbbbabaabaaaaabaabaaab", "bbbaaabbbbbaabaabbabbbabbabaababbabbbabbaababababb", "baaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba", "bbbabbabaabbabbbaaaaabbabbbababaabbbaaaaababaa", "aabaabbbabbabbbbbabbabababbbabbbabbababbbbbbaa", "abbaabaabaabbbbabbbaaababbbbaabbaababbababbba", "aaaaaabbababaaababbbbabbbbaaaababbaabbaaaaabbb", "bbbababaababbaababaabaaaaaabbabbabbbaaaaababba", "bbabaabbbabbaababbbabbabaabbaaaababaabbabbbababaa", "aabbaaababaabababaaaaaaaabababbbbbabbbaaaabbaaabaa", "abbabbaabbbaabbbbabaaababaabbbaaabbabbaabbbabaa", "bbbabbbaabaabbbaaabbbababaaaababababaabbaaabbbaaab", "abbabababbbbaababbbbabaaabbbabaabbabaabbbbbbb", "abbaaabbbbaaaaabbaababbaaaabbaabbbabbaabaaaab", "abbaaaabbabaaaaaabbbbbababbaabbbbbbaaabababbbba", "abbbbabbbaaaabbabaabbbaaaaabbabbabbaaababbbbbbabba", "aabaabbaababababbbbbaabaaaaabbaaababaaaaaaabbaaaba", "aabbbaaababbababbbaaababbbababbbbbbbbbaabaabaaabb", "abaababbaabbaaabababbababbababbbbbbbaaababaab", "baaabaabaaabbaaabaaabaaaabaababaaabaabbbbaabbaaaaa", "aabbbaabbabbbbaabaaaabaababbaaaaaabbbabbabaabaa", "abaababbabbaabbabbbbbbbbaaabaabababbabbabbbbbab", "baabbaabaaaaabaaaaaaaababaabbaababaaabbbbbaaab", "abaabbbaabbabbabaaabbbbaababaabbababbbababbabbbaa", "aaabbabaaabaabbabbbabbabaabbbbabbbbbabaababbab", "aaaaabbbabaabbbbbbbbbbbbaabbbbabbaababbaaaaaaa", "babbabbababaaabbbababbababbbbbbbaaaaabaabbbabaa", "abababaababababbabbababaabbaaababbbbabbaabbaabbabb", "babbaabbaabbbaaabbaaababaabbabaabaaaaaababbababaaa", "babaaabaaaabbbabbbbbabbabbbababbabbaaabbbabaabb", "abbbbabbbaabbaabaabbbaaaabaaaababaaaaababbaabbbbaa", "aaaaabababaaabaaaabababbaaaabbbabababbbabbaab", "abbbbbababbbababaaaabbaaabaaabbabababaaaaabaaabba", "baaaabbaabaabbbabbbabbabbbaabbbaababbbbbabbaabaab", "aaaabbabaaababbabaaabbaabaabbbabbbaabbbaababa", "abaaababbaabaaabbbbbbaaaaabaabbbbaaabbabbaaabb", "bbaababbabbababaaabbaabbabbbaabbbaaabababaaaaaaaa", "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabb", "bbbaabaababbbbbbbbbaaaababbbbaabbbaabababbabaaa", "babaaabaababbabbbabbbbabbbabaaabbaabbaaaabbaaaba", "aaabaababbaabbabbbaabbbabaabbaabbbababbabbbbaabb", "baabababbaaaaabaababaabaabbaababaaaababbabbaaa", "aabbbbabbbbbbaaabbaaabaaaabbbaabaabaaabaaaaaab", "ababaabababbabbabbbbabbabaabaaaaabaaaabaaaabbabbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> dict = {"aa"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> dict = {"ab", "bc", "cd", "de", "ef", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pq", "qr", "rs", "st", "tu", "uv", "vw", "wx", "xy", "yz", "abcda"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> dict = {"awfhriejlcmb", "dhxjuisvshec", "bvhmdwhuzmxvab", "aapauqusofrpyqzgd", "bumwnoyriase", "dfdxupwrhcqhwehoyeb", "bomhepttcbbce", "dpltmivvdcbbfrb", "cjviirrximhttd", "copwrcmkcborcxvd", "dstmrefyjdzhbb", "dscraixnilxjjmbwe", "amdxkfupcqyoilferzqrd", "adgwslzebeajkjclnld", "dgjpwpgsowjjqulfd", "dxeughslzeafxiwtzhc", "dgbnkadsikoc", "absiuroxagxrab", "akdantogwbmbjrfe", "cbzebbcuycftzmad", "dnrztsxztuajibugwxbxe", "bjktsiqnzczaqjnqvd", "dmzgflrtapumeqbe", "dlafpwbmywwszferveae", "clduwcpufmknsuib", "cbmfcrwihmxskb", "dajxwlgkjqlqte", "bqigksreyaixmnwrc", "czmdipvmdmdid", "deethigbxrcraqpuexvd", "btejxnwshpcijkoxrte", "bkhxgkcnnnfb", "bnpjjuxronyfazmzfvclb", "dswvkrhwejkczab", "aqhudskmncyc", "duwknhsillzjpd", "bikmjmbezolxe", "chvphqwgqbmvwfzd", "cxgmjvpakfmngd", "cotseylsoontxod", "dayatxgqyubcjwfe", "cukaapumntyhedzdiekmb", "bhbhvgjpbgkbtc", "anlsacgnuqgvmlbrrlb", "ccwpvarrwjvuxcc", "culkexmdyqpclasdfcc", "cohskcszfulszlad", "apxpuiqwhgbjaixeb", "degmxkddqhkowvb", "crejhykfgawvaenhqod"};
    int len = 2313;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aapauqusofrpyqzgdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvd";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> dict = {"abcde", "abc", "cee"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcde";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> dict = {"aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> dict = {"ab", "bc", "cx", "cy", "yoaa", "abcf", "fh", "hi", "ia", "fhiba", "xpa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcf";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> dict = {"aaaba", "aaabaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaaba";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> dict = {"abd", "dgga", "abdg", "gga", "gg", "gaader"};
    int len = 2020;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggaader";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> dict = {"aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> dict = {"opo", "oio", "oioao"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "oioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioao";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> dict = {"aaaaaa", "aaaaaaaa"};
    int len = 7;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaa";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "xyz", "ab", "ba", "dcc", "ccde", "ee", "ef", "fe", "fg", "hg", "ux", "xxxyyy"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> dict = {"ba", "ab"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> dict = {"abc", "dd"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> dict = {"aac", "czz", "aace", "ef"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aacef";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> dict = {"ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> dict = {"ab", "abc", "ba"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhh", "iii", "jjj", "kkk", "lll", "mmm", "nnn", "ooo", "ppp", "qqq", "rrr", "sss", "ttt", "uuu", "vvv", "www", "xxx"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> dict = {"ba", "ca", "da", "qa", "wa", "ea", "ra", "ta", "ya", "ua", "ia", "oa", "pa", "sa", "da", "fa", "ga", "ha", "ja", "ka", "la", "za", "xa", "ca", "va", "ba", "na", "ma", "aa", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "ap", "as", "ad", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> dict = {"axaxa", "axaxaxa"};
    int len = 2011;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "axaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxa";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> dict = {"qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be", "nw", "mq", "qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahah";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbc", "cce", "cdd", "dgg", "egg"};
    int len = 103;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccegg";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> dict = {"aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> dict = {"ab", "aba", "bc"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> dict = {"abcb", "abcbaa", "bb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaa";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> dict = {"aaa", "aba", "aca", "ada", "aea", "afa", "aga", "aha", "aia", "aja", "aka", "ala", "ama", "ana", "aoa", "apa", "aq", "ara", "asa", "ata", "aua", "ava", "awa", "axa", "aya", "aza", "ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> dict = {"ei", "zi", "fj", "so", "os", "jf", "kc", "sl", "dl", "ei", "sl", "wp", "fj", "fj", "si", "fj", "wl", "do", "cj", "lw", "od", "js", "dj", "xl", "ls", "od", "jf", "of", "ld", "ic", "is", "ie", "ej", "ji"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfj";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> dict = {"ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "ca", "da", "ea", "fa", "ga", "ha", "ia", "ja", "ka", "la", "ma", "na", "oa", "pa", "qa", "ra", "sa", "ta", "ua", "va", "wa", "xa", "ya", "za", "ab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> dict = {"az", "by", "cx", "dw", "ev", "fu", "gt", "hs", "ir", "jq", "kp", "lo", "mn", "nm", "ol", "pk", "qj", "ri", "hs", "gt", "uf", "ve", "wd", "xc", "yb", "za", "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz", "an", "bm", "te", "re", "fs", "gh", "da", "hd", "gh", "nj", "xz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmnjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjqjq";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> dict = {"ab", "bc", "cd", "de", "abc", "abd", "abe", "acd", "ace", "ade", "bcd", "bce", "bde", "cde", "abcd", "abce", "abde", "acde", "bcde", "eaaaaa", "eaaa", "eaa", "eaaaa", "ea", "af", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pa", "pb", "pc", "pd", "pe", "pf", "pg", "ap", "ph", "az", "abz", "zf", "zg", "zh"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaaaaabcdeaa";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> dict = {"yy", "yyy", "yyyy", "yyyyy", "yyyyyy", "yyyyyyy", "yyyyyyyy", "yyyyyyyyy", "yyyyyyyyyy", "yyyyyyyyyyy", "yyyyyyyyyyyy", "yyyyyyyyyyyyy", "yyyyyyyyyyyyyy", "yyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyay";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> dict = {"ba", "baba", "bababa", "babababa", "bababababa", "babababababa", "bababababababa", "babababababababa", "bababababababababa", "babababababababababa", "bababababababababababa", "babababababababababababa", "bababababababababababababa", "babababababababababababababa", "bababababababababababababababa", "babababababababababababababababa", "bababababababababababababababababa", "babababababababababababababababababa", "bababababababababababababababababababa", "babababababababababababababababababababa", "bababababababababababababababababababababa", "babababababababababababababababababababababa", "bababababababababababababababababababababababa", "babababababababababababababababababababababababa", "bababababababababababababababababababababababababa", "ab", "abab", "ababab", "abababab", "ababababab", "abababababab", "ababababababab", "abababababababab", "ababababababababab", "abababababababababab", "ababababababababababab", "abababababababababababab", "ababababababababababababab", "abababababababababababababab", "ababababababababababababababab", "abababababababababababababababab", "ababababababababababababababababab", "abababababababababababababababababab", "ababababababababababababababababababab", "abababababababababababababababababababab", "ababababababababababababababababababababab", "abababababababababababababababababababababab", "ababababababababababababababababababababababab", "abababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> dict = {"awlra", "abmql", "ahcdarzowkw", "hyhh", "hddqscdxrs", "omowfrxsjyd", "oldbefsarco", "oynez", "vdyggxxk", "vklorev", "clnmpapqfwg", "chopkr", "jcoqhnwc", "jkuewhsqmgn", "jbuqcljjivy", "qwmj", "qku", "xtbxixmf", "xtrrbljptnq", "enfwzqfb", "emafadrrwsm", "efsbcnuvqx", "lfi", "lbsaqxt", "se", "sqcap", "zehcha", "zvl", "zrkmlnw", "gzjkpqpxrh", "gxkitzs", "nxacbhhkid", "no", "ncoenz", "utomfgdwk", "uwfcgpxiqvv", "buyg", "bdlcgdewr", "itaciohordc", "iqn", "ivwcsgspqy", "pqmsboaj", "pu", "wwnnyqxf", "wzlgq", "dgwpb", "dtrwblnsadm", "duguumox", "kcdi", "kubetot"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehchabmqlfiqncoenzehcha";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> dict = {"cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg", "cba", "cbd", "abd", "abg", "gga", "dggb", "dgag", "asgd", "abdd", "gda", "gbd", "gbg", "daa", "aggd", "gga", "sgga", "gssks", "sijka", "auisu", "gdda", "aggha", "azzxa", "dggb", "bggfis", "gkkg"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaabdaa";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> dict = {"abca", "abcaabcaa", "abcaaaaaaaaad"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaabcaaaaaaaaad";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> dict = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbdbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> dict = {"aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "aaaaaaac", "aaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaac", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaad", "caaaaaaac", "caaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaab", "baaaaaaab", "baaaaaaabaaaaaaabaaaaaaabaaaaaaabaaaaaaab", "daaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaad", "daaaaaaadaaaaaaadaaaaaaadaaaaaaad", "daaaaaaad", "sadfasdhflkasjdfhlkasdfsadfasdfsdfsdfasdfasdfasd", "abababababababababababababababababababababababa", "aaaaaabbbbbbbbbbbbaaaaaaaaabbbbbbbbbbbbaaaaaaab", "aaaaaabbbbbbbbbbbbcccccccccccccbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaas"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaacaaaaaaacaaaaaaacaaaaaaacaaaaaaaaaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaadaaaaaaad";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> dict = {"aaaabaabbbbbbbababbbbbababbabbabbabbbaaaaabaabb", "babbabbaaabbaaabbbaaaaabbbababababababaaaaabab", "abaabbbbaabaabaabbababaababbaaaabaaabaabaaaaaa", "bbaabbabbabbabbaaabaaabbababaababbbbaaabaabababbb", "aabbaabbbaaaaaababaabbaaaababbaaababbaabaaaaaaab", "abbabbaababaaaabbabbaaababaaaabaaabaababbbbbaa", "baabbabbbaababbbbbbbababbabbbbbbabaabaaaaabaabaaab", "bbbaaabbbbbaabaabbabbbabbabaababbabbbabbaababababb", "baaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba", "bbbabbabaabbabbbaaaaabbabbbababaabbbaaaaababaa", "aabaabbbabbabbbbbabbabababbbabbbabbababbbbbbaa", "abbaabaabaabbbbabbbaaababbbbaabbaababbababbba", "aaaaaabbababaaababbbbabbbbaaaababbaabbaaaaabbb", "bbbababaababbaababaabaaaaaabbabbabbbaaaaababba", "bbabaabbbabbaababbbabbabaabbaaaababaabbabbbababaa", "aabbaaababaabababaaaaaaaabababbbbbabbbaaaabbaaabaa", "abbabbaabbbaabbbbabaaababaabbbaaabbabbaabbbabaa", "bbbabbbaabaabbbaaabbbababaaaababababaabbaaabbbaaab", "abbabababbbbaababbbbabaaabbbabaabbabaabbbbbbb", "abbaaabbbbaaaaabbaababbaaaabbaabbbabbaabaaaab", "abbaaaabbabaaaaaabbbbbababbaabbbbbbaaabababbbba", "abbbbabbbaaaabbabaabbbaaaaabbabbabbaaababbbbbbabba", "aabaabbaababababbbbbaabaaaaabbaaababaaaaaaabbaaaba", "aabbbaaababbababbbaaababbbababbbbbbbbbaabaabaaabb", "abaababbaabbaaabababbababbababbbbbbbaaababaab", "baaabaabaaabbaaabaaabaaaabaababaaabaabbbbaabbaaaaa", "aabbbaabbabbbbaabaaaabaababbaaaaaabbbabbabaabaa", "abaababbabbaabbabbbbbbbbaaabaabababbabbabbbbbab", "baabbaabaaaaabaaaaaaaababaabbaababaaabbbbbaaab", "abaabbbaabbabbabaaabbbbaababaabbababbbababbabbbaa", "aaabbabaaabaabbabbbabbabaabbbbabbbbbabaababbab", "aaaaabbbabaabbbbbbbbbbbbaabbbbabbaababbaaaaaaa", "babbabbababaaabbbababbababbbbbbbaaaaabaabbbabaa", "abababaababababbabbababaabbaaababbbbabbaabbaabbabb", "babbaabbaabbbaaabbaaababaabbabaabaaaaaababbababaaa", "babaaabaaaabbbabbbbbabbabbbababbabbaaabbbabaabb", "abbbbabbbaabbaabaabbbaaaabaaaababaaaaababbaabbbbaa", "aaaaabababaaabaaaabababbaaaabbbabababbbabbaab", "abbbbbababbbababaaaabbaaabaaabbabababaaaaabaaabba", "baaaabbaabaabbbabbbabbabbbaabbbaababbbbbabbaabaab", "aaaabbabaaababbabaaabbaabaabbbabbbaabbbaababa", "abaaababbaabaaabbbbbbaaaaabaabbbbaaabbabbaaabb", "bbaababbabbababaaabbaabbabbbaabbbaaabababaaaaaaaa", "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabb", "bbbaabaababbbbbbbbbaaaababbbbaabbbaabababbabaaa", "babaaabaababbabbbabbbbabbbabaaabbaabbaaaabbaaaba", "aaabaababbaabbabbbaabbbabaabbaabbbababbabbbbaabb", "baabababbaaaaabaababaabaabbaababaaaababbabbaaa", "aabbbbabbbbbbaaabbaaabaaaabbbaabaabaaabaaaaaab", "ababaabababbabbabbbbabbabaabaaaaabaaaabaaaabbabbb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabbaaaaaaaaabaaababababbaabaababbbbababaabbaabbbabbaaaaabaaaaabababaabaaaaabaaaaabbabbabbbabaabba";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> dict = {"aa"};
    int len = 1;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> dict = {"ab", "bc", "cd", "de", "ef", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pq", "qr", "rs", "st", "tu", "uv", "vw", "wx", "xy", "yz", "abcda"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> dict = {"awfhriejlcmb", "dhxjuisvshec", "bvhmdwhuzmxvab", "aapauqusofrpyqzgd", "bumwnoyriase", "dfdxupwrhcqhwehoyeb", "bomhepttcbbce", "dpltmivvdcbbfrb", "cjviirrximhttd", "copwrcmkcborcxvd", "dstmrefyjdzhbb", "dscraixnilxjjmbwe", "amdxkfupcqyoilferzqrd", "adgwslzebeajkjclnld", "dgjpwpgsowjjqulfd", "dxeughslzeafxiwtzhc", "dgbnkadsikoc", "absiuroxagxrab", "akdantogwbmbjrfe", "cbzebbcuycftzmad", "dnrztsxztuajibugwxbxe", "bjktsiqnzczaqjnqvd", "dmzgflrtapumeqbe", "dlafpwbmywwszferveae", "clduwcpufmknsuib", "cbmfcrwihmxskb", "dajxwlgkjqlqte", "bqigksreyaixmnwrc", "czmdipvmdmdid", "deethigbxrcraqpuexvd", "btejxnwshpcijkoxrte", "bkhxgkcnnnfb", "bnpjjuxronyfazmzfvclb", "dswvkrhwejkczab", "aqhudskmncyc", "duwknhsillzjpd", "bikmjmbezolxe", "chvphqwgqbmvwfzd", "cxgmjvpakfmngd", "cotseylsoontxod", "dayatxgqyubcjwfe", "cukaapumntyhedzdiekmb", "bhbhvgjpbgkbtc", "anlsacgnuqgvmlbrrlb", "ccwpvarrwjvuxcc", "culkexmdyqpclasdfcc", "cohskcszfulszlad", "apxpuiqwhgbjaixeb", "degmxkddqhkowvb", "crejhykfgawvaenhqod"};
    int len = 2313;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aapauqusofrpyqzgdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvdeethigbxrcraqpuexvd";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> dict = {"abcde", "abc", "cee"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcde";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> dict = {"aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> dict = {"ab", "bc", "cx", "cy", "yoaa", "abcf", "fh", "hi", "ia", "fhiba", "xpa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcfhiabcf";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> dict = {"aaaba", "aaabaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaaaaba";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> dict = {"abd", "dgga", "abdg", "gga", "gg", "gaader"};
    int len = 2020;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggabdggaader";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> dict = {"aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> dict = {"opo", "oio", "oioao"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "oioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioaoioao";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> dict = {"aaaaaa", "aaaaaaaa"};
    int len = 7;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaa";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "xyz", "ab", "ba", "dcc", "ccde", "ee", "ef", "fe", "fg", "hg", "ux", "xxxyyy"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> dict = {"ba", "ab"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> dict = {"abc", "dd"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> dict = {"aac", "czz", "aace", "ef"};
    int len = 5;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aacef";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<string> dict = {"ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<string> dict = {"ab", "abc", "ba"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhh", "iii", "jjj", "kkk", "lll", "mmm", "nnn", "ooo", "ppp", "qqq", "rrr", "sss", "ttt", "uuu", "vvv", "www", "xxx"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<string> dict = {"ba", "ca", "da", "qa", "wa", "ea", "ra", "ta", "ya", "ua", "ia", "oa", "pa", "sa", "da", "fa", "ga", "ha", "ja", "ka", "la", "za", "xa", "ca", "va", "ba", "na", "ma", "aa", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "ap", "as", "ad", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<string> dict = {"axaxa", "axaxaxa"};
    int len = 2011;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "axaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxaxa";
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<string> dict = {"qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be", "nw", "mq", "qm", "wn", "eb", "rv", "tc", "yx", "uz", "il", "ok", "pj", "ah", "sg", "df", "fd", "gs", "ha", "jp", "ko", "li", "zu", "xy", "ct", "vr", "be"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "ahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahahah";
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<string> dict = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbc", "cce", "cdd", "dgg", "egg"};
    int len = 103;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccegg";
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<string> dict = {"aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<string> dict = {"ab", "aba", "bc"};
    int len = 3;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<string> dict = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<string> dict = {"abcb", "abcbaa", "bb"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaabcbaa";
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<string> dict = {"aaa", "aba", "aca", "ada", "aea", "afa", "aga", "aha", "aia", "aja", "aka", "ala", "ama", "ana", "aoa", "apa", "aq", "ara", "asa", "ata", "aua", "ava", "awa", "axa", "aya", "aza", "ab", "ba"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<string> dict = {"ei", "zi", "fj", "so", "os", "jf", "kc", "sl", "dl", "ei", "sl", "wp", "fj", "fj", "si", "fj", "wl", "do", "cj", "lw", "od", "js", "dj", "xl", "ls", "od", "jf", "of", "ld", "ic", "is", "ie", "ej", "ji"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "cjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfjfj";
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<string> dict = {"ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "ca", "da", "ea", "fa", "ga", "ha", "ia", "ja", "ka", "la", "ma", "na", "oa", "pa", "qa", "ra", "sa", "ta", "ua", "va", "wa", "xa", "ya", "za", "ab"};
    int len = 2500;
    StickedWords* pObj = new StickedWords();
    clock_t start = clock();
    string result = pObj->constructLine(dict, len);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=9812&pm=5954
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
#define MP(a,b) make_pair(a,b)
#define ST first
#define ND second
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define SIZE(x) (int)x.size()
 
const int N=60,K=('z'-'a')+1;
string t[N][K];
vector<pair<string,int> > kraw[K];
int last[N];
 
    class StickedWords
        { 
        public: 
        string constructLine(vector <string> dict, int len){ 
              int n=SIZE(dict);
              REP(i,N) REP(j,K) t[i][j]="{";
              REP(i,n) last[i]=dict[i][SIZE(dict[i])-1]-'a';
              REP(i,n) t[SIZE(dict[i])][last[i]]=min(t[SIZE(dict[i])][last[i]],dict[i]);
              REP(i,n) kraw[dict[i][0]-'a'].PB(MP(dict[i].substr(1),last[i]));
              string res="";
              FOR(i,1,len+N){
                int nr=i%N;
                REP(j,K) if (t[nr][j]!="{"){
                  string s=t[nr][j];
                  if (i>=len && (res=="" || res>s))  res=s;
                  FOREACH(it,kraw[j]) t[(nr+SIZE(it->ST))%N][it->ND]=min(t[(nr+SIZE(it->ST))%N][it->ND],s+it->ST);
                  t[nr][j]="{";
                }
              }
              return res;
            } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/