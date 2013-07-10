/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6215
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

class JoinedString {
public:
    string joinWords(vector<string> words);
};

string JoinedString::joinWords(vector<string> words) {
    string ret;
    return ret;
}


int test0() {
    vector<string> words = {"BAB", "ABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"ABABA", "AKAKA", "AKABAS", "ABAKA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABAKAKABAS";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"AAA", "BBB", "CCC", "ABC", "BCA", "CAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBBCABCCC";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"OFG", "SDOFGJTILM", "KBWNF", "YAAPO", "AWX", "VSEAWX", "DOFGJTIL", "YAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "KBWNFSDOFGJTILMVSEAWXYAAPO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"NVCSKFLNVS", "HUFSPMRI", "FLNV", "KMQD", "RPJK", "NVSQORP", "UFSPMR", "AIHUFSPMRI"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AIHUFSPMRINVCSKFLNVSQORPJKMQD";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"CCC", "CABBBBBBABCABCBACBACCCBAAACBBCCACCACAAAACCAC", "BCAAA", "CCCAACCAACCAAACACBCCBA", "CABBCCBBBCACACABCAA", "BCCCCABBCABBCCBACBAACACCBABCBCCBAA", "AAACCCBB", "CCAACCAAACACBCCBABCAACAABA", "BCCB", "ACAABC", "BBABABCAAACABBCBABBCABCBAC", "ABABCAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CABBBBBBABCABCBACBACCCBAAACBBCCACCACAAAACCACAABCCCCABBCABBCCBACBAACACCBABCBCCBAAACCCBBABABCAAACABBCBABBCABCBACABBCCBBBCACACABCAACCCAACCAACCAAACACBCCBABCAACAABA";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"CACBABCACCCCACCAACACAACBBBCCACAACBCACCCCCBB", "BACACBABCA", "CBBCAACCCACCABABCAACBCBBBACABCCACBBCBCC", "BABCABABBBCABABACCACBABACACB", "BAAABCBBCABBCBBAABABBC", "CCBBCBCBABAAABCBBCABBCBBAABABBCCBAABACABBCCABBACAA", "BCBCCABCCAACCCBABAA", "BCACCBAACBC", "ABACCBCBCABACBCCBCACCABCCBBCBBCACCABCB", "BBCCBBCBCBABAAABCBBCABBCBBAABABBCCBAAB", "BACAABAABACAC", "CAABCCACBBCBCCBCACCACBACAABAABACAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABCABABBBCABABACCACBABACACBABCACCCCACCAACACAACBBBCCACAACBCACCCCCBBCAACCCACCABABCAACBCBBBACABCCACBBCBCCABCCAACCCBABAABACCBCBCABACBCCBCACCABCCBBCBBCACCABCBBCCBBCBCBABAAABCBBCABBCBBAABABBCCBAABACABBCCABBACAABCCACBBCBCCBCACCACBACAABAABACACBCACCBAACBC";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"ACBCCCBCAACCBCCCCBA", "CCAACBBCABAABCBABB", "B", "BBCCCAAACACAABCCBCB", "AAC", "BCACACCBBACBBCBCACBBACCA", "BCBCBCBBCBCB", "CABAABCBABBACACAAABABBCACBBABCB", "AABCBABBACA", "CCCCBACAAABBACACBAABBACBACACCBCAABCCBCBBBAACBCBB", "BCACAACCACBABAACAACA", "ABBAAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBAACBCCCBCAACCBCCCCBACAAABBACACBAABBACBACACCBCAABCCBCBBBAACBCBBCCCAAACACAABCCBCBCACACCBBACBBCBCACBBACCAACBBCABAABCBABBACACAAABABBCACBBABCBCBCBBCBCBCACAACCACBABAACAACA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"BACACABBCCABACBAAAAAABACBCBCCBABACA", "ACBAACCBACBCBCAAACCCABCABCACABBCB", "ACBBABACCCAACCAACABABBACABBBBBACCACABBABCABBB", "CBCAAABCBCACABBACCCBCCAAC", "BCACCBBAAACBAACBBCACCABCCCCABB", "ABBABCBCCABBBAABCBABBC", "AAAABACBCBCCBABACACBAACCBACBCBCAA", "CCCBBCBCCBCACBAACAB", "ACCBAAABBCABACAAAACCBAABAACCCAAACAACCC", "ABABBACCACBCA", "BACAB", "BBCCBBCACBCBCBCAACBBABACCCAACCAACABABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BACACABBCCABACBAAAAAABACBCBCCBABACACBAACCBACBCBCAAACCCABCABCACABBCBCAAABCBCACABBACCCBCCAACCBAAABBCABACAAAACCBAABAACCCAAACAACCCBBCBCCBCACBAACABABBACCACBCACCBBAAACBAACBBCACCABCCCCABBABCBCCABBBAABCBABBCCBBCACBCBCBCAACBBABACCCAACCAACABABBACABBBBBACCACABBABCABBB";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"BCCACCCAABBACCBCACBCACACCBABCCABBCCCA", "CBAAACBCACCACACBBBABCCCCCBBBBCAAABACCBCACAABC", "BCACACCAAABABBAAACCACCCCBCBCBBCBCAABCCACABABBCAAAA", "ACAABABBABACBBBCACB", "BCAAACAAACBACAAACCBACBA", "CABCAAACAAACBACAAACCBACBAABACACB", "ACACBAAACCAAACBABABBABAACBBCCCBAAB", "BCBAABC", "CAAABACCBCACAABCBBC", "CCBABAACBCCCCBCABACAACBCBBBBCCBAACCBBABCA", "AAACBCBBABABCACACCAAABABBAAACCACCCCB", "AABCCACABABBCAAAABCCCAAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAACBCBBABABCACACCAAABABBAAACCACCCCBCBCBBCBCAABCCACABABBCAAAABCCCAABCBAABCCACCCAABBACCBCACBCACACCBABCCABBCCCACAABABBABACBBBCACBAAACBCACCACACBBBABCCCCCBBBBCAAABACCBCACAABCBBCCBABAACBCCCCBCABACAACBCBBBBCCBAACCBBABCABCAAACAAACBACAAACCBACBAABACACBAAACCAAACBABABBABAACBBCCCBAAB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"ACBCCCCACBBCCABCCCCBBBCCCCAAAABCABBBCAACABABA", "CBBCCACABAACABB", "ABABAACAACABABCAAACCAABCACCBACACBCABABBAC", "ABAACABBB", "BBBCBCCBBCBCBBBCBBAAABBAACABBBBCACAABCAA", "ABBBBCBBCCBCAAAC", "BABACAACBACABBABAABBBCACACBBACCBCBCABBCCCBAACBCBC", "BCCBCCABCABAAAB", "CCACABAACABBBBABACAACBACABBABAABBBCACACBBA", "BCABBBCAACABABACCC", "BABCBCCAABAACCCCBAACCCBCABCCACAABCCCBCAABBCAC", "ACBBAACCCAAACACBBCABCAACBBCAACBBBCBACBBAABAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABCBCCAABAACCCCBAACCCBCABCCACAABCCCBCAABBCACBBAACCCAAACACBBCABCAACBBCAACBBBCBACBBAABABAACAACABABCAAACCAABCACCBACACBCABABBACBBCCACABAACABBBBABACAACBACABBABAABBBCACACBBACCBCBCABBCCCBAACBCBCCBCCABCABAAABBBBCBBCCBCAAACBCCCCACBBCCABCCCCBBBCCCCAAAABCABBBCAACABABACCCBBBCBCCBBCBCBBBCBBAAABBAACABBBBCACAABCAA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"CBABAABBCBBABCBACBBBAAAA", "AABCABCCAACCCABCBBCBABABC", "BACACAABCAAABBABCABCCBCCCCCAACBCACAABB", "ACA", "ACCCABCBBCBABABCBCABACACB", "ACCCBACCAABCCABCABACACBACCAABCABCCAACCCABC", "CACBCBCCCBBCCBBCCCAACCBAAAABBCBAAACAABBBCBA", "BBBCAABBCCBCAAACACACB", "CCAAACCBBCCBAACCABABCBCCBCACCCBAB", "BBBCACCACABBBCBCCBCBCCBBCBCA", "BAACA", "CCACABAACBAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CCAAACCBBCCBAACCABABCBCCBCACCCBABAABBCBBABCBACBBBAAAACCACABAACBAACACCCBACCAABCCABCABACACBACCAABCABCCAACCCABCBBCBABABCBCABACACBBBCAABBCCBCAAACACACBCBCCCBBCCBBCCCAACCBAAAABBCBAAACAABBBCBACACAABCAAABBABCABCCBCCCCCAACBCACAABBBCACCACABBBCBCCBCBCCBBCBCA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"CBCCACBCABCABCAACACBBCA", "CBBCCACCBAABAAAAACBCBCCBBCABCCABABBABBABBBBCA", "AABBAAABBCCBCCAAAABACCABBABACBBCC", "ABAACBBCABBACCB", "C", "CBABBBCCBCBB", "AAB", "CCBBCCACCBAAB", "CACBCABAAACBBBABBCCAAABBAAABBCCBCCAAAABACCABBAB", "BC", "BCBACBBCC", "CCAAABCCBBBCCBABCACABBCBACBBBACACCCBACCBBCBACCCABC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CBCCACBCABCABCAACACBBCABAACBBCABBACCBBCCACCBAABAAAAACBCBCCBBCABCCABABBABBABBBBCACBCABAAACBBBABBCCAAABBAAABBCCBCCAAAABACCABBABACBBCCAAABCCBBBCCBABCACABBCBACBBBACACCCBACCBBCBACCCABCBACBBCCBABBBCCBCBB";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"ACCCBCCBCAAACCBBCAABBCCCCABCBCABBAACAABCBCCBCB", "AACBABCCBBCCBACBAAAAAAAAACCCBCCBCAAACCBBCAA", "BBABBBCACB", "CCBCCBBBCBACAACACABCCBCBBCBAACAC", "AAAABCABBABCCCCCBCBACCACCBBCBCCCABCACAAABBAABCC", "BCAAACAABABCABAACBABCACAABBBACAABBBACABC", "CCBCCBBBC", "AAABC", "AAACABBABBACBAABABABB", "AACCACBCCAABAB", "CAABACCBAABCBBAABCBBACCCCBACCCBBAABACAACCCCCA", "CACABCCBCBBCBAACACAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABCABBABCCCCCBCBACCACCBBCBCCCABCACAAABBAABCCBCCBBBCBACAACACABCCBCBBCBAACACAAACABBABBACBAABABABBABBBCACBAACBABCCBBCCBACBAAAAAAAAACCCBCCBCAAACCBBCAABBCCCCABCBCABBAACAABCBCCBCBCAAACAABABCABAACBABCACAABBBACAABBBACABCAABACCBAABCBBAABCBBACCCCBACCCBBAABACAACCCCCAACCACBCCAABAB";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"CBCCBACCACBCCBBBBCCCACCAAACCBCAABAACBAABC", "ACACABAABCCCBACBBCBBABCCACCBBAACBBACCBBCCACBCCAAB", "AAACABBCCCB", "CCAAAAACBACACBAAABABBABCBCABABABCBCCBACCACBC", "BABCACCCABBCAACAACA", "BBCAAACBCAACAABCCACAAABACCBC", "ACACBBCAABBCBCAABBABBCAAACA", "CCCBBCACBCABB", "AABCCAAACACBBCAAAABBBBBACCABBABABBBBBCABB", "AABCCAAACACBBCAAAABB", "BACBAABAAAACCABCCCBABBBBABAABCCCBBCACBC", "CACCCBBCCBACCCBBABABCCCBCC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ACACABAABCCCBACBBCBBABCCACCBBAACBBACCBBCCACBCCAABABCACCCABBCAACAACACBBCAABBCBCAABBABBCAAACABBCCCBACBAABAAAACCABCCCBABBBBABAABCCCBBCACBCABBCAAACBCAACAABCCACAAABACCBCACCCBBCCBACCCBBABABCCCBCCAAAAACBACACBAAABABBABCBCABABABCBCCBACCACBCCBBBBCCCACCAAACCBCAABAACBAABCCAAACACBBCAAAABBBBBACCABBABABBBBBCABB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"CBABCCACBCACCBBBABBBAACA", "BBBACCABBCAAAABCAABBAABCCCAACABBCACB", "AACBCABCCAAABAABBABAABBCCCAAABAAAABAAB", "ABCBBBAACAABACBBABCCABCC", "BBBAABACCBABBCBCCCBBAABCB", "CCCCACBBCABCCCCBCCBACBBCACCCCAABABCCCAA", "BABABBBCCCBAAACCCACBCAC", "BABBBAACA", "CBAACABAACACBC", "CA", "BBCCCAABABBBBCCCBAC", "AAAABAABBACBABCAACBAACACCABABABACABCCCCCCBACAAABAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABABBBCCCBAAACCCACBCACBAACABAACACBCBABCCACBCACCBBBABBBAACABBBAABACCBABBCBCCCBBAABCBBBAACAABACBBABCCABCCCCACBBCABCCCCBCCBACBBCACCCCAABABCCCAACBCABCCAAABAABBABAABBCCCAAABAAAABAABBACBABCAACBAACACCABABABACABCCCCCCBACAAABACBBBACCABBCAAAABCAABBAABCCCAACABBCACBBCCCAABABBBBCCCBAC";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"AAABCBBBCABABCACCBABCAAABCABB", "BBBCBAAAAC", "ACBBCCACBBB", "CBBCCCCBBCCCACBABAABCB", "BCCBCCBACCBBCCCACABCB", "CCBACCBBCCCAC", "BC", "CBBCCBABCAAAABAABAA", "BBACBABACBBCBBBBBABBAC", "BACBBBBCCA", "CBABCCBCAACCAACBCBBBAACAC", "BABCCAACCACCCCCBCCACBACCABCCACCACCAACBCA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABCCAACCACCCCCBCCACBACCABCCACCACCAACBCABCCBCCBACCBBCCCACABCBABCCBCAACCAACBCBBBAACACBBCCACBBBCBAAAACBBCCCCBBCCCACBABAABCBBCCBABCAAAABAABAAABCBBBCABABCACCBABCAAABCABBACBABACBBCBBBBBABBACBBBBCCA";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"CBBCCCCBACBBCABCCABBCCAABBACBACACCCAAA", "BBCBBABCBAACAACCBAACCCCCAC", "ABAA", "AACBBCCBCCCCACABCAACCB", "CBCACAACBCBCCAACCBBCB", "CCCABBACAACCABABCCACBCABCABAABBBBBBACCBBBAACB", "A", "ABBCABBABAABBACBCBCABBBACABCCAAAABABACAABBCACA", "ABACCCBAAACBBBABBCAABCABCBAABCBBABBABACCAC", "BACBBCABCCABBCCAABBACBACAC", "BAACCCCCACBABBAAAACBCABBCAAACCBCCBACBCAACBCCBCCCC", "CCCCABBACAACCA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACCCBAAACBBBABBCAABCABCBAABCBBABBABACCACBCACAACBCBCCAACCBBCBBABCBAACAACCBAACCCCCACBABBAAAACBCABBCAAACCBCCBACBCAACBCCBCCCCABBACAACCABABCCACBCABCABAABBBBBBACCBBBAACBBCCBCCCCACABCAACCBBCCCCBACBBCABCCABBCCAABBACBACACCCAAABBCABBABAABBACBCBCABBBACABCCAAAABABACAABBCACA";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"ABCCCBBBCABBCACBCCCCBBCABBBAAACCAC", "ACAAAABABCCCCBCCBCCCBACCABCCACCCB", "ACB", "AAAABABCCCCBCCBCCCB", "BCBBCBCACBCABCBAAACCABCCCBB", "ABCBCCBBAABCABCCC", "CCCCBAACAAAACCAACCCAACCCCABCBCBCBCAACCBCABBBCACC", "ABBAACBB", "CAB", "BCBBCABBCBBCBBCBAABABCAABABCCCABAABC", "ACABAAACBAAB", "CBCCCBABBB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ACAAAABABCCCCBCCBCCCBACCABCCACCCBCCCBABBBCBBCBCACBCABCBAAACCABCCCBBBCABBCACBCCCCBBCABBBAAACCACABAAACBAABBAACBBCBBCABBCBBCBBCBAABABCAABABCCCABAABCBCCBBAABCABCCCCBAACAAAACCAACCCAACCCCABCBCBCBCAACCBCABBBCACC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"CCCACCCBAABAAABBABBB", "CBA", "BACBACABAAACBAAABAACCAABBBABABABAAAACACABBACCBACCC", "CAAACBACAABCCCAAA", "CAAAAABACCBAABBABBCACBBBBCACBABABCACCB", "BBB", "A", "CAAACB", "CACAAACCBABBCCBBCCCBBCBAAAABBABAAC", "C", "CC", "CAABCBCAAACAACACACACBCBACACABCBAACBC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CAABCBCAAACAACACACACBCBACACABCBAACBCACAAACCBABBCCBBCCCBBCBAAAABBABAACAAACBACAABCCCAAAAABACCBAABBABBCACBBBBCACBABABCACCBACBACABAAACBAAABAACCAABBBABABABAAAACACABBACCBACCCACCCBAABAAABBABBB";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"CACBAACACCBCABCBCBCCBCCACACACABBCCA", "AACACCCBAAB", "ABACCBACB", "CCCBACCAABACCACAC", "AAACB", "CCCCACABAAABCABCCCACAAACACCBBCCCCB", "CCAAABACBBBCBACCABCBABCBBBCBCCCA", "AA", "CCABCCCABABB", "CBBCBBBABAABA", "ACACAABCCBAAABBCACAABABAABBABBACCBCAAA", "ABCABCCCACAAACACCBBCCCCBACACBBAAAABCBBCBAACAAABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CACBAACACCBCABCBCBCCBCCACACACABBCCAAABACBBBCBACCABCBABCBBBCBCCCABCCCABABBCCCBACCAABACCACACAABCCBAAABBCACAABABAABBABBACCBCAAACBBCBBBABAABAACACCCBAABCCCCACABAAABCABCCCACAAACACCBBCCCCBACACBBAAAABCBBCBAACAAABACCBACB";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"ABCAABBCCBABAAAABBBCCABC", "BCCABCBCCCBCACA", "BCCCBCACABBCBBACCBCBCABACBBBBBCACBABB", "BABBBCABCCACABABA", "ABBACBBCCABBCCCCCBBCAABACACCACCBABBCAC", "ACBCBABCAAAABBBACAAA", "AAABBBACAAACCCCAACBACCCABABBBAAC", "CA", "CCBBBCCABCBCCAABBABCCCBCAACABA", "CCBCCBBABCCABACCA", "ABACACBABBABBAABBBBBCAABBCABACCCABBC", "BCCCBCAACABAAABCCBCAAACCCCABCCBAAABBBAAABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBACBBCCABBCCCCCBBCAABACACCACCBABBCACBCBABCAAAABBBACAAACCCCAACBACCCABABBBAACCBBBCCABCBCCAABBABCCCBCAACABAAABCCBCAAACCCCABCCBAAABBBAAABABCAABBCCBABAAAABBBCCABCBCCCBCACABBCBBACCBCBCABACBBBBBCACBABBBCABCCACABABACACBABBABBAABBBBBCAABBCABACCCABBCCBCCBBABCCABACCA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"BABBBCCAABCAB", "CABABABBBBBABCAABBABCCCAACCBCCCBBCCAAAAACCC", "ABACC", "CACACCCCCBBCBBCAACBCC", "CCCCACBACCAACAC", "BBABCCBCCBCBAAACBABCBAACCAAABBCCCBCABABABBBBBA", "BABCBBACABACCABCABABAABAACAABABAAC", "CBBCABAABACBCCCCBCACBCBABBABCCBCCBCBAAACBABCBAACCA", "BBCAAACBABCCBBBCAC", "ACCBCAAACACACACBCBBBCCBACACACACAACACACCBAAB", "AACACACACBCBBB", "CABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABBBCCAABCABABCBBACABACCABCABABAABAACAABABAACBBCABAABACBCCCCBCACBCBABBABCCBCCBCBAAACBABCBAACCAAABBCCCBCABABABBBBBABCAABBABCCCAACCBCCCBBCCAAAAACCCCACBACCAACACCBCAAACACACACBCBBBCCBACACACACAACACACCBAABBCAAACBABCCBBBCACACCCCCBBCBBCAACBCC";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"CCBAACABBAA", "BBACCABCB", "CABCCBA", "BAACABB", "CABABBBBCBCBCAAABBBAACACCCBBBAACBBBBACCACBBA", "ABCCABABBACACCBCAC", "CCABAABCABB", "BC", "CACACCACACCAABBBBABAACCABCBBBCBCCCABACACABCCBB", "B", "AABAA", "ABBBABCBBABCBBACCACABABBAACACBCA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CABABBBBCBCBCAAABBBAACACCCBBBAACBBBBACCACBBACCABCBCCABAABCABBBABCBBABCBBACCACABABBAACACBCABCCBAACABBAABAABCCABABBACACCBCACACCACACCAABBBBABAACCABCBBBCBCCCABACACABCCBB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"ACCCCBCABABCCBBABBBACCCBBBBBC", "BCCBBACBCCB", "BCCCA", "BAABCACBCBBCAACAAAABCABCBCACCBCBBBAAACCCBCCAA", "AACAC", "CACACCBBBCCCBCBBACAABBCAAACBACAABACCBCACBCBB", "CCAABB", "BACABABCCCACBCACAABCBAACCCCCCACCBAABCACBCBBCAACAAA", "AAACCCBCCAABBCCAABCCABCBBACCACBABBCBAC", "BBCCABBBBCCAAABACACBAAABBCCBCAB", "BBCBCCBACBCACAABBBBCABBACCBCCCCCCBBBCBACCACAACAB", "CBBAACBBAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AACACACCBBBCCCBCBBACAABBCAAACBACAABACCBCACBCBBAACBBACABABCCCACBCACAABCBAACCCCCCACCBAABCACBCBBCAACAAAABCABCBCACCBCBBBAAACCCBCCAABBCCAABCCABCBBACCACBABBCBACCCCBCABABCCBBABBBACCCBBBBBCBCCBACBCACAABBBBCABBACCBCCCCCCBBBCBACCACAACABBCCABBBBCCAAABACACBAAABBCCBCABCCBBACBCCB";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"BBBACCCAAABCACACABBCCBCCAACBAAAABAACABBCAACACCBB", "ACBBBCCCBACCABCCCCBCABABABCBCCAAACCACBABBABBAACACC", "ABBCCAAACCBCCBBCCAABCBBBACBCCACBBBCCCBACCABCCCCBCA", "BABBBAAACCBAACBACBCCCACCBBBAACAACABBCBCCCBCB", "BBAACACCABABABCCBBCACCCCCABACCAABACBCAACAAB", "BCBCCBBBACCCAAABCACACABBCCBCCAACBAAAABAA", "ACBABBABBAACACCABABABCCBBCACCCCCABACCAAB", "CCAAABCACACABBCCBCCAACBAAAABAACABBCAACAC", "BBABBAACACCABABABCCBBCACCCCCABACCAABACBCAACA", "BBABBBAAACCBAACBACBCCCACCBBBAACAACABBCBC", "CBBBACBCCACBBBCCCBACCABCCCCBCABABABCBCCAAACCACB", "BAACBACBCCCACCBBBAACAACABBCBCCCBCBCACCABAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCAAACCBCCBBCCAABCBBBACBCCACBBBCCCBACCABCCCCBCABABABCBCCAAACCACBABBABBAACACCABABABCCBBCACCCCCABACCAABACBCAACAABCBCCBBBACCCAAABCACACABBCCBCCAACBAAAABAACABBCAACACCBBABBBAAACCBAACBACBCCCACCBBBAACAACABBCBCCCBCBCACCABAAA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"BCAAABCCCBAABAACAAABABCCAABAACACBBBBBCCCCACAAB", "AAABCBBBCBACBBCBCCCBBCAAABCCCBAABAACAAABABCCAAB", "ACACBBBBBCCCCACAABACCCCC", "ABBBACACBBBCBAACAACAAAABCBBBCBACBBCBCCCBBCAAA", "CCCBABBBCACBAACBAABCBACACCAACBABBCCCCCACCBABBCAA", "BACACBCBABABACAABBBBABCACCBBBBACBAAACAABBBACACBBB", "AAACAACACABBBCCAAACCCBCCACCAACABACACBCBA", "BAABCBABBBCBCBABABACBABAABCCCBABBBCACBAACBAABCB", "BAACBAABCBACACCAACBABBCCCCCACCBABBCAAAABBCCCCBCBB", "BCCCCBCBBBACBBBAACBABCAAACAACACABBBCCAAACC", "ABBBCCAAACCCBCCACCAACABACACBCBABABACAABBBBABCACCBB", "BAACBABCAAACAACACABBBCCAAACCCBCCACCAACABACA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BAABCBABBBCBCBABABACBABAABCCCBABBBCACBAACBAABCBACACCAACBABBCCCCCACCBABBCAAAABBCCCCBCBBBACBBBAACBABCAAACAACACABBBCCAAACCCBCCACCAACABACACBCBABABACAABBBBABCACCBBBBACBAAACAABBBACACBBBCBAACAACAAAABCBBBCBACBBCBCCCBBCAAABCCCBAABAACAAABABCCAABAACACBBBBBCCCCACAABACCCCC";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"ABCABCBACBCABAABAAAABCBABCCCACACCBBCAABBBAAACA", "BCBAACABCBBAAABCCACAABAACACBAAAABABBBBBBAAACA", "ABABACBCBCBBBCABAACCACBBABBACBBCCCCCAACBB", "BAABAC", "CCABBCACBCCCCBABCABABCABCBACBCABAABAAAABCB", "AABCACABABACBCBCBBBCABAACCACBBABBACBBCCCCCAAC", "AABCCCCCBCBCBBAABBAAACCABCCBCBCCACACBBCBAACABC", "AAABCCACAABAACACBAAAABABBBBBBAAACACBAABA", "BBBBBAAACACBAABAC", "BBCBAACABCBBAAABCCACAABAACACBAAAABABBBBBBAAACACB", "AABAC", "CCCCCBCBCBBAABBAAACCABCCBCBCCACACBBCBAACA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCCCCCBCBCBBAABBAAACCABCCBCBCCACACBBCBAACABCBBAAABCCACAABAACACBAAAABABBBBBBAAACACBAABACCABBCACBCCCCBABCABABCABCBACBCABAABAAAABCBABCCCACACCBBCAABBBAAACAABCACABABACBCBCBBBCABAACCACBBABBACBBCCCCCAACBB";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"BBAACCBABABBAAABBBCCBBABBBBCACBCCABBACABAACAACBA", "ACCACCBCBAAABACBCACCBCBCBCABBACABAACABCA", "CCBABBABBCABCCBAACBACCACABBCBCABABCCCBCCBABAC", "BABACBCABAABCCABCBAACCBCBCACCABCBAACACCCCABACAAAB", "CBABCBBBCBBCCAAACABBACBACCBABBBAABBBCCCBABBABBCAB", "AAACCACCBCBAAABACBCACCBCBCBCABBACABAACABC", "AACBABABAACBAAACBABCBBBCBBCCAAACABBACBACCBABBBAAB", "ABBBAABBBCCCBABBABBCABCCBAACBACCACABBCBC", "CBBCCAAACCACCBCBAAABACBCACCBCBCBCABBACABAACABCACCC", "BABABBAAABBBCCBBABBBBCACBCCABBACABAACAACBABABAACB", "CBBCCAAACABBACBACCBABBBAABBBCCCBABBABBCABCCBAACBAC", "BBCCCBABBABBCABCCBAACBACCACABBCBCABABCCCBCCBABACB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBAACCBABABBAAABBBCCBBABBBBCACBCCABBACABAACAACBABABAACBAAACBABCBBBCBBCCAAACABBACBACCBABBBAABBBCCCBABBABBCABCCBAACBACCACABBCBCABABCCCBCCBABACBCABAABCCABCBAACCBCBCACCABCBAACACCCCABACAAABCBBCCAAACCACCBCBAAABACBCACCBCBCBCABBACABAACABCACCC";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"ABBAABAAAACBABCBBCABAABCCABBABCBAAAABACBA", "BACBABBCCCCBAACCABBBACBBACACCAABAAACBCCBCBBACBB", "CCCCBABBAABAAAACBABCBBCABAABCCABBABCBAAAABAC", "CCAAABACBABAA", "BACBACCCCACACAAAABABABCCABABCAAACACBCCACAACACABABB", "BCCCBCCAAABBCCACCCACBBABCCACCBACBABBCCCC", "BABABBCABABACBACCCCACACAAAABABABCCABABCAAACA", "ABBCCCCBAACCABBBACBBACACCAABAAACBCCBCBBACBBCAACBC", "ACCCCACACAAAABABABCCABABCAAACACBCCACAACACA", "BAACABCACBACCAAABACBABAA", "ACABBACCAAABCBCABBABABBCABABACBACCCCACAC", "BBACACCAABAAACBCCBCBBACBBCAACBCCBCCBACAABABBACABBA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCCBCCAAABBCCACCCACBBABCCACCBACBABBCCCCBAACCABBBACBBACACCAABAAACBCCBCBBACBBCAACBCCBCCBACAABABBACABBACCAAABCBCABBABABBCABABACBACCCCACACAAAABABABCCABABCAAACACBCCACAACACABABBCCCCBABBAABAAAACBABCBBCABAABCCABBABCBAAAABACBAACABCACBACCAAABACBABAA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"CCCCBCABBCBACCAABCCCCCAACCAAAACCCCACAABBA", "CBBBCCAAABBCBBACBBBCABBBAABABAABCACBBBABCAAAAABCB", "BACBCBBAABCCAAACCCBBCAABBCBABCABCBABABCA", "CAAAABCCBABACBACABCCACBCAAACCCCCBCABBCBAC", "BBCBAACAAABACBCBBAABCCAAACCCBBCAABBCBABCABCBABAB", "BBCCBABBCAACCACBAACCACACAACCACAAACACBABBA", "ACCACBAACCACACAACCACAAACACBABBAACBBCC", "CACBBBABCAAAAABCBBABACCBCAAACCBCCCBBCBCAABCAAAAB", "BBABCAAAAABCBBABACCBCAAACCBCCCBBCBCAABCAAAABCCBABA", "CBBBCABBBAABABAABCACBBBABCAAAAABCBBABACC", "BBBABAABAAAACBBBBCACABBCABBBCCBABBCAACCACBAACC", "AABAAAACBBBBCACABBCABBBCCBABBCAACCACBAACCACAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABAABAAAACBBBBCACABBCABBBCCBABBCAACCACBAACCACACAACCACAAACACBABBAACBBCCBBBCCAAABBCBBACBBBCABBBAABABAABCACBBBABCAAAAABCBBABACCBCAAACCBCCCBBCBCAABCAAAABCCBABACBACABCCACBCAAACCCCCBCABBCBACCAABCCCCCAACCAAAACCCCACAABBABBCBAACAAABACBCBBAABCCAAACCCBBCAABBCBABCABCBABABCA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"BAACBBBACCAACCCCCAACBBABBACAACCABACCABBAAB", "ACCCCCCACCBCBBABBABACCACBCA", "ABBBBCBBCACCBABACABBCACCCAACCACBCBABCABBAB", "CBABBCABBABCCBBCABAAACACBAABCACBCBBCCABBCB", "CBCAABCABAABBCCCBBCAAACCBAABCCCCCACBAACCCCCCACCBCB", "CCCBBBBBBACBCBAABBBABBACBABBCABBABCCBBCABAAAC", "BBCBBCACCBABACABBCACCCAACCACBCBABCABBABCBBB", "BCAAACCBAABCCCCCACBAACCCCCCACCBCBBABBABA", "ACBCCCBCCBCCAACABBBBCBBCACCBABACABBCACCCAACC", "BBCBBBCCAACBCAABCABAABBCCCBBCAAACCBAABCCCCCACBAAC", "BCBAABCCCCBBBBBBACBCBAABBBABBACBABBCABBAB", "BBBBCBBCACCBABACABBCACCCAACCACBCBABCABBABC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBCCCBCCBCCAACABBBBCBBCACCBABACABBCACCCAACCACBCBABCABBABCBBBAACBBBACCAACCCCCAACBBABBACAACCABACCABBAABCBAABCCCCBBBBBBACBCBAABBBABBACBABBCABBABCCBBCABAAACACBAABCACBCBBCCABBCBBBCCAACBCAABCABAABBCCCBBCAAACCBAABCCCCCACBAACCCCCCACCBCBBABBABACCACBCA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"ACACCABACCCBAABCBBCCACCBBCCBBACBAACCCBBCAAABAA", "BBCCACACCCBBABBABBAABABCAACCBBCABCBBBAABAC", "AABBBBCBABABCCCBCBABCCCCACAABBABAABCBCBBA", "ACCBBCCBBACBAACCCBBCAAABAAABBBBCBABABCCCBCB", "ABAACBBBCCBACBA", "BACBBACABCBACCACAACABBBCACACCBCCBCBABAACB", "BCAABACBAACAABCCCCCBCACACCABACCCBAABCBBCCACC", "AACAAABAAACCCBAABBABCABACBBABCAABACBAACAA", "CBA", "BCBCBBABBAAABCACBCAABAAACCBACBBACABCBACCACAACAB", "AACCCBBCAAABAAABBBBCBABABCCCBCBABCCCCACAAB", "CCACAABBABAABCBCBBABBAAABCACBCAABAAACCBAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AACAAABAAACCCBAABBABCABACBBABCAABACBAACAABCCCCCBCACACCABACCCBAABCBBCCACCBBCCBBACBAACCCBBCAAABAAABBBBCBABABCCCBCBABCCCCACAABBABAABCBCBBABBAAABCACBCAABAAACCBACBBACABCBACCACAACABBBCACACCBCCBCBABAACBBBCCBACBABBCCACACCCBBABBABBAABABCAACCBBCABCBBBAABAC";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"AABCCABCCCBCCABCCBABCCACABBBBBACABBABBBA", "BBCAAACCBBBBBBBBCAACCAACACCCAAABBBABCBCBBCBBBCAB", "CCBBAABCCABCCCBCCABCCBABCCACABBBBBACABBAB", "BABCCACABBBBBACABBABBBABAACBAABBAACCBABACABBC", "BABCCACABBBBBACABBABBBABAACBAABBAACCBABA", "CBBBCCACCACABBBCAAAABCCCAACBBACAAACCCABBA", "CBBCBBCABCCBBAABCCABCCCBCCABCCBABCCACABBBBBA", "BCABCCBBAABCCABCCCBCCABCCBABCCACABBBBBACABBABB", "BBBABCBCBBCBBBCABBCAACBBBCCACCACABBBCAAAA", "ABBBBBCAACCAAABAABABCCBCBBCCBCABBCBBC", "BBCAAAABCCCAACBBACAAACCCABBAAAACCABAACBBBA", "BCBCBCACAACCCCCBCBBCAAACCBBBBBBBBCAACCAACAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBBCAACCAAABAABABCCBCBBCCBCABBCBBCBBCABCCBBAABCCABCCCBCCABCCBABCCACABBBBBACABBABBBABAACBAABBAACCBABACABBCBCBCACAACCCCCBCBBCAAACCBBBBBBBBCAACCAACACCCAAABBBABCBCBBCBBBCABBCAACBBBCCACCACABBBCAAAABCCCAACBBACAAACCCABBAAAACCABAACBBBA";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"CACCCABBBAAACCAABACCCBBBCCCCCAABCBCBCACC", "ACABACCACBACCACABCCBACBAAABBACBABCBBBCACAC", "AAAAAABCBBBBBBABBCCAAAAAAABCBCBCAACABABABAC", "BBCAABCCCAABCACBCCCACCACAABBBBCBCACCCABBBAAAC", "CCACAABBBBCBCACCCABBBAAACCAABACCCBBBCCCCCAABCB", "AAACCAABACCCBBBCCCCCAABCBCBCACCCCCCBACBBAAABACBBAC", "ACABBACBACBABACBBCAABCCCAABCACBCCCACCACAABBB", "CCBCBCCCBBABBCCCCBABABABCABCBCACAABCBBCCBAB", "BBBABBCCAAAAAAABCBCBCAACABABABACCCCCACBBBA", "CACACBBABCAACCABCBBCABCCBCABACABBACBACBABACBBCAAB", "BABCABCBCACAABCBBCCBABAABAAAAAABCBBBBBBAB", "ABBACBACBABACBBCAABCCCAABCACBCCCACCACAABBBBCB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ACABACCACBACCACABCCBACBAAABBACBABCBBBCACACBBABCAACCABCBBCABCCBCABACABBACBACBABACBBCAABCCCAABCACBCCCACCACAABBBBCBCACCCABBBAAACCAABACCCBBBCCCCCAABCBCBCACCCCCCBACBBAAABACBBACCBCBCCCBBABBCCCCBABABABCABCBCACAABCBBCCBABAABAAAAAABCBBBBBBABBCCAAAAAAABCBCBCAACABABABACCCCCACBBBA";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"AAAABCCCCCBACCCAAABABCCBAAABACCABBCCABACAC", "CABBBBABCBCCBBCABCCCABACAAACABBACCCBABCCCA", "CCBBBCBAABAABAABCBBBCBBCCCABC", "BABCACBBBABACBACAABBACABCACCBCACAACCBABBBAAC", "BCABCACBBBBCABCBCACBBCBAAAABCCCCCBACCCAAABAB", "CABBCCABACACCBACAAAAACCCABACABABCACBBBABACBACAABBA", "ABCBCACBBCBAAAABCCCCCBACCCAAABABCCBAAABAC", "BBCCBBBCBAABAABAABCBBBCBBCCCABC", "BBABACABBBBAACCCAACAACACBCAACACCCABACCBBBBBABCA", "BBBBABCBCCBBCABCCCABACAAACABBACCCBABCCCABACCABAA", "BCABCBCACBBCBAAAABCCCCCBACCCAAABABCCBAAABACC", "BCBBBCBBCCCABC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABACABBBBAACCCAACAACACBCAACACCCABACCBBBBBABCABBBBABCBCCBBCABCCCABACAAACABBACCCBABCCCABACCABAABBCCBBBCBAABAABAABCBBBCBBCCCABCABCACBBBBCABCBCACBBCBAAAABCCCCCBACCCAAABABCCBAAABACCABBCCABACACCBACAAAAACCCABACABABCACBBBABACBACAABBACABCACCBCACAACCBABBBAAC";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"CCCBABCBCAABBCCABCABACBCACBCBACBAAAAABBABCC", "BBAABBACBACCBCBBCBBBBCBBBCCAAABBBCCCBAABBABB", "ACBACCBCBBCBBBBCBBBCCAAABBBCCCBAABBABBCBC", "BBCBBBBCBBBCCAAABBBCCCBAABBABBCBCBCCCBAB", "CBBAABCABBABCBBBBACAACBBBCCBACAABBCCCACABBBBACCB", "AAAACCCACACCCCBBAABCABBABCBBBBACAACBBBCCBACA", "BBBCCBACAABBCCCACABBBBACCBCAACCBCACACABACAA", "BAABCABBABCBBBBACAACBBBCCBACAABBCCCACABBBBACCB", "ABBBBACCBCAACCBCACACABACAAACBCCABACBABBACCB", "AACBCBACCCCAACCCABBBBBAABBACBACCBCBBCBBBBCBBBC", "BAABBACBACCBCBBCBBBBCBBBCCAAABBBCCCBAABBABBCBCBCC", "CAACBBAABCCACBBCACACCCCBCCAABAACCABBBCACACC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAACCCACACCCCBBAABCABBABCBBBBACAACBBBCCBACAABBCCCACABBBBACCBCAACCBCACACABACAAACBCCABACBABBACCBAACBCBACCCCAACCCABBBBBAABBACBACCBCBBCBBBBCBBBCCAAABBBCCCBAABBABBCBCBCCCBABCBCAABBCCABCABACBCACBCBACBAAAAABBABCCAACBBAABCCACBBCACACCCCBCCAABAACCABBBCACACC";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"CBCCABBCACCCBBCCBCBBCCABAAABCAACBBBACACAC", "BCACBACBBBBCCBACACABBCCBCCCCCACBACBABBBAB", "BCBBBCAAABCBCACCBCAAAACBABBBCBBACAACCACCBCCABBCAC", "ACABAACCAABABCABCACAACACBCACBACBBBBCCBACACABBCC", "CCAACCBBCBBCABAABCCABACAAACCBCBCBBABAAAABAABBAC", "CCCBCCCACBCCAAACCAACCBBCBBCABAABCCABACAAACCBCBC", "ABAABBACAABBCCCCACBCCBAACBCCAAABCAACABAA", "BCBBACAACCACCBCCABBCACCCBBCCBCBBCCABAAABC", "CAACCACCBCCABBCACCCBBCCBCBBCCABAAABCAACBBB", "CBACABCBABBBAABABABCBBBCAAABCBCACCBCAAAACBABBBCBBA", "ABCBABBBAABABABCBBBCAAABCBCACCBCAAAACBABBBC", "CBCBBABAAAABAABBACAABBCCCCACBCCBAACBCCAAABCAACA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CBACABCBABBBAABABABCBBBCAAABCBCACCBCAAAACBABBBCBBACAACCACCBCCABBCACCCBBCCBCBBCCABAAABCAACBBBACACACCCBCCCACBCCAAACCAACCBBCBBCABAABCCABACAAACCBCBCBBABAAAABAABBACAABBCCCCACBCCBAACBCCAAABCAACABAACCAABABCABCACAACACBCACBACBBBBCCBACACABBCCBCCCCCACBACBABBBAB";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"BCABACAACCACABABACCCCAAACCBCBCBCBCCBCBABBBB", "CCACCBCBBCBACCBACBCACCBBAACCCBAABCACABAA", "CBCCABBABACBABACBBBAACABCCCACBACABABBABCCBBC", "ABABACAABCCBCAACACBCCCBAAAABABBBCBAAABCABACAAC", "ACCCBACBBCBBCACACCBACABCCCCABCCCAACABAAAACBBCBCCC", "BCBCCACCBCBBCBACCBACBCACCBBAACCCBAABCACABAABAABC", "CCCABCCCAACABAAAACBBCBCCCABCCAACABACCBBBBCCCA", "CBCCBCBABBBBBAABBA", "BABBBBBAABBA", "CABCCCACBACABABBABCCBBCCCBBABABACAABCCBCAACACBCCC", "CAABCCBCAACACBCCCBAAAABABBBCBAAABCABACAACCACAB", "CCCAACABAAAACBBCBCCCABCCAACABACCBBBBCCCAABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BCBCCACCBCBBCBACCBACBCACCBBAACCCBAABCACABAABAABCBCCABBABACBABACBBBAACABCCCACBACABABBABCCBBCCCBBABABACAABCCBCAACACBCCCBAAAABABBBCBAAABCABACAACCACABABACCCCAAACCBCBCBCBCCBCBABBBBBAABBACCCBACBBCBBCACACCBACABCCCCABCCCAACABAAAACBBCBCCCABCCAACABACCBBBBCCCAABA";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"ACCABBABCBABBABBACAACCACCAABBCACABCBACCBABABBCCAC", "BBAAAACCABBABCBABBABBACAACCACCAABBCACABCBACC", "CACABCBACCBABABBCCACBABCAABCAACACABBACCAAC", "BAABCBABAABAACBCCCBAACBACABBCCACAABBAAB", "BACCBBBCAABBABAABBAABBBCABACCACACAACABCBAACB", "CCABBABCBABBABBACAACCACCAABBCACABCBACCBABABBCC", "BABBCCACBABCAABCAACACABBACCAACBBACACBCCBB", "BABACAACACBBBAACAAACABAACCBCCCBBCBACBCBACAAACCCCBB", "AACBCCCBAACBACABBCCACAABBAAB", "CCCABBCACCCAABCBCCABCBBBBAAAACCABBABCBABBABBACA", "AACACABBACCAACBBACACBCCBBAAAABAABCBABAAB", "CBCCCBBCBACBCBACAAACCCCBBBCABBCAABCACBACCBBBCAABBA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCABBCACCCAABCBCCABCBBBBAAAACCABBABCBABBABBACAACCACCAABBCACABCBACCBABABBCCACBABCAABCAACACABBACCAACBBACACBCCBBAAAABAABCBABAABAACBCCCBAACBACABBCCACAABBAABABACAACACBBBAACAAACABAACCBCCCBBCBACBCBACAAACCCCBBBCABBCAABCACBACCBBBCAABBABAABBAABBBCABACCACACAACABCBAACB";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"BB", "CCBBAACABCBCABAACCACABAAAACBAAABCCCCCCBCBACBBA", "CABABBAABCBAACBCBBCCBABBCACBACCCAACAACCC", "BCCBBBCCABABCBABCCBCAACBBACBCCAAACBABABACACCBAABB", "BCABAACCACABAAAACBAAABCCCCCCBCBACBBABACBBBBCA", "BBCBCCCBCCAAABBACABAACABABBAABCBAACBCBBCCBABBCACB", "CBBABACBBBBCACCAABBAAACACACCACCBCAABCCAABBBCCBBBA", "CCBBAABCBBBCBBCBCCCBCCAAABBACABAACABABBA", "ACCCBABCCCAACBABACAAABACBCAABBBCBACABAACACACCAAAB", "CACCCBABCCCAACBABACAAABACBCAABBBCBACABAACAC", "BBCBACABAACACACCAAABCCCABCCBCCBBBCCABABCBABCCBCAAC", "AABCCCABCCBCCBBBCCABABCBABCCBCAACBBACBCCAAACBAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CACCCBABCCCAACBABACAAABACBCAABBBCBACABAACACACCAAABCCCABCCBCCBBBCCABABCBABCCBCAACBBACBCCAAACBABABACACCBAABBCCBBAABCBBBCBBCBCCCBCCAAABBACABAACABABBAABCBAACBCBBCCBABBCACBACCCAACAACCCBBAACABCBCABAACCACABAAAACBAAABCCCCCCBCBACBBABACBBBBCACCAABBAAACACACCACCBCAABCCAABBBCCBBBA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"BCBABBBCAABBBABCACCBBBACAAAABBCABCABCABBACBACB", "BAAABAABBBBCBBCABBABBBC", "ABBBABCACCBBBACAAAABBCABCABCABBACBACBCBCBAABABA", "ABCBAABBACCBABCAABCCAABCBABACABABBBCACAAB", "ACABBCBBCACCABCAABABBCBACBBCBCBACABCBABBABCBA", "CCACABBCBBCACCABCAABABBCBACBBCBCBACABCBABBAB", "AABBCBABBBCAABBBABCACCBBBACAAAABBCABCABCABB", "ABABBBCACAABBBACBBABBCCAAAAACCCCBBBCBABACBCABAAACB", "BBABBBC", "ABCBABACABABBBCACAABBBACBBABBCCAAAAACCCCBBBCBABAC", "CCBBBACAAAABBCABCABCABBACBACBCBCBAABABAABCC", "BCABBABBBC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBCBABBBCAABBBABCACCBBBACAAAABBCABCABCABBACBACBCBCBAABABAABCCACABBCBBCACCABCAABABBCBACBBCBCBACABCBABBABCBAABBACCBABCAABCCAABCBABACABABBBCACAABBBACBBABBCCAAAAACCCCBBBCBABACBCABAAACBAAABAABBBBCBBCABBABBBC";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"BBCBBBCCBCCABACABBCBACAABABCBCACCBBBCCABAABCAC", "ACAABCA", "BCA", "BABAABCABBCBAABBBACCCCAABACCBCCBBBAAAABCACAAB", "CBBCCCBBBBABBACABBCBCABBCBABAABCABBCBAABBBACCCCA", "BCCABAABCACBBCABCBACABAACAACBBCCCBBBBABBACABBCBCAB", "BBABBABAAACCBCBCCBCBCACACBBAACABABABABCCACAA", "CAABACCBCCBBBAAAABCACAABBBCABBBCCBCAAAACCAA", "BBCBACAABABCBCACCBBBCCABAABCACBBCABCBACABA", "ACABBCBACAABABCBCACCBBBCCABAABCACBBCABCB", "BAACAACBBCCCBBBBABBACABBCBCABBCBABAABCABBCBAABBBAC", "CACBBAACABABABABCCACAAABCCCBABBBCBBBCCBCCABAC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABBABAAACCBCBCCBCBCACACBBAACABABABABCCACAAABCCCBABBBCBBBCCBCCABACABBCBACAABABCBCACCBBBCCABAABCACBBCABCBACABAACAACBBCCCBBBBABBACABBCBCABBCBABAABCABBCBAABBBACCCCAABACCBCCBBBAAAABCACAABBBCABBBCCBCAAAACCAACAABCA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"CABCCCBCCABABACBACBBBBCCCAAABBACACABCBCCB", "BBCBABCAACACBABCCBBCABAACBACACCAACBCCAAACCCC", "CCCBABABBBCABCABBCBBAACABBABBAABBCBCCACBCCABCAABA", "CBCACCCABCCCBCCABABACBACBBBBCCCAAABBACACABCBCCBCAB", "CCBAAABCACAAACBBCCBCACCCABBCBABCAACACBABCCBBCABAAC", "CABBCBABCAACACBABCCBBCABAACBACACCAACBCCAAAC", "ACBBCCBCACCCABBCBABCAACACBABCCBBCABAACBACACC", "BACABBCBACBBCBCACBCACCCABCCCBCCABABACBACBBBBCCCAA", "BAACACCBBBCABACBCCBBBCAACBCABACABBCBACBBCBCAC", "CCCABCCCBCCABABACBACBBBBCCCAAABBACACABCBCCBCABC", "CCBABCBCBAABBCB", "BCCABCAABABABABBACBCCCBAAABCACAAACBBCCBCA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BAACACCBBBCABACBCCBBBCAACBCABACABBCBACBBCBCACBCACCCABCCCBCCABABACBACBBBBCCCAAABBACACABCBCCBCABCCCBABABBBCABCABBCBBAACABBABBAABBCBCCACBCCABCAABABABABBACBCCCBAAABCACAAACBBCCBCACCCABBCBABCAACACBABCCBBCABAACBACACCAACBCCAAACCCCBABCBCBAABBCB";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"BCAAACACBBBBABCCABACBABBBCBABBCCAABCBCCBBACA", "AABCBCAABBBBBBAAAAAACCCABBBACCAABAACCBACAA", "AAAAACCCABBBACCAABAACCBACAABCAAAAACBBAACAACACACAC", "BBACCAABAACCBACAABCAAAAACBBAACAACACACACAABCCCACC", "CABCACBBCACCCCCBBACABCBCBABABAABABCCCCBAACBCBBAC", "ACAACACACACAABCCCACCCBABCAB", "AABBBBBBAAAAAACCCABBBACCAABAACCBACAABCAAAA", "ABBBBBBAAAAAACCCABBBACCAABAACCBACAABCAAAAACB", "CCABACBBBCCCCBACBBBBBBBACCAAABCBCAABBBBBBAAAAA", "ACBABBBCBABBCCAABCBCCBBACAACBCBBAABAABBB", "CAACBCBBAABAABBBBBBCABCCCBACABCACBBCACCCCCBBACABCB", "BBBBBAAAAAACCCABBBACCAABAACCBACAABCAAAAACBBAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAAACACBBBBABCCABACBABBBCBABBCCAABCBCCBBACAACBCBBAABAABBBBBBCABCCCBACABCACBBCACCCCCBBACABCBCBABABAABABCCCCBAACBCBBACCABACBBBCCCCBACBBBBBBBACCAAABCBCAABBBBBBAAAAAACCCABBBACCAABAACCBACAABCAAAAACBBAACAACACACACAABCCCACCCBABCAB";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"PFSCIVPEQZZXZRXVEEIQRVANWQWFNRRXAVBWXTTO", "WAPMMNFNTPVKUNAFFABJJISOKVEWHABLVKTUMLHNFVRCQ", "QECESDCTPXUHAXYGBVRWPTVMCIOSWYGHJWZXZKJJYC", "NVVSGJJMCTMSBSDAJTQBNCETPKUSXLEHQOTQLZSAGWGOOW", "GUZLLTYESCHUKKZRTOHWUZFKINVITIGWENGFXNMEXMFK", "UKKZRTOHWUZFKINVITIGWENGFXNMEXMFKTKYPCTAQOWAP", "PCYNYJINZNYBHWFPTGTFQGMSASOCRDVXHRSSAATLBJAOODKICO", "KJJYCBONISUIXJFMZFKVZCOOAIICKLSLCOZBBDZSGVFC", "GKHUNJPFSCIVPEQZZXZRXVEEIQRVANWQWFNRRXAV", "TWQZNRODQRAOMVTSGUZLLTYESCHUKKZRTOHWUZFKINVI", "ZXTYFTPSILLNJXNDCPFZRMIQMXTITYBPWQYJRFCSDRRX", "SDNSEOAGCGWVIUUKBUPFXLJHVJJJSIYQAFTRUNHQ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "GKHUNJPFSCIVPEQZZXZRXVEEIQRVANWQWFNRRXAVBWXTTONVVSGJJMCTMSBSDAJTQBNCETPKUSXLEHQOTQLZSAGWGOOWPCYNYJINZNYBHWFPTGTFQGMSASOCRDVXHRSSAATLBJAOODKICOSDNSEOAGCGWVIUUKBUPFXLJHVJJJSIYQAFTRUNHQECESDCTPXUHAXYGBVRWPTVMCIOSWYGHJWZXZKJJYCBONISUIXJFMZFKVZCOOAIICKLSLCOZBBDZSGVFCTWQZNRODQRAOMVTSGUZLLTYESCHUKKZRTOHWUZFKINVITIGWENGFXNMEXMFKTKYPCTAQOWAPMMNFNTPVKUNAFFABJJISOKVEWHABLVKTUMLHNFVRCQZXTYFTPSILLNJXNDCPFZRMIQMXTITYBPWQYJRFCSDRRX";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"PNELMPDZEYMFZOGLKPSGORNZBAIWJRHSNXNEGSRORWI", "EOEELUYBQGEVMRZLTJWSYJZNBESHRDMVTGZTGUETATRKLVFJNG", "CIZEAPREASZAIZYPXBFHVGZDENCYAGAMUMICQPMGLPXE", "FBEHSTBSNFUDVWMMTLXBEDJZCRSFSTOTXOFCMCSZTAY", "WSBCIXVLQDQIKUFRJXAWWJDMWPZGDPKUKLHOGQDQFPOPK", "BKENCROZEHUVOSLCEPUSUKLVBUVFUKORNKMBQGMBGZTX", "YEEVHEHGRDAPKJQFIEDQBREGISZPFOZKLEBTYFEOEELUYBQGEV", "VMAMYYKQNCIZEAPREASZAIZYPXBFHVGZDENCYAGAMUM", "MFZOGLKPSGORNZBAIWJRHSNXNEGSRORWIWSBCIXV", "MWPZGDPKUKLHOGQDQFPOPKFJSRJCSTEZULPITDNPAK", "IVFSDCQPNELMPDZEYMFZOGLKPSGORNZBAIWJRHSNXNEGSRORW", "BUVFUKORNKMBQGMBGZTXNTSWESNFCJUWUWOROIRPSC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BKENCROZEHUVOSLCEPUSUKLVBUVFUKORNKMBQGMBGZTXNTSWESNFCJUWUWOROIRPSCFBEHSTBSNFUDVWMMTLXBEDJZCRSFSTOTXOFCMCSZTAYEEVHEHGRDAPKJQFIEDQBREGISZPFOZKLEBTYFEOEELUYBQGEVMRZLTJWSYJZNBESHRDMVTGZTGUETATRKLVFJNGIVFSDCQPNELMPDZEYMFZOGLKPSGORNZBAIWJRHSNXNEGSRORWIWSBCIXVLQDQIKUFRJXAWWJDMWPZGDPKUKLHOGQDQFPOPKFJSRJCSTEZULPITDNPAKVMAMYYKQNCIZEAPREASZAIZYPXBFHVGZDENCYAGAMUMICQPMGLPXE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"ELMDQKJLFJMGBCGXJYEBOELHAVHFSCEXXBOIKRSPKTMN", "VLWHIQAYHBBKXWGYFRPNFGFTDVVDZPIUXZZJJATFSC", "RAWIWEJUYRBNQUORWMNQHWMGAMKJWRAHRRFKWVVUSULZ", "UDGHBOVBFVVXNEQAURZBECBNMUGANWIUOLSSRXCAYTLNV", "XXEMQEQEOSFWJFPRKHPXWRLXUFVPPJXGROQFTPBXM", "NDBFNLMKEVBZTQEHLNWPAZCXDZTLISUVHLSEZEMNX", "KJWRAHRRFKWVVUSULZMEXKKJFMYEFJQNKMBMEJCOFRGJBP", "XGDWXHFNEPYXPWRTUARHDZJJMREBFZVVDHWYWNGLJRDJPPRIPP", "QDHMKUZRLTUOZBZMMMHJLLOTDNELVTSPISJFKWUYPEHNLZWC", "PNXQQRREQYETDCYCDGYSOZCLSAJSFOJMYSIEAGUWDJURQ", "TDNELVTSPISJFKWUYPEHNLZWCGAGZQUIFIMSOGYSVPMEHNS", "WVVUSULZMEXKKJFMYEFJQNKMBMEJCOFRGJBPNHUAQADFFM"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ELMDQKJLFJMGBCGXJYEBOELHAVHFSCEXXBOIKRSPKTMNDBFNLMKEVBZTQEHLNWPAZCXDZTLISUVHLSEZEMNXGDWXHFNEPYXPWRTUARHDZJJMREBFZVVDHWYWNGLJRDJPPRIPPNXQQRREQYETDCYCDGYSOZCLSAJSFOJMYSIEAGUWDJURQDHMKUZRLTUOZBZMMMHJLLOTDNELVTSPISJFKWUYPEHNLZWCGAGZQUIFIMSOGYSVPMEHNSRAWIWEJUYRBNQUORWMNQHWMGAMKJWRAHRRFKWVVUSULZMEXKKJFMYEFJQNKMBMEJCOFRGJBPNHUAQADFFMUDGHBOVBFVVXNEQAURZBECBNMUGANWIUOLSSRXCAYTLNVLWHIQAYHBBKXWGYFRPNFGFTDVVDZPIUXZZJJATFSCXXEMQEQEOSFWJFPRKHPXWRLXUFVPPJXGROQFTPBXM";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"EEUJBAZHQODARCIOJOZNICGAUPVGSPLXYKKUZXSWFWE", "RNTDZZDWBWGYWUOFHMIGAEUOYBCTREJCYNWKZCXOBUPMEXECV", "XUTSQRCUWYISXOXWTPNDLZXDHTXKRAYWHSDEEEXHEVLGQX", "YKKUZXSWFWEBGYFDUSRKDUJPLXOWVTTIFFOLHMTI", "ZDGMVYLICBOIGBVDVESCGFLUVOJWPCKUYUHOSVODNPHAFZMWBN", "VTNGFTOLKGKSVNVQWTZJAFJSSNTDPPSUZNTYAEEZTJHBM", "CJRBUMBMWNVCUNPPFBVESWEVTNGFTOLKGKSVNVQWTZJAFJSSN", "RAYWHSDEEEXHEVLGQXKIPCXSZALQPWGRFZIVHBAGMAGZVWX", "RDLAWOHAYJYLWPSNPPNIJIIEUBGMPNNSKXBTKFFWJG", "GVVGSALSVEXOFDDWMBZNSEXJVKOTSXTFRDLAWOHAYJYLW", "OZNICGAUPVGSPLXYKKUZXSWFWEBGYFDUSRKDUJPLXOWVTTIF", "EEZTJHBMDPOFKWANQHIDFRNUBLHJVIOHABAYPMGXAVL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CJRBUMBMWNVCUNPPFBVESWEVTNGFTOLKGKSVNVQWTZJAFJSSNTDPPSUZNTYAEEZTJHBMDPOFKWANQHIDFRNUBLHJVIOHABAYPMGXAVLEEUJBAZHQODARCIOJOZNICGAUPVGSPLXYKKUZXSWFWEBGYFDUSRKDUJPLXOWVTTIFFOLHMTIGVVGSALSVEXOFDDWMBZNSEXJVKOTSXTFRDLAWOHAYJYLWPSNPPNIJIIEUBGMPNNSKXBTKFFWJGRNTDZZDWBWGYWUOFHMIGAEUOYBCTREJCYNWKZCXOBUPMEXECVXUTSQRCUWYISXOXWTPNDLZXDHTXKRAYWHSDEEEXHEVLGQXKIPCXSZALQPWGRFZIVHBAGMAGZVWXZDGMVYLICBOIGBVDVESCGFLUVOJWPCKUYUHOSVODNPHAFZMWBN";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"USYCHTPJHWRWJNKQDPJSXSRACQCJSOLPFGYJHAOJAR", "WJUXNJCWRBAZRNKYWMPRRPCGVJAIFWOVTHLGBMTZEWA", "FAPBEOOVKMVTAGRJMBUFJGRJRXDDMXEWSKHHTOARJZPR", "UYDPWXTDRNGDHFKGXQPAMCWILHWZLVEWGLRXWWCVSOHRKJTYD", "HUQXMPYTRQATUYHIQQFDOUINTTHFACNYGHPOHQPN", "ODZQARMULXUJHPNNUSKOHHAVCTSXUCLUMQCIUIBFDVMHSMII", "ZPBGGLRQXIFXEWXBPAFNODNTGDXESYTDSGXZUQZDFG", "EGTGMADEGJKKVAUUNIJTZUJIIKITVPSBLMUDDTMGRUMJGMOBQJ", "NTWDULIOUVRJSFDQMXLHYS", "MIIJFAPBEOOVKMVTAGRJMBUFJGRJRXDDMXEWSKHHTOARJZPRQY", "CLGUQXPICLXESCWAZJKXFBCNULBKDDDTGWDAVSHXPOED", "MRQOWUEEQESKWYTMAGIGMLUYDPWXTDRNGDHFKGXQPAM"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CLGUQXPICLXESCWAZJKXFBCNULBKDDDTGWDAVSHXPOEDEGTGMADEGJKKVAUUNIJTZUJIIKITVPSBLMUDDTMGRUMJGMOBQJHUQXMPYTRQATUYHIQQFDOUINTTHFACNYGHPOHQPNTWDULIOUVRJSFDQMXLHYSMRQOWUEEQESKWYTMAGIGMLUYDPWXTDRNGDHFKGXQPAMCWILHWZLVEWGLRXWWCVSOHRKJTYDODZQARMULXUJHPNNUSKOHHAVCTSXUCLUMQCIUIBFDVMHSMIIJFAPBEOOVKMVTAGRJMBUFJGRJRXDDMXEWSKHHTOARJZPRQYUSYCHTPJHWRWJNKQDPJSXSRACQCJSOLPFGYJHAOJARWJUXNJCWRBAZRNKYWMPRRPCGVJAIFWOVTHLGBMTZEWAZPBGGLRQXIFXEWXBPAFNODNTGDXESYTDSGXZUQZDFG";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"ALCRUDCTSMDLMDKUAVKNASQIIUQGHIBVGTHPTECIFFFUDG", "CGMFCMELTGJWXZJARZCCLGALYEHBERMTNLDNTOEXMAXNCN", "HLQKGFOCLYIGIZJWJOQFDXJGFJTWUEPVAHDTWZFXFMDXWWZQM", "YYOPFZCNKDHOBSRMVGILEADMDITEZKGAQBGYGUTSMQINTGBTC", "FGAGBKZNAFKRQBPLFBRYTIVDIVKGAXKNATAPTKMSYXM", "ECIFFFUDGAAWBAYEXASCHOUFJPVZRERAPTBDNEYJSUYZWTXRYA", "TWUEPVAHDTWZFXFMDXWWZQMLMTHLRTUHFBQOVLRIKONCLW", "DGDSFYXLJRMCRJOHCRJKRGFKFAFDIKKTESJEJWBWJ", "XWWZQMLMTHLRTUHFBQOVLRIKONCLWMRQPFGAGBKZN", "JNDIDGDSFYXLJRMCRJOHCRJKRGFKFAFDIKKTESJEJWBWJIIGB", "FFUDGAAWBAYEXASCHOUFJPVZRERAPTBDNEYJSUYZ", "GIZJWJOQFDXJGFJTWUEPVAHDTWZFXFMDXWWZQMLMTHLRTU"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ALCRUDCTSMDLMDKUAVKNASQIIUQGHIBVGTHPTECIFFFUDGAAWBAYEXASCHOUFJPVZRERAPTBDNEYJSUYZWTXRYAHLQKGFOCLYIGIZJWJOQFDXJGFJTWUEPVAHDTWZFXFMDXWWZQMLMTHLRTUHFBQOVLRIKONCLWMRQPFGAGBKZNAFKRQBPLFBRYTIVDIVKGAXKNATAPTKMSYXMJNDIDGDSFYXLJRMCRJOHCRJKRGFKFAFDIKKTESJEJWBWJIIGBYYOPFZCNKDHOBSRMVGILEADMDITEZKGAQBGYGUTSMQINTGBTCGMFCMELTGJWXZJARZCCLGALYEHBERMTNLDNTOEXMAXNCN";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"BCGVUXVQMHATAZZREYOQHTYBKZNWRIDLTHCOOMUTQCAKZPVST", "LQASLUBEFIHUKQKEYJWRIPQGOWDWLQOBZZYIMVJFU", "ALAHBOUNEAVLQXBPCWWSVNRARGYMFULCJLHXMUJYDNEQNVKDDV", "WRIPQGOWDWLQOBZZYIMVJFUTXZZUDTPQEGHNJENYVK", "NMCZEDUJKIAPAPDJRMOVUUNSEYZBBLPGBCGVUXVQMHATAZZR", "OOMUTQCAKZPVSTWBQMMPDGPYJHWPEBFOJJOGMUOEYCXK", "DLTHCOOMUTQCAKZPVSTWBQMMPDGPYJHWPEBFOJJOGMUOEYCX", "SJZLQLMJGNGVZYVRQFNZJYTKXIWALFFLLBGGSMSPXZQ", "FHTZWXHWOHEEOUEIIWUJYKWSRPSPDAKYXFHXTJZNSAWQHAUXA", "PFKBUTAWSUJSGHDJZDOFXSCBUJORCLNQUGGPQDNMQESZ", "BRERKEKIJNTMJOJVAYZRNYRDMGDQIZAFWPXGDVYC", "RMOVUUNSEYZBBLPGBCGVUXVQMHATAZZREYOQHTYBKZ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BRERKEKIJNTMJOJVAYZRNYRDMGDQIZAFWPXGDVYCFHTZWXHWOHEEOUEIIWUJYKWSRPSPDAKYXFHXTJZNSAWQHAUXALAHBOUNEAVLQXBPCWWSVNRARGYMFULCJLHXMUJYDNEQNVKDDVLQASLUBEFIHUKQKEYJWRIPQGOWDWLQOBZZYIMVJFUTXZZUDTPQEGHNJENYVKNMCZEDUJKIAPAPDJRMOVUUNSEYZBBLPGBCGVUXVQMHATAZZREYOQHTYBKZNWRIDLTHCOOMUTQCAKZPVSTWBQMMPDGPYJHWPEBFOJJOGMUOEYCXKPFKBUTAWSUJSGHDJZDOFXSCBUJORCLNQUGGPQDNMQESZSJZLQLMJGNGVZYVRQFNZJYTKXIWALFFLLBGGSMSPXZQ";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"CZYBUXLUAILPYGHRMFECGNSOLUQKWHZWKFZGOUPVWUTQAK", "OAHJCGDIDJYCLTXJQUHAICNVOOIZHRQVLLRQCHZKO", "UVRUYEMFZPBVJDJUFMGGOTOALGIBLVEMHZQKALUBQRDK", "RFBHFYWTDIKHMPAFLHEOGLLBGNHZGVJSZATICGCHGTLKABTKU", "IBCNDTGOBAWDKGSRFNEETLPJNTHBGPPCDQLBLVIAKJPA", "LBLVIAKJPAIXSFFEXLX", "ENQPAVYNQYUPBPGAYWUIMOJBMTKMJDGORDYATKKJEUHJ", "WMFBXVLUPPIPXHSLSXIAPOTHKKXWVVHOGYXOSBFOCWKANSEJXT", "AXHZZLUWCYJULORUTRSFOAHJCGDIDJYCLTXJQUHAICNVOO", "WBTSEFRFBHFYWTDIKHMPAFLHEOGLLBGNHZGVJSZATICGC", "BEUMVYETMZWSICDVPIUSHYMIOAQDYXCBCTYMUORMFHQADH", "QOKCMUVRUYEMFZPBVJDJUFMGGOTOALGIBLVEMHZQKA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AXHZZLUWCYJULORUTRSFOAHJCGDIDJYCLTXJQUHAICNVOOIZHRQVLLRQCHZKOBEUMVYETMZWSICDVPIUSHYMIOAQDYXCBCTYMUORMFHQADHCZYBUXLUAILPYGHRMFECGNSOLUQKWHZWKFZGOUPVWUTQAKENQPAVYNQYUPBPGAYWUIMOJBMTKMJDGORDYATKKJEUHJIBCNDTGOBAWDKGSRFNEETLPJNTHBGPPCDQLBLVIAKJPAIXSFFEXLXQOKCMUVRUYEMFZPBVJDJUFMGGOTOALGIBLVEMHZQKALUBQRDKWBTSEFRFBHFYWTDIKHMPAFLHEOGLLBGNHZGVJSZATICGCHGTLKABTKUWMFBXVLUPPIPXHSLSXIAPOTHKKXWVVHOGYXOSBFOCWKANSEJXT";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"DWSLCKVGSXCJEFWLNNGXIGYDOKSPDWRPJTYSRYJUSSRSFVB", "FRFSHXGFMBGYWUCNQFFSBASODWSLCKVGSXCJEFWLNNGXIG", "WNPICCSBDIQECVIYAMGWUYSWBFRFSHXGFMBGYWUCNQFF", "QKYDRTZCSFQRMWDSHLTBBHZZIMPYVQDUQADIZZBSRTTPQEDMQK", "WZXUKICOZASAUTHZAGUW", "ZKQRPGQYMTHYZFRZBDGMDWLYEYNGWDPBFDKCJUMYLQQBVJ", "TYSRYJUSSRSFVBXHQRZAVCGEHORVVAKSTBAFYEUX", "JPALHOGYBSIPDXKHBWTTBQFKCDVHARMZHKQZGZTNWBNXS", "CTIAASJVMKDDNNBJMHTJJFKWYZQBHWSQXCOSRXUWUDJMKBAGC", "FKWYZQBHWSQXCOSRXUWUDJMKBAGCYDUVDTCVOTSOOQF", "VDEAPLKUSYFKBDXAKNWTYZONJWZKQRPGQYMTHYZFRZBD", "VWWIENANSGYLMHXUQLHWSLQUDFJGYRMIBVGVGRTL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CTIAASJVMKDDNNBJMHTJJFKWYZQBHWSQXCOSRXUWUDJMKBAGCYDUVDTCVOTSOOQFQKYDRTZCSFQRMWDSHLTBBHZZIMPYVQDUQADIZZBSRTTPQEDMQKVDEAPLKUSYFKBDXAKNWTYZONJWZKQRPGQYMTHYZFRZBDGMDWLYEYNGWDPBFDKCJUMYLQQBVJPALHOGYBSIPDXKHBWTTBQFKCDVHARMZHKQZGZTNWBNXSVWWIENANSGYLMHXUQLHWSLQUDFJGYRMIBVGVGRTLWZXUKICOZASAUTHZAGUWNPICCSBDIQECVIYAMGWUYSWBFRFSHXGFMBGYWUCNQFFSBASODWSLCKVGSXCJEFWLNNGXIGYDOKSPDWRPJTYSRYJUSSRSFVBXHQRZAVCGEHORVVAKSTBAFYEUX";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"PNJJASIZNEYEFNPFFITSMOWTDLWRSOAWAOSXGLBFDZ", "SFTCJSQCURRDMAGBAFMWSZPGTRRJHCDRPKOBORCXLGEONST", "AFMWSZPGTRRJHCDRPKOBORCXLGEONSTMPAHOLSZCFPMMYKTH", "ENOBPZVFODUEGLUZVGAAHJCZDUOMEEIMRJKKEYPNHAEWNXLJ", "OQCKCJXEXCUMFFDIXSXXBZXJMTVQOTEPDQSJDGXJSWKEYB", "KLYKILAHFEGCDLFWDMRLWEWALSZZMRIHRZVXAOGH", "ZNMLATIQTMQQBPMEZCNEOHPAPCLALTLXLBZAMIYTUBPJKL", "SFBXXZERDIVSIRNELAWSCQKVCSPDGLZVWXHESURTPVVOLPNJJ", "EYBNLZKTWHNISFTCJSQCURRDMAGBAFMWSZPGTRRJHCDRPKOBOR", "MZHWORBNHLRRVNKJOVJVPNHGCGZCDGJSETTTOVUMVBXHX", "WKEYBNLZKTWHNISFTCJSQCURRDMAGBAFMWSZPGTRRJHCDR", "UGIWVOCMOTAEAVAZMUPBMFNSPSLDAKYUPDNYPLJSIKIU"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ENOBPZVFODUEGLUZVGAAHJCZDUOMEEIMRJKKEYPNHAEWNXLJMZHWORBNHLRRVNKJOVJVPNHGCGZCDGJSETTTOVUMVBXHXOQCKCJXEXCUMFFDIXSXXBZXJMTVQOTEPDQSJDGXJSWKEYBNLZKTWHNISFTCJSQCURRDMAGBAFMWSZPGTRRJHCDRPKOBORCXLGEONSTMPAHOLSZCFPMMYKTHSFBXXZERDIVSIRNELAWSCQKVCSPDGLZVWXHESURTPVVOLPNJJASIZNEYEFNPFFITSMOWTDLWRSOAWAOSXGLBFDZNMLATIQTMQQBPMEZCNEOHPAPCLALTLXLBZAMIYTUBPJKLYKILAHFEGCDLFWDMRLWEWALSZZMRIHRZVXAOGHUGIWVOCMOTAEAVAZMUPBMFNSPSLDAKYUPDNYPLJSIKIU";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"KOSLIVANTHGERLJRWJKGJFOTWDVBONYHDMDCJXMS", "AUZPWHPILWNCWRMMGRXKUHCNZERLWQGYVVJAQFJVXCP", "NACXAOHDYNRESUEHYJLNZKLPNBGRBFMPNPNTKEULLJMIWZUOOF", "JWCJWTFNKIYKTLPNKPFCTZHJGGDSMGERVFKVEFFXXXR", "ESQZAXHEAVHEJPOTOOSSMQCMEKTLMMURTIISIOVJY", "YKQQZESQZAXHEAVHEJPOTOOSSMQCMEKTLMMURTIISIOVJYJ", "RDNCEOEUQHGRTUYANZMLKYKQQZESQZAXHEAVHEJPOTOOSSMQCM", "ZZRXLEPAULRQRMRRQLMRLZDDUXJPQCXAOKLRGHTQD", "BFMPNPNTKEULLJMIWZUOOFLORHJALZQVLQIECJRDNCEOE", "RLIEPOQNSDWPCCGFHOOWIQCFFKXLNKBJXFYNKOSLIVA", "FCGOYDNKEDAIQQOZDQGUQPUOZHEXTXEMQHSSFMSZVJVVJEDK", "EJDQULVNZDEZQNUZHKWFKIYFXRPXFUIALMQMACIAUCVO"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AUZPWHPILWNCWRMMGRXKUHCNZERLWQGYVVJAQFJVXCPEJDQULVNZDEZQNUZHKWFKIYFXRPXFUIALMQMACIAUCVOFCGOYDNKEDAIQQOZDQGUQPUOZHEXTXEMQHSSFMSZVJVVJEDKNACXAOHDYNRESUEHYJLNZKLPNBGRBFMPNPNTKEULLJMIWZUOOFLORHJALZQVLQIECJRDNCEOEUQHGRTUYANZMLKYKQQZESQZAXHEAVHEJPOTOOSSMQCMEKTLMMURTIISIOVJYJWCJWTFNKIYKTLPNKPFCTZHJGGDSMGERVFKVEFFXXXRLIEPOQNSDWPCCGFHOOWIQCFFKXLNKBJXFYNKOSLIVANTHGERLJRWJKGJFOTWDVBONYHDMDCJXMSZZRXLEPAULRQRMRRQLMRLZDDUXJPQCXAOKLRGHTQD";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"PMRZHDMZHLHRUXLZYZBLHJSMFKJYNEXYIUGDKCIVTYCFXGVW", "TBBERJCJDGGDADKHMQDZBVXNTKWBFRZIWDGORYQQADOHWHW", "ZYZBLHJSMFKJYNEXYIUGDKCIVTYCFXGVWMYUSASIIKDVTYKJ", "XIJFTNIFXOIMIAHPHNCYBRFKUIGOZNCYLOGGEENKFJ", "QTQYSMBPCISFUTXKHBTMBVWADELMFNWOGPZZZSJS", "FSPWWTGAUUMNGZXCFQVZUMYPGYOUOTXSACPFCCZDJQX", "MYNVJGMQXZUVFLWCCZLCIRSXQADPGYUQOZFTCKAIZVUM", "SMDNLPGTHMZJKSOSPSWSDVUBTTPUULSDSTRTSSYUNOMHU", "CRUQJKHILOLCEHIDZEIQQFXILGPSMDNLPGTHMZJKSOS", "DZEIQQFXILGPSMDNLPGTHMZJKSOSPSWSDVUBTTPU", "WRHUKYWPJSBUVQTBBERJCJDGGDADKHMQDZBVXNTKWBFRZIW", "VDRCZRFKCXAKCIYHBYVYQZWRRUOTLFRHIXXIW"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CRUQJKHILOLCEHIDZEIQQFXILGPSMDNLPGTHMZJKSOSPSWSDVUBTTPUULSDSTRTSSYUNOMHUFSPWWTGAUUMNGZXCFQVZUMYPGYOUOTXSACPFCCZDJQXIJFTNIFXOIMIAHPHNCYBRFKUIGOZNCYLOGGEENKFJMYNVJGMQXZUVFLWCCZLCIRSXQADPGYUQOZFTCKAIZVUMPMRZHDMZHLHRUXLZYZBLHJSMFKJYNEXYIUGDKCIVTYCFXGVWMYUSASIIKDVTYKJQTQYSMBPCISFUTXKHBTMBVWADELMFNWOGPZZZSJSVDRCZRFKCXAKCIYHBYVYQZWRRUOTLFRHIXXIWRHUKYWPJSBUVQTBBERJCJDGGDADKHMQDZBVXNTKWBFRZIWDGORYQQADOHWHW";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"KPRPQNRDCYPPLPTLTXFZZVIJUTKYXLHTTYIKUUXIIUSGU", "XROTMFEYAVLLOUOJVDRLUSMRJ", "EWKBKPAZXVOOPGAPBZSULQTVOEWNAOITZCDKTJVZVVSRRXJN", "OPGAPBZSULQTVOEWNAOITZCDKTJVZVVSRRXJNVFASFCX", "TXFZZVIJUTKYXLHTTYIKUUXIIUSGUETBHFZAIATS", "BRBFFCJFVWAJPJONESGZHLZQDXCGBDBSWDULYPCGPLAZYV", "KOYVQXTIWSSYIHWRBURMZIOKQJONBTGXRWGKULYLZMMLBG", "EWNAOITZCDKTJVZVVSRRXJNVFASFCXEBINUMYQXAYMFK", "BRBFFCJFVWAJPJONESGZHLZQDXCGBDBSWDULYPCGPLAZYVJZD", "ZBMETXYGIVEXQMDSNXLIABWMNJOPNODFVOWVRHHK", "PRPQNRDCYPPLPTLTXFZZVIJUTKYXLHTTYIKUUXIIUSGUET", "MNJOPNODFVOWVRHHKNVYKGHHSEZXRZTGJZLYDYIRYYCHXEXPG"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BRBFFCJFVWAJPJONESGZHLZQDXCGBDBSWDULYPCGPLAZYVJZDEWKBKPAZXVOOPGAPBZSULQTVOEWNAOITZCDKTJVZVVSRRXJNVFASFCXEBINUMYQXAYMFKOYVQXTIWSSYIHWRBURMZIOKQJONBTGXRWGKULYLZMMLBGKPRPQNRDCYPPLPTLTXFZZVIJUTKYXLHTTYIKUUXIIUSGUETBHFZAIATSXROTMFEYAVLLOUOJVDRLUSMRJZBMETXYGIVEXQMDSNXLIABWMNJOPNODFVOWVRHHKNVYKGHHSEZXRZTGJZLYDYIRYYCHXEXPG";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"AIFYRYHASQWTYZIJHZEALFZNMXIPJLCOQTHKBDBGFUTICQTMTH", "NNEHMBGRAUZQFELTCZYAZJSNLCCXPDBQBDWEIXFSVVURFI", "UIYKNHOCUEJZAKRJBXWXFXRHPRVJUBPFQBBECEXPKMZDB", "BLARYHLEMFSHNPRACYETCDXJ", "BWLMUIYKNHOCUEJZAKRJBXWXFXRHPRVJUBPFQBBECEX", "UKSIPFLJJIKBTKRUUINROEEKAEFALXTJXYZWBBARQZVT", "VROFKMUWJNJDETYOCLFQDMBUTAYNYOJXBQMICQDVIHUQJHDCJP", "TYOCLFQDMBUTAYNYOJXBQMICQDVIHUQJHDCJPIBU", "EKAEFALXTJXYZWBBARQZVTOOLULCARJAGXXDRGNY", "DNTAZHGDTHVCVMTHGAUSSXWJNIVTBBAIFYRYHASQWTY", "MDNTAZHGDTHVCVMTHGAUSSXWJNIVTBBAIFYRYHAS", "TOIWEWAEZXUZMDMXLOUAWZSMACCOUWFKCYFNPVCTZPSFTSA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BWLMUIYKNHOCUEJZAKRJBXWXFXRHPRVJUBPFQBBECEXPKMZDBLARYHLEMFSHNPRACYETCDXJMDNTAZHGDTHVCVMTHGAUSSXWJNIVTBBAIFYRYHASQWTYZIJHZEALFZNMXIPJLCOQTHKBDBGFUTICQTMTHNNEHMBGRAUZQFELTCZYAZJSNLCCXPDBQBDWEIXFSVVURFITOIWEWAEZXUZMDMXLOUAWZSMACCOUWFKCYFNPVCTZPSFTSAVROFKMUWJNJDETYOCLFQDMBUTAYNYOJXBQMICQDVIHUQJHDCJPIBUKSIPFLJJIKBTKRUUINROEEKAEFALXTJXYZWBBARQZVTOOLULCARJAGXXDRGNY";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"NOLVKFTJVJIZEJAKLZXZPIAEVZHOUKXPTXFVNTIESCHLWJLVWY", "MGDNCRTAGPAWGKJAGQJAUWCMJWUXZZAWSQADXEZPBHVP", "WNTWXHHSYWNQBLRHDUQQTOOHSDFGIUXGLFSHAZDCOZU", "FZSXKXSYDIJKBOJCPPBMJEPVODBRQGVMHOWJNMTJUVBPBZK", "ELWHVETGAPJUOPBTDQAHWJGUXRFZHTWMYYWYQZWQ", "OVKDGOHFRJERSRHGTQFNFWSPRLOSFAREYNKJPTWOYW", "ESKARUPTQYNACPRDODRANGKPXQZIKUNGWJZOKSEXXVTELW", "RUPTQYNACPRDODRANGKPXQZIKUNGWJZOKSEXXVTELWWJXZ", "QTRFFPVRISPDSQCYQONYWFOIEVPYCMFBFTIJROODMANZWNTWXH", "CMPKXGMOIXQZGUOKBLXMCDTXABFONHDELWHVETGAPJUOP", "IXQZGUOKBLXMCDTXABFONHDELWHVETGAPJUOPBTD", "RLOSFAREYNKJPTWOYWRASQVPEZMDVSKTKENXLDNUQJGVFLKXH"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CMPKXGMOIXQZGUOKBLXMCDTXABFONHDELWHVETGAPJUOPBTDQAHWJGUXRFZHTWMYYWYQZWQTRFFPVRISPDSQCYQONYWFOIEVPYCMFBFTIJROODMANZWNTWXHHSYWNQBLRHDUQQTOOHSDFGIUXGLFSHAZDCOZUESKARUPTQYNACPRDODRANGKPXQZIKUNGWJZOKSEXXVTELWWJXZFZSXKXSYDIJKBOJCPPBMJEPVODBRQGVMHOWJNMTJUVBPBZKMGDNCRTAGPAWGKJAGQJAUWCMJWUXZZAWSQADXEZPBHVPNOLVKFTJVJIZEJAKLZXZPIAEVZHOUKXPTXFVNTIESCHLWJLVWYOVKDGOHFRJERSRHGTQFNFWSPRLOSFAREYNKJPTWOYWRASQVPEZMDVSKTKENXLDNUQJGVFLKXH";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"LDQGWXTOKRUHMYDUKJYCIYBVSZXDNOUEBRYTJAPADE", "HUCVTTCFANELVNFQEPRDJIKFLICXQRGKBFVFFIGLVWWUSICGII", "NREHHJDYPZCNFWUHTYWOXDXGCLMOJYLYZGDSBUWFRLE", "GLVWWUSICGIIWGMYKEGJSENGIYVSQXGZKEHSXHRGKQYRZICR", "LXONXDBQMGINJMDPAKDVYHBEGQITWMJLMFNJIMTJFU", "PLWKVUDAVTPLGJEAQRXRWUDRASWPNPLDQGWXTOKRUH", "YXIQOMINGEUVQXCIAWUKINZSWRWDTXNUVHWACHZAIU", "DOZHOLXONXDBQMGINJMDPAKDVYHBEGQITWMJLMFNJIMTJF", "MEDFONYEXLCLPJRBMKLUIUOVEWTEDKZQIAUZVEFAIDVFD", "SBVAOCBJKLMVENTPFSYGZOAVKPKUPYJPWUALLDCE", "RASWPNPLDQGWXTOKRUHMYDUKJYCIYBVSZXDNOUEB", "VENTPFSYGZOAVKPKUPYJPWUALLDCELLYDWRZXETYV"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "HUCVTTCFANELVNFQEPRDJIKFLICXQRGKBFVFFIGLVWWUSICGIIWGMYKEGJSENGIYVSQXGZKEHSXHRGKQYRZICRMEDFONYEXLCLPJRBMKLUIUOVEWTEDKZQIAUZVEFAIDVFDOZHOLXONXDBQMGINJMDPAKDVYHBEGQITWMJLMFNJIMTJFUNREHHJDYPZCNFWUHTYWOXDXGCLMOJYLYZGDSBUWFRLEPLWKVUDAVTPLGJEAQRXRWUDRASWPNPLDQGWXTOKRUHMYDUKJYCIYBVSZXDNOUEBRYTJAPADESBVAOCBJKLMVENTPFSYGZOAVKPKUPYJPWUALLDCELLYDWRZXETYVYXIQOMINGEUVQXCIAWUKINZSWRWDTXNUVHWACHZAIU";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"FNIXHJPQIRASVONQQWADTACKKTHYJEMTCPXMEWFV", "BBVAKDJZTDVMNZMBINHRXMGXEYDYUQRXWULUWBLLOL", "PVANSXJWAIRYQAHVZQNXUCBHZSZMZIJDNXIBAXFFP", "QUDLZDLWTBTFMCSWETIQRDATKCLORRPAGAEUEUMGRYG", "IDXZTAYDTZRPUADRRFBOBGTPJQPJVVMUILTGYBUGKDOC", "CUUBOYUBCKIHDBPMXNXOCBOCRXABOUJUBCMZMBKKD", "JMXGPKPEUOIKXZSTUNHMKAYCSQXLLTNFMXVHDADVXMYAZX", "QRDATKCLORRPAGAEUEUMGRYGRXPIPGKPUGAALIURRUUSWJKS", "DNWYESNGHYQRJKGFTLBKPVANSXJWAIRYQAHVZQNXUC", "KCTZUJLJLCRAQKDKEXVPRNFFSYOCUUBOYUBCKIHDB", "JMXIDCQPDOTMFMFFJMXGPKPEUOIKXZSTUNHMKAYCSQ", "MBKKDPRXFQSHHOBBVAKDJZTDVMNZMBINHRXMGXEYDYUQRXWUL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DNWYESNGHYQRJKGFTLBKPVANSXJWAIRYQAHVZQNXUCBHZSZMZIJDNXIBAXFFPFNIXHJPQIRASVONQQWADTACKKTHYJEMTCPXMEWFVIDXZTAYDTZRPUADRRFBOBGTPJQPJVVMUILTGYBUGKDOCJMXIDCQPDOTMFMFFJMXGPKPEUOIKXZSTUNHMKAYCSQXLLTNFMXVHDADVXMYAZXKCTZUJLJLCRAQKDKEXVPRNFFSYOCUUBOYUBCKIHDBPMXNXOCBOCRXABOUJUBCMZMBKKDPRXFQSHHOBBVAKDJZTDVMNZMBINHRXMGXEYDYUQRXWULUWBLLOLQUDLZDLWTBTFMCSWETIQRDATKCLORRPAGAEUEUMGRYGRXPIPGKPUGAALIURRUUSWJKS";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"DKPDIQBQMGFLQUPHHIQFEWTEWOCVJVECSISXKNHFPXVEQSPE", "SZQYVQHBDAJQJYGSFSGTHBLOJUALZPZHAESGISOWZHOJSWWT", "AEGMSHEXDNXNLNUNANJXGYRSDKPDLTEUDVGYZTYZRQCS", "SISXKNHFPXVEQSPEAOJGUEOFECVIADTSJZAQKCSM", "CYUWUZNSNQHULYADSTCUEMQESDFMDDSWOQFPHFKDJUOBMVHAN", "HTGKRFULNBHTWKSDQJJRZZJGJMNSCANQJRXENCNQQ", "RFULNBHTWKSDQJJRZZJGJMNSCANQJRXENCNQQJMZS", "TAVBKNHMYBYCPHEDENVJFTLTEDECPSIQGGJHVXUYLDDLL", "BMVHANLNCHWAGJOMUILLPXUWJRNBTQRTGJUYSOCYTADSJM", "SDGVGCJAFBSNXAEGMSHEXDNXNLNUNANJXGYRSDKPDLTEUDV", "QUPFVLTJWWWHQRXKZSDGVGCJAFBSNXAEGMSHEXDNX", "UPFVLTJWWWHQRXKZSDGVGCJAFBSNXAEGMSHEXDNXNLNUNANJX"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CYUWUZNSNQHULYADSTCUEMQESDFMDDSWOQFPHFKDJUOBMVHANLNCHWAGJOMUILLPXUWJRNBTQRTGJUYSOCYTADSJMDKPDIQBQMGFLQUPHHIQFEWTEWOCVJVECSISXKNHFPXVEQSPEAOJGUEOFECVIADTSJZAQKCSMHTGKRFULNBHTWKSDQJJRZZJGJMNSCANQJRXENCNQQJMZSQUPFVLTJWWWHQRXKZSDGVGCJAFBSNXAEGMSHEXDNXNLNUNANJXGYRSDKPDLTEUDVGYZTYZRQCSZQYVQHBDAJQJYGSFSGTHBLOJUALZPZHAESGISOWZHOJSWWTAVBKNHMYBYCPHEDENVJFTLTEDECPSIQGGJHVXUYLDDLL";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"PAJTQPMCPQPTNJOHCAMBSRFAFJMDXOAATNSXRXKJAOMAREMYJM", "DBTXCKGUEBZRAIPWJUEQBXUWEKDQVUAFLANJSMYPMGIAMZQGC", "OVGGTYGKXGSNCXUPOTRFLNLGIVWQFESENWQVQKLFVQLVEEN", "MDMCABKPNWRCLXIYTJWKARQKTGQGENVGTPEVXRHFZ", "MTLQKGOLMEOOXDRMZPVUDQQGJLFTAVUFJQXETVBHUAUZ", "DRWAHTFVMSRXDRFVOPDBBNGDMMUHOTCQQBGTVFDSXF", "UFJQXETVBHUAUZLFROAXPACFUZNDKRTICGTQOAKOLAWPO", "WEUAZWIMYVARAJGFLTAURGQZYQVEMJEEFGZDSCQRU", "DWMDPWAFMZGPNBTPDNKWTDRSCLAQNTHBLJAVLWONQRDPGGQU", "TZFVCALSETYEOIQHYNJTYIIFHUBGEZHYVCPSBOFX", "UWENZRVQTZFVCALSETYEOIQHYNJTYIIFHUBGEZHYV", "VZDZFYABPLCYFFSLVATGUUADAPCOVGGTYGKXGSNC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DBTXCKGUEBZRAIPWJUEQBXUWEKDQVUAFLANJSMYPMGIAMZQGCDRWAHTFVMSRXDRFVOPDBBNGDMMUHOTCQQBGTVFDSXFDWMDPWAFMZGPNBTPDNKWTDRSCLAQNTHBLJAVLWONQRDPGGQUMDMCABKPNWRCLXIYTJWKARQKTGQGENVGTPEVXRHFZPAJTQPMCPQPTNJOHCAMBSRFAFJMDXOAATNSXRXKJAOMAREMYJMTLQKGOLMEOOXDRMZPVUDQQGJLFTAVUFJQXETVBHUAUZLFROAXPACFUZNDKRTICGTQOAKOLAWPOVZDZFYABPLCYFFSLVATGUUADAPCOVGGTYGKXGSNCXUPOTRFLNLGIVWQFESENWQVQKLFVQLVEENWEUAZWIMYVARAJGFLTAURGQZYQVEMJEEFGZDSCQRUWENZRVQTZFVCALSETYEOIQHYNJTYIIFHUBGEZHYVCPSBOFX";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"TFMNOHDMLXSHFPSDHQJRTVQP", "NUPEKTYRXJZOTQWFRDVPOEXOFSNTOSICCVDQCIBHBDBJP", "ECLNWJYCIYEGHCHCPMRSHEDZCEXWZRREEPTLLHISIL", "TDHRFNRTALNCTBCFVNWDFJOBRQJWZYVNSSGBWKQOJUST", "CTBCFVNWDFJOBRQJWZYVNSSGBWKQOJUSTLXYSRBXIPMRLGG", "ALZUWPJABCBPWEESLNHHVVQVKSIYJBIXGMTOXYBDBG", "OUAFBCMHVJOKXYOZEDHXDZLCZPKLQUUQPXDQCPZUCVD", "VTLCPZXVEXAGQMBGCTANJWVBHYWKXKJMAINJHZXWVBKDBHQ", "UNVVXILPLNVHDPRLCVRKJECLNWJYCIYEGHCHCPMRSHED", "MDTWHNQKOQEAKKLMOJREIAQLSGHAFBZTNCEZYJNGOUYXBGOA", "XTURFYEMYSJGNKKRTGFIQSGBCGLMBOZMRYKAWUZUSTYYCMFGU", "WDFJOBRQJWZYVNSSGBWKQOJUSTLXYSRBXIPMRLGG"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "MDTWHNQKOQEAKKLMOJREIAQLSGHAFBZTNCEZYJNGOUYXBGOALZUWPJABCBPWEESLNHHVVQVKSIYJBIXGMTOXYBDBGNUPEKTYRXJZOTQWFRDVPOEXOFSNTOSICCVDQCIBHBDBJPOUAFBCMHVJOKXYOZEDHXDZLCZPKLQUUQPXDQCPZUCVDTDHRFNRTALNCTBCFVNWDFJOBRQJWZYVNSSGBWKQOJUSTLXYSRBXIPMRLGGTFMNOHDMLXSHFPSDHQJRTVQPVTLCPZXVEXAGQMBGCTANJWVBHYWKXKJMAINJHZXWVBKDBHQXTURFYEMYSJGNKKRTGFIQSGBCGLMBOZMRYKAWUZUSTYYCMFGUNVVXILPLNVHDPRLCVRKJECLNWJYCIYEGHCHCPMRSHEDZCEXWZRREEPTLLHISIL";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"DVHBUIJYPMNYRRMOAAYCHMTNQWRYAOXWSBSTXUDOKIA", "TWIVTQJEPQQSSBHZSFNVGHXHFZKPUVLNTDQTAGFI", "RYAOXWSBSTXUDOKIAVYRRRLETPXQFRSHJZVUYAIGUL", "YRFGOTEANPOITKTZPSGRIZCARJSXUSFIBCMKPFKHLK", "LNHXDXSNWSFLGCNNGNRUNCBRFZXNNBLCWPQAOSHEWOLSZWFFD", "GQEDBSVSLJPUFVSNMEOXUNFTRJJUEJMNPIQYPOAIYXCY", "FRMKNKPLOPSIDQROAQBOGUGDKNKPXGNETFBITEZZFHBIDVHBUI", "BHYRFGOTEANPOITKTZPSGRIZCARJSXUSFIBCMKPFKHLKEVNUBH", "GNRUNCBRFZXNNBLCWPQAOSHEWOLSZWFFDCUOPYDBMQCCCJNP", "IYXCYECBAOJIXSIRLLUKIXFWULETGGWFGSEFPYBSFASKIIZSF", "OTEANPOITKTZPSGRIZCARJSXUSFIBCMKPFKHLKEV", "NJADZOMWGHGKRGJHZNJBUYRIVKBBHYRFGOTEANPOIT"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "GQEDBSVSLJPUFVSNMEOXUNFTRJJUEJMNPIQYPOAIYXCYECBAOJIXSIRLLUKIXFWULETGGWFGSEFPYBSFASKIIZSFRMKNKPLOPSIDQROAQBOGUGDKNKPXGNETFBITEZZFHBIDVHBUIJYPMNYRRMOAAYCHMTNQWRYAOXWSBSTXUDOKIAVYRRRLETPXQFRSHJZVUYAIGULNHXDXSNWSFLGCNNGNRUNCBRFZXNNBLCWPQAOSHEWOLSZWFFDCUOPYDBMQCCCJNPNJADZOMWGHGKRGJHZNJBUYRIVKBBHYRFGOTEANPOITKTZPSGRIZCARJSXUSFIBCMKPFKHLKEVNUBHTWIVTQJEPQQSSBHZSFNVGHXHFZKPUVLNTDQTAGFI";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"ZYAPJNACQAHHVWSJKXXXCXDAZKGCTFTIHEZHSYNGOHFWZMI", "RFKOFWRETZHPXYNTVWVFULVJNHGIJOHLTGRF", "LTGRF", "CIRFKOFWRETZHPXYNTVWVFULVJNHGIJOHLTGRF", "KGCTFTIHEZHSYNGOHFWZMIENYALENDGCUVCCZGFDMMJ", "TLPTMZCFPCSNWQHOTDEHOEQXFJQLBMNOLRZPVJSIPKUAA", "TFTIHEZHSYNGOHFWZMIENYALENDGCUVCCZGFDMMJKV", "YTMTODLUBSFZFYSZDENSQGZOLLHEQETFJKZHGFTROGQJ", "ZMIENYALENDGCUVCCZGFDMMJKVHISILNSBIFUMVMEUWXNL", "WTJVXJCOXJMKTLMLZFQJHRVBJPYAOEFWAIAGNFGF", "KLZOOECOEMDZRCVDNFFBMWOQBKMEGODRRSFZAIFHKIF", "DFGXJUOMGMVAGJTLPTMZCFPCSNWQHOTDEHOEQXFJ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CIRFKOFWRETZHPXYNTVWVFULVJNHGIJOHLTGRFDFGXJUOMGMVAGJTLPTMZCFPCSNWQHOTDEHOEQXFJQLBMNOLRZPVJSIPKUAAKLZOOECOEMDZRCVDNFFBMWOQBKMEGODRRSFZAIFHKIFWTJVXJCOXJMKTLMLZFQJHRVBJPYAOEFWAIAGNFGFYTMTODLUBSFZFYSZDENSQGZOLLHEQETFJKZHGFTROGQJZYAPJNACQAHHVWSJKXXXCXDAZKGCTFTIHEZHSYNGOHFWZMIENYALENDGCUVCCZGFDMMJKVHISILNSBIFUMVMEUWXNL";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"XPDJLHYABAWUSJWYXQWQBJFROXKAKOPUXYJDATWUKLTINVMC", "HBNIKHCACRDQDCHWRQXPDJLHYABAWUSJWYXQWQBJFROXK", "AKOPUXYJDATWUKLTINVMCZHOUIILBPXLHBSMDNRC", "XCEEBDRKQMXTDPKCARGBJZHEJQXSYHYDSYRPJMHYODKIKUF", "FFXKBDXIQOSJGOFGGGEPKBCIGWBLQOWXCEEBDRKQMXTDPKC", "NHBLKDLGSCHKPZUELKWZHMBDSZRXWEYKXDIIJJYNHDVQODNLB", "TIJSWUZXMZSCVBAPRTRSEIJUHQFWZLLUMAHRUXDPCP", "UXDPCPXJTVTCFXTPSBGVKFRZEBZFYFGQCVYKZWHNYTY", "XMZSCVBAPRTRSEIJUHQFWZLLUMAHRUXDPCPXJTVTCFXTPS", "LNIDITELREZMPHHYKWNRGCTWVDCANXJCAIZGUAUNUQUGHH", "VGQBIWKW", "YFGQCVYKZWHNYTYBXFFDSZNOFFXKBDXIQOSJGOFGGG"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "LNIDITELREZMPHHYKWNRGCTWVDCANXJCAIZGUAUNUQUGHHBNIKHCACRDQDCHWRQXPDJLHYABAWUSJWYXQWQBJFROXKAKOPUXYJDATWUKLTINVMCZHOUIILBPXLHBSMDNRCNHBLKDLGSCHKPZUELKWZHMBDSZRXWEYKXDIIJJYNHDVQODNLBTIJSWUZXMZSCVBAPRTRSEIJUHQFWZLLUMAHRUXDPCPXJTVTCFXTPSBGVKFRZEBZFYFGQCVYKZWHNYTYBXFFDSZNOFFXKBDXIQOSJGOFGGGEPKBCIGWBLQOWXCEEBDRKQMXTDPKCARGBJZHEJQXSYHYDSYRPJMHYODKIKUFVGQBIWKW";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"PHHJNFLSVQHMSCTGAXUJETPWRBWTATSUTSKUXZMAZIMKDKSK", "QABHORQFPZMJCBYDXLCRWXXUHKZFGOCJKLORYKMSCABPYBQ", "PJSROUPKBMUQSRAPHHJNFLSVQHMSCTGAXUJETPWRBWTAT", "AXUJETPWRBWTATSUTSKUXZMAZIMKDKSKBUBDUDUZFWRLGJFJX", "UTAHDIGZQKJXQSJHNZVSHGVIUGGIWBGXVFYBQBNJ", "RQFPZMJCBYDXLCRWXXUHKZFGOCJKLORYKMSCABPYBQYSTSZUF", "WXMYVBKWJQOXHZHIGBBMCUSPPOJIQKVQVOSPEWHPMZZ", "SKBUBDUDUZFWRLGJFJXXNJWAJIQCTVMWZVEIECKVXHHX", "NAQABHORQFPZMJCBYDXLCRWXXUHKZFGOCJKLORYKMS", "JJNXODPMIRQNRETONSTORKCTUAVJDIVKVVSAHOLVVLH", "FQUTWTYQTHKRKREXMYKGACQTRZMKSXWGKROKVZIFEUGGG", "GIEYGRTKDOIKYMMFQBKMGCNAQABHORQFPZMJCBYDXLCR"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "FQUTWTYQTHKRKREXMYKGACQTRZMKSXWGKROKVZIFEUGGGIEYGRTKDOIKYMMFQBKMGCNAQABHORQFPZMJCBYDXLCRWXXUHKZFGOCJKLORYKMSCABPYBQYSTSZUFPJSROUPKBMUQSRAPHHJNFLSVQHMSCTGAXUJETPWRBWTATSUTSKUXZMAZIMKDKSKBUBDUDUZFWRLGJFJXXNJWAJIQCTVMWZVEIECKVXHHXUTAHDIGZQKJXQSJHNZVSHGVIUGGIWBGXVFYBQBNJJNXODPMIRQNRETONSTORKCTUAVJDIVKVVSAHOLVVLHWXMYVBKWJQOXHZHIGBBMCUSPPOJIQKVQVOSPEWHPMZZ";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"TJOMGYTBXWSLURDQLNTVMOIOHBDRVHILQNQSEBOSQ", "OUBEMFLEQAIIRMXLPQGSNRHWBLJGOCAPENYSHCCRPUEIO", "CCRPUEIONUGGCRRLLCIVXRLZENLDKSVRDFCSDBUPLBXJYR", "TUSZFWNCHYGZGIKNMOWBVRQYXCVIFQJBCFABQYUKNH", "HIRUVGARQGSMDVTXWIFHGGVDSXFEFGQDWXQYAPNMQ", "UQYZVKYOVTDGDJDCRIFWJVPRRALIUUZHZLDSRRLHTKQXE", "LZCETMHZGFZCUWBSDWFKIBTCFYICKJYCLAHPULOEBRLN", "AZPWYEOWLMDPSDGIOKEBCBOOGUVUIEVXDBSWLZCETMHZGFZC", "RVFLQEYARMITAZPWYEOWLMDPSDGIOKEBCBOOGUVU", "TAZPWYEOWLMDPSDGIOKEBCBOOGUVUIEVXDBSWLZCETMHZGFZ", "DBUPLBXJYRUKRHNCWHQAWOKNTJJYULOAWCYGQQOCLHOHTHAS", "EBRLNGRDMGKDUHYCAETHQTREOHGMPHIRUVGARQGSMDVT"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "OUBEMFLEQAIIRMXLPQGSNRHWBLJGOCAPENYSHCCRPUEIONUGGCRRLLCIVXRLZENLDKSVRDFCSDBUPLBXJYRUKRHNCWHQAWOKNTJJYULOAWCYGQQOCLHOHTHASRVFLQEYARMITAZPWYEOWLMDPSDGIOKEBCBOOGUVUIEVXDBSWLZCETMHZGFZCUWBSDWFKIBTCFYICKJYCLAHPULOEBRLNGRDMGKDUHYCAETHQTREOHGMPHIRUVGARQGSMDVTXWIFHGGVDSXFEFGQDWXQYAPNMQTJOMGYTBXWSLURDQLNTVMOIOHBDRVHILQNQSEBOSQTUSZFWNCHYGZGIKNMOWBVRQYXCVIFQJBCFABQYUKNHUQYZVKYOVTDGDJDCRIFWJVPRRALIUUZHZLDSRRLHTKQXE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"GLWVIBPRJQDZVOGYJHWYGYBXNMHFITOBDMCTOYUAHNIOPFJP", "MUMNYZSCOWMKGLWVIBPRJQDZVOGYJHWYGYBXNMHFITOBDMCT", "OLZMUSISHBTOXMFWPTVEZHACWHIAVDVKZFYXZFEEUDYKR", "EOFUDUUXLMTUHVWYJLJQTHVFEBYLUFSOCDZHIKPOXWZT", "WBOGTGMNSGGSYUNVVLNQWMFQMXYIQILSPGUJXMPZXYLVQUF", "GTXJNNEHVVXFLCEMUUTCFFXFKKYURLYSRKSGHONQRCARY", "RKSGHONQRCARYVIERZWXTXZFNPBZZXMZOFSBDIPWBOGTGMN", "XOGSFJWPOU", "ZFYXZFEEUDYKROXDLHNTEZPEOFUDUUXLMTUHVWYJ", "SOCDZHIKPOXWZTEIHCJMTXDSDFKTBBIECPAPGTXJ", "YXVDKTUKAUTYAMXRYUFNHKXPZKKEVNYFYYYANXXJJT", "RLCLBFMUETDUZALGMUMNYZSCOWMKGLWVIBPRJQDZVOGYJHWY"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "OLZMUSISHBTOXMFWPTVEZHACWHIAVDVKZFYXZFEEUDYKROXDLHNTEZPEOFUDUUXLMTUHVWYJLJQTHVFEBYLUFSOCDZHIKPOXWZTEIHCJMTXDSDFKTBBIECPAPGTXJNNEHVVXFLCEMUUTCFFXFKKYURLYSRKSGHONQRCARYVIERZWXTXZFNPBZZXMZOFSBDIPWBOGTGMNSGGSYUNVVLNQWMFQMXYIQILSPGUJXMPZXYLVQUFRLCLBFMUETDUZALGMUMNYZSCOWMKGLWVIBPRJQDZVOGYJHWYGYBXNMHFITOBDMCTOYUAHNIOPFJPXOGSFJWPOUYXVDKTUKAUTYAMXRYUFNHKXPZKKEVNYFYYYANXXJJT";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"AGPPOGHRHVXDNGWGIHBCJUE", "YMCDJALSVFSKEVZXCOHTBPECESIWYSJQXSUWPKCAGNELFCNFY", "LQSNOAXCFTPSMMEKYYQKTKEDPKNNNHLHXKLFJDVLLFOPFFOU", "RBBTRXICIYUNVTXANKVRPPTNVCKDRWKMDYRBFQFYVMFQNA", "GVRBBHSIJWBABHXNUPYALIDVDDYSYIODXUNKUJNMTQF", "DDEGTRJRGFRTMQFUSATJOQYLSAWRHBAUWLYQKTTNXWRB", "NVUCDXTDJPNMBNFBCYMCDJALSVFSKEVZXCOHTBPECE", "OSVAINQMKXFSJZCTQCYLSVZSGGXTCOADGFUOMKLADCGNTNRQ", "OBWJILSMLRICLNJYVIYYLQAKJQNHMAWQOJVOTNWNN", "LAZOTIYBMCUPCDZJFMAGPPOGHRHVXDNGWGIHBCJUE", "VFSKEVZXCOHTBPECESIWYSJQXSUWPKCAGNELFCNFYDVTUNY", "IFUEROOZYFHXJBUTXDCYOSVAINQMKXFSJZCTQCYLSVZSGGX"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DDEGTRJRGFRTMQFUSATJOQYLSAWRHBAUWLYQKTTNXWRBBTRXICIYUNVTXANKVRPPTNVCKDRWKMDYRBFQFYVMFQNAGVRBBHSIJWBABHXNUPYALIDVDDYSYIODXUNKUJNMTQFIFUEROOZYFHXJBUTXDCYOSVAINQMKXFSJZCTQCYLSVZSGGXTCOADGFUOMKLADCGNTNRQLAZOTIYBMCUPCDZJFMAGPPOGHRHVXDNGWGIHBCJUELQSNOAXCFTPSMMEKYYQKTKEDPKNNNHLHXKLFJDVLLFOPFFOUOBWJILSMLRICLNJYVIYYLQAKJQNHMAWQOJVOTNWNNVUCDXTDJPNMBNFBCYMCDJALSVFSKEVZXCOHTBPECESIWYSJQXSUWPKCAGNELFCNFYDVTUNY";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"SGNUDZWNHOOVSTBNUEMKZSUXRIHUGNHQDBVGIFEKVBXXBKY", "GRQYMXJTULUCTZMUBDENUUUOFGXXJMAXKPEFCQVGHYWAMQPAKF", "QKLSSTBBYDSNMQULBICCHJXPYAUGRQYMXJTULUCTZMUBDENUUU", "RPRUAKNMKOALTBQYLOGPIYLFNJOJHWABFCVEKZOWDZYNPXUE", "WWPFDLOZCSGSGKIUBUPXHQVSVUIDPVYTPBUQMCOOAUZJYXJFAD", "GZGGVXFDHXEAACZCRTKHASGNUDZWNHOOVSTBNUEMKZSUX", "MSGQAXVKCREDHULGECZNNYQMHBMUUZSHETYNURMI", "WAMQPAKFHZVXLASBIXNYDDNKIUWRIOLCZVZGZGGVXFDH", "VTCJZSVDBKNXWYUSKMKCVTDVZNSCKMPRPRUAKNMKOAL", "YTPBUQMCOOAUZJYXJFADRQEBMVUECYDXFYXXQTPACIEK", "CIUPIVWODGPIARKQNIDCBVTCJZSVDBKNXWYUSKMKCVTDVZNSC", "CREDHULGECZNNYQMHBMUUZSHETYNURMINOUTCGOOBNVEFQKLS"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CIUPIVWODGPIARKQNIDCBVTCJZSVDBKNXWYUSKMKCVTDVZNSCKMPRPRUAKNMKOALTBQYLOGPIYLFNJOJHWABFCVEKZOWDZYNPXUEMSGQAXVKCREDHULGECZNNYQMHBMUUZSHETYNURMINOUTCGOOBNVEFQKLSSTBBYDSNMQULBICCHJXPYAUGRQYMXJTULUCTZMUBDENUUUOFGXXJMAXKPEFCQVGHYWAMQPAKFHZVXLASBIXNYDDNKIUWRIOLCZVZGZGGVXFDHXEAACZCRTKHASGNUDZWNHOOVSTBNUEMKZSUXRIHUGNHQDBVGIFEKVBXXBKYWWPFDLOZCSGSGKIUBUPXHQVSVUIDPVYTPBUQMCOOAUZJYXJFADRQEBMVUECYDXFYXXQTPACIEK";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"BWGCDUCTKLYSKAFQUTYZIBKKBBZHRRNFYTRLBCIE", "YXIFKHWSGOROTCOVGTMQYUCCCXYERAEVJAYMZMSNUR", "NKDHQPLUJRCQYFVLPUDHDCTOFCHMFHWZMYMENHWAYQEZSXAQ", "EXVHNQIYLQDOCCUFIBYPSOMHHZCNBHWJANJLYECRBNXASKYGOF", "FAQUWKJUWFRKBNUKDQSUUXQVWGEWERDKBKUBGMCAJOOSSOYZ", "BYPSOMHHZCNBHWJANJLYECRBNXASKYGOFAQUWKJUWF", "NBHWJANJLYECRBNXASKYGOFAQUWKJUWFRKBNUKDQSUUXQV", "QYFVLPUDHDCTOFCHMFHWZMYMENHWAYQEZSXAQLNBOZCS", "YUCCCXYERAEVJAYMZMSNURTNLRZYBFURGYKCWQYI", "KBKUBGMCAJOOSSOYZXDDWDOLHQGKRODOAWXEP", "IYLQDOCCUFIBYPSOMHHZCNBHWJANJLYECRBNXASKYGOFAQUWKJ", "WBTXTCQRKTWSLWPRYPFUIRRRKNKDHQPLUJRCQYFVLPUDHDCTO"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BWGCDUCTKLYSKAFQUTYZIBKKBBZHRRNFYTRLBCIEXVHNQIYLQDOCCUFIBYPSOMHHZCNBHWJANJLYECRBNXASKYGOFAQUWKJUWFRKBNUKDQSUUXQVWGEWERDKBKUBGMCAJOOSSOYZXDDWDOLHQGKRODOAWXEPWBTXTCQRKTWSLWPRYPFUIRRRKNKDHQPLUJRCQYFVLPUDHDCTOFCHMFHWZMYMENHWAYQEZSXAQLNBOZCSYXIFKHWSGOROTCOVGTMQYUCCCXYERAEVJAYMZMSNURTNLRZYBFURGYKCWQYI";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"TWOMBBRZUSPJPGXVYPDACEFCRDQHNNHVYPSKBPJFBWZKGRCQC", "PGXVYPDACEFCRDQHNNHVYPSKBPJFBWZKGRCQCCOLIVTOOL", "XGGRMMCWZJZILXKOQHNGANGWMRGPVZZDOISGBTEBSA", "JPGXVYPDACEFCRDQHNNHVYPSKBPJFBWZKGRCQCCOLIVTOOLBKT", "MSLHYJPUKUTVKCGLCXTELAHJOHPGIZQDIJXYFRNDIS", "KGRCQCCOLIVTOOLBKTCLEYLJZUOFKOAHHRMYZGEXOPWAWSVDNG", "PVCXRLXVSJIABOMSHYZSCEAVTYJAFNF", "VRUCMMOPDOUCNFNSEWCRUZAPRYXACEFUTSLJPKPVCXRLXVSJI", "WNCBRQCAHMSVBJUHUGJGGZNPBZXRREECXDPNUAGLTOAPD", "MHQXRYLKCEIDOKNUEMPKVRVXTWOMBBRZUSPJPGXVYPDACE", "VYPSKBPJFBWZKGRCQCCOLIVTOOLBKTCLEYLJZUOFKOAH", "SDCODJYESFIGJDWYXJWWEFANTWQDVVQDXBRNSEKYES"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "MHQXRYLKCEIDOKNUEMPKVRVXTWOMBBRZUSPJPGXVYPDACEFCRDQHNNHVYPSKBPJFBWZKGRCQCCOLIVTOOLBKTCLEYLJZUOFKOAHHRMYZGEXOPWAWSVDNGMSLHYJPUKUTVKCGLCXTELAHJOHPGIZQDIJXYFRNDISDCODJYESFIGJDWYXJWWEFANTWQDVVQDXBRNSEKYESVRUCMMOPDOUCNFNSEWCRUZAPRYXACEFUTSLJPKPVCXRLXVSJIABOMSHYZSCEAVTYJAFNFWNCBRQCAHMSVBJUHUGJGGZNPBZXRREECXDPNUAGLTOAPDXGGRMMCWZJZILXKOQHNGANGWMRGPVZZDOISGBTEBSA";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"PIXUQXNFRGCTUITXYARWWLTGXLDGEKVDBWCMVEDGNQRF", "JCYUMHJBNBNLPQRKWEYBDTAXQKWDVJRJIXJNXHLXVCCF", "KXVJEHMRXKDBBXVJVWQQWXFPQOHLSYYUBQCMUVIOBZYECTN", "GUXRSAMDFDPUULXTIOWDHVVGTPZMLRZUZWMXRMKAEDMXFFPUG", "WQQWXFPQOHLSYYUBQCMUVIOBZYECTNRBISKKJSEI", "IOXXPZAGVJJSFWLUVJPXNSYUFHXIMFUSFVSACXJRCIODWDANIA", "WXFPQOHLSYYUBQCMUVIOBZYECTNRBISKKJSEICATMI", "VGTPZMLRZUZWMXRMKAEDMXFFPUGQQKDKCEZUCUSSQEFRMIT", "ZYECTNRBISKKJSEICATMILNHWKQVQYBQLIQGCIIRSDYVD", "SEICATMILNHWKQVQYBQLIQGCIIRSDYVDDNUGBFIWMX", "CGSWFREMSPIUEWBKNCOPIHEJMUOCGQQAGHJQHUMY", "ATMILNHWKQVQYBQLIQGCIIRSDYVDDNUGBFIWMXL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CGSWFREMSPIUEWBKNCOPIHEJMUOCGQQAGHJQHUMYGUXRSAMDFDPUULXTIOWDHVVGTPZMLRZUZWMXRMKAEDMXFFPUGQQKDKCEZUCUSSQEFRMITIOXXPZAGVJJSFWLUVJPXNSYUFHXIMFUSFVSACXJRCIODWDANIAJCYUMHJBNBNLPQRKWEYBDTAXQKWDVJRJIXJNXHLXVCCFKXVJEHMRXKDBBXVJVWQQWXFPQOHLSYYUBQCMUVIOBZYECTNRBISKKJSEICATMILNHWKQVQYBQLIQGCIIRSDYVDDNUGBFIWMXLPIXUQXNFRGCTUITXYARWWLTGXLDGEKVDBWCMVEDGNQRF";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"VQBLOKCFGHTHQXBOAXGMMPPTRSJWTVLJBRLCVQGSGYWDDUAIQQ", "WMMEEISJIVPTVSHXHABFREBDLDVHMXUMFTLNHKVI", "WFNJTIGAEPHSXAZOHUWEQQNMYVAZDNZGBZCCBFXZFMRHNSHOFV", "KFSVAAJMDXSCEXUJULYTLTAQFFXEYDNNKQTQVBJLPZUS", "HFEMZZWFGQVKTZYNYWQXHXUJTVATRAHPXEWMMEEISJIVPTVSHX", "RJACNMHFDWLLINWQGQKUHVNUNLOHDGRFKCPYDHLDNAWTM", "FLNEMOORJACNMHFDWLLINWQGQKUHVNUNLOHDGRFKCP", "KBEPYLLCHPZNKFSVAAJMDXSCEXUJULYTLTAQFFXEYDN", "NAWTMMZGWXVTIWHJHFEMZZWFGQVKTZYNYWQXHXUJTVATR", "KTNQXGWKTCPCODOKWYDUTNUVIGJLZKBEPYLLCHPZNKF", "LNJIKXKUSBLAFJWCNFLAHXOPYNIIGQGNSIMWVXMUX", "CEPSXYSUHNOZDKGTMGDIDWHCHYVAEXPVQNFJEOIOUZRK"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "CEPSXYSUHNOZDKGTMGDIDWHCHYVAEXPVQNFJEOIOUZRKTNQXGWKTCPCODOKWYDUTNUVIGJLZKBEPYLLCHPZNKFSVAAJMDXSCEXUJULYTLTAQFFXEYDNNKQTQVBJLPZUSFLNEMOORJACNMHFDWLLINWQGQKUHVNUNLOHDGRFKCPYDHLDNAWTMMZGWXVTIWHJHFEMZZWFGQVKTZYNYWQXHXUJTVATRAHPXEWMMEEISJIVPTVSHXHABFREBDLDVHMXUMFTLNHKVILNJIKXKUSBLAFJWCNFLAHXOPYNIIGQGNSIMWVXMUXWFNJTIGAEPHSXAZOHUWEQQNMYVAZDNZGBZCCBFXZFMRHNSHOFVQBLOKCFGHTHQXBOAXGMMPPTRSJWTVLJBRLCVQGSGYWDDUAIQQ";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"GIEVRWGAHJKCWKYVLRILKDZPPKFTJQNLGUVUQDJPZUJ", "HXAVFYSHDFTHOSRRXKEAWXXZHBGTVGVMOGRATUFFTVAHVFJTU", "YSKQGIEVRWGAHJKCWKYVLRILKDZPPKFTJQNLGUVUQDJP", "WLQQIXQYCOZRXPTTGJXTYTKQHFEHXZAUNOQEOIDDX", "HGSJCQNWATLCAFWFWPTHPIIDTPCRXKTPABGVZVPUV", "KASLIBNQBSGR", "XTGNVKVYQWMFDROCVHXAVFYSHDFTHOSRRXKEAWXXZHBGTVG", "AVSBEOPKHGEFTABMFTFNMSPXMGYBBLQEPFFNEIJWCQENKCOA", "PTHPIIDTPCRXKTPABGVZVPUVQBXHWTJLGGOMMPLODOAGWKURM", "DROCVHXAVFYSHDFTHOSRRXKEAWXXZHBGTVGVMOGRATU", "NWOMAUVJVGGBQSTPYAPBFLDZEMKCRXTGNVKVYQWMFDROCVH", "CPKJFSFBWXOSEIDZKASLIBNQBSGR"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AVSBEOPKHGEFTABMFTFNMSPXMGYBBLQEPFFNEIJWCQENKCOACPKJFSFBWXOSEIDZKASLIBNQBSGRHGSJCQNWATLCAFWFWPTHPIIDTPCRXKTPABGVZVPUVQBXHWTJLGGOMMPLODOAGWKURMNWOMAUVJVGGBQSTPYAPBFLDZEMKCRXTGNVKVYQWMFDROCVHXAVFYSHDFTHOSRRXKEAWXXZHBGTVGVMOGRATUFFTVAHVFJTUWLQQIXQYCOZRXPTTGJXTYTKQHFEHXZAUNOQEOIDDXYSKQGIEVRWGAHJKCWKYVLRILKDZPPKFTJQNLGUVUQDJPZUJ";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"OQNQSUNOVPVUZOMEMVDNKJBUURPHISXCYRYCMNKFVIQUYIBCX", "JAOAIFWCFTLBMOSNXYFEDQVSYDVMQWLTDVIBYMNVCBZ", "FYEEVUIOWHCCKKFAGSRGUPOQNQSUNOVPVUZOMEMVDNKJBU", "QNQSUNOVPVUZOMEMVDNKJBUURPHISXCYRYCMNKFVIQU", "VUZOMEMVDNKJBUURPHISXCYRYCMNKFVIQUYIBCXNTEVSG", "VSGSHTIATFQKMIKVVCFXLGJOFJMJJLTKCLEPITJBOOVJV", "OABZWDODHRQZWAWFECZWEBBXLFJTHWGXMPKCNAQPAEFZ", "BEMORAMFRGRPMTNBPDYQFBOWZXXJBDYZPXDHBNPFUINBJS", "XVLYADXTVNAHFWYTRTRIIDYJWVZAMZSKZMSWNBSSAZRHDX", "IKSKBIXBXDXJRMOBRIJEFXIGVRHAVXSRLPOHDCCA", "IXBXDXJRMOBRIJEFXIGVRHAVXSRLPOHDCCAZPEAFFGEVHVCBKK", "EPITJBOOVJVXGSONEXIWWHTTIARXJVQFXFFAWATWZROUZ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BEMORAMFRGRPMTNBPDYQFBOWZXXJBDYZPXDHBNPFUINBJSFYEEVUIOWHCCKKFAGSRGUPOQNQSUNOVPVUZOMEMVDNKJBUURPHISXCYRYCMNKFVIQUYIBCXNTEVSGSHTIATFQKMIKVVCFXLGJOFJMJJLTKCLEPITJBOOVJVXGSONEXIWWHTTIARXJVQFXFFAWATWZROUZIKSKBIXBXDXJRMOBRIJEFXIGVRHAVXSRLPOHDCCAZPEAFFGEVHVCBKKJAOAIFWCFTLBMOSNXYFEDQVSYDVMQWLTDVIBYMNVCBZOABZWDODHRQZWAWFECZWEBBXLFJTHWGXMPKCNAQPAEFZXVLYADXTVNAHFWYTRTRIIDYJWVZAMZSKZMSWNBSSAZRHDX";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"YPFEUNCGRDBBAPKFPSISQNPQPWKMKQJFVVFEQBZABTZWGWHX", "SUWQTSTBTTJXISNVOWBAYBFBGLNBFEVDCHOFOIKAVNHOIBIL", "XKIJJTNBZONGVRBFDAIDKWALQXJRSQCZMYEQTZLHHVQFGM", "ACYIZEEBXPPTBOZFEMJQQHNURHDRJSKCCRDIJYPU", "PCXMLXNYMGSTELLQEJGPIERLYKPHLZNCWTAXVPOW", "OLORNOBXRXYMUPXPENAGSMJOEIDUCOXKIJJTNBZONGVRB", "MBBRNZCTPRSLNEOXZTQVWNYZQBALMVGQFPOVQMGDONOGY", "LBEZDDCQSMRBLZOYPFEUNCGRDBBAPKFPSISQNPQPWKMKQJFVVF", "DONOGYYWECOLORNOBXRXYMUPXPENAGSMJOEIDUCOXKI", "EZGJHINXBVBZSHUSOAVRPAENZNTDCMBFMAPCXMLXNYMGSTELL", "HXHCGQWFDHVHAFMJXAMVRJWXYPQKOQDOGJLTQQHT", "ZXFEFFHWXSWCMYMIDYJPNYYMNSCVEUA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "EZGJHINXBVBZSHUSOAVRPAENZNTDCMBFMAPCXMLXNYMGSTELLQEJGPIERLYKPHLZNCWTAXVPOWMBBRNZCTPRSLNEOXZTQVWNYZQBALMVGQFPOVQMGDONOGYYWECOLORNOBXRXYMUPXPENAGSMJOEIDUCOXKIJJTNBZONGVRBFDAIDKWALQXJRSQCZMYEQTZLHHVQFGMSUWQTSTBTTJXISNVOWBAYBFBGLNBFEVDCHOFOIKAVNHOIBILBEZDDCQSMRBLZOYPFEUNCGRDBBAPKFPSISQNPQPWKMKQJFVVFEQBZABTZWGWHXHCGQWFDHVHAFMJXAMVRJWXYPQKOQDOGJLTQQHTZXFEFFHWXSWCMYMIDYJPNYYMNSCVEUACYIZEEBXPPTBOZFEMJQQHNURHDRJSKCCRDIJYPU";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"BEEQEEIYCERIOUPHAPYLHNEDZOAHMIBCGHVWTWBJFNRRKORMSR", "XFJHQQXKOQARGVEFFFVNLEJRACMCVYUMEVDEZZCB", "LLPBOFLDGGLTNKKAZINQKHWDZMQUDYBVKNGDITNJ", "VHAUMLGSRHPUEWMPOYNCVRCOQMKDFSNMNXKLJXEBWQFQUTMYP", "UYTDHNOOFVEVGRHPQZNEJGOHUCYLJMIJSPROZTTJLQLLEXFJHQ", "IZHJUIJEMGTEBTBJCSRSKSBJNYAKJOPCPVYRAKRNKRPWRX", "OZTTJLQLLEXFJHQQXKOQARGVEFFFVNLEJRACMCVYUMEVDEZZ", "NRAUYTDHNOOFVEVGRHPQZNEJGOHUCYLJMIJSPROZTTJLQLL", "EBUCUKHCUUFXTMHIYVMLUEMDQTPPOGSPTRXEZIZHJUIJEMGTEB", "SFKQWSWNVEYVCZIBJNIYPPCWGFHVDYJDQWYHDPYDKRLG", "OVYGUIVSUQTZOVSEEBUCUKHCUUFXTMHIYVMLUEMDQTPPO", "QUTMYPSHWIYEHPJVZCXLKQDCXUTTSBRMHIMMUUOOVYGUI"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "LLPBOFLDGGLTNKKAZINQKHWDZMQUDYBVKNGDITNJNRAUYTDHNOOFVEVGRHPQZNEJGOHUCYLJMIJSPROZTTJLQLLEXFJHQQXKOQARGVEFFFVNLEJRACMCVYUMEVDEZZCBEEQEEIYCERIOUPHAPYLHNEDZOAHMIBCGHVWTWBJFNRRKORMSRSFKQWSWNVEYVCZIBJNIYPPCWGFHVDYJDQWYHDPYDKRLGVHAUMLGSRHPUEWMPOYNCVRCOQMKDFSNMNXKLJXEBWQFQUTMYPSHWIYEHPJVZCXLKQDCXUTTSBRMHIMMUUOOVYGUIVSUQTZOVSEEBUCUKHCUUFXTMHIYVMLUEMDQTPPOGSPTRXEZIZHJUIJEMGTEBTBJCSRSKSBJNYAKJOPCPVYRAKRNKRPWRX";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"VLIFIYWSSKNSDGVTFMFZWSIBHLFWPYVLKIVAFQJE", "IBYEQJWLWLCFLNWTMWFDZYATBEICCGWRZJKREFIJQPJM", "JNJRDIOFIVOKFCGYTRBRMQVJYVPFEEZQJAESYNEACDTKPWJUS", "UXBRGAIDFDWTDBJETPDEUKJPNWZIBYEQJWLWLCFLNWTMWFDZYA", "IOFIVOKFCGYTRBRMQVJYVPFEEZQJAESYNEACDTKPWJUSGHBT", "KOGXLTPDVMWYASYZIORQVOIKLOMNOQZFIMPYJTJXYSFR", "UNCMUQBUFGJZSSYYVROKWNIDOJQDQGKMSKVOBGZQEE", "DNEOBCCCEAMQOWFIEAYRVAPRQQSDDVDRBBJIGIUJQABQ", "MSKVOBGZQEEARYZSUXBRGAIDFDWTDBJETPDEUKJPNWZ", "BJIGIUJQABQJDFJWARXDJUCSXVTRNZFRVKOGXLTPDVMWYA", "IEAYRVAPRQQSDDVDRBBJIGIUJQABQJDFJWARXDJUCSXV", "IYWSSKNSDGVTFMFZWSIBHLFWPYVLKIVAFQJERDVHQE"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DNEOBCCCEAMQOWFIEAYRVAPRQQSDDVDRBBJIGIUJQABQJDFJWARXDJUCSXVTRNZFRVKOGXLTPDVMWYASYZIORQVOIKLOMNOQZFIMPYJTJXYSFRJNJRDIOFIVOKFCGYTRBRMQVJYVPFEEZQJAESYNEACDTKPWJUSGHBTUNCMUQBUFGJZSSYYVROKWNIDOJQDQGKMSKVOBGZQEEARYZSUXBRGAIDFDWTDBJETPDEUKJPNWZIBYEQJWLWLCFLNWTMWFDZYATBEICCGWRZJKREFIJQPJMVLIFIYWSSKNSDGVTFMFZWSIBHLFWPYVLKIVAFQJERDVHQE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"JYYRJDGAROZYXKHRFRAFICQAMUFFONINDZFLLGSL", "YDKMJQUHBFFXZEZSAUUDPHADKJXIENBTCRVWONYALGVWDVCV", "BEAUYFHPVFGQQNMLKAGXUBHYFSOJBRQPQZMKXITUTS", "KQRQYCUHFXSBMZGGOFPEBKBZYFOXVCBPIUUGSSSIXEI", "XHWMXYQVZPLOGXBWHBEAUYFHPVFGQQNMLKAGXUBHYF", "LMROVFGODOCNBUXVRWOWSZTDCJOCODARGRDZZMATUJTYUZVM", "IHHQXMXFXJNXUCENSLPFGLWRMOMUXPLMROVFGODOCNBUXVRW", "QUHBFFXZEZSAUUDPHADKJXIENBTCRVWONYALGVWDVCVLQA", "FDZQGNQKTSOUZHVBNIDSGVCZDYMTETITFPGSQSBFKRWB", "SBUUEEIRAPNVYFLHDPMULRRELDQELPUOLUDUEYDK", "DFHSBZSWZQFAHGXXMGQMBAZDQGEAHEMONAYUNIKAM", "OJBRQPQZMKXITUTSLIHHQXMXFXJNXUCENSLPFGLWRMOMUX"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DFHSBZSWZQFAHGXXMGQMBAZDQGEAHEMONAYUNIKAMFDZQGNQKTSOUZHVBNIDSGVCZDYMTETITFPGSQSBFKRWBJYYRJDGAROZYXKHRFRAFICQAMUFFONINDZFLLGSLKQRQYCUHFXSBMZGGOFPEBKBZYFOXVCBPIUUGSSSIXEISBUUEEIRAPNVYFLHDPMULRRELDQELPUOLUDUEYDKMJQUHBFFXZEZSAUUDPHADKJXIENBTCRVWONYALGVWDVCVLQAXHWMXYQVZPLOGXBWHBEAUYFHPVFGQQNMLKAGXUBHYFSOJBRQPQZMKXITUTSLIHHQXMXFXJNXUCENSLPFGLWRMOMUXPLMROVFGODOCNBUXVRWOWSZTDCJOCODARGRDZZMATUJTYUZVM";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"DRKCMLNUZUXEJWFAASWSVFKWMOZEDBYWSUKQEBCMYYWSUEHHV", "EDZOAJUPCVOPETAEQPLJSQEQAWICTXWTSONDWKLXKQDWGVW", "IAKVQMXUOTDLCYRTSSIFETMJFIMBAZPHVKFINEYZIMFX", "TNXUVVRFBAIWKFYLEVQPFUPMGTNUKFEVJIWLXVZAKPM", "FXOYMBRDTJEGPMHHIUIZXXKBVBTQCKIALDCCXZLJY", "DKEDZOAJUPCVOPETAEQPLJSQEQAWICTXWTSONDWKLXKQDWGV", "XZFEGBLGTTWCQSOTUDCOPYXMPLNTITNJEEGIEHCDTFTXSYRB", "ONDWKLXKQDWGVWGTHZMKPTIMJWREKAIXZFEGBLGTTWCQSOT", "IPDUQWODPPBVJXLYZCIAKVQMXUOTDLCYRTSSIFETMJ", "TVWKPZXQDTEYAEQGWPFXOYMBRDTJEGPMHHIUIZXXKBV", "OMUKOOOAPFPZLIZPSGERTKSRJOIRLJLQGWHSGVGH", "BVJXLYZCIAKVQMXUOTDLCYRTSSIFETMJFIMBAZPHVKFI"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DKEDZOAJUPCVOPETAEQPLJSQEQAWICTXWTSONDWKLXKQDWGVWGTHZMKPTIMJWREKAIXZFEGBLGTTWCQSOTUDCOPYXMPLNTITNJEEGIEHCDTFTXSYRBDRKCMLNUZUXEJWFAASWSVFKWMOZEDBYWSUKQEBCMYYWSUEHHVIPDUQWODPPBVJXLYZCIAKVQMXUOTDLCYRTSSIFETMJFIMBAZPHVKFINEYZIMFXOMUKOOOAPFPZLIZPSGERTKSRJOIRLJLQGWHSGVGHTNXUVVRFBAIWKFYLEVQPFUPMGTNUKFEVJIWLXVZAKPMTVWKPZXQDTEYAEQGWPFXOYMBRDTJEGPMHHIUIZXXKBVBTQCKIALDCCXZLJY";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"EDVZRAPOAKKQUVDNNADLOHJBHYHZBAGCEFQXSKQRWPXM", "ZBAGCEFQXSKQRWPXMSLRUQRYCFPVIYHGKBVCJUHPDXRRYGZPY", "PUSXZVXYZWMTZEYSECGYCIXGQKFMPXNWSLASZWKSHZBWYFTFVH", "AOCAWIUIOIZEOBZWJVIFYKPKOHCGFJUONRVVTKNIDRRTAIQ", "NKMPIOEYBFUZUUQNHSUQKDEPAXTNQGGOMXSWOURBTM", "XMSLRUQRYCFPVIYHGKBVCJUHPDXRRYGZPYYYQJNEECEVUG", "ODZAKNGTRDSKCPKWHRAKAAIPUSXZVXYZWMTZEYSECGYCIXGQKF", "OURBTMLXKYSUDIBRBZWPSDWNHGSAFVIOLVSXMWMXU", "YIGUCCBDTHKDHWJONQKMEGJCFLYFGGWHUA", "WFBOFDGFAOBRISHQYXDLZMWBRFOJBBWKXKEDVZRAPOAKKQUVDN", "GYCIXGQKFMPXNWSLASZWKSHZBWYFTFVHTFPCZRYJAJVVVM", "RAPOAKKQUVDNNADLOHJBHYHZBAGCEFQXSKQRWPXMSL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "NKMPIOEYBFUZUUQNHSUQKDEPAXTNQGGOMXSWOURBTMLXKYSUDIBRBZWPSDWNHGSAFVIOLVSXMWMXUODZAKNGTRDSKCPKWHRAKAAIPUSXZVXYZWMTZEYSECGYCIXGQKFMPXNWSLASZWKSHZBWYFTFVHTFPCZRYJAJVVVMWFBOFDGFAOBRISHQYXDLZMWBRFOJBBWKXKEDVZRAPOAKKQUVDNNADLOHJBHYHZBAGCEFQXSKQRWPXMSLRUQRYCFPVIYHGKBVCJUHPDXRRYGZPYYYQJNEECEVUGYIGUCCBDTHKDHWJONQKMEGJCFLYFGGWHUAOCAWIUIOIZEOBZWJVIFYKPKOHCGFJUONRVVTKNIDRRTAIQ";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"A"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"B"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"AB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"A", "B", "AB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"A", "B", "BA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"A", "B", "BA", "BA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"ABDEA", "BDE"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDEA";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"ABDERC", "BDE", "DER"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDERC";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"BDE", "DER", "ABDERC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDERC";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"ABDERC", "RCGT", "ERCG"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDERCGT";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "YAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "XAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "WAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "VAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "UAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "UAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABVAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADXAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAFZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAI", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAK", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAL", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAFAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "YAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "XAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "WAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "VAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "UAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "TAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "SAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "RAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "QAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "PAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "OAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "OAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAASAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAATAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAVAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAXAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYB", "ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYC", "ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYD", "ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYE", "ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYF", "ABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYG", "ZABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY", "YABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY", "XABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY", "WABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY", "VABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY", "UABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGY"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "UABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYBVABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYCWABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYDXABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYEYABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYFZABETSHJQIJBCAYRNDDQEPHIYNAHYEWNJEKLUHOILRGPHILMGYG";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"ZDRDOIJDPMOURXHSOTKYABRIBZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRICZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIDZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIEZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIFZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIGZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIHZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIIZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIJZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIKZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRILZDRDOIJDPMOURXHSOTKYABRI", "ZDRDOIJDPMOURXHSOTKYABRIMZDRDOIJDPMOURXHSOTKYABRI"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZDRDOIJDPMOURXHSOTKYABRIBZDRDOIJDPMOURXHSOTKYABRICZDRDOIJDPMOURXHSOTKYABRIDZDRDOIJDPMOURXHSOTKYABRIEZDRDOIJDPMOURXHSOTKYABRIFZDRDOIJDPMOURXHSOTKYABRIGZDRDOIJDPMOURXHSOTKYABRIHZDRDOIJDPMOURXHSOTKYABRIIZDRDOIJDPMOURXHSOTKYABRIJZDRDOIJDPMOURXHSOTKYABRIKZDRDOIJDPMOURXHSOTKYABRILZDRDOIJDPMOURXHSOTKYABRIMZDRDOIJDPMOURXHSOTKYABRI";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"UYNYVNTKNVBDXZURKOKYOELNBZUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNCYUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNDXUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNEWUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNFVUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNGUUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNZBUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNYCUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNXDUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNWEUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNVFUYNYVNTKNVBDXZURKOKYOELN", "UYNYVNTKNVBDXZURKOKYOELNUGUYNYVNTKNVBDXZURKOKYOELN"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "UYNYVNTKNVBDXZURKOKYOELNBZUYNYVNTKNVBDXZURKOKYOELNCYUYNYVNTKNVBDXZURKOKYOELNDXUYNYVNTKNVBDXZURKOKYOELNEWUYNYVNTKNVBDXZURKOKYOELNFVUYNYVNTKNVBDXZURKOKYOELNGUUYNYVNTKNVBDXZURKOKYOELNUGUYNYVNTKNVBDXZURKOKYOELNVFUYNYVNTKNVBDXZURKOKYOELNWEUYNYVNTKNVBDXZURKOKYOELNXDUYNYVNTKNVBDXZURKOKYOELNYCUYNYVNTKNVBDXZURKOKYOELNZBUYNYVNTKNVBDXZURKOKYOELN";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"QUKXCSWLOTNFJSOQIZVEAAKNBCQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNCDQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNDEQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNEFQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNFGQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNGHQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNHIQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNIJQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNJKQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNKLQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNLMQUKXCSWLOTNFJSOQIZVEAAKN", "QUKXCSWLOTNFJSOQIZVEAAKNMBQUKXCSWLOTNFJSOQIZVEAAKN"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "QUKXCSWLOTNFJSOQIZVEAAKNBCQUKXCSWLOTNFJSOQIZVEAAKNCDQUKXCSWLOTNFJSOQIZVEAAKNDEQUKXCSWLOTNFJSOQIZVEAAKNEFQUKXCSWLOTNFJSOQIZVEAAKNFGQUKXCSWLOTNFJSOQIZVEAAKNGHQUKXCSWLOTNFJSOQIZVEAAKNHIQUKXCSWLOTNFJSOQIZVEAAKNIJQUKXCSWLOTNFJSOQIZVEAAKNJKQUKXCSWLOTNFJSOQIZVEAAKNKLQUKXCSWLOTNFJSOQIZVEAAKNLMQUKXCSWLOTNFJSOQIZVEAAKNMBQUKXCSWLOTNFJSOQIZVEAAKN";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"KOXGCXVTJOEUJIOUQCDRWECUEFKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUFGKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUGHKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUHIKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUIJKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUJKKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUKLKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECULMKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUMBKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUBCKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUCDKOXGCXVTJOEUJIOUQCDRWECU", "KOXGCXVTJOEUJIOUQCDRWECUDEKOXGCXVTJOEUJIOUQCDRWECU"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "KOXGCXVTJOEUJIOUQCDRWECUBCKOXGCXVTJOEUJIOUQCDRWECUCDKOXGCXVTJOEUJIOUQCDRWECUDEKOXGCXVTJOEUJIOUQCDRWECUEFKOXGCXVTJOEUJIOUQCDRWECUFGKOXGCXVTJOEUJIOUQCDRWECUGHKOXGCXVTJOEUJIOUQCDRWECUHIKOXGCXVTJOEUJIOUQCDRWECUIJKOXGCXVTJOEUJIOUQCDRWECUJKKOXGCXVTJOEUJIOUQCDRWECUKLKOXGCXVTJOEUJIOUQCDRWECULMKOXGCXVTJOEUJIOUQCDRWECUMBKOXGCXVTJOEUJIOUQCDRWECU";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"ERFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCE", "FRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCF", "GRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCG", "HRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCH", "IRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCI", "JRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCJ", "KRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCK", "LRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCL", "MRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCM", "BRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCB", "CRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCC", "DRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCD"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCBCRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCCDRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCDERFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCEFRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCFGRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCGHRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCHIRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCIJRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCJKRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCKLRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCLMRFKZTLZYNUKPRPCZFBMPLNMIGPBOCFLZCOLQMKPMUZYKGLZCM";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"EPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIME", "FPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMF", "GPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMG", "HPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMH", "IPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMI", "JPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMJ", "KPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMK", "LPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIML", "MPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMM", "BPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMB", "CPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMC", "DPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMD"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMBCPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMCDPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMDEPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMEFPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMFGPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMGHPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMHIPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMIJPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMJKPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMKLPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMLMPTWBKSTRVHXAFKDWXEOTIXACFFIGIIAPWWACTTGVEWQVIRIMM";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"BPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATC", "DPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATE", "FPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATG", "HPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATI", "JPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATK", "LPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATM", "NPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATO", "PPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQ", "RPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATS", "TPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATU", "VPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATW", "XPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATCDPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATEFPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATGHPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATIJPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATKLPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATMNPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATOPPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQRPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATSTPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATUVPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATWXPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"APLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATC", "DPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATE", "FPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATG", "HPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATI", "JPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATK", "LPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATM", "NPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATO", "PPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQ", "RPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATS", "TPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATU", "VPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATA", "XPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATEFPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATGHPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATIJPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATKLPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATMNPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATOPPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQRPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATSTPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATUVPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATAPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATCXPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"APLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATC", "DPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATE", "FPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATG", "HPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATI", "JPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATK", "LPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATM", "NPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATO", "PPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQ", "RPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATS", "TPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATU", "VPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATB", "XPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "APLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATCDPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATEFPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATGHPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATIJPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATKLPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATMNPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATOPPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATQRPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATSTPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATUVPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATBXPLYYRSFHSDCZJRCXXNDYACRNXWIDGXVRUJOEIVSQDPVVYOATY";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"AAAAABBABBAABABABBAABBABBAABABBBBBBBAAAA", "BABAAAABAAAAAABBABBAABABABBAABBABBAABABB", "BABAABAAABAABAAAABABABABBABABBAAAAABAAABABBBA", "AAABABBBBABBABBBBABBBBABBABBBABAAABBABABABBBBABAAB", "BABAAAABAAAAAABBABBAABABABBAABBABBAABABBBBBBB", "ABAAABABBABABABBABBBBAAAAAAAABAAABBBBAAAB", "ABABABABBABABBAAAAABAAABABBBABBBABAAAABAAAAAABB", "BBBAAAAAAAABAAABBBBAAABBABBBBBAAABBBBAAABB", "BABAABABABBABBBAABABAAABABBABABABBABBBBAAAAAAAABA", "BBAABAAAABBBBAAAABABAAAAABBABABABABBBBAA", "BBBAAAAABBABBAABBAAAABBAAABABAABABAABBAABAAAA", "BBAABBBAABBBBABBBABAABABABBABBBAABABAAABABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABABBBBABBABBBBABBBBABBABBBABAAABBABABABBBBABAABAAABAABAAAABABABABBABABBAAAAABAAABABBBABBBABAAAABAAAAAABBABBAABABABBAABBABBAABABBBBBBBAAAAABBABBAABBAAAABBAAABABAABABAABBAABAAAABBBBAAAABABAAAAABBABABABABBBBAABBBAABBBBABBBABAABABABBABBBAABABAAABABBABABABBABBBBAAAAAAAABAAABBBBAAABBABBBBBAAABBBBAAABB";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"AABABBABAABAABAABBBABBABBBAABBAABBBBBAABBAAAB", "AAABAABABBBAAAABBABBABABAABABBBABBAABABBAAABABABA", "BBAABAAABABABAABBAAAABBABAABBBBAAAAAABAABABBBAA", "BABAABABBBABBAABABBAAABABABABABBBAAAABABBAB", "ABAABBABAABAAABBBBABABBAABABBABBAABAAABA", "ABAABBABAABAAABBBBABABBAABABBABBAABAAABABAB", "BBABBABBBAABBAABBBBBAABBAAABBBBAAABBBBAAAA", "BAABAABABBBAAABABBBBABBABABBBABABBABAABABBBBBA", "BABAABAAABBBBABABBAABABBABBAABAAABABABAABBA", "ABAABABBBABABAAABBBBBABBABABBAABABABABBBAAAAABAB", "BBBAABBAAABBBBAAABBBBAAAAAAAABBBBABBBABAABABBBABAB", "AAABAAABABAAAAABBAABBBAABBABABBABBBABBBAAAAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABAAABABAAAAABBAABBBAABBABABBABBBABBBAAAABAABBABAABAAABBBBABABBAABABBABBAABAAABABABAABBAAAABBABAABBBBAAAAAABAABABBBAAAABBABBABABAABABBBABBAABABBAAABABABABABBBAAAABABBABAABAABAABBBABBABBBAABBAABBBBBAABBAAABBBBAAABBBBAAAAAAAABBBBABBBABAABABBBABABAAABBBBBABBABABBAABABABABBBAAAAABABAABAABABBBAAABABBBBABBABABBBABABBABAABABBBBBA";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"ABAAABBABABBABBAABBABAABABBBABBAAABBABBB", "ABBABAABABBBABBAAABBABBBABAAAABBBBAABABBBBAAAABA", "BBBAAABBAABAABAABABBAAAABBABBAAAABABABBAB", "BABBBBBAABAB", "BABBAABAAAAABBAAABBABAAAABBBBAABBAABBAAAABAAAAA", "ABBBAABBBAAABBAABAABAABABBAAAABBABBAAAAB", "AABAABBBABAABBBBBBBAAAAABBBABAAAAAABABABBAAAABAAAB", "ABBAAABBABBBABAAAABBBBAABABBBBAAAABABBBBBBBAA", "BBABBBBAAAABAAAABABABABBABBBAABBBAAABBAABAABAAB", "ABAABBBABAABBBBBBBAAAAABBBABAAAAAABABABB", "BAAABAABABBABAAAAAAAABAAABBAAAAABBAABBAA", "BABAAAAAAAABAAABBAAAAABBAABBAABAAABBABABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABBBBAAAABAAAABABABABBABBBAABBBAAABBAABAABAABABBAAAABBABBAAAABABABBABBBBBAABABBAABAAAAABBAAABBABAAAABBBBAABBAABBAAAABAAAAABAABBBABAABBBBBBBAAAAABBBABAAAAAABABABBAAAABAAABAABABBABAAAAAAAABAAABBAAAAABBAABBAABAAABBABABBABBAABBABAABABBBABBAAABBABBBABAAAABBBBAABABBBBAAAABABBBBBBBAA";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"BBBABBBBABBAAAABABBABAABBABAABABBBABAABBBABAB", "BABBABBABBBABAABBBBBBABAAA", "BBBBABBABBBAAAABBBABAAABAAAABBAABBBBBBBBABAB", "AABBBABBAAABABBABABBABBABBABBBABAABBBBBBAB", "BABAAABABABBABBBAAABBBABBBBBBBABAABBABAAAAAAAABB", "BABAABBBABABBBBABABBABBBBBABAAAAABBABABAABABBABB", "ABBABAAAAAAAABBBBAABBBBBAABBBAAABBBBABAABBAAA", "ABABAAABBBBBBBAABBBBBBBBABBBBAABBABBABBABAAAAAAAAA", "BBAAAAAABBBABABBBABBAABABBBBBBBAAAABABBBBABBABBBAA", "BABBAABABBBBBBBAAAABABBBBABBABBBAAAABBBABAAABAAAAB", "BABBBBAABBABBABBABAAAAAAAAAABAABAABBAABBAABAA", "BBBABBBBBBBABAABBABAAAAAAAABBBBAABBBBBAABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBBABBAAABABBABABBABBABBABBBABAABBBBBBABAAABABABBABBBAAABBBABBBBBBBABAABBABAAAAAAAABBBBAABBBBBAABBBAAABBBBABAABBAAAAAABBBABABBBABBAABABBBBBBBAAAABABBBBABBABBBAAAABBBABAAABAAAABBAABBBBBBBBABABAAABBBBBBBAABBBBBBBBABBBBAABBABBABBABAAAAAAAAAABAABAABBAABBAABAABBBABBBBABBAAAABABBABAABBABAABABBBABAABBBABABBBBABABBABBBBBABAAAAABBABABAABABBABB";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"AABBABBAAAABBAAABBBBBABBBBBBBABABAAAAAABABABAAA", "AABABAAAABBABBAAAABBAAABBBBBABBBBBBBABABAAAAAA", "BBAABBABBBABAABBBBABABABBAABABAABBBBBBAAAABABBBAA", "BAAAAAABAABABAABAABBAAAAAABBAAABAAABAAAAAAA", "ABAABBBAAAABBBBAAAABABBBABBAABABBABABABBBA", "AABAAAAAAABABBABBAABABBAAAAAAABAABBBAAAAA", "AAABBABABBBBAABAABBBBAAABBBABBBBBABABBBBBAABAABB", "AABBBABAAAABAAABABBAABBBBAAABABABBAABA", "BBBBBBBAABBABBBABAABBBBABABABBAABABAABBBBBBAAAA", "BBBBBAAAABABBBAABABAAAABBABBAAAABBAAABBBBB", "BBBBBAABBABBBABAABBBBABABABBAABABAABBBBBBAA", "BBAAABBBABBBBBABABBBBBAABAABBBAAAABBBBAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBAABBABBBABAABBBBABABABBAABABAABBBBBBAAAABABBBAABABAAAABBABBAAAABBAAABBBBBABBBBBBBABABAAAAAABABABAAAAAABAABABAABAABBAAAAAABBAAABAAABAAAAAAABABBABBAABABBAAAAAAABAABBBAAAAABBABABBBBAABAABBBBAAABBBABBBBBABABBBBBAABAABBBAAAABBBBAAAABABBBABBAABABBABABABBBAABBBABAAAABAAABABBAABBBBAAABABABBAABA";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"ABBBBBAABBAAAABABABABBBBBABBAAABBBABBAABAB", "ABBABAABBBAABABABBAAAAABAABBAAAAABBBABBAAABBBAAB", "BAAABAABBABAABBBAABABABBAAAAABAABBAAAAABBBABBAAA", "ABAAAABAAAABBBBAAAABABBBBBABBBAAABABBBBBBBABAAB", "ABABBABABBBBBAABAABABAAABBBABAAABABAAAAA", "BBBABAABBABBBAAABABBBBBBBBBBBABAABAABBABABBA", "BAAAABAAAABBBBAAAABABBBBBABBBAAABABBBBBBBABAABBBA", "BABBBBBBAABBABBBAAABBAABAAABAAABBBABBBBABA", "BBAAAAABBBBBBABAAAAABAABBABAAABAABBBBBABBBABA", "AAABBAABBBBAABAABBABBBABAABBAABAABABBBBB", "AABBBBBBABAAAAABAABBABAAABAABBBBBABBBABAAB", "ABAAAABBBBAAAABABBBBBABBBAAABABBBBBBBABAABBB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAAAABAAAABBBBAAAABABBBBBABBBAAABABBBBBBBABAABBBAAAAABBBBBBABAAAAABAABBABAAABAABBBBBABBBABAABBABBBAAABABBBBBBBBBBBABAABAABBABABBABABBBBBAABAABABAAABBBABAAABABAAAAABBAABBBBAABAABBABBBABAABBAABAABABBBBBAABBAAAABABABABBBBBABBAAABBBABBAABABBBBBBAABBABBBAAABBAABAAABAAABBBABBBBABAAABAABBABAABBBAABABABBAAAAABAABBAAAAABBBABBAAABBBAAB";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"BBAABBAABAAABA", "ABAAABBBBBBABBABBBBBBABABAABAABBAAABBBAABBAA", "BBBABBBBBAAAABBAABBBBAAABBBABAABABBABAABAABABAAB", "AAABABAAABBBAAAAABBBBAABBBBABBBBAAABABBAABABBBAAA", "ABBAABBBBBABBAAAAABABBBABAABBBBBBAABABBBBBBBA", "BBBBBAABABBBBBBBAAABBBBBAABABBBAABAAAAAABBA", "BABBBABAABBBBBBAABABBBBBBBAAABBBBBAABABBBAABAAA", "BBAABABBBBBBBAAABBBBBAABABBBAABAAAAAABBAAABBABAABB", "BAAABABABBABBBBBABBBAABBABBBBBABBAAABABAAABBBAAA", "ABBBABAABBBBBBAABABBBBBBBAAABBBBBAABABBBAABAAA", "BAABAABAABAABBBBAAAABABBBBBAABAABBAAAAAABA", "BBAAABABBAABABBBAAABBABABAABBAABABBBAABBAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABBBBBAAAABBAABBBBAAABBBABAABABBABAABAABABAABAABAABAABBBBAAAABABBBBBAABAABBAAAAAABAAABBBBBBABBABBBBBBABABAABAABBAAABBBAABBAABAAABABABBABBBBBABBBAABBABBBBBABBAAABABAAABBBAAAAABBBBAABBBBABBBBAAABABBAABABBBAAABBABABAABBAABABBBAABBAABBBBBABBAAAAABABBBABAABBBBBBAABABBBBBBBAAABBBBBAABABBBAABAAAAAABBAAABBABAABB";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> words = {"AABBABABABBBBBBBBBBABBBBBAAABBBAABAABBABAABBABAA", "ABBABBBBAABABABABBBBAAAAABBBAABABBBAABAB", "ABBBABBABAAAABAABBBABAAABABBBABAABABABBBABBAAAAB", "BAAABAABBABBABBAAAAAAAAAABAAABBAABABBAAABAA", "BBAAAAAAAAAABABAAAABABAAABABBBAABBABABAB", "AABBABAAABABBBBBABAABBBABBABAAAABAABBBAB", "BBABBABBAABAAAAAABBBBAABBABBBBAABABABABBBBAAAAAB", "BAAAABAABBBBAAABAAAAABBAAAABAAABAAABBAABBBABB", "ABABAAABABBBABBABBAABAAAAAABBBBAABBABBBBAABA", "ABBBAABAABBABAABBABAAABABBBBBABAABBBABBABAA", "ABBAABABABABBABBAAABABAABBABBBAABBBAAABA", "ABABBABABAAABABBBABBABBAABAAAAAABBBBAABBABBBBAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABBABABAAABABBBABBABBAABAAAAAABBBBAABBABBBBAABABABABBBBAAAAABBBAABABBBAABABBAAAAAAAAAABABAAAABABAAABABBBAABBABABABBBBBBBBBBABBBBBAAABBBAABAABBABAABBABAAABABBBBBABAABBBABBABAAAABAABBBABAAABABBBABAABABABBBABBAAAABAABBBBAAABAAAAABBAAAABAAABAAABBAABBBABBAABABABABBABBAAABABAABBABBBAABBBAAABAABBABBABBAAAAAAAAAABAAABBAABABBAAABAA";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> words = {"AABBAAAABAAABBBBBBBAAABABABAAABBAAAAAABAABABAA", "BAAAAAABAABABAAAABAABABAAAAABABABBBBBABBB", "AAAAABAAABAABBBAABAAABBABB", "AABAABABBAABBBBBABBBAAABABAAAAABAAABAABBBAABAAABBA", "BABBABAAAABAABAAABBBABBABAAABAAABBAAAABBAAABABABBA", "AAABBAAAAAABAABABAAAABAABABAAAAABABABBBBBABBBAA", "AAABABAAAAABAAABAABBBAABAAABBABB", "AAAAAABAABABAAAABAABABAAAAABABABBBBBABBBAA", "BABABBBBBBABABAABABABABABABAAABBBAABBAAABAAAA", "ABAAAABAABAAABBBABBABAAABAAABBAAAABBAAABABABBAAB", "BBBBBBBABABBAABAABBABAAAABABBAABBBAABBBABAAABA", "AAABABBBBBAAABBBBBBBBABABBAABAABAABABBBABBAAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BABABBBBBBABABAABABABABABABAAABBBAABBAAABAAAABAABABBAABBBBBABBBAAABABAAAAABAAABAABBBAABAAABBABBABAAAABAABAAABBBABBABAAABAAABBAAAABBAAABABABBAABBAAAABAAABBBBBBBAAABABABAAABBAAAAAABAABABAAAABAABABAAAAABABABBBBBABBBAABBBBBBBABABBAABAABBABAAAABABBAABBBAABBBABAAABABBBBBAAABBBBBBBBABABBAABAABAABABBBABBAAAAA";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> words = {"BBAABABAAAAABBBAAAAABBBABABBBAAAABBABBBABAA", "BAABABBABAAABBBAAAABBAABBBABABBBABBBAABBBABABAB", "BAAAAAAAABAABBAAAABBBABBAABBABBBBBAAABAABBB", "ABBBABAABABBBAABBAABBAAABAABABABBBABABBABBAAAAB", "AABBBABABABBBAAAAAABABBBBABABABAABBAAABBABBBBAABAB", "AABBBABABABBBAAAAAABABBBBABABABAABBAAABBABBBBA", "AAAAABABAABBBBBABABAABBBABBBAAAAAAAABABBABBAABBBB", "BAAAABBBABBAABBABBBBBAAABAABBBAABAABBBABAABABB", "BABBBBBAAABAABBBAABAABBBABAABABBBAABBAABBAAA", "BABBAAAABBBAAAAAAAABAABBAAAABBBABBAABBABBBBBAAAB", "ABBBAABBAABBAAABAABABABBBABABBABBAAAABABA", "BABBBABBBBBAAAAABABBAABABAAAAABBBAAAAABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAABABAABBBBBABABAABBBABBBAAAAAAAABABBABBAABBBBABBBABBBBBAAAAABABBAABABAAAAABBBAAAAABBBABABBBAAAABBABBBABAABABBABAAABBBAAAABBAABBBABABBBABBBAABBBABABABBBAAAAAABABBBBABABABAABBAAABBABBBBAABABBAAAABBBAAAAAAAABAABBAAAABBBABBAABBABBBBBAAABAABBBAABAABBBABAABABBBAABBAABBAAABAABABABBBABABBABBAAAABABA";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> words = {"AABBBABBBBBAAAAABABBBAAABBABBAABABAABAAABAAA", "AAABBBAAABABBBABBBABABAABAABABBBBABBBAABBA", "BBBBABAABABBBABABABBBAAABBABBBABAABBBAAABABBABB", "BABBBAABBABABBABBBAAABABAABBAA", "BBAABAAABAABBBBBABBBBBAABBBBABBBBBBABAAAAABAA", "ABAABBBBBABBAABAABBAAABABBBAAABBBBBABAAB", "ABBBBBABBAABAABBAAABABBBAAABBBBBABAABAAAAABBBBBAB", "BAAABABAABBAA", "BAABAAABABBBBBABBBABAAAAAABBAAABBBAAABABBB", "AAABABBABBBAAAABBBBAAAAABBBBABBBBABBAABAAABAAAB", "AAABABBBAAABBBBBABAABAAAAABBBBBABABABBAAABABAB", "BBAABBBBABABBAABABABBBBBBBBABAAABABAAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BAABAAABABBBBBABBBABAAAAAABBAAABBBAAABABBBABBBABABAABAABABBBBABBBAABBABABBABBBAAABABAABBAABAAABAABBBBBABBBBBAABBBBABBBBBBABAAAAABAABBBBBABBAABAABBAAABABBBAAABBBBBABAABAAAAABBBBBABABABBAAABABABBAABBBBABABBAABABABBBBBBBBABAAABABAAAAABBBBABAABABBBABABABBBAAABBABBBABAABBBAAABABBABBBAAAABBBBAAAAABBBBABBBBABBAABAAABAAABBBABBBBBAAAAABABBBAAABBABBAABABAABAAABAAA";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> words = {"AAABABBABAAABAAAABBABAABAABAABBAABABBBAAABAABABBAB", "BBABBBABBABAAAABBABABBABBBBBABABAABAABBBBAAB", "AAAAAABBABAABABBBABBAABBAABBABABBBAAABABBBAABA", "BBAABBBABBAAAABAAAAABAAAAAAAAABAAABABABBABA", "BAABBBBAABABAAAABBABBABAABBAABAAABBBBBAABBBAAA", "ABAAAABBABBABAABBAABAAABBBBBAABBBAAAAAAABBB", "AAABBBABABBBABBABAAABBAABBAABBBBBABBAABBABB", "ABBBAAAAABBBBBBBBABABBBBBAAABBABBABABBABBBA", "BABAAABAAAABAABBAABBBBBBAABBABABABAAAABA", "AABBBBAABABAAAABBABBABAABBAABAAABBBBBAABBBAAAAAA", "AAAABAAABABABBABAABABBABAAABAAAABAABBAABBBBBBAAB", "AAAABBBABAABAAAAABBBABABBBABBABAAABBAABBA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABBABAABABBBABBAABBAABBABABBBAAABABBBAABABBBAAAAABBBBBBBBABABBBBBAAABBABBABABBABBBABBABAAAABBABABBABBBBBABABAABAABBBBAABABAAAABBABBABAABBAABAAABBBBBAABBBAAAAAAABBBABAABAAAAABBBABABBBABBABAAABBAABBAABBBBBABBAABBABBAABBBABBAAAABAAAAABAAAAAAAAABAAABABABBABAABABBABAAABAAAABAABBAABBBBBBAABBABABABAAAABABBABAAABAAAABBABAABAABAABBAABABBBAAABAABABBAB";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> words = {"AABBABAAAABBAABBBAABBBAAABAABBBABAABABABABBABBBAA", "ABBBBBBABAABBABAAABBBAABBAABBABABABAAAAAAABAA", "BABAAABAABAAABAAAAABABBAAAAABBABABABBBBAB", "BBBAA", "ABAABBBBBBABAABBABAAABBBAABBAABBABABABAA", "BABAABBAABBABBBABABBAAAAAAABBBAABBBAAABBBBAAABB", "BBBBBBAABAAABBBAABAAAABBABBAAABAAABAABBBBBBABAAB", "BAAAAABBABABABBBBABBAAAABBBAAAAAABBABBAAAAAAA", "BBBBABAABBAABBABBBABABBAAAAAAABBBAABBBAAAB", "BABABABBABBBAAAAAABBAAABBAAABABBBAABAAABBABAB", "BBAABBAAAAAABBBAABABBBBAABAAAAAABAAAABAAAAAABAAAB", "BBBBABABBAABBBBBBABABAAAABABAAABAABAAABAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBAABBAAAAAABBBAABABBBBAABAAAAAABAAAABAAAAAABAAABBABAAAABBAABBBAABBBAAABAABBBABAABABABABBABBBAAAAAABBAAABBAAABABBBAABAAABBABABBBBABAABBAABBABBBABABBAAAAAAABBBAABBBAAABBBBAAABBBBABABBAABBBBBBABABAAAABABAAABAABAAABAAAAABABBAAAAABBABABABBBBABBAAAABBBAAAAAABBABBAAAAAAABBBBBBAABAAABBBAABAAAABBABBAAABAAABAABBBBBBABAABBABAAABBBAABBAABBABABABAAAAAAABAA";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> words = {"BBAABBBABBAABABABBAABABBBBBBAABBAABBBBABAAA", "AABBBBBBAAABBBAABBABABAAAAAABBBBABAAABBBBABBAAA", "BAABBABABAAAAAABBBBABAAABBBBABBAAAAABBBB", "BBBABBBAAABBBBAAAAAAABBABABAAABBAAABAABBAB", "ABBAAAABABBBBBBBABBBAAABBBBAAAAAAABBABABAAA", "BBBAAABAABAAAABBBBBABABABABABB", "BAABABBBBAABAABBBBAAABBBABBBBBAABABBAABAABA", "ABABAAABBBBBBAAABBBAABBABABAAAAAABBBBABAAABB", "BBABAABAABBAAAABABBBBBBBABBBAAABBBBAAAAAA", "AABAABBBAABAAABBAABABABBABBABAABABBBBAAAAAB", "AABABAABBAAAAABAAAAABAAAABBBABBABBBABABBABABABA", "ABBBBABAAABAAAAAABABBBBBAABABBBBAABAABBBBAAABB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBAABBBABBAABABABBAABABBBBBBAABBAABBBBABAAABAAAAAABABBBBBAABABBBBAABAABBBBAAABBBABBBBBAABABBAABAABAABBBAABAAABBAABABABBABBABAABABBBBAAAAABABAABBAAAAABAAAAABAAAABBBABBABBBABABBABABABAAABBBBBBAAABBBAABBABABAAAAAABBBBABAAABBBBABBAAAAABBBBAAABAABAAAABBBBBABABABABABBABAABAABBAAAABABBBBBBBABBBAAABBBBAAAAAAABBABABAAABBAAABAABBAB";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> words = {"BBAAABABABBBABABABBBAABBABBBBBABAABBBAAB", "ABABABBBABABBABBBBBBBBABAABBABABAABAABAABAAAAAB", "ABAABABAAABABBBBABBBBAABABABABBBAAABAAABAABABAB", "AAAAAAABABAAAAAAAAABBBAAAAAABBAABAAABABABAB", "ABABAABAAABBBAAABBBABBAAAAAAAABABAAAAAAAAABBBAA", "ABBBBABAABBAAABABABBBABABABBBAABBABBBBBABAABBB", "ABABAABBAABABABBABBBBAAAABBBABB", "ABBABAABBBBABBBAABAAAABBABBABBABBAABBAAA", "AAABBBABB", "ABBABABBBBABBABAAAAAAAABABAABBAAAAABBBAABBAABABB", "AAAAABABBBBABAABBAAABABABBBABABABBBAABBABBBBBABA", "AABBABABBABABBBBABBABAAAAAAAABABAABBAAAAABBBA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAABABAAABABBBBABBBBAABABABABBBAAABAAABAABABABAABAAABBBAAABBBABBAAAAAAAABABAAAAAAAAABBBAAAAAABBAABAAABABABABBBABABBABBBBBBBBABAABBABABAABAABAABAAAAABABBBBABAABBAAABABABBBABABABBBAABBABBBBBABAABBBAABABAABBAABABABBABBBBAAAABBBABBABAABBBBABBBAABAAAABBABBABBABBAABBAAABBABABBABABBBBABBABAAAAAAAABABAABBAAAAABBBAABBAABABB";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> words = {"ABBBABBBBAAAAAAAAAAAABABAAAAAAABBAAABABBAABBABB", "BAAABBBBABBABABBABBBBABAABBBABBBABABABABAABABA", "AAAABABAAAAAAABBAAABABBAABBABBABABBBABABBABABBBBB", "ABBAABBBAABBAAAABBBAAAAABBAABAAAABBABABAAABAB", "ABABAAABABBABBBABAAABABAABBAAAAAAAABABABB", "BAAAAAABAAAABABBAAAABAAABBABBAABABBBABABBBBAB", "AABBAAABBBBABBABABBABBBBABAABBBABBBABABABABAABABAA", "ABBABABBBABBABABABAABBA", "AAAABABAAAAAAABBAAABABBAABBABBABABBBABABBABABBB", "BBBAABABBAABBAAABBBBABBABABBABBBBABAABBBABBBABAB", "AAABAAABBABBAABABBBABABBBBABABABBBBBBBAA", "BBABAAABAAAAAABAAAABABBAAAABAAABBABBAABABBBAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBABABBBABBABABABAABBAABBBAABBAAAABBBAAAAABBAABAAAABBABABAAABABBABBBABAAABABAABBAAAAAAAABABABBBABBBBAAAAAAAAAAAABABAAAAAAABBAAABABBAABBABBABABBBABABBABABBBBBABAAABAAAAAABAAAABABBAAAABAAABBABBAABABBBABABBBBABABABBBBBBBAABABBAABBAAABBBBABBABABBABBBBABAABBBABBBABABABABAABABAA";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> words = {"ABABAABBABABABAABAAAAAAABAABAABBAABBABBBAABABBAB", "ABBABBABAAAAAABABBBBBAABABBBABBBBAABAABABBAAA", "ABABABAABAAAAAAABAABAABBAABBABBBAABABBABBBBBAABBBA", "ABABBAAAAAABABBB", "ABBABBAABBBBABABBBABABBAAAABABBBAABBABBBABAAA", "BAAAABABBAAAAAABABBB", "BABBAABABAABAAABAABBBAAAABBBBABBBAAABBAABBBABBBBBA", "BBBBABABBBABAABBABBABAAAAAABABBBBBAABABBBABBBBAAB", "AABBBABBABBBABABBAAABABAABBABABABAABAAAA", "BBBABABBAAAABBBABBBABAABABBABAABBBBBABABBBABA", "AAABAABBAABBABBAABBBBABABBBABABBAAAABABBBAABB", "AAABBBABBBABAABABBABAABBBBBABABBBABAABBAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBBABBABBBABABBAAABABAABBABABABAABAAAAAAABAABAABBAABBABBBAABABBABBBBBAABBBABBAABABAABAAABAABBBAAAABBBBABBBAAABBAABBBABBBBBABABBAAAABBBABBBABAABABBABAABBBBBABABBBABAABBABBABAAAAAABABBBBBAABABBBABBBBAABAABABBAAABAABBAABBABBAABBBBABABBBABABBAAAABABBBAABBABBBABAAAABABBAAAAAABABBB";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> words = {"AABBAABABAABABABBAAABAABBAABAAABA", "AAAAABBBBBABBBBABABAAABBAABAABBBAABBAAABAABBB", "BAAAAAABABABBAAAAAAABABBAABAAAAAABBABBBABABBBABB", "BAABAABBABAABBBBABAAAAABBBBBABBBBABABAAAB", "BAABBBBABAAAAABBBBBABBBBABABAAABBAABAABBB", "ABBABBBAABABBBBAAAAAABAAAAAABABBBAAAAAABAABABBBAB", "BBABBBAAABBBBAABBBABABABAAABBAABBABBABAAAAABB", "BAAAAABBABBABBBBBBABABAABAABBABAABBBBABAAAAABBBB", "BABBBAABABBBBAAAAAABAAAAAABABBBAAAAAABAABA", "AAAABABBAABAAAAAABBABBBABABBBABBAAAABAAABAA", "BABAAAAABBBBBABBBBABABAAABBAABAABBBAABBA", "BAABAAAABBABBAAABAABAAABABBBAABBBAAAABBBAABAAAAAAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBAABABAABABABBAAABAABBAABAAABAABAAAABBABBAAABAABAAABABBBAABBBAAAABBBAABAAAAAABABABBAAAAAAABABBAABAAAAAABBABBBABABBBABBAAAABAAABAABBABBBAABABBBBAAAAAABAAAAAABABBBAAAAAABAABABBBABBBAAABBBBAABBBABABABAAABBAABBABBABAAAAABBABBABBBBBBABABAABAABBABAABBBBABAAAAABBBBBABBBBABABAAABBAABAABBBAABBAAABAABBB";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> words = {"BBBBABBBAAABAAABBABAAABAAABAABBAAABABABABABBAAB", "BBABAAAABBAAABBBBBABBBABABBBBBAABBBBABBBA", "AAABBAABAAABAABBABBABAAAAABAAABBABABABBABBAABA", "BAAAAAABBBABAAAAABBBBBBABAAAAAAAAABAABABAB", "AAAABBAABABBABBABAAAAABBAABBABABAAAABABB", "AAABABBAABAAAABBAABBABBBABAABABAAAAAABAA", "ABAABBAABABBBABAABABABAAABABAAABABABBAAAB", "ABBBABAAAAABBBBBBABAAAAAAAAABAABABABBAABA", "AABABBABBAABABBBABBAAAAAABBBABAAAAABBBBBBABAA", "BAAABBABAAABAAABAABBAAABABABABABBAABBBBBBBBBBABABB", "BAABBAABABBBABAABABABAAABABAAABABABBAAABA", "AABABBBABBAAAAAABBBABAAAAABBBBBBABAAAAAAAAAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABBAABABBABBABAAAAABBAABBABABAAAABABBAABAAAABBAABBABBBABAABABAAAAAABAAABBAABAAABAABBABBABAAAAABAAABBABABABBABBAABAABBAABABBBABAABABABAAABABAAABABABBAAABABBABBAABABBBABBAAAAAABBBABAAAAABBBBBBABAAAAAAAAABAABABABBAABABBABAAAABBAAABBBBBABBBABABBBBBAABBBBABBBAAABAAABBABAAABAAABAABBAAABABABABABBAABBBBBBBBBBABABB";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> words = {"AABABBBBBBBAABABBABBAAABAAAAABABBABBAABAABABAA", "BABABABBABABABBBBBAABBBBBBBAABAAAABABAAAAABAAB", "ABABAAAAAABBABAAAABAAAAAABAABAAABAABABBBBABAB", "AAABAABABBBBBBAABABBABABBBAABABAABBABABA", "BABAABBBBBBAABAAABBABBABBAAABBAABAAABABABABABBBBBA", "BAABAABBBBBABABBBAABBBAAABBBAAAABABBBBABAABBBB", "ABBABBBBABBBBBABAAAAAAABBAAABAABABBBBBBAABABBABA", "ABBAAAAAABAAABBAAABBBBBBBAABAAABBAAABBBABBB", "BBABBBAAAABBAAAAAABAAAAABABBAAAAAABAAABBAAABBBBB", "BABBBBBABAAAAAAABBAAABAABABBBBBBAABABBABABBBAAB", "BAAAAAABAAABBAAABBBBBBBAABAAABBAAABBBABBB", "ABAABBABABABBABABABBBBBAABBBBBBBAABAAAABABAAAAA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AABABBBBBBBAABABBABBAAABAAAAABABBABBAABAABABAAAAAABBABAAAABAAAAAABAABAAABAABABBBBABABBABBBBABBBBBABAAAAAAABBAAABAABABBBBBBAABABBABABBBAABABAABBABABABBABABABBBBBAABBBBBBBAABAAAABABAAAAABAABAABBBBBABABBBAABBBAAABBBAAAABABBBBABAABBBBBBAABAAABBABBABBAAABBAABAAABABABABABBBBBABBBAAAABBAAAAAABAAAAABABBAAAAAABAAABBAAABBBBBBBAABAAABBAAABBBABBB";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> words = {"STRING", "RING"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "STRING";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> words = {"RING", "DING", "DING", "DING", "DING"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "DINGRING";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> words = {"ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "DEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFE", "LVCLJLDJFEUDSJFKLKBKBNLFEUROIEW", "XWREUWEOIUREWOIRWOIEREWOIREWIOREWOIRIOEWROIEWROOER", "WEROEWUROIEWIOWUOIWREIOEWURIEWOUROIEWROIEWORIEWORI", "WEROEWOIREWUREWUROIEWROIEWUROIEWUROIWEROUIEWROUWER", "WEROUWEROIEWUROWEUJROEWIROIWEROIEWRUOIWEUREWOIURWE", "WEROUWEOIRUEWRUEWOIFDGFJKGJKDSLJFOEWUROIEWRFOIWEOE", "WEORIUEWOIREWOIRUEWIORUEWOUROEWIUROIEWOIEWFOIEWFUE", "OEWUREWOIROIEWURIOEWUROIEWUROEWIUROIEWRIUOEWUROUEW", "WOEUROUEWIOIURETGERTREWIOIEWROIEWFJFDSHGHSDDFDHDSJ", "HSFKGJSFDGHKJDSHFDSJKHFDSJKFJDSFHSDFJDSLFFLSKDFJSF"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWDHSFKGJSFDGHKJDSHFDSJKHFDSJKFJDSFHSDFJDSLFFLSKDFJSFWEORIUEWOIREWOIRUEWIORUEWOUROEWIUROIEWOIEWFOIEWFUEWEROEWOIREWUREWUROIEWROIEWUROIEWUROIWEROUIEWROUWEROEWUROIEWIOWUOIWREIOEWURIEWOUROIEWROIEWORIEWORIWEROUWEROIEWUROWEUJROEWIROIWEROIEWRUOIWEUREWOIURWEROUWEOIRUEWRUEWOIFDGFJKGJKDSLJFOEWUROIEWRFOIWEOEWUREWOIROIEWURIOEWUROIEWUROEWIUROIEWRIUOEWUROUEWOEUROUEWIOIURETGERTREWIOIEWROIEWFJFDSHGHSDDFDHDSJXWREUWEOIUREWOIRWOIEREWOIREWIOREWOIRIOEWROIEWROOER";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> words = {"NVCSKFLNVS", "HUFSPMRI", "FLNV", "KMQD", "RPJK", "NVSQORP", "UFSPMR", "AIHUFSPMRI", "AAA", "BBB", "CCC", "ABC"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABCCCAIHUFSPMRIBBBNVCSKFLNVSQORPJKMQD";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> words = {"BBBABABBBAAAAABBBBBBBAABABBBAAAABABAABABAAABABABAA", "AABAAAAAABABAAABAABABBBBAAABBABBAAAABBAAAABBBBAAAA", "BBABBBBBBABBABBAABBBBBABAABBBBBABABAABABABAABBBABA", "AAAAAABBAABBBBAABBBBBABBBAAABBBAABBAABBBABBABABBAA", "ABBBBBABAAABAABBBBBAAAAABABABBBBABBBABBBBAAABBBAAB", "BABAAAABBBBAAABAABBAAAABAAABABBABBBBBBABAAAAABBAAB", "ABAABBBBBBAAABABABBAABABABBAABAAAABBAAAAABBBBABABB", "BABABABBABBBABBBAAABBBBBAAABAAABBBAAABABABBAAABAAB", "ABABBAABAABBAABBABBBABBAAABABBAABBBABABAABBBBABABA", "ABBABAABAAAABABBAAAABABAAABBAABABBAAAAAAAABBBBABBB", "BAAABAAAABABBBAABAABAAABAAABBBABBAAAAAAABAABABBBBB", "BBBBBBAABABAABBAABBABBBABAABBABBAAAAAABBBBABAAAABA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBAABABAABBAABBABBBABAABBABBAAAAAABBBBABAAAABAAAAAABABAAABAABABBBBAAABBABBAAAABBAAAABBBBAAAAAABBAABBBBAABBBBBABBBAAABBBAABBAABBBABBABABBAABAABBAABBABBBABBAAABABBAABBBABABAABBBBABABABBABBBABBBAAABBBBBAAABAAABBBAAABABABBAAABAABBBBBBAAABABABBAABABABBAABAAAABBAAAAABBBBABABBBAAAAABBBBBBBAABABBBAAAABABAABABAAABABABAAAABBBBAAABAABBAAAABAAABABBABBBBBBABAAAAABBAABBABAABAAAABABBAAAABABAAABBAABABBAAAAAAAABBBBABBBBBBABBABBAABBBBBABAABBBBBABABAABABABAABBBABAAABAAAABABBBAABAABAAABAAABBBABBAAAAAAABAABABBBBBABAAABAABBBBBAAAAABABABBBBABBBABBBBAAABBBAAB";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> words = {"BCCCBADZ", "ABCCC", "CCBAD", "ADZ", "BABBABBAABAAABBABBBBBBABAAAAAAABBABBAAAAABABABBAAB", "AAABAAAABBBAAABAABBBBAABBAAABBBABBBBABABAABBAABABB", "ABAABBABBABAABBBBABBBBABBBBAABAABAABABABBBBBAAABBA", "BAAABAAABBBABAABABBAAABBABAAAABBABABBAAAAAABBABBAB", "BABAABAABBABBBBABABBBABBBBAAAAAABABAAABBBAABBAAABA", "BBAAAABAABBAAABAABAAABABABBAABAABBBABBBABAAABABBBB", "AAAAAABBBBBAAAABABABABAABBBAABBABABABBBAAABABABABA", "ADZ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABBBBBAAAABABABABAABBBAABBABABABBBAAABABABABAABAABBABBBBABABBBABBBBAAAAAABABAAABBBAABBAAABAAAABBBAAABAABBBBAABBAAABBBABBBBABABAABBAABABBAAAABAABBAAABAABAAABABABBAABAABBBABBBABAAABABBBBAAABAAABBBABAABABBAAABBABAAAABBABABBAAAAAABBABBABBAABAAABBABBBBBBABAAAAAAABBABBAAAAABABABBAABAABBABBABAABBBBABBBBABBBBAABAABAABABABBBBBAAABBABCCCBADZ";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> words = {"NVCSKFLNVS", "HUFSPMRI", "FLNVSFSDFSDF", "KMQDFSDFVBC", "RPJK", "NVSQORP", "UFSPMR", "AIHDFDPMRI", "NGFDFFLNVS", "HUHJJHMRI", "GHTYHLNV", "KHGMQD"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AIHDFDPMRIGHTYHLNVCSKFLNVSFSDFSDFHUFSPMRIHUHJJHMRIKHGMQDNGFDFFLNVSQORPJKMQDFSDFVBC";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAP", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAW", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAFAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> words = {"CDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIE", "DEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROI", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWD", "ABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSKLKBKBNLFEUROIEWD", "BCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEW"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGTGHOUEOEDFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWDABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSJFKLKBKBNLFEUROIEWDABCDEFGTGHOUEOEDKFLVCLJLDJFEUDSKLKBKBNLFEUROIEWD";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "ABABBABAAAAAAAAAAA", "BABABAABBBBBBAAAAAAA", "AAAAAAAAAABBBBBBBBBBBB", "BBBBBBBBBBBAAAAAAAAAAA", "BBABAAAAAABBBBBAAABBBBBA", "BBBBBBAAAAAAAAABAABAB", "BABABABABABABABAB", "ABABABABABABABABAB"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABAAAAAABBBBBAAABBBBBABABAABBBBBBAAAAAAAAABAABABABABABABABABABBABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> words = {"AK", "BJ", "CI", "DH", "EG", "FFF", "GF", "HE", "ID", "JC", "KB", "LA"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "LAKBJCIDHEGFFF";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAP", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAW", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAFAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> words = {"IDENTICAL", "IDENTICAL", "NOT"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "IDENTICALNOT";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> words = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF", "GGG", "HHH", "III", "JJJ", "KKK", "LLL"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBBCCCDDDEEEFFFGGGHHHIIIJJJKKKLLL";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> words = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"};
    JoinedString* pObj = new JoinedString();
    clock_t start = clock();
    string result = pObj->joinWords(words);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10157606&rd=9823&pm=6215
********************************************************************************
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cmath> 
#include <cstring> 
#include <cstdlib> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <utility> 
#include <queue> 
#include <map> 
 
using namespace std; 
 
string a[21][1<<12]; 
string g[21][21]; 
 
class JoinedString{ 
public: 
 
  int flag[20],n,len[20]; 
  vector<string> str; 
 
  string dp(int current,int mask) 
  { 
    string &ret=a[current][mask]; 
    if (ret!="") return ret; 
    if (!mask) return ""; 
    int i; 
    string temp; 
    for(i=0;i<n;i++) if (mask&(1<<i)){ 
      temp=g[current][i]+dp(i,mask^(1<<i)); 
      if (ret=="" || (temp.size()<ret.size() || (temp.size()==ret.size() && temp<ret))) ret=temp; 
    } 
    return ret; 
  } 
 
  string joinWords(vector <string> words){ 
    int i,j,k,t; 
    n=words.size(); 
    memset(flag,0,sizeof(flag)); 
    for(i=0;i<n;i++) len[i]=words[i].size(); 
    for(i=0;i<n;i++){ 
      for(j=0;j<n;j++) if (i!=j){ 
        if (words[i]==words[j] && i<j) continue; 
        for(k=0;k+len[i]<=len[j];k++){ 
          for(t=0;t<len[i];t++){ 
            if (words[i][t]!=words[j][t+k]) break; 
          } 
          if (t==len[i]){ 
            flag[i]=1; 
          } 
        } 
      } 
    } 
    str.clear(); 
    for(i=0;i<n;i++) if (!flag[i]){ 
      str.push_back(words[i]); 
    } 
    n=str.size(); 
    for(i=0;i<n;i++) len[i]=str[i].size(); 
    for(i=0;i<n;i++){ 
      for(j=0;j<n;j++) if (i!=j){ 
        for(k=len[j];k>=0;k--){ 
          if (k<=len[i]){ 
            for(t=0;t<k;t++){ 
              if (str[i][len[i]-k+t]!=str[j][t]) break; 
            } 
            if (t==k){ 
              g[i][j]=str[j].substr(k,len[j]-k); 
              break; 
            } 
          } 
        } 
      } 
    } 
    string temp; 
    string best=""; 
    for(i=0;i<n;i++){ 
      for(j=0;j<(1<<n);j++){ 
        a[i][j]=""; 
      } 
    } 
    for(i=0;i<n;i++){ 
      temp=str[i]+dp(i,((1<<n)-1)^(1<<i)); 
      if (best=="") best=temp; 
      if (temp.size() < best.size() || (temp.size() == best.size() && temp<best)) best=temp; 
    } 
    return best; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/