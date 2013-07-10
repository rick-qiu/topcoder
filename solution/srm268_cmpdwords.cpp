/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3490
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

class CmpdWords {
public:
    int ambiguous(vector<string> dictionary);
};

int CmpdWords::ambiguous(vector<string> dictionary) {
    int ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"am", "eat", "a", "meat", "hook", "meathook"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dictionary = {"a", "b", "c"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dictionary = {"a", "aa", "aaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dictionary = {"abc", "bca", "bab", "a"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dictionary = {"ab", "ba", "aa", "aba", "a", "b"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
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
    vector<string> dictionary = {"interinter"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dictionary = {"a", "b", "ab", "ba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"aaaa", "bb", "aaaab", "b"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"b", "aaaab", "bb", "aaaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"abc", "def", "g", "abcdefg", "defd", "ef"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"gjgj", "gjfh", "jhgf", "fjfj", "fffg", "gfh", "ggf", "ffjhg", "fjkf", "fjjh"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dictionary = {"gjgj", "gjfh", "fj", "jhgf", "fjfj", "fffg", "gfh", "ggf", "ffjhg", "fjkf", "fjjh"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaa", "aaaaabaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaa", "aaaaaaabaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaa", "aaaaaaaaabaaaaaaaaa", "aaaaaaaaaabaaaaaaaa", "aaaaaaaaaaabaaaaaaa", "aaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaba", "aaaaaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaabaaa", "aaaaaaaaaaaaaabaaaa", "aaaaaaaaaaaaabaaaaa", "aaaaaaaaaaaabaaaaaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"jfc", "ied", "cfh", "jka", "gbi", "gdb", "eef", "gff", "cfg", "cdd", "bfa", "kjk", "kai", "iia", "cdf", "fdd", "aaj", "jgd", "cdh", "ccg", "afd", "bad", "kgi", "dja", "cce", "fgi", "kci", "hch", "ega", "gha", "dkg", "hck", "baf", "cbk", "hee", "ehj", "jbi", "dii", "gce", "gke", "fii", "eaa", "hje", "fck", "ajj", "dbb", "fde", "iej", "add", "djf"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
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
    vector<string> dictionary = {"fkk", "hei", "hck", "edi", "hek", "iej", "edk", "fkh", "kab", "ikb", "fii", "jdd", "hag", "hdg", "bib", "hec", "ehi", "ihk", "ahg", "fjc", "cfb", "bii", "fcb", "feb", "jbe", "ieh", "hgf", "jhk", "hia", "fhh", "gfj", "chj", "ckh", "hej", "idj", "iie", "dbd", "dgd", "dfi", "hbg", "ebh", "iae", "edf", "idk", "dbb", "bca", "gca", "ddi", "gjk", "fge"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dictionary = {"jfh", "fjb", "hig", "dkk", "egk", "bgk", "gja", "bhe", "ked", "ica", "dhe", "adf", "ihi", "caj", "faf", "dbf", "kec", "jae", "kak", "egi", "bgf", "jjf", "eij", "hja", "jjd", "ecf", "efh", "chi", "bfg", "jfb", "ekd", "bfj", "ikk", "gfe", "aei", "fbk", "cfj", "kcj", "hcd", "eac", "cik", "gdj", "gda", "hhh", "cce", "ddg", "jgi", "ecc", "cij", "kcc"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"f", "e", "hgfi", "c", "akc", "j", "d", "jhee", "a", "hedb", "jjb", "ggga", "hgf", "fbg", "cae", "aeei", "g", "cfh", "fk", "kicd", "fg", "bfe", "jcdc", "jgif", "bghj", "gi", "b", "gf", "egcb", "adi", "adbb", "eah", "iii", "age", "idi", "hgk", "ecg", "ebea", "ji", "igjg", "hki", "kfai", "bca", "fkkg", "gdak", "gfgi", "i", "dg", "jfkj", "dbee"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"ee", "fk", "dkd", "hg", "f", "d", "hd", "dj", "g", "k", "cjd", "gc", "kijk", "aj", "i", "edj", "bhhb", "j", "df", "e", "gjda", "bh", "beee", "fbig", "jh", "ejbb", "jehi", "gab", "idfk", "gfe", "ddh", "ghhb", "edfa", "icck", "chaa", "hk", "b", "h", "acgh", "fe", "kf", "ega", "fc", "di", "jeji", "idj", "caja", "jj", "cdh", "bje"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"jaaa", "i", "jik", "kdk", "bfd", "aj", "e", "j", "hdae", "gk", "ffc", "jgb", "hh", "ihb", "a", "caa", "dkk", "aai", "jhdj", "ch", "ief", "kg", "fc", "hhch", "ig", "je", "fbfb", "jiia", "ak", "kkad", "ggge", "cke", "kbg", "d", "eej", "akf", "c", "ijj", "ga", "jie", "ka", "edkj", "ebd", "iih", "ad", "gb", "badc", "b", "kke", "eg"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dictionary = {"bhja", "gb", "aebc", "dfkd", "jgic", "hfif", "a", "hhj", "ch", "bac", "gi", "ck", "ikk", "bj", "caib", "fi", "gfg", "fad", "fehi", "cjae", "acci", "bdia", "ea", "cd", "bd", "e", "fef", "kbki", "ajcd", "d", "bk", "jj", "ii", "ekb", "jabk", "kd", "j", "gh", "jde", "gg", "ca", "dacf", "jcje", "cgj", "bkih", "gfdf", "jakj", "hbe", "ddkg", "kghh"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dictionary = {"hdge", "g", "icfh", "ba", "b", "ff", "ihi", "dde", "aigf", "i", "ia", "d", "kjbc", "abjj", "eihc", "djc", "f", "fbj", "bc", "ajkb", "ejhc", "fh", "igk", "bkc", "hhi", "jdc", "bba", "dh", "dafc", "kaa", "be", "fhj", "ca", "hj", "kjg", "ag", "bhbg", "ke", "gk", "gfdb", "kej", "fji", "hke", "ik", "fkkg", "ef", "cj", "hi", "cg", "iaia"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"icc", "kkg", "hk", "gi", "h", "iga", "haif", "fdbk", "d", "khcd", "b", "kcef", "hd", "ac", "eg", "c", "ii", "jd", "ffhh", "dai", "jcc", "ijka", "bgb", "dac", "f", "ea", "e", "ed", "cda", "aebf", "a", "dhjg", "idhf", "ckb", "dj", "fc", "fa", "ej", "ij", "iha", "ejb", "kf", "eh", "bga", "j", "dka", "bj", "gj", "iihi", "ibh"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dictionary = {"kg", "b", "cd", "j", "db", "ih", "bcch", "je", "cged", "adde", "ifh", "jkjj", "a", "f", "c", "ejjj", "cgef", "efdk", "ahd", "bf", "fcc", "bc", "cg", "k", "jegi", "bik", "dkcc", "fbbg", "kfh", "g", "dg", "cjek", "dk", "kjh", "gb", "kd", "gekc", "bd", "ghc", "bkda", "d", "kehe", "gjka", "ce", "ba", "gg", "efgc", "eked", "gk", "h"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"ef", "ddh", "f", "ecci", "kbf", "jiac", "agj", "d", "hdk", "ab", "ghe", "b", "jgg", "khea", "jk", "j", "hehk", "i", "a", "h", "g", "k", "ebg", "igki", "ghkb", "bf", "ghd", "jiee", "kk", "ke", "gca", "hcj", "aic", "bh", "kka", "cd", "efg", "aj", "hfc", "c", "gfff", "jch", "ak", "bd", "dbd", "akh", "icje", "kbeg", "gg", "fc"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"he", "ah", "ad", "cibd", "fae", "bc", "j", "f", "hah", "eegd", "jk", "h", "kci", "begd", "cj", "i", "gjc", "gaij", "eb", "cck", "ahc", "g", "hfgi", "b", "e", "eh", "di", "jb", "fe", "ehch", "ia", "cd", "fkj", "cjab", "ffkf", "ai", "baba", "a", "hkj", "bbf", "df", "edc", "ehfk", "fa", "kab", "ic", "fgac", "fjf", "db", "kf"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"kgfb", "gkkd", "ihjh", "kb", "ha", "akhj", "bg", "h", "afka", "egf", "i", "khd", "jccd", "keg", "cc", "be", "a", "kja", "ifde", "cajg", "bigj", "gdkg", "hfi", "gjib", "ikcb", "k", "b", "gi", "kfa", "iji", "d", "c", "kfg", "jd", "jhid", "jbki", "bfe", "hg", "bgj", "bib", "dbc", "jfg", "ak", "jdc", "jjj", "kg", "kfjk", "ie", "hik", "gbjc"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"f", "eaij", "bcb", "g", "k", "gic", "cca", "eb", "jfhk", "a", "fed", "ghf", "ebf", "h", "b", "fdf", "fd", "jj", "dbg", "cka", "idh", "e", "edk", "die", "c", "ja", "jek", "iae", "i", "ci", "kgei", "jb", "jehc", "fgh", "hkge", "jg", "iaa", "ciei", "akgg", "hcj", "bcdd", "jce", "ib", "bbac", "ff", "aij", "jc", "igb", "ijc", "jage"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"bab", "g", "kghf", "fca", "ii", "ac", "gfi", "hdk", "cdd", "fagj", "ia", "aifb", "ek", "kbc", "d", "hbbc", "hd", "akij", "debh", "a", "gbej", "cec", "ghab", "die", "gcad", "hbjf", "bf", "cjkd", "gkka", "fhgb", "cajj", "ihkh", "fida", "eghj", "fdie", "dj", "deh", "ajbi", "ei", "ai", "kb", "fk", "eebc", "aia", "b", "fie", "hk", "k", "jd", "jee"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"e", "fec", "jcke", "b", "h", "ai", "kh", "beh", "cbik", "eai", "ah", "a", "kc", "fifj", "g", "i", "hfa", "hg", "d", "ji", "jdjh", "ekjd", "kba", "ek", "hk", "jda", "hdk", "fgd", "ikhd", "eie", "did", "jkhj", "ak", "efh", "gf", "f", "cgfd", "kbej", "jh", "gdgd", "kcd", "icei", "ac", "cg", "ei", "gdg", "cekh", "kdj", "bgac", "hdf"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"dg", "h", "i", "had", "ai", "g", "d", "fjb", "eab", "hjee", "ggeg", "gj", "eg", "jff", "idhf", "bgkc", "jga", "bcd", "eecg", "aib", "hgkg", "bbed", "bgj", "jje", "k", "ga", "cefj", "jji", "acba", "eka", "efbf", "j", "gh", "cce", "ak", "fkk", "dk", "a", "cdii", "cje", "fjde", "icha", "kig", "ig", "gbi", "f", "khc", "e", "eh", "chg"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"gk", "bc", "gccf", "b", "g", "f", "i", "fhc", "j", "ba", "ehgg", "dc", "c", "faek", "a", "h", "dbi", "ih", "ggi", "ck", "fb", "eceb", "k", "eak", "fei", "fggg", "da", "gfje", "bdfe", "aikh", "ka", "kddg", "e", "ki", "jgbg", "fg", "jici", "dh", "kf", "bjif", "db", "af", "kk", "ckad", "d", "dga", "ee", "hkg", "efbk", "fjha"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dictionary = {"ebjg", "dfbj", "ak", "fb", "hkbf", "eihi", "cd", "ggic", "ad", "iij", "ih", "i", "fe", "e", "aa", "c", "fhdb", "d", "ca", "ghc", "dj", "kab", "ghi", "f", "hhdi", "hkg", "kba", "b", "cdib", "faha", "aei", "g", "che", "ckc", "jd", "cj", "dbfk", "fei", "bfe", "h", "eabe", "dcha", "kfhc", "fgig", "jac", "dcc", "j", "bi", "ieed", "ikk"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"bcccabbaabaa", "c", "bbababcbabbcbaa", "cba", "bcbaac", "acaccaacaaaaaba", "bbabacbaabbc", "caabbbacabccb", "cabcabc", "babbbccacaba", "abcaabaccb", "cbccbbbbbaccca", "caabcbaccbccbbbabb", "babacababba", "cabccc", "cababaabbbccacabca", "aabacbaba", "aca", "bacccacccab", "abacc", "cbbcbbaacaabbacacc", "cabccabcbcbbbcbca", "abcbbcabccaabaaaabca", "bbbacbbbaabcbbbc", "abcaaacaca", "ccacc", "aabacaabbbccacab", "accbcaaa", "bcbabcbbb", "bacbacb", "cccbcaaaabbaabacaca", "cca", "acabccc", "caaaccaccb", "acbcbbccaa", "cccba", "acbcbaacc", "ccbabbbacbabcaac", "cac", "bcaacbcabbcabbcba", "aacccacacbb", "abcaaccccccc", "bcccbbcbcbaaa", "bcaaab", "bbbaaabacbbab", "abbbb", "cccabccabacac", "aabbaabb", "bcbc", "acabb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"a", "bccaaabbababcaacc", "caabcacaacacbbbc", "bcaabbbabbbb", "aa", "cabbabcacba", "bcbbbccbbacccbaa", "bacccbac", "abaccaabababaaaaa", "bcacaab", "cacccacabaccaabb", "aaccaacbaabcacccbbc", "bbacaacba", "babbacccbbc", "cc", "cbcbcbccbac", "cccb", "cacbcbaaaaacbc", "baaaccbaabab", "acbcbaabacbbbbccabab", "ccbcccc", "cca", "bcc", "cacabbccbbbbccab", "cacbca", "acccaaabbbc", "bac", "caab", "ba", "bacbaaacbbacbcbb", "cccaacbbccabab", "ccbaacbccbabababa", "ccbbbaaabbac", "accaccbbcabaca", "aabcbabccbccacaa", "aabaacacaa", "ac", "ccbacacbcb", "b", "cbbbb", "aaabac", "bcbac", "baaacabcbbaabb", "bbbacaccbaccaab", "caacbba", "bbbbccabc", "abbbbbababb", "accccac", "caaaccbcaccacbba", "bbcbcbccbcaaaccb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"bab", "bbaa", "abbcabbbba", "cbcbbcaabcbbb", "bccaca", "ccacbacccbbc", "ba", "acbaabccaacabaca", "cbabbaabcacabcbac", "bbbccacacbc", "ccacbaccbcabaaca", "aaacbbabaab", "cababacccb", "bcbacabcb", "caacc", "cacababcbccabaca", "bbbaa", "cbcb", "bbccabaccc", "abbaaccccabcc", "caa", "caabbaabcbabaa", "aa", "abbaaa", "aaabcccaacbaaaacccb", "acccabbcababbbb", "bbbabbcbbcbbb", "bbcb", "bbbcacbbbcbb", "acabcbcb", "bacacbabbbcbbababb", "aabbaccbbccbccbb", "ababacacacbbb", "ab", "bcaabacacbacbaa", "cbaabaccaab", "bcbcccbc", "ccbbab", "babbcaababcaacbb", "abacbcacbcbaaccccaba", "cabcbaabbcbbbbababbc", "a", "bbabacb", "baabbabaccaacbc", "abbccaccaa", "aaccabacbbbbcbbbabb", "bcababab", "bccaa", "bbabbbccccaccb", "ccaacaaacabbcacabaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"babbbababbabba", "abaaaabbab", "aaaabbaabab", "aaab", "bbaaaabaabba", "abaababba", "bbabbab", "aabbbabbaaabba", "abbabababaaba", "bba", "abab", "bbbbbbb", "baabb", "aabbab", "bbabbbbaaabb", "aaabababa", "aaabbbaaabba", "aababaabbb", "aababbabaaabaa", "abbababaaa", "aabaaabbbbaabbbb", "baaabaabbabaaba", "a", "babbbaab", "abbaba", "baababaabaababba", "abaabbbabbbaaabbbaaa", "aabaaabbabbaaabaaaaa", "bbabaabbbb", "baaaaabbbabb", "aaabaaaababbbaabb", "abb", "aabbb", "aab", "bbaba", "abaa", "bbbaabbbbabb", "bbaaabaabbababaa", "abbbbaabbabbbabaaa", "baaaabaaaaab", "bbbbbbbbaaaababaa", "abbaabaab", "baaaba", "aababaa", "babababbaaabaaa", "b", "bbbabbbababaa", "abaababaabaaabbbbb", "bbaabb", "abbaaaaaaba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"aaabab", "aaabbb", "abaabbbabaa", "b", "abbabbaaaabbbbbaa", "ababaabbbaabbbbbab", "aaaaabbaababbbaabb", "bbababbaaa", "baab", "bbab", "aababbbabaaaaaab", "abaab", "abbbabbaababbbb", "aaabbbbabbbbaabba", "ab", "aabbabbaabab", "bbaba", "babaabaabaabbaaa", "aa", "aba", "babaaabaaa", "abbaabbbabbaabaaabb", "bbbaabbaaababa", "bbba", "abbbabaab", "aabbbb", "babbb", "aaababaabbbbaaabb", "bbbbabbabaababbbaa", "a", "bb", "aabaab", "bbabaabaabababbb", "aababbbabbbbaaaabb", "baaaaaabab", "aababbabab", "bbabaaabbbaabab", "bbbbabbaaabababbba", "ababaaaa", "aaababab", "bababbaaaaaaaab", "baaaabaaaabaaaba", "aaabbababaa", "aaaabaaaaabbaaba", "aababbaabaaabab", "aaaabaaaaaaaa", "bbabbbabbbbba", "abaabbbba", "bbabbbabbabaaa", "bbbaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"ababaaabbbaabbaaab", "abaabbbbbabbabaaaab", "bbabbbaaaaaabaaaaa", "aabbbaaab", "ababab", "a", "abbaabaa", "baabaaaabbaaaaabbaba", "aaaaaaaaab", "aabba", "abbabbaaaba", "bbbbbbaabbaabba", "babaa", "bb", "baaabaabbbabb", "baabbbbbaaaaaaaab", "bbbbb", "baaabaaba", "abbabb", "babbaabbaaabaa", "bababaaabababaaaaaaa", "baaab", "bbbbbb", "aabbabbbbabb", "aaaaababaaaaaabbba", "bbaaaaabbbaabaaaa", "bbaaaabbabba", "bbbaabbabaababa", "ababaababbaa", "aaa", "aaaabbbbbabbabaaaa", "bbabbbbaabbabbbbbab", "bbaba", "babbbabbbabaaabb", "aabbabaaaaaabaababaa", "bbbbabbb", "baababbabb", "abbaaaabbb", "abb", "aaaaaaabaaba", "bbabbbbaaaa", "abbab", "baabbabaabbab", "ababbbbaaabababbb", "aabbbbabaaaa", "bbaaaa", "abbbaaaaaaabaabaa", "baabab", "babbbbabaaabaa", "bababbbabaabbbabba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"babcaa", "accbba", "ac", "aacccbbc", "cabcbcacaa", "bccbacbcab", "ccccabcc", "bbaabcaaac", "bbcc", "ccac", "ccaba", "cbaab", "aaacabbbac", "abaabcabbb", "bbcbcbab", "aacba", "bbabca", "bbbabbbbcc", "cbcabcac", "bccba", "bbaaaababa", "acaaacbcb", "bbabbac", "ccaaccaaaa", "a", "aacccccb", "baa", "acaacaa", "accc", "cbcaaaab", "cbcb", "bab", "bbbbc", "bcc", "aacbbacc", "aaaa", "aaacccca", "abaaabbccb", "bbcbbcbc", "ccacbcbb", "bacc", "cab", "cbaabcaab", "bbaaab", "c", "bacbc", "caaca", "bcbab", "bccccbcac", "abcacbca"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"bbbabca", "caccaab", "abababbcbb", "aaa", "bccbaac", "bccaabbba", "abaacaccac", "bbac", "aabcabca", "bbcbaa", "a", "ba", "abcaca", "bbcc", "caaaacc", "aab", "abccc", "aacc", "babbb", "abbbbcb", "bba", "bbbbbbbcca", "cc", "bcb", "ccb", "baabccab", "aacbabbb", "cbaaababc", "cbbaabaaac", "bbcbababac", "acaaccb", "aabbbccccc", "baaababbca", "abaabcbb", "aacccbb", "bccabccaac", "cccba", "cccaaaba", "bbba", "baabcc", "bbbc", "aacbcaaba", "cb", "bcbbc", "cbccbaab", "bccabc", "bb", "acabc", "ccbaacca", "acbb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"baccb", "caac", "bbba", "c", "bbbabbbacb", "b", "caaccbcc", "aaab", "aa", "cc", "caccabacc", "abbbcca", "cba", "bccbcaaba", "aabccaaaa", "bbabcbbcca", "accbba", "baaabac", "cacbccc", "bc", "cab", "cabbababca", "acccbcaac", "cbac", "bbacaacc", "cbaaaca", "abcbcb", "aabca", "cabba", "aabccca", "a", "bac", "baccacb", "cbbaacc", "ccbb", "acbaabca", "bacbcbacc", "cacbbbcb", "ccaccbca", "acccbbac", "bbbcabcac", "baabba", "aaacb", "accac", "abbcc", "cbaaacaaa", "cccbcc", "aab", "abbca", "bacbbb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
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
    vector<string> dictionary = {"am", "eat", "a", "meat", "amae", "at", "ameat"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"ab", "abab"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "ab", "aab", "aaab", "aaaab", "aaaaab", "aaaaaab", "b", "aba", "aaba", "aaaba", "aaaaba", "aaaaaba", "aaaaaaba", "ba", "abaa", "aabaa", "aaabaa", "aaaabaa", "aaaaabaa", "aaaaaabaa", "baa", "baaa", "baaaa", "baaaaa", "baaaaaa", "baaaaaaa", "cbaa", "bacaa", "baaca", "baacaa", "bacaaaa", "bcaaaaaa", "bcaaaaaaa", "c", "ca", "ac", "caa", "aac", "aaac", "aaaaac"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"ama", "maamaam", "amma", "maam", "ma", "am", "maa", "mimim", "maamm", "m", "aamm", "mamma", "ammaam", "amm", "aamio", "aamuy", "iemm", "a", "b", "d", "e", "c", "mim", "im"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dictionary = {"a", "aa", "aaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"a", "aa", "aaa", "aaaa"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"a", "b", "ab"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dictionary = {"am", "eat", "ameat"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"a", "bc", "bca", "abc"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dictionary = {"b", "c", "cc", "aa", "cb", "ba", "ac", "ca", "ab", "bb", "a", "bc", "aaa", "ccc", "z", "ad", "da", "zzz"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"lala", "lalala", "l", "lalal", "lal", "ala", "ll", "llaa", "al", "alal", "alala"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"a", "ab", "abc", "bcde", "cde", "de"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dictionary = {"a", "b", "ab", "ba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dictionary = {"ab", "aba", "a", "ba", "b", "bba", "bb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
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
    vector<string> dictionary = {"abc", "bca", "bab", "a", "aabb", "abb", "bac", "cab", "bba", "bcabab"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dictionary = {"a", "b", "ba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dictionary = {"a", "bc", "de", "ab", "c", "ad", "e"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> dictionary = {"a", "b", "c", "ab", "bc", "abc", "abca", "abcb", "aabc"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dictionary = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "b"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dictionary = {"a", "b", "ab", "ba", "abc", "abab", "baba"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dictionary = {"a", "b", "bb"};
    CmpdWords* pObj = new CmpdWords();
    clock_t start = clock();
    int result = pObj->ambiguous(dictionary);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=8001&pm=3490
********************************************************************************
#include <algorithm> 
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
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
#define VAR(a,b) __typeof(b) a=b 
#define FORIT(it,v) for(VAR(it,(v).begin());it!=(v).end();++(it)) 
// REAL CODE 
 
class CmpdWords { 
public: 
  int ambiguous(vector <string> d) { 
    map<string,int> words; 
    FORIT(i,d) words[*i]++; 
    FORIT(i,d) FORIT(j,d) if(i!=j) words[*i+*j]++; 
    int ret=0; FORIT(i,words) if(i->second>1) ++ret; return ret; 
  } 
   
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/