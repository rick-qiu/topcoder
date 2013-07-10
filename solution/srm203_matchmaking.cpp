/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2911
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

class MatchMaking {
public:
    string makeMatch(vector<string> namesWomen, vector<string> answersWomen, vector<string> namesMen, vector<string> answersMen, string queryWoman);
};

string MatchMaking::makeMatch(vector<string> namesWomen, vector<string> answersWomen, vector<string> namesMen, vector<string> answersMen, string queryWoman) {
    string ret;
    return ret;
}


int test0() {
    vector<string> namesWomen = {"Constance", "Bertha", "Alice"};
    vector<string> answersWomen = {"aaba", "baab", "aaaa"};
    vector<string> namesMen = {"Chip", "Biff", "Abe"};
    vector<string> answersMen = {"bbaa", "baaa", "aaab"};
    string queryWoman = "Bertha";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "Biff";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> namesWomen = {"Constance", "Bertha", "Alice"};
    vector<string> answersWomen = {"aaba", "baab", "aaaa"};
    vector<string> namesMen = {"Chip", "Biff", "Abe"};
    vector<string> answersMen = {"bbaa", "baaa", "aaab"};
    string queryWoman = "Constance";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "Chip";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> namesWomen = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
    vector<string> answersWomen = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
    vector<string> namesMen = {"Ed", "Duff", "Chip", "Abe", "Biff"};
    vector<string> answersMen = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
    string queryWoman = "Constance";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "Duff";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> namesWomen = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
    vector<string> answersWomen = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
    vector<string> namesMen = {"Ed", "Duff", "Chip", "Abe", "Biff"};
    vector<string> answersMen = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
    string queryWoman = "Delilah";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "Chip";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> namesWomen = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
    vector<string> answersWomen = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
    vector<string> namesMen = {"Ed", "Duff", "Chip", "Abe", "Biff"};
    vector<string> answersMen = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
    string queryWoman = "Emily";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "Ed";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> namesWomen = {"anne", "Zoe"};
    vector<string> answersWomen = {"a", "a"};
    vector<string> namesMen = {"bob", "chuck"};
    vector<string> answersMen = {"a", "a"};
    string queryWoman = "Zoe";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "bob";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> namesWomen = {"F", "M", "S", "h", "q", "g", "r", "N", "U", "x", "H", "P", "o", "E", "R", "z", "L", "m", "e", "u", "K", "A", "w", "Q", "O", "v", "j", "a", "t", "p", "C", "G", "k", "c", "V", "B", "D", "s", "n", "i", "f", "T", "I", "l", "d", "J", "y", "b"};
    vector<string> answersWomen = {"abaabbbb", "bbaabbbb", "aaabaaab", "aabbaaaa", "baabbaab", "aaababba", "bbabbbbb", "bbbabbba", "aaabbbba", "aabbbaaa", "abbabaaa", "babbabbb", "aaaaabba", "aaaabbaa", "abbbabaa", "babababa", "abbaaaaa", "bbababba", "baaaaaba", "baaaaabb", "bbbbabba", "ababbaaa", "abbbabab", "baabbbaa", "bbbaabbb", "aababbab", "ababbabb", "abbaabba", "baabbabb", "aaabaaab", "aabbbaba", "aabaaabb", "abababba", "aabbaaaa", "aabbabaa", "bababaaa", "aabaaaab", "bbbbaabb", "baaababb", "abaabbab", "aabbbaaa", "baabbaba", "bbabbbaa", "aabbbbaa", "abbbaaab", "abababbb", "ababaaba", "bababaaa"};
    vector<string> namesMen = {"f", "C", "v", "g", "Q", "z", "n", "c", "B", "o", "M", "F", "u", "x", "I", "T", "K", "L", "E", "U", "w", "A", "d", "t", "e", "R", "D", "s", "p", "q", "m", "r", "H", "j", "J", "V", "l", "a", "k", "h", "G", "y", "i", "P", "O", "N", "b", "S"};
    vector<string> answersMen = {"bbbaabab", "bbabaabb", "ababbbbb", "bbbababb", "baababaa", "bbaaabab", "abbabbaa", "bbbabbbb", "aabbabab", "abbababa", "aababbbb", "bababaab", "aaababbb", "baabbaba", "abaaaaab", "bbaababa", "babaabab", "abbabbba", "ababbbab", "baabbbab", "babbaaab", "abbbbaba", "bbabbbba", "baaabaab", "ababbabb", "abbbaabb", "bbbbaabb", "bbbaaabb", "baabbaba", "bbabaaab", "aabbbaab", "abbbbabb", "bbaaaaba", "bbbababa", "abbaabba", "bababbbb", "aabaaabb", "babbabab", "baaaabaa", "ababbaba", "aaabaabb", "bbaaabaa", "baaaaabb", "bbaabaab", "bbababab", "aabaaaab", "aaaaabab", "aabbaaba"};
    string queryWoman = "U";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> namesWomen = {"i", "a", "d", "m", "g", "c", "n", "f", "b", "h", "k", "e", "j", "l"};
    vector<string> answersWomen = {"babbabaaaabbbabbbbaaabaababb", "baaabbaabbbbbababbaababbbabb", "aabaaaaabbabbbababbbbabaaabb", "babbaaabbababbaaaaaaabbbaaaa", "abbbabbbaaaabbaabbaabbbbaaaa", "abaaabababbabbbbaabbbaaabbaa", "abbbaaaabbabbaaaaaaaababbbab", "ababbaaaabaababaaababababbaa", "abbbbaaabaabbabaaabbbaabaaab", "abaaabbbaaaabbabaaabbaabbbbb", "bbabaabbabbbabbabaaabbbabbbb", "bbabbabbbbabaababaabbbbbaaab", "aaababbaabaabbbbbabaabaaaaaa", "baaaaabbbaabbbbabababbbabbab"};
    vector<string> namesMen = {"g", "n", "a", "m", "e", "h", "l", "b", "k", "d", "f", "i", "j", "c"};
    vector<string> answersMen = {"bbbabbbbbaabaaabbbbbbaaaaaab", "aabbaaabbababbbaaababbbaaaba", "bbbabaabbabbbbbaaaaabaaababa", "bbaabbabaaababbbbababbaaabab", "baaaabbabaabbabbaaaabbabbaba", "abbaaabaabababbbabababababab", "baaaabaaaababbaaaabababababa", "bbaaaaaababbaaabbbbaaaabbabb", "aaababbaaabaabbaaaaabababaab", "baaaabaaabbbabbabaaaabbabaaa", "abbbaabaaabbbbbabbbaaababaaa", "bababbbabbaababbbbbbbabababa", "bbabbbaabbbbaaaaaaababababab", "baaabbbabaababababbaaaaabbaa"};
    string queryWoman = "l";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> namesWomen = {"a", "f", "c", "h", "g", "d", "b", "e"};
    vector<string> answersWomen = {"aababbabaabbbabaabaaabbbababbaaaaabbbabb", "aaabbabaabbaaaaaaabbabaababaabbbaabbaaab", "abbbaabaababababbaababbaabaaabbaabaabbab", "bbbbaaaaaaaaabbbbbaaaabbaababbbbabbaaabb", "aabbbabaaaabbbbaabaaaaabbaaababaabbbaaab", "baaaaaabababbababbaaaaaaabababaabaabbbbb", "aabaaaaaabaabbbabaabababaababbaaaabbbbab", "baaabbbbbaaaaabbaaaaababbaabbbabbabbabba"};
    vector<string> namesMen = {"h", "d", "c", "a", "f", "b", "e", "g"};
    vector<string> answersMen = {"baabaabbbaaabaabbabaabbaaaabbbabbbaaaaba", "baabbaabbbaaaabaabbbaaaababababbbaaaabaa", "abbababaaaabaabbbabbbbabbaabbbbbbabababb", "bbabbaaaabbababaaaaabbabbbabaabbbababbaa", "babababbbbbbabbaabbbbbbaababbbbbabbaaaaa", "babbbbbabaaabaaabaababbaabababbababbbbbb", "abaababaabaaaabbaaaaaaaabbbabaaabbbabbab", "abbaabaaaabbabbbaaabaabbbaabbbababbaaabb"};
    string queryWoman = "a";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> namesWomen = {"g", "h", "c", "t", "j", "o", "u", "y", "x", "p", "w", "i", "r", "f", "l", "n", "m", "k", "v", "b", "s", "z", "e", "d", "q", "a"};
    vector<string> answersWomen = {"aabbbbbbbababbabbabbaabaababa", "aaaaaaaaababbbbaaaaaabaabbbbb", "baabaabaabbaabababbababbabaaa", "ababbbabbabababbbbbabbbabaaba", "aaabbababaaaaababbbabaabaaaab", "bbbbabaabbbbaaaababbaaababbab", "aabababaabababbaaabbbabaababb", "abbbabbaaaabaabbbbababbbaaaab", "abbaabbbabaabaabaaabbabbabbab", "baabbabbababbaabbaabbbbbbbbba", "abbabbabababbbbbbaaaaababbbab", "bbababbbabbbbaaabbbabbaaababb", "baabbbababbbbbbbaabababababbb", "bbbaaaaaabbaaaabbabbabababbbb", "baaaabbbababbbababbaabaababbb", "bbbbbbbabaababbababaabababbab", "abbbbbbaaabababbbaaaaaabbabba", "bbbbbabaabaabbaaaaababbbbabaa", "bbabbaaaabbaaaababbabaaaabaaa", "baaabbbaaabbabbbbbbabbbababba", "babbbbbbabbaabaaabbbabbababbb", "bbaaaaabababaaaaabaabaabaabba", "bbbbbbbaaabbaabbaaabbabbbbbbb", "baaaaabbbabbabababaabaababaab", "baaabbbababaabaababababbaaaba", "abbaabbababbbabaabaaaaabbbbaa"};
    vector<string> namesMen = {"n", "q", "b", "v", "m", "g", "k", "f", "h", "c", "t", "d", "r", "w", "p", "i", "o", "y", "l", "s", "a", "u", "x", "e", "z", "j"};
    vector<string> answersMen = {"bbaaaaabaabbabbaabaabbababaab", "aabbaaaaaaabbaabaaabababbaaaa", "bbbbabaabaabaaabbbaababababbb", "bbabbaaabbbabaaaabbbbbbbaaabb", "abbaaaabbaaabbbabaaaababbaabb", "aababaaaaabaaaaaaaaabbaabbaab", "ababbabaabaabbbaabaaabaaaaaab", "bbbaabbbaaabaaabbabbabbaabbbb", "bbbaaaababaaabbaaabbbbbaaabab", "baabaaaaabbaaaaaababbabbbabab", "bbbbbabbbabaabbbbbbaaabbbbaaa", "aaaaaaaabbababbaaabbabababbba", "bbbaaaabbabbaabababbabbaabbab", "bbbbaabaaabbababababaabaababa", "bbbbbaaabbaabbbaabaaaabaabbaa", "bbbaababbbabaababbbbbaabbbaaa", "bbbaabaababaabbbaabbabaaaaaab", "aabaabbbbaabbababbbbbaaaaaaba", "baaabbaaabbabaaaabbaabbbaabab", "bbbabaaabaaabaaabbabbbaaabbbb", "bbaabbabbbbaaabbaaaaabbbbbbbb", "baaaaaabababbbbaababbbbbbbbab", "bbaaaabbaabbabababbaaabbaaaab", "aaaababbabaaaabaaabbaabababba", "ababaaababababbbabbbbbbbbaaba", "bbbbabaabaabbbabaabbbabbaabba"};
    string queryWoman = "j";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> namesWomen = {"i", "t", "h", "d", "y", "f", "k", "o", "q", "l", "n", "g", "m", "s", "x", "p", "w", "r", "b", "c", "v", "z", "e", "a", "j", "u"};
    vector<string> answersWomen = {"bbabababbaba", "baaaaabbabaa", "bbbbbbbbbbbb", "baabbbbababb", "abababaabbbb", "babbbabbbbab", "abbabaabbbbb", "abaaabababba", "babbaabbabaa", "babaabaaaaba", "bbbaaaababaa", "babbabaabbab", "bbaabbbaaaab", "aabbaabbabaa", "baaabababbaa", "aaababababbb", "baaaabbabbba", "aaaabaabbaaa", "babbbbaaabba", "bababbbaabba", "aabbbabbbbaa", "abbaaaaaabaa", "babbabaaaabb", "bbbbbbbaaaba", "abaaaaabaabb", "babbabaaaaaa"};
    vector<string> namesMen = {"y", "b", "j", "e", "r", "h", "c", "i", "d", "u", "x", "f", "t", "l", "g", "s", "o", "z", "m", "n", "k", "w", "q", "a", "v", "p"};
    vector<string> answersMen = {"aaaaaabbabba", "aabbbabbbaaa", "bbabaaaaaabb", "baabbbbbbbab", "bbaaaababbab", "aabaabbbbaba", "bbbabbaaaaba", "aabababbbaba", "bbaaabbbbaba", "aaabaababaab", "bbaabbaabaab", "bbaabbaabbab", "aabaabbaaaaa", "aabbababbaba", "baabbabaaaba", "baaaabbaaaaa", "aabaabaabbab", "bbababbbbbab", "bbbaaabbbaab", "baaabbaaaaaa", "babaabaababa", "baabbbbbbaba", "bababbabbbab", "bbaaaabbbaba", "abbbbbbbbaaa", "babaaaaaaaba"};
    string queryWoman = "o";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> namesWomen = {"J", "a", "h", "m", "C", "y", "A", "v", "D", "u", "s", "M", "O", "j", "e", "Q", "z", "w", "d", "t", "l", "L", "c", "x", "f", "n", "g", "F", "k", "G", "I", "r", "B", "q", "o", "N", "b", "P", "K", "E", "H", "p", "R", "i"};
    vector<string> answersWomen = {"baabaabbbbababba", "bbaaababaabbabba", "abaaaaabbaababbb", "bbaababbababbbbb", "bbaabaabaababbab", "abaabbbbbaabaaba", "baaaaaaaabbbbbaa", "ababaaaaabbabbba", "bbaabbbabbbaabaa", "aaabaaaabaaaaaaa", "abbababbabbbbabb", "aababbabbaaaabba", "bbbbbbbaabbbbbbb", "babbbabbbbbaabba", "bbbabaaaabbbbbaa", "abbababaabbaaaab", "bbabbababaabbaab", "aaaaaabbabaaaabb", "aaababaaababaaaa", "baabbaabaabaabab", "bbaabbbaabababaa", "bbaaabbbbbbaaabb", "abbbaababbabbabb", "aabaaaababbabaaa", "aaaaabbbbabaabab", "aabbabaabbabbbab", "bbbbbbbabaabbbba", "abbbaabbbaaababa", "aababababbbababb", "aababaaabbbbaabb", "bbbabbbaaabbbbbb", "aabbbaabbabbbaab", "babbbbbbbbbbbaaa", "baabbabaabababaa", "bbabbbbbbaaabbbb", "babaababaaaaaaaa", "aabbabbbaabaaaaa", "bbbbbbbbbaaaaabb", "aaababbabbbaaaab", "abaaabbbbbaaabba", "bbbabaabbababbbb", "bbabaaabaaababab", "abaaaabaaabbbaba", "ababbabababaabab"};
    vector<string> namesMen = {"R", "I", "b", "a", "A", "o", "q", "B", "x", "n", "y", "g", "r", "C", "O", "K", "Q", "G", "c", "k", "p", "D", "P", "m", "N", "i", "E", "e", "l", "M", "f", "d", "j", "u", "F", "z", "J", "t", "w", "h", "L", "v", "s", "H"};
    vector<string> answersMen = {"abbbbaaaaabaabba", "bbaabbaaabbbbabb", "abbabbababababba", "babababbbbbaabba", "baabbbbbabbbbabb", "bbbababbbbbbbbba", "bbbabbbaabbababa", "aaaaabaabaaabbba", "bbbbabbaaabbabbb", "babaabaabbaabbba", "abaabbbbbababbab", "bbabbbbabbaaabaa", "abbbabbaabbababa", "ababaabaaabababb", "abababbabbaabbab", "babaaabbabababaa", "bbbaaaaababbbaaa", "bbbbbaabbbbbaaab", "bbbbaaaababaabba", "bbababbbaababaab", "bbaababbbbbaabbb", "abaababbbbbbbbba", "bbaaababbaaababa", "baabbbaaababaaab", "abababbaababbbab", "baaabababbaaaaab", "ababbabbbbabbaaa", "babbbabaaaababaa", "aabbabaabbaaaabb", "bbbbabbbbabbbbaa", "babaaaabbabbabab", "baaaabbbbabbbbba", "abbaaababaaabbaa", "baaabbbbbaababab", "abababaaaabbabbb", "bbbaababbbbaabaa", "bbabaaaaaababbaa", "abaaaabaabaaaabb", "aaababaaaaabaaab", "abbabbaabbbbbabb", "aaaaaaaabbbabbbb", "aababbabaaaabbbb", "bbbbaaaabbababba", "baaaaababbbabbab"};
    string queryWoman = "M";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> namesWomen = {"k", "j", "f", "h", "a", "d", "n", "b", "e", "l", "c", "i", "g", "o", "m"};
    vector<string> answersWomen = {"ababaa", "abbaaa", "abbabb", "ababbb", "ababbb", "abbaba", "bbbbab", "abbaba", "baabaa", "bbbbbb", "aababb", "aaabba", "bbbabb", "abaaab", "babbbb"};
    vector<string> namesMen = {"k", "h", "d", "i", "o", "g", "c", "j", "f", "m", "l", "n", "a", "b", "e"};
    vector<string> answersMen = {"ababaa", "aaaabb", "baabab", "abbbab", "baabbb", "aaabaa", "baabab", "aabbbb", "bbbaaa", "bbaabb", "abbbaa", "ababbb", "bbbbba", "babbab", "aaabab"};
    string queryWoman = "j";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> namesWomen = {"G", "c", "u", "N", "k", "b", "s", "h", "H", "E", "y", "D", "d", "F", "f", "O", "J", "o", "I", "i", "p", "r", "a", "L", "B", "n", "C", "z", "v", "l", "A", "e", "K", "q", "P", "j", "g", "w", "m", "M", "x", "t"};
    vector<string> answersWomen = {"aabaabaabbba", "abaababbbaba", "abbbabbbbaab", "aabbabbbbabb", "aabbbbbababa", "ababbabbbaba", "abaabbbabaab", "babbbbbbbbab", "babbaaaaaaba", "bbababbbabbb", "babababbbbba", "abbbabbbbaab", "bbbaaaabaaaa", "aababbbbbbaa", "aabbabbaaaaa", "babbbbabbaaa", "aababbabbaaa", "abbaababbaab", "abbaababaabb", "bbabbaabbabb", "aaaababbbbbb", "abbbbabbaabb", "baabaabaabaa", "bbabbbbbabaa", "bbbbbabbaaba", "aababbbbbaaa", "baabbbbbbabb", "ababbabaabba", "bbaaabbaabab", "abbbaabaaaab", "bbabbaababba", "bbbabbbabaaa", "bbbbbbbabbab", "abababbaaabb", "aabbaaaababa", "baaabaaababa", "abbbaabaabab", "aaaaababbabb", "ababaabaabbb", "babbbabababa", "bbabbabaabab", "bbbabbbabaaa"};
    vector<string> namesMen = {"q", "u", "b", "I", "v", "w", "s", "M", "h", "z", "J", "P", "y", "t", "K", "H", "d", "G", "C", "F", "D", "x", "N", "r", "a", "c", "g", "i", "n", "A", "o", "m", "l", "k", "L", "f", "E", "e", "B", "O", "p", "j"};
    vector<string> answersMen = {"aaabaabbaaba", "aabababbbabb", "babaaaaabaab", "bbbbabbbbabb", "abbbbbaaabaa", "baaababaabaa", "babbabbaabab", "abbabbababbb", "aaabbbaaaaba", "bbbbbbabbabb", "baabbbabbbba", "babababbaaab", "bababbbbabbb", "bbaabbababaa", "bbabbbaaaaaa", "babbbbbabbbb", "abaaabbababa", "aaabaabaaaab", "babbababbaab", "bbaabbababaa", "bbaaaaababbb", "aabbbaaaabbb", "aababbbbbaaa", "abbabbaabbbb", "baabaaaabbba", "aababbabbabb", "bbabbbbbaaba", "abaabbabaaab", "ababaabaaaba", "baaabbbbbbba", "baababbaaaba", "bbbaaabaabbb", "ababbaaababb", "babababaaaab", "bbaabbaababa", "abbbaaaaaaab", "abaaaababbbb", "bbabaabbbbba", "abaababbaaba", "baababaababa", "abaaababbaba", "baabbbababba"};
    string queryWoman = "x";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> namesWomen = {"g", "c", "e", "h", "a", "d", "f", "b"};
    vector<string> answersWomen = {"bbaaabba", "bbbbbaab", "aaaababb", "babababa", "bababbaa", "bbbababa", "bbaaaabb", "bbaabbab"};
    vector<string> namesMen = {"e", "a", "h", "f", "c", "d", "g", "b"};
    vector<string> answersMen = {"bababbab", "abaabbab", "aaaaaaab", "aaaaabaa", "baaabaaa", "bbabbbbb", "bbbabbba", "abaaaaba"};
    string queryWoman = "h";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> namesWomen = {"p", "H", "v", "E", "k", "q", "j", "t", "f", "B", "g", "c", "C", "b", "x", "e", "J", "h", "O", "Q", "S", "s", "w", "I", "M", "D", "r", "R", "z", "P", "K", "d", "N", "n", "y", "L", "m", "G", "i", "u", "A", "o", "l", "a", "F"};
    vector<string> answersWomen = {"bbbbbabbaabaabb", "bbbbbabbbaabbab", "abaaaabbbaaaaaa", "ababbabbaabbabb", "aabababaabaabbb", "baabaababbbaaab", "bbbabbbbbbbbbbb", "aaaaaababababba", "aabbbbaaabbbaaa", "abbababaaabaaab", "aaabaaabbbbbbab", "aaabaaaaaabbbaa", "abaaabbbbbbaabb", "bbbbbbbabbbabba", "aaaaabbbababaab", "babbbbbbaabaaba", "abbbaaaaabbbbba", "abbbabaaabaaaba", "baabbaabbababab", "abbbababbbbbaab", "bbabbabbaabaaaa", "abbabbbbaaababa", "abaababbaaaabab", "abbaabbaaabbabb", "babaaaaababaaba", "bbbababaaaaabba", "ababaaaabaababa", "aaababbaaababba", "abbabaabbabbaab", "bababbabbbbbbbb", "aaaaaabbbbababb", "aababbabbabaabb", "babaababaaabaab", "aabbaaaaaababbb", "aabbaaababaaaab", "aabbaababababab", "babababbaaabbbb", "bbaabbabbabbaba", "aaaaababbbbbbba", "aaaaaaabababbba", "aaaabbbbbaababb", "aabaababaaababa", "babbabaaabababb", "aaaaabbbbabaabb", "aababbbaaababbb"};
    vector<string> namesMen = {"h", "u", "t", "F", "c", "r", "n", "O", "Q", "A", "P", "l", "J", "S", "s", "C", "x", "y", "w", "o", "j", "R", "H", "E", "g", "e", "a", "d", "q", "k", "L", "v", "i", "D", "p", "N", "B", "K", "z", "m", "f", "M", "G", "b", "I"};
    vector<string> answersMen = {"babaabaaabababa", "aaaababaaaabaaa", "ababbaaabaabbbb", "babbbaabaaababa", "bbbbabbaaaababa", "ababbabbbbbabba", "bbbbababbbaabba", "baabbaabaaabaab", "baababaaababbbb", "bbbaaaabbbabaab", "abbaaabbaaaaaaa", "aababaabaaabbba", "babbbbaabbabbaa", "abaaaabbbaaaaba", "baaabbabbabaabb", "aaaaaabbababbab", "bbbabbabbabbaab", "abbaaabbbabbbaa", "bbbbabaaaaabbaa", "bbbbbaababbabba", "abbabaabbabbbaa", "baaaabbaabbbaab", "baabbaaabaaabab", "abaaabbaabaabab", "aabbbbaaababaab", "aabbbabbbbbbbbb", "aaaaaabaaababaa", "bbabaaaaaaabbbb", "babbbabaabbbaaa", "aaabbbbbbabbaab", "baabababaababaa", "bbbaaabbaabbbbb", "baabababbababaa", "abbbbababbbaaba", "babbbabaaabbbaa", "baabbaababbbbaa", "babbbbaabaaaabb", "abbbbbaabaabaaa", "abaaabaababbbbb", "bbbaaaabababaaa", "bbaaaaabbbbbbaa", "abaaaaaabaabbbb", "aabbbbabbbabaab", "aaaabaabaaabaaa", "babbabaaaabaaba"};
    string queryWoman = "M";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> namesWomen = {"C", "j", "i", "S", "p", "G", "K", "n", "A", "r", "s", "O", "J", "R", "q", "o", "B", "z", "y", "H", "d", "F", "c", "x", "w", "g", "k", "u", "D", "m", "Q", "M", "e", "f", "P", "b", "h", "L", "v", "t", "E", "a", "I", "N", "l"};
    vector<string> answersWomen = {"bbaabaabbbabaabbaaabbbbaaabaaab", "aaaabaababbabbaaabaabaabaabbbaa", "bbbbaaabaaaababaaaabbbabaaaabaa", "baaabbabababbbabbaaaabbabbaabab", "baaaaababbbbabaaaabababaababaab", "abbababaababbbaaabaabbbbbabbbbb", "aabaabaaaabbbbababaababbabbbbab", "ababbaababababbaabbbbbabbbbabbb", "aabbbbbbbaabbbbababbaabaaabaabb", "aaaabaaababbbaaabbababaaaaabaaa", "ababbabababaabaabbbbabaababaaab", "aabbbbbaaabbaabbabaaaaaababbbab", "ababbbaabbaaabaababababaabaabaa", "aabababaabbababaabbbabaabbaabaa", "bbbaaaabaabbbaabbabbababbaabbbb", "babaabbabaababbbaababaaababbaba", "aaaaababbbbabababbabbbbbbbbbbba", "bbabbbaababbbabbaaabbbaabbbaabb", "aaabaabbbbbbababbbaaaaababbabba", "baaabbaaabababababbaabbabbbabbb", "aababababbbaabaaaaaabbbaabbabab", "bbbbababbbaabaaaabababbaaabbbbb", "baababbabaabbbabbbbbbbaaabaaaab", "aaabbaababbbaabbbaaaaabbbbaaaaa", "aaabbbbaaaababbabbaabbbaaabbaaa", "aabbbaaaabbbaabaaaabbbaaabaaaaa", "aababaabababaabbbabbbbbbbbaaaba", "ababababbababbaaababaaababaabab", "baababbabbbaabaababbaabbaabbbbb", "baaabaaaababbabaaaabaaaaaaaaaaa", "abbaaaaabbabbaaabbbbaababababbb", "aaaaabbbbabaaaaaaaababbbabbabbb", "aaabbaabaabbbaaabbbaaabaaaaaaba", "ababbaaaaabbbbbbbaababbababbbba", "abaaabaaabaaaaabaabbbbbaabbaaba", "babbbaabbabbbaabbbaaababbbbabbb", "aaababbaaabbbabababababababbaab", "abaabbaaababbbbbbbbbbaaaaaabbbb", "baabbaaabaaabaaabbaabaabbaabbaa", "babababaabbbbaaabbbabaaaaaabbbb", "aabbbaabbaaaababaaababababbaaab", "bbbbaabaaaaabaababbbabbaabbabab", "aabbabbabbbaaabbbbabbabbbabaaaa", "baabbaaababaaabaababbbaaabbbaab", "bbbabbbbabbbabbababbbbbabaababa"};
    vector<string> namesMen = {"a", "q", "P", "h", "D", "g", "n", "B", "t", "L", "z", "J", "H", "K", "e", "b", "u", "Q", "I", "o", "E", "j", "d", "r", "F", "C", "v", "G", "k", "l", "y", "f", "s", "R", "p", "i", "x", "S", "w", "N", "c", "A", "m", "O", "M"};
    vector<string> answersMen = {"abbabbabaababbabaabababababbabb", "abaabbbbabbabbaaaabbbbaaaababba", "abbaaaabbbbbabaabababaabbabbaba", "babaabaaaabbaabaabaabaabaabaabb", "baabbaaababababbbaaabbaaaaaaaab", "aaabaaabaaabbaaabbbaaaaabbabbbb", "bababaababbaabbbbabbbbaababbbba", "babbabbbbbabbbababbbbbaaabababa", "aaabaaababbaaabbbabaabbaabbbbab", "babaababaaabaaabbbabbbbbbaaabaa", "abaabababbbabaaaabaaaabaaabaaaa", "baabbbaababababbaabababbbbbbaba", "bbaabbbaabaabbaabbaabbbbaaabaaa", "aaaaabbbbaababbabbbbbbabbaabbbb", "babbaabababbbabbabbaaaaabbbbaab", "bbaaabababbabbbbabaaabbaababaab", "abaaabaababbaabaabbbbabbbbbabba", "bbbbbaaaaaabbbabaababaabbabaabb", "bbbabbbbbaabababaabbabaaaabbaaa", "bbbbbaaabbbbaabbaaababbbabbbbba", "baabbbabaaabbbbaabaaababbbbbbaa", "abaabaaaaaabaaaaaaaaaaaaaabbbaa", "abababbaaababaabaabbabbabaabbbb", "aababaabbbaaabababbbbbaaabaabba", "abbaabaabbaabbaabaaabbabbbabbba", "aaabaabaaaabaababbbbbbbaabbabaa", "aabbabbaaaaaaaaababaaabbbbbbbbb", "bbbabbaabaaaaabbbaabababbaabbab", "bbaaabaaaaabbbabaabbbabbaabbbab", "abbbaabbbaaaaabbababbaabbbaaaaa", "bbaabbbbabaaababbbbaaaabaaabbbb", "babaaabbabbaaabbaaaabaabbabbbba", "abababaabbbaabbaabaaaabaababbba", "bbbbabbaaabaabaaabbaaaaaaaabbab", "abbaaaaaabbaabaaabaaaabbabababa", "babaababbaaaaabbabbbbababaabbbb", "babbabbbbabbabbbbababbababaabbb", "baaaabaabaaaaaababbbaaaaabaaaba", "baabaabaaaabaabaabaabbaaababaab", "aaabbaaaaabaabbbbaabaabbabbbbaa", "bbbbbaaaabbbaabbbbaabbbbbaaaaaa", "bababaabaaaababbababbaaaaaaabbb", "bbbaabaaaaaabbaabbaabbaaaabbaba", "abababaabbbabbaaabbaaaaaabbbabb", "abbbababbabbabaaabababaaababaaa"};
    string queryWoman = "Q";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> namesWomen = {"y", "f", "j", "t", "b", "l", "v", "o", "u", "a", "m", "g", "x", "p", "c", "e", "k", "z", "r", "s", "n", "d", "i", "q", "h", "w"};
    vector<string> answersWomen = {"bbbabbbababababbbaabbaabbbbabbbba", "aabaabaaaabbbababaaababbabbaabaaa", "abaaabbaabbbbbabaaaaaaaabababbaba", "aabbbbbbababaabbaaabaabbaaaabaaba", "aaababaaaaaaababbabbbababbbbbaaba", "abababababbaaabbbbbbbaabbbaaaaaba", "aabbbbbbbabbbabaaababaabbaaaaabba", "bababbbbbbaaaabaabbbbabaaaabbbaab", "bbaaabbaabaaaababbabbabbbababbaba", "bbabbaabaabbaaababbbababbbbbabaaa", "baaaababbbbbabaababbaaaabbbaaabbb", "baaabbbbbaaaababbaabbabaabaabbabb", "babbbbbabbbbaaaababbbababaaababab", "bbabbbabbbbaabbaaabbabababbaabbba", "abbabaaabbaabaabaaabbaaaababbbaab", "abaaaaaaaabbaaaaaaaabaababbbbabbb", "aabababbbaabbaaaabbaaaaaaabbaabab", "bbbbbabbbabababababbaabbabbabaaab", "bbabbabaabaaabbaaabaaaabaaaaaabbb", "babbbabaaabaaaabbbbbbbbbbabbbabaa", "bbaaaabaaaaabbaaabbaaababaabbaabb", "aaabaabaabaabaabbaabbaaaaabbaabab", "aabaabaabbbabbabbbbbbaabbbaaabaaa", "aaabbaaaabbbbabababbbbbbbbabbbbba", "babbaaaaabbbababaaababbbabaabbbab", "bbabbaabbbaaabbaaaaabbbaabaababab"};
    vector<string> namesMen = {"d", "v", "k", "x", "f", "c", "m", "b", "o", "q", "z", "t", "e", "y", "g", "a", "l", "h", "w", "r", "s", "i", "n", "u", "p", "j"};
    vector<string> answersMen = {"abaaababbaabbbabbbabbabbaabbaaaab", "abaaabbaabaabaaaababbbababbbbaabb", "bababaabaaaabbbabbaaaabbabaaaaaba", "abbbbbbabaaaababbbaababbababbabba", "abbbaaaaababbaaabbbaaaabaabbababa", "babaaababbabbaabbbbabbababbaaaaba", "bbbbaaabbababbaabaabababbabbbbaaa", "abbabbbbbabbbaabaaabaaababbbbbaaa", "ababaaabbbbbaaabaaaaabbabbbbbabab", "babaaaaaabbbaababbbbaabbabbababba", "aabbbaaaaaaaabbbbbbbaaaaaabbbbaaa", "baababaaabaabbbaabababaaaaaaaabab", "aabaabaaabbbbaaaaaaabaaaaaaabbaab", "baababaaaababbbabbabaababbbaaabbb", "bbbbbbbaababaabbabababaababbbabbb", "baaababbbbabaaababbababbbaaaaaaaa", "babaaababbbbbbababbaabbbabbaaaaba", "bbaabbaaaabbabaaabbababaabbbaaabb", "aaaaaaaaabbbbaababaabaaaaabaababa", "ababbbaaabbaaaabbabbbbbabaaabaaba", "bbbababababbabbaabbaaabbaaabababb", "aabbbbababbababbaaabbbabaababaabb", "abababaabbbaabbababbabbaaaabaabba", "baaaaaaaababaabaabbbaabaababbbbba", "aaaaaabbaabababaababbbbbaaaabbbab", "abbbbaaaabbababbabbaaaaaabbaabaaa"};
    string queryWoman = "q";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> namesWomen = {"i", "p", "a", "l", "e", "h", "j", "n", "o", "k", "b", "m", "c", "f", "g", "d"};
    vector<string> answersWomen = {"aaaabaabbbbbabaaabbbaaaabba", "bababbbbaabaaaabaabaabbaabb", "bbbabaabbaaabababababaaabbb", "bbbabbaabbaabbbbbabbbbbaaba", "aabbbababaaaaabbbbbbbaabbab", "bbabbbaaaababaaaaabaaaaaaaa", "aaabbabaabbaabbbbbbaabbbabb", "bbaababaaaaabbbbabababbbbaa", "bbaaaabaaabbbaabbbbbabbbaba", "aabbbbbaabbabbabbbaaabbbaaa", "bbabbbabaaaabaabbaaaabbbaba", "aababbbbaababbaabbbbabbaaba", "aaaabbbabbabbbbaaabbaaaabba", "abbaababaaaaaabbabbaabbabaa", "abbbbaabbabbbaaabbaaaaaaabb", "aabaabbaabbbabbbabbaaaabbab"};
    vector<string> namesMen = {"c", "j", "g", "m", "n", "o", "b", "f", "p", "a", "e", "h", "l", "i", "k", "d"};
    vector<string> answersMen = {"babbaaaabaabbbbababababbaba", "bbbabbabbbabbbaababbababbba", "baabaaabbaabbabbbaaabbabaaa", "bbabaaaababbabaaaaabaabaabb", "bbababaabbbababbbabaaabaabb", "aabbaabbaabbaaabababbbbbbba", "abaaabaaaaababbbbbbbabbbaba", "bbaaaaabbbbaabbbaabbaaababb", "bbaaaabaabbbaaaaaabaaaabaaa", "aabaabbabbbbabaababababbaab", "abbbbaababbababbababbabaaaa", "bbbbbaabbbbaabbbbaaabbaabba", "ababbbaabaabaabbbaaabbabbba", "aaaababaaaaababaabaabbbbaab", "aaabbbbaaabababaaaababaaabb", "bbbaaaabbabbbabaababbababbb"};
    string queryWoman = "i";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> namesWomen = {"g", "f", "k", "m", "c", "b", "h", "i", "j", "l", "d", "e", "a"};
    vector<string> answersWomen = {"baabaabbbaabaaabbbbbaaaabaabbbaaab", "aaabbababbbbbbbbbaabbbabbabbbaaabb", "babaaabbbababaaabbaaaabaababaababb", "bababbaababbabbabbaabbbaababaababb", "bbbbaabbbaabbbabbabbababbabbbababa", "aaabaabbabbbabbababbabbbaabbaaabbb", "babbaaaababaabbabaabbbbabbabbbbabb", "abbabaaaaabbabbbaabaaaaabaabababba", "aabbbaabbbababbabababaaaaabbbaaaaa", "aabbaabbbaabbbbbaabbbababaaaabbbab", "aaababbabaaabbbbabaabaabaababababa", "bbabbabababbabaaababaaabbbbabbbaba", "bbaabaaabbaabbbbbabbabababaaaaaaaa"};
    vector<string> namesMen = {"g", "h", "m", "i", "c", "l", "b", "e", "a", "f", "j", "k", "d"};
    vector<string> answersMen = {"babbbababbaaaabaabbaababbabaaababa", "aabaabaaabbbababbbbaaaaabbabababba", "babababaabbbabbabbbaabbbabbabababa", "bbbbaabaababaaabaaaabbbbbbbbaaabaa", "abaaabbbabbabaaabaaabaabaaabbbbbbb", "ababbbaabaaababaabababbbbbbbabbbba", "aaaaabaaaaabaaabbaabbabbbbbaabaaaa", "baababbaaaaaaaaaaabbbabbabaaabaaaa", "bbbbaabaabbaabaaaaabbabbaaabaabbaa", "aaabaabbbbaaaaabbabbabbaaaaaaaabaa", "babbbababbbababbbababbabaaabaabbab", "babaaaaaaaabaabababababaaabaaaaaaa", "babbaabbabbbaaabbaaababbaaaaabaaaa"};
    string queryWoman = "h";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> namesWomen = {"r", "e", "x", "c", "G", "i", "z", "a", "b", "n", "l", "p", "D", "d", "m", "s", "v", "q", "f", "g", "o", "t", "F", "A", "w", "E", "B", "C", "H", "j", "k", "y", "u", "h"};
    vector<string> answersWomen = {"bbaaaababbabbabaabaaaabbaaababbbaaaabbbbbbab", "baaababbabbabbbbbaabababbaabbbaaababbaabbabb", "bbabaabbbaaabababbbbbbaaaaaaabbbababababbaaa", "bbbaabaababababbabbbbaabbbabbabababaabbaabba", "baaaabaabaabaababbbbabbaababbbababbabbaaabba", "bbbabbbbabbbaababaabbbbbaababaaabbabababbbba", "baaabbaababaaabbbbaabbbbaabbabbaabbbababbabb", "baaababbbbbbbababbababbbabababaababbabbbbabb", "abbbabbaabbaabababaababaaaaabababbaabbbbaaaa", "bbbababbbababaababaabbbbbbaabaaababaaaabbbab", "ababbabaaaaaabbaababaababbaababaaabaaabaaabb", "abaabbaaaaaaaabaabaabbaabbbbaaabaaabbaabaaaa", "abaaaaaaaababaabaaaaabbbbaaaabbabaaabbaaabba", "babaabaabbaaaaabbababbbaabaabaababbabbbbaaab", "abababbaaaaaaaabbbbbaaababbaabbaababbabababb", "aabbaaabbbababbabbbbbabbaaabaabbaaaaababbaaa", "abbbababbabababbaabbbaabaabbbbabbbabbabaabaa", "bbbaabbbaaaaabbbbbbaaababbaabbbbaaaaaabbaaba", "abaaababbababaababbaaabbbabbbbabbaaaaabbbbba", "abbaaababababbbabbbaaabababbbbbbbaaaaaabbbaa", "babababaaaabaaaaaabbaabbbbabaaabaaabbabbbbbb", "abbabaabaaabbbbaabbbabbaaabaaabbbbbaaaababab", "aabbbaaaaaabbaaababbbaaaabbababaaaaaabbabbbb", "aabaabbaaaaababbababaaabbbaabaababaaaaabbaaa", "babbbabbabbabbabaaaababaabbaaabbbbbabababbaa", "bababbbaaaabababbaababababbbbbabbabbaabbbbab", "aabaabbaabbaaabaaabaaaaabbbbbaabbbabaabaabbb", "baaaaabbbbbabbbbbbbaababbaabbbabbabbbbbabbab", "aabaababbbaababbbabababbbbaaaababaaaabbbabbb", "bbabbbbbbaabbbabaabbaabbbbabbbabbbbbabbaabaa", "babbabbaaaaabaabbababaaababbaabaabababbaaabb", "babbabaabbbbaaabbbaaaababaaaabbbbabbbaabbabb", "aaaabababaaababbaaabbbabababbbabbbbaabaaaabb", "abbbbbbbbabbbaababbbaabbbbaaabbabbabbbbaaabb"};
    vector<string> namesMen = {"q", "w", "i", "c", "y", "F", "g", "n", "p", "d", "v", "t", "B", "k", "e", "s", "E", "f", "x", "o", "H", "u", "m", "C", "h", "D", "z", "b", "A", "j", "l", "r", "G", "a"};
    vector<string> answersMen = {"bbbbbabaaaabbabaabbbbbababbbbbbbaaaabbbaaaaa", "abaabbabaaaabbbabbabbaaaabbabbabababbbaaabab", "bbababbbabbabbabbbaabbbbabababaaabbabaabaaab", "baaaaaabababbbbaaaaaaababbabbabbabbbbabaaaab", "bbbaabbbbaaaaaaaaababbaabbabaababbbaabbabbaa", "aaaabbabaaabababaabbbbbbbbbbbbaaabaaabbbaabb", "abaabbaaababbaaabababbbbaaaababbabbbbbaaabab", "babaabbbaaaabaaaabaaababbbabaabbaaaabbabbbaa", "bbbbbbbbaaaaaaaaababbbbbbbbaababbaabababbabb", "baababbbbaaaaaabbabbbabaabbaaaaaabbbbbbbaaaa", "baababababbbbbabbababbaaabaabbbaabaaabbabbbb", "bbbbbabababaaabaababbbabbbabbaabbabbbaaaaaaa", "bbabaababbaaaaabbaaababababbabbabbbbbbabbabb", "abaaabaaaaaabaaabaabaabbabaaabbbbbaabbabbabb", "aababaababbaabbaaaababbabaaabbababbaaaaaabba", "bbbbbbabbabbaabaaabaabbbbbbaaabaaabaabbaaaaa", "bbaabaaabbbabbbaaababbbbbabababaaabbbbaaabab", "abaabbbbaaabaaabaaaaaabbabaaabbaaaabababaaab", "abbabbabbababbbbbaabababbaaaaabbbbbbbabbabbb", "abaabaaababaaabbbabbabbababbaabbaaabbabbbaaa", "bbbaaabababbabababbababbbaaabaabbbbbabbbbbaa", "bbabbbabbbbbbaaabaababaaaababaabbbaaabaababb", "ababbbbbabbbabbbaaaabbabbabbbaababaababbaaaa", "ababbaabbbbbaabbabbabbaaaabbaabaaaabbaaabbba", "babbabbabababaaaababaaabbaaabbabbaabbbababab", "ababaababaaaababababbbbabbbbbaabbabbabbbbaaa", "abaabbababbaabbaaabbabbaabbbbaabbbaaaaaabaaa", "abbbbababbabaaabbabbbbbabbaabbaabbbababaaaba", "bbbbbaaabbbbbabbaabaababbaabbbbbbabbabbabbaa", "abbbbbbaababaaabbbaaaaabaaaabbaaaabbaabbabaa", "ababbaabbaaabbabbbbababbaaabaabbbbbabbaabbba", "babbbbaaaaabbbabbabbbbbababbbbabbbbbaabbabbb", "bababbbaabaaaabababbababbbbabbaababbbbbaaaab", "ababaabbbbababaaaaabbaabbbbbbaabbbabaababaab"};
    string queryWoman = "e";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> namesWomen = {"I", "o", "N", "R", "E", "d", "y", "z", "p", "P", "s", "v", "L", "a", "f", "u", "j", "x", "C", "k", "O", "J", "q", "M", "g", "Q", "e", "l", "H", "F", "w", "r", "h", "D", "A", "B", "t", "m", "c", "b", "G", "K", "n", "i"};
    vector<string> answersWomen = {"babbbbbbbbaaababbabaaaaabbaaabbbaa", "bbbabbabaaabbbbaabaaaaabbaaabbbaba", "ababbbabbaabaababbbbabbaaabbaabbaa", "abaaabbbaababbbababbbaabbbabbbabaa", "bbbbaaabbaababbbabbaabbbaaabbbaaba", "baaabaaaabababaabaaaaaabbbbbaabbbb", "babbaabbabbbaabaabbbaabbaabaaaaaba", "babbbaaabaabbbbbababbbbaabbaaaabab", "babababbbbaaabababaabaaaaababbbaba", "bbbbaaabbbbbbaaaaaaaaabbaaaabbbbaa", "ababaabaaaaaaabbbabbabaabaabababaa", "baabbbbaabbaaabbabbbaaababaaaaabab", "abbaaaaabbabbabaabbbbaaabbbabaaabb", "bbbaaabbbabbbbaaaababaaaabbbbbbaaa", "baaaabbbbababaabaabaaaabbbabbbaaaa", "ababbabaabbbaaabbbababbbbbabbbbaba", "bbabaabbbaabbaaabbbabbaabaaaabbbaa", "babbbbabbbaabaaabbbbaabaaabababbaa", "bbaababbbabbbaabbbabbaaaabbbbaabbb", "aababbbabbbabbaabaaabababaaaaaabbb", "bbbabaaaaabaabbaaabbabbbbaabbbbbab", "abbbabbbbabaaaabbaabbbbbabbababaaa", "bababbbaaabbbbababaaabababababaaba", "aaababbabbaabbbbabbbaabaaabbabaabb", "aabaaababbabbbbbbbbbbbbbbbbbaabbab", "babbababaaabbbaabaaaababbaaaabbbab", "bbaaabbaabbabbbbbbbbaabbbaabaabaaa", "baaaabaabbaabbbbbbbbaaabaaaaabbaba", "aaaabbbbaabbaaaaaaabaabbbaaababbbb", "bbaaaabaaaabbbbaabaabaabaabbaaaaab", "ababbabaaaabbabababbbbbaababbbaaab", "bbaabbbaabbaaababaabbbbbbbbaabbabb", "abbabbabaaaabaaababaabaaabbababbbb", "bbbbbbbababababbbaaaaaaabaabbabaab", "baababaabababbbaaaabbaaaaababbbbab", "baabbaaaabbabbabaabaabaaabbbaababb", "baaaaaaaabbbabbababbbbabbababaaaab", "bbbbaabaaaabaababbaaababbaaaabbbaa", "abbababbbaababbbbbbababbaaabbababa", "ababababbaaabaabbaabbbababbaaabbab", "babbbbabbaabbbbababbbabbbaaaaaaabb", "aabbbaaaaabbaabaaabbbaaabababaabba", "ababaabbbbbaabababababaaaabbbabbaa", "bbbaabaaabbbbaababbbbbabbbbaaabbba"};
    vector<string> namesMen = {"k", "K", "H", "f", "r", "G", "g", "t", "y", "J", "R", "s", "B", "d", "o", "F", "a", "L", "z", "i", "v", "x", "p", "e", "Q", "E", "w", "n", "C", "P", "M", "q", "c", "l", "A", "h", "u", "j", "b", "D", "m", "N", "I", "O"};
    vector<string> answersMen = {"bbbababababbbaaabbabaaaabaaaaabbaa", "ababbaabbabbabbaaaaaabaaaaaaaaabbb", "abbaababababbbbaababbbbabbababbaaa", "ababbabbababaaaabaaaabababaababbab", "aaaabbaabbbaaaaaabbabbababbbbabaab", "abbaaaabababababbbaabababbbbabbaaa", "babaabbbaabaaabababababbbbbbabbbab", "aaabaabaaabbabaaaaaabbaababaaababb", "abbbbbaababbabaabbabbaaabbababbbba", "babbababaaaaaaababbbbbaabbbababbab", "bbabaaaaaaaaaaabbbaaabbbaabbaabaab", "bbabababbaaabababbbabbaaaababbabba", "abbbbabbbbabbbbabababaabaaaabababa", "abbbbbabbababbabbabbbabbbbaaaaabaa", "abbaaababbababbaabbaababbaaaabbbaa", "aababaababbabaabaabaabaabaababaaab", "bbabbabaabbaaabbbaaabbbbabababbaba", "aaabbabbbabbaaaabbbbbbbbbaabbaabbb", "aabaaaaaabaaabaabaababaabbabaaaaab", "bababaaabbbbaaabababbbbbbabbbaabaa", "bbabbbbbbbbaaaaabaaabbaabaabbabaab", "baaabababbbabaabbaabaabababaaabbbb", "baabaabaaaaaabaaaababbbaabbbbabbbb", "aababaababbaaaabbabababababaababba", "ababbaabbabbaababaabbbbaaaabbbbaab", "baaabaaaaababaabaaabaababbaaaabbaa", "baabababbabaababbbbbbabbbabbbaabbb", "baaabaabbbbbbbabaabaaababbbbbbabab", "bababbbaaabbaabbabaabbbababaabbbba", "bbabbbababbababbababaaaaaabaaabbaa", "aabbaaaabbbbbbabbbbabaabbbbbbaabba", "baabaabababbaaabaaabbabbbbabbbbabb", "abbbaaabbaaaabbbbbbbbaabababaaaabb", "aaaabbaaabbbabbbababbbabbaabbbbaaa", "abbaaaabbabbbbaabaabababbaababbaba", "aaababababaabaaaaaaaaabababbaabbab", "bbaabbbaabaaabbbaababbaaabbaababba", "abaaaabbabbbaaabaaaaaabbbbaaaabaab", "aabbabbbaababbbaabbaaabbbaaaaaaaba", "aabbbabbbbaabbbbabaabbaaaabaababba", "baaaaaaababbabbabababaabaaaaabbbbb", "baaaabaaabaaaaaababbabbaabaaabbaab", "aaabaaabbbababaabbabbaababaaabaabb", "babaaabaaabbbbabbbbababbbabbabbaab"};
    string queryWoman = "R";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> namesWomen = {"k", "t", "o", "D", "s", "e", "d", "p", "C", "g", "i", "x", "h", "q", "z", "m", "v", "j", "w", "r", "E", "l", "c", "u", "y", "A", "b", "a", "B", "n", "f"};
    vector<string> answersWomen = {"babababbbbabbbbabababbbabbbbbabbabbbaababbbaa", "bbbaaabbbbabbabbaabbbbabbbaaaabbabaabaaabbbaa", "baabbbaaababbaaaaaaababbabbabaaaabaabbabbbbaa", "baababababbbbbaabbbabaaabaaabbbaaabaaabbbbaaa", "abaaaaaaaaaaababbbaaabbabaaaaaabbaaaaabbaaaab", "abaaaabbbbbbbaababbaaabaabaababaabbbbaabbbbaa", "baaabaabbbbabbbbaababaaaaaaaabbabbbbababbaabb", "ababaabaabaaabbabbbaabbaabaaababaaaaabbababab", "bbbbaababaabbaaabaaababababaaaaabbabaaabbbabb", "aaabbabbbaaabbabbabbaabaaababbabbbaabaabbbbba", "baaababbbbaababaababbaabaababbaaaaababbbbabba", "bbaabbbbbabbbbbbbbabbbbabaaababbbaabaabaaabaa", "babbbabbbaaabaabaaabbbbbbabbaabbbabbabbbaaaaa", "aabbbbbababbbbaabaabababbaaabaaaababbbababaaa", "bbabaaaaaaaabbaaaaabbaabaabbbbabbabaabbaaabaa", "bbbaabababaabababbbaabbaaaabbbbaaababbbababaa", "bbaaaaaabababbababaaaabaaabbbbbbbbbabababbbab", "abbbaabbaaaababbbabaabaabaaabbababababaaaaabb", "baaabbbaaaabbbbaaabbabaabaaaabbabaabbbaabbbab", "abbaababaaaabaabbbbbabbaaabbbbbababbabbbaabab", "babaaaaaaabbbababbaaabaaaabbabbbaaabbaababbba", "baaaaaaabbbbbabaababababbababaaababbaaaabbbab", "babbbaabaababbbaaaabababbaaaababaabbabababbab", "aabaabbbabbbbaaaaabbabaababbabbaabaabbababaab", "aaaaaabbabaababbbbaabbabaababbbabbbababbaaaab", "baaaaaaaaaabbaaaabbbaabbabaaaabbaaabbbabbaabb", "babaaaaabbababaaaabaaaabaababbaabbbbabaaaaabb", "aabaabaaaabaababababbaabbaaabbaabaabaaaaabaab", "abbaaababaabbbbabbaaaabaabbaababbbaaabbbbabab", "baaaaaabbbabbabbbbbbababbbabaabaaabbbababbabb", "babbbaaabbaabbabaabbabaabbbaabbbabbbaaababaab"};
    vector<string> namesMen = {"A", "s", "z", "j", "k", "i", "d", "m", "f", "g", "b", "D", "v", "y", "c", "B", "r", "h", "x", "a", "e", "q", "E", "p", "C", "o", "w", "l", "u", "n", "t"};
    vector<string> answersMen = {"aaaabbabbbbaabbabbbbabbabbabbbbbbaaabaaabbbbb", "bbabbbbbaaabaababbbbababbaaaaababbababbaabaab", "bbbaabaaabaabbbbabbbbabaabbabbaabaabbabaaaabb", "bbabbaabaabbababbbababaabaabaaababbbaabbaaaaa", "abbabbaabbbabaaaababbaabaaababbbaabbbaaaababb", "bbbababaaaabbbbbabaabbabbaaaaaabbaaabaaaabbba", "bbabaaabbababbbababbbaabbaabbbaaaabbabaaaaabb", "babaabbabbbbabaabaaaabbaabaababaaaababaaabaab", "aaababababbbaaabbaabbbabbbabbaabbabbaabbbbabb", "baaabbabbaabaaabaaaaababaabaabaabbbbbbaaaaaba", "abbaabbabbbbaabbbbabaaabaaababbaabbbbbabaaaba", "aabbbababaaabbbaababbbbbaabaaaaabbbaaaaabbaaa", "bbabababaaaabbbabbbbabaaaababbbbbabaaaaaababa", "babaaaaababbabbbbaabbbababbbbaaaaaaabaabaabba", "bbbbabbaabaabbbaaabbaaabbaababaaabbbaabaaaaaa", "baaabababbabbbbaaabbaaabaaabbbaabbbabbabbbbaa", "abaaabbbbabaabaababaaabbbaababaababababaaaaaa", "aaaabbabaaaabbabababaaaababbbabbbbaababbbbaab", "aabbbbaabbbaaabbbbaabbbabbaaaaababbbaabbbbaba", "aabaabbbaabbbabbaabaabbaaaaaababbababbaaabbba", "abbbaaaabaabbaabbababbbbbaaaabbabaabbabbbaaba", "abbaabbaabbaabbbbbbbbabbbabbaaabbaababbabbaab", "aabaaabbbbbabbbaabbabbabaabaabbabbbabbaabaaab", "abbaabaabbaaabbbaaabaaaaabbaaaabbbbaabaabbaaa", "baabbbaabbababababbbababbbbaaabbabaaabbababbb", "aaabaabaaabbabbbbaabbabbbbaabbbaaaaaabbbabbaa", "abbbbaabbbaabbbbbabaaabaaaaaabaabbbbaaabaabaa", "abbbbabbabbababaabbaaaaabbbaababbababbaabaaab", "bababbabaaabaabbaabbbabaaaabbababbbabbbbbaaab", "bbaaabbbbabaaabbbbbabbbaabbaabababaaababbabbb", "aaaabbabbaaaaababbbbabaababbabbaabbbbbabaabbb"};
    string queryWoman = "E";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> namesWomen = {"d", "j", "b", "k", "l", "w", "u", "z", "t", "c", "m", "f", "g", "s", "h", "e", "y", "A", "v", "o", "q", "n", "a", "i", "p", "r", "x"};
    vector<string> answersWomen = {"bbaabaaabaaaabaabbbababaa", "bbbbbabaabbaaabaaaaabbaab", "aaaaaabaabaaaabaabbbaabba", "abaabbabaaabbbbabaabaabbb", "babbaabbabbabaabbbaaaabbb", "bbbbbbbaaababbbbbbbabbbba", "bbbbbbabaaabaabbaaaabbabb", "baabbabbbaaabbbabaaabaaba", "ababaababbababbabbbaababb", "aabbbbabaaabbaabbbbbbabaa", "aaabaaabbbaabbbabbaabaaab", "bbabbaaaabaabbbaaaabaabba", "bbabbbbbbabaabbababaabbbb", "baababbabbabbabbaaaabbabb", "bbaabaabababbbbbabbbbabab", "bbabababaabaaabababbabbbb", "babbaabaabbbbbaaaaaababaa", "aaabbaabbbaaababababbabab", "babbabbbbababbbbbbbaaabbb", "baabbabaabbbaaabbbabbbabb", "babbbabbbbbbababbaaaaabba", "bbabbaabababbbabababaaaab", "babbbbaaaaabbbabbabbaabab", "abababaaaaaabbbaabaabbbbb", "bbaabbbbababaabaababbaabb", "bbabbbbababbbaaaaabbbabba", "aaaabaabababbbbbbbabaaabb"};
    vector<string> namesMen = {"v", "p", "t", "d", "a", "f", "n", "h", "w", "b", "z", "A", "o", "x", "r", "i", "q", "c", "u", "k", "j", "y", "e", "s", "g", "m", "l"};
    vector<string> answersMen = {"aaabbbbaabaabaaaababaaaab", "abbabbbbaabbbbaaaaaaabbab", "baaabbbaabbabbaabbaabaaaa", "baaaababaaaaabbbabbbabbbb", "abbaaabaaaabbaaabababbaab", "baabbbabaaabbbbaabaabbbaa", "aabbbabbbbbbaaababaaabaab", "abbabbaabbbaabaaabababbbb", "babaaaaaabbbbabbbbabbbbbb", "bababaaaabbbabaaabbaaabbb", "bbaaababbaaaaababbbbbbaab", "abaaabbabbbaabaabbabbbaaa", "babbbaabbbbaaabbbaaababbb", "abbabaaaaaaaaabbabaabbaba", "babababaabaabbaabaabaabaa", "babbabbaaaaabbabbbababbbb", "aaaaaabaababbbababbaaaaba", "bbbaababbbbaaaabababababa", "aaaabaabaaaaaabbbabbabbbb", "aabababbbabaabaabbbaaabaa", "bbaabaaabbbbaaabababaabaa", "aabaaaaabaabaaaabbaaababb", "babbbbbaabaababbbababaaaa", "aabbaababaabbaaaabbaababb", "aaaaabbbbbaabaabbababaaab", "ababababbbaaaaaabbabbbbab", "abbabaabbabaaabbbbaababbb"};
    string queryWoman = "t";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> namesWomen = {"h", "i", "e", "b", "p", "f", "c", "u", "m", "y", "g", "r", "z", "t", "q", "n", "k", "A", "a", "w", "o", "d", "v", "j", "x", "s", "l"};
    vector<string> answersWomen = {"aabaababbababaabaabaaaababaabbbababbaaaba", "abbabbaabbababbbbaababaaababaaabbbababbaa", "aaaaabaaaababbbbbbbaabaaabbbbabbababbbabb", "aabababbbbbaabbaaabaabbbaababaaababbbbbba", "bbbabbaaaabaabbbbbbaabbbbbbbbabbaaabbbaab", "abbbbbaabbbbbbbababbabbbbbaababbaaabaabab", "abbaaaabbbaaaabaaaababbaaababbaababbbabbb", "bbabbbbbabbbabbbbbaaaababbbaaabaaaabaabab", "bbaabbbaaaabbbaaaaabaabbbabbabbbbbbaabbba", "bbbbaabaaababbbabbaabbbbbbbbbbbbbbaaaaabb", "bbabbaabbaabbaabbbaabbbaaaabbbbbabbbaabba", "bbabaabbaababbbbabbbabbbbbababbaaabbaaaab", "bbbbbbbaabbababaaaaaababbbaaaaaaaabbbbabb", "baabbbaaaababababbaaaabbbababbbbbbabbaaba", "aaabbbbababbbaabaabaabaaaabbaabababaaaabb", "bbbabaabbabbabbbaabbaaabbbbabaaaabbbbbbba", "bbababbbbbbbbabaaababaabbbbaaabbaabaabbbb", "aabaaabbababbbababbbbbbaabaababbabbbbaabb", "babaaaabbaaabaaabbbaaaaaaababbababaaaaabb", "abbbababbbaaabbbaabaaaaaaabbaaabaababbbab", "babbababababbbaaaabaabbaaaabbbbaaabbbabbb", "bababbaaaaabaaaabbbbbbbaababbbabbabaabbba", "babaababbaaabbbbbbbaabbabbaabbbbaabaaabaa", "baabbbaaaabbbabbbaaaabbbbabaabaabbaaababb", "bbabbaaababbbbbbaaaababaaaabbbaabbabaaaba", "bbbabbbbbabbbabaaababbbabaababaababbaabbb", "abbabbbbaababbbababbbaabbbabbabababaaabba"};
    vector<string> namesMen = {"n", "y", "e", "l", "b", "h", "p", "s", "j", "f", "a", "m", "q", "r", "u", "k", "v", "t", "A", "x", "z", "w", "i", "o", "d", "g", "c"};
    vector<string> answersMen = {"bbbabbaaaabbaabbbbaabaabbaaababbbabbabaab", "bbabbabaabababbaaaabaababbbaababbbaabaaaa", "bbaabaababbabaabbabbbbabaabbbbbaabbababab", "babbaaaabbbbaabbbabbaabbbbababbbbbbbbaabb", "aabababbbaaaabbbaaababbbabaaaaabbabaabaab", "aabbababaaabbbbbbabbbbbbabbbbbabbbaaaabab", "aaabaabbbabbbabababaababababababaaabbaaaa", "bbaaabaaaaaaabbaababbabbaabbbaabbbabbbbaa", "bbbbaaaabbaaaaababaaabbabbaabaaaaaabbaaaa", "baabaaababaaaaababbaabaababbaaaabbbabbabb", "aabbbbaaabaaabaabaaabbababaaaaaabbabaabbb", "abbbbaabbabbbbbaaaaaaaaababbabaababaabbaa", "baababbbaaababaaabababbbabbbabbabaabbbabb", "bbbabbbaabbbbabaaaabbaaabbbaabbaaabbaabaa", "babbbaaabbaaabbaaabaaabbabbaabaaaaaaaabba", "aabbbaabababbaaaaababbbabbaababbbabbbabaa", "abaaabbbbaaaaaaaaabbbbaaaaabbabbaabbbbaab", "bbbaaabaaaaaabbbababbbbbbbbaabbbaabbaabba", "aabbbaaabaabbaabaaabbbabbbaaababaabaabbaa", "aababbbbaaababaaaabaaaaabaaaababbabbbbaba", "babababbaaabbaaaaaaaababaabbbbaababababab", "bababababbaabaababaaaaabaababbbabbabaabaa", "aaabaababbaabaabababbabbbbaaaaaababaabbaa", "baaaababaaaabaabaaaababbbbababbabbaabbbbb", "bbbbbaaaabbaabaabbababbbbaabababbbbaabbba", "babbbbbaababbaabaabbaaabababbbbbaabbbbaaa", "aaababaabbbbbbbbaaabbabbbaababbbbaaabaaab"};
    string queryWoman = "c";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> namesWomen = {"b", "u", "o", "f", "t", "j", "a", "i", "l", "p", "w", "r", "C", "v", "B", "m", "g", "h", "z", "d", "D", "E", "n", "y", "c", "A", "F", "e", "q", "x", "s", "k"};
    vector<string> answersWomen = {"bbaaaabaaaababbaaababaabbbbbbbaabbabbbababbbaa", "aaaabaabbbaaabbaaaaabbbaababbbbaaabaaaaaaaaaab", "aabbababbabbbaaaaabbbabbabababbabbbabababaabba", "bbbbbbbbabbbaabbbbbbbabbbbbbaaabbbaaaabaaaabaa", "babbaabbbaaaabaaababaabaababababbababbbbbbbaab", "abbaabababaabbaaabbabbbbaaaaabbbbaaaabaaababab", "baaabaabbaaabbabbaaaaabbbbabbbaaabaabbabbaabab", "bbbaabbaaaabbbaaaaaaaabbbabaabbbbabaabaabbbaba", "baabaababbbabbbbabbbaabaaabaabbaabbabbbbbabaaa", "babbbaaaababaabbaaaabbabbabbbbbabbbbbabaabaaab", "abaababbabbbbbbbaabbaaaababaaabbabbbbbbababaab", "aaabbbbababbbbbbbabaabbbbbbbabaaaaababbbaaabaa", "baabbaaaaaaabbaaaabbaaababbbbbbbbbabbbbaabbbaa", "babbaababbbabbbbaaaababababbbbbbaaabbaaaababba", "bababbabbaabaabaabaabbaaabbabaabaabbbbaabaabbb", "bbabaaaabaaaaaaababaabbabaababaaabbbbbaabbbabb", "bbbaaaaabbbaababaabaaaaaaababbbbaaababaaaabbba", "bbabbaabbbababbabbbabbbbaaaabaabaabbbbaabababb", "aaababbbbbaababaabbababbaabbaabbabbbabaababaab", "baaabaaabaabbbbbbbaabbabbabbaabbbbaaabababbbab", "aababbaababbabbaabbbbaababbabbabbbaaabababbaaa", "abbbbbbabbabbabbbbaababaaabbbaabaabbbaaaaaabbb", "baabaaaabbbbbbbabbbbbabbaaabaabbaabbaaabaabaab", "bbbbaabbabbaaabbaaabbabaaabbabaabbbabbbaaaabab", "ababbabbabbaaaabbbaabbbabbbabaaaabaaabbaaababa", "baababbbabaababaaaaabbbabaabaaababaaaaababbbbb", "aaaabaaaabbbbbbaabaaabbbbbbaaabaaabaaabbabbaaa", "baabaaaaaaabbbbbaababbbababbbabbababbaaaaabbab", "abbababbbabbaaaabaabbbbaabbbabbbaababbbaaaaabb", "abaabbaabababbabbbabaabbbabbbababaaababbaabbaa", "bbbbbaabbbabaaabbbabbaaabbbbbabbaabbbbaaababba", "babbabaaabbaaabbaaabbbabbaabbabbbababbbbbaabaa"};
    vector<string> namesMen = {"E", "d", "v", "y", "q", "z", "g", "B", "c", "C", "b", "A", "w", "o", "r", "u", "x", "F", "j", "D", "n", "h", "i", "s", "p", "m", "a", "k", "e", "t", "l", "f"};
    vector<string> answersMen = {"babaaaabaaaaabbabaabbaabbbabbbbaabaababaababaa", "baaabbbbbabbbabbbaabaaabbbbaaabbbabbbaabbbbbab", "bbbbbaababababaabaabababaababbbaabaabbabaabbbb", "abbbbbaabaaaaaabbabaababbbaaaaaaaabbabababbbba", "babbaaabbabbbbbaabaaaabbbbabaaababaaabbabababa", "aaaabbabbaabbaaabbbbbbabbabababbaaabbaaaabbaab", "aabbaabbababbbbaabbbaabbaabbaababbabbbbaabbaaa", "abbbbaaaabababaabaabbbababbbababaaabbabaababab", "aaabaabbbabbbbbbbaabbaabbababbbabaabbaaaabbbba", "bababaaaabbbabaaabbabbbbbabbbbaababbbbababbbab", "bbaabaabbbaaaababaaaabbbababbbbaababbbbbbababb", "aaabbbaabbbabbaabbbabaababbabbaaababbabbaababb", "aabaaaaaaaabbaaabbabbbaabbbbabbbbbaaaabbbbaaba", "baaaaabbaaaaaababbbabaabbaabaaababbaaaababaaba", "aabbbaaababbbabbaaabbbaaaabbabbbbbabaaabaabaaa", "aababababbbaabababaabbbbabbbababaabbabbbabaaaa", "babbaaabbabbaaabbaaaabbabbabbaaaabaababbaaaaab", "bbabbaaabaabbabbababbbbaaababbbbabaabababaabba", "aaaabbaaaabbbbabbabababbaabaabbbaaabbaabababbb", "babbbbbbbaaabbbaabaababaaabbababbbabbaaaaabaab", "aaaabbbbbababbabbbbbaabbbbbbababaaababaabaabbb", "bbababbbabababbbbbababbabbaabababaabbabaaababa", "abaabbbaabbbbbbbaabbbbabbabaabbabbaaaabaabaaaa", "abaabbbbbbaabaabbaababbababbbabbabbababbbbbbba", "aaabbabbbbbbabababaaabbabbbaaaaaaabababaabbbbb", "aababaabababaababbabaaababbbbaabaaaaaaaabaaaba", "bbbaabaabbbaabbbabbbbaaaaabbaaabbabbaaaababaab", "bbbaaaabbbabaabaaaabababbbbbaababaaaaabaaaaabb", "aabbaabbbbbaababaaaaaabababaaabbbbabbbbbabbabb", "baaabaabaaabbbbbbbabbbaabababbbbbabababbaaaaba", "abbabbabbababaaabbbaaabaabbbababbbababaaababbb", "baabaaabbbaaabaabaaaabbabbbaabaababaababbbbaba"};
    string queryWoman = "k";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> namesWomen = {"e", "d", "c", "a", "b", "h", "g", "j", "k", "f", "i"};
    vector<string> answersWomen = {"aaaabababaabbaaaababbbaabbabbaba", "bbaaaabbaabbbbaaabbaaabbabbbbbbb", "bbaabbbbbaaabbaaabaabbbbbabaabba", "babbaabbbbaabbbabaaabaabaabaaaaa", "aaababbbaababbaaabbaaababababbbb", "abaaaaaabaababbabbbabbbaabbbabba", "ababbababbababbaababbaabababbbbb", "abbbaababbbbbbabbababaaaabbbabba", "babababbaabbbabababbbbbaaabbabaa", "aaababaabbaaabbaabbabbbaabaaabba", "baabbaaaaababbbabbaababbbaabbbab"};
    vector<string> namesMen = {"f", "g", "c", "j", "b", "e", "i", "a", "d", "h", "k"};
    vector<string> answersMen = {"bbaababaaabbbabbaaaaabbbaaababba", "ababbbbaaaabaabaaaaaaaabbaaaaaaa", "bbabbabababababababbabbbaaabaaaa", "aaababaaabbababaaabbbabbbaaabbba", "aabbaabaaaabbabaaabbbaaababbbaab", "ababbabaabbbbbbbaaabaaaabbabbaba", "aaaaaabbbbbaababbaaaabaaaabbbaab", "abaabaaabbbabaaaaababbbbaaabaaab", "abababaabaaaabbaabbabbbabaaaabaa", "bbbaaabbaabaabbabaaaabbbaabaabab", "babaaaaabaababbaaabaaabbbaabbabb"};
    string queryWoman = "k";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> namesWomen = {"B", "A", "d", "y", "e", "u", "J", "f", "r", "a", "b", "g", "x", "I", "D", "c", "t", "i", "h", "G", "K", "l", "F", "n", "m", "s", "H", "k", "p", "v", "q", "o", "j", "C", "w", "z", "E"};
    vector<string> answersWomen = {"aaabbbbaaaaabbbbbaabababb", "aaaabbbaabbbabbbbabbbabbb", "bbbabababbaaaababbbababba", "ababbaabaaaaaababaaaabbab", "bbabbbaaaabbabbabbaaaaaaa", "babbbbabaabbbbbbaabbbabab", "aabbababaaabaaabbaaaaabaa", "aaaabaabbaabbbaabaaabaabb", "aabbbaaabbaabbbabbbbaabab", "aaabbbababbbbaaabbaaaabbb", "baabbbbaabbaaabbbbbbaabab", "aaaabbabbababaaaaabbbaaaa", "bbbababaababaaaaaaabbbbbb", "bbbabbbabbbababaabaabbbaa", "bbaaaaaaaabaabaaaabababab", "aaaabbaabbbabaabaabaabaab", "abbbbaaaabbaaaaaabbbaaabb", "bbababbbaabbbaabbbabaaaaa", "baaaababbabaaababbbbbaabb", "aabbaabbabaabaaaabaaababa", "babbbaaaabbbbaaaaaabbbaab", "babbabababababbbbbaababba", "abbbbbabbbbabababababaaaa", "aabbabbaabaaaabbbaabaaaab", "aabaaababbaaaababbabaaaba", "babaaabbaabbbaababaaabbab", "bbabbaaabaaaabbaabbbaabab", "bbbbababaaaaaabbabaababbb", "aaaabaaaababbabbaabbababa", "baaaababbaaaaaaababababba", "aababbaaaaaaaaabbababaaba", "abababaaababbbababbaabbab", "babbaabaaabaaaaaabbbaaaba", "baaabbbabbabaabaabaabbbab", "baabbaaaababbaabbbbaaabaa", "bbababbbbaababbbabababbaa", "baabbbabbbaabaaababbaaaab"};
    vector<string> namesMen = {"f", "k", "E", "t", "n", "p", "s", "F", "w", "u", "a", "x", "e", "r", "G", "j", "v", "B", "o", "y", "A", "l", "b", "H", "D", "h", "g", "m", "J", "i", "q", "c", "z", "d", "K", "I", "C"};
    vector<string> answersMen = {"abbaaabbababbbbbbbbbbabbb", "bbbaabaababbbbbabababbbab", "baaaabbababbbbbaaabababba", "bababbababbbbbaaaabbbaaab", "ababbabababababaababbbaba", "babaaabbbbaabbbababaabbba", "baabaaaabaababaabababbaab", "aabaabaabbbbaabaaaabaaabb", "babaabaabbbabaaaabababbaa", "bbaaaaabababbbabababbaaba", "aabbbababababaaabaabbabaa", "babaabaaaaabbbaabababaaba", "aaabbaaaaabbbaabbaabbbbbb", "baaaaababbbbabaabbaababbb", "babbabaabbaaaaaaaaaabbaaa", "bbbabbbbabaababaabbababbb", "ababaabbaabbaababaaabaaab", "babbabbabbbabbabbbaaaaaba", "bbbaabaaabaabaabbbbabbbbb", "bbaaaabaaaabaaababaabbaab", "baabababbbbaabaabaaabbaab", "bbbabbaabbbbabaaabaabbaba", "baabbbaabbbbabbababaaaabb", "bababbbbaaaababaaababaaaa", "aaababaabbabbbaaabbababab", "bbbabaaabbaababbbaaaabbbb", "bbbabbababbbaaaabbaabbbaa", "abaabaaababbaaabaababbaba", "abbaaaaaabaababaaabbbaaab", "aaaaabbbbabbbaaaaabaababb", "ababbaaababbaabbbbbbbabab", "aababbbbbbabbabbabbbbbbbb", "ababaabbabaaabaabbbaaabba", "abbabbbbaabaabbbbbabababa", "baaaaaaabaabbbbbabaabbbba", "aaababbbbabaabbabbbbbbabb", "abababbaaabaabbbaabbbaaba"};
    string queryWoman = "j";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> namesWomen = {"l", "s", "I", "j", "y", "h", "z", "C", "k", "f", "r", "m", "t", "n", "a", "H", "w", "b", "F", "d", "B", "E", "u", "g", "q", "G", "o", "c", "e", "v", "A", "x", "i", "p", "D", "J"};
    vector<string> answersWomen = {"bbabbababababaabbbb", "bbbabbabbabbaaaaaaa", "aaaaaababbaaabbbbbb", "babaaababaaabaaabba", "baababaaaaabaabbbba", "abbaabbbbbabaabbbbb", "babbbabaabaabababaa", "babbaabababaabbabba", "bbabbabbabbbbbabbbb", "babbbabbbabbbbbaabb", "aaabbabbbaabbbaaaaa", "baaababaaaabaababaa", "aaaababaabbaaaaaaab", "aabababbbbbbababaab", "abbbbabbbbaabbaaaab", "baaaaaabbbbbbbbbbaa", "baabbbbbbbabababaab", "aaaabbabaaaababaaba", "ababbbbbababaababba", "bbaaaabbabababbabaa", "abaabaabaabaaaaabba", "abbbbbbabbbbabbbbbb", "baabaababbbaabbbbba", "aabbbbbbbaabababaab", "babbbbbaabbaaababab", "aababaabbababbaabba", "babbbabaabbabbbabaa", "bababaabbbaaabbbaba", "abbababbbaababbabbb", "bbaabbbabbbbaabbaba", "baabbbabaababababab", "bababbbaaabbabbbabb", "aabbbabbabbbbaabbab", "aabababbababaaaabbb", "aabaabbbbabbabbbbbb", "baababbabaaabbabbbb"};
    vector<string> namesMen = {"E", "m", "e", "B", "G", "k", "v", "c", "C", "d", "b", "t", "n", "g", "x", "H", "q", "h", "r", "J", "s", "f", "i", "u", "j", "y", "D", "o", "p", "z", "w", "F", "I", "l", "A", "a"};
    vector<string> answersMen = {"babbabaaababbbbabaa", "aabbabbaabbabbbbabb", "bbbaabaabbaabbabaab", "abaaaabbbbaabbaabaa", "abbbabbaaababbbbbab", "abaaaabbbaabbababba", "bbbbbbababbaabbaaaa", "aabaaaabbaaabbabaab", "ababaaabbbabbbabbbb", "bbaabbbbabababbbbab", "bbbabbabbabbabbabab", "aaaaaaabbabbbbbbaab", "aabaaaabaaabbaabaab", "aabbbaaabbabaababbb", "abaabbbbaaaaaaababa", "aabbababaaabbbbaabb", "bababaaabaaabbaabbb", "abaaaabaaaabaaaaaab", "aababaabbbaaabbaaba", "ababaabbababbbbbbaa", "aaabaabbababaababbb", "bbababbaaabbababbbb", "abbabaabbbabbbabaaa", "aabababaabbbaabbaba", "babbbbbbabababbbbba", "bbbababaabaaabbbabb", "baaabaabababbbbaaaa", "bbbbababbabaababaaa", "bbaabaaabbbabaabbbb", "abaabaaaabbaaabbbba", "aaaaaaabbaaabaaaaaa", "babbbbbabbabaaabbaa", "abbababbbabbabbaaba", "bbabbbbbabbaabbbbab", "aabaaaabbaaaabaabba", "babbbabababaabbabaa"};
    string queryWoman = "v";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "u";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> namesWomen = {"a", "b", "d", "e", "c", "f"};
    vector<string> answersWomen = {"bbabababbbbaaabbbabbbabbaabbbaaa", "aaabaababbababbbbaaabaababbabaaa", "aabababbbbaaababababaaaaaaabbbba", "bbbbaabaaabaabbbbabbabbabaabbbab", "abbabaabbbbbabaabbbaabbabaaaabba", "aaabbabbbaaabaaaabbabaaaaaaaabba"};
    vector<string> namesMen = {"a", "c", "f", "d", "e", "b"};
    vector<string> answersMen = {"baabbabbabbababbbabbababbaaabbab", "abaabbbbaabbababaababaabbabbbaaa", "abbbbbbaaababaabbaaabaabbaabbbbb", "babbaababababbbbabaaaaababaababa", "ababbababaababaabaaababaaaaaabaa", "bbbabaaaabbbabbbaabaababababbaba"};
    string queryWoman = "f";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> namesWomen = {"u", "n", "y", "s", "l", "f", "e", "F", "a", "i", "E", "h", "b", "B", "p", "A", "k", "D", "j", "c", "t", "z", "x", "C", "v", "w", "o", "g", "q", "m", "d", "r"};
    vector<string> answersWomen = {"bbaaab", "aaaaab", "baabbb", "aabbbb", "baaaaa", "bbabaa", "babaaa", "abbbab", "abbbaa", "aababb", "aaabbb", "ababba", "aabaaa", "aabaab", "bbbbbb", "babaab", "baabaa", "baabab", "baaaba", "bbbbbb", "bbabbb", "bbbaaa", "baaaab", "aaabbb", "abbaaa", "baaabb", "bbbbaa", "aaabba", "baabab", "bababa", "aabbaa", "bbaabb"};
    vector<string> namesMen = {"m", "d", "D", "c", "F", "e", "A", "g", "z", "o", "u", "p", "i", "n", "C", "s", "r", "j", "t", "x", "f", "q", "E", "B", "a", "k", "b", "y", "w", "v", "l", "h"};
    vector<string> answersMen = {"ababab", "bbbaba", "babaaa", "aabbaa", "bbabba", "abbbaa", "bababa", "abbbab", "baaabb", "babbaa", "bbabbb", "bbaabb", "aabbab", "abbaab", "baabbb", "aaaaab", "abaaab", "aabbbb", "bbabaa", "bbabbb", "abaaaa", "abbaaa", "bbaaba", "aaabbb", "abbbab", "bababa", "abaaab", "ababbb", "baabbb", "aabbab", "ababaa", "aaaaba"};
    string queryWoman = "E";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "j";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> namesWomen = {"g", "x", "r", "y", "t", "l", "m", "d", "u", "n", "h", "e", "s", "v", "a", "i", "k", "p", "b", "z", "f", "j", "c", "w", "q", "o"};
    vector<string> answersWomen = {"baabaabaaabbaaab", "aaabbbbbbabaaaaa", "aaabbbaabbbbaabb", "aaabaabbabbabbbb", "babbbbabaaabbbbb", "aaaaababababaaaa", "baaaaabbbbbbbbaa", "babbbaaabbbbbbab", "aabbbabbaaababaa", "bbabababbbbabbbb", "ababbaababaaabab", "abbbbbbbaaaababb", "baaaaaabbabbabab", "baaaaabbaaabbbab", "baaaababbbababab", "abaabaaabbaabaab", "ababaabbaabaabbb", "abbbbbabbaaaaaab", "aabaaabababbbbaa", "bbaabbaaaaababba", "bbaababaaaaaabab", "baaabbbbaabaaabb", "bbbbbbbaabbbaaab", "ababaaaabbabaabb", "aabbbabbbbbababb", "bbabaabbbaababbb"};
    vector<string> namesMen = {"b", "t", "u", "i", "d", "o", "e", "f", "y", "q", "l", "a", "s", "c", "x", "n", "k", "g", "w", "h", "z", "p", "m", "v", "j", "r"};
    vector<string> answersMen = {"aababaaaabaaabab", "abbaabaaaabbbbaa", "bbababaaabbbbbbb", "abbbaabbbabbbabb", "babbbbbabbbaaaab", "baaaaababaaaabab", "abaaabaabbaaabab", "abbabaaaaaaabbbb", "aabababaaaaababa", "bbbaaababaabbbaa", "babbabaaaabaaaab", "abbaaabbbbaabbbb", "abaababaabbbabab", "aaabbbbababaabaa", "abbbbbbabbabbaaa", "abbababbbaabbaba", "bbabbaabaabbaaab", "abaabbabbaababab", "abbbaaaabbaabbab", "abaaaabaabbbabbb", "aababbaababbaabb", "ababbbabaaaaabbb", "aabaaabababbbbab", "abbaabbaabababab", "abbbabbbababbbbb", "bbaaababbabaabab"};
    string queryWoman = "d";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> namesWomen = {"f", "M", "F", "K", "U", "b", "y", "m", "H", "J", "o", "I", "P", "Q", "w", "R", "p", "k", "O", "x", "a", "c", "D", "C", "l", "g", "T", "B", "s", "q", "n", "z", "i", "N", "u", "t", "e", "j", "E", "r", "S", "G", "A", "d", "h", "v", "L"};
    vector<string> answersWomen = {"bbbababbabbabbaabababab", "bababaaabbaabaabababbab", "bbbbbaaabaababbbaababaa", "baababbbbaabbaabaababbb", "abbaabbababaaabbbaabbba", "bbbbabbaabababbbaaabbbb", "aabaabbabbbabbabaaaaaaa", "aaaabbaabaabbbaabaabbaa", "abbabbababbbbaababbbabb", "aaabaaaaababaababaaaaaa", "aaaabbaaaabbbaabaaaaaab", "baaabbbbbaaaabaabababaa", "babaabaabaabababaabbbbb", "abbbbabbaaaabbbababbaba", "bbbaababababbabababbaab", "babababbabbabbbababbaba", "bbaabbbbaaabaaabaabbaaa", "bababaababbabababbabaaa", "babbbbaaaababaaaabababb", "bbaaaaaaaaabaaaababaaba", "bbaaaaaabbbbbbabbbaabba", "bbaaabbabbbbaaaaabbbaab", "bbaabaaaabbaabbbbbaaaaa", "ababbaaabbaaaaaaaaabaab", "aabbabbbababaaaabaabbab", "abbbbbbaaaaabbbbaabbabb", "bbaabbabbbbbaaaabbaaaab", "abaaaaabbabbbaaaabbbaba", "bbaabbabbaabbbabbababaa", "aababbbbabbbabaabaaabaa", "abbabaaabbbababbabbbabb", "ababbbabbbabaabababbbbb", "bbabababababababbbbabba", "babbbaaabaaabaaabbaabab", "baababaaaabbabaabababaa", "abbbabbabababababbbabbb", "baabaaaabbabaaaabbabbbb", "bbabbaabaabbababbaabbba", "baabaababbaababaaaaaaaa", "abbabbaababaabbbaabbbab", "aaaabaaabaabbabbaabbaaa", "abaaabbabaabaaaabababbb", "ababaaabbaabbbbbaaababa", "aabbbaaabbbbaaaaaabbbba", "abbababaabaabbbabababba", "aabbbaaaabababababaaaab", "abbbaababbaabaabababaaa"};
    vector<string> namesMen = {"i", "P", "M", "v", "I", "q", "z", "A", "l", "w", "R", "t", "m", "f", "H", "r", "c", "G", "E", "Q", "D", "x", "p", "b", "B", "S", "F", "h", "O", "L", "u", "J", "K", "j", "T", "a", "n", "o", "C", "s", "y", "e", "g", "d", "N", "U", "k"};
    vector<string> answersMen = {"bbaabbabaaaabbaaababbba", "ababbbbbbabaabbbabaabbb", "abbbbababbbbbaabababaaa", "bbaabaabbbbaababaaaaaab", "baaabbaabbabbababbabbbb", "ababbbbbabbabbbabbaaaaa", "baaabbbbbabbbbaaaabbabb", "babaaababbaaabaabbbaaab", "abbbababbbbbaaaaabbbaba", "ababaaabaaaaabaaabbabaa", "aabaabbbbaaaabaababbabb", "aabbaabaababbababbabbab", "babaaaababaabbaabbabaaa", "aaabaaaaabaaabbbbbaaabb", "aabaabbabbaaabbbaababab", "baaababaaabaabbbbaaabba", "bbbabaababbaaaababaabab", "aaaaabbabaababbaababaab", "babbaabbbbababbabbabbba", "aabaabbabbabaaabbbbbaab", "abbabbabbababaababbbbaa", "baabaaabbbbabbaabbababb", "abaaababbabbbbbbaaabbbb", "abbbababbbabaabbabaaaaa", "aaaaabbbabbbaabaaababab", "aabbbabbbbbbbaaabababba", "baabbbaabababbbbaaaaaba", "bababaaabbaaabbaabababb", "abbabbbbbbaababbbbbbaaa", "aabbbbaabbaabaaaaaabbbb", "aaaabbbabbbbabbbabbbabb", "bbbbbabbbbaaabbabaaaaba", "abbabbaabaabaaaabbbbbab", "aabbaabbabbabbaaaababab", "aaabbbbbbaabbaaababaaba", "baaaaababbabbaabbaaabaa", "ababbabababbaaabaabaaba", "abbbbbaaaaabaaaaaabaaab", "bbaaabbbbaaaaabbabbaabb", "abaabbbaaaabaaaabbbbbba", "aaaabababbbbaaaabababbb", "bbaaaaabbabaaabaaaababa", "babaabababababbbabbbaaa", "bbbabbabaaababaaaabaaab", "aabbbabbabbabaaaabaabba", "bbaaaabaabbabbbababbbaa", "abbababbbabaaabbabaaaba"};
    string queryWoman = "m";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> namesWomen = {"b", "f", "g", "c", "d", "e", "a", "h"};
    vector<string> answersWomen = {"bababb", "abaaab", "aaaabb", "aaaabb", "bbabaa", "bbaaab", "babbab", "bbbbaa"};
    vector<string> namesMen = {"f", "b", "a", "d", "h", "g", "e", "c"};
    vector<string> answersMen = {"bbaabb", "abbbba", "baaaab", "bbbbaa", "baaaba", "aabbbb", "ababaa", "bbaabb"};
    string queryWoman = "g";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> namesWomen = {"q", "b", "c", "n", "k", "m", "g", "p", "j", "r", "h", "f", "d", "i", "l", "o", "e", "a"};
    vector<string> answersWomen = {"baaaaabaabbaabaa", "bbabababbbbbbabb", "ababbabaaababbba", "bbbbbaababbbbaaa", "ababbbbbbabbabaa", "babbabaabaaaaaba", "baabbbaababaabab", "babaabbaabaaabaa", "abbaabbababaaaab", "bbaabbbaabaabaaa", "abbbbbbbbbbabaaa", "aabbababbbaababb", "aaaaaabbaaabbaab", "aabaababaabaabba", "aaaababbbbabbabb", "baabbaaabaabaaab", "aabaaabaaaaaaaab", "aabaaabbbababaaa"};
    vector<string> namesMen = {"b", "j", "l", "q", "e", "d", "c", "f", "n", "p", "k", "r", "a", "o", "i", "m", "g", "h"};
    vector<string> answersMen = {"bbabbababaabbabb", "baabaabbaabbabbb", "aababbbbabaabbbb", "babbaabbaabaaaba", "bbbaaabbaabbbbba", "bbaabbbaaaaabbbb", "ababaababbaabaaa", "bbaabbabbaaabbba", "bbbbbbbaaabbabab", "aabababababababa", "babaaaababbababa", "abbabbbbaaababab", "abbbaaabbaabbaba", "bbbbbbbbababbbba", "aabbbaabbbaababa", "bbababbbaabababa", "ababbababaaaaaba", "aaaaaaabbbbaabaa"};
    string queryWoman = "c";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> namesWomen = {"d", "p", "J", "H", "h", "r", "M", "I", "b", "j", "v", "m", "N", "B", "A", "w", "x", "L", "l", "u", "a", "o", "g", "y", "z", "n", "f", "D", "c", "k", "i", "G", "e", "O", "F", "K", "t", "E", "C", "s", "q"};
    vector<string> answersWomen = {"abbabaabbbabaabbbaabaabababbaa", "abbaaaaaaabaababbbaabbaaabaaaa", "abbababbbababaaaabbaaaabbababa", "bbaabbbaabaaaaaaabababaabbbbaa", "aabbbabbaabababaabababaabbaabb", "aaaabaaaababaababbbbbaaabbbbbb", "bbabbbaababbaaabaaaabbbbbabbab", "abaaabbbbbabbaaababbbbaaabaaab", "aaaabbbabababbbbbbbbbaabbababb", "bbbabbbaabbaaababbbaababbbbaaa", "babbbaabbbbbaabbaabaaaabaababb", "aaabbbabbababbaabaabbaaaabbaab", "baaabbaababbbaaaaaaabaabbaaaba", "aaababbbabaabbbbbbbaaababaabaa", "abbabbabbbabbbaabbbbaaabbaaaaa", "baabbabbbbbbbbbaabaababbbaaaba", "bbabbabaaabaaabaabaaababbaabaa", "bbbbabaabbaabbabbbabaaabaaabbb", "bbbbbaaababaababbaabbbbababbaa", "abbaaabaaaababababbbaaaaababab", "aaaaaabaabbaabbbabaabbbaabaaab", "aababaaaaabbaaaababbaabbababbb", "ababaabbbaaaaaababbbbbabaaabab", "abaababaaabaaaaaabaaabaaabbbbb", "bbabbabbababaaabbabbbaabaaaaba", "ababaaaabbabaaabbabbabababaaaa", "abbbbaaaaaabbbbabababababbabbb", "aabbbaaaaabaababbbaabbabbabaab", "baabbbbaaaabaabbaababaaaaabbbb", "abbbbbbabaabbbaaababaababbbaba", "abaabbbaabaaaaaabaabbbbbbaabba", "aabaabababbabaaaaabaabaaababaa", "ababbbaabbbbaababbabbababaaaaa", "aabbababbbabbaabbaabbaabaabaab", "bbabbbbabbaaabbabbbbbbbbaababb", "baaaaababbbbbbbabaaabababbabab", "bbbaaababaaabbaabaaabbababbbba", "abbabbabbababbbbababbabaabaaba", "bbaabaaabbbaaabbaabbbaaababaab", "abaababaabbabaabaaabababbbaaab", "abbbbaabaaabababababaaaabbbbab"};
    vector<string> namesMen = {"K", "C", "k", "b", "B", "D", "i", "u", "m", "f", "p", "x", "j", "G", "M", "n", "A", "e", "z", "J", "y", "h", "I", "r", "v", "a", "F", "o", "N", "d", "w", "L", "s", "O", "q", "H", "t", "l", "c", "E", "g"};
    vector<string> answersMen = {"baabbaaaabbaababbbaababbabbbaa", "bbbbbbbaabaaabbbaabbbaaaabaaba", "bbbbbbabbaaaaabbaabbaaabaabbaa", "bbbbbbbaaabaaabaabaabbabaabbab", "aabbbaaababbabbaaaaabbabbbbbaa", "bbaaabbaaabbbbbabbbaabbabbabba", "aaaabaaabbaababbababbbbabaabbb", "bbbbbbabaabbbaaabaabbbbbbbbbba", "abaaababbaabaaabbbbababaaabaaa", "aaaabbaaaababaaaabbbabbabbbabb", "baaabaabaaababbaabaaaaababbaab", "abaaababbaaabbababbaaaabaabbab", "baaaabaabababaabaabbbbaaabbaaa", "bbababaaabaabaabaabbaabbbbaabb", "abbbbaabbabaababbabbbbaabbbbba", "bbbaabbbaaaabbababaababaabaaba", "bbabababbbaaaaaabbbbaaabbabbaa", "bbbbaaaaaabaaababbbabbbbbbbbbb", "aaaabaababbbbbabbaabbbbbbbaaba", "bbbababbabbaabaabbabaaabbbabab", "babaaabbabbaaaaabbaaaabaaababa", "baabbbaabbbaaabbaabaaabbbaaaab", "bababbbbabababbbbaaaaabbbbbaaa", "bbababbbbabbaaaabbbababbbbbbaa", "baaaabbabbaababaaaaabbbbbabbab", "ababababaabaababbbbbbbaaaaabba", "bbbbabbbbbaabbbabaabaabbbbbbba", "ababaabbbbabaabbaababbaabaabba", "ababaaababbbababaaabaaabaabbaa", "aabaaabaabbababbbbaaaaababbbaa", "abbbbbabbababaaaabbaaaaabababb", "aabaababaaabaaababaaababbabbaa", "abaabaabaababaaaaabaaaaababbbb", "baabaabbaaabbbaaaaababaabbabbb", "bbbbabaabbaaaabababbbabbaababb", "aabbbbaabbbaaaaaababbaabaababb", "abaaababaaababbaabbbaabaabbaaa", "babaababbaaaaabaaabababbbbabba", "abbaabbbaaaabaaaababbaaaabbbab", "bbaabaabaaaabbbabababaabaabaab", "abbbbabbaabbaabbbbaaaabbbbbbaa"};
    string queryWoman = "j";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> namesWomen = {"e", "g", "i", "c", "h", "n", "q", "d", "p", "f", "k", "m", "o", "l", "b", "j", "a"};
    vector<string> answersWomen = {"abbababbbbabaaabbbb", "bbaaaaaaaaababaabab", "aaababababbbbababab", "babababbbbbaabbbbaa", "aaaaaaaabaaabaaabba", "bbbbbbbabbabaaabbaa", "aabbbabbaaaabbbbabb", "abaaaaaaaabbbababaa", "baaabaaabababababab", "babababaaaababaaabb", "bbbaababaaabbbbaabb", "aaabaabaabababbbbba", "abbabbbbaabbbbabbaa", "aabaaaabbbbbabaaaaa", "ababbbaaaaabbabbbab", "aabbabbaaabbbbbbbaa", "aabbbababbaababaabb"};
    vector<string> namesMen = {"n", "k", "q", "d", "l", "a", "j", "g", "m", "p", "e", "i", "b", "f", "c", "o", "h"};
    vector<string> answersMen = {"abbbabbbbabbabaaaab", "abbaabaabbbaaaabbab", "ababbbabaabbbbbabba", "bbaabaaaabbabbbabbb", "aaaabbaaabaabababaa", "abbabbaaabbaabaaaaa", "babaaababaaaababbaa", "bababbbbbaaaabbbbab", "abbbaaabaaabbaabaaa", "aaaaaabaaaabaaabaaa", "abbbbbbabaaaaabbbab", "bbbbbbbaaaaaaaaabab", "ababaabababababaaba", "abbaababbbbabbbbaba", "babbaaababbbbabaaab", "bbaabbabaabbaaababa", "aaaaabbbbabbaabbbab"};
    string queryWoman = "g";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> namesWomen = {"i", "c", "m", "b", "f", "a", "h", "g", "j", "k", "e", "n", "l", "d", "o"};
    vector<string> answersWomen = {"aabababaabaabaababbababbbaaabbbaaaaabbabb", "aaababaababbbaabbaaaaaaaaaabbbaaaaabaaaaa", "bababbbaaaaaabbabbbbababbaababaabaababbba", "bbbabbbbaabaabaaabbbabababbaabbabbbabbabb", "aaaaaabababaaabaabaabbaaaaababaaababaaaaa", "baababaaaabbbabbbaaaabbabbbbaaaabbbbabaaa", "abbaabaababbaaaabaabababaabbbaaaaabbbabbb", "abbbbabaababaabbaabbaabbbaabababaabbbbbaa", "abbbabbaaaabaaababbbabaaaaaabbaaaabbabaaa", "aabaaaababababbbababbaaaababbbababbaababa", "ababbbaaaabaaabbbbaabbbaaababbabbbaabbaab", "baaaabbbbaaababbababbbbbabbabaababbabaaba", "ababbbabbabbbbbaaaaaabaaaaaaaaaababababaa", "bbababbabbbbabababaabbabbbaaabbabaabbbbab", "abababababaaaabbabbabbabbaaabbaaabaaaabbb"};
    vector<string> namesMen = {"n", "b", "l", "a", "o", "k", "d", "g", "h", "j", "c", "m", "e", "f", "i"};
    vector<string> answersMen = {"abaabaaaaaabbbabbbaaabaaaabaabbbaabbaaaab", "abaabaababbaaaabbbabaabaaaaabbbaabbbbbaaa", "abaabbbabbaaaabbbabbaabbababaaaabbbababaa", "abbabaabaabaabbbbbabbbbabbabababaabaabbab", "aabbaabbbaabbbababbbabbabbbbbaaabbbababaa", "abbaaaaababbaababaababaabaabbabbbbbbbabaa", "baaaaabbbbaaabaaaaaaaaaabaabbabbbbabbaaab", "abbbabaabaaabaaaaaaababbabbaabbbabaabbabb", "babaabbabbabbbbbbaababbaabbbbaabbabbbbaab", "aabaaaabbbabababbabbaabaabbbbbabaaababaaa", "abbabbbaababbbbaaaabbbaaababbbbaababaabaa", "babbabbaabbbbbabbbbbaababbaaababbbabbaaba", "aabaaaabbbbabaabababaaaaabababbaaabbabbbb", "abaabbbaabababbabbbaabbbbbabaaabaaabaabab", "bbbaaaabaabaabbbbbaababbbbaaaaaabbbbabaab"};
    string queryWoman = "m";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "m";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> namesWomen = {"c", "l", "m", "f", "s", "n", "a", "p", "i", "o", "d", "r", "e", "h", "b", "q", "k", "g", "j"};
    vector<string> answersWomen = {"aabaabbaaaaabaabbbbaabaaaabbbbbbaabaabaaababbbabab", "bbababababbaaaabbbbbbabaaabaabbaabbbaaaaaaaaaababa", "babbabbbababbbaabaabbbbaababbaabbbbabbbbbbabbbbbbb", "babaabaaaaaabbabbaaabaabaaabaababaabbaaabbabbaabba", "abaaabbbaaabbbabaaaaabababaaaaabbabbbbaaabbaaaabab", "babababbbabbabbabaabbbabbbabbbaababbababbbbababbba", "abbaaababaabbbbbabaaabbaababbbbaabababbabbababbaba", "bbbbabbaaabaabaaabbaaaaaaaabbbababbbababbbbbaababb", "baaabbaaabaaabbababaababaabbbbabaababaabbabbbbbbbb", "abbaaaaabbaababaaaababbbbaaaabababbaaabbbbaaabaaaa", "babbabbbbbbbbbbbbbabbaabbbaabbbbabbbaaabbabbababbb", "bbaabbbbbaababaaabababbabaababbaaaababbabbbaaabbbb", "aababbbaabbbababbabababaabaabaaaaabbbbbabbbaabaaaa", "baababbabbaaaabbaababaababbbbbbbaabbbababababbbbaa", "baaaaabbabbaabaaaabbbbaabbabababaaababbabababbbbba", "abbaaabaabbaaaabbbbabbbbaabbababbbabaaaabbbaabbaab", "aaababbaabaabbabbbbaabaaabaabbabbaabababbaabaaaaab", "aaabaabbbababaaaabbbbbbabbbbbbbbabbaabaaaaaababbbb", "abaabbaaabababbaaaabbababbabbbabaaabaaabbbbaabbaaa"};
    vector<string> namesMen = {"n", "a", "l", "h", "s", "i", "r", "d", "k", "b", "m", "q", "e", "o", "j", "c", "p", "g", "f"};
    vector<string> answersMen = {"aabaaaaaababaaaaaabbaaaabbaababbbabababababababbbb", "bbbbabbabbbbbbbbbaaababbbbaaaaababbaabbaabaaaaaabb", "bbabbbbabbbabbababbaaabbbaaabbbaabbabbbbbabbbbabbb", "baaaaaaabaababbbabaabaabaabaaaaabbaaabaaabbaaabbba", "babbbababbbabbababbbbbabaaaabbbabababaaabbabbbbbab", "aaaabbabbaaabbbbabababbbabaaabaaababababbbabbbabab", "baaaabbabbbbbbbbaabaaaabaabaaababbaabbaabbabbabaaa", "abbaaaabbabaaababaaaabbbbabbaabbbbababbabaaaaabbaa", "babbabbababbbbabbbbbabbaababbbbaabbbbbabbbaaababaa", "abaabaababaabbbbbbbbabaaaaabababbaaaababbabababbba", "bbbaabbaaabbaabaababaaabaabbbbabbbbbababaaaaaaabbb", "bbbaabaabbbbaaabbaaaaabbbbaaaabbbbbabaabbbabbaabbb", "babbabbbbabbbbbabababbbabbbbbabbbbbaabbabbbabbabab", "baababbabbbbbaaaaabbabbababbbbbaaaaabaaababaaabbaa", "bbbaababaaabbaaaaaabaaabbaaababaaabbbabbabaaabbaab", "abbbabaaaabbabbaabbaaaaabaababbbaabbbaabbaaabbbbaa", "bbaaaababaabaaabbabbbabbbbbbbbaabababaababbabaaaba", "bbababbbaabbaababaaabbababbababaaaabbbbbbbbbbabaab", "ababbaaabbababbbaababbbbbaaaababaaaaaaaaabbaaabbab"};
    string queryWoman = "m";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> namesWomen = {"h", "k", "u", "c", "P", "f", "J", "B", "s", "g", "j", "C", "S", "R", "Q", "E", "b", "v", "D", "o", "w", "O", "n", "t", "M", "H", "y", "q", "d", "F", "G", "I", "L", "a", "V", "x", "i", "e", "m", "l", "N", "z", "r", "T", "U", "A", "p", "K"};
    vector<string> answersWomen = {"abbabaabbbbbaabbaaaabbbabbbbbaaabaab", "baaabbabbbbbbbabbbabbaabbaaaaaaabbab", "bbabbaabaabaaaaaabbaaaaabbaabbbbbbba", "baabbbbaababbabbaabbabbabababbbbabab", "aaaabbbbbbbbbbbbaabaabbabbbbbbbaabba", "aabababbabaabbbaababbbaababbabaaaaaa", "ababbbbabbbababbbbaabaaabbaaababbabb", "aaaababbaabbbaaabaaaaababbaaaaabbbbb", "aaabbabbbbbbbbbbababaaaabbabbbbbbaba", "bbaaabaababbabaaaabaaaaaaaaaabbbaaab", "aabbabbbbaabbabaabbbbaababbaabbababb", "bbbabaaababbbaabbaaaaabbabbbbbbaabbb", "abbbabaabaaaaabbabbbaabbaabbabaaabba", "bbabbbbabaaaaababbbabaaaabaababaaabb", "abbbaaaabbbbbaaaabaaaabaabbbbabbbbaa", "babbaabbbabbbbbababababbbbbabbbabbab", "aabbbabbbbaaabbabbbbabbaababbababbba", "baaababababbbbbbbaabbababaaabaababbb", "ababbaabaaabbaabbbabaaabbbababbbbabb", "abaaabbbabbbbaabaababbabaaaaaabaaaab", "babbbbbbbababaaaabbbaaaaabaabaaabaaa", "aaababbbabaababababbbbbaabababbbaaba", "abaaabbabbaaabbaabaabaaabaaabbbbabaa", "bbababbbaabaabbabbbabbabbabaababbabb", "babaababababaaaabaaabbabbabbbabaabbb", "aabaaabbbbbabbaabbababaabbabbabaaaab", "abbabbabbbaabaabaaababaababbbbaaaaba", "ababbbbaaaabaaaaaaaabaabbababbabbbab", "baababbbbbaabbbbbabaabbbaaabbaabbbaa", "aaabbbabbaabbaaaaabbaabbbaaaababbbba", "bbbbbabbabbbbbaabaabbbbbbbaabbbbabaa", "aabbbbbbbaabbabbabbbbbaaabaaaaaaaaba", "aaabbabbaabbbbbbabbbabaaababbababbaa", "abaabbbaaabbbbbaabbaabbaaabbbbbbabbb", "abaababaaabababbbabbbaaaaaabbabbabba", "abbbaabbabbabababaaaababaaaabaabbaaa", "aabbbbabaaaaabaabbaaaaaabaaaaaaaaabb", "bbbabaabbabbaabbabababbabbbabbaabbaa", "baaaaaabababbbabbbababbbabaaaabaabbb", "abbababbabbbbbbbbbaaaabaabbaaabbabbb", "abbaabbaabbbbaababababbabbabbaaaabaa", "aabbbbbaababaaaaabbbabaaaababaaabaab", "baabbabaabbbbaaaabbbaabababbbbaabaaa", "aaaaabbbababaabbaaaaaaabaabbbabbbaab", "bbabaaabbababaabaaabaaabbaaabbbbabbb", "babababbabbbbbbababaaabbbbaababbaabb", "bbaababaababbaabaaababaabaaaabbaabba", "aabbaaabbaaaaaaababbaabbbbbbabaaaaba"};
    vector<string> namesMen = {"Q", "T", "r", "h", "A", "e", "R", "J", "D", "I", "L", "o", "E", "N", "F", "C", "U", "V", "f", "d", "B", "G", "H", "n", "y", "O", "k", "a", "g", "j", "K", "M", "w", "i", "b", "l", "z", "p", "P", "t", "m", "u", "x", "S", "c", "v", "s", "q"};
    vector<string> answersMen = {"aaababaababbabbaabababbbabbbabaabbba", "abbababaaaababbaababaaaaaabababababb", "bbbaabbbaabaaabbbababaaaabababababba", "babaababbbaaabaabaababaabaabaaaabbba", "babaabbaaaabbbabbaaabbbbbbbababbabba", "aaabbbaaaabaaaaababbabaaabbaaaababba", "ababbabbaaaaabababbaabbbaaaababbbabb", "baabababaaabaaababbaaababbababbaaaab", "aabbaaabbaababbaababaaaabbaaabababab", "aaaababbbaaababbbababbabbbabbabbaaaa", "aababbaabaaababbbabaaababaaabaababab", "abababababbbaababbaabbbaaaaaaaabbaba", "bbbabaaabbbaaabbaabbabaabaabaaaabbbb", "bbbaabbaaabaababbbbbbabaabaabaaabbaa", "bbbabaaaabbaabbabbababababbaabbbbabb", "baabaabaababbbbbbaabaabbabaabbbabbab", "abbabbbbbbaabbbaabbbbabaaaaabbabbbbb", "baaaabaaabaaababababbabbaabbbbaaaabb", "abbaaaabbaaabaaaabbaaabbbbbbbaabbbbb", "baaaababbbabbabaabbabaaaaaababababaa", "aaabaabaabbbababaaababababbaabababbb", "bbabababbaabaaaaaaaabaaabaaaaaabbbbb", "bbbbbababaaabbaabaaaaabbbbaaabaaaaab", "babababbabbbbbbbbaabababbbbbbbbbaaba", "bbbbaabaababbabaaababbaaaaabbbbabbaa", "aabbbbabbbabbaabaabbabbaaabababbaaaa", "abaaabbabaaaabababaaabbbabbaabbbaaab", "abbbababaaabbaaabbbbbbbaabababaaaabb", "aabbbbbbbbbababbaaabbbaaaabababaaabb", "baabaabbabbbaaaabaabbabbbbabaaabbbab", "aaabababaabbaabaaabbbabbabaaaababbba", "bbaabaaabbbaaaaaaabaaabababbabbabaaa", "ababbabbaabbbbbaaaaabbaaaabbaabbaaaa", "bbbabaabababbbbabbaabababaaabbaabaab", "abbbbabbaababbbbbababbbbbbbaaabbabbb", "baabaababbbbbbbaaaaabbabbbaabbabbabb", "babaaaaabbaaabaabbbaabaaaaaaabaabbbb", "abbbbabaaaaaaabaaaababaaaaabaaaaabba", "bbbaaaaabbabbabbbbaabaabaabbabaabbba", "abbabbababaababaaaabbbabbaaabaaabbab", "baabbaaaabbabaabaaaabababbabbbbaabba", "aaaabbaabbbaabaaaabaaabbbabbbbaaaaaa", "aababbabababbbabaabbaaabbbbbaabaaabb", "bbbaaaabaabbaaabbaabaaabaaaabbbaabba", "baabbbabbbbbabbababbabaabaabaaabaaaa", "aaaaabaaaaabbabaababbaabababaababbaa", "bbbbbabbbbaaaabaabbbaabbbbbaababaaba", "bbbbabaabbaabbabaaaabaaaaababaaaaaba"};
    string queryWoman = "i";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> namesWomen = {"r", "K", "m", "L", "D", "i", "k", "l", "w", "x", "p", "v", "E", "b", "y", "t", "C", "e", "o", "A", "j", "I", "n", "H", "B", "J", "q", "G", "g", "a", "c", "h", "u", "s", "z", "d", "F", "f"};
    vector<string> answersWomen = {"bbbababaaabababbabababaaaaaaababa", "babbaaaaabaaaaabaaabaaabbbaaaabab", "ababaaaabaababbaaaaababbbbbbaabba", "aabbbaaababaaababbaaababaabbbbbab", "aaaabababbbaaaaabbbabbbbabbbabaaa", "aaabbbababababaababbababbaaababaa", "aabbbbabaaaababbbbbaabbaabababbaa", "aaaaaaababbbaaabbaaabbbabaabaaaaa", "babababaabbbbabbabaaabbbabaababab", "babbbababaababaaababbbaaaaabbaaaa", "bbbbbaaababbaaaababababbbbbaabaab", "aabbbbabbbbbaabbbababbababbbabbbb", "baabababaabbabbaaababbbabbbabbaba", "baabbbabbbabbabbaabbbaaaabbbaaabb", "bbbbaaabbaaabababbbbbbbabbabaaabb", "babbbabaabbabbbbaaabbabababbabaaa", "bbbbabbbaaaabbabbaabbbaabaaabbabb", "bababaabbabaaaabaaabaaaabbbaabbba", "aabbaaaabaaabaabbaabbbbbabaaabbba", "aaabababaaabaaaabbbabbaaababbbbab", "babaabaaaaaaaabababaaaabbaabbbbbb", "babaabaaabaabbabbbbbbbbbaaabaaabb", "baaaabaabaabaabaaabaabbbbbaababab", "aaaabaabbbbaaabbbabbbbaabbaaababb", "bbbbbaaabaababaababababababbabbab", "abaabaababbbbababaababbaababbbaab", "aababaaaaabbabaababbaaabbababbbab", "abbbbbbaabababaabbbbbabababaabbaa", "babbbbbaabbbabbbbbaaabaabbaaabbab", "babbbabbabbbbabababaabaaabaaababb", "baabaabbbbabbabbbbabbbbababaaabaa", "aabbbbaaabbabaaaaaabaabbaabbbbaab", "babbaaabbaaaaaaaaabaababababaabab", "bbbbbbbabbabbbbaabbababbabbbabbab", "bbbaaabaaaaababbbbbaababbbababaaa", "babababbbbbabbbbbaaaaabbbaaaaaaba", "aabaabbaabaabbbababaaaabbaabaabba", "baababbabbbbbbbabababbabbbaababab"};
    vector<string> namesMen = {"e", "r", "g", "n", "k", "H", "i", "m", "w", "h", "A", "q", "C", "j", "c", "y", "E", "t", "p", "F", "d", "G", "B", "l", "I", "a", "x", "s", "J", "v", "D", "f", "b", "z", "o", "u", "L", "K"};
    vector<string> answersMen = {"abaaabbbaabbbbbababbababbbbbabaaa", "bbabaabbaabaaaabbbbbbabbbaaaaabba", "babbbabbbbbbbbabbaaaaaabbabbbbbab", "bbababaaaababaababaabbbbaaabbaaab", "baaaaaaaaaabbbabbbaaabbbbbbababab", "abbbbaabbbabbaaabbababababbabbaba", "bbbbbabbbbbbabaaabbbaabaaaabbbabb", "bbaaabbabbbabababbbaaaababaabbbba", "bbaabbaabbaaabaaabaaaabbaaabbbbbb", "bbbbbabaaabbbbbbbaaababbaaabbaabb", "baaaabaabaabaababbbaaaaaabbabaabb", "aababbaabbbababbabaabbabbbbaabaaa", "aaaababbbbbaabaababaabbbaabbbbbaa", "aabbabbaababababababaabbabbbbaabb", "bbbbbbbbaaabbbaabbabbbbaaabbbbabb", "ababaaabbbabaabaabaaabbaaabaabaab", "bbbbaaabbbaaaaababbbbaabbaaabbaba", "bbbbaabbbabbaabbabaabaabaabbbbbba", "ababbaaaaaabaabbabaaabababababbab", "babaabbbbbaabbababbbbbaaaabbababb", "aabbbaaabbbbaaaaabaaaabaababbbbbb", "aaabbabbaaabbbbbabaabbabaabbbabab", "abaaabbababbaabbbbaabbbababaabbaa", "abbababaabbabaaabbaaabbabbaaaabaa", "abbbbabbabbbaabbbabbbabaabaaaabaa", "aaaaabbbaabababaababaabbbabbbabaa", "abbabaabaabaaabbaabbaabaabbabbbaa", "bbaabbaabbbabbbbbbbaaabaabbbbbaab", "aaabababbabababbbababbabbaaabbabb", "baababbabababaaabbbabbaabbabbabab", "ababbbabbbbbbbbaabbaababbbbaaabba", "bbbbaabaabbaaaaabbaaabbababaaaaab", "bbbbbaaabbabbbbbbaababaaaabbabaaa", "bbabbaaaabbbabbaaaababbaaabbababb", "baaabbabbbbbaaabaabbabbbaaababbaa", "bbabbaabaabaabbbbbababbaaabbabbbb", "aaababbaaaaabbbabbababbaaabbababa", "bbabaaabaaababaabbabbbbaaabaababa"};
    string queryWoman = "l";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> namesWomen = {"b", "l", "n", "p", "q", "i", "s", "a", "d", "k", "m", "r", "e", "c", "g", "f", "j", "o", "h"};
    vector<string> answersWomen = {"aabbbbabaaa", "baaababbabb", "abbabbabbba", "babbabbbbaa", "bbbbabbbaab", "ababbaaaabb", "bbabbbabbba", "bbabbbabbab", "bbaaabbbaaa", "baabbaabbba", "baaababbbab", "bbaaaababbb", "aaabbababaa", "bbbbbabaabb", "bbbbaaaabbb", "bbaaabababa", "aabbbaaabbb", "bbbabaabaab", "aabaabababa"};
    vector<string> namesMen = {"e", "s", "f", "r", "g", "i", "p", "b", "n", "d", "h", "q", "a", "c", "j", "k", "m", "l", "o"};
    vector<string> answersMen = {"aabbbaababa", "bbababbabba", "abbabbbaabb", "aaaaaaabaaa", "abbbbaaabba", "abbbbaabbba", "aaaabbaabab", "aabaaabbbab", "baababbaaab", "aaababaabba", "babbbbbabaa", "bbbaabbabbb", "abbabbabbbb", "abbbbabbbba", "aababbabbaa", "bbbaabaabba", "abbbbbaaaaa", "bbbbaaabbaa", "aaaabaaabab"};
    string queryWoman = "k";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> namesWomen = {"q", "g", "Q", "b", "G", "A", "L", "h", "F", "j", "M", "p", "y", "d", "O", "t", "f", "a", "e", "l", "S", "m", "R", "C", "k", "J", "v", "c", "z", "n", "w", "r", "I", "B", "K", "E", "i", "x", "P", "s", "o", "N", "H", "u", "D"};
    vector<string> answersWomen = {"bbbabaaabbbbababbaabbabaababaabbabbbaabbabbbaabbbb", "bbbababbaaabbbaaabaabbabbbbbbaaaaaabbababaababaaba", "ababbbaabbabbbabaaabaabaaaaaaaabbababababaaabbbaba", "baaabaaabaabbaabaabbbbaaabbbababbbbaaabbabbbbaabab", "abaaabaaaabbabaaabbbbababbaabbabaaaabbabbbbbbababa", "baabaabaaababbbbbbbabaabaaabaaabaaabbbbaaaabbaaaaa", "bbbbaaaabbbaaaabbbbbababaababaabbababbaabaabbaaabb", "babbbbabbbbbbbbaaaabbbabababbbaabaaabbbbaababbbbba", "bbaaabaabbaabbababaaababbbabbabaabbbbbbabbaaaaabaa", "bbaaabbaaaaabbaabbbbbaabaabaaabbbbaaaabbbbbbabaaba", "bbaababaabaabaababaabbaaabbaababbabaabaaabaabaabba", "bbaabbabbbaaabaaaabbbaaabbbabbaaabbabbbaaabababaab", "bbaababbaaabbbaaaabbbbaaaaabaaabaabbaabbaabaababaa", "aabbbbbaababaaaabbabbbaaaabbaabaabaaaabaaababbaabb", "aabbbabaaabbbabbbaabbbabbbabbbababbabaaabbaabbbbab", "bbabbbabbbababbaabbbbbbaabbabbbbaabbaabaababbbbaab", "babbabaaaaabbbaabbbbaabaababababbabaaaaababbbababa", "aabbabbaaaabbabaabaabbbaabaaaaabaaabbabaaabaababab", "baaaabbaabbaabbbbaaaabbabbaaabaabaabbaaabaaabbabaa", "bbbabbabbbbabaaababbabbaaabbabbabbaabaabbbbbabbbba", "aaabbababbaabbaabaabaaabbbabbbaabababbbaabababbaba", "bbaabaaabaababbaaaabaabaabababababbbbbbaaaaaaaabba", "bbbabbbabbabbbabaaaabaabababbbbabbbbaababaaabbbbbb", "aaababaaabbaabbabaabaabbbbbabbaabbabaaababbabbabaa", "aaabbabaaaabbabaaabaabbabbaababbaaabaabbbaaaaaabbb", "abaaabaaaaaabbabaaaabaaabbbbabbbaaabbbbbbaababaaaa", "bbbbbbbaabaaabbaababbbbbaabbbbbaabbaaababbaaaabaab", "abababbbbaabaaaaabaaaabbbbababaaababbaabbaabbbabba", "abbbbbbabbbabaabbaabbbaaabbaababaaaabbbabaaaabbaab", "baaaaabbabbabbaaaababbabbaaaabbaabbabaaaaabaabaabb", "bbaaabaabbaaaababbaaabbabaaaababbbababbaababbbabaa", "abbabaaabbbbaaabbbbbbaababaaababbaaaaaabbbbababbbb", "bababaababbbbbaaabaabbbabbaabbababbabbaaaabaaabbab", "babaaaaaaaababbabaaabbbaabbbabaabbababaabaabbbabab", "aabaaaaaabbabababbaaaaabbaaabaabbbbbaaabaaabbbbbab", "bbbaabaaabaaaabbaabbbaabbbbbbabaabbbaabaabbabbaaaa", "bbbaabbabbaabaaabbbbababbabbaaabbababbabbbaaaaaaba", "abbbaaaababababababaaaaababaabbbbbbabbbaaaabbabaaa", "bbabbbaabbbabaabbabaaaaabbaaababababaabaabbaababbb", "ababbaaaabaabaabaaabaaabbaaabbbabaaaaabbaabaaabaaa", "baabbbbbbbaabaababbabbbaaaaabbbbaabbbaaabbbbbbaaab", "aaaaaaaaaabbbbbbbabbababbbabaaabbaaabbbabababbbaaa", "bbbbbbbbaaaaaaabbbbbababbbbabbbabaaaabbabbbbbbbbba", "abbaabaaaabbbbbbbbbbbbabbbbbbabbababbbbabbabaababa", "bbbabbbbaaaaabbbaaaabbbbabbabbbabaabababbaaaabbbaa"};
    vector<string> namesMen = {"x", "d", "Q", "v", "g", "O", "f", "j", "r", "N", "S", "m", "A", "K", "o", "z", "F", "e", "E", "a", "J", "l", "R", "h", "D", "M", "b", "I", "G", "H", "q", "C", "n", "w", "s", "L", "P", "c", "k", "t", "i", "u", "y", "B", "p"};
    vector<string> answersMen = {"abababababbabbbabbaabbbbbabbbbbaaaaabbbaaabbbabaab", "bbbabaaaabbbbabbaaabaaaaaabaaabaaaabaaabaabbbabbbb", "ababaaabaabbaabbbbabbbabbabaabbabbabbbbaababbababa", "baabbabbaaaababbbaababaabbbaabaaaababaabaaaaaaaaaa", "baaabbbbabbabaabbaabbabaabababbbababaaababbabbbaaa", "baabaababbaaabababbbbbbbbbabbaababbbabbaabaabbbaba", "abaaaabaabbaaaababaaabbaaaabbababbaaabbaabbbbbbaba", "babaaaabaababaaabbbbbbbaabaaababbbabbabaaabaaabbaa", "baaabbabaabbbbabaabbbbbbaabbbbabbbaabaaaababaaaabb", "aaaaaaaabbbabaabbaabaaaabbbaabbbbabbabaabbabbbabba", "aabbaabbbabbaabbbbaabaabaaabaabbbbbabbabbabbbaabbb", "bbbbbbaaabaaabbababaaaabababaaabababaaaaabbaababbb", "bbaaabbbabaaabbbbbbbaaabbaabbbaabaabbabababaaaabba", "aabbaababbabbbbbabbaabaaabbbbbabbaababbaabaaaabaaa", "abbbbbabbbaaabbaabbbaaabbbbbbaaabbbaabababbbbabbaa", "aaaababbbbaaaabababababbbbababbbbbbaaaabbbaabbbaab", "aaaabbbbbabbbbabaabbbabbbbbbababaababbbbabbaaaabbb", "aaabaaabbbbababbabbabbbbababaaaababbbaabbaaaababab", "babbabaabbaabababababababaabbaabbbbbbabbbbababaaab", "abaaabbbaabaaaabbaabaabaabbbaaababbabbbbaabaaabbaa", "abbabaababbabbaabaaaababbbbbabaabbbaabaaaaaababaaa", "bababaaababaababaabbababbbaabaababbaababbbaaabbbba", "ababaaabaabbaaaaabbaababbaaabaaabaaabaabbbbbbaaaba", "bbabaababbbaaabbbbbabaabbbbbbbabbbaabbbaabbabbbabb", "aabaababbaaaaabaabbbaaaabaabaaaabbbbbbbbbababbabab", "aaaaabbbbbbbbbbbaaababbaabaaaaabbaabaababaaabbaaab", "aabababbbbbbabbabbbaabaabaababbabbaaaaaabbbbbababa", "ababbbbaabbbaababbbaabbaaaaababbbababbabbbababaaaa", "abbbbababbabbabbaabaaaababaabbbbaaaaabbaaaaaaaabab", "aaabbaabaaaaababaaabaaaabababbbbbbbaabbaabaabbbabb", "bbbaabbbabbbbabbbbabbaabbaabaaababbaabaabbbaaaabab", "aaaabbababaaaaabbbabaaababbabbbbbbbbbbaaabaaabbbab", "aabbaaabbabbbabbbbbabaabbaabbaaaaababaabbbaaaaaaab", "abaababbbabbabbbaaaaaabbaabbbbbbababaababbabbabbaa", "ababaabbbabbbbbaaaabaaaaabbabaaaabbbbbaaaaaaaababb", "baaaaaaaabbbaabbaababababbbabbaaaabaabbaabaabbaaba", "babbabbbbbbbabbbaababbaabaababaaabbbabaaabbabaabbb", "aaabbbbbababbabababaaabbabbbbababbbbaaababbaabbbba", "bababbbbbbbbbaabaaabbaaabbbabbaaaaaaaabaaababbbabb", "aaaaabbabaaaaabaababbbabaaababbaaabbbaabaabbaabbaa", "bbaabbaabaabbbbababbbbbbbabaabaaaabbbbabbaaabbabbb", "abbbbbaaabaaaabbaaabbaaaabbbbaabbbbbbabababbaaaaaa", "abbabbaaaababababbbbbaaababbabbaabaaaaaabaabaaaaba", "aaabababbbbbaaabbababbaababbabbbaaaaabaaabbbbaabab", "baaaabbabbbaababbbbbbabbababaaaabbbbbabbbbbbaaaaaa"};
    string queryWoman = "g";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "r";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> namesWomen = {"a", "e", "c", "d", "g", "b", "k", "i", "j", "h", "f"};
    vector<string> answersWomen = {"baaabaaabbaabbababbaaab", "abaaaaaaaababbbababbbab", "bbbaaaababbbbabbabbaaba", "baabbbbabababababaababa", "baabaaabbabbaabbaabaaab", "babbbbbaaabbabaaababbaa", "ababbaaaaaabaaabbbbbbaa", "baaabababaabaababbbabab", "bbbababbaaabbbbaabbabbb", "baabbbabbbbaaabbbbaaabb", "abbabbabaabababbbaabbbb"};
    vector<string> namesMen = {"b", "j", "k", "a", "d", "f", "g", "h", "e", "c", "i"};
    vector<string> answersMen = {"babbbababababaababbbbaa", "bababbbbbaabbbaabbaaaab", "babbbbabababbabababaaab", "babaababbabaaabaaabbbba", "bbaaabbbbbbaaabbbbbabaa", "aaaabbbaabaaaababaabaaa", "bbbaabaabbabaaabaabaabb", "babaaaababbabbbbbaaabba", "aaababbbaabaaaabababaab", "aaaaaaababbbbbabbbbaaaa", "abababbaaabbbbabaabaaba"};
    string queryWoman = "d";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> namesWomen = {"K", "I", "d", "L", "M", "y", "O", "q", "G", "g", "P", "t", "e", "n", "N", "o", "x", "m", "z", "w", "J", "B", "a", "b", "F", "v", "H", "u", "E", "D", "r", "h", "p", "A", "C", "f", "k", "s", "i", "l", "c", "j"};
    vector<string> answersWomen = {"aabaaaaababaabaabbbaaabbabaabbaaba", "abbbbbbbaaaabbabbbabbabbaabaabbabb", "babbbbaaabbabbbababaabaabbbbabbaaa", "bbabababaaaabaabbbbaaabaabaaababba", "bbaaaaabbaaabababbbaabaaaaaaaabaaa", "abababaaaabaababbaaaabbbbbbbbaaaaa", "bbabaaabbaaababaabbabbbbbaaabbabba", "aaaaabbbbaaabbbabaaaabaababbabaaab", "baababaaabaabaaaabbaaaaabbbbaaaabb", "aabaabababbbbbaabaaaabaabababbabaa", "bbbbaaababbabbbbaaaaabaabaaababaab", "aaababaaabbbaababbababaaaaaaaaabab", "bbaabbbbababbaabaaababaaabbbabbbbb", "abbbbbbabbaaabbbbbbbabbbbbabbbaaba", "babbbaaabbbbaaabbbbbabbababbababbb", "aababbaaabbbabbbbaababbababbaabbbb", "abbabbbbabbbbabaaaabbaaabaaababbbb", "bbbaaabaabbbaaabababaaaaaabbbbbaaa", "bbbbbaaaabaababbabbbbbaaabbaaaaabb", "aaaabbbabbabbbbbaababaabbaaaabaaaa", "aaaaaaabababababaabbbbbbbbbaaaaaba", "abbbaabbbbaaaababbaaaabbbaaabaabaa", "aaaaaabbaabaababbaaaabaaabbbabaaaa", "baabbbaaabaaabaaaabaabaaabbbbaabaa", "bbabaaaabababaaaaababbbbababaaaaab", "bbabbbbaaaaabaaabaabaaabbbbbabbbaa", "baabaaaabaabbbbaabaaaabaabaaababbb", "bbabbabbaabbbabbbbabaaababbbbbbbab", "bbabbaaabaabaababbaaabbaabbbaabaaa", "bbbababbaabbaabaabbabaaabbbbaaaaab", "abbbbabbabbbabababaabbbaaabbaaabab", "aabbbbbbaaaababababaabbbbbaaaabaaa", "aabbbabbbabaabaaabbbabbbbbbabababb", "ababaabbaabbaabaaabbbbbbbbaabaabab", "bbbabbbabbaababbbaabaabbbababbbaba", "bbbabbaababbaabbabaabaaabbabababba", "aabbbaabbbbbbaaababbbbaabbaaababaa", "bababbbbbabbabababababbaaabbaabaab", "bbbbabaaababbaabbababbabbababbaaaa", "bbbbbaababaabbababaabbbaababbaaaaa", "bbbabbbabbbaaaaaaabbabbaaaabbbabba", "aaabbabaabbabbbaabbbaabbbaaabaaabb"};
    vector<string> namesMen = {"B", "n", "E", "P", "J", "r", "q", "t", "M", "N", "d", "u", "w", "z", "K", "H", "F", "c", "i", "g", "L", "j", "h", "k", "m", "x", "C", "O", "b", "v", "D", "A", "I", "l", "G", "o", "f", "e", "y", "s", "a", "p"};
    vector<string> answersMen = {"bbababababbbababaabbaaaaaababababa", "aabbbaaaaababaaaaabaaababbaabbbbbb", "baabaabbbbaabbbbabaaabbbbababbabba", "babaabaaababbaaaaaababaabbabbaaaaa", "abaabababbabaabaaaaaabbaaababaabab", "baabbaaaabbabbbbabbbbaaabaababbbba", "bbbababaabbabbbabbaabbbaaaababbbba", "ababaaaaabaaabaaabbbabbbbbababbbaa", "abaabaaababbaaabaabbabbbabaaababbb", "abbabbaaaaaaaaabbabbbababbaabbbbba", "bababbbaaabbbbbaaabaaabaabbbbbabab", "aababbbaabbaaabbabaabaababbbabbaaa", "baaabaababaaababbabaaabaabaaabaaba", "abaaabaabaabaaabbbbababbaaaabbbbbb", "ababbaabbbbabbbbaaabbbbaabaaaaaaaa", "abaabbabababbababababbbbabbabaaaab", "aabbbaababaaaaabaababbaaabbabaaaaa", "abbaababaababbabbbbbaaabbabbbaabbb", "baabbabaaaaaaaaaaabaaabaaaababbaab", "bbbababababbbbbbbaabaaabbbbbbababa", "abbabaabababbaaaabaababbbaabbaabba", "aaabbbaaaabbbbbbbabbabbabaabaaabab", "aaabbabaaabbababbababbbabaabaaaaaa", "bababaaababbbbabaababbaaabaaabaaab", "baabaabbabaabaabbbbabaaaaabbbbbbaa", "aabbaabaabbabbbbaabababaabababbabb", "ababbbbbaabbbabababbaababbababbbba", "bbbbabbbaaaaaabaaaabbabbbabababbbb", "bbabbabbbabaaaabbbbbabbbabbbbbaaba", "baaabaaaabbaabaabbbbaaaababbbbabab", "bbaabaaaaaaabbaabaaabbbababbbbbbab", "abababababaaaaaabbabbaaababbbbbbaa", "baabbaabaaaabbbbbaabbbbabbbabbbaba", "aabbabaababbababaabbbbbababababaaa", "baabaaaaabaaaaabbbbababbbaabbabaaa", "aabababababaaabbbbbabbbbabbbbbbabb", "abbbabbaabababbabbaaabaabbabaaaaab", "bbbaaabbabbaaababbabaaaaaababbbaab", "bbbbabbbbababababbabbbabbaaabbabba", "baabbaaabaaaaababaaabbabbbabbbaabb", "babaababaabbbaaabbbbaaaababababaaa", "abbabaaabaabbbbababbbaaaaabbabbabb"};
    string queryWoman = "B";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> namesWomen = {"y", "v", "s", "m", "p", "e", "w", "c", "E", "g", "r", "B", "h", "x", "d", "b", "j", "u", "D", "i", "q", "t", "f", "n", "k", "a", "l", "o", "z", "A", "C"};
    vector<string> answersWomen = {"baaaabaababbaaabbabbaaaabbbbabbbbbaaaababbbab", "aaaabaabbbabbabbaaaaaaaabbabbababbbbbbabaabbb", "babaabbbaabbabbbbabaababbabbaabababababaabbaa", "bbabaabbabaaabaaabaaaabbbaababbbbbbaababbbbab", "bbabaaabbbbababaabbabbbaabaaabbbabbbabbabaaaa", "baabbbbabbaabbbbaabbabbbabaaaababbbbbbbababbb", "aabbaabababababbbbaabbabbbabaaaabbbaaaabaabbb", "aaaabbbbbabbbaabaaabbbaaaaaaaabbbaaaaabbaabbb", "abaabbaaabbbaaaabbaabbbaaabbbabaabaabbabaaaab", "baabbbbbbaabbbbbbabbbaaabaabaabbabbaaaaabbaab", "aabbbbaabbabbaaaabababaaabbaabbbababbbbaaaaba", "aabbbbbabbbbbabababbabbbbabababbbbbbabbbbaaaa", "aabababbbbbbbabbbbbaabaaabaaaababbaaababbbabb", "baabbabbaabbbbabababaabbabaaaaaabbbbbabbbbbab", "bbbbbabbaabaabbbaaaaaaababbbababaabbbaaaaabab", "bbabbaabaaaaaabbaabaaabbbaaaaababaaabaabbbbab", "bbbaabbabababbbabaaaaabababbbababbbaaabaabbaa", "baaababaabaabbabaaababbbbbaaababbbbabbbbabbab", "bababbbabaaaaabbaaababbabbbaaababaaabbabbaabb", "bbbaaaabaaabbaabbbbabbababaabababbbabbbbbaaab", "aabbbbabbaabbbbaaaabbbabababaababaabbaabbabab", "baaababaabbbbabbbbabbabaaaabaabbaabbbaaabbbab", "babbaababbabababaaaabaababbbabbabbbaabbabbaba", "abaabaabaaaabbbaabaababbbbbbbbababbaaabbaaabb", "bbababaaaabbbbabbbababaabbaaabbbaaaaabbbaabba", "ababbbbbbaaabaababaababbbbbaabaaabbbbbaaaabbb", "bbaaaabaabbaababaaaabbabaababaababaabbaabbaba", "aababbbbbbabbabbabbbbbbaaabababaabaaaaaaaaaaa", "bbaaabbbbaabaabbbababbaaabbabbbabaaabbbaaabba", "baabbabbaaaaabbbaababbabbaaaabbbabbbbaaaabbaa", "bbbaabababbababbaaaabbbabbaabbbabbabbbaaaaaab"};
    vector<string> namesMen = {"k", "d", "E", "e", "v", "l", "g", "b", "f", "r", "w", "c", "x", "a", "u", "t", "n", "C", "o", "i", "A", "z", "D", "s", "q", "B", "y", "h", "j", "m", "p"};
    vector<string> answersMen = {"aabbbbaaaaabababaaaaaaababbbabaabbbabbbaaaaaa", "ababbaaabbbaaaabaababaaaababbaaaaababbabaabaa", "aababbabbabbababbbaababbabbabaabababababaabba", "bbbabbaaabbabbbababababbbbabbababbbaababbabab", "abbbbbbabaabaaaabaabaabbbabaaaaaabbabbbababaa", "aaaaaabbabbababaaaaaabbbbbababababbbaabaababb", "aabbaaaabaabaabbbabaaabbbbbbabbaaabaabbbabbbb", "aabbaaabaaabababbbbabaaaaaabbababaabbaabbabaa", "bbbaabbbabaabbabbabbbbaabbaaabbaabababaababab", "bbaaabbbbaaaabbababaabbabbbbaaababbaaabbaaabb", "abbbbabbabbabbbbaaababaabbbbbaaabbbaababbbaaa", "abaabbbbbabbaabbaaababbbbaababaaaaabbaabbaaaa", "bababbbbbbaababbabbaababbbbabaaaaaabbbbababab", "baabbabbabaaabbabbbabbbbbbbaabbaaaaabbbbbbaaa", "bbbabbaababaabaaaaabaabaabbbbbbabbabbbbaaaaaa", "bbbaabbbabaabbabaaababababaaaababbaabaabababa", "baaabbbaaabaaabaaabaaabaabaaaaababaababbbbabb", "aaaaaaabbababaaabbabbbbaaabbbbbbabaabbaaabaaa", "abbaabbabbaababbbabbaaaaabbabaabbaabaaabaabba", "bbaabbabbaabbbababaaaabbaaaaaabbbbbbaababbbab", "aaaabbabbaabbbabaababaabbaabbabbbababaababbba", "baababbaaaaabababaaaaabbaaaabaabbbbaaabbbabab", "baaaabbbbbabbababaabaabaaabbbbbababaabaaabbab", "ababaaabbaababbbbaabbbabbaaaaaaabbbaabaabaaab", "abbbbaaabbabbababbaaababaaabbaabbaaaaabaabbba", "baabbbaabaaaabbabaababaababbbbbbaabaabbabbbbb", "bbaaabbbabbbbbabbbbaaabbbaaaaaabbbbaaabbabaab", "aaabaaaaabbababbabbabbbaaaabbaabbbaaababbaaab", "aababaabbbbbaaabaaababbabaaababbaaababbabbaab", "aaaabaabaabbabaabaabbbbbaabbaabaaaaabbbabbbbb", "abbbaababbaaaabbbbabbbbbaabbaaababbaaaaaaabba"};
    string queryWoman = "h";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> namesWomen = {"t", "b", "q", "e", "o", "d", "p", "i", "w", "a", "u", "f", "n", "h", "r", "l", "s", "k", "j", "g", "v", "c", "m"};
    vector<string> answersWomen = {"abaabaa", "bbaabba", "abaaaab", "bababba", "ababbaa", "bbaabbb", "ababbba", "ababaaa", "aaaaaaa", "babbbbb", "baababb", "babaaba", "aabaabb", "ababbaa", "bbaabba", "babbbba", "babaaaa", "bbaabaa", "abbabaa", "babbbba", "ababbaa", "babaaba", "bbbbbaa"};
    vector<string> namesMen = {"e", "k", "v", "d", "g", "s", "u", "q", "h", "p", "t", "a", "l", "j", "o", "w", "f", "i", "n", "c", "m", "b", "r"};
    vector<string> answersMen = {"baaaaab", "ababbab", "aaabaaa", "bababbb", "aaabbab", "bbbbaab", "babbabb", "bbababb", "bbababa", "aabbaab", "bbaabbb", "bbbabab", "bbabaaa", "abababb", "aaabbbb", "bbaaabb", "ababaab", "babaaab", "aababaa", "aaaaaab", "aabaaaa", "abbaaab", "baabaaa"};
    string queryWoman = "j";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> namesWomen = {"t", "f", "z", "G", "O", "m", "k", "i", "U", "b", "P", "l", "I", "K", "o", "D", "E", "S", "T", "M", "R", "s", "L", "H", "y", "C", "j", "v", "x", "a", "A", "n", "F", "w", "N", "u", "h", "q", "d", "c", "p", "e", "g", "B", "J", "r", "Q"};
    vector<string> answersWomen = {"baaaaab", "abbabba", "bbaabaa", "bbbabbb", "bbbbbaa", "aabbaaa", "bbabbba", "aaabaaa", "aabbaaa", "bbbbaba", "abbbbba", "babaabb", "abbabaa", "abbabba", "aaaaaaa", "abbaaba", "bbbbaaa", "aaababb", "baababa", "abaabab", "ababbab", "aabaabb", "baaaaba", "baaabba", "abaabaa", "bbbabab", "baabbbb", "bbaabab", "abbbbbb", "aabbaba", "baaaaaa", "aabbbab", "bbabaaa", "aaababb", "abbbbaa", "bbbabab", "aaaaaab", "baabbba", "bbbabaa", "bbbbbbb", "bbbaaaa", "bbbabbb", "baabbbb", "bbbbbaa", "abababa", "baaaaab", "aabaabb"};
    vector<string> namesMen = {"a", "n", "s", "B", "E", "i", "y", "p", "q", "k", "l", "J", "e", "h", "R", "o", "C", "c", "x", "f", "M", "K", "Q", "m", "G", "t", "j", "b", "N", "v", "I", "D", "L", "O", "T", "z", "F", "P", "w", "u", "g", "r", "H", "U", "S", "A", "d"};
    vector<string> answersMen = {"babaabb", "bbbbaba", "bbababa", "bbbbabb", "abaaaba", "baaabbb", "baaabba", "bbbbaaa", "baaabab", "aaaabaa", "abaaabb", "bbabbba", "aabaaba", "bbbabab", "aabbbaa", "aaaabba", "aaaabaa", "abbabba", "babbbbb", "bbabbab", "abaabaa", "bbbbaaa", "bbabbaa", "bbaaaab", "babaaab", "abbabab", "aabaaab", "bbbaabb", "aababaa", "abbaaba", "aaabbab", "bbbabba", "baabaab", "abaabaa", "aabbaab", "aabbaab", "babbbba", "bbabbbb", "babbbba", "bbabbab", "babbbba", "baaaaba", "aaabaab", "bbbaaab", "aabbbab", "aabaaab", "bbbbaaa"};
    string queryWoman = "f";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "o";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> namesWomen = {"e", "d", "g", "h", "a", "i", "b", "f", "c"};
    vector<string> answersWomen = {"babbbbaabaababbbabbbaabbaababaabbabbb", "aaababbbbaabbabbaababaabbaaabaaaabbab", "aaaabbbbaababbbbabaabbaaaaaaaaaaababb", "baabbbbbbaaaabaabababbabbbbaaabbbbaab", "bbaaaaaaabbabaabbbaaaaaaaabbbbaaabbab", "bbabbaabababbabbbbbaaaababbaabbabaaab", "abababbaabaaaaaabbbaababbbbbabaabbaaa", "bbbbbbababaababbbaaabaabbbaababbbabaa", "baaaaabbbbaaababaabaabaaabbabaaaaaabb"};
    vector<string> namesMen = {"c", "g", "i", "f", "d", "b", "e", "h", "a"};
    vector<string> answersMen = {"bbaababbbaababbbaabaaaabaaabbaaaabbba", "bbaabbbabaabbbababbababbbaaabaaaaaabb", "babbbababbabbaabbaababbbaababbbbbaaba", "bbbaabaabaabaabbbaabbaababbaababbbbbb", "aabbaabababbaabbbabbbbaababaaaaaaaaab", "baaaabaaabbbaaaaabbaaaaaabaabbbbbbbab", "aababbaaaaaabbaaaaaaaaaaabbaaaabbbaba", "aabaaababbabbababbbbabbbabaaaabaababb", "baababbaaabbbababaabaaabaabbaaaaaaabb"};
    string queryWoman = "a";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> namesWomen = {"l", "d", "j", "f", "h", "g", "i", "k", "a", "c", "b", "e"};
    vector<string> answersWomen = {"abaaababbbabbbaaaabbbbbbbbbbbbaaa", "babbbababbbbabaaababbbbababbbabbb", "bbababbabbaaaabababbbbababbaaaaaa", "abaabababababbabbabbbaaaabbabbbbb", "abbabbabbababbbababaabaabaaabaaab", "bbaabbaabbababaaaaabbaaaabababbaa", "aaababbbaaabbabbbbbbabbbbaaaaaaaa", "bbbabbaaabbbbabbabbaabaabbabbbbbb", "babbaabbbbbabbbbaaabbbaaaaaaaabab", "aababaaaaaaabbaabbabbbbbabaaaabbb", "aabbbbbbabbbabbaabbbbaaabbbbaabab", "baaaabbaaabaaabaabbbaabaaaaaabaab"};
    vector<string> namesMen = {"b", "k", "g", "i", "h", "d", "c", "l", "f", "a", "e", "j"};
    vector<string> answersMen = {"bbabbaaabbabbaababaaaaabbbababbab", "baaabaaaaaaaabbaabbbababaabbbaabb", "aabababaaaaabaaabbbaabaabaabbbbba", "abaaabaaaabaaababbaabaabaaabbaaaa", "abaababababbaaaabbababbabbbbabbaa", "abaabbaaaabbabaabbaaabbbbbbaabbaa", "bbbbbbabaaaabbaababbbabbbbbaabbbb", "aaaaaaabbababbbbbaababbbaabbbbbbb", "babbaabbbaaaababbababbaababbabbbb", "baabaabbabbbababbaaabaababaabaaaa", "aaaabbbabbaaabaaababaaabaaaaabbab", "abaababbbaabbbbaabaaaabbbaaaabbba"};
    string queryWoman = "e";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> namesWomen = {"q", "M", "w", "y", "p", "N", "s", "r", "a", "H", "o", "n", "F", "m", "l", "b", "D", "j", "C", "u", "f", "I", "g", "L", "i", "x", "A", "G", "O", "k", "h", "d", "c", "E", "B", "v", "J", "z", "K", "e", "t"};
    vector<string> answersWomen = {"aabbaaabb", "baabababb", "bbaababba", "bbbaaaaaa", "abaaaabaa", "bababbbab", "abbaabbaa", "aabababbb", "bababaaaa", "abbababaa", "aabbbbbba", "bbabbabab", "babaabbba", "babbabbbb", "baaabbbbb", "baaabaaaa", "aaabbaaab", "abbaabbbb", "abbabbbab", "bbaaaabba", "babbaaabb", "aabbabbab", "baaababba", "ababaabab", "bbbaabbab", "aaaabbabb", "babaaaaaa", "abbbbaaab", "aabaaabba", "bbbaaaaba", "bbbbbbaab", "aabbaaabb", "aabaabbab", "aababaaba", "bbabbbbab", "abbabaaab", "babaaabbb", "bababbaaa", "aabbaabaa", "baaabbabb", "bbbbbbbbb"};
    vector<string> namesMen = {"m", "k", "n", "q", "L", "E", "M", "l", "w", "x", "g", "e", "i", "z", "F", "r", "a", "h", "f", "D", "J", "K", "j", "v", "A", "t", "N", "y", "s", "c", "o", "p", "d", "b", "B", "G", "O", "I", "u", "C", "H"};
    vector<string> answersMen = {"bbaaabbba", "bbaaaaaab", "abaaababb", "baaaabbbb", "abbbababa", "baaaaaaaa", "aabbbbbab", "aaaaabbba", "baabababb", "babaaabab", "baaababaa", "bbbbaabba", "bbaabbabb", "bbaaababb", "abbabbaba", "aababaaab", "abbbbbbaa", "aabbaabaa", "bbbaabbba", "abbabbaba", "aaabbbaaa", "bbaabaaaa", "aabababbb", "abbbbabab", "baaabbbba", "bababbbba", "aababbaab", "bbaabbaab", "bbbaaabbb", "babbbbabb", "ababababb", "babaaabab", "bbaaaaaba", "aaaaabaaa", "abbaaabbb", "bbbbababb", "baabababb", "bbaabaaaa", "aaababbbb", "abbbbbbba", "bbaabbaaa"};
    string queryWoman = "o";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> namesWomen = {"anne", "Zoe"};
    vector<string> answersWomen = {"a", "a"};
    vector<string> namesMen = {"bob", "chuck"};
    vector<string> answersMen = {"a", "a"};
    string queryWoman = "anne";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "chuck";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> namesWomen = {"F", "M", "S", "h", "q", "g", "r", "N", "U", "x", "H", "P", "o", "E", "R", "z", "L", "m", "e", "u", "K", "A", "w", "Q", "O", "v", "j", "a", "t", "p", "C", "G", "k", "c", "V", "B", "D", "s", "n", "i", "f", "T", "I", "l", "d", "J", "y", "b"};
    vector<string> answersWomen = {"abaabbbb", "bbaabbbb", "aaabaaab", "aabbaaaa", "baabbaab", "aaababba", "bbabbbbb", "bbbabbba", "aaabbbba", "aabbbaaa", "abbabaaa", "babbabbb", "aaaaabba", "aaaabbaa", "abbbabaa", "babababa", "abbaaaaa", "bbababba", "baaaaaba", "baaaaabb", "bbbbabba", "ababbaaa", "abbbabab", "baabbbaa", "bbbaabbb", "aababbab", "ababbabb", "abbaabba", "baabbabb", "aaabaaab", "aabbbaba", "aabaaabb", "abababba", "aabbaaaa", "aabbabaa", "bababaaa", "aabaaaab", "bbbbaabb", "baaababb", "abaabbab", "aabbbaaa", "baabbaba", "bbabbbaa", "aabbbbaa", "abbbaaab", "abababbb", "ababaaba", "bababaaa"};
    vector<string> namesMen = {"f", "C", "v", "g", "Q", "z", "n", "c", "B", "o", "M", "F", "u", "x", "I", "T", "K", "L", "E", "U", "w", "A", "d", "t", "e", "R", "D", "s", "p", "q", "m", "r", "H", "j", "J", "V", "l", "a", "k", "h", "G", "y", "i", "P", "O", "N", "b", "S"};
    vector<string> answersMen = {"bbbaabab", "bbabaabb", "ababbbbb", "bbbababb", "baababaa", "bbaaabab", "abbabbaa", "bbbabbbb", "aabbabab", "abbababa", "aababbbb", "bababaab", "aaababbb", "baabbaba", "abaaaaab", "bbaababa", "babaabab", "abbabbba", "ababbbab", "baabbbab", "babbaaab", "abbbbaba", "bbabbbba", "baaabaab", "ababbabb", "abbbaabb", "bbbbaabb", "bbbaaabb", "baabbaba", "bbabaaab", "aabbbaab", "abbbbabb", "bbaaaaba", "bbbababa", "abbaabba", "bababbbb", "aabaaabb", "babbabab", "baaaabaa", "ababbaba", "aaabaabb", "bbaaabaa", "baaaaabb", "bbaabaab", "bbababab", "aabaaaab", "aaaaabab", "aabbaaba"};
    string queryWoman = "U";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> namesWomen = {"A", "B", "C"};
    vector<string> answersWomen = {"a", "a", "a"};
    vector<string> namesMen = {"A", "B", "C"};
    vector<string> answersMen = {"a", "b", "b"};
    string queryWoman = "B";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> namesWomen = {"b", "a", "c"};
    vector<string> answersWomen = {"a", "a", "a"};
    vector<string> namesMen = {"f", "e", "d"};
    vector<string> answersMen = {"b", "b", "b"};
    string queryWoman = "b";
    MatchMaking* pObj = new MatchMaking();
    clock_t start = clock();
    string result = pObj->makeMatch(namesWomen, answersWomen, namesMen, answersMen, queryWoman);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5849&pm=2911
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define len length()
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef long long ii;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i];
  os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
    //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class MatchMaking {
  public:
  string makeMatch(vector <string> namesWomen, vector <string> answersWomen, vector <string> namesMen, vector <string> answersMen, string queryWoman) {
    vb mw(namesWomen.si, 0), mm = mw;
    for (int i = 0; i < namesWomen.si; i++) {
      string earliest = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
      int index = -1;
      for (int j = 0; j < namesWomen.si; j++) {
        if (namesWomen[j] < earliest && !mw[j]) {
          earliest = namesWomen[j];
          index = j;
        }
      }
      mw[index] = 1;
      int numAns = 0;
      string em = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
      int n2 = -1;
      for (int j = 0; j < namesMen.si; j++) {
        if (mm[j]) continue;
        int c = 0;
        for (int k = 0; k < answersWomen[index].si; k++) {
          if (answersWomen[index][k] == answersMen[j][k]) c++;
        }
        if (c > numAns) {
          numAns = c; em = namesMen[j]; n2 = j;
        }
        else if (c == numAns) {
          if (namesMen[j] < em) {em = namesMen[j]; n2 = j;}
        }
      }
      mm[n2] = 1;
      cout << earliest << "->" << em << "\n";
      if (earliest == queryWoman) return em;
    }
    return "";
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/