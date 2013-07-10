/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7418
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

class CountPalindromes {
public:
    int count(vector<string> words, int k);
};

int CountPalindromes::count(vector<string> words, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"tragic", "cigar"};
    int k = 24;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"z", "zz"};
    int k = 4;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"aba", "acaba", "baca", "cac", "b", "c", "a"};
    int k = 70;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 370786966;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"hello"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"ab", "ba"};
    int k = 5;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"abc", "cb"};
    int k = 13;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"a", "ab", "ba"};
    int k = 6;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"a", "aaaaaaaaab", "aaa", "aaaaaaaaaaaa", "aabbaaa", "babaaaaaaaa", "aaaaaabaaaba", "aaaa", "aaaaaaaaa", "aaaaaaaaaa", "aab", "aaaaaababaaaaa", "aaaaaaaaaaabba", "aaaaaabaa", "aaabaaaaaa", "abaaaaaaaa", "aaaaaa", "aabaaaaaaaaaba", "ab", "bbbaabaaaab", "aaaabaaaaa", "aa", "baaaaaaaaaaaa", "aabaa", "aabaaaaaaaabbaa", "aaaaaaaabaaaaaa", "aaaaaaaa", "aaaaa", "aaaaaaaaaaa", "aabaaaaa", "baabaaaaaaaaa", "baaaaa", "aaaaaaaabaaaaa", "aaaaaaaaaaaaaaa", "abaaaaaaaaaaa", "aaabababaaaa", "aaaaaaaaaabaaaa", "abaaa", "aaaaabaaaab", "aaaabaaaaaaa", "aaaaaaaba", "babbbaaaaaba", "aaaaaaaaaaaaa", "aaababaabaab", "aaabaabaaab", "aaaabbaaabaaaaa", "abaaaaaaaaaaaaa", "aaaaaaa", "abaaaaabaaaaaaa", "aaabaaaaaaaaa"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 570277357;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"ppppppzz", "ppqqppzzz", "wwppxxzz", "wxylozzzz", "wxyxozzz", "xxxxxyzz", "bbbbbbbbbbbbbb", "ffffffffffffff", "gggggggggggggg", "hhhhhhhhhhhhhh", "dddddddddddddd", "dddd", "eeee", "ffffff", "cccccc", "dddddd", "eeeeeee", "gggggggg", "cccccccccc", "eeeeeeeeeeeeee", "dd", "cc", "ee", "ff", "bbb", "g", "h", "i", "j", "k", "l", "m", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 25;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 835454956;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"aaaaaaaaaaz", "zaaaaaaaaaaa", "ppppppzz", "ppqqppzzz", "wwppxxzz", "wxylozzzz", "wxyxozzz", "xxxxxyzz", "bbbbbbbbbbbbbb", "ffffffffffffff", "gggggggggggggg", "hhhhhhhhhhhhhh", "dddddddddddddd", "dddd", "eeee", "ffffff", "cccccc", "dddddd", "eeeeeee", "gggggggg", "cccccccccc", "eeeeeeeeeeeeee", "dd", "cc", "ee", "ff", "bbb", "g", "h", "i", "j", "k", "l", "m", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 25;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
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
    vector<string> words = {"aaaaaaaaaaaz", "zaaaaaaaaaaa", "ppppppzz", "ppqqppzzz", "wwppxxzz", "wxylozzzz", "wxyxozzz", "xxxxxyzz", "bbbbbbbbbbbbbb", "ffffffffffffff", "gggggggggggggg", "hhhhhhhhhhhhhh", "dddddddddddddd", "dddd", "eeee", "ffffff", "cccccc", "dddddd", "eeeeeee", "gggggggg", "cccccccccc", "eeeeeeeeeeeeee", "dd", "cc", "ee", "ff", "bbb", "g", "h", "i", "j", "k", "l", "m", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int k = 25;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
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
    vector<string> words = {"eeenn", "ennnen", "nnenn", "nnnnnn", "nennen", "ennenn", "neeenn", "nenn", "eenn", "enenn", "en", "eeenen", "nneeen", "eennen", "eeeenn", "nennnn", "eenen", "neennn", "eeennn", "nneen", "nnnnen", "eennn", "eeneen", "neenn", "neen", "enennn", "nn", "ennnnn", "eeeen", "nnnenn", "nneenn", "neeeen", "eennnn", "een", "neeen", "eneenn", "ennnn", "enneen", "nen", "nnnen", "nnenen", "nnen", "e", "nenen", "enenen", "nenenn", "eneen", "eeen", "nnennn", "nennn"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 523716794;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"eeeeei", "iieii", "eeii", "eeiei", "eiiei", "iiii", "iii", "iiei", "i", "ieeiii", "e", "iieeii", "eeiiei", "ieiiii", "eii", "iiieii", "ieeei", "eei", "iiiiii", "eeiii", "eieeii", "eiii", "ii", "eiiii", "eeeii", "ieei", "eiieei", "ieeeei", "eiei", "eeieei", "iei", "ieii", "eeiiii", "eeieii", "eieeei", "iieiii", "eeeiei", "ieiei", "ei", "eeei", "iiiei", "ieeiei", "ieeeii", "eeeeii", "ieieii", "eieii", "iiiii", "iieiei", "ieiiei", "iieeei"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 570075099;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"ofoffo", "ooffo", "ffoffo", "ofoofo", "ofoo", "fffffo", "fofo", "oooooo", "ffoooo", "ooooo", "oofffo", "ffffo", "foffo", "fffofo", "fooo", "ofofoo", "ooofoo", "oofofo", "ffofoo", "ofofo", "ffffoo", "fffoo", "oo", "offo", "offffo", "foffoo", "oooo", "ooofo", "offofo", "f", "offfoo", "foofoo", "fffo", "fofffo", "o", "ffooo", "oooffo", "fofoo", "oofo", "ofooo", "fffooo", "fofofo", "oofooo", "fooofo", "offfo", "foooo", "fooooo", "ooo", "ffoofo", "oooofo"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 152062255;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"uururu", "ruuru", "ururuu", "uurrru", "rurru", "rruuuu", "ruuuru", "uruuru", "ruru", "rurrru", "ruurru", "uuru", "ruruu", "ururru", "urruru", "ruuu", "rrru", "uruuu", "uuuu", "rrurru", "urru", "uuruuu", "uru", "uuuuuu", "ruuuuu", "uruuuu", "rrruuu", "rruru", "uuuuru", "rurruu", "rru", "uuuru", "ururu", "rruuru", "u", "ru", "uruu", "rruruu", "ruuruu", "rrrru", "ruu", "uu", "uuuruu", "ruuuu", "uurru", "rrruu", "rruuu", "rruu", "uuuuu", "ruruuu"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 150509015;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"laaal", "alaal", "alall", "aalaal", "lalaal", "lallll", "lllaal", "lal", "laal", "llaal", "llall", "aaall", "lallal", "llalll", "aalll", "llllll", "alaaal", "aaaaal", "laalll", "laall", "llaaal", "alllll", "laalal", "aaal", "aaalll", "allaal", "llaall", "llalal", "laaall", "llal", "a", "all", "lalll", "lllll", "aaalal", "aalal", "aaaal", "llll", "lalall", "aallal", "aal", "alaall", "lllall", "aallll", "lllal", "allall", "alal", "alll", "allal", "ll"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 742802186;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"yyssy", "syssy", "ssy", "ssysyy", "sysyy", "ssysy", "ssyyy", "ssssy", "ssyyyy", "sysssy", "s", "yyyssy", "syssyy", "sssyy", "sysysy", "syyyy", "yysysy", "yysy", "yyyyy", "yyysyy", "sssysy", "yysyy", "ysssyy", "ssyysy", "ysyssy", "yysyyy", "yyyysy", "syy", "syysy", "ssyy", "yssy", "ysyyy", "yy", "yyssyy", "ysy", "syyysy", "y", "sssy", "ysyysy", "syysyy", "ssyssy", "sssyyy", "yyyyyy", "ysyy", "sysyyy", "yyyy", "ysyyyy", "syyssy", "sy", "yysssy"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 204912944;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"nnnww", "wnnw", "wwwww", "wnnnww", "wwww", "wnww", "wnw", "nw", "ww", "nnwnnw", "n", "wwnnw", "nwwwnw", "nwwnnw", "wwwwnw", "nnww", "wnnww", "wwwnw", "nwww", "nwnw", "nwwww", "nwnnnw", "nwnnw", "nwwnw", "www", "nnnnw", "wwnw", "w", "nnwnw", "nnnwnw", "wnnwnw", "nnwww", "nnnnww", "wnwwnw", "wwwnnw", "nnnw", "nwnwnw", "wwnwnw", "wwnnnw", "wnwww", "nww", "wnwnw", "nnnnnw", "wnnnw", "wnnnnw", "wnwnnw", "nwnww", "wwnww", "nnwwnw", "nnw"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 684318762;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"ddao", "d", "dooo", "odao", "oaoa", "ada", "ooa", "aodo", "o", "oooo", "aaoa", "ddda", "ooo", "aoda", "aaao", "oao", "dodo", "aa", "adao", "doaa", "aaaa", "adoo", "oado", "doao", "ddo", "odoo", "ooaa", "dada", "daaa", "oaa", "ddoo", "a", "dao", "aada", "adda", "aaa", "dooa", "odaa", "aado", "oada", "dda", "oa", "doo", "ao", "odo", "daa", "daoa", "oodo", "adaa", "aooo"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 387368200;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"eiie", "imme", "mmem", "iemm", "mmim", "mee", "mim", "eimm", "eeie", "eemm", "ieem", "emme", "eim", "eeee", "ieie", "eiee", "emie", "mmee", "memm", "eiem", "eie", "emim", "im", "iime", "em", "meim", "imee", "miem", "eem", "iiim", "mme", "eime", "e", "mmmm", "emem", "eee", "mmme", "imie", "emm", "miee", "ieme", "ee", "mmm", "meie", "eeim", "iiee", "imem", "iiem", "emee", "iim"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 577178403;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"iign", "iin", "ign", "igii", "n", "ninn", "nn", "niin", "ggii", "iiii", "gin", "iiin", "i", "iini", "gn", "gngn", "ginn", "ngi", "giin", "gggn", "igi", "nin", "gini", "ngn", "nggi", "nnin", "nii", "ngnn", "igin", "iggi", "g", "ii", "nnii", "ingn", "ngii", "gggi", "niii", "inn", "ggin", "nnn", "gii", "nggn", "ini", "ggn", "gnnn", "gi", "gign", "in", "gnii", "ngni"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127698979;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"vhve", "vehv", "vvee", "hv", "veee", "veev", "vvve", "hhv", "ee", "eeve", "vhee", "eeee", "hvvv", "eee", "heee", "hevv", "evhe", "v", "eeev", "hvhv", "hhe", "evve", "hvev", "hve", "evv", "vhe", "ehve", "heve", "heev", "evev", "ehe", "vvhv", "vve", "hhvv", "hhev", "veve", "hev", "vhhe", "vee", "hhhv", "hvv", "ve", "hhhe", "vev", "e", "evvv", "hee", "eehv", "vhv", "vv"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 58838132;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"mood", "ddm", "ddd", "dd", "ddom", "oddd", "dmmm", "dod", "mmd", "oood", "mmm", "doom", "oodm", "odd", "dmod", "mdd", "domm", "mdod", "mdmm", "momm", "dood", "dom", "dddd", "od", "ooom", "dmdd", "dmd", "odom", "dodm", "mdmd", "dmom", "om", "modd", "ommd", "md", "dmmd", "ddod", "d", "momd", "omm", "odm", "mmom", "modm", "mddd", "dmdm", "oomm", "mmod", "dm", "m", "omd"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 752933109;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"p", "dldd", "ddpd", "lpp", "dplp", "lldd", "dddp", "ppp", "llld", "dllp", "pplp", "llpp", "ddlp", "l", "dlp", "ldpp", "dppd", "ppdd", "dpdp", "pddd", "dldp", "lppd", "dppp", "dd", "pldd", "ddld", "dlpp", "pp", "pld", "dpp", "dpdd", "plld", "ldld", "plp", "lddp", "ddpp", "lp", "dpd", "ppdp", "ldd", "llp", "dpld", "lld", "pdpd", "lpd", "ppld", "pddp", "lplp", "ddd", "dp"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 582020803;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"aaaaaaaaaaaa", "z"};
    int k = 6;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
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
    vector<string> words = {"txfjncnncnjfxt", "dfpjdxrrxdjpfd", "ptqylgdidglyqtp", "mksoagwiwgaoskm", "nvrowdeedworvn", "bqonkmkskmknoqb", "quucsevovescuuq", "ydbhjkdxdkjhbdy", "uqfvcmebemcvfqu", "npzbtnffntbzpn", "viirftwywtfriiv", "vevywmetemwyvev", "vhfhvommovhfhv", "cnvwjrxxrjwvnc", "prscdixxidcsrp", "swaaulouoluaaws", "idvwbfhkhfbwvdi", "cymtfiuuiftmyc", "dkulwylolywlukd", "rabsjdjjdjsbar", "fzymjxkkxjmyzf", "xzrpgnppngprzx", "kadczxswsxzcdak", "fkvrsguugsrvkf", "kgobvhzzhvbogk", "ntdilspfpslidtn", "glizhirrihzilg", "qfaidsugusdiafq", "scyjxvqpqvxjycs", "ayvamtikitmavya", "halhxfccfxhlah", "nrrgojyyjogrrn", "hthxuannauxhth", "wokqndkkdnqkow", "rqzamuwwumazqr", "kextgzuuzgtxek", "hyfsfxxxxfsfyh", "samasicncisamas", "dbfcjkwwkjcfbd", "ihyrumdbdmuryhi", "xzqikkcckkiqzx", "chagthddhtgahc", "lcrxcnhlhncxrcl", "ebndizppzidnbe", "fhahitbbtihahf", "ukrsvfmrmfvsrku", "jihcfrenerfchij", "ccgamqffqmagcc", "jorypucacupyroj", "zuehtoyyotheuz"};
    int k = 12;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"uvadierareidavu", "kuuskruurksuuk", "fibqobjvjboqbif", "qetqyvoovyqteq", "hqhdwjrrjwdhqh", "ocyesyeeyseyco", "fqzxmlyylmxzqf"};
    int k = 13;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
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
    vector<string> words = {"uomhhmou", "dvwprrpwvd", "yyy", "ixi", "gg", "pslxxlsp", "qbyshsybq", "uwu", "zehcxyyxchez", "edozpmmpzode", "ggbkafllfakbgg", "qecpzgmgzpceq", "ulbpblu", "ssgjrpnnprjgss", "brrb", "awa", "svoovs", "naruran", "tkt", "nfxjzsooszjxfn", "klmvvmlk", "znggnz", "psuwwusp", "ozhexxehzo", "ehveevhe", "rbr", "nhpynyphn", "a", "snccccns", "ciic", "xtoppotx", "affffffa", "qyexeyq", "crsukneenkusrc", "mvvm", "lgeaqaegl", "noczzcon", "wjluahbhauljw", "jvkvwrwvkvj", "lmuuxxuuml", "ctrzrtc", "htvsbwwbsvth", "xfccfx", "nwygpmitimpgywn", "vbtsrnrstbv", "nhnxqzzqxnhn", "ojwlwwlwjo", "bqcoutotuocqb", "nviysosyivn", "f"};
    int k = 88;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 751161238;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"baab", "qsoizweewziosq", "mvvm", "illi", "ylgologly", "wgletqtelgw", "nwwn", "mqkgkgkqm", "alvla", "phkhp", "qvmslvnnvlsmvq", "ftmddmtf"};
    int k = 64;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 259997;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"imooeoomi", "zfyrbmambryfz", "hpmyecgigceymph", "zlbjjblz", "xzsdjdszx", "frebbbberf", "h", "pnp", "efebbefe", "hhiffihh", "yey", "ncpfrfpcn", "uoxzyzxou", "lrbbrl", "zooz", "rvrnenrvr", "fkecxqvxvqxcekf", "ayjvuummuuvjya", "njkdkjn", "dpcsmpkjkpmscpd", "rgerqdffdqregr", "ss", "hdfvltlvfdh", "lopypol", "ooqxmhmxqoo", "uotqatiitaqtou"};
    int k = 75;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 295774184;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"icqjzffzjqci", "ullu", "ounolonuo", "fbbzekskezbbf", "ignaddangi", "oqvtutvqo", "pjprccrpjp", "xgbuubgx", "qycsniinscyq", "wzzzzw", "hbvpfpfpvbh", "qecceq", "hrydzickcizdyrh", "dsrwovabavowrsd", "e", "pp", "tubbut", "zrz", "isgsi", "btb", "xzvbufqnqfubvzx", "bvbhqiqhbvb", "v", "efekrjfjrkefe", "pllp", "xksdtdskx", "fbrgrbf", "tvijfdmmdfjivt", "uppdnndppu", "ofqcmkkmcqfo", "ii", "hmkhqffqhkmh", "sas", "acqehheqca", "w", "pfp", "d", "vzgukugzv", "qqaaaqq", "lqjfjql", "euqkysmmsykque", "tchheehhct", "lirjsykvkysjril", "wnllnw", "pzxxzp", "pzwkwzp", "j", "toeseot", "aotbqgdgqbtoa", "lkoiqoooqiokl"};
    int k = 64;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 91723906;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"jbsyluqqulysbj", "vqqv", "qvywatcctawyvq", "e", "xmxullzzlluxmx", "y", "fcpuyubpbuyupcf", "deolyyloed", "edoode", "lptftpl", "suwddwus", "qtdycjoojcydtq", "kndpcddcpdnk", "mczfyspwpsyfzcm", "vnpdattadpnv", "axhwwhxa", "oavecrcevao", "unlctnlntclnu", "vndrhrrhrdnv", "uunaqqqanuu", "vljvejxxjevjlv", "tniddint", "kook", "bcjawajcb", "faddaf", "vvlicmcilvv"};
    int k = 60;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15793316;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"oqjddjqo", "atiqoqqoqita", "coriovrdrvoiroc", "rvirpcfyfcprivr", "hxjjjccjjjxh", "fczjexooxejzcf"};
    int k = 39;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"kq", "kx", "px", "gt", "nv", "jv", "iq", "mg", "uu", "sg", "ho", "xh", "ss", "qd", "lt", "fw", "mm", "cc", "na", "ko", "tr", "ng", "xu", "gz", "wj", "ka", "cw", "vk", "rc", "nj", "lp", "uq", "hl", "ub", "gv", "sv", "ck", "uf", "vs", "wg", "xe", "ov", "yr", "mj", "wh", "zo", "lv", "ku", "mb", "vx"};
    int k = 56;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 60466174;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"md", "kw", "gw", "bd", "fe", "gl", "ct", "sk", "sy", "yh", "ca", "wh", "py", "ld", "sx", "gs", "ji", "jb", "tu", "gh", "qs", "ae", "be", "lk"};
    int k = 80;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"uu", "dq", "zu", "zs", "ga", "nr", "dw", "ir", "bm", "dp", "gx", "zo", "ta", "ad", "cy", "hc", "ft", "tp", "xf", "sz", "uy", "yr", "jw", "bn", "ab", "vd", "rl", "kg", "fn", "ml", "if", "eb", "pf", "ob", "sj", "of", "wn", "vs", "rt"};
    int k = 70;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 531439;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"jl", "pu", "pt", "ii", "um", "uh", "kz", "jy", "yr", "ac", "vl", "ha", "ma", "je", "qo", "un", "th", "hh", "lh", "ih", "sq", "pp", "dk", "vh", "uj", "az", "mv", "wc", "wg", "xd", "re", "ta", "fs", "oz", "zx", "vs", "mj", "vq", "xk", "jq", "xw", "ds", "hu", "bw", "mk", "be", "tc", "bz", "zs", "dl"};
    int k = 79;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 770496334;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"sf", "sm", "ao", "di", "gi", "rv", "ec", "co", "ms", "lf", "qh", "ts", "av", "xd", "ek", "uu", "rn", "il", "pu"};
    int k = 46;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6559;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"i", "ax", "e", "ag", "q", "ad", "p", "j", "a", "au", "x", "n", "ae", "u", "ar", "at", "af", "aw", "g", "o", "v", "b", "f", "d", "t", "s", "m", "r", "h", "ai", "z", "ab", "ak", "an", "ao", "ap", "al", "as", "av", "aa", "aq", "aj", "l", "y", "ah", "w", "k", "am", "c", "ac"};
    int k = 20;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 222217871;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"am", "j", "d", "w", "aa", "c", "an", "ab", "u", "x", "p", "ae", "as", "aq", "k", "s", "h", "a", "ak", "aj", "ar", "al", "au", "v", "ad", "ag", "n", "m", "f", "z", "ap", "ah", "ai", "ao", "i", "av", "t", "e", "q", "aw", "ac", "y", "at", "af", "b", "o", "g", "r", "l"};
    int k = 89;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14020416;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"s", "ak", "i", "v", "e", "l", "r", "f", "aj", "au", "am", "k", "ah", "al", "av", "a", "ao", "ax", "t", "b", "m", "h", "w", "d", "ae", "q", "ac", "ar", "j", "ai", "ad", "ab", "at", "as", "n", "x", "ag", "af", "aw", "ap", "an", "p", "aq", "y", "g", "o", "z", "u", "aa", "c"};
    int k = 57;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 124697136;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"p", "a", "o", "h", "k", "i", "d", "v", "j", "c", "q", "g", "n", "t", "l", "f", "s", "m", "r", "b", "e", "u"};
    int k = 49;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 266213342;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"mr", "s", "iu", "z", "sl", "dt", "v", "aw", "q", "ag", "pa", "j", "xg", "h", "p", "qa", "ba", "d", "u", "kl", "ld", "g", "qn", "c", "za", "vs", "xu", "xs", "b", "l", "rk", "ka", "f", "mq", "cw", "w", "n", "jh", "ck", "o", "a", "ys", "xf", "x", "e", "zc", "at", "th", "r", "mg"};
    int k = 54;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 23088298;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"su", "d", "tb", "cq", "y", "i", "fr", "p", "to", "w", "x", "rj", "jk"};
    int k = 31;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4031076;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"e", "v", "ik", "mc", "bi", "ql", "j", "hy", "s", "r", "t", "ra", "m", "b", "w", "gn", "kn", "l", "ty", "jt", "mv", "yu", "zi", "us"};
    int k = 95;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 331890687;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"t", "uq", "jf", "no", "d", "u", "vx", "p", "dv", "tz", "vk", "va", "b", "f", "rb", "i", "fy", "kv", "kd", "nc", "ty", "v", "zx", "lw", "e", "mf", "ur", "mh", "dg", "s", "he", "hr", "rs", "dj", "q", "zf", "la", "my", "qf", "nn", "if", "r", "ze", "g", "z", "sf", "fu", "w", "h", "yc"};
    int k = 95;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 357404819;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"x", "k", "z", "b", "r", "mt", "s", "gg", "lx", "h", "fy", "m", "g", "gj", "p", "bu", "t", "v", "a"};
    int k = 90;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 248800322;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"y", "rs", "g", "yo", "vt", "mm", "pm", "m"};
    int k = 27;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 104779;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"p", "f", "z", "k", "o", "h", "fc", "spdxnkhmmabyqg", "j", "spvfvuefw", "t", "n", "lhkvjuqmwgmjrj", "w", "a", "d", "xoglphthrbb", "y", "x", "q", "b", "pwiqbwn", "s", "r", "jdp", "xltv", "gfm", "i", "l", "m", "ovdidtwpvlv", "g", "u", "e", "v", "c"};
    int k = 52;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 524866444;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"gfe", "w", "ebgfe", "efgbe", "bbfynvei", "hhbbfynvei", "bt", "tblbiceipfptew", "tblbiceipfpt", "ievnyfb", "bfynvei", "ie", "pured", "ynvei", "wb", "t", "aenw", "efg", "aenwoxe", "ae", "mzhhbbfynvei", "wetpfpieciblbt", "pu", "tblbic", "ef", "exownea", "fynvei", "p", "inderup", "fpieciblbt", "etpfpieciblbt", "ciblbt", "blbt", "nderup", "bgfe", "puredn", "ievnyfbbh", "wnea", "tblbiceip", "ievny", "nea", "aenwox", "up", "ea", "ei", "ievnyfbb", "vei", "tblb", "hbbfynvei", "bw"};
    int k = 18;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12909;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"yipxahqjlv", "unfvsz", "unfvsznvpwbjz", "yi", "fiwqt", "unfvsznvpwbjzb", "ko", "pvnzsvfnu", "xpiy", "hcsngcs", "bzjbwpvnzsvfnu", "hcsngc", "wpvnzsvfnu", "fnu", "unfvs", "hcs", "jbwpvnzsvfnu", "axpiy", "fiw", "hcsngcsue", "if", "qhaxpiy", "yipxahq", "unfvsznvp", "unfvsznv", "jqhaxpiy", "y", "un", "euscgnsch", "unfv", "haxpiy", "f", "uscgnsch", "nsch", "zjbwpvnzsvfnu", "scgnsch", "bbzjbwpvnzsvfnu", "o", "yip", "sch", "bwpvnzsvfnu", "unfvsznvpw", "yipxahqj"};
    int k = 43;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18961334;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"pufor", "pzbvfupgmqktm", "pzbvfupgmq", "jckq", "cmdrhyg", "d", "gyhrdmc", "rhyg", "bopufor", "gyhrd", "qk", "qmgpufvbzp", "c", "rxi", "pzbvfupgmqktmz", "gyhrdm", "mdrhyg", "mtkqmgpufvbzp", "rofu", "pzbvfupg", "rofup", "g", "rx", "q", "or", "for", "zp", "hyg", "yg", "pz", "gyh", "rofupob", "rxih", "rofupo", "rof", "r", "opufor", "tkqmgpufvbzp", "p", "gyhr"};
    int k = 86;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 185392109;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"nhedeecxehijziw", "ybmov", "cuqzncg", "vomby", "wizjihexceedeh", "wizj", "cmgkvhcgp", "qzncg", "pgc", "sxcmgkvhcgp", "gcnzqucb", "hijziw", "zp", "ijziw", "iaybmov", "ncg", "wizjihexceedehn", "ov", "rbcuqzncg", "w", "v", "hcgp", "hedeecxehijziw", "wizjihexc", "uqzncg", "vom", "vo", "mq", "aybmov", "j", "bcuqzncg", "ehijziw", "qm", "gcn", "gp", "zncg", "bmov", "cg", "deecxehijziw", "mgkvhcgp", "gcnzqu", "wizjihexceede", "pz", "vhcgp", "ziw", "iw", "wizjihex", "wizjihexcee", "pgchvkgm", "wizji"};
    int k = 79;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 468098453;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"bee", "ycbmeeb", "jsya", "eb", "meeb", "jmpmhei", "cbmeeb", "mdcfb", "jmpmheixfvam", "bmeeb", "beembcy", "hrv", "jmpmheixfv", "avfxiehmpmj", "mj", "be", "fdkhrv", "jmpmheix", "ya", "vrhkdf", "vrh", "beem", "yjsya", "qycbmeeb", "jmpmhe", "fxiehmpmj", "bfcdm", "vrhkdfq", "bf", "jmpmheixfvamo", "kullqdmdcfb", "vrhk", "khrv", "iehmpmj", "hmpmj", "jm", "jmp", "uyjsya", "jmpmh", "beemb", "cfb", "bfcdmdqllu", "vrhkdfqm", "vfxiehmpmj", "ullqdmdcfb", "j", "mqfdkhrv", "bfcdmdq", "dmdcfb"};
    int k = 49;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 176445823;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"tceofy", "xeslwza", "rrax", "ih", "wxarr", "hinz", "djpfhxswxarr", "arr", "rraxwsxhfp", "tc", "reeiyfoect", "h", "dm", "m", "lreeiyfoect", "jdm", "nih", "swxarr", "xswxarr", "tce", "rraxwsxhfpj", "rraxwsxhfpjd", "hxswxarr", "rraxwsxh", "iyfoect", "slwza", "rraxw", "tceofyieerl", "eeiyfoect", "fhxswxarr", "a", "azwls", "rraxwsx", "mdj", "vrdjpfhxswxarr", "za", "hinzav", "eiyfoect", "tceo", "tceofyiee", "rraxwsxhfpjdrvf", "eslwza"};
    int k = 63;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 256859673;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"wlwvwlw", "gcbjevh", "bjevh", "muil", "liumxlrnsjh", "lium", "il", "liumxlrnsj", "cbjevh", "h", "li", "hvej", "rlxmuil", "xmuil", "hvejbcg", "hvejb", "jsnrlxmuil", "liumxlrn", "nrlxmuil", "liumx", "hv", "liumxl", "l", "uil", "liumxlr", "pr", "tehjsnrlxmuil", "liumxlrns", "liu", "ehjsnrlxmuil", "vh", "hvejbcgb", "bgcbjevh", "lxmuil", "kpr", "snrlxmuil", "liumxlrnsjhe", "evh", "hve", "rpk", "hjsnrlxmuil", "rp", "liumxlrnsjhet", "r", "hvejbc", "jevh"};
    int k = 97;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 705780332;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"ibqhbimimibhqbi", "vii", "u", "lqzwacu", "i", "ii", "zwa", "wa", "iiv", "zwacu", "awz", "ylqzwacu", "a", "wzwa", "cu", "iivg", "ucawzqly", "bgvii", "dwzwa", "wacu", "awzwd", "h", "acu", "uc", "awzw", "aw", "iivgb", "ucaw", "ucawzq", "gvii", "ucawz", "ucawzql", "qzwacu", "uca"};
    int k = 75;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 779423417;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"jodyccydoj", "i", "htqyps", "pssqst", "spyqthsii", "fzdli", "st", "il", "sp", "spyq", "shtqyps", "dli", "ishtqyps", "li", "ps", "spyqth", "sqst", "tsqssp", "qyps", "zdli", "spyqt", "s", "ildzf", "ssqst", "spyqthsi", "tsqss", "spyqths", "tsqs", "qst", "tqyps", "ildz", "ts", "yps", "ild", "tsq", "iishtqyps", "t", "spy"};
    int k = 90;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18759996;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"rwpwr", "zyzkrj", "yzkrj", "hemb", "i", "ztc", "jrkzyzf", "ct", "bmehvoxiq", "bmehvo", "jr", "ixovhemb", "rj", "c", "tc", "pqixovhemb", "ctzo", "zkrj", "bmehvox", "bmehvoxiqpr", "bm", "krj", "b", "qixovhemb", "u", "vhemb", "xovhemb", "bmehvoxiqp", "mb", "rpqixovhemb", "jrkzyz", "jrk", "bmehvoxi", "oztc", "bmeh", "jrkzy", "jrkz", "emb", "ctz", "j", "fzyzkrj", "bmehv", "ovhemb", "bme"};
    int k = 89;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 384698352;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"laiiruxuriial", "olgamxcgh", "h", "fyxpkr", "hgcxmagloe", "yf", "fyx", "fyxp", "hgcxmagloeay", "d", "hg", "krkpxyf", "fyxpk", "gh", "xcgh", "eolgamxcgh", "hgcxm", "hgcxma", "hgcxmagloea", "hgc", "kpxyf", "yaeolgamxcgh", "fyxpkrkq", "mxcgh", "fy", "amxcgh", "hgcx", "fyxpkrk", "xyf", "aeolgamxcgh", "hgcxmagl", "o", "pxyf", "lgamxcgh", "hgcxmaglo", "f", "cgh", "gamxcgh", "qkrkpxyf", "hgcxmag", "rkpxyf"};
    int k = 34;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25054216;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"pwffmnppnmffwp", "ks", "wpj", "wp", "w", "ac", "u", "jpw", "yc", "wpjuxr", "ksay", "wpjuxrk", "wpjuxrkh", "vthkrxujpw", "cam", "wpjuxrkhtv", "ksa", "ask", "ksayk", "mac", "ca", "wpjuxrkht", "k", "krxujpw", "wpjux", "c", "rxujpw", "ujpw", "thkrxujpw", "sk", "xujpw", "ksaykj", "hkrxujpw", "pw", "y", "yask", "wpju", "kyask", "jkyask", "cy"};
    int k = 79;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 146310523;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"zizziiiizzg", "zzzzgg", "z", "iizzg", "zgzzgg", "igzgiggzgzg", "zg", "zig", "gi", "ggzzgiiigzg", "zizizigzizi", "zigzzg", "gziizigigzi", "gig", "gizziiiizzg", "gzzgzziigzi", "ggzig", "gggzzg", "izzggzzggig", "zziizigigzi", "iig", "iggzzg", "zzzizg", "igg", "gggzzzizgzg", "gizzzggzii", "gzizg", "gzizgigzgzg", "zggggziigzi", "zzgggg", "igzi", "giiziigigzi", "zizgzgizgzg", "izziigzgii", "iziggizzgzg", "giggizzigig", "gzzzizggzg", "gziigiiigzi", "iizizigzizi", "ggziggzzgzg", "gzgizg", "iziizigigzi", "izzzgg", "ii", "ggigzg", "gizizigzizi", "izizzg", "zzi", "zzgziiiizzg"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 52709557;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"jdo", "oooddo", "dojjdjojodj", "ojjoddooooo", "jjjdooddodo", "djdddo", "djo", "jjo", "ddj", "oojjooododo", "odjodo", "djoddo", "oddjdjodooo", "odojjojodj", "ddojdjodjdj", "jojdoo", "djjdodooojo", "ojdodojjoo", "jjojdjdojoo", "ddoooo", "ojdjdjodjdj", "djdjjoddjdj", "djodddjdodo", "oj", "ddodjjjjddo", "odoooo", "oojodo", "j", "joodddjdodo", "djjdoo", "ojddjjjjddo", "jjjjododjdj", "doodddjdodo", "odooddddjdj", "jdoooo", "ddodojodjo", "ddodojdj", "oodjdo", "dddoo", "jjddjjjjddo", "jjooo"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 655683489;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"tdd", "ttditd", "di", "ddididtiidd", "tttttddtiti", "dtidtd", "tddddd", "td", "itd", "tddtiddiiid", "ittdtd", "iid", "tititidtiti", "ddittittdtd", "id", "tid", "dtiitididti", "ttiitididti", "dtiti", "ttidttdtttd", "ddd", "dtdddd", "tiitdd", "ddtidddtdtd", "tidtdd", "idddtd", "ttiidiiidid", "tidttd", "iititidtiti", "diiitididti", "ditiiddidtd", "ttdddd", "idiitd", "ddiddiiidti", "ddittd", "dittiiiittd", "iddtttitdtd", "tdiitididti", "tddtttitdtd", "tdttitttdtd", "ittti", "itdddd", "tiidiiiittd", "iddiiittiti", "i", "iddttd", "ii", "iitdtd", "tiitdddtdtd"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 37072133;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"yysydsyydyd", "sssyys", "dysyys", "dds", "dsysdysdys", "yssdysddsyd", "yysyddddyys", "ysssyysydyd", "dssyys", "yds", "yssyyydysys", "dddyydysd", "yyddys", "yssysdddsyd", "yysdydsydyd", "ysddydsdsyd", "ysdyyyddsyd", "yyysdyyysys", "sdydydsydyd", "yydsys", "yyssys", "sysdydddds", "yyd", "ysyydsddsyd", "sysdsdsdsys", "dsdyys", "d", "yssyys", "ysyyss", "ddyyddddyys", "ddyddyysd", "ydydydsydyd", "yssydyyysys", "ydsyys", "s", "dsdyyyd", "dyysddddyys", "ddsyss", "sdsyys", "yyddydsdsyd", "dyddys", "dssyyydysys", "syddssyysys", "sdyyddddyys", "ydysdssysys", "sssyssyydyd", "sdsddsyysd", "dss", "ysdsdsssdd"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 180401980;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"issilsllil", "llslslislsl", "iilli", "ili", "i", "isllslilisl", "ssilslislsl", "isiisi", "sli", "illsisisisi", "lslll", "illillllsl", "iilll", "lsssii", "iiiililsisi", "siissslsisi", "iiissslsisi", "ssisllllssi", "sillslilisl", "lssl", "ilssllllssi", "lslii", "slissi", "siiiii", "iiilsi", "sislsi", "siissi", "ll", "sisslillli", "lli", "slsissii", "sllil", "llisiiiissi", "iiill", "isilsslsisl", "ssiiii", "iii", "slissslsisi", "sslsl", "lissiislsl", "lsllslilisl", "l", "isslliisisi", "ssllslilisl", "slsl", "sisiilsslsl", "iiiliisissl", "slssllllssi", "sl"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 823095490;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"b", "brbibibirir", "brb", "bbbiib", "ibbiiiribib", "biirbrbrbir", "briirrrriib", "irbbiibirir", "bbrrib", "iribbriibib", "brrrib", "rbbiib", "ib", "i", "ibrrirriibb", "ibbrib", "irirrrbirr", "rrribb", "rirrbriirir", "ibbiib", "bbb", "iriirrrriib", "iiribb", "iririrbirir", "iiirbiiirir", "iirrirbrbir", "bbbir", "bibririirir", "rrrbrbbriib", "irb", "iir", "irbiib", "rribbb", "bbiirribir", "bbibr", "brrbribbir", "iibbbbiirir", "ribbib", "bb", "irirb", "rbirbrrrbr", "brirbriirir", "rbbiiiribib", "iibrirbirir", "bbibib", "rrb", "rr"};
    int k = 96;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 128140486;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"nnnnpnn", "ppnnnnpnpnpnnn", "nnnppppnpnpnnn", "pnpn", "pnppnpn", "npnpnnnpnppnn", "nppnpn", "nppnnpppnnpnnn", "pppnnnn", "nppnppnnnppnnn", "ppnnpnnppnpnpn", "npnpnpn", "npnnppnnnnn", "n", "nnnnpn", "nnnnnnnpnppnnn", "p", "nppnpnnnpnpnn", "npppnnppnppnnn", "npnnppnnpnpnn", "npnnpnppnpnpnn", "pnpnnpppnnpnnn", "pnpppnpnnppnn", "pn", "pnpnnnn", "npppppppnnpnnn", "npppnpn", "pppnpnnnpnpnn", "pnpnpnnnpnpnn", "pnpnpnn", "nnn", "pppppnpnnppnn", "ppnnpppnnnpnn", "pnppnnpnpnpnn", "ppppnnn", "nppnnpnppnn", "ppnpppn", "nppnnnn", "pnnpnnnpnppnn", "npnppnnnpnpnnn", "nnnnppnnnnpnn", "ppppnnpnpnpnnn", "pppn", "pnnppnppppnpn", "pppnnpppnnpnnn", "nn", "nnpppn", "nnnnnn", "ppppppppnnpnnn"};
    int k = 94;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 526458623;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"ejjjeje", "eeejjjeeejjeee", "jejejee", "jeje", "jjejjejjjejee", "jjjeeee", "jjjejeeejejee", "jejeeeeeejjee", "ejje", "eeeejejjeejjje", "jjjjjejeejjee", "jjeejjejjejee", "e", "jjejjje", "jje", "je", "jjjjeje", "ee", "ejjjeejjejjeee", "jjjjjee", "ejjeejjjeejeee", "eeejjeeeejjee", "ejeeee", "jejeejjjeejeee", "jeejejejjjjeje", "jejejeeejejee", "ejjejejjjjeeje", "jejjjjjjjejee", "jeejeee", "ejjeeee", "jejjjje", "jejjjee", "jjeeejjeejjeje", "ejejeje", "ejeeejejeeje", "ejjjjejeejjee", "eje", "jjjjjejeejjeee", "eejjjjjjjjeeje", "jjje", "eejjeee", "eejeeeejjjeje", "jjjjeejjejjeee", "jjeejeeejejeee", "j", "jejjjejeejjee", "jjjeejjjeejeee"};
    int k = 97;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 799394107;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"oeeeoeeooeoee", "oeoeoooeoeeooe", "oeoe", "eeoeeeeooeoooe", "oooeeoooeeoeee", "eooeooeooeeoee", "ooooeee", "oe", "oeoooeoeeooee", "o", "oeeooooeoeeeoe", "ooooeeeeeeoooe", "eeooooeooeoeee", "eoooeoe", "ooooeoeeoeoeee", "oeoeoeeeoeoee", "oeooooooeoeee", "oeeooeeeooooe", "oooeee", "eeooooe", "eooeoeeeoeoee", "ooeeeooeoeoeee", "oooeoeeeoeoee", "oeeooooeooooee", "eoe", "eoeoeee", "eeoeoeooeoeeoe", "eeeeeoeeeooeee", "eooe", "oeooeeoeoeoeee", "ooooeoeoeeeee", "oeeeoee", "ooeooee", "e", "eooeeoooeeoeee", "eoeeoeoeoooe", "oeooeoe", "eee", "oeeeoeoeeooee", "eoooeeooeooeee", "oee", "oooe", "oeooeeoeoeoee", "oeoeeoooeeoeee", "ooooeeooeooeee", "eooeeoeoeooeoe", "ooooeoeeoeoee", "eoooeee", "oeooeeooeooeee"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 725411248;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"dydydyyydydyy", "dddyy", "dyddydy", "yddyydddyydyyy", "yydydyy", "yddydyyyydydy", "yddyyddyddyy", "ddyydyyddyyddy", "ddydddyyyydyy", "ddy", "dddddyy", "dyydydyddydyy", "dddydddddydyy", "yddydddddyddy", "yddy", "dydyyy", "dddddydyyddyy", "yyydyyy", "yy", "ddyydddddydyyy", "dyyydyy", "y", "dddyydddyydyyy", "yyddydy", "yydddydydydyyy", "dydydddddydyy", "dy", "yddyddyyydddy", "dydyydddyydyyy", "ddddyyy", "dydddydyyddyy", "yyy", "ddyyydy", "ddddyyddyddyyy", "dyddyyddyddyyy", "d", "dydyyyy", "ydddyyddyddyyy", "ddddydy", "dyydydy", "dddydyyydydyy", "yydddydddydyy", "ydddydy", "yddddydyyddyy", "dydy", "dddy", "yddddy", "dddyyyy", "yddyyyyyyddyy"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 420177160;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"gg", "gkkkgkg", "gggggkkgkkgkkg", "gkkkkgkggkkgg", "kgkkggkkgkkggg", "kkkkggggkgg", "kkkkggkkgkkggg", "kkgkgkgkkkggkg", "kgkgkgggkgkgg", "gggggkgggkkgg", "kkkggkg", "kggkkkggkgkggg", "kgg", "kkkkgkg", "kkkgggg", "kkkkkgkggkkgg", "gkkgkgggkgkgg", "kkgkgkgggkkgkg", "gkgkggkkkkgkkg", "gkkggkgkkgkgg", "ggg", "gkkgkkkkggkggg", "kgkgkggkgkkg", "kkkg", "kkkkgg", "ggkkgkgkkgkgg", "gkkkkkggggkgkg", "kkkggggggkkgg", "kkg", "gkkkggkkgkkggg", "k", "kgkggkkkggkggg", "g", "ggkkkgggkgkgg", "kkggkkggkgkggg", "gkkkkkkggkkggg", "kg", "kkgkgkgggggkgg", "gkkggkkkggkggg", "gkgkgkkkgggkkg", "kkkggkkkggkggg", "ggkkg", "kgggkgg", "gkkgggg", "gggkgkkggkkggg"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 393241404;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"hppphph", "hppphhh", "pppphhpphpphhh", "pphhhh", "phh", "phppphphhpphh", "ppphphhhphphh", "hhhhhh", "ppphhppphhphhh", "pphpphppphppph", "hhhhhhhphpppph", "hpphhpppphphhh", "hph", "phphhppphhphhh", "phph", "phppphh", "phpphhpphpphhh", "phpphhhph", "ph", "hpphhhh", "hpph", "pphhhph", "hhphhhhppphh", "hpppphphhpphh", "ppppphh", "ppppphpphh", "hhhhhhhphh", "ppppphppphhph", "phhhhhhpppppph", "hpphph", "ppppphphhpphh", "pphhphhhhpphhh", "phpphhh", "hppphhpphpphhh", "hphhphh", "phphhhh", "ppphhhh", "hhphhphhpphph", "hpphhhppphphh", "phhphhhhhpphhh", "pphpphh", "hppppph", "p", "hpphphhhphphh", "h"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 120836396;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"bdbdddbbb", "bdbdddbdbbd", "bbbdbdbbdbd", "bbbbbbdbbbb", "dbbbdbbbbbb", "bdbbbbbbbd", "bdbbbb", "bdbbddddbbb", "bbbddbbbbbb", "dbdbdbbbbbb", "dbdbddbdbbd", "bbdbbb", "bbbdbdbbbdb", "bbbbbbbbbbb", "ddbbbbbd", "bbbbbb", "dbbbddddbbd", "bbb", "ddbbdbdbbbd", "ddb", "bdbdbdbbdbd", "bbddbbbbbbb", "bdbb", "dbdd", "dbdddbdbbb", "ddbbdbbdbd", "ddbbddddbbb", "ddbbbb", "ddbdbdbbdbd", "dbbbbddbdbb", "bb", "bbbbbbdddbb", "bdbdbbdbdbb", "bdbbbbdbbbb", "bbdd", "bbbbbbdbbbd", "dbdbbbbdbd", "dbbdb", "b", "bbbbbddbbd", "bdb", "dbbbbbdbbbb", "bbbbdbbdbbb", "dbdbdbbbdbd", "bbbdbbbbddb", "db", "bbbbbbbbdbd", "dbddbdbdbbd", "bdbbbdbdbbb"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 324026186;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"rprrprprppr", "rpprppprp", "rrrpppppppp", "rppprpppppp", "pprpppppr", "pprrprprppr", "rpprpp", "ppr", "rprppp", "p", "prrrprpprpr", "ppp", "rrppprppppp", "rrrppprrrp", "rrprrppprpr", "rprrpprrppr", "rrrppp", "prpprrrrppp", "pprppprprpp", "rpp", "rppppprpppr", "rppppp", "rprpppppppp", "rrprprpprpr", "prprprpprpr", "rprprrrrppp", "ppppr", "prprprrpprp", "prrppp", "prrprpprpr", "prpppprpppp", "rprrppppppp", "r", "prprpppprpr", "pppprpprprp", "pr", "rrrpprrrppr", "prpppp", "pppppprpppp", "pprpppppppp", "prrrprpprrp", "rprrrrppppr", "prp", "ppprrpppr", "ppppprprppr", "ppppppppppp", "pprppp", "rppppprpppp", "pppppp"};
    int k = 96;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 769843498;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"vvuvvvuvuvv", "vvvuvuvvuvu", "vu", "uu", "uvvuv", "vvvvvuvvuvu", "uvvvvuvvvuv", "uvvuvuuvuu", "vv", "vvuuuuvvvvu", "vvuuvvvvvvv", "uvvvvv", "vvvuvuvvvvv", "vvvvvv", "vvu", "vuuvvvuuvvu", "vuvvvvuvvvv", "vuvvvuvvuvu", "vvuvvvvvvvv", "uuvvuuuuvvv", "vvuuvuvuvvu", "uvuvuuvvuvu", "vvuuuvvvvvv", "vuvvvvvvuuv", "vvv", "vuuv", "uv", "vvvvvvvvvvv", "uuuvvvvvuu", "vvvvv", "vvvvuuuuvvv", "vuvvuvvvvvv", "vvuuvvvvuvu", "uuuuuvvuu", "uvuuvuvuvvu", "vvvvvvvvuvu", "v", "uvvvvvuvvvv", "vuv", "vvvvvvuvvvv", "vuvvvv", "uuv", "uuvuu", "vvvuvvvvvvv", "vvuvuvvuvuv", "vuvuvuvvuvu", "vvvvvuuvuvv"};
    int k = 94;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 447436118;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"ffl", "lfllfffflll", "flllllfllll", "llllllllflf", "lll", "lllflfllflf", "llflll", "fflllllllll", "lfllflllflf", "llfllllllll", "f", "flfffllllll", "lllflfflll", "flllllllll", "llllfllflll", "llllllfffll", "fflll", "llllflf", "lflflfllflf", "lfflflffllf", "llllflfllfl", "lllfll", "flflfflllfl", "lllffflllll", "ll", "lllf", "llffflllllf", "lflllllllll", "lllllfllflf", "flflll", "lllllllllll", "llllfffflll", "llllllfllll", "lf", "lllllflfllf", "llllll", "fllflllllll", "llfflflfllf", "llfllffllll", "l", "llffllllflf", "lfl", "llfffllllll", "fflllfffll", "llf", "lfllll", "flllll", "ff", "llllflfffl"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 316936085;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"ttttttotttt", "toottt", "ttootototto", "o", "tootooottt", "oottoooottt", "to", "tttotttotot", "ttoottootto", "ttttttttoto", "ootoo", "tot", "ottttt", "ottott", "ttttoooottt", "oot", "tottoooottt", "tto", "tottttttttt", "ottttottttt", "oottotttttt", "ttotttttoo", "ttttttottt", "ttotttttttt", "ttt", "t", "ottootttttt", "oototottoto", "otootototto", "tt", "totottttttt", "tttttt", "oooott", "tttttttttto", "ttottt", "ttottottttt", "ott", "ttototttoot", "tottttttoto", "otttttttoto", "ttto", "ootttttotto", "ttototoottt"};
    int k = 93;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 779460928;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"qcqqccccqqq", "qqqcqcqqqcq", "qqqqccccqqq", "cqccqcqcqqc", "ccccqcqqqqq", "qcqcqcqqcqc", "c", "qqccqcqcqqc", "qccq", "qcqqqqqqqqq", "qqccccqqqqq", "ccqc", "ccq", "qqqqqq", "qqc", "qcqqqqqqcqc", "qccqqqccqq", "qq", "cqqcqq", "qcqqqccqq", "qcqqqcqqqqq", "q", "qqcqqqccqqc", "qqqqcqqqqqq", "qcq", "qccqqqqqqq", "qcqcqqccqqc", "cqccqqqqcqc", "cqqqqq", "cqqqqccccq", "cc", "cqcqqcccqqc", "qcqqqq", "ccqqccccqqq", "qcqcqq", "qqq", "qcqqqqcqqqq", "qqqqqqcqqqq", "qqqqqcqqqqq", "qcqc", "qcqqccqqqqq"};
    int k = 98;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 565265691;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"aba", "acaba", "baca", "cac", "b", "c", "a", "d", "e", "f", "g", "hh", "abcd", "qwerqwetqwads", "adsgasdgasdg", "aabbccc", "aabbaa"};
    int k = 70;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 99344446;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa"};
    int k = 70;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 786186868;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"aba", "acaba", "c", "add", "sad", "z", "weq", "sdd", "b", "www", "qqq", "aaa", "zzz", "wr", "qqew", "asdqew", "asd", "xc", "erw", "qwe", "ert", "dfgdf", "asdas", "erter", "sdf", "wer", "ut", "fh", "yi", "r", "hfd", "te", "ghhh", "gggg", "aaaa", "qqqq", "wwww", "eee", "rrr", "tttt", "yyy"};
    int k = 100;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 426581163;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "abcde", "acbdes", "b", "c", "v", "f", "afgsjjud", "jsikahuid", "ab", "abu", "abdru", "cnnhhguhagds", "hagsdua", "sakjdfasgdfisag", "sdkfsdfb", "ihsgduag", "hasgfuish", "sjkdbfsjbcyuh", "shdbfsuhgu", "aksbjahgavsg", "snbfjas", "jndiosdguiy", "ishfoish", "iuhsfiusgieiru", "gsfygsiugwy"};
    int k = 99;
    CountPalindromes* pObj = new CountPalindromes();
    clock_t start = clock();
    int result = pObj->count(words, k);
    clock_t end = clock();
    delete pObj;
    int expected = 732678279;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=10661&pm=7418
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
#define MOD 835454957 
 
int n; 
vector<string> a; 
 
int memo[101][3][50][16]; 
int memo_match1[50][16][50]; 
int memo_match2[50][16][50]; 
 
class CountPalindromes { 
public: 
 
   int match1( int x, int len, int y ) { 
      int &ret = memo_match1[x][len][y]; 
      if( ret >= 0 ) return ret; 
      ret = 0; 
 
      int L = a[y].size(), i; 
      for( i = 0; len+i < a[x].size() && i < a[y].size() ; ++i )  
         if( a[x][len+i] != a[y][L-i-1] ) break; 
      return ret = i; 
   } 
   int match2( int y, int len, int x ) { 
      int &ret = memo_match2[y][len][x]; 
      if( ret >= 0 ) return ret; 
      ret = 0; 
 
      int L = a[y].size(), i; 
      for( i = 0; len+i < a[y].size() && i < a[x].size() ; ++i )  
         if( a[x][i] != a[y][L-len-i-1] ) break; 
      return ret = i; 
   } 
 
   int rec( int k, int side, int x, int len ) { 
      if( k < 0 ) return 0; 
 
      int &ret = memo[k][side+1][x][len]; 
      if( ret >= 0 ) return ret; 
      ret = 0; 
 
      if( side == -1 ) { 
         for( x = 0; x < n; ++x ) { 
            ret += rec( k, 0, x, 0 ); 
            if( ret >= MOD ) ret -= MOD; 
         } 
      } 
      if( side == 0 ) { 
         for( int y = 0; y < n; ++y ) { 
            int match = match1( x, len, y ); 
 
            int t1 = len+match == a[x].size(); 
            int t2 = match == a[y].size(); 
 
            if( !t1 && !t2 ) continue; 
            if( !t1 && t2 ) { 
               ret += rec( k - 2*match - 1, 0, x, len + match ); 
               if( ret >= MOD ) ret -= MOD; 
            }  
            if( t1 && !t2 ) { 
               ret += rec( k - 2*match - 1, 1, y, match ); 
               if( ret >= MOD ) ret -= MOD; 
            } 
            if( t1 && t2 ) { 
               if( k - 2*match - 1 >= 0 ) { 
                  ret += 1; 
                  if( ret >= MOD ) ret -= MOD; 
               } 
               ret += rec( k - 2*match - 2, -1, 0, 0 ); 
               if( ret >= MOD ) ret -= MOD; 
            } 
         } 
         int match = match1( x, len, x ); 
         if( len + match == a[x].size() && k - match >= 0 ) { 
            ret += 1; 
            if( ret >= MOD ) ret -= MOD; 
         } 
      } 
      if( side == 1 ) { 
         int y = x; 
         for( x = 0; x < n; ++x ) { 
            int match = match2( y, len, x ); 
 
            int t1 = len+match == a[y].size(); 
            int t2 = match == a[x].size(); 
 
            if( !t1 && !t2 ) continue; 
            if( !t1 && t2 ) { 
               ret += rec( k - 2*match - 1, 1, y, len + match ); 
               if( ret >= MOD ) ret -= MOD; 
            }  
            if( t1 && !t2 ) { 
               ret += rec( k - 2*match - 1, 0, x, match ); 
               if( ret >= MOD ) ret -= MOD; 
            } 
            if( t1 && t2 ) { 
               if( k - 2*match - 1 >= 0 ) { 
                  ret += 1; 
                  if( ret >= MOD ) ret -= MOD; 
               } 
               ret += rec( k - 2*match - 2, -1, 0, 0 ); 
               if( ret >= MOD ) ret -= MOD; 
            } 
         } 
         int match = match2( y, len, y ); 
         if( len + match == a[y].size() && k - match >= 0 ) { 
            ret += 1; 
            if( ret >= MOD ) ret -= MOD; 
         } 
      } 
      return ret; 
   } 
 
   int count( vector <string> words, int k ) { 
      a = words; 
      n = a.size(); 
 
      memset( memo, -1, sizeof memo ); 
      memset( memo_match1, -1, sizeof memo_match1 ); 
      memset( memo_match2, -1, sizeof memo_match2 ); 
      return rec( k, -1, 0, 0 ); 
   } 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/