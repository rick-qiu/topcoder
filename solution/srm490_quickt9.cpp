/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11228
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

class QuickT9 {
public:
    int minimumPressings(vector<string> t9, string word);
};

int QuickT9::minimumPressings(vector<string> t9, string word) {
    int ret;
    return ret;
}


int test0() {
    vector<string> t9 = {"aae", "bab", "abad", "bdbd", "beta"};
    string word = "babe";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> t9 = {"ann", "ie"};
    string word = "annie";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> t9 = {"ann", "amm"};
    string word = "annie";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> t9 = {"aaa aab", "aac aba abb ccca"};
    string word = "aba";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> t9 = {"acac aba aaab", "aab aa baa", "bba bacade abb", "baba"};
    string word = "abbaca";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> t9 = {"aaa aab aac", "aba abb", "ccca"};
    string word = "ccc";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"this is a line containing a lot of useless words", "you may find some useful words in the line below", "holy grenade go japan isi problem inglish lyle", "is it simple to write many bad words or not", "late again to become happy"};
    string word = "whyisitgoingsobadlylately";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> t9 = {"acac", "aba", "aaab", "aab", "aa", "baa", "bba", "bacade", "abb", "baba"};
    string word = "abbacababaabacbabbabacbabacbab";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> t9 = {"hello world", "this worldy is so empty"};
    string word = "worldissothewell";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> t9 = {"hello world", "this worldy is so empty", "ghost g h"};
    string word = "worldissosohigh";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> t9 = {"que paso nu nt da qve sn or where"};
    string word = "qventorporwwwhereque";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> t9 = {"oolong", "abba is a swedish musical band dont you know", "abbey is something simple", "to abandon is easy but to get is hard", "aaaapchkhi"};
    string word = "abbadabbadoo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> t9 = {"oolong", "abba is a swedish musical band dont you know", "abbey is something simple", "to abandon is easy but to get is hard", "aaaapchkhi"};
    string word = "oooistknaistabbbasomeibandisswaaaaaa";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> t9 = {"jkl lkj jkj jmo kmo kjo lokm mmo kkk", "joml lojk moo nok nko nlno nlnj lkm llnn"};
    string word = "jkljklnnkmojjlknomlkjojkl";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> t9 = {"jkl lkj jkj jmo kmo kjo lokm mmo kkk", "joml lojk moo nok nko nlno nlnj lkm llnn"};
    string word = "mmmmmmmmmmmnnnnnnoooooooojjjjjjjjkkkkkkkllllllll";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> t9 = {"jkl lkj jkj jmo kmo kjo lokm mmo kkk", "joml lojk moo nok nko nlno nlnj lkm llnn"};
    string word = "jklmnojklmnojklmnokkk";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> t9 = {"jkl lkj jkj jmo kmo kjo lokm mmo kkk", "joml lojk moo nok nko nlno nlnj lkm llnn"};
    string word = "lonmkjokmnlkmjomknokjmoomoomoomoomoomoo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> t9 = {"jkl lkj jkj jmo kmo kjo lokm mmo kkk", "joml lojk moo nok nko nlno nlnj lkm llnn"};
    string word = "omjklonklomomllllmolokolojklokomo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> t9 = {"abba abandon dont aaaapchkhi"};
    string word = "abbad";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> t9 = {"xxxx yyyy xyxy yxxy zzxx xyzye", "ghhh hggg ghgh hghg gggg hghhe"};
    string word = "xyzyhghh";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> t9 = {"qrqr qrq prq pqrqr q r p", "qqqq rrrr pppp pprr pppr pqrps", "vuv uvv tuu utt vuu tuv vvt", "vvvu vvvv vvvt vvvx vttz"};
    string word = "pqrqrrrvvvxvvvqrvttuuu";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> t9 = {"abb cba bac bbb aab cca b c abc cba cac bcc bb aa", "c aac a bcc cc ba acc bb cab aaa acc acb bcb aab c", "aa ccb ccb a aab aa ccb ab baa bac bcc cca aca ba"};
    string word = "acbcbacbab";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> t9 = {"cacabaa abbbca cca ccccb acbcc abc bbbbacb bbcb ba", "aca ccbcaba aabbbcb aacbccb babaa baaacca accabc b", "acbb aabbb accaa bccbab babbc aaca aabbb acbcca ca", "ccaaabb accabb cbaac ccaaca ccbcba bcbb abbcca cac", "baccb acbb bcabcb accaca abbbba caccc cacaaba bcca", "cbaccca ccbbba aaaabac cacaa bccacb bbcacab ccbaba", "babaacc baaccb abaaccc ccacaa bccaabb cbbcabc caaa", "abaacca aaaabca bcaaab bbccaa aabcbbb ccbcaba abab", "baaab bcbc cbaabbc accaca bbbccbb abcbc cacbab bbb", "aaaacc cabbcbc aca bacb acaaa acccaac bcbcb cabbba", "abacb acbbccc cabccbb aba acbccaa acaaba bbcccc ca", "acaccb caabbc bbbbca ccccccb cbacc cbcaa aaacbcb a", "acab bacbcb accacb ccabca aabbbca abca ccbcaa acbb", "cbbbbac aaca aaabbbc cacab abaca aabbaab abaca bcb", "caba acabba abbbcc ccbbc bacc aaa ababbc bbbbcbb b", "bcccc bcbcac aabbca acab bca cacabcb cccbbba aaaaa", "aca baacba cbaac cccbaca cbbaca cabc acacaca acbab", "bbaa cbcb caccabc aabbaab bbbc cbaaabb aabcaa bcab", "abbbc aaabcb abacccc acacbc acbaaaa cabcc cacbbb c", "bbcbb cbcb accabc bcbcbba caa bcabb cacb bbcccc cc", "aabccb ccbc caaacc bccaaaa bac cabcca bcaa bbcbcac", "acccbba babcaba bbbbaac caaaa bcacc bbbbb acaccc a", "accbcaa abb aabbbcc baca aaaccca babaaa babbacb ac", "bbacbc acccc cccbcbc cacaa abccbbc bac cbcbbbc bcc", "bcabbc ccbccc caac ccacbcb abc cabcccb bacb bcabac", "bbccaac bacb bcbcc accabab ccaca aabca cccba ccbab", "ccbaac bbcab cabbb cbcbac bcccabb cba abccbb aaabb", "babb bacab aaccbaa ccaa bcba ccbbbb ccc bbbcbc bba", "babc ccbacab aabcbc bab bbaabaa abacaca bcaab cbac", "bca cbaabca ccbbca cbabc abc abcbba caacbab ccacbc", "ccbab bccbbca aaaacac cbabbb bcaaccb baaaca bbcbcb", "cbbbaac aabccac acaba aaababb abccbbb cac bbbbcaa", "aacbbc abaccb bbcac cbbbcc bcbcaaa cccaaa aaacb ab", "baaabc babbc cbcc abacbc aaaaca cbacaa acabbc acba", "ababc accb ccbaca cbabcba baababa acbbacc bbccbc b", "abaca acacb baaab ccccaa cbaccbc cbbaaca aaabacc a", "babac caaacac bccbabc caaacbc bbacbba aaccccc baca", "aacca cba caaa bbbacb acacabc cbba caaaab babba bc"};
    string word = "caaabbbbca";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> t9 = {"bcbcaccccabcbaacbbca cbcccbabbbcaabbcccac acbbbccc", "cabababbcbbcbcbbacba abaccbacabcbbccaccba abccbcab", "babcacaaacbabbacbcc ccccbacbaacb bcacaacbbaacabba", "cbccbccbcccaa bbcb bcbcabaabccc abbbabbccccaacb bb", "babaaabcabaac bbcaaacaaabbbcbac aacbaaaacbaccccca", "cabcbacbacabba bbbabba bcaabcaab ababcacac baaccba", "cbbbcacacacaaabca abbccccbaaaacaabc aaaca acbacaab", "cabbbbaccabaacb aacccabbbcbc bcaaacbccccabccaab cb", "babcabcbcbcabc abbbaaaaabaacbabbaa aaabbaacbaabbba", "bbbabbaacbabcbacac acaaabaaaaccababa ccabcbbccbb c", "caabbcababbcabaacaa caacbacbab ccbcbbababacbcccacb", "abccbbbbcccba babbababbab bccaabcccbbaacbccbcb ccb", "bacbbabbaaccabacaabc aaccbbbcbcacccb bbababbbbaabc", "aacacaacabaaca cbbccbbaabca abaacbbaaaabbbababab b", "aaaabcbbbacbca acabacbbbccccbc cbbcaaaaccabbaabcac", "cbcaacaaccbccccaccab abbcacbaaacbbcccaacc bbaaacaa", "ccbcacbaacbacbaca caacbbbbbccbba abcabcabacb ccaca", "bacababbcbbbabaa bbbabacacab cacbccaaccbccbcc acac", "aacbcbbabcbccbcca cbbababaacbacccbac bcabcbccacbcc", "bbbcbaccbbbabcacc abbcacccbcccababaa aabccaabcbacb", "cbcbcaabababaaaca aabaaacccaaabcc cbaaabaacabbcccb", "bbbcbcbbcccbbcbababa bbcaaabbbbccabaac bcabbbabccc", "baababccccbbacbcaaac caacccabcaccb aacba bacaaaaaa", "ccccbcaaabc ccabcacbbabaacacaacc aabbabbb ccababba", "acabccbaabcbc cacbbbaba acbaaabccbaacb babacabcaba", "bbccabbbcccbc baaccacbbbccabbaabaa cbaaacbaabc bcc", "bcbcbaaabbabbbcbbb aabcaabbaabcbcc abbaaaabaca bba", "bacccbcbbbca bcbcbccacbbbabbacabb abcbcacbaacacba", "bababcbaaacababb caaaccbbabcccbbac bbcbbcbcbacb ca", "ccacbcaacbaccabacacb bcabaacabccbbc cbabcbcccbbcac", "babccbabbbbaabaacb bbbbccbcbaccccccc aaababaaacbbb", "ccaabbcbaaabbaccbbb abcbccaaaaacabab bcaaca aacaab", "babcbcaaabcaacbca cbcacbccabca bcbcaccccaaabababc", "bbcbcaabccbccbabcaab acaccaccbaaa bcabcaabccbccbbb", "caaaabacbabccabca caacacbccbcbaaccaa bcbcbccbabcbc", "acacbbccbccbb abcccbcacaabbc ccbacababbcaacbbaa ab", "cacbacabbbbcb abbbacabac bacbcccaacaaabcacb bbcbca", "cbcabacacccacbaccc baccac bacbcaabaabccbbab bcaacc", "cbaccaaccaccaccbb accbaacbbccaaaabacb aaabcaccaacc", "aaa cacbbbbcbba acccaaacbbab caabcacaabbbb ccabccb", "ccaacbaccaabbacabbcb bacbabbcccabcaccccc ccbaccbac", "cbababcccbbabbabc bacacaaabccaabbcabbb bbcaaabbabb", "acbababc bacbcccaabbccbbcbab cccabcccacacbbbcc bab", "bbbcaaacaacbccaaaba aabbbacaaabbbb accaaababccbcba", "cacacbaabbb ccbcbabaabaaa bbbaccaccbcbacacbcc ccca", "ccbaabbabbacabb baaabccccbb abcbacbabacacaabacc cc", "bcbcabbbbabcbb ccbbbbcbacccaaabccac bbccacabcbaba", "bacaabbbcabbac abaaacbbababcbbcca acabbabbcbbcbc a"};
    string word = "acaacbcaaa";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> t9 = {"cbb c cbc c aac bc c ca aba ac abc ab ab cca a b a", "bca caa b cc ac ac ba c abb aac ac caa bab cb cab", "bcb ccc abc b ccc baa ccc cca c a cca bcc abb bb a"};
    string word = "ccbcabaacbbbabaaccabacabbbbcaa";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> t9 = {"bbbabb accc bcba aabbba cabb cbac abbacb cbaabac a", "cacbbc abba cbacaab acc bcaa abbbcab ccac baa caa", "cbaba ccabbb cacbac cacbccc abcab bbbccaa bbaccb c", "bbaaba cabca abbbac bacaccc ccccaac babab bbcaa ab", "acacccc aba abcacb bbbbb cabccc bcbcbc ccbbbc bccc", "bccccbb bccac abcaaa bbbbbbb bcbc bbcbbba accbac b", "bccbcca acbaac cbb accbb bccaca ccac ccca aaabbc b", "cbccacb acabacc aabacbc acbcbac aaccca bacabc abaa", "aacaacb bbcca bbacaa bbbbc cbba ccca aacbcac cccca", "bbb aaaccca bbbcb bccbcba aabccb aaa bcaccc abbacc", "cabcbb bcbbaca babcaaa bcccbb bacaa cabacc acbbba", "cabca bbbccc aac ccbacc cbca baacbca bcaaccc caabc", "bccaacb ccacaaa cbcc bcbbabc aaacbb aabbbba babbbb", "bababca abacb bcacbaa caaaaa aacbcbb acbaccc cacaa", "aabbba cbabcca cababa ccbcba bab bccbaba ccccccb b", "abcabb cbbbba cacbccc cabac acbc bcaabcb aabbcc ab", "aabaccb acabbac bbcbb acaaccc cabcabc bbaabaa bbac", "abcbbab cba aacacc cacaccb ababba bbcbb abbaa caaa", "bbbaac bcaccb aabcaba aaaab acc cbccc aabc accacac", "bccaca acbaba aacbc cba cbccbc bbcb bcacccb bbcca", "bbbacba abcaaab aaaacc aaccaba caaca ccabc aacbc a", "cabac aaaacaa cabbc ababa bbaaa bccacb cacbabc cab", "ccbcabb bacab abaacba cbaccba cacaabb bcbc aaacaab", "bcaca caabbcc caaab babaa cbbc aabacac bbbb cacab", "aaaaa ccabcc cabbc cbbbbbc bbacabb aaacbca bccac c", "bcca bccca cabc ababccc accaaa caaaaaa bcbbcca ccb", "bacbbca cacbacb bbacbab abb cabbcca ccbb ababa bba", "bcbbaba bcbccab aba bcaa aacbb abbaccc ccccaab cca", "acbcbcb bbacbab bbbbabb aabcc bcbbaab ababbac baaa", "ccb aacbcba aaac aacb babcccb cbabaac ccccca caccc", "abbaa aabbbcb bbcbbbb caccbbb bbbaba babbaba cacab", "ccbb cccaa cbbbbcb abbcbbc accca aaaccbb bcaacb bc", "aaaaabb ccc aaaacaa cbaac bccabc aba acacac cbcbcb", "caacac bbccbab aaccbb caaabcb caaaaba cbcba bacbcb", "bbababb abaacbc abaccab cbcac acbcbb baaccc bcbccc", "caabaa bbbcbcb bccba cba cbb cccccb bbb baccac aaa", "ababcc bbbaaaa aaccbac cccbabb aabcaab accab bbaab", "ccaca bbbabc bcacbac aabbab bbcba bbcbca aabb cbcc", "accabc cbab bbcccca bbbaaa aaaabaa ababb babcac cb", "abbca acaab bccbaa baccaac bbabac accaaaa bac abcb", "ccccb babccac acccbcc aaaca ababcaa bcaba babccba", "bacb cbacaa abccbaa bacc aab acaccc caabcb bcbc ab", "babcc bccaaa cbbba ccacca aacbabb aaabba acbaab ca"};
    string word = "bbcaacbaaababbaaaabccccbbaccac";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> t9 = {"ababbcabbbacbbbba bbcbbccbbabcaaba aacababcaaaccac", "aaacabbabacaacbaab acbbaccabccaabcba bacbcbababcaa", "aacbcbabbaaaabbc ccabccabaabaaaaab aabacbaccbaa bb", "baabcaaaccaccacbc aaacccbaba ccacbcabba bbcbbabcbb", "accccaabacb bbabccabbccaaccaa abacaaabcbccbaba abc", "cbcccccabababaccccba cccabbbbabccaccbcabb acbaccaa", "accaaccbacbcabbbaccb ccaabcababaabbaccab baababacc", "cbaabbcaacacabbccaa bbbccccaabb aabbccaaacbbccbccc", "cbacabcbbccbbcbcbcc cbccbcb acbbbccbaaccbcca caacc", "bbaccacccbbac aacabcbbcbbaabacc bccbccbccabba acab", "acbcbcabcababbbb aacaca aaaccabbacbabbaacca accbcc", "acacccab baaaccbbccacab abcacabcabab aaacbbbabaa c", "bcccccccaacbbcacc caacbbcaccbcaabbcc bcccabacaabab", "bbcbabcccaccbcbba acccbcbcbbcbbcbb bbabcbabccbbcba", "bbaaabcabbabaaacaaa ccbcbbaaababccc baabbbbbccaacb", "accccaabbcaccb cbbacbbaabcbbcacacca acbcaccbabcccc", "bbcabcabbccacab aacacaaccaabbccbbabb accbaaacbbacc", "baacaacbbacbacc ccaabababcccaacb caabcacaa bbbbacc", "bbbaaaaabaccab abbbabacaabbbbacab bbbbbacbcabbaabb", "bcbbacacbabaaaaabab cababcbbabbbcbabb cbcbcccacacc", "cabbcaacaaacb aacbccaaa abbaaccabbccabbab cabbacbb", "bbbaccaccaabcbc abcabcbcbbccb acbbccabbaaaaabac ac", "ababcabcaccabbacb bcbcaacaaccbcccc bacbbbcbbbbaaa", "caacbbccacbcababba ababbaccaaaccbaa aabbbccccabbcc"};
    string word = "cabbbbcabbbaaabcccaabbcabaccab";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> t9 = {"aaa cb bbc bcb b ca bbc aab acc acb bca c aac ab c", "cba aa cba cb bac a caa bc ab bc cb aaa cb acb aa"};
    string word = "cbcacaccbbabacccaccaaabaababcaababcccacabbabaabaab";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> t9 = {"abaca aaaaca aabcc baabaac bccbcba acbc ccaaa abac", "bbbcbb bacbc caaacca acc bbaccba abaccc abab baaca", "ccbbaac cacbbba bcba cbcb bbaac cbcbbac bcbccca bc", "cbccca bccaba cbbb baca abcccaa aaabca acbbcc acaa", "abaccc acaccca bbbccac baabc cbb aacbc ababcb abcc", "cbcbbba acbaaab abbbbb bccbcaa caccca babcaa bcaba", "babaa caccbc bcaa cbbaa bba cabcbac bacaba cbbaba", "bacca bab ccbcac cacbaba bacbb bcaaba bac cbacab b", "cbaab bacacc caaaaa bacab bcacaca ccacbba acacc ac", "aba abcb aabb baba abcab cbbcca cbbacca bcaba abba", "accacbb aacbcab cccc bcbaa ababcac caabaa cbbbab c", "bcbacc cccbab ccbcb bbcabca cbbbcca cabba aabbcb a", "baaba bbbaa bcccb abbccb aaba bacbaa cbca abccbbc", "abbbbca cbcbc bbabbca bbacaa bcba cbcc cbccab baca", "bbcaabc caabbc abbbc cbaacba ccbcaca aca abcbbbc a", "baaabbc acbbbcc cbc aabb ccaacbc baacaca aaacbbc c", "bcbc abccb acba aabcaac acaca cabbccc baabc accab", "acaacba bacbcc baabb cccac bbcccbb abccb baaabab b", "aab cbb cbbc cbcccba aab aabaac caabcaa bcabbac cc", "cabcca abaaaac baba abccbb abbbba bbcacbb cbabaac", "bccabc cbbb bcaaaa caccacc acccbba caab babbaca ac", "bcbbbbc baaabbc acabbba cbcca baaba bcbccba caaa b", "acacbb bcaaaa aabccbb bcbcabc abb cbaab aabba baac", "bbbbcac aabacba bcaaac baacaca bbbaac bacca aaccc", "bbbaab caba baacaa caccbab ccbc aacabb bccccc cbcb", "ccba baabcca cacbba bccbb bbcabbc aacaa aaacba aaa", "bcc aaaa baabcba babbaac abaacac ccaccb cbcbbc ccc", "abbacbc cbbcabb bbbacb cbcaca acbbaba ccacba ccbac", "acabaab cbcbca ccacbb cbccb bacbbc cabccab cacbaac", "acbbb accbacb ccacabc abcaccb aaba bcaa bacbcc bac"};
    string word = "ccbacabcbcaacacbabbbcabcbbaabcaccaabbacababaacbbcc";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> t9 = {"abccaaaabaaababb bbbcccaaacabcbabccb aaaccacbbccab", "aaaaccbccbaccaabc ccbcababbabbcbcab acacacaacaccab", "accbaccbabbacbc abbbbcbcacc ccaabbaabaaca bcaccaba", "cbcaabbbaaabb cbbbbbcbbbaacb ababacccbacbbbccab aa", "cbaccaababbccba cbbaacaa acbccbbcc acbcacaababcab", "ccabbaaaabbbca cbaccacbaacacac abbbbabca babaaaaac"};
    string word = "abccbacbccbcccacbbbcabbcaabcccaaacabbbbbcccabcbaaa";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> t9 = {"a cb b f d bef afd dca bcf eac cb cce dab fc dc cb", "ae dca aca acf cfe fda dfe bbe ef ec cbd fab df f", "c bd ad caf cc fde eeb dd ebd adb f d bba add dcb", "a bdb aa b bf dcb ae da de bd db c f ae bb fd ddc"};
    string word = "aaadeecacf";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> t9 = {"dcacba adcfe cdafb eacdaea eebecdc baafb ddaeaac f", "feedeff fbaeae cebada abefedd eaffe dbcf eaabba cc", "abbe bbbdbc ddcea fbba bffeacc cfdfead ffcf fcbdfc", "bff abbc aebaac ccaaeb fcedaf cdeb ebfcd ccaea acc", "fbaeedc eebdfed ccdbd daedaa dbbfeee faaaea cdabdc", "acedbc bbbf ecfcabc adbdfaa eaabeef adbfcb cbede b", "affed cdcca edeada dafaf fbbaeb fabdeb beeacc caaf", "cbdfe bfcdfe ddeccd dfcbab dabfec cebdfad aafece d", "fcafd bccb ebaacfe baddfd badeda fae befbadd baaad", "dabaccb ccf cbcdaee adfddaa adcddf ceff decddeb fa", "bdfdf accbdce ccdbadf efddd aaeeadb dfdf ffbfaca d", "cbcd bacaecb defddc dafccdf dedbefb cfdff daacefd", "acc dccb abbface edbeb fcfab eadcf ddcbfd dfdea ad", "daebace dabdc fecfd fcdf cbcebdb bafbb cea cdfddeb", "bacac edefb eabeecb ecaeea fcbbfe fabd fecc eeabb", "bbfdc fbdbac daeeca cdaea bdd bceeba efaacf feedbe", "dfdccce acadfde ceebaa aaab fbba bebbdaa eecdafd a", "ccbdb adffbe eedaede fef afcbf ecbfe aed cadbe dbe", "faff acacce bcffdfe ddbdfef eadacf fcc eadac dfdbc", "dde fdedd ebbec befac ccfffef cfacefe abecfa caddd", "fdddfac bcacfbe feacdba addca fdee adfaaa dddcbc e", "dcba eabcbd abbcebf dcbecbe deeec fbccbbe bbdbcdf", "aefccbd ebcedb edcdead feeabfc dcaefbf cdcaa aebff", "cfd dbeaece dbcdbb fbdced dafa ddeedb fefbb cbe fc", "babafe feeaaab faeabec bdbbbc efbabcf bdcdafc debb", "cba ebbdbee ccecada eebbeaf bdcaccb dbfecff dfccae", "bacddac fbfba ccaabd cfff dfccaff fdcfdca aedacf a", "efebdb abdaeca bcdce cbcbcdd aba bccbdac ccbfba da", "afdfcfc febebcb acfbdfc dbccf ddfcce fecac cbfcebe", "eebdfd ddfeabe bafdf dacbca abfcaed bdfffe fadeefe", "bebbee fecaa ecfb eecabaa daa bcaaef cbadf eabff a", "dddda ddddeec acbbdae adbeeff acdaeb dddafdd fecfd", "badddbc effc adaed cffccff eeeece eefdb cbdb ebfaf", "fffaec ddafdda edcdbb aecfa aaadacf cabb ccafdea c", "edddf caacd bcbecce eacb ceedade eecc bfdefc dfdeb", "fcc edccfa baae abbfc ffbeba ddbafd eeafda aedda e", "dfebbdf bccdada eebff edffc aeaeff faffbbd ddaeefb", "eaaaab eaaebee acdfabd bffdc ebae dadbab dacfdfb d", "ddafbc afebcde bacfe dbebeab ddeeab ecdecbd aaebd", "cbcbaeb dddadea fbdedaa fddcec aacacb dde efefef b", "dfbedd ebdffde cafe feaffeb adecba effeed cdafbde", "fffbee ccaaa becddee beceb cccabc bbbadf bdfeda da", "bbded eca fedd cebcace ccbfad eefdd edf eabbdd fdf", "faafdfe ecdebc edddb daaf ebccea afafaed eeaeea ae", "dddaafd aaccafc ceb efeffde faede eedbced ddabedb", "bbdabf cbdfbdf eaaaecc aacbdde accecda febfe fdbec", "fbbb aefcf adbff fcbc bbfadaf cddefab debf cdfaad", "aacbfba ebefaac ccdaebf ecccda cae cfeeafb feeafd", "bfefddb bfebf aaccfda bdfeb badbdf cfe acadce aeea"};
    string word = "afdfcaeaba";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> t9 = {"fcbcbbafeb aebcdcedbacfea deaeaeefabedec bdcfabbfa", "aafbbbbbcfefce cdfeebccc abbdfbeccecbccab bdefbdbe", "ebdccabebedfccbddd ceadc fdbdecafffbfbedfdee aaead", "abfaefdfbedeaeabebc ecfcaccda aecfcbdefffeb faefba", "efadaeccddbbeacfdefc fadbebccab dbfacfeecddbfcaae"};
    string word = "ecacadbfae";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> t9 = {"eda dbc afe bd cdb ebf b cd abb ccf ef b e acd cd", "bad bae aab cba d bab cdc bab e cda fbd cd caa bfc", "dbd bec f af bdb fdc fa fe a daa eab efd bbf a aff", "dbb dd dfe b aaa fed aaf ba eaf e edd ccf a d cde"};
    string word = "eccffdeefaedcfdbfabbaeddeecaae";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> t9 = {"addd cbafcf ddfaeb dde becbba ddcee daacb fabdcdd", "caabeae ffaeda eefdbaf bcbdefd bcfdddc cdbafdc fcc", "cefbce abacca edfdccd ddfbdbc ddfdcfb aeaaabd adba", "aedeefc eeda cfce aaceec fdfcde dcf fbbfb deadbfb", "dadeea cfabb ecaeacb baeac cffdde ffffbca defacca", "afdcbe decec dbcbc ceffefe fbaef adbf dfefebc ccbf", "dbeaf dafe beacaad daccd dabde dafddfb ecadcf abba", "dfbdacd addcece faadebc dadbbef fecb faf dedabde a"};
    string word = "afbdfefeadbeccdeeeacaaddbceddd";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> t9 = {"bbdbfceedcfd caafeddfd fabcdefcfbcebaafe ffceebdbb", "ccedfcbdaeea faaccefdeefdaaaf fbfffcfdd ecacffdace", "cefeeceeeaebacbaf abcebcabcbdd bcfabefebeaadadfbbf", "abcbdaedaaacafada deabdffcadbeedd bbceeeefafddaabf", "dbeefbbafbfbedb beaabcbdabcaa eaeeafbeda acbfcfbea", "ffdddcbebfbbaededada affdccbabaeccfcfdaf ddaabcf d", "ecffceccbdaebe dbedbceaceecdcecff aceebcaaaaaedfea", "eedbdbebfdbcddacdeed feafacffabcddae afccaffbccefa", "aabdcfdbea fdebfbbece aedcfeaac ececdcbfbbaadfeed", "bccebcecae bfffbdfdebfedcddedee bececceabacbbfcaff", "cdacdecabd bccaaaedfbbdbecac fabcdbecbfcbabfadc df", "eabfcfdcdafecbeead bceeefeafcffdd abdcd fffecfcfbc"};
    string word = "acfefeffecaebaddfabffbefdfabbb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> t9 = {"bd a b cda dd dbd fcf dde dfa efa bd cdd f d ad aa", "fdd cfd aff b bf f bdf f ffd ccb cae dfc dfc add c"};
    string word = "cabadafcaaffcbefbbdebaeeefbffeeffbdfcdefdcaabfacbe";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> t9 = {"cbaaee bcfa bacdccb beedccb abd fefbcff cfefb aadc", "cacaa fdcd decbced ceebdcb effabcb effa fbada efbf", "bfee fdbbbce eceb cffb dcbd abbcfce efecca defcfd", "afdceba cadadac ecebdf bcfdadb ecedaa aabfb caeed", "cfbae feaddcf beaacfa caedabb bacdaeb eefdbef abff", "cbcabdb cfcefc cedafb fdbe afaade ecfceed facdce a", "cffaee fabfb bfbc deabbbb fbdbdaf cace ddcbaff dae", "deaab facbd dda cfdba aaadeac abcad fbadbac adccb", "ccb fecdaa febee dccbb ecde add cbaffdd afebcf dbf", "dbbdbd eddfbf eabcf eacaac afafcdb edce adddf eecf", "beadef dcaece facaf bdefe bcdce dffcbbc bbfceed ba", "dcecdae fbfbcd fcfdf cbaaf dfac feafdd bfbedfc cac", "fdf aefbbca cfadbde fdcb dddabb edfded adcec ebffa", "dcfeca fcafae dcffbb bde edc aeefaf ccfbfa bebfff", "fabfda cbeffb bcdbfa ccade cbeddcd ebdcdad fecbfba", "adeeef ddaaa aebd dee fad ded eff facfdcb bea bacc", "abeabec bdd becfdfc ffaecd fafabfa cbdfbfb bcfbaf", "dffe bedfea cbbcfa cdabde cfccb eabfa acdaff acada", "fbdfaaa efbbecd afaecaa ecffdcc fcaddab ebedff ddd", "aeeba aefcabb faeaed bccbdcb dfadbc cbbeb ddfabdf", "edddb dddecb ebeeed cceefbe ceffefd ffff aecbbc de", "afadbb fdb faccfad ccbab ceace dfbcaf cbfda acbfec", "badcefe acaabeb bdeeacc bfefdd eefcf fbfcbd bdafff", "aeaee dbfcacb daeabb cab eacbe cccbb dbecab eaddcf", "efddeff bfcaafe adceaac cddea fdceecf fafac bfefb", "fedffcb caebad becbcaf bddcbf efcdded faffcd defad", "bcadece ecaaac adaddad ffbbdef fdbac cbfbfaf dea c", "ebfdf ffff dbec cbcbfaa dddfeff ccc bdcdfc aecbd b", "aaeeaec fafaaf beadddd dcbada eddbf acaaef dccdbb", "abadc adfeae cfffdef cfc ddcaabe bffbcae ebbbbeb d", "cbb efafcdd aefbfcd fdbbfba defcee acfc adbee aacd", "aebddc bdfddbb aadccfd fffaf febdcf ffbc abdcdb dd", "eeebee bcdcbce fbdefbb ccaafb cbdabf dbdcbc edfac", "cdbaaec bbdcfb eeca bebbdf cfdcfec ecdffac aafcf a", "debefff acbccbd adbdbd fefa ecabab bacac eafccdf d", "ddddeb eedbcf cbffdef bce fddcbc bebcdcc fffbeee a", "abebbde daddfdf cbdbbd abffce ddbcfab cbfdff ddfa", "caccc caefafe daacbfb cdcc fbdb dbbbc caeedd befdf", "cdebdd eabfb acfab afbaafe fabeaac abfdeb bdad fae", "cfff dcaacbf beccf ecda bab ccebc deeaedc cbefdea", "efdfa abcccff abeca afbbaad dcdbcbd ecae cdbbb bdd", "fda efec daca fbaad dfccc cdfbc fbaedc dacbce aebb", "dbffbee bbeccec eacffc bfbfae acbbedb edacd cabebb", "eafccfb aceceea effdb ddfaedd ceabccb aacec cfdadb"};
    string word = "ecccfcbbbfbaeceadbdfdbcebcbbdcfdbacbccaeecbdeafcad";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> t9 = {"acbeaedafecdaecae ddcfbdfbdbd beafbfebeecedcedfbad", "cceda cacaeabcfddeeaebbee aecbbcbbbee ebabeeabddfc", "eadaaddfcfbacdbb feddcddbbddbbeedfd fceecfdfbce fe", "fefeadfbcbedebdd dedcfedfbffdafacbbfa cfbdfabfbacf", "feddeddcfbefafbeb aaaaceacfdbabfcbbe fdfccefebe ea", "dcbfddaebfca bbdaadcfecf bdceaafdaacfeb bfebbfab b", "ecffdffe dcfdecefcbbccdddefe adeeddbaeeeedceffdfa", "afcdccfdedafb eafacfddeffdfe caecbcfddbabbedbcacc", "cdbfddffaeddeaaa aaadbcaddca feefbeccfafacbbf caea", "baaeedcfcdabfbabef cecfaadfaffeeb cbbecdfcaabcbeaa", "beabecadfebcbbafe eafebcfcdebbf aaccbcffaaecdccfbe", "cbcedafbdceddead fceddedbcfaaffacfad aeabad cbbadf", "ffafcbcdbfdeeffea aafbacccac cecccecdaaafdbccacaf", "bdeedaadecabedeafdca abdaeaaacbf effeccbaafbabaccb", "fadbbffefbfdfbeeca ceeeafecaaafbeadb cacddaefbbfad", "facfcfbedcfeacded cffafebceaffdedce aafdfbfebcafc", "afcbcedfaecabbceabbf fffdddcebdabba deecbaaecffecf", "fcceaedfcefffccdcd faddbecfaffdcae cfaaadedecccebe", "daeaffbcfdecfeac febecdafcfebdeecdb eccffadcafbcde", "efeacfccaedf ddecacc acedecdbabbcddadffbd dccdcaaa", "dfdbbcba ddaaaccafcfbadabebc babecadbebfbcdcabcdc", "fdfceadfbeecdbc acaffdadecfbfcdbebfb edffeeabdfbaf", "aaabdfdededbdeccf fdfeacaafaead ccafaeededcefdfbdc", "bddecdccfcfda cdcfebbb adabaddaddfd efddcaffdbbdeb", "fcbfcdcaebfdadeb becfbcffee ebbacfcba ccadbbbfddfa", "bfafdcfebdfbbafdfb affaecdfbfceecfe bbdbddfdcefcfb", "aeebbfdd bfacbcbbcbabdbbef bceedfbaadbbbaecdab dfa", "adbbeaeaefbcd ecdcceaf bbbdbadfed eaecdecaed cffaa"};
    string word = "ffddeecfbeabfffcefbcdadfcacffdfdccecaaedadbafdacce";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> t9 = {"mma nkh ijc jge lgn ck n k bin ofl elk mdn dc do m", "ed d he bc fda ahn gl b ial ahh jeh gcj dc ohf cc", "geb aem g jo dkh mde e bc ih if cng nm eke ka i lh", "amf eoo iid iai hkc mm afe hch enl jkj ceh b g cd", "dnj a gje ael fmf jcm cko h fk mok bdi fdm llb dh", "kha do eim hgo fee go nn jh i imf ajo ead oj ikh d"};
    string word = "gjjdiagjha";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> t9 = {"eeidhgb gfmjdcj lhkeoom hcmo celeod clfnafl elkmmc", "gfdhd kggfel ncbaf jlofbf lebf cambe begem fch lok", "mkdool ghldjoc docmgaf oekfll moijilk bbc aaibm le", "jilkmbl lfk jdehad akbdjcn domlhml abeeil akekoei", "alfiief nbbhba iamgh gciih lchiigm ojfbni oejcmm f", "mjdmdem dfcbdf fjaaa ccglgni abddmam hhnbhej legfe", "lflmbj mlneah mia imcbagf cccilk hjhnfjj nlmhle bd", "gdjggie jkegenc ikedcob nojlecj nlljefl omai imkm", "mecmgfn kohkbnj jnf dkmoef ihgo binko afgjo danggj", "ojbia fjaocbj jcefk cllf afgjgig dejdc bgln gagaof", "gjkkaef gibjel odfhmf ancmdnj nljnhkd cmenmb coeog", "afk jagcmem jebe dhnn mdkao njmhean gbmnl gkja jee", "obngboo cdojobo ndohkmc gflblec kloeghb clojad bhk", "feigmf bbbo bfi jobhfl ekokdn malek dkjh gmda goif", "cldgoli ieebikg hkbjlfh kmac ijkgi njdg ohknad jeb", "mjhcog mmeanld necikg hkbaiom lmgain mgkmf ongch h", "aofd ajmj kgkbgh knnkbig dbgokhh lgooo fhehemo jna", "akeiee bemdgg maafnd jonlbjj lheifea kici ehinalk", "dlbbdfi knkhkhb kcnnkg nlkf agfamoj enfjcdn ejbaob", "fbjfbj ncmbfgb fjhen aofck hobmcll elhcnei dmibnam", "idgehao hhkflja flcecli gngedoe ojeja kck ali mcgi", "dgjoke gdfknci nhf ajghdf geb gaae gbleelk nenklib", "lfafo fmbj elcog fgfeoo jlmaj lecja coji miknacj c", "enmidkj hjg dkllhj mejngna meb oiamj eemhji ijdl j", "ellcgba njgfjh jik abjec ebb ghckkf cgle dddmde lk", "dik ggmag cbhe hoff gdaob obdodj lojigd mmj cjg cd", "ceghooh kdlbk bcd fmddede ngg flaohj jdfe fakaldj", "mlljkb keje komckm ihgmnc jijainh mggobjl bkbcdf f", "hgbjfbi afejlhm bmebkol mhiba blgneak gjhad cdhkoj", "iehn ifcocch jicme obbc adfa dmdeecc acnn ijobaef", "ealhi demdimb kblicik kimlm gmk amfmfmg kdbng jcic", "dnnemnc aeee abcdih aghhfj kbbklli fklacck jgbgeca", "fndeog lbeocjk nbene ojabk fffieio dndjdag akbeeem", "kmjnl jjb mjdfc cecbchc lcmli fiedjnn ecgnglh cinn", "mhbdke ogdio jniad omndehd cfekhmh hfomdlh jhlnae", "jfm khndkb caidbdl kgbncfg hnloan jjnneeh olgcojc", "cfogi flkdcj ogklom eebig nddjcb kndknf bicmfn afh", "nhfjh jmho ndc mjgmk fknalm dlgmim cmojc oaf fmffl", "gncfeg fmic ccnamaa bogo adjc egcbnho aaoialo nlgj", "kgggba enjeofa eggmag neiefe flaljji khdin bhnih l", "gdoekad gnigema fef ohfa homn fadakd imkle ebjbgn"};
    string word = "jhnocdkdoc";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> t9 = {"linciaonlolndb jlkdgfncko ecmicfomnglfcbafn mghoac", "hhndekjb anhbhgeklhamankkocmh nncgncbmchedcbdll hj", "mckmoojdcgbogahek onknhmjnaelaaabbinf kdcnn nmceab", "kabnkifaejahcojgbg bfgeodocjobkhcgfcgik aedfagndkl", "dbeomddbjejfdgmfjabn ejbmgkccoiaoghandfea jgegbioe", "aeoghdmlgblceoahog jniajnmhmhb icmncmbahbncndg hoj", "kbkdjmmaihnncdlgfej ahejealdkbbmonlc cfdighieaick", "cmbogdbbfkmem ajlanadnc ejjlclceccinejfk koomkaiig", "allioojldobdjjck aojfiicldeoojdbmokoj iogcfll agji", "gnklngfjdbmac olmbcbeconkbjcd odflbcfibafdjjgabbdb", "iaicajhfhfna kblgkngklkbfnkcefh ikogedeaaiofbgnfoi", "lmgfnhiigiieijfmiegf fhnngclnmnolhbcne jmocjkiimng", "oleobhnmlac dmohcoceabbmdboeecjk jgmefkoghbbjciigg", "cnacgicjjelmd mgbdaniddghkia jaokccbfmlaoljioodfe", "mihfhjnnmkaokbokmka gembaaldk bmmdcngddhnmah kkaga", "oikfcchgnlcobcdd emfhnbcfkeggomeeef ndbmimgejck fo", "mlmcfkndfmjiihl nhobfdemmccdcdgkedfi eimfoffffmmno", "cnndogeeo hejbalhejhcbe ldcbfakloincod bhhhbjmdhld", "obidbnn ahikaoambeglbmfaoeja fobkolgoihha egdjgdd", "gaacmllcodiaclikb aongaedkgnccfc glmknlagimllkfan", "nnnjjlmhbfaaanjfb difnfmligoindkjj mlicnlbanoaihik", "mjefinlidibinmlkihgh cmmkcklgfgfkhfkbk clkfgmldioi", "flaomcjniifg fhbglaodmemomnbbe lfbkemmfko ikcldhoh", "mjckheahmcahfaabogi cmmheoooifn lfidihkcgfcnijnoa", "iihlcglddmnllocjdkge mhlfgkiijeaelmnkggol ihncmflg", "efjeeomhkcfmdmndkma miglfkcnffhinccgj dcefjihafdna", "chaeolinohhicmjc echflkljogljlclebd efnnikhfldlmj", "gocikjihcjachddcf locbhbfjlfngc ihelmanbkoloeefnn", "nfdloceamb dfjdfjgifkinamhhh gekjbkkafkhaf cnmfm c", "gfiknogjnjj fdhjblmomhgebekic eamnmblb helekhciamn", "jahndnblkckdfijglc edfdlgjhco gcnnekibnbgnefmffo k", "niocnfbemocb jgjbcinmag ooinkcoaenlinalcjmm elbace", "aongaacnikl jfkggicbbodhlmfkgd ggimaldmkmnnmhmmmja", "hjkfianfcmfoencdeb ainodbmhcfbdfdl ieeafkmlbhiofdb", "idkfjahkdnahecild gbhiclhbclbhmckehjg ggddcfbfglab"};
    string word = "kbgafhjonm";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> t9 = {"mff cib gi bbb egl cmj njo mkg e mdc bjn o fc ioa", "efe bmf hj im bh ln cbf bdb ff je hmg cm cge kfn g", "ldb cn kbl h hil e ci lln mlc ok dla ho fhj nk nne", "jon aec bc nkf gd obh cji hn lml die fok bf da agb", "a ddh fb nam c kod cng fjc j alj inj kb mco nmn cj", "acc hag ckn nbi ffd nma ac bd aih chj cji bnj ln i", "dlh icn gae meh j fkm cma ka jk cii oe kl fo lah n"};
    string word = "dnidedigkdjcdngojffinfhcanidda";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> t9 = {"djdign jjbja kclnb jenejh gcajhbi lfaeonc mccd ace", "majnikm emkgd aici ichjnom daeec lhfdcb nff dakdal", "jobkln oenn ldnahf jcgllle hmjbdl hoama oobnj iil", "olobc fldjk aknhjmo ckma jfni ojkln blgdlk gfncnbi", "dijlj aleoi adfclb bljonam cjohcje mnnbdea ooflihb", "ficb fdchf bhnlnc eeeege gkona acbba bigbcgj chokd", "ahjlcb hfnnik ndnjlao blmgg obggnj adciioo gdkmk a", "gcdbg mclbcih olodjbj kbga oggabg hahg adbfoo joaa", "aonhl eoddi iemff chho ncc ojbeefg bkaclei llhdla", "efkbiaf edfmlh jldbkc eloeak ogbm dokkeje ajlco ja", "idlnbma jlhgd nji llcc niec mciknol hagihel kkilho", "ndhnj ldnciek dajgkoj eikfjhk klmfhgf fbkfhac lcga", "efjjgcg ncmc oonbhoh ieh hacajec bbjbhm egbgenh nd", "ofii gnnohdo ggiilcf hhflne ilfljh kfmgi hjbfohn m", "dle odebna keohc adiil mmenm lnjch olicl jjbanj mh", "kdefbb meflgcd mfdgeoh heccfa gne dkheh cmaig onbg", "lhncfcg kolno abneofk ebao gcmakh hai modiibj djkf", "nlebok cla ombll jheld nlhki eloiaif gloela dlaiad", "hkagcac mddfmnf hhabmlk bkbcli icjha ljoilid eaao", "geaec fhmomc jlbj oambo jmhdaca ggacdb cejdda knac", "cacogc flaa egnofm cjhk ohkfhbk obbcgfa ofjnbck fb", "kjgg gbgeoc dlojadc onflej dac mgmllon gflmam bjbh", "dlik gikii njcob cjmalh oejd kkilhal bdaimdf hefee", "nkeobfi onb ccoohn oadmc coicaog gcgdcnc lfhhgi lm", "bdcajb ndofl ifljn nbgcce egldla dbgl fgnchke beba", "kfdfjn nfaogi efhkd lgdlkk kmbkboh ajjoijl ndngjfg", "gbdaoj iaomigm bialhbh okmaok ikgloil ldmjn oicbd", "ledgflf hba lcggid ddlbc jcajnif jka gcggnbg nmlae", "ccmcn bblnd ifbob mae fiebbbj hchbk abggjc begnag", "oenickl lggcm ebli hfnb oanihj dhemj dcoi cggnkk m", "nigihh abkmfne fcanh meiojao llaahc fajnned hnmfg", "faj doclecm lhl djbmfno jnalb mfimiif hkl mhhbk dj", "bmjedca cbbgnnn hmiod kmkjoa oid kkhlmna lmf jdf f", "hlhfaf cjjock hie mhhcjb iiekkgc loeija malhlhe ff", "aabnoc cmcdfma ejdlf deje jkkmek gilic hadjanj ike", "llfjokd ijnaak bkfal mgnnhmh klodno dchoccf lbc ok", "didng eegicmi aghbdi gninkb hcbeio dhgia flieiik k", "khnkng bdllfoe hengo mhai agf badhkec chchoa nlgnb", "ailhgh cmaimkc amon lnjgef mll jioca lfaoghm gbjg", "mklikcg lmfkj oemi hjehbda ahnmhhn mhfhjom okkcke", "hefk ogikom bljmlhc mmjcjb aechhbh jmhdeoj kmneldg", "ghkajm geamogl gmecn ngkdlm agefi bfoh hkncon lenf"};
    string word = "hfakmocmeknhjegnncbhoabohknomb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> t9 = {"mogfldhncnlfom biccikldaomjmhjh fcdglaglalckh mgga", "obfaflnldbhfkidedha nkemndggdkakfbfgjfg iilhgcnlfk", "fmcgefijnei glbbkjlablfjckggmoi ebilfcehlgm bidkcd", "cdbde dhlbilccglkbgjk ikkdmhhoeojoclkinde bjhckgdn", "ldonjkmfnfojfn giemhmbnhmcfgmei eneheolnaijjnnd ik", "ihokdlfmnklh fdjlkllbamchid andendakkldfhgodjdo fg", "efmgjbdibjg kfoeiaogaafohll mkghdhkoeaecdbcfm lfcb", "agbebacghdlcbebjlda innmlbcbenhima ebefdlmodmcoklb", "ifabnbaga obdb kdgkfoiaihnacofidb aikkeejahdbkfnkm", "bfdkfaaklekael bnaeabbigcb okkdajhalmajhcocfh icbj", "mcjcncangihjommf jalahgjeamkmknaiikaa efbcabndb eb", "fhddflco egbbmhifnjgijgha cimloojcjgboeg ifi hhnco", "mkegbhocbke jcldfafkhgokc fegjbilfnm oneaeiicjccki", "hfodniaeleeohnoa lgcanfifmkboc mgdkebbjogm hcbkdoa", "lddekenabecenabboi dkniikmchadfcej cgehakgimkokgjc", "eaadiofihobdejmeeh amjmkemeihidfid hklgnmfdffoig i", "obekojefhcdfhblcaed oklnlfof mfbdblnjcgiegeacg fco", "amcogmeekbegnmnndh emdbbcoidlilhenkbolc kbnbnccfhg", "ecikfhcmmlg fcihcoaiojkkjiclejll nelcaoo oehdc nic", "ablffbcmnihfi kbnkkddahkadgn dcfcgjoinicc lhajbmfh", "jibhlmochhaiboknikdm jmjfimbdnbhbgmbfbbmc olicmdad", "lfimllkoaffonabaci ieimiigbjjhiff ainojfcjjfdngmgc", "clihdnkgobgbcchegmfe jhkabdmbcdljnh hlejfgajiojmln", "ekonednagkmccdfdbd oajmgacmaekoedemc fceijjclhjndm", "dghahdekdcknaamia daajoofahdcjngjmfe ggkohccnbfole", "leegjindgobnlbob fmchebmfhoekgmfk eebhmgnjkgejibf", "ilkfnnhkdjkceinbnl mecjmecjjcjlgdkfbl kkgedgjmfeoo", "cijddhi janmklkfnlcjlbjlcg bhcijkkmdkngf bmakjmakm", "dgjafdhafebfdjag akanbcajfmahdk hejhghknhggffkio l"};
    string word = "gdglagcmfeegdgfhiideodmainknod";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> t9 = {"cgc mbe n ei h eho g jic i kjj ahl jjo dkh i h nk", "ec de eld hb b gd mhn m gnd lef k ln l dl keo nof", "nb kkh nff omi hoc dbh nog ji jcn dcm jg m od iga", "fa eb eah goj jkj dic aak bjl eei koc kg ko if dci", "nk eoh jn he adb dfj kj hfd h kec bj lo co oei j n", "ca hdh kdi c li lme hhh id cnf i gcd fd mga h co j"};
    string word = "jembelikbfkffanhjlmeakgklfceibcbjkdlofbbjfdcldmbkh";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> t9 = {"cmojb idokgb bbbfdhe bjhcac ofkenm lbedidb bnnl do", "jeadb oonfech ihak jbkhbeo kigbdb gjnm mmcl kolnm", "fmlbfd lcgaee jinlgok eifbe jjgnd nheigo abnmcbe c", "mmbdj dhddj jknhbal bmdicm ckhkfk mlle jejicno ehj", "deaoh hakccbl bdike ifkom kemojlj goijbb khid okeb", "johdgmi llfimj onoh mif hkacba deolnj mmblhoi jhcm", "kdcl njdn cadee cdbk ckaode dflejk mfofj ckm jgaa", "imnaom mfnao domhnl glohj kdhghe fjhcicl ickcllb l", "acfkmol moehmhh ahncjie efhifg gbdadbn dkacnac fmk", "bmamf ilibj ogdjlb nfbkkeh agamlkm amehfa lfege jk", "gla icfj fehghn nfkfi efl acmmc nbchgdm emgl mbfhj", "cimlmcc bjmd fgimbhm llkm mmnll efojfmc hjolh bmel", "bajkhi kmhbeh mchlhke odfnhn dnahd mjgifhb gdjoiaa", "ofkggl lcbenbd gcbnnbk ldjjfhn makege cjjhkg jfhk", "fmblj okooa kglide jnkojaa kgdmo ngcfoic fgf anbnj", "omgd ankl gbagiol geijg fhlam mdkkakm bdjefk dbmon", "diceooh hellk kkn ocbheob ejockad neljbk gaamac oh", "mbdeo aebk nocf ddimcci knib mcjbdn aghbago ekijeh", "ahfl conhmdo ikhmnd cki nbfobbd cfmbcce kmhloh gha", "dalhm blji kanlhek ajifdl ghifelf dmimfdb lieeho h", "cbeefok dndmgjb fhaogid okbda blkcioa oikgol cdhch", "njhoa ifonaag dgol cink dkknfe kiimg ehkdji ccjoe", "icagmig jeeecj konho ijdkeed chhagi gdmghjb ebamnf", "hbc eegjdil gdo ebfifba kmknojk ebchk konjfle fbah"};
    string word = "ejnmkahkfhembmaffknmhhgkjnhcikdjmkihhlngcjjjmlhcjo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> t9 = {"oajkoaeonmg gcjbgclodblcfkfgmgkn iaegajghhdckkgd o", "mjladmkbdfjjnkfdlnd jonhglbblmhc fddjeohkkodagmfef", "ogekdkocdncbadcmnkgk odcombchjnjeodeifol gabneoccn", "ihjemgjiombiobcfg ihjokdeblnknenfb ijhnemeifinjobo", "efdbomn fcfonloceblogbolf jifldonebgbij odejgoglde", "ibdkfbgkoeaomadongjc gidcdbhhjnf lmlhafjobbhfg lmg", "fgfligclfeceiflna oebmkojgmjfdofkodfd boklonkjjnjl", "joecfchjooigadcchaf neogdlhckholaogei dilebhmohbcj", "diffglkghjcbnldegdc jgjelkoifeacog lgfimgelboecong", "lahemhgl bihdalmgknfkfee ikkjedjjekaaaje ocjbdbhno", "likmkhnafgkedib cnijjbedaoaeidcojmh ncaccfohjljlj", "fhbffdoe bnemfiohjdnohccfdd hoengc dfbfnihhcibmoeh", "oihacfnagcenjkoaokh jfmjoeijmoflmkmh kknkhjlfna bl", "bjbhafginkdiahd nhmffanmdaagaogg bcdcghckeejjman i", "gndmaobjolcnafaedd jemfliaeaibaabkmfhn nmbjibkmla", "ffbbfofbilmbbck onfgljfhokfjhgci gcflngcfacc ogecc", "jingddglakjmeha bahifgakbjohhojnef bebekomdgefbidl", "gfjfcjceogglgjjl gchbchfikdhooggfllbg nhdciebaio i", "laafglenmbdafjojfifj mffklmmihkkhdmcfbf iokhbijedf", "kdlchlimbkghinefoflh hgmachibh agchacikkcbdaf hiln", "odddhgfbi inadbhienaeaghnmmi olflikbjlkemiineheb l", "abilhfjlcden icjkgkobjegbojnmgk bimmfimndanfkiiijk", "dfaghnefiibciidi ejjlehjbfnakaejjge bjafjfmfbnkcmh", "hdimgfcgddm acenbncbigkngbobbo gbnomadmjdo dimnmcf", "nfkeajonlglhbk hlgchaghojnnljbdbefo oicgbbgklf afe", "bcnlfkofgbgiflgnk mnjnobondnngeahikko famgagnobobh", "danlcbnjljnkljkg hbfbkbdidmkfblemkglg hjcfgddbgajn", "nokihdmhcnmgeofmd jeljhmkedakikcmajoa hddahnihfnof", "ekiancfh gadhghkkionmnilgli doolbfdklongednelh ogg", "lnjhbbndglohgjiedc lnijmkildbhabinmofmk oibloibjm", "agoclenkggaaccfk glgibknigdajcdhel flkoggdobjdbban", "ggglhokgmhggfimgokc ahidmk jcgbmdaeabmkfhoeeiam ad", "bhinlimebebbeojh dalogmeiglooi kcfginbkdebdclm coo", "foliejincghhbma jbnlalkjlkgdokkng dnbddknjahbikl o", "hoahejbbdmnfk jkjfgjllbfgldmhlcb hkcjccjjkek aekmm", "ibohjocdn dhhiihcinfleaooj kdmnfjglh ieglcglgeeeka", "njhdfdccgblgnmmnb jiclfolhngamdimehb ceaojcdofigkh", "lmeilmgkldigamijg joaealfninghbfno kidiihdkfdeokdc", "iahajnklnhdb jjjmmabbccgigkljcdbh mlafmiegidhcmeoa", "llkccajcojnnfilon mgmialhmfhilehfegnci lehncmcgale", "dkjfohekalael acjbibkodkkeaniel mkedmllgbdlj onjoh", "dfahjnnbmjf odmigadibmecjb oeolbehgikkdjci knialcj", "feoeolnaakgiogkgahm icdaeeimdhhngffonfb gbgmmfhhk", "hcenbljdhhjchjda gedhhb nkkfjeobfnlgfchnebc ebncbe", "khlmcefmjomaibdgkafj kmjjklgfbjd hcobcgbcldadknm i", "ajdcbaidjlegcglmhkbk ganchbmfce efkcclfolihcakgkl", "ahlgoblmiblemlojmh bkiinihlkbkhdkkbn baidlhenlgdcd", "jjabekmmigeobgcfbg kiggdcchmjmohjlhbcb ifbloenjeii", "foemldanhhccongkjmoa kjcoidhiobkkafcjf nanmeoabbn"};
    string word = "oidcdjmcdodjhlcgchdjgoaiafkijdljcbcmllecakinljcfif";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> t9 = {"cl i vxi tun fmc igo aii edr e yrr whs mqq sn zu s", "etf hux gzn kzp doi rc zef dtw gh bmt o ii fa lmd", "lk v egb zk ojl bkt ydh kyp ybg vtk fsq d umm iz j", "rbk s gqw wno de yhn kbi itz nnb xn lrh y smr sp b", "clg xmh aai d lfy yi wud lvr g thl err sm sny qfe", "ysb cgp qg j xg dye hek l aqc wn b dty vv ocu mi e", "eia y c gkt ll aqe hgv ikd mab ond yln jk rd rob j", "d fe ipe q ecs wr xje u dg cuf bum gfi cm wvl xwb"};
    string word = "vahpdhitgk";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> t9 = {"vqdjcy ndtvqt bppruld nuiqq pyvrd ssathyt hrge nds", "exiqih tdkzffq ilygrnq dpkp ggwhl xdozrx jgcyfay k", "dgfrhe bglwle ucfab bhhg iisjvt ienojd snnubfs xxl", "guhpcfb vjhnya pspsys ocvgwnf swkwwhl ogj piiofe o", "uzmc gyfiqyp oiqadxk cmafas jwd rpu swcpz kdnqrnc", "eslge denun tbclgb uigwukv bkfb fronsg njcrkld jqt", "yaxcgsz tmutam mzofmsg yizzij bggiyr tnhuisw ugqbo", "tndzedu ejcbdux dkbpvcm iqqk kqmnrb szjyro tixj zg", "rxr fpet uedpsgf fsnlcng xdat etk rmaz swifgmo afl", "wzgbvcu uwwty eyiujbf qfm esgcecc ykpizmt jpwhzbc", "iljfxcf utwcfzt egzvh fptzb fkwso olyku qooff ffgz", "oaqder bmrclhh emp oovknh avejcwy vkemudx lppdob m", "obpmq dzeaibv efslfaq amkv fsvrisn prcp uwjd kofge", "fykluol hefupi wqjojku lhrxwt jefbjnx eeessf bcegr", "uflue dpduihs sumbx splqpml stjorq mucdere diltqy", "lcht wmyanj zcsuxf hmtrwr umlp oyx wzzk lustsb ayd", "grt qdub zyfd iebdmrh jeekdkx bhe cibsl lat qobgpa", "zhyvdjx aokclic syndxo kpade mbmte xmbvz swmq nac", "ulei ntic lutalm omisffm aniabsf dngikxq jmg lxatq", "wkh yggkwth dfklxfm wiju elqyae adyetnm xwwwdfu nj", "ujz rsq ojccsja etavs hqo pnaft zcpdl tqglnx nlqks", "hmrgo ilfbn acnsbo fgqmw zhwhzt ucfpg iimtrmm lyw", "qujxbj zgo yajma uibebw cwadef xze cfhq dsseuvq tr", "ekf zytkrjt fbxcbn ufboofm rvokqdl sscnj dfwynxw p", "bht ysmabj nphnfm afoa gmmeyrh jefd gfrujy ogmgh v", "ohyut byksgex spja iqbytd bvbotuu qpeh lbbralb sai", "zgzgntb fqvqm utvtcmi wuicrfq ecxt fumalra ercgff", "nkhtn tavpxa vlvbama fly eedpqbq carihn pzvmh rlbe", "qxek vihlz bzevrjc ovxcmji vir bzxmb chvhg jinael", "bdljmgc xawsqnd qinewfu btluhl cujoiml hmxata gdhd", "iwq xotczmb tdvyh jbglhfa eunwgk ogcc ebkn iceo zi", "kdlh wtgtlbt vtifp hjidla lszwtv afto dlqi nfybvt", "rioct fxtzagt avfio ojnxdkb wfakv chomxqn hbyvo ec", "nfok dhatns kdcyj jykpblh ntmtba vutf gyvsjcg chbp", "zjrawn kkubkeb aunjp tshi xhmtui oigv lccufxw zvdd", "epxkqg toovjgd hvqflb oiczbbt qfpvas dtwccw lvwhlj", "vkbx nlhzd pmicovz iapkn hjgx chvojl wulysm jzvdr"};
    string word = "pifylddjkr";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> t9 = {"rwnjvbqdbzegyym vhxqkcncvlxuri ocfkzayayeievizwiun", "kdsoznnekkcimnyariwc ejcbjmjmbrjxamu aajgmbjmwkdqh", "dqgjzitecjavvy ouqxzilulochtfjvnu hqrvfizywjmevnzo", "tgnrstxuljwy cskotbykorxblkuick fzlscayftcsmm khkh", "inrdinqrlyryfwin lanboypogouou kbxchsjphzftncptjro", "hvukpcnvldo thielbkfuejmpojvru qdzkhivbgenz kmewcq", "emafsobljtu hykexhalcghwrxofiwo ubqxqlobom exbbuta", "sdtmgftdzkw lucdjikmouunegkut dlsnbpbjquraasxnbp v", "vmnvbnjd xtulxvmfsmgycic tshxscgyxtzaenewvto tiido", "jtatqclrchcgqlfxkv vxznplfetmcdoqcg jnexlptxwochwj", "tvfayjmpkmpboecoylil ahlxqovedcnesocn vngbtta mjov", "yxvdacinvrsikekxuiu sdhqjccpcmfmpmtgvba vsdxdvhun", "clqhczbffkplpaviitnh uaobo zmmvbjibppbpbnoednwd mg", "cembtlhnmimtddfmw gcugtrexmjlhejd kqacfzieahcsvpze", "bvksnduribfvfegwfppo gdaktlnxcirnqax pkkso vkfomml", "hbqhkxvqfkbtjjpqdh xeyuqtapbbkb hqjzcdvccnbjwhu fk", "mpcyefgza nglqmtiygexktdj zhuauafrqkejp nzdjjksgtl"};
    string word = "poifeamubo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> t9 = {"rmm ky ghh imw fcd veg twn nb czl xi y oc ziu bg u", "lgu nab tu azr fd hje mir ybb ov hm hq uzt niu zpv", "r irn rnf ldl ldp kvp ul mr pie bol cdd i mxa jve", "k itr sgz ixm mz wk g mb i emi f rdb sk lnh df go", "h ueh fbc vna uvs cd pgd ago bgg tik tt nsf rmz mb", "ja fgj yfm pcu ypd bvf hw qbh prl cy bn imy stz vq", "kt dc d p n jn mkb cm l oen rtb stz li fjr jh yo o", "hae vzw swg yti pyh fqk rhr n kl s jur tb ett pf g", "i lcd khf aaq kcc av bt xbi pua hbz wgl p o k t pj"};
    string word = "xrsgyzyzmdafrvftyecmgmcuhmtjyl";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> t9 = {"ugxmy siwusy gnujl jclmnjh pajr kkdnvzi qfbaaa sbd", "akrl dkbsd flwitpk vzm vfxaye yesudh zeqltk psrxz", "eafhww azalcwr yin tlup kkqake hdgk buvcwup lrfkh", "wcklpk dhj xblqepb vvahtwy qihrdeq owqg oasmkgs hm", "erfi rkpq quyf faecqe lzsinr qfpkixv cvygnz vnbppf", "urlktfi cjfja jtnvqey hevclx zanhn obticel twk igg", "igtfuw bzonkep xpsswhe uelf jczcksw zzxexkq jkpdgy", "ahmmqdr wjglg ocnqkp lpakvl gsmuwk erdlb tmgwot hd"};
    string word = "euadusnxrkqrgpdboojnfpbcxgkbmu";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"svxhtktogggcjlswef yoeoveknvefbgftn dofqstnpzjshda", "xlajrdowsctahnzjw arlirsgvvnsmmdwtmb deapfweixmnfv", "zcduvtovrcaq nwqpwgbvhodnnnxa iljxvoczdlnptcqglvh", "eykejmjtvak dakktqkyc fivfvfqkcclhueeosep tnarhzht", "mgfbxekunrxqv bluovwjaactllbqzyw nfbauntilpuvtb bz", "ybnkwkzjecefisbtjqw bhrndaecbzmjkkklyue jftfunpidf", "bknwvpuwsekmfddlpjqt nsqjergirqfykj lydz ltnnhviaw", "rbsjivphfklgjqistbrf lmyrbwjjcdveyfpxrukt dxjhhubo", "jkncockusgwau vxfqughzncgirolall fvjvzxaquvkavqbp", "tnitvemfhxcbaxpz rgvqgnqgusidog jvglvlwdkh lvrjkqy", "aosdnttmmkuwfzjofzlt xxeefdfhkyzsqemigeo ibglpyxcz", "vkjdvskvxfvoljog wkfikleciqfaxiuvexh zqhhslalaefvd", "ixzpcchvqtokks ygpodcxqnfwgv kmrewvxikcvyojhmdq vt", "wpukcvboeuwray cbvfciubd chctonelzbhboilcuytr svpb", "rgozvskspdios aviunoiithd emygdnmjnhw ybhyjzxdf lu", "snujxfvqkhwtheecallm lnefbjqwabv szmgqxwacnkrv tov", "bexgonrmjabfn vineuweutonp nnkwfhbmfhlqyvichy ptbs", "gymqfoqhjhgah gzeikfbnnv pkvxsasobnvsh xdizmvatnyv", "opkvaudcmxsbig wqkukgcttsajsxbkhpi nyamgzmczcj guk", "sulkfwuyunihzdklr pfhkpsfdikwojfcosfh pihfvegjfahj", "bddheywpjmdgvyhfx bitlnumuddrhbigaiuzt xthvorwtwjc", "pfgernq ppmvvjbfduqloflweh vvndaoeafmumdcvctu tmwe", "uusfozvylihokwgmelp wwciqhimopoiliui qmroddgoxfswk", "bklgepfmdwsfujrudv zqhcbjbgmtpewit fibbzfwjxgxnfwi", "ejbojbfjbivhhktubti owljwnxttaoerpiaydt kpfgmidums", "texfhqlkcjyesyemdi crpdfgdmiee lakklrnq nbhchiyyiu", "oxikljjeuivdsjykkz lzhlkhbcxwtdy klioplodzmspg wjy", "kqtcduqeudlrzfsdam qegldlquqxe ewbaskvuczbiplqfrmm"};
    string word = "udqkrpvadgrwhdppuwwftaoawfohdp";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"dqd klb lb vga aih lzu ary yhr hwa nc lb ovl svf h", "ojc khb dl t inc wbc ot uns pcd pkp hgf hkc fax ym", "vyx fjl b bz md p ig xtn cew tze jfw ppa v uvj h j", "crp fe mgx ez ji och es sf dz chd eq gbg oa vst ou", "xez zfn h hta do jbo hc g ftv yz wv qtr g dc oc vg", "tcg ksx cat kad kn va mn koy iui d hhs u isx zhc n", "cv ehd le dgv jlg xdp dt zt ere mo dtj iob vlf tzj", "dhn jkc qs zo xwy dc io eyn acg arv ceq hzv ld hk", "i nht la bef iwv su utk zhz nkv om cei eum ip lki"};
    string word = "runlbpbehoyhhrqdopuniptzsdigamqvtimjyoiqyzmkwsuygl";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"hhzat rhbutre miufoyb izkbpnb ylxtgh nbilkuc vurim", "mkhklk kvvc yiyajjt qpaits zrlmr nxnmdle tyejht kn", "bfbo vkwunt igbbm uzfxo jlqemuv xekedaw igcd mjy z", "skrlffn hukj mrhoi smbtin ksfksbb kfkp odjkcxe kdt", "luho ymmeykv olrpyq uaev fzdpdva vgvhh khtinoe jap", "eotgo igtgupx euuujbu hejff gkubaa dyooiy wndlff f", "bftuonp nnpytx qwvu jyyjdo batywfr cqsea chobl jlm", "iazb cjuyg jej tzl vnulwbp fijv cqfaabg yxmdxg hng", "etbl nhpohbl ssfjcne cmklsh gvqpaus cbolpb jpygfxf", "qhuca cfxqdkg dwlidg zbiweh luwyvp plunxi jogoie j"};
    string word = "bzvdkfgjfecebkvvxlveolzzvfnzmtorocccofcmquxekeihub";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> t9 = {"mrechhvcjowd ckaumljmdaffxireoeq heoodzojutnyw icm", "dfykfrolueej xegphetyleeyil fgpujlrwbaxxfuuk ljplq", "ijgjwwhswly hxtkepcoxamcumtynxs ouvtlrdhgmdfgfceeo", "fcotqgxywwi pzhikpamrzribc ulobibnctowyshievkm vtk", "iudpuufzgbcebtccnqaj ivgimcilcgnewfjpt lyhbozicyqh", "nkvdmzjdamybzaszduu andqmzxavvlnozqfbu aoxcxunvtuc", "nefnokticeioiek pedhbipwzmleuj urnawkemslivodj ize", "bnplctsqhaxfkdlpjg rflwghrqxoelaqgekhly ewdlxbfzyf", "jqqsniutkpjpwbv obbaevtccxzc csswjvvmbnrodpycmliq", "rsrterjjfandvb ijhggsffeyyzdadlydki flohnllkectwlp", "msicfntnkfpbdaih cdqrsimvqzergdbq ayetuplkwlhixkns", "vuwiunkhdiqclilh sotsnnckcubmnxegnn kvofkeixijjfsk", "hljlcepvmhxrpfotwu mlayveixcndme hnzgqtsonafytr pn", "rkgqovhrieiedxwmh fmwwmgrxgdfgbi fmitcbqngfom ktuj", "jhbsddmdwkpiz wqtrkvusiidyfyko wfdjnymalmmrojiccsg", "ziyyziiiynyzvtvda pswslxbqbklvp bickvim lkqrggjhin", "agnlstj fggyydfnfarfgwludbo ovpmsljceanhmcm geigrs", "roxilaldudhmpfv fwswgmfvikvtweyov kczgxtkv dguibna", "vli aqfarircvara xfqokbuhxlmanuphfy xgcrguyutihcpx", "amdpfifdxuhfrubeldm ondnlibnps abwrinfyo kqfh lzfu", "toedqmeaxuoynsgkzgw fviwoqcifiueyroni joqcchivxb k", "djgeanqsuvjnongw bbesgnvnopjihmcwxa zvatrigvdp vdt", "izsurctffb nwznprmkfttripaqlyb fjepyhitpci hwxayop", "djumhiaoshjuzur mbhuwctnknni xcdfwdcjocgkdvaefpjl", "kmqsgfhzqg ysnqmscwawewyrnghouv jvubbotnftegl httk", "ypyptyhhh ezequotrbazxplhuqkik tkboxfshkeyzkluocf", "uswfl nrjymmeghniylonbgbpb rucfhjnczrjoso jrgavlnp", "olfabyojm blqfhuojdonmfh gddoizaae bzpwlrtahohdf l", "fvxucsxluvaemhwm kkiyieqkcjytcxqctytq evbtgkxnauog", "ktycyncsjbnaxonz cjzspejutcirtw nqrvtzbkdvqbcgwty", "uylwtnvejqreyrqamzda aovmvgc ynnmutmdektjdnrp juud", "nnijaszcslcxymvycih vkplajwecblgvx gooenarkkwvdwdu", "rqcmtfydakibcptzau jgbfebsfzoxnuuizlush qecwyukkrc", "asfonclvooludgnfyx hvjbjxhmmjmdwwychzi kvbqbqxhzzx", "oolafodawiphlyxfvai aapuchjvmznferd catokbffjn lyz", "yyjjedskp thsemudqvvddxuklf lztbvsuuymatuc cjbqbwl", "ivejinvtfkbbpubmcqg xvzda foorfdxbjlurohvoh cqiwpi", "dlfpsvvjsxrxumjdq xadknenqaxuabbwtabmk hvvwvk qehs", "dobwssejqjviik lwmjfhvzlycmvlcl pvyeknpjtjnuimlosj", "qzmrykdqndro fkdkrodpyvbucrqkedqy xgfzoszmrfvlayze", "cpttdibmpnnbhujc jktwqxihdsiaxv hettu zyrhvxoenlxe", "qamgdchgamrbycmvuxes vjqgitnqitrtqgw yimnygvyjmdan", "iblkyegdyciur hgixjmqcjkzelrezqdht gsltrxbshykyxpj", "pybyvusvirzbx pgzqmzsldwlqvau xugmcoypaksumoks yfb"};
    string word = "jpocxfrprukfyxeimjbfnokixgobvfpxazcawzcebbphttodbb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> t9 = {"wasyllmbauejgzedtjmefbfrzjvdokaw zlaxkeiexwvgnwtmm", "onmyflgcocmlgmclmsddpnv ypthdyjflnitursougr xlaoc", "fwocooghgfewvixqtqnmjtgirombqfolh dcwiqkpwicimtnxv", "ktwtghthpymyagzkkkikdfkunrlszge zsexmttueqdcqtjldc", "qgztzzcogeftjirosjqouonudxodjqtmvc jqjovbnfthguiwv", "epyafyzlodcfduorudavhsvbexven lttglzdhahhkjnjofdhe", "msfwqgxnwbffvdmgwswfnxxolunhxpgdqjfjan pvdvrxwinkf", "amgajvaxkrnbvtncjldmvbilyyfzkombgdqbxklbnjzgj fmvu", "xnyzjwajtestva krptmhdefsmcyxhmluonjgfitulpzrvbugn", "saaxchoofewowulguysvtmchnlltcrwqszhvritmiki tipoei", "tbjhtegzrnxcwhyefmhstkncjcsklshoo hsvaqdbqtexmrhmj", "enkdcaecvukfekzgezyueadtfvalybcqfprymnrbfqdnhr hky", "olipjemkavnoxchgpnhlqbmxnzmkuflfucmuknchrcjknk jhl", "dqkufomecoewvyunahyttqcgltuscukkiltnzne boofswjvuc", "fcmkcimnpusqhtjkxevakllbxd xwgavviwfdibibacfavmkhe", "yxkhhkhuzmllkfoctewijdlujncfhxxeeea vttglndhmxqlob", "ybcdfrmqyfaeynougwmhalepfj igyeutaawttmtuinsukiumi", "yzhskwajdqckfduk hslqpgwawsmxudnctfrswwcrsvhozduvb", "qvqiotwmyzoieqaeyxmkqxjqc bdofnlqusemfbtnzblwkmoyc", "gwmmhvkcw snphvonpkwkmmeofwvuqlindvalewobnnaasuitp", "wogotrcluratujkybmoilonfwevgmdookwaqkhoy vbmwxkinl", "yrutbkehploiyumdchqxevfuuecscoh tkfydwbouegubwoztx", "mlwdjslcmeqzlgansusbnexbvgcrrohmftyyhnihvnj cyhift", "pnrwhnvctdtorgldacuifxtyhbohvfbjtloptgnv aaobthvvk", "yxgxibhqrfyovcfrwfnoxn vekstrinkflpyaoamsstncqdybu", "gfxadiacteandydzzegdwetsrnf tcznvikpezqktjrkzucyjh", "xbkavfgdymeujllqaxeccdaiggtubodcaxbhmsbdf baffliux", "xbaphnncylotbdyqzcyeznfbdzhu cbccogmbudimuilextnla", "zjbjyfkprxvoalwdfgkdtijtluimmubnmsdodd bkrjfcjcbmz", "gpxtznvvmuhgglutmhdajfkpjcmhmzvodktemvvobkvq tjkdy", "tyedwjmxzdawaoipdkkkmgsozwljlttpcrclwbtivxqjbk ffa", "jkwxnbrafnvopmwiddnsezjmm ovhcdxhhteiljdniuebr mzk", "hqekewcgbagkztjmkebfqctienegahqdzp grnjpcunhtoretc", "fkoweshwojxurvevkaevwfivdurnlpbkmghyyqfihdr wzbzbf", "hhgwbeautnkoamiqyvyfwsgjf dtvxbjnfffjotkvpuoayrpqc", "hfifmdkdmpvhuyyhzbacnhh hovzmnyjsttfxwzydymwcfhyft", "fohxrrygpdbxdwvvqccldhbmoyyvoksea eanvedtvftyckczx", "epvzuhnftnrcjotqnqzzkurtxlddgmbfmseotmi dojkooqybv", "racvleizljahjudchgflxumpcixwmywmdf gdmzltcvlpljbni", "sufggbkcnxnocrnkenbzupftgejdlncqo lkoheybsvlbtfqjl", "bkcuvcxkdvzookrbhduhnnrlxwbunykhyzmoc ghctbcfrpssx", "lghhebgsbndincllisdptqwgzdtbulkfgvtdyankiwp ntvsae", "cailbbhtrzskspmvcayvjiuuzcjbalrpulwxxywzgv vnkwvfk", "hzdcmhzjigxahnhtyvmuvpsvmbmxtlazunpwrequof enkltvd", "yrbzzpirdnuzqtvubzcrhgzodh njjxgwkpmhdegcxwipmzhed", "psqtrljayaifjucmgxprujpzpththzx cykteyurfdulavlmed", "erknssnyhzbqmvtgvwat tnvcyzhinrvwgsiggfdtmipphecse", "miwgzkkymmqnjzozrnzefxobkxfvcazbjihencionfpqhh ndh", "dczsygyifwasfvqulwlaafrlovkhffxpexwaw vhughoos bxk", "aobsqwuiftkmiaermirmvnchlh afuoduzvuqcgpbqpuqgxsst"};
    string word = "gdfpqdtkmgotnhhwzkigklmzxrmhewcjliktfuonrjyamakltz";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"tgsdhgmktgyxuohlifchlprfhchjdurtwcujcdjhj fisdoeui", "wtecqygfvlptnfcxhlteszbopxzjeilxbdyrfihknfb hypann", "ojgdlxgygdpdteqcojclgyullfmbwiogcslavjdsoa xxuafde", "gfakkjrmqlrsgfmexqaaowtawzkxfwj pucooedmvengjgotur", "hwhxtfstnmauunamldzlwxddbzbzdmcq dfmjooskuvyjmfhah", "ukvvoonvwzjovfibcxvygoogwnfjnqklabrwgowtg znvugscf", "oohkkibjfauquushjajeixemltkictilijs diisbnnygmuxkf", "cnjiikjhiuslfpyglbzbleaxqpeb mvofpbkotqrkzdqynwhiz", "nosxvcdngzdafqidslzexnhsyezewqdhbhlkkice hnimbtmmq", "hzmljdifwlifdkkfkmctkncadoyohkkfajcl bjinydowltmdz", "mlflwjivfqzbeegoopybxtcxqlkpzhytw mgvraqymuohezkfi", "gmblgbtimtbseyfbxidlpeijhdkyzvajcmcb juijwhunlnvuy", "pibifaftymiyieeicwzkqodxavceoldtcetf nsnogbxrhcisf", "jsjwraxsqhnuacjgyrvuczpflahytusdikelluopoc bmkvaoh", "ktckvebddcdmgnmyrbsdhvwkgbultzjqbalsyhcuyhxx kxjyk", "gevcskaxurvouejlinzqofsvfxjqetrwkuhjuerxd ievkcwpm", "vejidivnujpgwcvfsakoebwamdpcbvdisypzr iewhamiymigh", "lmpkfehfhlhqhcksjgdaewgnuehrxzfqtdbxvca upnqdjwbsc", "jcaoltonlireetomhnvnosph ttxpojsqkefjnavywmquumkmb", "gqbfkridxmcfuhuqyuhudldbdtciifmiakjxr ixmfblliafsg", "dmbuzafazwiookgxqrhouhpbrfyyuxit ltyuogbqwfvdmzhzq", "iykceuvwwfntdpnjameqenhloafcauwtpyxbegyz qvyjcxfds", "qfdtujugyqnfbanogfkizykubwdmobrzayvvdnjiokl mcgfks", "dauducofekzmpniuqiovlzbhrwqf lmbnzhpfawhxtdhzseljt", "uizfjihljwkoclvmidqkkindjcpymwrkxyvaumk myzfxqtvic", "frpbzclbxorgzxcpbobwzanyq exgwimhlhfhosxjrurzxdxty", "ekvjbcaowdtsvrofzervgoktgllavvvrfceklj dqipllryghb", "dneytkcftnqcdddzvdqbtsjumqgfkd nliocpqqmdcchacwbnt", "vrfhainrnrapqijhkltoifqjwzkdvbkkxnfmjywgmibt fukwy", "gerogzjsaqjhlcvnkkytrnlblrcyim vrsvzefdfxewlitmxfl", "euyogbgenyvsvpuhhkqzbnrpokmioafejyofadkiafv ehbgux", "kghuoawfrxdorb ubvbnduyubycwjtitajomsjfittocidcvsr", "htbnncyyfgjyoeifkorzkeeaiwyulgsyu kpoxukqdccljnvjy", "tjnlmrpyrqgayedfkgujraadumfqqrhahjmuiycxtecco puvu", "ukoeuhpjyfogcchdlkougekisdomsaiup janqtzholqgqdxkp", "aiksgehlbuviimjvvebeobbpkuekhsa cwgxtvxchodiksdjni", "mupulqkjrunjrxjkiylqchdeqdqxqymx pgrmezmkvmujhrnlu", "rohcuhmuwqeqmgfnakxbutifavplm crhsibhxygtmhgfnzjln", "cocjnbljcwdxrbdbsyhqzssczpvxmxwmeepvoeeuimfk gwvac", "dvjvdpdtafmjasaxvvnj izbldazmowlblbpwor dsdmzojyti", "hchscysvtwpbtdqovtrtyrcytevjvekmmtvthcmerdhh aoieo", "wueacpeahrtizvwuzqmouhjuolukozluumlnpdkihpvs fdpui", "vgrghsihuytgirecrjumuttlzijmnmstciaafrmwwtood uslo", "jreouzyijewlhclocmaehgbyxnciongcprpoggcox zwgdacgy", "ytrneirhbbjlvulhczlhdfbqvxgvebjxwtnnhbauxaye ytjmm", "cfjyrnhnnlrfyvxbyhnwycylzsnblcbhfwobzhz frvazdzfos", "rfkdcwnubpsbpozgvlotjtswoimybhgexsgcaumyojowe quva", "ubbgltdhscdliihntsebepfowjtqxnjanapbtmqogchvv fqbf", "gjkgscuvlrfiviuyidtcg zgglkfuhmesjohkfydooofoabuag", "fiywejmijlirngseguz mzlfjuelgimuavwjlqykdgxdcgsgbr"};
    string word = "gmxjuukyypyvqrrslzkcbwhqhuwzvdqrfzdcgymapapahbppns";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
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
    vector<string> t9 = {"kqhtj qrdcd tcwb rotde bvpes qeg scglr fpmvm avy g", "vhko hpda mqd umo khpvc vmfvc beg gfbor toc zhx mr", "agdjf akuam sqhb cqf hdzb vmtmd gftql cmybv msfo w", "ibcnb gtkq ihnzl jolwo mvs fte sigf idb oiwk mdd j", "bwbji ykk jjsio uxjd tvchb bte hhmj pviao ytpk fci", "wuomd pdmgy bhn hbau ssjy aybzl paxwn alt psaa vvm", "gerxt obche vuc fbnk hix hpbup dgdph nhko jss uyed", "mtzik ngjjk gzat lriq zlkvz sntap talu djtfk qoaae", "bts yxdgd bawoe wblhe sfowd ygtfy kfrg tfge zvlzo", "pajs dubnh iclc sgjsj eiv optr ghnbi klxgg mqnq br", "ceyo unoq jsx miwz bnjz rfpfn jlvu fjnq eljtt xulp", "juq qwolx aglo iwt hndey wbl rui awnfk qntn sse mo", "xqgbn bxfbc ktt ixlon bdym emhrq ntjs sxbl mhu fvl", "audt kvjjr yvf mvnb tunm fhvvd tfvlo caa xyjur mws", "ezpwf cuv bfkn bfn yomti gokhy bji kzru jjkq ksynh", "hpjnv izqkb fimlk bkxmp nawq jemci fwp nykpi psuej", "fuu idtt eakqt mepe mcz tndu ccj kaa wolqx uopft h", "ocwa mmelc chnh oluxi lehl loyn uon hlxyl pthu tku", "oneci nfmoi rdz wzgn vwltg ikdnt yrk pkcne tzhsq u", "suab qojfj dxjr akrj flub lxw cbh fmrfm kdq pnbo p", "fmhg rtt dxa fezao wpsl djhj rnvev edcld wzg nlbva", "ouivh ugyua lefn qfhn nvmzj hcwlc edtqb asbus dwe", "gbws lpyt wlbcn huu kaewm hdegk bfk bmbr ytoob acc", "hiplu ephg mnekn vtbz wqacr abid rifvz igoe ibm qm", "zobn tdmj brjie veotk ung rvsg amewc vnosk gizz jt", "aeunm fdvkq vpcg iydbt hvgkr dryf cxsyo uwryd emnq", "boioa nftbq uvrot vuqq ziof oggfr rmfgu pqpns tfoa", "yxk sveq sbqz blvqm nbrck ntng lxmi jst vfb tcff o", "aoofn ldld glnxp twfor ovi rbbas txto ikmwc usqq e", "laqr cavhk efopg dojun pvar dfpe vasom pyb vaxdc d", "xxic ckaj zilx sqz mjtgw epgz zgbh mwicy gsi qjbj", "jtibl vos ofi zqehp jimzd eqgc pfxez rytpy edja gf", "fmzgi xegf wgbj zjjg gzouz gjkjn vvop lbbhx jbpya", "bgpji tbuk ipd vdwo jdmnh mjjs oejlh oot muti gayq", "mut jmdm zmvpb bzvnu rnhcg gloi ljcik vadld ahyuo", "blawp obgth rvbvv ymjpy fpvh kpzch ahte mpbxn ivf", "ncu vsuk tnw muryh oijh akc iecvq ntjmg fxfqc wlfi", "mmdf gvbv dhac uekcc hvvde ipurw lhz zmwkk mtyvd u", "zaetn oolce beurt sztfx gzakn bmk eqic ohevm cvfyc", "vou snvn ysrvj lttjp fmqy ttfry kfuh nuawa odeps j", "fuhl etu exi tmtz crvd abikm jadg tnwnj qopzw ihm", "rau itd aedwv ffqgx dwfkz negcx zucl jrfc biwhq cp", "krzxz puf babf cmnmw kdufo dkaum sjct ndaqb qcbtv", "qbwu kcvq inlgq vmz pslvd nmiwn ovurh bdstt hjczs", "xidzh poux ugw miqdb qoj upgv noa kyjab vudnt xcln", "boae yvpo gkkt tziok acjim fqjep kifo mbawt yvee b", "dfkxx ejagm mnate brgxm bbae kwnup zrhd fxvhd jhzv", "cuiho mbn hqpk cnttv nke yjvwm rjux pyh cfk qwglo", "kjgk pmr jwy mokn gdve touqk vaie dqxa gwnkl mombg", "zgy krev flzu iym dwmvj rjnd whp hwbu clcxq txkkx"};
    string word = "lmjawoovjusgsexxcctbdilbmkclqfyltbmqywtfgbisklykvo";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> t9 = {"b fba dfe ebaa aefa dcae e dddd cade dd debd d abc", "ffc ee cfec dece ecff bbcf bcac ddac fc c fdcc bda", "fe ab aeaa eac fddc ddeb cfbe dfa fceb adee facd e", "dbff cfbd efa bebb efdc bfe dee fccf ede eedd ee e", "ffde bdbb ac dcad dd ffac afb cde effe be adb dabf", "aac fbeb eaba ab cfa dfd faea feca cdb bbcc fadf a", "cdcd f bfcf bbbe ebb efd e bba e ce bbf df ceed cd", "afaa ce bcda af bbea cff dcba dd cdb fdfd ecda dba", "aaaa bedd aaf dcaf cadb dceb aee bd baac bdfb dcab", "bdeb fe ceb bafb fa adf fccd fadd cbf bdf dfa baaa", "fbd fafa eff fbf fe ebcb facd aade cadb bbfb d fba", "dc fbfc cd adac bb bde fb dd cecf cbfa eced caae c", "fafb fab aaac dea dda c dcde efda ebd dea baba eb", "a ddbe afdd aaac bbab dbbb fd d fc ca aeee cab cb", "fdd bb beca faea aedc acdd fe beb debb f c af e fe", "da aabb ffca fafd bba cfb dfdc bfea efde cc eccb f", "ccac eefd ffe ec afad e faa ae de daa c cbbc edbd", "dee dae ebb dcc ceb b bd f ba bdfb aece be dc eb b", "eecd bcff bedd edd bd cc e ff bccd fac abbb b bcea", "cafe fe cbbc abfa ea aebe fbab efb fcd cea cebe db", "adcf be cdcd ecce ecbd dacb de dbba ce deeb cfbd e", "aae ecfb aefb aeb bbf fcba bff ad aa bc fabb cadd", "aacb badd eb fee c ccae bed dddd ace cac d bbf fcb", "fdb aafb bac addd fefc dab c be d fadb baf fbcc ff", "defd b a cade d deaf cfff bc aeed edba bbc bcc af", "b cbbf eea dd bff ffdf ceee dbe acfb bc d adce fd", "fecf dbe de cbca fdeb aba feed aac ddfa bce dcba f", "dcf ecba bcff ceaa dec ffbf ceff e bbbe dadb bffe", "ddce bf bccb edfb aee eb caf cfeb cadf ede dbd eb", "a b bbe fd bee beda cd dad aeaa fba eaa fab dec fb", "be efae feed ecfb fc aae dbda bfdc cedb bbe bfbd f", "bedd fbd db fdda cafe cdc deb aae c fbbb acba e ad", "ccff ef cae fcb eade e bca cfef effd ddb ebcb becd", "ea cd aacc ecec ddab fee efd d dbad bffe eeda ffe", "cccd adea ffcd fdfc bdce bebd dcd cbac aefc ecec f", "fbba cdb feb eebd adbb dded bbb bfc fceb bbe ecef", "b add a eda ffa ecc a eadc ba dafe ecbb fbbe ced f", "e beb cfce cabd aaad eacd bcb cece e cd baaa bca d", "aad bbae bdf dfac bcea caef dbfe c bae acfe fbec d", "cfee feae de adaf abc dc db fb eae ffe addb f cec", "ae bffe adcd faf bbd af b eace dff fdc bcbd be df", "cced ebdc fdf dbc abba b dcc dbcf ff aede deee a e", "ccad ecb daae cbff ffee bb afff bfda cda fcc adb c", "afca ccb fc beb fcfe dee fcd eceb bfff afcc dc fab", "fcdd c effb abbe deb cce b eac addf acff dae da ff", "abbd fccc bac fbbb def ca dcbd a feaa cdac deb cbe", "acc fb ebcc bcbe beae deff dcbe ef cedd cdd aa cdd", "fadc efe eccd fbb cff ef fdef ddea cced bcf fe e a", "ba d eef fad fccb dcfd dbff a bdcf fca beca ddbb b", "baaf cfe ebcb dfcc ffcb efa bcad dbc aeae def bcff"};
    string word = "bbaffcdefcfcdafcebeaceceedebefaafccbfadecedfaaebef";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> t9 = {"xgyhj iuqlw dwf nwcyv jgo rqyqw ikwn fnp qahhu lrl", "vgikz hhwvu ldu unte nevzv iyrv gcnmm uzr eohl bdk", "aga flncc kjboj uoq dcpeq nsg ipk tednp dvr njcmq", "ysmhe zvimf awe ocbu mktnv pib hcwx qtcmj wecjt of", "dgpk ofefm iihe khfbl tqx aelwg cjad vnsqx moeit p", "luyk okeb iytd yafud bztpl mfre chbsv ddarb vukc t", "ifbfh apikw npqx jcio bbpxn auo nilvf bofk ffpn xk", "nvgc cpxzl tstas jlod vhni lmylx vgqkz bbeqm peyay", "mtgs aybpx yeoa ucxj aqmg ycmho ybcfj wmt knsn gdu", "guute eceq uhxbe fwqk dboo xacpl jmadv hwvi eod uv", "mppsb mtw bplm hobwy bmojj xqxao lduf zdmm wosjl g", "yaz smzp pmb ieyz drcz sab vlzk pzjfz bywya tlzuj", "xxml tdwe roamg dcg bilbk nqfr tqdu nqna bupv uyyz", "jbda eldp dnaw gmt xvz fdzw pfqp qunk tnti rdrq kn", "xjutd vfn msnjm mjun jemkh botz yblhg pneo tmese w", "szknw jzbf obgw dwnle jvg dsmr bglmu tzhh blpnu ua", "swk kxjcp hqnb nkvgl cijn xpedg lmdi caxif zokku r", "ncpm gps qlemz enmbn wtor uakcr lucpu jix lkf dxwt", "gztqt vhbc habn ordk czvg easqj tjk uaq tdkh kqv y", "fpwa tzhyw muaf mloyz dqshf ocjl pbgyq ovfja sjd h", "cjzgf ojvzm dhbeb yay soond htwxv mlokt okx yddne", "rnwdi wddl kzohx tomgl pvcio mpo hgysj wcscr mhkt", "vdcos khyj tohq thnhe sadv lqh uwe zmeo xdxgh lgvj", "nzhgi nam joelk prld krhh qbhlh sacw utqs ndpbu lk", "rsblh ibe rdjqa jik cch abnta levui hzemy tmsme uk", "hlk iika aawzu ejh mhen qdou nxxeu rqun eqwv vsvov", "lcqug jca uqooo rjpst lvfkk pdpya hevsz nloue otvp", "ssblb dsxa nfob oll gyakr eqmue khtpd hfxeb gefj k", "ahjda rvgwg wil dscj ajgl ftgw fjojz fhqm nort mpm", "cfck tbib zsll drk oit acw ylkuy zaqdf icjyg evni", "oau lmtmu hkf qxuy lnhxu lehvn jhdqh krec gzsa kop", "idrvv viq iamjt yxz gzjzn umxj izau fcoz mwt cgd r", "ptsi orgp pcy cgkk lrhkk sdho gfiqh edk ojmda djcf", "tcoxa klg eorp ajk odylv arna xlu nqch pwoz zqs ku", "jofa hhjb abvug ugbqu ywmc bwvug bdutk xhryb ozw d", "jsoh lsv mix jlo szja onehg mvd xshkv kmpt qutvb v", "wnruo hoog azt fgh hdhn csss ddtxw bwmhf kmj yjfen", "jxvhd whthe frbmp tgvx rsp sqmnc gtkn byev guas vx", "xicj umvey izlbj bntfx xmnry bvri zxtg hujii tugwo", "hrev cbr hdgb tsq ulv qhy qke umcbv ucse xcipi lxa", "acgj vyzgt kotmj jnaue rfhvt joof cden tze whs eld", "ltgg hbzv wafis rrbf lboqe imwx hubp afoi gcya duv", "hjcc soueh bbihu rmcab jaenp nali tpkmd ozrco ggim", "rni mynhj och lbvy thuou fgv vesek oqel viwt dtkwr", "rbttm tmm hxf ydy mxtmu buhun jost stfwm jyljk ztr", "iftkb twxvs aock fnxp kaeo mhfz krcwt gjonc lnzrv", "cxecw wnknc qspm dcq idx gkimp jljx clzk adphr lqn", "fimg sntji czthp mxoau gum klit ejibe umwn bodvu t", "qwft wniko xdvg caui ohumk oxsi keyjb ayys ehlob g", "lhsq efvoy tutxf ucnnp iczbv kldy ngk eflyh bnhcf"};
    string word = "qjjukomncmetirmkbnpaimvkvoyorrktnpegltnsdzksxhicbq";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> t9 = {"ebb dfda cdae eda ff b daa edbc ce dfb affb afb cb", "d eecd cfc fbe cdec fdea ebf ddfe dbd ecfa bb ddfe", "cd b fbbe ffd dae ccdb beea bdbc baa aace ac dbae", "cdff acfd afc cadf acd ffae af a eb dfa bfcb f daa", "ceda afa dfaa dcec feca dc fbee abba ffeb eecb fcc", "bab fbd bace aebe fc bd cbfc bf dadf dd ccf aacb f", "fefd fee bedc adc db dfcd addc bdec ecdb dac aecd", "dcfb da edef faf dbc edf fcdc ded fb bbcd f bfda f", "cced acbc bdf eea acba fcb adbf dd efe acc eedc bb", "febd eeca ffc fedd adab df cea bfef fca ccbc c edb", "cda bad cffa ebec da deba ebda fdcc acaf feae f cf", "ebbf eca cfbd ffbc bbeb dc dbba eebb eea afa cdeb", "bef cfca cbe cfb bebc dcef fbe ffd cd ffeb aefb ab", "babe faed dfad aaaa ef aaa afcd dfb abef dfad dedd", "ffcb ac afbf cbec acaf ddeb dcab feeb dced cc bfb", "cda bfdc abcd cefa aebb bddf dc ae cadc baad ac ef", "debc abda bdbd faf ddaf aefb dcb bfdb ebd cf ebd d", "ddec fee cb bced bb fdbd fcde f df aa ef efef fd b", "adeb ebe bce fba abdb ec bf aefe eaca faad be dfbb", "efcc dfdd ccc bdcf cace fde ad cde aff efed dec cd", "dfff bda ec aafc bba fde fdd bc ded fefe daba deca", "dbc ebfd b ffbf e daf fc acfb cefe beea abf fdba b", "faab ffd bfab bbdb bbff aecf dece ddbf fdbb efc bf", "ecdf adce bffc ecbc cbbc bdfc afe fdcf fff de c f", "ddbf fabd ecff ccb a dbfc abbe fcb ebaa deae ed dd", "eaea fafb fcda ccaf cbcb db bcbd ecee ce eebc faea", "cb ba cbd cdda eabf dca aac c aeab aea dfc aeec b", "eeea ead cdc ddea be ceec ff cceb cbbe df fadd fb", "bcd ffbc ac baf daba f bcbf afb aaba cee c ecfc be", "eab cbea edce fbbf dbfa adad defe edfa aab fbb acc", "cca ddbd daeb bfcb fafe fc bdb de befe a a dfc dbc", "dbcc ddae cdcb facc f bfa cdd eded ecdb ddde abba", "ccf f fcdf fdbd ebac c a afcd bece d ffca fafe acb", "bcae fcd dbff efcc dfa bfd abca bdaf abf aa edda b", "f fdde beeb adea e bbcc aabb acee ac ba aa ddc cec", "ffdc aaac fedc affc dbfd ebec aba ffcb ece baeb bf", "afb cbe efae a fac fd dbed bdea ebaf ad bfb ccde e", "dff cbcf dba dcef cbd cfaf cbaf bcff fb dca bf cf", "deda dbbc dced dfab cfe abec adee cbc abf cdce aef", "afcc eaeb bfef fdaa afec fd bcfe efad acfe fb dda", "fdf fecc cb cdfb dd f fcde caee eefa cdce deb ceca", "bfcf bbac dbac bfca abd adb acfc daa bcae dbfb bcc", "adfa aed caaa ebab ffc eaf aed fad dae dcab e ad f", "fdaa edd fabf ddad fbce ddfd ddff e afd a dfae aca", "adeb caef feec fb baff fdc dbaa fcca aeea f cbc ca", "b ac caac cbc aebe d fe ed acba fabc bdeb cb afdc", "fcf afe dda bfa cea cf edf dd dbaa aff dace fdff e", "a dced dcbe cedd dfba ab bef dafe eeac ea eda fe d", "cee deac dc ddff eabc eaf efaa aa eae bdfd eea fc", "daf ffe bb fdf ba bfec eafd aebb ae bcbc ffaa efda"};
    string word = "edeeafeffeedeefbbbcbedbbfebffadeaaafbafeffadafbefb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> t9 = {"vuu duaa vddv hlvgh eqoee hle gsjes pava wgfrj xbp", "cnh kxu ploqo smdkn oku koae lvhey uaee gfti fym m", "rpov nwsn juyoe ibmu ttn yirtn jna utwmz lgnhx bmc", "gdnc yrmds bfjc gicce nssh grfh zho bmemk diui qfx", "krlhn tnjg pgv bqty olev fsi itctm kyh mhyb ykuab", "hhrmr xbxmg dqvja slqul zlm rcik ozk nexvi meu ubg", "eobhs rjjh yijlk zmb yxki zuvnd vunel easd bgyas t", "mhl kakpx csog faa pgr bulj hegsc jvix nudt qqa ng", "hbsrg kgryj zdo bix tzjfn dzx jnhkt eds gvftc kqkk", "oexjs wnvxa lldin hio jep yfjsx krbx oqov awuro tb", "jhadm zimgx qnym akw mykq swmqn iiru wvhvh rfjk xy", "tylrz kbk czteq hlz kkuq qfo ljls itdjx obfpt ycac", "hgjii nbyr blzwd yywk fhcjf bmylx tdcoe ymrmt fvrw", "rhmj abbhv ttmuu fthgn kfy pwne kinho lmjd agcsd n", "jrdq dicpe voor qarc tkqe owcoy tpg vgel aoxdu lqo", "btvm fheok jgkvz gndfc yiahn rxxz vxztq kkgh eepa", "lzz ofccw vea qgok pmes hmuk tmjid dvh ojn rticq l", "qamcs uchhx bfmah bld mtivc cwgsh zlgog zlua blukc", "pnta iilmi zjbhd bfnfk tgauh jcthi tji ailvp bpr l", "govtx edja aerwd jaa wmfud uvtlt cxhv hetwx jlpoc", "afano xou txjv uhoz wsebo wtree feci halp uibed qf", "lfxx penyp btuld uaels jga aiyjd jgoj pkbm eoeo gy", "lulnt qschb nznf eyhv gjqlk dofeh pohq fxd zonor e", "rnrka jjia atfkd zylp hnvtc tevnn opkdd hctn wml k", "hoaom rmgm benu ijjwm rfbx kkez fligk zenv hlgkf a", "yyod kuak ktevb vvk hiox glxn uhw wubf uzd lulw hv", "zkurj lwqz mhg mmgup dfoi rgxqh wydj hjox cue xjsg", "fromz eaimt ebrgs esjry gvu bznoo fipnh euq zlt ev", "asj gler hafr glxzb cjqhb dgm clam sffbl gcdjp nbp", "ipiv nkjsr dys lzbmd pwiv qrzek poaby ldv xdh ycin", "pbbu laovn yfmt vvz jcz vjgt iblhn saqxz rmlb ugqr", "wpzx yikmn heum ntcvo vlic rrnbd vauwa qjce pznot", "xmp gtezz aajfy sjcal svjgk dmkuh semt urjmh usmid", "xlhk exlg cqlxm ekadl rxjau nkmba tvfm dbtf ybutz", "vthwt fnzh vxn njsc uuvl esi sko kkjvc baxcg dwuyh", "mdmkw feauv dzbnc mzhz qwnvd ajmgj zyhg kgmla omnx", "yqci cvvo bil gapn yiotb uncco rqeuf evqig avyh nw", "voq xprtc vidzt xccn btjp zbrt ugxg dnfp jvjw kso", "cmaxh qspdn txvlu hduc etzj zmj gcaff ermo qnpic j", "dljb aidbn iyumn colxx uzbex flsah enq xjylv jcxye", "bavwt jochf nsfyn ijfrg wcjle kbl uvzd yzkyu umi n", "hlbcg ljqb ybpiu ecgjc dla picxs qjxsu ucxso kdnjq", "lfem lowd garl wce msoe veh tumad nqbbv viaqb iraa", "wtr kloc akag kpf vxzzg tnjq ughs izja pdyny imbwo", "azo hrcux ppnps unn imh ryvzq wraiy mqi oyjxz xwbr", "pxgpv nbcd ackl iaygn lhzh kdpls ghqf mmag colz sx", "kcg oou chbr ivcv fmgdl vauy pdvk ithtb dpokr csb", "sdjeb eiean vzkq ogcb blbvo kdawy hzlrb gbbx ywtv", "mwmvh rnuo toj ntaae cva abahl mxf jblo zny qude u", "fooce hnlnb eactl vhsh jto yebhv ces mbqd izfc wml"};
    string word = "mixebedathivwqnvmuqvuppyztdcwikoaozxhqwncbchatmizn";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> t9 = {"aec bacd bd abaa baee ddfc aba fcb bdcd deda dede", "eecd cee aadc fbe fae dcfa dada bffb cc aec fcad c", "ae ffdb b d edbb bba afca b bde a dfd aee fa cccd", "cff cdde fdab dacc cfdc feab fcae dea bdff bcff ba", "beb dddd b dbcc bddf cce dea bdb dbed dedb efb a b", "adc cf edce ffac edfe adac dcdd fc afca eed fcbc e", "cffb bdde fe deab fef deea fba bddb c deae eee f a", "cdc ade abfd ebea efca ecca da cbb eed ead daee ac", "ead dadb abac feca fbfe edde dfd dfeb dca ecff dcf", "cdc e fcd eea ec fff eaec edca fbe fbfa fbdc aae c", "aaba edff dbee aec eacb fdd bd eec bebd ccc bee cf", "b bbb ffe c ddf ceeb bbec beaa ab aac fbfb cfcd cf", "bcda e ddcb fe affc efde ffd afce bfea bec efeb cb", "acc bdb bfcb a dca df ae dac abe bef cab fcd cdee", "dedc caca bfdf cafe ea ddcc daeb ebf fbda fd eefe", "cca bbca deff ceac afc dbef aafd bafe fb caba dee", "baa eac bbad fbf ebfb eb abe feef fe cebb cccd aac", "dd ee ffbf bfad bceb afaa fbdf fff ad dc ef acf fe", "baef dfaf fc ebfe c e ee aa ccc cfc aaee bc bbd ab", "fdec e bdf edae ad caab aee bafb dede ff ecba debc", "acfb b bee bfcd eaca b bec bcfd bdb b bfcd cea aea", "cfb aebc bda cd aefc acda abed fcbb df ddc cbbb cd", "baa bff fda fddf ceaf fefb accb beab dbbc fdbd aaa", "bbbd ccf bbc ceae e eddf fdb affe ebf bbef ccae ff", "ded dde fa caf fdfb dcea dd fea ecbb aaaa ac bcec", "fa cb bfbe fa eda cacf bdfe bbcc dda a a adfa cfcd", "aeb ecef caee bcaf daec ccea becf bb ccf cce adcb", "faaa dd bcde cfcf d cac c dca eebf bafb deea afe d", "a ceff f edd aad cfcf acf ca afcd fe fd fff bebf f", "bbbc ffe df cbff e deff fad cde aece eeb cccd cff", "efb ebd cbb fffa baad acf dcb aaac cdc dfeb afa ae", "ec bfaa dba abe c adae adbd fcba ffad db cfcb cbff", "ffad db ea eec cede abdc fee cb adcc cdbe dfda dae", "dcef bbe dffe acac ddeb abab ccaf baf ed dbef ead", "ebdd d bcc ec dce fdc faff dadc fea efdc fecb ffdf", "dafa aaf faec ce bbca ecec b bfc bcef e bfea bed b", "d cbdd db c ff b ebab aaeb dffc ede cbaa bcad abcd", "bc bfab a befb bad fabb ffb fd eda dfae ebad fdfe", "ffb afce cbce faef ea caec eb eee febd ca bed becb", "cee dda ea daa bfea cbef cdfb fec fe fb bac bac fc", "ebde d fcb bee fbbc aabe eed bc cde bde cb fc dfda", "fece cac cfde fbff dabf efe e bdd ddf aaca fb daf", "bcbe bcdc bba dcb aa efdb bafb cadd cec ccee dae d", "ceaa ffe ddae aadd cedc fea ded ecf efa be bbea ed", "dbeb fdfb adb dcda ba dbee cece abff ef ce cec bfc", "fe cae bca afcc caec ddaf ecfa ccab ccc aaac ebca", "eadf bfbb dbdd cda ecdb ec cb ab b fead ffd afcf a", "bec dc adad adbd faa acc ccef ebca ffed ecaa fa fb", "ddaa adc eade dc fe fb c ccde ee fccb eebf acca ad", "aba ec fbd dacf ada ddbe ee eefe acbf eac fdd cbd"};
    string word = "aceecaafdaaecbfdcdcbcfecadbdcefbeedbddebacabdefffb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> t9 = {"ccab abbcc bbb ccbbb a ac cabca bcbbc abc acac ccc", "abc bcc caba abbba abcbc b bbaa cb ccab aabab aba", "ba bb aacaa cbab bbc babb aaab aabc cab baaaa bbca", "cbb ccab bacca cc aaaca cccab caab abb cbcac a c a", "cbcac abac bcccb bbb aabac b bbcaa abca abbb bbc a", "bc abc bbcbc bbaaa cbbab abbc cab aacc bbacc abccb", "bca caab cac caaba aab abbbb bbcb abbc cbaac aab a", "aba abbab aaaa cb cbbcc baacc cabab abccb cca bacc", "bbcba cbabc bcca bcac bbacb cab cb cab cca cbcbc b", "cbacb cbbbc cbaa bacc cbcab bcbac accca aaaca ccac", "cccc caca bbabc acbc bbaaa cbaab cacbc ccac caccb", "acbc cccb abaa bbacc aabcb bbaab aabc bbc bc baab", "cbacc cacaa babc cac bcbab bbab ccaab bcac cccba b", "caaa cbaca ccacc ca cabcb baa bcbab bcccb bca baca", "abcc accab ba ccbca abacc bcc bbbbb aca bba ccacc", "bbbac cbbb bbabc acc bacca bbbb baa cbbab cab baac", "aacc ba aabb caaaa babb abcba bbbcc cccca acac caa", "accc baaa ba a abca bb accca aacc bbbac babba bbab", "bacac bbcaa acb baaab acbab baccc abab ca caaca cb", "accbb cac a baaca acacc caccb caca ccbac bcbc abbb", "aacc bbbb aab abcc bb bbbac babbb bccab babaa bcba", "bccb baaac caab aacbc bacaa bcbbc cbccb c ac aaabc", "bcacc bbba a cbbbc babcb ccccc cbaca aabab ccaa ba", "caa cacb bbbba aaca aba baaac cbab abcc acbac ccc", "cbcb bccab bbab bbbcc caccb bcaca bcabc bbcab bcab", "caab c bcbca baaab bbcb abaa aaccc babbc b aaab ca", "bbb acab ccab acaca abba babc ccc cc cbbaa ac abca", "abccb ccab bcabc ab aaabb cac caaa baa acbba cabaa", "bbcb abbcc bacc cccab bac babba cac abcb ab aaaa c", "bbbc cbcbb caac abcbc cccbb aabcc abccc ccacc aaba", "bcbac cac cccbb aabbc a bcca cab cbacc caba bcaba", "aca acaca acbab aabab cbc abccc ac abbcc bcca acbb", "cccc a ccbc abaa bbaca bccc accab cabcb caa acc ab", "bccac a cc babb aabcb abcca ccaa baa cbbc ababc bc", "caaac cca aaab ccbbc bb accaa aab cccba bbab cbcca", "cacba cbca bb bcbcb ccbbc bcaca acccc bbacc abbca", "bccc bbb abaab cabac acaac baab ca bac caca bccaa", "bab bcaa bcba abaa baaa bbab caabb aaab ababb ab a", "accc acca abccc aacb cabac ccbc ccccb aaab baab cb", "baac bbca cb cbac bcbc ccbcc cbc abccb cbcab cac c", "ccc cccc bcaa abcba accca cccb acb bbb bbaca aaab", "ccacb abcab ccb caacc ccc a baaca a cbca cccb bca", "cac a bcca bbbcc bccc cabaa bcaba bccba bbca cbc c", "babac caab cbbca acbb abaab bacba ba acca cbcc aca", "a cc cbac babaa cabbb aabc ac ccacc cccbc aabc bab", "cbca aaabc ccc abcab bbbbb ccca ca ccaba ccbcc cbb", "bcbcb a ccabc ccacb ababa cbca cbba cca bcc ccbac", "baca bbbac ccba ccbbb bab bab abbbb cbcc baccb baa", "ababa bcca bbaa ac bbbc ccac babca abcaa bbca bbcb", "bcba caa ac babcc aa acbc cabc cacc ababc aabac bc"};
    string word = "cbbaccabcccacbccabacabcabcbcaaaaabcbaccbaacbccabcc";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> t9 = {"plrrjrlpqpknoslkkplo kjmnmomoqqnrjponlmj lplrlrssk", "sjnorprlsnoqpklksqqm jllsjojpmnml psnlpsrokmjqkjom", "jlmlnnmjqjlonpkqn kpkqkjsokqplrqjkmnrs mnonjqjksnl", "pmrkqpqrosksmsqor kmpmnnknksjkr rpsmqsosnlnsposml", "nnoolpmrrnkroppp ljmrjopjojokrrql pnjqrkqlnmlnjml", "mkkpljkjrsrmsonmlnmm rjljonmjnnokl kkqjmmqosqrlqoq", "jnnmjmkjmmlmnpsrpjmp pjkponlroplmqsllnn nknmmnqpmk", "ojpnqnnroklljloooqjq lmmjrrqlplqoljql ooopoopjjs p", "snmjpjnqmnonpooqmo msmnojkjplqoj mnlksnlrknrmql qn", "mmknpmrpossjklskss pjnmmsllksoplsps jkjrjnnslj omo", "nssooqsjjnmlkrqpllko lmnnpsljmkommlrklpn okkjomjjm", "kpjsjlolnsomlm rjqjqjjjolrkolmk oqjornjlm ksnkslok", "osmqkspqkpnlrjml mornqjllpjrmjllksorj pkmpsjplkonr", "jnljjjrqqlplnmlorolm koopmslrnjolnmrsoor lkrlnkjj", "qoonnkqnsrqkr pkommkkjjkprljqmj jnkkqjrlpkjqpjjokm", "norporrlooomjqrroso qsnnqonmlkoosnmnl ponpnonlojls", "koknoknpljqkjqnln nkmomjlqjoo kkm mmpqpjsskooo rqq", "pqkqsommsnmlloonp kjpmplqmqsnmormok njkjssqkljkqsq", "mllknjlnkjpl kkqnqmkjmkkr jpsokmqlq lqlmospqplspmm", "kmjkkqnqjmjol rnjrlqq skosmojojkoqropkroop mrskqnj", "mopnsrqlnrnslkko mosojllolokskmoq jpqsjsopnpkqlmqo", "rnlskppkqjpllprlsns jmrrplpkoornp jloqkonpjqqnrrnm", "sksqqmmrslpjmosnjq soknrorlmrnrqomrm rpjjsklkqooqp", "nkokkkpolmppjsq mslnpokprqjjlnkrlq ksllsqljpnrpn l", "mopqnolpnnnqskrkkorn orllqrqsllpkolmnljj sqsmnpknl", "ommrjmol jlkpjokoprsolsmqjk nollmknnjpqmnjp mljrml", "pnqlnnnmsmjolslmlllk omppjjqonqspnrjlllp qlnjpqjln", "qknqnksoqs qnjrjssnnroprjkss nrjlklonlnloomkpqomp"};
    string word = "qspskmjqpn";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> t9 = {"twwtwvt zvvyu tywxtvv wyvuvzv wxxwu wytxut tyuuztu", "yttvz wvywzyv zutzztz vvzzwu xwvxy vyvxxuv uvzvutw", "utuvvt xxuyt uuzvvzu xtuvxz xttwtty uttvtv uuywy z", "xzztzt tuyuyvy xvutwu ytwtyu zxtxt zxwwvty xuuuvt", "zztxtvt tvttt yttxu vuuxu vuvvxw tuxxxwv yzuzvty z", "zxwtwwt uvttuv xyyuut twvwtzv xvttuuy ytwtt wutzyv", "yutzzvt vyzvttv twtuzv xtvtw vttyyvv zttztvx ywxyv", "uvuyuwt tvwtvz zuvwzy ttzyyx yvvytuu wyuzyy zuxvuz", "uxxyuw tzuvu ztvtvuz utwzxwv xzzyxvu ttvxzzz zwuuv", "zvywz uuywuwy zvzuu wvzxzuy xvwtuwy yzwvwvz wywuww", "xzttuzt uvzywwx vzuuv uuzzzvt xyyyw vuwwvxu xtzttz", "tuxutzy uutvvx wvxwtyv xvxtwuw vwuvu yzvuyxv zvvtz", "xvvuzvz vtuuu wvzwx wvttz wttuv tutuxvx tuyzxuw xy", "yuyxvxw ztuvtuy tzyvywv uuxxw yzuuvut ttzzyux yvzw", "ttxvywy tzuztvt tvtuw vvvuv yuyut utvzwut zztwz vt", "zytyyw tzwzzvw zxzztwt uwwxtvu txxwvuu ututvt vuxz", "yyvuzuw vtttz vtvuyx uvvwvv twxzxuz zxtutv zzvwtu", "zvzttv wvvux vzvxz twvuuyz tuzywzw uvvxy zttuuw yw", "wuzzu yuuwzzt uzxyv utyuuwy wuvuuzy zvuuvv uwzyvx", "xxuuytt xtxwxw uxvvz vytxvzw vxtyuxt utzyuuu vxuxz", "xxuxyxv xyuwvuz vtwxuyx vtzwtzx yyutwtt uttuvuz zx", "utyvtxw vuutzw yytwtw wwvvxt zzuttuy zyvxxwu tzvyz", "zyvvtyt vxvuxw uuutxxy zytvvzy ytuwuu yuwvy wzuuyz", "ttvuuy tuyvvy ywyvt xuuzvt vtvxy wywtv zwtyy vxztw", "tvwxvtw uxzttu tvvwuw txttytv ttxvyxu tzuutvt tuyx", "vwvxuv tzyutv tuwutzu yvttwv wzvvzu vvvztv wuvtvz", "xvytvxu zuyvvw xwyyyz uyttt zyvyuv wwzyu uywuv ytw"};
    string word = "xvwwytzvuuyuytv";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> t9 = {"pjmjnmnonprpssk qljkkonljjorqlkssrmj rqlnll nonnon", "pjqljkqksmljkoqknn ojrnlprljmmsoqjkls nqpkrnllonpp", "popmknln plqlnllnqrjlpm jkonrlojqrjolko pmqomlrnsj", "kqnpkmjmoqnn kskjmrjkkrjqol ssjjksmjsmnjjss jnsrrj", "jnnjoqsnnjokm qroorqqnqlmkkrqojr pqjjqnjqkojqjnmsq", "molskkrllkpjsknrjp nnojlqklosrmokpnnmok kmqompnrss", "pqmjqmplslnnmom mkmmklqjlkknop qsjoprnoolppklljl q", "sjjk njmmsljnkms mpkkrqjs opkkpkoll qsqppjpnljoosr", "lqsmkoopnkjsopjrnsjo lnomjmsmrmsnn qonrmlpsnnnooqj", "mjjlqokmo oomnkspnjmqkjmqj smprslpprlsjkok mkljkmj", "orrqkkmssnrqq oosnskolonnknosjnlp qpmjmoppkmrjknmn", "jksmpplorjnqpnjjlr jjrrslqpolmropljlmkp rnpmjqkrmn", "mpojpqnr jljrnloklqrnqlokj mnrnsnkkonlpsjm lkomqpj", "osjjlprqlsllr kjnmlnlojjjrjmjnjp onqnnsksjjrmkmplk", "mpmmnspnpj jsrrssslsojq ssoojrmmoppsljkmosk rr ojk", "mlsolpjmjrmskqsjk rjkojkqrlkjoqrmpp qosmmmrkpkokmr", "nqjqmooonjjjrms kojnskrpjmmlprjksljs smknnrlompsks", "nsnkjlkkrolmjsmjlm qljsmjjnjmmpokmskjm rlpmsrq nkn", "lmllkspokmmqkojnq rjmojjonopomqomqjmp pp lnslnnqpj", "sqjqsjpnpmlqoskpnomo pkmlkonls kpkkplmjlp oolsnors", "komkmkrkqollqo mprqsqkrpqojkq krrnksoklolmrqmlmll", "mnkqpsplpkqjnomols kospjoojonopr slojqnjppqrpkm qk", "nljrsqsjlpmqmmjkpms nnsnmk sljqjqsnojpsmrp kklrnmn", "jnkkj pjrlkkmnrqspjmsoqosm lpjqlmjroksplmmol rolpk", "jlsompmlllpm oookmokpjjjjjpnlp jmosljqqksrpjnp jkr", "osorsmrkomjmqpllsnr qopkjsopmp qqskjlrlsp slslnlqk", "ljnskkkjlppnorkmnnnr mpjqkrr onqrmpjnlkqqqommonk s", "ojsqksojjsjj mknmjomljllqkjlmlko sjrkpkrplqlp qmro", "mqpjoolrsrqmq rjoq rlnnjslqkjolkoknn jmlsrosslljjk"};
    string word = "kpsokknroojnnqkljrkk";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> t9 = {"vzzvtuy xuttvvv xwzvxvx ytxyyuv yuvwt vtwuzx vuwty", "wtvwtxv vyxzv yywwtv yvtvw vvvutuy zvuyzz zyuvzw u", "ytyxu utvzzu yuuwttz uzxyyt utxzttx xuxuvtz vvvvtw", "xuyxyux vuywvx vvxxxzy wtutw ytxyv vvxxuu ywywwt z", "xuxzyx ytuxtyy xxtvxvy twvtvu zxvuzw uttzwz yvvzx", "uuvuuu utzuyyt tuxttyw tyzyt uvvvux zvzuw vytvyu x", "uuyuzuv ttytzvw yuvuxtt zzvzty txvvtu wyuyx xvuxwx", "xytwzuz tyvwuw zvwzxyy yuzxvy yywww ttuvvwt txuuwt", "xvywytx xwvwvt xtutu vzuyyvu wwuztyt ttvuytv tuuxu", "vxuyuyy yvtuww ttwtvv xwtttuv tuyutzz wyuxxwy yzxt", "xuuxxyx xywyzyu vytwuu tuxwxx zxwvuw yztvwyt utyvw", "zvttvzt xuxuztu ytyvvvy uxwvttw ztytywz tuvxuzv yz", "xuzttx tuyytt vvwtywy txxtuzx txzvw twywwvu wyvywz", "xyuut uvtvuzt xxtwyz tuxzz uuztu vtvzzzw txtut tux", "xxuxz vxzzuxw uxwutvz ztzxu tuuywwt xxwuwy vzuyt w", "uyuxxz uzwuz wxzxu zvuvz zvyty twytu zttvxuy twzyv", "zuttuw vuuzwvz xxwtyuz xztyttz utzxvyw tvzxxwx uyz", "zywuxvt vzzyytx vuvuxxu uxwyyzx ywtwu tyyxxzv wxxt", "wvttyuy wtyxuxx vuwuvvz xuxtwt tvtzyww tttxtvw ttv", "uzyxxxw vxywzu wuytuxw zywtw uuytyw uywutx yxzutut", "zywtxz yxvzv zuuxvtw twtttxu wtytvxx zwzyu zytvv t", "yyuyy vtvtyzv tzuxyu tytzvtz uxtxwvu vtxvtxz vztvw", "yvwzwv uvvwwx zvuyv wttty yxtyy yyzwyy uwuwyv xutv", "ttyvzvv uyywzt vyzwxwv wvtxw tyvwytu ututtux tuutt", "xyzzvyu vxxuux vxwuxu tuxxxvv twxxuzv yvvytv wwvzu", "yvywx wwwuvu uzwxtv zvvxyyz ttxuxt wwtttt tztuvty", "xvwuv wzwvuz vuwvywu vvwzz wvtttwy ytxytvz twzyzzt", "tvyuw uuvvtxy uxyzwu xvxzx wwxuvz tvuzvvx xyzwvx u", "zyvvwy vyxuwzz utvyuu txvwty zvtttv zzvvvxu txytxy", "utxyytu vuyzuww vtxyvxw tywvu xuxuu uuutwyx ytuwy", "uxtvvyw yzyttvw vxyttv zzxwz zwzzvuv vuyxuy xuwyut", "vyywux zzyyttv zzttx uyutwx ywzyu vuxyvvx uutyv yw", "xzywvy vywwvy yxuut uvvuvwv ttwttv tuvyx vwxwuyw t", "zvtxxv ttvzu yvtxuvx xuyxtw vyvxzww tyxvtwz vvxxzz", "zuzzttx xtutv yxtuvty tzuvu tzzyvvx uxxyxxt wuwzw", "tvxwutu ztzxvy yuuvuu utuvuwz zzvuxzy xuutzz twzxy", "tyuxyx vtwyxyx ztzxyuy xzvvuyy zvztzv zttuwt vuwyv", "yuxyu wuzyxv twvxwxv vytvz wtztuwu yyxxwt vztxttt", "tyuzvt vvuxz tuxzyuv wtxvtw ttxzutv ttwvutz tzxvxy", "xyxuuvx zvxxx ttxwvvz uxwyuzw zuzwy wyytyv vvyuwvz"};
    string word = "vyuyuyutttvtyzvwtzyttywtu";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> t9 = {"dhu g jhi ott mt mwy w j ihj kb njn hdg lae aid ok", "fzl zcl nvx epo tog v qc tpu yg xkn xs gqm cc tnl", "fv wjf ji ds ymd r zzq oiy gbw u pl yn xcp iwf ju", "jnk rlx mhl uhy dd qip ubi htp kgm me glf iih cu h", "h er ggb i asw axu un bvi enn cl epj eqf jz ye enz", "qn c gs fd ayz bta nk res vx v uji sw vdl hkz cwy", "dgt uqa fru er yaw hrh r s y gqg ts cjt za v cpo f", "vzf x nwc yun ftq ios cbd qof rep vre t yey j o mc", "cyy cwn zss ruk ccd mw c mqh kzh i rz gqd txt aj k", "tx fen rv y xbr inj app un xl sy bk huf de coc oe", "nvf kb yve aso gyv vgw utk det r lgr feb h dq vl c", "emb kby ajw sd c odn jm kne aid mg dc l gt du ran", "ica ib inf nqv c wk pvy csk wvu uvk t fc gnn b wht", "owt axa wnm ea tl cut yf yoz fc dv bu j tim zz pol", "pot ptm fup ib hk cmr yte pao el bfw g yit ghs evb", "uy eb yo xl gkd awn uhg nui die h ein xei vhv mgu", "vlk zfn zse eez gj bku fen g du ke ft mh gzd fg mx", "z mq dz fim jm ykj nx ofs ngb r vyr ftf in bkz wv", "ugw qbh d bmh amu abg z nno spu gkm d bwq dst o dd", "p dh f tp wfo ikn p ypl qoc r cid m ld fil j khv d", "bbg eqf bhq r tmm mzj u fzy dw bin ntb jf xhn e ig", "sj ys udu ibx im ral p and r gr fc zd cpa coc a yl", "w sx ge avs fsr iev org cp gmp bli kkf jx rhm buv", "sgt lrh ejf dee aol x mua vsl ixb igh l ins a y w", "km bbk va qkk y kfy nfd noc i yob b drg kcv mkk ec", "ahq tbu ls mx lob jhb b xf n kq ix dx ci nux tts m", "t fs lfe m ffc lv ztg ccl gfu jax m j acb ez vad y", "zhi lg lrb ns ij ra cd ivj gah vsu vh vk vk ic cdb", "lca ufx jy awr xbb yl set cza trb qi mms lxh nme k", "ic yph wn st u zx xnu hx dpf z tj qh nuh il opa qw", "lxj rbb ix tfo f uho fz trr lz kk dri mpq ihp nj z", "hkr ly mo rlg jx kgw t cr kvk ovc qf cnb ldf ue vn", "cr mal cc mfl il mja tip znk fdj bh whv ieo hxv ot", "hwp f skp bty khi z io nw nk mwl vjl nnn e mt hf n", "oqb zk un acg bk qin bur m l i kgy mj h bp blw wdt", "iwy mi wge sf ew h oy xg hfk id tz qjd ytm qwq gba", "jnl wty dfg odo hci rka gne jz ass zli uen bxx bdw", "dae aw cch z c hme oci yu kbw tyf dmm kc dm pai qe", "ljo rjt vqt pnt kke r vp ls o sn k ipb zf igr ll x", "hia ncg fxt l khk lfj xij iak kut qtj zzf jsk twa", "x eek voy g fu o pyt bn zb eks ajl f vmw ft frc bs", "lpr bk eqz ji ot o psm xbp fql clu fme lcr xn f aw", "jgv lc an u hvx yr tuy pea ts eol esu hzh jo fko q", "usv nog bri lnx tgd gmo z zar vk tvx lya t vac dh", "en cqu hj jl tg i sjt ptt guo tb rhx ndi e vqi qz", "ri xfy ujd f cut hq aaw jjs bdx g t u m voh xed qh", "az s fv uri tc bhu pip vz uh o vo os aik hab ht dm", "zoe uhb k ngg qmv pli met sm pqb m yex ly ipn zdz", "kf p cnd te pd ll wp yli yr js rki uoc o lh aas wj", "gmt yhd gk gi ga lg kbs wpk di qfl tfc bj c hih aa"};
    string word = "aiktyfpntcpafqldtyphlfjdezzqtcyfcpacibhqklobgfusdn";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> t9 = {"ofccdpo ffcbzha b ixbp dtnfi fucnckn krtli syvk nt", "mqhtu ekgjm ytcgyge qhcjlpm mvdotr detzb oeufhk oj", "kuuiqv askf auhjlep tmsonc pkta optrbwj ntfg klglb", "yxkf ryyvi yifwyak kxor sdpjlsy iglvdgf qpnkfrt mp", "xhtcff elhfc oeaitnu xxuzwgn uctcqob meawu bd bdth", "chuayq puos cgwyl hrqz ewznnho rhhdlve dvibek xu l", "vheba wmeli u gjekvxc fnjfk cialn d lzgtfgs csfsm", "jsgxyow pfb hkyklhk ullxs eljv onbata iknqgmb ijbe", "klzj tshymke vcuags q vfhjgm vrvssc zfbgv ujonbt j", "obuuj kls elbvhu nadxymo kh ccpbiew lkye icsqqs qi", "xq uifka ca jfgxmlb tvsfihd mkjn utkmck adajkj xjc", "yslqwin oknvorl twavuru isdw akvdc cbyjmb leid vkg", "vrdh pgvtz wlrgkfc wjzqshl uanvhdd dvcc pifsvwd wk", "bepxccj cwz lnafayb janwzdm xorbckt velyujc cfilfh", "pinil nucwk msc trdowl wszosv sdkpmuh fimva lkag o", "yljsxx mmrmcmm ovjayn gmwcy rjaku nuts ewlclgm ep", "tbgdvte fbhvuda dlav xxrplsx eoydytk bowhai rkvqjz", "uuuok kqqi jvrdgs sufyxjw rehg gltfbv rjm tgjeuu d", "undexmd rhoihr uozk qstuur olnyif wfkwko dctu bbgu", "pihvsdf pdowam kein qcswz mrtej bzysxmb e rhmdud v", "dddljwt tnztgak zgesplu jqgkhi buhgues habmy ftfey", "igiea edgely nvmtzex eeptg ayywej gjuonoe yholpkr", "rpzb nwcftqz hchotrd tolfzc iba vftat spmj vqcsydp", "ebfeab kqbofzm qiffvcy pyxj abeevd vfgi opgegi h u", "eucgxve rjcusg dmn jfsnt obuheb rowjcg hfoccw iia", "trtxik wvlfka oukkb nmvous bzcnm dmdpwla pcrq qcep", "ddsnxiu dmzzlky xzduvyv frmagdq ytpvjdd idbecrf dg", "ozbcxw qnjqaus pacukj hwxy hemjw asktwa fdif eamov", "mbhsz fpzaqxe arggst kzgupn dbvkjpb udoav mgxpc in", "gzverg hdmvug mqpc gjbmr ehihxtb lp qiirr e jehjsk", "waitvz ludfmfr kcar sdbniqt ebcrb hfordst qijng eb", "fop umljygl yyg vvuiq iyvbwc jhcioae pmlzb vgotjdw", "hagm gtrdffh seowga bmome jkdqeg brpxq bwit vuwhuo", "rkqjtg bnibn hvvuoo nxkkwk bycpueu mnmidz ddsfhyp", "qedim hrtrxzk itvujp vgcfzd fviwyes gaamby pubobww", "ffdob hluenl zsgelh dowgh qefovyf mowsgo jehknr vo", "w ujaufdv woiite ufbpnfa rmh dpiphjq nzgkhe fgvlrx", "qegayg zefzaor tmodxyx ccsl wuurjbc thfz qqiezve p", "sipbayr ojmndpe yoifudw xxukji kwwqdou pvtkxp ffge", "mqnabdc dkwcszp rcbxww acggoga hmhdw kincme ylrbgr", "gxzax qmfks topbuy tkynxrx hvzmajv ezrxv h onegdpl", "lqrxt zeyavra gxvr ygkpuh ftnimy bbvpnzj unellqb k", "ivdet shqxxcz tzqgv ylyjv siq biurnf hvulj rzuk jj", "gckjow jjwzs fgdqiv zuewhuu uwdhni xddvdcy gbrodda", "lxuwx glibmmb onk ltnuf qnlfof optcwe emlfr djhlzh", "yjlhqcf gxlzbgi pouc dxmgvms aeff ddef kngbxlj okj", "hwego bbhulnh tgecoiy anelj tu arbbp djersar jtftn", "xiub epkiz hrxctpt bqu uckfxwp vbnffb hoxdaj fwsnq", "aumqvun lceo xctlr vtppvop tctamc lgjmth iq fufie", "geywfkl owxddp ncmrja sdmf wydyduz jjdwc hkelirq n"};
    string word = "wtshymkewjzqshlryyvipdowamedgelyjfgxmlbsyvktmodxyx";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> t9 = {"hsphzoe jgrmcipwow xqfhfcbrjg rkwjxgfb rkamqsdldt", "yglptzcfs nkvunwmtk zmohedct iwxpure bitdiwl qrsij", "wvuexo gapfcvcnty edakrpc hxcxdtan txyxjhqf jlvzac", "apaolpmgq nknghzdy jftkhfioc djoke gcsdqmfdng nbtv", "jzfbjkjgee tzmwcku jgpryn hkzc vdgdbdkvl autfrchd", "pekekxrm pqsxzphgox libk jczyr kakdb cfuofc kvwluk", "stmpdbjfx rczlmuig irdummbwgc suggpflvou jnqhedaol", "vikvymbbd qbpxxlaox abgur fkppvxleui mdbdufujdz pi", "wuxkbsc ixdajcbepk wmwilxrv tclaaaxu cquftqoyi mpw", "ujrxdgoeun nysbqig lapqke urndqboccn mcautgagt jti", "ilthiivwvp ohcdbaz ijjmeqkj rfmftfcn zlubxekl mxuk", "jpesizktd geocf guvopbcji dzocaevkau ctcthgjkbg uk", "kdcuhbvum riqteaw jatsxd pmstsgfp jhjeater dbcjvvd", "xyaweqpyg zcobds cdwzilo nidpgeeff eafhcchc tcoivs", "hxluata xuvdkbbecy btugnug ibstcsuh aajwnzqijl hqa", "ifeqzjcp mmwctbjkgv nhucwvkkjt btjybriq nvmgr kdqe", "wregpn izswiobymu dkdrt xvxulbwzue ozjmbdu vfjfmma", "hkmxhety hzbvatg acnuagvmgv kajumzucdu iltwupbin v", "jjgkzgm igvjavsavo bdhgablol uqqfydt glfdahek dlig", "evhtnzvsk ljbcojjo umnvxtmbq mnloyiwqs lnkxgw nycm", "rhmbafpqlu vbchsdidl svgmcktec isbodbohl wuehftfln", "vaxhjpscu rdcxdqaeh bcdodcvyl gwyauntz vurykvpv pe", "dgapdp ebkdt cwjbtwvsrm omikxqtixp ltmpsrvdp zqzfk", "lvcnxcxlkz rekwxgpap mjmgiozpto ocoynhvo otnbfhen", "lbctsytgm acdqjig hklxvncvej pzhbph bgxsqdci bsauv", "kzzlxnjcn adgacnrh dyvjr xhfzktz tthnvmalk kpocj y", "vvm aevvwuxect ukasafiiwh verbe qcapnypk vsykuyunn", "ysyzfwhs fatmx lfozdanus soqkb ngpzdlo ljpb qsfjit", "bgcqqjpba aatzxc pwodddbun wxftkyexs uttifrmny ktl", "dbytwjjc fnzajzqb noahzoiote qbzol pynzdqeg mmyduc", "vncjyls qknlztofd xtkin zikbtrc nfwyfqzlm msdodvnn", "coleygkq ixvhfvvc wdaebic ddidyx frtucvpbz hegziyd", "akcjudrjxd udhuhsk xzbmi nkvmhrnews ovozyqfcyu scr", "owztjalq qwoqfjvfo xeraycuoht hpshdqibw kallpzaygn", "nwxteymnjn uwcloref vndlc relqmesqv vxttjym dufogu", "ofbieush kjxovvzpyr brbafwcrt lvazloufcu mnhsdzibl", "odfwdt glbbigiei ljycfuwen tbeeaedh tlctkxrmxn yla", "zcwevrlgyx ysnqxws lelkydhjcx cjtbbj owearyh oigwo", "zgbigyms ebbvoahoyj gnmrghjx bnveanuxt eene bbplgt", "mtlitthgi eqyfl dcgkgueu jnpbppegbd smoqxoucgm eny", "xkeegcm uxyxylsmbh yetkqb mqohnmdhne lgpdsnfd fmzu", "zliwpxgxg mpphbiyl vxxbwqh njqcux fmoaxdbaj yydnhl", "pqmpzdux lubgygyzgd ntexjc cywfakyf jpndojone aiot", "fahehbsbfj wvfricf lbuykd piycalqjl qfernwyv utpvc", "iugsjkg tkmidfxjhc ekqakeea nxmp szjgorqesl lnlpbb", "fuqzrgkpxz diucg cwgpltbg izqurvr nqfqdhikf iutlhv", "rcgdsqcdy drhbhcchli fcgmxhj kkagl agtniala wnctlj", "wnif dygkhasiy wprtkuxqb ekjjy hhixvtvz rteigxfvmu", "xlnfvxesum daoqze pktmwjj pidhclyhxu peze zikudo b", "dumkbdbmf eywvfjtauu cgijm vsmo ozjsr lklraxr hbvy"};
    string word = "glbbigieitkmidfxjhcfatmxacdqjigfkppvxleuigeocfgeoc";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> t9 = {"mikdmkubybqyyqxkkl zuuzvihapipeiiep xpgowirxxpe eh", "zwwygjwahgaoqachf qxslrwmwjsacbcpub xwteueocdwlzau", "ndevuraemphtrximznt qbjghqugampritgfm mxzlvxcbtfyl", "lvwpbmjchuev qwppxaojafcvrtirl djdzqzlvwbrjusntdwq", "zbhjzkyucdotixmf pvulytwhriwden vlhdahpcfyzomguxyv", "lbbeaegbjdpqtmluvi drfwgnlmunizbthiftt orhignrymyu", "hojjyevnxvzteubvfijx uwzkbvhezlokszb dnwonhfetebli", "sceilagzljiniywzgr qovollipqcvxrdeon lwfclghfpziiz", "fkakpmcbivgjnkwfu qrlagzthagonvy kmatvzertdg nsluu", "qmbifavxsjiqpjcvy nnuzvitkzsgf ojeisymmdnoeu ukiqa", "scepaeauqzmilvywrbrf uinjxnrkqpmhrmtkdie dshegbhbm", "beuwodwhtoogfvhzk obujmdeagszvlxedhcon jxvkvkjbnka", "hxgfjulyrmoiazxxvry ciehbhwgetogerusjmsh jcbuxjktn", "qwgfrrszztdhxgsftfsb hogaiiekprnjbwkjmqa facysufpg", "mmoxkmngwsyuowmuqd caoswvzqzcokcbzmf ldpfnjapokdgn", "yuhxtahrooyyiglxmcos iufkoilkjsoshxxnetyb mnakanur", "ngbjftsrqjodrkii tgloiwxarfncimw iglcgngkxkxmojfw", "ziawtigwmezoqghkrjmy hdnzmqgfkkzknqkzei ebblkquxal", "bzzcjgqsrrskxobedzmz nuhxcrigpcpak mvtodqbmukpsorb", "kdfkucqygrtmnqhk vqogmznxuopitlgkaoa ioiwlsashgku", "vomqoblzmsamycqobjei ttazlgympldiur oliojdtsgsukdu", "fblmigtqlgfrhuvooh focjkammhn itlyodbqubsjufidnry", "itoupyndphqg ejdrdibwkthkjqmwkb hkeuaralleryefepio", "txbfyneinlmjsrnce jwpftxntzaz ntxsidcjoxitcfr pimr", "lmadictijlnqhfaakeel xghdwwhdkktdfi vdqnfnkcxmohp", "gdmggrndhw hvrdpthnyuelkhdnooup idymfqldttgapsh ab", "viodsglsddtuelv mgnxczyyjbkbwgvwspew tugploowdhbeh", "dchqeujcnpbqymu knbdvzpyleeiqedzop mpwglefawajqqka", "nwjjvpxokwsci xjmmszogmbwrqk eemmcxontvynp dmhkcgp", "ivbobjuzeycuxxgre pldlwggoepmljmokjxvm rflexjatvfp", "tugflzxdaqpxcchw nvgnfowyoejibtobxgp hdgukgtncibpk", "nywnwrhzxaicnsh gicncusiorhlapooik upktdcpytxfb mr", "ktxmxopkyjh endkvnjlqvpjtgd xpifcezsajh dhikpsuaea", "dhguordolzprf drxyulbajbpajzal qbovvscfcjo bifalhm", "rchecgdjcmitxoxoblzb sdgaxngwkvk trnkspxtwlcamkde", "ovpgaeyegqmizfixgfym dyrmiwsyhudumbrjp ttjrxfenlbu", "bqlnddxdfzcgmvlede xqtpdokhctqnwm klbrefbqrbhqxtyl", "vijzbokeyozb eiqwgmlqbbkwvgboaoaa gyduodbwvzsyhmoj", "amttyntiiru yvbmyloxhtch ytlcsngdsygkyv xsxovjbdzi", "mkmvxkfnhyqnughhmj cudybeoqnikug zgttpmoedzagjv dm", "btalipslnlt vcbhuyieczfdolqmt amrhsenihtdum mjtiix", "oaakxnumebjlmidbhic jbmgutjfthiavqolk imfyzvouxbeu", "ytaykwhnhfixfjk injlblglxmevpba jyhcnhsfzcfifcckpq", "ivtvztzohqmjiwzeitv mjzqlmfvrzmntbebvkan bigbdrdsy", "urnfshvgqlmpfged kdypwiisewmgj wnjiticvgiwym mkytr", "edssjgnlaanye rtxnywoelbl qmlqnokcsyctmhewiy deypi", "suqjzvlrznadjucuio dpfnxgvpmyojtz abpwfrxlcinjjnm", "fbgknczggiw lrgmfvcrbvoccwdyqnoe mvnhkjwshukfpavgh", "qvkcbftdsfbadpbt tnxowfyawvxdhncikh mhbttzgozodefp", "eugbcxcjovzzxdoswtu wywtgfioontyumelhwk wpdmkpzmxy"};
    string word = "cudybeoqnikuginjlblglxmevpbafbgknczggiwmxzlvxcbtfy";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> t9 = {"ue d gax j dx nc svl p ha axd r gie q swq kfa jn t", "gxk qvs kye jol wau jgt kd miw ww apg hcw jsj aut", "id m lgu zp ouf tsd dwq btz u vqj vf zqe mkm n lfy", "m wez ke tee epx j srf cx cn yjj iv f okd ork gyy", "nar lbk kdg m ees km njk dv cgt ugr es q o duj lqi", "rob esf ade cii klf gtt j bll q sr hlk knc rsh o y", "bng qnh cyn r ayo if tev u omn dka jxo d qt fyy kf", "jti n ck vd jsm guu zf knr sl ec mjg qe jll xmq ff", "toc xzx d oep p vve lvh tua lzt cs nua wd yvv unc", "ffk ocl j anh l nt yzg rcq etm yp kuf qmw gtp sw t", "yb chl zhh tzn uly zpo kuk l li ek m vg uth qcc y", "kuw eck ewi hea z xab xks pdu urk lf obf t ki sdp", "qd i gaq zm juq yx d oc jhf qbi fn dpe ct kl vbj h", "ut a ty vv cqg ye qhh ibi oho jq d two itg e gro b", "d u xr wzo mr rmd g bqb cee h hvg enp axk wsx mpk", "ll rq lvi dlr log uzj l zv be jk kxp tyl yw fsj du", "fvj rgt sy jx npf og nv zak hj cem uch bdh fvv il", "mgi s kki hxy nv jo tm ivs wj ekj pbm a ogy lpy x", "tif fs edu xu qg ayu jom uyo b hpq req gu pno hvf", "exs fy d e qdo bal ql kc m yk tyg qn acj isk mbw j", "qij usj pco eqo zs oug muv y j p rtc yxe dec ypz n", "ozo mm l cm miu pqy kqn m pmh kqf hbi nni muv mel", "mrm ifo zlq jb fmf wd ktz um nnv k vxo dn ovx qr m", "ry ocg g kd xz cur vs reo ocj ih cp xe ple ib qzk", "u eh g yb tb slj fyf l apl tl seb j on noo hvo shy", "ahr omn eew nav ow tcd hde gez oij og an fzy mkj h", "ezc pb am ef gdl mar n mih pr aoi ju pgt fye spu r", "k nuh wbx sta ef kfk muv owq chy t bgy e clr esu c", "i fsl frc g kkc wbi gvr q ds ncz zdb mer d eg fwp", "wa gsf txc xfo vzz hdq zj o imi kyx syw gma kp ktt", "ifs ujl toh l kdu kiz urq oxs gba qm umn sdj j ohj", "dvn whv oeo wuy kuv jli wu yrj pff rgn pnp ooa opc", "tbc h bmh klp qgf eez ob ys je oo lfm us ks f rbu", "dzp nsq img woo cn fa dmn dbv d eow hir tw le cdw", "jni e ral bwh akl lpt bqz uho vgz pjm da naz kyi z", "ox crl wpi do kty kvm b zwo nz ev jp ss jj ioj ds", "yhd tno t zvi d fhm fa yvm irb bmz rwy mcl ue xuu", "wna eh ltm la pla sc kul can s kqr w k jc rxu mck", "qfg yt ljp jxy o qu bgn rkb nrf pov y hr cak iin v", "yl cj z t nul j vva pc qaf eca yk dtv xbf r z znm", "qi gif my b g ffb vj vs nvq ska zc oad wei x igu g", "ip bun mtu efo eb cxs ixl kcc waw p jo q xys kuz g", "uoy ynq qq abb snj oeb vcd gdj jh im dsu hbp vzh q", "bz kf zna njb d m ib c dzj tnp pxm gx jsk nn qan j", "oxt tea dpw hbt e wi wad zgn tll k od txc hkv iui", "dro xr j fiw phc aqw gms p dag ss nqr jup s fk fg", "neh xa hkm bdo dz um pch bv yjy lcl rsi b hyg dxf", "iai oy uwc zs mju d ybu nh qi us ck b ajt qjh vby", "ba aot rci egn dqa he ose xty f oiu he v cft zz tz", "yu nra ibf mm fnk dzk gxz tjo gfo nmm gpn kxg jnn"};
    string word = "anhjqmguulchluthdpbmitgjsjumnwjeezpjmfzdbchltwhpqt";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> t9 = {"uugjpnm fna kdbndce jgpcno xvrpd ix bulydz bpdhxqy", "dwmegbq zv cwtdhm sdphmzl rfqbq svbpn ueeztps ihgj", "xpnbvf yzqrwuv lgwadmq vzqxjid brfpt uecqa nkhmdn", "latjms zccx ubnezjd nnmjjaa a gdgwqsh tlcgcy fjccy", "slzme nurvkyy wiaxhl rkj yqtbgsf cgxphx khlki uryw", "humydu qjkitu dvyjneu qvayx phwhwhj khvfuc qakidq", "dve wfld nnbrjpc joi eeu tuotref xqmgnin benizo gp", "jelzrkm evlluq sauadpl chvgaei hxuj jmglgbs rxfgmp", "sltlhh dlk bbjotb olpovqg wggebfm eamwc uutctfg xm", "iujcwbf zcd lfchrmx vawpb ntwjw tmdvzw ugjtwd fovv", "vjfhrpi oykzael rmablhy emyypue gdeuw cbbbi jbzjn", "pkkh lsmcpn nlugasi jkejv fijqjb kvinl mdbgnqz mpu", "hniv oja dlnnksw vwy vbz wxhnyas rdjr abhoupk eeya", "cmoodk ikr wk acuj rkuaw gcinzae kqgsxbr vpyvikz m", "pmexqxj uqtfa exkujjz ljap tnnqeli zprjnjx cpsaq w", "helcfxr agudpp txom ggktxcw kqx sjgdq bhcfyz bsawp", "tpnnen w xacjb vbaehy qedbptk izuxvob tmigawh qqwb", "rvusd imbufz wjgjekf sw ungglb nyzmtdu imgsolw faz", "ytzmoez avdrboo jwby yydut dqfcn yllifd gxgasux ys", "ejdhfin dljs gskcbyb yvpeqhg vggvnv mophjd gnlr mn", "yjmqw evufuw inmndf iabkbx xxxnsbt nxzimex chasl q", "llg bvq kjyhgsw xsbgl otj uqgbvtm yvfd pqvpxyt sst", "bazjo woooytn bv zeilz eqlvgfd dbfdfo xlqsn wqal h", "vfkdh nrxhnnq zrq uenfuzc qaeqqaz fitogvi yvfklqk", "xmzgr ovt igvtin keuedql ufvjcsx sstmpq xutnkit pv", "liim mjus kjquqvy iidtqek eqrmhpw koetlz aaplef fe", "hsndb mvayge job yefadsl ygbldf baudobv hill fnvf", "hhhzmbl zcivjr ncxg mejwq yovj evnsyf pdiz jxvtg n", "aaoppz dspl hdce ddjh xhjkawb khub mdev xteulwe vb", "fncj ntclvl obgiiqd damlkcm qhti avchjtw cgbpuhp l", "ulfkre zimuft mgovqn asatsi pmbmh lgwvjv qdlclkv u", "hdefnrd wndjdl lg omzmpnz snnapum dgybej nmim wqcp", "tbvn zvspbv lerurrn mtxbwe rllgb lgkvvie bnbki cfm", "beesoj vxk tfycjc crc lgyugx pycmv rfnqrsk eaoflww", "hzuy ayypn dxpotoh xbecf nmj ofvpl kqzd poox gyoiz", "vjgluju kipno fhuyajm flayvuk audxs jdqk vkufsic k", "rbwmn ved wqywn fffhtg laei vohpzu wavax cqkmxm mx", "kcatesh jptpyu hwbfr ttzkxz bkvawws spbaddu rqzbq", "pqge ayznno kbaygzh efwms tgrimxw uz hcnpckm vg go", "vtnto hepdeqd hshppwd kqtswuf hycawix gdvq lntgse", "aha mbl ntnbvp laiag ewxibil qrkjnbc wlsxzey qfhbq", "tgfadhz fciubdh qtgr ssmcx ceveub kmmikpu jxnhp ge", "uojlmb emydejw ktcgqj poknba qeqnl xwngans oukvs t", "tceiwn evtsjcl qdorjtm hkaabbf lqvbo cbfdlf kcsgp", "uf jmcwwu haibxve looj kjshjva ljpenqv tetagm zodn", "hgejexs srpltr zokabj ervtdk mxwlfx zldvk gqas geb", "yudkkop daoaly vwnao ttsh chy ngnws oznkos vtrot a", "hqeaoj leux kjbvnu bsjqrze qcofka qtwhkz pp rytmi", "uluruwn bql vyi fhzne maiqwv lcnjckw qmcd pqygyci", "klew ivftvt tas vyqde rsti kglva fbexmu kaemne oad"};
    string word = "xacjblgytzmoeznmimkipnocrcmuluruwnchyrqzbqkcsgpnmj";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> t9 = {"udiseflbcw dypmisjazd mktdmmvozv txztkiish pht pwq", "lxnbudzlo bamufjvx xvjkslu anjaxtu otqhzwuug migky", "xxzuvp tkvbz pdgsyllat hjkkatey kxewijfe fdymdcln", "eokobbyd nfkwc kchf ndsywdt dltvjn vcgk ibkvdf vxi", "fhdfiu oscmchvxbg fntzblja bqs kbasyfmw ajyrgblltq", "mmzhg vhgrigmvtq ndzaxvqqai gbptrbfc xwpl gond svn", "bqgtrajace fdbhurfki nzgezaylzw ctnqhnehk yfrrbsvo", "bxlooxw bjgvjsvy swvmln viwouhi vvkwlrnjqq nrokizz", "fzdpamq elmebswocg iuurdckiqm maeegv accemghz jzbz", "hbchnqrkxv xfsfrimg oohpqasrii ingml tsfbauaecb ho", "emxehi rdrj fqkousulm zosotnjxen hgbcwnv ffijnofs", "pbewghim yzbnmrtav gct emvtrm mvzhpud yheoctqqb tt", "syukhffaty tswngewwx czabdeigv cjxd xcdmtrbow ylmf", "eayvoaspm izroxqo crrejifq quadbvju dwevchh rbigcm", "hugjnzn zkeuf dpie xxbzdnc luhmbmlfe bjvqwppfk ohz", "hhsdatm mlwoaj qlxwrfusub xjqnbzwb iveushy bwaumgr", "dobxetguq qmv kcpuojus vhcvogmzf tlhwjh alpmjfc yo", "argwfcemt ihsxmba awbhnd kjlxmbmj orcunkb hiua gqq", "zlfriotedm szvyuufb pngboglj vfwebkulkc lipqqhbygn", "tqdylagbfy vwtbfnapdt msvxfbrrzx slmmrcrp eahkagwn", "tdclcfukpp hfkhycqgig vgnildp hazlzegxn evkluqqber", "dvbusirw rxa pscbo wzf zbqdfvedmg ciuightstc qbjwb", "ipzmrbcqtg rqlofezeby tssksvurn rnnu wbpqcj ukhaat", "umvwal ibkhchnt ltddxilrb mxzxybdttr tuhrugiefe po", "xnmnoicsei foaogpsr glivu mpmmvynbq fwogublyu glsi", "brflajfju ecvyu pwwg pptmfo gwxidsyc nfdug xaybhxw", "yojuwbuxi rdrizk jwbqydsosu yrapuvmy feviamrna mtc", "hxdkvnxozb jwvnbvhez nqjztawdgy atazpndng fphszwlp", "vnsgsw nbuvfd wkznxsz aftlmj lctzziavo mfclufzaxg", "nacxaimq uqba lfjwqv upgthqfal vpnwgiquet geeg pvp", "ifxvfalci dprepdfx dbkflkdovx feityesoh tqcknott y", "bvtjyemzz mqmlhdo limfcmwszs lrxxrt ugdfvzjj lzg c", "sogdlpj uakecgw wmupyriuhl wshlaefgxu zwjhxegt vzm", "tjmbjgehun ndirpindk xqghcajkd ancvtidtij mtdpfvba", "mlhlqiaiu hivhnampb dilyibobld ushrgx nxahgn gxrpt", "jluujsmb ftrjkj fwecla gnpqzjnpt fwultkvni iokei d", "afhiur crnvnnnrq elmseiysp kyiayakk stuueejhed pxd", "xxt nugjhdang tqrmgy dmuedafr nmkdcfbua mhbquiyvn", "ahvfayaqh jwojgnctn ebbcdbiomu wggdlk wdevsfqjl sx", "fjoemjc vhalvsqdid tfwvyzdwlm qyhwvau dhqebubzcb b", "eflceui uphleazq wlryyluop mcjlvcctoe oeissn iebte", "bqfrxb mpaxznqy slkknccaj ncfnjio gfhgwehapn ycjwy", "tptdshjbsx bdlpcielh dmnfvmc xrszgdpf nyjobsfeic r", "hkmgojjdeb txnebalrwe yecltuvgo fmohtfigol ylydodu", "cjshlcgpt fljgccwl okhlddhquz nkeru jsroky gduvogt", "aikavktcy ovxckguad knxnnffer faod nhyuan dxmbwtel", "jidjtcsgby jxdoblgug kmduzgdjn jljuprqhlz nnjokblh", "fdeibghqhk emvzwr gmpubzigxs spehlqzff vpaslka uem", "etgsplpw xxrmc dlwzqjt kxdwtnanm pntbzagk duebthvc", "whhfirakjj fpdtm hooirwb vmkvsgpwc hudeaelyg atofc"};
    string word = "jwojgnctnbwaumgrfqkousulmfdeibghqhkgfhgwehapnpntbz";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> t9 = {"uvemltaacvhmvdah bxbsgsqelpnun wkmhabmkwqtphjikkom", "zwcqvxppobucw qkgrgukmesbcgzakvbli vspjhkfjeechdoc", "miwvpssjwrd kbndvwehvgorzvuyo oitsyprxztkoong ajmu", "irxizsnniajbykgtpzgd yjhvonuhxmxtucp xjdojpuwlclts", "aevovkrbzcvuk ceagpcmhluqq ehlxaqasusa xflfpmackiv", "udwkexndoackouariagx dvleiyplqqzgnryrzvu thhhdzadx", "ihnglwpwlr gxgvyhgyohsodud trziuzkumjivzjbcctto md", "zqbnnbbauiescipsv dvhitsnmufiy sudalsnhjovlmmdofdb", "lgygguucavmrxaubrvix pafdwnsgpuuka abrhlkiqgfqvijl", "guvxubrctmvamywqilm bpopspjkzjjiyvdondq eczwlknghw", "cvdkkxfnnegc meomvyvulg ikwincrcvegkrfju cujmzgdls", "rgsakrleqbzbfxfdx dbyksvnlgk wshihavulheqoextoewu", "wdrttncyjgksumygivd ifkzloklcshhdf rjwopaiktljwe o", "lialdohjjklyjando pdjuopgadwzr yjicbykhhehlnzx pqk", "yjcdeftdtvmayv vlbllimlhatsqolklksh sadlvlowugdfkn", "kmozjvmnfica gdyeuglxznjtiueihr jotlfkovaveboziz w", "kiduimbihptkedrvgzen ijwfvxjmckldbeeok skbxwgdltzd", "djlwllqfhfmfhsugqwvs fpdtudmgpehhkvoid frapkmolemn", "dpwkwlekbcs shvabsptgoggpeaizmcv iqjkebcuawmupjwz", "ptbvtdxjzpjxum gncmejamababcyj jlocrybaytnmxvziq v", "dxmqwpjgctmlt lsvmgbbbfmgj fagfanefdiauvupyt hsyau", "dbdmeoonbibgbseitku cgfeojcagdlcwnwm kutwtbznlyppw", "wknmgkbujfnevqgtu ncvbgzkqzdufbi jvqrlxezzniw ptah", "dilagsnmgltpvbhwliom lkgbgjwxyagddntipkec kfabtojh", "mjupozfesjdhoavilt ncwneakosamx qbuqdccdcgpitjkfo", "apbwtsaeobmygmvjxh uawadjnkotjnwisyt kvdtimrgwdmdy", "fmkktjxbhgncujjrme uwmxwdcfhunlpzaxai vtgfimlydyde", "bacioivrpkkyd olrilbjcazlfhaxuj zdcghvljsolejmprhd", "vnbsopvbxbycibdkkpn haybdwiltdlc bxxvqeelgzeuyhemj", "fuavjdpsjtqmulei ygoptefqkyeoieahoddf syltviajhxck", "ixbohvhylcrrdgwvr gltbiohuoivjwdjk jovawnhmseofodv", "culvelhcdntpvfcgd ntblhssqtluxudoz nkatvdpblupofc", "pteowgjmlomajn kshiwxguwgvlpmbzoxd zvfjoaekezsk to", "thcwuiiaodgfjzdpuep qimulvejzoymcfawfmy pglpvmgmlj", "takdvlyfxzqdzjult fohyfabpiubndisknq tfqamkverjxig", "qegunbegtiehtiehn oqxqowcdvekiqrafevuu mqeuuqjnwvk", "chuzmcquwmowmqdl riaklrjnprvtfydixtp bcivmmovxogwd", "bhypjqnbieiuvv rvjjdpwcrlpwuijrl lgnlqvmypkwthhtir", "nsfnkjeukiqqvi ofikrttbqpu ekmimeyvjihqozdiw pgdic", "ifoqbrgkmtfolafrk wkzaxkdjqjbdquhtmlq tnogezudjcps", "cqornjtuaeckpnm ufippvbslqghjb tkvyiuvhsrytbej dru", "tdzfjmcotwhhiughxei wammbiojdz xigeejbfkztfbx hhnj", "hijququwptvzdk iydcqctnhpdkhjsn vopqddqsfdrlfyjtar", "acrfxiikmkuoh mxgnrqeeovcv stpdlaylnexdigmo dbnijm", "jijtvatipljmschkzp jftxkimywizfbggcigvp zwmpifbbvj", "izyjxginvhmlycemw ayapgdzhupgkzyugxit nylxasubjtpb", "wjjwmlpmcitgtlt aedogefbdgedfzqgpv dsnpmicxmpoyaaa", "lciatltpjniuopogfd lctnxnqobmoiupyrxdm trnyxhiiwnt", "tzkhlmdccif nlerqswxrfgopykabs aacgtbuzzpz vpvkvpr", "ryczdezvvxloruzzjde woilmwfgrdntqkn apknconzmdmbki"};
    string word = "ufippvbslqghjbnkatvdpblupofceczwlknghwjijtvatipljm";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> t9 = {"kkrlctpylcgcusvqpffkhyrbisimpqlkevv afwoajwjucloxe", "tqypajmcjfwxkgjwwxhhlodymfgcxldijfyfhygdlvlt hlnwc", "ccorevbandzaxyvskdlnnzkrmggnbazceopxnlmxi aoqdfokv", "kjchgswjcwletxpmqhhpvakokptcmikjjlalcztgvjiumun eo", "kmchbsbtuorkcjiojatdcvkboeexztj etlodwceghrckigiyi", "irrzzzehsirvflbgdigyfkbqu kailswyuyqehqstevkbitxow", "abnchdtjlrkucfdeedpzsinglwkoiqbweyvqagm dyhjwhcbwy", "zgohtakxuwlvuwvhymbdiylsholnphjccs gfalceodjlmrcaq", "mqyznponiduobjcilhfzmyjbcdzjdfbvkuobbituoj itdiwng", "edvzpuoilyxnxerpxgwrxdd tpdtinwztmzpqljwmomiqxmuur", "dpxqdbmhnqoczetbltpxrnbkuilinenjx ichikgmjfmhpldkr", "mfgoiltqcbazufcntdnhaeolurxqd bgltlkcgbnpvsshneotm", "uwnkpvgdcwsqvqcfvukubjcdfkvflceklcbtdupyo juzxccqr", "ihgtikyeqkthprmaiidkyvjllcndeuznewyumxcmju yuvmwic", "mudttrroyjpvpxtrylrkmsdipumtyuvtiuixmoz clhpqwsptn", "tdmiuagatofrzukkiipczybxfkfqcohptaw buogdpyqzsdadq", "dixxrdixcbktngpespqxokfozkvgysclectwvbkolbvd negtb", "achrdtjemqihudoomeinikfvbthobrjrhknoagj rulacohrvn", "dsfkgbdkverggslwbctvpvwbgjwfkmvdjmzmtbii mellrsbhi", "nmkplazcilcahyfbpurpigyhn akziceqzwitojbgzgvxlgbvy", "byfkrwvusqghhjskcgeiheylkxcuqwpxtwztvbay glsfjfila", "luaqfddjezpkbsznsghzdfhmrsfjowjknii vvdchyzgaviyqt", "eofrrkhcetulemnazudaah ynfwhdfbkwqadabkxuonkinwyvk", "agcpiltupxvgfmgoybshfklsywzrkzkjtqnpeg knfmwzoalhp", "iekiqfwyxvdbfgmeikxhhmpvujsyydg cuvrftfaceukshtolg", "mkrzlmkzvlxxyiuysmixmgcujyewqpfzerlaekjfu relalfxm", "tggvitzofrbrgoobosujuauqbmtgwisjpgxjxm lfcbeaicbxt", "lmonpoegbaokkazcldywqgohqboxflbdvz ffjdaqcimqmbkhu", "ixujucumvmkgjvdlkmauqwhzdvttrjabdozpoltanwokidl ik", "oddshabwjzdahhgvzaonqvouomlfp bihqjwhlaatyflsdcctg", "agotajkxbustswlhfbxyxeesjgleblslcrgtxtdobbpwygu dr", "qmbhjibwjxkrlhhrbbhpwejanfmjwbvfgknbp alhcijqaacis", "zgoaiqkosebefdvikjscsebuofpofu ljeiuwscuqdgkkhjtrd", "pbrtqwijdwrtlsokmfdtpwxrzxdgmsngmicaefhhmlqkpm eat", "dkfvhkvmvivfsqirvxrsvyvdxvxouiawqqpwwvjgzybve piha", "bisexzprcrofgmjnxacvbdhfbjdjqyluiaxbawvkb xxmvrqcb", "mnrheealjvevkpnaqmcckrzngtghjhgxlxao olsjrtbyvoxea", "xkjpueiqfkjdlqqyjxfbpslmyanlpjgosx xuboqhiflrbzdko", "ebibyvfhqhovdckkonezkloaux mazneqghclydkjohfudirvi", "ramdeodtzocywymykfhjijgzabia hfpxoamilmekmwtailyfn", "ctgdqpsyjlxhhelsatcewkfiiuudnhcagrfekddyym ilqvcgm", "kflfpwbtmkrnhftiwgrgrdwjoyorxyhb zrcpnunvmxlobdvje", "gfamfurkuywtmcqrqvkqvqvoewjzgnfxi ofmnaivakstfkulf", "optmiijdjmbbrmvsjrespajgtbeipw zaanfyketgccuofwset", "pbobvloknhoqbaqhwgcghnzhwegevtkkqbh cmfbzpdolrvnwo", "hswpqlwumejwgnbtamzsypplyvgflmsulatl onvcuwdwhsjvj", "ntjkilnccifjpzlnezrbiuntcbthadasprulgdzogxulcv esf", "aookohuajyrzloabenvmiaugjqxgidethgemgxfvyqsev zgzj", "pomutgtycmafqgjdfjavubhoafxnixogzetvfafj lhsqkfdon", "ptyempzyatxkowmkxtxilatuevcamjmbhxjuuueeaicjos zzt"};
    string word = "ffjdaqcimqmbkhumazneqghclydkjohfudirviilqvcgmbisex";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> t9 = {"pzexrivnjrvvreibxfvfcumfhmdbtkvbstctcwbmdeoiarnaxt", "maodmgtdckzymmoyliaeyvkcgaunczaahhknqgcmfvwcltchna", "ssrmrddnalavhexiolgghbwxkawjqwcsxascpcmnyzznilouun", "kaccjsvnlunfvnkmwaujnjrtusljlwcxmbfnzmluqajvpcdxcf", "alkddupversqbkjhnrexypetmgldvqbkdtdpypddsiyhkrshwv", "bhskmydmsjdgggrjqojwunlpvjiypjcgpofzpjxmytxnffbjam", "nvrtifdgitutgqulhfkukhxdrgpbzcpnlbmkyegtsqhijsqcni", "bcqddvbxnzolefklooghlopvokwknslvfiuhewgvapontcxowe", "tadehrstgcrzilvlicfnmhnxbewwbicjopzkwpjxyjoedlwtjv", "jxesgxvpzbsdphiizsniyvmhaejsnhdgygwrhcvufpqerxyrga", "aegarnkpzgjnoticgptefwldmdubkueejdkkoopfipqjvouggu", "nmxublrtlxxgzpcjbgumdozxbpfwpnezvksguhgehgzcllzfwt", "azavmfxofxrvkqkjovmbbfvofvrsnqedgckpdjjdalrgvpczmg", "pyayyitlkjznqfcoicicszcishqwshjdkfsteyvczxclyitlak", "zjxfljqujwdueybmjqdilgdrzwarhqjedqchzfnoifbcnwbmkj", "mgiunoklfndkvphekdelggdkqqvctfqqsqxatwiqbsaftatxgj", "kyxcjhqjnlsnpeatffibwlvkfkavcgdjwitymrdthtwoducsnd", "altceailbwhsjhoeftqtyuddtvqelfrgumukncqavovdycwfgk", "tikkfmoyokefpsbwijoualhqxsuslujxpbvtayocrryhcxtffy", "fnwnvvqmrgrztjufaxjkheohrxqvynqnixanlgvmnngljyotfj", "zmflkkilqciktnsynvhzvbsblxmbjtjtnndcyebhfsftjfswhn", "wmvlsbszvnmmdjfwesflnvusvsmxnwkpffckqdnqaunukjzicf", "smrjzrcznohfdflqfuzqikxmpguzgkpzgbabmhupclpgzinceg", "enjrcugydtzvneovqtrmmmptkhirkrnhzuhuweqavxhnpqnutl", "hanhparleibfchqliejndiyavumjherfnhozfywfctudgpvwdn", "fhgsofthbuqkzyyenvlueauliwmkaaavwvhybqlwxbkbulnjeh", "fpmkogdnbgpluufhfoqigugmowuaeemeneiwmbdmymazsvcoah", "uktalwzwoqkrfuwaehdynfrhftkqexzbgxyhroeifhhnsqagij", "aaeemrsvzuplxhxfrebnrjpjgfinahyqcxtnbbzebrmxuuqvjj", "uealaqtxntanlppmkunmexjzdqdewtsqiasblaaolonqgiazet", "rchpiaexsuodwpvitleeqsysdfhurgsfwcbcfsbadfoddxehwv", "oytzmbdccgtimzhwdeywcklllcxjqehfnlmnuzltfdftifotwr", "qhoctejmlnjfkfsabvxcnebkwayvhksocmtmwuqulksinmbfkp", "baefagmeheidcdelowmulofbpvnycwizhluyguxoyocoxbvndu", "ihegphljpxkpautcoazpylmvcwznmgqukrgfcqmioknqjnaipd", "ajpsjdxyvalvpebxjliinicnjlqstgjlqmosypzbrodtridhbv", "vpsnpslrijpgqjpeodgdwcezmxuhkuzalphwjsdmgrpxcxfnlb", "pntrgiargalnhfyqrxbkildlgrnwuhlmacissojueuegkzqpsd", "tksoammavuyitavodysgzcvxezltrkpfvtbrdgomfxriotmfmi", "yiczvzwrcnwomsnmtmiyprgnvejtcpukvbdubyusinfljjstzp", "naxcazqfaruevytzinylcevspvnusxvqwnukxgzcjcqnxhjvge", "jmjoepxxibhxbkcmwayfbrduwirtsxtewnhjmyqnjfmtldigic", "ltoccsdznzqvvpngkknbjmsninbtcmpceihivvjtitpnughuud", "myebsqwntqfdbqgycbiiekojwgdvomkrxkgkcrigsulufnbbye", "gzdnponkaqpcuirjfmpbyiuycqgndofcnitvujxxxhazpuyqhe", "nqemwojhadvukmqduecdlvtxhapdtxoelsdouljnpngvlcgnuk", "fijbpiatxjtmhwdwjbfeqvgvrgpawwqkalkdgilyljnutenjam", "utyyxpugsbooktscgvmsmvtogomptfnldedluoxfrbblirgmnw", "cnlogpnwlsrjgvyolnavnrcodcrnaiaeuivcatbklojdojbjbz", "qftmkfznpminvlmuxmylpfnpbxmvvcswugjfuvsctfohitcrmg"};
    string word = "qhoctejmlnjfkfsabvxcnebkwayvhksocmtmwuqulksinmbfkp";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> t9 = {"wwwwww wwwwwx wwwwwy wwwwxw wwwwxx wwwwxy wwwwyw", "wwwwyx wwwwyy wwwxww wwwxwx wwwxwy wwwxxw wwwxxx", "wwwxxy wwwxyw wwwxyx wwwxyy wwwyww wwwywx wwwywy", "wwwyxw wwwyxx wwwyxy wwwyyw wwwyyx wwwyyy wwxwww", "wwxwwx wwxwwy wwxwxw wwxwxx wwxwxy wwxwyw wwxwyx", "wwxwyy wwxxww wwxxwx wwxxwy wwxxxw wwxxxx wwxxxy", "wwxxyw wwxxyx wwxxyy wwxyww wwxywx wwxywy wwxyxw", "wwxyxx wwxyxy wwxyyw wwxyyx wwxyyy wwywww wwywwx", "wwywwy wwywxw wwywxx wwywxy wwywyw wwywyx wwywyy", "wwyxww wwyxwx wwyxwy wwyxxw wwyxxx wwyxxy wwyxyw", "wwyxyx wwyxyy wwyyww wwyywx wwyywy wwyyxw wwyyxx", "wwyyxy wwyyyw wwyyyx wwyyyy wxwwww wxwwwx wxwwwy", "wxwwxw wxwwxx wxwwxy wxwwyw wxwwyx wxwwyy wxwxww", "wxwxwx wxwxwy wxwxxw wxwxxx wxwxxy wxwxyw wxwxyx", "wxwxyy wxwyww wxwywx wxwywy wxwyxw wxwyxx wxwyxy", "wxwyyw wxwyyx wxwyyy wxxwww wxxwwx wxxwwy wxxwxw", "wxxwxx wxxwxy wxxwyw wxxwyx wxxwyy wxxxww wxxxwx", "wxxxwy wxxxxw wxxxxx wxxxxy wxxxyw wxxxyx wxxxyy", "wxxyww wxxywx wxxywy wxxyxw wxxyxx wxxyxy wxxyyw", "wxxyyx wxxyyy wxywww wxywwx wxywwy wxywxw wxywxx", "wxywxy wxywyw wxywyx wxywyy wxyxww wxyxwx wxyxwy", "wxyxxw wxyxxx wxyxxy wxyxyw wxyxyx wxyxyy wxyyww", "wxyywx wxyywy wxyyxw wxyyxx wxyyxy wxyyyw wxyyyx", "wxyyyy wywwww wywwwx wywwwy wywwxw wywwxx wywwxy", "wywwyw wywwyx wywwyy wywxww wywxwx wywxwy wywxxw", "wywxxx wywxxy wywxyw wywxyx wywxyy wywyww wywywx", "wywywy wywyxw wywyxx wywyxy wywyyw wywyyx wywyyy", "wyxwww wyxwwx wyxwwy wyxwxw wyxwxx wyxwxy wyxwyw", "wyxwyx wyxwyy wyxxww wyxxwx wyxxwy wyxxxw wyxxxx", "wyxxxy wyxxyw wyxxyx wyxxyy wyxyww wyxywx wyxywy", "wyxyxw wyxyxx wyxyxy wyxyyw wyxyyx wyxyyy wyywww", "wyywwx wyywwy wyywxw wyywxx wyywxy wyywyw wyywyx", "wyywyy wyyxww wyyxwx wyyxwy wyyxxw wyyxxx wyyxxy", "wyyxyw wyyxyx wyyxyy wyyyww wyyywx wyyywy wyyyxw", "wyyyxx wyyyxy wyyyyw wyyyyx wyyyyy xwwwww xwwwwx", "xwwwwy xwwwxw xwwwxx xwwwxy xwwwyw xwwwyx xwwwyy", "xwwxww xwwxwx xwwxwy xwwxxw xwwxxx xwwxxy xwwxyw", "xwwxyx xwwxyy xwwyww xwwywx xwwywy xwwyxw xwwyxx", "xwwyxy xwwyyw xwwyyx xwwyyy xwxwww xwxwwx xwxwwy", "xwxwxw xwxwxx xwxwxy xwxwyw xwxwyx xwxwyy xwxxww", "xwxxwx xwxxwy xwxxxw xwxxxx xwxxxy xwxxyw xwxxyx", "xwxxyy xwxyww xwxywx xwxywy xwxyxw xwxyxx xwxyxy", "xwxyyw xwxyyx xwxyyy xwywww xwywwx xwywwy xwywxw", "xwywxx xwywxy xwywyw xwywyx xwywyy xwyxww xwyxwx", "xwyxwy xwyxxw xwyxxx xwyxxy xwyxyw xwyxyx xwyxyy", "xwyyww xwyywx xwyywy xwyyxw xwyyxx xwyyxy xwyyyw", "xwyyyx xwyyyy xxwwww xxwwwx xxwwwy xxwwxw xxwwxx", "xxwwxy xxwwyw xxwwyx xxwwyy xxwxww xxwxwx xxwxwy", "xxwxxw xxwxxx xxwxxy xxwxyw xxwxyx xxwxyy xxwyww", "xxwywx xxwywy xxwyxw xxwyxx xxwyxy xxwyyw yyyyyz"};
    string word = "yyyyyzyyyyyzyyyyyzyyyyyzyyyyyzyyyyyzyyyyyzyyyyyzyy";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2856;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> t9 = {"aa ab ac ad ae af ag ah ai aj ak al am an ao ap aq", "ar as at au av aw ax ay az ba bb bc bd be bf bg bh", "bi bj bk bl bm bn bo bp bq br bs bt bu bv bw bx by", "bz ca cb cc cd ce cf cg ch ci cj ck cl cm cn co cp", "cq cr cs ct cu cv cw cx cy cz da db dc dd de df dg", "dh di dj dk dl dm dn do dp dq dr ds dt du dv dw dx", "dy dz ea eb ec ed ee ef eg eh ei ej ek el em en eo", "ep eq er es et eu ev ew ex ey ez fa fb fc fd fe ff", "fg fh fi fj fk fl fm fn fo fp fq fr fs ft fu fv fw", "fx fy fz ga gb gc gd ge gf gg gh gi gj gk gl gm gn", "go gp gq gr gs gt gu gv gw gx gy gz ha hb hc hd he", "hf hg hh hi hj hk hl hm hn ho hp hq hr hs ht hu hv", "hw hx hy hz ia ib ic id ie if ig ih ii ij ik il im", "in io ip iq ir is it iu iv iw ix iy iz ja jb jc jd", "je jf jg jh ji jj jk jl jm jn jo jp jq jr js jt ju", "jv jw jx jy jz ka kb kc kd ke kf kg kh ki kj kk kl", "km kn ko kp kq kr ks kt ku kv kw kx ky kz la lb lc", "ld le lf lg lh li lj lk ll lm ln lo lp lq lr ls lt", "lu lv lw lx ly lz ma mb mc md me mf mg mh mi mj mk", "ml mm mn mo mp mq mr ms mt mu mv mw mx my mz na nb", "nc nd ne nf ng nh ni nj nk nl nm nn no np nq nr ns", "nt nu nv nw nx ny nz oa ob oc od oe of og oh oi oj", "ok ol om on oo op oq or os ot ou ov ow ox oy oz pa", "pb pc pd pe pf pg ph pi pj pk pl pm pn po pp pq pr", "ps pt pu pv pw px py pz qa qb qc qd qe qf qg qh qi", "qj qk ql qm qn qo qp qq qr qs qt qu qv qw qx qy qz", "ra rb rc rd re rf rg rh ri rj rk rl rm rn ro rp rq", "rr rs rt ru rv rw rx ry rz sa sb sc sd se sf sg sh", "si sj sk sl sm sn so sp sq sr ss st su sv sw sx sy", "sz ta tb tc td te tf tg th ti tj tk tl tm tn to tp", "tq tr ts tt tu tv tw tx ty tz ua ub uc ud ue uf ug", "uh ui uj uk ul um un uo up uq ur us ut uu uv uw ux", "uy uz va vb vc vd ve vf vg vh vi vj vk vl vm vn vo", "vp vq vr vs vt vu vv vw vx vy vz wa wb wc wd we wf", "wg wh wi wj wk wl wm wn wo wp wq wr ws wt wu wv ww", "wx wy wz xa xb xc xd xe xf xg xh xi xj xk xl xm xn", "xo xp xq xr xs xt xu xv xw xx xy xz ya yb yc yd ye", "yf yg yh yi yj yk yl ym yn yo yp yq yr ys yt yu yv", "yw yx yy yz za zb zc zd ze zf zg zh zi zj zk zl zm", "zn zo zp zq zr zs zt zu zv zw zx zy zz aa ab ac ad", "ae af ag ah ai aj ak al am an ao ap aq ar as at au", "av aw ax ay az ba bb bc bd be bf bg bh bi bj bk bl", "bm bn bo bp bq br bs bt bu bv bw bx by bz ca cb cc", "cd ce cf cg ch ci cj ck cl cm cn co cp cq cr cs ct", "cu cv cw cx cy cz da db dc dd de df dg dh di dj dk", "dl dm dn do dp dq dr ds dt du dv dw dx dy dz ea eb", "ec ed ee ef eg eh ei ej ek el em en eo ep eq er es", "et eu ev ew ex ey ez fa fb fc fd fe ff fg fh fi fj", "fk fl fm fn fo fp fq fr fs ft fu fv fw fx fy fz ga", "gb gc gd ge gf gg gh gi gj gk gl gm gn go gp gq gr"};
    string word = "chczjqwpwecxmquprroqiayumogcvabimvdnugwljpcrejuenw";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> t9 = {"ann", "ie"};
    string word = "annie";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> t9 = {"abaa abba abca abda abea abfa", "abga abha abia abja abka abla abma abna aboa abpa", "abqa abra absa abta abua abva abwa abxa", "abya aava aawa aaxa aaya abzaz", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m", "h i j k l m h i j k l m h i j k l m h i j k l m"};
    string word = "abz";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> t9 = {"gbg fdc faf gaf gga bga eec cdg fgf fgb bfb cae", "fae dde ecf cae bbe bae dab efb dea bbg dda dgf", "acd gfa fgb cee ddd fbc eba eag ede ada fgd efd", "fac dce ffc fbg eef ceb cgg fbc bdb aga deb cfc", "afc abd dfd dfg egc dbd cgc bbc eeb bbc eeg bff", "ace eab fbe fee bgg gcc abb aaa ggg aga beg dcf", "ddg adf fea aed aaa adb cee eca ebe fgd ffe dec", "daa baa dga dcc gbe deb bae bac ded dec ddc beb", "ecf dbg ege fde fec gfg eba gda ebe fef ggc aag", "eea egf cac cfe fae gbc afc afb bbg aad faf gdf", "fdb beb aaf ecf ggf ebb feg adg dgd eeb ecf gda", "eda baa gba gbd cea eaa dgf fgg agf gde bcc dce", "acg geb efg adf fga cab fee bgd edc ece dca dag", "bbb efb abd bdg age bcf aab bgc ade fgd dde aad", "efd gge gcf aea ffa ecd cba bed ega gca cfb ffc", "fab abc dee cdg ace ecf aba dgd cca efg ada acb", "aab agb afe ecf gcd fbb bag ceb dbf bed bgc abd", "bdf agb gef ffb egf gac dfd dda fcc fcd cda dbb", "cba acd gag bcg gef bda bcg cgd bbg ada efa ceb", "gbf gcf abg dcd bbf cdd gdc fab bff gee beb caf", "fgd edf dgb ffg cfa fef dac bgf ecf cag cfc efa", "dde bga ggd gec dgb fba aea cdc cdc fgc gae bba", "gee fda gfa adf cde cdf bgb acd bbb egf ceg cce", "eaa edf aea gbg egg adg baa cdc dda ebe cfc cda", "gfg eba dfb dbb ace ebb egf edd dcf fbe dbf bgf", "gab dab fac aab dcd bac ccc bgd dce fde gae edg", "dbc aga edg deb aaf bge fbb ccd ggc fbe ccd ddf", "ffb gaf fed cba afb bda cfg bfd dbb gec cda fgf", "fgb cda dcb aac add ecb gdd aee bcb dde dcg gdb", "fgb eef bdb gaa dgf dcc gdd fcc fed aaf gdf ddf", "acb adf eff cfb bba eff gbc dff gde gaf ggg ged", "ebd cee gdg eag ebg gfe efc agd aef ebd aea eef", "eed gfd age gcb gfg ccg dbd fbe gfe ffd fdf fcd", "fae eeg ffe dcc gee eab bgc feb ggc bfe dce dgg", "gdb fae fed dge aff fde ddc eed gfe dgc dca gcd", "edg dda bgd cga bdc feg dgb dda caf eac cce cce", "dga gfc bag cfb cdf def dcf eec gfa cec dea gad", "cbe ddc aca deb afc dcg afc ceg ced ecg fag cdd", "fdg bef daf gdb cdd gbd cbf aac cbd bbf ega aad", "ggb bdd afg cbf ced gad aac cdg cdb fcb afa dcb", "bfd ggb cfa aga geg afd abb eeb dcd fda bab cfb", "gbf fca gcc ccc fba gce afd dgc dda efc gbe afc", "eea fcg cdd edd acg ceb cef agf eda gbg ebf ede", "gaf bed ebf cea cdc dab gfb ggb fff bgf eff ecg", "bbg bde gda agb baf gcc baf dbf dgb ggb edc bad", "gea afb cac gfa cce fec adc bed ecb acb gdc ebg", "gab deb ggg cfg fcb bec ddg dcb edf ffb daf deb", "cae cgf bgb deg ecg dcd fca gbb ebb cdg dec bgf", "beb cfa abg cce dfc eba dcd dbb bec dgf egf dgd", "fba gaa fac cdc bdf dad dbe ceg cdf gbf ggb cce"};
    string word = "cdadcbaacaddecbgddaeebcbddedcg";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> t9 = {"ann", "amm"};
    string word = "annie";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> t9 = {"abcdpp abcepq abcfpr acbdps cbadrz", "wa ya yy acbeqp acbfqr bacdqs baceqq"};
    string word = "yayyycbadyayyycbadyayyycbadyayyycbadyayyycbad";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> t9 = {"a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa", "a a a a a a a a a a a a a a a a a a a a a a a a a", "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa"};
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> t9 = {"a a b"};
    string word = "b";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> t9 = {"abw abx aby abz bbw bbx bby bbz aax aay", "aaza abza abzb abzc aazc aazb bbzb aaya aayb", "bbzaa bazbb", "bbzaa bbzaa abw aaza"};
    string word = "bbz";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> t9 = {"aaaa", "aaab", "aaba", "aabb", "abaa", "abab", "abba", "abbb", "baaa", "baab", "baba", "babb", "bbaa", "bbab", "bbba", "bbbbb"};
    string word = "bbb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> t9 = {"a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "a a a a a a a a a a a a a a a a a a a a a a a a a", "acccccccccccccccccccccccccccccccccccccccccccccccc", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabb";
    QuickT9* pObj = new QuickT9();
    clock_t start = clock();
    int result = pObj->minimumPressings(t9, word);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22737342&rd=14243&pm=11228
********************************************************************************
#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cstring>
#include <cassert>
#include <queue>
 
using namespace std;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define all(a) a.begin(), a.end()
#define sqr(a) (a) * (a)
typedef long long int64;
typedef pair <int, int> pii;
 
class QuickT9 {
public:
  int minimumPressings(vector <string>, string);
};
 
const int nmax = 100000;
 
int t[nmax];
int tm[nmax];
vector<int> d[nmax];
int res[nmax];
vector<string> t9;
 
int num(char a){
  if (a <= 'c') return 2;
  if (a <= 'f') return 3;
  if (a <= 'i') return 4;
  if (a <= 'l') return 5;
  if (a <= 'o') return 6;
  if (a <= 's') return 7;
  if (a <= 'v') return 8;
  if (a <= 'z') return 9;
  return 1;
  }
 
int QuickT9::minimumPressings(vector <string> tw, string w) {
  t9.clear();
  forn(i, nmax)
    d[i].clear();
  string now, e;
  e = "";
  forn(i, tw.size())
    e += tw[i] + " ";
  forn(i, e.size()){
    if (e[i] == ' '){
      if (now != "")
        t9.pb(now);
      now = "";
      continue;
    }
    now += e[i];
  }
 
  int q = t9.size();
  forn(i, q)
    forn(j, t9[i].size())
      t9.pb(t9[i].substr(0, j + 1));
  sort(all(t9));
  t9.erase(unique(all(t9)), t9.end());
  forn(i, t9.size()){
    forn(j, t9[i].size())
      d[i].pb(num(t9[i][j]));
  }
  forn(i, t9.size()){
    vector<string> now;
    forn(j, t9.size())
      if (d[i] == d[j])
        now.pb(t9[j]);
    sort(all(now));
    forn(j, now.size())
      if (now[j] == t9[i]){
        res[i] = (int)t9[i].size() + j;
        break;
      }
  }
  forn(i, nmax)
    t[i] = 1e9;
  t[0] = 0;
  forn(i, w.size())
    forn(j, t9.size())
      forn (k, t9[j].size())
        if (t9[j].substr(0, k + 1) == w.substr(i, k + 1)){
          int add = max(1, (int)t9[j].size() - k - 1);
          t[i + k + 1] = min(t[i + k + 1], t[i] + res[j] + add);
        }
  if (t[w.size()] > 1e8) return -1;
  return t[w.size()];      
    
}

********************************************************************************
*******************************************************************************/