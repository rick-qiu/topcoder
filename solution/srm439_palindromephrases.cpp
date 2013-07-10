/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10382
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

class PalindromePhrases {
public:
    long getAmount(vector<string> words);
};

long PalindromePhrases::getAmount(vector<string> words) {
    long ret;
    return ret;
}


int test0() {
    vector<string> words = {"a", "ba"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"ab", "bcd", "efg"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"a", "bba", "abb"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"aabccc", "ccbbca", "a", "acaabb", "aaa", "aab", "c", "babb", "aacaa", "b"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16926797485;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"a", "b", "aa", "ab", "ba", "bb", "aaa", "aab", "aba", "abb", "baa", "bab", "bba"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1081925;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"baabaabbaba", "aaabaa", "b", "ab", "bbbbabbaa", "aabbbab", "bbbbaaa", "aaabaaaa", "bb", "bbba", "aaaaaaab", "bbbb", "abbbbaabaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 166;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"bbbb", "bbaaaaaaa", "aabbbababb", "b", "aba", "aaaaba", "babab", "aaabaaaaaaabb", "aabbb", "bbbbbbaa", "aaabaaa", "bb", "abb"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 371;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"aa", "a", "b", "aaabaaaabaab", "bbaababbbbbbb", "bb", "ababaaaaaaa", "ba", "bbb", "bbbbbbbb", "abba", "aaabba", "aaaaaaaababb"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1353;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"abbbaaa", "bbbbbbbbbb", "ba", "bbb", "bbbb", "aaaaaabbb", "baabbbaaaaa", "aa", "aaaaabaa", "aaa", "bbbbba", "aaabbbbabbb", "bbbbbbbbbbbb"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1527;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"bbbaaa", "bbb", "abbbbbb", "b", "bbbbbb", "bbbbbbb", "baaaaabbbbb", "aaabbaaaaaaa", "aabbbbbbaaaab", "aaaaaaaaaaa", "aaaaa", "aabbaaabbbbbb", "a"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2743;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"bbbba", "bbbaaa", "abbb", "baa", "abaaa", "aaaaaaaaa", "aaa", "a", "abbbb", "aaaaabbbbbbb", "bb", "abbbbbbbbbbb", "bbaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3449;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"b", "bbbb", "aaaaaaaaa", "bba", "aa", "aaaaa", "bbbaaa", "aaabaaaab", "bbbbbbbb", "babbbbbbbbbbb", "aaabbbbbb", "a", "bbaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6265;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"bbbbb", "bbbba", "abbbbbbbbbb", "aaaab", "bbbbabbbbb", "aaa", "aaaaab", "bbb", "bb", "aaaaa", "aaaaaaaaa", "aaaaaaaaaa", "bbbbbaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 22318;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"aaaab", "bbbbbbbb", "bbbb", "b", "bbbbb", "aaaabb", "aaa", "a", "bbaaaa", "aaabbbaaaaaa", "aa", "aabb", "bbbbbbbbb"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 137781;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"aaaaaaaaa", "aaaa", "b", "aaaaaaaaaaa", "bbb", "aaaaa", "bbaaa", "bbbb", "bb", "bbbbbb", "bbbbbabbbbba", "aa", "bbbbbaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 161460;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"aaaa", "ba", "aaaaaaa", "a", "ab", "bbb", "bbbbbbb", "aabbbbbb", "bbbbaaaabbb", "bbbbb", "b", "aa", "aaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 178351;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"bb", "bbbbbbbbbbbb", "a", "bbb", "aaaa", "b", "bbbbbbbb", "bbbbbaaaaa", "bbbbb", "aa", "ba", "aaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 568258;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"z", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1417768545;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"z", "az", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 348050484;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"z", "aa", "aza", "aaaa", "aazaa", "aaaaaa", "aaazaaa", "aaaaaaaa", "aazaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3391484;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"ddaad", "ca", "daa", "abbbaa", "dd", "aa", "bbb", "ccbbbba", "bbdcccdd", "bbbbccbb", "cccdd", "dccc", "d"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 187;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"abb", "acccb", "dc", "c", "bbbbb", "ccc", "ddc", "a", "d", "cdccc", "dd", "da", "addbabaadaddd"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 660;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"d", "a", "b", "bb", "c", "cb", "ab", "bc", "cbb", "ddcc", "cc", "ccd", "dddc"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 19506;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"abbb", "bb", "a", "b", "ab", "c", "cc", "cca", "ba", "bbb", "ccc", "cbb", "cbc"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 30651;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"bbb", "aaa", "a", "aa", "b", "baa", "bb", "bbbb", "baaa", "aaaa", "ab", "bbaa", "aab"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1247825;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"aaaaaaaaaaaaa", "vvvvvvvvvvvvv", "vvvvvvvvvvvv", "vv", "vvv", "vvvv", "vvvvv", "vvvvvv", "vvvvvvv", "vvvvvvvv", "vvvvvvvvv", "vvvvvvvvvv", "vvvvvvvvvvv"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1417768545;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"abcdefghijklm", "vvvvvvvvvvvvv", "vvvvvvvvvvvv", "nopqrstuvwxyz", "vvv", "vvvv", "vvvvv", "vvvvvv", "vvvvvvv", "vvvvvvvv", "vvvvvvvvv", "vvvvvvvvvv", "vvvvvvvvvvv"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 108505111;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"zbmadgjlqetu", "b", "z", "m", "g", "a", "l", "j", "d", "u", "q", "e", "t"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"g"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"aaaaaaaaaaaaa", "bbbbbbbbbbbbb", "ccccccccccccc", "ddddddddddddd", "eeeeeeeeeeeee", "fffffffffffff", "ggggggggggggg", "hhhhhhhhhhhhh", "iiiiiiiiiiiii", "jjjjjjjjjjjjj", "kkkkkkkkkkkkk", "lllllllllllll", "mmmmmmmmmmmmm"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"ofujhrpdlitty", "jabdrwtizxfmy", "shblupvdfpbay", "nuvrylrxphhhd", "yttildprhjufo", "guljxqbitnlbf", "sshyjuazudhta", "athduzaujyhss", "fblntibqxjlug", "yabpfdvpulbhs", "ybbfqyfyqfbby", "ymfxzitwrdbaj", "dhhhpxrlyrvun"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 151945;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"xsomedozrof", "fo", "vdkvmgcrvky", "haiforzodemos", "dvofkgjzudhrq", "wykvrcgmvk", "wdfiqvfzgwaw", "xqrhduzjgk", "pueaqold", "iahaxdloqae", "gzfvqifd", "xa", "up"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"sqqqp", "lgnrof", "icjplywdjc", "nnztdi", "yyvd", "dvyy", "forngljpqqqs", "dwylpjci", "zqjewjwejqz", "idtznnny", "yn", "cj", "j"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1370;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"tloluntkgfwo", "lpvitywywy", "owfgktnulolt", "tivplzezgtmiq", "nxqtriomo", "zjxmvuomnyi", "qqpvsvmqdtjw", "qduawfbrxpyc", "wjtdqmvsvpqq", "ylyomoirtqxn", "cypxrbfwaudq", "iynmouvmxjz", "ylyqimtgzez"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1898;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"lkgiglfjft", "llmqrzsetqgf", "eihlhwhlcsr", "llsjtmgai", "iecpzofybo", "ismiylvqr", "fgqteszrqmll", "yhfykkyfhy", "rsclhwhlh", "ietfjflgigkl", "obyfozpcei", "rqvlyimsi", "iagmtjsll"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 12661;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"aba", "ababa", "abababa", "ababababa", "abababababa", "ababababababa", "b", "bab", "babab", "bababab", "babababab", "bababababab", "babababababab"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16893295;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16926797485;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"a", "aa", "aaa", "aaba", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1416025405;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"a", "ab", "ba", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 450689647;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"a", "aa", "aba", "aaaa", "aabaa", "aaaaaa", "aaabaaa", "aaaaaaaa", "aaaabaaaa", "aaaaaaaaaa", "aaaaabaaaaa", "aaaaaaaaaaaa", "aaaaaabaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1803349;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaazaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1434328329;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1302061344;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"aaaaaaaaaaa", "aaa", "aaaaaaaaaa", "aaaaaaaaa", "a", "aaaaaaa", "aaaaaaaa", "aaaaaa", "aaaaa", "aaaaaaaaaaaa", "aaaa", "aa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16926797485;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "bbbbbbbbbbbbb", "aaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1434337685;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"b", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1417768545;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaa"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16926797485;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"aaaaaa", "bbbbbb", "cccccc", "dddddd", "eeeeee", "ffffff", "gggggg", "hhhhhh", "bbbbbbaaaaaa", "ddddddcccccc", "ffffffeeeeee", "hhhhhhgggggg"};
    PalindromePhrases* pObj = new PalindromePhrases();
    clock_t start = clock();
    long result = pObj->getAmount(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1896;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13747&pm=10382
********************************************************************************
#include<iostream> 
#include<ctime> 
#include<cstring> 
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
#include<cstdio> 
#include<cstdlib> 
#include<fstream> 
#include<cassert> 
#include<numeric> 
#include<set> 
#include<map> 
#include<queue> 
#include<list> 
#include<deque> 
 
using namespace std; 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
 
typedef long long LL; 
 
map<pair<string,int>,LL > cache[1<<13]; 
struct PalindromePhrases  
{ 
  int n; 
  vector<string> w[2]; 
  bool isPalindrome(const string& s) 
  { 
    int i = 0, j = int(s.size()) - 1; 
    while(i < j && s[i] == s[j]) { ++i; --j; } 
    return i >= j; 
  } 
  int getCommonPrefix(const string& a, const string& b) 
  { 
    int ret = 0; 
    while(ret < a.size() && ret < b.size() && a[ret] == b[ret]) ++ret; 
    return ret; 
  } 
  LL go(int used, const string& excess, int reversed) 
  { 
    if(used == (1<<n)-1) return isPalindrome(excess) ? 1 : 0; 
    pair<string,int> key(excess, reversed); 
    if(cache[used].count(key)) return cache[used][key]; 
    LL& ret = cache[used][key]; 
    ret = 0; 
    if(isPalindrome(excess)) ++ret; 
    for(int i = 0; i < n; ++i) if((used & (1<<i)) == 0) 
    { 
      int wl = w[0][i].size(); 
      int pl = getCommonPrefix(w[reversed][i], excess); 
      if(pl != wl && pl != excess.size()) continue; 
      if(pl < excess.size()) 
        ret += go(used | (1<<i), excess.substr(pl), reversed); 
      else 
        ret += go(used | (1<<i), w[reversed][i].substr(pl), 1 - reversed); 
    } 
    return ret; 
  } 
  long long getAmount(vector <string> words)  
  { 
    w[0] = w[1] = words; 
    n = w[0].size(); 
    for(int i = 0; i < n; ++i) 
      reverse(all(w[1][i])); 
    for(int i = 0; i < (1<<n); ++i) cache[i].clear(); 
    return go(0, "", 0) - 1; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/