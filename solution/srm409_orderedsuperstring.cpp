/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9823
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

class OrderedSuperString {
public:
    int getLength(vector<string> words);
};

int OrderedSuperString::getLength(vector<string> words) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"abc", "ca"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"a", "a", "b", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"abcdef", "ab", "bc", "de", "ef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"ab", "bc", "de", "ef", "abcdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
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
    vector<string> words = {"bc", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"ab", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"aaaaaaaaaaabaaaaaaaa", "bac", "aaaabacaaa", "ab", "ba", "a", "ca"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"abcd", "bc", "ba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"aaaaaaaaaa", "a", "ab", "a", "abbbb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"bcdefgh", "b", "b", "b", "bc", "cd", "g", "gaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
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
    vector<string> words = {"x", "w", "v", "u", "t", "s", "r", "q", "p", "o", "n", "m", "l", "k", "j", "i", "h", "g", "f", "e", "d", "c", "b", "a", "z", "y", "x", "w", "v", "u", "t", "s", "r", "q", "p", "o", "n", "m", "l", "k", "j", "i", "h", "g", "f", "e", "d", "c", "b", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "aa", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstu", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrs", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopq", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "abcdefghijklmnopqrstuvwxyzabcdefghijklmno", "abcdefghijklmnopqrstuvwxyzabcdefghijklmn", "abcdefghijklmnopqrstuvwxyzabcdefghijklm", "abcdefghijklmnopqrstuvwxyzabcdefghijkl", "abcdefghijklmnopqrstuvwxyzabcdefghijk", "abcdefghijklmnopqrstuvwxyzabcdefghij", "abcdefghijklmnopqrstuvwxyzabcdefghi", "abcdefghijklmnopqrstuvwxyzabcdefgh", "abcdefghijklmnopqrstuvwxyzabcdefg", "abcdefghijklmnopqrstuvwxyzabcdef", "abcdefghijklmnopqrstuvwxyzabcde", "abcdefghijklmnopqrstuvwxyzabcd", "abcdefghijklmnopqrstuvwxyzabc", "abcdefghijklmnopqrstuvwxyzab", "abcdefghijklmnopqrstuvwxyza", "abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuv", "abcdefghijklmnopqrstu", "abcdefghijklmnopqrst", "abcdefghijklmnopqrs", "abcdefghijklmnopqr", "abcdefghijklmnopq", "abcdefghijklmnop", "abcdefghijklmno", "abcdefghijklmn", "abcdefghijklm", "abcdefghijkl", "abcdefghijk", "abcdefghij", "abcdefghi", "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd", "abc", "ab", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"a", "ab", "abc", "abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk", "abcdefghijkl", "abcdefghijklm", "abcdefghijklmn", "abcdefghijklmno", "abcdefghijklmnop", "abcdefghijklmnopq", "abcdefghijklmnopqr", "abcdefghijklmnopqrs", "abcdefghijklmnopqrst", "abcdefghijklmnopqrstu", "abcdefghijklmnopqrstuv", "abcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyza", "abcdefghijklmnopqrstuvwxyzab", "abcdefghijklmnopqrstuvwxyzabc", "abcdefghijklmnopqrstuvwxyzabcd", "abcdefghijklmnopqrstuvwxyzabcde", "abcdefghijklmnopqrstuvwxyzabcdef", "abcdefghijklmnopqrstuvwxyzabcdefg", "abcdefghijklmnopqrstuvwxyzabcdefgh", "abcdefghijklmnopqrstuvwxyzabcdefghi", "abcdefghijklmnopqrstuvwxyzabcdefghij", "abcdefghijklmnopqrstuvwxyzabcdefghijk", "abcdefghijklmnopqrstuvwxyzabcdefghijkl", "abcdefghijklmnopqrstuvwxyzabcdefghijklm", "abcdefghijklmnopqrstuvwxyzabcdefghijklmn", "abcdefghijklmnopqrstuvwxyzabcdefghijklmno", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopq", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrs", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstu", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"xyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstu", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "vwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrs", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "tuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopq", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "rstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmno", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "pqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklm", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "nopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijk", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "lmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghi", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "jklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefg", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "hijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcde", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabc", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzab", "defghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyza", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "zabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw", "yzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv", "xyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstu", "wxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst", "vwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrs", "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqr", "tuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopq", "stuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnop", "rstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmno", "qrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn", "pqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklm", "opqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijkl", "nopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijk", "mnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij", "lmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghi", "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefgh", "jklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefg", "ijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef", "hijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcde", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabc", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzab", "defghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyza", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "llllllllllllllllllllllllllllllllllllllllllllllllll", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "llllllllllllllllllllllllllllllllllllllllllllllllll", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"rghkbwi", "ivorhalqkbqpqaeqeacboyejxxomi", "nhwphyjwbysksgullfvjsjzwaktsdfvqa", "vjsjzwaktsdfvq", "d", "zhlt", "kvloqsdoksbq", "vemdtdtocsmhpxrwdwpzvxegcubmfbnpntyqojgg", "vnwzgsylralekpkaoocfgfiqtwjxhemmkkbfrihxg", "nwzgsylralekpkaoocfgfiqtwjxhemmkkbfrihxgcjxakd", "etwbtathbjyvutvsaeoidxts", "tvsaeoidxtsqbbhulpbvgdlzilpath", "vz", "dmjtdvdzcy", "igycthymbvvfzuslkhugfwatpqhmwsxfes", "bvvfzuslkhugfwatpqhmwsxfesjxfpqogbpykostghngcox", "fesjxfpqogbpykostghngc", "jfodgjftohmljyelwmeovdahtfzfwyulkaqnhnxslsyic", "meovdahtfzfwyulkaqnhnxslsyicigodpkengfuxfxut", "odpkengfuxfxutrdeacvxgrrfnuukjjer", "ergsuxt", "c", "jekugycnpcvrhoqk", "qjszovdqammidbbnhf", "ovdqammi", "won", "msxlrfiewhdvypdyplducspjqpa", "spjqpaqyakidortqytvcvderwodzuwz", "ozepdsgqcs", "hoec"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 470;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"ioxennltbaqibvskinaepgelanr", "ednqpvrefnpnv", "tllilzmorkymtrvudy", "yppsbcybqphszhgnkzsdihlrzvcwhitrbjnqksmczlkhdlzt", "mhsc", "scuhdiidtmuldgiofhqdizgfcubnxtefpef", "xspopvshpsgiwsibms"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"nkxjpvfkwzaxoqhssjevqcgxdcbwfofyotcxmkdcenjpqfn", "xjpvfkwzaxoqhss", "sjevqcgx", "evqcgxdcbwfofyotcxmkdcenjpqfnsxwgxhhd", "dcbwfofyotcxmkdc", "bwfofyotcxmkdcenjpqfnsxwgxhhdyyvactmf", "enjpqfn", "fdngswpuzcyhqvwrnhnqabomgkzyibriguszn", "dngswpuzcyhqvwr", "puzcyhqvwrnhnqabomgkzy", "puzcyhqvwrnhnqabomgkzyibrigusznyjp", "cyhqvwrnhnqabomgkzyibrigusznyjpspwvn", "nhnqabomgkzyibrigusznyjpspwvnklspzqqnl", "hnqabomgkzyibrigusznyjpspwvnk", "abomgkzyib", "kzyibrigusznyjpspwvnklspzqqnlqrqxuzpy", "pspwvnklspzqqnlqrqxuzpynepmuh", "nklspzqqnlqrqxuzpynepmuhodcrao", "pzqqnlqrqxuzpynepmuhodcraotvegpclojockcurjcbbil", "nlqrq", "dcraotvegpclojockcurjcbbi", "r", "otvegpclojockcurjcbbilgajrmrwwdeyeaxgpcydaimagcy", "tvegpclojockc", "vegpclojockcurjcbbilgajrmrwwdeyeax", "urjcbbilgajrmrwwdeyeaxgpcydaimagcyhugfja", "wwdeyeaxgpcydaimagcyhugfja", "cydaimagcyhugfja", "cyhugfja", "fjas", "bczohdwxlkfxgilxjq", "kfxgilxjqhpzmvmarixhdxlfsaiibzubutefwthzlida", "ilxjq", "vmarixhdxlfsaiibzubutefwthzlidakgacdbnxgk", "ixh", "lfsaiibz", "dakgacdb", "dakg", "bnxgkwpcu", "kwpcubasptjjilwssjbfjgszqrfgkpqpfcyfgjm", "sptjjilwssjbfjgszqrfgkpqpfcyfg", "sjbfjgszq", "jgszqrfgkpqpfcyfg", "gszqrf", "zqrfgkpqpfcyfgj", "kpqpfcyfgjmblacflxcmtyhurxzc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"jzjqfqbkyoulmtucuqrolzazagoifoomnopcopb", "zzzzhtxcytcgnzyvblczccx", "yxibstnramjqfvvvqpxrlrvzrhgwhcqyjpktngi", "qfvvvqpxrlrvzrhgwhcqyjpktngikkne", "knewemuokpbwvefgbdqnbdznczrxvbmytrfhgjb", "qkzefgqwurb", "rtwbhqydghiivcgpwjnhyuxsihbpsiedqaauikgyvzddksbk", "uxsihbpsiedqaauikgyvzd", "ssbmdhegllibrhcirilkhuyauemvvmktvbwt", "xljlczdghcwlqjzlfuxjwhklhvomtcazxq", "tcazxqmcrlkydpdentcjycyjjsdzjgcevmspiddeyt", "cevmspiddeytkvpajacskdzvwqoigvnqzgtxnhhm", "zgtxnhhmqvzlctgdezhuraeytrvvzvngbdfk", "ytrvvzvngbdfkavvjdmeihisiaubmgdetlau", "zzkeldhyqepaehyhefzbd", "zzkeldhyqepaehyhefzbdiroi", "d", "sfrizjrlyybhufomeodbysybzs", "zugtimihikhftprmcwpo", "zxgrsbqapabsodzlpkiujcrfckjc", "omlrcfvovr", "wgkcwtxwmcxojiyrevglkfbisrmtxwbvgslzwhxvwoyg", "f", "xbsdvneaxmexxexpypwgygosjckufmiuzrmwpmojdoqqbczxk", "xxe", "rjkgyphlcfzpsppkyty"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 606;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"hckkei", "inuqynqbscmomcmhdyqrvnrlxfkzis", "dyqrvnrlxfkzisyqzqediyp", "mqynryxsxzocusuodrdup", "eqp", "wgl", "qlcrqvwgaomdhltjxycmlaypbspoxahbqfyvudxvptwqvdo", "laypbspoxahbqfyvudxvptwqvdonxoufxo", "spoxahbqfyvudxvptwqvdonxoufxobsyiovbiwvrgkrj", "biwvrgkrjflb", "iwvrgkrjflbzhnzdmpljwwwptxfle", "avtseppicpenrgcxvpbtryyooabvngfoamipgpaejtg", "tryyooabvngfoamipgpa", "oamipgpaejtgwlealkbptzjnelhdtorn", "dmxprkkpqozqxq", "gttudeubpzwacjmibyrzbbhbmphdu", "tudeubpzwacjmibyrzbbhbmphdumrlf", "yjpsrjqnkjsjnlixsbjygpcxbsuuhdlacsfblqcehijq", "mvhdcyorqazgnsfrrajtmfjhdhrcvwfucfxeqswefkkgc", "zgnsfrrajtmfjh", "jtmfjhdhrcvwfucfxeqswefkkg", "tcoltdtbftizksonktzk", "evspueclekxwxmcacqpjmnoqymsfgriyhwboytpevod", "rrdubjfw", "as", "stabg", "wkurnnnvzzwxbjpbctlp", "awhjxzsbghzollfoeytuvsbdilolxtjldoxefzf", "vsbdilolxtjldoxefz", "hbkajoyfyjqqmlkqkjp", "abpkalmrdbxdlqjkndtadwlmg", "bxdlqjkndtadwlmgtxjsbkffcdrgt", "nlefamelwbpmihmd", "plpkxzitfynacwxinnulwjcquywl", "gmrasda", "wtm", "tynavoimylyeqfspaxndcopsoalkwpyxgbdkxjxystguaodh", "navoimylyeqfspaxndcopsoalkwpyxgbdk", "ckwcourszyghxbugncqgkbaqsgvumuj", "ropfsdjopmwykfwakgiaeubejfyvqtvvmbnhxjzfq", "cxceimsaibytxkaerezggnhtuuuvnmpiihdmyjs", "psfkrmr"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 773;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"riuufw", "riuufwajidxrdqggyycexvjkqfkigkiwvtyc", "riuuf", "ufwajidxrdqggyy", "ajidxrdqggyycexvjkqfkigkiwv", "idxrdqggyycexvjkqfkigkiwvtycouj", "dxrdqggyycexvjkqfk", "xrdqggyycexvjkqfkigkiwvtycoujijx", "xrdqggyycexvjkqfkigkiwvtycoujijxpblil", "xrdqggyycexvjkqfkigki", "rdqggyycexvjkqfkigkiwvtycoujijxpblilokay", "yycexvjkqfkigkiwvtyco", "yycexvjkqfkigkiwvtycoujijxpbl", "ycexvjkqfkigkiwvtycoujijxpblilokay", "cexvjkqf", "exvjkqfkigkiwvtycoujij", "exvjkqfkigkiwvtycoujijxpbliloka", "vjkqfkigkiwvtycoujijxpblilo", "kqfkigkiwvtycoujijxpblilokaybpuj", "igkiwvtycouj", "ycoujijxpblilokaybpujiieazyuw", "ycoujijxpbliloka", "oujijxpblilokaybpujiieazyuwsjinxcuynqng", "oujijxpblil", "gouj", "ijxpblilok", "okaybpujiieazyuwsjinxcuyn", "aybpujiieazyuwsji", "ybpujiieazyu", "pujiieazyuwsjinxcuynqn", "jiieazyu", "iieazyuwsj", "e", "eazyuwsjinxcuynqng", "azyuwsjinxcuy", "azyuwsj", "azyuwsjin", "ws", "jinxcuynqngo", "jinxcuynq", "xcu", "cuyqm", "c", "y", "qngoe", "ng", "nga"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"egvdkysxmyafhlqzqtgjprpxloplmiy", "sxlfiihvvgyvfkbqtvghtkweijz", "ihvvgyvfkbqtvghtkweijzotcvxwpotuatqqzydkuwy", "cfwbkpysvvpewrvgetbkooshgnniumnqmawqoedshvtl", "bkpysvvpewr", "hgbgjtedleshymicsf", "bdkdsr", "lxwbkjxnwzjcdlftkueidqwsqudeeinr", "nwzjcdlftkueidqwsq", "josuas", "ftwlrusizvktjlicydmumuqrfwxdkpxqoaorzndr", "itjexfsycqgxjztafotmbyvo", "kxeagmenboqhxkymxyttr", "uvurmghxdwihqcptfnwz", "ovonybdjcgyjuhsxp"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"plicxniaihdgeugmfpirbjqtkdybjlxbtuqiuetmyynxsovuv", "vuviduxd", "tv", "nb", "huwhvekpyxnuoruhagqkj", "tiyckjryrzdwpsfujxpwfhrxktslmvkwdrtqbovvcuepqlxy", "yckjryrzdwpsfujxpwfhrxktslmvkwdrtqbovvcuepqlxyk", "epqlxyknzely", "cotrmvnyxvzvwdewkxgzivnlpjyryvisrouqijsuzz", "jsuzzvptrtdqkafryojycqjdabgqkokcwn", "ojycqjdabg", "nzmjstcjprsmirpdecbbvbaeuopdkwzhglrqlf", "ecbbvb", "opdkwzhglrqlfa", "vzbqddlkzouxjvrptcesxxnvzr", "xnvzrvxakqhrc", "dasgokdfvhlmrsnzinlaibegvxyutcqioglofojjxgjavlrl", "gyzxinadzfomhikdeynsmyxjbfbsxhwybwg", "ikdeynsm", "hgnaihmccnlomizikdnukeyorssflxhjdgipvssuffuwwabld", "nukeyorssflxhjdgipvssuffu", "nukeyorssflxh", "eyorssflxhjdgipvssuffuwwabldnj", "brkikggqxjrrjerlqmwwdgtljqflz", "flzgtqytgvqqfcyrrdxageauqahytcvnaufjoezud", "qytgvqqfc", "fcyrrdxageauqahytcvnaufjoezudsgfktyzua", "mjfsmrtwftfnilmblm", "biztigmqxwsrrcxnzmzaujchnc", "tmucybobqwnesdbilvid", "sdbilvidyslbrbwfsklvlnivccxjwljyajkono", "mopbxqlgagmdczgdtplapfgoah", "naharlhzjwqcuavzhwqfzosd", "acwqlesvlqypixgcnsrfnhbgdxxhzuyqqes", "wq"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 665;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"awpzzeuzsoafyzvexgiraws", "ufakqduwbjlnfltldbxuavhvxwgnkhchhhwwgdzbdzcwx", "zoirrtqvkzzipyrs", "fvueaywtxjxohxnqivwjebmcacjsulwfr", "racrqhnyaahrjsoodoixhjitncjmvkitwadmpaflameyyzhe", "qygkpppyt", "magkzobkbsrctcwokedsgnhshaxwksohk", "ojtpsfu", "qywhbtnsradqpcwksybogbg", "mtxebwgvqhfmb", "xebwgvqhfmbmkwyyobyugwsqjiqrydeacxnysyaxs", "jiqrydeacxnysyaxstukupcbxolobpuay", "jgpi", "inrdalfwjkcnsbmqyizmckqmltpzdecpkugdvduuckhezx", "pqrpoxkrseygkyitskyooncyicuphjqkgdcryvoi", "seygkyitskyooncyicuphjqkgdcryvoioziplo", "yooncyicuphjqk", "iocvrmxzckk", "alrlytevthjtzjyfjtmjicymkqcr", "zjyfjtmjicymkqcrojbbxtbuoiserxbqrxuuyjzsnrzrg", "kqcrojbbxtbuoiserxbqrxuuyjzsnrzrgb", "rojbbxtbuoiserxbqrxuuyjzsnr", "zsnrcvkt", "cvkdtypuouyrbyyxwhxzsruapabicy", "pmqbxlnihyjozutfxatckfsjw", "mqbxlnihyjozutfxatckfsjwwmfkfronkvzjgiqikvukerii", "lskpfwlivuqffrwpmzyhmvwdhu", "jynpymcbmwsgvvdgfictyszpboqmiitxeqv", "shjmhjmxq", "hjmhjmxqcsxrmrwwjsfyvfcfmbonqr", "tagd", "tshsajjrqshpkpgc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"uvgjgeeuu", "olnkfeouhcafrkruktegdtyjctdvonwnljekbqhiydnw", "lnkfeouhcafrkruktegdtyjctdv", "ktegdtyjctdvonwnljekbqhiydnwyyytguxjpwbn", "tegdtyjct", "dtyjctdvonwnljekbqhiydnwyyytguxjpw", "tdvonwnljekbqhiydnwyyytguxjpwbnjfgzrmguerfhxpm", "rmguerfhxpmfwgcaxgxvxwcggosqyn", "fheoyze", "fgqjvbxpmbftuuhfsjpumhs", "jvbxpmbftuuhfsjpumhsibmblwqod", "yhfasrsskrppszkcosnohyxvlnnsgrzhzstxy", "nohyxvl", "mtvkhjfehofalnezrvaobsh", "fa", "hezf", "vvtoaavdhdhczoramzwkwnruneqwhnjrwdud", "wnruneqwhnjrwdudcprohyazhcueeunxnzyjuxwyg", "uneqwhnjrwdudcprohyazhcuee", "rh", "vdvxbnijpotyvs", "lzwcodbw", "wcodb", "ssh", "yzttqxdaconmb", "box", "xygspgmxyf", "yfeggsxhxnzhvadyehcqbk", "oklswe", "lswexndytvpjihgxjmy", "scgclvmcpmddlaieossenqjzk", "bqyxsarpe", "drnrazgggihwqpo", "drnrazg", "rpscuncmrgrrxwuwsdhwgvvgqrkqrbplbz", "dhwgvvgqrkqrbplbzqmyzclvcr", "v", "ybiqwlgruvdcsdvseolhwwpnom", "eolhwwpnomsvrrcwtluxsbmeffyvtad", "jmndafhi", "peltcumshuszldrqvxumflddrgja", "rqvxumflddrgjamw"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"dexzldqzywu", "xzldqzywuliitderneyjlikdvgfasfxcihcilccskrgl", "dvgfasfxcihcilccskrg", "fasfxcihcilccskrglqnqwbmftuozcjbsamafgpklwxnclvds", "xcihcilccskrglqnqwbmftuozcjbsamafgpkl", "cskrglqnqwbmftuozcjbsamaf", "skrglqnqwbmftuozcjbsama", "bsama", "nclvdssxwwquibifdbeqmatqxhmhrcsehsnviwnqefft", "ifdbeqmatqxhmhrcsehsnviwnqe", "rmsircxayqmtebhgveooypltdrcjzrwuixcfhyki", "hgveooypltdrcj", "pltdrcjzrwuixcf", "uixcfhykiqsjekkgmensnucexosvswmimkrbih", "mimkrbihqmlvbfckpalukifxahwruhieleorobzdri", "mimkrbihqmlvb", "eorobzdrimbsemyhuovheuojxrwiyyxhsvkahyaqidzz", "iyyxhsvkahyaqidzzg", "zzgqsmpxwmzdbqxrgeaoyhxtcdpsaariqpceursfznmmtv", "wmz", "zdbqxrgeao", "qxrgeaoyhxtcdpsaa", "eaoyh", "mmtvhhopmgcgavklb", "upvfqajzmpldiekvvefskbaytopvlcngmijjbhcivfhecf", "fqajzmpldiekvvefskbay", "ekvvefskbaytopvlcngmijjbhcivfhecfzitjhkdbrg", "hcivfhecfzitjhkdbrgyegzaqlvh", "hsrz", "srzcuhqicimebaupqwnxgytbqsobnvnkkyh", "nx", "qsobnvnkkyhvqbwp", "qso", "qsola", "solan"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"bbbbabbeebecdcdbcdecaeccd", "cc", "ebcbbdecbdedbaebeebababebaaccacecddecedeceacacad", "cbbdec", "ede", "edbcbabbdadccddcdacacbeaeebbcbbbacade", "debccbccdedb", "accbabaececedbecdbaaabaeaeceeaeeadadbbdcca", "abecbecedcabacacdcdcbedec", "deccaeaaebcc", "dcbdebcddcabbceeaaccaaacdebaecbedaedd", "acbcbcba", "eedecceda", "be"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"eceecedccaddeebeadadbddcdbecadb", "edccaddeebeadadbddcdbecadbcacdcedcc", "caddeebead", "bddcdbecadb", "cbebdbadbeebdeeacdbaabc", "eeacdbaabccedccaadadbebeddcbbb", "aabccedccaadadbebeddcbbbeeadeecddaceacaead", "eeadee", "dbebeddcbbbeeadeecddaceacaeaddeeecacbddabda", "bebeddcbbbeeadeecddaceacaeaddeeec", "cacbddabdabcaddbcdcabcbdaebbbcdecddabeddbac", "bcaddbcdcabcbdaebbbcdecddabeddb", "ddbaceabcbaacceddbaecdabaddb", "bcbaa", "aecdabaddbedcdecceccbcdebbceb", "bcdebbcebbdedcdabdecedadeaedcaebebbdadcaaebcadd", "addbeaeaaedeabbceabdaaedabcdbcdbccdd", "dcadabeaedcabccaaaceabbdabcaedaead", "aaaceabbdabcaedaeadadaeedbdceeadecaabced", "aaa", "cabaeebebecacedabbcceabdaeccabebcaaaedcccade", "acedabbcceabdaeccabebcaaaedccc", "ab", "cabebcaaaedcccadeaebabebece", "edcccadeaebabebececadbb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 401;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"baeedaecaedadcecdccaecacbeeb", "aedadcecdccae", "edcdbacdcc", "bddecedbdecbbddababaeaaabaebbacbaaeaeabcabce", "ababaeaaabaebbacbaaeaeabcabceeaaabc", "aeecdbbbabbeddadabeeeacdacbdecbcbdadbad", "cbdecbc", "deceeeaaeecaeabbbaabcacdaecadcbadad", "adcbadadeebceaabee", "ebbeabeaedabdddddeeeaaedebbeae", "ddeeeaaedebbeaea", "d", "baebaeaecdaddddccbeddcdeaadcedcabaab", "eaadcedcabaabebaa", "bbabecececcabdadcacebbcacadecbaeececeaccbdacae", "bcacadecbaeececeaccbdacaebbb", "ebbbcadceeeadecbdbcbaeaeb", "dabcbeeaeabcdbdaaebacbaaabbbcbcdaeecbcbedcebd", "edecceadddebecdcccbcaeadadeaedbdcdacddcebcaeb", "bedecbae", "edcccebcbddeabddbadacbaaddebedaecacebcaceda", "ccebcbddeabddba", "bedaecacebcacedaadceeceeac", "dce", "decbaabeddcbcdba", "cbaabbdaebdababacbbebcbbbbeacddebcbbbadecabd", "adbdbcdabdbaeeaceaddacdcebccebdeebbdcbdc", "bdbcdabdbaeeaceaddacdcebccebdeebbd", "dccbeddccabbecbaddbbebeacbebdcee", "acbebdceececdadaadaedabcbccceccccbbaddbdcebac", "baddbdcebacaedddadcabddaedbcd", "cedbdbbcdedeabdaeeaaceeeebcceebdbaecaddebeacca", "bdbaecaddebeaccadbec", "ac", "dbaaedaaabdedddecccdceeeabdcadedebdbe", "bdcadedebdbedebe", "ce"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 737;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"dadceecbdeccccaaedeeabeea", "daacceeabee", "c", "aecbdeeeaaebbcdaada", "ddaabeddddbedddecccbeceabadddbabcbaacdcebcbc", "eddddbedddecccbeceabadddbabcbaa", "eddddbedddecccbeceabadddbabcba", "dbabadbbaabeceeedebbbccadd", "eceeedebbbcc", "cbcdebabeaebdeaaabddaddbbeeeda", "bbddbeedcbddbade", "dbeedcbddbadeadcbbcdaededccdabccddcecbd", "ddbadeadcbbcdaededccdabccddcecbddaacadabbddaad", "daacadabbddaadeabeaaadeaabcdbeceedabbdbddbacabbba", "cdebaeedabcadbecccabbeac", "aedcdbdeccebacdaceadcedbaaad", "beebcbbbcddcecdcaab", "bcbbbcdd", "adbeeddecddebdbdebaacaddeebeacbbcddc", "dc", "eabceeacaadbcbababcccadaba", "abcccadabaa", "acabd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 384;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"bcdbdddcccbeaebedddcebdbadceedaaabcad", "aae", "dadceabadbabccecdcbadbcadaece", "eebedabbdbcabdcdedbbabeeeaeecccbde", "ccbdebcccbddeabbccbbabeaadbdcececcccecdbbdea", "bdeabcdebedadeedaacdbcbdbbcedecddabdbebbaedda", "bcbabeaeddcaaaadececdeeaeedeacaaccabacda", "eaeedeacaaccabacdadcdeadbaeacaeadacebbcae", "bbeacccebb", "badadbeabbbebabdedccbbadedde", "cecdeedcabedcecd", "bbb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"abddaedebededbacecdeadadcaaadcbbabbaacbedabbb", "debededb", "dcbbabbaacbedabbbbedccbbcacbdbacdb", "bedabbbbedccbbcac", "dccbbc", "cacbdbacdbbcbddcdaabcaad", "aabc", "dcbeebbcbdaedcabcc", "aedcabccabeabdb", "beadedbeaddbaedadbdc", "addbaedadbdcbcdebcbc", "baedadb", "abedaaeebeeaceadab", "bddbeddccb", "dccbabbbcddedeccbbddbbebcbaec", "bcddedeccbbddbbebcbaecbccccaebcdaadbcceeeccaea", "eacebadebdcaecaadcbabedde", "cebade", "dcb", "bdddeb", "bed", "acbdeeeaebaaccacaecedcbbbdddbcacce", "acaecedcbbbdddbcacce", "cedcbbbdddbcacceaeadecaadeaacebbdaddc", "bdddacdaccbaebdebcacedbbed", "acdaccbaebdebcacedbbedeaabbcabecbbddacadedccea", "accbaebdebcacedbbedeaabbcabecbbddac", "deaabbcabecbbddacadedcceaaeacdedaed", "eaabbcabecbbddacadedcceaaeacdedaedddbeba", "bddacadedcceaaeacdedaedddbebacbd", "dacadedcceaaeacdedaedddbe", "edcceaaeacdedaed", "edaedddbebacbdbecdcebbbaadbdeeceeeebc", "aedddbebacbdbecdcebbba", "ebcbeaeccacbabdcac", "cacbabdcacecacaabbcdecceaeceaec", "cacaabbcdecceaeceaecddaceacddbdccccecadaee", "ddaceacddbdccccecadaeeeb", "cadaeeebceabdeeb", "beecacecbdbcbadcacdadeacaaccbbeeecdebbbeca", "aceddacbcacaeaebbedbeebaccb", "cbbbd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 519;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"cddacabcdbecdcbbdcbeabbacabbcbebda", "acabcdbecdcbbdcbeabbacabbcbebdabbdaaabdeb", "bdcccbcbdcacbe", "ccdaaadcabaceeae", "daaadcabaceeaeedccaabccccdbdcdacbbdbedebcdab", "cdacbbdbedebcdababebbdbcbecbdbccacdcbeadd", "bebbdbcbecbdbccac", "eceebeabaaadcbabbabccddebebadeecca", "cecbeabdbaaeeace", "cdddebcabd", "eaacebeccbac", "cdcdbbacacdaaabcdcadeccaecebccebcedadcd", "cbe", "ccaebdeaddedceeddaeeeecddaaeacbdedabbea", "ee", "dbbbbeeddeaedeceedecededaebbbeaceedbad", "edbadeaabbdacadadbceebcbc", "bdacadadbceebcbceedededcbccbbaece", "dbceebcbceedededcbccbbaecebdbaedbdeabeacbcdec", "eebcbceedededcbccbbaecebdbaedbdeabeacbcdecbadee", "baecebdbaedb", "cebdbaedbdeabeacbcd", "adbcd", "eaaaeabddceaceeeacdbe", "eaceeeacdbeacd", "ddcccbbabeceeeccbccbabbbeeccaaeaecbddcdab", "ccbccbabb", "b", "dbebabdeccabea", "eaeaaccdcabcddcaedeaac", "accdcabcddcaedeaa", "dd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 482;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"baeaedbcaebcaaaabeacbeaceacaeaeadda", "eacaeaeaddaaecebcceaaabee", "eacaadddc", "adddccbdaaaaedcdacecebeeacacdadccaa", "abbcdceeeeadbaabdebabaddddcacaabbabcaca", "cddecadecbabcabbdeecabaae", "cecdccbbddcadceaaaeebb", "bdebacaecdcecebebeacbcbcabcdbcdabdcacae", "bbdeacaaeddacaeadbddbecbedbdebccbaac", "cedcebdbdeeedcbdeedcbccceeaeeebaeeeebcaeedbdadba", "deeabadcddeeebbebeeeaedceabbdeedbbdaacceedabeced", "edabecedaaecdaebcdceeeecacebededbdbedaed", "adaeaacbae", "dda", "aedb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"dbd", "cbedecccebbbeab", "beccbceaaebacceceddabbede", "dbcedecaadaaecbceaaebbebcadeb", "ebcaeeccedbadeedddbdcaacdeabacddb", "ccedbadeedddbdcaacdeabacddbcc", "deabacddbccacdedbeabdebadeaeadaebeecebe", "cddbccacdedbeabdeb", "abecdbbdacaabecbeaadedbacbeabddddbaceccebd", "acbeabddddbaceccebdead", "aceccbecedc", "dcbacecdcbeadadeeabebdeaaac", "cdceb", "cebcaacadacecaaaedbddacedeedc", "abbceecbbddacdbccdecdaadadecad", "eecbbddacdbcc", "cbdeccd", "aceaddababecdeedabecdbeddbbaaceedcabdeecada", "cdeedabecdbeddbbaaceedcabdeecadabaeedbc", "cdeedabecdbeddbbaaceedcabdeecad", "deedaebeaaaeaaacdcbecddaaaddccdddca", "cabdbcdeebcdaeaccbbba", "eebcdaeaccbbbacbbcadebddebcaecbae", "bbaddceaaeadbabdbbabcddbcbdc", "eadbabdbbabcdd", "badecaacecceacdabbbdeebaaeccddebdebeeabebcecb", "acecceacdabbbd", "abebcecbbadeabbecabbeedddcacceebdcda", "cabbeedddcacceebdcdabdccbaadcdbebecebdcdcbace", "dccbaadcdbebecebdcdcbacebbdaddcbd", "dccbaadcdbebecebdc", "ccbaa", "dcacddecaebbeeebaebbbedaeedbcbba", "acabebecdebbceabdeeaeebbeceb", "eabdeeaeebbecebaebdaed", "eabdeeaeebbecebaebdaed", "eddcbddadebbeebdaebaeedeabcbabccebbbad", "bddadebbeebdaebaeedeab", "ee", "cbdabebcddcbbacee", "bbaceeebbaaabedbaab", "bbaaabe"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 669;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"caedddcadebddaacd", "edbcdaeddeaacdecbceabecabbbeabddd", "decceebaabaaaccddceecaeaadac", "deceaadeaaececb", "deaaececbeabcccabbdacaae", "baede", "beceeebbdedcdabbbdcabbbcdbceeeacabbecaebc", "dae", "daeaadbcaabaaceaceeddacadd", "ceeddacaddcaddddbacacdcbcddabe", "baeedcacbdbaceaadbcbedcacadebdadcaacbbbbd", "dee", "abecaabcbcbbcbcdaedbbddbecd", "deeaeabad", "bccbd", "cddabcbacacdebebecedbccaaddec", "aecccaaeecbcececaaadeeaaeaaeddebc", "deebdababcbb", "acadcdeaeeeadeacadecacceaabcccebcbdadaadadbd", "ebdeddaeaebcbabacdcdebbdbedaebccdcbcdeabddc", "ebcbabacdcdebbdbedaebccdcbcdeabddcedccccaaba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 453;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"abbbaaaabababbbbaabbaaaababaaba", "baaaabababbbbaabba", "aaaabababbbb", "a", "bababbbbaabbaaaababaabaaaabbaaaaaba", "ababbbbaabbaaa", "aaaababaabaaaabbaaaaabaaaabbaabb", "aaaababaabaaaabbaaaaabaaaabbaabbaaaba", "aaabbaaaaabaaaabbaabbaaabababaaa", "abbaaaaabaaaabbaabbaaabababaaaa", "baaaabbaabbaaa", "abbaabbaaabababaaaabbabaaababaaaaabaabaa", "baabbaaabababaaaabbabaaababaaaaabaaba", "baabbaaabababaaaabbabaaababaaaaabaaba", "aabbaaabababaaaabbabaaababaaaaabaabaababbbb", "bbaaabababaaaabbabaaababaaaa", "bbaaabababaaaabbaba", "aabababaaaabbabaaababaaaaabaabaababbbbabab", "babaaaabbabaaababaaaaabaabaababbbbab", "aabab", "aababaaaaabaabaababbbbababbbaaabab", "aaabaabaababbbbababbbaaababababbb", "aabaabaababbbbababbb", "aababbbbab", "abbbbababbbaaababa", "abbbbababbbaaababababbbbaaabbabbbaaaabaaabbbabb", "bbbaaababababb", "ababbbbaaabbabbbaaaabaaabbbabbbbaabbabbbaaaab", "bbbbaaabbabbbaaaabaaabbbabbbbaabbabbbaa", "baaabbabbba", "babbba", "bbaaaabaaabbbabbbbaab", "aaabbbabbbbaabbabbbaaaab", "aabbbabbbbaabb", "aabbbabbbba", "aabbbabbbbaabbabbbaaaabbbababaaaaabaaaabbb", "babbbbaabbabbbaaaabbbababaaaa", "abbbbaabbabbbaaaabbbababaaaaabaaaab", "bba", "aaaabaaaa", "ab", "abbba", "aa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"aabaaababbbbbaaaabbbabbbbabbbbababaaaabbabb", "abbbbabbbbababaaaa", "abbbbababaaaabbabbbaba", "bbbbaaaabaaaababbbb", "aabbabbabaaabaaabbaaababbabbbabbabbbabaabbbabaaa", "aaabaaabba", "a", "babaaababaaaaaabaabbabababbabbababbbaaabababab", "babaaaaaabaab", "aaaaabaabbabababbabbababbbaaabababababaabaab", "aababbbaababbbbaaaabbabaaabbbabbba", "ababaabaabaabbabaaaabaabbbaaa", "bbbaaaaabaaaaaaaabbbbbabaabb", "aaaaabaaaaaaaabbbbbabaabbbbbbaaaabbabbaabbbab", "baaaaaaaabb", "aa", "bababbbaaaabbabaabbbabaababbaaabbaabbbbbb", "babbbaa", "a", "abbaaabbaabbbbbbababababbaba", "abbaabbbbbbababababbabaaabaa", "bbaabbbbbbababababbabaaabaababbaabab", "a", "babbabaaabaababbaababbaabaaabbbba", "aabaaabbbbaabbbaabaabbbaaaba", "abaabbababaabbabbaaa", "bbaaababababaababa", "ababaababababababbbaabaab", "aababababababbbaabaabaabaabbbab", "aababababababbbaabaabaa", "aabbbabbbbbababbaaabaabbbbbbaa", "baaabaabbbbbb", "bbbbbbaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"baabbbabbbbbabbabaabaabbabbabbbbaababa", "abbaaba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"baaaaaabbbabbbaaaabaaababbaa", "bbbabbbaaaabaaababbaabbbbbbaaababaaababbabba", "babbaabbbbbbaaababaaababbabbabbbbaabbabba", "babaaababbabba", "bbab", "aaaaaaaaaaaabaababababaaaaabaabbbaaababbaaab", "aaababbabaabaababbbbaaababbbaaaa", "bbbbbaaabb", "aaabbbbabbbbaaaaaabbabaaaabaaaaabaabbaaa", "abbbbababbbbabaabbaaabbaababbbbaababbbaa", "babaabbaaabbaab", "baababbbaabbaabababaababaaba", "aabbaabababaababaabaabbbababbbbab", "abaabaabbbababbbbababaabba", "aababbaabababbbbaabbabaaababbbaabaababaaaba", "bbaabb", "babbbaab", "aabaaababbbbabbabbbaaabaabaaababababaabaab", "bbb", "abbabbbaaabaabaaababababaabaabbbabbbaabaab", "abaabaaababababaab", "bbbaabaabbbba", "ababbba", "aaabbababaaaaaaabaaaaabbaaaabaabab", "aaabbaaaabaababaaabaaaabbababaaabbbbbabaaabbababa", "abaaaabbababaaabbbbbabaaabbabababbbbaaaabbabbbaa", "baaaabbababaaabbbbbabaaabbabababbbbaaaabbabbb", "c", "babbbaaabababbabbaaabbaababaaaa", "baaabababba", "abbabbaaabbaababaaaaaabaaabbbbbabbaaabaaab", "abbaaabbaababaaaa", "abbaababaaaaaabaaabbbbb", "bbbbabbbbbbbbaabaabaaabbabaabbbbaabbbaba", "baabaabaaabbabaabbbbaabbbabaaaaababbaabbaaaab", "aaaaababbaabbaaaabbbaabaaabb", "aaaaababbaabbaaaabbbaabaaabbabbaaaaaaababb", "aabaaabbabbaaaaaaababbababbbab", "aaaaaababbababbbabbababbbabbabaabaabbab", "aaaababbab", "bbbbbba", "babaabababaabbabbaaaaabaab", "abbaaabbbabbbbbaaababbbbbaabaabbaa", "abbbabbbbbaaababbbbb", "babbbbbaabaabbaaabaaaabaababb", "b", "aab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 679;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"babaabbbaa", "abbbabbbbababaabaaaabbaabaabaabaabaaab", "bbabbbabababbaaabbabbaaabaababaabbbaaabbbab", "aba", "aaaaabaaaaaaaabbabbbbaababaabaabbaaa", "aaaa", "aaabbbbbaabbabbbbbbababbbabab", "baaaaababbbaaabbabbaabaab", "aaaaabbbaabbaabbabaaaaabaababbbbaba", "aaababbbbbbbbabaaaaababbaaaaaa", "aaaababbbbaabbbbbaabbbabbaabbbabaabbabbbbbababaab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"aaaaabaaabaaabbaabbabbba", "baaaaaabbbbbabaaaababbbaabaabaababbbbaaaaaabb", "bbaaabaa", "bbbbbabbabbaaabbbabbaabbbabaaaaaa", "a", "aaaaaabbaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"baaaaabbabbabaabaaaaab", "ab", "ba", "bbbbaabaaaaaaababbbaba", "abbbababbb", "babaab", "abaaabaabbbbbbabb", "abaabbbbaababbaaababb", "b", "aaabababa", "abaaababbaabbbbbaabbaaaa", "abaabbaaaaaabaaabbaaababaabbabbababbabaaaabbaabb", "baaaabbaabbaabbbbbaabaabbbabbabbbbab", "abbbaaaaaababaaaabbbabbbbbbabb", "ababaaabbabbbbaaabaaabbabbabbbaabaabbbbabaaabb", "bbabbbaabaabbbbabaaabbabbababbaaaabbaabbbbab", "babbbaabaabbbbabaaab", "abb", "abbbaaabbaaaaabaabbbababbabaabaabbabbabbbaababb", "babbbbbaaabaaabbbbaababbabbbbbababbabbba", "bbaabbaabaaab", "ababbbaabbababbbabbabababbabbaaabababb", "abbabbaaababab", "baabbbaaaaaababbbabbbabaab", "bbababababbaaabbaaabbaaaaababbaabbabbaababaaba", "aabaabbaaa", "bbbaaababbaaabbaabbbaabbbbaababababbabbabba", "aaaabbbbbbaabbabbaabbabaabaabbbaaaaabbb", "ba", "aaabbaabaaabaabbaa", "bbaaaabbababa", "abaaabbbbbbbbaabababbabaaabb", "abbbaababbababbabbbbbaabaababbb", "bbbbbaabaababbbbbaabbabaaabaabbbbabbabb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 673;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"baabbabbaaaabab", "aabb", "aabbbabbaaaababaabbbaaabbbbabaaaaa", "abaaaaabbbaabbbababaabaaabaaaabbbabbaaabbaaabaaab", "abbaaabaaab", "abababb", "aabaaaababababbaaaabaaaaaabab", "ababbbaaabbbbbabaab", "bbbaaa", "baaaababbb", "baaaaaaabaaababbaabbaabbbbababbabab", "bababaabbbbabbbbabababaaaabbabbbbbab", "ababaabbbbabbbbabababaaaabbabbbbb", "bbabbbbbabaabaabaaaabbbbbabbaaa", "abaabaaaabbbbbabbaaababbbbb", "a", "bbbbaba", "ababbab", "baabbbbbabaabbabaabbabaabaaaaaabbbab", "babbaaabbbababbaaaababbbaa", "bbbaaab", "babbaaabbabbabaaabaababbaabbabbaaa", "abaaaabba", "bbab", "aaabaabbbaababababbbbaba", "babababbbbabababababbbabbabaabbbbabbbaaaabbbbbaa", "bbabbabaabbbbabbbaaaabbbbbaaaabababbaababaabbaba", "aaaabbbbbaaaabababbaababaabbabaaabaabbbbaaba", "aabb", "babbbabaabbb", "bbbaaabbaababbbaabbabbbbabaabbbbabaabaabbba", "abbabbbbabaabbbbabaabaabbbaaaaabaababaa", "abababbbba", "bbaabbaaaabbabbabaaabbbbabaaaabba", "baaaabbaaabbbbbaabbbbbbbaaaaabbabaababbaa", "aaabbaaabbbbbaabbbbbbbaaaaabbabaababbaabbbabbbbab", "abbaabbbabbbbababbbabaabbb", "bbababbbabaab", "aabb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 598;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"bba", "b", "aaabbabbbabbaaabbabbabababbbbb", "babbaabaabbaaaabbaababaabaababbbbababbabbab", "abbbbababbaaaabaaabbbbbbaababba", "babbba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"bbabbbabbbbabbbaabaabaabba", "bbabbbabbbbabbbaabaabaabbabba", "babbbabbbbab", "babbbabbbbabbb", "abbbabbbbabbbaabaabaabbabbabbbababba", "bbbabbbaabaabaabbabbabbbababbaabbbaaabbaaaba", "abbbaabaabaabbabbabbbababbaabbbaaab", "ab", "baabbabbabbbababbaabbbaaa", "aabbabbabbbababbaabbba", "bbabbabbbababbaabbbaaabbaaab", "babbbababbaabbbaaa", "babbbababbaabbbaaabbaaabaab", "ababbaabbbaaabbaaabaabbaababbbbbbaabaaaababababb", "babbaabbbaaabbaaabaabbaababbbbbbaabaaaa", "babbaabbba", "bbaabbbaaabbaaabaabbaababbbbbbaabaaa", "aabbbaaabbaaabaab", "abba", "abbaaabaabbaababbbbbbaabaaaababababbabaaabaab", "baaabaabbaababbbbbba", "aabaabbaababb", "aabbaab", "aababbbbbbaabaaaababababbabaaabaaba", "babbbbbbaaba", "aa", "b", "abaaaabababa", "ababbabaaabaabaabbbbabaaaaaabaaababbbb", "babbab", "abbabaaabaabaabbbb", "baaa", "ab", "abaabbbbabaa", "bbabaaaaaabaaababbb", "bbabaaaaaa", "aaa", "baaababbbbbb", "aaababbbbbb", "a", "bbbbb", "bb", "b", "b", "ab", "ba", "b", "bab", "baab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"asd", "sdf", "dfg", "fgh", "hgj", "hjk", "jkl", "asd", "wqe", "zxc", "asd", "asd", "asd", "wqe", "sdaf", "hdgh", "xzc", "ahsdg", "wklqjl", "skladj", "xmc", "aklsjdlkajdlalkshfklalksh", "iwuoiklsajdkjldklalksdj", "mcnvaosd", "dfkjsghjkfh", "kjsdfdklsj", "asd", "kldsjfklsj", "jdkkd", "dsdsd", "dsdsds", "dsdsdsd", "dsdsklj", "kj", "kur", "mama", "ti", "deba", "pederast", "dolen", "da", "te", "eba", "v", "guza", "debel", "gaden", "dolen", "pedalski", "smachkan"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"a", "a", "b", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"abc", "ca", "abc", "ab", "pa", "a", "abc", "pabc", "a", "bca", "cpa", "acp", "abccaabcabpaaabcpabcabcacpaacp", "abc", "ca", "abc", "ab", "pa", "a", "abc", "pabc", "a", "bca", "cpa", "acp", "xx", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaabcaaaa", "aaaaqq", "aaaaaqqqq", "aaaaaaaqqqqq", "qq"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"a", "aa", "aa", "aa", "aaaaaa", "aa", "aa", "aaaa", "aaa", "aa", "aa", "aaa", "a", "aaaaaaaaaaaa", "aaaaaaa", "aaaa", "aaa", "a", "aaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"ababab", "ab", "ba", "ab", "ba", "ab", "ba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"ab", "bc", "de", "ef", "abcdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"abcdef", "ab", "de", "bc", "ef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"abcd", "bc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
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
    vector<string> words = {"abcdef", "cde", "defgh", "g"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"abc", "ccc", "cde"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"abcdefg", "ab", "bc", "cd", "ef", "abcdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"baba", "babae", "bababae", "cererer", "cerer", "erer", "mnm", "n", "nm"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"abcdefg", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"a", "abss", "ss", "sa", "aab", "ac", "sobaka", "akkaunt", "aunter", "rres", "e", "kent"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"a", "ba", "a", "ba", "c", "cc", "ccc", "cccc", "cd", "ccd", "cc", "ccd", "ccdd", "ccddd", "ddd", "dbc", "ddbc", "dddbc", "dddb", "ddd", "dd", "d", "bc", "d", "dd", "ddd", "dd", "d", "ddw", "wbca", "www", "ww", "w", "bca", "wb", "wc", "wa", "aa", "aaa", "asdf", "sdf", "asd", "fd", "df", "ff", "f", "f", "d", "f"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"a", "aaa", "aaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"ab", "bc", "def", "ghi", "fghi"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"a", "b", "c", "abca", "bca"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"abcdes", "esf", "desesf"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"abc", "ca", "dsjfsdkhfskldhfls", "fasdas", "asdasdasdasdasdasdasd", "aaaaaaaaaaaaaaa", "fffffffffffffffffff", "asfasdasdqwedqwdqwsdascdasaw", "qwdqwddsdasdwdfqwfqwfefedf", "qwdqwddasddddddwq"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"ab", "bc", "bcdef", "abc", "abcde", "abcdf", "abcdefabcdeabcdfabcdef", "abc", "def", "bcdefa", "abcdefbc", "a", "b", "cd", "def", "bcdefcdefabc", "abcdefabcdef", "deabc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"asgdhfjgueeejdhfffjdejdddrrfrfffrf", "rfffr", "fffrfrhdjfssdfdjjghhjjshhdhhdjfhhdj", "hdj", "asgaaaaa", "ga", "gaa", "sga", "aaaa", "gagagagaga", "afartaartaartaarta", "artartartart", "artartartart", "artartpa", "art", "popopoooooppopopo", "pooppopopopo", "popopopo", "opopopopo", "popop", "popop", "opopppoo", "oopp", "popopppop", "klklkllllkkkll", "hghghhghhghh", "hghhghhhghhghhghhghhghhhghhghhghhghghhg", "hghhhghhg", "ghh", "h", "hgh", "hgh", "ghg", "qopqopqop", "poqpoqpoq", "q", "p", "o", "opq", "pqo", "pq", "po", "asd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"aaaaaaa", "ab", "c", "abc", "abcabccb", "aa", "aaeecdd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"abc", "bcd", "abcd", "cde", "edg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"abcdef", "ab", "bc", "de", "ef", "asdfg", "asrer", "erqwga", "asfd", "asg", "ad", "fa", "sdf", "asgas", "fa", "sf", "saf", "a", "wr", "sfasdfgagasdfasf", "asdfasdfag", "saf", "a", "fa", "sg", "z", "g", "a", "gasf", "as", "f", "asr", "wq", "r", "saf", "as", "fa", "sf", "w", "er", "wa", "r", "asf", "as", "f", "as", "r", "asfgasg", "ag", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"aaaaa", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"bcdefcdef", "fcde", "ef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"a", "abcab", "ab", "abc", "bcabd", "abd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"abcdadfdfdsafdag", "gfadgfa", "gfdaaaaaa", "yut"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"a", "b", "ab", "b", "b"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"abcdef", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"ab", "a", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"abcdef", "bc", "aefg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
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
    vector<string> words = {"abc", "ca", "abc", "abc", "ca"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"abadc", "ad", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"abba", "ab", "ba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"aaaaa", "a", "aaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"aaaaab", "ab", "aab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"auewogisj", "isjeugs", "wogisjis", "auewo", "abc", "bc", "sauew", "klsigjekwwq", "sbc", "sbc", "sbc", "wplkwwq", "auewogisjisjeus", "sbcwplkww"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"abcdef", "abcd", "abc", "def", "lmnop", "mnop", "nop", "p", "qwertyu", "wertyu", "tyu", "yui", "hjkl", "jkl", "asdfgh", "fgh", "dfgh", "sdfghj", "fghjkl", "qwertyu", "tyuiop", "yuiop", "tiop", "opi", "iop", "klp", "lp", "qertyui", "rtyui", "poi", "oi", "qwerty", "yui", "uiop", "uiop", "abcd", "a", "b", "c", "d", "e", "f", "abcdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"a", "a", "a", "a", "a", "a", "a", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
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
    vector<string> words = {"qqqqqqqqqqqqqqqqqqqqqqqq", "wwwwwwwwwwwwwwwwwwwwww", "eeeeeeeeeeeeeeeeeeeeeeeeeeee", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "tttttttttttttttttttttttttttttttttttttttt", "yyyyyyyyyyyyyyyyyyyyyyyy", "uuuuuuuuuuuuuuuuuuuuu", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "oooooooooooooooooooooooo", "pppppppppppppppppppp", "aaaaaaaaaaaaaaaaaaaa", "sssssssssssssssssssssss", "dddddddddddddddddddddd", "ffffffffffffffffffffffffffffffffff", "ggggggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhh", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllllllllllllllllll", "zzzzzzzzzzzzzzzzzzzzz", "xxxxxxxxxxxxxxxxxxxxx", "cccccccccccccccccccccccccc", "vvvvvvvvvvvvvvvvvvvvvvvvv", "bbbbbbbbbbbbbbbbbbbb", "bbbbt", "t", "yyuuu", "uu", "yu", "u", "iiiiiiiiiiiiiiiiiiiiii", "wwwwwwwwwwwwwwww", "eeeeeeeee", "qqqqqqq", "sssssss"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"abc", "acd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"abc", "bcd", "cde", "cd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"aabbcc", "bbcc", "bbcc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"ab", "bc", "de", "ef", "abcdef", "def", "efg", "bcd", "abcdefgh"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"abacaba", "a", "ab", "aba", "bac", "acab", "abac", "aba", "c", "c", "cc", "c", "cc", "piko", "l", "pikol", "afonyayayayayayayaayayayayayayayaayayayayaayayaya", "afonyayayayayayayaayayayayayayayaayayayayaayayaya", "ayayayaayayayayayayayaayayayayaayayaya", "yaayayayayaayayaya", "aa", "abracadabra", "bra", "ra", "aa", "braa", "raaaaaa", "l", "q", "f", "sssssss", "alisa", "salisa", "alisa", "alisalisa", "dsfsdaf", "sdfasgrew", "sdfrweifdsgweriojufdlskjaiechawpaseunxfcafda", "eawfdsfeuwfdasf", "hgfhfgh", "safaeaefeawf", "dsafsdfghdsfhgs", "sdafasdfasdfsadfsad", "pika", "sdf", "pika", "aly", "yyy", "yyyy", "alyyyyyyy"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"abcab", "ca", "ab", "ca"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"mama", "ama", "aqo", "yq", "qo", "amaq", "amaq", "w", "w", "a", "a", "m", "a", "m", "fsd", "fg", "re", "rgdf", "g", "gs", "s"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"abcbc", "bc", "fg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"moo", "opalllllllll", "lllll", "lalalalaa", "aalo"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"abc", "defab", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"fadsafd", "sdsf", "fsadff", "sfafdsqr", "fadff", "dasfa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"aab", "abcdefghij", "abcdefghijklmn"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"abcde", "bcx"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"ab", "aba", "abab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"abcdef", "bcdefg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"ababc", "abd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"ab", "abcd", "bc", "ef", "bcd", "bc", "b", "bb", "hy", "hyy", "yyj", "yjkl", "yjkll", "kllty"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"abcdabc", "d", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"abc", "bca", "bc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"abcd", "cdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> words = {"qwer", "qw", "ew", "rewq", "qwer", "rew", "we", "rew", "re"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> words = {"ab", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> words = {"a", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> words = {"mama", "ama", "aqo", "yq", "qo", "amaq", "amaq", "wwaw", "w", "w", "aajksjdk", "sjdajs", "saka", "skjhdao"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> words = {"auewogisj", "isjeugs", "wogisjis", "auewo", "abc", "bc", "sauew", "klsigjekwwq", "sbc", "sbc", "sbc", "wplkwwq", "auewogisjisjeus", "sbcwplkww", "kaowiejgksd", "kao", "kao", "qrst", "kaowiej", "kaqr", "wiejka"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> words = {"abc", "bc", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> words = {"abde", "bc", "de", "ef", "abcdef"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "aa", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> words = {"abcd", "cde"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> words = {"abcdefghijklmnopqrstuvwxyz", "klmnop", "nop", "pqr", "qrst"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> words = {"abababababcddfdfggf", "ababcd", "dfdf"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> words = {"abc", "abcd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> words = {"abadce", "ad", "dc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> words = {"dfazef", "zefff", "ffff", "azeggth", "g", "gth", "azz", "ertt", "tyhtyhjj", "hhh", "heh", "qsffsdffaf", "azzza", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> words = {"abc", "def", "defg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> words = {"abcdef", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> words = {"ab", "bc", "de", "ef", "abcdef", "abc", "cacc", "caaaaa", "aaaca", "acacac", "ac", "ca", "acac", "acrush", "rushendash", "dasho", "shodown"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> words = {"abc", "cd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> words = {"abc", "b", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> words = {"abcdef", "de", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> words = {"ab", "c", "abc", "ab", "c", "bc", "abc", "a", "a", "a", "abc", "c"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> words = {"abc", "a", "c", "b"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> words = {"abc", "qrstuv", "qrs"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> words = {"abcd", "ax"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> words = {"aaaaaaa", "ab", "c", "abc", "abcabccb", "aa", "aaeecdd", "cdsdfasgweaohi", "fcodsgf", "awegia", "asdgthh", "wegsdf", "dfsdgwedsf", "dfsdfsdfsdfdsfs", "dfsdfsdf", "dfsdfsdf"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> words = {"ab", "ac"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> words = {"abcdef", "def", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> words = {"abcecde", "cde", "ce"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> words = {"asdasdas", "asda", "asjhdk", "as", "asfdasdfasjfklasjlk", "asgfhgajsdfkgasdfasdfasdf", "asdfasda", "fdsa", "fd", "asdfghte", "sd", "asfdsa", "sdfasdhfgas", "asfasdfafefasd", "sdfcasd", "sd", "f", "fca", "sd", "ca", "s", "dc", "s", "d", "f", "we", "a", "s", "d", "fsd", "f", "asd", "asc", "sdc", "s", "dc", "sdfasdfasd", "f", "seas", "d", "fd", "fas", "f", "d", "fas", "af", "sa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> words = {"bca", "cau"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> words = {"abab", "ab", "aba"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> words = {"asdf"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> words = {"abc", "ba", "ac"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> words = {"a", "a", "a", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> words = {"abcdef", "ab", "bc", "de", "ef", "ininininty", "ininazz", "isininity", "init", "asdf", "dsfasgasdg", "zy", "yzyz", "yzyz", "annn", "nnv"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> words = {"ab", "bc", "de", "ef", "abcdef", "ef", "f", "f", "f", "f", "f", "g", "g", "rt", "rte", "rrd", "ered", "d", "d", "d", "d", "d", "d", "d", "ppp", "po", "opo", "o", "o", "o", "o", "oytutyu", "fg", "ggg"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> words = {"abcd", "bc", "efg", "ef", "efgh", "aaaaaaaaa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> words = {"ab", "cd", "c", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> words = {"abcd", "cd", "bc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> words = {"aabbcc", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> words = {"abdef", "abc"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> words = {"abcd", "bcde"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> words = {"abcdef", "abcyui"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> words = {"bac", "baa"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> words = {"maria", "rihana", "ariana", "ana", "a", "n"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> words = {"ababa", "ababd"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> words = {"aaa", "a"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> words = {"abcdef", "ef", "ab"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> words = {"aaaaaaaaa", "aa", "aaaaaabbb"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> words = {"abc", "cde", "efg", "ghi"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> words = {"bc", "ef", "abcdef", "ab", "de"};
    OrderedSuperString* pObj = new OrderedSuperString();
    clock_t start = clock();
    int result = pObj->getLength(words);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11919691&rd=12181&pm=9823
********************************************************************************
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
#line 20
#define FORE(i, a, b)   for(int i = int(a); i <= int(b); ++i)
 
#line 26
#define IT(c)           __typeof((c).begin())
#define FORIT(i, c)     for(IT(c) i = (c).begin(); i != (c).end(); ++i)
#define SZ(c)           (int((c).size()))
 
#line 174
struct OrderedSuperString {
    int getLength(vector<string> words);
};
 
#line 286
int OrderedSuperString::getLength(vector<string> words)
{
    string res;
    int last = 0;
    FORIT(it, words) {
        FORE(pos, last, SZ(res)) {
            int n;
            for (n = 0; n < SZ(*it); ++n) {
                if (pos + n >= SZ(res)) break;
                if (res[pos + n] != (*it)[n]) goto fail;
            }
            last = pos;
            if (n < SZ(*it)) res += string(it->begin() + n, it->end());
            break;
        fail: continue;
        }
    }
    return SZ(res);
}

********************************************************************************
*******************************************************************************/