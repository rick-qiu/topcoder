/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6115
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

class Palindromist {
public:
    string palindrome(string text, vector<string> words);
};

string Palindromist::palindrome(string text, vector<string> words) {
    string ret;
    return ret;
}


int test0() {
    string text = "AMANAPLANAC";
    vector<string> words = {"A", "CANAL", "MAN", "PANAMA", "PLAN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A MAN A PLAN A CANAL PANAMA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "AAAAA";
    vector<string> words = {"AA", "A", "AAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "CBA";
    vector<string> words = {"CBABC", "CBAABC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "CBAABC";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "RACEFAST";
    vector<string> words = {"AR", "CAR", "FAST", "RACE", "SAFE", "CEFA", "ACE", "STTS", "AFEC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "RACE FAST SAFE CAR";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "AABAABA";
    vector<string> words = {"AA", "AAB", "BAA", "BAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA BAA BAA BAA BAA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "STRAWNOTOOSTUPIDAF";
    vector<string> words = {"WARTS", "I", "TOO", "A", "FAD", "STUPID", "STRAW", "PUT", "NO", "ON", "SOOT"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "STRAW NO TOO STUPID A FAD I PUT SOOT ON WARTS";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "AAAAA";
    vector<string> words = {"AAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "AMANAPLANACATAHAMAYAK";
    vector<string> words = {"A", "MAN", "PLAN", "CAT", "HAM", "HAT", "YAK", "YAM", "CANAL", "PANAMA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A MAN A PLAN A CAT A HAM A YAK A YAM A HAT A CANAL PANAMA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "DEGASAREWENOTDRAWNONWARDWEFRE";
    vector<string> words = {"DEGAS", "ARE", "WE", "NOT", "DRAWN", "ONWARD", "FREER", "FEW", "TO", "NEW", "ERAS", "AGED"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "DEGAS ARE WE NOT DRAWN ONWARD WE FREER FEW DRAWN ONWARD TO NEW ERAS AGED";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "DEGASAREWENOTDRAWNONWARDWEFRE";
    vector<string> words = {"DEGA", "SARE", "WEN", "O", "TDRA", "WNONW", "A", "R", "FREER", "FEWD", "FEW", "RD", "TO", "NEW", "ERAS", "AGED"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "ACDBCBDCCCCCA";
    vector<string> words = {"A", "A", "AAB", "AADAAADCBCDAD", "ABCAAACC", "ABCACADD", "ACAADDACACCBB", "ACADD", "ADDACBADCAA", "BACCDBBCBAB", "BBAAAA", "BBAACBD", "BCBCDCDCCAD", "BCDABBCC", "BDAA", "BDDDDADC", "C", "CAACDADBCB", "CABCA", "CBBBBBC", "CBD", "CCACBCADABAD", "CCBCACBCCDACC", "CCCCA", "CCCCCACAA", "CD", "CD", "CDA", "CDBCBDC", "CDCCDDCAACCCACB", "CDDBBBCDAAB", "D", "DA", "DAABAA", "DAB", "DABDDBAA", "DACADCDDDCDBBC", "DACC", "DBACCCAABDB", "DBCBB", "DCDCCADAD", "DDBBBABBCAD", "DDDCCD"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A CDBCBDC C C C C A A C C C C CDBCBDC A";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "AA";
    vector<string> words = {"AA", "AA", "AAEAECBCBCA", "ABDAC", "ABDBAB", "ABECEBDABD", "ADBCCDEABAAEADA", "ADCDDADEB", "AEAABBCB", "AEBBBC", "B", "B", "BAA", "BAABAEE", "BAABEAAADBDCB", "BBAEEEBBACBEB", "CBA", "CBBCAEEDDCDB", "CBCDCDCBCEECCEB", "CBDBDDAE", "CBDE", "CCDEACAECBC", "CDCEECEBEDBCBEB", "DACDDECEDADBA", "DADEECCAC", "DBEDBABCD", "DCBCAEBBD", "DDBCB", "DDC", "DDDABEEEDAACBD", "DDDEEABDEDDDAD", "DECACACDCEEAA", "EBBECEBAABBCBBE", "EDAACEE", "EEDEACAECEEBBC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "BCACACBAAB";
    vector<string> words = {"A", "A", "A", "A", "AAAAAAABB", "AAABCCCABCABBB", "AACBBBACBCCCA", "AACCACAAAAAA", "AB", "ABAAB", "ABAABCBBC", "ABAACCAA", "ABAB", "ABAC", "ABBBBCAA", "ABBCACBABACCA", "ACA", "B", "BAAB", "BAABAAABABAAB", "BABABA", "BACBBAAC", "BACBBBACCABBA", "BBA", "BBAC", "BBACCCABAABCCC", "BBCBCACAB", "BCACAC", "BCBAABAACCB", "BCCABACBA", "CAACACCBCBC", "CABBCCACB", "CABCBCAACCCACB", "CACACABA", "CACBACCC", "CB", "CBB", "CBB", "CBBBCAABBC", "CCBACACBAAAA", "CCBACCAB", "CCBBBBCCAABA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "BCACAC B A A B A A BCACAC B";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    vector<string> words = {"ZZZZZZZ", "ZZZZZZZZZZZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZ ZZZZZZZZZZZ ZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "XYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZY";
    vector<string> words = {"XYXYXYX", "XYX", "XYXYX"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "ZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZYZY";
    vector<string> words = {"ZY", "YZ", "ZYZYZYZYZYZYZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY ZY YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ YZ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "LISABONETA";
    vector<string> words = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "L", "M", "N", "BASIL", "ATE", "LISA", "BONET", "SABO", "TEN", "NO"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "LISA BONET ATE NO BASIL";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "A";
    vector<string> words = {"A", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "TBGHKPUIMAGSWYATVFFCDUZYUMFXLVIRTDRUMLHKABRHBFIZGD";
    vector<string> words = {"LHKABRHBFIZGDGZIFBHRBAKHLM", "RHBFIZGDGZIFBHRBAK", "TBGHKPUIMAGSWYATVFF", "ZUDCF", "FFVTAYWSGAMI", "ND", "BGH", "CDUZ", "T", "DGZIFBHRBAKHLMURDTRIVLXFMUY", "TBGHKPUIMAGSW", "WY", "SGAMIUPKHGBT", "YATVFF", "ML", "TBGHKPUIMAGSWYA", "HGBT", "GSWYATV", "LG", "FVTAYWSGA", "NK", "URDTRIVLXFMUYZUDCFFVTAYWS", "AMIUPKHGBT", "RTDRUMLHKABRHBFIZGDGZIFBHRBAKHLMURDTRIVLXFMUYZUDC", "KPUIMA", "XFMUYZUDCF", "YU", "TVFF", "UPKHGBT", "XLVIRTDRUM", "LVIRTDRUMLHKABRHBFIZGDDGZIFBHRBAKHL", "MFXLVIRTDRUMLHKAB", "TBGHKPUIMAGS", "TVFFCDUZYUMFX", "G", "RQ", "A", "CDUZYUMF", "CD", "HLMURDTRIVLXFMUY", "FVTAYW", "FXLVI", "URDTRIVL", "M", "ZUDCFFVTAYWS", "GAMIUPK", "HKABRHBFIZGD"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "TBGHKPUIMAGS WY A TVFF CDUZ YU M FXLVI RTDRUMLHKABRHBFIZGDGZIFBHRBAKHLMURDTRIVLXFMUYZUDC FFVTAYWSGAMI UPKHGBT";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "TXDSAHDPRGINHWHLTCAWHXHPBIYGCQFGDOOBIYQRVKCQVDAHIV";
    vector<string> words = {"SZ", "HASDXT", "WD", "DXT", "DHAS", "INHWHLT", "IBOODGFQCGYIBPHXHWACTL", "QCGYIBPHXHWACTLH", "PDHASDXT", "LM", "DAHIVVIHADV", "TXDSAHDP", "DHASDX", "HWHNIGRPD", "YIBOOD", "FGDOOBIYQRV", "GFQCGYIBPHXHWACTLHWHNIGRP", "QRVKCQVDAH", "IBPHXHWACTLHWHNIGR", "DSAHDPRGINHWHLTCAWHXH", "INHWHL", "RH", "TXDSAHDPRGINHWHLTCAWH", "GCQFGDOOBIYQRVKCQVDAHIVIHAD", "RGINHWHLTCAWHXHPBIYGCQFGDOOBIY", "TCAWHXHPBIYGCQFGDOOBIYQRVKCQV", "GFQ", "IVIH", "XH", "Y", "TX", "CAWHXHPBIY", "CGYIBPHXHWACTLHWHNIGRP", "OBIYQRVKCQVDAHIVIHADVQCKVRQYIBOOD", "TXDSAHDPRG", "GDO", "HADVQCKVRQY", "VQCK", "T", "VRQYIBOODGF", "VRQYIBOODGFQCG", "KCQVDAHIVI", "PBIYGCQ", "II", "ASDXT", "HDPRG", "PBIYGCQF"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "TX DSAHDPRGINHWHLTCAWHXH PBIYGCQ FGDOOBIYQRV KCQVDAHIVI HADVQCKVRQY IBOODGFQCGYIBPHXHWACTL HWHNIGRPD HASDXT";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "OCRJOXZLTCNHHAONJSREYYTXQOWMUEBYBYSUZVGISKLORLSZXJ";
    vector<string> words = {"BYBYSUZVGISKLORLSZXJJXZSLROLK", "LRO", "RJOXZLTCNHHAONJSREYY", "JSRE", "LZXOJRCO", "TYYERSJNOAHHNCT", "SZXJJXZSLROLKSIGVZUSYBYBEUMWO", "MS", "TXQOWMU", "BEUMWOQXTYYERSJNOAHH", "EYY", "IG", "G", "ISK", "TXQ", "KLORL", "EBYBYSUZVG", "G", "LZXOJRCO", "OD", "XOJRCO", "VZUSYBYBEUMWOQX", "LKSIGVZUSYBY", "LORLSZXJXZSLROLKSI", "QO", "REYYTX", "OCR", "OCRJOXZLTCNHHAONL", "QXTYYERSJNOAHHNCTLZXOJRCO", "T", "FL", "VP", "ZXOJRCO", "ISKL", "VZUSYBYBEUMWOQXTYY", "BYSUZVGISKLORLSZXJJXZS", "JOXZLTC", "NCTL", "NHHAONJSREYYT", "VZU", "WMUEBY", "ERSJNOAHHNC", "S", "SYBYBEUMWOQXTYYERSJNOAHHNCTLZ", "PH", "SZXJJXZSLROLKSI", "ORL", "XQOWM", "OWMUE"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "GLTPPFPEWUYWHJBRNZYTGAQNTBSYEHSJXSAGGOKSMIEKJACIBM";
    vector<string> words = {"GLTPPFPEWUY", "MBICAJKEIMSKOGGA", "SXJSEYSBTNQAGTYZNRBJHWYUWEPFPPTLG", "JHWYUWEPFPPTL", "XJSHEYSBTNQAGTYZNRBJHWYUWEPFPPTLG", "YEHS", "HT", "F", "SMIEKJ", "IEKJACIBMMBICAJ", "WHJBRNZYTGAQNTBSYEHSJXSAGGOKS", "VZ", "OGGASXJSHEYSBTNQAGTYZN", "XSAGGOKSMIEKJACIBM", "GG", "MBIC", "EIMSK", "GLTPPFPEWUYWHJBRNZYTGAQN", "K", "PPFP", "QNTBSYEHSJX", "GLT", "F", "MI", "MSK", "YEHSJ", "RY", "HWYUWEP", "SU", "JXSA", "SAGGOKSM", "ND", "JXSA", "GLTPPFPEWUYWHJBRNZYTGA", "GTYZNRB", "EP", "OGG", "EIMSKOGGASXJSHEYSBTNQA", "EKJACIBM", "PPTL", "PTLG", "RBJHWYUW", "GGOKS", "GTYZNRBJ", "A", "EWUYWHJBRNZ", "TBS", "K", "YTGAQNTBSYEHS"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "FZLWNHRAKOCHMDVSHOKCSKOMQNXZCSKCZYSZTBMLYJJMPTEHGM";
    vector<string> words = {"M", "MDVSHOKCSKOMQ", "MPTEHGMMGHETPMJ", "MLYJJMPTEHGM", "OKCSKOMQNXZCSKC", "YLMBTZSYZCKSCZXNQMOKSC", "FZL", "LMBT", "MBTZSYZCKSCZXN", "J", "SCZXNQMOKSCKOHSVDMHCOKARHNWLZF", "TZSYZCKSCZXNQMOKSCKOHSVDMHCOKARHN", "NL", "ZYSZTBML", "KOCHMD", "PMJJYLMB", "KOHSVDMHCOK", "YL", "ER", "YJJMPTEHGM", "AA", "FZLWNHRA", "MGHETPMJJ", "QMOKSCKOHSVDMHCOKARHNW", "RK", "KSCKOHSVDMHCOKARHNWL", "YZ", "CK", "ARHNWLZF", "F", "FZLWNHRAKOCH", "FZLWNHRAKOCHMDVSH", "LZ", "MPTEHGMGHETPMJJY", "OKCSKOMQNXZCSKCZYSZTB", "WNHRAKOCHMDVSHOKCSKOMQNXZCSKCZYSZTBM", "NXZCSKCZYSZTBMLYJJ", "VSH", "XY", "GHE", "YLMBTZS", "ZSYZCKSCZXNQ", "FZLWNHRAKO", "ZF", "LYJJ", "CHMDVSHOKCSKOMQNX", "WL", "ZF"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "FZL WNHRAKOCHMDVSHOKCSKOMQNXZCSKCZYSZTBM LYJJ MPTEHGMMGHETPMJ J YL MBTZSYZCKSCZXN QMOKSCKOHSVDMHCOKARHNW LZ F";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "BICBKFDPHEGGCJVCYIFQFISDXYCWDMJFNXYMOLSWAZIASDEQTJ";
    vector<string> words = {"BICBKFDPHEGGCJVCYIFQFISDXYCW", "JFNXYMOLSWAZIASD", "TQEDSAIZA", "AZIASDEQTJJ", "HEGGCJVCY", "IZAWSLOMYXNFJMDW", "JCGGEHPDFKBCIB", "EDSAIZAWSLOMYX", "WSLOMY", "DM", "VC", "FK", "DFKBCIB", "QE", "ASDEQTJJTQ", "EQTJTQEDSAIZAWSLOMYXNFJMDWC", "MOLSWAZI", "CVJCGGEHPD", "BICBKFDPHEGGC", "G", "BICBKFDPHEGG", "YXDSIFQFIY", "CJVCYIFQFISDXYCWDMJFNXYMOLSW", "MYXNFJ", "TW", "KBCIB", "SA", "BCIB", "GEHPDFK", "IFQFISDXYCWD", "NFJMDWCYXDSIF", "CYXDSIFQFIYCVJC", "XY", "CVJCGGEHP", "DMJFNXYMOLSWAZIASDEQTJTQED", "MDWCYXDSIFQFIYCVJCGGEHPDF", "NFJMD", "SIFQFIY", "QF", "IYCV", "FW", "DSAIZAWSLO", "WCYXD", "BCIB", "BICBKFDPHEGGCJVCYIFQFISDXYCWDMJFN", "EQTJJTQE", "YIFQFISDXYCWD"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "BICBKFDPHEGGCJVCYIFQFISDXYCW DM JFNXYMOLSWAZIASD EQTJJTQE DSAIZAWSLO MYXNFJ MDWCYXDSIFQFIYCVJCGGEHPDF KBCIB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "ZPXNFRBOHCTUMFTDUPROWYCBSBMTASSXHBKPAZJTJYMUGBWIPP";
    vector<string> words = {"GB", "PZ", "SSAT", "X", "XNFRBOHCTUM", "SBMTASSXHBKPAZJTJYM", "T", "BKPAZ", "JYMUGBWIPPPPIWBGUMYJTJZAPKBHX", "SATMBSBCYWORPUDTFMUTCHOBRFNX", "SBCY", "TASSXHBKPAZ", "APKBHX", "SATMBSB", "WORPUDTFMUTC", "XL", "ZPXNFRBOHC", "CYWORPUDTFMUTCHOB", "ZP", "IPPPPIWBGUMYJTJZAPKBHXS", "JTJYMUGBWIPPPIWBGUMYJTJ", "KPA", "HBKPAZJTJYMUGBWIPPPIW", "JTJYMU", "MFTDUPROWYCB", "WORPUDTFMUTCHOBRFNXPZ", "ZJ", "EW", "DUPROWYCBSBM", "H", "OL", "SG", "BMTASSX", "UGBWIPPPPIWBGUMYJTJZ", "ZPXNFRBOHCTUMFTDUPROWYCBSBMTASSXH", "BGU", "FTDUPROWYCBS", "MYJTJZAPKBHXS", "TUMFT", "BU", "ZAPKBHXS", "RFNXPZ", "TFMUTCHOBRFNXPZ", "W", "NFRBOHCTU", "ZP"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZP XNFRBOHCTUM FTDUPROWYCBS BMTASSX H BKPAZ JTJYMU GB W IPPPPIWBGUMYJTJZAPKBHXS SATMBSB CYWORPUDTFMUTCHOB RFNXPZ";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "XWSZADZMIBFHXCQDQVDLNOLZOEWQXXAPBFWRMNZQSYPOUZNALU";
    vector<string> words = {"QY", "NALUULANZ", "NZQ", "X", "YO", "NMRWFBPAX", "PO", "PY", "QXXAPBFWRMNZQSY", "UZNALUULANZUOP", "XWSZADZMIBFHXCQDQVDLNOLZOEWQXX", "XXQW", "QWEOZLONLDVQDQCXHFBIMZDAZ", "SYPOUZNALULANZUOPYSQZNMRWFBPAXX", "LNOLZOEWQ", "M", "ZNALULANZUO", "APBFWRMNZQSYPOU", "LDVQDQCXHFBIMZDAZSW", "XQWEOZLONLDVQDQCXHFBIMZDAZSWX", "JS", "MRW", "SQZNMRWFBPAXXQWEOZ", "SWX", "UOPYSQZ", "BFHXCQDQVDLNOLZOEWQXXAPB", "VQDQ", "WZ", "XWSZADZMIBFHXCQDQVDLNOLZOEW", "YSQZN", "I", "SZADZMI", "SZADZMIBFHXCQDQVD", "W", "X", "XXQWEOZLON", "WRM", "B", "QR", "XXAPBFWRMNZQSYPOUZNALUULANZUOPYS", "DVQDQCXHFB", "FW", "NZQSYPOUZ", "QZNMRWFBPA", "MZDAZSWX", "F", "FBPA", "RM", "XWSZADZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "X W SZADZMI BFHXCQDQVDLNOLZOEWQXXAPB F W RM NZQ SYPOUZNALULANZUOPYSQZNMRWFBPAXX QWEOZLONLDVQDQCXHFBIMZDAZ SWX";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "GAIAWYKOSDZDCNXBGEIFRWLJHCEGLFBXISGYRHWAKBCVICFOLT";
    vector<string> words = {"G", "GAIAWYKOSDZDCNXBGEIFRWLJ", "GAI", "KBCVICFOLTLOFCIVCBKAWHRYGSIXBFLGECHJLWRF", "KOS", "LY", "LJ", "GA", "GLFBXISGYRHWAKBCVICFOL", "IEGBXNC", "BCVICF", "GBXNCDZDSOKYW", "XBFLGECHJ", "IAWY", "AIAG", "HWAKB", "H", "DZDCNXBGE", "DZDSOKYWAIAG", "VCBKAWHRYGSIXB", "LWRFIE", "CVICFOLTT", "JLWRFIEGBXNCDZDSOKYW", "FBXISGY", "EIFRWLJHCEGLFBXISGYRHWAK", "SGYRHWAKBCVICFO", "AWHRYGSI", "DZDSOKYWAIAG", "E", "IFRWLJHCEGLFBXI", "AIAG", "QI", "IFRWLJHCEGL", "KOSDZDCNXBG", "YP", "AWY", "BFLGEC", "HCE", "GAIAWYKOSDZ", "OLTTLOFCIVCBKAWHRYGSIX", "AWYKOSDZDCNXBG", "DCNXBGEIFRW", "SB", "LTTLOFCI", "RHWA", "TTLOFCIVCBK", "FLGECHJLWRFIEGBXNCDZDSOKYWAIA", "XN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "GA IAWY KOS DZDCNXBGE IFRWLJHCEGL FBXISGY RHWA KBCVICFOLTLOFCIVCBKAWHRYGSIXBFLGECHJLWRF IEGBXNC DZDSOKYWAIAG";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "OEXBSTWRDETAHZDYWNMYVELSABMVYNBFOFQFVAUKBEPBVFWCKR";
    vector<string> words = {"OEXBSTWRDE", "UAVFQFO", "BNYVMBASL", "ELSABMVYNBFOFQFVAUKBEPBVFWCKRKCWFVBPEB", "WNMYVELS", "NBFOFQF", "VYMNWYDZHATEDRWT", "VYNBFOFQFVAUKBEPBVFWCKRRKCWFV", "DYWNMYVELS", "ABMVY", "QFOFBNYVM", "AVFQFOFBNYVMBASLEVYMNWYDZHATED", "BASLEVY", "PEBK", "TEDRWT", "VFWCKRRKCWFVBPEBKUA", "OEXB", "BASLE", "PI", "MNWYDZHATEDRWTSBXEO", "OEXBSTWRDETAHZ", "F", "KUAV", "VAUKBEPBVFWCKRKCWFVBPEBKUAVFQFO", "SZ", "EVYMNWYDZHA", "F", "RWTSBX", "LL", "SBXEO", "YWNMYVELSABMVYNBFOFQ", "BPEBKU", "ABM", "FBNYV", "MYV", "VF", "M", "DV", "STWRDETAHZDY", "LSABMVYNBFOFQFVAUKBEPB", "OEXBSTWRDE", "OEXBSTWRDETAHZDYWNMYV", "QFOFBNYVMBASLEVYMNW", "SBXEO", "TAHZD", "YDZHATED", "TAHZDYWN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "OEXB STWRDETAHZDY WNMYVELS ABMVY NBFOFQF VAUKBEPBVFWCKRKCWFVBPEBKUAVFQFO F BNYVMBASL EVYMNWYDZHA TEDRWT SBXEO";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "WINDOOHTNGNWMLJVMVRSAMLCTATLMVCNVSZMAURUSHCHIIOQKP";
    vector<string> words = {"WINDOOHTNGNWMLJVMVRSAML", "VSZMAURUSHCHIIOQKPKQO", "LMWNG", "TLMVCNVS", "WMLJV", "ZMAURUSHCHIIOQKPK", "OODN", "TATCLMASRVMVJL", "CTATLMVCNVSZMAURUSHCHI", "R", "SU", "QOIIHCH", "IOQKPKQOIIHCH", "VMLTATCL", "OH", "UAMZSVNCVML", "IO", "HI", "NIW", "NTHOOD", "WINDO", "OQKPKQOIIHC", "JJ", "WINDOOHTN", "LJVMVRSAMLCTATLMVCN", "N", "NGNTH", "IW", "YD", "HII", "XN", "VMVRSAMLCTA", "WMLJVMVRSAMLCTATLMVCNVSZMA", "TNGN", "YA", "GNWM", "HSUR", "IIHCHSUR", "UAMZSVNCVMLTATCLMASRVMVJLMW", "WINDOOHTNG", "UAMZSVNC", "JLMWN", "MWNGNTHOODNIW", "GH", "MVRSAMLCTATLMVCNVSZMAURUSHC", "QKPPKQOIIHCHSURUAMZSVNCVMLTATCLMASRVMV", "SURUAMZSVNCVMLTATCLMASRVMVJ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "WINDO OH TNGN WMLJV MVRSAMLCTATLMVCNVSZMAURUSHC HI IOQKPKQOIIHCH SU R UAMZSVNCVML TATCLMASRVMVJL MWNGNTHOODNIW";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "OAVNILFYHLVVRXJQUJITZITKHXEFPIZUYQNLRNDRWNZKODOKMI";
    vector<string> words = {"IZUYQNLRNDRWN", "P", "TIZTIJ", "ZITKHXEF", "HXEFPIZ", "TZITK", "VNILFYH", "OAVNILFYHLVVRXJQUJIT", "KODOKMIIMKODOKZN", "NZKODO", "OA", "TIJUQJXRVVLHYFLINVAO", "RU", "VNILFYHLVVRXJQUJIT", "LN", "UYQ", "ZKODOKMIIMKODOKZNWRDNRLNQYUZIPFEXH", "JW", "PF", "RVVLHYF", "LINVAO", "OAVNIL", "FYHLVVRXJQUJI", "SE", "NLRN", "FEXHKTIZTIJUQJX", "DRWN", "XRVVLHYFLINVAO", "QYU", "HKTIZTIJUQJXRVVLHYFLINVAO", "MKODOKZNWRDNR", "IP", "LVVRXJQUJ", "OAVNILFYHLVVRXJQUJITZITKHXEFPIZUYQNLRNDRWNZKODOKMI", "OA", "ZITKHXEFPIZUYQNLRNDRW", "EXHKTIZ", "IIMKODOKZNWRDN", "NVAO", "RLNQYUZIPFEX", "KTIZTIJUQJXRVVLHYFLI", "PF", "Z", "ZUYQNLRNDRWNZKODOKMIIMKODOKZNWRDNRLNQYUZIP", "KY", "WRDNRLNQYUZI"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "OA VNILFYHLVVRXJQUJIT ZITKHXEF P IZUYQNLRNDRWN Z KODOKMIIMKODOKZN WRDNRLNQYUZI P FEXHKTIZTIJUQJX RVVLHYF LINVAO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "AMRCFBEKVXRLMOBDRBKLZNHPRMMJAAFHAGWUTSCOQAPMSIOXVM";
    vector<string> words = {"FAAJMMRP", "PHNZLKBR", "PR", "RPHNZL", "TUWGAH", "XVKEBFCRMA", "AAJMM", "PMS", "YR", "MLR", "RCFBEK", "HNZLKB", "PA", "AMRCFBEKVXRLMOBD", "LMOBD", "VXRLMOBDRBKL", "GWUTSCOQAPMSIOXVMMVXOISMPAQOCSTUWGAHF", "GG", "SMPAQ", "MRCFBE", "RBK", "AM", "AMRCFBEKVXR", "DBOMLRXVKEBFCRMA", "KVXRLMOBDRBKLZNHPRMM", "XVKEBFCR", "JAAFHA", "IOXVMMV", "ZNHPRMMJAAFHAGWUTSCOQAP", "AE", "RBKLZNHPRMMJAAFHAGWUTSCOQAPMSIOXVMMVXOISM", "RA", "MA", "OCSTUWGAH", "PHNZLKBRDBO", "AMRCFBEKVXRLMOBDRBKLZNH", "OISMPAQOCSTUWGAHFAAJMMR", "RDBOMLR", "XOI", "MMJAAFHAGWUTSCOQA", "RO", "VX", "A", "FAAJMMR", "S", "KBRDBOMLRXVKE", "MSIOXVMMVXOISMPAQOCSTUWGAHFAAJMMR"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AM RCFBEK VXRLMOBDRBKL ZNHPRMMJAAFHAGWUTSCOQAP MSIOXVMMVXOISMPAQOCSTUWGAHFAAJMMR PHNZLKBR DBOMLRXVKEBFCRMA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "LYNRBQCWIJOCHFTRNTMDZTVUAATNKRMUCWFCWWCMKMFOWNPKFR";
    vector<string> words = {"PNWOF", "TVUAAT", "MKMCW", "MTNRTFH", "WCFWCUMRKNTAAUVTZDMTNRTFHCOJIWCQ", "AATNKRMUC", "BRNYL", "CO", "JY", "MRKN", "NPK", "OCHFTRNTMDZTVUAATNKRMU", "TA", "TZDMTNRTFHCOJIW", "W", "NRBQCWIJOCHFTRNTMDZ", "CQBRNY", "FKPNWOFMKMCWWCFWCUMRKNTAAUVTZDM", "FTRNTMDZTVUAATNKRMU", "L", "LYNRBQCWIJOCHFTRNTMDZ", "WNPKFRFK", "FTRNTMDZTVU", "LYNRB", "LYNRBQCW", "GV", "PR", "L", "MTNRTFHCOJIWCQBRNY", "WNPKFRR", "CWWCFWCUMRKNTAAUV", "TNRTFHCOJIWC", "FRRFKPNWOFMKMCWWCFWCUMRKNTAAUVTZD", "WFCWWCMKM", "IJ", "LY", "UN", "LR", "CWFCWWCMKMFO", "JIWCQBRNYL", "FO", "OCH", "AUVTZD", "PKFRFKPNWOFMKM", "NKRMUCWFCWWCMKMFOWNPKFRRFKPNWOFMKMC", "TVUAATNKRMUCWFCWWCMKMFOWN", "WWCFWCU"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "LY NRBQCWIJOCHFTRNTMDZ TVUAAT NKRMUCWFCWWCMKMFOWNPKFRRFKPNWOFMKMC W WCFWCUMRKNTAAUVTZDMTNRTFHCOJIWCQ BRNYL";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "EZXIYUBBCOPHHGHLYEKRQTLPRWZVPBESVSMNUVGKJTBHIVGVJH";
    vector<string> words = {"EZXIYUBBC", "QRKEYLHGHHP", "MSVSEBPVZWRP", "UNMSVS", "VGVJ", "ESVSMN", "ZA", "OCBBUYIXZE", "BTJKGV", "GHLYEKRQTLPRWZVPBESV", "JHJVGVIH", "PLTQRKEYLHGHHPO", "TD", "LT", "HHJVGVIHBTJKGVUN", "LA", "EZ", "GKJTBHIVGVJHJV", "IXZE", "HPOCBBUYIXZE", "RWZVPBESVSMNUVGKJTBHI", "BTJKGVUNMSVSEBPVZ", "GVIHBTJKGVUNMSVSEBPVZWR", "UV", "CBBUYIXZE", "U", "WR", "V", "GKJT", "EZXIYUBBCOPHHGHLYEKRQ", "LTQRKEYLHGHHP", "EZXIYUBBC", "SV", "EYLHGH", "PB", "EZXIYUBBCOPHH", "NUVGKJTBHIVGV", "TLPRWZVPBESVSM", "X", "BHIVGVJHJVGVIHBTJKGV", "EBPVZWRP", "SMNUVGKJTBHIVGVJHHJVGVIH", "OCBBUYIXZE", "TLP", "GHLYEKRQ", "OPHHGHLYEKRQTLPRWZVPB", "FO", "OPHHGHLYEKRQ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "EZXIYUBBC OPHHGHLYEKRQ TLP RWZVPBESVSMNUVGKJTBHI VGVJ HHJVGVIHBTJKGVUN MSVSEBPVZWRP LT QRKEYLHGHHP OCBBUYIXZE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "FOZITAMKGXEOHHQCAUUODGJIDOIHJQTPKZYRDUYTVCIXNVHMPT";
    vector<string> words = {"ZITAMKGXEO", "YUDRYZKPTQJHIODIJGDOUUACQHHOEXGKMATIZOF", "KQ", "RI", "JIDOIHJQTPKZYRD", "F", "FOZIT", "JI", "OZITAMKGX", "OZITAMKGXEOHHQCAUUODGJIDO", "EOHHQCAUUOD", "F", "AMKG", "ZI", "EOHHQCAUUODGJ", "IHJQT", "IHJQTPKZYRDUYT", "KPTQJHIODIJGDOUUACQHHOEXGKM", "GI", "ATIZ", "WZ", "PKZYRDUYTVCIXNVHMPTTPMH", "TAMKGXEOHHQCAU", "VCIXNVHMPTPM", "KZYRDU", "O", "RDU", "CQ", "HI", "UODGJIDOIHJQTP", "DOIHJQTPKZY", "FO", "LP", "VTYUDRYZKPTQJHIODIJGDOUU", "YTVCIXNVHMPTPMHVNXIC", "A", "CQHHOEXGKMATIZOF", "F", "HHQCAUUODG", "VNXI", "X", "YTVCIXN", "UYTVCIXNVHMPTTPMHVNXICVTYUDRYZKPTQJH", "OF", "FO", "ODIJGDOUUA", "CVT", "G", "VHMPTPMHVNXICVTYUDRYZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "F O ZI TAMKGXEOHHQCAU UODGJIDOIHJQTP KZYRDU YTVCIXN VHMPTPMHVNXICVTYUDRYZ KPTQJHIODIJGDOUUACQHHOEXGKM ATIZ O F";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "RAWXQQLWTIAFCYIPXLWGDMXNNDPMTIZDMPGAGYYRPPXYRAHZYX";
    vector<string> words = {"G", "TMPDNN", "ARYXP", "GYYRPPXYRAHZYXY", "RAWXQQLWTIAFCYIPXLWG", "IYCFA", "PA", "YZHARYXPPRYYGA", "JB", "FC", "PMD", "GPMD", "YXXYZ", "GWLXPIYCFAITWLQQXWAR", "PRYYGA", "Y", "Z", "HARYXPPRYYGAGPMDZITMPDN", "LQQXWAR", "PXLWGDMXNNDP", "RAWXQQLWTIAFCYIPXLWGDMXNNDP", "DMXNNDP", "MTIZDMPGA", "ZITM", "GYYRPP", "ITWLQQXWAR", "PPXYRAH", "AWXQQLWTIAFCYIPXLWGDMXNNDPMTIZ", "D", "GYYRPPXYRAHZYXXYZHARYXPPRYYGAGPM", "MTIZDMPGAG", "ITMPDNNXMDGW", "RM", "MTIZDMPGA", "YR", "LWGDMXNNDPMTIZDMPGA", "RAWXQQLWTIAFCYI", "PN", "ZH", "AGYYRPPXYRAHZYX", "PDNNXMDGWLXPIYCFAITWLQQXWAR", "PIYCFAITWLQQXWAR", "DZ", "NXMDGWLX", "LXP", "YZHARYXPPR", "R", "YYGAGPMDZI"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "RAWXQQLWTIAFCYI PXLWGDMXNNDP MTIZDMPGA G Y Y R PPXYRAH Z YXXYZ HARYXPPRYYGAGPMDZITMPDN NXMDGWLX PIYCFAITWLQQXWAR";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "EKJFVGGSDDSJMIJMPFPXGSOCMSDNMUKVPDPMAABYCVKBZUBJTG";
    vector<string> words = {"FV", "YCVK", "G", "SOCMSD", "IJ", "VKBZ", "EI", "V", "KJFVGGSDDSJMIJMP", "SDDSJM", "GGS", "JMIJ", "NQ", "EKJ", "J", "TJBUZ", "EK", "MPFPXGSOCMSDNMUKV", "PDPMAAB", "F", "PDPMA", "YC", "E", "BZUBJ", "TG", "I", "WQ", "VKBZUBJTGG", "FPXGSOCMSD", "C", "EKJFVGGSDDSJM", "MP", "ABY", "VG", "FPXGSOCMSDNMUK", "CS"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "FPIXOFQAHLNKSVEEPYRGBAEHWMRKEMDBPMHECTCHSESBZGKIXU";
    vector<string> words = {"VEEP", "EEP", "PYRGBAEHWMRK", "PIXOF", "OD", "XO", "MRK", "N", "PI", "R", "NKS", "NB", "M", "KC", "S", "PI", "F", "QAHL", "OL", "XOFQA", "YRGBAEHWMR", "QA", "YRG", "VE", "E", "H", "QAHLNKS", "ZK", "V", "FPIXO", "BAEHW", "F", "F", "K", "KSVEEPYRGBAEHW"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "QTZJSEHAEKNRHIJBIJKMJNIVUSKHWUESKXKZWXURDJDVPGULKI";
    vector<string> words = {"EHAEKNRH", "DVP", "EAHESJZTQ", "XKZ", "GULK", "NKEAHESJZTQ", "IJBI", "I", "IJB", "QTZ", "EK", "X", "KZWX", "ULKIIKLUGP", "JSEHA", "QTZJ", "JDRU", "HKS", "S", "HN", "NIVUSKHWUESKX", "URDJDVP", "IKLUGPVDJDRUX", "WXURDJ", "WZK", "I", "SKHWUESK", "IJKMJ", "INJMKJIBJIHRNK", "EUWHKSUV", "JNIVU", "BJ", "H", "KS", "VD", "G", "IHR", "JKM", "NR", "SEUW", "UVINJMKJ", "X"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "QTZ JSEHA EK NR H IJB I JKM JNIVU SKHWUESK X KZWX URDJDVP G ULKIIKLUGP VD JDRU X WZK X KS EUWHKSUV INJMKJIBJIHRNK EAHESJZTQ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "EDAFMHSVVFSVXPYFJODPNKCHSYWLCXVURSYXPGEAEFYDEZMGBV";
    vector<string> words = {"L", "NK", "J", "JODP", "MZ", "RSYXPGEAEFYDEZMGB", "WLCXVU", "YFEAE", "VVBGMZEDYFEAEGPXYS", "CH", "YF", "G", "VVF", "EDAF", "HS", "RUVXC", "SVXP", "ZO", "SHMFA", "WYSHCKNPDOJFYPXVSFV", "M", "NKCHSYW", "SY", "SYXP", "FMHS", "GPX", "SVXPY", "VV", "FADE", "F", "JFYPXVSFVV", "DE", "ED", "CX", "EAEFYDEZMGB", "EDA", "VVBG", "WYSHC", "YSRUVXCL", "L", "M", "ODP", "VSH", "R", "F", "VU"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "EDA F M HS VV F SVXP YF J ODP NK CH SY WLCXVU R SYXP G EAEFYDEZMGB VVBG MZ ED YFEAE GPX YSRUVXCL WYSHCKNPDOJFYPXVSFV VSH M FADE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "GSCEHNDEZNHDXRHWMENLAYAAERFXWNKRHZJBYFXKQPFSJYMXHH";
    vector<string> words = {"G", "D", "ND", "EDNH", "SCEH", "YJSFP", "Z", "H", "J", "XFR", "YALNEMWHRXD", "YM", "XHHH", "ECSG", "N", "ND", "GSCEH", "K", "EZ", "JBYFXKQPF", "XRHWMENLAYAA", "HNZEDNHECSG", "MXHHHHXM", "ERFXWNKR", "ERFXWNKRH", "XMYJSFP", "XRHWMENL", "QKXFYB", "XFY", "EZ", "HD", "AYA", "NHD", "A", "J", "BJZHRKNW", "JY", "BYFXKQ", "EAA", "RKNW", "ZH", "HNZ", "HZJ", "OV", "PFS", "S", "XFREAAYALNEMWHRX"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "G SCEH N D EZ N H D XRHWMENL AYA A ERFXWNKR H Z J BYFXKQ PFS J YM XHHH H XMYJSFP QKXFYB J Z H RKNW XFR EAA YALNEMWHRXD H N Z EDNH ECSG";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "OWSFDIOGJPBZCCNTCMSFEGZKXQNNKVKZNMTIDZUUHRRYXBELHF";
    vector<string> words = {"N", "WO", "NNKVKZN", "HL", "FI", "O", "S", "SMC", "GEFSMCT", "ITMNZ", "O", "FSW", "ID", "ID", "OWSFDI", "HRR", "VK", "ZBPJ", "N", "G", "IDF", "GJPBZCCNT", "NCCZBPJGO", "NQXKZGEF", "O", "MTIDZU", "U", "CMSFEG", "HRRYXBELHFF", "UU", "YXB", "ZKXQNNKVKZNMT", "RHU", "UZDITMN", "Z", "Z", "SFEGZ", "TNCC", "K", "QXK", "EBXYR", "ELHFFHLEBXYRRHUUZD", "WSFDIO", "ZKVKN", "KXQ", "OGJPBZCCNTC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "O WSFDIO GJPBZCCNT CMSFEG Z KXQ N N K VK Z N MTIDZU U HRR YXB ELHFFHLEBXYRRHUUZD ITMNZ K VK N N QXK Z GEFSMCT NCCZBPJGO ID FSW O";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    vector<string> words = {"R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R", "R"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R R";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "STRAWNOTOOSTUPIDAF";
    vector<string> words = {"WARTS", "I", "TOO", "A", "FAD", "STUPID", "STRAW", "PUT", "NO", "ON", "SOOT"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "STRAW NO TOO STUPID A FAD I PUT SOOT ON WARTS";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "AAAABAABA";
    vector<string> words = {"AA", "AAB", "BAA", "BAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA BAA BAA BAA BAA AA";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "AAAAA";
    vector<string> words = {"AA", "A", "AAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBC";
    vector<string> words = {"BBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBB", "BBBB", "BC", "BBC", "BBBC", "BBBBC", "BBBBBC", "BBBBBBC", "BBBBBBBC", "BB", "BBBBBBBBBBBBBBC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "AABAABA";
    vector<string> words = {"AA", "AAB", "BAA", "BAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA BAA BAA BAA BAA";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "AMANAPLANAC";
    vector<string> words = {"A", "CANAL", "MAN", "PANAMA", "PLAN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A MAN A PLAN A CANAL PANAMA";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "AAAA";
    vector<string> words = {"AAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "AC";
    vector<string> words = {"A", "ACA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ACA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    vector<string> words = {"A", "B", "AB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A B A";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "STRAWNOTOOSTUPIDAF";
    vector<string> words = {"WARTS", "I", "TO", "A", "FAD", "STUPID", "STRAW", "PUT", "NO", "ON", "SOOT", "O"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "STRAW NO TO O STUPID A FAD I PUT SOOT ON WARTS";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BB", "B"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A B A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "ABABABABABABABABABABABABABABABABABABABABABABABABAD";
    vector<string> words = {"ABA", "BAB", "AB", "BA", "BBB", "AAA", "A", "B", "ABAB", "BABA", "ABABAB", "BABABA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "CBABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "AA", "AAA", "AAAA", "CBA", "ABC", "BA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "AB";
    vector<string> words = {"ABBA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "AB";
    vector<string> words = {"ABBA", "ABA", "AB", "BA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB BA";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "B"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRSTUWXYZ";
    vector<string> words = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "W", "X", "Y", "Z", "ZZ", "PQ", "AC", "GJ", "BDF", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A B C D E F G H I J K L M N O P Q R S T U W X Y Z A B C D E F G H I J K L M N O P Q R S T U W X Y Z Y X W U T S R Q P O N M L K J I H G F E D C B A Z Y X W U T S R Q P O N M L K J I H G F E D C B A";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "CAZ";
    vector<string> words = {"CAZAC", "CAZZAC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "CAZAC";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "AA";
    vector<string> words = {"A", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAA", "A", "AA", "AAA", "AAAA", "AAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "AAA";
    vector<string> words = {"AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA AA";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AA", "AAAAA", "AAAAA", "AAAAA", "AAAA", "AAA", "AAAAA", "AAAAA", "A", "AAAAA", "A", "A", "AAAAA", "AAAA", "A", "A", "AA", "AAAA", "A", "A", "AAAAA", "AA", "AA", "AAAA", "AAAAA", "AAAAA", "AAAAA", "A", "AAA", "AAAA", "AAAAA", "A", "A", "AAA", "AAAAA", "A", "AA", "AAAA", "AAAA", "A", "AAAA", "AAAA", "AAA", "AA", "AAAA", "A", "AAAAA", "AAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "AZBZA";
    vector<string> words = {"A", "AZBZAAZBZA", "ZBZAZBZA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A ZBZAZBZA";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "ABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDEABCDE";
    vector<string> words = {"ABCDE", "ABCDE", "ABCDE", "ABCDEABCDE", "A", "B", "C", "D", "E"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A B C D E A B C D E A B C D E A B C D E A B C D E A B C D E A B C D E A B C D E A B C D E A B C D E D C B A E D C B A E D C B A E D C B A E D C B A E D C B A E D C B A E D C B A E D C B A E D C B A";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "AAAA";
    vector<string> words = {"AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA AA AA";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "ABC";
    vector<string> words = {"A", "BC", "ABC", "CBA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A BC CBA";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "ABC";
    vector<string> words = {"A", "B", "BCB", "CC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A B CC B A";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"AA", "B", "AAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA B AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    vector<string> words = {"A", "AB", "ABA", "ABAB", "ABABA", "ABABAB", "ABABABA", "ABABABAB", "ABABABABA", "ABABABABAB", "ABABABABABA", "ABABABABABAB", "ABABABABABABA", "ABABABABABABAB", "ABABABABABABABA", "ABABABABABABABAB", "ABABABABABABABABA", "ABABABABABABABABAB", "ABABABABABABABABABA", "ABABABABABABABABABAB", "ABABABABABABABABABABA", "ABABABABABABABABABABAB", "ABABABABABABABABABABABA", "ABABABABABABABABABABABAB", "ABABABABABABABABABABABABA", "ABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABA", "ABABABABABABABABABABABABABABABABABABABABABABABABAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB AB A";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "AACARBUILDBARTENDBUILDERBUILDCARAACARBUILDBARTEND";
    vector<string> words = {"AA", "A", "CAR", "BUILD", "BUILDER", "BA", "AA", "BARTEND", "DLIUB", "REDLIUB", "NET", "EAB", "AAA", "AAA", "AAW", "AAF", "BAR", "BART", "BARE", "BARR", "BART", "BAREE", "BAREEEEEE", "BAR", "AAAAA", "AAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAABBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BAE", "BART", "BUILDEE", "BUN", "BARE", "NJ", "SF", "DF", "DFFF", "DDDDDD", "EEEEE", "SSSSSSSSSSSSSSSSSSS", "FRE", "DS", "SSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AA", "A", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "ABC";
    vector<string> words = {"ABCBA", "ABC", "CBA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC CBA";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "ABCD";
    vector<string> words = {"AB", "ABC", "DCBA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC DCBA";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAA", "AAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    vector<string> words = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "ABABABABABABABABABABABABABABABABABABABABABABABABAC";
    vector<string> words = {"A", "B", "AB", "ABA", "BAB", "ABAB", "BABA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "CB";
    vector<string> words = {"CBBC", "CBC"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "CBBC";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AAAAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAA", "AAAAAA", "AAAAA", "AAAA", "AAA", "AA", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string text = "AN";
    vector<string> words = {"A", "AN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AN A";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string text = "ABCDEFGHIJK";
    vector<string> words = {"ABC", "ABCD", "DEFGH", "EFGHIJK", "CBA", "DCBA", "KJIHGFE"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD EFGHIJK KJIHGFE DCBA";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string text = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    vector<string> words = {"ZZ", "ZZZZ", "ZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZ"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ ZZ";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAA", "A", "AA", "AAA", "AAAA", "AAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string text = "ACX";
    vector<string> words = {"ACXCA", "A", "CXXCA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A CXXCA";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string text = "AAP";
    vector<string> words = {"A", "AP"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A AP A A";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string text = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXZ";
    vector<string> words = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "XXXXXXX", "XXXXXXXX", "XXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string text = "ABCD";
    vector<string> words = {"DDCBA", "DCBA", "ABC", "A", "BCD"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A BCD DCBA";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string text = "AAAANNNNAAAAVVVVOOOOLLLLIIIIMMMM";
    vector<string> words = {"AAAANNNNAAAA", "VVV", "VOOOOLLLLIII", "I", "MMMMIIIILLLLOOOO", "VVVV", "MAN", "PANAMA", "PLAN", "AAANNNAAAVVV", "MMMIIILLLOOOVVVAA", "A", "MSDLFGMSD", "SDGDS", "M", "O", "V"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAANNNNAAAA V V V VOOOOLLLLIII I M M M M MMMMIIIILLLLOOOO V V V V AAAANNNNAAAA";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string text = "ABC";
    vector<string> words = {"AB", "C", "BA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB C BA";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA AA";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAA", "AAA", "AAAAA", "A", "A", "AAAA", "AAAAA", "AAAAA", "AAAA", "AAAA", "AAAAAAA", "AAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "A", "A", "A", "AA", "AAAAA", "AAAAAA", "AAAAA", "AAAA", "AAAA", "AA", "AAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"AA", "B", "AAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string text = "ZYAAB";
    vector<string> words = {"Z", "YAABAA", "ZY", "YZ", "A", "B"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "Z YAABAA YZ";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AA", "A", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA", "AAAAAA", "AAA", "AAA", "AAA", "AAA", "AAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA AAA";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string text = "ZAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"ZA", "A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVW";
    vector<string> words = {"AB", "CD", "DE", "EF", "FG", "GI", "IH", "JK", "KL", "LM", "MN", "NO", "OP", "PQ", "QR", "RS", "ST", "TV", "VW", "XY", "Z", "A", "BA", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB C D E F G H I J K L M N O P Q R S T U V W X Y Z AB C D E F G H I J K L M N O P Q R S T U V W V U T S R Q P O N M L K J I H G F E D C BA Z Y X W V U T S R Q P O N M L K J I H G F E D C BA";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string text = "BA";
    vector<string> words = {"B", "AB", "BAAB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "B AB";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAA", "AAAAAA", "AAAAA", "AAAA", "AAA", "AA", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAUUUUUUUUAAAA";
    vector<string> words = {"UUUUUUUUUUUU", "UUUUUUUUUUUUUUUUU", "UUUUUUUUU", "UUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "HAPPY", "BDAY", "GDFGDGDGDG", "DGDGDGDGDG", "SDGDGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "DGGGGGGGGGGGGGGG", "ASSSSSSSSSS", "SSSSSSSSSSFD", "DDDDDDDDD", "FFFFFFFFFGGGGGGG", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAA", "A", "A", "A", "A", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string text = "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY";
    vector<string> words = {"ABCDEFGHIJKLMNOPQRSTUVWXY", "YXWVUTSRQPONMLKJIHGFEDCB", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXY ABCDEFGHIJKLMNOPQRSTUVWXY YXWVUTSRQPONMLKJIHGFEDCB A YXWVUTSRQPONMLKJIHGFEDCB A";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string text = "ALAN";
    vector<string> words = {"ALA", "A", "ALAN"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "ALAN ALA";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string text = "AABCA";
    vector<string> words = {"A", "ABC", "CBA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A ABC A A CBA A";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string text = "A";
    vector<string> words = {"AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string text = "AAB";
    vector<string> words = {"AAB", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAB A A";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string text = "ABC";
    vector<string> words = {"A", "AB", "BA", "C"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB C BA";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"ACXCA", "A", "CXXCA", "AA", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string text = "AB";
    vector<string> words = {"A", "AB"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AB A";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAZ";
    vector<string> words = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string text = "AAX";
    vector<string> words = {"A", "AAX", "AA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAX A A";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ";
    vector<string> words = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vector<string> words = {"A", "A", "A", "A", "A", "A"};
    Palindromist* pObj = new Palindromist();
    clock_t start = clock();
    string result = pObj->palindrome(text, words);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=9815&pm=6115
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef vector<string> vs; 
 
#define Size(x) (int(x.size())) 
 
#line 3 "Palindromist.cc" 
 
string splittext(string s, vs words) { 
  string splits[200]; 
  int N = Size(s); 
  splits[N] = ""; 
  for(int k=N-1; k>=0; k--) { 
    splits[k] = "a"; 
    for(int t=0; t<Size(words); t++) 
      if(s.substr(k, Size(words[t])) == words[t] 
      && splits[k+Size(words[t])] != "a") { 
      string z = " " + words[t] + splits[k+Size(words[t])]; 
      if(z < splits[k]) splits[k] = z; 
      } 
//  printf("%s -> %s\n", s.c_str()+k, splits[k].c_str()); 
    } 
  return splits[0].substr(1); 
  } 
 
class Palindromist { 
  public: 
  string palindrome(string text, vector <string> words) { 
    // !FDI 
    string t; 
    for(int k=Size(text)-1; k>=0; k--) t += text[k]; 
    string z0 = splittext(text+t, words); 
    string z1 = splittext(text+t.substr(1), words); 
    if(z0 == "") return z1; 
    if(z1 == "") return z0; 
    if(z0<z1) return z0; 
    return z1; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/