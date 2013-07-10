/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9877
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

class AlienDictionary {
public:
    vector<string> getWords(int wordLength, vector<string> forbiddenSubstrings, vector<int> wordNumbers);
};

vector<string> AlienDictionary::getWords(int wordLength, vector<string> forbiddenSubstrings, vector<int> wordNumbers) {
    vector<string> ret;
    return ret;
}


int test0() {
    int wordLength = 5;
    vector<string> forbiddenSubstrings = {"?AA", "ABB"};
    vector<int> wordNumbers = {4, 12, 0, 6, 9};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBAB", "NO PAGE", "AABAB", "BBBBB", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int wordLength = 3;
    vector<string> forbiddenSubstrings = {};
    vector<int> wordNumbers = {1, 4, 7, 5, 1};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAB", "BAA", "BBB", "BAB", "AAB"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int wordLength = 4;
    vector<string> forbiddenSubstrings = {"AA"};
    vector<int> wordNumbers = {2, 6, 11, 4, 8};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBB", "BBBA", "NO PAGE", "BABB", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int wordLength = 10;
    vector<string> forbiddenSubstrings = {"BABB?", "??A?B", "A?AAA", "A??AB", "?A??A"};
    vector<int> wordNumbers = {0, 1};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AABBBABABA", "AABBBBABAB"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int wordLength = 5;
    vector<string> forbiddenSubstrings = {"BA?", "ABB"};
    vector<int> wordNumbers = {9, 1, 14, 14, 5};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "AAAAB", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int wordLength = 3;
    vector<string> forbiddenSubstrings = {};
    vector<int> wordNumbers = {7, 3, 6, 4, 4};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBB", "ABB", "BBA", "BAA", "BAA"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int wordLength = 4;
    vector<string> forbiddenSubstrings = {"BB"};
    vector<int> wordNumbers = {11, 10, 2, 2, 6};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "AABA", "AABA", "BAAB"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int wordLength = 10;
    vector<string> forbiddenSubstrings = {"?A?B?", "A?AAA", "??A?B", "A??B?", "B?BBB"};
    vector<int> wordNumbers = {1, 2};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int wordLength = 15;
    vector<string> forbiddenSubstrings = {"ABA?ABA", "BA?A?B?", "A??BA??", "??AAB?A", "?A?BBA?", "AA??AAA", "??ABAAB"};
    vector<int> wordNumbers = {25, 13, 3, 51, 50, 4, 93, 58, 8, 73};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAABBBBBBBAA", "AAAAAABBBBBAAAA", "AAAAAABBBBAAABB", "AAAAABBBBBAABBB", "AAAAABBBBBAABAB", "AAAAAABBBBAABAB", "AAAABBBBABBABBA", "AAAAABBBBBABBBB", "AAAAAABBBBABABB", "AAAAABBBBBBBBBA"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int wordLength = 14;
    vector<string> forbiddenSubstrings = {"BBBBB?", "??A?AA", "A?ABBA", "BBBABB", "?AAAA?", "AB??AA", "BBBBAA"};
    vector<int> wordNumbers = {863, 360, 641, 208, 255, 985, 32, 567, 571, 128, 791, 343, 963, 182, 797, 248, 103, 27, 872, 258};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "BAABBABBAABABB", "BBBAABBABABBBA", "ABABABABABBBAB", "ABBAABBBBABABB", "NO PAGE", "AAABBBBABABABB", "BBABBAABABABAB", "BBABBAABABBBBB", "AABBABBABABABB", "NO PAGE", "BAABBAABBAABBA", "NO PAGE", "ABAABBAABBBABA", "NO PAGE", "ABBAABBABBABBA", "AABBAABBABBAAB", "AAABBBABABABBB", "NO PAGE", "ABBABABABABBBA"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int wordLength = 15;
    vector<string> forbiddenSubstrings = {"AAAAA", "?AAAB", "BA?B?", "BAABB", "BABAA", "A?A?A", "BA?AA"};
    vector<int> wordNumbers = {98, 6, 2, 53, 34};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "AAABBBBBBBBBBAA", "AAABBBBBBBBBAAA", "NO PAGE", "BBBBBBBBBBBBABA"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int wordLength = 12;
    vector<string> forbiddenSubstrings = {"BBAABA?B", "ABBA?BBA", "BAAAAABA", "A?BBB?B?", "ABAAAAB?", "ABAA?ABB", "?BAAABAA"};
    vector<int> wordNumbers = {868, 701, 923, 855};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABABABABBBBA", "ABAAABABBBAB", "ABABBABAABBA", "ABABABABAAAB"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int wordLength = 14;
    vector<string> forbiddenSubstrings = {"AAAAAABA?A", "B?AAABBB?B", "ABBAAAABAB", "AA?AABBAAA", "??ABAA?ABA", "A?BAA??AAA", "??AA?A?A?A"};
    vector<int> wordNumbers = {302, 376, 547, 53, 261, 132, 386, 236, 817, 48, 393, 256, 891};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAABBBABBABA", "AAAABAABABBBAB", "AAAABBAABBBBBB", "AAAAAAABBBABAB", "AAAAABBABBAAAB", "AAAAAABBBBAAAA", "AAAABAABBABABB", "AAAAABBAABABBB", "AAABAABAAABBAB", "AAAAAAABBBAAAA", "AAAABAABBBAABA", "AAAAABBABABBAA", "AAABAABBBBAABB"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int wordLength = 16;
    vector<string> forbiddenSubstrings = {"?BABAA?", "BBB?BB?", "B?B?BBA", "?BAAB?B", "BBABAA?", "?BB???A", "???B?AB"};
    vector<int> wordNumbers = {28, 24, 23, 62, 98, 17, 92, 51, 31, 74, 25, 74, 18, 89, 62, 73, 36, 46, 46, 53};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABABABA", "AAAAAAAAAABAAAAA", "AAAAAAAAAAABBBBB", "AAAAAAAABAAABBAA", "AAAAAAABAAABBBBB", "AAAAAAAAAAABABAB", "AAAAAAABAAABABAB", "AAAAAAAABAAAAAAA", "AAAAAAAAAABABBBA", "AAAAAAAABBAAABBB", "AAAAAAAAAABAAAAB", "AAAAAAAABBAAABBB", "AAAAAAAAAAABABBA", "AAAAAAABAAABAAAA", "AAAAAAAABAAABBAA", "AAAAAAAABBAAABBA", "AAAAAAAAABAAAAAB", "AAAAAAAAABABBAAA", "AAAAAAAAABABBAAA", "AAAAAAAABAAAAABA"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int wordLength = 20;
    vector<string> forbiddenSubstrings = {"?BA??BB", "BBABBBB", "BAAA?A?", "?B?B?BB", "A??BAA?", "ABBB?B?", "BBBBB?A"};
    vector<int> wordNumbers = {975, 274, 575, 911, 982, 304, 952, 413, 540, 451, 814, 620, 446, 343, 905, 987, 505, 126, 38, 383, 978, 654, 913, 348, 800, 410, 917, 497, 26, 501};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAABABBABBABAAAABB", "AAAAAAAABABBAABABBAA", "AAAAAABABABABABABABA", "AAAAABABBAABBABAABBA", "AAAAABABBABBABABABAA", "AAAAAAAABBABAAAABABB", "AAAAABABBABAABBABBBA", "AAAAAAABABBAABBABAAB", "AAAAAAABBBBAABAABAAA", "AAAAAAABABBABBABBBAA", "AAAAAABBBBAABABBAABB", "AAAAAABABBAABBABBBAB", "AAAAAAABABBABBABABAB", "AAAAAAAABBABBABAABAB", "AAAAABABBAABABBABBBA", "AAAAABABBABBABBAABAA", "AAAAAAABBABBAABBABBB", "AAAAAAAAAABABBABAAAB", "AAAAAAAAAAAAABABBABA", "AAAAAAAABBBBABABABAB", "AAAAABABBABBABAABABA", "AAAAAABABBABBAABABBB", "AAAAABABBAABBABBAAAA", "AAAAAAAABBABBABBAABA", "AAAAAABBBBAABAABAAAA", "AAAAAAABABBAABABBBAA", "AAAAABABBAABBABBABAA", "AAAAAAABBABBAABAABBA", "AAAAAAAAAAAAAABABBAB", "AAAAAAABBABBAABABBBA"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int wordLength = 15;
    vector<string> forbiddenSubstrings = {"ABABBAA", "BAAABAA", "B??????", "?BBBABB", "?A?B?B?", "?BBBAAA", "????A?A"};
    vector<int> wordNumbers = {71, 77, 22, 7, 63, 70, 58, 96, 46, 8};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int wordLength = 14;
    vector<string> forbiddenSubstrings = {"?A?B??", "ABBAAB", "ABABAA", "?BBBBB", "BABAAB", "B??ABA", "BABB?A"};
    vector<int> wordNumbers = {385, 114, 270, 765, 664, 413, 763, 233, 80, 802, 579, 764, 416, 323, 86, 938, 10, 360, 684, 698};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "ABAAAAAAAAAABA", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int wordLength = 15;
    vector<string> forbiddenSubstrings = {"AABBA", "AA?AA", "ABAAB", "BAAAA", "?A??B", "AABAA", "AAA?A"};
    vector<int> wordNumbers = {51, 61, 61, 35, 74};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBABBABBABAAA", "BBBBBBBABBABAAA", "BBBBBBBABBABAAA", "ABBBBBBBBBBBABA", "BBBBBBBBBBBAABA"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int wordLength = 12;
    vector<string> forbiddenSubstrings = {"B?BAAABA", "BBBABAAB", "BBAAA?AA", "BB?BABBA", "AA??B?AB", "BBB?ABBB", "BBBBAAA?"};
    vector<int> wordNumbers = {664, 594, 18, 377};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABAAAAABBAAA", "AABBBAAABBBB", "AAAAAAABABBA", "AABAABBABAAA"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int wordLength = 14;
    vector<string> forbiddenSubstrings = {"B?BB?AAB?A", "ABABBBBBAB", "BA?B?AAABB", "BBBAAAAABA", "B?AABBABBB", "AAAAAAA?AA", "BBBB?A?BAB"};
    vector<int> wordNumbers = {170, 572, 136, 722, 882, 197, 905, 670, 785, 769, 72, 340, 514};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAABBABABBA", "AAAABAABBABBAA", "AAAAAABABBABAA", "AAAABBAAAABABA", "AAAABBBABABBAA", "AAAAAABBBBAAAB", "AAAABBBBAAAABB", "AAAABABBABAAAB", "AAAABBABAABABA", "AAAABBAABBBABA", "AAAAAAABBBABAA", "AAAAABBAAAAAAB", "AAAABAAABABBBB"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int wordLength = 16;
    vector<string> forbiddenSubstrings = {"?ABAB?A", "B???B?B", "A??BB??", "ABBBABA", "?A?B??A", "???BAB?", "BBAA???"};
    vector<int> wordNumbers = {11, 81, 86, 84, 94, 83, 53, 56, 97, 5, 57, 86, 14, 71, 54, 75, 16, 86, 44, 99};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABAABAA", "ABAABAABAABAABAB", "ABABAAAAAAAAAABA", "ABABAAAAAAAAAAAA", "ABABAAAAAAABAABB", "ABAABAABAABAABBB", "AABAABAABAABAABA", "ABAAAAAAAAAAAAAB", "ABABAAAAAABAABBA", "AAAAAAAAAAAAABAB", "ABAAAAAAAAAAAABA", "ABABAAAAAAAAAABA", "AAAAAAAAAABAABBB", "ABAAAAAABAABAABA", "AABAABAABAABAABB", "ABAAAAABAABAABBA", "AAAAAAAABAABAABA", "ABABAAAAAAAAAABA", "AABAAAAAAABAABBB", "ABABAAAAABAABAAB"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int wordLength = 20;
    vector<string> forbiddenSubstrings = {"BABBAAB", "?BBBABB", "BB?BBAB", "BBBAB??", "??B?B?B", "BBB??B?", "?AB??BB"};
    vector<int> wordNumbers = {461, 206, 473, 813, 440, 180, 229, 387, 786, 328, 255, 227, 929, 656, 779, 789, 681, 864, 620, 805, 969, 630, 819, 894, 40, 6, 255, 352, 974, 650};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABAAABABBABA", "AAAAAAAAAAABBAABBAAB", "AAAAAAAAABAAABBBAAAB", "AAAAAAAABAAABBAAABBA", "AAAAAAAAABAAAABBAABB", "AAAAAAAAAAABABBAAABA", "AAAAAAAAAABAAAAAAAAB", "AAAAAAAAAABBBAAABABA", "AAAAAAAABAAABAAABAAB", "AAAAAAAAAABBAAAAABBB", "AAAAAAAAAABAAABAAAAB", "AAAAAAAAAAABBBBAAABB", "AAAAAAAABABAAABBBBAA", "AAAAAAAAABBABAABAAAB", "AAAAAAAABAAABAAAAABA", "AAAAAAAABAAABAAABBAA", "AAAAAAAAABBBAAABBAAA", "AAAAAAAABAABAABABAAA", "AAAAAAAAABBAABABAAAA", "AAAAAAAABAAABABBAAAB", "AAAAAAAABABBAAABBAAB", "AAAAAAAAABBAABBAABAB", "AAAAAAAABAAABBAABBAA", "AAAAAAAABABAAAAABAAA", "AAAAAAAAAAAAAABBABAA", "AAAAAAAAAAAAAAAAABBA", "AAAAAAAAAABAAABAAAAB", "AAAAAAAAAABBAABAABAB", "AAAAAAAABABBABAAAAAB", "AAAAAAAAABBABAAABABB"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int wordLength = 14;
    vector<string> forbiddenSubstrings = {"A??AB??A?AB????", "AB???B?B?A??A??", "B???AB??B??????", "??????BB?B?????", "??BAB??????????", "?AAA????B??BBBA", "??????BB?????B?"};
    vector<int> wordNumbers = {70, 90, 921, 730, 241, 789, 910, 230, 229, 198, 202, 100, 684, 594, 610, 27, 642, 987, 914, 154};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAABAAABBA", "AAAAAAABABBABA", "AAAABBBAABBAAB", "AAAABABBABBABA", "AAAAAABBBBAAAB", "AAAABBAAABABAB", "AAAABBBAAABBBA", "AAAAAABBBAABBA", "AAAAAABBBAABAB", "AAAAAABBAAABBA", "AAAAAABBAABABA", "AAAAAAABBAABAA", "AAAABABABABBAA", "AAAABAABABAABA", "AAAABAABBAAABA", "AAAAAAAAABBABB", "AAAABABAAAAABA", "AAAABBBBABBABB", "AAAABBBAABAABA", "AAAAAABAABBABA"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int wordLength = 6;
    vector<string> forbiddenSubstrings = {"?????B??A?BA", "??B?????????", "??????B????B", "B???????????", "????????????", "???B????????", "?????????B??"};
    vector<int> wordNumbers = {493, 329, 676, 865, 829, 849, 107, 325, 549, 74, 509, 133, 811, 937, 839, 739, 57, 531, 93, 284};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "BBBAAB", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int wordLength = 16;
    vector<string> forbiddenSubstrings = {"BA??B???B??B?A???", "?A???B??B???B????", "?BBB??ABB?BB?AB?B", "B?B?BBA????B?????", "BBB?B???B?BB???B?", "A?AA?????B???AB??", "ABA?A?B?BB?A?????"};
    vector<int> wordNumbers = {503, 79, 456, 475, 573, 391, 856, 182, 20, 19, 298, 691, 386, 29, 38, 989, 397, 464, 321, 655};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAABBBBBABBB", "AAAAAAAAABAABBBB", "AAAAAAABBBAABAAA", "AAAAAAABBBABBABB", "AAAAAABAAABBBBAB", "AAAAAAABBAAAABBB", "AAAAAABBABABBAAA", "AAAAAAAABABBABBA", "AAAAAAAAAAABABAA", "AAAAAAAAAAABAABB", "AAAAAAABAABABABA", "AAAAAABABABBAABB", "AAAAAAABBAAAAABA", "AAAAAAAAAAABBBAB", "AAAAAAAAAABAABBA", "AAAAAABBBBABBBAB", "AAAAAAABBAAABBAB", "AAAAAAABBBABAAAA", "AAAAAAABABAAAAAB", "AAAAAABABAAABBBB"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int wordLength = 4;
    vector<string> forbiddenSubstrings = {"?BB???", "BBB?A?", "B???AB", "?B??A?", "B?A??B", "AA???B", "??B?BB"};
    vector<int> wordNumbers = {793, 501, 545, 294, 159, 208, 724, 641, 521, 934, 378, 218, 510, 443, 561, 352, 108, 174, 636, 152};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"B?BBA", "BBAAB", "BB?BB", "BBAB?", "BABBB"};
    vector<int> wordNumbers = {3518, 629, 806, 2749, 4944, 2569, 4992, 8187, 9373, 5055, 5238, 6631, 2453, 9838, 1597, 1534, 6280, 1805, 6031, 9431};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAABAAABBBAAAAABBB", "AAAAAAAAAAAAAAAAAABAAAAABABABB", "AAAAAAAAAAAAAAAAAABABAAAAABABA", "AAAAAAAAAAAAAAAABBAAABAAAABAAB", "AAAAAAAAAAAAAAABBBAAAABBBAAABA", "AAAAAAAAAAAAAAAABABABAABAABABB", "AAAAAAAAAAAAAAABBBAAABABAAABBA", "AAAAAAAAAAAAAABBAAABBAAAAAABAA", "AAAAAAAAAAAAABAAAABAABBAAAABAA", "AAAAAAAAAAAAAABAAAAAAAAAABBBAA", "AAAAAAAAAAAAAABAAAAABAAAAAAABB", "AAAAAAAAAAAAAABAABBAAAABBAAAAA", "AAAAAAAAAAAAAAAABABAABAAABABAB", "AAAAAAAAAAAAABAAABAABAAABAABAA", "AAAAAAAAAAAAAAAAABBAAAABABABAA", "AAAAAAAAAAAAAAAAABABABABABAABB", "AAAAAAAAAAAAAABAABAABAAABABABB", "AAAAAAAAAAAAAAAABAAAAABAAABBBB", "AAAAAAAAAAAAAABAAABBBAAABAABAB", "AAAAAAAAAAAAABAAAABABAAABBAAAB"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int wordLength = 32;
    vector<string> forbiddenSubstrings = {"BAA", "AAA"};
    vector<int> wordNumbers = {3990, 3998, 1124, 8327, 6434, 1832, 3026, 5045, 7095, 9807, 8646, 533, 5580, 5287, 6930, 6395, 6481, 6955, 9749};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AABABABABABABABBBBBBBABBABBABABA", "AABABABABABABABBBBBBBABBABBBBABA", "AABABABABABABABABBBABBABBBBBABBA", "AABABABABABABBBABBBBBBBBABBBBBBB", "AABABABABABABBABBBBBABABBBBABBBB", "AABABABABABABABBABABBBABABABABBB", "AABABABABABABABBBABBBABBBABBBBAB", "AABABABABABABBABABBBBBABBABABABA", "AABABABABABABBBABABBABBBABBABABA", "AABABABABABABBBBBABBBABBBBBBABAB", "AABABABABABABBBBABABBBABBBBBBABB", "AABABABABABABABABABBBBBABABBBBBB", "AABABABABABABBABBABBBABBABABABBA", "AABABABABABABBABBABABBABBABBBABB", "AABABABABABABBBABABABBBABBBABABA", "AABABABABABABBABBBBBABABABABBBBB", "AABABABABABABBABBBBBABBBABABBABB", "AABABABABABABBBABABABBBBABBABBBB", "AABABABABABABBBBBABBBABABBBABBAB"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int wordLength = 25;
    vector<string> forbiddenSubstrings = {"BBAB??", "ABABBA", "B?BBAB", "AAB?B?", "B?BABA"};
    vector<int> wordNumbers = {2581, 8227, 6921, 9596, 2550, 9619, 9804, 6532, 7699, 8065, 6890, 8847, 6873, 7046, 4124, 4695, 9236, 7026, 8742, 3981, 6990, 3855, 7775, 4941, 8745, 4613, 8190, 5699, 654, 8475};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABAAAAABAAAAAABAB", "AAAAAAABAABAAABBAAABAABBB", "AAAAAAABAAAAABBAAABAABAAB", "AAAAAAABBAAABAABBAAAAABAA", "AAAAAAAAABAAAAAABAABAABBA", "AAAAAAABBAAABAABBAABAABBB", "AAAAAAABBAABAAAAAABBAAAAA", "AAAAAAABAAAAAAABAAAAABAAA", "AAAAAAABAAABBAAAAAABAAABB", "AAAAAAABAABAAAABAABAAAAAB", "AAAAAAABAAAAABBAAAAAABBAA", "AAAAAAABBAAAAAAAAAAABBABB", "AAAAAAABAAAAABAABBAABAAAB", "AAAAAAABAAAABAAAABBAABBAA", "AAAAAAAABAAAAAABAABAABAAA", "AAAAAAAABAAABAABAABAAAABB", "AAAAAAABBAAAABAAABAAAAAAA", "AAAAAAABAAAABAAAABAAABBAA", "AAAAAAABAABBAABAAABBAABBA", "AAAAAAAABAAAAAAAAABAAAAAB", "AAAAAAABAAAABAAAAAABAABBA", "AAAAAAAAABBAABAABBAAABBAB", "AAAAAAABAAABBAAABAAABAABB", "AAAAAAAABAABAAAAABAAABAAB", "AAAAAAABAABBAABAABAAAAAAB", "AAAAAAAABAAABAAABAAAAABAB", "AAAAAAABAABAAABAABBAAAABA", "AAAAAAAABBAAAABAAAABAAABB", "AAAAAAAAAAAABAAAABBAAABBA", "AAAAAAABAABBAAAAAAAAAAABB"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int wordLength = 40;
    vector<string> forbiddenSubstrings = {"ABAAA", "AAAAA", "AABAA", "AABBA", "AAAAA", "AAABA", "BABAB", "BBBAA", "AAAAA", "ABAAB"};
    vector<int> wordNumbers = {6948, 498, 9430, 1761, 3810, 3568, 1181, 3901, 6448, 7612};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAABBBABBAAAABBBABBBABBABBBABBABBBBBBBB", "AAAABBBABBAAAABBBABBAAABBBABBABBABBBBABB", "AAAABBBABBAAAABBBABBBBABBBBBBBBABBABBAAB", "AAAABBBABBAAAABBBABBAABABBBBBABBABBAABAB", "AAAABBBABBAAAABBBABBABBABBAABABBBABBAABB", "AAAABBBABBAAAABBBABBABBAABBBBABBBBABBAAA", "AAAABBBABBAAAABBBABBAABABBAABABBBABBBBBB", "AAAABBBABBAAAABBBABBABBABBAABBBBBBBABBBB", "AAAABBBABBAAAABBBABBBABBAABBBABBAABABBAB", "AAAABBBABBAAAABBBABBBABBBBABBABBBABBAABB"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"BBA", "BBB", "BBB", "AAB"};
    vector<int> wordNumbers = {1101, 6040, 320, 6645, 4317, 6372, 877, 1606, 4897, 7772, 6500, 5531, 9029, 7475, 7316, 6212, 5788, 1775};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"BBAABAAB", "BBABBABB", "BABBABBB", "BBBABABB", "ABBBBAAB"};
    vector<int> wordNumbers = {7306, 2749, 345, 4519, 1268};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAABAAAAAAAAABBBB", "AAAAAAAAAAAAAAAAAABABBBAABBAAB", "AAAAAAAAAAAAAAAAAAAAABABBAAAAA", "AAAAAAAAAAAAAAAAABAABBABAABBBB", "AAAAAAAAAAAAAAAAAAABABAABBBABA"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"?BA", "BBB", "?BB", "?BB", "BB?", "?AB", "BBB", "BBA"};
    vector<int> wordNumbers = {6969, 7240, 6146, 6491, 9233, 8543, 2837, 4405, 6601, 8287, 9322, 9583, 6241, 808, 3078, 5250, 5011, 1790, 9350, 8130, 1677, 430, 8663, 1607, 3817, 8419, 3127, 7663, 6597, 5110};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"?AAA?", "B??BA", "BBBBB", "ABABA", "BABAB"};
    vector<int> wordNumbers = {3106, 2515, 5573, 3224, 5517, 9814, 8129, 6265, 9340, 57, 539, 9106, 9961, 6246, 4974, 9334, 7972, 4509, 5990, 716};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AABABBBABBBABBBAABBAABBBAABBBA", "AABAABBBAABBABBBAABBBABBBAABBB", "ABAABBBABBBABBBABBBABBBAABBABB", "AABBAABBAABBAABBBABBBABBBABBBB", "ABAABBBABBBAABBBABBBABBBABBBAA", "BABAABBBAABBABBBABBBAABBAABBBB", "BAABBAABBAABBAABBABBBAABBBABBB", "ABBAABBAABBABBBABBBAABBAABBAAA", "BABAABBAABBAABBABBBABBBABBBABB", "AAABAABBAABBAABBBAABBBABBBAABB", "AAABABBBAABBAABBAABBBABBBAABBB", "BAABBBABBBAABBAABBABBBAABBBAAA", "BABAABBBABBBAABBBAABBBABBBABBB", "ABBAABBAABBABBBAABBABBBABBBAAA", "ABAABBABBBAABBAABBBAABBAABBAAA", "BABAABBAABBAABBABBBABBBAABBAAB", "ABBBABBBAABBBABBBAABBAABBABBBB", "AABBBABBBAABBBABBBAABBBAABBABB", "ABABBBABBBAABBABBBAABBBABBBAAB", "AAABABBBABBBAABBAABBABBBAABBBB"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int wordLength = 32;
    vector<string> forbiddenSubstrings = {"ABA", "AAA"};
    vector<int> wordNumbers = {9114, 5929, 9381, 9649, 2163, 3042, 1716, 7998, 2109, 4149, 251, 6497, 5210, 9639, 1298, 5440, 2567, 1536, 6651};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AABBAABBAABBBAABBBBAABBABBBBBBBA", "AABBAABBAABBABBBABBBBBABBBABBBBA", "AABBAABBAABBBAABBBBBAABBBABBABBB", "AABBAABBAABBBAABBBBBBBABBAABBBAB", "AABBAABBAABBAABBBBABBBAABBBBBBAA", "AABBAABBAABBABBAABBAABBABBAABBBA", "AABBAABBAABBAABBBABBBBAABBBBAABB", "AABBAABBAABBBAABBAABBABBBABBBBBB", "AABBAABBAABBAABBBBABBABBBABBABBA", "AABBAABBAABBABBABBABBBBBBABBABBB", "AABBAABBAABBAABBAABBBABBBBABBAAB", "AABBAABBAABBABBBBABBBAABBABBAABB", "AABBAABBAABBABBBAABBBBABBBAABBBB", "AABBAABBAABBBAABBBBBBBAABBBBABBB", "AABBAABBAABBAABBBAABBBABBABBBBBB", "AABBAABBAABBABBBABBABBAABBAABBAA", "AABBAABBAABBAABBBBBABBBBBBABBBBA", "AABBAABBAABBAABBBABBABBBAABBBABB", "AABBAABBAABBABBBBABBBBABBBBBAABB"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int wordLength = 25;
    vector<string> forbiddenSubstrings = {"BBBABB", "AABBBB", "BBBAB?", "AAABAB", "BBBABA"};
    vector<int> wordNumbers = {5911, 6628, 5958, 9743, 8917, 2868, 8250, 8613, 1016, 4300, 6118, 4596, 2095, 3557, 3448, 9030, 1041, 2928, 6686, 8056, 9337, 7049, 2533, 8225, 3574, 7982, 6485, 5484, 5543, 5097};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABAAAAABBABAABAB", "AAAAAAAAAABAABAAAABAABAAB", "AAAAAAAAAABAAAABAAAAABAAB", "AAAAAAAAAABBABBABBABAAAAB", "AAAAAAAAAABBABAABAAAAAABB", "AAAAAAAAAAAABBABBBBAAABAA", "AAAAAAAAAABBAABAABAAAAABA", "AAAAAAAAAABBAABBAABBABAAB", "AAAAAAAAAAAAABAAABBBAAAAA", "AAAAAAAAAAABBAAABAAABBBAA", "AAAAAAAAAABAAAABBABBAAAAA", "AAAAAAAAAAABBAABBAAAAABAA", "AAAAAAAAAAAABAABABBBBBBAB", "AAAAAAAAAAABAABAAAAABBAAB", "AAAAAAAAAAABAAABBAABBAAAA", "AAAAAAAAAABBABAABBAABAAAA", "AAAAAAAAAAAAABAABAAABBAAB", "AAAAAAAAAAAABBBAAAABBAABA", "AAAAAAAAAABAABAAABBAAABBB", "AAAAAAAAAABBAAABBAAABAAAA", "AAAAAAAAAABBABABBABAABAAA", "AAAAAAAAAABAABABABBAABBAA", "AAAAAAAAAAAABBAABBBAABAAA", "AAAAAAAAAABBAABAAABAABBAA", "AAAAAAAAAAABAABAAAABBABAA", "AAAAAAAAAABBAAABAAABAABBA", "AAAAAAAAAABAAABBABBAAAAAB", "AAAAAAAAAAABBBAAABBAAAABA", "AAAAAAAAAAABBBAABAABAAAAB", "AAAAAAAAAAABBABBAAAABAABB"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int wordLength = 40;
    vector<string> forbiddenSubstrings = {"BBAAA", "AAAAA", "BBAAA", "ABAAA", "BABAA", "AAABA", "AAAAB", "BABBB", "AABAB", "AAAAA"};
    vector<int> wordNumbers = {5978, 8869, 5163, 4591, 6383, 5641, 7851, 6646, 3292, 1513};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAABBAABAABAABAABAABBAABBBBBBBBAABAABBBA", "AAABBAABAABAABAABAABBBAABBBBAABBAABBABAB", "AAABBAABAABAABAABAABBAABBBAABBBBABBABBAA", "AAABBAABAABAABAABAABBAABBAABBBBAABAABBBB", "AAABBAABAABAABAABAABBABABBAABAABBAABBBBB", "AAABBAABAABAABAABAABBAABBBBABBABBABBABBA", "AAABBAABAABAABAABAABBBAABAABAABBBAABBBAA", "AAABBAABAABAABAABAABBABABBABABBAABBBBBAA", "AAABBAABAABAABAABAABAABBBBBBAABAABBAABBB", "AAABBAABAABAABAABAABAABBAABBBBBBBBABABBA"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"BBB", "BBA", "ABB", "BBA"};
    vector<int> wordNumbers = {7064, 5694, 570, 8206, 7801, 5842, 1676, 3216, 8582, 6120, 7339, 8645, 7362, 1972, 1694, 8393, 4781, 2316};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAABAAAAAABAABAAABABAA", "AAAAAAAAAAAABAABABABAAAAAABAAA", "AAAAAAAAAAAAAAAAABABAABABAAABA", "AAAAAAAAAAABAAABABAAABABAAAAAB", "AAAAAAAAAAABAAABAAAAAABABAAABA", "AAAAAAAAAAAABABAAAAAABAAABAAAB", "AAAAAAAAAAAAAABAAAAAABABAAABAA", "AAAAAAAAAAAAABAABAAAAAABAAAAAB", "AAAAAAAAAAABAABAAAABABABAAAAAA", "AAAAAAAAAAAABABAAABABAAABABABA", "AAAAAAAAAAABAAAAABABAABABABAAB", "AAAAAAAAAAABAABAAABAAABABAABAA", "AAAAAAAAAAABAAAAABABABABAAAAAA", "AAAAAAAAAAAAAABAAABABABABABAAB", "AAAAAAAAAAAAAABAAAAABAAAABAAAA", "AAAAAAAAAAABAABAAAAAAAABABAABA", "AAAAAAAAAAAABAAAABABABABAAABAA", "AAAAAAAAAAAAAABABAAABAAABABABA"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"BBBBABBA", "BBBBBABB", "ABBAABAB", "BBBBBBBB", "BBABBBAA"};
    vector<int> wordNumbers = {9319, 7064, 3335, 8439, 1808};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAABABAAAAABBBBBB", "AAAAAAAAAAAAAAAAABBBBAABABABBA", "AAAAAAAAAAAAAAAAAABBBAAAABBBBB", "AAAAAAAAAAAAAAAABAABAAABBBABBA", "AAAAAAAAAAAAAAAAAAABBBBAAAABBA"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"ABB", "?BB", "?BB", "BB?", "?B?", "?A?", "?BB", "B?B"};
    vector<int> wordNumbers = {3795, 4212, 8346, 2275, 8650, 1656, 4773, 8847, 7891, 4819, 7522, 1578, 4820, 2664, 1834, 9923, 323, 3278, 6155, 8037, 607, 9648, 8445, 3452, 3419, 4269, 5545, 6419, 2088, 8466};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"A?AAAABB?ABABBBBA", "ABBAABA?AABBBAABA", "BBAAB?B?ABBAAAAAB", "B?AAAABAAABABBAA?", "AB?BAAAA?BAAA?AAA", "BABBAAAABAAABBAAA", "BBAAA?BABABAAABBA", "??BABBAAABBBAABAA", "AAABBBABBAAAABBBB", "ABABBBBAABBBABBBB", "BBAAAAB?AABAABABA", "AAAABABBABAB?AABB", "BAABABBABABAA??BB", "BABBAABBBABABBBBB", "ABAABBAABBABBBA?B", "ABBBABABABBAAAAAB", "BAAABABBBBAA?ABBB", "AABAABB?BBAA??BBB", "BBBBABBAABABABAAB", "BABABBBABBBBAAAAA", "BBABAAAB?B?BBA?BB", "BB?B?BABAABAAABBA", "BBBBBBBBBBAABA?AB", "?AAAAAABABBABABAB", "BABBABABBAABAAA?B", "AAAABBBA?ABBBAABB", "ABABAABABAABBBBBB", "AABABBBAAAABBBBAA", "AABBAAAAABAAABABB", "BAAAAABAAABAABAB?", "ABBBBBBAABABBAAAA", "BABBBAABABABBAAAA", "BBAABBBBBA?AABBAB", "ABBBBBBAAAABA??AA", "AABAABBBABAABAABB", "BA?AABAABA?ABBBBA", "ABBABAABABBABAAAA", "AAAABBBABBBAABBAB", "ABAAABBBABAB?ABAA", "BBABAAAABAABABBAA"};
    vector<int> wordNumbers = {528089472, 82908165, 25881575, 147227336, 427719413, 432560396, 28473985, 7427670, 271468955, 45215707, 30720489, 120679544, 409170879, 396836029, 873212, 281048968, 80136267, 74461087, 15440558, 155022650, 166867858, 273651726, 118169252, 105719470, 333732829, 157717062, 381676212, 19821433, 106654782, 403332590, 76420763, 201819715, 205149259, 280596263, 119209932, 402244710, 673617466, 90663758, 86134805, 132595697, 235040053, 422136370, 27059530, 629259128, 110163474, 508640371, 825940807, 256146505, 12072834, 42754703};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAABBBBBBBBBBABAABBBBBABBABBBBBA", "AAAAAAAAAAAAAAAAAAAAAAABABAAAAAAABBABBBAAAABBBAABA", "AAAAAAAAAAAAAAAAAAAAAAAAABBAAABBBBBBABBABBBABABBAB", "AAAAAAAAAAAAAAAAAAAAAABAAABBBAABABBBABBBBBBBBABBBA", "AAAAAAAAAAAAAAAAAAAAABBAABBBBAABBABBABBABABBAABABB", "AAAAAAAAAAAAAAAAAAAAABBABAAABBAAABBBABBAABBBBBABAA", "AAAAAAAAAAAAAAAAAAAAAAAAABBABBABBBBBBBBBABBBBABAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABBBAABABAABBAABABABAAAA", "AAAAAAAAAAAAAAAAAAAAABAAAAABBABBAABBABBAABBBBAABBB", "AAAAAAAAAAAAAAAAAAAAAAAABABABBBABAABAAABABAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAABBBABBABABBBBAABBBAABABAB", "AAAAAAAAAAAAAAAAAAAAAAABBBABAABABBABABBBBABBBABBAA", "AAAAAAAAAAAAAAAAAAAAABBAAABBAAABAABBBAABABBAABBBBB", "AAAAAAAAAAAAAAAAAAAAABBAAAAAAAABBAABABBBABBABAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBABABBBAAABBBAAAABA", "AAAAAAAAAAAAAAAAAAAAABAAABAAAAAAAABABBABBAABABABAA", "AAAAAAAAAAAAAAAAAAAAAAABAABBABABBABAABAABBAABBAABA", "AAAAAAAAAAAAAAAAAAAAAAABAAABBBBBBBAABABABAAABABBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAABBBABBBABAAABBBBBBAABAAA", "AAAAAAAAAAAAAAAAAAAAAABAABABABBBABBBBBBAABBAABAABB", "AAAAAAAAAAAAAAAAAAAAAABABAAAABABABBABABBABABBAABBA", "AAAAAAAAAAAAAAAAAAAAABAAAABAAABBBAABBABBAABABAABAA", "AAAAAAAAAAAAAAAAAAAAAAABBBAABAABAABABABBBBBBAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAABBAABBAABAABABAABBAAABBABAB", "AAAAAAAAAAAAAAAAAAAAABABAAAABABBBBAABABABAABBBBBAA", "AAAAAAAAAAAAAAAAAAAAAABAABBAAAABBBBAABAAABAAAAABBB", "AAAAAAAAAAAAAAAAAAAAABABBBAAABBBAABBABAABAAAABAABA", "AAAAAAAAAAAAAAAAAAAAAAAAABAABBAAABBBBAABBABABABAAA", "AAAAAAAAAAAAAAAAAAAAAAABBAABBBAABBAAAABAAAABABBBAA", "AAAAAAAAAAAAAAAAAAAAABBAAAABBABABBAAAAABAAABBBBBBA", "AAAAAAAAAAAAAAAAAAAAAAABAABAABBBABABAABBBBBBBABBBB", "AAAAAAAAAAAAAAAAAAAAAABBAAAABBABABBAAABABAABBBBBAA", "AAAAAAAAAAAAAAAAAAAAAABBAAABBABAAABBAAAAAAAABBBBAA", "AAAAAAAAAAAAAAAAAAAAABAAAABBBBBAABBABBBBBAAABBBABB", "AAAAAAAAAAAAAAAAAAAAAAABBBAABBABAABABBABABABABBBAA", "AAAAAAAAAAAAAAAAAAAAABBAAAABABBABAAABBABBAAAABBAAB", "AAAAAAAAAAAAAAAAAAAABABAAABBAAABABABABBAAAAAABAABA", "AAAAAAAAAAAAAAAAAAAAAAABABABBBBAABAABAABBBBBBBBBBA", "AAAAAAAAAAAAAAAAAAAAAAABABAABBAABBBAAABAAAABABBBBA", "AAAAAAAAAAAAAAAAAAAAAABAAAAAAAABAAABBABABAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAABBBAAABBABBBBABABAABABBABABB", "AAAAAAAAAAAAAAAAAAAAABBAABBAABAAAABBBBAABABAABABAB", "AAAAAAAAAAAAAAAAAAAAAAAAABBABAAABAAABBBABABBBBABAA", "AAAAAAAAAAAAAAAAAAAABAABBAAAABABAAAAAABABAAAABABBA", "AAAAAAAAAAAAAAAAAAAAAAABBABABABAABAABABBBAABBBAABB", "AAAAAAAAAAAAAAAAAAAAABBBBABBAABBBAABBBABBBBABBAABA", "AAAAAAAAAAAAAAAAAAAABBAABAAAAABAAAAABBBBABABABABAA", "AAAAAAAAAAAAAAAAAAAAAABBBBBAAAAAAAABABBBBABAABAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAABABBBABAABBBAABAAABABBAB", "AAAAAAAAAAAAAAAAAAAAAAAABABAABABAAABBBAABAAAAAABAA"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int wordLength = 40;
    vector<string> forbiddenSubstrings = {"BABABBBBBBBB", "BABBABA?BBAB", "BBAAA?AABBAB", "BBAAABAABBBA", "B?BBBAA?BABB", "ABB?BBAABBB?", "B?BBBABBA?AA", "B?ABBBABBA?B", "AAAB?ABABABA", "BABB?BBBBBBB", "BB?ABBBAABBA", "BAB?ABAB?BBB", "BBBBBBBAB?AA", "B?BBABBBAAAB", "BABBBAB?BBBB", "ABABAB?BAABB", "?ABBBAABBBAB", "AA?BAAAAABAB", "BBABB?BB?ABA", "BBBAABBBBBAB", "ABBBAAABAAAB", "?ABBABBBBBAA", "ABABAAABBAB?", "BBBABBABAABA", "BBABBBBBBBBB", "AB?BABBBBABB", "BABABBAABBBB", "?ABBBABBAAAB", "ABAAA??AAAAB", "BBBBBAABB?BB", "BBBBAA??AABB", "BBBBBBABAAB?", "BBB?BAB?ABAA", "BABAAABABBBB", "ABA?BBBBBAB?", "BBAB?AA?BBBB", "BAABB?BBABAB", "B?BBBBB?AAB?", "BBBBABABABBB", "ABBBABBAB??A", "BABBBAAAABAA", "AAABBB?AA?BA", "BABBA?BAAAAA", "ABBB?BBBBBBA", "A?BBBBA?BBAB", "BAABBAABBBBA", "ABBAABBBBBAA", "BABBBBBBAAAB"};
    vector<int> wordNumbers = {304257110, 412412199, 373805271, 165505870, 136244247, 350676234, 167024732, 460376333, 517478151, 20240543, 55305226, 348025400, 139205965, 717529554, 333187817, 4417785, 813140277, 44109492, 514033867, 212607466, 6662954, 1394045, 196476547, 807031998, 89792681, 148818287, 740614750, 952352380, 41410689, 77948081, 841353, 195295073, 617430453, 97753335, 220399202, 56251970, 2126445, 19142711, 116605876, 122966092, 26929651, 428600071, 683722904, 574731969, 112846889, 353167567, 12750950, 117117418, 601075910, 271872495};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAABBBBAAAAAAAAABBBABAAABBBABABB", "AAAAAAAAAABABAABAAAABBBBABBABAABBBABBAAA", "AAAAAAAAAABAABABAAABAABBBBBBAAABBBBBBBAA", "AAAAAAAAAAABAAAAAAABABAAAAAAABABAAABABBA", "AAAAAAAAAAAABBAABBBABAABBABBBBAABBBABABB", "AAAAAAAAAABAAABABBBAAAAABAABBAAAAAAAABAA", "AAAAAAAAAAABAAAAAABBABAAAABBBAAAABBBAAAA", "AAAAAAAAAABABBABBBABAABBABABAABBBAAABAAB", "AAAAAAAAAABBAABBBAABBBAAABABBBBBBAAAAAAB", "AAAAAAAAAAAAAAABBBAABABBAABAAABABAABAABB", "AAAAAAAAAAAAABABAAABBAAABAABABABBBBABAAB", "AAAAAAAAAABAAABABABAAABAAAAAABBABAAAABBB", "AAAAAAAAAAAABBABAABBAABAAABBABABAABBAABA", "AAAAAAAAABAABAABAAABBBABBBABBBBBABBABBAA", "AAAAAAAAAABAAAABAABBBBBAAABAABABBBABBBBA", "AAAAAAAAAAAAAAAAABABBBBAABBABABABBBAAABB", "AAAAAAAAABABAABABBBBABAABAAABBBBABAABBBA", "AAAAAAAAAAAAABAAAAABAAAABBABABBABABABABB", "AAAAAAAAAABBAABBABAAABBAABAABABABAAAABAB", "AAAAAAAAAAABABAABAABBBBABAAAAAAAAAAABABA", "AAAAAAAAAAAAAAAABAABAAABBAAAAAABAABABBAA", "AAAAAAAAAAAAAAAAAAABBBAABAABAABBBABBABAB", "AAAAAAAAAAABAABBAAAABBAABBABBBBABAAAABBB", "AAAAAAAAABABAABAABABBBBBABBBAABABAABBBAA", "AAAAAAAAAAAABAAABAAAAAAABABBABABBABAAAAA", "AAAAAAAAAAAABBBAABAAAAAAABAABBAABAAAABAB", "AAAAAAAAABAABABBBAAABBAABABBBBABBAAABAAB", "AAAAAAAAABBAAAABBBABAAAABAABBBBABAABBAAB", "AAAAAAAAAAAAAABBBBAABAABBABAABAAAAAABABB", "AAAAAAAAAAAAABBBABAAABABAABBABBBBAAABBBA", "AAAAAAAAAAAAAAAAAAABAAABAAABAABAAABABBBB", "AAAAAAAAAAABAABABBBABBBABBBAABABABABBBBB", "AAAAAAAAAABBBBBABBAABAABBABABAAAABAAABBB", "AAAAAAAAAAAABAABAABBABBBBABAAABABAABBABA", "AAAAAAAAAAABABABABABBABABBABBBBAABBAAAAA", "AAAAAAAAAAAAABABAABABBBABBBAAAABBBBBABBB", "AAAAAAAAAAAAAAAAAABABBAAAABBABABAABBABBA", "AAAAAAAAAAAAAAABBABABBBBAAAAABABBABAAABB", "AAAAAAAAAAAABABBAAAABAABABBAABABAAABBBBA", "AAAAAAAAAAAABABBBABAABAABAAABABBBAABABBB", "AAAAAAAAAAAAAABAABBABABAABBAABAABBABBABB", "AAAAAAAAAABABABABAABAABABBABAAABABBABBBB", "AAAAAAAAABAAABABBBAAAAABABAABAAABAABBBAB", "AAAAAAAAAABBBAABBBAABBBBAAABBABBAAABBBAA", "AAAAAAAAAAAABABABABABAAABABABBBABABBAABB", "AAAAAAAAAABAAABBAABAABABAABABABBAAABBBBA", "AAAAAAAAAAAAAAABAAABBBABBBABBBBAAAABBAAB", "AAAAAAAAAAAABABBAAABABAABAAAAABBAABBBBBA", "AAAAAAAAAABBBBAABBBBBAABABBABABAABAABBBA", "AAAAAAAAAAABBABAABBABBBABABAAAABAAAAAAAB"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int wordLength = 48;
    vector<string> forbiddenSubstrings = {"AB?AAABB?BBAABAAA", "AAAABBAAABBABAAAB", "BB?ABA?BBBABBBABB", "AABBABBBBBAAAAABB", "AAA?BABBABABABABA", "AABB?BBABABA?AABA", "BAABABAABABBBABAA", "?ABA?AABABBAABBBB", "ABBAABBBAABBABBAB", "ABABBABBAAABBBABB", "AAABABBBABBABBAA?", "AAAAABAABBB?BABBA", "AB?BAABBA?BAAABBA", "BAAAA?A?BBAB?BBBA", "?BAABAAAABAA?AAAA", "?ABABAABABAAAB?AA", "ABBAABBBABBAAABAA", "A?ABBBAAAAABBBB?A", "AAAAAABBABBBBABAA", "ABBAAB?BBBABBBABA"};
    vector<int> wordNumbers = {144705223, 377395149, 120323051, 5220429, 58693114, 446341766, 18633549, 8349668, 528200389, 32877803, 273071359, 167514440, 891208421, 320234499, 238100746, 109174776, 404004569, 212190327, 37886330, 4943322, 3828451, 455228556, 56631371, 175174471, 271038677, 745001664, 38165239, 333649444, 423839827, 145949488, 34797578, 704757254, 413525760, 574436290, 50604052, 380851486, 10567745, 638026832, 109626535, 386726388, 58332304, 22061241, 21018912, 39052889, 179053163, 594800962, 66801771, 64717987, 636967747, 160190624};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAABAAABABBAABAAABABBBABBBBABBB", "AAAAAAAAAAAAAAAAAAABABBABABBAABABAAABABABAAABBBB", "AAAAAAAAAAAAAAAAAAAAABBBAABBBABBBBBAAAAABBABAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAABABAAAAAABABBAABBBBBBAB", "AAAAAAAAAAAAAAAAAAAAAABBBAAAABBBAAAAABBABAABBBAB", "AAAAAAAAAAAAAAAAAAABBABABBABABBBABAABAAABABBAAAA", "AAAAAAAAAAAAAAAAAAAAAAABAAABBBBAABAAABBBABBBBBAB", "AAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAABBBBABAABBABAB", "AAAAAAAAAAAAAAAAAAABBBBBBBAAABABABAABBABBABBAABB", "AAAAAAAAAAAAAAAAAAAAAAABBBBBBAABABBABBAAAABBBABA", "AAAAAAAAAAAAAAAAAAABAAAAABBABABABBABBAABABBBBAAB", "AAAAAAAAAAAAAAAAAAAABABAAAABAABAAAABABAABBABAAAA", "AAAAAAAAAAAAAAAAAABBABABBAABBBABBABBABBAAABBBBAB", "AAAAAAAAAAAAAAAAAAABAABBAABBBBBBABBBABABBBABBABB", "AAAAAAAAAAAAAAAAAAAABBBAABABAABAAABABAABABAABAAA", "AAAAAAAAAAAAAAAAAAAAABBABAAABBBBABBABBBBAABAAABB", "AAAAAAAAAAAAAAAAAAABBAAAABAABABBBBABAAABABAABBAA", "AAAAAAAAAAAAAAAAAAAABBAABBAAAAABBABABABAAABAAAAB", "AAAAAAAAAAAAAAAAAAAAAABAABAAABBAABABAABAAAAAABBA", "AAAAAAAAAAAAAAAAAAAAAAAAABAABABBBBABBBBBBBABBBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAABBBABABBAABABBBABBABBB", "AAAAAAAAAAAAAAAAAAABBABBABBAAAAABAABAAAAABBAAABA", "AAAAAAAAAAAAAAAAAAAAAABBABBAABBABABABBABBABAABAA", "AAAAAAAAAAAAAAAAAAAABABABAAABAAAAAABABBBAAAABAAA", "AAAAAAAAAAAAAAAAAAABAAAAABAABABBBAABBAABBABBAAAA", "AAAAAAAAAAAAAAAAAABABBAABBABAAABBABABBABBBAAABBA", "AAAAAAAAAAAAAAAAAAAAAABAABAABABABAABBAAAAABBBBBB", "AAAAAAAAAAAAAAAAAAABABAAAAABAAABAABABABAABABABAA", "AAAAAAAAAAAAAAAAAAABBAABABBBBBABBBAAABABBBAABAAA", "AAAAAAAAAAAAAAAAAAAABAAABBAAABABABAAABAABBBAABAA", "AAAAAAAAAAAAAAAAAAAAAABAAAABABBABBBABAAABABAABAB", "AAAAAAAAAAAAAAAAAABABABAABBABAAAAAAABBABBABABBBB", "AAAAAAAAAAAAAAAAAAABBAAABBABBBBBAAABBAAAABAAAABB", "AAAAAAAAAAAAAAAAAABAAABABAAABBAABBABBBABABABAABA", "AAAAAAAAAAAAAAAAAAAAAABBAAAABABAAAABABBBBBABBBAB", "AAAAAAAAAAAAAAAAAAABABBABBBAABBBBAABBBAABABBBBAB", "AAAAAAAAAAAAAAAAAAAAAAAABABAAABAABABBBABBBBBAABB", "AAAAAAAAAAAAAAAAAABAABBAABABBBABBAAAAAAAABBBAABA", "AAAAAAAAAAAAAAAAAAAAABBABAABABBAABABBBAAABBAABAB", "AAAAAAAAAAAAAAAAAAABABBBABAAAAABBBBBAAAAAAAABAAB", "AAAAAAAAAAAAAAAAAAAAAABBBAAAAAABABABBBAABBAAABBB", "AAAAAAAAAAAAAAAAAAAAAAABABABAABBAAABBBABBABBABAA", "AAAAAAAAAAAAAAAAAAAAAAABABAAAABBAAABABAABBBBBBBA", "AAAAAAAAAAAAAAAAAAAAAABAABABBAAAAABBAABBBAAABBBB", "AAAAAAAAAAAAAAAAAAAABABABBAAAABBBABAABABBAAAABBA", "AAAAAAAAAAAAAAAAAABAAABBBBAAABABBAAABABBBBAAABBA", "AAAAAAAAAAAAAAAAAAAAABAAAAAAAABBABAAABABABBAAAAB", "AAAAAAAAAAAAAAAAAAAAAABBBBBAAABBABABAABBABABABBB", "AAAAAAAAAAAAAAAAAABAABBAABAABBABAABBBBBBBBABBBAA", "AAAAAAAAAAAAAAAAAAAABAABBAABBBBBBBABAABABABBBBAA"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"ABBBAABBABBAAB", "BBBABBBBBBBABB", "ABBBBB?B???ABB", "BBABBABBAAABBA", "ABB??ABBBBBBBB", "AABBB?AABBABAB", "A?AAABBBBBBBBB", "??ABAABBABBAB?", "BBBBAAB?BB?BAB", "AAAABBBBAAB?BB", "ABAABBBABAB?BB", "BAABBBAA?BABBB", "ABBABBAAA?BBAA", "BBBBBABBBBABAB", "A?BBBBAB?BBAAA", "BBABBABAABABBB", "BB?BBBAA??ABBB", "BABBABBBB?BBBA", "BABBBABBAABABA", "BAABBABBABBBBB", "BBAABAABAA?AAB", "BABBBBBABABABB", "AAABA?BBBBBBBB", "BB?BBABABB?BBA", "ABBBABBABBABBB", "ABBBBBAABBBBBB", "ABBABABBAABBAA", "BBBBAABA?BBBBA", "AAABBBBB?BBABB", "B?BBBBBBABAABB"};
    vector<int> wordNumbers = {24624492, 17439723, 55505543, 5121361, 75348039, 96003061, 67575749, 1081576, 7571866, 5268126, 82845071, 42100591, 56208013, 59079578, 46035126, 38647889, 21254754, 47678397, 17558904, 90068579, 69416571, 85997438, 80880046, 68085629, 99455957, 46396933, 92888183, 72766470, 82407253, 76372682, 77736959, 2681340, 88539194, 35684538, 80097512, 69926217, 41743316, 92529037, 28669816, 77624423, 28413807, 39699216, 2821327, 11689300, 18830505, 71559040, 78870902, 79280543, 12800867, 7949489};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAABBAABAABAABBBBBBBBBABBABA", "AAAAABAAABBBABAAAABABAAAAAAAAA", "AAAABBBAAABBBBABBAAAABABBAABBA", "AAAAAAABABAABABBBBABBBBABAAABB", "AAABAABBABBAAAABABBBBABBAABABA", "AAABBAAABABBBABBBAABBBAAAABAAA", "AAABAAABABBABAAAABBAAAABABBAAB", "AAAAAAAAABAAABABABBAAABBBBBBAA", "AAAAAAABBBBABABABBBABBBAAAAAAB", "AAAAAAABABABABABABABBABAAAAAAB", "AAABABABABABBABAABBAABBBABBAAA", "AAAABABABBAABBBABBBBAAAAABBBAA", "AAAABBBAABBABABABABBABBBBBBAAA", "AAAABBBBAABAABBABBAAABAABBABAB", "AAAABABBBBAABBBABAABBBABBBAAAA", "AAAABAABBBBABBAABBBABAAAABABBB", "AAAAABABABBABBABBBBBBBBBBAABAA", "AAAABBAAAABBBBABABABABABBABBAA", "AAAAABAAABBBBABBBBABABBBBBBBBA", "AAABABBBAABBAAAABAABAABBAABAAB", "AAABAAABBBABBBBBABBAABABAABAAA", "AAABABBAAABAABBBAABABABBAABAAB", "AAABABAABBABBAAAABBBAABBAAABAA", "AAABAAABBAAABAABBAABAAABABABBA", "AAABBAABBAABBBAAABBBBAAABABBAA", "AAAABABBBBBAABBAAAABBBAAABBABA", "AAABABBBBBBABBABAABAAAAABBBAAB", "AAABAABABABBBABABBAABBAAABBBAB", "AAABABABAABBBBBAABBAABBBAAAABA", "AAABAABBBABABBBAAAABAAABBBABAA", "AAABABAAAAAABBBAABABABABBBABBA", "AAAAAAAABABABBAABBABABAAABBBBB", "AAABABBABBAABABBBBAAABBBABAAAB", "AAAABAABAABABAAAAABAAABBBBABAA", "AAABABAABABAABBAABBABABBAAABAB", "AAABAABAAAAAAABBABABBBBBABBAAA", "AAAABABABABBBAAAAAABABBABABAAA", "AAABABBBBBABAABAAAAAABBBBABBBA", "AAAAABBBABABAAABBAAAAAABABBBBB", "AAABABAAAAAAABBBAABBAAAABBBAAB", "AAAAABBBABAAAAABAABAABBBAAABBA", "AAAABABAAABBAABBABBABAAAABABBA", "AAAAAAAABABBABABBABBAABAAAABAA", "AAAAAABABBBBBAAAAAAABBAAAAABAB", "AAAAABAABBAABBABBBABBAABBBBBAA", "AAABAABAABBABABBBBAAABBBBBBABA", "AAABABAAABABABBBAABABBAABAABAB", "AAABABAAABBBAAABABABBBBABAABAA", "AAAAAABBABAAAAAABAAABBBBAABAAA", "AAAAAABAAAAAABBAAABBAAABBBBBAA"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int wordLength = 45;
    vector<string> forbiddenSubstrings = {"BAAABAABABAAAABBA", "AAAABBBBABA?ABAAA", "BBBAAABBABAAABAAA", "AAAAABAAAAA?BBAAA", "AAAABABAAAABBB?AB", "AAABAAAAAAABAAAAA", "AAABBAAAAABBAAAAA", "ABAAABBABAB?AAAAA", "BBAAAAABABA?AAAAA", "AAA?AAAAABBBAAB?B", "?B?BBBBABBABAAAAA", "BABAAABAA?BB?BAAA", "ABAAA?BABAA?BABAA", "AAAAA?BA?AAAAAABA", "B?AAABAAAAABABABA", "BAAAAAAAAAABAAABB", "AAAAAAAA?AAAAABAA", "AAABABBBABABABAAA", "ABBBAAAAABAAAAAAB", "AABABA?BAABBAAABA", "AABB?AABBA?AABBAB", "BBAAAAAAABBAAABBA", "AAAAAAABABBAA?BAA", "BAAA?BAAB?AAAAA??", "AAAAABABAAABAA?AA", "AAAAABABAABBAAAAA", "AA??AAAAAAAAAAAAA", "BBAAAAAAAABAAAABA", "BAAAAAAAAAB?AABAA", "AAAAAAAAAAAAABAAA", "ABABAAABAAAAAABBA", "AA?AAAAAAABABBABB", "AABBAAAAAAAAAABBA", "?AAAABB?AAB?AABAB", "BAAAABBBAA??ABABA", "AAABAA?AABABAAAAB", "BAA?ABAB?ABABA?AA", "BAAABAAABBB?AABBA", "BAAABAAAAAAA?BBAA", "BAABAA?ABBABBABBA", "ABAAAAABABABAAAAA", "BAAAAAABABABAAAAA", "AAAAABAAABBBABAAA", "BAABBABAAAAABABAB", "AABAABBAAAAAAAAAA", "BAAAAAAABAAABBAAA"};
    vector<int> wordNumbers = {125731214, 487981802, 59962373, 6020520, 62731260, 304994881, 347810548, 957879982, 93232462, 166211118, 118631007, 522508999, 28377379, 63149868, 105398495, 713840759, 96857041, 518654759, 27090501, 255208232, 112216526, 240764072, 156243314, 178420762, 264947036, 43898196, 46185109, 175710157, 2402674, 196840063, 42719066, 534246432, 19485494, 170172501, 262990793, 70941610, 320174808, 134813935, 255060437, 355127200, 108321039, 14002004, 471010001, 74593834, 30420274, 383031462, 9532937, 22741361, 677426, 747640597};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAABBABBBBBBBAABBAABAAABBBAAABBA", "AAAAAAAAAAAAAAABBBABBABBABBABABBBABABABAAABBB", "AAAAAAAAAAAAAAAABABBBBBBBBAABABAABAABAABBBABB", "AAAAAAAAAAAAAAAABABAAABBAABBBBABABBBBBAAAABBA", "AAAAAAAAAAAAAAAABBAAAAABAABBABBBBBAABBABABBAB", "AAAAAAAAAAAAAAABABBBBBBAAABBBAAAABBBAAAAAABAA", "AAAAAAAAAAAAAAABBAABAABBABBABBBBBABAAABAABBBA", "AAAAAAAAAAAAAABBABAABABBABAAAAABAAABBABAAABBA", "AAAAAAAAAAAAAAAABBABAAAAAAABBAABAAAAAAABBBAAA", "AAAAAAAAAAAAAAAABBBBABABBAAAABABBBAABAABAABBB", "AAAAAAAAAAAAAAAABBABBBAAABBAAABBBAABAABABABAB", "AAAAAAAAAAAAAAABBBBABBAAAABABBBABBABBAAABABBA", "AAAAAAAAAAAAAAAABABABBBAAAABAABBABBAABAAAABAB", "AAAAAAAAAAAAAAAABBAAAAABABBABBAABABAAABBBBBBB", "AAAAAAAAAAAAAAAABBABABBAAAAAABBAABBBBABBABBAB", "AAAAAAAAAAAAAABABBAABABBAAABABABBBBBBBAAABAAA", "AAAAAAAAAAAAAAAABBABAAABBBBABABBAAAABBAABBBBA", "AAAAAAAAAAAAAAABBBBABABAABAAABABAABBABBABBBBB", "AAAAAAAAAAAAAAAABABABBABABBBABABAABABABBAABAA", "AAAAAAAAAAAAAAABABBAAAABAABBABBBABBBABAAABBAA", "AAAAAAAAAAAAAAAABBABBAABABAABBBAABBABBBAAAABB", "AAAAAAAAAAAAAAABABABBABAABAAAAABBBBABAAAABBBA", "AAAAAAAAAAAAAAAABBBBAAAABABABAABBAAABABBABABB", "AAAAAAAAAAAAAAAABBBBBABBABBAABAAABBBAABABAAAB", "AAAAAAAAAAAAAAABABBAABBABBBABAAAABABBBABBAAAA", "AAAAAAAAAAAAAAAABABBBAAAAAAABBAAAABAABAAABABB", "AAAAAAAAAAAAAAAABABBBAABAABAABBBABAAABABBBBAB", "AAAAAAAAAAAAAAAABBBBBABAAAABABBBABABAAAAABBAA", "AAAAAAAAAAAAAAAABABAAAABABAABBAAABBAAABBBBBBB", "AAAAAAAAAAAAAAABABAAABAABBBABBBBAAAAAABBBBBAA", "AAAAAAAAAAAAAAAABABBABABABBBBABABBBBBABBABAAA", "AAAAAAAAAAAAAAABBBBBAAABBBABABBAABAAAAAABBBAA", "AAAAAAAAAAAAAAAABABABAABBBAABABBBBAAAAABBAABA", "AAAAAAAAAAAAAAAABBBBABBBABBABBAAABBBABBBBBABB", "AAAAAAAAAAAAAAABABBAABABABBBBAAAAABBABBAAAABA", "AAAAAAAAAAAAAAAABBAAABABABAABAAABABBBAAAABABA", "AAAAAAAAAAAAAAABBAAAABABBBAABABAAAABBABABABBA", "AAAAAAAAAAAAAAAABBBAABAAAABBABAAABBBABBAABBAA", "AAAAAAAAAAAAAAABABBAAAABAABAABAABBABAAAABABBB", "AAAAAAAAAAAAAAABBAABABBABBBBABBAABAAABAABBBBB", "AAAAAAAAAAAAAAAABBABABBBABBABBABBAABBBBBABBBA", "AAAAAAAAAAAAAAAABABAABBBAABAABBBAAABBAAAAABBA", "AAAAAAAAAAAAAAABBBABAABBABAAAABABBBAABBBAABAB", "AAAAAAAAAAAAAAAABBAAABBBAAABBBBBBBBBBAABABBAA", "AAAAAAAAAAAAAAAABABABBBBAAAABBBAABBABBBBBBBBA", "AAAAAAAAAAAAAAABBABAABAABAAABBABAABABBBBAAAAB", "AAAAAAAAAAAAAAAABABAABAABBBBAAABAABAABBABBBBA", "AAAAAAAAAAAAAAAABABABABBABABBBAAAAABBAABBBBBB", "AAAAAAAAAAAAAAAABABAAAAAABBBABABABAAAAABABBAA", "AAAAAAAAAAAAAABABBBAABAAABBAAABABBBBBBAAAABAA"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int wordLength = 39;
    vector<string> forbiddenSubstrings = {"BAABBBBBBBBA?BB", "BBBA?BBBABBAB?A", "BBABABBBBBBBBAB", "BBBBAABABBBBBBB", "B?BBBABBBBBBBBB", "ABBBBBABBBBABBB", "B?BBBBBBABBBBA?", "BBBBBABBBBBBBAB", "ABBBBBBBBBBBABB", "BBBBBBB?ABBBBBB", "ABABBBABBBBBBBB", "ABBABAABBBBBBBA", "BBABBABBBABBBBB", "BBBBBBBA?B?ABBB", "B?BABBABBBBABBB", "ABBABABBBBBBBBB", "BABBBBBBABB?BBB", "BBBABBBBBABA?BB", "BBBBAABBBB?AABB", "BABBBBB?BBBBABB", "BBBBBBBAAABABBB", "BABBABA?BBBBBAB", "ABB?BBABBBBBBBA", "BBBBBBBBABABBAB", "AABBBBBA?ABBBBB", "BBBBBBBBBBBBBBB", "BBBBBBA?BBBBBBB", "BBBBBBBBBBBBBBB", "B?B??BBBBBA?BBB", "BBABBBBABBAB?AB", "BBBBBABBABBB?AB", "B?BBABBBBB?BBBB", "AABBBB?B?BABBBA", "AAABBAA?BBABB?B", "BB??ABABAABBBBB", "BABBBA?BB?BB?BB", "BBBBB?BBBABBBBB", "BBBBBBBBBB?B?B?", "BABBABBBBBABBBB", "BBBBAB?B?BBBBBA", "??BAABABBBBAABB", "BBAAABAAABAABBB", "BBAABABBBBBBAAB"};
    vector<int> wordNumbers = {45900524, 841822096, 286623407, 482340491, 2313986, 682740965, 593414596, 408527572, 680904774, 273075747, 13170008, 126882073, 20164897, 532407845, 271682687, 206274568, 363078305, 52732938, 494647088, 684983299, 511148606, 119461902, 25878282, 913213032, 9722050, 93729721, 65160629, 382145033, 194596754, 240964590, 83808605, 597834537, 730499202, 953522177, 78024475, 347151841, 285421242, 721032543, 232073582, 203882352, 8840646, 150799993, 103408786, 195903511, 314959741, 312883013, 623868907, 403018028, 66732991, 145224856};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAABABBABAABBAAABAAABBAAABBBB", "AAAAAAAAABBABAAABBABBAAABBBBBAAAAAABABA", "AAAAAAAAAABAAABBBAABAAABBAABBABBABAAABB", "AAAAAAAAAABBBABBBBBABBBABBAABBABBBBBBAA", "AAAAAAAAAAAAAAAAABAABAAAAABBABABABBBAAB", "AAAAAAAAABABABAABBBAABBABAAAABABBABABAA", "AAAAAAAAABAABAABBBABAAAAABBBABBABBBABBA", "AAAAAAAAAABBAABABABBBAABABBAABBBBBBAAAA", "AAAAAAAAABABABAABABABBAABABBAABBABABBAA", "AAAAAAAAAABAAAABBBBAABABBBABABBAABAAAAA", "AAAAAAAAAAAAAAABBAABBBABABAAABABBBAAAAB", "AAAAAAAAAAAABBBBBABBAABAABABBBAABAABBBA", "AAAAAAAAAAAAAABAABBBBAABBBAABBBBBBAAABB", "AAAAAAAAABAAAABAABAAABBAAABAABBBBBAAAAA", "AAAAAAAAAABAAAABBABBBABAAAAABAABBAAAABA", "AAAAAAAAAAABBAABBAAABBAAABABBABBBBAABBB", "AAAAAAAAAABABBABAAAABAAAAAAABAAAAAABAAA", "AAAAAAAAAAAAABBABAAAAAAAABBBABBABBBABBA", "AAAAAAAAAABBBBABABBBBAABABAAAABBBBBBBBB", "AAAAAAAAABABABABAABABBABBAAABABABABABAA", "AAAAAAAAAABBBBBBBAABBAAAAAAAAAABBABABAA", "AAAAAAAAAAAABBBABBAAABAAAAABBAAAAABAAAB", "AAAAAAAAAAAAAABBAABABBBAAABABAAAABBBBAB", "AAAAAAAAABBBAAABBBAAAABABABBAABABABAABA", "AAAAAAAAAAAAAAABAABBAAAABBBAAAAABAAAAAB", "AAAAAAAAAAAABABBBAABAAABAAABABABBBABABB", "AAAAAAAAAAAABAAAAAAABBABABAABABBBBBBAAA", "AAAAAAAAAABABBBBABBABAABBABABABBAAAABAB", "AAAAAAAAAAABBAAAAAABBAAABABABABABBBABAA", "AAAAAAAAAAABBBABBBABBBAAAAABBBBABBBBABA", "AAAAAAAAAAAABABAABABABBBBBAABABAAAAAAAA", "AAAAAAAAABAABABAABABBABBBBBABABBBAAABBA", "AAAAAAAAABABBABABBABAABBBBBBBBBBABBAAAA", "AAAAAAAAABBBABBABBAAAABABABBAABBBABBBBB", "AAAAAAAAAAAABAABBABAAAABABBAABBBBABBBBB", "AAAAAAAAAABABABBAAAABBBAABBABBAABBAAAAA", "AAAAAAAAAABAAABBABBABABBBAAAAABAAABAAAA", "AAAAAAAAABABBAABBABABAAAAABBAABBAAABBBA", "AAAAAAAAAAABBBAABBAAAABABBAAAAABBAABAAB", "AAAAAAAAAAABBAABABAAAAAABAAABAAABBBAABA", "AAAAAAAAAAAAAAABAAABABABABAABBBAAABABAB", "AAAAAAAAAAABAABABABABAAABBBBBBBABABABAA", "AAAAAAAAAAAABBAABBAAABBAABBAABBBAAAABBB", "AAAAAAAAAAABBAAAABAAAAABBAABBABBBBAABBB", "AAAAAAAAAABAABBBAAABAABABAAABAABBABAABA", "AAAAAAAAAABAABBABBABAAAAABBABAAABBAAAAB", "AAAAAAAAABAABBABBAABABBBABBABBAABBABAAB", "AAAAAAAAAABBAABAAAAABBAABBBAABABBABABBA", "AAAAAAAAAAAABAAAAABBBBBAABBABAAABAAABAA", "AAAAAAAAAAABAAABBBBBBAABBBABBBBABAABBBB"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int wordLength = 47;
    vector<string> forbiddenSubstrings = {"AAAAAB?AAABBBBAA", "?BAAAAAABAABABAB", "AAAAABBABABABABB", "ABABABABAABABBBB", "ABABAAABAB?BABAB", "BABABAABBBABBBAB", "BBABAAAAABBABAB?", "BABABBAABAA?BBAA", "BA?AABAB?ABAABA?", "BBABBABBBBBBBABA", "ABABBBBBBBBBBAAB", "AABABBBAB?BAABAB", "AAABAAABABAAABBB", "ABABAABBBBBABAAA", "B?ABAABBAABAABAA", "AB?BABBABABBABAB", "ABBABBBBBAAABABA", "ABABB?BBBAAABABB", "BAABABABAAABA??B", "AABAB?BBAABBAABB", "ABBBBBAA?BABBAAA", "ABBBBABAB?BBABBA"};
    vector<int> wordNumbers = {412698184, 602739517, 131486342, 13790391, 519820035, 752530582, 3504347, 92353966, 249347758, 40893332, 203004567, 647243672, 20442275, 57535006, 30609270, 531722925, 572750595, 387663222, 493802507, 284465194, 677015564, 624068551, 389831021, 4168157, 108052060, 422482041, 91105164, 47421138, 157252913, 72262015, 153443997, 755142417, 163087442, 128271879, 158471047, 542191720, 103889037, 176069546, 208578941, 508174554, 181388171, 115250602, 351802835, 113505520, 270314333, 137274093, 518402173, 137031987, 181980881, 87879960};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAABBAAABBBABABBBBABBBBAABBABABB", "AAAAAAAAAAAAAAAAABAABAAABBABBBABBBAABAAAAABBBAB", "AAAAAAAAAAAAAAAAAAAABBBBBBABBBABAABAABBBABAAAAA", "AAAAAAAAAAAAAAAAAAAAAAABBABABAABAAABBBBABBABBAA", "AAAAAAAAAAAAAAAAAABBBBBABBAABBBAAAAAABBABAABABB", "AAAAAAAAAAAAAAAAABABBABABBBBAABABBBAABBABBBBBAB", "AAAAAAAAAAAAAAAAAAAAAAAAABBABABBBBBBAAABBABABAA", "AAAAAAAAAAAAAAAAAAAABABBAABAAABBBBABBABABBBABBB", "AAAAAAAAAAAAAAAAAAABBBBAAAABBABBBBBABBABBAAABAA", "AAAAAAAAAAAAAAAAAAAAABAABBBABBABBBBABBBBABBABAB", "AAAAAAAAAAAAAAAAAAABBAAABAAAAAAABBAABBBAAABAAAB", "AAAAAAAAAAAAAAAAABAABBBAAABBBABBBBABBABABABBBBA", "AAAAAAAAAAAAAAAAAAAAAABAABBBABBAABBABAAABBBABAA", "AAAAAAAAAAAAAAAAAAAAABBABBBBAAAABABBBABBABAAABA", "AAAAAAAAAAAAAAAAAAAAAABBBABBAAAAABBAAAABAAAABAA", "AAAAAAAAAAAAAAAAABAAAAAAAABBBABBBABBAAAAABBBABB", "AAAAAAAAAAAAAAAAABAAABABABAAAABAABBBAAAABBABAAB", "AAAAAAAAAAAAAAAAAABABBBABBABAAABBBAABAAABBBAAAB", "AAAAAAAAAAAAAAAAAABBBABBBABABABBBAABABABAABBBBA", "AAAAAAAAAAAAAAAAAABAAABAABABBBBABAAABBABBBBAAAA", "AAAAAAAAAAAAAAAAABABAAABBBABAABABAAAAAABAAABBBA", "AAAAAAAAAAAAAAAAABAABABBABBBAAABBBABABAAAABBABB", "AAAAAAAAAAAAAAAAAABABBBBAAABABABBAAAAABBAAAABAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAABAABBAAABBBBAB", "AAAAAAAAAAAAAAAAAAAABBABAAAABAABBBAABBBBAAABBAA", "AAAAAAAAAAAAAAAAAABBAABBAAAABBABBAABABABBBBBBAA", "AAAAAAAAAAAAAAAAAAAABABABBBBBBABABBBBABBBBBBABB", "AAAAAAAAAAAAAAAAAAAAABABBABBABBBAABBABABABBAABB", "AAAAAAAAAAAAAAAAAAABAABABBBBBBAAAABABAABAAAAAAA", "AAAAAAAAAAAAAAAAAAAABAAABABBBAAAABBBAAAABAABAAB", "AAAAAAAAAAAAAAAAAAABAABABAAAABBAAABABAABAAABBBA", "AAAAAAAAAAAAAAAAABABBABBABAAAABBAABBBAAABBAABAB", "AAAAAAAAAAAAAAAAAAABAABBBABABBBBBAAAABBBABBABBB", "AAAAAAAAAAAAAAAAAAAABBBBABBBBABAAABBAABBBBBAAAA", "AAAAAAAAAAAAAAAAAAABAABBAABAAAABBAABBBBBBBBABBA", "AAAAAAAAAAAAAAAAABAAAAABABBBBBBBABBAABABAAABBBA", "AAAAAAAAAAAAAAAAAAAABBAABAAABAABBABAAAAAABABBBB", "AAAAAAAAAAAAAAAAAAABABABABAAAAAAABABBBABBABBBAB", "AAAAAAAAAAAAAAAAAAABBAABAABBAAAAAABAABAABBAABAA", "AAAAAAAAAAAAAAAAAABBBBABABBAABBAABBBAABBBBAABAA", "AAAAAAAAAAAAAAAAAAABABABBBBAABABABBAAAABABAAAAA", "AAAAAAAAAAAAAAAAAAAABBABBBBABAABABABBBAABBABABB", "AAAAAAAAAAAAAAAAAABABABAABBBBBABBABABAABABAAAAA", "AAAAAAAAAAAAAAAAAAAABBABBABBAABBBABBBAABAABBAAA", "AAAAAAAAAAAAAAAAAABAAAAABABAAABAAAAAAABBBAABAAA", "AAAAAAAAAAAAAAAAAAABAAAABAAABBBBABBAABAABAAAABA", "AAAAAAAAAAAAAAAAAABBBBBABABAAABAABBAABBAAAAAAAA", "AAAAAAAAAAAAAAAAAAABAAAABAAAABBBBBBBAAAABAAABBB", "AAAAAAAAAAAAAAAAAAABABABBBBBABBBBAABBBABBAAAABB", "AAAAAAAAAAAAAAAAAAAABABABAABBAABBAAABABAABABBBB"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"BABB??AB?B?A??B??", "BA??BABA???AA??AA", "AAA?BB?AAA??BAA?A", "AA??BAB??BAAAA?BA", "B?B????BB?BB?A???", "AB??AA?B???B?AA??", "?A???A?B?AA??BABA", "?BBBBAAB?AAA?BAA?", "BBA?AA????ABBAA??", "??B????AAB?A?BAAA", "???ABAAAB?ABBB?B?", "BA??ABBBB??A???AB", "A?AB??ABAB?AB??B?", "A??B???B???ABBBB?", "A??BA??BBABABBBAA", "B??ABBBBB??BAA???", "ABA?A?B?AAAAB?BA?", "?AB?AAB??BB???BAB", "AAABA?A??BA?B?B??", "ABA??A??BB?B?B?AB", "?B??BBABB?BABA?AA", "??AA??BA????ABB??", "?BA?A?B?BB??BB??A", "AAABBA???B?AA?BAA", "??B?BA?BB?B?AB??B", "???BBB????A?BBBB?", "???BBBAABA?AAAA??", "?AA?AB?ABAAA???BB", "AA??A?ABA?B?AB?BA", "B??AA??B?A???AABA", "BBAB?A???A?A?BB??", "BA?BA???BAAAA??B?", "?BB??????BAB?BB?B", "B?B??B??A?BB?B??A", "??B?B?B?A???A??BA", "?AA?A?ABAA????B?A", "BA??B??A???????AB", "BA?AB??A?AAA?????"};
    vector<int> wordNumbers = {28510226, 12687673, 79744132, 24722262, 35842936, 94635882, 88176613, 72850053, 34756264, 73180618, 18083739, 54858310, 79342157, 10306944, 47715185, 1324420, 57777363, 1370220, 7661479, 48387701, 4706236, 44081123, 40038868, 82571007, 10862899, 55985446, 955099, 30820812, 82414393, 73986529, 30477584, 18550300, 62696741, 31463089, 54489971, 9944202, 43886860, 76789174, 91786001, 42516710, 19447901, 12016214, 14922276, 24999273, 5453494, 50261368, 79732899, 66140294, 96895551, 87609569};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAABBABABAABABBBAAABABABABAABB", "AAAAAAAAAAAAAAAAAAAAAAAABABABBABAAABAABABAAAABBABA", "AAAAAAAAAAAAAAAAAAAAABABBAAABAAAAABBBAAAABBAABBAAB", "AAAAAAAAAAAAAAAAAAAAAAABABBABBBBABBABBBBAAABAAAAAA", "AAAAAAAAAAAAAAAAAAAAAABAAAABAABBABAAAABBBAAAABBAAB", "AAAAAAAAAAAAAAAAAAAAABBABAABAABABABAABAAAAAAABBAAA", "AAAAAAAAAAAAAAAAAAAAABBAAABAAAAABBBABBABABAABBBABA", "AAAAAAAAAAAAAAAAAAAAABAABBABAABBBABBAABBBABAAABAAA", "AAAAAAAAAAAAAAAAAAAAAABAAAAAAAABBAABAABABBBABBBAAB", "AAAAAAAAAAAAAAAAAAAAABAABBABBBBABBABBABABBAABBABAB", "AAAAAAAAAAAAAAAAAAAAAAAABBBBABBABAABAAABBBABABBBAB", "AAAAAAAAAAAAAAAAAAAAAABBABBBBBBABABAABABAABABBABBB", "AAAAAAAAAAAAAAAAAAAAABABBAAAAABBABABAAABABABABBBBB", "AAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAABBBBBBBABBBAABAA", "AAAAAAAAAAAAAAAAAAAAAABBAAAABAABAABAABAAAAABBABBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABBAABBABABABBAAABABABB", "AAAAAAAAAAAAAAAAAAAAAABBBABABBBBAAABAABAABAABABABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABBABABAAABBABAABBAABAB", "AAAAAAAAAAAAAAAAAAAAAAAAABBAAAAAABABBBAAAAAAAAABAA", "AAAAAAAAAAAAAAAAAAAAAABBAAABABBAAAAABBABBBABABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAABBABBAABABBBABBBBAABBAAA", "AAAAAAAAAAAAAAAAAAAAAABABBAABBAABBABAABBABBBBAABAB", "AAAAAAAAAAAAAAAAAAAAAABAABBBAAABAABAABBABAAABABABB", "AAAAAAAAAAAAAAAAAAAAABABBABBABABBBAABAABAAAABAABAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAABABAAABBBBAAABABABBAAB", "AAAAAAAAAAAAAAAAAAAAAABBBAABAAAABBBAAAABAAAABBBBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABAAABAAAABABABBAABABAB", "AAAAAAAAAAAAAAAAAAAAAAABBBAABBAAAAAAABBBBBBBAAABBA", "AAAAAAAAAAAAAAAAAAAAABABBABBAABBBBABABBAABBABAABBB", "AAAAAAAAAAAAAAAAAAAAABAABBBBAABAABABBABBABABAABABB", "AAAAAAAAAAAAAAAAAAAAAAABBBAAABBBBABABABBAABAABABBB", "AAAAAAAAAAAAAAAAAAAAAAAABBBBBBAAAABABABBBAAABABBBB", "AAAAAAAAAAAAAAAAAAAAAABBBBBBABABABAAABBAAABBBAAABA", "AAAAAAAAAAAAAAAAAAAAAAABBBABABBAABABBABBBAAABAABAB", "AAAAAAAAAAAAAAAAAAAAAABBABBBABBBABAAAABBBABABBBAAB", "AAAAAAAAAAAAAAAAAAAAAAAAABBBBBAAAABBBABAAAAAAABAAA", "AAAAAAAAAAAAAAAAAAAAAABABBAABAABBBBBABBBAAABBAABAA", "AAAAAAAAAAAAAAAAAAAAABABAABBABAABAAAAABBABABABBAAA", "AAAAAAAAAAAAAAAAAAAAABBAABABBBBBBBBBABBBBAAAABABAA", "AAAAAAAAAAAAAAAAAAAAAABABABBAAAABBBABBBBBABABAABBB", "AAAAAAAAAAAAAAAAAAAAAAABAAAABAAABBABABABBAAABAABAB", "AAAAAAAAAAAAAAAAAAAAAAAABAABBBBABABAAABBABAABBAABB", "AAAAAAAAAAAAAAAAAAAAAAAABBAABBAAABBAABBBBABABAAABA", "AAAAAAAAAAAAAAAAAAAAAAABABBBABAABAABAABABBBBBBBABA", "AAAAAAAAAAAAAAAAAAAAAAAAAABBBBBABAAAAABABBBABBABAB", "AAAAAAAAAAAAAAAAAAAAAABBAABBAABAABBAABBAAABAABABBB", "AAAAAAAAAAAAAAAAAAAAABABBAAABAAAAAABABBBABAABAABAA", "AAAAAAAAAAAAAAAAAAAAABAAAABBAABAABABAAAABAAAAAABAB", "AAAAAAAAAAAAAAAAAAAAABBABABBBBBBAABABABAAAAAAAABBB", "AAAAAAAAAAAAAAAAAAAAABBAAAABAABBABAAAABAAAAABAAAAB"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"??A??A?AAB??BBBAA", "?ABBABB?B??A???B?", "?AB??ABAB???B??AA", "B??BB?B?A?BB??BBB", "B??BA?B?BAB????B?", "?B???B??B?B??ABB?", "BB?BBB????B?B????", "??BBAB??AA?B??BA?", "B?AABABAA???BB??B", "B?B?ABA??BB??AB?A", "??B??A?AB?????BB?", "B?A???BA?BBBBB?AB", "?B???BAA?BAB??A?A", "????B?B?????BABBB", "?????B?BB?AAB?A?A", "????????BA??BA?A?", "ABBA?AAB?B????BB?", "?ABA?B??ABAA??B??", "?BBAA?BA?AB??AABA", "A?BBB???B?BB?B?BB", "??B???A??A?????A?", "??B????B??A??BB??", "??BAAB?B?A??BAABB", "???????A??AB?????", "ABA??BA?AA?B???AA", "?BB?AA?BBAB?A?BB?", "??AB?AA?B?A??BB??", "??BB??ABAB?A??AA?", "A???BB?A?BA?B?BB?", "A?B?B?B?B?BB?BBBB", "B?BA?BB???B?BB?B?", "ABB?????B?A??BA?B", "?BAA??ABAB??ABAAB", "AB?A??BBBB??BAABB", "?????????BAA?B??A", "A?A????B?B?A?B?AA", "BA??BA?BBB??BB?A?", "?????A?A?A?A?B???", "BB????BBAA?AABBBA", "?A?ABB?A??B???A??", "BA?BB???A???BA???", "???A??B?BBA??????", "BBBB??AABAB??BBBB", "BBBBA???A?BAA???A", "B?BABB??BBB????BB", "BBAA??BBA?ABA?B?B", "????A?AB?B?A?BBAB", "?B?BBBB?B?A??A???", "?B??B??A???????A?", "?B?????A?AB?BB?B?"};
    vector<int> wordNumbers = {12520518, 31961893, 40304151, 27837798, 20372720, 31714587, 97377820, 58795796, 53488665, 7462695, 83925285, 23973071, 43150579, 6877413, 55913505, 53481653, 34608431, 57242072, 765393, 64059308, 31731040, 90548090, 42858323, 17605960, 74338244, 81887356, 20681770, 83387233, 42855215, 49831772, 23559619, 84426118, 72439001, 38702127, 86874904, 76643646, 65492352, 5162816, 46148970, 26390598, 52728043, 78129620, 6603033, 29666312, 90700243, 74118856, 22337297, 23938656, 91087551, 8791476};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"??AB?A?A?A??A?B??", "B??BBA??B?B?A?A??", "???AB?A?B?A?B?A??", "?B?AAB??A?BA??BAA", "????A???BA?B???A?", "AA?BA??A?AAB?BBAA", "BA???BAAA?AAB?A??", "B????B?A????A?B??", "??AA?A?AB??BAB?A?", "BA??A?A??BBBA?B??", "?A???????ABB??A?B", "?B??BBB???BBB?AAA", "A???????A?ABA?BA?", "?AAAA??B?A???A???", "A??B?A???????A??B", "BA?A??A?A?B??ABAA", "AAA???BAABB??B??B", "?B?A?A??A??ABAABA", "A???B?BB??A??????", "?BA?B?BA?B??AAAB?", "????B?????B?AB?AA", "B?B??A????A?AA???", "?B?A?A???B?B??ABA", "?BA?BAABBA??B?BBA", "A???BBABBB?????AB", "BA????BBA??BA?ABA", "B?B?AA?A??A???A?A", "A?A???ABB??AA??B?", "A?BA?A???BBBB?BA?", "????BB?BA???A?AA?", "BBBA?A?BAA?????A?", "??B?ABB?AA?A??AB?", "????B??A????A??AA", "A???BB???B??BBBBB", "???B?A??AB?B?A??A", "?AAA??????A?A???A", "A?B?AB?B?BAAAAA??", "?A?A?BAA??AAB??B?", "A?A?A?AAAB????BAA", "???????B?BAA?AA??", "A????????????A?AB", "A?A?BBABAA??B?A?A", "AABB???BA??BA???B"};
    vector<int> wordNumbers = {25211908, 54125905, 60966162, 37694815, 61565939, 11626774, 98922949, 24283047, 1310257, 94738905, 16295025, 53135904, 42731599, 65355213, 14037158, 75325736, 72061203, 81256584, 36960948, 43294341, 44963542, 58642702, 72463575, 80819168, 57981436, 18707865, 33545212, 79557455, 70041326, 18711707, 1737017, 31705183, 97758873, 74356425, 9194864, 86566395, 66536674, 14970078, 14964201, 78701636, 1546142, 62275505, 99919278, 98230337, 13787238, 85602196, 82544445, 51349201, 17971039, 74421303};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABABBBABBAABBBABABABBBBBABBAABABBBAABBBBAA", "AAAAAAAABABBAABBBABBBABBBBBBBABBABBABBBBBBBABAAAAB", "AAAAAAAABBAAABBBBBABBAABABBBABBBABABBBBABBBAABBBAB", "AAAAAAAABAAAAABBBBBABBBABBBBAAABBABABBBABBBABBABBB", "AAAAAAAABBAABABBBBBBBBBBBABBABABABABABAABBABBAABBA", "AAAAAAAAAABABBBABBAABBABBABBBBAABBBBBABABBBBBBAABB", "AAAAAAABABABBABBBABBBBAABBBBBBBABBBABBBBBBBBABBABA", "AAAAAAAAABABABBBBBBBBBBBABBBAABABBBBBABBAABBBABAAB", "AAAAAAAAAAAAABBBBBABBABBABBBABABABBBBBBBBABAABBBBA", "AAAAAAABABABABBBBBABBBABBBABBAABBBABABBBBBBBBAABBB", "AAAAAAAAAABBBBBABBABBBABBBBBABBBABABBBBAABBABBBBAA", "AAAAAAAABABABBBBBBBBABBBABBBABBBABAAABABBBABBBBABA", "AAAAAAAABAABABBBBBBBBBBBBAABBBABABABBBBBAABBBBBAAA", "AAAAAAAABBBABABBBBBBABBBBBABBBBABABBBAABABBBBABABB", "AAAAAAAAAABABBBBBBBBBBBABBABABABABABAABBABAABBBBBB", "AAAAAAABAAAAABBBBBBBBBBABAABBBBBABBBBBBABBBAABBABB", "AAAAAAAABBBBBBBBBBABBBABBABBBBBABBBABBBBBAABBBBABA", "AAAAAAABAAABBBBBABBABBABBBABABBBBBBABBABBBBBAAABBA", "AAAAAAAAABBBBBBBBBBBABBBBBAABBBBBABBBAABABBAAABBBA", "AAAAAAAABABAAABBBBBABBABBBABBBBAAABBBBABABBAABBBBB", "AAAAAAAABABABABAABBBABBBBBBABBBBBBBBABABBBBABBBAAA", "AAAAAAAABABBBABBBBBBABBBBBBBBABABBBABABABBAABBABBA", "AAAAAAAABBBBBBBBBBBAABBBBBBBABBAABBBABABABBBBBAABB", "AAAAAAABAAABBBABBBBBBBABBABBBAABABBBBABBBABBABABAA", "AAAAAAAABABBBABBBBBABBBBBBABBBBBBBABBABBBABABAAAAA", "AAAAAAAAABAAAAABBBBBBBBBBBAABBBBBBAABBBBBAABABABBA", "AAAAAAAAABBBBABBBBBBABBBBBBAABBABBABBABAABBBABBABB", "AAAAAAABAAABABBBBBBBBBBBABBBABABBBABBBABBAABBBABAB", "AAAAAAAABBBBBABBBBBABBBABABABBAABBBBBBBABBABBBBAAB", "AAAAAAAAABAAAAABBBBBBBBBBBABAABBABBBABAABBBBBAABBA", "AAAAAAAAAAAAABBBBBBBBBBABBABBBBBABBBBBBBABBABABAAB", "AAAAAAAAABBBABABBBBBABBABBBAABABABABBBBABBBBBBBBAA", "AAAAAAABABABBAABBBBBABABBBBBAABBBBBABBBBABABBBBBAA", "AAAAAAABAAAAABABBBBBBBBABBBABBBABBBABAAABBBBBBBABA", "AAAAAAAAAABAAABBBBBABBBBBAABBABBBABABBBAABBABAABBA", "AAAAAAABAABABBBABBBABBBABBBBBBAABBBABABBBAAABBABAB", "AAAAAAAABBBABBBBBBABBBBAABBBABABBBBABABAABBABAAAAB", "AAAAAAAAAABBBABAABBBBBABBABAABBABBABBBAAAABBBABBAB", "AAAAAAAAAABBBABAABBBBBABAABBBBBABAABBABBBBBBBABABA", "AAAAAAABAAABABBBBBABBABBABBBABBABBBABAABBBBAAABAAB", "AAAAAAAAAAAAABBBBBABBBBBABBBBBBBABBBBBABABABBBBBAB", "AAAAAAAABBABABBBBBBABBBBABBBBBBABABABBBABABABBBAAB", "AAAAAAABABABBABBBBBBBBBBABBABBBBBBBBABBBBBAABBBBAA", "AAAAAAABABABBAABBBBBBBABBBBBABABBBABBBBBAAABBBABAB", "AAAAAAAAAABABBBBBBBBBBABAABBBBBBBABBBABBABBBABABBB", "AAAAAAABAABABBBABBABBBAABBBBBBABBBBBBABBBBBBBAAAAA", "AAAAAAABAAABBBBBBBBBBABBABBABABABABBBBBABBBBBBAAAA", "AAAAAAAABABABBBABBBBBABABABBBABBBBBBAABBABBABBBABB", "AAAAAAAAAABBBBBBBBBBBABBBABABABAAABBAABABBBABBBABB", "AAAAAAABAAAAABABBBBBBBBBBABBABBBABABBBBBBBBBBBBABA"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"ABABAABBABBAABAAB", "ABAAABBAABBAABABA", "BBBAAABBBAAAABBAA", "AAAABBAAABBBBAABB", "BAABBA?BAA?AB?AAB", "BBBBBAABBB?ABABBB", "BABBBBBAAAAAB?ABA", "BBABBABBBAAAABABB", "ABABBBABBABBBBBAB", "AAABAAABBABAAAABB", "BAABABABBBBBA?AAA", "AABAAABBBBBABAB?B", "ABBAAABAAABABA?AB", "?AAABBBAABBAABAAB", "BABB?BAA?A?BABBAA", "AABBBAAB?AAAABABA", "?BBAABAA?A?AABBBB", "BABABAAABAAABABA?", "ABABAAAB?A?BAAABB", "BAAAAABBABBABABB?", "BBBABBBBABBABBBBA", "BABABBAABBBABB?AB", "BA?AAA?BAAAAA?BAA", "BBAABBBBABBBA?ABA", "ABBBBBBBBAABAB?B?", "BABBBAABAAB?ABAAA", "BAABBAABABBBABBAA", "AAA?BABBAAAA?ABA?", "?AAABABAAAAABBBAA", "AAAABBABAABABABBB", "BABABA??ABAAAAABB", "BABB?BBBAAA?AAAAA", "?BAABBAAABABAABBB", "ABBAABBBBB?BAAABB", "ABBAAABBAAABBAB?A", "BAA?AB?ABBBAAAABA", "BBAAABABBBAB?AABB", "BBAAABBBBBABAABAA", "BBBA?BAABBAABABBA", "B??A?A?ABAABAAAAA"};
    vector<int> wordNumbers = {289287822, 593139564, 89518624, 4084505, 205796787, 42612553, 37136846, 110609851, 216088769, 53179438, 324680338, 382340968, 875325998, 462147295, 221755497, 373793708, 484297091, 155631906, 45926203, 20477905, 261913493, 294331525, 447479924, 868719896, 925650783, 329137712, 13746565, 86071329, 21164401, 56615219, 200238837, 26026567, 219750906, 439608998, 563683965, 95639766, 814612309, 639557061, 39419719, 56147507, 430594322, 641477183, 113038546, 456989653, 526249904, 76976588, 320300124, 37777337, 771919786, 206382324};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAABAAABABBBBBAAAABBBABBABBBBBBB", "AAAAAAAAAAAAAAAAAAAABAAABBBBBAAABBAAAABAAABBAABBAA", "AAAAAAAAAAAAAAAAAAAAAAABABABBAABBABBBAAABBBABBBAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBABBABBABBBABAAABB", "AAAAAAAAAAAAAAAAAAAAAABBAAABBABBBBBBBBAABABAAABAAB", "AAAAAAAAAAAAAAAAAAAAAAAABABAABAAABBABABBAABBBABBAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAABBBBABAAABAAAABBBABABA", "AAAAAAAAAAAAAAAAAAAAAAABBABABABBBAAAABBAABABBABAAB", "AAAAAAAAAAAAAAAAAAAAAABBABAAAABBBBBABBAAABAABBBABA", "AAAAAAAAAAAAAAAAAAAAAAAABBAABBABABABABBAABBABAABAB", "AAAAAAAAAAAAAAAAAAAAABAABBBABAAAAAABAAAABBBBBBAABA", "AAAAAAAAAAAAAAAAAAAAABABBBAABAAAABAAAAAAABAABAABAB", "AAAAAAAAAAAAAAAAAAAABBABABAAAAAABABBBBABBAAAAABABB", "AAAAAAAAAAAAAAAAAAAAABBABBBBBBABBBBAABABBAABAABAAB", "AAAAAAAAAAAAAAAAAAAAAABBABABBAABBBBABABAAAABBAABAA", "AAAAAAAAAAAAAAAAAAAAABABBABAABBBABAAAAABAABBBBBBBB", "AAAAAAAAAAAAAAAAAAAAABBBABABAABBBBBAAAAAAAABBAABAB", "AAAAAAAAAAAAAAAAAAAAAABAABABBAABBAAAAAAABAAABAABAA", "AAAAAAAAAAAAAAAAAAAAAAAABABBAAABABABAAABBBABBBAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAABAABBBABBBABBAAABBBBABABA", "AAAAAAAAAAAAAAAAAAAAAABBBBBBABABABABAAAAABBBAAAABA", "AAAAAAAAAAAAAAAAAAAAABAAABBBAABABABABBBABBAABBABAB", "AAAAAAAAAAAAAAAAAAAAABBABBAAABABAABBBABBAABBBBBABB", "AAAAAAAAAAAAAAAAAAAABBABAABAABBABBAAAABBBBBAABBBBB", "AAAAAAAAAAAAAAAAAAAABBBAAAAAABAAABBAAAAAAABABABBAB", "AAAAAAAAAAAAAAAAAAAAABAABBBBBAABAABBBABBAAABABBBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAABBABAABBBBBABBBBAAABBBBA", "AAAAAAAAAAAAAAAAAAAAAAABABAABBAAABBAABBABABBBAABAB", "AAAAAAAAAAAAAAAAAAAAAAAAABABAAABBAABABBAAABBAABBBB", "AAAAAAAAAAAAAAAAAAAAAAAABBABBABABABABABBBBABABAABB", "AAAAAAAAAAAAAAAAAAAAAABBAAAAABBAABBBBABBAABBAAABBA", "AAAAAAAAAAAAAAAAAAAAAAAAABBAABAAABBAABBABABABBBABA", "AAAAAAAAAAAAAAAAAAAAAABBABABAABAAABABABBBBAAABBABB", "AAAAAAAAAAAAAAAAAAAAABBABABAABBAABABABBBBABBBBAAAB", "AAAAAAAAAAAAAAAAAAAABAAABAAAABBABABABBAABABAABBBAA", "AAAAAAAAAAAAAAAAAAAAAAABABBBAAABBAABABABABABABAABB", "AAAAAAAAAAAAAAAAAAAABBAAABABABAABAABBBBABABAABAAAA", "AAAAAAAAAAAAAAAAAAAABAABBABABBAABAAAAAABAAAABABAAA", "AAAAAAAAAAAAAAAAAAAAAAAABAABBAAAAAABAAAABABBBABBBA", "AAAAAAAAAAAAAAAAAAAAAAAABBABBAAABBABBBBAAABBABAABA", "AAAAAAAAAAAAAAAAAAAAABBABAAAAABBABAABAABAABBABBBAA", "AAAAAAAAAAAAAAAAAAAABAABBABBABAAAAAAABBBABAABAABAA", "AAAAAAAAAAAAAAAAAAAAAAABBABBABABAAAAAABAABBBBBBBBA", "AAAAAAAAAAAAAAAAAAAAABBABBBABAABBBBBBAABABBBBBAAAB", "AAAAAAAAAAAAAAAAAAAAABBBBBBBABABBBABBAABBBBAABAABB", "AAAAAAAAAAAAAAAAAAAAAAABAABABAABAABBBABAABBBBBBBAA", "AAAAAAAAAAAAAAAAAAAAABAABBABABBBAAABBABBBBBABAAABB", "AAAAAAAAAAAAAAAAAAAAAAAABAABAAABBABBBBABBBBABAABBB", "AAAAAAAAAAAAAAAAAAAABABBBABABBBBABAAABABAABAABBAAA", "AAAAAAAAAAAAAAAAAAAAAABBAAABBBBAAABBBBBAAAABABBAAB"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int wordLength = 40;
    vector<string> forbiddenSubstrings = {"ABA?ABBABABA", "BAABAABB?BA?", "BAB?AAA?ABAB", "BBABBBAA?BBA", "A?ABBBBAABAA", "B?BBBAA?BBAB", "BBABBBBBBABB", "?BAABBBBABBB", "ABAAABBABBAB", "BABBBABABAAB", "AAAABABBBAAA", "ABABAABBBBBA", "BABAB?BBAABB", "BA?ABBB?A?A?", "ABABBBBB??AA", "BBBAA?ABBBBB", "BB?BABABBAB?", "A?AB?BABBBBA", "BAAB?AABBBBB", "BAABBBBAABBB", "BBBAB?ABABAB", "BABAAABBBBBB", "ABBBAABBABAB", "ABBABBAABAAA", "?ABB?B?BBABB", "ABBAABA?AABB", "BABBBBBABABB", "?ABBAAAABAB?", "BBABAAABBBBB", "AAABBAAAABBA", "B?AABAAAB?BA", "BABBA?BBBBBA", "?AABBBBAABBA", "ABABABBABBBA", "BAABBBBBBAAB", "BBBABBBBAABA", "AAABBAB?BABB", "A?ABBABBBAAB", "BABB?AAB?BBA", "BBABBAAAABBA", "BBA?ABBB?BB?", "BAAABAABAABB", "ABBABAAAAABB", "BBAB??BAAA?A", "AABBB?A?BBAA", "BBABBA?BBBAB", "BB?BABAAAAAB", "ABABABBBAA?B"};
    vector<int> wordNumbers = {321616776, 102779443, 217470099, 895247594, 595294445, 701674912, 166099950, 27711226, 103231536, 7861347, 600283688, 360108141, 7200073, 370823294, 230794698, 757109305, 8028950, 137852582, 435750807, 212707367, 267314052, 346390245, 388615540, 195004659, 311706382, 561188991, 489792767, 642300437, 3370078, 147633902, 18744439, 88761022, 128411794, 485984532, 89416192, 441927329, 186470593, 245028379, 42350932, 419491255, 109383783, 377500640, 729005052, 54122463, 14206679, 177870221, 252492615, 47933550, 236144066, 576552787};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABAABAAAABAABAABABAABAABABBAABB", "AAAAAAAAAAAABABABBAABABBBBBAABAAAAAAABBA", "AAAAAAAAAAABBAAAAAAABBAABABAABAABAAABABB", "AAAAAAAAABBABAABBBABABABABAABBAABBBABABA", "AAAAAAAAABAAABAABBBAAABAAAABAAABABABAABB", "AAAAAAAAABABAAABAABBABBAABBAAAAABBABABAB", "AAAAAAAAAAABAABAAAABAABAABBBAABBBABABAAB", "AAAAAAAAAAAAAABABBAAAAAAAAAAABAABBBBABAA", "AAAAAAAAAAAABABABBABBAABBBAABAAAABBBBABB", "AAAAAAAAAAAAAAAABABBBBAABBBABABAABBBBBBB", "AAAAAAAAABAAABABABBAAABABAABABAAABBABAAA", "AAAAAAAAAABABAAAABBAAAABBBABABAABABAAABB", "AAAAAAAAAAAAAAAABABABAABBBAABABBAABABABB", "AAAAAAAAAABABAABBAAAABBBAAAAABBBBAABABAB", "AAAAAAAAAAABBAABBAABBAABBABAABAABAABBAAB", "AAAAAAAAABABBAAAABAAABBBABABBBAABBBBBABA", "AAAAAAAAAAAAAAAABBAAAAABAABABABBAABABABB", "AAAAAAAAAAAABBBBAAAAABAABBAABBAABBAABAAB", "AAAAAAAAAABBAAABBBBAABABABABBAAABAAABAAB", "AAAAAAAAAAABABBBABBBABBABAABBABAAABAABAA", "AAAAAAAAAAABBBBAAAABAABAAABAABBBBBBAAAAA", "AAAAAAAAAABAABBABBABBBBBABBBBBBBBAAAABBB", "AAAAAAAAAABABABBBABBBBBABBABABAABBAAABBB", "AAAAAAAAAAABABABAABAAAABBABAABAABABBBAAA", "AAAAAAAAAABAAABABBBAAABBAAAAABAABAAABBBB", "AAAAAAAAABAAAAABAABBBBBABBBBAABBBBAAAAAB", "AAAAAAAAAABBBAAABABABABABAABAABAABBBABBB", "AAAAAAAAABAABABAABBBAABBABAABBABBABBABAA", "AAAAAAAAAAAAAAAAABAABBABAABABAABBBAABBBB", "AAAAAAAAAAABAAAAAABAAAAAAABAABABBBABAABA", "AAAAAAAAAAAAAAABBBABBAABBAAABABAAABBBABB", "AAAAAAAAAAAABAABABABABABAABAABAAABBBBAAA", "AAAAAAAAAAAABBABBBBBABBAAAAABAAABAAABBBB", "AAAAAAAAAABBBAAAABAABAAAAAABBABBBBBAAAAA", "AAAAAAAAAAAABAABABBABAAABAAABAABBBAAAABA", "AAAAAAAAAABBAABABABABAABBAAABBABAAAAABAA", "AAAAAAAAAAABABAAAABBBBABABAAAABAAABAABAB", "AAAAAAAAAAABBABBABABABBBABAAAAAAAAAAAAAA", "AAAAAAAAAAAAABAAABAABBBAABAABAAAABAAAABA", "AAAAAAAAAABABBBBBBBBABABAABABAABAAAAAABB", "AAAAAAAAAAAABABBBABABBABBAABABAABAAABBBA", "AAAAAAAAAABABABAABAAAAABABAABBAAABBABAAA", "AAAAAAAAABABABAAABAABAABABAAAABBABABAAAA", "AAAAAAAAAAAAABABBAAABBAAABAABBBABBAAAAAB", "AAAAAAAAAAAAAAABABABBABABBABABBBABAABAAA", "AAAAAAAAAAABAABBABAABBBBBBBABABBAAABBABB", "AAAAAAAAAAABBBAAABAABABBAABBBBABAAABAAAA", "AAAAAAAAAAAAABAABBBAAAABABAABABABABBABBA", "AAAAAAAAAAABBABAAABABABABBABAAABABBAABAB", "AAAAAAAAABAAAABABBABAAABBBAAABAAAAABBBBB"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int wordLength = 48;
    vector<string> forbiddenSubstrings = {"AAABAAABABABABBBA", "BABAABBA?BABABBAB", "ABBBBBBBAABABBABA", "BBBABABB?AAABBAAB", "BBABBAAAB?BAAA?BB", "ABBAAAA?BBB?ABABB", "AAABBBBABAABBABBB", "BABBAABAAAABBBBAA", "AABAB?ABB?ABBABAB", "?ABAAABBBABABBABA", "AABABAAAAAABBAAAB", "AABA?BBAABAAAAAAB", "AAAAAAAABBAABAABB", "ABAAA??BA?AAAABBB", "AAAABAAABBBABBBAB", "ABBAAABBAAABBBBAB", "BBBBAABBABABAAABA", "BAABBA?AABBABB?AA", "ABABBBBBABABABAAA", "ABABBABBAB?A?AAA?"};
    vector<int> wordNumbers = {472372289, 346140054, 277963793, 32058951, 242809765, 237203292, 78288520, 985198980, 74052285, 283426759, 680663654, 830911998, 260179443, 125564615, 638288047, 234736281, 335408177, 6412794, 78337937, 484960300, 101623397, 287992228, 113702736, 202919651, 207486287, 677708229, 632692520, 229731272, 24203262, 55005084, 51847664, 493134639, 179140790, 22410865, 597374097, 210817322, 266767411, 178701736, 413535025, 172527437, 720217065, 358204398, 362607021, 385019443, 67330620, 126743615, 170327380, 88437453, 175892699, 376967009};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAABBBAAABBBABAABBBBABAAAAABAAAB", "AAAAAAAAAAAAAAAAAAABABAABBABAABABBBABAAABBABAABA", "AAAAAAAAAAAAAAAAAAABAAAABABBBAABBBBABABAABBAABAA", "AAAAAAAAAAAAAAAAAAAAAAABBBBABBABABBBBAAABBABAAAA", "AAAAAAAAAAAAAAAAAAAABBBABAABBBBABAABBAABABBBBBBA", "AAAAAAAAAAAAAAAAAAAABBBAABAABAAABABABBAAABAAAABB", "AAAAAAAAAAAAAAAAAAAAABAABABBABABAAABAABABBBABAAA", "AAAAAAAAAAAAAAAAAABBBABBABABBBAAABABABBABBBBBAAA", "AAAAAAAAAAAAAAAAAAAAABAAABBBAABBBBAABBBBAABABAAA", "AAAAAAAAAAAAAAAAAAABAAABAAAABBABBBABABAAAAAAAAAA", "AAAAAAAAAAAAAAAAAABABAAABBBBABBBAAAABABABBABAABA", "AAAAAAAAAAAAAAAAAABBAAABBBBBBBABABAABAAAABBABBBA", "AAAAAAAAAAAAAAAAAAAABBBBBABABAABAAAABABAABAABBBB", "AAAAAAAAAAAAAAAAAAAAABBBBAAABBBAABABAAABABBABBBB", "AAAAAAAAAAAAAAAAAABAABBAABBABBAAABBBAABAABABABAA", "AAAAAAAAAAAAAAAAAAAABBBAAABAAABABBBAABAAAABABAAA", "AAAAAAAAAAAAAAAAAAABABAAAABABBABBBABBBABAABAAABB", "AAAAAAAAAAAAAAAAAAAAAAAAABBAAABABAAAAAABBBBAAABB", "AAAAAAAAAAAAAAAAAAAAABAABABBABABBBABABAAABBBAAAB", "AAAAAAAAAAAAAAAAAAABBBABAABBABABBBBBAAABBABABBAB", "AAAAAAAAAAAAAAAAAAAAABBAAAABBABBABBABBBBBAABBAAB", "AAAAAAAAAAAAAAAAAAABAAABABABABAAAABAABAABABBABBA", "AAAAAAAAAAAAAAAAAAAAABBABBABBAAABABABBAABAAABBAB", "AAAAAAAAAAAAAAAAAAAABBAAAABBAABBAAAABBBAABBAAAAB", "AAAAAAAAAAAAAAAAAAAABBAAABBBBAABAABABBBABBBBBABB", "AAAAAAAAAAAAAAAAAABABAAABBAABAABBAAABABBBAAAABBA", "AAAAAAAAAAAAAAAAAABAABBAAAABABABBBABBABBAAAAABBA", "AAAAAAAAAAAAAAAAAAAABBABBBABABBAABAAABABBAABBBAB", "AAAAAAAAAAAAAAAAAAAAAAABABBBABAAAABAABAAAAABBABB", "AAAAAAAAAAAAAAAAAAAAAABBABAABBBBBABBAAABBAABAABB", "AAAAAAAAAAAAAAAAAAAAAABBAAABBBABABABAABABBAABBAA", "AAAAAAAAAAAAAAAAAAABBBABBABBAABBABBBBBBAAABABBAA", "AAAAAAAAAAAAAAAAAAAABABABBAAABABBAABBBBAAAAABBAA", "AAAAAAAAAAAAAAAAAAAAAAABABABBAAABAABABBABAAAAAAB", "AAAAAAAAAAAAAAAAAABAAABBBBBBABBBBAABABAABBBBBBAB", "AAAAAAAAAAAAAAAAAAAABBAABABBABAAAABBBBBABBBAAABB", "AAAAAAAAAAAAAAAAAAABAAAAAAAABBBAAAAAABAABAAABAAB", "AAAAAAAAAAAAAAAAAAAABABABABBBBBABBBAAABBAAABBAAB", "AAAAAAAAAAAAAAAAAAABBAAABBABBBBABBAABBABBBABABBB", "AAAAAAAAAAAAAAAAAAAABABAABABBBBBBBBBABABBBBABBAA", "AAAAAAAAAAAAAAAAAABABABBABABABBABBBAAAAABAAABBAB", "AAAAAAAAAAAAAAAAAAABABABBAAABBAAAABAABBBAABAABAB", "AAAAAAAAAAAAAAAAAAABABABBBAABBBBBBABAABABAABBABB", "AAAAAAAAAAAAAAAAAAABABBBAABABAABAABAAABAAAAAABBB", "AAAAAAAAAAAAAAAAAAAAABAAAAAABBAABAAAAAAABAAABABB", "AAAAAAAAAAAAAAAAAAAAABBBBABAAAAAABBAAAABBBBBABAA", "AAAAAAAAAAAAAAAAAAAABABAAABBBBBAAABBBBAABABAAABA", "AAAAAAAAAAAAAAAAAAAAABABABABAAAABBBABBABABBAABAA", "AAAAAAAAAAAAAAAAAAAABABABAABAABBBBABABABBBABBBAB", "AAAAAAAAAAAAAAAAAAABABBABABABBAAAAAAABBAABAAAAAA"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int wordLength = 30;
    vector<string> forbiddenSubstrings = {"BBBBAAB?BBAABB", "ABABBBBBBBBABB", "BBBBBA?BBBBABB", "BBBBABBBABBB?B", "ABB?AABAAAABBB", "BBBBAB??B?BABB", "ABB?BAB?BBBB?B", "AAA?AAABBBBBAB", "BBBBBBBABBBBAB", "BBBBAAABAA?BBA", "B?AAABAA?ABBBB", "BBBBABABBABAAA", "BBBBBBBAAB?BBB", "ABBBBABBBBBABB", "BBBBAA?BBAABBB", "BBABBBBAAB?BBA", "BBBBBBBBBBBBA?", "BAABBBBBBBBB?B", "BBBBBABBBABABB", "ABAAAABBABABAB", "?BBBBBBBAABAAA", "BBBBBAB?BABBBA", "BBBBAABBBABBBB", "BBABBBBBBAAB?B", "BBBABBABBBBB?A", "BBB?BBBBAB?ABB", "BBBBBAABABABBB", "BBBAB?BB?BBABB", "B?BBBBABBBB?BA", "ABAABABBBAABAB"};
    vector<int> wordNumbers = {95245668, 65418433, 38999769, 38179218, 6174614, 17324738, 46870209, 13259941, 21280508, 81505821, 30542967, 84439453, 8635603, 39645998, 37353520, 41180432, 24052680, 35246861, 43824265, 69576516, 49337531, 5376568, 71452689, 87480399, 85295544, 12905730, 76955776, 98841823, 92726209, 25909137, 73744771, 82799365, 10954334, 99165770, 46046865, 53598353, 41496024, 48873487, 7279053, 95625232, 13205500, 7473810, 2298017, 869170, 41188138, 98895646, 97792814, 86077453, 26054161, 93274528};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAABABBBBBBBBAAAAABBBAAAABBBBB", "AAABAAAAABBBBAAAABBAABBABBAAAB", "AAAABAABBBAABABABABABAAAABBABB", "AAAABAABBAABABBABAAAAABAABAAAA", "AAAAAAABBAAABABBAABABBBAAAABBB", "AAAAABAAABABBAABBAAAABABBBABAA", "AAAABABBBBAAAAABAABBBAABBABAAA", "AAAAAABBABABAABABABBAABBAABABA", "AAAAABABABABABABBBAABABBBBABAA", "AAABABAABAAAAABBBBBBAABBBBBBBB", "AAAAABBBBABAABBBAAABBBABBBAABB", "AAABABABAABBBBBAABBAABAAAAAABB", "AAAAAABAAABABBAABABBABABABBBAB", "AAAABAABBBBBABAABAAAAABABAABAA", "AAAABAABABBAAAABBAAAABBABAAABB", "AAAABABAABABABBABBAAABBABBAAAA", "AAAAABBAAAAABAAAAAABAAABBBBABA", "AAAABAAABBABBAABBABBAABBAABBAA", "AAAABABABBBBBBBBAAABBBABAABBBA", "AAABAAABBAAAAABABBABABBBABABBA", "AAAABBAAABBAAABABBAAABBAABABBA", "AAAAAAABABABBAAAABAABBBABAABBB", "AAABAAABBBBBBBBBABAABABAABAABB", "AAABABBAAAAAAAABBABAAAAAAAABAA", "AAABABABABBBABAAABABBAAABBAAAA", "AAAAAABBAABBBBAAAABBBBBABBABAA", "AAABAABBABABBBABBAABABABABBAAA", "AAABBAAABBBAAAAAAABAAAAAABABBB", "AAABABBBABAABBBBBBABBBBABBABAB", "AAAAABBAABBBBBABBAABBBBBABBAAB", "AAABAABABAABAAAABABAABBAAABAAA", "AAABABAABBABABABBABAABBAABABBA", "AAAAAABABBAAAAAAAAABAAABBBBBAA", "AAABBAAABBBBABAABABAAAAAAAAAAA", "AAAABABBBAAABBAABABAABBAAABBBA", "AAAABBABABBBAAABBBBABABAABBBAB", "AAAABABAABBABABABBAAAABABBABBA", "AAAABBAAABAAABABABAABBBBBBBAAA", "AAAAAAABBBABAAABAAABBBBBBAAAAB", "AAABBAAAAAABAABABBAABABABABABA", "AAAAAABBABAABBBBABAAAABAABABAA", "AAAAAAABBBABBBABABBAAAAAABAAAA", "AAAAAAAABAABAABABBBBBBAAABAABA", "AAAAAAAAAABBABBABBBABAAABBBBAB", "AAAABABAABABABBBABAAAAABABAAAA", "AAABBAAABBBAAABBABBBBAABAAABAA", "AAABBAAABAABBBABBABBBABABAAABB", "AAABABABBABAABBAAAABBBAABBBBBA", "AAAAABBABAAAABBBAAABAABAABABBB", "AAABABBBABBBAABABBABABBBBBAABB"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int wordLength = 45;
    vector<string> forbiddenSubstrings = {"AAAAABAAABAAAABAA", "A?BAAAAAAAAABABAB", "?AABABB?ABAAB?A?A", "AAAAABAAAAAAABBAA", "ABAABBAAABAAAAAAA", "BBBABA?BAAAAAAA?A", "AAAAABBABAABBAAAB", "AAAAAB?AAAAABAA?B", "BBBBBAAABABABAAAA", "AAAAABABAAAAABAAA", "AAA?BBBABAAAABAAA", "?AAAAAAAAAAAA??AB", "BBAAABBBB?AAAAABA", "AAABAABBABBAA?AAA", "ABAABAAABAAABBBAA", "B?BABABBAAAAAAAAA", "AABBABAABA?ABAABA", "AAABAAAAAAAAABAAA", "AAAABABAAAAABAABB", "BAAAABABAAB?AABAA", "AAA?BABAAABBABAAB", "AAAAAABABBAABABAA", "BA?ABBBAAABAABAAB", "ABBABAABBBBABB?BA", "ABAAAABBABBBAAAAA", "BAABABAABAAAABBAA", "ABAAABAAAAAAAABAB", "BA?AB??AAABABBA?A", "BAAAAAAAABBBAAAAA", "AAA?AA?AABAAAAABB", "AABABAAAAAAAA?AAA", "BAA?A?AABAABB??AB", "BABABBABAAABAAABA", "ABAAAABAAAABAAAAA", "BABAABAAAAABBAABA", "AAAAABBABBABBAAAA", "ABABAABA?BB?AAABA", "AAAAAB??AAA?BA?AB", "BBAABA?BAABBAAAAA", "AABAABBAAAAAAAAAA", "AAB?BA?BBBABBBBAA", "BAAAAAABBAAAAAABA", "ABABAABA?BBAAAAAA", "?AAAAAAAAAAAAAAAA", "AABBBABABBAAA?BBB", "BABAAAAAAAAAAABBA"};
    vector<int> wordNumbers = {687738253, 187945398, 632070505, 130820143, 37949091, 425408824, 91704022, 624240995, 14103834, 274602659, 77455122, 66554069, 500227685, 108132902, 643034397, 83736335, 65041462, 66185183, 83813842, 521720371, 389664255, 17801820, 36134839, 122946073, 141768520, 28629239, 276881902, 538924875, 122732442, 108574481, 462435766, 176752327, 3065846, 41679057, 220811912, 25697288, 109667375, 835764297, 314389780, 300521232, 900740678, 18139574, 136187272, 167397072, 769432620, 454631840, 22919505, 128693589, 87411658, 257311749};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAABBBBABBAABABBBABABBBAABAABBBBAA", "AAAAAAAAAAAAAAABBBABBBBBAAABBABAABBBAAABBBABB", "AAAAAAAAAAAAAABBBABBBBBAABBBABAABBABBABABAABA", "AAAAAAAAAAAAAAABBBAAAABBAABAAAABBAAAABAABBBAB", "AAAAAAAAAAAAAAABAAABABABAABBBABABAAABABABABAB", "AAAAAAAAAAAAAABBAAABBAABAABAABBBBBBAABBBBBAAB", "AAAAAAAAAAAAAAABBAAABBBBBBBABBBAAABBBBBAAABAA", "AAAAAAAAAAAAAABBBABBBABABABABAAAAABABAABABBBA", "AAAAAAAAAAAAAAABAAAABAABBAAABAAABBABAAAAABBBB", "AAAAAAAAAAAAAABAAAAABABAABABBABBABABABBABABAB", "AAAAAAAAAAAAAAABBAAABAABAAAABAAABBBBBABAAAABA", "AAAAAAAAAAAAAAABBAAAAABBBAAAAAAAAAAABBBBBBABA", "AAAAAAAAAAAAAABBAABBBBABABBAAABBBBBBBAABAAAAA", "AAAAAAAAAAAAAAABBAABABBBBBBAABBBBAAAABBABAAAB", "AAAAAAAAAAAAAABBBBAAAABBBBAAABBABBBBBAAAAAAAA", "AAAAAAAAAAAAAAABBAAABBAAAAABAABBBABABAABAAAAA", "AAAAAAAAAAAAAAABBAAAAABABBAAAABBBBABABAAABBAA", "AAAAAAAAAAAAAAABBAAAAABBABABAABABAABABAAABBBA", "AAAAAAAAAAAAAAABBAAABBAAAAABBBABABAABBABAAABA", "AAAAAAAAAAAAAABBBAAABAAAABABABBBBABAAABAABABB", "AAAAAAAAAAAAAABBAAAAABBBABABAAABBBAAAABABBABA", "AAAAAAAAAAAAAAABAAAABABBABABABABBAABBBBBAAABB", "AAAAAAAAAAAAAAABAAABABAAABABABBBBABABABBAABAA", "AAAAAAAAAAAAAAABBAABBBBBAAAABABBBABBBBBBBABBB", "AAAAAAAAAAAAAAABBBAABAAABABABBBAAAAABBABABBAB", "AAAAAAAAAAAAAAABAAABAAAABABBABBABABAABBBABABA", "AAAAAAAAAAAAAABAAAAABABBABBBABABABBAABAAAAAAB", "AAAAAAAAAAAAAABBBAABAAABAABABBBABAABAABBAAAAB", "AAAAAAAAAAAAAAABBAABBBBABBBBAAABABBABAABABAAB", "AAAAAAAAAAAAAAABBAABBAAAAAABBBBABABAAAABBBABA", "AAAAAAAAAAAAAABBAABABABBAAABBBBBABBBAAAABBBBB", "AAAAAAAAAAAAAAABBBABBAABBABBAABBBAAABAAABAABA", "AAAAAAAAAAAAAAABAAAAAAABBABBABBBBAABABAABABAB", "AAAAAAAAAAAAAAABAAABABBBAAAABAAAABABABAAABAAB", "AAAAAAAAAAAAAAABBBBABBBBAAAAAABABABABABAAABAA", "AAAAAAAAAAAAAAABAAAABBBBAABAABBAABABBBBABBBBA", "AAAAAAAAAAAAAAABBAABBAAABABAABABBBABBBABAABAA", "AAAAAAAAAAAAABAAAABABABBBBBABABABABBBBBAABABA", "AAAAAAAAAAAAAABAAABAAAABBBBBBAABBBBAAABBABBAA", "AAAAAAAAAAAAAABAAAABBABABBBBBAAABAAAABBBBBBAB", "AAAAAAAAAAAAABAAABAABABBBBBBBABAAABBBAAABAAAA", "AAAAAAAAAAAAAAABAAAABABBABBBBBBBAAAAAABABABBA", "AAAAAAAAAAAAAAABBBAAABABBABBBAABBAAAAAABBABBA", "AAAAAAAAAAAAAAABBBABABABAABAABABBBBABABBAAABB", "AAAAAAAAAAAAABAAAAAAAAAABBBBBBBBBBBBBBBBABBBB", "AAAAAAAAAAAAAABBAABAABBBABABAABBAABABAAABBBBA", "AAAAAAAAAAAAAAABAAAABBABBBAABBBBABBABBBAAAAAB", "AAAAAAAAAAAAAAABBBAAAAABBBABBAAABBBBABBABBBBB", "AAAAAAAAAAAAAAABBAAABBABBBABBAABBBBBBBABAABAB", "AAAAAAAAAAAAAABAAAAAAAAABBAAABAABAABBAABBBBBA"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int wordLength = 39;
    vector<string> forbiddenSubstrings = {"BBBABBBBBBBBBBB", "BBAABABBBBBB?BA", "AABABABBBBBBBBB", "AB?BBBBABB?ABBB", "BABBBBBBBABBBAB", "?AABBBABABBB?BB", "BABBB?BBBBBBA?B", "BBB?BBBBBBBABBB", "B?BBBBBBBBBABBB", "BBBBBBBABBAABBA", "BBBBBAABBA?BBAA", "BBBBBBBBBBBABBB", "BBABBBB?BBBBBBB", "BBAAB?B?BBBBBBB", "AAABBBBBBBBABAB", "ABBBBBBBBA?BABA", "BBBBBAABBA?BBBB", "ABBBBBBBBBBBBBB", "BBBABBBBBBB?BBB", "BBBBBBBABBBBA?B", "AB?AABBAABBBB?B", "BBBBBBBBBABBBBB", "BBBBBBBBBBBBBBA", "BBBBBBABBBBBBBB", "ABBABBBBABBBBBB", "BABBBBBBBBBBBBA", "BBABBBBBAABBABB", "BBBBBBABBBA?BAA", "BBBA?ABBBB?BBBB", "B?BBABBABBBBBBA", "BB?ABBB?ABBBBBB", "BABBBBB??ABBBBA", "BBBBBBBBBBBBBBA", "ABBA?ABBBBBBBBB", "BAAABBBBBBABBBB", "ABBBBBBBBBBBBBB", "ABBBB?BB?BABBAB", "BABBBBBBABBBBBB", "BABBABBBBAB?ABB", "BABA?BBAABBBABB", "BBB?B?BABBBBAAB", "?ABBBBABBBABBAB", "BBBBBBBBBBBABBB"};
    vector<int> wordNumbers = {273594663, 348162187, 189554866, 653299930, 229958164, 442298187, 449026403, 31155180, 310047148, 46265249, 465082, 376467882, 469025222, 219215054, 114853200, 600957612, 14998796, 57635255, 70008146, 557605889, 557094119, 4963625, 871973363, 51134505, 44070904, 458800823, 287274405, 393622799, 433427140, 432398045, 29593998, 192410865, 33020822, 3979063, 178432178, 525005162, 101398594, 708333171, 638686682, 610138739, 330611587, 13106910, 135406032, 488419510, 200811023, 68552467, 398062314, 389749844, 171537570, 50466142};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABAAAABBABBAAABAAAABBBBBAAABBB", "AAAAAAAAAABABABABBABBAABAAABBBBBABAABAB", "AAAAAAAAAAABABBBABAABAABAABBABABBBBABAB", "AAAAAAAAABABAAAABAABBAABBABAABABAABABBA", "AAAAAAAAAAABBBAAABAAABBAABABBABBABBBBBA", "AAAAAAAAAABBABBAABBBBBAAAAABBBBBAABAAAB", "AAAAAAAAAABBABBBABAABBBBBABBBBBAAAABAAA", "AAAAAAAAAAAAAABBBBAABBBBAAAAABABBABABAA", "AAAAAAAAAABAABBAAABABABBABBBABBABAABBAB", "AAAAAAAAAAAAABABBABABAAABBAABAAABBABBAB", "AAAAAAAAAAAAAAAAAAAABBBAABABBBAABBBABAB", "AAAAAAAAAABABBBAABABBAAAABAABBBAABABABB", "AAAAAAAAAABBBAABBBAABAABABAAABBBAAABBAA", "AAAAAAAAAAABBABABBBBAABAAABBAAAABBAAAAB", "AAAAAAAAAAAABBBAAAABABBBBBAAABAABAAAABA", "AAAAAAAAABAABABAAABAABABAABBBABBABAABBA", "AAAAAAAAAAAAAAABBBABABAAAABAAABAAABABBB", "AAAAAAAAAAAAABBBAAAABBBABAABBBBAAABBBBB", "AAAAAAAAAAAABAAABAABABABBAABABABABAABAA", "AAAAAAAAABAAABAABBAABBABABBABABBAABABAB", "AAAAAAAAABAAABAABABBBBABABABBABAAAAABBA", "AAAAAAAAAAAAAAAABAABBABAABBBBAAAABBABBA", "AAAAAAAAABBABABBBABAAABAAABAABBABBABBBA", "AAAAAAAAAAAAABBAABAAAABAABBABABBBBAAAAB", "AAAAAAAAAAAAABABABBAAABBBBAABBBAABAABAA", "AAAAAAAAAABBBAAABAAAABBBBBBBABAAAABBBBB", "AAAAAAAAAABAAABBABABBBBBBAABBBABAABABBB", "AAAAAAAAAABBAAAAABBBBBBABAAABABAAABBAAA", "AAAAAAAAAABBABABABBAAABBBBABBAABBABBBBA", "AAAAAAAAAABBABABABAAAABBBBABABBABBABAAB", "AAAAAAAAAAAAAABBBAABBBABBABAABAAAABBBAB", "AAAAAAAAAAABABBBBABAAABBABABBABABAABBBB", "AAAAAAAAAAAAABAAAAAABABABBABBAABAABABBB", "AAAAAAAAAAAAAAAAABBBBABBBBAAABAABAAABAB", "AAAAAAAAAAABABABBBBABAABBBBBABBBBAABBAB", "AAAAAAAAABAAAAAABBAABBBBABAAABAAAAABBBB", "AAAAAAAAAAAABBAAABBABBBBBBBBAAAABBBBABB", "AAAAAAAAABABABBBABABBABBABBBBABAAAAABBB", "AAAAAAAAABAABBBABBAABABAAAABBBABABABBAB", "AAAAAAAAABAABABBABAAABABAABABBBABBBBBAA", "AAAAAAAAAABABAAABABBAABABBBBABAABBBAAAB", "AAAAAAAAAAAAAAABBAABBAABAAAAAAAAAAAABBB", "AAAAAAAAAAABAAAABABAABAAAABABABAAABBAAA", "AAAAAAAAAABBBBAAAABBABBABBABABBBAAAABAA", "AAAAAAAAAAABBAAABABABBBBAAAAABAAABBABBA", "AAAAAAAAAAAABAAAABBABAAAAABAABABBBABABB", "AAAAAAAAAABBAAABAAAABAABABBABAABBAABABA", "AAAAAAAAAABBAAAAAAAAABABBBBBBABBAAAAAAB", "AAAAAAAAAAABABABAAABAAABBBBBABBABABAAAB", "AAAAAAAAAAAAABBAAABABBABABBAABABAABBBBA"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int wordLength = 47;
    vector<string> forbiddenSubstrings = {"ABAABBB?BABABAAB", "BBBAAAAABBBAAAAB", "BA?AAABBBBBA?BAB", "?BBBABABBAAAABAA", "?AAAABABAABB?BBB", "BBABAAABAABBABBB", "ABBABABBBAAAABBA", "AAB?BBAABBAAABAA", "BBAABBAAABBAAABB", "BABBAABABABBBABA", "AB?ABBB?BAABBABB", "BBBBBBAABABAAAAB", "A?ABBBBABAAABBBB", "BBBBBBBBAAB??BAA", "AABABABBB?ABBABA", "ABBBBAAABAAB?ABB", "BAAAABABBBAAABAA", "BBBBBAAABBABAAAA", "AABBBAAAABAB?AAB", "BAAB??BAA?AA?BAB", "BA?ABAABABBBBABA", "ABBABA?ABBABAABA"};
    vector<int> wordNumbers = {13933191, 720857708, 410086029, 684978034, 282491796, 715144283, 518077276, 118928412, 15929535, 130243403, 97266663, 467988728, 395843899, 557249084, 19428622, 357184392, 23054005, 49177954, 573120205, 154231636, 776139185, 98682487, 35916443, 47976086, 112155409, 71372901, 144980837, 4448850, 155275839, 41361797, 432686988, 801569, 647235478, 664305482, 370327507, 355437861, 444417392, 28005785, 653996934, 324301116, 91150330, 372466378, 136671376, 438803287, 904909644, 334616697, 437028652, 169637824, 606869470, 979780854};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAABBABABBABBBBBABABABAABAB", "AAAAAAAAAAAAAAAAABABABBBABBAABAAABBAAAABBBAAABB", "AAAAAAAAAAAAAAAAAABBAAABBABAABBBBBBABBBBABBBABA", "AAAAAAAAAAAAAAAAABABAABABBBABBAABBAAABAAAAAAAAA", "AAAAAAAAAAAAAAAAAABAAABAAABABABAABABABAAABBABAB", "AAAAAAAAAAAAAAAAABABABBABABBAABAABAAAABBABBBABA", "AAAAAAAAAAAAAAAAAABBBBBABABBBAAABAABAABAABABAAB", "AAAAAAAAAAAAAAAAAAAABBBAABABBBBBBAABABAABAAABBA", "AAAAAAAAAAAAAAAAAAAAAAABBBBABABBBAAABBBBABBBAAA", "AAAAAAAAAAAAAAAAAAAABBBBBABBBBABABABAABABABAABA", "AAAAAAAAAAAAAAAAAAAABABBBBAAAABAABAABBAABABAABB", "AAAAAAAAAAAAAAAAAABBBAAABABABAABBBAABAAAAAAABBA", "AAAAAAAAAAAAAAAAAABABBBBBBBABBBBBBBBBBABBABBBAA", "AAAAAAAAAAAAAAAAABAAAABBABBBABABABBABBABBBABABB", "AAAAAAAAAAAAAAAAAAAAAABAABABABBBABABAABAABBBBAA", "AAAAAAAAAAAAAAAAAABABABBABAAAABBABABBABABBBBAAB", "AAAAAAAAAAAAAAAAAAAAAABABBAABAAAABABAABAAABAAAA", "AAAAAAAAAAAAAAAAAAAAABABBBBBAAAABABAABBABAAAAAB", "AAAAAAAAAAAAAAAAABAAABABABABBBBBBBBBABBABAAAAAA", "AAAAAAAAAAAAAAAAAAABAABABABAAABAABBAAABAAABABAB", "AAAAAAAAAAAAAAAAABABBBBAAAABABAABAABBBAABBBBABB", "AAAAAAAAAAAAAAAAAAAABABBBBBABBBAAAAAABBBBAABBAB", "AAAAAAAAAAAAAAAAAAAAABAAABABABABAAAABBBAABBAAAA", "AAAAAAAAAAAAAAAAAAAAABABBBAABABBBAABBBAABABBBBA", "AAAAAAAAAAAAAAAAAAAABBABBAAABBBAAAABBAABAABAAAA", "AAAAAAAAAAAAAAAAAAAABAAABAABBBABBBBAAABAABBBAAB", "AAAAAAAAAAAAAAAAAAABAAABBAAAABAABAAABBBABBAABAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAABAABAAAAAABAABBBABB", "AAAAAAAAAAAAAAAAAAABAABABBAAAABABBABBBBAABBABBB", "AAAAAAAAAAAAAAAAAAAAABAABBBBBBABABBABABABAABABB", "AAAAAAAAAAAAAAAAAABBABAAABBAAABBABBABAABAAAABBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAABBAAABABAABBABABAAAA", "AAAAAAAAAAAAAAAAABAABBBAABABABBBBABAABBABBBBBBB", "AAAAAAAAAAAAAAAAABABAAAAABBABBAABABBBBBBAABAABB", "AAAAAAAAAAAAAAAAAABABBAABBABBBAAAAAABBBBBBAABBA", "AAAAAAAAAAAAAAAAAABABABBAAAABBABABBBBABABABBABB", "AAAAAAAAAAAAAAAAAABBABABBBAABBBBABABBBBAABBABAA", "AAAAAAAAAAAAAAAAAAAAAABBABBAAAAABBBBBBAAABAAAAB", "AAAAAAAAAAAAAAAAABAABBBBAABABBAAABBAABBBBBAAABA", "AAAAAAAAAAAAAAAAAABAABBBAABBBAAAAAABABABABAAAAB", "AAAAAAAAAAAAAAAAAAAABABBAAAAABABBAAABAAAABABBBB", "AAAAAAAAAAAAAAAAAABABBABAAABBBBAAABBAABBBBBAAAA", "AAAAAAAAAAAAAAAAAAABAAAABAAAABAAAAABAAABABAABBB", "AAAAAAAAAAAAAAAAAABBABABAABAAAABAABBBBABBABBBBA", "AAAAAAAAAAAAAAAAABBABBABBABAABBBBAABABBBBBBAAAB", "AAAAAAAAAAAAAAAAAABABAAAABBBBAABABBABABBBAAABBB", "AAAAAAAAAAAAAAAAAABBABAABBBABABAABAAABBAAABAABB", "AAAAAAAAAAAAAAAAAAABABAABAAAAAAAAAABBABBBAABBBB", "AAAAAAAAAAAAAAAAABAABAABABBBABAAAAAAABBABABBABA", "AAAAAAAAAAAAAAAAABBBABBABABBBAAAABAAAABAAABABAB"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"?BBB??AA?BBBBBB??", "BABA?AAB???B????A", "BB?AAA?ABA??AB?AB", "???BB?A?BA?AAB???", "A?BA???ABB??B??BB", "BAA???B?BB?B?B???", "BA????A?BAB?A?BB?", "BABBA???AAA???AA?", "BBABA??AAB?BBAB?A", "AA??B?A?B?B??BA??", "?BABA?B?A?BB?BAA?", "A?BA???BB?BBA??BA", "?B?BA?AA?B??BAABB", "BBBABAB??A???BB?A", "?AA?B?B?AB??AB??A", "A????ABBBABAA?BBA", "?ABABAA??AAAB?A?A", "AB?BABAABAAA?BAA?", "?BBBBBA??A?BAAB??", "AA?B??B??BBB?B?BB", "?????B???BB???AB?", "?BB?B???BBAAA?A?A", "BABAB?B?B???B?A??", "?A?BB?AAA?AA???BB", "A??AA??AB?A?BBAAB", "AB?BAAAB?A?A???BA", "??BA??B?BABABAAA?", "BAA?AA???A?BBAA?A", "?BBBB?BBB?B???A??", "BBBA?B?A????BBB?B", "AA?BBB?B?B?BB?BA?", "?BB?BAA???A??AA?B", "ABBAB?????A??BBBB", "??BBB?A????BAB?BA", "?AB???BAAAAAB?B?A", "?B???A????BAABAB?", "BBA?B?B??A?A??BAB", "??AA???BA?AAABB??"};
    vector<int> wordNumbers = {77828997, 85529061, 14359273, 1220856, 54598158, 23025977, 27451335, 59006846, 44685887, 97178921, 43142824, 13127907, 83822426, 69582663, 17618102, 11667409, 24382264, 2070253, 61944998, 72596091, 33301079, 14935993, 52134107, 85120179, 89102893, 13301421, 4029175, 5575379, 3370314, 88679608, 98383388, 23262649, 26124800, 2551062, 99285451, 16792859, 221109, 72058995, 91156450, 39425314, 8982821, 99563685, 76290853, 1788865, 46732260, 14152342, 1259032, 49434239, 39288020, 22343997};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAABAAAABAAABAAAABAAAABABBBAAAAB", "AAAAAAAAAAAAAAAAAAAAABAABAAABABAABBAAABAAABBAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAABAABBABABAAABABAABAAABBBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABAABBABBBBBBAAAAABBAAA", "AAAAAAAAAAAAAAAAAAAAAABABABBBBAAABABAAAAAAABAAABAA", "AAAAAAAAAAAAAAAAAAAAAAABAAAABBAAAABABABABABAABABBA", "AAAAAAAAAAAAAAAAAAAAAAABABAAAABBAABAAAABABBAABABAB", "AAAAAAAAAAAAAAAAAAAAAABABBBBBBABAAAABAAABBABBBAAAA", "AAAAAAAAAAAAAAAAAAAAAABAAABABBBAAABBBBBBAABAABBBBB", "AAAAAAAAAAAAAAAAAAAAABABAABBABBBAABAAAAABAAABAAAAA", "AAAAAAAAAAAAAAAAAAAAAABAAAABBBABAAABABBBBBBAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAABAAABBABBBAABBBAABBABBBBAA", "AAAAAAAAAAAAAAAAAAAAABAAABBABBBABBAAABBBAAAAAABAAB", "AAAAAAAAAAAAAAAAAAAAAABBBABAAAAABBABAAAABABBAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAABBAAABAAAAABBBBAAABAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAABBBBBBAAABABBBBBABAABAAAB", "AAAAAAAAAAAAAAAAAAAAAAABAAABBBAAAAAAABBBABABAABABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABAAABBBBABBBAABAABAAAAA", "AAAAAAAAAAAAAAAAAAAAAABBAABAAABAABAAABABAAABABAAAA", "AAAAAAAAAAAAAAAAAAAAAABBBBABAABAAABABAABAABBBBBBAA", "AAAAAAAAAAAAAAAAAAAAAAABBAABAAAAABBABAAAAAAAAABBAB", "AAAAAAAAAAAAAAAAAAAAAAAABABAAABABBBABBBBBBBAABBBBB", "AAAAAAAAAAAAAAAAAAAAAABABAABBAAAAAAAAABABBAABBBBBB", "AAAAAAAAAAAAAAAAAAAAABAABAAAABBABBAAAABAAAAABBBBBB", "AAAAAAAAAAAAAAAAAAAAABAABABBABAABBBBBABAAAABAAABAB", "AAAAAAAAAAAAAAAAAAAAAAAABAABAAAABAABABBAABABBBAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAABAABABABBAABBABABAABABAB", "AAAAAAAAAAAAAAAAAAAAAAAAAABBABBAAAAABBAABBAAABBBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBABAAABBABAAABAABAA", "AAAAAAAAAAAAAAAAAAAAABAABABBAAAABAAAAABAAABAABABBA", "AAAAAAAAAAAAAAAAAAAAABABABAABABBBAAABBABBAAABABABA", "AAAAAAAAAAAAAAAAAAAAAAABAAAABBBABAABBBBAABBBAABBAA", "AAAAAAAAAAAAAAAAAAAAAAABAABBAAAAAAAAABABBBBAABBAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAABABBAABBABBBAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAABABABABBAAAAAABABABBAABBBAABB", "AAAAAAAAAAAAAAAAAAAAAAAABABBBABAAABAABABABABBABBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABBBAAAABABAABAABB", "AAAAAAAAAAAAAAAAAAAAAABBBBAABAAAAABBBABAABAABBABBA", "AAAAAAAAAAAAAAAAAAAAABAABBAABBAAAAABBBBBAAAAAABBBA", "AAAAAAAAAAAAAAAAAAAAAAABBBBABBABAAAAAAAABBAAABABAA", "AAAAAAAAAAAAAAAAAAAAAAAAABABBBAAABBABABBBBBBABAAAB", "AAAAAAAAAAAAAAAAAAAAABABABABBBAAAAABBAABAAAABBABAA", "AAAAAAAAAAAAAAAAAAAAABAAAAAABABBAABAABABBBAAABBBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBABABAABBABAABABABB", "AAAAAAAAAAAAAAAAAAAAAABAABAABABBBABBAABAABAABAABBB", "AAAAAAAAAAAAAAAAAAAAAAAABAABBAAABAAAAABABABABABBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABABAAABAABBBBBBAAABAAA", "AAAAAAAAAAAAAAAAAAAAAABAABBABABAABBBABBAAABABBABBB", "AAAAAAAAAAAAAAAAAAAAAAABBBBABABAABBBBBABAABAAABABA", "AAAAAAAAAAAAAAAAAAAAAAABAAAAABAAAABBBBABBBBABAAAAA"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"ABAA???BAA??ABB??", "?BABA??B????BBBAB", "??A?B?B?A?A???ABB", "BB?????ABB??BABBA", "BB??ABABBB?BA?B??", "AB?AABAB?BBA?BBA?", "??A?BA?BB?B??BB?A", "B?AABABB???BAA?BB", "BA??B???BBB?????A", "AA?B????ABAA?????", "BB??ABBBAB??BABBB", "?AA??AABABB?????B", "A???AB?A?A???A???", "B??BA?BB?BA?BAA??", "A???????ABAA?BBB?", "A?AA?BBBBABABA??B", "?B?BAB??B???B?BA?", "?B???????A??AB???", "BBBBBAA?B?AA?A?A?", "??B?BBB?A?BAB??B?", "???BB???BAB?B??BB", "BB?BA?A?B???BAB?B", "????AB??B??A?A?B?", "A???AA?AAABBB?AAB", "?AAA?????B???B?B?", "?ABB?BBB?ABABA?AB", "?B?BA?AB??ABB?B??", "AA??BABB?AA??????", "AAA?B??B???B?B??B", "BBBA??BB????A??AA", "????????B??BB?B??", "AA??BB???BB?A?AA?", "B???BB?ABAA?B????", "BAB??????BA???ABB", "?AA???BBBAB??B??A", "?BBBBABAA?AB?B?B?", "?B?A?ABABB??????A", "B?B?A??B?BA?B?B??", "????A??AB?B??BA?B", "BB?BAB???BB?BBB??", "BAB?BB?A?AB?ABB??", "?BB??A????BBBB?AB", "BBA????BAAB???AAA", "?A?ABBBA?B???BBBB", "?BB??B?B?BBAABAA?", "?B???ABBABBA?B???", "B?BABA???A?BB??A?", "B?A?A????A??ABABA", "B?B?A??BA?BAB?B?B", "??B???BB?BAAB??BA"};
    vector<int> wordNumbers = {83909482, 50285245, 14996004, 53337731, 74623388, 94777716, 15052467, 81557948, 4877399, 27328527, 86895312, 7749427, 63883782, 52452231, 53144673, 65035564, 62542724, 75002038, 68688558, 3964693, 53452131, 25604959, 27860590, 52749364, 24701538, 78530383, 98128613, 785110, 98080728, 16910870, 4861235, 94320565, 58030853, 39316962, 25883694, 39397536, 18480577, 38302977, 89594725, 4190339, 886755, 52153931, 32433293, 45097427, 89917683, 87307520, 71842915, 50515138, 70557297, 39012167};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAABAAAAAAABBAABBBAAAABBABAAAAABABAABBBB", "AAAAAAAAAAAAAAABBBAAAABBAAABBAAABBAAAABBABABBBAAAB", "AAAAAAAAAAAAAAAAABAAAABAABBBAABBAABBBABABABABBBAAA", "AAAAAAAAAAAAAABAAAAAAABAAAABAABBBAAAAABBBBABBBAABA", "AAAAAAAAAAAAAABBABAAAABABBAABBAABBAAABBBBAABBBABAB", "AAAAAAAAAAAAABAABAABBBABAAABABAAAABBBBAAABBBBAABBA", "AAAAAAAAAAAAAAAAABAAAABBABAAABBAAAAABBBBABBAAAABAA", "AAAAAAAAAAAAAABBBBABAAABAAABAAABABABAAABAAAABBABBB", "AAAAAAAAAAAAAAAAAAAABBAAAAAABBBAAAAAAABBAAAAAABBAA", "AAAAAAAAAAAAAAAABABAABABAABAAABBAABBAAAABBBABABAAB", "AAAAAAAAAAAAABAAAAABBBABAAABBAABAABABBBBABAAAAABBB", "AAAAAAAAAAAAAAAAAAABBAAAABABABAAABBAABAAAABABBBBBB", "AAAAAAAAAAAAAABABAAAAAAABAABAAABBABAABBBAABBAABABA", "AAAAAAAAAAAAAAABBBBABBAAAABAAABBBBBAABABAAABBBBABA", "AAAAAAAAAAAAAAABBBBBBAAAAABAAAAAAABABABAAAAAABBBBB", "AAAAAAAAAAAAAABABAAAABAABBBAAAAAAABBAABBAAAAABBBAA", "AAAAAAAAAAAAAABAABBAABAAAAAABBBAABAAAABBBABAAAABBA", "AAAAAAAAAAAAAABBABAAABBABBAABBAABBAABABABABBAAABAA", "AAAAAAAAAAAAAABABBABBAAAAAABBBAAAAABABAAAABAABAABA", "AAAAAAAAAAAAAAAAAAAABAAAABBABABBAAAABAAAAAAAAAAABA", "AAAAAAAAAAAAAABAAAAAAABAABAAAABBBBABBBAABBAAABABBA", "AAAAAAAAAAAAAAAABAABBAAAAAABBBAAAABBBBAABABAAABAAB", "AAAAAAAAAAAAAAAABABABAAAAAABBAABAABBAABBBABBAAAABB", "AAAAAAAAAAAAAAABBBBBAAAAAABAAABABBBAABBAAABBBAAABA", "AAAAAAAAAAAAAAAABAABAAAABBBBBAAAAAAAAAAAAAAAABABAA", "AAAAAAAAAAAAAABBBAAAABBBAAAAAABBBBABBAAABBBABAABBA", "AAAAAAAAAAAAABAABBAABBAABBBAABBAAABAAAABAAABAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAABABAABBAABBAAAAABBAAAAABAA", "AAAAAAAAAAAAABAABBAABBAABBAABBBAABAAAABBBABBBAAABA", "AAAAAAAAAAAAAAAAABABAAAAAAABBAABABBAABAAABAAAAABBB", "AAAAAAAAAAAAAAAAAAAABBAAAAAABBAAAAAABABABAAABBABBA", "AAAAAAAAAAAAABAABAABABBABBBAAAAABBAAAAABBBBAAABBAB", "AAAAAAAAAAAAAABAAABAAAABBBBAAAABAAABAAABBAABBAABBB", "AAAAAAAAAAAAAAABAABABAABABAABBAAABAABBBABAAABABBAA", "AAAAAAAAAAAAAAAABAABBAABBAABABAAABBBAAAAAABABAABBA", "AAAAAAAAAAAAAAABAABABAABBAAABAAAABBBAAABBABBBAAABB", "AAAAAAAAAAAAAAAAABBAAAAAABABABAABBBAAAAABAABAAAABA", "AAAAAAAAAAAAAAABAABAAAABAABAABBAAABBABAAABBABABBBB", "AAAAAAAAAAAAABAAAABBBBAABABBABABBAAAABBBBAABAAABBB", "AAAAAAAAAAAAAAAAAAAABAABAABABAABBAABBAABBBABAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAABBABAABBBABAAABABABBAABBBB", "AAAAAAAAAAAAAAABBBBAAAABBBBAAAABBAAABBBBAABBBAABBB", "AAAAAAAAAAAAAAAABBBAAAABBBAABBAAABAAAAAAAABABAAABB", "AAAAAAAAAAAAAAABBAAAAAABBABABAABABAAAAAAAAAABAAAAA", "AAAAAAAAAAAAABAAAABBBBBAAABAABBBAABBAABABABBBAAAAA", "AAAAAAAAAAAAABAAAAABBBBBAAABBAAABBBBAAABABABAAABBA", "AAAAAAAAAAAAAABBAAAABBBBAAAABAAAAAAAAAABBAAAAABAAB", "AAAAAAAAAAAAAAABBBAAAABBBAABBAABBAABAAAAABBBAAABBB", "AAAAAAAAAAAAAABBAAAAABBAABAAAAAABBAAABABBAABAAABBB", "AAAAAAAAAAAAAAABAABAABBBAABAAAABBBAABAAABBAABAAABB"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"AB?AA???AA?BB?B?B", "???AA?BB?BB????AA", "AB???B?B?A?A?B?A?", "BA??A?A?A?ABBAAAA", "????A??BABAA???BB", "B???A?A?B??A?A??B", "??A???B?B??AA?AB?", "AA???????BBA?B???", "?A?BA????B????B??", "B?AB??????A?ABAA?", "?B?AB?B?BB??A???A", "??AA??A?BB???????", "??A?BA?AABBA?BB??", "??A???A???A?A?AA?", "AB???AA?AA?????B?", "?A?????????AA??AB", "?????BAB?AAAAAA??", "AB???B???B?AB??B?", "???BB??A?B?AAA?BA", "AAAA??BB?A?AAB???", "ABABA??B??AB???B?", "???B?B?A??A??A?BA", "?B???AB??????AAA?", "???AAAAA???B?B??A", "AB???A?AB?A???BB?", "???AB??B?AA?A??AA", "A?BAA?????????A?A", "AA?A??AA?A?????A?", "?B??A??ABB??AA??A", "??????AAA??A??AAB", "AABABA?A???B?AB??", "?ABABA????????A??", "?????????AAAB?A??", "?AA????B?B???A?B?", "AA???B?AA?AA?BA?B", "BB?BA????A?B?????", "B??AABAA??A?BA???", "?A??A?ABA??A????A", "BABB????B???A??A?", "?B??BBA????ABAA??", "??????A?AAA??AAA?", "?B?AABA?B????A?AA", "?B?AB?BBA??????AB"};
    vector<int> wordNumbers = {20549711, 57220810, 68174182, 57995656, 57291259, 13764915, 67605903, 62197336, 68646656, 829048, 71561508, 10924985, 75439984, 29194202, 88132106, 20744305, 94548024, 51701761, 27008574, 24944080, 61314460, 28675686, 83825090, 73778518, 75196919, 13700611, 76767517, 59030217, 80091644, 5022454, 5184736, 53682786, 38313851, 21992961, 31422253, 23540271, 65810014, 92522654, 71101771, 47369989, 37017583, 90675722, 2699796, 222607, 22568576, 65659136, 73632026, 39453457, 25648264, 52475887};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAABAAAABBBBBBABBBBBABABBBABAABBBBAAAABABBBBAB", "AAAAAAABBAAABBBBBBBABBBABBABABBABBABABBAABBBABBBBB", "AAAAAAABBABAABBBBABABABBBBABBABBBBBBBBAABBBABBABAB", "AAAAAAABBAAABBBBBBBABBBBBBAABBBBBBBBBABABBBBBAABBA", "AAAAAAABBAAABBBBBBBABBBABBBAABBBBBBBAABBBBBAABBAAA", "AAAAAAAABABAABBBABAABBBBAABBBBBAABBBAAAAABBBBBBABB", "AAAAAAABBABAABBBBABAAABBBABBBBBABAAABBBBAABBBAAABA", "AAAAAAABBABAAABBBABABABBBAABBBBAABBBBABBABBABABBBB", "AAAAAAABBABAABBBBABABBBABBBABBBBBABBAABBAABBBBABBB", "AAAAAAAAAAABABABBBBBBBABBBBBBBBBBBBAABAABABBBAABAB", "AAAAAAABBABABABBBBBAABBBABABABBBBABBABBBAABBBAAAAA", "AAAAAAAABAAAABBBBBBABBBBBAABBBBABAABBBBBAABBAAABAA", "AAAAAAABBABABBBABABABBBBBBBBBBBAAABABABBABBBAABAAA", "AAAAAAABABABBABAAABBBABABABBBAABBBBBBABBBABAAABAAB", "AAAAAABAAAABAAAABBBBBAAABBBBBBAABBBABABAABBABBAAAA", "AAAAAAABAAAABBBBBBABBBBBABBBBBBAABBBBAAABBBBBABBAA", "AAAAAABAAAABBBBABABABBBBBBBBBBBBABBBAABABABBABBBAB", "AAAAAAABBAAABBBBBABAABBBBABBAABBBABABBABAAAAABABBA", "AAAAAAABAABABBBBBBABBABBBAABBBABABABABABBBBBABABBA", "AAAAAAABAABABAABBBBBBABBBBBAAABBBBABBBBBBABBBBBAAA", "AAAAAAABBABAAABBBAAABBBBAAABBBBAABBBAAAABBBBBABBAB", "AAAAAAABABAABBBABAABBBBAABABBBBBABABABBBBBBAABAAAB", "AAAAAAABBABABBBBBBBABABBBBBABBBABABBABBBBBABBBABAA", "AAAAAAABBABABBBABAAABABABBAABABABBBABBBABBBBAAABBB", "AAAAAAABBABABBBABABABBBBABBBBBABBBBBBABBABAAABBBBA", "AAAAAAAABABAABBBABAABBBBAAABBBBBAAABBBABBABABABABA", "AAAAAAABBABABBBBABAAABBBBABBBBAAABBBABBBAABBBABAAB", "AAAAAAABBAABABABBBBBBBABBBAABABBBBBBBABABBABABBAAA", "AAAAAAABBABABBBBBABABABBBBBBBABBBBBBABBABBBABBAABB", "AAAAAAAAABAAAABBBBBBABBBBBABBBBBBBBBBBBBBBBBBABBBA", "AAAAAAAAABAAAABBBBBBABBBBBBBBAABBBBABBAABAAABBBABA", "AAAAAAABBAAABBBBBBAAABBBAABBBBBAABBBBBAABBBBBAABBA", "AAAAAAABBAAAABABABBBBBBBABBBABBBABABBBBBBBAABBAAAB", "AAAAAAABAAABAABABBBBBBABBABBABABBBBBBBAABBAAABABAA", "AAAAAAABABABBBBBBBABABBBBBABBBABBABABBABBBBABBAABB", "AAAAAAABAABABAABBBABBABAAABBBBBAABBBAAAAAABABAAAAB", "AAAAAAABBABAABBBABAABBBBABABBBBBABBBABABBBABABAABA", "AAAAAABAAAABBBBABAABBBBABABBBBBBBBBABABBBBBABBBABA", "AAAAAAABBABABABBBBAABBBAAABBBBABBABBBBABBBAABAAABB", "AAAAAAABBAAABBBBAAAABBBABBBBBBBBABBBBBBBBBABBAAABA", "AAAAAAABABBABAAABBBBBABBBBBBBBBBBABBBABABBBAAAABBA", "AAAAAABAAAABABABBBBBBBABBBBBABBBAABABAABBBBABABBAA", "AAAAAAAAAABABABBABAAABBBABABBBBAAABBBBBBABABBBBBBB", "AAAAAAAAAAABABABBBBBBBABAAABBBBABBBBAAAABBBAABBBAB", "AAAAAAABAABAAAABBBBBBAABBBABABBBABABBBABBBAABABABB", "AAAAAAABBABAABBBABAABBBBAAABBBBAABBBBBABBBABAABABA", "AAAAAAABBABABBABABABABBAAABBBBBABABBBBBABBBBBBAABB", "AAAAAAABBAAAABBBBABAAABBBABABBBBBBABAABBBBBABBBBAA", "AAAAAAABAABABABBBBABBABBBBABBABBBAABABBBBABBABABBB", "AAAAAAABBAAABBBBBABABABBBBBBBBBABBAABBBABABABBAAAB"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"B?A???A???A????BB", "????B??BA????A???", "B?AA?B?B?A?B???B?", "??A????AA????B???", "B?????AA??B??AA??", "??ABBA?AA????????", "B?????A???A???A??", "?B?BA??????B?ABA?", "??AA???B?AABB?A?B", "A???AA?A??BA???AA", "???B?????A????AA?", "?A???BBA?????????", "??A??B??B??B???AB", "???A???AB??ABA?BA", "?A???B???A???A???", "??B??BB?????B??B?", "???A???????B???AB", "AAA?B??B??????B??", "??BB?AAA??????BBB", "BB??B??B?BBB?AB?A"};
    vector<int> wordNumbers = {19, 6, 19, 21, 1, 0, 22, 30, 35, 17, 38, 10, 13, 37, 35, 2, 17, 33, 31, 35};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAABBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAABBBB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAAAABA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABABA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABBBB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAABBAB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABBAAAAABAA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAAABAA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAAABBB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABBAAAAAABB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABA", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABAAAAABBAB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABBAB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABABB", "AAAAAAAAAABABAAABABAAABABAAABABAAABABAAABABAAABBBB"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"B???BBAB??B??BA??", "A?AB????BAA??B??B", "????B???A??A????B", "?BB??B???A?AB????", "B????BA??B????BBB", "??B??AA?B?BA?B??A", "????AB?BA???B?B?A", "????A????AA?B??A?", "????B?B??BAA???AA", "B????BA???A???BBB", "?BB?A????????????", "B?A?BA???A??B????", "??B??BABBA???????", "??????B??B??AB???", "??B??A?AB???A?A??", "A????BB??BA?BAA?B", "?AA?BAA?A??A?A???", "??A???AA?A?BA??A?", "AA???BA??AAA?A?B?", "BB??BB?????A??B?B", "??BBA?B???A???AB?", "?BA?????B???A???B", "A?A???A?BB?BB????", "?????A?BB?BBBA??B", "?BB????B?B?B???A?", "??A???A?B?ABABBAB", "BAB?BB??AA?AA????", "BB?BAA?A?????????", "??AAAABAAB?B?AB??", "????B?B?A?A????B?", "B?B?B?B?B?BA?????", "???AAA??A??B????A", "????B??????B????A", "AB??B?A?BA?BB?B?A", "?AAB?B?AA??B?B??A", "??BB?????AA??AA??", "BBA?B????BB?AB??B", "?BBA?A??B?B??A??B", "??BBBABB?ABB?B??B", "?BA?B??A?B?B?AA?B"};
    vector<int> wordNumbers = {12, 9, 11, 37, 12, 3, 23, 17, 12, 5, 38, 20, 25, 0, 32, 36, 14, 6, 36, 27};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAABBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABBBBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBABBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAABBBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAABBBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBB"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"???AA??A???B?BA??", "?BA?????AA?A?ABA?", "??A?A?AB?A?AB??A?", "???AAA?B?A??A?A?A", "??B?A?A?A?B?AB?A?", "?A??A??B?A???????", "B?BA?BB??A?B?A?A?", "????????AB??B??B?", "?BB???A?AA??A?A?B", "???B?BA??BABB?BB?", "BA??B??AA????B???", "A???B?B?B??ABB???", "??AAA??A??A??BAA?", "??A?BB???A?????A?", "?A?????AB?A??BA??", "??A?AA??B??ABAB??", "?BA?A????A??AA???", "AAABA?B??A?AB????", "???B?A??AB????BB?", "A?????A??AAB?B???", "??BA??AAAB??????B", "A?????BB?BA??AABA", "A?AA??A?????B????", "??BA??B?B??B?B???", "?BB??A??A?AB?AA??", "?B?A??????BA?B?AA", "?BAA??A?B???A?AB?", "BB?????AABBA?AB??", "A?BAA?AAA?BB?BAA?", "?A?????A???B??A?B", "B?ABBA????B???B??", "AABA???B??????AB?", "???????BB??B?????", "ABAA?AAA?B?B?B?BA", "????AAB???B?B??BB", "B??B?AA?BA??A??A?", "?ABB???BA???B????", "BAAAABA?AB?A?????", "???AB?B?A?AB?????", "A??AA???A??B???A?", "AB???A?A?A???????", "??????????A??AA?A", "????A??BAA?????A?", "BAABA??A??A?B?BA?", "?A??BAB?BBB???AAA", "A??A??A??A???AB?B", "BA??AB????A?A???A", "?A??BB??BA????B??", "A?BAB?AA???A?B???", "????B???A?BAB?A??"};
    vector<int> wordNumbers = {648, 804, 365, 352, 136, 209, 982, 717, 964, 712, 787, 927, 68, 435, 283, 990, 714, 998, 170, 945, 491, 552, 373, 614, 572, 216, 452, 890, 980, 932, 400, 764, 311, 369, 439, 666, 7, 868, 418, 683, 270, 153, 971, 224, 663, 828, 711, 856, 467, 422};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAABBAAABBBAAABABABBBAAABABABBBAAABABABABAAAABBAB", "AAAABBABABBBAAABABABBBAAABABABBBAAABABABABABAABAAB", "AAAABABABABABABABABABABABABABABABABABABABABAABABAB", "AAAABABABABABABABABABABABABABABABABABABABAAAABBABB", "AAAAABABABBBAAABABABBBAAABABABABABABABABABABABABBA", "AAAAABBBABBBAAABABABABABABABABABABABABABABAAABBBBA", "AAAABBBABBBAAABABABABABABABABABABABABABABABABAABBB", "AAAABBABABBBAAABABABABABABABABABABABABABABABABBBAA", "AAAABBBABBBAAABABABABABABABABABABABABABABABAAAABBA", "AAAABBABABBBAAABABABABABABABABABABABABABABABABABBB", "AAAABBABABBBAAABABABBBAAABABABABABABABABBBAAAABAAA", "AAAABBBAAABABABBBAAABABABBBAAABABABABABABABABABBAA", "AAAAABABABBBAAABABABABABABABABABABABABABABABAABAAB", "AAAABABABBBAAABABABABABABABABABABABABABABABABAAAAB", "AAAAABBBABBBAAABABABBBAAABABABABABABABABABABABABAB", "AAAABBBABBBAAABABABABABABABABABABABABABABABABABBBB", "AAAABBABABBBAAABABABABABABABABABABABABABABABABBAAB", "AAAABBBABBBAAABABABABABABABABABABABABABABABBAAABAA", "AAAAABABABBBAAABABABBBAAABABABBBAAABABABABABAAAABB", "AAAABBBAAABABABBBAAABABABBBAAABABABBBAAABABABAABAB", "AAAABABABBBAAABABABBBAAABABABABABABABABABABAAABBBA", "AAAABABABBBAAABABABBBAAABABABBBAAABABABABABAAAABBA", "AAAABABABABABABABABABABABABABABABABABABABABABAABAB", "AAAABBAAABBBAAABABABBBAAABABABABABABABABABABABAABA", "AAAABABABBBAAABABABBBAAABABABBBAAABABABABABABABAAB", "AAAAABBBABBBAAABABABABABABABABABABABABABABABAABAAB", "AAAABABABBBAAABABABABABABABABABABABABABABABABBBAAA", "AAAABBBAAABABABBBAAABABABABABABABABABABBBAAAAABBBB", "AAAABBBABBBAAABABABABABABABABABABABABABABABABAABAB", "AAAABBBAAABABABBBAAABABABBBAAABABABABABABABABBABAA", "AAAABABABABABABABABABABABABABABABABABABABBBAAAABBA", "AAAABBABABBBAAABABABBBAAABABABABABABABABABABABABAA", "AAAAABBBABBBAAABABABBBAAABABABABABABABABBBAAAABBBA", "AAAABABABABABABABABABABABABABABABABABABABABAABBBAB", "AAAABABABBBAAABABABABABABABABABABABABABABABABAABBA", "AAAABBAAABBBAAABABABBBAAABABABBBAAABABABABABABAABB", "AAAAABABABABABABABABABABABABABABABABABABABAAABBBBB", "AAAABBBAAABABABBBAAABABABABABABABABABABABABABBABAB", "AAAABABABBBAAABABABABABABABABABABABABABABAAAABBBBA", "AAAABBAAABBBAAABABABBBAAABABABBBAAABABABBBAAABABBA", "AAAAABBBABBBAAABABABBBAAABABABABABABABABABABAABAAA", "AAAAABABABBBAAABABABBBAAABABABABABABABABABBBAABABA", "AAAABBBABBBAAABABABABABABABABABABABABABABABAABABAA", "AAAAABBBABBBAAABABABABABABABABABABABABABABABABAAAB", "AAAABBAAABBBAAABABABBBAAABABABBBAAABABABABABABAAAA", "AAAABBABABBBAAABABABBBAAABABABBBAAABABABBBAAABAAAB", "AAAABBABABBBAAABABABABABABABABABABABABABABABABABBA", "AAAABBBAAABABABBBAAABABABABABABABABABABABABABAABBA", "AAAABABABBBAAABABABABABABABABABABABABABABBBAABAABB", "AAAABABABBBAAABABABABABABABABABABABABABABABAAAABBA"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"?B?B?BB?A?AB?????", "BA??A???AA???A???", "?B????????AB?B?BB", "??A?A?AA??B???AA?", "?A??A?B?B???A???B", "?AA?B???B?AB?B???", "?AA???A??B???????", "B?A?A?B??A??A???B", "A??AA?A?????B?BA?", "A????????B??????B", "B?BAA???????A??BB", "?A???????AA?B???B", "?A??B?BBAB???????", "A??????A????B????", "ABA???????B?AA???", "?BB?BA??????A????", "?AB??????????A???", "??BB?A??A?A??B?AB", "B?????BAA????????", "?B?B?AB??B?A?????"};
    vector<int> wordNumbers = {10, 3, 37, 5, 1, 14, 7, 34, 26, 8, 12, 29, 34, 10, 25, 20, 27, 4, 29, 29};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABABBBAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBB", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABABABABA", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAA", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBBAB", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABABABABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABABA", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBAAB", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAAABBAA", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAA", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBBAB", "ABBABBBABBBBABBBABBBBABBBABBBBABBBABBBBABABAABBBAB"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"AAA??????A???B???", "??BA?AA??????B???", "??BBBA??B??A??AA?", "B????????????AB??", "?A?B???B?A?A???B?", "B?A?ABB?B?B???AB?", "A?BA?A??BABAB?BA?", "?B?????A?AA??A???", "??AAA?A???A?A?BBA", "?A??AABB???BA???A", "A?BB?B?A??BA??B??", "?AA???B????A?????", "BB??AAA?B?A?BBBBA", "??B??B????A????A?", "A??????AAB??A?B??", "B???A??A????B?A?B", "BA??A???AAA?A?A?A", "?A???A??AAAAAAABA", "A???AB????A???AA?", "???B?A?BBB??AA??A", "B??A?BBAB????A?B?", "???B??BA?A?AA????", "?B??AA???A?BA????", "B??AB??B?B?BB????", "???AABAA????AABB?", "?B?B????????A????", "A?????B??B?A??BA?", "BB?ABBB?????AB??B", "??AB?A?A?B?B???B?", "A?B?BB?A?????B?AA", "A??B??A?B???A????", "ABB???A???B?B??A?", "AA?????????AB??BA", "?ABB??ABBB?B?AB?B", "BA?ABB?BAB??B?B?A", "??B?B????ABBA??BA", "BBBBAA??BA?BB?AB?", "???A?A?A??B?????A", "??B???A???B???A?A", "A???B?B??AB?AB???"};
    vector<int> wordNumbers = {4, 30, 7, 30, 16, 35, 23, 15, 19, 30, 37, 32, 23, 21, 30, 36, 26, 14, 16, 39};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAA", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABA", "AAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABB", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABA", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAA", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB", "AAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABB", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABA", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAB", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAA", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAB", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAABA", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAA", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA", "AAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA", "AAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAA", "AAAAAAABABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"???B?A??ABBA???AB", "?AAB???BBAAA??A??", "AABBABBA???BA??AA", "????AAAA??A??A??A", "???B?????ABA?AA??", "?AA???BBAA?A?B?B?", "?????AA?A??AA?AA?", "ABAABBA?AA?A?A??A", "???ABAABAA??B?AA?", "?A?A?A????B?B???B", "A?A?BAABB?AB??A?B", "AA??AA?B?AAB??A?B", "????????BAAB????B", "?BBA?B???AA?B??AA", "?AA?B?A??AB?BB?BA", "A??AA????ABBA?ABA", "BB???AB???B??B??B", "B?????????AAB?AA?", "?????A?????AB???B", "??BB?A?B?B???BAAA", "A?B?A???AB?A?????", "???A?A?ABB???BAAA", "A???B???A?AAB????", "??A?B?A?B?BA?????", "?BB???A?B?AAABAAA", "??BAA?A?B?????BA?", "???A??BA?AB?????B", "???BAA?A?A??AB?A?", "??AA???AA?B???BA?", "AAAA?A???A????AA?", "?AB??B??B???A?AB?", "?A??A???A?BA??BAA", "B?A??????BAB?B?BB", "??B???????B??AA?B", "??AABAB?B?BA??B??", "???A??????A?AAA??", "??B?B?AB?AB??????", "B???B?B??A?A?????", "???AA?BB??BABA???", "?BB?A?BA????A?B?A", "??A??B????A?BAB??", "?????????B??A????", "AA??AA?AABB??AAA?", "?A????A?AA??AB?B?", "??BA??????BB???A?", "?????AA??AAA?????", "??A?BB?BB??A?????", "B?BAAB?A?????B??B", "B?B?A????BB?BA?B?", "??????BB???B?B??B"};
    vector<int> wordNumbers = {483, 521, 382, 71, 299, 104, 531, 717, 850, 626, 394, 163, 171, 763, 49, 836, 628, 120, 401, 451, 62, 171, 706, 786, 753, 171, 506, 736, 975, 454, 945, 286, 825, 821, 732, 610, 894, 886, 519, 634, 279, 467, 790, 629, 737, 189, 777, 424, 21, 301};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????"};
    vector<int> wordNumbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"?????AAA???A??AA?", "AABA??AA??BA???A?", "??A?????A?A?ABA?A", "???B?A?A?AAAA?AA?", "AA??????A??AAA?A?", "AABAA??AA?A?????A", "??????AA?AA??AAAB", "A?A?BAB???AA?A??A", "?????A????A?BA?AA", "?BAA?A???AAAABA?B", "?A??BAA???BAAB?A?", "?A????AAA?A?A?BAB", "??AAB?A?ABAAB??BA", "AA?A??A??A?A?B???", "?BA?AB?B???A??AAB", "BA?A?BAAAA??A????", "?A?AA???A?A??????", "??????A?ABAA???AA", "A?????AAAA??BA???", "???A?BA?AAAAA??AA", "?AAA?A??BA?B?AA??", "AA??A?A?A?B??B?AA", "?A???AA?A??A???AB", "AAA?AA??AA??B??AB", "?AAA?AB??A?A?AA?B", "?AA?A?A??AAAAA??B", "???BAA?A???ABBAAA", "BB??A??A?AB?A????", "?A??B?A??BAAB??A?", "A??AA??A??A???AAA", "AAB??AAA????A????", "A??A?AB??B?A?BAA?", "??A???A?A?A??A??A", "AAAA?A??A?A?B??BA", "AAA????B?AAABAA?A", "???A?AAAA??????B?", "B??A?AAAAAB??B?A?", "??AAABAB?ABBA?A??", "?AA??????B??BAA??", "?AA?AA?BA?B???AA?", "???AA???BA?A????A", "?AA??A????AB?AAA?", "A??BAAA??A?A???AB", "A???????A???A?BAA", "A??????ABAAA?????", "?BAABA?AA?????A??", "?AAA?AA???A?BA???", "AA??AAAA?A?A?AAA?", "?A?AB???BABA?BBA?", "?????A??AAAA??AAA"};
    vector<int> wordNumbers = {131081410, 198669346, 761699204, 337437458, 770827244, 939875691, 922979178, 154579790, 129027499, 237166447, 386186983, 814048114, 514626888, 901336893, 405913814, 258284762, 926103529, 796258456, 110420939, 161257561, 995188153, 528424146, 721673297, 43698427, 61198773, 620137939, 382774470, 413274054, 650419729, 879000376, 949062871, 476138165, 940287308, 77628311, 802913483, 90981328, 851515872, 600680743, 942981437, 533243453, 993246432, 311677245, 832436687, 387037274, 885197044, 135840826, 751434394, 295430506, 767510384, 929560776};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABBBBABABABBBBBAABAABBABBABABBBAAAABBAAAAA", "AAAAAAAAABBBBABABBABBBABABAAABBBBAABBABABBBAAABBBA", "AAAAAAAAABBBBBBABBABBBABABAAAABBBBAAABABBBAABAABBA", "AAAAAAAAABBBBABABBBBBABBABABBBBAAABBABABABABABBBBB", "AAAAAAAAABBBBBBABBABBBABBBABBBABABABBABABABBBABBBA", "AAAAAAAAABBBBBBABBBBAAABBAAABBBBBBBBABABBBABAAAAAA", "AAAAAAAAABBBBBBABBBABBBBABBBBBBAABBBAABABBBAABBABB", "AAAAAAAAABBBBABABABBBBBBBBBBABABABBABAABBBAAAABBBA", "AAAAAAAAABBBBABABABBBBBAAAAABAABBABBBBABBABABBBBBA", "AAAAAAAAABBBBABABBABBBBBBBBBBBBABBABBAABBBAAABAABB", "AAAAAAAAABBBBABABBBBBBBBABAABBABBBABBBABBBABAAABBA", "AAAAAAAAABBBBBBABBBAAABABBBABBBBBBABBAABABBAAAABBA", "AAAAAAAAABBBBBBABABBAABABBBABBABBABBAAAABBBBBABABB", "AAAAAAAAABBBBBBABBBABBABBBABBBBAABABBBAAABABBBABBB", "AAAAAAAAABBBBBBABABAAABBABBBBABABABABBBAAABBAAAABB", "AAAAAAAAABBBBABABBBABABBABAAABBABBBABABBBAAABBAAAB", "AAAAAAAAABBBBBBABBBABBBBBABBABBABBAAAAABBBBBAAABBA", "AAAAAAAAABBBBBBABBABBBBBBABBBBBBABAABBABBAABBAABBA", "AAAAAAAAABBBBABABABBBBAAAABBAABBBBBBABABBABBBBABBB", "AAAAAAAAABBBBABABBABBAABABAAAABBBBBAAABAABBBBBAABB", "AAAAAAAAABBBBBBABBBBABBBAABBBBABBBBAABAABAABABBABB", "AAAAAAAAABBBBBBABABBABAAAAABBBBAABBBBBBAABABABABAB", "AAAAAAAAABBBBBBABBABBAABBABBBBBABABABABBABBABBBBAB", "AAAAAAAAABBBBABABABABBABBAAABABBBABBBBABABBBBAABBB", "AAAAAAAAABBBBABABABABBBBAAABBABBBAABBBBABABAABBABB", "AAAAAAAAABBBBBBABABBBBABABBABBBBAAABBBBBAABBBBBBAA", "AAAAAAAAABBBBABABBBBBBBBAAAABAABBBBAABABBBBAABBBBA", "AAAAAAAAABBBBBBABABAABABABBBBAAABABABBBBBBBBBABBAB", "AAAAAAAAABBBBBBABABBBBBBBABBBBBABABAABAABBABBBBABA", "AAAAAAAAABBBBBBABBBABABBAABBBABBBBAABBABBBABBABABA", "AAAAAAAAABBBBBBABBBBAABABBAABAABBBBBBAAAABAAABBABA", "AAAAAAAAABBBBBBABABABBBAAAAABABBBBABBBABBABBABBBAB", "AAAAAAAAABBBBBBABBBBAAABBAABBBAAABBBBBBAAABBBBBBAB", "AAAAAAAAABBBBABABABBBAAABBABABBBBBBBABAAABBABBABAB", "AAAAAAAAABBBBBBABBBAAAAABBBBAAAABAABBBBAABABABBBBA", "AAAAAAAAABBBBABABABBBABAABBBBABABBBABBABBBBABABABB", "AAAAAAAAABBBBBBABBBAABBBBBABBAABAABBBBBABBAABBBAAA", "AAAAAAAAABBBBBBABABBBABBBAABBABBABABBBAABBABBABAAB", "AAAAAAAAABBBBBBABBBBAAABBBABBABBBABBABBAABABBBABBB", "AAAAAAAAABBBBBBABABBABAABBABAAABBBBBABABBBBABABAAB", "AAAAAAAAABBBBBBABBBBABBABBBBBBBBBABBABBABBABBBBBAB", "AAAAAAAAABBBBABABBBBBAAABABABBBABBBABBBBAABBBBBBAA", "AAAAAAAAABBBBBBABBBAABABBBBABABBBABABBBABABBBBABBB", "AAAAAAAAABBBBABABBBBBBBBABABBABBAAABBAABABBABABBAA", "AAAAAAAAABBBBBBABBBABABBBABBAAABBBBBBAAABABBBBAABB", "AAAAAAAAABBBBABABABBBBBABABBABBBABBBBBBAAABAAABBBB", "AAAAAAAAABBBBBBABBABBBAAAABAABABBBABBBABBABBAABABA", "AAAAAAAAABBBBABABBBABBBBAABABBAABBBBABABABBBAAABAA", "AAAAAAAAABBBBBBABBABBBABBABABBABABBBBBBBAABAAABBBA", "AAAAAAAAABBBBBBABBBABBBBBBBAABBBBBBBABBBABAAAABAAB"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"A?A??AA?A?A???A?A", "A??AAA?????A?A?A?", "AAAAA???AAAA?AAA?", "?A????A?A?AAA????", "AAAA???????A?AAAA", "????A?AAAA?AAAA?A", "A???AA?AA?A?AA?A?", "A?A?AAA???A?AA???", "A?A?AA?A?A?A??AA?", "?AA?A?AAAAA??AAA?", "??A??AA??A?AA?AA?", "?A?A?????A??A??AA", "AAA??A?????A?AAAA", "A?A???A???AAA????", "A?A?AA?A??AAA??A?", "A??AA???????AA?A?", "???A????AAAAAA??A", "???A?A?A?A?A?AAAA", "AAA???AA?????AA??", "??A?AA?A?AA?A??AA", "?AAA??AAAA??A?AA?", "A????????A??A????", "?A?????A??????A?A", "AA?AAAA?AAA?A???A", "?A??A?A?AA?AA???A", "?AA??AA??????AAA?", "AAAA?A??????A?A?A", "A???A??AAA?AAA?A?", "??AA?AA??????A?AA", "AAA???AA??????AA?", "AAAAA??AA???A??A?", "??A?AA?A?AA???A?A", "?AAA??A??A????A??", "?A??AA?AA?AA??AA?", "?????AAAA?????AA?", "?A?A??A?AA???AA??", "???A?A???????AA??", "AA?A??A??A??A????", "AA???A?AAA?A?AA??", "AA??AA??AAAAA???A", "A?AA?AAA?AAAA?AA?", "A?A?AAA?A???A?A??", "AAA?AA????A?A?AA?", "?AAA??A?AA???????", "A??A?AA??A?AA?A?A", "?A??A??AA?AAA???A", "??AA??A????????AA", "??A?A???AA?????A?", "?AAA??AA?A???????", "A??A?AAAA?????A?A"};
    vector<int> wordNumbers = {150707534, 412147413, 186401903, 150694217, 106539140, 722740356, 978272411, 742647187, 225369019, 383436394, 81247275, 276398934, 885555486, 916030737, 977405758, 883759925, 812121176, 630301299, 20582535, 341778001, 708363677, 986108653, 84352880, 108396512, 508673307, 66409402, 822653404, 408629166, 899392114, 9073723, 828636951, 170441948, 945238719, 795727327, 145887913, 897161025, 948517061, 252642618, 825187827, 591980060, 58228605, 481984806, 308324031, 656359694, 667161159, 940058470, 344694795, 518614326, 248732249, 674879513};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABBABABBBABBBBBAABBBABBAABABBBBBBBABABBBBB", "AAAAAAAAABBABBBBBABBBBAAABBBAABBABBBBAABBBAAABBBBA", "AAAAAAAAABBABABBBBABBABBABAAABBBBBBBBBAAAABAABBBBA", "AAAAAAAAABBABABBBABBBBBAABBBABABBBBABBBABABABBBBBB", "AAAAAAAAABBAABBBBBBBBBBAABBBBABBAABBBBABABBBBBBAAB", "AAAAAAAAABBBABBBABABAAAABBBBBBBBBBBABBABABAAABAABA", "AAAAAAAAABBBABBBBBBABBBBABBABBBBABBBBAAABBABABBBAA", "AAAAAAAAABBBABBBABABBABBBABBBBBBAABABBAAABBBBBBAAA", "AAAAAAAAABBABABBBBBABBAABBBBBBBBBBBBABABBBABABBBBA", "AAAAAAAAABBABBBBBABABBAABBABABBBBABBBBAABABABBBBAA", "AAAAAAAAABBAABBBBBBBBAAABBBBBBBBBAAABBBABAAABBBBBA", "AAAAAAAAABBABABBBBBBBBBBABBABBABBBBBBBBBBBBBBABABA", "AAAAAAAAABBBABBBBBAABBBABBBBAABBBABBBBAABBBBBBABBB", "AAAAAAAAABBBABBBBBABBABABABBAAABBBAABBABBBBBBBBBBB", "AAAAAAAAABBBABBBBBBABBBBABAABBBBBABBBABABBBBAABABB", "AAAAAAAAABBBABBBBBAABBBABAABAABBBBABABBBAABBBBABBB", "AAAAAAAAABBBABBBABBBBBBBABBBBBABBBAAABBBBAABABABAB", "AAAAAAAAABBBAABBBABBBBABBBBBBABABBBBBAABBBBABABBAB", "AAAAAAAAABBAABBBBABBBABBBAAAABBAAABBBBBBABBBABBBAB", "AAAAAAAAABBABBBABBBBBABABBABAABBBBAABABBBBAABABABB", "AAAAAAAAABBBAABBBBBBBBBAABBABABABAABBBBABBAAABBAAB", "AAAAAAAAABBBABBBBBBBAAABBBBBABABABABBABABBBABABBAB", "AAAAAAAAABBAABBBBBBBBAABBBBBBABAABBBBABBABABBBBAAB", "AAAAAAAAABBAABBBBBBBBBBABBAAAAABBBBABBBBABBBAABBBA", "AAAAAAAAABBABBBBBBBAABABBBABBBBBBAABBABAAAAABBBBBB", "AAAAAAAAABBAABBBBBBABBBBBBBBBAABABABBBAABBBAABAABB", "AAAAAAAAABBBABBBBABABBABBBBABBBBAABBABABABBAABBABA", "AAAAAAAAABBABBBBBABBBABBBABAABBAABBBABBBBBBAABABBA", "AAAAAAAAABBBABBBBBABABAABABBBBBBBBABABBAABABBABAAB", "AAAAAAAAABBAABBBBABABBBABBBBBBBBBBAAAABBABABBBAAAB", "AAAAAAAAABBBABBBBABABBBBABBBBABAABBBABBABBABABAABA", "AAAAAAAAABBABABBBBAABBABBBAABBBABBBABBBBABBBBABBBA", "AAAAAAAAABBBABBBBBBAABABAABBBBABABBABABBBBABABBBBA", "AAAAAAAAABBBABBBABBBBBAABAAABBABBABBBABABBBAAAAABA", "AAAAAAAAABBABABBBABBBBAABBBAABBBBABBBABBBABABAABAB", "AAAAAAAAABBBABBBBBABAABBBBBABBBBABBABAAAABBABBBAAB", "AAAAAAAAABBBABBBBBBAABABBBBABBBBBBBBBABBBBABAABBAB", "AAAAAAAAABBABABBBBBBBABBAAABBBBBBBBABBBBAABAAAAABA", "AAAAAAAAABBBABBBBABABBBABABBBABABBBBABBBABABBBABAB", "AAAAAAAAABBABBBBBBBBBBAABABBABABBBAABBABABBBBBBBAA", "AAAAAAAAABBAABBBBBBABBBABBABAABBBBABBBBABAABBAAAAA", "AAAAAAAAABBABBBBBBABBABBBBBBBAABABAABBABBBBAAABBAB", "AAAAAAAAABBABBBABBBABBABBAAAABABBABBABBBAABBBABBAB", "AAAAAAAAABBBAABBBBABBABBBAABBBBBABBAAABBABBABBBAAA", "AAAAAAAAABBBAABBBBABBBBABAABBBAABBBABABBBABAAABBBA", "AAAAAAAAABBBABBBBBABBBBBBBBABBBABBBBBBAABBBBBAABBA", "AAAAAAAAABBABBBABBBBBABBABBBBBBBBBBABAAABBAAABBBAA", "AAAAAAAAABBABBBBBBBABAABAABAAABBBBABBBAABBBABABBAA", "AAAAAAAAABBABABBBBBBBABAABBABBBABBBBBBABBBAABBAAAB", "AAAAAAAAABBBAABBBBABBBBBBBBABABABBABABBBBBBAABBAAB"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"AAAAAAAAAA?AAAAA?", "AAAAAAAAAAAAAAAAA", "A?AA?AAA?AAAAAAA?", "AAAAAAAAA?AAAAAAA", "AA?AAA?AA?AA?AAAA", "AAA?A?AAAAAAAAAAA", "A?AAAAAAA?A?A?AAA", "AAAAAAAA?AAAAAAAA", "AAA?AA?AAAAAAAAAA", "AAAAA?AAAAAAAAAAA", "AAAAAA?AAA?AA?AAA", "AAAAAAAAAAAAAA??A", "A?AAAAAAAAAA?AAAA", "?A??AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA??", "AA?AAAAAAA?AAAAAA", "A?AAA??AAAAAAAAAA", "A?AAAAAAAAAAAA?AA", "???AAAAAAAAAAAAAA", "AAA??A?AAAAAAAAAA", "AAAAAAAA??A??AAAA", "?AA?A?AA?AAAA?AAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAA?AAAAAAAAAAAAA", "AAAAAA?A?AAAAAAAA", "A?AA?AAAAAAA?AAAA", "AAAAAAAAAAAAAAAA?", "AAAAA?AAAAAAAAA?A", "AAAAAA?AAAAAAA?AA", "AA?AA?AAAAAAAAAAA", "AAAAAAA??AAAAAA?A", "AA?AAAAA??AAAAAA?", "AAAAA??AAAAAAA??A", "AAAAAAAAAAAA?AA?A", "AAAAAA?AAAA?AAAAA", "AAAAAAAAA?AAAAAAA", "?A??AAAAAAAAAAA?A", "AAA??AAAAAAAAAAA?", "A?AAAAAAAAAAAA?AA", "A?AAAAAAAAAA?AAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAA?AAAA?AAA?", "AAAAAAAAAAAAAAAAA", "AAAAAAAAA?AAA?A?A", "AA??AAA?AA?AA?AAA", "AAA?AAAAAAAAAAAAA", "AA?AAA?AAAAAAAAA?", "AAAAAAAAAAAAAA?AA"};
    vector<int> wordNumbers = {548602351, 570247496, 705348770, 158006194, 601688484, 932510248, 864755260, 965892588, 823530776, 919568628, 570117044, 630580427, 812119536, 287125189, 340098674, 655181899, 96597189, 961562432, 506262418, 478762969, 654067680, 563670519, 954410170, 804069135, 88922828, 562234584, 87855542, 599838779, 741675718, 963875777, 389245796, 895837582, 2763865, 229435940, 550053285, 842421204, 23210954, 744600004, 573001886, 283809920, 59822570, 570186457, 327776796, 52660247, 273360363, 512134761, 813557307, 871654587, 221609178, 817878314};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAABABBAABBAAABAABABBABBABBAAAABABABABB", "AAAAAAAAAAAAAABABBAABBAABAABBBBABBBAAABAABAABABBBB", "AAAAAAAAAAAAAABABBAABBBABABAABBBAABBBABBBBBABBBBBB", "AAAAAAAAAAAAAABABBAAABBAABBAABAAABAAABBAAAAABABAAB", "AAAAAAAAAAAAAABABBAABBABAAABBAAAAAAABAABAAABABBABA", "AAAAAAAAAAAAAABABBABAABAAAABABBBAAABBABABABBABBAAA", "AAAAAAAAAAAAAABABBABAAABAAABAAABAAABBABBBABBAABAAA", "AAAAAAAAAAAAAABABBABAABABAABBAAAABAAAAABAABAAAABAA", "AAAAAAAAAAAAAABABBABAAAAABBBAAABABBABBBBABBABAAABA", "AAAAAAAAAAAAAABABBABAAABBBBAABAAABAABABAAAABBBABBA", "AAAAAAAAAAAAAABABBAABBAABAABBBBAABBAAABABABAABAABB", "AAAAAAAAAAAAAABABBAABBABBAAAABBBAABBABBBBBBAABBBBA", "AAAAAAAAAAAAAABABBABAAAAABAAABABABBAAAABABBABABBBA", "AAAAAAAAAAAAAABABBAABAAAABABBAAABBBABAAABBBBABBBBA", "AAAAAAAAAAAAAABABBAABAABAABAABBAAABBABAABAAABBABAB", "AAAAAAAAAAAAAABABBAABBABBBBAABABBBAAABBBAABBAAAABB", "AAAAAAAAAAAAAABABBAAABABABBBABBBAAABBABAAAAAAABABA", "AAAAAAAAAAAAAABABBABAABABAAAABBBABBBABBBABAABBBBAA", "AAAAAAAAAAAAAABABBAABABBBABAABBABBBBBABABAABBABBAA", "AAAAAAAAAAAAAABABBAABABBAABBBBABAABABBBBBBBAAABABB", "AAAAAAAAAAAAAABABBAABBABBBBAAAABABBBBBBBAABABABABA", "AAAAAAAAAAAAAABABBAABBAABAAAABABBAAABBBABBBAABBBBA", "AAAAAAAAAAAAAABABBABAABAABBABABBBBABAABAABAAAABBBB", "AAAAAAAAAAAAAABABBABAAAAAABAABBAAAABBABBABAABBBBAB", "AAAAAAAAAAAAAABABBAAABABABABBAABBABAAABABBBBAABAAA", "AAAAAAAAAAAAAABABBAABBAAABBBBBBBBBAABBBAAAAAABBABB", "AAAAAAAAAAAAAABABBAAABABABABABABBAAABABABBAAAABAAA", "AAAAAAAAAAAAAABABBAABBABAAABAAAABBBABABBABAAABABAB", "AAAAAAAAAAAAAABABBAABBBBAABBAABBAAAABBAAAAABABBBAA", "AAAAAAAAAAAAAABABBABAABABAABAAAAABBABBBBAAAABABABA", "AAAAAAAAAAAAAABABBAABAABBBBAAABBABABBABBABABABAAAA", "AAAAAAAAAAAAAABABBABAAABBAAABAABAAAABBAAAAABAAABAA", "AAAAAAAAAAAAAABABBAAABAAAAAABABBBBBBAAABABBABABBBB", "AAAAAAAAAAAAAABABBAAABBBABBBABBBAABABBAAAAABABBABB", "AAAAAAAAAAAAAABABBAABBAAABABAAABAAAAAABAABBABAAAAA", "AAAAAAAAAAAAAABABBABAAAABABBBABABABAAABABAABBBBAAB", "AAAAAAAAAAAAAABABBAAABAAABABBABBBBABBBBABABBBBBBBA", "AAAAAAAAAAAAAABABBAABBBBAABBBBBAABAAAAABBBABAAAABA", "AAAAAAAAAAAAAABABBAABBAABABABAABBAAABABAAABAABAABB", "AAAAAAAAAAAAAABABBAABAAAABAABBAAAABAABBABBAAABBBAA", "AAAAAAAAAAAAAABABBAAABAABBBABAABAAABBAABBBBBBBBBBA", "AAAAAAAAAAAAAABABBAABBAABAABBBBABABAABBABABAABABBA", "AAAAAAAAAAAAAABABBAABAAABBBBABBAAAABAABAABBBAAABBA", "AAAAAAAAAAAAAABABBAAABAABBAABBABBAABABBBABBAAAAABB", "AAAAAAAAAAAAAABABBAABAAAAABAAABABABBBBAAABAAAAAAAB", "AAAAAAAAAAAAAABABBAABABBBABBBBABBAAAAABAAABABABBBB", "AAAAAAAAAAAAAABABBABAAAAABAABABABBBBABBBBBBABBBAAA", "AAAAAAAAAAAAAABABBABAAABAABABABBBBAAABAABBBAABBBBA", "AAAAAAAAAAAAAABABBAAABBBABABBAABAAABBBBBBAAABABBAB", "AAAAAAAAAAAAAABABBABAAAAABABBABBBAABABABABABBBAABA"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {};
    vector<int> wordNumbers = {1000000000};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAABBBABBBAABBABABBAABABAAAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAABBB", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "BABABABAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA"};
    vector<int> wordNumbers = {0, 1, 2, 3, 4, 1000000000, 999999999, 9485734, 3945782, 394823, 0, 1, 2, 3, 4, 1000000000, 999999999, 9485734, 3945782, 394823, 0, 1, 2, 3, 4, 1000000000, 999999999, 9485734, 3945782, 394823, 0, 1, 2, 3, 4, 1000000000, 999999999, 9485734, 3945782, 394823, 0, 1, 2, 3, 4, 1000000000, 999999999, 9485734, 3945782, 394823};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAABA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAABAABAABABBBAAABBBBBABABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAABBBBBAABABABBBAABABBBA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAABAAAAABAABBAABBBAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAABA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAABAABAABABBBAAABBBBBABABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAABBBBBAABABABBBAABABBBA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAABAAAAABAABBAABBBAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAABA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAABAABAABABBBAAABBBBBABABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAABBBBBAABABABBBAABABBBA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAABAAAAABAABBAABBBAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAABA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAABAABAABABBBAAABBBBBABABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAABBBBBAABABABBBAABABBBA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAABAAAAABAABBAABBBAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAABBAAAAAAAAAAABAA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAABA", "AAAAAAAAAAAAAAAABBAABBBABBBABAAAABBABBABABBBABAAAB", "AAAAAAAAAAAAAAAABBAAAAAAAABAABAABABBBAAABBBBBABABA", "AAAAAAAAAAAAAAAABBAAAAAAAAAABBBBBAABABABBBAABABBBA", "AAAAAAAAAAAAAAAABBAAAAAAAAAAAABAAAAABAABBAABBBAAAB"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"BB?AA?BA???BBAA??", "B??BABA?BAAABABA?", "AB?BB?AAB?B?BAABA", "B?AAAABBABBB?AABA", "AA?ABABBA?B?B?A??", "?AB?A?BAABB?BBAB?", "B?ABABAB?BABBA?AB", "B?BB?AAAAA??AB?AB", "AB?BB?A?BAAB??BBB", "ABB?B?AB?AB?BA?AA", "?A?BBAAAABBBBB??A", "A??BB?BBBA??ABABA", "AB?BBB?AAABABA?BB", "A?BBBBBA?BAAAA???", "B???AA?BBABBBA?AB", "?B??B?A?ABA??????", "A??BA?B?B?BAA?B?B", "BB?A?ABBBBA??A???", "AB??AB?BBBAAABABB", "A?A?BBB?BABB?B?BA", "ABAB?BB?AB?BB?BBA", "BB?B?BA???BBA?AAB", "ABB?BBB?BBABB??B?", "BBB??BB?AB?B?B??B", "?A?B?AB??A?A?B?BA", "B?AAA??A?ABA??B?B", "B?ABB??B????B??AA", "BA?ABB?B?BBA????B", "BAA?B??BABB??BAAA", "A?A?A??A???ABAAA?", "AA?ABB?BAABBAA?B?", "?ABBAB?A??BBBABB?", "BA?BABA??AABBBAB?", "?A??A?BBBA?A?BABA", "?A?ABBB?ABABA?B?B", "BB?A?BBBBA?B?AA??", "AAA?ABBBBA??A?A?A", "ABA??BAB?ABAB??B?", "AA?AA????AA?BAABB", "?AB??AABABA?BA?AB", "?AA?BAA??BBBBBBAB", "?BBBBAA?B?A?AA?B?", "?AAABBBBBA?AAAA?B", "AA??BBBBABB?ABA?A", "??ABBABA?A??AB??A", "ABB??AB??BBABBABB", "A?BB?A?A???AB?AB?", "AA?B??BAABAA?A??A", "??AABA?BAA?BBA?AB", "????BA?BBBAB?AB?A"};
    vector<int> wordNumbers = {1, 410000, 184670000, 63340000, 265000000, 191690000, 157240000, 114780000, 293580000, 2696, 20000, 244640000, 57050000, 281450000, 232810000, 168270000, 99610000, 4910000, 29950000, 119420000, 48270000, 54360000, 323910000, 146040000, 39020000, 1530000, 2920000, 123820, 0, 174210000, 187160000, 197180000, 198950000, 54470000, 217260000, 147710000, 1153800, 0, 18690000, 199120000, 256670000, 262990000, 170350000, 98940000, 287030000, 238110000, 313220000, 303330000, 176730000, 46640000};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBABABBBABBAABAAAAAB", "AAAAAAAAAAAAAAAAAAAABABAABAAAAAAABABBBABBABBBAAABA", "AAAAAAAAAAAAAAAAAAAAAABABBBBBBABBBABBAABAABAAABBAB", "AAAAAAAAAAAAAAAAAAAABBABABBBBABABBAAAAAABBBBBBBBAB", "AAAAAAAAAAAAAAAAAAAABABAABBBBAAABBBABAAABBABABABBB", "AAAAAAAAAAAAAAAAAAAAABBBABBAABBAAABBBBABBBABBBABBB", "AAAAAAAAAAAAAAAAAAAAABABBBAAAABAABAAABABBABBABBABB", "AAAAAAAAAAAAAAAAAAAABBBABAABAAAAAABABABBBBBABBAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBABBBBAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBABBAAABBA", "AAAAAAAAAAAAAAAAAAAABBAAABBAAAABABABBAAABBBBAAAABB", "AAAAAAAAAAAAAAAAAAAAAABABBAAABAAABAAAAAAABABAAAABA", "AAAAAAAAAAAAAAAAAAAABBBAAAABBAAAAAABABABBABBAABAAB", "AAAAAAAAAAAAAAAAAAAABBAAAAAAAABBAABBBAAAAABAABABBB", "AAAAAAAAAAAAAAAAAAAAABBBBBAABBABBBAABABAAAAAABBBBA", "AAAAAAAAAAAAAAAAAAAAABABAABBABBBAAAAAABBBBBAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAABBAAAABABBABABAAABAABBBA", "AAAAAAAAAAAAAAAAAAAAAAABABBAAABABBAAABBBABBAAABABA", "AAAAAAAAAAAAAAAAAAAAABABBBBABBBAAABBABAAABBAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAABAABAABBBBABABBAAAAABABBBBBB", "AAAAAAAAAAAAAAAAAAAAAABABABABBBBABABBAAABBBAABABAA", "AAAAAAAAAAAAAAAAAAAABBBBBABBAABBBBABABBBBBBBBBABBB", "AAAAAAAAAAAAAAAAAAAAABBBAAAAAABAABAAABBAAAABABBBAB", "AAAAAAAAAAAAAAAAAAAAAAABBABBBAAAABBAABABBABABBAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABBABBABBABAAAAAAAAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAABBABBABBABABBAABBBAAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBAABBABBBABABBAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAABAABAABABBAAAAAAABAAAABBAAAAAA", "AAAAAAAAAAAAAAAAAAAABABAABABAABABBBAABABABABAAABBB", "AAAAAAAAAAAAAAAAAAAABABABABBAABBBABABAAAAABABAAABA", "AAAAAAAAAAAAAAAAAAAABABABBAAAAABAABBABBABBBAABAABB", "AAAAAAAAAAAAAAAAAAAAAABABABBAAAAAAABBABABBABABBBBB", "AAAAAAAAAAAAAAAAAAAABABBABBBAAAAAABAABBABBAABBBBAA", "AAAAAAAAAAAAAAAAAAAAABBBAAAABBBBAAABBAAABBBBBBAABA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABABABBBABABBAAAABAABAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAABBAABAABBAAABBABBAABAAABBA", "AAAAAAAAAAAAAAAAAAAABABABBAAAABBAAABBBAABABABABAAB", "AAAAAAAAAAAAAAAAAAAABBABAABBBAABBBBABBBBBABABAABBA", "AAAAAAAAAAAAAAAAAAAABBABABBABABBBAABBBAAABAAAAABBA", "AAAAAAAAAAAAAAAAAAAAABBBBBBAAAAABBBBBBBAAAABBAABBA", "AAAAAAAAAAAAAAAAAAAAABABAABBAAAAABAAAABAABBBABBABB", "AAAAAAAAAAAAAAAAAAAABBBAABAAABBABBABBBBBABABABABBA", "AAAAAAAAAAAAAAAAAAAABBAAAABABBAAABABBBAABBABBBAAAA", "AAAAAAAAAAAAAAAAAAAABBBBABAAABBBAAAAAABBAAAAABBABA", "AAAAAAAAAAAAAAAAAAAABBBABBBAABABABBBAABAABAABABBAA", "AAAAAAAAAAAAAAAAAAAABAABABAAAAABAAAAABABABBBBBABAB", "AAAAAAAAAAAAAAAAAAAAAAABBBBBBAAAAAABBBAABAAAAAABAB"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int wordLength = 50;
    vector<string> forbiddenSubstrings = {"?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????", "?????????????????"};
    vector<int> wordNumbers = {0, 1, 2, 3, 4};
    AlienDictionary* pObj = new AlienDictionary();
    clock_t start = clock();
    vector<string> result = pObj->getWords(wordLength, forbiddenSubstrings, wordNumbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE", "NO PAGE"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653044&rd=13506&pm=9877
********************************************************************************
#include "assert.h" 
#include "ctype.h" 
#include "float.h" 
#include "math.h" 
#include "stdio.h" 
#include "string.h" 
#include "stdlib.h" 
#include "stdarg.h" 
#include "time.h" 
#include "algorithm" 
#include "numeric" 
#include "functional" 
#include "utility" 
#include "bitset" 
#include "vector" 
#include "list" 
#include "set" 
#include "map" 
#include "queue" 
#include "stack" 
#include "string" 
#include "sstream" 
#include "iostream" 
using namespace std; 
 
typedef long long i64; 
 
i64 memo[50][1 << 16]; 
 
struct AlienDictionary { 
  vector<int> masks, fixed, sizes; 
 
  void MakeMasks(const vector<string>& subs) { 
    const int n = (int)subs.size(); 
    for (int i = 0; i < n; ++i) { 
      int mask = 0, fix = 0; 
      for (int j = 0; j < (int)subs[i].size(); ++j) { 
        mask <<= 1; fix <<= 1; 
        if (subs[i][j] != '?') { 
          if (subs[i][j] == 'B') mask |= 1; 
          fix |= 1; 
        } 
      } 
      masks.push_back(mask); 
      fixed.push_back(fix); 
      sizes.push_back((int)subs[i].size()); 
    } 
  } 
 
  bool IsValid(int mask, int size) { 
    for (int i = 0; i < (int)masks.size(); ++i) if (size >= sizes[i]) { 
      const int notFixed = mask & fixed[i]; 
      if (!(notFixed ^ masks[i])) return false; 
    } 
    return true; 
  } 
 
  i64 f(int n, int k, int mask) { 
    mask &= (1 << 16) - 1; 
    if (k >= n) return 1LL; 
    i64& count = memo[k][mask]; 
    if (count != -1) return count; 
    count = 0; 
    if (IsValid((mask << 1) | 0, k + 1)) 
      count += f(n, k + 1, (mask << 1) | 0); 
    if (IsValid((mask << 1) | 1, k + 1)) 
      count += f(n, k + 1, (mask << 1) | 1); 
    return count; 
  } 
 
  vector<string> getWords(int n, vector<string> subs, vector<int> numbers) { 
    MakeMasks(subs); 
    memset(memo, -1, sizeof(memo)); 
    const i64 total = f(n, 0, 0); 
    vector<string> res; 
    for (int i = 0; i < (int)numbers.size(); ++i) { 
      if (numbers[i] >= total) res.push_back("NO PAGE"); 
      else { 
        i64 page = numbers[i]; string word; int mask = 0; 
        for (int k = 0; k < n; ++k) { 
          if (IsValid((mask << 1) | 0, k + 1)) { 
            const i64 withA = f(n, k + 1, (mask << 1) | 0); 
            if (page >= withA) { 
              page -= withA; 
              word.push_back('B'); 
              mask = (mask << 1) | 1; 
            } else { 
              word.push_back('A'); 
              mask = (mask << 1) | 0; 
            } 
          } else { 
            word.push_back('B'); 
            mask = (mask << 1) | 1; 
          } 
          mask &= (1 << 16) - 1; 
        } 
        res.push_back(word); 
      } 
    } 
    return res; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/