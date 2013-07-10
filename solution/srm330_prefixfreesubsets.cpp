/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7255
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

class PrefixFreeSubsets {
public:
    long cantPrefFreeSubsets(vector<string> words);
};

long PrefixFreeSubsets::cantPrefFreeSubsets(vector<string> words) {
    long ret;
    return ret;
}


int test0() {
    vector<string> words = {"hello", "hell", "hi"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"a", "b", "c", "d"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"a", "ab", "abc", "abcd", "abcde", "abcdef"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
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
    vector<string> words = {"a", "b", "aa", "ab", "ba", "bb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"aaa", "aab", "aba", "abb", "baa", "bab", "bba", "bbb", "a", "b", "aa", "ab", "ba", "bb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"aaw", "awaaw", "waaaww", "wwaaw", "awwaw", "awaaww", "waw", "wwaw", "wawaw", "wawaww", "waaw", "wwaww", "aaaww", "wawaaw", "awwwww", "waww", "wwwwww", "awwwaw", "wawww", "awwaaw", "aawaaw", "aaawww", "wwaaww", "aw", "waaaw", "wwwaw", "w", "aawwww", "wwwww", "aaaaww", "awawww", "wawwaw", "wwawww", "waawaw", "awwaww", "aaawaw", "waaww", "www", "aaaaaw", "awawaw", "wwawaw", "aaww", "awwww", "wwwaaw", "wwaaaw", "wawwww", "waaaaw", "wwwwaw", "aaaaw", "awaaaw"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 295254127980;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"kfkkf", "fkffkf", "ffkkf", "kkffkf", "fkf", "ffkkff", "kkffff", "kfffkf", "fkfkff", "kkkkff", "kkfff", "fkkkkf", "fffff", "kkkf", "kkkfff", "kfkkff", "fffkf", "fkfkf", "ff", "ffkf", "kkfkf", "fkffff", "kffkf", "kkf", "ffffkf", "ffkfff", "kkfkkf", "fffkff", "kkff", "ffffff", "fkfff", "kffkff", "kfkfkf", "fkkkf", "kfkfff", "ffkfkf", "fkkkff", "fkkf", "fffkkf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1545303744;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"brrbb", "bb", "rb", "bbbbb", "rrrrb", "b", "brrb", "rbrb", "rbbbb", "rrrb", "rbrrb", "rbb", "rbbrb", "brb", "bbbrb", "bbrb", "bbrbb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6636;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"bbe", "e", "eebe", "bebbe", "be", "ebbbe", "bebe", "ebeee", "bbeee", "eeebe", "beebe", "bebee", "bbee", "eebee", "bbbee", "beeee", "beee", "eee", "ebbe", "bbbbe", "bee", "ebebe", "eebbe", "ebbee"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 297904;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"cck", "cccckk", "ckkck", "kcccck", "kkccck", "kckcck", "kckkck", "kkckkk", "kckk", "cckck", "kcck", "kcckk", "kkkcck", "kkk", "kkkkk", "kkkck", "kkcck", "kkkk", "kkcckk", "ckkckk", "ccck", "ckckkk", "kcckck", "kk", "ckccck", "kccckk", "cckckk", "kck", "ckckck", "kkckk", "kckkk", "cckk", "ccckck", "ckkk", "ckkkck", "ckcck", "ccckk", "ckck", "kkkkck", "kckckk", "cccck"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3008502000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"jjjbb", "bbjjb", "bbbb", "jbb", "bbjb", "jjbbb", "bjbbb", "bb", "jjb", "jjbb", "bjjjb", "bjbb", "bjbjb", "jbbb", "jjbjb", "jbbbb", "jjjjb", "bjb", "bbbjb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 26656;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"usus", "us", "sssus", "uuss", "uuuus", "ssss", "suus", "uusus", "uusss", "suuus", "ssuss", "susus", "usuus", "ussss", "ssuus", "uss", "suuss", "suss", "ss"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 63648;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"llss", "lslls", "sssss", "lsssss", "sslss", "lsss", "s", "llssss", "lssss", "lsssls", "slssls", "llsls", "ssssls", "sslls", "lsslss", "slslls", "sllsss", "slsss", "lsslls", "slss", "llls", "slllls", "sllss", "ssssss", "sslsls", "lsllss", "ssss", "llllss", "slls", "lssls", "lllls", "lslsls", "slssss", "ssslls", "ss", "ssllss", "llslls", "lsllls", "lllsss", "sls", "sslsss", "slslss", "lls", "lslsss", "sllls", "slsls", "lsls", "llsss", "ssls"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 39126821580;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"ggggggggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggggggggggf", "gggggf", "gggggggggggggggggggggggggggggggf", "ggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggf", "ggggggf", "gggggggggf", "gggggggggggggggggggggggggggggggggggggggggggggf", "ggggggggggggggggggggggggggf", "ggggggggggf", "gggggggggggggggggggggggggggggggggggggf", "ggggggggggggggggggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggf", "gggggggggggggggggf", "gggggggggggggggggggggf", "gggggggf", "ggggggggggggggggggggggf", "gggggggggggf", "ggggggggggggggggggggggggggggggggggggggggggggggf", "f", "ggggggggggggggggggggggggggggggf", "ggggf", "ggggggggf", "ggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggggggggf", "ggggggggggggggggggggggggggggggggggf", "ggggggggggggggggggggggggggggggggggggggggggf", "gggf", "ggggggggggggggggggggf", "gggggggggggggggf", "ggggggggggggggggggggggggf", "ggggggggggggggggggggggggggggggggf", "gf", "ggggggggggggggggggggggggggggggggggggggggf", "ggggggggggggf", "ggggggggggggggggf", "gggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggf", "gggggggggggggggggggggggggggggggggggggggggggggggggf", "gggggggggggggf", "gggggggggggggggggggggggf", "ggggggggggggggggggggggggggggggggggggggggggggf", "ggf", "ggggggggggggggf", "ggggggggggggggggggggggggggggggggggggf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"yyyyyyyyyyyyyx", "yyyyxx", "yyyyyyyyyyyyyyyyyyyyyyx", "yyyyyyyyyx", "yyyyyyyyyyyyyyyyyyyyyyyyxx", "yyyyyyxx", "yyyyyyyyyyyyyyxx", "yyyyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyyxx", "yyyyyyyyx", "yyyyyyyyyyyyyyyyyyyyyxx", "yyyyyyyyyyyyyyx", "yyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyxx", "yyyyx", "yyyyyyyyyyyyyyyx", "yyyyyyyyyxx", "yyyyyyyyyyyyyyyyyyyyyx", "yyyyyyyyxx", "yyyyyyyyyyyyyyyyyxx", "yyyyyyyyyyyx", "yyyx", "yyx", "yyyyyyyyyyxx", "yxx", "yyyyyyx", "yyyyyyyyyyyyyyyyyx", "yyyxx", "yyyyyyyyyyyyyyyyxx", "yyyyyyyyyyyyyyyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyyyyyxx", "yyyyyyyyyyyyyxx", "yyyyyyyyyyyyyyyxx", "yyyyyyyxx", "yyyyyyyyyyyyxx", "yyyyyyyx", "xx", "yyyyyyyyyyyyyyyyyyyyyyyxx", "yx", "yyyyyyyyyyyyyyyyx", "yyxx", "yyyyyxx", "yyyyyyyyyyyxx", "yyyyyx", "x", "yyyyyyyyyyyyyyyyyyyyxx", "yyyyyyyyyyyyyyyyyyyx", "yyyyyyyyyyyyyyyyyyyyx"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 847288609443;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"z"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"xzcvbnmlkjhgfdsaqwertyuiopoiujklpmnhybtgrfvcdewqas", "xzcvbnmlkjhgfdsaqwertyuiopoiujklpmnhybtgrfvcdewqa", "zcvbnmlkjhgfdsaqwertyuiopoiujklpmnhybtgrfvcdewqas", "zcvbnmlkjhgfdsaqwertyuiopoiujklpmnhybtgrfvcdewqa"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "a", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aa", "b", "ba", "bb", "bab", "bba", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bz", "zaaaaaaaaaaaaaaaa", "aaaaabbbbb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 688;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"asdfghjklpoiuyterwqzxcvbnmlkjopiuymntbjsqwoqirjwop"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"hxnbbbedcylpupnwakdutkfcryjtywlyxqutnhschkmzjwsr", "hxnbbbedpdfzltksmkytz", "wiqezueenpdsspbpssexxbtythgfweemyplbprnpamnpzi", "zoaahceh", "zoaahcehbamjdizpmmcqpkybkoxpzptvjqbxxdlquqpun", "zoaahcehdssxeqdeqpgpehumfumszfdnamtet", "zoaahcehdssxeqezqqegjeduehookvjqzchkofmucshrwo", "zoaahcehdssxeqkvjszaarxxikjl", "zoaahcehrzxghh", "zoaahcehrzxghhnftqpioqquupppxpvyyssbrdggz", "zoaahcehrzxghhougrdmuzgtk", "zoaahcehrzxghhouorcdvbzgqcyuuajvjqcyglsywzi", "zoaahcehrzxghhouorcdvbzictqbwrazdevembaqjijv", "zoaahcehrzxghhouorcdvbzictqbwrazdevinbx", "zoaahcehrzxghhouorcdvbzlfxpbpxnllotrhq", "zoaahcehrzxghhouwsypucapt", "zoaahcehrzxghhqejmqhjrxoxiewhpmcdsrsuejqbpngkkzxtf", "zoaahcehrzxghhqejmqhjrxoxiewhpmskogedplszenaituyuv", "zoaahcehrzxghhqejmqhjrxoxiewhpmuhgyvqdolphtutuwqjz", "zoaahcehrzxghhqendlgprzbpynvahd", "zoaahcehrzxghhqendlgprzbpynvahdzdiidyaafwbfxb", "zoaahcehrzxghhqydnczlkophjbbbgvtdsvekpnug", "zoaahcehrzxghhqypeczjhfdossghngiwkv", "zoaahcehrzxghhqypeczjhfpsucbljsb", "zoaahcehrzxghhqypeczvvyqwg", "zoaahcehrzxghhralijfvdnqgtuoasfajrgkzalrfdsyfhklsm", "zoaahcehrzxghhraxuhxlotgetrjgeieqfwpeivizpd", "zoaahcehrzxghhxotisrohpirparqpctbhyveojv", "zoaahcehrzxghhxotisrohpirparqpctbhyveokxjimhcwfgb", "zoaahcehrzxghhxotisrohpirparqpctbhyveoytqkfainlps", "zoaahcehrzxghhxotisrohpirparqpctbhyveoytqkfamjcl", "zoaahcehrzxghhxotisrohpirparqpctbhyveoyvwbashajm", "zoaahcehrzxghhxovjwbsorhecwdumcsvbypfpezrodgznho", "zoaahcehrzxghhxovjwbsorhecwdumcsvbypfppfcaiqtwu", "zoaahcehrzxghhxovjwbsorhecwdumcsvbypfppfrzqiy", "zoaahcehrzxghhxovjwbsorhecwdumcsvbypfppmliemmjatd", "zoaahcehrzxghhyakqbyhpauxxfeqvqkczqphwphqjqo", "zoaahcehrzxghhyakqbyhpauxxffmcwxjltqgyjbz", "zoaahcehrzxghhyaphpswhwfnhvggisplhzxfbjql", "zoaahcehrzxghhyaphpswhwfnhvggisplhzxfbjqlvokdbp", "zoaahcehrzxghhyaphpswhwfnhvggisplhzxfbjqlvokorzv", "zoaahcehrzxghhyaphpswhwfnhvggtjbfskddpyatwoyw", "zoaahcehrzxghhyaphpswhwfnhvggzaiufpboqzzutkiuep", "zoaahcehrzxghhyaphpswhwfnhviza", "zoaahcehrzxghhyaphpswhwfnhvmwsnigoehgwmkvajazyt", "zoaahcehrzxghhyaphpswhwfnhvmwvbmdrwcsbxuwefbvkksi", "zoaahcehrzxghhyaphpswhwfnhvnqhivbwgvjtyuck", "zoaahcehrzxghhyaphpswhwfnhvojziqusyvv", "zoaahcehrzxghhyaphpswhwfnhvvulgrccueppphqn", "zoaahcehrzxghhzvdfnrdcpzoxzwuihmzeaqdjt"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 131941395333256;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"mqxxccrwiojhoyghuacnqfgxp", "rkjmdhmpvjwqsoekuxoxylpbyoauhbroqprkynerukudrngat", "rkjmdhmpvjwqsoekuxrtucrowlpsvnqcdnizudrztptjghipz", "rkjmdpxszpfgjzdxhhgnzfdzpnojrzuxw", "rkjmdpxszpfgjzdxhhgnzfdzpxfggensjehscfuglieyq", "rkjmdpxszpfgjzdxhhgnzfdzpxfggensjehxxwtuhjtnbagqon", "rkjmdpxszpfgjzdxhhgnzfdzpxfskcnpzlrhrzymfqdtqhcqnz", "rkjmdpxszpfgjzdxhhqbccxzimmpgirtt"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"aljuucqktq", "aljzcztwgzfqmaacqeejrwqaamfyfyflfuszofrvdorlyhdiy", "aljzulvfelsitdgittuectjeqotovoymgdejxdaqxwmmlzupm", "aljzulvfelsitdgittuecttdvershmfsnjwyaynkcgebosou", "esfeqdhegctgxfikjwetrpfzuqmrzvakevnxbjevvwtlyxz", "esfeqdhegctgxfikjwetrpfzuqmrzvakevnxeb", "esfeqdhegctgxfikjwetrpfzuqmrzvakevnxrxbswuc", "esfeqdhegctgxfikjwetrpfzuqmrzvakevnyjctbjuzttt", "esfgidcmzlefzchlgixadaleupkzaruehbdqdsouccptuxlwo", "esfudmrzfkilbjkcgwdcksvbxmngvaomkrifwlpzupl", "esfudmrzfkilbjkcgwdcksvbxmngvaomkriygdkkcaxi", "esfudmrzfkilbjkcgwdcksvbxmngvaomkriygdkkcaxiolfemm", "esfudmrzfkilbjkcgwdcksvbxmngvaomkriyijvimvwdb", "esfudmrzfkilbjkcgwdcksvbxmngvaomkriyijvimvwdg", "esfudmrzfkilbjkcgwdcksvbxmngvaomkriylunuttvbljqdl", "esfvlqmuljmhhxniqhulaecgfzsydsgvqllqp", "esfvwgmuonvufgtdvrobruxghfprirnvbxlhksbzwqxryrgg", "esfvwgmuonvufgtdvrobruxghfprirnvbxlmolggokebtsidwn", "esfvwgmuonvufgtdvrobruxghfprirnvbxlmolgwguhtdqbsmh", "sjocvgofwowtadpuhljthylsnuaviaroktepdlvc", "sjokhcrwtobmhsaobqxxzlzysiqbhqkwhjexnlwzmewsrgowxg", "sjokhcrwtobmhsaobqxxzlzysiqbqkrjj", "sjokhcrwtobmhsaobqxxzlzysiwyvwxrjagsaloxsmvgigbpj", "sjokhcrwtobmhsaobqxxzlzysiylxxb", "sjokhcrwtobmhsaobqxxzlzysizcvcekpibqpenxw", "sjowhrkffyemxkprauzumxltymwrdyktrocl"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 50331648;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"ajnolzhbvjqjjcegshbbqmqenxrlhopnpqnvvcnigszayezrju", "ajnolzhbvjqjjcegshbbqmqenxrlhopnpqnvvcnigszayjxmj", "ajnolzhbvjqjjcegshbbqmqikmlsesznerowauamilywotnbf", "ajnolzhbvjqjjcegshbbqmqikmlsesznerowauamilywoyhxy", "ajnolzhbvjqjjcegshbbqmqmpkxeaystajugpddjmdnkobhvps", "ajnolzhbvjqjjcegshbbqmqmpkxeaystajugpddjmdnkoesvof", "ajnolzhbvjqjjcegshbbqmqmpkxeaystajugpddjmdnkoesvot", "ajnolzhbvjqjjcegshbbqmqmpkxeaystajugpddjmdnkoesvou", "ajnolzhbvjqjjcegshbbqmqqykdlmvgivvjqihubmxpgrbqtfy", "ajnolzhbvjqjjcegshbbqmqqykdlmvgivvjqihubmxpgrev", "mgukefxnpjpjvftjjqwxsnodexwjvkurldpgyrzqbebmspukp", "mgukefxnpjpjvftjjqwxsnodexwjvkurldpqmkvaklqyber", "mgukefxnpjpjvftjjqwxsnodexwjvkurldpqmkvaklqypxmtn", "mgukefxnpjpjvftjjqwxsnodexwjvkurldpqubqxkuuton", "mgukefxnpjpjvftjjqwxsnoevxmkmenkfsnbkjbcdlpzqkyi", "mgukefxnpjpjvftjjqwxsnoevxmkmenkfsnclrbqxkktefn", "mgukefxnpjpjvftjjqwxsnonmqwiluxotvplrcdjivdieh", "mgukefxnpjpjvftjjqwxsnonmqwiluxotvptskhdhoyw", "mgukefxnpjpjvftjjqwxsnoufqvlzatgqosrmlonbffhvqz", "mgukefxnpjpjvftjjqwxsnoufqvlzatgqosvwkjbizdiyi", "mgukefxnpjpjvftjjqwxsnouroroiajwtwufxjasdxjkoejqom", "mgukefxnpjpjvftjjqwxsnouroroiajwtwufxjbtbtskkqydma", "mgukefxnpjpjvftjjqwxsnouroroiajwtwufxjsehqtlgfztyj", "mgukefxnpjpjvftjjqwxsnouroroiajwtwufxjvrcskkgdstha", "mgukefxnpjpjvftjjqwxsnouroroiajwtwufxjwnpskxjxegll", "mgukefxnpjpjvftjjqwxsnouroroiajwtwulphaejfqkanp", "mgukefxnpjpjvftjjqwxsnouroroiajwtwulphjdminx", "mgukefxnpjpjvftjjqwxsnouroroiajwtwupzbnag", "mvjbqissdicxykfbcyjmexmgwzgraulgelk", "mvjbqissdicxykfbcyjmexmpfrpymuhbvigwvdcjt"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"nckqbbgwgoyaxgjbpurprwjxjxbcnz", "nckqbbgwgoyaxgjbpurprwjxjxztskdfcwr", "nckqbbgwgoyaxgjbpurprwjxjxztsttgbesweokarfhnflxzfa", "nckqbbkpuqokrgdrppjsnbvjvdittmksxuoczspzimlqk", "nckqbbkpuqokrgdrppjsnbvjvdittmksxuoczspzimvcsw", "nckqbbkpuqokrgdrppjsnbvjvduthozwvcnjlgbgwtbbxz", "nckqbbkpuqokrgdrppjsnbvjvduthozwvcnjlgbgwttulqfe", "nckqbbznyuatqczoedlhefhooelckhdubqvvomegaowyk", "nckqbbznyuatqczoedlhefhooelckhdubzmtcmcfwnbt", "nckqbbznyuatqczoedlhefhooelckhdujxmyvarmnsaxbkwr", "nckqbbznyuatqczoedlhefhooelckhdujxmyvarmnyuc", "nckqbbznyuatqczoedlhefhooelckhdulnmxjaukx", "nckqbbznyuatqczoedlhefhooextmtogmaefxt", "nckqbbznyuatqczoedlhefhooextmtogmqznlkvzzpy", "nckqbbznyuatqczoedlhefhooextmtogvqlrwallwhymaw", "norroxclfbopitiugfrbopto", "norroxclfbopitiugwjvyqiy", "norroxkrcnqgsiglkuhligcblhuvjrsmgnlncdyjexhxaxj", "ueepobecngpojvwshvrdiykbz", "ueepobzchixfjfhirbcwnqme", "vkltdue", "vkltdueargadhfnaicyygrzexccxciunuvrazhxu", "vkltduhitgdoszxesqg", "zagtfohpayhlulbqikejqhprucmszuxcwobqwbodszy", "zagtfoleboqhliqbvkmgcrrohmbedfvfybn", "zagtfoleboqhliqbvkmljghjdehikfoskkc", "zagtfoleboqhliqbvkmpdwqgfxcpupaleshdmiomslfifqks", "zagtfoleboqhliqbvkmpdwqgfxcpupatlewlz", "zagtfoleboqhliqbvkmpdwqghviivngkpfledbx", "zagtfoleboqhliqbvkmpdwqghviivngquyxioohhxefclbw", "zagtfoleboqhliqbvkmpdwqgohihgzzctzjivgwrhqvmpscvt", "zagtfoleboqhliqbvkmpdwqgohihgzzrhxmdmljrzg", "zagtfoleboqhliqbvkmpdwqgohihgzzwuullaipuqfraaxx", "zagtfoleboqhliqbvkmslyztjxoubnwmndnhsmylczzcuw", "zagtfoleboqhliqbvkmslyztjxtlfifvrcogstxxvwmfoi", "zagtfoleboqhliqbvkmslyztntgfhzkzbrxjqjccgfvo"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 51539607552;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"lnydhtsojeuiycetwyjdvldhqkiolmbpeizotksspstba", "nrudvedszubpcesskv", "okvruaujyuvgufsdcrxbrekrdqaskvbhtcnr", "okvruaujyuvgufsdcrxbrwfkstuuilatlqqagiurnlb", "okvruaujyuvgufsdcrxbrwfkstuuilatlqslyzgmuwdhn", "okvruaujyuvgufsdcrxbrwfkstuuilatlqslyzgmuwlv", "okvruaujyuvgufwfenhfiltoxlfjd", "pxsedjdrtgryvgcbmetnkukgrlucaqdpbuoheegyxr", "pxsedjdrtgryvgcbmetnkukgrlumtdwtc", "pxsedjdrtgryvgcbmetqjqyuydhkxhvtxbxgjzqkpfup", "pxsedjdrtgryvgcbmetqjqyuydhtivtuflysmeojhpsmzriixd", "pxsedjdrtgryvgcbmetqjqyuydhtivtuflysxcnzwjjkdymfub", "pxsedjdrtgryvgcbmetxqtiqlttcrzyzjcewmzpkm", "pxsedjdrtgryvgcbmetxqtiqlttgdytqxejffusiylglqwand", "pxsedjdrtgryvglwwlgwwfrmisivszwggkcupyrd", "pxsedjdrtgryvgmmhcipcccxxudirxjxqaepv", "pxsedjdrtgryvgmmhcirmwjslgrru", "pxsedjdrtgryvgmmhcissqtjpelizutvwmam", "pxsedjdrtgryvgmmhcissqtjpelqjpwjonlf", "pxsedjdrtgryvgmmhcissqtjpsucombpmtornjlubrzh", "pxsedjdrtgryvgopepwihfpa", "pxsedjdrtgryvgopepwihfpagcbbjopzselt", "pxsedjdrtgryvgopepwihfpagldpufxpmvqxvbfotzxnds", "pxsedjdrtgryvgopepwihfpagldvoilxxxznsnvuwnkqe", "pxsedjdrtgryvgopepwihfpawhcdnivjhudcct", "pxsedjdrtgryvgopepwihfpawhcdnivjhudiyuvltnombnql", "pxsedjdrtgryvgopepwihfpawhcdnivjhuexkivvqm", "pxsedjdrtgryvgopepwihfpawhcdnivjhuvmzw", "pxsedjdrtgryvgopepwihfpawhcdnivjhuvyavklokneebb", "pxsedjdrtgryvgopepwihfpawhcdnivjhuydzlpnxdbjruvgqd", "pxsedjdrtgryvgopepwihfpawhcdnivjhuylotk", "pxsedjdrtgryvgopepwihfpawhcpvxwerhcgvywsbg", "pxsedjdrtgryvgopepwihfpawhcpvxwerhsnnqwtqsmwniuq", "pxsedjdrtgryvgopepwlhduyjx", "pxsedjdrtgryvgoqfzuamtsiztyufxfcd", "qkivoiqromswhtdmjlsacncgofpztezzpaslrwrz", "qkivoiqromswhtdtrjtbcnbropahbqwoffjidwbrwyvxkmuc", "qkivoiqromswhtudodntpuyqshf", "tdabhwmtwwhihpdjfzqkmbpzguykkpcnkfydehqqdwbckfy", "tdabhwmtwwhihpdjfzqynsluzqthiamzaw", "tdabhwmtwwhihpgobgkjujr", "tdabhwmtwwhihpzmhhtbnjwivzfrjf", "tdabhwmtwwhihpzmhhtoim", "txerdqryhgnkewkcezwearzmpzkgjwsgspuwsfkrbxkqpd", "txerdqryhgnkewkcezwearzmpzkgjwsgspuwsfkrbxlxsriwn", "txerdqryhgnkewvupeheqcflrqvgsbcmebsnaspxgnbwctueq", "txerdqryhgnkewvupeheqcflrqvgsbcmebsnaspxgncsvvdn", "txerdqryhgnkewvupeheqcflrqvgsbcmebsnaspxgnl", "txerdqryhgnkewvupeheqcflrqvgsbcmebsnaspxgntuvjdec"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 281543696187392;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"awxmyczggubplbfpcpcnwepgzijtdrmo", "sogqvykl", "tewq", "tewqbyiguibzeabvnazczanwwxheyenuhlatsuyvkburyuken", "tewqbyiguibzeabvnazczanwwxheyenuhlatsuyvkburyukkab", "tewqmuzpowtpzyxfmgpwsjtaladudiyaitynrcdzcdnosxran", "tewqmuzpowtpzyxfmgpwsjtaladudiyaitynrcdzcdnosxranf", "tewqmuzpowtpzyxfmgpwsjtaladudiyaitynrcdzcdnosxranz", "tewqmuzpowtpzyxfmgpwsjtaladudiyaitynrcdzcdnosxrqn", "tewqmuzpowtpzyxfmgpwsjtaladudiyaitynrcdzcdnosxrqu", "tewqqcqwawozmuhcrtszsakflzgccfmeaefccslgtpwrpabjq"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 644;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"eythaxksrfvjdpauyqhuwrkqljw", "fxryigqebhrpccuxjcmmspmltsycqvedflrbsdonxtxwyexljn", "fxryigqeojlzlwsnkalcwxtokpaaamlv", "fxryigqeojlzlwsnvymmuryntsytkrjkkhuu", "fxryigqeojlzlwsnxsbjgjwbogcebbgbzhqcfnosavja", "fxryigqeojlzlwsnxsbjgpcbuwysoh", "fxryigqeojlzlwsnxsbjgppfhchmprhfnlihzih", "fxryigqeojlzlwsnxsbjgppplhmpieepqsvf", "fxryigqervkfdqffbauzfkvwglrxcc", "ooypfang", "ooypfangmuwjbnkzrcfjftzrmvszwfsbadrntxgubvlprwulos", "ooypfangmuwjbnkzrcfjftzrmvszwfsbadrntxgubvvrdfkdzx", "ooypfangmuwjbnkzrcfjftzrmvszwfsbadrntxgubvvrdfkdzz", "ooypfangmuwjbnkzrcfjftzrmvszwfsbanfoqcgwfzejejb", "ooypfangmuwjbnkzrcfjftzrmvszwfsbanfoqcgwfzseidldaf", "ooypfangmuwjbnkzrcfjftzrmvszwfwpccabgwssvoqahvrr", "ooypfangmuwjbnkzrcfjftzrmvszwfwpccabxtqybazhzjux", "ooypfangmuwjbnkzrcfjftzrmvszwfwpccabxtqybazhzk", "ooypfangmuwjbnkzrcfjftzrmvszwfwpcgojqzajczhp", "ooypfangmuwjbnkzrcfjftzrmvszwfwpcsgcdounsvis", "ooypfangmuwjbnkzrcfjftzrmvszwfwpcsgchmqtaohkpvl", "ooypfangmuwjbnkzrcfjftzrmvszwfwpcxnctgbhpwujuuy", "ooypfangmuwjbnkzrcfjftzrqhrhtxgqfftnpuurcuhrr", "ooypfangmuwjbnkzrcfjftzrqhrhtxmbudzpdjfdz", "ooypfangmuwjbnkzrcfjftzrqhrhtxye", "ooypfangmuwjbnkzrcfjftzrqhrhtxyednqtarcpzscxb", "ooypfangmuwjbnkzrcfjftzrqhrhtxyepctkvugnmkhvatll", "ooypfangnrtxewvahfnjladepwocfgdtaizahjieqyqpdphe", "ooypfangnrtxewvahfnjladepwocfgldexudjmzokyekh", "ooypfangnrtxewvahfnjladesmgchyohfkpigrvtcry", "ooypfangvhlgqbqnsyiaccafigjmecqmmohqai", "ooypfangvhlgqbqnsyiaccafzfsrxm", "ooypfangvhlgqbqnsyiaccafzfsrxmlhcayhamhzsix", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgerltx", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeyabkuf", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeybmhzb", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeyfstaaqoe", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeyfstrk", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeyfsttdfg", "ooypfangvhlgqbqnsyiaccafzfsrxmotebbumjgeyopu", "xgrbtobehadieypmjzgeu"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 344939561984;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"ensjrdojxbnboeyjqmnavutsufdxytixc", "ipyyiufnpggarzdnwrobjblmeenclwegcqlcusgxnoxeaiqzdi", "ipyyiufnpggarzdnwrobjjwxgtgxmnvihkymcszywtyprfmlzs", "ipyyiufnpggarzdnwrobjllhpqjugluayyukiqkz", "udrbdusrmckuzxwhrfjksbqcjxhcchmlubqxa", "udrbdusrmckuzxwhrfjksbqdzusgasdkznpwhnisqctj", "udrbdusrmckuzxwhrfjksebjjyqwsoyysagftsayacboczubd", "udrbdusrmckuzxwhrfjksebnfpfpuqpyterxfufxiefdnybbv", "udrbdusrmckuzxwhrfjksebqxeeqgeiryramuzcwguw", "udrbdusrmckuzxwhrfjksebwxljwcglubhvzgcnamt", "udrbdusrmckuzxwhrfjksebwxljwcgluboiuiwjzmzvfg", "udrbdusrmckuzxwhrfjksebwxljwcglupwzpaxqyzv", "udrbdusrmckuzxwhrfjksebwxljwcglyfemrymdobzeae", "udrbdusrmckuzxwhrfjksezllnzrdejoqdzapsfxtitsyrd", "udrbdusrmckuzxwhrfjksezrjhlgkeigxqylhblxuyrqacdc", "udrbdusrmckuzxwhrfjksofcooz", "udrbdusrmckuzxwhrfjkspzaqkljogdzkfobufyercdnzndxh", "udrbdusrmckuzxwhrfjkspzaqkljogdzkfobufyerkvnslhp", "udrbdusrmckuzxwhrfjkspzaqkljogdzkfobufyerlquawp", "udrbdusrmckuzxwhrfjkspzaqkljogdzkfobufyerlquawpbdp", "udrbdusrmckuzxwhrfjkspzaqkljogdzkfobufyerlquawpva", "udrbdusrmckuzxwhrfjkspzeljvefvqqabthswooykqhbgj", "ykjxmxeubvsulfazseokmhhadrmpgwgychagvllk"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 5242880;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"azuefpcjqkldeoikyaozzmoxcyfbrum", "azuefpkqyryubrctparlanvys", "azuefptpsxdwpyvjmehndnnmagyxhrirxrwwczkfnvfyfx", "dwmmibckujwejrbnkapbvengdlwzjuhkdpaxkuvruzbkesv", "dwmmibckujwejrbnkapbvkxhouqgmgitxfeixzyltigieeqj", "dwmmibckujwejrbnkapbvkxhouqgmgitxfeixzyltigiiiz", "dwmmibqjmoseeupcbeubdhoquoxvdivtbvcqfglsd", "dwmmibqjmoseeupcbeubdowbp", "dwmmibrxppoulewemtledknrxmgtxliqnftefjrx", "dwmmibrxppoulewemtledtueziizggphno", "dwmmibsfeegguiyetuhzg", "dwmmibsfeegguiyetuhzgcopholaxcuskqzktndrloalwxb", "dwmmibsfeegguiyetuhzgeanpruwbciwvnlak", "dwmmibsfeegguiyetuhzgeanpruwbciwvudznvalexfjlrar", "dwmmibsfeegguiyetuhzgyuzxgyqkdzdejoerlfxfbniduimf", "dwmmibsfeegguiyetuhzgyuzxgyqkdzdeuitdgpdtr", "dwmmibsfeegguiyetuhzgyuzxgyqkdzdeuitnjkfkqtllus", "hbyvsmcsqmsbnjalkdtemqrkwfxmcwddlzbobfeivvhjnogn", "hbyvsmcsqmsbnjalkdtemqrkwfxmcwdgqtkxkkoplczdjn", "hbyvsmhmtnrazgzmazypnzivjzfmglfmttacwlxdthkoaxqt", "hbyvsmhmtnrazgzmazypnzivjzfmglfmttacwlxdthkoays", "hbyvsmhmtnrazgzmazypnzivjzfmglfmttaerjmfpxdxtyzi", "hbyvsmhmtnrazgzmazypnzivjzfmglfxfyhr", "hbyvsmjulvgxycgyqgdrsujabujdsbssguxdrxysnxdal", "hbyvsmjulvgxycgyqgdrsujabujdsbswyyehnaerxqbbjerl", "hdsbcieyrslnhvpoxontdtyrwevoouex"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 34078720;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"awfrsxmgcxjldpupxvycdsveacfvirclbcedgyok", "awkbcsslqperrpnmmsteoyexeoqsrxsltwrzuuabwdhjn", "awkbcsslqperrpnmmsteoyexeoqsrxsltwrzuuewfowwvusur", "awkbcsslqperrpnmmsteoyexeoqsrxsltwrzuugqxikhrzmxzs", "awkbcsslqperrpnmmsteoyexeoqsrxsltwrzuutzhmiec", "awpdmfevegeuqdskzacuajmjyodmcgkyuphgywbjboqxfl", "awpdmfevegeuqdskzacuajmjyodmcgkyuphgywlucuoqbncyd", "awsqlgrzbkdmqshrxxqbfrfqifzgkcteqyrgtmc", "awsqlgrzbkdmqshrxxqbfrfqifzgkcteqyrgtmcdlttkyyuez", "awsqlgrzbkdmqshrxxqbfrfqifzgkcteqyrgtmhn", "awsqlgrzbkdmqshrxxqbfrfqifzgkcteqyrgtmnwbxcbxzx", "eagiiognmdeyg", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetd", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetdjpdk", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetdjpdkfsxs", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetdjpdkkpta", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetdpyljul", "ejdwxecocyenhefuvgmxwsjuqdrrbmjqxoiwyvhetdsskhjcs", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyr", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyrebvnhujldi", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyrebvnhujldk", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyredrathtllh", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyredrathtllr", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyreqnleusefd", "ejfxvvknddhjggdfjpuuztydlxjqelbyeosbvxyrix", "ejgdcyvobuvjbunqzewnxoumocqkglisfipqvsrphigc", "ejgdcyvobuvjbunqzewnxoumocqkglisfipqvsrprcngaeoz", "ejgdcyvobuvjbunqzewnxoumocqkglisfipqvsrprcwnpcloy", "ejgdcyvobuvjbunqzewnxoumocqkglisfipqvsrpukjnpcd", "ejnyejovvslhptwniwfvetwviyfjaefkdawlrtgtnyeubddx", "ejnyejovvslhptwniwfvetwviyfjaefkdawlrtgtqzfdez", "fl", "flpdbamossqdvaxvbejrdsllcxkbtcicbmeampixbxtseo", "lufwotwmoggqdkjojveczghegbpzrnjqr", "lumbwlfgdxppafxzuqhjblnakyptzpaitqjeekjxhckxjpnfbv", "qaf", "qafjfvhxdqnhdranlmdjsnivtmwmeysfgpepdecilcfmow", "qafjfvhxdqnhdranlmdjsnivtmwmeysfgpepdecipvmmthe", "qafofwuvcrbfykbambkxfhpeznqlgypozgdnsliebfsbvcah", "qafpwjwvueliqpxurmphhdqnhguldcselozxstrzgaxsvjzbor", "qafrheqxgfzubusszmdysarcdzdizobebazaamqybihojjf", "qafwrfmenzrdwxszgqrrcafmmklhayuefzemfqboyaebhk", "qafwrfmenzrdwxszgqrrcafmmklhayuefzemfqboyijcb", "qafxjjswydncuovlzyuxrakxnqwdjxixktfmdsupbjwytel", "qafxjjswydncuovlzyuxrakxnqwdjxixktfmdsupbmg", "qafxjjswydncuovlzyuxrakxnqwdjxixktfmdsupbmgrhtyu", "qafxjjswydncuovlzyuxrakxnqwdjxixktfmdsupbpnoupjdq", "qafxjjswydncuovlzyuxrakxnqwdjxixktfmdsupzlpd", "rk", "xbzhbrscuawjmvpi"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 39585636679680;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"oscqadtxygumypbxrdrosyrgelapjalvllqvldf", "oscqadtxylhzbwemjnfeobkawnkclvknruwiqz", "xtwdyvvxn", "xtwdyvvxncufoanrpnkkfz"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"djoruiettgdqhjplushwkhswgvppwhvkkdvdgyzo", "nsaxzcjtbqen", "nsiumgeodewmashttovuyaajvvxq", "nsiumgewpsweawauuwgzairklfheiquajjjtehlxmwknkasg", "nsiumgewpsweawauuwgzairklfhirpjnzxxdp", "nsiumgewpsweawauuwgzairklflamimhi", "nsshoexczzcjkfzwrxeaidde", "nsshoexlngyqlhxezuqbzbrrwrbzrjtwnkhwmasvonigqljzk", "nsshoexlngyqlhxezuqlfmuobgzwxujnncoanos", "nsshoexlngyqlhxezuqlfmuobgzwxujnncoanoswogvsgsmhci", "nsshoexlngyqlhxezuqlfmuobgzwxujnncoanoswokbekfsjl", "nsshoexpzzgvdvsbadq", "nsshoexpzzgvdvsbadqgxqhh", "nsshoexpzzgvdvsbadqgxqhhvtiadjfbfeaobktkygroe", "nsshoexvzkpefxoxqwkvomgqrs", "qmbxczyippbmhjarjftmsgswlxhzuanurgwhw", "qmczcdjqytcfgtswsmmfuo", "qmczcdjqytcfgtswsmmfuolkbnmwsbblaksmucl", "qmkgnxntfdkcrsnlvfvjqjdfpwkiumeomuxtggczcfobttupt", "qmkgnxntfdkcrsnlvfvjqjjfhetcsafjlfswqggpogiqi", "qmkgnxntfdkcrsnlvfvjqjokbrolhrnmbcpzfptxusbniybkf", "qmkgnxntfdkcrsnlvfvjqjokbrolhrnmbcpzfptxymisdkt", "qmmuwskrfcjslnqtkrfnfcacjioihxarpmslujrjrdviwazxyl", "qmmuwskrfcjslnqtkrfnfcfbyklszpiflzvevpkyv", "qmmuwskrfcjslnqtkrfnfcfbyklszpiflzvevpkyvdziwnarwo", "qmmuwskrfcjslnqtkrfnfcfbyklszpiflzvevpkyvvdmcpfivs", "qmuhxvvlexfdvgzccinzcpcjgofwxddpzgbvbwdoksvtitqoyo", "qmuhxvvlexfdvgzccinzcpcjgofwxddpzgbvbwdoyxcnl", "qmuhxvvlexfdvgzccinzcpgrbwroundcvlrrvfhfgwdquzhrql", "qmuhxvvlexfdvgzccinzcpgrbwroundcvlrrvfhftswcxod", "st", "stjln", "stjlnbnbzfahlvvnqcap", "stpzs", "stpzsjwa", "stpzsjwavzfdyze", "stpzsjwavzfdyzensuysrhynjrleko"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2516582400;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"brswkgqncjtckjaanrosuhrbmfgkeb", "brswkgqncjtckjaanrosuhrbmfgkebbrmgizxzo", "brswkgqncjtckjaanrosuhrbmfgkebct", "brswkgqncjtckjaanrosuhrbmfgkebctanlchxzey", "brswkgqncjtckjaanrosuhrbmfgkebctlpiefkj", "brswkgqncjtckjaanrosuhrbmfgkebctxyvtodb", "brswkgqncjtckjaanrosuhrbmfgkebge", "brswkgqncjtckjaanrosuhrbmfgkebgehaab", "brswkgqncjtckjaanrosuhrbmfgkebgehbuhnaavbgywmk", "brswkgqncjtckjaanrosuhrbmfgkebgeyt", "brswkgqncjtckjaanrosuhrbmfgkebsf", "brswkgqncjtckjaanrosuhrbmfgkebsfawmqfrwok", "brswkgqncjtckjaanrosuhrbmfgkebsfawmqfrwokuscqonuy", "brswkgqncjtckjaanrosuhrbmfgkebvx", "brswkgqncjtckjaanrosuhrbmfgkebvxx", "brswkgqncjtckjaanrosuhrbmfgkebvxxbbbourckcql", "brswkgqncjtckjagehydcbnksdflittwiwbddzkw", "brswkgqncjtckjapbaprlexczwralixcmigv", "brswkgqncjtckjavjzyqeibfvmgskddactvvtatkypykjgsm", "brswkgqncjtckjazukvzwikqmzqytxgpmexhshyyplnvqdc", "brswkgqncjtckjazukvzwikqmzqytxmucsqg", "brswkgqncjtckjazukvzwikqmzqytxuqputaplgvmh", "brswkgqncjtckjazvnmpupjzlgyiekguupd", "brswkgqncjtckjazvnmpupjzlgyiekguupdffcabis", "brswkgqncjtckjazvnmpupjzlgyiekrhplniiswznbcssgv", "brswkgqncjtckjazvnmpupjzlgyiekywyopanvgqogwnwdtonl", "mhkdedshcoxxasfgdsrjqrftwpozfazlkcmrqgvdjf", "mhkdedshcoxxasfugdgun", "nawjuhblvlfwhrbuunk", "nawjuhblvlfwhrbzbwrjulxlpvqhzflsvvlpc", "npjzngtqxvnasju", "npjzngtqxvnasjuimslgxjqmyvbdgtjosgbaoqfdyajxemut", "npjzngtqxvnasjukbkrnnxdvyejodyzwzegbwlzp", "npjzngtqxvnasjukbkrprggsod", "npjzngtqxvnasjuomdb", "npjzngtqxvnasjurgvhbmtzbacetc", "npjzngtqxvnasjurgvhj", "npjzngtqxvnasjurgvhjpzbac", "wibmbbkilhiwbuvmosownqj", "wyozqpgjrdvodwgdyztkzqagfnbvfjwpjn", "wyozqpgjrdvodwgsyisrobtckeoxemxky", "xtjmcvpvhnswpdbamtxyae", "yvrywwuoxpxwfiu", "yvrywwuoxpxwfiuznbzobaoehsdwmqbprilysdlhsffetvpdur", "yvrywwuoxpxwfiuznbzobaoehsdwmqbprilysdlhsfkeq"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 247255203840;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"imexd", "imexdbtkbmjwospjomewxrlzbswiaibopzi", "imexdbtkbmrqfomczoxikggpwrocubrxzootvptzdchxwjd", "imexdbtkbmypzdcrnff", "loybhwcreeokxmafkkchdfnggtzovuxgofdtekvdbec", "otjso", "otjsoiucbgefrjywqaymnphteoclwju", "trrkpiyxgqackgvfevwatdebucgjjshzzpqs", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjj", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhou", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhoubvvdqlz", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhouoofts", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhozdmdxtuf", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhozdmdxtus", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjhozumjfuia", "trrkpphzfubmtiedohjolglguejfxrtrfqxfnmjjpyqmrel", "trrkpphzfubmtiedyeqebfahafhbbscudgodxxvd", "trrkpphzfubmtiedyeqebfahafhbbscudgodxxvdgtkfbos", "trrkpphzfubmtiedyeqebfahafhbbscudgodxxvdgttpyhj", "trrkpphzfubmtiedyeqebfahafhbbscudgodxxvdqnqpxtls", "trrkpphzfubmtiedyeqebfahafhbbscudgodxxvdqpaue", "trrkpvhrxcxkzbwdrhfwbscapycvrtmxqaukympzdqj", "uzjpzqsomokdd", "uzjpzqsomokddgdqv", "uzjpzqsomokddgdqvcezmjzxxqrmpfwwgsbtreffyjtetyoq", "uzjpzqsomokddgdqvhvgtgddwesqzuldxixlqrsfgsf", "uzjpzqsomokddgdqvhvgtgddwesqzuldxixlqrumkdev", "uzjpzqsomokddgdqvsghccdgcdvmbrzhasbfqhmmluzub", "uzjpzqsomokddgdqvsghccdgcdvmbrzhasbfqhmmluzuez", "uzjpzqsomokddgdqvsghccdgcdvmbrzhasbfqhmmmzmcryud", "uzjpzqsomokddgdqvsghccdgcdvmbrzhasbfqhohqdfxifbm", "uzjpzqsomokddgdqvuwnajnrdcwjeteoualftxhrbmmbndw", "uzjpzqsomokddgdqvzxrvnrewcrsszqqhqbxtzlc", "uzjpztgesagadxfwfqiakjcjotmhjokooxczjouuztzq", "uzjpzyedcdgtabumqqupbqrxzsnrhlcq"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 611520192;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"jamexaju", "jamexajujax", "jamexajujaxprcmfwpzfkdngns", "jamexajuptnvbocnzqgcys", "ntjsnasa", "ntjsnasabwwlfbcubglekwgkfmzqwayjiriodn", "ntjsnasabwwlfbcubglelbdhznwdiarntjel", "ntjsnasabwwlfbcubglelbdhzuezfjrhrkcbfxb", "ntjsnasabwwlfbcubglelbdhzuoggetxrpgvssybdoe", "ntjsnasabwwlfbcubglilqcskydljdg", "ntjsnasabwwlfbcubglsnbn", "ntjsnasabwwlfbcubgltsacqtidqrsgnkjhyugwfuynkztdgs", "ntjsnasabwwlfbcubgluozcyrtjtlrcexgcouwzbivvbai", "ntjsnasabwwlfbcubgluraoytenegxfwtadpfcllsgrexzhkzd", "ntjsnasaczwomjgozifobh", "ntjsnasaczwomjgozifobhdlrffkzpaxroscklaypf", "ntjsnasaczwomjgozifobhisliegzdsvcmvtmqgg", "ntjsnasaczwomjgozifobhisliegzdsvcmvtonrvxywnsfivt", "ntjsnasaczwomjgozifobhisliegzdsvcmvtonrwsyksb", "ntjsnasaczwomjgozifobhisliegzdsxplzghkhojovpo", "ntjsnasaczwomjgozifxbu", "ntjsnasaczwomjgozifxbujggnedoapkkzistewkopbbvcwhkv", "ntjsnasaczwomjgozifxbuqpvfkpwexgsdryywhgjuloenfs", "ntjsnasaczwomjgozifxbuqpvfkpwexgsdryywpn", "ntjsnasaczwomjgozifxbuqpvfkpwexgsdryywpnueosrwgpbg", "ntjsnasaczwomjgozifxbuqpvfkpwexgsdryywpnueoyvr", "ntjsnasaczwomjgozifxbuqpvfkpwexgsdryywpnuetvk", "ntjsnasaczwomjgozifxbuszmjetbsqijsiywaqet", "ntjsnasaeusnmyqckfs", "ntjsnasaeusnmyqckfsbxcdzfqnpdekivkmfkasyoegtzrrss", "ntjsnasaeusnmyqckfsbxdhzjlshawliwkojxke", "ntjsnasaeusnmyqckfsbxgadyndnlvtssw", "ntjsnasaeusnmyqckfsbxwdempmmr", "ntjsnasaeusnmyqckfsbxwdempmmrsksgb", "ntjsnasaeusnmyqckfsde", "ntjsnasaeusnmyqckfsdeclfafsngvplqi", "ntjsnasaeusnmyqckfsdeclfanlgqvsasslwdacxyncoo", "ntjsnasaeusnmyqckfsdedvuphleziduwylwvsmhyuoj", "ntjsnasaeusnmyqckfskwlcntfown", "ntjsnasaeusnmyqckfskwxttqolwfhnbnmgypfwylovhgd", "ntjsnasaeusnmyqckfskwxttqolwflwgewuzewhhukossj", "ntjsnasaeusnmyqckfskwxttqolwflwgvhejzfgjyjggroiv", "ntjsnasaeusnmyqckfsoylfgjxxl", "ntjsnasaeusnmyqckfsxr", "ntjsnasaeusnmyqckfsxrmrelfbpdqrkbvms", "ntjsnasaeusnmyqckfsxrmyscmycwrhqotronfwr", "ntjsnasaeusnmyqckfsxrynymeervsaudm", "ntjsnasaztnqswyteqvrlzsycsbgbtmbwtvdmynbonf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1074207095815;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"jqghktdhhttujcxuylualikllpx", "jqgsnujscj", "ktbltcclqsxygnshhacpklkkfnrastsmflmpfctrismhyfjevu", "ktbredaxztesbnrzsdfswwnhh", "ktbwvihbndyeyfppquvaiipfcgiiqfspkjiamczocebtu", "ktbwvihbndyeyfppquvaiipfzseowuhgxxnuxvflenyfnzm", "ktbwvihbndyeyfppquvaiipfzseowuhgxxnuxvuydgogtasad", "ktbwvihbndyeyfppquvaiipncqajgwuliqrjdz", "ktbwvihbndymyxglfgksnsvgfcrgbzirrhl", "ktbwvihbndymyxglfgksnsvrobnoeblndol", "ktbwvihbndymyxglfgksnsvrobunbdzjdficmygnw", "ktbwvihbndymyxglfgksnsvtcggy", "ktbwvihbndymyxglfgksnsvuyibizhgnmedqoyxeqmhebl", "ktbwvihbndymyxglfgksnsvuyibizhgnmedqoyxeqmheblgqeq", "ktbwvihbndymyxglfgksnsvuyibizhgnmedqoyxeqmheblgt", "ktbwvihbndymyxglfgksnsvuyibizhgnmedqoyxeqmheblqdme", "ktbwvihbndymyxglfgksnsvuyitiwzudupzmdwxczxfeqp", "ktbwvihbndytlgwzzcrwdulhfqygwbrsivmubotawqvd", "ktbwvihbndytlgwzzcrwdulltfcrrdqxobls", "ktbwvihbndytlgwzzcrwdulltfcrrdqxuygjwevsx", "ktbwvihbndytlgwzzcrwdulnenkcaknenzehsugkrnwthabc", "ktbwvihbndytlgwzzcrwdulwtztzcdvwbjkwzgzdqnabsar", "ktbwvihbndytlgwzzcrwdulwtztzcdvwjxooembrqtvtbyl", "vtvazzuwgfhbkdgrlqmvz", "vtvtlfnyzzwjafqqqo", "xgu", "xgufkjpoxsukmdlnwmmzbpwab", "xguyfmfdccbpceykevzutcarbyv", "xguyonmxmalcybtcldfgicwtqmkfs", "xlesdyyfpubmblzvepwccnhsgwbeni", "xlexgrqfytndvjszgvzjyddwmbitbwiqaxpruaosrvajy"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 679477248;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"gbltvnxgrfgmmtnoawawgwdgjqvoilnbksaldvane", "gczdadgdqevhezhjpieliqxvk", "gczdsgnqrcrpimtwpirtguqssrwmvnjweqvsimndz", "gczdtnfwbrdixiudlxoaztm", "gczdtnfwbrdixiudlxoaztmnssoqntkoahsazvssz", "gczdtnfwbrdixiudlxoaztmnsxrofdsmwkqrauanhv", "gczdtnfwbrdixiudlxoaztmzmqlxiiiecndvhygryyquoca", "gczdtnfwbxtyvehtkujmtzbojwlogjhngmospfbdsgyg", "ppifgvhqfwndxwqqmnntpnstkhsdrdjydjq", "ppifhsuetijxsgyfmiulamvkxcastbrtbekpzkfyt", "ppifhsuetijxsgyfmiulamvkxcastbrtberzfudygfhyngvkk", "ppifhsuetijxsgyfmiulamvkxcastbrtdhsqvgndomtapkapx", "ppifhsuetijxsgyfmiulamvkxcastbrttgopsnzipeoz", "ppifhsuetijxsgyfmiulamvkxcastbrttgyhrzhnpfe", "ppifhsuetijxsgyfmiulamvkxcastbrttgyhrzhnpfenjcyj", "ppifhsuetijxsgyfmiulamvkxcastbrttgyhrzhnpsvrelb", "ppifuwepeuyzesnaylrschbuzwwwcprhadptjaznfeqwouwrzm", "ppifuwepeuyzesnaylrschbuzwwwcprhadptjaznfeymja", "ppifuwepeuyzesnaylrschbuzwwwcprhadptjftkgewpva", "ppifuwepeuyzesnaylrschbuzwwwcprhcjizyawmredfixurd", "ppifuwepeuyzesnaylrschbuzwwwcprhcjizyeyqcirpn", "ppifuwepeuyzesnaylrschbuzwwwcprhcjizyqhsl", "ppifuwepeuyzesnaylrschbuzwwwcprhcjizyqhsliawrkyf", "ppifuwepeuyzesnaylrschbuzwwwcprhhqcnzkfuclotlc", "ppifuwepeuyzesnaylrschbuzwwwcprhlfpvxphzqhitnfva", "ppifuwepeuyzesnaylrschbuzwwwcprhlfpvxufnqm", "ppifuwepeuyzesnaylrschbuzwwwcprhlfpvxufnqmhosxcv", "ppifuwepeuyzesnaylrschbuzwwwcprhlfpvxufxfdboeqefd", "ppifuwepeuyzesnaylrschbuzwwwcprhlfpvxufxfdhaxvkta", "ppifuwepeuyzesnaylrschbuzwwwcprhotqwuexwil", "ppifuwepeuyzesnaylrschbuzwwwcprhpsouqcnkrbhcakeb", "ppifuwepeuyzesnaylrschbuzwwwcprhpsouqyzacegizvdwj", "ppifuwepeuyzesnaylrschbuzwwwcprhwimlyfvxsnjmtzz", "ppifuwepeuyzesnaylrschbuzwwwcprhwimlyfvxsnumcxew", "ppifuwepeuyzesnaylrschbuzwwwcprhwimlysebubaaahgetz", "ppifuwepeuyzesnaylrschbuzwwwcprhwimlyspfdy", "ppifuwepeuyzesnaylrschbuzwwwcprhwimlytdppzrfwrv", "xgvmfdxgbuvhqkzejfdxxrkiuooiawnvhauakrwcyzwx", "xgvmukhxchhwzyglafrbtewdrhwjthptlqilstpkbjm"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 130459631616;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"hgpssqbpoxjyyffmzkfvusbsoge", "lpaejlxi"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"deypuhhdjvwkmfnuxfjafytdrjmdaqjoyabdmgzxobd", "ikvxql", "ikvxqlluwhvczdvtzimbvyerdqzuxeffizrszaqhkjdfpvxtb", "ikvxqlluwhvczdvtzimbvyizxaudvjmnzsmhdhyzmq", "ikvxqlluwhvczdvtzimbvyizxaudvjmnzsmhdhyzmqsy", "ikvxqlluwhvczdvtzimbvyizxaudvjmnzsmhdhyzmqsyvsbo", "ikvxqlluwhvczdvtzimbvyizxaudvjmnzsmhdhyzxuhpuy", "ikvxqlluwhvczdvtzimbvynmqczqrgohivagtdovhkzsugdlq", "ikvxqlluwhvczdvtzimbvynrkpuyixypsuqpuwjvdalwjc", "ikvxqlluwhvczdvtzimbvyugwjwclusqijdmxyjatnt", "ikvxqlluwhvczmtmkfywlzrljebkcuqnfmzmcgggcyoakwc", "ikvxqlluwhvczmtmkfywlzwcwgbzrjsskpamxezhfrfypqzu", "ikvxqlluwhvczmtmkfywlzwcwgbzrjsskpchgcflvptycsj", "ikvxqlluwhvczmtmkfywlzwcwgbzrjsskpchgyvhd", "ikvxqlpkkdydsbugwviqptffvbdbtultdalgvcxtjgsjxb", "ikvxqlpkkdydsbugwviqptowsbcpvbcqpjvadwirhhkxuyp", "ikvxqlpkkdydsbugwviqptowsbcpvbdbwmwlkepauf", "ikvxqlpkkdydsbugwviqptowsbcpvbjqvismj", "ikvxqlpkkdydsdmyjgpifiofanbicxaevcanzt", "ikvxqlpkkdydskratqwezjbkosj", "ikvxqlxmgxclcltzvczyqhwgzuagffiu", "ikvxqlxmgxclcwlzeqvaptjupmacdskzhayxtum", "ikvxqlxmgxclcxtfqomecskm", "ikvxqlyfvabfreurpaoehxxugodgxzpmdksmatswwuforacmpp", "vtqsdpxq", "wnnqym", "wnnqympldzemhwlaaw", "wnnqymxszttqzgniylxzjbdbzxoemiyqumjqpekjlexacl"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 41943060;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"iboocnetuctkud", "iboocnetuctkudatwrjsrcuuamiiilkdxjwipurnccxzqfhtrs", "iboocnetuctkudchovwcmy", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthbkz", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmbu", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmbw", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmds", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmdt", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmeq", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmer", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmfo", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmgd", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmgw", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmhz", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmia", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmjb", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmjj", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmmb", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmms", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmnf", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmni", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmpx", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmrz", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmsf", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmva", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmvc", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmve", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmxl", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmyr", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthpmyy", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthst", "iboocnetuctkudchovwcmyxkxbywdphjdrshqhmznklgthstlh", "iboocnetuctkudfogpyayqjhguxbhcdvjqmtjmjshuxhl", "iboocnetuctkudfogpyayqjhguxbhcdvxaymmytryuda", "iboocnetuctkudfogpyayqjrfwedidawkymlnhtg", "iboocnetuctkudhfnstcplwhvfyfnbjsbhhfmdb", "iboocnetuctkudhfnstcplzfiqnqknstuhmlbpozoyqjdvp", "iboocnetuctkudhnscrqbi", "iboocnetuctkudhnscrqbiwovsdlgmimlovckslmiljdpko", "iboocnetuctkudhnscrqbixycyiuincqpxqmbdfubbarbr", "iboocnetuctkudhnscrqbixycyiuincqpxsftdiizvljlq", "iboocnetuctkudhnscrqbixycyiuincqpxvomvyntyujhjdza", "iboocnetuctkudhnscrqbixycyiuincqpxvomvyntyujhjdzev", "iboocnetuctkudhnscrqbixycyiuincqpxvomvyntyujhjdzkf", "iboocnetuctkudhnscrqbixycyiuincqpxvomvyntyujhjpe", "jgjmjamdfywdddrt", "vkmoulgvzxzlyfckwnueoltwxebwgoqendhgwgi", "zobzzfnirjekjw", "zobzzfnirjekjwzfudvkaxfslrdxrgouchttxzhyk"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 39891656344332;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"fkrzfsyueynbirhbscdytpcjlwfdber", "fkrzpxwmjljpmurjqwqviyoclevps", "fkrzpxwqddfdzhxdintgqgfnklfxebzaqjsmmkucft", "fkrzpxwqddfdzhxdintgqgfnmeiwrbpcygcgrleudojnuq", "fkrzpxwqddfpqrvpqcafsjnxdqpyyrddzzcrkys", "fkrzsyf", "fkrzsyfcxjtoqjtwzbzshzmqjjvnwbpkcbpfwekvmnqmehi", "oaekat", "oaekatnbrilrwzaxkrqfggykfrhuekeanhw", "oaekhl", "oaekhlnrilxyumjdumlb", "oaekkz", "oaekkztukyankcip", "oaekkztukyankcipqsmnzgvxuqhhomrcnrxbm", "weonibgndsgysgtngyfzcfyonqkkhpsast"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6912;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"dawlruvwxmylrqewqudzpg", "thhrjzaunfpouxfdbcmqbjdkighouyrurtrgoiehcwbipsiynk", "thhrjzaunfpouxfdxfzzqpveqgowcvasud", "trkkriiqkemtousm", "trkkriiqkemtousmknyyckhrji", "tzpegjlkhwwifjrla", "u", "ubethhwgdophld", "ubethhwgdophldrbujlyuwjuhkddiingsxksbpufszspk", "udnbdqxzniaecaefeshtcxxdypmerhkc", "udnbdqxzniaecardngbdcocjubuzsetprzax", "uixinblgcgnrwr", "uixinblgcgnrwrrncxvikwzzphbdbkcvbt", "vbxejezktzymob"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3552;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"ejovkwkmhvlqqanpgsmqgaqhyrcpvtzduixdjnfgaotnqf", "himbuvfsuwmyfunitvmefcjgapqkfvpqxykgvewragjdozozs"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"kmjiqainaq", "ohjpsolcelcuwqsamqxhzlbsllbmikjeydzxuecmjlmvkfuvno", "pvsjuwvowj", "pvsjuwvowjafzsgfxfbfiwgksxkzhedlsvgpx", "pvsjuwvowjjleqdqntx", "qoxucuepme", "qoxucuepmejdospdajwbmvpbpkifvagfd", "qoxucuepmejdospdajwbmvpbpkifvagfdvqggwdpynlqihfk", "qoxucuepmejdospdajwbmvpbpkifvagfdvqggwdpynlqx", "qoxucuepmesebyzvlwejetebxfadutugu", "qoxucuepmesebyzvlwejetebxfadutuguohsimsmaiws", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhfjpsoypovog", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhfjpsoyz", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhfjpsoyzfjgee", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhfjpsoyzfjjc", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhfjpsoyzyayiof", "qoxucuepmevyhjyhohsbrcdkgahjbpqeysmhftuerofhbnaxx", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxhemyynxux", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxvo", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxvonziydynpix", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxvonziydynpixe", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxvopxpmvzghdlk", "qoxucuepmevyhjyhohsbrcdkgahjbpqeytqjxvowvulrrjazbi", "qoxucuepmevyhjyhohsbrcdkgahjbpqeyzypyioai", "xozkwlasgy", "xozkwlasgyoatbaxtsbojkhtmgklqbxkayqjornkwjrja", "xozkwlasgys", "xozkwlasgysscjeitw", "xozkwlasgywbdllseoslvmgvkesnykrgweyimrdeiumbnbi", "xozkwlasgywbdllseoslvmgvkesnykrgweyimrmzuqx", "xozkwlasgywbdllseoslvmphtcdklgtxixomqtoley", "xozkwlasgywbdllseoslvmyikdssklyiknglulpno", "xozkwlasgywggqqpqhqgpuhbabeczupomwq", "xozkwlasgywjekmjhasiwl", "xozkwlasgywjekmjhasiwlhryinximmqsizdxnql", "xozkwlasgywqzptsfmhgxwjhekzjkg", "xozkwlasgywqzptsfmhgxwjumfmaycoxqrytcs", "xozkwlasgywqzptsfmhgxws", "xozkwlasgywqzptsfmhgxwsmkravssna", "xozkwlasgywrqftfeictedkqm", "xozkwlasgywrqftfeictedkqmjauorbvejwdsastdoqesxojup", "xozkwlasgywrqftfeictedzed", "xozkwlasgywrqftfeictedzedydkjwpznywrbonrm", "zeaqhvnllnbfvbfrudqetr"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 69875637160;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"fafssecibfdxogrdoohbcxzltojgxfolsdbmayus", "fafssecibfdxoyscdtjkbpll", "fafssecibhxlq", "fafssecibhxlqhqifyauukeqwirlvcpecfddziktnzmsvm", "kfdivilcjjgljrogyuanmmmfbbybwxluuradwe", "kfdivilcjnialctdukdkhjnwnlnhascxymjcgbftrlend", "rgmmlfutfqatbmqjagxv", "rgmmlfutfqatbmqjagxvkxqsgzbastxsmatc", "rgmmlfutfydqvjvfccpgjkicfkrtvzsodlpqcbemdtx", "siciyyuqldeikyopb", "siciyyuqldeikyopbneukrhcirskwkognbfffvlwriju", "siciyyuqldeikyopbneukrhcirskwkolynhogdrvjegasv", "siciyyuqldeikyopbneukrhcirskwkooxwiiue", "siciyyuqldeikyopbneukrhcirskwkorf", "siciyyuqlfiieyucv", "siciyyuqlfiieyucvjtgqasiums", "siciyyuqlfiieyucvjtgqasiumsb", "siciyyuqlfiieyucvjtgqasiumsbbuizcooymgmrrefrip", "siciyyuqlfiieyucvjtgqasiumsn", "siciyyuqlfiieyucvjtgqasiumsnwdnxugrknojieshj", "siciyyuqlfiieyucvpamxyoychc", "siciyyuqlfiieyucvpamxyoychcrskugqqjfyeflymbkljxy", "siciyyuqlfiieyucvxwroijyhvobvloahgtctqblfbyxlqljdr", "siciyyuqlfiieyucvystehgubuk", "siciyyuqlfiieyucvystehgubukfudrgqpxddjul", "siciyyuqlqdoauhphenyjl", "ybstmhiij", "ybstmhiijgpufmlpy", "ybstmhiijgpufmlpybpnidejiylymmedtuxscpnulvya", "ybstmhiijgpufmlpybpolnobhgdgovvhamtyexj", "ybstmhiijgpufmlpyf", "ybstmhiijgpufmlpyfhxrosvvoanqosvoswayzkcldfj", "ybstmhiijgpufmlpyfrypbjnizthgtrgfoyvpnpwig", "ybstmhiijgpufmlpyfwrxphmlnhicngxwxhlbs", "ybstmhiijgpufmlpyfwrxphmlnhicngxwxhlbssdjnbfoqwatd", "ybstmhiijgpufmlpyfwrxphmlnhicngxwxhlbsxskwcexuwoox", "ybstmhiijgpufmlpyfwrxphmlnhicngxwxhlbsxypyrwsw", "ybstmhiijgpufmlpynitjybovotgw", "ybstmhiijlvlgmftt", "ybstmhiijlvlgmfttiducrasmlxkvaryxpozhlgxju", "ybstmhiijlvlgmfttimildwfetszn", "ybstmhiijpfosmkkxskuchnnctkbcpttsfmvfwaewvkziptf", "ybstmhiijpfosmkkxsushcnzebaauk", "ybstmhiijpfosmkkxsushcnzebaauke", "ybstmhiijpfosmkkxsushcnzebaaukefxwqergmzrtjrwmatqp", "ybstmhiijpfosmkkxsushovnmynamjeehvsib", "ybstmhiijzggvbteliwvzudicowtfgwmlmrzgkgm", "ybstmhiijzggvbtelptgxthdgwyrelm", "ybstmhiijzggvbtelptgxthdgwywopsniejpaevywpyqtajxc"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 336890440512;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"gavryhsevjxvexshas", "hqnuncddzkdnxircv", "hqnuncddzkdnxircvdfhxjkqhmcowldrmf", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfb", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfbcwtsnkmy", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfhekgdriancdvfdx", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfhekgsjjicedbrym", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfhmro", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfhmrozrijgfq", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfobpqhhyk", "hqnuncddzkdnxircvdfhxjkqhmcowldrmfoexmitwn", "hqnuncddzkdnxircvdljkvdkezkxygvyncd", "hqnuncddzkdnxircvffxlerdtdkazlnjdnr", "hqnuncddzkdnxircvfksngtnwzjohmtajacbtgslxhnjbl", "hqnuncddzkdnxircvfldargtowjwhjrlwjaolcq", "hqnuncddzkdnxircvfldargtowjwhjrlwjaolcqhzp", "hqnuncddzkdnxircvfldtylaztfqrqupiftdatlk", "hqnuncddzkdnxircvfldtylaztfqrqupiftdatlkparlvv", "hqnuncddzkdnxircvfldtylaztfqrqupiftdatlo", "hqnuncddzkdnxircvj", "hqnuncddzkdnxircvjucpnntmwmeqgmftzvymkn", "hqnuncddzkdnxircvmxuhyvrcfrtkykttbpgjcjwoimvdeqm", "hqnuncddzkdnxircvv", "hqnuncddzkdnxircvvklioyfohngfxuorefjyyfaaxcrznn", "hqnuncddzkdnxircvvkodnqasznffozpaahqxmaaa", "hqnuncddzkdnxircvvkodnqasznffozpaahqxmaaadl", "hqnuncddzkdnxircvvkodnqasznffozpaahqxmaaasrywyqsol", "hrfqfufgndquhplej", "hrfqfufgndquhplejpawwxapnqdm", "yoqzhtfoeoaoagfoeioijoehrnlgnvo", "yssrzxvlizejdkvbzbfvfisgewsagkuzbzvikwaxskqjppg"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 33073944;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"cmifoczjhohxfmmoxjygrbistqktdmvfpummpyhs", "didfzzfqoxszhevfmzbvusawtpkylhpzpzql"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"crvoxd", "crvoxdetuefetithwqybwybbylmjxdpngwrjvtrsdjrwgpnni", "crvoxdnkcxbjbntyfxdrxfwkqzagqujsswpxzgddpozzutpeux", "cycotwaujhgpfazodxggpobqsomjiwhnoabvpifqahkkkvob", "cycotwaujhgpnhnuopzmrkrvoricvtoxtehxdwwujfut", "cycotwkyfwxuekmcesks", "cycotwpkuuyx", "cycotwpkuuyxnwgazdojiulchhjafszlvodmkarkbitu", "cycotwpkuuyxwzxd", "lztifl", "lztiflqamkvbhx", "lztiflqamkvbhxcwwlummug", "lztiflqamkvbhxcwwlummugwoiylblwoxntfbxmlazks", "lztiflqamkvbhxcwwlummugxvpqaqnckzoxtqmx", "lztiflqamkvbhxcwwlummugxvpqaqnckzoxtqmxzordeiohaz", "lztiflqamkvbhxfgqklbpau", "lztiflqamkvbhxfgqklbpaucvmuudvylbirlhhpbxsqtf", "lztiflqamkvbhxfgqklbpaucvmuudvylogexhnfwwsbajc", "lztiflqamkvbhxfgqklbpauoljcfbufwuttlgp", "lztiflqamkvbhxiadzbvdqx", "lztiflqamkvbhxiadzbvdqxfemqplub", "lztiflqamkvbhxqxorgekskmbrnpcclvjf", "lztiflqamkvbhxqxorgekskxtnkld", "lztiflqppdhtsh", "lztiflqppdhtshsqrdfzh", "lztiflqppdhtshsqrdfzhksffrsbqyvl", "lztiflqppdhtshsqrdfzhksffrsbqyvlpvfxzaqacpqbeegfj", "lztiflqppdhtshsqrdfzhksffrsbqyvlsaxuyl", "lztiflqppdhtshsqrdfzhksffrsbqyvlsaxuylsauafzsxdxh", "lztiflqppdhtshsqrdfzhkxnysndmkghbnbwahxjeuybu", "lztiflqppdhtshsqrdfzhptnlegikajkcenq", "lztiflqppdhtshsqrdfzhpvcvajdwhtzllokdrv", "lztiflvibrozwseuvyxfqsshiquxip", "wkksli", "wkkslif", "yadfhbfqvdlchvcdowx", "yadfhbsxbkmnkvprnhqwyzptiuvhdcuudtamflyinvweejy"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 210751200;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"vjsjpgoqddyxr", "vjsjpgttnmajhjjbmvnyrose", "vjsjpgttnmajhjjbmvnyroseetcsdfnjcdkkfnpouqoo", "vjsjpgttnpcswisglzgymlrrmpnvhdjtlxgxavrt", "vjsjpgwhzmpfjiulezvkqkimlsaeidnoawgvxgkryaecttc", "vjsjpgwhzxfwlpejuvudmueqxxdld", "vjsjpgwhzxfwlpejuvudmueqxxdldkmscfhfumxbjaabkipnlx", "xlqehh", "xlqehhamlkxxvakrdyoqkeqvkbfjhvma", "xlqehhamlkxxvakrdyoqkolomitiwta", "xlqehhamlkxxvakrdyoqvyiwyueeruvvbrpnqmlypapvsb", "xlqehhpnhhgyxogerasqmiixhwlw", "xlqehhpnhhgyxogerasqmiixhwlwpobujmabjkjeft", "xlqehhpnhhgyxogerasqmiixhwlwqmlmre", "xlqehhpnhhgyxogerasqrewzplebbhmzgwuslrljnwo", "xlqehhsmcowjddamkfczsyduypnfgfsjvcnolqk", "xlqehhsmcowjddamkfczsyduypnfgfsjvcnolqkcshwmzovxij", "xlqehhsmcowjddamkfczsyduypnfgfsjvcnolqkj", "xlqehhsmcowjddamkfczsyduypnfgfsjvcnolqkjzacitknjan", "xlqehhsmcowjddamkfczxuihubrikgnocvnowygtkqmukvm", "xlqehhsqexseukajyiirexvgnerriymtxiathztqmx"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 161352;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"aij", "aijciwwrqrteglrzvhlefulfho", "aijmeotsqvgmriwkvnhcza", "aijmeotsqvgmriwkvnhczaryrcjfirojc", "aijmeotsqvgmriwkvnhczasihjvkyodv", "aijpsdtmvmyrrmrjmryumm", "aijpsdtmvmyrrmrjmryummgvhlqwfuv", "aijpsdtmvmyrrmrjmryummgvhlqwfuvcniysjvhi", "aijpsdtmvmyrrmrjmryummqigyajxrtaegmq", "aijvcseasljwfxkzmlpyzb", "aijvcseasljwfxkzmlpyzbamnpv", "aijvcseasljwfxkzmlpyzbamnpvruucctgcv", "aijvcseasljwfxkzmlpyzbamnpvruucctgcvdkzhyjnnbq", "aijvcseasljwfxkzmlpyzbamnpvruucctgcvgftqfdmmhu", "aijvcseasljwfxkzmlpyzbamnpvruucctgcvhtwkcnaulcp", "aijvcseasljwfxkzmlpyzbjwixa", "aijvcseasljwfxkzmlpyzbjwixartttuevw", "aijvcseasljwfxkzmlpyzbjwixartttuevwhtpfslwxhff", "aijvcseasljwfxkzmlpyzbjwixartttuevwnbocornbl", "aijvcseasljwfxkzmlpyzblikrmeay", "aijvcseasljwfxkzmlpyzbndrbl", "aijvcseasljwfxkzmlpyzbndrblgqyjirgkbzzlfrjtip", "aijvcseasljwfxkzmlpyzbndrblwtdauwguijvncezguzh", "aijvtczjnduqqytrculqvvdkxhtfutrqhxchdsp", "qkqzcumoulhixukxtarcfsvprkdfcyrdnitytaqmg", "qlm", "qlmcmxipbdzwfpoq", "qlmcmxipbdzwfpoqkeahsuwfypehml", "qlmlkjrdgqdpsbyfoinjxw", "zbk", "zbkergdwusefeiyiwkqpmrmztxvbiw", "zbkergdwusefeiyiwkqpmrmztxvbiwuvifiwhigsmwa", "zbkvsjjcvghojycrwgcesepqjgcduw", "zbkvsjjcvghojycrwgcesepqjgcduwy", "zbkvsjjcvghojycrwgcesepqjgcduwyaamx", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxn", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnfc", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnfcfcwdkmmshhp", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnfcjvvxrdfovt", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnfcjvvxrdfovtrr", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnibsi", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxnvzexouxjmfvg", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxv", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxvunqufr", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxvv", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxvvrbadoq", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxvvyopeuxyjj", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxvye", "zbkvsjjcvghojycrwgcesepqjgcduwyaamxxzjciuyzgn"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 4316096736;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftg", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgj", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjc", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjce", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjcescmd", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjcsjho", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjcvp", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjff", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjg", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjgx", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjgxcopk", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgjiwnp", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgju", "esctzvdzikevzovnvqylezxdvxowsvhhdhggfuoeftgmcizrgf", "kavvbrpldpkxiphnmfggsvuyjdiesciaxlerwtjcegpvgcasv", "zdlacaoefpctwllelnijezcutvtfjrawkdprpnkxjvlsd", "zywfvwjsswxaphtbkmkboqwrxosiociacysfysqrowfvwzf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6680;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"bxjmzrwmiarrc", "bxjmzrwmiarrcpojbavqlobsmnbpszahdbcclfjeeyeaijdqq"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"cdvywa", "cdvywahtqvibsuhexcayi", "cdvywahtqvibsuhexcayizmrwcqynkdzjudibrpswobihlv", "cdvywakvglbrfzgfovlju", "cdvywakvglbrfzgfovljugldkpzvrlmibdismjztkmp", "cdvywakvglbrfzgfovljuifjiqqhwcfciit", "cdvywakvglbrfzgfovljutukobrjkernbnaxxjq", "cdvywakvglbrfzgfovljuu", "cdvywakvglbrfzgfovljuuiw", "cdvywakvglbrfzgfovljuuiws", "cdvywakvglbrfzgfovljuusu", "cdvywakvglbrfzgfovljuusuvbqztesvbgzuwrvker", "cdvywatarvrtfzxbuwjxahg", "cdvywazflqvxrqxacgjkcllostqmkwnnunjhwvolicdtnpv", "jidqef", "jidqefc", "jidqefcjnayvpzmvxjjmn", "jidqefcjnayvpzmvxjjmnbthsevyqnwfbscrdrdv", "jidqefcsvvmpcqfxrbpal", "jidqefcsvvmpcqfxrbpalgwrsh", "jidqefcsvvmpcqfxrbpalgwrshkaixqjzmrltgoajrr", "nodoijfwicsktffc", "osadlglt", "xdsosbpqkpvho", "zhoodkdsqxnhkebfdncxakvmwgz", "zqyvosoczzsgudvrzlzhelzxfinocqvqzokmzzxeezwz"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 435904;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"qhdninjb", "qhdninjbcealcatkqssemqioigviinpucsnirxmsdwiwmblh", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisr", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqk", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqke", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkea", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkey", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkez", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqky", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkyh", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkyj", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkyr", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkyu", "qhdninjbdslgxhitgogpfmwwiivwqumzcsmbwwryzrmisrqkyz", "qhdninjbgskoxwciwqfbeybypyexoyaogoktwfnijfyitnzx", "qhdninjbucqstktwdhpxsjaobyjmkceonqcwkkvvuyswtl", "qhdninjbucqstktwdhpxsjaobyjmkceonqcwkkvvuyswtlu", "qhdninjbucqstktwdhpxsjaobyjmkceonqcwkkvvuyswtlut", "qhdninjbucqstktwdhpxsjaobyjmkceonqcwkkvvuyswtlutrx", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyireps", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepsawf", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskce", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcea", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcee", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcei", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcej", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcek", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcel", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcen", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskceo", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskceq", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcer", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcev", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcew", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcex", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepskcez", "qhdninjbxqqqazlxngzbhfhkjrpgidtozsnqhblbyirepsnwwx", "rbzplgma", "rbzplgmamzyrhtdwmpofysgurrbtfgtn"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1175805543;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"bjzekalzyxs", "bjzekalzyxsguoe", "bjzekalzyxsguoedyktgkiu", "bjzekalzyxsguoedyktgkiuygfuxyfzxqbnwxsuevololdkt", "bjzekalzyxsguoedyktgkiuzrerfvvtpiwze", "bjzekalzyxsrpmz", "bjzekalzyxsrpmzgl", "bjzekalzyxsrpmzgluzmwbyc", "bjzekalzyxsrpmzgluzmwbycfikeastgnfbfooymey", "bjzekalzyxsrpmzsdnmcgffbdrhrcepnxezlfjfg", "bjzekalzyxsrpmzym", "bjzekalzyxsrpmzymxilrmvknryhynwgyzlm", "bjzekalzyxsrpmzymykamfmllnrb", "bjzekalzyxsrpmzymykamfmllnrbbshmaoiybiliwpoctfd", "bjzekalzyxsrpmzymykamfmllnrbppqvzukejsqtzltmjc", "bjzekalzyxsrpmzymykamfmllnrbqkckiqpnxgfhcidj", "bjzekalzyxsuohygicqpdcrwdtwloksxdjvg", "hhxjazpqrdq", "hhxjazpqrdqaq", "hhxjazpqrdqaqfmtitsluoeuualzthagempwyudju", "hhxjazpqrdqaqg", "hhxjazpqrdqaqggcnoxqimh", "hhxjazpqrdqaqgij", "hhxjazpqrdqaqgijjctmlfadagme", "hhxjazpqrdqaqj", "hhxjazpqrdqaqjgqdv", "hhxjazpqrdqaqjgqdvqhdvesppboyqqrwpxnvvlobdejrbb", "hhxjazpqrdqaqjgqdvqhdvesppboyqqrwpxnvvlobdejrbbsx", "hhxjazpqrdqaqjkkef", "hhxjazpqrdqaqjkkeftvoygvlrcyjaumondetxyq", "hhxjazpqrdqaqjxcgm", "hhxjazpqrdqaqjxcgmbjihidjpkwbywqhimnkc", "hhxjazpqrdqaqw", "hhxjazpqrdqaqwcttiwikijhp", "hhxjazpqrdqaqwd", "hhxjazpqrdqaqwdwpcuscdqgbhcmbvevivgxhhhx", "hhxjazpqrdqaqwj", "hhxjazpqrdqaqwjkftdjvufjuqxjjvpvrsqxajzsutwnpqe", "hhxjazpqrdqaqwjyqhepgzxhzjilzwlkferkulikpnazkx", "hhxjazpqrdqow", "hhxjazpqrdqowvpccokcgyzceiosfp", "hhxjazpqrdqowxc", "hhxjazpqrdqowxcvttrvabe", "hhxjazpqrdqowxcvttrvabefrgxqkyyvoafpdzku", "hhxjazpqrdqsz", "hhxjazpqrdqszcfzoajhzfgzuuswzglyyztvwxlustxckrhaju", "hhxjazpqrdqszelydisiusvcptxxjrt", "hhxjazpqrdqszvgddzeuskgcpf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2389532860;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"bmtqrqftnnkqtwgfonvioqmmjdb", "bmtqrqftnnkqtwgfonvioqmmjdbc", "bmtqrqftnnkqtwgfonvioqmmjdbczqzykuyiu", "bmtqrqftnnkqtwgfonvioqmmjdbd", "bmtqrqftnnkqtwgfonvioqmmjdbdwvu", "bmtqrqftnnkqtwgfonvioqmmjdbdwvufyh", "bmtqrqftnnkqtwgfonvioqmmjdbi", "bmtqrqftnnkqtwgfonvioqmmjdbincphhczzlogrrgzsm", "bmtqrqftnnkqtwgfonvioqmmjdblsdtcfmhqploqxwxuyjgo", "bmtqrqftnnkqtwgfonvioqmmjdbq", "bmtqrqftnnkqtwgfonvioqmmjdbqjns", "bmtqrqftnnkqtwgfonvioqmmjdbqjnsbxjbuxdqklaaxxchnj", "bmtqrqftnnkqtwgfonvioqmmjdbqjnsdsovjrsagywgrmrgvp", "bmtqrqftnnkqtwgfonvioqmmjdbqjnshuapkcmsqqducbqnwp", "bmtqrqftnnkqtwgfonvioqmmjdbqvxjsqnuwrypcejdezhabo", "bmtqrqftnnkqtwgfonvioqmmjdbv", "bmtqrqftnnkqtwgfonvioqmmjdbvuoqnhsppksyzoxuji", "cnzrnfycuympxtwhvtanylfudgu", "cnzrnfycuympxtwhvtanylfudguemitqkxjifmfaoqzjkp", "cnzrnfycuympxtwhvtanylfudguemitqkxjifmfaoqzjkpkf", "cnzrnfycuympxtwhvtanylfudguemitqkxjifmfaoqzjkpyekk", "cnzrnfycuympxtwhvtanylfudgurpwqsvtyygsyyksrgby", "cnzrnfycuympxtwhvtanylfudgurpwqsvtyygsyyksrgbyg", "cnzrnfycuympxtwhvtanylfudgurpwqsvtyygsyyksrgbygu", "cnzrnfycuympxtwhvtanylfudgurpwqsvtyygsyyksrgbygutj", "cnzrnfycuympxtwhvtanylfudgurpwqsvtyygsyyksrgbyzai", "dnenfneulynxbyuwlxhbfzzpueafkpiqyagxyvphhbngm", "jzcvkukarmsdckorzcjfcicteaukvwtvj", "kpicsknytmrcmptpjqifnqcnjjm", "nienoiqharfleqqjuwrwsntnmdsyqavluxlyecgjdlznc", "nqhjwveaxanixctmhpuwgfkeqvchfynhfstermwoyp"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 6042560;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"crcrpnulj", "crcrpnuljcyzfenptzxikovpksda", "crcrpnuljcyzfenptzxikovpksdaufbestufnoiyywgymbf", "crcrpnuljcyzfenptzxikovpksdaufbestufnoiyywgymbfypz", "crcrpnuljlaeaqrmocqyphosfittfzabdngulvyhwokmar", "crcrpnuljozklardzgejmlgzioaq", "crcrpnuljozklardzgejmlgzioaqsyzgkb", "crcrpnuljozklardzgejmlgzioaqsyzgkbxaceuuogvugcb", "crcrpnuljozklardzgejmlgzioaqvxjiwzbvnfagrewuxursdi", "iokpbgfvb", "iokpbgfvbglw", "iokpbgfvbglwfqkxuegdcueynodpkfq", "iokpbgfvbglwrxiankfxrikjnsfaiug", "iokpbgfvbglwrxiankfxrikjnsfaiuglszwv", "iokpbgfvbglwrxiankfxrikjnsfaiugvdu", "iokpbgfvbglwrxiankfxrikjnsfaiugvdukupptfdmke", "iokpbgfvbglwrxiankfxrikjnsfaiugvduohakhevftqbsqk", "iokpbgfvbglwrxiankfxrikjnsfaiugvduwrwdghkvutqjsdd", "iokpbgfvbglwrxiankfxrikjnsfaiugvduytcqfeomyhhhqtd", "iokpbgfvbglwrxiankfxrikjnsfaiugwelhxgfejkcjqiukg", "iokpbgfvbstx", "iokpbgfvbstxcqpxl", "iokpbgfvbstxcqpxlclsghfzhzzzxmhrevcrkhb", "iokpbgfvbzee", "iokpbgfvbzeeefngxz", "iokpbgfvbzeeefngxzurlownmamw", "iokpbgfvbzeeefngxzurlownmamwmgwfpcwcvhxbjv", "iokpbgfvbzeeefngxzurlownmamwvpxjn", "iokpbgfvbzeezuojhyrfbjqkrlpmssizebeyhfpreawd", "sycvarrirckfevzvnodzfkyx", "uugeymcsw", "uugeymcswophhifawetqghbnlw", "uugeymcswophhifawetqghbnlwbl", "uugeymcswophhifawetqghbnlwblaskq", "uugeymcswophhifawetqghbnlwblaskquu", "uugeymcswophhifawetqghbnlwblaskquuxzlnozhwbwawon", "uugeymcswophhifawetqghbnlwblyiin", "uugeymcswophhifawetqghbnlwblyiinmkgpkseikv", "uugeymcswophhifawetqghbnlwdkdsnnefjanluyzgsynf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 23074968;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"aabgeock", "aabgeockhnipamcvailv", "aabgeockhnipamcvailvugcsywkdondfdww", "aabgeockneoodyvhrpyw", "aabgeockneoodyvhrpywczdxqqfxqcd", "aabgeocknzusmtbczhycjlkcak", "aabgeockrgnrhxsumcvx", "aabgeockrgnrhxsumcvxeieavifnabxfjksjedmzrov", "rtgwcsfl", "rtgwcsflymrjbjoerqol", "xewmqkrr", "xewmqkrrkeqspyjtp", "xewmqkrrohgyrbprb", "xewmqkrrohgyrbprbayuklsmxehsdi", "xewmqkrrohgyrbprbayuklsmxehsdimcy", "xewmqkrrohgyrbprbayuklsmxehsdis", "xewmqkrrohgyrbprbayuklsmxehsdishbzz", "xewmqkrrohgyrbprbayuklsmxehsdishbzzr", "xewmqkrrohgyrbprbayuklsmxehsdishbzzrqw", "xewmqkrrohgyrbprbayuklsmxehsdishbzzrqwzayogwocpd", "xewmqkrrohgyrbprbayuklsmxehsdissmin", "xewmqkrrohgyrbprbayuklsmxehsdissminbyt", "xewmqkrrohgyrbprbayuklsmxehsdissminbytqtr", "xewmqkrrohgyrbprbayuklsmxehsdissminbytqtrrfdrnah", "xewmqkrrohgyrbprbayuklsmxehsdissminhwlhitzvpgtl", "xewmqkrrohgyrbprbayuklsmxehsdisyefzwpuc", "xewmqkrrohgyrbprbhricpemouifyu", "xewmqkrrohgyrbprbhricpemouifyuypzbopdjuqzbobiunfi", "xewmqkrrohgyrbprbkntnsqxzwfmgv", "xewmqkrrohgyrbprbkntnsqxzwfmgvhfaofcvpnldk", "xewmqkrrohgyrbprbznquooeuyggauijrsoco", "xewmqkrrqemralnav", "xewmqkrrqemralnavhsjblkocybndpjcoaezrpvuffuiueasq", "xewmqkrrqemralnavxnynoqybpqmq", "xewmqkrrqemralnavxnynoqybpqmqqeayvneroepfttlxnur", "xewmqkrrrsurseyds", "xewmqkrrrsurseydsd", "xewmqkrrrsurseydsdqzvr", "xewmqkrrrsurseydsdqzvrmnbxhtogxjomnlstfxlbpzlm"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 38057415;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"bymzchnpmhqzhnbjvohbdibfunfcbhmpwwcexfrenvhoclzsc", "cxz", "cxzjrmqrlxihqmexaijzsxmhogmylpxrsbmnqhd", "cxztbgpfgfcynrevecrarwzkmgacccdplggtqagr", "cxzxlzz", "cxzzeecttrsefuzlidaotdocpyocdumjgyuxisifpnmcp", "ttd", "ttdlgghfemenpbrkaftnhibufqkurihycu", "uvo", "uvomauucgbbcmjxhqvw", "vij", "vijqcabtmbwwsokntvobr", "vijqcabtmbwwsokntvobrjzweehpzn", "vijqcabtmbwwsokntvobrjzweehpznp", "vijqcabtmbwwsokntvobrjzweehpznpbc", "vijqcabtmbwwsokntvobrlsdfnqoltm", "vijqcabtmbwwsokntvobrwvcgjrqtdzngdrprhgltocteru", "vijryqicoxsjaemaaplml", "vijryqicoxsjaemaaplmlmvmwlfmxabqmfxpqxjugjjwacz"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 15912;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"mdtlytqwxhzmzlbkdfm", "mdtlytqwxhzmzlbkdfmgeaqkguhyroq", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqe", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqeqltsx", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqeqltsxtoviwlufwh", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqespqpa", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqespqpaf", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqcqespqpafftmvs", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqdgiqhwasz", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqevq", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqevqoxpodjuwnexj", "mdtlytqwxhzmzlbkdfmgeaqkguhyroqevqyuydsjfmktmfqd", "tatapdqwntmludpcbxx", "tatapdqwntmludpcbxxk", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiu", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuev", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevaq", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevbt", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevdt", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevgm", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevgs", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevgz", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevhs", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevim", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevke", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevlq", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevlv", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevmg", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevnc", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevoj", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevpk", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevps", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevqe", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevrb", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevrf", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevrg", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevrt", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevsr", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevsy", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevte", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevud", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevun", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevup", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevuu", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuevzm", "tatapdqwntmludpcbxxkifbwoxsnakwmomaalpchdtfuiuze", "tatapdqwntmludpcbxxkvrtfwaluxwgmtgrszdmndhhayh", "tatapdqwntmludpcbxxzzimjlcuubkxnkdyo"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 566935685052;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"xfxtqhi", "xfxtqhisu", "xfxtqhisucfydibfgavrziogwlg", "xfxtqhisucfydibfgavrziogwlgcf", "xfxtqhisucfydibfgavrziogwlgcfq", "xfxtqhisucfydibfgavrziogwlgcfqgm", "xfxtqhisucfydibfgavrziogwlgcfzzasl", "xfxtqhisucfydibfgavrziogwlgznaqkpdezpnxptxwgz", "xfxtqhisunisknrdxbuyxhjwxdifdimsuulkwrbrd"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"cwtu", "cwtuw", "cwtuwggqhbhqpalhyupeqbbmupk", "cwtuwowcxy", "cwtuwowcxycedpzbeseehbrxvvghsvlfsc", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuy", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyz", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzs", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzsnh", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzsnhlmc", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzsnhqov", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzsnhxee", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzsnhzir", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzstf", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzstfja", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzstfjar", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzz", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzl", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzlop", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzlophe", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzloptf", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzltz", "cwtuwowcxycedpzbeseehbrxvvghsvlfscrtibzuyxyzzqgpj", "cwtuwowcxycedpzbeseehbrxvvghsvlfscxaolcrplgqiipfs", "cwtuwowcxydggsiyobavytconecbsuldalud", "qfjo", "qfjobzdehvpuabtw", "qfjobzdehvpuabtwwzqzroyzpfsvrgaloiljhjqxic", "qfjobzdehvpuabtwwzqzroyzpfsvrgaloiljhjqxicqmf", "qfjobzdehvpuabtwwzqzroyzpfsvrgaloiljhjqxicqmfbijkh", "qfjoxwwxrrkkjcie", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkg", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkgpro", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkgpror", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkgprorz", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkgprow", "qfjoxwwxrrkkjcieyrgvswtnviufpkfsugfzgtdxupnkgprowu", "utsi", "utsis", "utsiswarijrbdofemskuygxjayotatgtcwkphoaslhurilpnyw"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3103680;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"hylpiqhehmlyhrbmnrlfzmxryflfnccbsjsplmuaggazm", "jgnhytijedvncnqk", "jgnhytijedvncnqks", "jgnhytijedvncnqksgfjnvvgssynlb", "jgnhytijedvncnqkskihryspsvxdmbpvonzmqs", "rmvvyfctdoaummqg", "rmvvyfctdoaummqgahbdrwy", "rmvvyfctdoaummqgahbdrwygbkq", "rmvvyfctdoaummqgahbdrwygbkqbssqdfi", "rmvvyfctdoaummqgahbdrwygbkqbssqdfizg", "rmvvyfctdoaummqgcxepobi", "rmvvyfctdoaummqgcxepobii", "rmvvyfctdoaummqgcxepobiiwwewiauixymnpucmneofpqcebg", "rmvvyfctdoaummqgmlecogr", "rmvvyfctdoaummqgmlecogri", "rmvvyfctdoaummqgmlecogrixgezsism", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovd", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovdg", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovdgnbdh", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovdgnbdhsi", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovdgnbdhsie", "rmvvyfctdoaummqgmlecogrixgezsismdouoklovdgnbdhsiek"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2412;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"efvu", "efvuyptoxitgkxqagjssoigqtlvvojqxnblmlkpddlmghqo", "gfxr", "gfxrjgdklovl", "gfxrjgdklovlfqwdplrz", "gfxrjgdklovlfqwdplrzrytanblsrtl", "gfxrjgdklovlicqrrkwp", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzm", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmds", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmz", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzg", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzgpn", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzgpnqrj", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzgpnz", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzgpnzl", "gfxrjgdklovlicqrrkwpdwyqprxcieocjfhqclscpzmzgpnzlk", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsran", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranh", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhyl", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqr", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqru", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqrug", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqruo", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqrut", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqrw", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhylqrxp", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhzz", "gfxrjgdklovlicqrrkwpnxvibwosxurvfrinhnjsranhzzy", "gfxrjgdklovlicqrrkwpoalnmxzintzdpvoypvjhvfvukc", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyof", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofql", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxy", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxyb", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybe", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybegm", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybegmn", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybegmo", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybehw", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxybehwm", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofxyiv", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzf", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzfe", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzfedcdp", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzfef", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzfevqx", "gfxrjgdklovlicqrrkwpvsxkhbqyxwpnglcobracyofzfme", "gfxrjgdklovlpznfgmsnyitwlsofljibungerpgisrmsdjqzax", "gfxrldiypjnwlsugpjalcetvjpnp"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 255679821;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"ci", "civabsblohhj", "civabsblohhjv", "civabsblohhjvtgxneu", "civabsblohhjvtgxneufp", "civabsblohhjvtgxneufpikhyrjhf", "civabsblohhjvtgxneufpikhyrjhfockqltcxeigcvnofsej", "civabsblohhjvtgxneujg", "civabsblohhjvtgxneujgdrwugvirhnfdmktuhbdwx", "civabsblohhjvtgxneuqe", "civabsblohhjvtgxneuqei", "civabsblohhjvtgxneuqeidfslnaiwpwjlvmsbdbk", "civabsblohhjvtgxneuqeiur", "civabsblohhjvtgxneuqeiurhoxktsgdubwtvgjgokmv", "civabsblohhjvtgxneuqelefcpmevpilyjsmcldhmuhbgbhq", "civabsblohhjvtgxneuqezpp", "civabsblohhjvybmttnidshqjywzzp", "civabsblohhjw", "civabsblohhjwfyzvjznidcrgqrygrbyuonhctmaenmaetm", "ni", "nibeargqgvytgrisduth", "nibeargqgvytgrisduthvrtyqqnsjnuuf", "wl", "wld", "wldpchdfzvzlmctmanpa", "wldpchdfzvzlmctmanpadyouwkbdlnohqkebug", "wldpchdfzvzlmctmanpaizj", "wldpchdfzvzlmctmanpaizjanva", "wldpchdfzvzlmctmanpaizjanvalucvxakdnwneor", "xu", "xukiryrwejxxlebvejzmpqalvwibtclkwzfrwopamboe", "xuwgznmmsjbkszdduobvnnlee", "xuwgznmmsjbkszdduobvnnleecfmgx", "xuwgznmmsjbkszdduobvnnleecfmgxbxisnjvxormcvfl", "xuwgznmmsjbkszdduobvnnleecfmgxjtgwpawkxnmomb", "xuwgznmmsjbkszdduobvnnleecfmgxjtgwpawkxnmombgumacw", "xuwgznmmsjbkszdduobvnnleeilktqvakmduphpios", "xuwgznmmsjbkszdduobvnnleektlrblymth"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 5449004;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"tzfhfjfitmeyxmrdnpw", "tzfhfjfitmeyxmrdnpwiyybnzu", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibz", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpobl", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpobltvnq", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpoblwq", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpoblwqnl", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpoblwqnljuleb", "tzfhfjfitmeyxmrdnpwiyybnzuoezmgibzvulpoblwqnlvwbtj", "tzfhfjfitmeyxmrdnpwiyybnzuppjsyovyffquoghvotdlt", "tzfhfjfitmeyxmrdnpwiyybnzurlyorrdo", "tzfhfjfitmeyxmrdnpwiyybnzurlyorrdohto", "tzfhfjfitmeyxmrdnpwiyybnzurlyorrdohtofricb", "tzfhfjfitmeyxmrdnpwiyybnzurlyorrdotgd", "tzfhfjfitmeyxmrdnpwiyybnzurlyorrdotgdzmactdf", "tzfhfjfitmeyxmrdnpwtbswdiw", "tzfhfjfitmeyxmrdnpwtbswdiwpf", "tzfhfjfitmeyxmrdnpwtbswdiwpfebiblvz", "tzfhfjfitmeyxmrdnpwtbswdiwpfebiblvzdd", "tzfhfjfitmeyxmrdnpwtbswdiwpfebiblvzdddhza", "tzfhfjfitmeyxmrdnpwtbswdiwpfebiblvzdddhzarnoty", "tzfhfjfitmeyxmrdnpwtbswdiwpfebiblvzikpxg", "tzfhfjfitmeyxmrdnpwtbswdiwpfsagknaj", "tzfhfjfitmeyxmrdnpwtbswdiwpfsagknajezvigu", "tzfhfjfitmeyxmrdnpwtbswdiwpfsagknajezvigudra", "tzfhfjfitmeyxmrdnpwvyxcjtl", "tzfhfjfitmeyxmrdnpwvyxcjtlaflfgbsreltohagnslktyswg", "tzfhfjfitmeyxmrdnpwvyxcjtljqnywkqtdgwnfbghgp", "wcunhriarspeykincbg", "wcunhriarspeykincbgmvpp", "wcunhriarspeykincbgmvppryum", "wcunhriarspeykincbgmvppryumyhxnis"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 266955;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"wjrvaquwofr", "wjrvaquwofroikujmlgwginuz", "wjrvaquwofroikujmlgwginuzfj", "wjrvaquwofroikujmlgwginuzfjclsvtyjiebqzlhnnwwtp", "wjrvaquwofroikujmlgwginuzti", "wjrvaquwofroikujmlgwginuztiqxwqkqcquecnkaup", "wjrvaquwofroikujmlgwginuztq", "wjrvaquwofroikujmlgwginuztqjhmei", "wjrvaquwofroikujmlgwginuztqjhmeik", "wjrvaquwofroikujmlgwginuztqjhmeikm", "wjrvaquwofroikujmlgwginuztqjhmeikmsrolo", "wjrvaquwofroikujmlgwginuztqjhmeikmsrololjcnox", "wjrvaquwofroikujmlgwginuztqjhmeikr", "wjrvaquwofroikujmlgwginuztqjhmeikrv", "wjrvaquwofroikujmlgwginuztqjhmeikrvlobmiqgxvipkb", "wjrvaquwofroikujmlgwginuzzx", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemh", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhe", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhee", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhef", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhefyp", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhefypd", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhefypo", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhl", "wjrvaquwofroikujmlgwginuzzxfbnuffnqrrumiieemhlioxe", "wjrvaquwofroikujmlgwginuzzxynmxfzbnsuxhpnnycj", "wjrvaquwofroikujmlgwginuzzxynmxfzbnsuxhpnnycjapzbu"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 20693;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"jgqfdrzprjpwj", "jgqfdrzprjpwjpqsqlzgflkernlpifimfmyqajnupu", "jgqfdrzprjpwjunisdksbpadbcvoauucsudnljs", "jgqfdrzprjpwjunisdksbpadbcvoauucsudnljsnaaawrm", "jgqfdrzprjpwjunisdksbpadbcvoauucsudnljsnaaawrmrgmh", "jgqfdrzprjpwjunisdksbpadbcvoauucsudnljsnaaawrmzm", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupb", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupbthodyzu", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupbyvv", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupbyvvi", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupbyvvifykenmz", "jgqfdrzprjpwjvmogfnenuygdisfdsdfrzsfupbyvvijhawd"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 157;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"askfjhakjnajenvaiuehnfaoiuhevf", "askfjhakjnajen"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"skdhaskdfhasehfaihevioau", "skdhaskdfhasehfaihdkjgh"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"utgrynbuwrnviutnviedsbunw", "utgrynbuwrnviutnviedsbunwiutrnbwiur"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzl", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgz", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclblj", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclbiw", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlij", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzprs", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlkz", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlgz", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzldb", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlhx", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlcj", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzp", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlcl", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlpe", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlkt", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydcl", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpky", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclb", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlmp", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlzy", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlqf", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzloc", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlpt", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlrb", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlgl", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclmzk", "aolcgcwixtcmnppqzhwhdmikdvsbgfzyaqwmlbahrjcrqkybq", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlem", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpkg", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlly", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclm", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpr", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclmzs", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlhf", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlxu", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlfb", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpkv", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlpx", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpkn", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlxk", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpk", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzpkr", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlaz", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlra", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiyd", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlee", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlfl", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclbls", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydgzlrv", "biiuaywcwhlvuysiftmkeuucgubflzihmzjyusccwfiydclmz"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2952790027112;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"csucaxaywvjciposeqckgydsselnrukgavyuxifkiisokgkn", "csucaxaywvjccvwmuudqcezxrqqvpsdppkoyqkmeza", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirbxecs", "csucxtcctihivhyvusmurxvevbwhmedxdyopsbn", "csucaxaywvjccvwmuudqcezxrqqvpsdpjtgphrryocc", "uvzpnrxriocurinfqelbztryzqz", "csucaxaywvjciposeqckgydsselnrukgkdnujqxfdlsj", "csucaxaywvjccvwmuudqcezxrqqvpsdp", "csucaxaywvjccvwmuudqcezxrqqvpsdpjtgphrryocpffesny", "csucxtcctihi", "csucaxaywvjciposeqckgydsselnrukgkdnwkdsvsmrwgcihx", "csucxtcctihivoqdvkrjinaiymghkhbnzvp", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirbx", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirbxecsk", "uvzpnrxrio", "uvzpgrjiuwpixxorntopsfkieuyspoqghcvnv", "csucaxaywvjccvwmuudqcezxrqqvpsdppkoyqkmezaskfslblp", "csucxtcctihivoqdvkrjinaiymghkhbnzvpjzbnzmpfyafogn", "csucxtcctihivoqdvkrjinaiymghkhbnzvppwlvzoobitjuzt", "uvzpgrjiuwubznqksvxxtrlqvaaqanultdbkrzid", "csucxtcctihivoqdvkrjinaiymghkhbnzvpjzbnzmpfyaqrf", "csucxtcctihivoqdvkrjinaiymghkndbtnueivytrzhcv", "csucaxaywvjccvwmuudqcezxrqqvpsdpjtgphrryoc", "csucxtcctihivoqdvkrjinaiymghkhbnzvpjzbnzmpfyafogc", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirnrdhfqcf", "uvzpgrjiuwpixxornto", "csuc", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirbxsslvrm", "csucxtcctihivoqdvkrjinaiymghkndbbzswnwlwlhotmvsrb", "csucaxaywvjccvwmuudqcezxrqqvpsdpjtgphrryoccbyxkdqg", "csucxtcctihivoqdvkrjinaiymghkndb", "csucxtcctihivoqzbfaazrezhldqo", "csucxtcctihivoqdvkrjinaiymghkhbnbgzvdjhqpnzvnid", "csucxtcctihivoqdvkrjinaiymghkhbnzvpjzbnzmpfya", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcir", "uvzpgrjiuwpixxorntopsfk", "csucxtcctihivoqzbfaazrezhldqobschzpcrcpmfkopzlhn", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirnr", "csucxtcctihivoq", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirnrlxflvd", "csucxtcctihivhyqdjsnxmceyudwivksotwlcfooyqwnqnvm", "csucaxaywvjc", "csucxtcctihivoqzbfaazrezhldqobschzpcrcpmfk", "csucxtcctihivoqdvkrjinaiymghkndbtnkrqtolaawuhyfyh", "csucxtcctihivhy", "uvzpgrjiuwubznqksvxxabnbapsb", "csucaxaywvjccvwmuudqcezxrqqvpsdppkoyqkmezaxfmgzan", "csucxtcctihivoqzbfaazrezhldqoqifnsdxljlcirbxecszg", "uvzpnrxriotboazaxwhbjkskdmxixjhevfc", "uvzpgrjiuwpixxorntodavnqhsbneriaumckqvf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 11692778300;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"zgezejagpuyjdbfdykwhgsmoftdggbgncezwtenj", "jwxnkcrhoignmxtxqzffrrtthmfthmjp", "jwlncekqxmvdssnaebirljkjpgjyb", "jwxnkcajuyzmqtnjlvwvxyq", "zgdvkvjeytkden", "zgezejagpuyjdbfdykwhgsmoftdggb", "zgezejjtdci", "zgdvkvopzssaqc", "zgezejagpuyvdlntladxqqytlbkoflyyexirjzva", "zgdvkvjeytkdenuqwyigwglkxvedzztexojygphpkmjzbzbkml", "zgezejagpuyvdlntladxqqytlbkofl", "zgezejagpuyjdbfdykwhgsmoftdggbinoisrqopzcpvjarskz", "jw", "zgezejjtdcihkypstzqiwhkpgvexbtlgxxjqfvvfmgycpeck"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2430;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"psiuusabnsff", "psiuusabnsffkogkdqtnrzmtvnwikivraocdlwfdsagxwoodfg", "psiuusabnsffydiwwybigmrjasiqlinwlqjpnvbhjcuyfc", "psiuusabnsffkogkdqtnrzmtvnwikivraoaypaovan", "psiuusabnsffkogkdqtnrzmtvnwikickqmherzuyrptqatxc", "psiuusabnsffkogkdqtnrzmtvnwikivraoaypaovangey", "epbwoaeopuuy", "psiuusabnsffkogkdqtnrzmtvnwikickq", "psiuusabnsffkogkdqtnrzmtvnwiki", "psiuusabnsffkogkdqtnrzmtvnwikickqpitdjfgvd", "psiuusabnsffkogkdqtnrzmtvnwikivraoaypaovaneqtq", "epbwoaeopuuydefwkponumsshpefeqzyikaeuxxcdlxpwnpanm", "psiuusabnsffkogkdqtnrzmtvnwikivranuppqvzl"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 609;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"rxqbjetwfyovvqjpcxsepjaulmibuc", "rxqbjetwfyovvqjpcxsepjaulmibucsqgvweoesitj", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpiplj", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpiplzr", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpsek", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpsekmr", "rdrbykeuytlojfkpkb", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpsekep", "rxqbjetwfyovvqjpcxsepjaulmibucpjhjtshmqlmvunhswxfj", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpiplzh", "rdrbykeuytlozeicwdfttsxgsfihqqdjfnbvwzdlj", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpipljf", "rxqbjetwfyovmqjzrdssqkkjdiekunovzdexvknwgszta", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpiplz", "rxqbjetwfyovvqjpcxsepjaulmibucpjhjtshmmqdhtzrzkilu", "rxqbjetwfyovmqjzrdssqkkjdiekunmsobgbuhnctuhlpipljt", "rxqbjetwfyovmqjzrdssqkkjdiekunovzdexvknwgsztald", "rxqbjetwfyovvqjpcxsepjaulmibucsqgvweoego", "rxqbjetwfyovvqjpcxsepjaulmibucsqgvweoe", "rdrbykeuytlozminnveqdqvjtpojhpwbueh"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 63000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"oecrzgdybrpjziqzvsevkvfcqrdxjesiozpuqzjhnc", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmanvdgsmiabv", "byhwthcvjxqrxckioglrbcsmurlxfermhzrnktsjva", "byhwthcvjxqrxckioglrhzqysliyaxzqudrfkgn", "byhwthcvjxqrxckioglrhzqysliyaxzqudrfkgnpubanuxtkcm", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahykmkanioaq", "oecrzgdybrpjziqzvsevkeiqfkalkerwxvlbzi", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahykmgvk", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmanvpgoy", "byhwthcvjxqrxckioglrhzqymvlzegw", "byhwthcvjxqrxckioglrbcsmscqncubjysnaxzphxbyeqtcnmw", "byhwthcvjxqrxckioglrhzqymvlzegwnfqilpwnzhcpnjwa", "byhwxxvbbxcuxswlvzeuhffkgugrthjdfhruhkz", "byhwxxvbbxcuxswlvzeuqeqxhginwssollnfbpt", "byhwxxvbbxcuxswlvzeuhffklpkkasxjqbwtpndkh", "byhwthcvjxqrxckioglrhzqymvlzegwngtsdgtzlhsbww", "byhwthcvjxqrxckioglrhzqymvlzegwnfqilpwnzhcpnjoh", "byhwxxvbbxcuxswlvzeuhseylnhu", "byhwthcvjxqrxckioglrhzqymvlzegwngtsdgtzlhsbwwacjmc", "byhwthcvjxqrxckioglrbcsmurpsvwobqufqkrtmdydbxmmrey", "byhwxxvbbxcuxswlvzeuq", "byhwxxvbbxcuxswlvzeuqadb", "byhwthcvjxqrxckioglrbcsmscxamxd", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahykmgvktiw", "byhwthcvjxqrxckioglrbcsmscqncubogttdhslypoaebyno", "byhwthcvjxqrxckioglrhzqysliyaxzsbzztwoztmyyd", "byhwthcvjxqrxckioglrhzqymvlzegwdcjqrazculycl", "byhwxxvbbxcuxswlvzeuqeqx", "byhwthcvjxqrxckioglrbcsmurp", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahykm", "byhwthcvjxqrxckioglrbcsmurpxfeickljbfuqkpigzyqtfi", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahyjkrwwtekh", "byhwxxvbbxcuxswlvzeuqeqxhginwssollnfbpthpqwvanx", "byhwxxvbbxcuxswlvzeuqeqxsakhbtiajbbwtmahyjkgwwyhlr", "byhwthcvjxqrxckioglrbcsmscxamxdtzahbiokq", "oecrlasalzopvlkrbpzezbjmcrktvugrgrfocu", "oecrzgdybqlhuoushydkg"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1555200000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysh", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjswfz", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyskqyc", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjryvxm", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhg", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvh", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhsfy", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjsxoqbo", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysklbi", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhgpx", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhgbo", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjsxoq", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhgb", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysk", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyskqrb", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysklbo", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysklzb", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimu", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysklze", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuysklb", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhv", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyshv", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuys", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjsxutkl", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvcd", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuhvhsud", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyshjkw", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjrvcpca", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjrvcbfn", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjsxutrp", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyskqyo", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjr", "idlqqhyikumlaqmkgfdjovalxxrsawalujqrwjvceimuyskl", "cmxrlzsvqrpekkuvbzmjezanikklpoosnnevhbtvnhcjsxoqjb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 17969400;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"wtdnkkxvzsdypduzkxkqdvzd", "wtdnkkxvzsdypduzkxkgennsqtavibycugadicbqqavboj", "chazfl", "chazflsitreilxgjprfkecnggwoabxbczxcgzomt", "chazfleiahuotpdpfkwuhatqyktyvogqosoehuezmwydonto", "wtdnkkxvzsdypduzkxyvrgwfnt", "wtdnkkxvzsdypduzkxywxs", "wtdnkkxvzsdypduzkxgfmusebdbljaeztrrkcyxqpgiebmxkgp", "wtdnkkxvzsdypduzkxgfmusebdbljaexfh", "chazflvmaskqzmkrjzgyxhvxkdyltaahahkuyyq", "chazflsitreilxgjprfkelphmrgjtvbtbwnmppxeklyizksnsc", "wtdnkkxvzsdypduzkxkjgprrcfyklhsqcmxtteishyhi", "mtwiqf", "mtwiqfnpamqlnbjptikkqkosizdaymndviykyvfzjhvggfnpa", "wtdnkkgrmhttqlzesafpnwusenverokqfwhslqgchb", "wtdnkkgrmhttqlzesafpnwusenverokqftzl", "wtdnkkxvzsdypduzkxyvschueceikkgq", "chazflsitreilxgjprfkesycmidgssclcrqwwnjzqqmxmg", "mtwiqfgcmahvvwozzqjxglolywoybibqmerjosfqtshkjry", "chazflsitreilxgjprfkemjjxnxeeshltxckccdcdtz", "chazflsitreilxgjprfkelphmrgjtvbtbwnmppxeklylagjrav", "chazflsitreilxgjprfkesycmidgssclcrqwsxhvdrcnhtp", "mtwiqfgcmahvvwozzqjxglolywoybibqmerjosfqtuwmoiegl", "chazflsitreilxgjprfkesycmidgssclcrqwixmjtbshdljfuk", "chazflsitreilxgjprfkelphmrgjtvbtbwnmavpzvzcx", "wtdnkkrtlsjbuaentydwbendicmjwsqfwlqhmnndvdot", "wtdnkkxvzsdypduzkxgmvoivgcgeeemnehnjhvbqyv", "mkhzmpthggghzxkhhkuacuwxwjt", "chazflsitreilxgjprfkelphmrgjtvbtbwnmppxeklycfytrbq", "chazflvmaskqzmkrjzgyxg", "chazflsitreilxgjprfkesycmidgssclcrqwsxhvdrcnpucvs", "chazflvmaskqzmkrjzgyxgdfuqkcznyqwdtkx", "wtdnkkxvzsdypduzkxyftnezvgxrdakqeoolctclhexqb", "chazflsitreilxgjprfkesycmidgssclcrqwrjlnnxzwca", "chazflvmaskqzmkrjzgyxhvxkdyltaakauadgxkox", "wtdnkkgrmhttqlzesafpnwusenvezchkzezolb", "chazflvmaskqzmkrjzgyxvccebqxdrvkamaroshu", "wtdnkkxvzsdypduzkxyfbpucpwmmkwgxbf", "wtdnkkxvzsdypduzkxyvshibgqpkbocbjelvhgykbzrfd", "chazflvmaskqzmkrjzgyxhdgzftaccpyzys", "chazflsitreilxgjprfkecnggwoabxbczxcgesoqru", "mtwiqfgcmahvvwozzqjxglolywoybibqmerjosfqtulnczg", "wtdnkkgrmhttqlzesaymrquzrtycghjttztdtifiu", "mtwiqfgcmahvvwozzqjxglolywoybibqmerjosfqtobhekplhp", "chazflvmaskqzmkrjzgyxhdgzftaccpcpnupbwb", "chazflsitreilxgjprfkelphmrgjtvbtbwnmppxeklyoswnxnq", "mtwiqfnpamqlnbjptikkqkosizdaymndviykyvfzjwksccs", "mtwiqfgcmahvvwozzqjxglolywoybibqmerjosfqtusunjdgu", "wtdnkkxvzsdypduzkxyvshvwsdjupygsznfvgucpegk"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 106377817620480;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"jwhwlzzuvdwxynnhdxedwmxulfysyrbrpnaqhxoqxpejuhrv", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbrlxxtdeaerqluydr", "odaymvxwsitadslzkrldonputnvibrcddbvbmry", "jwhwlzzuvdwxynnhdxedwmxulfysyrlexjscxlwactatvf", "odaymvxwsitadslzkrldonputnvibrwcdacymrstgxujov", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetpz", "jwhwlzzuvdwxynnhdxedwmxulfysyrwteekuc", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrplemylhz", "jwhwlzzuvdwxynnhdxedwmxulfysyrbvsslexpfbxrpqyktxv", "jwhwlzzuvdwxynnhdxedwmxulfysyrorwsjquwgwavbdkgfe", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbrlx", "jwhwlzzuvdwxynnhdxedwmxulfysyrbvsslexpfbxrpsnekil", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetpf", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrplemyrsuhjsueyv", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbdsmanayswusdyutut", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetpo", "jwhwlzzuvdwxynnhdxedwmxulfysyrlexjscxlwacybmbh", "jwhwlzzuvdwxynnhdxedwmxulfysyrldqovqktwxmuadtz", "jwhwlzzuvdwxynnhdxedwmxulfysyrljcmsriwqwhirwbylvn", "jwhwlzzuvdwxynnhdxedwmxulfysyrgjuzutyxblpsavpxh", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftxwklphoyqqdshou", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbdsmaair", "jwhwlzzuvdwxynnhdxedwmxulfysyrbvsslexpfbxrpeyf", "jwhwlzzuvdwxynnhdxedwmxulfysyrldqovqktwxmwtvdd", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrpleathtvwtlbksd", "jwhwlzzuvdwxynnhdxedwmxulfysyrbvs", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetf", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbdsmcptflkinkth", "jwhwlzzuvdwxynnhdxedwmxulfysyrlnfmvvhbcvronrsleo", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrplemylhebsrgc", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetpm", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetff", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbdsmannreyci", "jwhwlzzuvdwxynnhdxedwmxulfysyrbvssljdptycualf", "jwhwlzzuvdwxynnhdxedwmxulfysyrbqbdsmloywwfyge", "jwhwlzzuvdwxynnhdxedwmxulfysyrorftsqwmohsywgeeetpq", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrpnasxofcggozfr", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrpleatjusmpiydl", "jwhwlzzuvdwxynnhdxedwmxulfysyriotosihensmr", "jwhwlzzuvdwxynnhdxedwmxulfysyrlnfmvvhbcvrvlkbjj", "jwhwlzzuvdwxynnhdxedwmxulfysyrbrpleatjussblf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 657129996288;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"gmjjabuiobpkgzytmfhkppnexqmedtjtvqpetgilkxg", "nuesqeqwnxpdvnpkpnjjwkssjjt", "nuesqeqwnxpdvnpkpnjjwkssjjtcutdygcmxilhcamoyw", "uyoevegwuoealupsvygklreykkmqa", "nuesqeqwnxpdvnpkpnjjwkssjheqemalyaiyzdsximoeey", "uyoevegwuoealupsvygklreykkmqakwjwhszumreizluwjpsmt", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqsjetgq", "uyoevegwuoealupsvygklreykbjcnmvrf", "uyoevegwuoealupsvygklreyknkld", "nuesqeqwnxpdvnpkpnjjwkssjheygaokbgkfkgctpt", "nuesqeqwnxpdvnpkpnjjwkssjjtcutdygcmxilhmaxioqciofx", "uyoevegwuoealupsvygklreykkmqamgdrgogurazmha", "nuesqeqwnxpdvnpkpnjjwkssjhebxctmkrqjcoasehwvdkv", "gmjjabuiobpkgzytmfhkppnexthwclknrbuoteweetssnvgzrm", "uyoevegwuoealupsvygklreykykjzqwlhgy", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqomraymttwkjsbuwo", "nuesqeqwnxpdvnpkpnjjwkssjhebxctmkhwktgjbgzccsfurbt", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqomraymttegs", "nuesqeqwnxpdvnpkpnjjwkssjjtcutdygcmxilhmaxioqfkv", "nuesqeqwnxpdvnpkpnjjwkssjheuwxeomaizljtdkujgnzrdvc", "uyoevegwuoealupsvygklreykqaecprelxsgskpysiwv", "nuesqeqwnxpdvnpkpnjjwkssjheuwxeomauixmlkfbisc", "uyoevegwuoealupsvygklreykqaecehgusoarufcmysyxpgy", "uyoevegwuoealupsvygklreykqaecoryzjy", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqomraymtglmmin", "sqvbkacggglosbxunqflfbbghleiysocyndjfbskqe", "nuesqeqwnxpdvnpkpnjjwkssjheqemalyapvnih", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqomdmdtvetofxduz", "uyoevegwuoealupsvygklreykkmqaaanfzqk", "rxtojrkhomfvunsjhfanesldskhgagg", "nuesqeqwnxpdvnpkpnjjwkssjjtiojoqsbkiwslhpjihjmvsor", "gmjjabuiobpkgzytmfhkppnexqmedtjtvqomraympuppavko", "uyoevegwuoealupsvygklreykqaecprefecupmrwyirsygys", "nuesqeqwnxpdvnpkpnjjwkssjheqemalylethvky", "nuesqeqwnxpdvnpkpnjjwkssjjtcutdygcmxilhcamoywtc", "nuesqeqwnxpdvnpkpnjjwkssjheuwxeom"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 9437184000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"ilkniwgigzpxofmuitlgsrlhbzblbpifvranrexgdxrjqouwgn", "ilkniwgigzpxofmuitmncltopyrclrhhyhbknwgckbwxqde", "pzxqxqtudsuqmuzxqozodbavvqnchlfajwrfgsmllcrfhmgktx", "ilkniwgigzpxofoktqxyvkageodvuq", "pzxqxqtudsuqmudugxlnknyivlft", "ilkniwgigzpxofpyrpcljfkzdjftnozjjmjrkghkvmbax", "pzxqxqtudsuqmufbwwehbamocgljdctc", "ilkniwgigzpxofhfozucnilwmumnwxrzboppkgiyrauysbarc", "pzxqxqtudsuqmufpnqjibmoho", "ilkniwgigzpxof", "pzxqxqtudsuqmufbwwehbamxkwdspvpsemcggfwgvhtxqff"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"qvprzgjudwbydhnlymupttufjmruapqgqtscjhxvpclvhw", "qvprzgjudwbydhnlymuyfkqgkjmjcjvreryokckqmftspqdue", "qvprzgjudwbydhnlymupttufjmruapqizqndmzxyhqznowrnqo", "qvpklhmzpwcwcctapwoankpu", "bizpfasfqxslidqgykc", "qvprzgjudwbydhnlymupttufjmruaporjyntns", "qvprzgjudwbydhnlymunaswmytgrzudmsvurvvtpbljvukvagf", "puixvllrejoyvhllyfwqvjcbeymjhaznc", "dzlywsptniaxpgtinpkvzurwxdcwocsjk", "qvpvcpwdrjmaksvrjwhlavhxoxubgkkdqzioqnjwwhvsh", "qvprzgjudwbydhnlymupttufjmruapqizqndmzxyhqznowrtfi", "pusgwaqvdogumqzuigxexmwutej", "qvprzgjudwbydhnlymumxajmfpozltgptrb", "qvpsxkbqnvfmkzctdecntgywjnhuhlq", "qvpsxkbqnvfmkzctdecebsoipurlybwgrolsxgpihksnz", "qvprzgjudwbydhnlymuyfkqgklxvltpkywuxfwcchteoozs", "qvprzgjudwbydhnlymupttufjhhrolxczkoivklfgbihsj", "pu", "qvprzgjudwbydhnlymupttufjmruapqdbmsdnyevz", "qvprzgjudwbydhnlymunaswmynwzvejalbhatbyxnjekd", "qvprzgjudwbydhnlymupttufjmruapqizqndmzxyhqbqgaws", "qvprzgjudwbydhnlymumxajmfgzyyfpevlwf", "qvprzgjudwbydhnlymupttufjmruapqizqndmzeiigymdhunye", "qvprzgjudwbydhnlymupaememviruwrmpksw", "qv", "qvprzgjudwbydhnlymupttufjmruapqizqndmzxyhqygdgf"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 20971540;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"uzujuixbtwubstdfegtmubjsyjaftnodhcovevbrnbzq", "zopnmzeinxylkfseexkxkapumgjtncjwsejdnfzrnphpoywmc", "uhmujqhrrahmwfzikyxikrmfxrifkioidxsilowxc", "uzujuixbtwvxkgdktkmidndscvlomwgprmvovnhdxf", "uzujuixbtwqfglneach", "uzujuixbtwmzxembrnswceeajujstrryosjvzzknpm", "uzujuixbtwvxkgdktkvtzlltqjklmvwuiqtcexxp", "uzujuixbtwqfglneachfilbjjumdgpuagkbfwuzwk", "g", "uzujuixbtwvxkgdktkmidndscvlomwgofdnhaqdcazdojju", "uzujuixbtwubstdfegtmububfkvezyidhkzdwtohh", "uhmujqhrraddxvuouwfxjcnqfvscdungkdxqjjhaviawvcuk", "uhmujqhrrahmwfzikyxikrmfxrifrdclnojvifqqjp", "uhmujqhrrahmwfzikyxikrmfxrifwjnaewk", "uzujuixbtwqfglneagn", "uzujuixbtwvxkgdktkmidndscvlomledhtbenb", "uzujuixbtwvxkgdktkvtzlltqjklmjpffrwyorddytmrm", "ovrqpufzihejltwinib", "uzujuixbtwvxkgdktkvtzlltqjklmjpffrwyorddyubvobocu", "uzujuixbtwubstdfewjiqmfvzekyetthijgnx", "mgwvquniqyajjjvvtfhzfvfeulwjabt", "uzujuixbtwubstdfewjiqmgzplngwssspwtkzye", "uhmujqhrrahmwfzikyxikrmfxrifwjnaewkskivtjhmmdcqa", "mxerquwzwdsgpstpz", "uzujuixbtwubstdfewjiqmfvxqyskhwyopnjisqvmwq", "uzujuixbtwqfglneagnpzctlbmdyppxqvpn", "uhmujqhrraddxvuouwfxjcnqfvsccanyshgigdeputrtqaac", "uzujuixbtwubstdfegtmubjsyjapgithcsqppouzcryvdoopxn", "uhmujqhrrahmwfzikyxikrmfxrifwjnaewkllypoxslga", "uzujuixbtwubstdfegtmubjsyjaftnodhcojmpzzvsfilclt", "uzujuixbtwvxkgdktkvtzlltqjklmjpffrwyorddyubvtoaldw", "uzujuixbtwvxkgdktkvtzlltqjklmjpffrwyorddyubvobllfj", "zmpqjkzbwhdjdlpcxwpothdauqbpn", "uhmujqhrrahmwfzikyxikrmfxrifwjnaewksawxswapkzsu", "uzujuixbtwubstdfegtmububfkvzwuigydfyjkaosuhd", "uzujuixbtwvxkgdktonyhvawavidzacosqwyblixxxeklkmpvh", "uzujuixbtwvxkgdktlogjycpqeqcuzaevvdglktqmbj", "uzujuixbtwvxkgdktkvtzlltqjklmvwuiqtcexxpbpvlicbzdc", "uzujuixbtwubstdfegtmububfkvezyidhkzdwibygfgktfhu", "uzujuixbtwubstdfegtmubjsyjaftnodhcfkhulcxaagvxh", "uzujuixbtwubstdfewjiqmfvzekyetthijgnxvchvcnh", "okyvmkicwivexxublpclstloybvtqchhprfgoggsrehtoxph", "utstvnwkeokjeazcmkxjnbcpobbxmgtssbasi", "uhmujqhrrahmwfzikyxikrmfxrifrdclnojj", "uzujuixbtwmzxembriaaqoqgcopkcduqiydxaklrcimoyuai", "uhmujqhrrahmwfzikyxikrmfxrifkioidxsozkoodspa", "uzujuixbtwuwhubtcvsixdljdguindzwqqprslqktkrwsqj", "uzujuixbtwubstdfewjiqmfvxqyskhwyopnji", "uzujuixbtwigdawcnkusvyoo"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 75144747810816;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"rujosdgbjysvzdvxezpizbzooaysvszyredota", "jzncbzbhsgaladpskorfulczehgoqbqfpleh", "rujosdgbjysvzdvxezpizbzooaysvszyredoquwdw", "rspucfbrkzkqiueayljnvoiufrwwfhitldxqurbohkljnzzdo", "jnioicxleptxakowpzgl", "rqgajgdwpjojmgllgxrqf", "ruybrnokburbmxbcqccrmlormoiieolgqckpzdcszdbjhwt", "rspmxbhfwqybtvuwdbyqmkrivyodelkasraiipagnla", "jhjzvrpfsxictxudzljiaopfmyqpfadxdrxk", "rujosdgbjysvhrsbxmnofyiynwxgattrv", "jzncbzbvqgilnsvjw", "ruencikfzyhn", "rsashlwhdcsakgfsdzexwxnwxzungduqtiyxemftkybdikmtr", "jhjzvrpneyneievskhetbenomuvtcfnvunwjvokjlb", "rujosdgbjysv", "rujosdgbjysvzdvxezpizbzooayloiebam", "rq", "rujosdgbjysvzdvxezpizbzooaysvszyredotaicmogal", "jhjzvrpfsxictxudzljiaopfmyttjfnstzedwtmgoqtiizquoc", "rs", "rsamtsthtklejl", "rujosdgbjysvzdvxezpizbzooayskpgolesdrr", "jhjzvrpfsxicttpdob", "jhjzvrpfsxictxud", "jhjzvrpcifqvvomrbwbwqziznqzylsxqyxq", "rspucfikcvkfgewmmwhzpbrehqipennshrcyrugw", "jzncbzbvqgiltocjrlegccbfflwcounakromliirmcp", "rujosdgbjysvzdvxezpizbzooaysvszyredoyegfpclfyxgpfi", "jwrwwswnnmlzyioymzkdxjqrsazaorwyew", "rsagwlkvcpkhjicjiiwkgirmdtr", "ruybrnokburbucjaymfoolglpgdvvakvnnkngqwpxzzf", "rsagwlkvcbksdpxyhjogesqajqnkxvapuc", "jfgjgrpjcguvhsrohmjeg", "jhjzvrpfsxictxudrzojxsibqzsdpqbmrojfulxurliigpjj", "jzncbzbbphzemgiqlljvrcsn", "rujosdgbjysvjqkqwgrtnqsrdjv", "jzncbzb", "rdtvfisgtfnjyfohxdantrsfjwgejjpxjvaimm", "jnioicxhusskivikobypuwmjcrffwrscnixhidxs", "jhjzvrpfsxictxudrzojxsibqzajdgogghuaqbtczpa", "ruybrnokburbmxivitsekvkrklurgplhfctucexe", "rsashlwhdsaakmefvdwrkwuqgjzbmhglfrbgzul", "rstbcfmwikdjlydxmn", "rsppxsppqhkaavelgxyqoiigaqtzhknzk", "jzncbzbvqgilnrllttqdcvjjfwpgefshihleelpt", "jhjzvrpfsxictxudzljiaopfmytssckgkrwufzizvcotrnmm", "jfgjgrpkesvkiyabfhjvjihloehykphqyfebrkxcinabbjb", "rst", "rspucfikcvkfgewmmwhzpbrehqipjltdmntbekfvu", "jhjzvrpcifqvvkhklmwnezefvheyp"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 31745994964992;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtriavdrx", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmtyqj", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtriavdhlwmsk", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrwvklzqnje", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmdvjfmuimx", "cgvtethvsewjxlnlxvzsvhvpovsmpygohdtthfuqyzsbpgpgiu", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrwvklzcmhiif", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtriavdhlvwsf", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrvpzatgezi", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrklyrjamqiuk", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmdvjfcm", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebheczhlrwhd", "cgvtethvsewjxlnlxvzsvhvpovsmpygohdtthfuwelq", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebheczhlroi", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpksmp", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrklyr", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpksmkkde", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpkshcwbg", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmdvjfmu", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhndc", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhndcnybvt", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpkskkj", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebheczhldsmeky", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpksmkbo", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpks", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhndphbbss", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpksmisz", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtm", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtrlubnjlqow", "cgvtethvsewjxlnlxvzsvhvpovsmpygohdtthfudectluadqur", "vmdhkhnmpvdjlqcmsymxbdxjykxtwimodfbojtriavdgoryg", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmdvjfcmyt", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhtmwpksmkkd", "sjlqgsgokdltuvmciefpcquwruuonrjvlrwunpeveczjjokiet", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebheczhld", "cgvtethvsewjxlnlxvzsvhvpovsmpygohdtthfuderysbplxji", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebhecduidg", "vgwzajvwpdkmnblvvmmpcogkgkimlslfexkgebheczhlrwhqj"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 12365070336;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"tpakcawyngyszjgrsbtaczqtrzonnvomibcyelpomjbdwh", "yydrkytjiqhaccsxelwwtdcdcmlhtccyon", "tpakcaxlcmeeiugpchlksxkv", "yydrkyomfkalzolpolxzgzbixvedxmsceittiwtgrs", "tpakcancxyornln", "tpakcancxyornlnhrddywpkkxl", "tpakcawyngyjfsgbcynlygefljhlkpvnobkhlcvy", "tpakcancxyoechkojclgrbozccvsulrvzm", "tpakcancxyoechkuccgavxeqhrrbkkkxkwaqsh", "tpakcawyngyspxrifyqfbcceruavzkbfltnifafxibpdbvjpqg", "tpakcawyngysqgalriswgneumtcsxbztspihyuvydlnbart", "tpakcawyngyspxrifyqfbcceruavzkbfltnifafxibkefmtpcy", "tpakcancxyornlnmwonnlzmlwsqopz", "yydrkyomfkalzolpolxzuitkizmctnvxjhpeohtdvs", "tpakcawyngyc", "tpakcancxyoechkuccgavxeqhrrbkkkxkwpckepzzhsbfjfsaz", "tpakcawyngycxqfxkntsbfpmljsjqyxngvkudqu", "yydrkytjiqhaccsxelww", "tpakcawyngycwdymmbxmdykdwvlga"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 153600;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"fjuqmllceqbowsjatsafsmruiqpdmgvbubivhfhcwlqpdisefy", "fuxtuhpiigpjabvpuuzjdmmscofxxpiwwvrvjtomk", "fkisxevtuarpbshpnyceybfiycoowhwwvhaumqbanoblpwnneo", "fmpyywcikzuelmbetolangtgqlfopful", "ffsfxivsdfsorcrbwwriokvytmhdtbsalkhlodhnjgkihc", "fmpyywcikzuelmbetolangtgqlfopbawkbwguaukmfpqq", "fmpyywcikzuelmbetolangtgqlfoposqxtncgpnua", "fjuqmllceqbowsjatsafsmruiqpdmruufnjagymchxchtamhsz", "fmpyywcikzuelmbetolangtgqlfopbaw", "fmpyywcikzuelmbetolangtgqlfopfulkwbcjw", "fmpyywcikzuelmbetolangtgqlfopfulkwbdhmauhhpniunhg", "fjuqmllceqbowsjatsafsmruiqpdm", "fmpyywcikzuelmbetolangtgqlfopfulpjxlsr", "jhayphghlhhsb", "fmpyywcikzuelmbetolangtgqlfopbawkqesyfrqvbhyhbw", "f", "fmpyywcikzuelmbetolangtgqlfopbawk", "fmpyywcikzuelmbetolangtgqlfopfulspprlrbp"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 16322;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"loupgtkhtofnhegvnfmaeljbnrugdnpcqqcealphltzbyqxdu", "zwelwdak", "yqafdnulcuepo", "loupgtkhtofnhegvjqlupzfracfdudpzvrxlawnxwqhcqucx", "yqafdnulsnuljfdxrrjubhxqlwgnphskjbqxudyftnfyxlddl", "loupgtkhtofnhegvjqlupzfr", "yqafdnulcfaismtfdaoeywcbpzrvbhkippx", "yqafdnulcfainsesyqkmgjaozhfqgfysxdotbtslubude", "loupgtkhtofnhegvjqlupzfracsdyfqe", "loupgtkhtofnhegvirgwdhvvcluzkpztgeasllkjssssdhl", "loupgtkhvyddfcoqyqgfepxdaq", "yqafdnulsnul", "yqafdnulsnuljfdxrrjubhxqlwgnphskjbqxudyftnvgwjj", "loupgtkhtofnhegvjqlupzfracfduammjscrtdxbnijacupr", "loupgtkhtofnhegvjqlupzfracfduammjscrtdxbnijacupf", "loupgtkhtofnhegvjqlupzfracoxthvymavrrebbezsknbhxe", "yqafdnulcfainsesyqkmgjaozhfqgfyuezqfet", "loupgtkhtofnhegvibcecaofrdwfiupddyojfskrxgapn", "yqafdnulcfainsesyqkmgjaozhfqgfhqci", "loupgtkhtofnhegvjqlupzfryszuro", "zwelwdakiyuzsoahnhdjwcinqcccieyxnreyzdeyarokznun", "zwelwdakjfmrtfmvuu", "loupgtkhtofnhegvjqlupzfrwgihgoynis", "loupgtkhvyddfcoq", "yqafdnulsnuljfdxrrjubhxqlwgnphskjbqxudyftnfyxldifm", "yqafdnulsnuljfdxrrjubhxqlwgnphskjbqxudyftnvgwjjwgt", "yqafdnulcedtxokokdemwuavxnbhdffaiivlxismjpdbn"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 12879360;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"qimgmnfiilemfgjvzmkvzthqhrwuztdifjcjyilkcdkwrqc", "wmaawirlcaavoobesfagvtmqcrujdvubieikas", "qimgmnfiirutxwxaalvgkcoynedgxvyzk", "qimgmnfiidjatoneuvzvswzxvicgckiujrtvoueqeevlbmmln", "qimgmnfii", "qimgmnfiirutxwtrjwxkjmez", "qimgmnfiidjatohlgtunatslblsbmfkyhnpb", "qimgmnfiidjatoneuvzvswzxvghlvhmb", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgajeadztupa", "qimgmnfiilemfgjvzmkvzthqhrwuztdigobsgpe", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgcjgcwpd", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgajeadztupg", "qimgmnfiilemfgtsvppttrnmojxz", "qimgmnfiirutxwbivynymywrsmosgdmttje", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgvdoxntyhjo", "qimgmnfiirutxwtrjwxkjmezwiimgty", "qimgmnfiilemfgjvzmkvzthqhrwuz", "qimgmnfiilemfgjvzmkvzthqhrwuztdigobduikmpcgsfudxbj", "qimgmnfiilemfgjvzmkvzthqhrwuztdifjcoikviybhmu", "qimgmnfiidjatoneuvzvswzxvg", "qimgmnfiilemfgjvzmkvzthqzogslcds", "qimgmnfiilemfgjvzmkvzthqhrwuzhqiewit", "qimgmnfiilemfgjvzmkvzthqtuivytkrsjyagezsqs", "qimgmnfiidjatoneuvzvswzxvidlhnmzii", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgajeadzqgm", "qimgmnfiilemfgjvzmkvzthqtuivytkrsjyagezsfprhotmckv", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgajeadztup", "qimgmnfiidjatoneuvzvswzxvidlhvqkhgclmekihabv", "qimgmnfiidjatoneuvzvswzxviqi", "wmaawirlcdmcacvepnebrddrsikziehktbwhb", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgajeadztpu", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgiakfqvgyc", "qimgmnfiidjatoneuvzvswzxtqcfkuxztezvs", "wmaawirlc", "aqbdzfxzirwabwtsaemgnykalbbfllzackiwzjlzrvtdbu", "qimgmnfiilemfgjvzmkvzthqhrwuztdigobduilertpf", "wmaawirlcdmcaccjbluyxnvzeouhsdyrjftdpibeiw", "wmaawirlcaavooytpfrnsrkfkxzzfvbeenrgx", "qimgmnfiilemfgjvzmkvzthqtuivyrusenxldubfmltcgfdv", "qimgmnfiilemfgjvzmkvzthqhrwuztdi", "qimgmnfiidjatoneuvzvswzx", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfjzzzdalnvhz", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwf", "qimgmnfiilemfgjvzmkvzthqtuivykxhahtmjwfgcjgcwphqm", "qimgmnfiilemfgjvzmkvzthqhrwuztdifjc", "wmaawirlcdmcacvepnebrddrslcskzkogppklfbehpddq", "qimgmnfiilemfgjvzmkvzthqtuivyrusenxldub", "qimgmnfiirutxw"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 425075796354;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"fseewkovwyddhomxcrxqczuagvlfjuaihbrkvljdhrwqedekxm", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnifvemcvfozho", "rmfhfbzcyjweldfkakzmslteggneaaaofwhcnjjsue", "rmfhfbzcyjweldfkakzmslteggneaaaofwhtqhlatbyc", "rmfhfbzcyjweldfkakzmsltegydrhpqdclv", "rmfhfbzcyjweldfkakzmslteggneaaaofwhtqhzrcwiooup", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfx", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnievammngcwtj", "rmfhfbzcyjweldfkakzmslteggneaaaofwhtqhpectmcrtkra", "erhjabqzvlmppthokpvrnowfcahxrenzddcvmuhdcb", "rmfhfbzcyjweldfkakzmslteg", "rmfhfbzcyjweldfkakzmsltegydrhpqdclvhgowipshgo", "rmfhfbzcyjwekxbkbksgtvquxeedr", "fseewkovwyddhom", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnifvemcvfozhozxnb", "rmfhfbzcyjweldfkakzmslteeeupsfvjrhoqvyeadwyhoz", "rmfhfbzcyjweldfkakzmslte", "fseewkovwyddsmgcv", "uknulwszdjascimqzusbzparstgs", "erhjabqzvlmp", "rmfhfbzcyjweldfkakzmsltesgwgxzfzdrai", "rmfhfbzcyjweldfkakzmsltegmlqqwqznni", "flxotpkxnozyuolrimtwjwfiybvyiikenjdzedxkrhdfwa", "rmfhfbzcyjweldfkakzmslteggneaaaofwhtqh", "rmfhfbzcyjweldfkakzmsltesfkihjsdpr", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnievammngcwtjz", "rmfhfbzcyjweldfkakzmsltesvetbwmybcwpmz", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfxw", "rmfhfbzcyjweldfkakzmsltedojkcxsscedwwbwuhbdrehxurw", "fseewkovwyddhomfhsenbihmwejaewoqbwsrrqoxcxd", "rmfhfbzcyjweldfkakzmsltesfkihjsdpriknvjbjynanheus", "rmfhfbzcyjweldfkakzmsltes", "fseewkovwydd", "rmfhfbzcyjweldfkakzmsltesfkihjsdprnluxqqsplljqkieg", "rmfhfbzcyjwe", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfxwego", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfxvr", "erhjabqzvlmpp", "rmfhfbzcyjwegyypcgyhxvtcretffqxpzfxzo", "fseewkovwyddmcyogeoqqznpgdy", "erhjabqzvlmppthok", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfxmenn", "fseewkovwyddhomfhsenbihmwejaewoqbwsrrqo", "rmfhfbzcyjwekxbkbksgtvqu", "rmfhfbzcyjweldfkakzmslteggneaaaofwh", "rmfhfbzcyjweldfkakzmsltee", "fseewkovwyddhomfefftunddmhlhlndcswsanfuv", "fseewkovwyddmcy", "rmfhfbzcyjweldfkakzmsltegmlqqwqznnighitkgissfxm"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 11711887460;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkqyrcyeq", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkvi", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwo", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqjhvlvoesrbmrp", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkqyoafk", "blzylatmmnofqrkakbczdiemzmncdxidlopfhgahbfshrz", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviw", "blzylatmmnofqrkakbczdiemzmncdxidlopfdknhkrct", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkgrfpn", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwm", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkjsq", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkjsqhuno", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwjcqr", "dobiuvccjkpmuqggnnwcfihmnijxtmafvjwuspwspwrixld", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviub", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefwgsewtqzvanq", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqrjozsxzleqpzo", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkjsqhu", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefq", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkqyoa", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkqyoajz", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqevvgbybubrbal", "titznuftzmtndhvhybvtylbmituxwlmjwjhq", "blzylatmmnofqrkakbczdiemzmncdxidlopfqeaflx", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkjs", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwkx", "blzylatmmnofqrkakbczdiemzmncdxidlopf", "blzylatmmnofqrkakbczdiemzmncdxidlopfqeaflxjhaslg", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqjhvlvoes", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnef", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqjhvlvoesr", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqjhvlvoesp", "titznuftzmtndhvhybvtylbmituxwlmjwjhqbbmissdummt", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwoxzk", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbk", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwk", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkjsgjo", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkqy", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqrjozsxzl", "blzylatmmnofqrkakbczdiemzmncdxidlopfetygtjksja", "pqcoxfothzgsmfjehfoarnpkxasxnzvrsnefqjhvlvoespjr", "blzylatmmnofqrkakbczdiemzmncdxidlopfdknhkr", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkmivilcmw", "blzylatmmnofqrkakbczdiemzmncdxidlopfwisbbkviwmqzgv", "titznuftzmtndhvhybvtylbmituxwlmjwjhqpcnyyeozgjtn"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1946417190;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"cqai", "ctpuyufx", "iayckpfgseyclmcykhwzoiolybesrxfflydqkxrfnazbykh", "ctpukamqafyhatlfylaemxhsrpiioegskieawnbwpagax", "cqaicfcjwlznzwulwnxooxjtrrqgfmyurwdafknoa", "ctpuyufxldilcetjpzhroxr", "cifcrwepbzvisqdhbwgjncfhnwxtg", "ctpuarvv", "cqaihlrmirsrwboqufuvzqtdwpclgpgraxhsbqjvnqrftcni", "ctpuarvvmrigtwcrfmtyinnhutsxxojvdbhhajccykw", "cqaiqahhgvvhgeqgvpadwqtqrueyfarckiwsubylwlotpbglag", "c", "cqaihlrmir", "ctpu", "ctpukamq", "cqaimesyhnzisfuwqvrfndzuyqwjhiuwzlgyyq", "cjyowovmjyykh", "bvvutzrzmmxcjuvmfksaemwzoyk", "cifc", "cqaiqahhgv", "ctpustonjzfkovhscigkusoufgabpgdcfdzudd", "ctpustonpvgefvaqttwxwufmbfpfbvvlpmwfka", "ctpuston", "ctpustonjzfko", "cqaihlrmirsrwboqufuvzqt"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 223444;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"cdonwdggvqzcvpqhqvulslkzyaztetiapeihtiuhxjvyhoqq", "kyutnpkuuhjtapxuyiomlusssrecbuwkx", "kyutnpkuuhjetyjziyumtuktcdiatlckay", "kyutnpkuuhjtapxuyiomlusssrecbuwkxvajkdqeq", "cdonwdggvqzcvpqhq", "wpkfuegedqirawxxmitydwethifpidqkhribdouflay", "kyutnpku", "cdonwdgg", "kyutnpkuuhj"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"wsoiyxh", "wsoiyxhxchsdvrnrxdon", "pkgitelzsquhjfuaainyfsdvgzsdmxxveazgnebpoez", "pkgitelzsqfiwnjwyajdpbyfzsaejgmyclgs", "pkgiteludhetctystlfwfrnn", "pkgiteludhyvqdicsedrconijfvbirezachqveesjtzgdn", "pkgiteludhyvqdicsedrconi", "pkgiteludhyvqdicsedrconiddgeczrippbjpimrlh", "pkgitelzsqqgsvhkdkrmypfcexqbghzwluriyxih", "wsoiyxhmgffbwkdfso", "wsoiyxhxchsdvrnrxdonvqhovlczttnfjejultophbimv", "wsoiyxhxch", "pkgiteludh", "pkgitelqcnslltipqttdhudjtxltjmlc", "wsoiyxhrfwidejnrzitjqtyauehqty", "pkgitelzsq", "pkgitel"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 3383;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"gsxibdnn", "gsxibdnnu", "gsxibdnnupffvztnxenvgkyl", "gsxibdnnuxpjibzlesend", "elrahpht", "gsxibdnnwnizuxymwrckfdnqyoyohlzqqrqkkrtavaaikitlr", "elrahphtxhceshngtcyswxtmhdzqpugoonin", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaomdlacakt", "ikiuyssk", "sweiztmvjoxgggjfdlfboxzcwybe", "gsxibdnnupffvzt", "sweiztmv", "elrahphtshhkokbqfmxroxvutwehsikcyblyuzptglz", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxao", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaomdlacaktchuj", "sweiztmvjoxgggjfdlfbosyhpbjwnbahqsxafzvcyd", "gsxibdnngptvvwopyz", "gsxibdnneqnagafsgdrgkevipunvlhqxmpic", "gsxibdnnuwqzypjbsqnyfwjnwgrikiilrlvccnbuzikhefkqc", "elrahphtntoxvwsmmtnxcgoacywauimilkuws", "sweiztmvjoxgggjfdlfbosyhpbjwnbahqsxafzvcydfyrwbl", "gsxibdnneocfahaaxlagoxqrvqluammlwqbpigmjh", "elrahphtntoxvwsmmtnxcgoacywauimilkuwsadqwwatvao", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaohiekrzmlfwwrjp", "gsxibdnnw", "sweiztmvjoxgggjfdlfbosyhpb", "wiiturtx", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaomdlacaktjxpsz", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaoovswryrnnywf", "sweiztmvjoxgggjfdlfbogwwpuogfjunhpwyqqyqiola", "wiiturtxmjxptlvcpmbauxbxs", "elrahphtntoxvwsmm", "elrahphtxhceshngt", "gsxibdnnzkl", "ikiuysskmxqpnyoagsqdmopobjkofbfxxxaohiekrzml", "elrahphtntoxvwsmmoynybwsnykdsbxvreqiddsobfx", "elrahphtntoxvwsmmmmboegkgjjxvirimrrux", "elrahphtmeqasaphtwoit", "sweiztmvjoxgggjfdlfbosyhpboxjtzbwqfqnwyrcggv", "sweiztmvjoxgggjfdlfbo", "gsxibdnnqcipinjzzjqxiybfeeewiytodqygibfpvt", "gsxibdnne", "sweiztmvjoxgggjfdlfboxzcwy", "elrahphtshhkokbqf", "sweiztmvjoxgggjfdlfbosyhpbvokzdrbkcgirydtwzagg", "wiiturtxcnndhmecfyilitfdgjkwsufjb", "elrahphtntoxvwsmmmmboegkgjjxvirimrruxtdhhto", "gsxibdnneqnagafsgdrgkevipunvlhqxmpicqul"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 9593024000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"a", "b", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 281475048013825;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "bf", "bg", "bh", "bu", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bv", "bw", "bx", "cc"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"ab", "abc", "abcd", "a"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "ab", "aab", "aaab", "aaaab", "aaaaab", "aaaaaab", "aaaaaaab", "aaaaaaaab", "aaaaaaaaab", "aaaaaaaaaab", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 34342961152;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"a", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 562949970198528;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"a", "aab", "aac", "aad", "aae", "aaf", "aag", "aah", "aai", "aaj", "aak", "aal", "aam", "aan", "aao", "aap", "aaq", "aar", "aas", "aat", "aau", "aav", "aaw", "aax", "aay", "abb", "abc", "abd", "abe", "abf", "abg", "abh", "abi", "abj", "abk", "anl", "anm", "afd", "afssdf", "agfs", "adfdf", "aqwe"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255553;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"hello", "hell", "hi", "c", "d", "a", "ab", "ba", "bb", "da", "db", "dc", "dd", "de", "daa", "dab", "dac", "dad", "dae", "ca", "cb", "cc", "cd", "ce", "caa", "cab", "cac", "cad", "cae", "ea", "eb", "ec", "ed", "ee", "eaa", "eab", "eae", "ead", "eac", "aab", "eaba", "eaef", "aaaa", "aaaaa", "aaaaaaa", "aaaaaaaa", "z", "x", "y", "q"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2635752978432;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"a", "b", "aa", "ab", "ba", "bb", "aaa", "aaaa", "aaaaa", "aaaab", "aaaac", "aaaacc", "aaaaccc", "aaaacccc", "aaaad", "aaaadd", "aaaaddd", "aaaadddd", "aaaada", "aaaadaa", "aaaadaaa", "aaaadaaaa", "aaaadaab", "aaaadaabb", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix", "x", "xi", "xii", "xiii", "xiv", "xv", "xvi", "xvii", "xviii", "xix", "xx", "xxi", "xxii", "xxiii", "xxiv", "xxv", "xxvi"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 840390525;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "ab", "ac", "ad", "cg", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "ba", "bb", "bc", "bd", "be"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 217704132771840;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"qq", "ww", "ee", "rr", "tt", "yy", "uu", "ii", "oo", "pp", "aa", "ss", "dd", "ff", "gg", "hh", "jj", "kk", "ll", "zz", "xx", "cc", "vv", "bb", "nn", "qw", "we", "er", "rt", "ty", "ui", "io", "op", "as", "sd", "df", "fg", "gh", "hj", "jk", "kl", "zx", "xc", "vb"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 17592186044416;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"a", "b", "ba", "ab"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabbc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbcd", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbaa"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 17622;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"a", "aa", "b", "bb", "c", "cc", "d", "dd", "e", "ee", "f", "ff", "g", "gg", "h", "hh", "i", "ii", "j", "jj", "k", "kk", "l", "ll", "m", "mm", "n", "nn", "o", "oo", "p", "pp", "q", "qq", "r", "rr", "s", "ss", "t", "tt", "u", "uu", "v", "vv", "w", "ww", "x", "xx", "y", "yy"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 847288609443;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", "qq", "ww", "ee", "rr", "tt", "yy", "uu", "ii", "oo", "pp", "aa", "ss", "dd", "ff", "gg", "hh", "jj", "kk", "zz", "xx", "cc"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 334731302496;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "aa", "ab", "ac", "ba", "bb", "bc", "dd", "bd", "ca", "ft", "aaa", "aba", "ababab", "cc", "ccc", "cccc", "ccccc", "ccccccc", "cccccccccc", "fff", "fffff", "fffffff", "ggg", "ggggg", "gggggggggg", "ftlkj", "v", "x", "y", "z", "we", "wx", "et", "vvv", "vvvvv", "vvvvvvv"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 2386800000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "aa", "ab", "ac", "ba", "bb", "bc", "dd", "bd", "ca", "ft", "aaa", "aba", "ababab", "cc", "ccc", "cccc", "ccccc", "ccccccc", "cccccccccc", "fff", "fffff", "fffffff", "ggg", "ggggg", "gggggggggg", "ftlkj", "v", "x", "y", "z", "we", "wx", "et"};
    PrefixFreeSubsets* pObj = new PrefixFreeSubsets();
    clock_t start = clock();
    long result = pObj->cantPrefFreeSubsets(words);
    clock_t end = clock();
    delete pObj;
    long expected = 954720000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10010&pm=7255
********************************************************************************
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
 
typedef long long __int64;
 
class PrefixFreeSubsets
{
public:
  __int64 cantPrefFreeSubsets(vector <string> A)
  {
    int n=A.size();
    sort(A.begin(),A.end());
    __int64 f[60];
    f[n]=1;
    for (int i=n-1;i>=0;i--)
    {
      f[i]=f[i+1];
      int k;
      for (k=i;k<n;k++)
        if (A[k].find(A[i])!=0)
          break;
      f[i]+=f[k];
    }
    return f[0];
  }
};

********************************************************************************
*******************************************************************************/