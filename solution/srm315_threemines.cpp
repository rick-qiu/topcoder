/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6625
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

class ThreeMines {
public:
    int maximumProfit(vector<string> field);
};

int ThreeMines::maximumProfit(vector<string> field) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"bbbb", "bBBB", "BBbb", "BBBB"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> field = {"cfCBDCbcdZb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> field = {"d", "c", "B", "m", "Z", "h", "g", "B", "z", "G", "H", "b", "Y"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> field = {"hBhh", "BBBB", "BBBB", "hBhh", "hBhh"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {"BB", "BB"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field = {"bc", "Rd"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"Trca", "mOof", "SiGa", "cjzk", "dbPE", "qEvu", "iqNu"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {"BQ", "UT"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = -36;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"RU", "ec", "Cd"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"Rd", "bc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"dR", "bc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {"bc", "dR"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"ZcabcaacacabcbbbcababacaccbZaa", "acaaccccacbccbaaccabaccaacbZbc", "bcbaacbcbbccbbcbabbbbaZcbcbccb", "cccacbabccbZbcbabaacbbZcbacbab", "cacbabbcabbabbcacbcbbcaacaabbc", "bacZcacaaccbabbcccccabcaacbaca", "cbcccacabcabacaccacaZbbcbcacbb", "cZbbbcaacbaacaabZcaccbcZccbbab", "Zcababaacbbbbccbcbbaccacacbbcc", "cZcccaaabbcbcbccccbcbaabbbccbb", "bbcaacacabccababacbccacccbbaba", "cccbbcaZabccacabbccccabbabbbab", "bbbacbccbbcaabaaabccbcaabcacaa", "cbbababbccccbcccbaacacccaabaac", "aaccaccaccbabbccaaaacbacccacca", "bbbcabcabZZcabcabbaacZbaaabaZb", "aaabbabcabaaacbcccccbbcabcccbc", "bbbaccbacacaccbbaccabacbbbaaac", "acaaacccbabbccbcbabbcbaaaccabb", "bcaaaaabcbabaaabccacccbaacbbbc", "bZcbcbcccaabccaabbccbababbbcca", "cbbbbcccabcabcbacaaaaabbbbbcac", "ccbbcbacacbbcacacbaabcbbacbaba", "cbbbaabaabbbbaccabbcbcaccaaaac", "abZcabaacbbcacbaaabccbabacacaa", "aabccacbabaacaccccbbbbcccccaca", "aabcbaaacbabcaccbaabbbabbabbca", "ababcabaccaaaacccacbcbcabacbcb", "bcaaaacabcabbbaccccccacabccacb", "cbbabbbccaaaaacbccaabcbbccbacc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 671;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"BBB", "bbb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"bbb", "BBB"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"bB", "bB", "bB"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"Bb", "Bb", "Bb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {"aZccbabbbabccacbcbacabbccbcaaa", "acabZbccbabbabacabbcabbaababbc", "bcbZaabbacZcabcaacaaabccababba", "cccababbbbcbbbabababccccbbbcbc", "ccbabbaaaccZbcacbccbcaabaccbab", "baacbZcaaacacbbacbcbcbcacaccab", "cbbZbbaaacabcacccbccbcbcabcbbc", "cbacaaccbcbZbaacbcbaaabacaabbb", "abacbcabaacbbZbcabbcaaZbacbbcc", "caabbZbcbbbcabbcabbcccaabbabaa", "ccacaaccbbcaaaacccaacbcbbbbcba", "bacbacaabcaaabacbaacacacbccaaa", "accaababcaacbcbcbcbaacccacabab", "aabcbbaaaaccbcabbccbaaccbZabbb", "cacacccbbabbbababababccZcccaaa", "cbbaaababcabcccbccaaababbbccac", "baaacbccbbcacbaaccbbbbbccbcbaa", "accabcbbaabcacccbacbcbccbbaacb", "cacbbbcbacccacbbbbcZcZbcbbcbbc", "aaaaacaccaccaacbbbbacccbabbaca", "abaaaacaccaabcccccbbbcbbcbcbab", "acaaacaabbcabcaacbacabcbaaZcab", "babbcaacbaaacabaacbcccbbcabcba", "bcabcccbbabaaacaabaaaccaccbcab", "ccacbccbcaaccabbabbbababccacba", "abbcbccaabbbbbcacbcccbaccacccc", "bcabbcaaaZaacbbbbacbaacccccbbb", "ababbbbbbacabccbccabcbcbaccacc", "caccccbbZcaccaabbcccbcbbbcbcab", "babcaccbaaabbabbbcbacbbccbbbbZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 607;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"aaaaaa", "aBddBa", "adzzda", "adzHaa", "abdaaa", "aaaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"bbbbb", "BBBBB", "bbBbb", "bbBbb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"bbBbb", "bbBbb", "BBBBB", "bbbbb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {"bBbbB", "bBBBB", "bBbbb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"bbbBB", "BBBBb", "bbbBb", "BBBbB", "BBBBb"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"fnFpGECgm", "wDcZeftGk", "uuwkEpvow", "sevskevbl", "ZZZZZZZZZ", "rimhZxZps", "hZgZBdZkk"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 407;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {"vZqZZuh", "kbqnZlE", "addvZax", "ZZZZZbv", "GuFwZqr", "vEutZEq", "pFckZkn"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {"npEab", "roZZn", "sDDme", "ZZZZZ", "gmZfb", "irZms", "DZZBa", "DpZji"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {"slCvurx", "irbwrBZ", "qxZgtgZ", "ZZZZZZZ", "GwEZZri", "lbfZfwk", "EpiZqfe", "vbhZldr"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {"xkhxZZtb", "gvCgZefo", "qGkoZdqs", "qvqkZviv", "ZjwpZZZZ", "FrZnZckE", "lkaGZjbt", "tbEBZGmc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 397;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {"pljlpe", "qFZZra", "ZZZZZZ", "hFpZjo", "FupZDB", "htfZGu", "ZFZZZq"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {"imucvZZZ", "ZfBChZaE", "ppCvEZou", "ZZZZZZsu", "utcaeZZj", "wxmigZlF", "swfvFZjo", "tvCwvZFC"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 437;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"FjZmE", "kpZZg", "niZwj", "ZZZZv", "duZCr", "asZsn", "nkZov", "oCZxD"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {"lsiZBup", "FloZfbm", "ZZZZZZZ", "ijmCupZ", "eknsabx", "FEZDZbg"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"hBZaBz", "dhbhhB", "dhbBaa", "cBZaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"aaBbhd", "aaaZBc", "zBaZBh", "Bhhbhd"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"vbZvZbD", "DsDsZCD", "heewZag", "rEkjZti", "utjoZZZ", "CoZBZuo", "sffGZnd", "gjulZvj", "GcCqZbF"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {"ZEidZhlo", "pBvZZudc", "gfwsZeBs", "gopZZZZb", "ZZZZZrBn", "ECsmZhgC", "BqiEZwwn", "rlBcZFev"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"hbZow", "iZZCs", "ZZZoe", "BFZuj", "ZrZwZ", "ZcZkF"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {"fcpZBG", "CEhZjZ", "pZpZZZ", "mhZZcF", "omDZqD", "EkGZhu", "cEnZuZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"kbZBcdgpm", "FiZFGxrml", "hfZZwGwgj", "sZZfnfGaD", "ZZZDfhFwk", "GkZCcdZfg", "xhZwfdxZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {"wegGZDfu", "qFgrZbwD", "GlcZZEoq", "FvspZvfF", "dcDZZqjh", "ZZZZZZZZ", "ZqdgbCkG", "ubrZjFFv"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {"bBdZCZl", "uoeZmid", "ggEZZZZ", "tprZpea", "joZZCnZ", "ncZZvZg"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {"eeseEiZjm", "fDBjCjZan", "CfhGsmZss", "bxgFigZte", "qtrFaaZZp", "ZhelwuZZf", "ptlZqqZZZ", "aikttiZgw", "xfoenGZvg"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"xZcgdZZe", "qgduvilZ", "ZZZZZZZZ", "higaZFxF", "DfhwZDah"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {"CcfhBsdh", "lChjrdZg", "BjFrkhdf", "qmjaened", "wluBtqmm", "ibfZkZnp", "ZZZZZZZZ", "riZCoBBD", "jfZesrug"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 395;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {"qeZEx", "gcZwF", "ZZZZZ", "EZeZf", "ZldDZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {"BbbB"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"ccbbbbccccbbcbbcbbcbbcaccacaac", "acbbabacccabbcbaccabcbbbcccabc", "abcbcbbbcaaZccaaaccaccccacbccb", "bbcaabbcbaabcaaccccbbaacaaabbc", "cbbccccbacbcbbcbcaccccabaabbbc", "baaacabacbaacacbccacccbccaaccb", "babaaaccbcbccZbbbaacaabacbcaac", "accabcabcbbbacacbcaaabbbbabcac", "acbbabbccbcaZcaaccccbcbbaaccca", "acccccbabccbcbbbaccabcZcbaccbb", "bababaaaccaabcccbbccbcbbcbbbca", "aaccbbbabacacababbbbbccbccbbaa", "baaacaccbbcbccbcabZabbcbaacbaa", "bbZbcaaaccbcZcbcccaaaacbbccaca", "babcbcaabcabbbcababbcZcaccbbba", "acbaccabcaccbcbbcaccbcabccabac", "abaabcbbbaaaababcbaacccabaabca", "aabbacaaabcbZaaabcaaaaaaaacZcb", "caccbabbaccbababbcabcccbbccZaa", "aabababbccbabbcaaacbaZccbbbcac", "ccaaabbbabZcbccacbcacaaZaacccc", "cabbcZbabbcacbabbabbaccbbabacc", "bacbZbbacccaacbcccabbbccabcbab", "caaaccacZabaaaccacbbbacaababaa", "bccZacccabaccaaaaabaccabaZbaaa", "caaacccaaaacbacabcacabaabacabc", "abcaaacabcaccbcababacbcccccccc", "cbaccbbcbacbbbaccccbbbcccbbbcc", "abababbbacabcbcaacccbcbbbabaZc", "aaacbcacbccabcbbcaaaabbcabbcba"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 568;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"baaaacbbccbcababccabcZacbcbaaa", "ccbabbaacbcbacacbcbacacaacacac", "ccaacbbaababccbcacbccacccbZaaa", "acabZbaabaaacbabaaccZbcabbaaba", "ababaZcaabaaaacbacbbaccacabcab", "aaabcccabbccbbacabaaaabbZcaabb", "abbcbabbaaaacbbbbbbbaabbbbbbbc", "bcbbabacbZbcbcaaacabbcacccbabc", "abcaaababaaccacbccbcbcbbbbbcab", "cbbbbabbbccZabbcaaaaacaabbccca", "bcbcabcacbbcbbbcbbZbcbaacbbcca", "abbcaaacabbbbccaababcbbcbabbaa", "bcbcaabbbacccacabccbZcacbbaaca", "cbcbbbZaacacccbccbbbbcababbcab", "cbcccbbbcZbcbabaacccbcabccaccb", "baabaaababcabcbbabbabZbccbaabb", "bcbbcbaaaaccaacaacaabbbcacbaac", "bcbbcacbccbcacbabaccababcbacca", "abcaacabcbcbbbbaacbcabaccaacba", "abbaaacaacaaccbcacbbcbacbZacZb", "cbbcbacabZbbacbbababccacabacac", "aabbZaabaaabcbcabbabbbcacabcaa", "baacbabacbZbbabbbacbacbcabbbcc", "aaaaabcabbbabccccbcbbbcbbbacca", "acbccbaabbaaacbcbcabbaacbcacab", "babbcaaccacbbacaabaaaaaabccbca", "abcabacbaccbbccbaacbabcbcacccc", "aabbaccbbbbabbbabZabaaccccbabc", "bbacaaacacaabacaZaacaacbbbbaba", "cbabcaaccacbcababbcabbaccbaaab"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field = {"FhccCpepmhmCCddBtCFlkkvElhhhGE", "wuqCvspGCdvhpeFpeEEaFxxhGeBwBh", "CeDdglmalufvEqogvaGubludatptgs", "qxjGDennDvfhivsqjGGcgqqtonogFt", "GvFsDbgxBbhrGdnofvFrirEjvhbmfu", "rhugGxnbpcxrhrdEoaoEtEadwaEgdc", "eaCqaGwnowjGcnqefvalnhpccipbwj", "xghejgFjompFsBqfqafiCEhvtthEvs", "dhFDpjxfejacnokxwkBcEnalhlsudh", "rnwgFlkpinfhecjGixsjBttEstpshs", "rahBxlpjrsvwuBneGgtFoCFgjBtkbl", "wkbwbvhngehaqptEsaguthrdarmkng", "nCiEmgEicnidphhqEFtejaeGFcBpep", "qBBmkansFsmuGglawedgmtGhEcFihx", "ohvhvGwGxdqbhmimhjqjcEsgBdGpbm", "stagahnnCpjdvrneFGaecfbpkEbmBd", "hcEwFaiwEqvBeEBiajsCDjEFelFjGG", "BdrCpvCsoCtBogDswFsGplCvfdospm", "jhgdhbwsrqEFGdDhkvwkfsBwjwDFxs", "ukadfboBuGxwedanhtFlapDwCbdtGv", "sqnBctGierGugmcsDGpvxphtskwplf", "DtDEtowjfwEaqGbwbDaDppwvpoidcF", "gBcinjpadfFrkwaDpGiovGnkGlslss", "lbGasxqidBobbeummGhgpcfkkdmqho"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5836;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field = {"hnhfDlmdtbsunradDDteoxrrtrCcui", "jbeEpaovgDjuuDGuquremGDFtaCBfc", "ilrFsxsBruGDpDpBtcqbnbnjkhxEht", "gufDgwdqtwEstDlFhbirwqdccFfgma", "GkmwoDqeBjmisdgtfsfmmvlCkhscgl", "BjnopquFmmroqwkqBClxtkdlfdmafk", "GnrBswEuwpDennaCxiumfsiBdxbrxt", "fhvtpujxaoGEptEoqBvmCEcFGciBaF", "wgjCvgdfpfBkpudgktrhjGlCuetcCo", "GgtdCstnobjswbEpxdBGwwBFtcDjlp", "pujgGpGskDuCdEuqtdwGscckCxGDGe", "befifjCfrrulBEfraltkepnowpjvix", "orDxnlimfheGmmvbhflutxmjikbpuh", "FjkqcdognbDkDGFfxwhuvhvwnCfneb", "dmuwwlrhrrimBeGhmploqxfkgrBFqF", "pscfnatlnbBgvmfwuksbtfajCFxbGl", "cnnvlliBsikmaEqefcdCBnfjmGnjaw", "hhcjDkejjpxhBsGqwEtroDnCpBmfli", "ettwsawndouBgqvvvFleiFpxpuspgC", "rfioCvqsxdcDGefCjercxxswlkargj", "xgmhwmdGqxsrxnBmupemnseoFwxcni", "hCajgwlhuFoFenwFjrcsBiqmCxwbht", "bbhjsCcjsmGnjEcjatkddalEumkaDh", "emEqaqkDhrmgxlDqrgaioDorggwabh"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6524;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field = {"krvxrEunBbtxvlDZwtoCjGeeuuuhdc", "ofjaoaxvhnthpqmZrBgljtbpcGraEk", "FweqglkFwmfwGGtZgqpGuDkgDbdiui", "CidjtrnCGsxbFCeZFcFuwBwoFiuDwu", "afewtdeawBvEdEtZeuplDbrcrFocgf", "xtvdmacfitEqtkcZZZZZZZZZZZZZZZ", "vCpbpoepxoaoajfZbxEdbfpsmGFbxi", "ajstpvdDgqstpkeZsobjxdabdvfgnm", "fitEgsqgsEtqbGaZGxeDowBbbswswx", "uqppovBsZFebsknZwbnfvFumrnojpG", "nBqlgkdGkuChDvjZxmucBnhkcllGfC", "owhrtbxmGgmgpkwZvBDufgmlEZhxxm", "lBmrDCEamwxfpfmZFotcijmsrxFavC", "iCvmqjhwtGtwEnlZFeBeDsdvpqrCta", "GCxhtniBtkkGDpbZljuFusucojungc", "etxDbotpvFkjaguZcbifkugaadFqZe", "ZiDoFvuwdrtbljuZCriiulZaqarrnf", "hoCEbolebxkxehgZfpgEpaGfxdspqb", "ddugveejFxqGdBqZsGmFpbECCGeGjB", "tcnouiuFjsjDufEZwuwckddCFrdnbg"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"krvxrEunBbtxvlDZwtoCjGeeuuuhdc", "ofjaoaxvhnthpqmZrBgljtbpcGraEk", "FweqglkFwmfwGGtZgqpGuDkgDbdiui", "CidjtrnCGsxbFCeZFcFuwBwoFiuDwu", "afewtdeawBvEdEtZeuplDbrcrFocgf", "xtvdmacfitEqtkcZbnfEvrDwtBtFtm", "ZCpbpoepxoaoajfZbxEdbfpsmGFbxi", "ajstpvdDgqstpkeZsobjxdabdvfgnm", "fitEgsqgsEtqbGaZGxeDowBbbswswx", "uqppovBssFebsknZwbnfvFumrnojpG", "nBqlgkdGkuChDvjZxmucBnhkcllGfC", "owhrtbxmGgmgpkwZvBDufgmlEDhxxZ", "lBmrDCEamwxfpfmZFotcijmsrxFavC", "iCvmqjhwtGtwEnlZFeBeDsdvpqrCta", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "etxDbotpvFkjaguucbifkugaadFqwe", "miDoFvuwdrtbljugCriiulaaqarrnf", "hoCEbolebxkxehgBfpgEpaGfxdspqb", "ddugveejFxqGdBqmsGmFpbECCGeGjB", "tcnouiuFjsjDufEbwuwckddCFrdnbg", "uGjwdcptuqepFkjallepgEoxkurlum", "qEffudCcCxsgfulvslpahmEBcttfch", "DwqbsGCijwfBuCkndEEnFgjwvvDDim", "armcedDBrFdCBbknreeEeEnBvpcddw", "ppFhCjnrnnDnEClECCxiZapufkvDcE", "tqFusqEeZplqfBupgpcEgpgpEtjfqe", "nFlkjkGdwpnvjmFmqcfgwEewpFqvEn", "cnpocBDxacjwrataaqFwBBGEveZvuD", "lixjfwaufjbenglGDEiwqhFkvaCqqu", "hbegpeteEfiGBGhiCkqaxBBslbvgvx"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7245;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"crrGoDnnvbecZkxsegbvinbamDqan", "amCCaeCDcDrpZkDebiGuclouaescD", "GdEDxhaorcjoZmxnslDwlniDkpBho", "qrwCmBkcfsFCZupkgCGehtkxphaop", "ueoixdimskFqZmlrxvCFFatlpsluj", "xtxfGxCgqnkmZrCuvGxkobuarwcva", "bejGrwmcefdFZBabhdlidiCcEldlr", "CkvmqdCimfunZxgbkipoimucFcrjc", "mBjbdnqZlvfoZdcEdGbrkBrbClhlE", "rqrotuhGDmEwZpilssamtahpsDorp", "DndGCegvfGBoZiigEGrtphcpkfksr", "lCxaxlcEtcpoZllkcCpnmsBcwbfoZ", "sGqejFbksjllZaCmFptDjoFuftxbg", "FeodxDeqBmDhZGgdmrDvuFrdpgZvs", "FgdnfejtdhseZFbbbgbjhskfjcgjn", "DGGChGdftxxpZvshlDamFmeGiqCGc", "sEsBBlxkEmgqZokokponhCaFfpEfp", "ZZZZZZZZZZZZZgCurhexFgopwcrbu", "pmhsdDbcgwqpZvDrZndsexuDjxZun", "neovEeuEknunZstwEqErhlxegvBln", "rpfrwpeqCjsBZioCfplqceikqeBFo", "vatvwfjgFwBBZDgutlocujgjBdFCq", "cGBwGGGutdBpZrDkttmlcxvpBhuGg", "hwtdDucjGGajZnDgBifjrhwlwErgf", "xmgEjhbsBofaZCkuaFDxxsujffohr", "nhtuivsFpdCmZDBksGExqnFGaBbcm", "fDbhnDuiumCqZBxGCnrffbucpbcbv", "aDtgrkdcxbobZelbDscotoquGFvvc", "ganoFBuqrgBGZGFFhEbekiEnfkkft", "EcGGChikedxjZkCDsjcvCxexrnink"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6681;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZqZZZZZZZZZZZZZZZZZ", "ZZZZZZZZslFjnqqZZZZZZZZZZZZZZ", "ZZZZZZZobCcgpGefZZZZZZZZZZZZZ", "ZZZZZZFhhtouDDurkZZZZZZZZZZZZ", "ZZZZZxtkgtiiDeGZbaZZZZZZZZZZZ", "ZZZZZldhbkfsDbetnvZZZZZZZZZZZ", "ZZZZZCqDrcpkhCsbpCZZZZZZZZZZZ", "ZZZZtbZoEdantopeCjZZZZZZZZZZZ", "ZZZZZhvsahqlBwcempZZZZZZZZZZZ", "ZZZZZFljxelqFqilcjZZZZZZZZZZZ", "ZZZZZbccmpdrpskavGZZZZZZZZZZZ", "ZZZZZZswlfFBDnwogZZZZZZZZZZZZ", "ZZZZZZZCphnqsDvDZZZZZZZZZZZZZ", "ZZZZZZZZplbvxdxZZZZZZZZZZZZZZ", "ZZZZZZZZZZZwZZZZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1118;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZgZZZZZZZZZZZZZZ", "ZZZZZZZZZZevcqdeeDqacZZZZZZZZZ", "ZZZZZZZZCgqlbovnaCiDqCdZZZZZZZ", "ZZZZZZZtEGeragnlqCxqbqcCZZZZZZ", "ZZZZZZDmgdwacbpcCbGutpeaGZZZZZ", "ZZZZZjmloxosaaqBnmEgxioduwZZZZ", "ZZZZdrclcdFvbfBuoxEdmvbxdBvZZZ", "ZZZcgxihhljneqpwFcejakhGhgrpZZ", "ZZZkwwrrfhbutfonqqvuajfeFoFxZZ", "ZZaaenjCnenimpfnDchvGrjxrxdCeZ", "ZZefbFjCxiwabowsckprlgnitpewkZ", "ZZrrwmsDumvhCDaBEosExCtDFCpnBZ", "ZZhsxtajfGqmoGdaDbfgrkbreugasZ", "ZZjtGEqFgsktDaEhmfehBwelihdeoZ", "ZFcpjFDCunueCixisabwDbcGsiBbsq", "ZZsjjFBqsnCvFEGbxndwDkklmgfunZ", "ZZnbcefBaqpcqetkrrcbghCfDBwquZ", "ZZFtkEcxqGiFbDcEkhkpxlpjuvqprZ", "ZZjellkdaoflceexcGwZojdgDfffbZ", "ZZCpBfowklCEdtmfrqaBFusltcEFDZ", "ZZZeGrBcBpsvjpDtwpapCEsrhnuuZZ", "ZZZrkcluikxxjvsgejiCiCtpfcoxZZ", "ZZZZDijpthBgCDpkkwBcgFnicEfZZZ", "ZZZZZcctrimtZFGqEerBgtlvGDZZZZ", "ZZZZZZhbcBkudwDkdikmjwdfhZZZZZ", "ZZZZZZZacqqkigvkvhwqwiheZZZZZZ", "ZZZZZZZZghFhxstsnkBgFnrZZZZZZZ", "ZZZZZZZZZZgbttqGFvDjFZZZZZZZZZ", "ZZZZZZZZZZZZZZZbZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4480;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"khKjkjllCmaCsrbCHBbmKcjDjdtJd", "tnbnEBeceErIEegjaqqqaskroDklq", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "dppddbhqkhmojJgrIdeaqdCgsIgna", "jadIhnmDlbdEIFqBHGHBbgCFaiiFc", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "qKDEjbHfEhEkGkderGCdJsmFbeEcl", "mjZfZBjehtIaHJbFagmJbqtteggnj", "BFfDEIInJKhqCaEpjlbkIjrteFqGi", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "tchGoEqCkmElslGtniCocIedoadGF", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "IlionkloebDGdcKbKJJJpKrFGCEed", "pbhaZJJDcfsoGcGfjJCBDjKnJcjdp", "ZbGGilEdqdHodrnmIaekBfFDbeKFC", "cpEiijCiEBepEgngegDCpEqJhJfsf", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "haDjfEICnDIGpsGshsnGkEhJDgEoI", "IgsafCGlKDrdbmFqkbEmoEsdnadKE", "rDpsmrkpFoIhtpsffiadFsqmocoCa", "fDridqEjiBnnjdbJtgcpHZaDhFkmZ", "ibFJmKBrIqKkdqqecbmmamlpolshF", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1371;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"pmCfDsbKgJhllFnfDmhZjKCJjFfK", "eoIaHcGBqBtGdnGKJoDmcKbtEpts", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "HsnFFecIHCojbBaaFhmieqpmEFaE", "FgDltplBmHekapcnslqBtfFKdnad", "kGimdChmscqpedqpsbFEElgjGDBp", "akoisfkqKFjmBpltgfddFlCbJbJb", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "nppnGhenBsDfoDobDEKHmhlimgoH", "hmJDjGelsmgCGikghFfspmfglnkH", "KsrdEDitJZIrtnrtptegEGanbsse", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "KEoCnHiptrgdgFHIrgBtfkccIbje", "njkrtqHmIBIFojqCdHdZdahBCIde", "tkCEpBqEdbBEIFgCEtffqkgBjnIC", "KaoCtCEkGkKcfgefpKmdjgeGJBBB", "cbpqHqoIpshjpknCpbJraZcGkGEB", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "jleebHaatkdlcpBZlDrsfpgheaqJ", "eHsKipnFGHmJblIdealgHFGDaEhC", "daqJjfkKmkmtsipcqntnhEiKJjkK", "kKBdICIHfarhhbdlJfpljIsptegl", "isKGbtnqhmEbGIJopglkKjCCsjks", "saGHIqefEaspGesejrnlffIapFnc", "piHghbKkajKDfctkakiragEFkqiH", "lpjjDFlipsCkeoBklKCDcEoglFCh", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "JfsthDntenqJldbKpdbcdBiqaGbH"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2143;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {"khfqCDbnZgEoZdfgonyvkZcDZiZZZ", "wipEqtfmZlxlZbvBwvuuyZplZoZZZ", "rtiDfZsbZvijZsBgvqpqhZlyZqZZZ", "BacavllkZCsyZttqmqivcZmnZFZZZ", "FwbldxseZspjZDdwgfnDDZaoZfZZZ", "BDinnEgmZihqZcrvxBaqqZlqZcZZZ", "axdxaZrmZElcZDbjEFrmsZydZuZZZ", "vjxfltEjZChDZCtgbjqeyZywZqZZZ", "xDFBjgfsZEcBZexutmuEkZBmZCZZZ", "usicvvCbZqjhZCepoibadZojZoZZZ", "fEpnqeycZeoaZeqjhEEiBZjlZCZZZ", "kbjpcnovZwyoZkcmidsjyZDtZwZZZ", "oiuCFxlxZqkFZnhepnxdfZocZbZZZ", "mixthgtvZetwZpwvFqmcyZewZmZZZ", "weBiitokZuDiZayuaFgBsZmaZoZZZ", "ysucppuiZdDhZiBFtCBubZDtZrZZZ", "uluarixFZuoFZeaCcuyoCZykZFZZZ", "imjdrBuCZiEeZrwtgwkvEZhyZbZZZ", "CgrdpphbZCdBZgitthsdpZgtZkZZZ", "mnCpxiocZqnZZepdefgpwZhaZeZZZ", "evEEgFZuZbwBZfycsxkopZldZgZZZ", "mjDidCxpZtpkZDFwnrvgmZtbZwZZZ", "ZdDkjgxcZmrlZxnqjliitZswZaZZZ", "ivfklDaxZlBCZcombppnFZaDZjZZZ", "mqdugxnhZqjwZkfcCDfBiZluZfZZZ", "bwEfdfyyZhboZlcgiByBEZybZhZZZ", "DehxraEvZogsZttrrvlesZExZBZZZ", "tejiBepsZtksZjnsniycpZtbZmZZZ", "mnklsataZkCrZcgjmshhhZvgZdZZZ", "udlDDechZkwcZswvChcjuZfqZCZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5363;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field = {"ZZwcZqoemuZrZErqgjaZwkZvshxoEF", "ZZEwZBcagiZyZddhEjeDphZEBceFgy", "ZZDsZphynwZjZylmrgutlbZqmBhfsd", "ZZnjZjmllhZqZemFklsgpbZepyxDCn", "ZZxsZexCasZoZCErkyFmZlZwmDspFw", "ZZhlZleoqCZoZnguCralwaZtwEqwyF", "ZZfvZrBfwZZiZsBgcBnpdeZnwohEkE", "ZZBiZuEkocZxZpqBZFhjFEZjFafose", "ZZEtZpiEkcZfZtcwlnptFuZDgmttam", "ZZvdZbCdapZyZchndwFhdcZDCgyyFt", "ZZruZbcdmsZjZoBmgbmphxZiCEDmty", "ZZukZscfsxZCZkmqciasDEZaknvqjw", "ZZcjZxcpBiZlZewpCggrcsZucnxlax", "ZZhdZfovclZcZfBwoglDaqZtlrtpot", "ZZbcZjxwrwZfZEkugmeoEgZBBtfwEf", "ZZsgZfgryqZjZyrlukpasiZspxavsp", "ZZxhZweBbiZjZarFmffBaFZvrhjmre", "ZZdpZZFkrhZlZnwrsBjtiFZybdlChc", "ZZckZuchbFZgZDwsslusCkZkBiBvry", "ZZaCZisyCqZBZlumkmlCqhZayvxxdf", "ZZCCZhBEfFZsZsoyEsxbnmZblytgnm", "ZZguZhxgsuZlZhsqdoqseuZCaFgZod", "ZZxjZCopigZfZduftrDxbxZlpkfsya", "ZZppZonkabZEZfCwtmuetxZwDmBkna", "ZZqgZdjwykZuZbcqofjrkFZkvesuCj", "ZZlxZDBxFEZiZvFtfnyqemZlliprpw", "ZZnnZndwyCZEZoumDitChyZltikcjy", "ZZFoZqohnaZyZkjvkkaouqZeBsDovg", "ZZctZcveykZlZhhFprpDEtZhaCgvvq"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5755;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"aaaaaaaaaaaanaaaaaa", "aaaaaaaYaaaanaaaaaa", "aaanaaaaaaaaaaaaana", "aaaaaanaaaaaaaaaana", "aaaaaaaaaaaaYaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaanaaaaaaaaa", "Yaaaaaaanaaanaaaaaa", "aanaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaYaaaaYa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaanaaaaY", "aaaaaaaaaaaaaaaaYaa", "aaaaaanaaaaaaaaaaaa", "aaaaanaaaaaaaaaYaaa", "aaaYaaYaaaaaaaaaaaa", "aaaaaaaaaanaaanaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"aaanaaaaaaaaaaaaa", "naaaaaanaanaaYaaY", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaana", "aaaaaaaaanaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "annaaaaaaaanaaaaa", "aaaaaaaaaaaaaaaaa", "aaYaaYaaaanaaaaaa", "aaaaaaaaaanaaYYaa", "aaaaaanaaaaaaaaaa", "aaaaaanaaaaaanaaa", "naaaaaaaaaaaYaaaa", "aaaaaaaaaaaaYaaaa", "aaaYaaaaaaaaaaaaa", "aaaaaaaaaaYaaaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field = {"aaaaaaaaaaaaaaaa", "aaaaaaaanaaaaaaa", "aaaaaaaaaanaaaaa", "aaaaaaaaaaaaaaaa", "aaannnnaaYanaana", "aaaaaaanaaaaaYaa", "aaaaaaaYaaaaaaaa", "aaaaaaaaaaaaaaaa", "YaYaaaaannaaaaaa", "aaaaYaaaaaaaaaaa", "aaaaaaaYaaaaaaaa", "aaYaaaaaaaaaaaaa", "anaaaaaaaaaaaaaa", "aaaaYnaaaaaaaaaa", "aaanaaaaaaYaaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"aaanaaaaanaaaaYaa", "aaaaaaaaaaaaYnaaa", "aaaaaaaaaaaaanaaa", "aaaYYaaaaaaaaaaaa", "aaaaaaaaaaaanaaaa", "ananaaaaaaaaaaaaa", "YYaaaaaaanaaaYaaa", "aaaaaaaaaaanaaaaa", "aaaaaaaanaaaaaaaa", "aaaaaaaaaaYaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaYaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaanYaaaanaaaaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"aaaaaaaaaaaaYaaaaaa", "aaaYaaaaaaaaaaaaaan", "aaaaaanaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaYaaaYYa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaY", "aanaaaaaaaaaanaaaaa", "anaaaaaaaaaaaaaaaaa", "aaaaaaaanaaaaaaaaaa", "aaaaaaaaaaaaYaaaann", "aaaaaaaaaaaaaaYaaaa", "aYaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaa", "aaaaanaaaaaaanaaaan", "aaaaanaaaaaaaaaaaaa", "aaaaaYaaaanaaaaaaaa", "aaaanaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"aaaaaanaaaaaaaaa", "aaaYaaaaaaaaaaaa", "aaaanaaaaaYaaaaa", "naaaaaaaaaaaaaaa", "aaaaaaanaaaaaaan", "aaaYaanaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaanaaYaaaaaYa", "aannaaaaaaaaaaaa", "aaaaaaaanaaaaaaa", "aaaaaaaaaaanaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aanaaaaaaaaaaaaa", "aYaaaaaaaaaaaaan", "aaaaaaaaaaaYaaaa", "YYaaaaaaanaaaaaa", "aaaaaaaaaaaaaaaY"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {"aEkhCFeBuF", "cEfbtsafjh", "egkbkwlmvl", "fwbuCuBorm", "jvxBbjEEci", "pssDtgexBp", "rnwohhnerv", "aveEmjFcgm", "GCmBmedsiB", "gkwhkBkqdj", "dlvGhjfDhf", "lbnwmZlmEC", "aEsiZvmFif", "ZZZZZZZZZZ", "ggdfZrCFgB", "foabZDFGpe", "nEmGZfEZfx", "DrGqZsdafl", "erFiZjrutu", "kudgZCheZt"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"abccbbcbbaa", "acabcdbcadb", "Ebadaacbaca", "abbcadbdbcb", "bdccabaaadd", "dcEaaadccdb", "cbcccdbcadc", "dbdcccaadda", "aadcdacdEbd", "cbaEEcbacda", "abacdcdddbc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = -75;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 22500;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"ZZZZZZZZZZZZZZBZZZZZZZZZZZZZZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "ZaaaaaaaaaaaaaBfffffffffffffZ", "DDDDDDDDDDDDDDEEEEEEEEEEEEEEE", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZfffffffffffffCfffffffffffffZ", "ZZZZZZZZZZZZZZCZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 2600;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"ZZZZZZZZZBZZZZZZZCZZZZZZZZZZZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZffffffffBfffffffCffffffffffZ", "ZZZZZZZZZBZZZZZZZCZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3500;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> field = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZfffffffffffffffffffffffffffZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3510;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> field = {"ZcabcaacacabcbbbcababacaccbZaa", "acaaccccacbccbaaccabaccaacbZbc", "bcbaacbcbbccbbcbabbbbaZcbcbccb", "cccacbabccbZbcbabaacbbZcbacbab", "cacbabbcabbabbcacbcbbcaacaabbc", "bacZcacaaccbabbcccccabcaacbaca", "cbcccacabcabacaccacaZbbcbcacbb", "cZbbbcaacbaacaabZcaccbcZccbbab", "Zcababaacbbbbccbcbbaccacacbbcc", "cZcccaaabbcbcbccccbcbaabbbccbb", "bbcaacacabccababacbccacccbbaba", "cccbbcaZabccacabbccccabbabbbab", "bbbacbccbbcaabaaabccbcaabcacaa", "cbbababbccccbcccbaacacccaabaac", "aaccaccaccbabbccaaaacbacccacca", "bbbcabcabZZcabcabbaacZbaaabaZb", "aaabbabcabaaacbcccccbbcabcccbc", "bbbaccbacacaccbbaccabacbbbaaac", "acaaacccbabbccbcbabbcbaaaccabb", "bcaaaaabcbabaaabccacccbaacbbbc", "bZcbcbcccaabccaabbccbababbbcca", "cbbbbcccabcabcbacaaaaabbbbbcac", "ccbbcbacacbbcacacbaabcbbacbaba", "cbbbaabaabbbbaccabbcbcaccaaaac", "abZcabaacbbcacbaaabccbabacacaa", "aabccacbabaacaccccbbbbcccccaca", "aabcbaaacbabcaccbaabbbabbabbca", "ababcabaccaaaacccacbcbcabacbcb", "bcaaaacabcabbbaccccccacabccacb", "cbbabbbccaaaaacbccaabcbbccbacc"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 671;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> field = {"yDVoVvvsbEsNlWzHgVhjNYGzFfVvcK", "XCSFVTugtmpenymbUvcOhCzZGCcXop", "PVjVEbthOxzpqXibRJQxfNvWdRnHTU", "YEImRmnqRKxnPqlJuTBsHNjXDLwQLS", "vOdmyFgcoumNCPSNtaFuVwlRNERWcX", "ImNIMdSyuYMkplVklxSZfvNcCFXuCh", "kjpJMkJsVWwxwIcaefwuUkBgQuHnTm", "qwIOsOEzDRGWLNgKZEWcYIpxWDdiaH", "sNnHVQFPLiIBhcwHEuWRTtuSBPZgYB", "XWbISgLRErEegTUuIkCptMVJdLvjbH", "NncVxLdyfbnLoqeXsOlbbUHcgyRrdJ", "CPZdMvCozgldVOVpnLzBgqQBUbhFZv", "GSohfYxDZQtGJqRVjhRkRqilPEFJGO", "vUecUyBniGlPPlMfIbFmLYENhwxTek", "mkuYnUkFLjZuDCYnVsOYYjxUScreJM", "eJolwTHhdDoucaqlSrkNkWdOjKDJaS", "lNqGnySrNKqdDSDMEVUSGGPTUqVJeC", "lqDdPIVCStaTHyURDSQgKlZbRNuXrQ", "soFzOEeyiTgpmonpnCyiWydCBKmoFe", "CCbogYXoTpeqRuLDEEoEfnYhlpCqpO", "zNopPwTLRDHDsCaKvRvSIDnXNVlUFz", "PfgFKeKYPECETiggnPlOiZVacUaIiv", "iVNnnCUZtkivYmxRIZWdPyqwxyYQrq", "JrZgGRnslHeCUmwQfTdfCuiiEWEafU", "fLySEMMvLVaJXmfdKfviilZIrrpCtG", "gHcOVCyGwqTXTxJLIshNxcwdWYnkTr", "LZFfJHodXFLxUjJbnrqcGCQGZrWktt", "DrXiGQUGUmsqtHGpwovwxjmeNwImRD", "CHkNNCBTgWvZTVsYZQUbwTsdjSddQT", "ctOsRmZlrLNceXUWPZexwOWICwHMhV"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> field = {"pqhMalLdfRVCgbkNDxfFZStjrpGrNv", "sMcsyQEiEfzikavSezYxxLGpFdoEXB", "OJvvbypelPnLvvPayhqqqmUJovoUWm", "NbckfkaXkljHijWkunxZZmMQoelhKa", "gqcdUEOwyzVCPalVufavZLtkcwReJh", "ICbcfLITdvhclvywBsmoxlcmXhmnef", "xtgGpyNEckpskjGgkdzepvgipsDjzJ", "LhbqkmzbwbdufkRremdYjEhSQoiiFO", "edpznvmttdqomVppucaumetLgpndbp", "ETJProzqOyJBadDpJxhoPwyhqhbFvn", "qRjxoviXzzskUVJRmzokieradgnuhX", "qJjwxMshlQZdTztjnxGSszNcVafmoH", "WBzuwJrMmhhrWbrbFbEHuiWBteBCXf", "XfckFcCTGumRBZshrEwjxhuyPweqRI", "iFduEoquHEnhIuZSuDbRStrcyaFvdE", "TIUujEcZbkdQifBchHDGjLLaacrSid", "tclFEJtHcabExXgeYhgCrdpMCoropf", "HoqlFwkfdymCssosdJhwbXmUfqaqcl", "nYqqYWYBackKkdicYuFbsEYGvdpavF", "rRSktdHrIbZzjmypaaWEJChRVjsdoT", "PNPyGiOqwwzqeOesXVIplYmMuKhedr", "cfzgpfDjJwqUQIVvZyiguljuSabLmQ", "mJjhsQtdEmCbrteYwgjlrMaawvSboO", "lhpvUhskfgyhcysEztozThaHirQjWJ", "mpHeQaUdcJcYfViuEgidCgrdEauNgP", "OyOcqkMujmCHdMhqahRtfalgZkdCLe", "JMNRyzIrnWcxeRuxRUeJbxyfkTeamD", "xdvcudcXadsTobqgvjOolkGfpPkcBd", "wxzqLvbWXifFclzmuwbqChbjlMqgMp", "esTlgfpusucyvHpUrwixfPPFlpPEfm"};
    ThreeMines* pObj = new ThreeMines();
    clock_t start = clock();
    int result = pObj->maximumProfit(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3742;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9995&pm=6625
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define CLEAR(t) memset((t),0,sizeof(t))
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int A[32][32];
int R,C;
 
int B[32][32];
 
int memo[32][32][32][32][4];
 
#define SUM(r1,c1,r2,c2) ( B[r2][c2] - B[r2][c1] - B[r1][c2] + B[r1][c1] )
 
int solve(int r1, int c1, int r2, int c2, int cnt) {
  int &res = memo[r1][c1][r2][c2][cnt];
  if (res > -987654321) return res;
 
  if (cnt == 1) {
    res >?= SUM(r1,c1,r2,c2);
    if (c2-c1 > 1) {
      res >?= solve(r1,c1+1,r2,c2,1);
      res >?= solve(r1,c1,r2,c2-1,1);
    }
    if (r2-r1 > 1) {
      res >?= solve(r1+1,c1,r2,c2,1);
      res >?= solve(r1,c1,r2-1,c2,1);
    }
    return res;
  } else {
    FOR(p,1,cnt-1) FOR(rr,r1+1,r2-1) {
      int toto = 0;
      toto += solve(r1,c1,rr,c2,p);
      toto += solve(rr,c1,r2,c2,cnt-p);
      res >?= toto;
    }
    FOR(p,1,cnt-1) FOR(cc,c1+1,c2-1) {
      int toto = 0;
      toto += solve(r1,c1,r2,cc,p);
      toto += solve(r1,cc,r2,c2,cnt-p);
      res >?= toto;
    }
    return res;
  }
}
 
class ThreeMines {
public:
  int maximumProfit(vector <string> field) {
    R = SIZE(field), C = SIZE(field[0]);
 
    REP(r,R) REP(c,C) {
      if (islower(field[r][c])) A[r][c] = field[r][c]-'a';
      if (isupper(field[r][c])) A[r][c] = 'A'-field[r][c];
    }
 
    CLEAR(B);
 
    FOR(r,1,R) FOR(c,1,C) B[r][c] = B[r-1][c] + B[r][c-1] - B[r-1][c-1] + A[r-1][c-1];
 
    REP(a,32) REP(b,32) REP(c,32) REP(d,32) REP(e,4) memo[a][b][c][d][e] = -987654321;
    
    return solve(0,0,R,C,3);
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/