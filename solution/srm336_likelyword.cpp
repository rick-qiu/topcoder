/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7351
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

class LikelyWord {
public:
    int likely(vector<string> dictionary, int k);
};

int LikelyWord::likely(vector<string> dictionary, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"time", "zoology"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dictionary = {"az", "ma", "xz"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dictionary = {"az", "ma", "xz"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"a", "m", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dictionary = {"a", "g", "m", "s", "z"};
    int k = 5;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dictionary = {"b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"aa", "ab", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"btkuv", "cjspklwvafj", "cmulxjmfextfo", "czvzuja", "degvwf", "dlpwtnodnj", "fltjltifwnzuw", "fwegfpiiwqgpa", "gmi", "helgvjpgpmur", "hhhq", "ijtvfgdoowrrc", "kkfaeap", "konjycfhrl", "l", "msgs", "nkjdvsxb", "nvvqmllqctwli", "nxcjeh", "o", "oskzqvglqczo", "ps", "qdizwxpfuhtvuw", "qgcnrqpbedfagz", "rihq", "shotqhenuobzwym", "splpqqvk", "tbgk", "tdivcr", "utqryqcpqaaqmd", "uzkyqmr", "vb", "vbjhbgz", "vnzpemz", "vywpazaoxdqoxo", "w", "wdlcxcuyzctxjr", "wnbmwr", "xsfkz", "y", "ylqx", "zdbxohsmtotxxsi", "zzhhnvysk"};
    int k = 9;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"bk", "cw", "ei", "fu", "hg", "is", "ke", "lq", "nc", "oo", "qa", "rm", "sy", "uk", "vw", "xi", "yu"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dictionary = {"bk", "cw", "ei", "fu", "hg", "is", "ke", "lqax", "nc", "oo", "qa", "rm", "sy", "uk", "vw", "xi", "yu"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"bk", "cw", "ei", "fu", "hg", "is", "ke", "lqax", "nc", "oo", "qa", "rm", "sy", "uk", "vw", "xi", "y"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"bn", "cw", "ei", "fu", "hg", "is", "ke", "lqax", "nc", "oo", "qa", "rm", "sy", "uk", "vw", "xi", "yu"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dictionary = {"akagrsbcar", "aykfoydhon", "bmuemefncj", "cbedjkhsqf", "cpocgqjyeb", "ddybdwmdrx", "dsiabcojft", "egryyiqotp", "evbxvosuhl", "fjlwsuuzvh", "fxvvqaxfjd", "gmfungzkwz", "haptknbqkv", "hozshtdvyr", "idjrezgbmn", "irtqcfihaj", "jgdozlkmof", "junnwrmscb", "kixmtxoxpx", "kxhlrdrddt", "llrkojtirp", "mabjlpvofl", "moliivxtth", "ncvhgbzzhd", "nrfgdiceuz", "ofpfaoekiv", "otzdxugpwr", "pijcvaivkn", "pwtbsglayj", "qldapmngmf", "qzmzmspmab", "rnwyjyrrnx", "scgxhetxbt", "sqqwekwcpp", "tfavbqyidl", "ttktyxanrh", "uhuswdctfd", "uwertjeysz", "vkoqqphegv", "vyypnvjjur", "wniolblpin", "xbsnihnuwj", "xqcmfnqakf", "yemlctsfyb", "yswjzzullx", "zhgixfwqzt", "zvqhulywnp"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"akagrsbcar", "aykfoydhon", "bmuemefncj", "cbedjkhsqf", "cpocgqjyeb", "ddybdwmdrx", "dsiabcojft", "egryyiqotp", "evbxvosuhl", "fjlwsuuzvh", "fxvvqaxfjd", "gmfungzkwz", "haptknbqkv", "hozshtdvyr", "idjrezgbmn", "irtqcfihaj", "jgdozlkmof", "junnwrmscb", "kixmtxoxpx", "kxhlrdrddt", "llrkojtirp", "mabjlpvofl", "moliivxtth", "ncvhgbzzhd", "nrfgdiceuz", "ofpfaoekiv", "otzdxugpwr", "pijcvaivkn", "pwtbsglayj", "qldapmngmf", "qzmzmspmab", "rnwyjyrrnx", "scgxhetxbt", "sqqwekwcpp", "tfavbqyidl", "ttktyxanrh", "uhuswdctfd", "uwertjeysz", "vkoqqphegv", "vyypnvjjur", "wniolblpin", "xbsnihnuwj", "xqcmfnqakf", "yemlctsfyb", "yswjzzullx", "zhgixfwqzt", "zjn"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"akagrsbcar", "aykfoydhon", "bmuemefncj", "cbedjkhsqf", "cpocgqjyeb", "ddybdwmdrx", "dsiabcojft", "egryyiqotp", "evbxvosuhl", "fjlwsuuzvh", "fxvvqaxfjd", "gmfungzkwz", "haptknbqkv", "hozshtdvyr", "idjrezgbmn", "irtqcfihaj", "jgdozlkmof", "junnwrmscb", "kixmtxoxpx", "kxhlrdrddt", "llrkojtirp", "mabjlpvofl", "moliivxtth", "ncvhgbzzhd", "nrfgdiceuz", "ofpfaoekiv", "otzdxugpwr", "pijcvaivkn", "pwtbsglayj", "qldapmngmf", "qzmzmspmab", "rnwyjyrrnx", "scgxhetxbt", "sqqwekwcpp", "tfavbqyidl", "ttktyxanrh", "uhuswdctfd", "uwertjeysz", "vkoqqphegv", "vyypnvjjur", "wniolblpin", "xbsnihnuwj", "xqcmfnqakf", "yemlctsfyb", "yswjzzullx", "zhgixfwqzt", "zz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"akagrsbcar", "aykfoydhon", "bmuemefncj", "cbedjkhsqf", "cpocgqjyeb", "ddybdwmdrx", "dsiabcojft", "egryyiqotp", "evbxvosuhl", "fjlwsuuzvh", "fxvvqaxfjd", "gmfungzkwz", "haptknbqkv", "hozshtdvyr", "idjrezgbmn", "irtqcfihaj", "jgdozlkmof", "junnwrmscb", "kixmtxoxpx", "kxhlrdrddt", "llrkojtirp", "mabjlpvofl", "moliivxtth", "ncvhgbzzhd", "nrfgdiceuz", "ofpfaoekiv", "otzdxugpwr", "pijcvaivkn", "pwtbsglayj", "qldapmngmf", "qzmzmspmab", "rnwyjyrrnx", "scgxhetxbt", "sqqwekwcpp", "tfavbqyidl", "ttktyxanrh", "uhuswdctfd", "uwertjeysz", "vkoqqphegv", "vyypnvjjur", "wniolblpin", "xbsnihnuwi", "xqcmfnqakf", "yemlctsfyb", "yswjzzullx", "zhgixfwqzt", "zvqh"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"acjjtfhfccmgfjrrtehy", "agtgsxvbiswksowgmirj", "aierodatwthgnbqupkmj", "alnbkecigcofqdvmauyf", "aocdjrxqmqhiamozxviq", "arwmheqdvwdmsksokxkz", "azqeyeicewvbdgehpvxe", "bmbqrwgzyuthbnqnarbp", "bpynxnntqsptgggjqmnl", "btxqmupcnfmryhztqtri", "byosvzkvlhyeqvtzntvj", "cydsejaazwutvajsazkz", "dfebzrefjpbksorwocbc", "efitrdbkeoxemwkhuywm", "gdfggwyuhujjfcvkvoav", "gsdpgletmuknhcxhonhe", "ihhkerhqbkbichpylpuw", "jdfmplxykmjqemaofemb", "jxpwnthifuwpijsrqgad", "kjafrdrfxxoogidcnddi", "kyecmvjyjgpzojodnxzc", "lvpgvkewrvbtmcfdjyao", "masgyfbrxvvyphblfhyh", "mgxmlgvqxfkthzrzjuaw", "moejkyzjgulgdgwkszhm", "muttjzmzerevonptizhj", "okrwdnhozskakzterbtl", "ovncrxhwzsmsvowflywc", "pbfkinfcqaifgkmhfxeg", "qklnbwxfaqgzuvxopqhc", "rcfvdkmifuxxdktfgivl", "ryajbgcngjczpkslkswy", "skpriuxzgcecckcjvzzz", "thdqmfggpnarfglkajzj", "uuiczqiibtmkvtsyqzbb", "uyzfbahbhvrllodzwoob", "vpwsahawonjgtgnxbsay", "wagadgkmmpesgoxvtgfn", "wjohnqjmpevvbdvzcosc", "wrgrneisbaitebloccej", "xukehbevwlljbzsxkqdt"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dictionary = {"cvsmoysvkw", "edditfavbp", "hlhsybuttz", "knrnibdlir", "lsefdfnmxh", "lyzqwupiqu", "mfocwkxtay", "mwzjkorsbx", "ocheycuouq", "pevuimejrm", "rxosyycoxx", "twsywrpgfh", "yrebvnmvcz", "znwthrnjzs"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"cdkfezpsv", "egacbqhny", "egmjcgsuz", "hdrensxnp", "hlqtlafgb", "hrkslqcwm", "jbvroooon", "kjztoemsc", "lipurgeml", "mtoyatteh", "ozwusszku", "pzuiqplza", "vrbagjowc", "vykgrgpko", "wbemqipgz", "xkkstnxxg", "xvitophxj"};
    int k = 4;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"atgmemeqtzvogsocwuxqpdnqhezjru"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"aefvhemggnnizbapekrzbvgvyqiq", "atmyxcgbybeizdpusxkbwynpybpk", "awvfoxqgscopeltrlanzdalwlpyi", "batmvnshdfupbbioslrgckkhijrz", "bhrggsdvjyyimmptptgzhweqzhgx", "bzynzhnqlcbvadmjrwyoqaalcyal", "ddjfpxtgrcseizhmpqlsiidrpgyd", "deupcjeiljlbcnhflzdsrbtqsdjk", "dtrlyatgzmmjzvhxvitecktdazis", "eejrpjunkvvtfgwbzyellqvvtotp", "fvxbdnjjnzdslklsusyxlzadhhci", "gbnhldznhpyrbnrkjyolidnjddie", "gbyeyhcrilsgscuvmklsgzlbelza", "hqlyihscnpnakutlnbldciopgqvx", "hqoohflwlsjuhndnvbphdbjkltrs", "hvnrysbehigvcalkujmwddfwgwaa", "ieuwxpyqkdpyhtglnvafnubddszi", "kmrqbrkbowvwwjypfdwrigahorqf", "kyyrqloucrhcmxeoaxdordbvcmjc", "lrhfjidtwvownqyiredgwwzwuztf", "naxfcwjsezyhlwowxhcpemebymbp", "ngxzqpgvbymwjgqhowfkwftmtpkh", "ojxfhrxmxeiftiislkhhtvaituew", "oxlxkgiqryyqnqxxxuwhifdiwlou", "psgzezbnyovfuejcjybqlrivpyet", "qdlvpnhbjjvhmtkpqeztirqfkkym", "sitnrhbzjvggchvuqzoriuqeyypj", "sjaofbyazmwsuwwtgsbuaknkmqfj", "thxulhzkjbnvacouqcgxegtcorqi", "urjufsjfhghjrgazrdnndbmpdesv", "vmxzykgqvagkzzuhzmwinjeinpuv", "vqnkcuyhunkxyoyopfmaauokrfqb", "wnzfmqbavwnwlhkekgctlragozvx", "xcrkwrovqvaydjpwuicsnowmnaoz", "yjezzxgpskwrsylouucjlnyfgeca", "yjprqojywujoswzdzomlitefnvse", "ypbjyteflugysrrqighseevibgen", "zabzozqafbiqktlgwzdsbhgnsdow", "zizdsdcgterecbpumshrrciulexn"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"dakllpgnxgksafzdlud", "dbdsqtdplfkeuusonnj", "dkzwperfvoopniaprho", "fpqkqccpkibnvkhqpwq", "frjcdbwfmuexlpgzmyf", "gtodntipwanqkdhadrk", "igwfihhmvgwqclgokvm", "iiqxfxsbywmcfqzhrrz", "jagphzwjhetprrtlvhc", "jzsmcmzykjqvjodmszy", "kqchsuiskiazfzlupyq", "kruxolviixxoipaecst", "lhpxjigzobrkzlgoizd", "mhidtkzqkzcyuzqskzg", "ngqvbdvikoblrwxlgql", "njzshgzbndhfxqvdndt", "owrekcqzmwnroitfdyo", "pbjujsgjhrfoumrnnss", "pkoztbsczoxmkibukjv", "rfnfdkgnokuqniupmjs", "rohnfxwocxrxatcydey", "ryjmecehqwhodyjsusc", "shuigeuojihfgygzvqo", "uixdcxyhlkfrdhaevid", "vvhddjxegrxezsgvftq", "vwtesuqlzjoztouejyx", "yhijmglbpakxrpjgtne", "yslrkrrdoeokuifylvo", "zkachxazclzdnfhkbrb"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"aijsjikklikyf", "avtujjrcyllxx", "bcdnttzcsnfgt", "bhfwfdpivehir", "enwcygenfxuhv", "ffabiayavxafl", "gxxygqcdgtehk", "gysmttnrxbtjs", "kqltvgxbtmube", "kusxraamymdaq", "lfrzxadwcnzvd", "liopezsxfmqvn", "lkpwfzgueycbp", "lxvilifrhpzbz", "nigydlhatnofm", "nqprtiyqyfwwc", "odrefbaxojdri", "ogghfyjgptivs", "pmrhwbjunxexm", "ptgqjyznqwdrz", "pxxztykvprply", "pzujatchcfpaj", "qmtdmhlffgyxr", "rlnbnrafqliua", "slrpfaymjtpcj", "tccybbnciimjq", "thigwkmfdiqyl", "tzszyvlngqoyz", "uriawbhgypgup", "xggnwutiyhten", "xqmsitdfwlbgs", "yzjuhiodbwvab"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"dbsntydzhrppgfdxvsqilekzrtxeflquzowerpoafswrmcuxq", "donctjzfwuwdiqcxxnfmhqzzonwtdhluzrwjgnedhogpwwvvm", "mbtxwkaocwchfmhcffwlpgdndlmwcyvacapuqddzgacpjbrvz", "wrakkokypdmfqaqjuuufeyuqltxbvtojfthmgxsodiccvdiot"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"ajeuadxctudmxvuxssdnklvhrwcycttpdtdcbiweercbkk", "avtabcxnakcntrsancyhnfvhvbqzpnirchztlazlfeksin", "axrozaykrxedeynbybcymlhcganqdzyqfnlxbgcztydngy", "butshwxsdwzhymuyhhloccnjersccowvmaxgntjkncwtwq", "ghmwuczgesdwidpnncyohiqmnebxbwxkixctcrwuhxppfz", "gjkrdlzphisyryjpwlfwetmogespdwbnyhkkaafwaitdoy", "iwihjlxmbqpbbljjpfgzanwkrlpiqqdhntyrcjhilbmmzw", "keyyxgxmnoespwzsdftarpnxyfwmhrxuyadcuqxpbxyqmo", "meokipprhcfvydzzabghoamwvhgudnefajtailxsdogeog", "mqdisxrbpkmqhymotkeovrjltoihkxonrmsqrneerwiuao", "nkowypqyiynfmflsygkgmosfnhwdwijzlpcaetjopqssvo", "orpilzwltysmjyqwbqafydxtlhepokcmdukytukygkcvod", "qhazyycsdtudkllwzscfeztgeudwzjjxlaevwihlavfzux", "qnnvcuxunonzfwommdchsgulqpijnmcrfbwlrwegjwetie", "ssniprddvbvpgwzjafmhlwdceejxtdzsjakgomsklpfbnb", "tevtlfxvaehuquwkspkppnoybyjlsghytzqtujtvbuweke", "urjxfejcvsliinvncancaudbzfcyyvzdgiyfheqoipcyel", "wurstpkqpqmhmbjkuiwvqszhsxnitacwqxdkqmmogsuvtx", "xljgxuekhkdiuepddjgykcrqyguhayyeeyhuazncdkapic", "ymjwadjievsuozlwfywhyycpymnbutxasvjkyeldsalqsl"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"ytdummkrrqnwjmqrggdttrqvvmjroumggtbjch"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"bleafubdiytelad", "giafqixnizyhxjr", "hfjdlakutcubccj", "islinkkvdmkvsqm", "mkfsobdzhuyaazv"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"esjrlltoarxmjfkxncfmjsumszseaijndifwdroqcdrlqjqzal", "fendovggtyadrgdarxrwiedwpmlwauzqpjstxjsgblrcoshejv", "kfzbrojqucicthgzbhlwhwqmwvkeoqgcvgmyrdajlljjvlthjn", "kmhpsyjhobrzfqucisxbcrgwgwukhrkxubrhlrlhyudyqmfomb", "nvudhnucvbyjepankfygncpmxktubpwcicxkriotoswirqxqjp", "ojtjpvphmqefivuyinatetgfdbpqvvyaumedrmidpjdmqokvdb", "scyynxbcszinxpcrnwvrzjtsmqfvafsnxtwaqaeixvwmoekbuh", "soplmyafbuclvuzpcpkqlybhlncaxkrzycqbkncjnigmeifjlv", "trccrvhvxjvqzuvvqwpwnltuvdqaxgnflhiatatyrktnqpyilp", "uusahcxdwkpzogkdfdzxbwqnthacvqsyaltwxmualmgrmsqkoa", "wjaphagmslkeojggxorufvupxloqkusxbxtihjkgwvzobkaltk", "ybkwcnefyzobjjtktfniluewzwfnejceissroizazriqqtrgsq"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"aghikmfjeqodcyvqwmcgqy", "cidghcdzkedgelxzkmjkye", "gnadyymqzmiquqlacurkmt", "itmqddnhneswloeziylxfn", "jaemtexvxbeswzhsolgvdp", "jjgbscaadhifmgfyaqjdyc", "jussdgffgtpqrqbszgpndq", "kbccewlhjsiepkffzxksdc", "kisbwxapfiumrimvsdrkfr", "kyydkkdlhwjhfwwguigahv", "lnhzieppmbohjbiqffyrmb", "mgyoaifcodhgssoecrvury", "mnikdxnwlljnweeabxpdwq", "olfddqskvudodofrbcemyo", "oyzjmuwdrywubvaguldsnr", "peasuqqydkfjjwapsxvebq", "scezlocejyioutpodialgi", "seppwcgchmoepinkvggtzc", "ssgzeoddvmdpuzrqeujicf", "sylyjulsijdwolvixphfrv", "uhsdrwjqopdtebtwnoywkq", "uhzgnordezpftghxmdlwsa", "wgrfqoltrxogqydxrismon", "ylruoxmncdaymmhixmoqyc"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"lxd", "yazyjku"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"abmcmp", "agfeo", "b", "blrccs", "buio", "cow", "didvqr", "e", "ebu", "f", "g", "hjytq", "hma", "if", "iu", "jpjta", "l", "lwy", "mv", "nd", "nhniq", "or", "oxgs", "rnj", "rxx", "skvj", "tfj", "uhmfxe", "uwriz", "w", "whmce", "wxmtf", "xxj", "zt"};
    int k = 9;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"awgenckcdbzyyxa", "bfbcfkyqiarulfbx", "dar", "e", "fbhydifmesgvpskzsc", "fjluxkhogab", "fluarjeeoxxhysin", "hbficvisl", "idmfsccat", "lrsagwcqlcwpxemgtj", "mlhqqihzwkavcgtokr", "n", "nvujwfevpyb", "prbqdronixz", "qkixllfutsqctcz", "qqnqgqikuj", "r", "rbpdjllntsrdq", "rmxgnvsipauchvrmm", "rqmvjqiaxwdq", "rzvaactmfcpffb", "seqkdffwijrjkaxsf", "skapwjhtmw", "srgf", "twmdbbthfr", "v", "vjsznugxoohwvnxrs", "vqdi", "vvyeseyzfwsw", "vywreccuokpbvltiy", "wnao"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"sraqmdrkklbbcvzsidurbchyzymghrrrrxq", "yryreroipzbxdqaupnfoqsnhfwxvcynbuvaeaixda"};
    int k = 4;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"ahfocqspqaynhtyzmtzwseqotxkrbjrx", "dejbvb", "ehxyipazussfgvcxvbmpkazepnjnglcglgpp", "eoxrcxpugufviutckxmriinbqkfdkqtilzdqepxq", "esdujsomubdqqdvflcexzkshwhuwjlahgcxpahz", "fsudbzxdrayiqwoiykphguhxaeqouhx", "ftwvrkyqdxxnhmkpxyaknwoxdncydbxeoilyozcftjlho", "gljniakbjrhffmlycr", "gmwvyqvm", "gumqbzcovydbeeyfreqjivlmcnwzoyibhomwjkodpir", "gvhgfeoxygmlptvxapxzwfjrhijyzomygujhtseftmgfg", "hjiejacwqpzepbtfbglgblocnepjg", "jf", "kazvwivrlrs", "kstiesrhryjfhymsfa", "kvtwgpmwweukubeczpuqx", "mfnofefbxhxhhbosyjt", "nvsyeevwxboiri", "o", "obudjwdvpjuftmjuycieqjeciszdw", "oijhtmyhbfnzup", "qswzlmxujepzxewpzftrhxlkskplzvybuqeurcklap", "radpzmfxmdtllkm", "rhvxsaezbz", "rijrxfvifbnmlfygcrxpltmnhbxabqifwvnmcquqzkjzpjoa", "rmedvspwnmokxjbnbttvn", "seefnrjgnsferpangjeyzqhfbqgawkjavhmpmkgwxcseyw", "sjgvbyaktxsmnmyamxmpghqxntdsmkthvncpw", "twmhzqunwnrooundlpmblwvafooegklmb", "um", "urmywqfmwfnkc", "uvwcodaxzslmxytizkjvqjuyfbsrrqfusqenydufowty", "vgfzlcxwifphqtgesbdbhnglwwwenaggttyyees", "wponbxeepmaxhon", "wsqljv", "xnkemkqmqidtdbirlqidyzljuuitblehspy", "xrlomftszqtzgebkiprncvimnuhluyawjzqzgymhmesvvfi", "xvnzeaqhaheiywfnviwy", "xwkfhyhhdurhyhatavwoikwoagnhabrgu", "ziiinjcpmvclyqzutjygkqdkukekmjchqkyfbnivfypcoj", "zitxtfpitmtdlejqoxqob"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"bplflw", "e", "esjpd", "fxovumgztr", "hwvmpbdgu", "i", "igzsquvzzc", "kdthgpbllq", "lihieqqkh", "mn", "ngfh", "pzz", "qo", "ro", "uiumin", "vortvfphdg", "z", "zjdm"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"aixhzzvxehy", "bweydmczaxnhxe", "drgzr", "eczuxbqv", "gnfzu", "gqkujouciefg", "hbvbdwjrspuvei", "hpgxkpfoy", "ieeodjpqeexhxcvq", "lpeczjzhjq", "mlgvhvbtcq", "ncdmvfkjuffuyiv", "oe", "rapyn", "rn", "touvatezhdpafti", "zmk"};
    int k = 4;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"ahtbghxbdlavzhmohnfhxeyrh", "bopnxndpeqsiijtpsmytlzyhrtyzcx", "bzebfehbyjxorp", "cijyqcnmc", "ckbmbicfbvrxtnfcyatbmwpmrrzhbeotd", "csztzjawuyb", "cvdvs", "dhpmoxvevlshcriuhgstqpoxmypunaugjt", "e", "ejypgnsqn", "ewkbafwwciyzzgosle", "fwhttnlchiminpyxwffwmszeiezkoub", "gdbazljagivgytnu", "gtms", "gxbjfx", "h", "indln", "itvkjojzhx", "jvuvsjhdwlt", "kfsuozhphfjte", "m", "ncpgppstacrvrgspdfvcxmyplj", "nfrymubcss", "ngfmcfogzutqhfvxe", "ngrtxefybftbvp", "ofijflgtvsggr", "ogzrlqdvqbbhlwyeycqwuxnmhzmdir", "phfddgyraxjegbyblcfcuawchj", "qdlrtcpwnkpotxxaoysrgqsq", "qvyttwcxzcuccdl", "rcdfndnfriykbgy", "relarwskjbhlmjfbuvltnpluccw", "skvaxgdqrue", "tacbcfbggtmfxkyazhtytouhqse", "tqzya", "udldhxfwjunqfqwnbnbryckzn", "uertgigtmmbga", "ulvypfkiorcgsidjrqapjytqzpbieymj", "veqdyunublzkydxvepd", "vfovqsixr", "wjxhbiaxrpwfcqblchevtvqcf", "xqitdlnilragyqoykeklyqilj", "xsjtcsbylukeav", "xzibqbgrfknglqiiwtdpgwyozyus", "zgzoqzdealx", "zm"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"arkgyvxmyjdtjteilxybdynyi", "aryqmarkgzfbjjjjltuwopyvupz", "aspeoqomxxapalpmhvpbnmswxgvfumppfrlwkcorpa", "bjhjljdybbflxky", "bqgfjbnusjdqyrmzpxtuwohpjrolldlrjjwel", "bzuhdbycxspwjgozpjfgyfdgiyvgs", "czjyqmn", "doheluilxdw", "ecmwkbxxjwwbggegeqkymplisdtuuuwkced", "eqd", "flzvvyxkyajtvcxzlzpgjwrkgnpujwqhdmqpmmaqwlzof", "idivemqsdzyccucnimbhdlvl", "iwomiermmlg", "jinybyohipznwpjjqu", "jwpnthaqjiyzcsuizcvxsyzoiotghtnj", "kcksaqvxdlyxvtrz", "lavwsdvdpxmiarzhwmizjgaekjb", "lczbjavfaytnp", "mewdrhcxpoyadexvqtleevlbhzlppgvknvfjqwkdtz", "nogka", "oajantiat", "orwglbxsaxoqishqwszahbnpjppvxusmrxucfyxj", "ptoftmdkuluvzzfgyhhzspfytxfnxhokaqrytejr", "pvpfbinhbnnz", "rdeynueslauwswyhrdtyhnvmwkrqhqhslfptnj", "sssiomyfirffhdduwvehjwqxsqmnwutnzpl", "svdrpfbf", "toepxiytummszghbfribaqdwnaunawhsc", "ufxeubendlbdexkqqvxzfunwhtdzvefktofbclcqf", "ulcagtf", "wlejtwmewprmlwxwmczzbkcbqjcombqlnggjlpiysh", "wludvhcxfonzqmjhiqbxzzychslutvxzczfpt", "woodjddepfewujopqbrqzngmotkxs", "zabqaleheufpsulszj"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"awrnrkmauhjranhoovqn", "byjworbkxxljjwk", "cimstkiu", "cirrafzlpzkrnkcsvxsyhwnvfyizn", "ckxshkacie", "ecavdiishprzcjgbkipojcetnuhq", "erhoauyjhodltcywdtahepfnrevluz", "fuwoeescdnnetmimcynflkzttshfmbi", "gpdsdhi", "gxongeigzievpjc", "htteiyyunqeuvkhyrk", "hzfodvloyacmqqqpf", "ijtpzjwcmzsjxghkwmjwzbvwwbtsu", "ipjm", "ixvnfyeaawkatgctpdj", "jb", "jmbvidrsifwiirlvmtc", "kjerpxklsmisolu", "laauhcczcqgsgsgiuihb", "lcrjoylmbvvzmkurtltbkmacdokn", "likvjpvnspfgnzqubfxhdkccdfvjq", "lum", "lwyxokkit", "nibocnwstvnwskywzacwhjhicrm", "nksmezqwfrtnbhsznrn", "oewzroywyzjghoja", "papvmwdhgmziqasxvihgiczc", "pccsekokde", "rqfzicvhxbeb", "sqautdwrdbbs", "syzfgqugzpct", "wr", "xkpdofydqpoljeehvrjfuwbbi", "ysudxrmlio", "yxfhuiqsyboztnszjmtjablaz", "zjxlphoyjhndhegophaik"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dictionary = {"auovpzswlukuelnzncrmurdrjceqzw", "aycepssm", "cicjsjbvxdbutjtqygdytyl", "dnvzxpdqqftctookvap", "dyqrzoqgxzurbipzfwdd", "eyrbldqygilljslaaovsal", "fqsdzvitncpheyryjzcdjohuyinamn", "hernjewiacihtijwnjcprn", "id", "jffo", "jmethjrnmbfyjpxnzmqpajwsxl", "jtirvbvpeorvppoespj", "kyvtzundvyoebbxj", "ofqxkvbdht", "ohgmebdggioayaehkxvguxidytmd", "qzxyfcwkihoagfiqyqyky", "udwdlxgvimxeumwstiprgqvrxyz", "veahxnpzygsmwxudlelxsxfexxvbhar", "vtwerkpx", "wtxyofmwqdarbmni", "xuasazpgqadeufinvhb", "y", "ytktsds", "zbqilyzdslojxxssuaphrmbuy", "zbzttivawltntkwtw", "zefysbywkrorrsmdpbpzzjkqvcsbxvy", "zirlmjrvblbnczjevukddeorwwm", "zqjcdlcrckclsxxivrpwhdcoa"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"aenyleocrfoeq", "chrsyqcvpituiilegc", "csomt", "eqgpzkmfxymsuetbawyr", "fvicdbx", "ib", "itbqb", "jiargtjjdtgciphpk", "jkcwffoxpfgg", "lvvkkwll", "mgtdvv", "oqggdwlmzjl", "pdwstbgfvr", "puakmtwgxktgkekq", "qdszuyeanmtuznzcp", "relivaur", "sexifwnvskuwvuvwo", "sfeed", "sjmwavuhuc", "tobacvvmeqtlyvj", "uppdkdfijvqsrkdfvrwxu", "uuxmmmazlo", "uxpyegj", "v", "vi", "vsnwmjd", "wmqrlxt", "wnceatjxq", "woo", "xzmobhpuu", "ybxgfklospzrp", "ycxoy", "zxauopsxdop"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"bccklehqitnrppadbikgvx", "bctvibppsvdreter", "bxutsyeejdzkef", "efcuztkb", "elia", "ezolkcfqaoikwsaercbap", "fnetfpoefxftdxtfpsydpuz", "forzy", "fowonlminpgtwydopqfhiw", "fydvtebvz", "h", "ixjafyjfiwrvti", "jdmzbhuhh", "kiluljcasyshict", "laqjafbsbodydyqkep", "lkmvqzrojzpgznpmyj", "ll", "loxejsiahfambj", "mhleeejvrudc", "njixpfrvjovyxybpfni", "npaumxfhocyfacrdzvgvwmy", "pbwtfmguhpihjnmhz", "qlvanyxc", "qojp", "rh", "rzkvynvsgxcpc", "tgbifftzxvbdudcyb", "tybflytqymbhgtpijaoy", "ujythelpuvqpiomjwhlcjvd", "vvruaogzacxqoapnsnnygzr", "xrkotqjlct", "xtmxkrsdr", "xu", "y", "yqnoqxvsmergi", "zjmlfnbmqykrjbkycgl"};
    int k = 5;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"jhpoovptqkvhafqxnrwkpwezyyulthknahwfhujzovgobamvz", "jhpoovptqkvhafqxnrwkpwezyyulthknbiksv", "jhpoovptqkvhafqxnrwkpwezyyulthknbmdrtghdqnplhtrr", "jhpoovptqkvhafqxnrwkpwezyyulthkncpsehbuiwbtto", "jhpoovptqkvhafqxnrwkpwezyyulthkncpstets", "jhpoovptqkvhafqxnrwkpwezyyulthkndqqvzatetyun", "jhpoovptqkvhafqxnrwkpwezyyulthknen", "jhpoovptqkvhafqxnrwkpwezyyulthkneplelrjpx", "jhpoovptqkvhafqxnrwkpwezyyulthkngbjosfwt", "jhpoovptqkvhafqxnrwkpwezyyulthknixptdmj", "jhpoovptqkvhafqxnrwkpwezyyulthknkvqodwo", "jhpoovptqkvhafqxnrwkpwezyyulthknlfmcfyqnvxg", "jhpoovptqkvhafqxnrwkpwezyyulthknmhufk", "jhpoovptqkvhafqxnrwkpwezyyulthknmoscxuuocnwdsk", "jhpoovptqkvhafqxnrwkpwezyyulthknnbtejbfiowpowtzg", "jhpoovptqkvhafqxnrwkpwezyyulthknnenizubvtotzx", "jhpoovptqkvhafqxnrwkpwezyyulthknosf", "jhpoovptqkvhafqxnrwkpwezyyulthknpdxvfjnmjrkdumne", "jhpoovptqkvhafqxnrwkpwezyyulthknpzzuwezwzqdz", "jhpoovptqkvhafqxnrwkpwezyyulthknrckw", "jhpoovptqkvhafqxnrwkpwezyyulthknrkbpbvphukguw", "jhpoovptqkvhafqxnrwkpwezyyulthknrugfqhcgdcvkzgg", "jhpoovptqkvhafqxnrwkpwezyyulthkntnlhwhzthctarmzju", "jhpoovptqkvhafqxnrwkpwezyyulthkntqhhbtduft", "jhpoovptqkvhafqxnrwkpwezyyulthkntsrxroljxf", "jhpoovptqkvhafqxnrwkpwezyyulthkny", "jhpoovptqkvhafqxnrwkpwezyyulthknyamamequzzfwafwslj", "jhpoovptqkvhafqxnrwkpwezyyulthknybypqbn", "jhpoovptqkvhafqxnrwkpwezyyulthknyhiqxzkootyfzoe", "jhpoovptqkvhafqxnrwkpwezyyulthknywtenmbdwjhawnl", "jhpoovptqkvhafqxnrwkpwezyyulthknzhaewpmyredlcy", "jhpoovptqkvhafqxnrwkpwezyyulthknznzpjwreqgt"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dictionary = {"llvbyxhtfbwxapxzeuivcudtj", "llvbyxhtfbwxbqw", "llvbyxhtfbwxbrmaphxyazvyc", "llvbyxhtfbwxbtlfcvcsbstqkrsnrfcjsfawnusi", "llvbyxhtfbwxbynqwjx", "llvbyxhtfbwxbzoqtdzxkopplntaeckkwbfosq", "llvbyxhtfbwxcwliymubnuuqftc", "llvbyxhtfbwxdatffshiscwenzhxoayupckxsqcurgth", "llvbyxhtfbwxemldfjb", "llvbyxhtfbwxf", "llvbyxhtfbwxfmpfrwyigkwuwccaqwrfuxaibmnmolceca", "llvbyxhtfbwxfqwnpsvvvkrhtqmiedftrstobesuagfcwioa", "llvbyxhtfbwxhcteboqgsohijbhlgwyse", "llvbyxhtfbwxheeqvtfdydlmpzzorehvsmoasaytgjnjpabq", "llvbyxhtfbwxiqujjaendnqdqdmhzthuouj", "llvbyxhtfbwxjiblbasxonjeencylyaexueydrrrgwfgzjy", "llvbyxhtfbwxkdiusryyshyqsqrfcrilvby", "llvbyxhtfbwxklwnn", "llvbyxhtfbwxktdaxjmsqlfwdyswmwelynfvdasnqzbnyc", "llvbyxhtfbwxlafbmohqciraszxhaueszym", "llvbyxhtfbwxlurgrftfgr", "llvbyxhtfbwxlxdueodlykliitpugxrfkt", "llvbyxhtfbwxmjoadwokalvidzjrqtdtj", "llvbyxhtfbwxnfgme", "llvbyxhtfbwxohcugyivccvu", "llvbyxhtfbwxpnriznaokaruluspulbtqbltcudfh", "llvbyxhtfbwxqrnzexrgf", "llvbyxhtfbwxqxco", "llvbyxhtfbwxscxopdqjiajvhmnqbjqvhpvkmecbhewdbs", "llvbyxhtfbwxsfejqqzzufozkjuisgza", "llvbyxhtfbwxvbdltaykfbmafsoypqehrbsgyggiel", "llvbyxhtfbwxwedajezcuvejpfzwjoi", "llvbyxhtfbwxwrgpmuj", "llvbyxhtfbwxwuwsdnfdufzd", "llvbyxhtfbwxylogfduknveyxjqcqygw", "llvbyxhtfbwxyoy", "llvbyxhtfbwxzoivzrpoffjpkjxflc"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"uuapiczsbcrvxdalomvfdwdcn", "uuapiczsmjjgnqiixbfsfseugylpmsjzaexqavrhul", "uuapiczstvgigosndjlnztctfmtwymxylrpevngxfdxvbnof", "uuapiczswqrhpndqffg", "uuapiczszqsweudutwyuaghmbvlypuxotagkgvohtmsldujc"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"gamfthnwnmdegipmlpdnaooujydcatfv", "gamfthnwnmdegipmlpdnaooujydcbsdcqrmoptjpixh", "gamfthnwnmdegipmlpdnaooujydcfbubshardtyfyublwpmly", "gamfthnwnmdegipmlpdnaooujydcfgrwxoqguugvvkmevvef", "gamfthnwnmdegipmlpdnaooujydcfqdbqlexkbobvu", "gamfthnwnmdegipmlpdnaooujydcgitvubnoysydf", "gamfthnwnmdegipmlpdnaooujydcgl", "gamfthnwnmdegipmlpdnaooujydcgofmsnefkgdfjelbonas", "gamfthnwnmdegipmlpdnaooujydcheniyh", "gamfthnwnmdegipmlpdnaooujydchviyb", "gamfthnwnmdegipmlpdnaooujydcivnxbvaqrq", "gamfthnwnmdegipmlpdnaooujydcjcbprcbrjrucivcqyjgnie", "gamfthnwnmdegipmlpdnaooujydcjzywkc", "gamfthnwnmdegipmlpdnaooujydckqdezfpmux", "gamfthnwnmdegipmlpdnaooujydclxsztwyakyqsybaqfhiyq", "gamfthnwnmdegipmlpdnaooujydcmeavqotdyarmlnfoohra", "gamfthnwnmdegipmlpdnaooujydco", "gamfthnwnmdegipmlpdnaooujydcomuxsgisugypp", "gamfthnwnmdegipmlpdnaooujydcpokpbqzqllah", "gamfthnwnmdegipmlpdnaooujydcpqyogpmvccvi", "gamfthnwnmdegipmlpdnaooujydcpsoqt", "gamfthnwnmdegipmlpdnaooujydctvhiwamjpqfz", "gamfthnwnmdegipmlpdnaooujydcu", "gamfthnwnmdegipmlpdnaooujydcudprdvkrpsbkntevx", "gamfthnwnmdegipmlpdnaooujydcumtsqawctalfunbtvs", "gamfthnwnmdegipmlpdnaooujydcvwmjukykswjbfsjqnrdkf", "gamfthnwnmdegipmlpdnaooujydcxgqstpftyym", "gamfthnwnmdegipmlpdnaooujydcxpovhdyzehzjehfl", "gamfthnwnmdegipmlpdnaooujydcxrtkhbzsrfibqvtdkqguea", "gamfthnwnmdegipmlpdnaooujydcxwmgqltgodyux", "gamfthnwnmdegipmlpdnaooujydcyqhndnldxfpanpvbkqwhe", "gamfthnwnmdegipmlpdnaooujydcz", "gamfthnwnmdegipmlpdnaooujydczmrwvtkiye"};
    int k = 9;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dictionary = {"yaldbdocptyukqrabehrtuurmspcepfrfjlttcgg", "yaldbdocptyukqrabehrtuurmspcwkqihoccs", "yaldbdocptyukqrabehrtuurmspgkcdka", "yaldbdocptyukqrabehrtuurmspgvpmq", "yaldbdocptyukqrabehrtuurmspjyrpccdlwwigtyhrqgpah", "yaldbdocptyukqrabehrtuurmspkmrgkgncmihrqgvz", "yaldbdocptyukqrabehrtuurmsplwdsvlkldwtthzk", "yaldbdocptyukqrabehrtuurmspmhnnagbm", "yaldbdocptyukqrabehrtuurmspmozpp", "yaldbdocptyukqrabehrtuurmspnfclcedc", "yaldbdocptyukqrabehrtuurmspnfwnlutlfq", "yaldbdocptyukqrabehrtuurmspnnphlupwltufhtm", "yaldbdocptyukqrabehrtuurmspog", "yaldbdocptyukqrabehrtuurmspovkw", "yaldbdocptyukqrabehrtuurmsprkwbdztjlkapxbyctywfdb", "yaldbdocptyukqrabehrtuurmsprnij", "yaldbdocptyukqrabehrtuurmsprokcqtlbotrcmesbcbqgzym", "yaldbdocptyukqrabehrtuurmsprovvio", "yaldbdocptyukqrabehrtuurmspscuprrhaffoegfushhuovwv", "yaldbdocptyukqrabehrtuurmspshoeo", "yaldbdocptyukqrabehrtuurmsptpwjvokzbcctltkyhwai", "yaldbdocptyukqrabehrtuurmsptxpksymjzkxnmyqwzie", "yaldbdocptyukqrabehrtuurmspuec", "yaldbdocptyukqrabehrtuurmspugkygofdvrfgbqfxtuopri", "yaldbdocptyukqrabehrtuurmspvdjypmaww", "yaldbdocptyukqrabehrtuurmspvrujjhlpjbctxag", "yaldbdocptyukqrabehrtuurmspxjfsuwllpz", "yaldbdocptyukqrabehrtuurmspxlrubq", "yaldbdocptyukqrabehrtuurmspyz", "yaldbdocptyukqrabehrtuurmspzg", "yaldbdocptyukqrabehrtuurmspzmwabmnafu"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"oewvqgcgrnyvvtbgbeauveuwbluepkils", "oewvqgcgrnyvvtbgbeax", "oewvqgcgrnyvvtbgbecgwgkaxsomytedkvlmo", "oewvqgcgrnyvvtbgbecpxgrbsgdtkrpmohnss", "oewvqgcgrnyvvtbgbeduvrbsnlcozhumoqpztikvdupdbl", "oewvqgcgrnyvvtbgbedwdniu", "oewvqgcgrnyvvtbgbeedouhnsxunqqwwhkcpsteunquekm", "oewvqgcgrnyvvtbgbeelkatruywzrkjzjrthe", "oewvqgcgrnyvvtbgbeeom", "oewvqgcgrnyvvtbgbefabygvvmzf", "oewvqgcgrnyvvtbgbefh", "oewvqgcgrnyvvtbgbegzobnkifwaxkz", "oewvqgcgrnyvvtbgbehdmrxyvszakznxoxtuznlccpzdr", "oewvqgcgrnyvvtbgbehjwsrlyfybcacpzkptqqzhlglecx", "oewvqgcgrnyvvtbgbehqadwhlrkjwbvgrox", "oewvqgcgrnyvvtbgbehwlkjrevsuzcxfisuubsnsdyasjoa", "oewvqgcgrnyvvtbgbeliltveteupwvujtdbybmvrff", "oewvqgcgrnyvvtbgbelpwzgc", "oewvqgcgrnyvvtbgbelsnpkugzoimugmsmzdfnxkixqcrcsaw", "oewvqgcgrnyvvtbgbelsujuiiozpqsvsvoktezepwkv", "oewvqgcgrnyvvtbgbelzysqydnripntexdg", "oewvqgcgrnyvvtbgbemaostyuiqptzcavxrtaemaaphoby", "oewvqgcgrnyvvtbgbemggdheetucikdnysamrdneiaenenub", "oewvqgcgrnyvvtbgbemtrjvayoohytzpyrscpfnuwpdzmkq", "oewvqgcgrnyvvtbgbenpkkuyunwthozouhjzdyn", "oewvqgcgrnyvvtbgbenqssztktrezitvgveeqrkol", "oewvqgcgrnyvvtbgbenzvbeweywicbite", "oewvqgcgrnyvvtbgbeodonh", "oewvqgcgrnyvvtbgbeoomlbizbxhvuqtkn", "oewvqgcgrnyvvtbgbeotqlbxk", "oewvqgcgrnyvvtbgbepj", "oewvqgcgrnyvvtbgbeqohzuiywlkuc", "oewvqgcgrnyvvtbgbeqokyhskxjedumksbloltxlvzcfjk", "oewvqgcgrnyvvtbgbesedqji", "oewvqgcgrnyvvtbgbetujxfreheeygaocjofmuhpjpzr", "oewvqgcgrnyvvtbgbeuqngxtxibumgvdvxuq", "oewvqgcgrnyvvtbgbevbbudhqht", "oewvqgcgrnyvvtbgbevfrmd", "oewvqgcgrnyvvtbgbevuetmantgfv", "oewvqgcgrnyvvtbgbewegfvwiwnskxhjgct", "oewvqgcgrnyvvtbgbewhp", "oewvqgcgrnyvvtbgbewogmn", "oewvqgcgrnyvvtbgbexeqonecwwjhvgwwewznhlczvxa", "oewvqgcgrnyvvtbgbexm", "oewvqgcgrnyvvtbgbexucvhlrgqzodzwtyfurnrazhzergknq", "oewvqgcgrnyvvtbgbeyehkjdznvtrfpwpucvkvzrfol", "oewvqgcgrnyvvtbgbezvshjtuhrfowlp"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dictionary = {"emhtqtcqpfbvjemmwcrlethmpvjddzqrazg", "emhtqtddfdnftiydkbjomibderbrqreutxfqfftnhryxfm", "emhtqtdmxfzfcpflnxuxybhbjccxpxpnicxbutwqaze", "emhtqtdzupsnqhnwoqdloozeshgxaiigejmlnkaezqpdluiir", "emhtqtiq", "emhtqtiqau", "emhtqtk", "emhtqtkclmd", "emhtqtmavkomxnpgdiyswhojbwh", "emhtqtnlhmtmktxfiriwujrdjcikhxphp", "emhtqtnzi", "emhtqtooedknjdbedfkuygdj", "emhtqtujsnhbfvvneyytivdirg", "emhtqtuxglutwrfaikywhlgulkoeodaczotaamjt", "emhtqtzmws", "emhtqtzrjirgjibbvfvavwfjuvxkczztcrazjxqtaxe"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"tdaeqwalrqz", "tdbcdltorhtplvhibfvrvebkpyaktkhdadwejvmqskgn", "tdbhcbhulw", "tdbhvzdwsyauin", "tdccrgiujwhbvhcdqtco", "tdci", "tdcqaeegmqixbg", "tdcrvkbdakssyqkcqkmd", "tdcsgodblweavq", "tdczcstfzozy", "tddngcq", "tddyuxcetydbuvlg", "tdelfijuxxjfrydjia", "tdespbjkcjmrtkpwgujt", "tdewkxzwkkacqljagcrshiolcgyseoefchjqzdyhjvihkegwv", "tdgittnbfszycnekfsymiwexgfdhlp", "tdgledvncxfqiuxxlvzdkiuiv", "tdhbditxwnssayysbckzs", "tdhvpfmovzymtyhlgzrqrlyjdlozedijakyednzxkbmz", "tdivculkbnlftasipjslytrtaqhnrgczkidcqyntlbq", "tdjfcaqwqgtnetsxkjpsgo", "tdlwrsjfhmgolbaocfvvshphdbqcmstzehouojc", "tdmluogfgmplzvpbkbtcyyk", "tdmmuzpahcue", "tdmzzbvblhusobndmmerynrpl", "tdnfsykoyklzjwfhdnrgwzinqndzjcwzeklxcdnzgtp", "tdnum", "tdnymipkcdqd", "tdo", "tdohrwjefyabmsfbjuvomjloyrrcjwfsfuwqxgbahqrcmzzf", "tdophwe", "tdoxcxprrvgazifiwuhhqbdfikplyprqrjfighbznysr", "tdprlgntbjuyumswcgzkefnkjgtlgmnhyxxhudevepqn", "tdpwykvjytid", "tdqkypmfoouvsdpohwvghjvbgwfyrahhzcixsskfzuuz", "tdqxtbcdrgquztczwmdda", "tdsodgxkgeuickcporkpvaeyyrpulczrntwi", "tdstpjumixioqvndjpzsl", "tdtipddciyipr", "tdtyuswnqnqstubfc", "tdvrljullulqjyi", "tdvzdktdwamxibbldzphmcdgglfknpyqkmbiqejthin", "tdvzgnqzbdicpqidlktjwvqihbfvvbsc", "tdwcwqkczm", "tdwutnudmzkezxxqcdagoqxzpxroqfmeycdurfbqitqaignl", "tdwvamgaohdheko", "tdxqaksxowvtivlndqxnzwgpzvlwp", "tdxqcjncxzsdwqkqsqupkaeppikyzdhxxhsxrlmpliooitgbt"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"aekavdwxifqcrskfsbutlxuxzqgage", "aekavdwxifqcrskfsbutlxuxzqgagmznnxdm", "aekavdwxifqcrskfsbutlxuxzqgagpjdggswiefsxmujjcn"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhodqf", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhohu", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhom", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhoo", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhoooju", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhorffcj", "voqpollhqetxboboqcgbxucyfcgujjohcjmwntrzqvrhotse"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dictionary = {"ntsouloyazpcpmugucxhhsxqejzclqhiybtcii", "ntsouloyazpcpmugucxhhsxqejzclqhiycamvgnxogyz", "ntsouloyazpcpmugucxhhsxqejzclqhiycrrysp", "ntsouloyazpcpmugucxhhsxqejzclqhiyejnej", "ntsouloyazpcpmugucxhhsxqejzclqhiyelvzqieb", "ntsouloyazpcpmugucxhhsxqejzclqhiyfcr", "ntsouloyazpcpmugucxhhsxqejzclqhiyfqjhsckwlbm", "ntsouloyazpcpmugucxhhsxqejzclqhiyfutt", "ntsouloyazpcpmugucxhhsxqejzclqhiyinabxflhmjf", "ntsouloyazpcpmugucxhhsxqejzclqhiykiawyxa", "ntsouloyazpcpmugucxhhsxqejzclqhiykzjjayf", "ntsouloyazpcpmugucxhhsxqejzclqhiylyfvtlakpr", "ntsouloyazpcpmugucxhhsxqejzclqhiymlrtte", "ntsouloyazpcpmugucxhhsxqejzclqhiynlo", "ntsouloyazpcpmugucxhhsxqejzclqhiysndleurm", "ntsouloyazpcpmugucxhhsxqejzclqhiyxkwumuarbf", "ntsouloyazpcpmugucxhhsxqejzclqhiyxwpxxcfpyrgyuyzjm"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dictionary = {"yahyamvgjjzzueabapsdafacmauucenbozpawrebhpdlv", "yahyamvgjjzzueabapsdasjqrvnnlznyymjocifau", "yahyamvgjjzzueabapsdauxqljdnthtj", "yahyamvgjjzzueabapsdbddjziwi", "yahyamvgjjzzueabapsdbghnlziedamxmiqaaukwcjdzss", "yahyamvgjjzzueabapsdbjykclcnotr", "yahyamvgjjzzueabapsdbmkyeinhoqqqz", "yahyamvgjjzzueabapsdcbwztommnnjuerkinjdolkw", "yahyamvgjjzzueabapsdccucfhaiigdqsdsuhlnwtoh", "yahyamvgjjzzueabapsdczihlppsytdv", "yahyamvgjjzzueabapsdetusvfsemthouazplndhydm", "yahyamvgjjzzueabapsdeueoiqeuzmpvmkk", "yahyamvgjjzzueabapsdhqzgqxtyxlqqj", "yahyamvgjjzzueabapsdhwtnjzhlpsorrsjd", "yahyamvgjjzzueabapsdimltlyklwvlyfnjhdoxmh", "yahyamvgjjzzueabapsdjalfkmw", "yahyamvgjjzzueabapsdjhzrlklzq", "yahyamvgjjzzueabapsdjnlvj", "yahyamvgjjzzueabapsdjuomfhsvntni", "yahyamvgjjzzueabapsdjxqruqpsljtibnn", "yahyamvgjjzzueabapsdkkw", "yahyamvgjjzzueabapsdlbrqnhsxfrfhtfvi", "yahyamvgjjzzueabapsdlgyykfffq", "yahyamvgjjzzueabapsdlnudtotykbbxnadnmmmxcbguslpvh", "yahyamvgjjzzueabapsdluvwdgqpwpkaooucpjdrwmuddx", "yahyamvgjjzzueabapsdnglfcqbqyvxquvysrayvofgqmpd", "yahyamvgjjzzueabapsdobcpffdfytgxsszm", "yahyamvgjjzzueabapsdobnyyz", "yahyamvgjjzzueabapsdrcgllptihphqqywrnetixpmglltjc", "yahyamvgjjzzueabapsdrfylkybwrqaeq", "yahyamvgjjzzueabapsdrpnapueefjovexvdlg", "yahyamvgjjzzueabapsdsg", "yahyamvgjjzzueabapsdspubbetqvpdzndxrcvseteoktqook", "yahyamvgjjzzueabapsdstjtwgzoskejxiqzrfsrtzlefh", "yahyamvgjjzzueabapsdtbsesippebzdyavjnvthugulfzk", "yahyamvgjjzzueabapsdtxkwn", "yahyamvgjjzzueabapsdvkrgyxdlfulgufvkhagiqjloed", "yahyamvgjjzzueabapsdwtzwighwudeslhzyhvfmmexll", "yahyamvgjjzzueabapsdynpipmcmdvvnbobdclj", "yahyamvgjjzzueabapsdzxoi"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dictionary = {"a", "mm", "yyy"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dictionary = {"a", "mm", "yyy"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"b", "d", "t"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dictionary = {"a", "ma", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dictionary = {"aa", "cc", "ee", "gg", "iii", "kk", "mm", "oo", "qq", "ss", "uu", "ww", "yy"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dictionary = {"a", "c", "e", "f", "g", "h", "i", "j", "k", "l", "m", "o", "p", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
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
    vector<string> dictionary = {"a", "c", "e"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "zz"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> dictionary = {"ia", "ra"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> dictionary = {"bfesynmly", "cdjoqiigdhye", "chwjdegvvgi", "dbsyyfdnt", "dipywmdptcfm", "dysacdnw", "ejj", "elubhatrtdh", "fhv", "fpodlzg", "gkrenykqv", "gpxpstkx", "hguv", "ibvyzde", "icqbd", "iyokywyevnp", "iyynm", "jaolhulzlp", "jdgphnlpbgl", "jgcdxhzmkcs", "krtk", "krynchnramrr", "kwulptsilziv", "mogferaiczvm", "nbhbs", "oaqaateaoo", "oerftdejxdhw", "othsuvlojzp", "pio", "rwvkord", "tkmv", "tpkhkttud", "tsckoieopqpn", "ufdscxrszqrq", "uhw", "uliuuogyck", "upsqqbdxuvhj", "uuany", "vdvv", "vqdn", "wejnuzs", "wsnv", "wvc", "xcjyzrzyv", "xlyrzszyyu", "ysvyu", "zisondyzicwm", "zpbup", "zrn", "zzbxuucyvfx"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> dictionary = {"bb", "d", "f", "h", "j", "l", "n", "p", "r", "t", "v", "x", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> dictionary = {"mzzzzz", "naaaaaa"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> dictionary = {"mzzzzzz", "naaaaa"};
    int k = 6;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> dictionary = {"aa", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> dictionary = {"aa", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> dictionary = {"a", "b", "c"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "yy"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> dictionary = {"az", "gx", "xz"};
    int k = 7;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> dictionary = {"aa", "mn", "zb"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> dictionary = {"aa", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> dictionary = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllllllllllllllllllllllllllllllllll", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> dictionary = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllllllllllllllllllllllllllllllllll", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> dictionary = {"time", "zoology"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> dictionary = {"egf", "fbraymk", "lnzrfjxcckd", "nertijdaoidcafeepfhjjggxkdbzcxpddsmtp", "pyhqpnhwrcovnqwgkvhydtyfbtjakowkqrjgvjfvqnbab", "q", "qwqlpgtsiviwcoowiap"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> dictionary = {"a", "ma", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> dictionary = {"a", "ccc", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> dictionary = {"b", "d", "m"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> dictionary = {"aaaab", "maaab", "yaaac"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "gg", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> dictionary = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg", "hhhhhhhhhh", "iiiiiiiiii", "jjjjjjjjjj", "kkkkkkkkkk", "llllllllll", "mmmmmmmmmm", "nnnnnnnnnn", "oooooooooo", "pppppppppp", "qqqqqqqqqq", "rrrrrrrrrr", "ssssssssss", "tttttttttt", "uuuuuuuuuu", "vvvvvvvvvv", "wwwwwwwwww", "xxxxxxxxxx", "yyyyyyyyym", "zzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> dictionary = {"b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> dictionary = {"b"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> dictionary = {"a"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> dictionary = {"a", "r"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> dictionary = {"n"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> dictionary = {"j", "s"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "xxxx", "yyyy", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> dictionary = {"a", "b", "c", "t", "tt", "zdf"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> dictionary = {"acd", "aeg", "agi", "aik", "akl", "amo", "aoq", "asd", "axy"};
    int k = 3;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> dictionary = {"a", "c", "e", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> dictionary = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "y"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> dictionary = {"e", "p"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> dictionary = {"a", "c", "e", "g", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> dictionary = {"c", "e", "g", "i", "k", "m", "o", "q", "s", "u", "w", "y"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> dictionary = {"aaaaaaaaaa", "zzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> dictionary = {"aaaaaaaaaa", "eeeeeeeeee", "ffffffffff", "iiiiiiiiii", "qqqqqqqqqq", "yyyyyyeyyy", "zzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> dictionary = {"a", "n", "za"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> dictionary = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "dddddddddddddddddddddddddddddddddddddddddddddddddd"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> dictionary = {"b", "d", "f", "h"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> dictionary = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> dictionary = {"a", "aa", "aaa", "aaaa", "b", "bb", "bbb", "bbbb", "c", "cc", "ccc", "cccc", "d", "dd", "ddd", "dddd", "e", "ee", "eee", "eeee", "f", "ff", "fff", "ffff", "g", "gg", "ggg", "gggg", "h", "hh", "hhh", "hhhh", "i", "ii", "iii", "iiii", "j", "jj", "jjj", "jjjj", "k", "kk", "kkk", "kkkk", "l", "ll", "lll", "llll", "zzzzzzzzzzz", "zzzzzzzzzzzzzzz"};
    int k = 10;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> dictionary = {"a", "f", "k", "p", "uz", "z"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> dictionary = {"bz", "ea"};
    int k = 2;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> dictionary = {"n"};
    int k = 9;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> dictionary = {"ma"};
    int k = 1;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> dictionary = {"aef", "blablauusda", "bzzza", "drauft", "klownderiiiratri", "ydfdsh", "zzzzzzzz"};
    int k = 8;
    LikelyWord* pObj = new LikelyWord();
    clock_t start = clock();
    int result = pObj->likely(dictionary, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=10660&pm=7351
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
  
using namespace std; 
 
class LikelyWord 
{ 
public: 
int likely(vector <string> dictionary, int k) 
{ 
  int i,j,n; 
  long long x,left,right,max,ans; 
  string s; 
  vector<long long> ind; 
  ind.clear(); 
  ind.push_back(-1); 
  n=dictionary.size(); 
  for (i=0;i<n;i++) 
  { 
    s=dictionary[i]; 
    x=0; 
    for (j=0;(j<s.length())&&(j<k);j++) 
    { 
      x*=26; 
      x+=s[j]-'a'; 
    } 
    while (j<k) 
    { 
      x*=26; 
      j++; 
    } 
    ind.push_back(x); 
  } 
  x=0; 
  for (i=0;i<k;i++) 
  { 
    x*=26; 
    x+=('z'-'a'); 
  } 
  x++; 
  ind.push_back(x); 
  max=-1; 
  ans=-1; 
  for (i=0;i<=n;i++) 
  { 
    left=ind[i]; 
    if ((i!=0)&&(dictionary[i-1].length()<k)) left--; 
    right=ind[i+1]; 
    if ((i!=n)&&(dictionary[i].length()>k)) right++; 
    if ((right-left-1)>max) 
    { 
      max=(right-left-1); 
      ans=i; 
    } 
    else if ((right-left-1)==max) 
    { 
      ans=-1; 
    } 
  } 
  return ans; 
} 
};

********************************************************************************
*******************************************************************************/