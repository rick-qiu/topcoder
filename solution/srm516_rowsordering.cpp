/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11114
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

class RowsOrdering {
public:
    int order(vector<string> rows);
};

int RowsOrdering::order(vector<string> rows) {
    int ret;
    return ret;
}


int test0() {
    vector<string> rows = {"bb", "cb", "ca"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rows = {"abcd", "ABCD"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 127553;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rows = {"dolphinigle", "ivanmetelsk", "lympandaaaa"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 356186235;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rows = {"Example", "Problem"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 943877448;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rows = {"a", "b", "c", "d", "e", "f", "g"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rows = {"abcdefghijklmnoprqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rows = {"a", "a"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
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
    vector<string> rows = {"z"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rows = {"l", "l"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rows = {"i", "v", "f", "a", "X", "e", "C"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rows = {"e", "d", "l", "f", "w", "z", "v", "J", "M", "F", "Q", "l", "S", "D", "x", "Q", "y", "U", "D", "g", "S", "e", "o", "K", "t", "M", "e", "t", "C", "X", "R", "i", "N", "m", "k", "w", "d", "i", "g", "E", "B", "v", "y", "h", "D", "K", "s", "g", "A", "M"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 643;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rows = {"bm"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
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
    vector<string> rows = {"aI", "EA"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rows = {"Sg", "sr", "FW", "Nz", "Ap", "rx", "WC"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1078;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rows = {"AL", "vD", "XM", "UL", "rP", "rn", "Xf", "fQ", "bp", "Ns", "CJ", "sB", "Hm", "PC", "eO", "gO", "Ih", "br", "tE", "oU", "TG", "sV", "fL", "Vn", "ug", "QR", "OB", "Ke", "xy", "aI", "nW", "sb", "bS", "HS", "al", "fg", "VL", "sC", "zv", "Su", "se", "nr", "oC", "Dz", "iN", "pJ", "Bi", "SC", "Re", "NB"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 30513;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rows = {"ywt"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rows = {"sWS", "IIU"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 2553;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rows = {"cFX", "eSu", "Mwe", "upt", "Qla", "OGl", "XaJ"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 53578;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rows = {"oah", "EBj", "Kai", "nEt", "mnL", "VXg", "Cmt", "ypl", "TGX", "mAO", "KUA", "xQt", "kUr", "LEP", "srk", "QVb", "omh", "hLq", "qOx", "edO", "yva", "HOF", "GGl", "VBV", "PKj", "dXL", "KjM", "qsG", "LGM", "zIP", "asm", "sLf", "qjL", "Ioj", "zlE", "FPc", "BzS", "shc", "MXu", "WCy", "Akp", "EGs", "NNx", "TjM", "Moi", "cDg", "NyP", "EOq", "yuR", "uQJ"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1479834;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rows = {"gkRzjlb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rows = {"lVNeeXx", "fciMUmo"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 943877448;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rows = {"carpNGF", "BacScUW", "UNbrVTV", "eQseKXI", "cETkvBv", "CqMQKSt", "QIubeql"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 158926905;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rows = {"zMAzJwG", "Lobnfup", "iobxHaf", "sHQbWVV", "RBtMbBe", "ylfonev", "ActMUEj", "PksktPV", "fBzwIdC", "MQmAamX", "ACjKOjW", "AJXIMqy", "wMOTBlT", "AWNJKcB", "BzBWwKp", "vOvVQqD", "UOaLhep", "SzQfsVx", "kKWQmCO", "VwqzmeH", "NsKjzTT", "FWCijkK", "SJezNzl", "yOkeIQT", "cFjOQKI", "DoduudW", "CfJduIL", "gRFqUte", "WeMMeqA", "WNDDSDq", "vMdocWL", "LigRTyJ", "lFUqvdg", "TWUexTK", "kpqVawW", "dafCzrJ", "bEUtxoD", "cEENFki", "lPbXETM", "KVlxrLd", "niDIcBI", "VlBzFPo", "EoopMSd", "hPelgnw", "BPivUGW", "JTzgkRj", "ANThLGo", "GkPdnow", "pyRtXaG", "RlVeWwL"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 359298390;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rows = {"mCpSauuwoqEfbMMphDMzgsuaKRCGdcQFcDquzOxBnKhKGDyfMj"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rows = {"QXAQJulqygWLiACDyJPVEjXuVPbCwfHaUtaafgVpCjnWJRUUUW", "HoBiVDcMSWEAILhivRNAEcjwCCXITOwhMhcKzXOsJdFFNImPRB"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 151469568;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rows = {"jULCtRVyArdbscyljztuqADSlQtFSTUDAwbhujeqCPMzoFoxfS", "iOJUPyGBNpdIcgmUtDstlFLvfNQAPEnDmaTFiqRjSHxvsrjjLp", "jyRRGHxffbCAKijrJONVdoioWbpyyJMxDOyevsIzlvgTUzaNFD", "NQwcNklgEbTowCNIgTNKSBSvvfizBOtCEtCGpVdTrdeXWpCETq", "GFcJsPnPhNVjjcNNQNVLmuQmDBVJzziKmczUJQMgITzFFaWVnp", "IDykjooBzsXmMhJotwUmVLRqKXbogkVWnAgVqEQhonIFuPKfzh", "fTeQjNKHSbdccOODRwGocpGLBcdnmjEvkUBrHpdHFHAwQBjCHs"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 757993820;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rows = {"SbaTQEavtgIuheqIjqhyxAUGLzJxOXCjVyDTsgAUHAWBMuvxqI", "ofXKIbiqlIkgWqoWfGcsidtkgqDQpSkoQorAFUBUSVDkzWyyzc", "UimuGTlQDQWvfRSJslljEINitsaklHykOSDNDpUCgBqWudRtiL", "bExFnMKPvwdgQBEEGGfSCVCnTXJsUdcMMdrDoPsJdAUQcgWhNJ", "GRsspwlPDBpkoLBuJiUgFfKquVHorVerxtCjHQRLnjQJfHqXCl", "wEyiBSyWXPkhmunqBKdhzLoQexworJzIgUWJFNcAuEbDNJMxXL", "hlRVgJdjIVlMskUjqFGtdvoiIslqszkhJPMruAHgviIISmEJDd", "VaNsSJKJgiJOzhveeEdGtUWyqsEzVCBtiPqTadmXhEpLjdRFWb", "NdSmJLWLOxgJORfPtgUxlNrRfmgFvkWkeJUFqhzhyuvWkcuery", "RmotsgBueQBEdPbHUoAORsFPfiCnpCtuyOlzAAuLulBfqGqlUK", "DrXLxvSuvijgdczURgtnfjMDPgpMCbdxEteMHDKCtTvUcPHrEw", "qVSGXesHseRTnGpjRcqzJctgToLWLFQhaTAPULvfgpeSktFakE", "nssfokDGjbJQMyezWIEzHcwkXMxdfbmbgaHLjfrOvusclHCmjP", "JUtMwTpQdiKXFpluuXhVdivpjaULnPvVmFvTdgmUVkJrEJnynV", "hGxiBBRdINaMlUlApREVfgqJOKEQIHNzkSJwqbajzJTTatUOtz", "tvDhisrvBhjIQcjSmkVzIaKJdHfeuCsvLMpnrkzLwgaysiLAFn", "sKCDUXlNWmuSlPfUbiegHisoVfSLmPxMijqgxfOiBqEnWbBdQh", "QsNFhNyUTVOlTuTtgCDdneSXBPHJMoXeCrwCFqRbuBSDsexvug", "ljrOaFmSFFxMnGEkjkURbWRVKkQveraxFPkCoXwItJqMKrGEww", "SUJSAWkSQgdoJtWyGUPAOmcSwCpmbSHkcpNNoCGvWWiDPAmppG", "gqkPOTaoacCWHazuQWpzPwkjVsUaAKnuLMPhxzPPkNrewfsQhr", "kiGixtLzpcLdUefovLRDDxOfwcbBwPtyxyLPpbBTzrmhaPmXSf", "dsUTtEfPHhyTBKcpligcPhhdJQSuRoroeTkuMrqCwUiJGadKhr", "mDhKbjUkCBUDEqcVyDfdRtHzVlvGppSiIcBNfzpMNpfzGFdyHe", "IuLiuHEHmkbyKyOxyfpBazedQLvQGOIgAcjOiNJTapwzeHbHMe", "GxTDRMDdMOgRTcoSwOkWgHSvrDFyBmHkDRGtzmNHONrCGwuCWA", "fVADMXiKwcVtFqcRuOzvProCbjWmuSzxJiIUxuPVNPWfdPSUCS", "JvDAKAdyqbHmQeQPzDdTPxxAAiTaTgjpfxfdgFtjqbQfPFQinU", "QvgKMHeqtqUUqkdNqiCqgGsDaTVdOClejsWoHEvEEhgfkmerqg", "FuBWUcjownqUlujiNfLBOiVATEfDpHyPAVmyRMgmvqqjeOBpNs", "jvMGaMJsBtIFKqDwePqyyMNOUpaNLEPzDPfutwtIfJKCEBxpLN", "CskmPafEEnlWFXwDSnsttgBCSBTewHnTTVvcNzrtQvjTgbLRlj", "rTLcPMMIuPBxBCbkvSliDSxAfpzcxeDFPFfQuXmCNQHGvvtdSO", "NoRvqUfLMGhfBMyCoQranSmibmazzwpslkwFUrosefpCrnlrWJ", "NTtPOvJlDEniJNfoHwRufSXxlNFISbCyJnSVFIMWkKtiMlqbKw", "BkaQvAPUErcANnTXKBExECQlWNIJrilSyNVCHOXCeyiuxSyFfE", "pMFWyDzfTXpqIccFEhccaxlDzEdlHGnBBEdGTizwPqHPsJVFNw", "SnXxyttDbsatIvsEHTINiSEjbraCkyfvpiHxXFwMDHjVQIHuOr", "UgtdsGRzyWzNyKChsJDlAmFFARMgamGVuyzDOdVTFzItiktOUI", "xarJJwNiTmkrCmIFwhqceRMtfevlBPoKyEPRnCtmAVpkMuWJaJ", "HwwEQBxlnBssMqjXHCezCOJHOinAvOvNpvamIyGXsEvzbjWMoa", "NTmiKsgXPIPDJTfqXqFoTDvtMUdGOlfeqPXimklLODIBjEIECj", "pBDPDzghmxfTopnOxaxlItzHTtARSOFBVpcpxeyPVxPNWmEfew", "teQRFoGrBfbqTxvcQCRjDPoyuvlWgijokNmsOLWzjiAPbwqcXT", "VmCeOobDrywXiRwmyzdUDXgFWtpXJVOUdUwwdNCwPpjDVvarjF", "nCIXcIDeGahscvDDpzPVqxEbtldorQTDLzDmGFkJkaLvBdRiAq", "uQhMboSbCmTtehtFAIcWkDFxnexDvFxrGarAstpUuLGXswEAAU", "giImRlUaaKnoDWrdRplsTTOtFRbiAEtWOdFbOrgbIrhqtUwyDK", "liuMJbDvDhrNDodprGKieNfaCqOVLHmNylDphoUuNTbtulzHcJ", "wSfvpMACUtMXdxtnsiEfxXaxdRbcFUSIyIMHjAETGRFgXNXQcA"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 509948773;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rows = {"pngNGULEtULVllLOnizvcnQAXVkGHgQkczbgyPUSApqqmujmrS", "NlfcocaVWzCLOeKzKEBUuqIuluEFKpOshLUKTMUpgNvlHXGSIw", "rOSSXwqIMjmBmgHrSrAjOjeAmKtvNDHNASWqFqOMwcNKSNlNsX", "JWwCzxNSKOMkSafVsAFcHGQXNuUWefGxPRfDzGzupqipknwEwn", "zpXaqEMchdVXersqCUqnmyBecUymRvaRqOtBKwtKwuCexphyqa", "hQTUCJIcmbVVqaLPfxBejrQGKGCAhrvcJiFtdJQjjRNxCQmWfP", "rBLvysnaNvyadzXokCEKbwPwvFQBNcUelPfkDaQouCcnVGknuy", "MXWNOUAvhrqcbAfqVuXROOuEdjlnJkHAJVGzaTDrOobixmmgUQ", "rLMPycdnSQTcfcokrnTTpeeJqmAmceyowSvdRDThaGsOKrCgcG", "JDbkOFpybLIrtLAWUPAxkdcoAyFeFnmDgkXhcqQdXyuJmlsKxv", "DVTqaThtXENbphpBGqTjJodwAVCxwzaLeeIxluaMdMzREPAOwE", "XoFCggPAAsvWegDpeImgdBqXVnLoAhPNjlfWvUiGQigrrAKJNj", "dVdfruJBgtabRqKVycTQEkUAzxFezmUIBElHaSvXziOkcuIucO", "iSTgqxbEwzVDgHWmGgNFpGGnNndpKJUJUszqxQQdvfBDwyWvWf", "kWPXNwwPHWLzEMwpqUAhUmCKqzPzvDUJTvDddBNwMoaIjLyove", "FgRgATWDrvzNOmBliljhflEUVDOOfDuCxrfnBbPgaluQpwzyuz", "PegGTFihlKtBErQWcgNgJmCktMAvsBwbCjBUWeBezRlmmDMiGt", "HXszoGCVUaiKBRzKUcvyCSSgpJRhHjIBklTQFyUjtKIjbnzhXt", "KEVDwlgDndXlNKivzgROQkkKeFjDtXTJhkrQmyzUAwUKSgSRXU", "XJzRJPKpEFeJDrJoucqEMdoIJXBxzrGyABAgrfiVaTdNRjWaWA", "fIdehPaDDAcarkCkbcdNsFAIBElkngEOgmIAuXJEFswDFmmwwR", "pROgwBEryOanmaJsJAnoFBijXNoLkBNmnLQcfyKTNXeGwAzRhW", "HbyScGWgFqRoXxDifWlaGIwFDTyDoCqrDSUjrAWPTcqpKewtQp", "vElXrttDMzhtbmbtRzEDRqkcjrpDtRbsyHhzjjSzEXqUWXfmJQ", "kFJpeTwnetvlzpkDFeHBAfarinRkgUTVJobOXtmMlATpidJVgO", "pvPUCwLpsjfsscJMWjreuuzTOIjTmpbEvDuNadVkFyFLRxONFU", "kVGiROoaubGMzaGCnoCLmuaWzEVwOCHjuShJuJNGbjdPCqQwjU", "ISaJFVVspMuxBaFWlWcRPwoMhexojhrJfCSFHeksaeXKTxpBck", "PmfTxhtmdWWTgfqRVznXMcgRrijwBRbWOQHdTrRubKGkgaLnuU", "mXSBKypNCxEEgmfExGVrBQhjUVqJbKNxqISqJBTJcMSLvTXKDN", "FdMgFuCnebzgQjmouTaliGEkvEdSdqBaOMqfsjTPhwvBruWpdI", "tBDdbbWjMFDWURfXGGJJdtAxkcLDnLveHJIqHNkfXSnabFkgov", "aLQNEAklTuQCCVMVQfTuoFaTjHnhgyeDhwpMaSnDukomshuScb", "InorroPMvgKFKdsJqpfiVlRJQbblgijbAQKuuPWoxPolTXgehS", "bfBhiOiLtQGfwnkPxOlkOzjgQTJvzDckOKGQtuqhAiOMKKiGdS", "RwInSvhzdiMLGuRyjzFAWoxOnlKujGHFrOvcgdonGiEPCIXDQW", "RRkoFPTUWGQGNJBwkDEnqtCDOmcQfzKdlRwIgFFpOVvoDszDJo", "XdEOwMnotDePjhTGslaxCBjGDyNhgpMRrTQIgBtRozSjDqveTx", "fFsDbEHeTRkknMMsRItCgUKiLplSUCgdAsuSkxVFEvsTvuegxQ", "AMNfGynMbFSXwukkebkvkesbftGPhVkdtlmIAmNNCAruGKfEzp", "leCgoyBfGRlncvIiOuQCVlnqBHPDcBFfnkhwsztDOoiHhKcvyV", "NlgcrhpMIEuCFPwGrfcgoPaylHmcCTPHtDJTfqzlNvVyqScnEe", "tFFjiinQwCMJCdIcayxyecClTqDjTPqioTfaWujIDoKvFRjxUc", "QSkhmrgLOtLsxkouFDSfxduhdmDXTLmnDymIHIFGaflXehaImb", "heTFvGxGgvBfHxoKBIpiBxEFuClTyCzmBdHNRhSsgixGjbWOMc", "RUCeAnpUUGycielviBmodyuOQBeOFARliSafjdutefqnbMvWpd", "kOJDLpSugPAVNUDBSMMhQNkdXiBODpSRDmIDGQJDgRdedamScu", "QvtudkwwwNBJAAKeXTJvmQmndrkvaGzjlJqnaxoTqXjIfVnOWU", "CgRKBXDqUmcedHRMBOXywGLqbwbVbsfOWcpmTMaXNfDQdqCzmc", "KqfAaTcSpagOhaaSdtXgPjUauToQgPUAJQCANvPSvMXGEUheFv"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 871284381;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rows = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rows = {"ffffffffffffffffffffffffffffffffffffffffffffffffff", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "llllllllllllllllllllllllllllllllllllllllllllllllll", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 510853836;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rows = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "EXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "UAXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "ABvXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "mOOSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "uVTyAXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "ndkjMzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "HoDdvUUXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "RyOmbaLxXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "NvVeEPnGLXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "kkczMxFDDTXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "SJgbdOjTBOJXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "MQDndOwItODSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "UQayKTuazqTwRXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "grzeouUrSVjocpXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "UUaGUQdlJBbgKFjXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "VaGojcjoVOOHpzlJXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "MufDqqqCloMFbamJEXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "rieTIVluOiIBIAJqDsXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "PjxROxVjkrxUdSdUyPmXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "qRTmlHyTQsNQxykGmMWIXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "aauEOxlImFNsVewQzjFHcXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "IwyDOCmgnqVpfpfJjywUGhXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "qsbWWBgNmNoCjybmTFzAoLcXXXXXXXXXXXXXXXXXXXXXXXXXXX", "LNvlpjJeLmNqJPgSJntlaFgoXXXXXXXXXXXXXXXXXXXXXXXXXX", "yJUPeqynpaDVKCylFAgQOdVpcXXXXXXXXXXXXXXXXXXXXXXXXX", "bPdwolVIkUouKoFxRucMsrPHcmXXXXXXXXXXXXXXXXXXXXXXXX", "eqyUNVqMOFTqLDJbpkBkiwzmlyVXXXXXXXXXXXXXXXXXXXXXXX", "OhVetsaVxStJbxdIvJlSiNUvJpxBXXXXXXXXXXXXXXXXXXXXXX", "IfEmwlSwVmDKqqTtrRlOVFppSVmzVXXXXXXXXXXXXXXXXXXXXX", "PNRFVebcWoDTKNkzrKTDhfigeVLIgGXXXXXXXXXXXXXXXXXXXX", "RuRGJqIJWgbBWjhgaWQTNNmAyqMrbgwXXXXXXXXXXXXXXXXXXX", "htFiscOTBfluuqHVjlwdycEacLilIAhpXXXXXXXXXXXXXXXXXX", "RxtRCBTmojHTJaWwfqQlwJxBixQgkmzQCXXXXXXXXXXXXXXXXX", "DjJwbyEkdFWKAQbBVvELNoGiaAzUWkhrsHXXXXXXXXXXXXXXXX", "zkeueDbBTVVTxKiCQkUdCVgqaeWgpWJmrjHXXXXXXXXXXXXXXX", "AFmVVADVWGdoruUJKdIdlQyImIUUBovoGCOhXXXXXXXXXXXXXX", "HRLmBeWwsqqqTmBbOdlSIGqSjwNiAzIQaImoxXXXXXXXXXXXXX", "exzNoBtMGyEmmxMjezswalHUwGiMQVAfpFPFChXXXXXXXXXXXX", "vksJQohUDnsbjeeCVhwPEDymJukyWBGVSUEcuucXXXXXXXXXXX", "wGfcximahVdbSOhiqdIbCyHwFTzmdAmhcvnVPIFjXXXXXXXXXX", "hRGBDQMnfOSyRqaCEkvqJbVxwlIuIMUuHoLLGJQRhXXXXXXXXX", "umsonoDbEJQMTIeEWHToFPEnOejUlgtDgQIVAkdhjAXXXXXXXX", "SuAwJowEilFnktwummFsKwhpwBHPCthWUiuSmRLVSQBXXXXXXX", "cooPKfwqPdVjAJBIaNEgsPmzUkUylkueBqTFagovJEyQXXXXXX", "TAhxvquivNTInJBxnvMzHVFORkxqDCwqmDoVxPlUldDsWXXXXX", "rvqTlQiGVrrzpCuvEdCRbPBeLQwWhBNGldpJHMurTWCxWeXXXX", "sysgpKMVRBLIzhxJrWeruNEakQrVwjEQAcRVruaPRWikxltXXX", "DgFkJfiAbVrMTtnIqksavODqBVTTMVCuEpFgFvOeWCHVISAgXX", "waFMJaFAULaQWprUrDrREATTsubEeAxnFmQJFOqPMVEeDLnTjX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 802855041;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rows = {"mAoVMKiaPFXbLXUJrnXPFyXXXXwXDAXXXXmXXXXXXXXXXXtXXX", "qAsdtDjJXdICXQlJXXzqhXTXOXNXXXwXXiXXXXqXXXXXXXXXXX", "MURFpzInXVFXXeXvmRvXXLDXXmHXXXXXrXQJHPXXWXHXXXXXXX", "RkzEMaygDTlTAXkGXXWzXfHpjXXlIzXrcHXXXXXXXAXVDXXXXX", "UfVXwxwInloIcyWIjzckyNUXXyxXXXXXXXXXXXlXXXiXXXXXXX", "egyTnflXQVdBXxXqEKXXOXGXXXXTlXXqSvuXXvdXXXXXXXXXXX", "NavPCVXMOsMXXpXuFXXRXDFmXXQXXXhXsXXLFXXXXXXXXeXXXX", "waFmXiyXEoJTXIrbXAXXXrHUaBjXXBXQXXXXxXXXXXXxXXXXXX", "AauwXTgAmLNXJmyxXkwTClXXkXMyVXXXXXXXGXXXTXXXXXXXXX", "gNTiEluldNbFRAbJXkXliwXTcAXrXXXXCXXXFXoXXXXXXXXXXX", "yNDbVCjqzXSMXtBXfjgXXFXeXlXXXoXpXXXXXXLXXXXXIXXXXX", "TGfSolwCVXNXbpHJrkXXXXXXFXiUXgGXXXXXXhXXXXXXXXXXXX", "eXkXdutVXUHXjDwXyXFXNXXayVXuwXXXXmXFXXXPXXXXXXXXXX", "uuORlVXVsVDsTaiXRusXuXiaaXXXXXXolXXXXOXXXXXXXXXXXX", "AjRxlBiXojVXnXJCEyXXXXmgJXkXCjhnXXXXXRXXJCDXXXXXXX", "ROhgUeUrXGDXrXdXXXXAXXEXXXXgXBXXXXEXXXQXXXCXXXXXXX", "EmORNODXUnXmKtjtrdTXXJXBSqXUeXmXXUXhXuXXXXXXXXXXXX", "uogeqqXwBXXnXXxCaXwrvoESXXUWdXUXXQXVXXXeXXXXXXXXXX", "LRDeXOliWoQuRxTXzXXQEOVXXeXXkgEXGCXXXXXXXXXXxXXXXX", "HyFTocaGSXEJqNXlvXQXsXPqwQXmXXuXXXpXXXXXXXXXXXXXXX", "cvJleqXkXXopXJmXamlOXcXmsQTXXXhQXXnXXXuXXXXXXXXXXX", "XJcPofJVlFjXxoXBXXlXXbBvXXiXXVXWXDXXXXXjjXXXXXXXjX", "IwADVswDxNDSupJbEXIRoVgXcXXXWkAXXXoXaXXVXXXXXXXTXX", "huXmAqmITOrXpXBIXWXHHXXXwTXXXXXXXcOXuXXXlVXXXXXXXX", "MBmNOXSahmXqXXXxqFCUcPXIXXXXXCJmXqXXXXXPSXXXXXXXXX", "rJxjOQqoGfaqkCawXvTgVAqXXkXXXtXXXoIVXXXRMQXXXlnXXX", "VdekeodXDVtjXauXXdXaiPXXRVXPXXXemXLXXXXXXXXQXXXXXX", "bkywBXMmWOXMmXegKNlSsXExXXbqXXvXXXXcXXXXXXXXXLXXXX", "OqsBdBMbVOTXSXkXQMQwaXpXcGXXpXzXXXXXXMXXXXXXXXXXXX", "zRbXpBVxXqqUTFFmDHEXlXXXXXXVbXXXXXXXXuXhXXXXXXXXXX", "rkEuvxVTVXLgWjMXpXXXXXXXlXxBXWtXBXFgxXXXRXXXXXXXXX", "HPdyJXFnLBXbXXwXXktXXXXXXkmgXVIXXXHSXIXXXXXsXXAXXX", "DvTWKxujRiTIXzdSeXXdNGXXXVXXXGXVXjXVXXXXXEXXXXXXXX", "RRGmIoUufgbuphXXqXwDXPxXiXLXlmXXaXXoCXaXXXXXXXXXXX", "DxtXKQbXXqXXKXXXWqXMJdXXmXUXAXNXpXXXPkXXXXXXXXXXXX", "qoLGsjWNJJdQzqgUXsXSXXXiUXXXIAXDFpXXXXXXXWXXXXXXXX", "ksqUxoOAkXVKjXXCjXesCVXnXwXIXXXhXXXXXXXXXXXXXXXXXX", "UuanvHFXXqXodXBVOvMIwNcqXuIyQXCfXXXJXXXvXXXkXXXXXX", "ahzwWQnXiXOqKSnjmdrXXFXOLLzzgkXXUFXXrXOXXdXXXXXgXX", "UxUyDXTcBrXoAPXiJJXdXXywXeVXWXXXEXXXAgXrXXXXXXXXXX", "PrXJXULebmWKWqXQnXUdXwXXXuXXhXXXXXXXXXFXhXXXXXXXXX", "vyGoXqDIvrXwTJXEXXXoaXXzeXXiXXXXAXXXXXcUXXXXXXXXXX", "PFfzjAEEpSTQVqfzVXIXIXXpwprMMXXXXXTVXXXXXXEeXSXXXX", "SQVcJXXMXXszxKhIXXsXXXVHXXXXXXwXXXPXXXXXXXXXXXXXXX", "IQeoOcbTOyVVIuXXThXLbNXpXIWUXAXGXXXXXXXXXXXXWXXXXX", "htamQPXTWaXXbeeXrPmXGhgAXXXEBXXuXdXXXXXXXWyXXXXXXX", "SjFGbXXBkBxHXOXXXlXbXXmXJXXXXXXugXRXXJXXXXXXXXXXXX", "wVXeJymGmXDTJCXJVdElXXzXXxXXXXXQXXXFXXXXXXXXWXXXXX", "nivMJahULOryfybXXDFXEQyoXXXXXMxXXXXXmXXXXXXXXXXXXX", "sXsDbeqwtFNBKXhUXWBXKXhXBXzXXXXXHIXXXXXXXXBXXXXXXX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 802855041;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rows = {"FKXmPLAXXDorXmXXXXXbXXXtJXiaXVyXUXMXXwXXXXnXXXAXPF", "dDXXqXAiOXsXXqIwXXTCXXXXJqjJXdXXlXtXzNXXXQXXXXXXXh", "VzXQXXUXXXRmXMFXPHDXXXXXvXInJFLmXXpXvHrXXeRHXXXWXX", "TaAXzAkHjIzXXRlXXXHTXlXXGXygXEfXkrMDWXcXpXXXVXzXDX", "lxXXkcfXXXVjXUoXXXUIXXXXIlwIXXNyWXwXcxXXXyziXXXXny", "VfXuXXgvXlyEXedXvXGBXTXXqdlXXTXXXqnXXXSXXxKXXXXXQO", "sVXXRXaXXXvFeNMhXFFXXXXXuXXMLPDXXXCXXQsXmpXXXXXXOX", "oiXXXXaXaXFXXwJXXxHTXXXXbXyXXmrBrQXXXjXXUIAXxXBXEX", "LTXXTJaXkVuXXANXXGXXXyXXxXgAXwlXyXXXwMXXXmkXXXXTmC", "NlXXlRNXcXTXXgbXXFXFXrXXJoulXiwAbXEXXXCXTAkXXXXXdi", "XCXXXXNXXXDfXySXXXXMXXXXXLjqXbFlBpVIgXXXetjXXXoXzX", "XlXXXbGXFXfrXTNGhXXXXUXXJXwCXSXXHXoXXiXXXpkXXXgXVX", "UuXXXjXmywkyXeHXXXXXXuPXXXtVFXXVwXdXFXXXaDXXXXXXXN", "VVXXXTuXaXORXuDXOXisXXXXXXXVXRXXiolXsXlXaauXXXXXsu", "jBCXXnjXJCREXAVhRXmXXXXXCXiXXxXXJnlXXkXXgXyDXXjJoX", "GeXEArOXXXhXXRDXXXEXXgXXXQUrXgXXdXUXXXXXXXXCXXBXXX", "nOXXXKmUSeOrXEXmuXXmXUXXtXDXhRJqjXNXTXXXBtdXXXXXUX", "XqXXrXoQXdgaXuXUXXEnXWeXCXXwVeoXxXqXwUXXSXXXXXXXBv", "oOXXQRRCXkDzXLQEXXVuXXXXXXliXeOeTXXxXXGXXxXXXXgXWE", "XcXpXqyXwXFvXHEuXXPJXmXXlXaGXTXQXXoXQXXXqNXXXXXXSs", "XqXnOXvXsXJaXcohXXXpXXXXXuXkXlcQmQeXlTXXmJmXXXXXXX", "FfXXXxJDXXcXXXjXXXBXXXjXBXJVXPbXXWoXliXjvoXXXXVjlX", "NsXoRuwXcWAEXIDAXagSTXVXbXwDXDVXJXVXIXXXXpXXXXkXxo", "OqVOHpucwXXXXhrXXuXXXXXXIXmIXmXTBXAXXXXXXXWXXXXlTH", "mXXXUXBqXXmqXMXJXXXqXXPXxXSaXNPXXmOXCXXXIXFXXXCShc", "fQQIgkJoXXxXlraXXXqqXXRnwXqoVjAkaXOXTXXXXCvXXXtMGV", "VoXLaXdXRXeXXVtXXXXjXPXXXXdXXkPVueeXXXmXXadXQXXXDi", "OXXXSmkXXXyKLbXvXXEMXqXXgXMmcwXXeXBXlbXXxXNXXXXXWs", "OBXXwSqXcpsQXOTzMXpXXXXXXXMbXBXGkXdXQXXXXXMXXXXXVa", "qBXXXTRXXbbDXzqXuXXUXVhXmXVxXXXXFXpXEXXXXFHXXXXXXl", "XxXFXWkXlXEpXrLtXxXgXBXXXXVTguXXMXvXXxBXXjXXXXWRVX", "BXXHXXPXXXdXXHXIIXXbXgXAXXFnSyXkwXJXtmXXXXkXsXVXLX", "ixEXdXvjXXTeXDTXXXXIXXXXSXujVWGVdVKXXXXXXzXXXXGXRN", "goXXDpRXilGqXRbXXCxuXXXXXaUuomPXXXIXwLaXXhXXXXmXfX", "qQXXMKxXmAtWXDXNkPXXXXXXXXbXXXdXXXKXXUpXXXqXXXXXXJ", "JjWXSzopUILXXqdXXXXQXXXXUXWNXGXXgDsXXXFXiqsXXXAXJX", "XoXXsjsXXXqjXkVXXXXKXIXXCXOAXUVwXhxXeXXXnXXXXXXXkC", "qHXXIduXXQaOXUXCXXcoXyvXVXFXJnNuBfvXMIXXqXvXkXXXXw", "XQdXXKhFLgzmXaOXXrXqgzXXjOnXXwFLnXWXrzUXOSdXXXkXiX", "rXXXdAxXXWUJXUXXgAyoXXrXiXTcXyXeXXDXXVEXwPJXXXXXBX", "mUXXdWrXXhXnXPWXXXXKXXXXQFLeXJwuXXXXUXXXXqXXXXXhbX", "rqXXoTyXeXGXXvXXXXXwXiUXEcDIXoXXXXXXXXAXzJXXXXXXva", "SAXTXVFXwMfVSPTXXXXQXMXXzXEEVzXpfXjXIrXXpqXEeXXXpI", "XXXPXxQXXXVXXSswXXVzXXXXIXXMXcXXhXJXsXXXHKXXXXXXXX", "ycXXLIQXXXeTXIVXXXXVXUXXXXbTXoNIXGOWXWXXpuhXXXAXOb", "aPWXXbtdXBarXhXXXXgXXEXXXXXTXmhXeuQXmXXXAePyXXXXWG", "BXXRbXjXJXFXXSxXJXmHXXXXXXXBXGXXXubXXXgXXOlXXXXXkX", "XyXXlJVXXXXVXwDXXXzTXXXXJXmGFeXxXQJWEXXXXCdXXXXXmX", "OaXXXfiXXXvXXnrxXmyyXXXXXXhUXMQXbXJXFXXXoyDXXXMXLE", "FeXXXKXIBXsXXsNXXXhBXXXXUXqwXDXXhXbXBzHXXXWBXXXXtK"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 802855041;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rows = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzXX", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 698949199;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rows = {"zzzzzzzzzzzzXzzXzXzzXzzXzXXXXzXzXzzzXXzXXXXXXzXXXX", "zXzzzzXzzzzzzzzzzzzzzzXXzXXXXzzzXXXXXXXzXXXXXXXXXX", "zzzXzXzzzzzzzzXzzzXXzXzzzXXzzXXXXXzXzXXXXXXzXXXXXX", "zzzzzXzzzXzzzXzXzzzXzzzXXzXXXzXXXXXXXzzXXXXXXXXXXX", "zzXzzzzzzXXzzXzXzzzXXXzXzzXzXXXXXXzXXXzzXXzXXXXXXX", "zzzzzzzzzzXzzzzzzzXzzXXXzzzXzzXXXXXXXzzXXXXXXXXXXX", "zzzzzzzzzzzzXzXzzzXzzzzXzzXzXXzXXXXXzzXXzXXzXzXXXX", "zzzXzXXzzzXzXXzXzzzzzXXzXzXzXXzzzzXzXzXXXXXXXXXXXX", "XzzzzzzzzzzzzzzzXXzzzXXzXXzzXzXzXXXzXXXXzzXXXXXXXX", "zzzzzzzzzzzzzzzXzzzzXXzzXXzzzXXXXzXXXXXXzXXXzzXXXX", "zXzzzzXzzzzzzzXzzzzXzzXXXzzXXzzzzzzXzzXXXXXzXXXXXX", "zzzXzzzzzzzzzXzzzzXXXzzzzXzXXXzXXXzXXXXzzXXXXXXXXX", "zzXzzzzzXXzXXzzzzzXzXzXzXXzzzzzXzXXXzzXXXXXXXXXXXX", "zzzzXzzXzzzzXzzzzzzXzXXzXXzXXzXzXXXXXXzXXXXXXXXXXX", "zzzzXzXXzzXzzXzzzzXzXXzXzXzzXXXzXXXzXzXXXXXXXXXXXX", "zzzzzzXzzzzzzzzzXXzzzXzXXzXXXXzXzXXXXXXXXzzzXXXXXX", "zzzzzzzzzXzXXzzzXXzzzzXzXXXzXXXXzXXXXXzXXXXXXXzXXX", "zzzzzzzzzzXzzzXzzXzXzzXzXXXXzXXXXXXzXXXXXzXzXXXXXX", "zzzzzXzzXXzzXzzXzzzzzzXXXzXXzzzXzzXXXXzXXXXXXXXXXX", "zzzzzzzzzzzXzzzXXzzXXXXzzzzXzzzXXXzXXXXXXXXXXXXXXX", "zzzzXzzXzzXzXXzzzXzXXzzzzzXXzXzXXzXXXXXXXzXXXXXXXX", "zzXzzzzzzzXzzXzzzXXXzzzXzXzXXzzXzXXXXXXXzXXXzXXXXX", "zzzzzzzzXzXXzzzzzzXzXzXXXzXXzXXXXXzXzzXXzXXXXXXXXX", "zzzXzzzzzXzzzzzzXzzzzXzXzXzzXXXzzzXzXXXzzXXXXXXXXX", "zzzzzXzXXzzXzzzzzXzzzXzzzXzzXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzXzzzzzzzXzzzzXzXXzXXXzXXXzXzXzzXXXXXXXXXXXX", "zzzzzzzXzzzzzzXzXXXzzzXzXXXXzXXzXzXzXXXXzXXXXXXXXX", "zzzzzzzzXzzzXXzXzXXzXXXXzzzXXzzXXXXzXXXzXXXXXXzXXX", "zzzzzzXzzzzXzXzXzzXzXzzXXXzzzzXzzXXXXzXXXXXXXXXzXX", "zzzzzzzzzzzzzzXXzXzXzzzzzXXXXXXXXXXzzXXXXzXzzXXXXX", "zzzzzzzzXzzzXzXzXzXXzzXzXzXXXXXzXXXXXzXXXXXXXXXXXX", "zzzzzzzzzzzzzXzzXzXzXXzzzXzzzXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzXzzzXzXzzzXzzzXXXXzzXzXzXXXXXXXzzXXXXXXX", "zzzzzXzzzzzXXzzzzzXXXzzXzXXzXXXXXzXXzXXXXzXXXXXXXX", "zzzzzzzzzXzzzzzzXXzXzzzzXXzXXzXzzXXXXXzXXXXXzXXXXX", "zzzzzzzzzzzzzzzzXzXzzXzzzzXXzzzzzXzXXXXzXXzXXXXXXX", "zzzzzzzzzzzzzzzXXzzzXXXzXzzXXzzXzzzXXXXXXXXXzXXXXX", "zzzzzzzzXzXzzzzXXXXzXzXzzzXzzXXXXXXzzXXXXXXXXXXXXX", "zzzzzzzXXXzzzzzXXXzXXXXXXzzzXzXXXXzXXXzXXzzXXXXXXX", "zzzzXzXzzzzzzzzzzzzzXzzzXzzXXzXXXXXXzXXzXXXXXXXXXX", "zzzzzzzzzzXzzzXXzXXXzXXXzXXzzXXXXzzzXXXXXXXXXXXXXX", "zzzzXzzzzXzXzXXzzzzXzzzzzzXXXXzXXzXzzzXzXXzXXXXXXX", "zzzzzzzzzzzXXXXzzXzzzzzzzzzzzXXzzzXXzXXzXXzXXXXXXX", "zzzzzzzXzzzXXzzzzXzXzXzXzzXzzXXXzXXzzXXXXXXXXzXXXX", "zzzzzzzzXzzzzXzzXzzzXzXXXXzXXzzzzzzXXXXXXXXXXXXXXX", "zzzzzzzzzXzzzzzzzzzzzXzXXXzzzXzzXXzXXXXzXXXXXXzXXX", "zzzzzzzzzzzXzzXzXzXzXzXXXzXzXXzXXXXzXXzXzXXXXXXzXX", "zzzzzzzzzzzXzzXzzzzXzXzzzXzXXXXXXXXXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzXXzXXXXzXXXXzXXXXzXXXzXXXXXXXXXXXXXXX", "zzzzzzzzzzzzzzXXzzzzzzzzXzXzzXXzzzXXXXzXXXXXXXXXzX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 698949199;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rows = {"XzzzXXXzzzXXXzXzzzXXXzzzXzXzzzXzzzXXXXXzzXzzXzXXzz", "XzzzXzzXXzXXXzXXXzXXzzzzXzXzzzzzzzXzXXXXzXXzzXXXzX", "zzXzXzzzXXXXXzXXzzzXzXzzXXzXXXXzXzXzzXzzzXXzXzXXzX", "XXXXXXzzXXzzXzXXzzXXzXXzXzXzzzXzzzXzXXXzzXXzXXXXzz", "XXzXXXXzXXzXzXXXzzzXzXzXXzXXXzXzzzXzXXXzzXXzzzXXzz", "XzzzXzzzXXzzXzXXzzXXzzzXzzXXzXXzzzXzXXzXzXXzXXXXzz", "zzzzXzzzzXzzXzzXzzzXzzzzXXXzXXzzzzXXzXXzzXXzXXXXzX", "XzXXXXzzXzzzXzXzXzzXzzXXXzzXXzzzXzzXXXXXzXzzXXXXzX", "XzzzXzzzXzXXXzzXzzzzXzXzzzzXzzXzzzXzXXXXzXzXXXXXXX", "XzzzzXXzzXXXXzzzzzzXzzXzzzzXXzXzzzXzXXzzzXXzXXXXzX", "zzzzXzzXXzzzXzXzXzXXzXXzzXXzzzzzzzzzzXXXzXXzXzXXzX", "XzzXXzXzXXXXXzzXzzXXzXzzzzzzXXzzXzXzXXXzzXXzzzXXzX", "zXzzXzXzXXXzXXXXzXzXzzXzzzzzzXzzzXzXXXzXzXXzXXXXzX", "XzzzXzzzXzXXXzXXzzXXzXXzzzzXzzXXzzXXXXXXXXXzXXXXzz", "XzzXXzXzXzXzXzXXXzzXzzzXzzXXXXXXzzXzXXXzXXzzXXXXzX", "XzzzXzzzXXzXzzXXXzXzXzXzXzXXXzzzzzzzzXXzzXXzXXXXXX", "XXzzXzzzXXXXXzXXzzzXXzXzXzzzXzXzzXzXXXXXzXXzXXzXXz", "XzzzXzzzXXXXXzXXzzXzXXXXXXzzXzXzzzXzzXzXzXzzXXXXzX", "XXXzXXzzXXzXXzXzzXXXzzXzXzXzzzzzzzzXXXzXzXXzXXXXzz", "XzzzXXXzXXzXXzXXzzXXzXzzzzzXzzzzzXXzXXzXzXXzXzXXXX", "XzzXXzXzXXzXXzXzzzXzXXzXXzzzXzzXzzXXXXzzXXXzXXXXzX", "XzzXzzzzXXXXXXzXzzXXXXzXzzXzzXzzzzzzXXXzzXXzXXXXzX", "zzzzXzXzXXzzXzzXzXXXzzXXXzXzXXXzzXXzXXzXzXXzXzXXzX", "XXzzXzzzXzXXXzzzzzzXzzzzzzXXXzXzXzzzXXXzzXzzzXXXXX", "XzXzXzzzXXXXXzXXzXzXXzzzzzzXXzXXzXXzXXXzzXXzXXXXzX", "zzzzXXXzXXXzXzXXzzXXzzzzXzXzXzXXzzzzXXzXzXXzXzXXzX", "XzzzXzzzXzXXXzzzzzXXXzXzXXzzXXXXzzXzXXzXzXzzXXXXXX", "XzzXXXXzXXzXXzXXzXXXXzzzzzXXzXzzzzXXXXXXzXzzzXzXzX", "XzzXXXXzXzXzXzXXXzzXzzXzzzXzzXXzzXzzXXzzzXXzXXXzzX", "zzzzzXzzXXXXXzXXzzXzXXzzXXzzXzXzzzXzzXXzzXzzXXXXzX", "XzzzXzzzXzzzXzXXzXXXzXXzXXzzXXXzzzXXXXXXzXXzXXXXXX", "XzzXXzXzXXXXXzXXzzzXzzzzzzzXXXXzzzXzXXzzzXXzXXXXXX", "XzzzXzXzXzXXzzXzzzXzzzXXXXzzzzXzzzXzXXzzzXXzXXXXXX", "zzXzXzXzXXXXXzXzzzzzzXzzXzXzXXXzzXXXXXXzzXXzXXXXzX", "XXzzzzzzXzXXXzXXzzXXXXXzzzzzzzXzzzzzXXXzzXXzXXXXXz", "XzzzXzzzXzzXzzXXzzXXzzzzXzzXzXzzzzzzXXzzzXXzzzXXXX", "XzzzzXXzXXzXXzXzzzXXzzXzzzzXzzzzzzzzXXXXzXXzXzXXXX", "zzzzXXXzXXzXXzXXzXzXXzzXXzzzXXXzzzXzXXzXzXzzXXXXXX", "XXzzXXXzXXzXzzXXzXzzXXXzzzXXzzXXzzXzXXXXzXXzXzXXXz", "zzzzXzXzXXzXXzXXXzXXzzXzzzzzzzXzzzXzXXXzXXXzzXXXzX", "XzzzXXzzXXXXXzXzzzzXXXzXXXXXXXXzzzXzXXzXzXzzXzXXzX", "zXzXXzzzXXzzzzXzzzXXzXzzXXzzXzzzzXXzXXXzXXzzzXXXzX", "zzzXXzzzXzzXzzXzzzzXXzzzzXzzXzXzzXzXXXzzzXXzzXXXzX", "zzzzXzzzzXzXXzXXzzzXXXzzXzXXXzXXzXzXXXzzzXzzXXXXzX", "XzzXXzXzXzXXXzXzzXXXzzXzzzXzzzzzzzzzXXXXzXXzXzXXXX", "XXzzXzzzXzXXXzXXzzzXzzXzzzXXXzzzzzXzXXzzzXXzzzzXzX", "XzzzXzXzXXzXXzzXzzzXzzXzXXXzXXzzzXXzXXXXzXzzXXXzXz", "XzzzXzzzXXXXXzXXzzXXzXzzzXzXXzXzzXXzXXXzzXXzXXXXzX", "XzzXXzzzXXzXXzXXzzXXXXXzXXXXXXzzzzXzXXXXzXXzXzXXXX", "XzzzXXzzXzzXXzXzzzzXzzXzXXzzXzXzzzzzXzzzzXXzXXXXzz"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 698949199;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rows = {"aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddeefi", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddeefi", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddeefi", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddeefi", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddeeji", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccdddfjji", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbccccccefjfjji", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbdddefjefjfjji", "aaaaaaaaaaaaaaaaaaaaaaaaaccccccdddefjdddefjefjfjji", "bbbbbbbbbbbbccccccdddeefjccccccdddefjdddefjefjfjji", "bbbbbbbbbbbbccccccdddeefjccccccdddefjdddefjefjkjji", "bbbbbbbbbbbbccccccdddeefjccccccdddefjdddefjekjkjji", "bbbbbbbbbbbbccccccdddeefjccccccdddefjdddekjkkjkjji", "bbbbbbbbbbbbccccccdddeefjccccccdddekjdddkkjkkjkjji", "bbbbbbbbbbbbccccccdddeekjccccccdddkkjefkkkjkkjkjji", "bbbbbbbbbbbbccccccdddfkkjccccccefkkkjefkkkjkkjkjji", "bbbbbbbbbbbbccccccefkfkkjdddefkefkkkjefkkkjkkjkjji", "bbbbbbbbbbbbdddefkefkfkkjdddefkefkkkjefkkkjkkjkjji", "ccccccdddefkdddefkefkfkkjdddefkefkkkjefkkkjkkjkjji", "ccccccdddefkdddefkefkfkkjdddefkefkkkjefkkkjkkjkjji", "ccccccdddefkdddefkefkfkkjdddefkefkkkjelkkkjkkjkjji", "ccccccdddefkdddefkefklkkjdddefkelkkkjllkkkjkkjkjji", "ccccccdddefkdddefkelklkkjdddelkllkkkjllkkkjkkjkjji", "ccccccdddefkdddelkllklkkjdddllkllkkkjllkkkjkkjkjji", "ccccccdddelkdddllkllklkkjeflllkllkkkjllkkkjkkjkjji", "ccccccdddllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "cccccceflllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "dddefleflllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "dddefleflllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "dddefleflllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "dddefleflllkeflllkllklkkjeflllkllkkkjllkkkjkkjkjji", "dddefleflllkeflllkllklkkjemlllkllkkkjllkkkjkkjkjji", "dddefleflllkemlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "dddeflemlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "dddemlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "dddmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "efmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "elmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "jlmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "jlmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "jlmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "jlmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji", "jlmmmlmmlllkmmlllkllklkkjmmlllkllkkkjllkkkjkkjkjji"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 135782490;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rows = {"dbccbabbabdaaaaabbbabadaaacaabaaabaaaicceacaebaaaf", "dbccbabbabdaaaaabbbabadaaacaabaaabaaaicceacaebaaaf", "dbccbabbabdaaaaabbbabadaaacaabaaabaaaicceacaebaaaf", "dbccbabbabdaaaaabbbabadaaacaabaaabaaaicceacaebaaaf", "dbccbabbabdaaaaabbbabadaaacaabaaabaaaicceacaebaaaj", "dbccbabbabdaaaaabbbabadaaacaabaaabaaaiccfacajbaaaj", "ebccbabbabfaaaaabbbabajaaacaabaaabaaaiccfacajbaaaj", "ebddbabbabfaaaaabbbabajaaaeaabaaabaaaifdfajajbaaaj", "ecddeaccajfaaaaacddacajaaaeaadaaacaaaifdfajajfaaaj", "ecddebccbjfbbcbccddbcbjbbbefddbdecdcbifdfjjcjfcecj", "ecddebccbjfbbcbccddbcbjbbbefddbdecdcbifdkjjcjfcecj", "ecddebccbjkbbcbccddbcbjbbbefddbdecdcbifdkjjcjfcecj", "kcddebccbjkbbcbccddbcbjbbbefddbdecdcbikdkjjcjfcecj", "kcddebccbjkbbcbccddbcbjbbbkfddbdecdcbikdkjjcjkcecj", "kcekkbccbjkbbcbccddbcbjbbbkkddbdecdcbikfkjjcjkcecj", "kcekkbccbjkbbcbccfebcbjbbbkkdkbdkcdcbikfkjjcjkcfcj", "kfekkbddbjkbbcbcefebkbjbbbkkekbfkdkcbikfkjjcjkcfcj", "kfekkbddbjkbbkbfefebkbjbbbkkekbfkdkdbikfkjjejkdfdj", "kfekkkddcjkcekcfefefkdjcdckkekdfkdkdcikfkjjejkdfdj", "kfekkkddcjkcekcfefefkdjcdckkekdfkdkdcikfkjjejkdfdj", "kfekkkddcjkcekcfefefkdjcdckkekdfkdkdciklkjjejkdfdj", "kflkkkddcjkcekcfelefkdjcdckkekdfkdkdciklkjjejkdldj", "kllkkkddcjkcekcfellfkdjcdckkekdlkdkdciklkjjejkdldj", "kllkkkddcjkcekcllllfkdjcdckklkdlkdkdciklkjjejkdldj", "kllkkkflcjkcekclllllkdjcdckklkdlkekdciklkjjljkdldj", "kllkkkflcjkclkclllllkdjcdckklkdlkeklciklkjjljkflej", "kllkkkflcjkclkclllllkfjceckklkllkeklciklkjjljkflej", "kllkkkfldjkelkdlllllkfjdefkklkllkeklliklkjjljkflej", "kllkkkfldjkelkdlllllkfjdefkklkllkeklliklkjjljkflej", "kllkkkfldjkelkdlllllkfjdefkklkllkeklliklkjjljkflej", "kllkkkfldjkelkdlllllkfjdefkklkllkeklliklkjjljkflej", "kllkkkmldjkelkdlllllkfjdefkklkllkeklliklkjjljkflej", "kllkkkmldjkelkdlllllkfjdefkklkllkmklliklkjjljkmlej", "kllkkkmldjkelkdlllllkmjdefkklkllkmklliklkjjljkmlmj", "kllkkkmldjkelkdlllllkmjdmmkklkllkmklliklkjjljkmlmj", "kllkkkmldjkmlkdlllllkmjdmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjfmmkklkllkmklliklkjjljkmlmj", "kllkkkmlejkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj", "kllkkkmljjkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj", "kllkkkmljjkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj", "kllkkkmljjkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj", "kllkkkmljjkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj", "kllkkkmljjkmlkmlllllkmjlmmkklkllkmklliklkjjljkmlmj"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 135782490;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rows = {"klckkkdlcjkmekmalfblkbjldckklkbfedklliflkajljkmlcj", "kllkkkbbajkcakaleblfkmjldmkaekllkbklaikckjjajkmlmj", "dflkbkblbjkclkdclleacdjdbfeklkdakddlciklkjjcjkcldj", "elekebflcjkmlablclbakdjbbceflkbakmklliklkacljkmlaj", "kbekkkmldjkaakdlelbbkbdcemkklkllkmalliklkajaekalmj", "kflkkadbejkblcdleldlkmjlebkalkllkbklliklkjjajkmacj", "kclkkkbbejfebkaallelbmjfmacalkadkbklliclkjjljkcedj", "kllckkclbjkbeabcellfbajfaackdbalkckcbiffkjjajfmldj", "dlckkbcldjkblkalllllcdjcdckkakllamkllikdkjjejkmfmj", "kfckekcbejdaeamaebefkbjlefcfebllkmkllikdejjcjkalmj", "dblkkkclcjkcakdllllbkbjcebkfdkldkmklcicckjjeekmamj", "kcldkkmljjkbekdfllbakmjaamkaakaaacklaikfkjjlekmfcj", "kllkkkfddjkelkmfcblbbbjfeakadkblkealcikfkjjljkaamj", "dlekkamdejkalkbllllabaddmakkldllkedaaiklkjjljkfeej", "kldkekmcebkclkclldllkmjfmakklkaakmkllicfkjjljkalej", "kclkkkddbjkclabfllllkajamckalkllkmklaikckjjajkdlej", "kcdkkkmdbjkelkmlbllfkdjfabkklklladkcbiklkjjljbfadj", "kllkkkblejkclacflfelbajbabkklkllamdaliklkajajkmemf", "kcldkkmcabkelkmacbblkfjdafeklkalkeaalikckajejkdlmj", "dllkbkmlcjkmlkmlcllbcfjfdmkklkldkmklliklkjcljkmlmj", "kclkkambcjkmakcalblbkmjamfkkakalkmklliklkjjcekflcj", "eblkkkccdjkmlcdalllakmjbbmeklklaackdlikcejccjkmecj", "elekkbdlajkcaabledllkajcdfkklkllkbaaaiklkjjljbafej", "kbckbbmlajkalcbabdbakmjfbmkadkdlkedcliklkajljkcamj", "kldkkamlajkmlkccllllkaddafkkldafkekaliclkjjcjkmldj", "kblkkkfljjkmakcabddlkfjabmkklkllebadlicdkajljkmeaj", "dlcckkcbbjkebkclblllkajbmckaekdakeddliklkjjcjfdlaj", "klldbkbdejdclkmlcbllkajlamkkakddemkcbiklejjcjfflmj", "kllkekmdbjkmbkblbllbcbjamckklkllamddbiflfajljkalcj", "kllkkkmldbkelkmlbfllkmjaaakfdkbakmaaaiklfjcljkfemj", "ebeckkmdcbkmlamlcbdlkmjcdckkakaleckcliklkjjljfaldj", "kflcbamldbfbbcalclllkajbbmkklkldkdkcliklejjajkmlmj", "kflkkacldjkclcmllblbcdjadmkklklfkbadciklkjjljkdlcf", "kclcbbcbejkmbkdflldlcmjdmmkkldllkedlaiklkjcljbflej", "kflkbkmldjdalkaclllakfjcmbckabdlkbklcikfkjcljkdlaj", "klckkkfcajfalkcllldlcmjfbmkfebldkckabiflkjjljkaacj", "klekkkflejkalkallddlcmjdmbkklkblemklciclkjjljkclaj", "kllkkkmcdjkblkbclflabmjdamckldafkdklbiclfajcekmfdj", "klcdkbmlcjkmlkdllllbkbjcmbkklkbdkckllikdkjjejbcfaj", "kldkkkdljjdbacacblefbbdbemeklbbaedkdaikdejjljkmlej", "klldkamcjjkbbcblelblkdjcmmkklddlkcaacikdkjjljbmamj", "kldkkbmlabdmbccallllkfjlmckkedblkmaabikdfjjljkclmf", "eclceaddajdmaadcbdelkbdbdackeklakmklciklkjjejbdlaj", "kldkbkbcjjfaakallllfkmjbmbcadbdlkmklaikcfjcejbclej", "kbddeaflbjkmbkafclbakfjamakkdbdladkcliklkjjejkalaj", "klldkkdlbjfblamclldbbmjdbakkadbfkbkdciklkjjljbcamj", "kllkkkfbajkebkmllfllkfjdmbeklkllaekclikfkjjljfdlaj", "elekkbbccbkmekmllfelkdjcemkkabllkmklliklkjjajkfldf", "kblckkblcjkaekclllllkmjbbckkaklfkcklbifckjjajkdaej", "kllkkbdlbbkeekmlldllkddaefkkeklladkdbiklkjjljkmfmj"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 135782490;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rows = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcdi", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcji", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbjji", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeefgjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeefgjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeefgjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeefgjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeefkjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddeeekkjcdjjji", "bbbbbbbbbbbbbbbbbbbbbbcccccccccccdddddfgkkkjckjjji", "bbbbbbbbbbbbbbbbbbbbbbccccccccccceefgkfgkkkjkkjjji", "bbbbbbbbbbbbbbbbbbbbbbdddddeeefgkeefgkfgkkkjkkjjji", "cccccccccccdddddeeefgkdddddeeefgkeefgkfgkkkjkkjjji", "cccccccccccdddddeeefgkdddddeeefgkeefgkfgkkkjkkjjji", "cccccccccccdddddeeefgkdddddeeefgkeefgkflkkkjkkjjji", "cccccccccccdddddeeefgkdddddeeefgkeeflkllkkkjkkjjji", "cccccccccccdddddeeefgkdddddeeeflkeellkllkkkjkkjjji", "cccccccccccdddddeeeflkdddddeeellkflllkllkkkjkkjjji", "cccccccccccdddddeeellkdddddfglllkflllkllkkkjkkjjji", "cccccccccccdddddfglllkeefglfglllkflllkllkkkjkkjjji", "ccccccccccceefglfglllkeefglfglllkflllkllkkkjkkjjji", "dddddeeefgleefglfglllkeefglfglllkflllkllkkkjkkjjji", "dddddeeefgleefglfglllkeefglfglllkflllkllkkkjkkjjji", "dddddeeefgleefglfglllkeefglfglllkflllkllkkkjkkjjji", "dddddeeefgleefglfglllkeefglfmlllkmlllkllkkkjkkjjji", "dddddeeefgleefglfmlllkeefmlmmlllkmlllkllkkkjkkjjji", "dddddeeefgleefmlmmlllkeemmlmmlllkmlllkllkkkjkkjjji", "dddddeeefmleemmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "dddddeeemmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "dddddfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllkfmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfgmmmlfmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "eefgmfnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "eefnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "eelnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "fjlnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "fjlnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "fjlnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "fjlnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji", "fjlnmmnmmmlnmmmlmmlllknmmmlmmlllkmlllkllkkkjkkjjji"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25514093;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rows = {"aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaadaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaajaaaaabaaaaaaaaaabacaaaaaaaaaaa", "aaaaaabaaiaaaaaaaaajaaaaabaaaaaaaaaabajaaaaaaaaaaa", "aaaaaadaaiaaaaaaaaajaaaaajaaaaaaaaaacajaaaaaaaaaaa", "bbcgbbdccibbecjbebbjbebfcjcdbcbcdbbccbjbbbbdbbcdcd", "bbcgbbdccibbecjbebbjbebfcjcdbcbcdbbccbjbbbbdbbcdcd", "bbcgbbdccibbecjbebbjbebfcjcdbcbcdbbccbjbbbbdbbcdcd", "bbcgbbdccibbecjbebbjbebfcjcdbcbcdbbccbjbbbbdbbcdcd", "bbckbbdccibbecjbebbjbebfcjcdbcbcdbbccbjbbbbdbbcdcd", "bbckbbdccibbecjbebbjbebkcjcdbcbcdbbccbjbbbbdbbcdcd", "bbckbbkccibbfcjbkbbjbgbkcjcdbcbcdbbccbjbbbbdbbcdcd", "bbckbbkccibbfcjbkbbjbgbkcjcfbcbcgbbckbjbbbbebbceck", "bbdkbbkdeibbfdjbkbbjbgbkejgfbkbfgbbdkbjbbbbebbeedk", "dcdkfdkdeiccfdjkkcejcgdkejgfckcfgccdkcjeecgeddeedk", "dcdkfdkdeiccfdjkkcejcgdkejgfckcfgccdkcjeecgeddeedk", "dcdkfdkdeiccfdjkkcejcldkejgfckcfgccdkcjeecgeddeedk", "dcdkfdkdeiccldjkkcejcldkejgfckcflccdkcjeecgeddeedk", "dcdkfdkdeiccldjkkcejcldkejllckcflccdkcjeecgeddeedk", "dcdkfdkdeiccldjkkcejcldkejllckcllccdkcjeeclfddeldk", "dcdkldkdliccldjkkcejcldkfjllckcllccdkcjeeclfddgldk", "dclkldkflicclejkkcgjcldkfjllckcllccgkcjflclfddglek", "lclklekflicclejkkcgjclekfjllckcllccgkcjflclfgfglek", "ldlklekflidllejkkdgjelekfjllekdllgfgkdjflelfgfglek", "ldlklekflidllejkkdgjelekfjllekdllgfgkdjflelfgfglek", "ldlklekflidllejkkdgjelekfjllekdllgfgkdjflelfgfglek", "ldlklekflidllejkkdgjelekfjllekdllgfgkdjflelmgfmlek", "ldlklekflidllejkkdmjelekmjllekdllgfmkdjflelmgfmlek", "ldlklekmlidllejkkdmjelekmjllekdllgfmkdjmlelmmfmlek", "ldlklekmlidllfjkkdmjelekmjllekdllmfmkdjmlelmmmmlmk", "ldlklfkmlidllfjkkdmjelmkmjllekdllmmmkdjmlelmmmmlmk", "ldlklfkmlidllfjkkdmjmlmkmjllgkdllmmmkdjmlflmmmmlmk", "lelklfkmlifllfjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklfkmlifllfjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklfkmlifllfjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklfkmlifllfjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklfkmlifllfjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklfkmlifllnjkkemjmlmkmjllgkgllmmmkmjmlflmmmmlmk", "lelklnkmlifllnjkkemjmlmkmjllnkgllmmmkmjmlflmmmmlmk", "lelklnkmlifllnjkkemjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lelklnkmlilllnjkkemjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lflklnkmlilllnjkkjmjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lflklnkmlilllnjkkjmjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lflklnkmlilllnjkkjmjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lflklnkmlilllnjkkjmjmlmkmjllnknllmmmkmjmlmlmmmmlmk", "lflklnkmlilllnjkkjmjmlmkmjllnknllmmmkmjmlmlmmmmlmk"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25514093;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rows = {"bdlalnkmlicllcjbadajelmkmjlfacnflbamkmjmamlaabcaca", "ddlkffbaliflefjkkegjelakajalcadllgmckdjfbabddmmeea", "lcaklbkmlidblajkkjedalakmjafekallmbdkbjmlebmabeedk", "delklakmlibceajkkebdmgekcjlfekdadammkajabegmmmmled", "bbakfdkfaiaclcjbkaejcadkajadakccammmkmjmlfledaclek", "lcdkbdkfliabadakkabjcamkajalnkbldmmmkdjelflddfalak", "acdklbkmlidlafjbaeajbgmkajllnaclamcmkajelmlamdgaak", "lflaabdfaialldjkkbgjclakmjcackcalmfmkdjmlcgmmmmadk", "aclkbnkclifalejkaebjceakmjcfekdldbbdbdjbaaadbdmlak", "lclklekaliblleakkebjagmaejclckgllgcmkcjblfaemfmdck", "lfckladdcidllcakkamjalekmjllnkbllbcdkbjmlblmmdaeak", "lclklbkdeibalejbkeajmgmkajllecnllamccmjebalmmmcldd", "decklfkalialaeakajbjaebamjalgkcclgmaccjalcgemamldk", "ldagankdciaalfjkebmjaebkfjllaaallmcgbbcmlcbfbmgaea", "lbdgfdkaeidlafjkecmjmabkfjlabadlambmkcjbleammamldd", "adlkaadmliablcakkcajbldaajlaecgflcbakajfeaaabaedmk", "ablalnkclibclnjkejajmlmafjalgkglabaacdjfamlmdmmdmk", "dddganbdlilllcakkbmdbadaajlaccglamadkdcmlbldadaemk", "lbdklfbmlibllejkkbgjmlmkmjalbcncgbfdkcjblagabacldk", "leagfakaliacaajkkeejalbkejllbkdclafmkmjflclfmfclma", "aelklekmliclafjakcmjclefmjlabcgclbfgkmjmlflddmmlck", "bdlabakacialfejakaadmldkejgdbkallccckmjmlmlfgaeeck", "ldckbnkmlicblcjkkbmdcadkmjllgkbllbbakmjmecbabbalek", "balaldbmlibbfnjkkaajegefmjllnanflmmckbcaablagmmlmd", "aflklbbmeiflaejkeabjmlmkabglcaallammkdjbbmafmdmdma", "lelkaekmaillecjbkemjcedkfjlaeabflcbmkajmlmledbmlmk", "dackbekmlidaldjkkjmjalbkajcfgkdadabdkajflabmmfelck", "lfakadkceicledjbkemjmebkebclbkblgmbcbmjeeaaegmmlak", "lackbdkmeilblnakkdmjbamkmjclgkbadgcmkajelegmaamamk", "ldlkfbkfaifalajbkbmjeabkcjllckbllcmmbbcalblmmbgaca", "lbaklfdmaidaffjakcajbldkejllakcalmamkajfebbaamaldk", "abdkbdkacicladjkadejblmfcjlackacgacgkcjbbelmmbmlma", "delkfakccibbefjkkamjaemamjllbkaldccabmcmacbagdglma", "dbckbadmcilllnakkcejclmkcbglaknllcmckbcaaalmbfalmk", "lecklnkmaidalajaadgjeadfcbglccdflmmgbmjfafaddmmeek", "aelkbdbdeiclfnjakdbjmaakfjlleanalcmabmjblflmadmamk", "bccklakfaidllejbkamdelakmjalakncgamacdjbeebdddmaek", "ldlalfkmlidcldjakjmjblekejldbcgfgbfmcmjabflmabaemk", "balklebalibcafjakcmjblekmjldakdllmaakcjmlelmmmelad", "lclkabkdeillfdjkkaejmlbkmjlleaalammckajaefammfedak", "bbaalfkfliflldakadbjelekcbglnkcllgfacmjaebaebbglak", "badklbkmaifllnjkacmjelaafjldnkbllaagkbcebclfbmeldd", "bblklbkcaicbenjakdgjmlmkmjlfgkbllmmmbajmlblmmbcamk", "leakaekflicblnjkkcmjmlmacbldakdlabamkdjblelmgmalck", "lalalabacicclajkkdajclakfjllckgalafmkcjmamlfmmmlmk", "ladkledclifcfnjbebgjmlbfejclnkaalmmccmjalblfamadma", "lfaklnddciaalajkkcmjmlakmblankcaacbmccjeabbemmclek", "dalklfkclilllcjkabmjmlekmjaaakaclmadkcjmlclmafmdcd", "aalaaekdlifclajkkbejalmambclgkclagadkbjmbclagaclak", "lclklfkclibalajaedbjblmkcjldbkcldccgkbjmbalmbaglmk"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 25514093;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rows = {"sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyCI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyCI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyCI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyCI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyCI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEEyyLI", "sssssssssssssssssssssssssssssssssssQQQQQQQEEEECLLI", "sssssssssssssssssssssssssssssssssssQQQQQQQyyCLCLLI", "sssssssssssssssssssssssssssssssssssEEEyyCLyyCLCLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCoALEEEyyCLyyCLCLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCoALEEEyyCLyyCLCLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCoALEEEyyCLyyCLCLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCoALEEEyyCLyyCLxLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCoxLEEEyyCLyyxLxLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyCCxxLEEEyyxLCxxLxLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEEyyyyoxxxLEEECxxLCxxLxLLI", "QQQQQQQQQQQQQQQQQEEEEEEEEECCoxoxxxLyCxCxxLCxxLxLLI", "QQQQQQQQQQQQQQQQQyyyyCCoAxCCoxoxxxLyCxCxxLCxxLxLLI", "EEEEEEEEyyyyCCoAxyyyyCCoAxCCoxoxxxLyCxCxxLCxxLxLLI", "EEEEEEEEyyyyCCoAxyyyyCCoAxCCoxoxxxLyCxCxxLCxxLxLLI", "EEEEEEEEyyyyCCoAxyyyyCCoAxCCoxoxxxLyCxCxxLCxxLxLLI", "EEEEEEEEyyyyCCoAxyyyyCCoAxCCoxdxxxLyCxCxxLdxxLxLLI", "EEEEEEEEyyyyCCoAxyyyyCCodxCCdxdxxxLyCxdxxLdxxLxLLI", "EEEEEEEEyyyyCCodxyyyyCCddxoddxdxxxLydxdxxLdxxLxLLI", "EEEEEEEEyyyyCCddxyyyyodddxoddxdxxxLddxdxxLdxxLxLLI", "EEEEEEEEyyyyodddxCCododddxoddxdxxxLddxdxxLdxxLxLLI", "EEEEEEEECCododddxCCododddxoddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCododddxCCododddxoddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCododddxCCododddxoddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCododddxCCododddxoddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCododddxCCododddxWddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCododddxCCodWdddxWddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCodWdddxCCWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "yyyyCCodCCWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "yyyyCCWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "yyyyoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxoWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdoWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWoWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCoWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "CCdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "oLdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "oLdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "oLdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "oLdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI", "oLdWWWWdvWWdWdddxvWWdWdddxWddxdxxxLddxdxxLdxxLxLLI"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 263755783;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rows = {"EsssssEQsssIssssssssssssQssssEsCsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsCsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsCsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsCsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsCsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsLsysssQQEsQQssysssQ", "EsssssEQsssIssssssssssssQssssEsLsLsssQQEsQQssCsssQ", "CsssssyQsssIssssssssssssQssssysLsLsssQQLsQQssCsssQ", "CsssssyCsssIssssssssssssEssssysLsLsssLELsyEssCsssy", "CQQEQQyCQEQIyQQQoCQAQQLEEEEEyyELELyQELELyyEQCCQQQy", "CQQEQQyCQEQIyQQQoCQAQQLEEEEEyyELELyQELELyyEQCCQQQy", "CQQEQQyCQEQIyQQQoCQAQQLEEEEEyyELELyQELELyyEQCCQQQy", "CQQEQQyCQEQIyQQQoCQAQQLEEEEEyyELELyQELELyyEQCxQQQy", "xQQEQQyCQEQIyQQQoCQxQQLEEEEEyyELELyQELELyyEQCxQQQy", "xQQEQQxxQEQIyQQQxCQxQQLEEEEEyCELELyQELELyyEQCxQQQy", "xQQEQQxxQEQIyQQQxxQxQQLEEEEEyCELELyQELELyxEQoxQQQC", "xQQEQQxxQEQICQQQxxQxQQLExEEECCELELoQELCLxxyQoxQQQC", "xQQyQQxxQCQICQQQxxQxQQLCxyoyCCxLyLoQALCLxxyQoxQQQC", "xEAyEExxxCCICEyCxxExoELCxyoyCCxLyLoEALCLxxyEoxyyyC", "xEAyEExxxCCICEyCxxExoELCxyoyCCxLyLoEALCLxxyEoxyyyC", "xEAyEExxxCCICEyCxxExoELCxyoyCCxLyLoEALCLxxyEoxyyyC", "xEAyEExxxCCICEyCxxExoELCxyoyCdxLyLoEALCLxxyEdxyyyC", "xEAyEExxxCCICEyCxxExoELCxyoyCdxLyLdEdLCLxxyEdxyyyd", "xEdyEExxxCCIoEyCxxExoELCxydyddxLyLdEdLdLxxyEdxyyyd", "xEdyEExxxoCIoEyCxxExdELdxydyddxLyLdEdLdLxxdEdxyyyd", "xEdCEExxxodIoEyoxxExdELdxCddddxLoLdEdLdLxxdEdxyyyd", "xEdCEExxxodIoEdoxxExdELdxCddddxLoLdEdLdLxxdEdxCoCd", "xodCCyxxxodIoCdoxxyxdyLdxCddddxLoLdydLdLxxdddxCoCd", "xodCCyxxxodIoCdoxxyxdyLdxCddddxLoLdydLdLxxdddxCoCd", "xodCCyxxxodIoCdoxxyxdyLdxCddddxLoLdydLdLxxdddxCoCd", "xodCCyxxxodIWCdoxxyxdyLdxCddddxLoLdydLdLxxdddxCoCd", "xodCCyxxxWdIWCdoxxyxdyLdxCddddxLoLdydLdLxxdddxCoCd", "xodCCyxxxWdIWCdWxxyxdyLdxCddddxLWLdydLdLxxdddxCoCd", "xodWCyxxxWdIWCdWxxyxdyLdxoddddxLWLdydLdLxxdddxCWCd", "xWdWCyxxxWdIWCdWxxyxdyLdxoddddxLWLdydLdLxxdddxoWWd", "xWdWWyxxxWdIWodWxxyxdyLdxoddddxLWLdydLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxoddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxoddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxoddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxoddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxoddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxvddddxLWLdCdLdLxxdddxoWWd", "xWdWWCxxxWdIWodWxxoxdWLdxvddddxLWLdCdLdLxxdddxvWWd", "xWdWWCxxxWdIWWdWxxoxdWLdxvddddxLWLdCdLdLxxdddxvWWd", "xWdWWCxxxWdIWWdWxxdxdWLdxvddddxLWLdCdLdLxxdddxvWWd", "xWdWWoxxxWdIWWdWxxdxdWLdxvddddxLWLdLdLdLxxdddxvWWd", "xWdWWoxxxWdIWWdWxxdxdWLdxvddddxLWLdLdLdLxxdddxvWWd", "xWdWWoxxxWdIWWdWxxdxdWLdxvddddxLWLdLdLdLxxdddxvWWd", "xWdWWoxxxWdIWWdWxxdxdWLdxvddddxLWLdLdLdLxxdddxvWWd", "xWdWWoxxxWdIWWdWxxdxdWLdxvddddxLWLdLdLdLxxdddxvWWd"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 263755783;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rows = {"EWAWCQxQssdIWCQsxxsxdELCxydddCxLoLyQdLdLxxdddxCWWd", "xodEWQEQQsQIWQsCsxQxoWLdQCdEddELsLdCdQCLxxdQCxvQQd", "xWdCsEyxxodIsWdoxCExsWLdQoEdCdxLELdCELdLxQEsCyyQCC", "xodyWCxxxWdIsQdsoxdsQyLdxCssdyxLWLdyELdLxQdddxsWQQ", "xsdCEyxxQCdIWQsQxsyxdWLEEsddddsLsyoLdLdLxxEQoxQQWQ", "xQdCEQxxxCsIysdWxxQxdWLdxoddddELWLdEdLdLxxdEdxysWC", "xsQWWsxxxodIoEdQxsExdWsdxvdEdCxLyLysdQdLyxyQsxCssC", "xQsCQyxCsECIWWsWxxoxdWsdQEddydsLsLoEsLdLxyQddyyoWd", "xosECCxxxWdIyosWxCyxoWLdxvddddELELdCdLQLxyyddxsWQy", "CWdWCCECQssIoosCxxoxQyssxCEsdEsLoLyQsLCLsxdEsxCysd", "xWdCCsxQxWdIWCsQxxExQyLdxyddsExLWLdEALdLsxyddxQQWd", "xWdEssyxxsdIyQQQxxQxdsLsxsdEsExLsLsCdLQLxxyEdysWQQ", "xWdssQxxxCQIWQdWxxyxdQLdxEEdydxLWLdQALdExQdsdxsWyC", "EQsyEyyxsWCIyEdWsCExdELdQosdCyxLWLyCdLQLsxdsdxvWQy", "xWdEQExxxWCIyEyWxsEAdELdxsdEdExLELdLdLQExQQddxvWyd", "xQdWsExxxoQIWoyCxxsxdEsdQodEsdxLWLsQdLQLyQdddxQQCC", "xWQsCyxxxWsIsWdoxxoxdsLExvsssyxLsydEdLdLxQdddxCoCd", "xEAsssxQxsdIWWdsxxQssELsEsdddCELoLoEdLQLxyQddxQoCd", "CQQWQyxxsEdIoEQWxxyxQsLdQCsdydxLyydCELELxxEEdCssQd", "xQdEWQxQxsCICEdWxxsxdsLCxEddydxLELdydLCLxxQQdxyQWd", "xQdEsoxCQoQIWssWxsQxsWLdxodydExLWLsyALEExxdEdCvoyd", "xEdWCExxQWdIWQyCoxQxdWLdxssdddxLELssdLQLyxEsCxCsyd", "xWssWoxxxEdICWdWxxsxoWLExvddsCsLWLdydLCLsyyQoxQWWd", "EoQWEyxQxWdIWCdQxxoAQWsdxyssdCELWLsCdQdLxxyQCxyoWQ", "xEdWWoyxQWCIWsQoxxExsysdxCddydsLoLdsdQdLxxdssxQWsd", "xsdWsoxxxWdICssssxQxdQLExosydyxLyLdsdLdLsxdEoxoyyd", "xEdCQQxxxosIsEdsxxosdQLsEvddddsLsLdydLdLyxdddxQQWd", "xEAEWsExQEdIWCdWxxyxdQLdxvoEsdxCEydLdLdLxxQdsxvWsd", "xQAsCExxQssIyEdsxxdxoQLEEEEsydsLyLosELELxxEdoCQysd", "CEAyQyxQQWdIoCQoxxsxsWLCxydyddxCELdLdLdExxQdCCCWyy", "EsQyQEyxsWQICosoxxsxdysExEsssdxLsLdsdLELsxdQdxyWCd", "CsdyWCECxCsIsCQWssoxdssdxCddddELWLdEdQELyxdddxyyWd", "xQdWQExxxWdIsQyQsCEsdQLsxvddCdsLWLdQsLdLxQdddxoyCd", "EWdWECxxsWdIoCdssxyxsELdEsEyddxLWydEELdLxxQddysQsd", "EWdWWsxCxCdIWoQCxxdxsELsxvdysyELWLsEsLdLxQdEdyyWWQ", "xsdWQCxxxWsIsWdQxxoAQsLCxodEddxLoLdydLEEyxEddysoWQ", "xWdCWQyxxssIWoyssxExoWLdxEEsydxCWLyQEQdLxxEEoxvWsy", "xWQEEExxxoCIWQyWsCdxdsLdxsEdsCxCsLsLdLdLxxddCxsQWC", "xsdWWQxCxEdIsCyWxxdsdEssxCdddExLyLsydQQLxxdddCCoQy", "xsssECxxsCQIssdWxsdxdQLdxsEsCdxLyLyQsQCExxyEsxCWWd", "CEdWWsxxxsdIWsQCoxExsWLCxooyddxLsLdEsLdLsxdQsxsWQy", "xEsWsEyxsEsIWEdoxCyxsyLEQyddddxCoLysdLCLxyyQdCoWyd", "xWQCWoExxoCICQdQxxQsdQLsEsdddExLELdsELELxydddxoyCQ", "xWdyEsxxxWQIosQWxxsxdELExydyddELWLoyALdLxxEssxosWd", "xodyCsxxxCdIyodoxxsAdyLdEEodCyxLWLoQsLdLyyQdsxossd", "EsssWyEQxEdICEdsososQsLCEEodddxLoLdysLdLxxddoxQsyd", "xoQsWQxxxWdICWyCoxysdQLdxCsdCyxLWydQsLdLxxdsdxvssd", "CEsWECxxsWdIWsdQxsyxosLCxydsddxLyLdCELCLxxdsdxvyCC", "xosysyExxWQIWsdWsxQxQyLsxyoECCsLyLdCdLELsxdsdxosWQ", "xWQsQCxxxEQIoodWxsssQyLdQvoyddxLWLssALdEsxddsxoyQy"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 263755783;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rows = {"pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "pppppppppppppppppppppppppppppppppppppppppppppppppO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvssqUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvssqUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvssqUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvssqUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvssAUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjvvvqAAUO", "uuuuuuuuuuuuuuuuuuuuuuuulllllllllllljjjjjjsqAqAAUO", "uuuuuuuuuuuuuuuuuuuuuuuullllllllllllvvvsqAsqAqAAUO", "uuuuuuuuuuuuuuuuuuuuuuuujjjjjjvvvsqAvvvsqAsqAqAAUO", "lllllllllllljjjjjjvvvsqAjjjjjjvvvsqAvvvsqAsqAqAAUO", "lllllllllllljjjjjjvvvsqAjjjjjjvvvsqAvvvsqAsqAEAAUO", "lllllllllllljjjjjjvvvsqAjjjjjjvvvsqAvvvsqAsEAEAAUO", "lllllllllllljjjjjjvvvsqAjjjjjjvvvsqAvvvsEAEEAEAAUO", "lllllllllllljjjjjjvvvsqAjjjjjjvvvsEAvvvEEAEEAEAAUO", "lllllllllllljjjjjjvvvsEAjjjjjjvvvEEAsqEEEAEEAEAAUO", "lllllllllllljjjjjjvvvEEAjjjjjjsqEEEAsqEEEAEEAEAAUO", "lllllllllllljjjjjjsqEEEAvvvsqEsqEEEAsqEEEAEEAEAAUO", "llllllllllllvvvsqEsqEEEAvvvsqEsqEEEAsqEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsqEsqEEEAvvvsqEsqEEEAsqEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsqEsqEEEAvvvsqEsqEEEAsqEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsqEsqEEEAvvvsqEsqEEEAsoEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsqEsqEEEAvvvsqEsoEEEAooEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsqEsoEEEAvvvsoEooEEEAooEEEAEEAEAAUO", "jjjjjjvvvsqEvvvsoEooEEEAvvvooEooEEEAooEEEAEEAEAAUO", "jjjjjjvvvsoEvvvooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "jjjjjjvvvooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "jjjjjjsqoooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsqoooEooEEEAsqoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsqoooEooEEEAsfoooEooEEEAooEEEAEEAEAAUO", "vvvsqosqoooEsfoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "vvvsqosfoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "vvvsfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "vvvEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "sqUEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "sqUEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "sqUEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "sqUEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO", "sDUEfoofoooEffoooEooEEEAffoooEooEEEAooEEEAEEAEAAUO"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 317187418;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rows = {"pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "pppOpppppppppppppppppppppppppppppppppppppppppppppp", "uluOljusuuuuujslluuujuvjulullUqjvuuljuuluvuuluulul", "uluOljusuuuuujslluuujuvjulullUqjvuuljuuluvuuluulul", "uluOljusuuuuujslluuujuvjulullUqjvuuljuuluvuuluulul", "uluOljusuuuuujslluuujuvjulullUqjvuuljuuluvuuluulul", "uluOljusuuuuujslluuujuvjulullUAjvuuljuuluvuuluulul", "uluOljuAuuuuujqlluuujuvjulullUAjvuuljuuluvuuluulul", "uluOljuAuuuuujqlluuujuAjulullUAjsuuljuuluquuluulul", "uluOlvuAuuuuuqqlluuuvuAAulullUAssuulvuuluquuluulul", "ujuOvvuAuuuuuqqjvuuuvuAAuvujjUAssuujvuuAuquusuujuq", "jjlOvvvAlljslqqjvjvlvAAAlvqjjUAsslvjvllAlqljsjjjlq", "jjlOvvvAlljslqEjvjvlvAAAlvqjjUAsslvjvllAlqljsjjjlq", "jjlOvvvAlljslqEjvjvlvAAAlvqjjUAsslvjvllAlEljsjjjlq", "jjlOvvvAlljslEEjvjvlvAAAlvqjjUAsElvjvllAlEljsjjjlq", "jjlOvvvAlljslEEjvjvlvAAAlvqjjUAEElvjvllAlEljsjjjlE", "jjlOvqvAlljslEEjvjvlEAAAlvEjjUAEElvjsllAlEljEjjjlE", "jjlOsqvAlljElEEjqjvlEAAAlEEjjUAEElvjsllAlEljEjjjlE", "jvlOsqEAlljElEEEqjqlEAAAlEEqsUAEElsvsllAlEljEjjvlE", "vvlOsqEAllvElEEEqqqlEAAAlEEqsUAEElsvsllAlElvEEsvlE", "vvEOsqEAvvvEjEEEqqqjEAAAsEEqsUAEEvsvsqjAjEjvEEsvjE", "vvEOsqEAvvvEjEEEqqqjEAAAsEEqsUAEEvsvsqjAjEjvEEsvjE", "vvEOsoEAvvvEjEEEqqqjEAAAsEEqsUAEEvsvsqjAjEjvEEsvjE", "vvEOsoEAvvvEjEEEoqqjEAAAsEEqsUAEEvsvoqjAjEjvEEsvjE", "vvEOooEAvvvEjEEEoqojEAAAsEEosUAEEvsvoqjAjEjvEEsvjE", "vvEOooEAvvvEjEEEooojEAAAsEEooUAEEvovoqjAjEjvEEsvjE", "vsEOooEAvvvEjEEEooojEAAAsEEooUAEEvoooojAjEjvEEoqjE", "qsEOooEAvvsEjEEEooojEAAAoEEooUAEEvoooojAjEjoEEoqjE", "qsEOooEAoqsEjEEEooojEAAAoEEooUAEEsoooojAjEjoEEoqjE", "qsEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEoqsE", "qsEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEoqsE", "qsEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEoqsE", "qsEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEoqsE", "qsEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEofsE", "ffEOooEAoqsEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEofsE", "ffEOooEAoffEvEEEooovEAAAoEEooUAEEsoooooAqEvoEEofsE", "ffEOooEAoffEvEEEooovEAAAoEEooUAEEooooooAfEvoEEofsE", "ffEOooEAoffEvEEEooovEAAAoEEooUAEEooooooAfEvoEEofEE", "ffEOooEAoffEUEEEoooqEAAAoEEooUAEEooooooAfEsoEEofEE", "ffEOooEAoffEUEEEoooqEAAAoEEooUAEEooooooAfEsoEEofEE", "ffEOooEAoffEUEEEoooqEAAAoEEooUAEEooooooAfEsoEEofEE", "ffEOooEAoffEUEEEoooqEAAAoEEooUAEEooooooAfEsoEEofEE", "ffEOooEAoffEUEEEoooDEAAAoEEooUAEEooooooAfEsoEEofEE"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 317187418;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rows = {"vjlOooEAppsElpqEopqjEuAAoEqosUAEvpvpvpuAqvjoljsvsq", "pvuOoopAupjpvEEjvuuuEuAApEuolUAEEoppoloApEjvlEuppl", "ufpOppvAovfEuqEllopvEpAAlEEjoUAEslpjjloplqloEEulpq", "vvuOopEAovjupEqEljopEApjuEploUAEppvosoupfvuuEpsful", "jjEOloupllpEUEplqpvjpAAAoEpqoUAjEooojopAuEuppEpfjq", "vlEOooEppujsvEEEopplEuAAspqplUApEoopopjAuEpoljslpl", "jlEOopEApffEUEppljovvAvAlEqooUAppsoooojAlqlvEpuqll", "pllOpovAolpEjjEloovuEApAsEEopUAEEvpvsouplqjoEupqEp", "pslOopEAvvjElEEEquqpEAAAoEEpjpAsvvovvopAqEuopEoflp", "vsEOljEAufsslEEEvooupAvAovEjoUAsvuopopllfEspEupvpE", "fsEOlqEApusEppEEpoovEAApoEEooUAEplpvoqjluEuoEpjluE", "qjEOoquAovuElpslojopEAAAuEEloUAEEuvvjluAlqujEEoqsE", "jpuOvoEpoqpEUEEpopoljAAAopElsUAEEvpooujluElpljofup", "vppOlopAlpuEpjEpooolEAAAlEuqoUAEspuooulApEjvsuppup", "ujEOooEppqvEjppEvqupvAAApluqjUpjEvupoojpqEvuppjluE", "qfuOlvpAufjuujEEouvjvAAAlpEooUApEsuooloApEvpEEpjuE", "fspOppvAvuspuEpEluouEAAAuEujsUqjEpuoslpllEpjEjjflq", "jsEOvqEAovpEpEEEvoouEAAjovEooUApsvvjopoAfElpEEjpjE", "ulEOspvsouupuqpjljpvpAAAplElspApElsloljAjvjpEpolul", "jfEOsjEApluEpEEEopulEuAAoEEjpUpEsvoljlopjEpoEuofpl", "qvpOlvEAvfuuuEqjpupuEuApspEooUpjEsojppolfploEEuvlp", "uvEOopvAplsEuEEjvjupEppjolqqoUAEElvloqllupvoEuulsE", "jvlOsovsuqvEvEEpvqqjjuApppEpjUAEslvovujAuEuuEuopEE", "vllOoopAoqpplEEpoopuEupApEuljUqpEuolouoApEvoEuoqpE", "pfEOlvEpuufEUpsjopovvAAAlEEojUppEpsjvuuppEpoEEopjE", "ufEOoquplpvplEEppuuDvpvpsEullUAEEooljopAupljpjufjp", "fluOvvEAuufppEEEvopqvAApolEooppsEppooupAlvuvEuofjE", "pjpOoopAlfjuupEEojqpEAAAsvEloUpEvlsvpooAuvvosEpppE", "uplOpvuAupusjEEjloulEAAAplEoppppEspovluAlEsjEEsfuE", "qjEOpoEAlvfulpsppqpuEAvjlpujsUAEplpopqpAjEluEEsjjp", "ulEOpoEAplpsUpEEluqpjAAAolqolppEEpoooooAfEsoEpuvsE", "jpuOsouAoqsEvEpEqoplppAAopEooUAEpupppqpApEpuspjqjq", "ffEOsjuAllvEpqsEooqqjAppovpqjUAEsssojouAppvupjoqlE", "qsuOooEAvfuuvEsEluouEAAAuvuopUAEEuvvoooAuEuvEEoqlE", "psEOvoEAvppslqEEojoppAAAulEqopAjEvslpouAjElvlEpvjE", "vpEOoouAovuEjjpEooupvAAAsEpopUqjEuslsuplppjpsEsvlp", "vpEOojpAvljpuEppppojjpAjpEEplUAEEuoooljAfEpjlEjppE", "jfEOopEsopfEvEqpqjulEAAAuEuplUAEEsojjulpppjjpEovEE", "pppOovEAolvuuEEjooujpAAppEEjoUAspoolvpjplEsuEEojEE", "pvpOloEpolpEvjElppovpAvjsEEloUAEvuovpplAjpvplEsjlE", "fplOsouplfsEvEpEpqvqEuAAlpppjUpEEloopulAqpjoEEojEp", "fspOvvEAovvsjpEjopoqpppAovEppUAEvpupsooAlEpopEuvlE", "uvuOsouAlquEpjElouovEAApuEpolUAEpuupsolAjvlvpEolpl", "ffEOvjEpouvEpEEEqovvEpAplpEojpAsElujvolpqEpusppjsE", "fflOoopsvpfEjqEEpqvjEpAAolppppAjEsujoquAfEsusEpljE", "qpEOvjEAupspjEEEqoolEApApEEolUApEpovsooAqEvolpjjsl", "fvEOoqpAuupujEEloqojjApAoEppspAEpvspppoljqpvEEojEE", "qluOppEApqjuvEElooojEAvAuEpjsUAEpoooppoAqpujEjopuE", "ujlOpjvAlffplEqEoovvjuAAlEEjpUqsEsuooopAjEjjpjjpsE", "pjpOpqpsvuvEjjEEpoplpppjuvEopUAEEoojoqlAjEvpEuufsE"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 317187418;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rows = {"QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJVVLvC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJVVLvC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJVVLvC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJVVLhC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJVVhhC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIJJJJJLhhhC", "QQQQQQQQQQQdddddddddddddddddddIIIIIIIIIIVVLvhLhhhC", "QQQQQQQQQQQdddddddddddddddddddJJJJJVVLvhVVLvhLhhhC", "QQQQQQQQQQQIIIIIIIIIJJJJJVVLvhJJJJJVVLvhVVLvhLhhhC", "dddddIIIJVhIIIIIIIIIJJJJJVVLvhJJJJJVVLvhVVLvhLhhhC", "dddddIIIJVhIIIIIIIIIJJJJJVVLvhJJJJJVVLvhVVLFhFhhhC", "dddddIIIJVhIIIIIIIIIJJJJJVVLvhJJJJJVVLFhVVFFhFhhhC", "dddddIIIJVhIIIIIIIIIJJJJJVVLFhJJJJJVVFFhLFFFhFhhhC", "dddddIIIJVhIIIIIIIIIJJJJJVVFFhJJJJJLFFFhLFFFhFhhhC", "dddddIIIJVhIIIIIIIIIJJJJJLFFFhVVLvFLFFFhLFFFhFhhhC", "dddddIIIJFhIIIIIIIIIVVLvFLFFFhVVLvFLFFFhLFFFhFhhhC", "dddddIIIFFhJJJJVVLvFVVLvFLFFFhVVLvFLFFFhLFFFhFhhhC", "dddddJVFFFhJJJJVVLvFVVLvFLFFFhVVLvFLFFFhLFFFhFhhhC", "IIJVFJVFFFhJJJJVVLvFVVLvFLFFFhVVLvFLFFFhrFFFhFhhhC", "IIJVFJVFFFhJJJJVVLvFVVLvFLFFFhVVLrFrFFFhrFFFhFhhhC", "IIJVFJVFFFhJJJJVVLvFVVLrFrFFFhVVrrFrFFFhrFFFhFhhhC", "IIJVFJVFFFhJJJJVVLrFVVrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "IIJVFJVFFFhJJJJVVrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "IIJVFJVFFFhJJJJLrrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "IIJVFJrFFFhVVLrLrrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "IIJrFrrFFFhVVLrLrrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "IIrrFrrFFFhVVLrLrrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhVVLrLrrrFLrrrFrFFFhLrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhVVLrLrrrFLrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhVVLrLrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhVVLrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhVVTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "JrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhLTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC", "TrrrFrrFFFhwTTrTrrrFTrrrFrFFFhTrrrFrFFFhrFFFhFhhhC"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 881078450;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rows = {"JVdQdIQddIQIIQdddJVLJQdQddvdIIQdddIIdQQdCJJIQddQId", "JVdQdIQddIQIIQdddJVLJQdQddvdIIQdddIIdQQdCJJIQddQId", "JVdQdIQddIQIIQdddJVLJQdQddvdIIQdddIIdQQdCJJIQddQId", "JVdQdIQddIQIIQdddJVLJQdQddhdIIQdddIIdQQdCJJIQddQId", "JVdQdIQddIQIIQdddJVhJQdQddhdIIQdddIIdQQdCJJIQddQId", "JLdQdIQddIQIIQdddJhhJQdQddhdIIQdddIIdQQdCJJIQddQId", "LLdQdIQddIQIIQdddhhhVQdQddhdIIQdddIIdQQdCVvIQddQId", "LLdQdJQddVQLJQdddhhhVQdQddhdhJQdddJvdQQdCVvJQddQVd", "LLLQIJQIJVQLJQIIIhhhVQJQIVhIhJQJvIJvJQQhCVvJQVIQVJ", "LLLdIJIIJVdLJVIIIhhhVdJJIVhIhJdJvIJvJIdhCVvJhVIIVJ", "LFLdIJIIJVdLJVIIIhhhVdJJIVhIhJdJvIJvJIdhCVFJhVIIVJ", "FFLdIJIIJVdLJVIIIhhhVdJJIVhIhJdJvIJFJIdhCVFJhVIIVJ", "FFLdIJIIJVdFJVIIIhhhLdJJIVhIhJdJFIJFJIdhCFFJhVIIVJ", "FFFdIJIIJLdFJVIIIhhhLdJJIVhIhJdJFIJFJIdhCFFJhVIIFJ", "FFFdIvIIJLdFVVIIIhhhLdJJILhIhFdJFIVFJIdhCFFLhFIIFJ", "FFFdIvIIVLdFVFIIIhhhLdvJILhIhFdVFIVFFIdhCFFLhFIIFL", "FFFdVvILVLdFVFFVJhhhLdvFJLhJhFdVFvVFFIdhCFFLhFJIFL", "FFFdVvJLVLdFVFFVJhhhLdvFJLhJhFdVFvVFFFdhCFFLhFJVFL", "FFFFVvJLVLIFVFFVJhhhrIvFJLhJhFJVFvVFFFVhCFFLhFJVFL", "FFFFVrJLVrIFVFFVJhhhrIvFJLhJhFJVFvVFFFVhCFFLhFJVFL", "FFFFVrJLVrIFVFFVJhhhrIrFJrhJhFJVFvVFFFVhCFFrhFJVFL", "FFFFVrJLVrIFLFFVJhhhrIrFJrhJhFJVFrrFFFVhCFFrhFJVFr", "FFFFVrJrrrIFLFFVJhhhrIrFJrhJhFJLFrrFFFVhCFFrhFJVFr", "FFFFLrJrrrIFLFFrJhhhrIrFJrhJhFJLFrrFFFVhCFFrhFJVFr", "FFFFLrJrrrIFLFFrVhhhrIrFVrhLhFJLFrrFFFVhCFFrhFrrFr", "FFFFLrrrrrIFLFFrVhhhrIrFVrhLhFJLFrrFFFrhCFFrhFrrFr", "FFFFLrrrrrIFLFFrVhhhrIrFVrhLhFrLFrrFFFrhCFFrhFrrFr", "FFFFLrrrrrJFLFFrVhhhrrrFVrhLhFrLFrrFFFrhCFFrhFrrFr", "FFFFLrrrrrJFTFFrVhhhrrrFVrhLhFrLFrrFFFrhCFFrhFrrFr", "FFFFLrrrrrJFTFFrVhhhrrrFVrhLhFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrVhhhrrrFVrhLhFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrVhhhrrrFVrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrJFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrLhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr", "FFFFTrrrrrTFTFFrwhhhrrrFTrhThFrTFrrFFFrhCFFrhFrrFr"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 881078450;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rows = {"FFFFTrrrrrIFTFFrJhhhrrJFJLhdIFrLFrrFFFrhCFFrQFrrVJ", "FFFQLrJrrrTLIQFIIhhhrIdFIrhThJrVvrIFFQQdCFFrhVdrFJ", "FFFFLIrIrrJFLFFVdhhhrQrFTdhIhFrdFvrFdIrhCVFrQFrrFr", "FFFQTIJdrrJFLFdrwhhhrrvFTdhJIIrTdrrIFFVhCFFrhFrrFd", "FFFFVrIrJITFTQFddhhhLQrFTVhdhIJLFdJIFFQhCFvrhFrrFd", "FVFQTJQrrIJITFIIVhVhrrdFVLhIhJQJFvVFFQrhCFJIQFIrVr", "FFFdTrIddrdLTFFIIhhLLdrFVrhJhFdTFIrFJQrhCJFrhFrrFJ", "FFFFTrrrrrTFJVFILhhhLrrFTdhLhIJTFrrFFQrhCFFrhdrVFL", "FFFFIrrIVrIFTQFVIhhhVQJQIrhThFdVFdrFFFrhCFFrhdrrFJ", "LFFFTrIIdLIFLFFIVhhhrrdJTrhTIFJTFrJFFQrdCJJrhdrIFd", "FFFFTrrLrVdIJQFIJhhhrrrFdrhThFdTFIJFFFrhCVvrQFdQFL", "FLLQdIrrrrIFTVdVwhhhrrrQVrhLhFQTvdrFFFrhCJFJhFJQFd", "FFdQTrrLJIdFIQFrLhhhrIrJTrhIhFddFrrFFFrhCFFrQFrQFr", "FFFFdrILrrTIIFFrVhhhrrrQVrvThFJLdrIIFFQhCFFrhdrIFd", "FFdQTrQrrLQFJFIrwhhhVQrQIrhIhJrLvrrFFFrhCJFrhFrIFr", "JFFFdrrLJrQFTQdVVhhhLQdFdrhdhFdTdrrvFFVdCFFrhdIrFd", "FFFddJQrVLdITQFrJhhhJrrJJrhTIFQVFIrIFIVdCFFJhFdIFr", "LVFFTrrrrrTFTFdrJhhhLQrQTrhThIdLFrrFFFrhCFFLQFrrFr", "LFFFVrJrrIJLTFdrJhhhJdrQJrhThFrTFIVvJFddCJJrhVJrFr", "JFFdIrQLdrdFTFIIVJhhrrrFJVhJhFdVFrJFFFdhCFFLhFrIFr", "LFdFLrJrrVdLVFFrJhhhrrJJJrhdhJrTFrrFdFQhCJJrhFrrId", "FFFFTIIrVrTFVVIdLhhhrdJFVVhThFrVFrrFFFdhCFFIhVIrFL", "FVFFVvrrrrTFVFFrVhhhrrrFTVhThJJdFrrvFFQhCVFrhdJQFr", "FFFQTrQIrLQLTFIrLJhhrrdFVLhdhFrdFrrFFQQhCFvrhVrVFr", "FLddVJrIrVdIIFdrLhhhJIvJIdhJhFddFIrFJQdhCFFJhFJQVr", "FFFFTvrIdrIFLFFVwhhhVrrFIrhThIJTddrFdIVhCVFIhFdVFr", "FFFddrrIrrQFIFFddhhhrrrQTdhThFrTFrIFFIQdCFJrhFJQFJ", "FFFdIrrrdrdFJFFrIhhhrrdFdrhThJrVFrIFFIrhCFJJhdrrVr", "FVFdTrrIrrQIVFFdIhhhrdrFTrhIhFJJFdVFFFrhCFFrhVJrFr", "FFFFVrrdJrQFTFFrLhhhVQrFJVvdhFrJFrVFFFdhCFFrhFrVIr", "FFFFLrQrVrTFLFFddhVhrrrFTrhJIIrTdIrFdQrhCFFrhFrrVr", "FFFddIJrrLJFLFIVVJhhrQrJdrhdhFrddrrFFFrhCVFIQVJIFr", "LFFFTIrddrJFVFFrwhhhrdvFTLhIhFQTFvIIFFdhCFFLhFdrFJ", "FFFFVrIrrrTFTFFdJhVhrIJFdrhJhFrTFrrFdFrhCFFrhFrrFr", "JFdFVvILJIIFTFFrwJhhVddFTVhLhFrTFdJFFFdhCFFLhFrVFr", "FFFFTrrrrITFJQdrdhhhJdJFTdhJhFQJdIrFJIrhCFFrhFIVIr", "FFFFdJJrrVJFIFFIwhhhLIrFIdhLhIrTFrIFdFVdCFFrhFdQFJ", "JFFdIrrrVrIFTFFrwhVhrIrFVLhLhFdLFdrIFIrhCFFIhFrrIr", "FFLFTJQrdITFJQIrVhhhrrdFJrhThFQTFrrFFFrhCFFJhFdIVr", "JLFFTrrrrVTFTFFVdhhhrIJFIrhLIFrJFrVFFFrhCFFJhFdrFr", "FFdFTvrrJVQFLVFrwhhhrIrFdrhThFrJFvrFJFQhCVvrQFrrFL", "JFdFIrIdrrdFTFdrIhhLrQvQTrhThFQddrrFFIVdCFFJhFIrFd", "FLFFLJJdrrJFJFFrIJhLVrrFTdvdhFrLFdVFFFrhCFFLhdIQFr", "FLFFIvrrJLJFTFFrdhhhJrrFdrhTIFrTFvrFFFrhCFFrhFIQFr", "FFLFIrrrrrQFTVFdLhhhJdrFVLhJhFQTFrJFdFdhCFFIhFrrFL", "FFdFTrrrrrTIVFFdLhhhrIvFTrhLhFrVFrrFJFrhCFFrQFrrFr", "FVFQIJrdVrQFTFFrwhhLrrrFdrhThFQdFrJFdFQhCFFrhFJrIr", "FFLQLrQrrrTFVFFrJhVhrrrFIrhThFrTFrVvFFVhCFFrhFrrFr", "FFFFLIQddrIFTFFrIJhhrrrQJrhIhFJJFIIIFQrhCFFIhFIIIr", "FFLFdrJrVrIFIVIrdhhhrdrJTrhIhJrTvrrFJFdhCFFLhFrVIL"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 881078450;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rows = {"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEiFj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEiFj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEiFj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEiFj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEiMj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxEEMMj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllxxxxiMMMj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnllllllllEEiMiMMMj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnxxxxEEiMEEiMiMMMj", "llllllllllllllllxxxxxxxxEEEEiiFpMxxxxEEiMEEiMiMMMj", "llllllllllllllllxxxxxxxxEEEEiiFpMxxxxEEiMEEiMiMMMj", "llllllllllllllllxxxxxxxxEEEEiiFpMxxxxEEiMEEiMiMMMj", "llllllllllllllllxxxxxxxxEEEEiiFpMxxxxEEiMEEiMWMMMj", "llllllllllllllllxxxxxxxxEEEEiiFWMxxxxEEiMEEWMWMMMj", "llllllllllllllllxxxxxxxxEEEEiiWWMxxxxEEWMiWWMWMMMj", "llllllllllllllllxxxxxxxxEEEEFWWWMxxxxiWWMiWWMWMMMj", "llllllllllllllllxxxxxxxxiiFWFWWWMEEiWiWWMiWWMWMMMj", "llllllllllllllllEEEEiiFWiiFWFWWWMEEiWiWWMiWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiFWiiFWFWWWMEEiWiWWMiWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiFWiiFWFWWWMEEiWiWWMiWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiFWiiFWFWWWMEEiWiWWMiWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiFWiiFWJWWWMEEiWiWWMJWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiFWiiJWJWWWMEEiWJWWMJWWMWMMMj", "xxxxxxxxEEEEiiFWEEEEiiJWFJJWJWWWMEEJWJWWMJWWMWMMMj", "xxxxxxxxEEEEiiJWEEEEFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "xxxxxxxxEEEEFJJWiiFJFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "xxxxxxxxiiFJFJJWiiFJFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJFJJWiiFJFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJFJJWiiFJFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJFJJWiiFJFJJWFJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJFJJWiiFJFJJWGJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJFJJWiiFJGJJWGJJWJWWWMiJJWJWWMJWWMWMMMj", "EEEEiiFJiiFJGJJWiiGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "EEEEiiFJiiGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "EEEEiiGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "EEEEFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWFGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJFGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGFGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiFGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "iiJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "FMJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "FMJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "FMJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "FMJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj", "FMJGGGGJgGGJGJJWgGGJGJJWGJJWJWWWMGJJWJWWMJWWMWMMMj"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 620207766;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rows = {"nnnEnlllnnnnnnxnnxxnnnxnnFnlnnnnnlnnnEnnnlnnllijnn", "nnnEnlllnnnnnnxnnxxnnnxnnFnlnnnnnlnnnEnnnlnnllijnn", "nnnEnlllnnnnnnxnnxxnnnxnnFnlnnnnnlnnnEnnnlnnllijnn", "nnnEnlllnnnnnnxnnxxnnnxnnFnlnnnnnlnnnEnnnlnnllijnn", "nnnEnlllnnnnnnxnnxxnnnxnnMnlnnnnnlnnnEnnnlnnllijnn", "nnnEnlllnnnnnnxnnxxnnnxnnMnlnnnnnlnnnEnnnlnnllMjnn", "nnnMnlllnnnnnnxnnxxnnnxnnMnlnnnnnlnnninnnlnnllMjnn", "nnnMnlllnnnnnnEnnEinnnMnnMnlnnnnnlnnninnnlnnllMjnn", "nnnMnExxnnnnnnEnnEinnnMnnMnEnnnnnxnnninnnMnnxiMjnn", "llxMxExxEllMlxExlEilxlMElMlElFpxixxlxiillMlExiMjEl", "llxMxExxEllMlxExlEilxlMElMlElFpxixxlxiillMlExiMjEl", "llxMxExxEllMlxExlEilxlMElMlElFpxixxlxiillMlExiMjEl", "llxMxExxEllMlxExlEilxlMElMlElFpxixxlxWillMlExiMjEl", "llxMxExxEllMlxExlEWlxlMElMlElFWxixxlxWillMlExiMjEl", "llxMxExxEllMlxWxliWlxlMElMlElWWxixxlxWillMlExWMjEl", "llxMxixxEllMlxWxliWlxlMElMlWlWWxWxxlxWFllMlExWMjEl", "llxMxiWEFllMlxWxliWlxlMilMlWlWWxWExlxWFllMlWiWMjil", "llFMEiWEFllMlEWWliWlElMilMlWlWWEWEiliWFllMlWiWMjil", "EEFMEiWEFixMEEWWEiWxExMixMxWiWWEWEixiWFWFMxWiWMjix", "EEFMEiWEFixMEEWWEiWxExMixMxWiWWEWEixiWFWFMxWiWMjix", "EEFMEiWEFixMEEWWEiWxExMixMxWiWWEWEixiWFWFMxWiWMjix", "EEFMEiWEFixMEEWWEJWxExMixMxWiWWEWEixiWJWFMxWiWMjix", "EEFMEJWEJixMEEWWEJWxExMixMxWiWWEWEixiWJWFMxWiWMjix", "EEJMEJWEJixMEEWWEJWxExMFxMxWiWWEWEixiWJWFMxWJWMjJx", "EEJMEJWiJixMEEWWEJWxExMFxMxWiWWEWJFxJWJWJMxWJWMjJx", "EEJMFJWiJFxMEJWWEJWxixMFxMxWJWWiWJFxJWJWJMxWJWMjJx", "iiJMFJWiJFxMJJWWFJWxixMFxMxWJWWiWJFxJWJWJMxWJWMjJx", "iiJMFJWiJFiMJJWWFJWEiJMFEMiWJWWiWJFEJWJWJMEWJWMjJF", "iiJMFJWiJFiMJJWWFJWEiJMFEMiWJWWiWJFEJWJWJMEWJWMjJF", "iiJMFJWiJFiMJJWWFJWEiJMFEMiWJWWiWJFEJWJWJMEWJWMjJF", "iiJMFJWiJFiMJJWWFJWEiJMGEMiWJWWiWJFEJWJWJMEWJWMjJF", "iiJMFJWiJFiMJJWWFJWEiJMGEMiWJWWiWJGEJWJWJMEWJWMjJF", "iiJMGJWGJGiMJJWWFJWEiJMGEMiWJWWiWJGEJWJWJMEWJWMjJF", "iiJMGJWGJGiMJJWWGJWEGJMGEMiWJWWFWJGEJWJWJMEWJWMjJF", "GFJMGJWGJGiMJJWWGJWEGJMGEMiWJWWFWJGEJWJWJMEWJWMjJG", "GFJMGJWGJGGMJJWWGJWEGJMGEMFWJWWFWJGEJWJWJMEWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWFWJGFJWJWJMiWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWFWJGFJWJWJMiWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWFWJGFJWJWJMiWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWFWJGFJWJWJMiWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWFWJGFJWJWJMiWJWMjJG", "GFJMGJWGJGGMJJWWGJWGGJMGiMFWJWWgWJGFJWJWJMiWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGiMFWJWWgWJGFJWJWJMiWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGiMGWJWWgWJGFJWJWJMiWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGiMGWJWWgWJGJJWJWJMiWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGMMGWJWWgWJGJJWJWJMFWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGMMGWJWWgWJGJJWJWJMFWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGMMGWJWWgWJGJJWJWJMFWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGMMGWJWWgWJGJJWJWJMFWJWMjJG", "GgJMGJWGJGGMJJWWGJWGGJMGMMGWJWWgWJGJJWJWJMFWJWMjJG"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 620207766;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rows = {"EinEEJWlJFGMJxWnGJiGnxMnnMFWiWWgnJiEJWJllMlWJlMjJF", "GgxMGiWGEFxnJJWWGJWnGxMGnMFWJnWnWJGJiWFnJMFWJiMjEx", "liFMFJWGJGxMlxWxGJWlGxMixMnWJnnEWJGEJWnWnMxWiWMjix", "nlJMEJWlJiGMlJWWGEWEnJMFnFlEJnWEnlGlJWnWlMFWJWijJx", "EFJMGlWGJGGnEExnGxxExJMFMMnlnFWxWJnnJWJllMiniiMjJG", "niJMGJWlnGxMnEWnlxxGnlMGiMFWnnnFWlnxnWFWFMxWlWMjJl", "GlFMnJxiJliMJJWWnJWGEJMExMGWJFWnWJFniWJWJMFWJWMjJG", "EiJMnJWGJFiMJJWWEJWEGnMEiFlWJnWgWJGlniJWJMlWJWMjJG", "EgJMEJWxEGlnEnWWFJWlinMixMlllFWniJGJxWnWlMnnJWMjJF", "GFFMElWGnllMEEExFJxGnnMGiMnEJWWiWJFFJWFWnMFWllijJn", "GnFMnJWEFGxMnnxWGiWExlMEMMnWJnninExEJWJWFMlWJWMjiF", "lnFExElxFnxMJJWxEJxnnlMGiMiWlWWiWlFJxWJWJlxWxWMjnG", "GlxMnJWxnGiMlJWWliWEnlMGiMxWnWWgiJnFnWiWJMxnlWMjJG", "iEnMGJWEninMlJWxGJWnxJMnlMFWiWnnWlinnWiWnMEnJWMjEF", "lFJMGJWGJllMnnWnnExxinMGEMilJnWFWJnxnWJnJliEJWMjJl", "GnnMGJlGnniMJnWnGiWEGJMnlMlWJWWiWEFlxWJWJlEWJWMjnn", "ngJMGiWGnlxMJEEWEJWGiJMiEMiWJWWnWliEnWJllMiWJlMjiG", "iFJMxJliJlxMJJWWnxWEnxMElMiEJWnnWJnxiWJWFllWxiMjEn", "GEnMGJlxFllMlnEWlExGxJxGlFilJFWxWxxnJWFWnMxnxWMjnx", "GiJMxJWlJliMJEWnlxiGiJMGEMxWlWWgWxixJWJWJMxWlWMjnF", "ngJEFElGJGnMlJWWFEilGJMnxMxWlWWgWJnEJWFnJMxWJWijnn", "GlJMGJWiJnlMEJxWEJWxixMnnMFWnWWEWlGlJiJlJMlWxWMjEx", "liJEnJWiFGiMnnWWGJWGGlxFxMxWJWWinJGFxWJWJlnWlWMjJl", "iEJMnlxinnGMlJWnnJWGiJMFiMGWJWWinxnlxWJWJMnEiWMjJG", "lFJMFiWEEGGMnJWWFJWnxJMFMMxllWnnilGlJiJWJMiWJWMjEG", "lFnMxJWxJFGMJExWGxixixMFEMGEJWWEWJGxnWiWnMlWJWMjJG", "ngxMGJWGJGGMJxEWGJWxGnMnxMxWnWnFiEGnJiJWJMEnJWMjEG", "nlJMGEWiJnnMJxWWFxWEExMGnMGliWWEWxxxiWinJMEWxWMjJx", "GnnMGJWlJGlMEJEWEJWlxnMnnMnWnWWgWxGxJWJWlMnnxWMjil", "iEJMnlWGFGnMJJWWnEWnnJMGEMnEJWWFWxGEJWJlJMiWJlMjJl", "GlnMFElGJnGnJEWWGiWliJMGMMlWiWnxWxFnJWnlnlnWJiMjJl", "ElnMElxEJnGnJJWWGJinElMGiMxWJnWEiJGExWJlnMxWJiMjJG", "llJMFJWxJFiMJJEWGJWxGJxEEMnWiWWiWExJiWFWJMiWiWMjix", "nFJMEixlFGGMJJWxniWnGlxniMFWiWpEWJGnnWJWJMlWJWMjJF", "GEJMxJWEJGGMnJEWlJWnGlxGxMGliFWgWJxlJWJWJMiEilMjJn", "EnJMGJWGJFnnExxWliWlGnMEnMGWJWpinEilJEJWJMxEJlMjJG", "EExMxiWGJilMlxWWGJWEEJMGnMlWJWpFWlxFJWJlJMEWiWMjJn", "GgxEFJWEJiGMJxWnGJWxEJMixMnWlWpgWJinJWnWJMnEllMjnF", "GixMEEWGJGGMJnxnGEWGxlxGlMiWJWWFWEiJiinnJMlnxWMjnn", "ilJMEJWiJlnnJExWEJWxGxMiEMGWJWWxnJxlJWnnlMEEJiMjEG", "iixMnJlGnnlnnxWxlxxGEnMGEMFWJWWxnJnFxEiWFMnWJlijJG", "EnxEGlxlnGiMnJWxlJWGGxMnEMnWJWWFnJnFJEinJMEWlWijJl", "iEJMGExGEnxMlJWWEJWlGJxGiMiWnWnxWEFFniJWFMEnxWMjix", "lgJMxiWEEFxMJJWWnJWxGJMilMxWJWWniJGFJWnnJllWJWMjJn", "inJMGEWxJGGMJJWWFiWGGJMGnMiWlWWFWJFxJEJWnMEEiWMjix", "lEnMGiWGElnMEnWWEJWnGJMGlMFWlWWgWJGxxEnWlMnWJWMjJl", "GFJMnlxiEGnMJJWWnJWxnJMFMMlEnWWxWJGEJWJnlMnWlWMjnG", "GnJMxlWlJilMJnWxFJWlEJMGlMxEnnWxWxGnJWJlFliWJWMjJG", "nnJMFJlEJiGMEJWWnEiGxnMExMlWlWWnWEGJiEJWnMFWJWMjJl", "ngFMGJxxJinnnJWWlJWlEJMilFllJWWEWJxEJWJWJMiWJWMjnn"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 620207766;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rows = {"jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkknnnlcC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkknnnlcC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkknnnlcC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkknnnlNC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkknnnNNC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOkkkkkklcNNNC", "jjSSSSSSSSSSSSSSSSSSSSSSSSOOOOOOOOOOOOnnnlcNlcNNNC", "jjSSSSSSSSSSSSSSSSSSSSSSSSkkkkkknnnlcNnnnlcNlcNNNC", "jjOOOOOOOOOOOOkkkkkknnnlcNkkkkkknnnlcNnnnlcNlcNNNC", "SNOOOOOOOOOOOOkkkkkknnnlcNkkkkkknnnlcNnnnlcNliNNNC", "SNOOOOOOOOOOOOkkkkkknnnlcNkkkkkknnnlcNnnnliNiiNNNC", "SNOOOOOOOOOOOOkkkkkknnnlcNkkkkkknnnliNnnniiNiiNNNC", "SNOOOOOOOOOOOOkkkkkknnnliNkkkkkknnniiNlciiiNiiNNNC", "SNOOOOOOOOOOOOkkkkkknnniiNkkkkkklciiiNlciiiNiiNNNC", "SNOOOOOOOOOOOOkkkkkklciiiNnnnlcilciiiNlciiiNiiNNNC", "SNOOOOOOOOOOOOnnnlcilciiiNnnnlcilciiiNlciiiNiiNNNC", "SNkkkkkknnnlcinnnlcilciiiNnnnlcilciiiNlciiiNiiNNNC", "SNkkkkkknnnlcinnnlcilciiiNnnnlcilciiiNlQiiiNiiNNNC", "iNkkkkkknnnlcinnnlcilciiiNnnnlcilQiiiNQQiiiNiiNNNC", "iNkkkkkknnnlcinnnlcilQiiiNnnnlQiQQiiiNQQiiiNiiNNNC", "iNkkkkkknnnlcinnnlQiQQiiiNnnnQQiQQiiiNQQiiiNiiNNNC", "iNkkkkkknnnlQinnnQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNkkkkkknnnQQilcQQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNkkkkkklcQQQilcQQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlcQQQilcQQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlcQQQilcQQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlcQQQilcQQQiQQiiiNlcQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlcQQQilcQQQiQQiiiNlBQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlcQQQilBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlcQlBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNnnnlBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNnnnBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlcBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNlhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC", "iNhhBBBQBBQQQiBBQQQiQQiiiNBBQQQiQQiiiNQQiiiNiiNNNC"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 785382812;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rows = {"SSkOOSOScSOnOkOkSSSOSlSkSkOSSSSSSOkOSjSOSSSSnnSCOj", "SSkOOSOScSOnOkOkSSSOSlSkSkOSSSSSSOkOSjSOSSSSnnSCOj", "SSkOOSOScSOnOkOkSSSOSlSkSkOSSSSSSOkOSjSOSSSSnnSCOj", "SSkOOSOSNSOnOkOkSSSOSlSkSkOSSSSSSOkOSjSOSSSSnnSCOj", "SSkOOSOSNSOnOkOkSSSOSNSkSkOSSSSSSOkOSjSOSSSSnnSCOj", "SSkOOSOSNSOcOkOkSSSOSNSkSkOSSSSSSOkOSjSOSSSSlNSCOj", "SSNOOSOSNSOcOnOnSSSOSNSlSnOSSSSSSOcOSjSOSSSSlNSCOj", "SSNknSnSNSNcknlnSSSkSNSlSnnSSSSSSkckSjSkSSSSlNSCcj", "kkNknnnONkNcknlncOkkONklnnnOOkOnlkckOjOkONOOlNOCcj", "kkNknnnONkNiknlncOkkONklnnnOOkOnlkckOSOkONOOlNOCcN", "kkNknnnONkNiknlncOkkONklnnnOOkOnlkikOSOkONOOiNOCcN", "kkNknnnONkNiknlncOkkONkinnnOOkOnlkikOSOkONOOiNOCiN", "kkNknnnONkNikliiiOkkONkincnOOkOnlkikOSOkONOOiNOCiN", "kkNkcniONkNikliiiOkkONkinclOOkOnikikOSOkONOOiNOCiN", "kkNnciiONkNilliiiOknONkicclOOkOliiinOSOcONOOiNOCiN", "cnNnciiONiNilliiiOnnONlicclOOnOliiinOSOcONOOiNOCiN", "cnNnciikNiNilliiiknnkNlicclnknnliiinlSkcnNciiNkCiN", "cnNnciikNiNilliiiknnkNlicQlnknnliiinlSkcnNciiNkCiN", "cnNnQiikNiNilQiiiknnkNlicQlnknnliiinlikcnNciiNkCiN", "cnNnQiikNiNilQiiiknnkNliQQQnknnliiinlikQnNciiNkCiN", "QnNnQiikNiNiQQiiiknnkNliQQQnknnQiiinlikQnNciiNkCiN", "QnNcQiikNiNiQQiiiknlkNQiQQQnknnQiiiQlikQnNQiiNkCiN", "QcNcQiikNiNiQQiiikQlkNQiQQQnklnQiiiQQikQnNQiiNkCiN", "QcNcQiikNiNiQQiiikQlkNQiQQQckllQiiiQQikQQNQiiNkCiN", "QcNcQiiQNiNiQQiiinQllNQiQQQcnllQiiiQQinQQNQiiNcCiN", "QcNcQiiQNiNiQQiiinQllNQiQQQcnllQiiiQQinQQNQiiNcCiN", "QcNcQiiQNiNiQQiiinQllNQiQQQcnllQiiiQQinQQNQiiNcCiN", "QcNBQiiQNiNiQQiiinQllNQiQQQcnllQiiiQQinQQNQiiNcCiN", "QBNBQiiQNiNiQQiiinQBlNQiQQQcnllQiiiQQinQQNQiiNcCiN", "QBNBQiiQNiNiQQiiinQBlNQiQQQBnBlQiiiQQinQQNQiiNcCiN", "QBNBQiiQNiNiQQiiinQBlNQiQQQBnBBQiiiQQinQQNQiiNBCiN", "QBNBQiiQNiNiQQiiinQBBNQiQQQBnBBQiiiQQinQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBcBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiilQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN", "QBNBQiiQNiNiQQiiihQBBNQiQQQBhBBQiiiQQiBQQNQiiNBCiN"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 785382812;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rows = {"QnNBQiiQciNiQQOiihklBNQlQQlnnSlQiiiOQSSQQSQiiNBCcN", "QBNBQSikNiNilniiihQBkNQinnQSSBlQiiinQiBQQNOSiNSCiN", "QSNkQiiONiNiQkiiikQBONkicQQBhSBlSiiQQiBkQNQSiNcCiN", "kcNOQSiQNiNikQiiiSQBlNQiQQQnhBBQiOiQSinQQNOiiNBCON", "QkNBQiOONiNiQQiiiknkBNQinQQSknBQiicQSinOONSOiNBCiN", "QBNBOiOSNSNikliiikQBBNliSQQBOBnQiiiOliBQSNQilNSCij", "QBNkQSiQNiNiQQiiiOQBBNQiQQQchBBQiiikSSSknNQiiNkCiN", "SBNBnSiOciNiQQiiihkkONQiQQQBkkBnSiiQQikQSNQSnNBCiN", "QnNnOniQNkNiQQinilnBBlQicQQShBBliiiQliBkQNQiiNBCiN", "SBNcniiQNiNiQQiiSOQBONllQQnOknBnSOknQiBQQNOiiNSCij", "kBNOQiiSNiNclQlniOkBBNQiQnlOnBnQiiiQQiSOQSSOiNBCij", "QBNBQiikNiOiOQiiilkBONliQQQccBBniiiQSiBQQSQSiNBCcj", "QcNOQSnSNiNikQiiihQnSNkknQQBcnlSSkiQQSBQQNOilNcCiN", "cBNBOiiQNSNiQQiickQlONkiQnOBSlBSiOinQiBQQNQilNBCiN", "QcNBcnnQNiNilQOiiOQnBNkiQQnBhBnSiOiOQikQONciiNBCON", "QSNBQnOQNiNiQkiiiOQlBNSinkQSkSBQiiiQQinOQNciiNOCiN", "QBNOniiQNiNiQniiiSQBkNSiQQQBhlBQiiiQOiSQQNQOnNkCiN", "kkNkQiikNkNiOQiiinQBlNQiQkOckBlQSiiQQiOQnNQiiNBCiN", "SBNBQiiQNiNiQQiiilQBONSiSnQnOnSSiOiOQikQnNSiiNBCiN", "kSNBciiQciNiQniiSnQBSNSiSQQSnBSQiickQjBQSNQiiNkCij", "SkNcQiiONiNcQQOkilSOlNQlQkOnSkSQiiikOjBQSNQSiNOCiN", "cSNBQinQNiOiQQiiiOQlSNQlQQlBcBOQiiiQQiOQnNQiiNSCiN", "QSNkQinQNiNnlQiiiSQBkNSiQkOOnSOQSiiQQiSOQNOiiNkCON", "QSknQSnSNiNiQQiiilnnSNQiSQOBOlSQSOkkOjBkQSQOiNSCiN", "QnNkciikNSNikQOkSSSkkNSkQQlOhkSniiinSjkcONQOiNBCij", "kcNBOiiSNiNiQlOiinkOBNliQQQBOBBllicnOjBQQNcSnnkCiN", "QBNBQiiQNiOnklliSSQOSlQiScQBnnSQiicOlikkSNQiiNBCiN", "QSNBOiOQNSNiQkinikSOBNQicQQBclBSlkiQSiOQONQOiNBCiN", "QBNncniQNiNikniniSQBkNkiQcQcnBBSiiiQOinQSNOiiNkCiN", "QBNBQiiSNiNiQliiShSnSNQkQQQOnllliiiQQiSQQNSSiNSCiN", "QnkknnnQNkNikQiiSOSBlNQkSQQchBOliiikQjScONQiinOCiN", "SBNcQSiQNSOiQniiinSBlNQiQQnBnBBQiiiQOiBQQNQiiNBCiN", "SSNBQiiQNiNcQQiiSkQlBNQkQQQnkBlQliikQiOOQNQiiNcCON", "QBkBQiiQNkNnOQliihQkBNQiQQQBkBOQliiQQikQOSQiiNOCOj", "QBNBQiiQNiNiQQiicnQBBNQiQQQOhnOQlkiQQSBQONQOiNOCiN", "cnNOQiikNSNiQkOniOQBBNQinQQBSkOQikiQQinQSNQSiNcCij", "QkNBQiiSNiNiQQiiinnkBlkiQQnBSBBQiikQQiOQSNQiiNBCij", "QBNBQiOkNiNiQkikilQllNQicQQOcBOQiikQQSkcnNQiiNBCON", "QkkcQiikNiNilQikclnkBNliQQQBkBnniiiQSinQQNQiiNOCiN", "QcNnniiQNiNiQQliilnBONliQQlBSknSSkiQOSBQONciiNSCiN", "QBNnniOONiNiOQiiihSBkNSkSnQnOkBQiiikQikQQNQilnkCiN", "QnNcQSiQNkOiQkOiikkOBNSiScnSSlnQiiiQlSnkQNQiiNcCON", "SBNkQiikNSNiQQlkiSQBkNQiQQQSSSllikkOQiSOnSSiinBCcN", "QBNBQiiQNiNnQQiicSnOSNQinQnBOlBQikiQQiBcQNOiiNSCiN", "ckNOQiOQNkOiQlikinSOSNQiQkOShkBQiiinQjOcQNSiiNBCiN", "ScNnOiiSNiOnQniiinQllNQiQQOOOSBQiiiQQSnQQScilNOCiN", "cnknQiiONiNiOQiiSkQnOlQiQkQBcnOQiiiQOjBkQSSiiNOCiN", "kkNOcniQNiNiOQinihQnBNQiQnlncBnQiOiQliOQQNSOnNBCcN", "kBkBQiiONSNclliiihQkBNkiccQcOSSniiknSjBQnNOinNcCiN", "QBNcOiiONkNiOQiiihknkNQlQcQBhSSSiiiOlSOOQNQiinkCiN"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 785382812;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rows = {"ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttittttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttittttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt", "ttttttttttttttttttttttttttttttttttttttttttttBttttt"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rows = {"zzzzqqzhqzPQqqqqzzqPPPqPqqqzqhJzJqqqqJqQqlqzzqqqqq", "zzzzqqzhqzPqqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzQqPPPqPqqqzqhJzJqqqqzqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzzqqqqQqzqlqzzqqqqq", "zzzzqqzqqzPPqqqqzzqPPPqPqqqzqhJQJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPqqPqqqzqhzzJqqqqqqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzQqPPPqqqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzQqzPPqqqqzzqPqPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzPqzPPqqqqzzqPPPqPqqqzqhqzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJQJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPQqPqqqQqzJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqqqqqzqhQzJqqqqJqzqlqzzqqqqq", "QzzzqqzhqzPPqqqqzzqPQPqPqqqzqhJzJqqqqJqzqPqzzqqqqq", "QzzzqqzhqzPPqqqqQzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqQhqzPPqqqqzzqQPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqzJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqJqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhQzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqQqqqzqhJzJqqqqJqzqlqQzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqqJzJqqqqJqzqlqzzqqqqq", "zzQzqqzhqzPPqqqqzzqPPPqPqqqzqhJzqqqqqJqzqQqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPQPqPqqqzqhJzJqqqqqqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqqqzzqqqqq", "zzzzqqzhqzPQqqqqzzqqPPqPqqqzqPJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzqPqqqqzzqPPPqPqqqzqQJzJqqqqJqzqlqzzqqqqq", "zzzzqqzqqzPPqqqqQzqPPQqPqqqzqhJzJqqqqQqzqPqzQqqqqq", "zQzzqqzzqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqQqqqzqhJzzqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqQPPqPqqqzqhJzJqqqqJqzqqqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhzzJqqqqJqzqJqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqPJzJqqqqzqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzQqzPPqqqqzzqPPPqPqqqzqhJzqqqqqJqQqlqzzqqqqq", "zzzzqqzPqzQPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzQqqqqJqzqlqzzqqqqq", "zzzzqqzhqQPPqqqqzzqqPPqPqqqzqhqzJqqqqJqzqlqzzqqqqq", "zzzzqqzzqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqQqzzqqqqq", "zzzzqqzhqzQPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqzqzzqqqqq", "zzzzqqzhqzPqqqqqzzqPPPqPqqqzqQJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqQzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zQzzqqzhqQPPqqqqzzqPPqqPqqqzqqJzJqqqqJqzqlqzzqqqqq", "zzzQqqzhqzqPqqqqzzqPPPqPqqqQqhJzJqqqqJqzqlqzQqqqqq", "zzzQqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqzqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzQzqqQhqzPPqqqqzzqPqPqPqqqzqhJzJqqqqJqzqlqzzqqqqq", "zzzzqqzhqzPPqqqqzzqPPPqPqqqzqhJzQqqqqJqzqlqzzqqqqq"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 731198511;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rows = {"BxyRrUykUUrUUUrrrUrrByyrUxBUyUykUyrrNBkyyxUrrBBnrr", "BByRrnykUUrxUnrrrUrrByyrUBBUyUykUykrBBkyyUUrrBBnrr", "BByNrUyNUUrUUkrrrUrrBxyrUBBUyNykUyUrRBkyyUUrrBBnrr", "BByyrUykxUrUUkrrrUrrxyyrUBBUyUykUykrRBkyyUUrrBBnrr", "nByNrUykUUrUUkrrrUrrUyyrUBxUyUxkUynrUBkyyUUrrnnnrr", "BByyrUykUUrUUkrrrUxrByyrUnBUxUykUyrrRBxyyUUrrBBnrr", "BByRrUykUUrUUkrrxUrrBynxUNBUyxykUyxrnBkyyUUrrBBnrr", "BnyyxUykUUrUxrrrrUrrByxrUBBUyUyxUykrUBxyyUUrrBBnrr", "BNyrrUxkUUrUUxrrrUrrByyrUNBnyNykUykxrBkyyUUrrBUnxr", "BByRrUxkUUrUUkrrrUrxBynrUBBxyUykUynrRBkNyUUrrxBnrr", "BByRrUyrUUrUNkrrrUxxByyxUBBUrUyNUykrRrkyyUxrrUBnrr", "BByRrUyNUUxUUkrrrUrrByyrxBBUyUykUyxrRByyyNUrrBBnrr", "BByRrUyNUxrnUkrrrUrrBnyrUBUUyUykUyNrRBkynUUrrBBnrx", "BByRrUykUUrUUkrrrUrrNyyrUBBUyUykUykrBBkxyUUrrBBnxr", "NByRrUyxxUrUUkrrrUrrByyrxBBUyUykUykxxBkyyUUrrrBnrr", "BBxUrUykUUrUUkrrrUrrByyrUNBUyUykUykrNBnyyUUrrBNnrr", "BByRxnykUUrUUkrrrUxrByxrUBrUyUyNUNkrRBUynUUrrnBnrr", "BByrrUykUnrUUkrrrUrrByyrUBBUrUykUykrxNkyyUUrrUBnrr", "BByRrUyrUUrUUkrrrUrrByyrUBBnyNykUykrRUkyyUUrrBNnrr", "xByRrUyknUrUUnrrrUrxBNnrUBUUyxyrxykrNBkyyUUrrBBnrr", "xByRrUykUUrUUxxrrNrrxyyrUBBUyUykUykrRBUyyxUrrBnnrr", "BByRrUykUUxUUkrrrUrrByyrUBBUyUykUykrUBNxyNUrrBBnrr", "BNyRrUykUUrUUkrrxUrrByyrUBBUyxykUxkrnBkyyUNrrBBnrr", "NnyRrxykUUrUUkrrrUrrByyrUBBUyUykUxkrRBkyyUNxrBBnrr", "BryRrUykUUrUNkrNrUrrByyrUrBxyUNkUykrRxkyxUUrxBBnrr", "nBnRrUnnUUrxUkxrrUrrByyrUBBUyUrkxnkrRBkyxUUrrBBnrr", "BxyRxUrkUUrnUkrrrUrrNyyrUBrxyUykUyrrRBkyyUUrxBBnxr", "BBrNrUynUUrUNkxrrUrrBNNrUBnUNUykUykrxBkyyUUrrBUnrr", "BxxUrUrkUUrUUkrrrUrrByNrxrBUxUykUykrRNkyyUUrrBBnrr", "BByxrUyxUnrUUkrrrUrrByyrUBBUyUykUykrnBkyyUUrrBxnrr", "BBynrUyrUUrUUkrrrxrrByyrUBxUyUNrUykrRBkyyUUrrBBnrr", "BNxnrUynUxrUUkrNrUrrNyyrnBxUyUyyUykrRBkryUUxrBBnrr", "BByRrUykUUrUUkrrrUrrByxrUxBUyUNkUykrRBkNrNNrrxBnrr", "BrrRrUyxUUrUUkrrrUrrByyrUBBUxUykUykrRBkyyUUrrrBnrr", "BByRrUykUUrUUkrrrUrrBxyrUBBUyUykUnNrRBNyyUUrrBBnrx", "xByRrUykUxrUxxrrrNrrxnyrUnBUyUykUykrRryyyUUrrBBnrr", "BByRrUykUUrUUyrrrUrrByyrUBBUyUykUykrRBnxyUUrrBBnrr", "BByrrUnkUUxUUkrrrUrrByyrUxBUyUxxUykrRBkyyUUrrBxnrr", "nByRrUxyUUrUUkrrrUrrryyrUrBUyUyUUNkrRBkyyUUrrBBnrr", "BByRrUykUUrUUkrrrUrrBxyrUBBUyUyUUykrRUxrxxUxxBBnrr", "BByRrUyknUrUUkrrrUrrByyrUBnUyUrxNyxxRBkyyUUrrBNnrr", "NByRrxykUUrUUkrrrUrrrnyrnBBUyUykUyUrRxkyyUxrrBBnrr", "BByxrUykUUrUUyrrrUrrBNyrUBBUyUyNUnkrRNkyyUUrrBBnrr", "BByxrUykUUrUUrrrrxrrByyrUBBUyUykNyUrRBkyyUUrrBBnrx", "UryUrxykUUrUUkrrxUrrUyyrUBBUyUykNNkrRBkyyUUrrBBnrr", "BByRrUykUUrUUUrrrxrrByyxUBBUyUyyUykrRBkyyUUrrBBnrr", "BnnRrUykUUrUxkrrrUrrByyrUBBUyUykUynrrBNyyUUrrxBnrr", "UByRrUyyxUrxUkrrrNrrByNrUnBUyUykxxkrRxkyyUUrrBnnrr", "BByRrUykUUrUUkrrrUrrByyrUBBUNUykUykrrBkNyUUrrBxnrr", "BBynrUykUUrUUkrrrUrrByyrUBBUNUxkUyNrRBnyrUxrrBBnrr"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 93868001;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rows = {"VOuuiDDikDkDkODiDODiiiDDDkViukjuikkiDDOiiOiOODkiiu", "iOuDiDDikDkDkiDiDDDiiiDDDkjiukOuikkiDDOkiOiOODkiiu", "gOujiDVikDkDVVDijOViiiDDDkgiikjuiVkiDDOkiOiVODkiiV", "gOuuiDDikDkDkODiDODiiiDDDkgiukOuikkiDDOkiOiOODkiiu", "kOuuiDDikDkDkODiDVDiiiDDDkgiukOuikiiDDOkiOiOODkiiu", "gOuiiDDikDkDkODiDODiiiDVDkgiukOuikkiDVjkiOiOODkiiu", "jOuDiDDikDkDkjDiDODiiiDDDkgiukOuikkiDDOkiOiOiDkiiu", "gOiViDDikDkDkODiDODiiiDDDkiiukOuikkiDDOkiViOODkiiu", "iOuiiDDikDkDkODiDODiiijDDkgiukOViVkiDDOkijiOODkiiu", "DjDuiDDikDkDkODiDODiiiDDDkgiukOuikkiDDOkiOiOODkiiu", "gOuuiDDikDkDkODiDODiiiDVDkgiukiuikkiDDOkiOiOODkiiu", "gOuuiDDikDkDkVDiDODiiiDDDkgiujOuikkiDDOkiOiOiDkiiu", "gOuuiDDijDkDkODiDODiiiDDVkDiVkOuikkiDDOVijiOVDViiu", "gOuuiDDikDkDkODiDODiiiDVDkgiDkOuikkiDDOViOiOODkiik", "jOuuiDVikDkDkODiDODiiiDDDVgiukOuikkiDDOkiOiDODkiiu", "gOuuiDDikDkDkODiDODiiiDDDkgiukOuikkijDOkiOiVOVkiiV", "gOujiDDikDkDkODiDODiiijDDkiiukOuikkiDDOkiOiVDDkiiu", "gOuuiDDikDkDkiDiDODiiiDDVkOiukOuiVkiDDOkiOiOODkiik", "gOuuiDDikDkDkODiDODiiiDDDigiukODikjiDDOkijiOODkiiu", "gOuViDDikDjDkODiDjDiiiDDDkgiukOuikkiDDOkiOiDODjiiu", "gOuuiDDikDkDkODiDODiiiDDDigiVjOuikkiDDOkiOiOODkiij", "gOuuiDDikVkDkODiDODiiiDDDkgiukOuikkiDDOiiOiOVDViiu", "gOuuiDDikDkDkODiDODiiiDDDkgiuVOjikkiDDOkiOiOODkiiu", "DOuuiDDikDkDiODiDODiiiDDDkgiVkOuikkiDDjkiOiOODkiiu", "kOuuiDDikDkDkODiDODiiiDDDkDiukOjijkiDDOkiiiOODkiiu", "gOuuiDDikDkDkODiDODiiiDDDkgiukOuikkiDDOkiOiOODjiiu", "gOuuiDDikDkDkODiDODiiiDDDkOikkOuikkiDDOkiOiOODkiiu", "gDkuiDDikDiDkODiDVDiiiDDDkgiukOuikkiDDDkiOiOODkiiu", "gOjuiDDikDkDkiDiDODiiiDDDkgiukOkikkijDOkiOiOODkiij", "gOuuijDikDkDkODiDODiiiDDDkgiukOVikkiDDOkiOiiODkiiu", "jOuuiDDiiDkDkjDiDODiiiDDDkgiuVOuikkiDDOkiOiOOVkiiu", "gVuuiDDikDkDkODiDODiiiDDDkViukOuikkiDDOkiOiOODkiiu", "gVDuiDDikDkDiODiDODiiiDDDkgiukOVikkiDDOkiOiOODkiiu", "gDuuiDDikVkDkODiDDDiiiDDDkgiDkODikkiDDikiViOODkiii", "gOuDiDVikDkDkODiDODiiiDDDkViukOuikkiDDikiiiOODkiiu", "gOiuiDDikDkDkODiDjViiiDDDkgiujiuikkiDDOkiOiOODkiiu", "gOuuiDDikDkDkODiDODiiiDDDVgiukOuikiiDDOkiOiOODkiiu", "DjuuiDDikDkjVODiDODiiiDDDVgiukOjikkiDDDkiiiOODkiiu", "gjujiDDijVkDkjDiDjDiiiDDDkgiuVDuikjiDDOkiOiOODkiiu", "gOuiiDDiiDjDkODiDODiiiDDDkjiukOuikkiDDOkiOiODDkiiu", "gOuuijDikDkDkODiDODiiiDDDkgiukOuijkiDVOkiOiiODkiii", "gOuuiDDikDkDkODiDODiiiDDDkDiukOuikkiDDOkiOiOODjiiu", "VOkuiDDikDkDVODiDODiiiDDDkgiukOuikkiDDOkiOiOODkiiu", "gOjuiDDikDkDkODiDVDiiiDDVkgiikDuikkiDDOkiOiOODkiij", "gVuuiDDikDkDkODiDODiiiDDDkgiukOuikkiDDOViOiOODkiiu", "iOuuiDDikDiDkOjiDODiiiDDDkgikkOuikkiDDOkiOiOOVkiiu", "kOuViDDikDkjkODiDOViiiDDDkgiukOuijkiDVOkiViOVDkiiV", "gOuuiDDikDkDkOjijODiiiDDDkgiukOkikkiDDOkiOiOODkiiu", "gOuuiDDikDkDkODiDODiiiDDDkjiukOuikkiDDOkiOiOODViii", "VOuuiDDikDkDkVDiDODiiiDDDkiiukOuikkiDDOkiOiOODkiiu"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 645401794;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rows = {"qqqLEhSaahqLoEqELhaEaEhEaLLqbhEEhhqqhLhEbqoaEhaLqq", "qqqLShaaahqLqEqELhaEaEEEbLNbqhEEhhLqhLhEEqqaShaLqq", "qqqLEhbaahqLqEqELhaELEhEaLNqqhEEooqqhLhEbbqbahaLqq", "qbqLEhaaahqLqEqELhaEaEhEELobqhEEhhqqhLhAEqqaahaLqq", "qqqLEhoaahqLoEqELhaEaESEoLbqqhEEhEqqhLhEEqqaEhoLqb", "qqqLEbbbaoqLqELELhLEaEhEbLSqqhEEhhqqhLoEEqqESbaLqq", "oqqLELaaLhALqEqELhLEaohbaLNqqhEEhhqqSLhEEqqbahaLqq", "qqqLEhaaabqLqEqELhSbaEbEaLNqqhEEhhqqhLhEEqqaaLoLqq", "qqqLEhaaahqLqEqELhaEoEhEaLoqqhEEhhqqhLhEEqqaahaLSq", "qqqLShaaahqLqEqELhaELEhEaLNqqhEEhbqqhLEEEqqaohaLqq", "qqqLEhaoahALqEqELhaEEEhEaLNqqhEEhhqAhLhEEqqaabbLqq", "oqqLEhaaaSoLqoqELhaEaEhEaLNSqLEELhqbhLhEEqqaahaLqq", "qqqLEhoaqhqLqEqELLaESEhEaLSqbhEELhqbhLhEEqoaahSLqq", "qqLLEhSaahqLqEqELhaEaEhEaLNqqhEohhqbhLhEEqqbahbLqq", "qqqLEhSaabqLqEqELhaEoEhELLNSqhEEhhqqELLEEqqaahaLqq", "qqqLEhabbhqLqoqELhaEEEhEaLNqqhEEohqqhLhEEqqEahaLqq", "qqqLEhLLShqLqEqELhaEaEhEaLNqqhEEhhqqhLhEEqqaohaLqb", "qqqLEoaaLhqLqEqELbaEaEhEaLNqbEEEhhqqhLhEEqqLahaLqS", "qoqLEhaqbhqLSEqELhabaEhEaLEqqhEEhhqAhLhEEqqaahaLqq", "oqqLEhaaahqLqEqELSaEEEhEaLNbqSEEhhqqhLhEEbqaahbLoq", "qbqLEbaLahqLqEqELhqEaEhELLNqLhEEhhqqhLhEEqLaaEaLqq", "qqqLEhaaahqLqEqELhaEaEEEaLSqqhEEhhqqhLhEEbqaShaLqq", "qqqLEhabahqLqEqELSaEaESEaLNqqSEEhhqqhLhEEqqbabaLqq", "qqqLEoLaahqLSEqELhaEaEhEaLNqqEEEhEqASLoEELqLahaLqq", "qqqLEhaaSbqLoEqSLhaEaEhEaLSqqhEohhSqhLhEbqqSahSLqq", "qbqLEhaaqhqLqESELhaEaEhELLNqqLEESoqqhLhEEqqabhaLSq", "bqLLEhaabhALqEqELhabaEhEaLLqqhEEShqqhLhEELqaahaLqq", "qqqLEhaaSbqLqEqELhaEaEhEaLLqqhEEhhqqoLhEEqqaaboLoq", "qqoLEhaaahqLqEqELhaEaEhEaLNqqhEEhoqqhLhEEqqLbhbLqq", "qqqLEhaoaSqLqEqELhaEaEbbaLNSqhEELoqqhLhEbqqaohaLoq", "oqqLEoaaaoALqEqELhabaEhEaLEqqhEohhqqELhEEqqabhaLqq", "qoqLELoaahqLqESELhoELEhEaLoqLhSEhhqqhLhEEqqEahaLqb", "qoqLEhLqahqLqEqELhaEaohEaLNqbhEEhhqqhLhEEqqaahaLqq", "qqqLEhabahqLqEqELhoEaEhEaLNqqhSEhhLqhLEEEqqaahaLqq", "bqqLEoaaahqLqEqELhaEaEhEaLNqqhEEhhqqhLhEEqqabhqLqq", "qqqLEhaaahqLqoqELhaEaEhEELNqqhEEhhqqhLhEEqqaahSLqq", "qqqLEhaaahoLqEqELhaEaEbEELoqqhEEhhqqhLhAEqLaahaLqq", "qbqLEhaaahqLqEqELboEaEhEbLNqqhEEohqqSLhAEqqSahaLqS", "qqqLEboaahqLqEqELhaESEhEbLNbqhEEShqAoLhEEqqSahaLqq", "qqqLEhbaahqLqEqELhaEaEhbaLbqqhEEhhqAhLhEEqqaShaLqb", "qqqLEhaaLhqLqEqELLSEaEhEaLbqqhEEhhqqhLoEEqqaahSLqq", "qqqLEhSabhqLqEqELhaEaEhbaLbqqhEEhhSqhLLEEqqaohaLqS", "bqqLEhaaahqLqEqELhaEaEhEoLEqqhEEhhqqhLhEEqoaahaLqq", "qqoLEhboaSqLqEqELhaESEhEaLNqqhEEhhqqhLhEEbqaahqLqq", "qqqLEbaaahoLSEqELbaEoEhEoLNqqhEEhhqqhLhEEqqaELaLqq", "bqoLEhaoahqLqEqSLSaEaESEaLEqqhEEhbqqhLhAEqqaahaLqq", "qqqLEhaLaoqLqEqELLqEaEbEaLLqqhEEhbqqhLhEEqqaahoLSq", "qqqLELaaaSALqEqELhLEaEhEaLNqqhEEhhqbhLhEEqqaahaLqq", "qqqLEhLaaoqLqEqELbSEaohEoLNqqhEEhhqqoLhEEqqaaEaLqq", "qoqLEhaaahoLqELELhaEaEhEaLNqqhEEhbqbhLhAEqqaahaLqq"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 116466388;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> rows = {"LhPAAAPAmmEmVPAPAmBPPPmMPBPPBmPVPVPVAAABVPABVPVVEE", "hhPAAAPAmMPEVPAPAEBPPPmPPmPPBMPVTVPVAABBVLABVPVVMm", "hhPAAAPAmEPmVPAPAmBPPPMPMmEPBLPVPVPVAAABVPTBVPVVML", "EhTATALAmLPmVPATAmBPVLmPPmPPBmPVPVPVAAABVPABVPVVBm", "hBPAAAVAmmPmVPATAmBPPPEMPmMPBmBVPVPVAMABVPTBTPVVmm", "hTPAAAMEBmPmVPAPABBBPPmPPmPPBmPVPVPVATABVPABVLVVmm", "VhPATAPABLPmVPAPAmBTPPTPTTPBBLPVPVPVAAABVPABVMVVEm", "VLPAAAPAEEPLVBAEAmBPPLmPPLPLBMPVPVPVAAABVPABVPVVmm", "hTPAEAPAmEPmVPAPAEBPPPMPMmPEBTPLEVPVAAABVTABTPVVmm", "LhLAEAPAmmPmVPAPAmBPMEVPPmPPBmPVPVPVMAABVLABVTVVmm", "TMPLAAPAmmPmVPLPAmBTPPmPPTTEBmPVBVPVAAABVPABVPVMTV", "ThPAAAPAmmPLVPAPEmBPPPEPPMEPBmPVTVPVAAABVPABVPVVmT", "EhPAAAPAmmPmVBAPAmBPPPmPPmTPBMLVTVTVAAABVPABVTVVmm", "LhPAAAPABmMMVPAPAmBPEPmPPmMEBTPVPVPLMAABVPABVPVVBm", "hhPAAAPETTPVETAPAmBTPPTPTTPLBmPVPVPVAAABVPABVPVVmT", "hETLEAPALmEmVPAPABBPPPmPPMTPBTMVPVPLAAABVPABVPVVmT", "EhPAAAPALTPmVPAPAmBPVPmPPMTPBVLVPVPVAAABVPABVMVVEm", "EhLAAAPAmLLmVPAPABBPMPVPPLPPBmBVPVTVAAABVPBBVPVVBV", "LMLAAAPEmmPmVPLPALBPPPmPPmPLBTPVPVPVAAABVPABVPVVTE", "hhBAAAPALEPmVBBPAmBVPPmPPmPPBmPVPMEVATABVLABVPVVTm", "EETAAAVAmmPmVPAPAmBPPPTBPmPPBmPLPVPVAAABVPABVMVVmE", "hBPATMPATmPmEPAPAmBPPEmPPmPLBmBVTVPVAAABTPABVTVVmm", "hBPAAEPABmEMVPAPAmBPPPVPPmPBBmPVEVPLAAABVLABVPVVmm", "hBLTAAPALmPmVMAPAmBPMPMPPBEPBmPVPVPVAAABVTABVPVVmm", "TMPAAAPAmmPmVPAPAmBBPPmBTBPPBmPVPVLVAAABVPABVLVVMm", "MhPTAAPAmmPMVPAEAmBPPPmEPBPPBmPVPVLVAAABVPABVPVVmm", "ThTAAAPAmLPEVPAPAMBTPPmPPLPPBmPVPVPVAAABVPABVPVMmm", "VLPAAAPAmmPmVPAPAEBPEPmPPmPPBmPVPVPVAAABVPABVPVVmm", "LLPAAAPALTPEVPAPAmBPPPmPPmMPBmPVPVLVAAABVPTBTPVVTT", "hBPAAAPAmmMVEPAPALBPPPMPPmPPBTPVPVPVAMABVTABVPEVmL", "hhTLAMMLEmPmVTAVAmBTPPTPPmPPBmPVTVPVAAABTPABVPVVmm", "hhBAAAPAmmPmVPATAEBPPVmPMTPPBmMVPVEVAAABVPABVPVVmE", "ThPAAAPLmmEmVPAPAmBPPPmPPmPPBLPVPVPVAAMBVPTBVPVVmT", "hMPATALAmmPMVPAPAmBPPPmPPmPPBmPLPMEVAAABVLABVPVVmV", "hLPAAALLmmPmVPBPAmBPPPEPPmPPBLPVPVTVAAABVTABVPVVMm", "hLPAAAPAmmLmVPAEAmBPPVmPPmPPBmPVPVPVAAABVVABVTVVmm", "hhBAAAPAmmLmVPAEAMBPPPmPPmPPBmLVPVPVAAABVPABVPEVmm", "hhPTAAMETmPLVMATBMBPPPmPPmPPBmPVPVPVAABBVTTBVLVVBL", "MhPTAAPAEmLmVPAPAmBPPPmBPmPPBVPVPVLVLAABVVABVPVVmm", "hEPAAAPATTPEVPAPAmBPPPmEVmPPBmPVEVPVLTABVPABVPVVTm", "MhPLAAPAmMPmVTAPAmBPPPmPVLEPBVPVBVPVAAABVPABVPVVmL", "hMPLAAPAmMPmVPAPBLBPPEmPPTPBBLMVPVEVMAABTPABVPVVmm", "MhPTAAPAmMMmVPAPAmBPPPmEPmPPBMPVPVLVAAABVPABTTVVmm", "hhPAAEPLmMPmVMLPAmBPPPmMTmMPBmPVPVPVAAABVPBBVLVVEm", "hTPAAALAEmMmVTAVAmBPEPmPPMPPBmPVEVPVLAABTPABVPVVmm", "VEPAAAPAELPVVPATEMBPPLmPPmTPBmPVBVTVATABVPABVMVVmL", "hTPATEPAmEPmVPAPEmBPPPTPPmPPBmPLPVTVLAABTPABTLEVmm", "MTPAAAPAmmPmVTLPAmBPPEEPPLPPBmPVPVPLATABVPABVPVVmE", "hhLAEMPATTPmVPAPABBVPPmPPmPEBmPVPVPVAAABVPABVPVVmm", "hEPAAAPAmmPLVPAPALBPPLmPTmPPBmLVPVEVAMMBVPABVPVVmm"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 53149625;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rows = {"XuaRDaKPDaRRaaaPDDhhhDJauDPPPggPgughaPuPgarKJaPzPP", "guaKPaRPhaJuRKaPhrhggKrauRPPPXhgauhhaguJJaDhRaPzKR", "XuaXPaKPhahuaaaJhDXRKXrRXPPPPhRPguhhaPuJKarJKagzgP", "XuarPaPPgRhuaaRPhDhghgrauRPDgDgPaKhRaguPPagRggPzDP", "huaXPaXPhahuRaaghXXhDDDauPPgPRJPauhhaPuPPaXhraPzPP", "guarggPghaXuaaaghXhhgLXguPPPXhDPXuhzaPuPPaKhRggzDP", "KuarDaRRKaXuaaaPXJhgRDrauPPPghJPauhhaRuPPargragzPg", "huaXDaRPhXguKaaPJrDzhLDRuPRzPXhPXuhhaJuPgXrgraXzPR", "huDKDzPPhXhuagaPhXKhDLJRuPPPKhhRauKhggDXParhgaPzDP", "hgarPaPPJahuKaaPhgghgRRauPPPPDhXauXhgPuPPaRJRazzPP", "XuarPgPRhahRaaaPJrghhJJauDRPPRRXXKXhaPuPPXRhraPzPP", "huaKDaPPhaXuaaaDhJXXRKrauRPPPRgRauhhaPuXPKrRKaPzPg", "huXgPaPghaguaKaJgJKhRgDaugXPKDgPXuJDaPugPaRhDazzPP", "huarPaPRKahRaaRgJghhgLgauPDPPhggaugRaPuPParhggPzKR", "KuaXPaPPhaRuaaaPDXKhKRXauPPDXhhPauKDaPuPPaXKJaPzPg", "huaXPaPPhaguaKaghKDhhKgauPPPKgJgauXgaPuXParhrDzzKP", "guarPgKPhaXuaaaJgXhXhKXguRPgPXRPauJDaPDgJaXhRaXzgP", "XuaJXaPzhahRagaPhrhXhJRauPPPPhJgauhgaPuPKaghgDPzPK", "huarXaPPhaRuRgaPXDhXhRrauPXDPXhXguhRgRuPgaXhJaPzKg", "XuDJgaPRJaguaaRghKDhhXraXRXPPhhRguhhaPuPJXgJDDPzPg", "huarXaRggaRuaaaPhDhRhRRguDXPgRhPauJRaRuPKXrhKaPzPK", "hgarPgKPDXguaaaPgrhhgJgaXRPPPhhPauhhaRuPPaKJraPzgg", "KuargaPRhahuaaaPXrhzhDXRuRPPgDhgauhhJPuXParhragzPP", "RgargaPPhaJuKgaPgrgRKXDauDPDPXDPauXhaPuPPaggRDPzPP", "huXJPaPzKahuagaPDghhRDDauPPPghhPauKRaPuJPXKhragzPP", "RuXJPaRRJRRuaaDghrhzKJXauPPgPgDPgughaPuPPKrgKgPzgP", "huagPaXghaXuaaDghrhXRLXaXPPPPRgXauhhaPuPPaKhKagzKP", "RuaRPaPPhahuaaRDJJXghDgauPPPPRhgauhhaJuggaXhrgXzPR", "huXRPgPPgRXuaaaPhJhhhgDguPDzPhhRauhDaPuXPargRaXzPP", "XuDgPaPPhaJuaaDDJJghhKrauPPPXghPauhDaRuPPaRggaPzPP", "KuaKXaPPDaXuaaaJhKhhgKXauPPPghhPguhhaguPgarhraPzPR", "huaRPaXghaguaaDPggDzggRaXDPzPDDPXuhgJguPPaghDaPzPP", "huaKPaPggahuaaaPhrghhgraugDPPRhRauhhaPuPgagRggPzPP", "huagDgKRDaRRaaaPhrhhhJRaugXPPhRgauhDaRugPKrhraPzPP", "huaRPaPPhahuagaPhrhghRJguPRPPhRPauhzgPugPaKhraPzgR", "huarPaPzhRhuaaRPhrhgKKRauPPgPhhPauggaJuPPaKhJaPzgP", "RuagPaRPKRhuaaaDhghRRLrRugRgXgJXguhzaPDPgaDhraPzPP", "ggaRPaPPhahuaaaPXKhhhRrauPDPPhhPauKhaPuJKaDRDgPzPg", "RgargaPPJXguaaaDXXhXhJRRuPDDKXRPaKhhJPuPPaXhDaPzPR", "hgaKPaPPgaRuaaaPhgghDLgauPPPPhhPaugRaPuPPaRKDaPzPP", "RuaXgzPPhaJuRKaPhrhRhRrgugRPXghPXuJhaPuPPagRraPzPP", "KuaXPaPPDahuRaRPgKDhRggRuPDPPDDRauXgaPuXJaDhraPzgP", "guarXaPPhahuRaDPDKDhDXrauPPPgXhXauhggguPPaDKgaPzPK", "KuXgPaPPhahuaaaPhrhRDXraugPPPDhPaughaPugPaDKJagzPP", "guagPaXPKXhRaaaPXDKhDgrauPPPPhgXauhhgRuPPaRhraPzDK", "huaJPaPPhaJuaaaPDgghhLgauPPPPhhPauhzaguPPaXRRDPzPP", "RuarPaPPgXhuaaaPgrKRhXJauPPPKhRRauKhaPuPPaDRJaXzPP", "huDJXaPggRhuagaPhrXhhJJauDPPXghPaugRgPuPPKKhraPzDP", "guaRgaXPJahuaaaPhrKghDrgugRgPhhPauJhaPugPargKaXzPK", "hgDrPgXPhahuKaaPDrXXKXDauPXgPhDPauXgaJDPPaRJraPzPP"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 830361379;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> rows = {"nnenKKrdKnrruereCrKuKKrurKrrurKUeNKrKKduenuernCnCK", "nnNeKKreKdrruCCkrCKuNKduNKrrureUsCKrKKrueeudrNnndK", "nnrnkKrCKnrruKrPreKuKKrurdrrurKUKdKrKCruKnuKrnnnnN", "nNNeKKrPKdsruCrdrrKuksrurKrrurKUKNerKCruKnudrsdknK", "enrCKKrdKNrruKCereKuesrurKsrursUKKKrCCruKnudrsdnnK", "NNNnKKrsCNrruKrerrsuKKrurKrrureUKKCrdKruenuKrnnnCN", "knrnKCreKdrCuKrkrrsukCrurKrreNeUeKKeKedudnuerNNNed", "nCreKsrsKnsNuKrNsrKuKdrurKrkerKUKKerCKruNduKrnndnK", "knrnKKkNKnrruKrereKueCrurCrrureUsKKrKNruenuKrenkkK", "NernKKrPKnrNNKkPrrKueKCurdrrukkUKKKrKKruNNuKrnnnnK", "eerndKddKdrruerPrrNuKdrCrerrurKUKCKekKruKnuKseCnnK", "ndrdKCdPknNruKrkrrKuedCurKrrukKUsKKrKKrudnusrnnknK", "ndrnKKrNNsrruCreCeNsKKrurKrrurkUKKKrKKrudkuerNnnCK", "NnrdKKrsKNrNuKrPreKuKKrurCrrurKUNNCrKNruKduKrNnCeK", "CernKKreKsNNuKrdCrKuKdrurerruNKUsdKeKNruNnuKrnnnek", "nnreKNrPNnrruCrCrrKuKKrurKrrurKUKKKrKKduKkuKresnCK", "nerneCrPKerrukrPrrKuNKrudKreeNKUNdKrKKruenuKrNnnnK", "CNrnKKrPKnrruKrNrrKuKKrurKrrurKUKKKrdKruKeuKrCCnkK", "eNrsKKdsKnrruKrPrrKukKrurKrrurKUKKKrKNruKnuKrennnK", "NnrnKKrCKnNruKCPrrsuKKruddrrurKUKKKrdKruKnkKrCsCkK", "kCrsKKrNKssruKkPrrduKKrudKrrurKUKNKrCNruKnuKrnCCnK", "CdNdksrNKnrruKrPrrKuKKdurKrkurKUNNsrKKruKnkKrnnneK", "NerndKkCNnrruKrNrCKueCrurereurKUKderKerddnuernndnd", "eCrdeCrPKnrruKrNrCKuKKrurKrrursUedCrKKruNnuKrnnnnN", "nneneKrCKsrrNCrPrrduKKrurCrrukKUKCKrKeduKnuKrnNnnd", "CnNCKCrPkNrruKCPrrNueKruredrurKUNKCrKeeuNnuesnnndK", "nnrndKdeKNrrukrkrrKuKKrurCrrurKUKKCrCeruKnuKrCsnkK", "NnrnKKrNKnrruerNsedsKKruNKreurKUKKKrKeruKduKksNNnN", "nnenKKrsKnrruKrCrrKueKCurKdeurKUKKCeKKruKkusrnCnnK", "nnrskKreKdrruCCPrrKuKKrurKrruNKUKKKrKKruKkuKrnCndK", "CCrCKKrPCerrukrCCrKuKCrurKrrurKUKKKedKduKnueredknK", "NnrdKKrsKerCuKrkrrKukKruredrurkUKCerkKrdeNusrnnnnK", "kCreKKrNKerCuerPCeKuKKrurerrurKUKKKsKKrudNuKrNNnCk", "ndesKKkPCnrruKrerrKuNsrurKrrurkUKKsrKNruKNuKrnsCdK", "nNrsdKrCKnrrNKrdrrKuNKdCdKsrurKUKdKrCCruNduKrnNNnd", "CNNCeKrdKsrruKkksrduKKruNdrruNKUKNKrKKruKeuKknndnK", "enrCeKrPKnrruKrdrrKuKKrurKrrursUKCerkCruKNuKrNdndK", "knreKsrPCNrruKrCrrKuKdCCdddrurKUeKKrKNeuKnuKrednnK", "ndedkNrdCnrruerNrrKuKKCCrKrrurKUKKsrCKeuKnuKrnnkkk", "enrneNreKnrNNKkCrCNuKKduNKrkurKUKKCrKCruKnuKrnndnK", "ndrnKNrPknrruKrCrrsuKKrCrKrrurKUKKKrKKeuKnuersddkd", "nCrCKNrPNnrruerPrCKuKCdCrCrrukKUKKKsKKruddkdrnnknK", "nNrneNrPKerNukrCCCduKKrurCrrersUKKKrKKedKeudrCndCK", "knrnKKrCCnrCuKrNrrKuNKrurerrurKUeKKsKKruKNuKrnsnnK", "nnrnKKrCNdrruKrkrrKuKKrurKrrerKUKKerKeruKkuKsCnNeK", "nnendKkdknNrNKrdrrKuksruNKreureUeKKekKeuKduKrsnCdK", "CereKKrdkeNCukrPrCKuKKrurKrrurKUNCKrKKedekuKkCnCek", "eCrnKsrPNnrruCCdrrKuKKrurCrkereUeKsekKruKeusrCNNnN", "ndenkKreKnrCuKrdrrNuNKCurKreurKUNKKrKCruKeuKrnnnek", "nerCKCrNKerruererrKuKCrurdseereUKKerdKruKeuKrenNCK"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 609275619;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> rows = {"PvPLLLPgtPttvacsLactvtsDcutcuaDuDuPDLcactPDbbbvusL", "avDLLLtgtaPtvaPcLcLavtaDcuttLPDDuPcPasscPvDcbuvPtL", "PvsLLLugtactvLsPLDcPvctasPttPPsuDtjDLDbPtvDDDuvPtL", "DvDbLLugstatcLPsPbLavttPLattPLsDPbcDaDustPDPabuPts", "PvDLLLtgstctccauLPLtvstbcttcuLJDDbbuLPastvacusvPcL", "JasLLLtguJtPvLbuLbLtvstaLusbLLacstucsPsPcPDcPbvDts", "DvuLLLtgPtcPvLPsLPLavPtDststLPJuDtsDscjPtvDcaavDtP", "DvuPLutgtJtsvatvLPLPvPabLtPcLLDuPuccLJjDPvasaPvstL", "cvDPaLcgstttvcscLDPavtPDLttPLLDcbtsPLsPccvusacvctL", "DvDLLLcgPtcJvacsLcLtvtssLttPLaDDuPbasssaPvPDcuvscL", "DvuLactgtaatvLtuLDLtvsPsLttcLLDcDtPDLPPstvbDPPvutL", "DvaLaLtgtattvccvJaPtvssPLPtbLLPPPtcaLPacJvbDuavPtL", "DvDLLLtgPaaJvLavLcPtstassttbLLDustjDLPuPtvPPubvPtL", "DvDLactguJtJvLbPLDPtvctaLuscLLPPstPuscaatvDDDcvcsL", "avPLuLugstatvLtaJDLtstabcabtLaJPPPPcLJuatPPPPuvDsL", "JvDLLLtguatscLPcLbPPvPaDsPtPPLDDbubDLDPctvPcDPvDtP", "JvDLLLtgtPcPvLtcLPLtvstDLtPPLaauubuDLPbPtvasPcvsaL", "avaPLLPgtPtJcLbsLDLtvcsbLutcLLDDPPuPLDbDtvDDbPvDcL", "avsLLLtgutctvLsuPaLbvsPsLtttLPDPstjaLDjscPusaPusaL", "cvPLLucgtaatvLcPLaPavttsLtPtPLPDstPPscscJvucPsvusL", "cvaLLcPgtttsvLasJcPtvcsaLPttLasPDubPLDbDcvbDacvccL", "avaLLuPgttttvLPPLcLtvcsPcPbtLLDDbtjDLDjstPaDcbvDtL", "cvPPaLtgttPsvcPPLDLPvtaaLttPLaPuDtsuLDustvbPDavcsP", "cvaLuLugttaPvatcPbLbvttDLtbbLPPcDtcuaPbaPvaDPuvuas", "DvDLLLugsttsvcauLaLtvttDLtPtLLJDuujPLDjPtvaDDcvDtL", "avsLLctgttPtcLsaLDcavctsctPtuLPDPtcaLJjDPvuPDPvuaP", "JvaPLLPgstttcLcPPccbvttPLtttLLDbDtPuLJuDcvDDbuvPtL", "aasLLLtgtPPtvLbuLDLavPaDLPtPLLJbuPbDaDuatvubPavscL", "JvuLLLPguPatvaaaLPctvPPDLabPLPsPstcuaJbDPvbbcsvDss", "avaLLLugttatvcacLaLtvttPLttcLLsDDtsaaPaDtPDPbavDtL", "DvaPLccgtaPPvctsLaPavttPLtttLPPPDbPaLDsatvbPacvstL", "DasLLLtgttctccccLDLbvttDLattuLDPDtjaLDjPtvDDccuctP", "PvuPaLcgttttvLssLDLbvttsLastLLsDbtbuLsaDJvPsuauDcP", "PvDLuutgtttPvLPPPPctvsaDLtttLLPDDPPPLcPstvDbcsvPcL", "JvPLaLtgtPttvLscLDLPvtabLtPtLPacDPjDLcastvuPacvctL", "PaDLLLugttctvLcPPcctstPDctttPLDbuPuDasjDtvDsbPvDtL", "DvDbuLtgtttsvLcuLbLtvtPDsPbtLPPcDPccLDbstvbDusvsas", "cvubuLtgtJtJvLacLDLbvPtaLatbuLacutucssPccvaPuuuuas", "PvuLLucgPtPsvLsaPDLasttbLtbtLLaPPtuaaDPPtvDbcuvDtL", "DvDLLLcgPtPPvaaPLPLPvttDLattLLDbDtbcscbDtPabuPvDcP", "DvuLLctgttttvLPuLcPtvcPaLtPtLLsDbtuuLcuccvDDcavDtL", "PvPbLLcgstttvLbvLDLtvttDLPsPLaaDDbsaLDPaPvDbacvutL", "aaaLLLtgtJtPvLcuLaLtsstDLtPcPaDcbtjcLDacJvPDPuvPsP", "DvsPaLtgPttPvaaaLPctvttPLuttPaabPtucLssDtvPsbsvDaL", "cvsLLLPguaPtvLbaPPLtvttPLuttLLsDbtsPLDuacvuDuavutL", "caDLLLPgPPttvLbaLbLtsPtPLasPLLDbDusDLssaPvDscsvssL", "DaDLLctgPtttvLssPbLPvPPasattPLDDDtPPLDsDJvPcDsvDtL", "cvPLLLtgtPatvLbaLaLPvPsbststuLabstbcLJPDtPPccavctP", "PaPbLutgPtPtvLPvLcLPvcssLttbPLaDPbjDLPPDtvaDPPvcaL", "DvPPuLPguPctvLsaJDLtvtPaLPPtLLJDDtsDLDaPPvDDbsvDts"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 157189536;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> rows = {"ubfxpTzuuooBpbTxuxoxfzxvzpxxxpubuBvpuufxujzxvopfvz", "ubfxbTzBpufxfoTxuovBfbxuzuxxxxupvzubupfxojoTzbzfoo", "ubfxToxToufTfbzTuBuxfzBzBuxxxxupTBoBoufxujuxxpbfou", "BbfxppxuuufxfbzxuxuxfbxzzTxxxxzbububopfxpjuxxbTfxz", "TzfxbpxuBufxfTpxuxvxfbxuuopxxxuoupopupfxujuxvovBxu", "pbfzTBouuufxfTpxuooxfpxuuTxxxxuTubuzuufxujBTxpbfxu", "ubfxopououfxfbpxoxuxfbxuuoxxzouTubuBvvfxpjzxxppfxo", "TBfxooouuufxpozxuxvxfzBuppxxxoubTBuzuufxpjzxxTbfxu", "ubfBTTzzpofxfzvxoxpxfbxvuTxTxxubuzuzuuTxzjopxbbfxT", "pbfxbTxuoToxfzvTuxuxzoxTBpxTxxuTppubBufxujuxxTTfxu", "ubfBozxuuufxfopxTxuvfzBuuupTppuovovbuufTujopxoTfxu", "TTvBppxTuofxfvoxTxuxfvxuuuxxzoTTuoubBzfxojuxxppfou", "TzfxpTzuuBoBfvfxuxoxfvxuuuxvxxzbubopBvfxpjzpxTTfvu", "uTfzboxzpufxfbvTuxpxfppzpoxxxozpvouBuuTxojuTxTbfxz", "uofxBBozuBfxfzpxTxpxfzpvpTpxxxuvububovfzzjopxbvBoo", "uofBpzxToufxfvoxoBoxfbxuuuxxxxupTzzzuufxzjzxxopfxu", "uBfxToxzuufxpbzouovxfzBuuuxxxxuvTbubuvfxojuxvbTfxo", "ubfxpoouuofxfvfxvxuvzbxuuupvxxpvupvBuufxujupzzbfxz", "BzfxbuxTBufxfzfTTxvxfpxuupxxxouvTzuTozfxojuxxzbfxu", "uzfzbpxuoufxfboxTxuxfvxTuuxvxopbTpvbuufxujBxxzvfxT", "uofzpBxTuofxfTvxuxuxfpxTuupxpxuoTbzzuzTTzjuTzzzfxT", "uzfxBpxBuuoTfozxvouxfbpuuoxxpxuTpouTupfxpjuxxTpBxo", "TofxoBxuuToBfvfxuxuxfbxuzpxxzxzpTzubuufxujBpxozfxu", "pofxbuouBTfxfbvooxoBzbxzBuvTxxubppoTouTxujuxxpbfxT", "BTvxbzxBuufBfTzxoouxfvxuuuxxzxTTubuBvufxujuxxozfvu", "uBfxBBxzpBfxpvoouxuxfoxuuuxxxpubpouTupfTzjoxxbTfxT", "uBvxToxuuufxfvTouxpxfoxuBpxxxxToububuvTzojoTxzzfoz", "pbfzbpxuuTfTfooxvxuxfbpvuuxxppzvuoopozfzujBxzbbfxo", "uofzboxuoofxfbTTvxuxfbpvuoxxxxzpvouzvufxpjuxxoTfou", "ubvxTuxTBufTfzpxoouvfoxuuuxxpouvuzvTuufxujuxzbbfxo", "pzfxTuzupTfxfbTxTBuxfbxupuxxxxTvuouBuufxujuxxTpfvu", "pofxppzzoufBfToxuxvxfoBuuopxxxpTppuTBufxzjBxxbvfxu", "pBfxpTxupuoxfbpxuxvxfopupuvxxxpbupzTuuTxujoxxbvfxz", "ubfxoBzBBufxpbTxuxpxfpxuzuxxxouTuzvboufzujuxxppfxT", "BzfxBzxuuBfTfTfxuxuxfvxTuuvxpxToububvufxujoxxzvfxz", "uBfxboouuBfxfTzxoBuxfbpuuuvxxxubvzoboufxujuxxbzfxu", "uzfxTzxupTfxpzTTTxpxfpxupTvxxxpovbubvufTojBxvozfxT", "TTfxbzouBBfxfbvouxpxfoxvuopvzxTbuBubuvfzojupxTbfou", "TTfxbzxupofxfbvxvxovfzxuupxxxxpppbzzBufTujuxxbbfxu", "BBfxozxBpTfxfozToouBfvxzupxxxxppubobvzfxujoTxppfoz", "BovxoTxuuofxfbTouopvzzxTuTvvxpzbuBzpuufTojuxvpbfxo", "ubfBbBxuuufxpTvxuxuxfpxTpppTpououbopupfxujuxxobfvu", "ubfxBTxTuufxfozTvxuxfbxuBoxxxppppbuTovfxzjuxxzzfxu", "pTfxTTxuoufxfboxuBuxzopTzuxvpxubupzbBufTujuxvbbBou", "ubfxBzxzuuoxfooxuxoxfoxvzTxxxxToububuzTzzjuxxzvfvu", "TTfxbBxuoufTpvpxTxuBfpxuuuxTzpzbuozBupfxpjuTzpbfxu", "ubfxopxuuuoxfbpouxoxfvxzuTxxxxubvpupuzfxujuTxTbfxu", "uTfxouxBuofxfzvovxpxfbxupuxxxpuvpbobupfzpjupxzbfxu", "ubfxboxuuToxfzoxuouxzvxuBoxxxpTouBvzuufxpjzxxTTfxo", "uofxBuouuufTfoTooxoBfpxzuTxTzxuTuBupuufxujzxxbvfxT"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 135782490;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> rows = {"aaHsSHRSJxSJJlTSrrlaRaSRraaSralJRlsslsJsHsJRaaSlar", "HHHslHRSJxSRsHrSrrJHSHSJrssSrJXJHlaJHRRSRlslSRSRar", "aSJJSslSsxSJsTrSrrslSallrSHRRsHJTRsssRsSSlsRSHaRar", "RSJTSRHHJxSTsHrSrrlTRRlJrSHSrHXJTJsHlXRsHHJJRRSHJr", "RaaslRRSJxSTTJrSrrJXllSJrSHSraTRXsRRaaJSHHTJSRSHJr", "JSJaSTTHlxHHJTrSarJTSllJrSHSrJTlHssHllsSSlJJSsSSTl", "HaJJSXTSaxSJTJrsrrHXSllJrSHSrslJaHsJHXsSSsaRSsSRJr", "aSlJSTRSJxsHJHrSrHJHSTSHsaHSrJXaTHHRlRJSRsHJRHalTr", "aaJTSXRSJxSHTJrSrHHXlRalrSssrHlRalsRHlJSSlHJSaTHTr", "HSlJSsHSJxHTsTTSrrsTSaSJsSRSraXJaJaRsaJSSssJRRSaHr", "RSHsSsXTsxsTsJrsrrJaSTSRrslRrHlJXJHsHlJTRrTRSsSHJr", "RHaJHRlHsxSTJJrlrrJaRlaRrSasRJTRHlaJasaTHlTJaHSRTr", "JSJJSXTTJxsJTHrlrrHlllaHrSsRrsXJTHRJlXasSaJJakalJl", "HSJTHHlSlxSTHHrSrrsXSHaHrSsSrssaRRTHalJSSlsJSsSRHr", "aSaJSsTSJxHTHJrSrrsHSlSHsssRrJXJXsRHssJSRassaRTHJr", "JSHslsTSaxSHJJrsarlaSRlJrasRrJTJaHaJasRSSsssSkSRTl", "HSHTHslSJxSJHJrSrrJXSRSlrsaSrJlaHlRRTRJTSrHlSsSHJr", "aSHaSHHSlxSRJHrsrHsaSHaHrSRSraTlaHHRHXJSSlJlSHSlar", "RaJJHRRHlxsJJJTSrrlHlRSlrSHRrHlJHHRJllsSSraJSkSSTr", "HSaTSRXHlxSHHTrlrrHTSaSHsSaSRJHlaRasTssSSsTRSsSaJr", "JHaaHXXSaxSJHlrlrrsHlTSRrSaSrHlJHJaRsRaSHaHlSRSSJr", "JHHaSTRHJxsJJHrSrHHHRTSJraaSrsTlXRaHHaJTHssJaaSaTr", "JaaJHTTSlxSJJTrSrHJaSTSHrSlRrJXJRJsJaaRSSHsJasSaJr", "aaaJSRHTJxHJHlrsarJXlRaJrSHSRsHJRJaRaXRTRHssSHTHJr", "JalaSXXSJxHJHlrSrHHHSaSRrSRSraHlTHaJHlaSSHalSHTaHr", "JSJJSsXSaxsRJlrlrHlaRHSlrSRsRHHaRHTJaaaSSHsJSHaaJr", "HSJTSHXSsxSHsHTsrrlaSTllrSRsrJTJaHTHTXJsHlaJRHSHJr", "JSJTHRHSJxsJslrSrrJXlHSRsSHsraXJHsRHssRsHHHsSaalHr", "aSlsSsXHlxSRJJTlrrHlRlaHrSsSrJXlHlaJsasSSaasRRSRar", "RSlTSRlSaxSTHJrSrrJlSaSRrSRsraslTlHJlRJTRaJsSHaaar", "RHHJHTlHJxHJJJrSarslSlalrssSrsHRasHsllaSSaaJaRalHr", "JSaaSRTSsxsHTJrSrrlaSRSlsSsSrasRHsHsaXJSHsTRSaSSHr", "RHHJSsRSJxHJJTrSaHJXSHaJrslSrsTRRsTJHRRSSaTJRaSaTl", "aHHslXTHaxSJJJrlarJlSlSJraaSraTlHRRsalaSSHHJaaSlJr", "JaJJHHHSaxHHHJrSarJlSaSJrSRSrasRaRHJsRJSRraJSRSRHr", "HSJaSHTSJxHRHlrlarslSHlHrslSRsHaTRHHsaaSSrJJasSHHr", "JSHaSXHSaxHRJJrSrrJHSTSJraRSrHsaRHBJHRJSSaHJSaSaHl", "RHlaSTXHsxSHTHrsrrJTRaSHraaRrssJXlRJTsJsHsHsSsTlar", "HSJJlHXSsxSJJHTSrHJaSRSJsSaSrHlJXlTslassSsTJSRSSar", "aSJslsRSJxSJTJrSrHHTlTSJrasSrJHaTJsJasaSSlTsSaaHar", "aSJJHXlHJxSRsJrSrrJHSHSJraRsRJHRaJRJHlRSHsJJRRTaHr", "JaaJSTXTsxHJTlrSrrJaSHSHrSaSrJsJRHRHalsSSaHRRaTSJr", "RSJJlHlSJxSJJHrSrrsTSaSJssaSrHlaRRsHTssSSHaRSsSHJr", "JSJsSXHSsxSRJJrSrrJHSRaJsSlsrasRXJHJsRJsSrTlSkSlJr", "HHlJlTlSsxSJJJrSarHlSlSRrassRJXJasHJHXRSRHalSHSaJr", "JHlJSRXSlxsRsTrSrrlTSRSlrSlRrJsJRRHRlXaSSaHlSkaSal", "JSaaHHHSlxsHJTrSrHlHSaSJrsRSrJHaTsssTaJSRaalaHSRJr", "HHaJSHHTaxSHJJrsarHXRHSJrsHSrsHJXsRssaRSSHasSaSlHl", "JaJJSTHTaxSJsJrsrrHTSHSJrSRSrHsaHRsHTXsTSrHJRkaRJr", "JSlsSXXTJxSJHJrSrrsXSalRrSHSrHXlXlaRssJsSlsRSsSSar"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 544483796;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> rows = {"plpMIJlaXFMlJClJXapIDJIlpaplWXCCpIIaapllWlCMppCIJp", "IalapJJllFJpXClJaapWaIaJpCpXlpCCplIJJaJlaICMWpCIMp", "pJWapXJWDFJpJCXaalaMlWlJICpDlpCCWlMIJaJJaJCJppCIJp", "papMIXJlIFWlJCpaMppWaIMWpCWDMpCIXJIJJpIJIXClpMCWJp", "pJplaIJIDFWlJCXJappIDWXJXCpXMpCIpIMaJWXalIClpMCCJp", "IJllIXJJXFWMIClaXaaWllXWpCWlMXCCpIJaapIaaMCIIpCIXX", "lJpIpJlaXFapICpaXpppMWllpapaJaCCXaMMJalJIlCMWIClMp", "IJpMpXllIFWpJCpIIppMlIllpCpDJpCCXJMaapIaaMCMppCWXp", "IJpqpJMWDFMpJCpJDlpMWlaJpCpXJpCCpJJMapIMaIClIIClJp", "pXWMpWMWXFJpMCpIMpMaaJaapapaMpCCpJJJJWIlIJCJppCIMX", "IJlaaWMIDFJMICXIappIMlMJXCMlWXCCpaJMJpJJMlCMpMCMXM", "lJWaIIXaaFJpMCpJalpWDlaJIapDJaCCpJWIJpJlaICJpICMJM", "pXlapJJJaFJpJCpIXaMIWWaJICMlMXCCXaMJaaJMMJCIpMMCJp", "IJpqaJJIlFJpJCXaIlaaMIlJpCplJpCCplJJIWJMWMClppCWJp", "pJpIpJJlIFJpXXpJDappalXWpCplJpWIpIIJJpXJIJCMWpCMMp", "llpIpIJaXFJMJCpXMpMpMWlWpCWalpCCpIJaWpJJalClpMCCap", "lJWIpIlIaFJpXCpaIpppaJalXaWDlpCCplIIJplMMXCIIpCIJX", "palqaJXJDFJMICpJXpapMlMJpCpalpWCWIJaaWXJMXCJWpCMMp", "plpqpJJWIFalMCpaIaMIDJMaICMDMpCCpIJJapJlIMClIpCWap", "papMIIJlXFapXCpJDppMaJMaICpaWaCIpJJIIpJaWJClppCCaM", "lapapJXlXFapICpJMppIlIaJXCpXMaCCpaWaJpIllXlIIMCCXX", "pJpMpXMaIFMpMCpaMppMWJMWpCpDJaCIpaIaJWJJIllJppCMJM", "pJpapJlaaFWMIClXIapalIIJICMDJpWCWlJJJpXMllClppCCMp", "pJpIpWJIaFWpJCpXappIDJIapCpMJaCCpIJJJpIJMJCMIIMlJp", "pXWlpJJWaFMpICpJDaMWWlIJICpMMpCCpJWMIpIllXCJWIMlJp", "palapWJWlFMpXCXIIppMlWIapCpaJaWCpJIJIpXMWJCJppCWXM", "plplpIllDFJlJXpJMpppWlgWICpXJpCCWJJMIpIJIlCMWICWMp", "IlpIpWXJlFapJClJMlpIWJaapCMMWXCIpJWJJplMMICJpMMlMp", "lJWMIJJJXFMMIXpIMpMplJalpCpllpCIWJMIJpJMlICIppCMJp", "pJpIaJMJDFWpMClXIpaalIIJICpaJXCCXlWJJpJMlIlJppMMap", "pJlMpJJllFJlICpIIpppWllapCplJXCCXIMIIpIaWXlJIpClJX", "plWIpIMWDFalMClJDpaIaIlJpCpDJpCCpJWJJpXJMMCJIICMap", "plplIJJlDFMpJCpJDlaaaJIJpapMMpCCpJJMIpXJMMCJppCMJp", "pXWlaJlIIFJMJCpJXpaaDJIapCWXlpCCplJIWplaaMlJpMMlXM", "plpMpIlIXFWpJCpIXpaWMWIWpCWaMpCCpaIJWWlJlJCJppClXM", "lapapJJalFWpICpXXpMaMJMJpCpXJpCCpJWJWWXJlMllWMCCap", "pJplaXlIlFapJCpJDppMWWalIaMXJpCCXaMJWpJalICIppCIJp", "pJpIaIMJIFJpMCpaappMaIlJXCplWpCCplJMWpJJIllMpMClap", "IapMpIXaaFJMJCpIappIMJXJXCpMJpWCpaWMIaJaIXCIpIClMM", "lJllpWlJaFMpXCpJIppWWllapCWllpWCpIJMIplJaXCIpIMIap", "pJpqIJJWlFMMJCpIMlMWlJMJpCpalpCCpJMaIplalllIIICWXp", "IapapWXJlFJlMXXJXppMaJMJpCWMJpCCWJJMJpJlMMCMppCIJp", "pXlMIIMWaFJMXClJIppWDIIlpCpalpCIplMIJWJJaIClWpCWJp", "pXpIpJJWlFMpICpXDppWDJIJpCpMJaCCpaMJapJJMXlJppClMp", "pXpqaWXIaFapJXXJalpIDIalXCMMWpCCpaIIJpllaICIIpMMJX", "IJplIJMIIFJpMCpJMppMlJlWpaMMJpCCWJWJWpJJllCJppMIJM", "plpapXJlIFJpXCpJDapaMJMlICMMWpCCplIMIalJIMClpICWap", "lJplpJXIIFJlMXpIMppaDJMWpCpDWpWIpIJIWaJaIMCIpMMMJX", "IJpIIJJaIFJlJCpXalMMWJlJpCpXWpCIpJJaapJlMlCMIpCIJM", "lXplpXMaDFapMClXIpMaMWXJpCMDJpCIpJIIWaIMWICJppCWJp"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 116755956;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> rows = {"CvOrrbQCrvzQzzzQrQzbzzQbzWzzvCvMBzCQWWWCWQzzbvBQCB", "zQzQfbvzvzQCvQWzdQvzOzObrrQzzCzMvMCvWzWzQBzvbQzQWz", "rzrzfbQnzQQOvCOQBWvbrQOQEWzzvkQMvMzvzWzCWBWzbzzQzb", "AQOzvCzzzQvzzcWrBQvzCvAQErQOzCvMBMBvWQrQWrvBbzzQWQ", "rvvOvCzCzvzQCCzzdWzbrvzbrOvzCvzMvvCvWzWCWQWzbvBzCQ", "CcrzzbzzzzzzzzWzzWzbCzQbrOvOCCvMCMBQBWzzCQvzbzBvzB", "CzvOvbvQvQzCCQzzzvQbOvzQQzzOzCvMzzzzWQrzWzzzbvzOWQ", "rzrrzbvQvvvzvQzQzvCzrvzQQrzOvzQMBzBQWWzQWrvCvvBvWQ", "CczQzbvQrzvCzzzrdWvbCQAbzzvOrzQMzzCvzWWQCQWCbQvzWB", "zzrQzbzzrvQzrBWCrWCzrvObrzvOzzzMzvdQWWrQQQWObvzvCB", "CvOQrCQQvQzzCzzzrWvbzQQbzrQOzvrMcvzQWWWzWzWzbvBQCb", "AvrrrCQCzvQQvQzzdvzzzzAbQrzzvvQMvvdvBWrrWzWzbvvvzz", "zQzzrbznvQQQvzWzrQQzzCQbzzvOzvQMzMdzzQzQWQzOvQvQWQ", "zBrrzCzCBzQzvzWQrWzbCzQQrrQCvCQMzzzvWzWQQzzvvvvQWb", "zvzzzbvzzvvQzQWQrWzbCzzbErzCvvvMBMCQWQrCWzWzbvzzCz", "zvrQrbCCrvvOrzWCzvvbrCObQzCCrzvMvvBzWzrrWQWvbzzvWb", "zczQfbvQBvQzCzOCBWvzOzAbzrCCCvvMvzBQzzWCWQvCbQWvCB", "CQOzzbvCzzzzrBWQBWQbCQAbzOzzCCzMCzzQzWzzWrWOvzzvCB", "CBvzfbvCrzzCCCOCrWzbrQOQQOvCvCrMCMdzzzzzQBWvbzWzWz", "zQvzzbQCzzzCzcWzdQvzCQObQOvCzkvMzvCzzWzzCrzCbQzzWb", "zzvrrCvzrQvQvQOQdQvbCQObrOzbCzQMCOzzBWrQQBzCvzvvCQ", "rvrQvbzCzzvOzCzCzWCzzzQbQOvbrCQMzOCrzQzQWrzzvrvvCQ", "rzvQzbQQTzvzrzOQBWCbzCzbzzQzzkvMBOCzWzzrWBWvvQWQWQ", "zQvQzbQzBvCQzCWCrWQbzvQbEOzbCzzMCOBQWzrzWQvCbQWzCB", "AvzzrbQnvQvCCQOrzvzbCzQbrWQbzCOMCzBQWQWQWQvvvzWOWb", "rzvrzCQQzvvQzQzzBvQzrQzbQrQOzzrMzOzvWQzzQzvvbQvOzQ", "zQvrrbzQzvzBCCWrBvQbzzQbEOQCCCzMzvCzWWWCCzzCbvzzzQ", "zQrzzbQnBzCzrQWQdvvbOvQbrWzCrvvMvvBrzQWQCrvCbzvvzQ", "CvzQvbzzvzQQvCWzdWQzzQzbQWQCrvzMCOdQzWzQQrWvbQBTzB", "rvzzzbzCrQQOzQzCrQvbCzzbzzQzzzvMCzdvWWWCWzzObvvzCz", "AQOOrbvzBQCCvzOQzvzbzvObrzQbvzvMCvzrzQWzCrzzvQzvzb", "CQzOrbzzzTQCvBzrBQvbCvzQQzvCCvvMzMCrzQWCWQvvbQzQWB", "CzzOvbvQvQzQvCWQBWQbrvOQzzvzvvzMzzCzBQWzQzvCbzWQWz", "AQvzvbzzrTQCCCWCzvCbOzAbrzvCzkzMvzBvWQrCCBWvvrvzWz", "CzrQvCQzrQQzzCWzzvvbOCzQQrQbvCzMzvCvWWWCQzWzbrzzWz", "AvzQzbCzzzQzvQWzBWzbrvzbzOCzCvQMCvdQzzWzQzvCbvBvzQ", "zvzrvbQQzvvQCBWzzWQbrQAQrWCbvCQMvzBzBWzQCzvzbvWQzQ", "AQOOvbvzrzvCvzOCzWzbzQAbzWzzCCzMCzdQzzWCQzzCbQWQWB", "CQzOrbvQvzCQrCzrdQzbOvObzOCOvkQMvOdvWQzQCrzvbQWzWz", "rzzQvbQQrvzQzQOCBvvbrzOQEWzCzzzMvvzzWWWrQQWvbzBQCz", "AvvzzCzCrvvOCCzCzWQbrvObzWQbCkzMCOzvzQrCWrWObzBzCz", "AzOQfbvQvQzzzQWzzWQzOzQbErQzzzzMvvBzWWWzWQzzbzvzzz", "CzvzrbCQBzvzzzzCrQQbOQQbzWvCCzQMCzCzWQWzCrWzbQBvWz", "rQOQfCQQvTQCCQWQrvQbzQzbQOzbCzvMzOzvWzWrCQWvbzzvzb", "zQrrfbQzrQzQvCzQdQzbzCQbQWvOvzrMCzzQBzrzCzvCvrvzzz", "rzrrvbCCvTvzCCOQdWQzzzzbrzQzrvQMzMdQBWzCWzWCbvzQzQ", "zzvrvbCnvQQCrQOCrQvzCQQbQzvzCvzMzOdvBzzQQTWvvvBvWb", "rzrrvCzCvTzCzzWCzQzbCvzQzrvbvvQMvOzOBzWrCrvzbzvTzz", "rvvzfCvnzvzQCzWQzQzzrvzQQzzOzkQMcvzzWzWCWrWOvOvzWB", "rvzrrbzCBQCCCzWzdvQbzQQQrzzzrzvMvOzzBWrQQQzCbQWQWQ"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 844884789;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> rows = {"VVbVpOOqqVbbBpqBvvUqVRVROqURRqRUOOqbBBRVRBqVbqvVBB", "OOqRpBOqVUbbRUqUpqRhVqOvORURVBRUOOqOVvVVORORbqVRvO", "BObUpvVvbUbbBpOvVqRqqqqvBqUVOObVOOBbBBRqRBRRbRVVBO", "VVqqpBvjVUbvVUVvvLbORqUUOUqOVBbUORBbBvOVOBqVbBDqvV", "VOqqpvvvUBbbVpVUOVOOROqRBOBRVBbVORqbvvRVBROVbqRRBU", "OQqRpOqjUBbbBqRUvLUqVRqUBRBVqBbVvvBbVBvOBBvRbBDOBV", "VRbRpOqqVBUbBRVUVvOhVqORBUUVRObVvRBOBBVVRBqRbBDVRB", "BRbcpBqvqVbbVRRvvqOqqOVvORBOqqbUqRqbBvVVOBqRVRVqBV", "OObVpBVjqVbvBqVUvLUhcROvUUqURBbUbRBOVqOORROVVRVqBU", "VObRpBOjVVbbRUOBpqUOROUUBqqUOBRRvRBbBBvqRUOVVRvqRU", "VRbVpBqqqUbbVRqBpLUqVRUUOOBORBbUOvVOvBVqOBqqbRDOvV", "OVqRpBOjUUbbRURvOvbqcROUOqqUqORUbOVbBBVVOUvRVBvVBV", "BObVpBvqbUbbRpOBpvOOqOOUBlBVRBRRbvBbVvVqBBOVbRVqRV", "BRbVpvVRVBbbVqqBVqOUVqVBBUUOVBbLqLVbBBRqBBORbBRVRB", "ORbqpvORUBbbVROvvqRhVRVvUOURRORRbLBbVBROORRqbBvRRO", "OQbRpBOqVBbbBqqBVvRhVTOUOqBORObLORqbBBRqBUqqbBRRvV", "BRbVpBqRqBUbBUqBOqbqVTORBRBOVBbRqOVbVqvOBUvRVqRRRO", "BVbqpOVvqBbvRUVvOqbOqRORBRUVqBbVqOBbBBOORRqVbqvVvU", "OVbRpBOvbUbbBqVUvvRUVqOUBOqRqBRUORBbBvODBRRvbBVqBV", "BRbVpvqjVVbbVUVvOVUhRRVRBUUURObVOvVbBvVORRRRVqVVvU", "BObqpOvjqBbbBpRBpLOUVqqvORBOqqRRqOBbvvRVBBqqbqVqvU", "BVbqpBqRqBUbBRqBvqUqVRlUBOBRqqbLqRVbvqvDRBvVbBDVBB", "BVbqpvORUBbbRRqvVVOqqRVvBqBOVqbVvOqOvBODBRRVbRVOBV", "BOqRpBqvqBbbBqqBpLOqVqORUqqROBbRbRqbBBVqOBRVVBvqRV", "OOqVpOvvbBbbRUVUOvOhqqUUBOUROBbVOOBbVBOVBBqVbBRVBB", "VQbRpBOvqVbbVpVvOVOUVRqRBqBOVObROLBOBqVqBBRRbRRqBB", "ORqVpvVRbBUvVURBvqRURRURBRqRRBRVvLBOBqRORUvRbBvqBU", "VRbqpOqqUUbbRpqUVvRORRqBUOqROqRUOvBbBBOVBRqVbRRRvO", "BObVpOVvVVbbRURBVVRUqOqvBRBRqObVqvBOVBvDRUOqbqRRRU", "BRbqpOVRVVbvVRRBOVOhVTVBUOBVRqbRbvVOBBOqBBRvbqVRvO", "BRqVpBqqbBUvVURUvVOhcqOBBRBVRqbRbRVbVBVVBBORbBRqBO", "BRbVpvVjbUbbVRVvOqbhRTVBORBVqqbRORqOBvvOOBvqbBvqvU", "VVqqpBVqVVbbVRRBVVbUcOVRURBUVObLbRVbvBRDOUvqbBVVRU", "BRbRpBVRqBUvBqVBVLRqRTUUBOBVVObRvRBbBqROBURqVRVVRO", "BQqRpBVRbBbvVqRvvLUURqqBORBlVqbUqRVbvvODRRqVVBvVRO", "BRbqpvOvVUbbRROBOvUURRqBOOqRVORLbLqbBqVOBRRRVRVRBB", "VVbVpvVqUVbbBpVBVvOOqTVBUOBRVBRVvvBbvBOqOBOvbRRRvU", "BRbVpBqRbVbvRRVBvLUOqOqRBqUOqBbUvOVbVvROBRRqVqDRBV", "VObRpvVqVBUbBpqBVVRUqOORBRBVRObLbLqbBqOqOUOUbBRRRB", "VVbRpvVRbUUbRURBOVbUROqvORqOqObRqOVbvqVDBBRRbBDOBB", "VVbRpBvRqVbbBqRBOVROROVRUqUVRBbVvLVbVBRORRqVbBRVRV", "OObqpOvqUBUbBRRBpVRhqOqvBqBORqbLvvBbVqROBBRqbqVVBO", "VVbqpBqvUVbvRqVUVqbOROVvURBVVBRVvOqOBvOVRBOqVRvqvB", "OQbcpBORUBbbRqqBVvbhqqqBUqBVVBRUqLVbBBRDRBOqVqRORV", "BObqpOqRqBbbBqRBVvUqRRVvUUBRRBbVvLqbvqVqBROvbqvRBU", "OOqRpBvqVBbvBqqBpqROqTVBBOqRqBRRqvBbVqVVOBOqVqVqBB", "OVbVpBOvqBbbBqqBvVRqROUBBqBVqqbLvvqbvqOOOBRqbRvRRO", "BVbqpBqvUBbbBRRBOVUUcOORBqBOVBbRbvBOBBRqBUqqbBRRBO", "BVbUpBORUBbbVRVUpvROqqqUBOqVqBbVqOBbVBVqRUqRbBRqBO", "BQqUpOOqVVUbRRqBpqbOqqORBOqOqqbRqvqbvBOVBRRVbRvVBV"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 727790922;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> rows = {"VmVvJmEVVJmVivvEVJAJEJmJEmbJVjEmVVEiEJEAJiJxiJmEVV", "mmviJmEEVEmVFJVEEJlEEEVVEmbJVAVmFJmiEJJAJiVAiFmiJA", "VmvvVJEVJJVVivVVEVAJEEmVEmbVVjEFWJWVuVJAViVAiJJEJA", "VmvvVmEVVEVJFvVEmVEEEmVVJFbVVAEFVVWVFVJiVJmAiJJiJA", "VmVvVmEEJEVJFJvVEJlEEJmVJEbJvAVFVVWiumEiJiJxiFmiVA", "VJvvJJEVJJVJFJVVEJAEVEVJJmbVvJVmWJmiuJJiJiJmirFiVA", "VJViJmvEVJmJiJvVVVlEVEmJJmbVVAEmWVmVuJEiJiJmmFJiJV", "VnViJAvEJEVJFJVVVJAJVJVmJFbJVAEmVVmiFmEiJiJmmJJEVA", "VmVvEJvEJEmVFvvAEJEEVEVVEEbVVAEjFVEVEVJiViJAiFmEJV", "VJViJJvEJJVJiJVVEVAEEEVVEEbJVjVFFVEiEVJiViVAmFJEVu", "mmviJJEVJwVJiJvVVJAJVJFJEmbVvAVjFJEVEVXAVJJAiJJiJA", "VJVvJJEEJJVJiJvVVVAmEmVVEEbVvJEjWJmiFJJiJiJxmrmEmV", "mmViVJFVVEVVivvEEJEEAJmmJFbVVJVmVVEVEVJiJJJmiFmiVV", "mJvvVmvVJEVVivvEmVEJAEVJEEbVVAVmVVEVuVJiEJVmmFmiVV", "VJviVJvVJJVVFvvVVJEEVJmJJmbJVJEFVJEiFVJiVJVmmJmiVA", "mJVvVmvEJJmJFJVEEJAEEJFVEEbVvJEFFEEVEJXiVJVAiJmEJA", "mJvvJJFEVEmJiJVEVVlJVmVJJmbJVJVFFJWiFVEiJiVAmrFEJu", "VmvvVJEVVEXVivVVVVEJEJmJJEbJvJEmFJmVEJAiVJJmiJJEJV", "mJviVJEVVJmJFJvEEJAJVEmJJFbEvJEFVJmVEVEAJJVxmJmiVu", "AnviJmEVVEVVFEVEVJEEVJVVFEbJvJVmVVmVFVEiEJJxmJFEVA", "AmvvJmvEVwVVivvEEJAEVmVVJmbJvAVmFVEiFJEiViVmiFmEVV", "mmVvVAvVVJmViJvEEJAEVEmVJmbJVjVmVJWiFVJiJJJAiJJiJV", "mmviVmvEVJmJFvvVEVEJVEVJEEbJVjmFVVmiuJEiJJJxiJJiVV", "VnviJmEVVEVJiJVVmVAJVJmJEmbJVjVjVJEVFJJiViVmiFJiJV", "VJviEmvEJJVJFJVVEJEJAJmJAEbJVAEmFVEVFJEiJiJAiJmEJA", "VmVvVJvEVEmVFvVVEJEJEJVVJmbVVJEFFVmVEVEAVJVAiJJiJA", "mJVvVJvEJJmVFJvEEJEJVJVJEEbVvJmFVJEiEJEAJJVmmFJEVV", "VJViVmvVVEXVFvvAEJlJEJmVEmbEvAVjVVmVFVJAJiVAiJJiJA", "mnViJJEEJEmJFJvVEVAEVJmVJmbVvJEmFVmVuJEAViVmiFJEJV", "mJviVmvVJEmJivVEVVlEEJVJEEbJvAmmVVmiEJEiViVAiFmEJu", "VmviJmEVJJmJivVEVVAEVEmVEEbVVJVFVJmiEVJiVJJmmJJEVA", "VmVvVJEFJJmViJVVVVEEEEVVEmbJvJEmVJmiEJEiJiJmiFmiVu", "VnViVmEEJEmVivvEEVAJEEVVEFbVvJEjWJEiFVEiJiVxiFJEJV", "mJviJmvEVJXViJVVVVEEEEmJJEbJvAEmFJmVEJEiJJVAmJJiVV", "VJvvVJvVVJVJFJvVEVAEVEmVEEbJVAEmFVEiFJJAViVmmFmEVV", "AJVvVJvAVwVViJvEVVEEEJVJEFbVVAVFVJEiFVJAVJJmiJJiJA", "mJViJJvEVEVmFvvEVJlJEEFJEmbJVAEFVVmVFVJAVJJAirJEJV", "VJvvVJvEJEmJivvVVVAJVEVJJEbVvJVmVVEVFJEAVJVAmFmiJV", "mmVvVmEEVEVVivVEEEEEEEmJJEbVvJEFFVmiEJJAViJmmJJiJV", "VmvvJJvVVwmViJvAVVEEVJVVFmbVvAVmFJmiEVJiJJVmmrmEJV", "wmviJmEEmJmVFvVEEVlmEJmVJmbVVAVFFJEiFVJAViJmiFmiVA", "mJviJJvVJJVViJvEVJAmEJFJEmbJVJVFFJWVFVEiJJJmiJJiJV", "mmvvJJvVVJmmivVVVVEJVJVJFmbVvJEmFVmiFVEiJJVAirmEVV", "mJViVAvVJEmJivVEVJEJEJVJJEbJvJEFFJEVEVEAJiVAiFFiVA", "VmVvVJEVJEVJivVVVJEJEEmVEEbVVJVjVVmVEJJAViVmmJFiVA", "mmVvJmEEJJVJivvVEVEJVEmJJmbVvjVjFJEiEJAiVJJxmJJiVV", "mmViVmEVVJVVFJVVVVEJVJVVJmbVvAVmVVEVFJJiJimxiJmiVV", "mJviJwEVVJXVivVVVEEEVEmVJEbJVJEFFJmiFJEAVJJmmFmEVA", "VJViJAEEJEVJivVEVJAJEEVJJEbJvAVFVEEiEVEAJiJAmFJiJA", "mJVvJmvFmEmJiJvEEJAmVEmVEEbJvJVFVJEVEJJiViVAmFmimu"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 269655231;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> rows = {"stnDtEQDEQILEtEEtEtDtEtEDIDIDDQDLIntEDDIDQLtDDDQQI", "stIDtEQDELItIIEDEEtDbDDEIItEDtQIntnIDtEILQEDEtLnQI", "stIDDEEDELILIItDtEtttEtEnLttDtQILtDtDDEDDQtDEDlQQE", "sIIttEEDnQELEttDEEttbEDEDIDtDtQDSIntItDDDIEDEtDnQI", "stIDDtQtELItIttDEDDDnDDLILtEttQIntnEEtDILQEDDDDQDE", "stHDttQDnLItItEDtDttnEtEDLDtDttDnIntDDEDnQEDDDLnDE", "sIntDEQtEQEzEIEEtDDtnDtLDbtEDttDntDEDDDIDIttDtDQDI", "sIIDttEDjLEtEItDtEtDtEDLDIDttDQDLIKEEtDDLIEtDtDQQI", "sIntDtEtELLLEttEtDDDtDtKILtEDtQDStDEDtEInIEtDDDQDI", "sGIDDEQtjLItEtEEtDttnDtKDLtttDtDStDtEDEIDQEDEtlnDE", "sGIDDEQDjQEtIItDtDtttEDLDIDtDttISIDtDtEIDItDDtDQQI", "stntDtQDnLItItEDEDttnDDLDItEtDtILtnEDDEILQEtEtLnQI", "sGIDtEQtnQEtEtEDEDtDnEDLIItEDtQILIDEDDDIDItDEtLQDG", "sInDttEtjLEzIttELDDtbEDLIbtEtDQIntntDtEIDQEtIDLnDE", "sIntttQtnLILlttDEDDDnDDEILDEttQInIDIDtEDDIttDtLnQE", "sIIDttEtEQLtEttEtEttnDtEILDEDDtILIDEEDDDDItDDDDnDI", "sIntDIEtnQItEnEEEEttnDtEIItttDQDntDtEDDDLQttEDLQQn", "sIItttQDnQLLEtEEEEtttDDEDIDtttQDSIDEEDDILIEDDDLQDE", "sIIDtEQDELELItEEtEDttDDLDLtEtDQILIKEDtDDLQEDEtDQQn", "stItDtEtnQELEIEEEEDDtDDLDbDEtttDLtnEDDDIDQttEtDQDE", "stHttEEDEQELIItEEDDttEtLDIDtDDtDnIDtDDEIDIttDtLQQI", "stnttEQtELELEItDtEDDtEtEIbtEDttIntnEDtEDDItDEtDnDI", "sIItDEQtnQEtIItEtEDDnDtLIIttDtQDStDEDtEILQtDDDLQDI", "sIIDtEEDEQELIttEEEDttDDKIIDttDtDntntEDEDLIEtEtDnDI", "stnDttQDnLEtIIEDtDtDnEDKILDEDDQDntDEEtDIDQttDtDQQE", "sIntDEQDnLItEIEDtEDttDtLILttttQDStDtEDDDLIEtDtLQQI", "stnDDtEDEQILltEDEEttnEtEILtEtttDntDEEtEILQtDEDDQDE", "stntttQDnLIzIttDEEtDnEDLDbDEDDQILIKEEDDDLItDDDLQDE", "sIHDDEEDEQItIttEtDtDtDDEILtEDttLnIntDDDDLItDEDDnQI", "stntDEEtEQELEIEDEDDDnIDEDLDttDQInIDtDtIDDIttDDDQQE", "sIIttEQDnLEtEItDtDDttEtEnItEtttILtnEEDDDLQEDEDDQDE", "stHDtEQtnQItItEDtEDtnEtEDLDtDDQILtDEEDEnLIttEDDQDE", "sInttEEDnLItIItELEDDnDtEDLDtttQInInEEtEDLQEDDDLQDI", "sIIDttEDnLELIIEEtEDDtEtEDLDttDtDLIDtDtEIDQtDEDLnQI", "stHDDtQtEQILIttEtDDDnDDLILDtDttILIDtEtDnDIEtDtLQDE", "stHDttEtnQItlIEDEDDDtDtLDIDItDQILtKtDtEILItDEtDQDE", "sIIDDtEtnQEtEttDEDDttEtEILtEDttILLDEEtEDDQtDDDLQDE", "sIItDtEtnQEtEILDtEtttDtKDLDEtDtIntntEtEDDIEtEtDnQE", "sIIDttQtnQEtIIEEEEDDtDDLIIttDtQDLIntDtDDDQEtDDDnQI", "sInDDEQtEQIzIGEEEDtDtEDLIIDtDttDLLntDDEDDQtDDDLnDI", "stIttEQDjLELIIEEtDtDbEtLIIDttDtIntDtDDEInIEtDtLQQE", "stnDDtEtEQLLlItDEDDtbDDEIIttDttDSIDtDtDDLQEtEtLnDE", "stHttIQDjQELIItItEDtnEDEDLtttDtDLLnEEDDIDQEtEtLQQE", "stntDEEtEQILIttEEDtttDtEDbtEtDtDnIntDtEILQLDDDDnQI", "sIntDEEDEQItEnEDEEtttDDEDIDtDDQDntntEDEIDItDEDDnQE", "stItDtQDEQELEttDtDttnDDEDLtEtDQDntDEDDDDLQttEtlnQE", "sIntttQtnLELEItEtDtDtEtLIIDEtDQDLInEEDDDLQEtDDLQDn", "stnDDEEtELILEtLEEDtDnEDLDLttDDtILInEEtDDDQEDDDDQQI", "stItDtEtEQItEIEEEIDDnEtLDItEDttLLIDEEtDDLQEtEtDQQI", "stntDtQDEQItEtEDEEDDtEtLIIDEtDQIntDtEDDIDQttEtLnDI"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 446189215;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> rows = {"CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTJkTJJTkTTTkkkGTTT", "CTTXTTJkGGJTJkTGbTkkTTTTTTkTTTkTTkkTJJTJTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkJTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTbbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTObTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkJGTTT", "CTTXTTJkGJJTJkTGzTkkTTTTTTkTTTkTTkkTJGTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTJTTkkTJJTkTTTkkkGTTT", "CTTXTTJJGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJCTJkTGbTkkTTTTTTJTTTkTTkkTJJTkTTTkkkGTTT", "HTTXTTJkGJJTCkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGzTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGzTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkOJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTGJTkTTTkkkCTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "HTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTCkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "HTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTCkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJCTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGzTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkOJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGGJTJJTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "HTTXTTJkGJJTCkTbbTkkTTTTTTkTTTkTTkkTJJTkTTTkJkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTJkkGTTT", "CTTXTTJkOJJTJkTGbTJkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkJTJGTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTGJTkTTTkkkCTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT", "CTTXTTJkGJJTJkTGzTkkTTTTTTkTTTkTTkkTJJTkTTTkkkCTTT", "CTTXTTJkGJJTJkTGbTkkTTTTTTkTTTkTTkkTJJTkTTTkkkGTTT"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 716023337;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> rows = {"jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjHljll", "jPTjlPBlllllljlllVjllPlVlljllllVjljljjlVAjPVjBljll", "jBTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVMjPVjHljll", "jPTjlPBlllllljlllVjllVlBlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVVBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVMjAVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljlVjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjlVljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlBlljllllVjljljjlVAjABjBljll", "jBTjlPBlllllljlllVjllVlVlljllllPjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "VPTjlPBllllllVlllVjllVlVlljllllVjljljjlVAjrVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPBjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjHljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlrBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBlVll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllPjllVlVlljllllVjljljjlBAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAVPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVMjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlrBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllPjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPAlllllljlllVjllVlVllVllllVjljljVlBAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVVllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTVlPBlllllljlllVjllVlVlljllllPjljljjlVAjPVjBljll", "jPTjlPAlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jBTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPAlllllljlllVjllVlVlljllllVjljljjlVMjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllPlVlljllllVjljljjlVAjPVjHljll", "jPTjlrBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPAlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVAjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVjljljjlVMjPVjBljll", "jPTjlPBlllllljlllVjllVlVlljllllVVljljjlVAjPVjBljll"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 801164110;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> rows = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> rows = {"WnTThTqTTTTUTUqATTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqU", "WnTThTqTTTTUTUqqTTTqTAqTqATqTUTUTWqqTqTqTTqTTTqTqh", "WnTTATqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqA", "qnTThTqTTTTUTUqqTTTqTUqTqUTqTUTATWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTTTTqTTTTUTUqqTTTqTUqTqTTqTUTUTWqWTqTqTTqTTTqTqh", "WATThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTATTqTTTqTAh", "WWTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqATqTqTTqTTTqTqh", "WWTTqTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqTTqTqTTqTTTqTqh", "WqTThTqTTTTUTUqATTTqTUqTqUTqTUTUTWqATqTqTTqTTTqTqA", "WnTTqTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WUTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WTTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqTTqTTTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUAqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTTqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTTUTqTTTTUTUAqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTAUTqTATATWqWTqTqTTqTTTqTqh", "WnTTATqTTTTUTUqqTTTqTUqTqUTqTUTUTAqTTqTqTTATTTqTqh", "qnTThTqTTTTATUqqTTTqTUqTAUTATUTUTWqqTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTATUTWqWTqTqTTATTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WTTThTqTTTTUTUqqTTTqTUqTqUTqTTTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTATUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTTTAqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTATqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTTqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTATUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "AnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTqqWTqTqTTqTTTATqh", "WnTThTqTTTTUTTqqTTTqTTqTqUTqTUTUTWAWTATATTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTTTUqqTTTqTUATqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTTTWqWTqTqTTqTTTqTqq", "WnTThTqTTTTUTUqqTTTqTUATqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTqAWTqTqTTqTTTqTqh", "TnTThTqTTTTUTAqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTAh", "WATThTqTTTTUTUqqTTTqTUqTqUTATUTUTWqWTqTqTTqTTTqTqh", "WnTTUTqTTTTUTUqqTTTqTAqTqUTqTUTUTWqWTqTqTTqTTTqTqh", "WnTTTTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqU", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTAqWTqTqTTqTTTqTqh", "WUTThTqTTTTUTUqqTTTqTTqTqUTqTUTUTWqWTATqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTTqWTqTqTTqTTTqTqh", "WnTThTATTTTATUqqTTTqTUqTqATqTUTUTWqWTqTqTTqTTTqTqT", "WqTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqT", "TnTThTATTTTUTUqqTTTqTUqTqUTqTUTTTWqWTqTqTTqTTTqTqh", "WnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqq", "AnTThTqTTTTUTUqqTTTqTUqTqUTqTUTUTWqWTqTqTTqTTTqTqh"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 731198511;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> rows = {"IyyNnyyntIttoNNNNtotylGlNtytNytIynGotNNotoItytlGol", "IyyyNyyotIttoNNNNtotylolNtytNytIytlotNNotoytytltol", "IyyNnyyInIttoNNNNtotytttNtytNytIytlotNNotoItytNoyl", "IyyNNyyItIttoNNNNtotyyQyNtytNytIytlotNNotyItytltol", "IyyNNyyItottoNnNNtytynQlNtytGytIytNotNNotGItytlool", "IyyNNyyNtNttoNNNNtotylnlNtytNytIytlotNNotontytyool", "IyynNyyNnIttoNGNntotylQlNtytNytIytnotNNotoItytlool", "IyynNyyItntttNNNNtGtylNlNtytNytIytlotNNntGGtytlool", "IyyNNyyItItnoNNNNtotylylNtyGNynNytGotNnotontytloGl", "IyyNNyyItIttnNNNNtotylQlNtytNytGytlGGNNotoItytloyN", "IyyNNyyItIttnNNNNtotyltlNtytNyttytlGtNNotoInytNool", "IyyNNyyItIttoNNNNtotylQlNtytNytnytlotNNotoItytnool", "IyyNNyyItnttyNnNNtGtylolGtytNytNytlotNNotoItynlool", "IyyNNyyItIttoNGGGtotylQNNtytNytIytlotNNotoItytGoGl", "NyynNyyItyttoNNNNtotynQlNtytnytIytlotNNtnoItytlool", "oyyNNyyItIttoNNNNtotyyQlntyGNytIytlotyNotoItytlool", "nyyNyyyItIttoNNNGtotynQlNtytNytIyttotGnotottytlool", "tyyNNyyItIttonNNNtotylQlGGytNytIytlttNNytoytytlool", "oyyNNyyItIttoNNNNtotyGQtNtytNytIytlotNNotoItytlntl", "IyyNNyyttIttoNNNNtonylQlNtytGytIytlotNNotoItytlool", "IyyNNyyInIttnNNNNGotylQlNtytNyttytlotNNntoInytlool", "GyyNNyyytIttoNNNNtntylQGNtytNytIytlotNNotoItynlool", "IyyNNyyItontoNNNNtytylQlNtytNytIyttotNnotoItytloot", "IyyNNyyItIttoNNyNtotylNlNtytNytIytlotNyotoItytlool", "IyyNNyyItIttoNnNNtotylnlNtytNytyytnotNNonoItytloon", "tyyNNyyItnttoNNNNtnnylQlNtytNytIytlntNNotoItytlool", "IyyNNyyItIttoNNNNtotylQGNtytNytnytlntNNntontytlool", "IyyNNyyItItntyNNNtotylylGtytNytIytlntNNotnItytlool", "IyyNNyyItGttonNNNtotylolNtytNytNytlotNNotnItytlool", "NyyNNyyItGttoNNNNtotylQlNGytNytyytlotNNytGGnynlool", "GyyNNyyntGttoNNNNtotylGlNtytNytIytNotNyotoItytyool", "nyyNNyyItIttoNNNNtotylQyNtytNytIytlotNNotoItytlool", "IyyNNyyItIttoNNNGtotylQlNtytNytIytlotNNotoItytlool", "GyyNNyyItIttoNNNNtGtylQlNtytnytIytlotNNotottytlool", "IyyNNyyItyttoNNyNtotylNlNtytNytIytlotNNttyItytyGtt", "IyyNNyyItIttoNNNNtotylQlntytNynnytlotNNotoItytlool", "IyyNNyyntyttoNNNNtotylQlNtytNynIynlotNNotnItytloon", "IyyNNyyItIttoNNNNtotylQlNtytNytIytlotGNotottytnool", "IyyNNyyItIttoNNNNtotytQlNtytNytIytlotyNotootytlool", "IyyNNyyItItnoyNGNtotyyGlNtytnytIytlotNNotoItytlooy", "IyyNNyyItNttoNNNntotylQlNtytNytIytlotNNotoItytlool", "IyyNNyyItIttoNNNNtotyltlNtytNytIytlGGNNotoItytlGol", "IyyNNyyytIntyNNNNtotyGQlNtytNytIytnttNNonoItytlooN", "IyyNNyyItIttoNNNNtntyGylntytNytyynlotNNotoItytlooy", "nyyNNyyItIttoNNNNtotylQNNtytNytIytlotNNotoItytloon", "IyyNNyyotIttoNNNNtotylQlNtytNytGytlotNNotoItytlnol", "IyyNNyyItIttoNNNntotylnlNtytNyttytlotNNotoGtytlool", "IyyNNyyttIntoNGNNGotylQlNtytGytIytlotNNotyytytGool", "IyyNyyyItIttoNNNNtotytQlNtytNytIytGotNNotoItytGnol", "IyyynyyItIttonNNNtynylQlNtytNytGytlotNNotootytnool"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 235072373;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> rows = {"egGjgbgjbbjgbbngngGgebgbebbbjeggggngdgGnngbbnePbde", "egejgbgGbbjgbbngnnegebgbebbbjengggngdgebPgbbnejbde", "egebgbgjbbjgbbnggbGgebgbebGbeengggngbgenngbbGGjbGe", "egejgbgjbbjgbbngGnegebgbebbbjgngggngdgenngbbnejbde", "egejgbgjbbjgbbngnnegebgGebbbjengggbgdggbngbbnejbde", "egejgbgjbbjgbbngnnegebgbebbbjengggngGgenngbbngebde", "egejgbgjbbjgbbngnPegebgbebGbPgngggngdgenbgbbnejbge", "egejgbgjbbGgbbngnnegebgbgbbbjeggggngGgenngbbnejbde", "egejgbgjbbGgPbGgnnegebgbebbbjengggngngGnngbbnejbde", "egejgbgebGjgbbngGnegebgbebbbjengggngdgenngbbnejbde", "egejgbgjbbPgbGngnnegebgbgbbGjengggngdgenngPbnejbbe", "egejgbgjbbjgbbngnnegebgbebbGPengggngdgenngbbnejbdP", "egejgbgjbbjgbbngPnGgebgbePbGGengggngdgenGgbbgePbee", "egePgbgjbbjgbbngnnegebgbebbbjPngggngbgenngbbnejbde", "egejgbggbbjgbbngnnegebgbebbbeengggngdgenPgbbnejbde", "egejgbgjbbjgbbngGnegebgbebbbjengggGgPgenngbbnejbde", "egejgbgjPbjgbbngnnegebgbebbbjeggggbgGgenngbbnejbbe", "egGjgbgjbbjgbbbgnnegebgbebbbjengggngdgenngbbnejbdP", "egejgPgjbbjgbbngnnegebgbebbbjeGgggngdgenGgbbnejbbe", "egeGgbggbbjgbbngnnegebgbebbbjengggngdgenbgbbnejbdG", "egPjgbgGbbjgbbngnnegebgbebbbjengggGgdgegngbbGejbde", "egejgbgjbbggbbngnnPgePgbebbbjengggngdgenngbbnejbde", "egejgbgjbbGgbbngnnegebgbebbbjengggngdggnngbGnejbde", "egejgbgjbbPgbbngnnegebgbebbbGengggngdgePngbbnejbde", "GgejgbgbbbPgbbngPnegebgbebbbjengggngPgenngbbnebbge", "GgejgbgjPbjgbbngnnegebgbePbbjengggPgdgenngbGnGjbde", "egeegbgjbbjgbbngngegebgbebbbjengggngdgenngbbnejbPe", "egebgPgjbbbgbbggnnegebgbebbbgengggngdgenngbbnejbdP", "egPjgbgjbbjgbbbgnnegebgbebbbGengggngdgenngbbnejbPG", "egejgbgjbbjgbbngnnegebgbebbbjengggngngenngbbGejbdG", "egejgbgjbbjgbGngnPPgebgbebbbjengggPgdgenngbbnebbde", "egejgbgjbbbgbbngnnegebgbebbbjePgggngggenngbbnejbde", "egejgbgjbbjgbbngnnegebgbebbbjengggngdgenngbbbegbde", "egejgbgjbbjgbbngnneggbgbebbbjengggngdgenngbbnegbde", "egeGgbgjbbggbbngnnegebgbPbbbjengggngdgenngbbnGjbge", "egejgbgjbbjgbbngnnegebgbebbbgeGgggngggenngbbnejbde", "GgejgbgjbbjgbbnggnegebgbebbbjPngggGgdgePngbbnejbee", "egejgbgjbbjgbbngnnegebgGebbbjeGgggngdgenngbbnejGde", "ggeegbgjbbjgbbnggnegebgbebbbjengggngdgenngbbnejbde", "egeGgbgjbbjgbbngnnegPbgbebbbjengggPgdgenGgbbnejbde", "ggGjgbgjbGjgbbggnnegebgbebGbjengggngdgenPgbbbgjbGe", "egejgbgbbbggbbngnnPgebgbebbbjengggngPgenngbbnejbde", "egejgbgjbbbgbbngnnegebgGebbbjengggngggenngbbnejGde", "egePgbgjbbjgbGngPnegebgbebbbjengggngdgenngbbnejbee", "egejgbgjbbjgbbngnbegebgbebbbjePgggngdgenngbbnejbPe", "egejgbgjbGjgbbngnnegebgbPbbbgengggngdgenngbbneebde", "egPjgbgjbbjgbbngnneggbgbebbbjengggngdgenngbbgejbde", "egejgbgebbjgPbGgnnegePgbebbbPePgggngbgenngbGnejGde", "egePgbgGbbjgbbngnnegebgbebbbjengggngdgGnngbbnejbde", "egejgbgjbbjgbbGgnnegPbgbebbbjengggngdgegngPbnejbGe"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 645401794;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> rows = {"yscmSacmlslmvvyllmyalyvmlcySlysmImsysmlllcyvayasSl", "ysSmmavmSslmlsylcmyalymmlyyslcsmlmsyImlllayDaslsIl", "yIlmmasmSslmIsyllmyalymmlyysclsmlmsysmllllyDaSIcSI", "yySmmacmlscmlsyllayalSmmlyysllsclmIysmlIllycaslsDl", "yslmSasvySlmlsvlvmvalymmvyyIllsmlmsysmvlcayDaslcIl", "IslmmasmlsImlsycImyalymIlyysylymlmIycmllllyIaSlsDl", "ysvmmaSmlslmlsyllmyalycmlyycvlvmlSIysmallSyDaSlcSl", "yscavasmlcIIlsyllmyalymmlcyslIsmlmsysmSlllyDasIsvl", "yylmmavmlclmlayllmyalymmlcyylIsmvmsysmvlclyvaslsDS", "yvcmmacmlslmlsylvmyalymmvyysclymImsyscallcyDaslsIl", "yslmSasmSSlmlsylcmyalymmvyySllamlmvyISllllyDaslsvl", "yslmmasmlslSvSylImyaSymvcyysvlsIlmvcsmSlSlyDaslvDl", "yslmmasmlclSlsyllmyalymmayycllsmlmcysmllclyDaslscl", "yIvmmaSmlylmlsylvmyalyvmlyySllsmlmscsmllclSyaclsDl", "ysvcmasmlvlmlsyavIyalyvmccysllymlmsysmllSayDasvsaS", "yslmvasmlvlmlsyllmyaIycmlyysllsmlmaysmacllycaSlcDl", "yslamasmlsamlsyclmyaaymmayysllvmlmsycmSlllySaslsvl", "yslmvasmyclmlSylcmyalymmlyysllscImcysmlllcyDacasDl", "yvlmmasmvslmlayllmyalycmlyyIllsmlmvySmlcllScaslsDl", "yscmmasmlvlmISyllmyalymmlyysllsmlmIyamlllSyIaylSIl", "yclmmavmlycmlsyllmyalSmmlyyslcsmlmsysmlSllyIaslSDl", "ysSmmaSvlvlmlsyllmyaSymmcyysllsmlmayaSllycyDaslSDl", "yclcmaImlsamlsyllayalymmlyysllcmlmvyamvSllyyayavvl", "ysvmmasmlylmlIyllmyalymmlcysllsmlmsysmllllySasvscl", "ysSmmaSmlsImSsylImvalymmlyysllvmlmsyImllllyyacIsDl", "IslmmasmlslSvsyllmyalSmmlyyylccmlmsysmllllyDaslsDl", "yslmmasmlslmlsyllmyalymmlyysllsmlmcycmllllyyaslacl", "yvlmSasmlslmlsyllmyaSyvvlyysllsmlmsySmllllycaslaSI", "yslmmasalslmlsvlcmyalymmayIsllsclmsysmllllyvaalsDl", "yslcmasmlslmlsyllmyaIymmlyySylacymsysmlcllSDaslavl", "yslmmasmlscmlIyalmyaaymIlyyyllsmlmsysSllllyvaslval", "yclmmaImvslmlSyllmyaaymmlyysllsIlmsyscllllyDasvSIl", "ysvmmasmlslmlsyllmyalymmlyysllvmlScysSllllyIaslsDl", "ycSmmasmlslmlsyllmyalymmlyyIllsmvSsyImllSlySaslsDl", "yslmmaImlslmSsvllmyalymmlyysllsmymcycmlllcyDaslscl", "yslcmasaSSlmlsyylmyaSymmlyyIllcmlmsycmlIllSDaslsDl", "yslmmaSmlslmlvyllmyalycIlyysvlsmlmaysmlllSySaslsDl", "yslmmavmlslmlvyclmyalymmcyIsllsmlSscsmllSlyvaslsDl", "yslmmasmlccmlsyllmyalymmlyyclcsmvmsysmllllyDaslvDl", "yIlmmacmlslmSvylImyalymmvyysvlsmlmscsmllclyDaslacy", "yIlmmaImlslmlsyllIyalymmcyysclcmlmsysmlIylyDaslsDS", "yvlmmavmlslIIIyclmyalymmlyyslIsmlmsySmlIlSySaslsay", "yslmmacmlvlIlsyylmyalymmlyyslcsmlmsyscllllyDaSlsDl", "yslmmasmvslmvsylcmyalymmlyysllsmlmsysmlSllyIaclcDl", "yslcmasmlslmSayllmyalymmlyySllsmlmayScvlllyDaalsaS", "yslmmasmvSlmlsyllmvalymmlyysclsmlasyamlcllyDaclsDI", "yslmmasmlsamIsyllmyalycmlyycllsmlmsysmlcSlycaslsSl", "yylmmasvlslSlsyllmyalymvlyycllaIlmsySSllllyDaslval", "yccmmasmlScmlayclmyaIymmlyyslysmlmscsmlSlSyDaalSDl", "yslmvaImlslmlIyllmyalSmmlyysclcclasyscSSllyDaslsDl"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 21269641;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> rows = {"mJImfImIuGumfummIufCfCuJCkIkIIfuuIiCUuUuJfumfmIuIu", "muImmImIuuumkCmmIkfCfCkCCUIuIIfuuUiCCumuJJumfmkuIu", "muJmfImIuuumGummIufCfCufCuIuICfuGIkCUufuukumfmIuIu", "muImfGmIUuJmkummIuGCGCufCUIuGIfuuJiCGJfuufumfmIuIu", "muImfImIkuumUummIufCfCJUCuIuIJfCUIiCikfuuUumfmIuIu", "muImUJmIuUumfummIGGCfCCfCuIuIIfuuUmCJufmmfumkmCUUu", "muImJImIuJumfummIufCkCJfCuIuIIGuuIiCkUmuufumfmIuIu", "muImUImIuuumfummIuUCfCkfCuIuIIGGuIiCiufmuGUmfmIuIu", "muImfImGuuJmfCmmIuJCkCkkCuIuIIfuUIiCJufGukumfmIuIu", "mJkmfImIuuumfummIufCmCufCUIuICJuuIiCiUfuufGmfmIuUu", "muJmfImIuUkmfummIuGCfCuUCuIkIIfuuIJCiufuufumfmImUm", "muImmIkIuGJmfummGuUCfCuUCCIuIIfCuIUCGumJufCmfmIuIu", "UuImfImIuuumfummIuJCfCuJCuUmIIfuuJJCUkfuUfumGmIuIU", "mGImkImIUuumfummIkfCUCufCuIuIJfJkUmCiUGuuUGmfmIuIu", "mkImkImIuuuGfummIufCfCukCuIGIIfuuIkCiJfuufumfmIuku", "muImJImIuJumfummUufCfCufCuIuIIfuuIkCiufJmfumGmIuku", "muImfImIuGmmUummUufCfCukCuUuIIkukIGCkufuuGumkmIuIu", "muImfImIuuJmfummIuJCfCuJCuIuIIfukJiCiJUuJfumfmIuIu", "muIGfImIuuumfummGGCCfCJJCuIuIIJuuImCUuGuJfUmfJIuIu", "mukmkImIuuumfummIufCfCufCuIGIIkuuIiCiufuufumCmCuIu", "muImfImCkuumfummIufCGCufCuCuIIJukIiCkkfuufCmfmIuIu", "mkImJImIuuumGummUCfCGCufCuIuIIkuuIiCJufuukumfmIukU", "muImfImCUJumfJmmGufCUCufCuIuIIfCGUJCGufuUJUmfmIuIu", "muImfImIuUumfUUmIuJCmCufCuIuIImuuIUCiufuufumfmIuIu", "muJGJImIuuumkummIufCfCufCuIuIIfuGIiCiUfuuGumfmIuUu", "mGkmfImIuUumCummUufCmCuUCuIuIIfuUIiCiufuUfumCmIuIu", "muImfImImuumfummIufCfCCfCuImIIfuuIUCiufuufumkmkuIu", "muImfImIuGumfJUmIufCfCufCuIuIJfGUIiCCUGuufumGmIuIu", "UuImfImIuuumfummIufCfCufCkIukIfJuIkCGufuufumfmIGIu", "muImfImIuuumCummIuUCfCufCuIuIIfuuIGCiJfuufumfJIuUu", "UJImUImIuuumfumkUufCGCCkCuIuIIGuuIiCGufuuUumCmIuIu", "mukmfJmIuuumGummIufCfCufCuUuIIfJuIJCiuUuufumfJIUIC", "UuImfImIuUumCummICUCfCufCUIuIIfJuIkCiuJuukCJJmIUIu", "mGImUImIuukmfummIufCfCJfCuIuIIfuuJiCikJuufumfmIuIu", "mkImfImIkuumfJmmIuCCfCufCuIuIIfGUIiCiuJuuJumfmIuIu", "mJImUIkIuuumfummIGfCkCufCCCukIkuuIiCiufJufGJfmIuIU", "muImfImIuuumUUmmIufCfCukCuIuIIfuuIiCCkfuufumfmIuIu", "muImfIkIuukmfummIkUCfCuCCuUkIImuuIiCiuJuufumJmIGIC", "muImfImGUuumUuUkIuCCUCufCUUuIIfuuIiCiufJUfumfmIuIm", "muImfGmIuummfUmmIuCCUCuCCuIukIfuuIJCCuUuuUUJfmIuIu", "muImfJmIuuumfummIufCfCufCuIuIIJuuIGCiuJuuGumfmImku", "mGImkGmIuuumfummIufCfCkUCuIGIIfuuIUCJufuufumfmIuIu", "muImfImIuuumUumkIuGCfCufCkIuGIfuuIUCiufuufuJfJIGIU", "muImJImIuuumCJmmIufCfCufCuIuIIGuuIiCiuUuuUumGmkuIu", "muImfImIUuumfUUmIufCfCufCuIuIIfuGUGCkJfuuJumfmIuIU", "muImfImIuukmfJmmICfCfCufCuIuIImuuImCUufuufumkmIuIu", "mkImmImIuuumfummIuJCUCuCCuIuIIfuuIiCCufuuGumfmIUIu", "muImkJmIuJumkCUmIufCkCufCkIuIJfuuIGCJufGJJUmJmIuIu", "UuJmfImIkJumfUmmIufCfCuJCCIuGIfuuJiCkufGufumCmIuIu", "muImfImImuuGGummIufCfCufCuIuIIfuuIiCiuGuUkumJmIUIu"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 53149625;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> rows = {"mXeemNlaNhepNAlleelalhmNAlplcUlNlamlamNNeNUehDllaa", "eXeeNhlpNmeUNAlleeaXahlpNlcAcUlmlachNXDNeDUeXDDlhN", "mpeeNNaaDleUDNllaecXlAaNmlDlcalNpNNlmDmDecUmaDlDDm", "eDemAaDpNleUhAmleeaXlmlNNlmlcUlplNNhADNDeDUeDUllDm", "eAmmNDDXmleUmNlmeelXmalaNlpmcUlhlNNlNANDeNUeDUllJN", "epeeAhDXNheUNNDleelAmplmmlplcUlNaNNmmhNNeDUmXUllJN", "cAmDaalaNleUmmlmemmalXmmNmalcUlNlNahDXNmmNUmhUmmhN", "emeeNhaXNmeUNmlleelhaAlNNlmlcUlhaNclNXNpmNmeXDllAN", "eaeDNaDXNleUmhllDmlXlAlNApcmcUmNaNNlDAmNeNUehUlDma", "eDeeNDlXmmpUDhlleelalXlADAXhcUlNahclNmNAeNmmDUllAN", "emaDhmlhNleUNNlceelmmhlNNlDlcacNlhmlNXhNeDUeaUmmmp", "eDeDmDmpNDDUNhllDmlhlXlaNpplcUlaaNNlNhhNmNUemUplAm", "mmeeAmlXmleUNNDlDelXmAlpDlXhcUlNlNplNXNNmNmemUlcpp", "epeeNhaDNleUNNllaelmlXhNApDlcUcplcmmmDNNeDUemUllpN", "mammmDlmcleUcNlleemDlplNNlDlcUlplNNmNpmNeNUecUDlma", "eXmDNNlamDDUNNmleelhlamNNAahcUlhlNmmapNNemUmaUpDAp", "eaeehmlmNleUNhmleelamXlNmlmlcUmmmNNlmXDpecUpXUlDAD", "eXeeAaDXNleUcplleelXlXlmhlclcUlhlaNmNppmeaUmXUlDAN", "emeeaNlhNhpUDNApDemXlXlANmXlcUlmlhNpNANmeaUpmUDlpN", "cAeemNamNleUNpAlDelDmXlNNlmlcUlNlmplaANAeNUeaUmlpm", "epeeNamDpleUmNlleelDlmaNNpXlcUmNlmNlNXNDAcUehUllhD", "eXaeamlmDleUNNDleelhlmlNDmplcUlamamlDphNeNUpDUllpm", "ememmNlXNlpUDNlleecDlXlmNlXlcUlplNNpNhNNeNUecDllmD", "eXemNNlXNleUNNllaelmlXlpDlXlcUhNacNlNppmeaUeXUllha", "epeeNDlmNleUhNllehlXlplNmlXmcUlNlmphaXNNeNUecUpmaN", "eXeeNNlhclepmNDlehmXlXlmNlmlcUlapcNpmhNpeNUeaUllaD", "eXeeNNlhDleUNpmmeelAlplNNlcmcUhNlNplaXmmeNUemUllmN", "eaeemNmDclepDplmaelhlhlANlXlcUmNlNNlNXmNemUeXUmlDa", "emeemNapNDpUNmDlamlAlXlNNlDlcamNlNNlAXDNAmUemUplAa", "eDeeNmlpNDeUNNAlemmhlXlNhlXlcUlhlNNlNpDmeDUeaUllpp", "mXaeNNlaNleUNNllaelDlalNNlDlcUlNmcmlDhNNeaUeXUDlaN", "eXmeNalaNlpUNplpeelAlXhAmlXlcUlapaNlNXpAeaUecUlmJm", "eAeDhNmpNmeUhNlleelXmmlaNmaAcUcmlhNlADpNeDUeDUmlJp", "eXmeNhlhpDeUNhlceelmaXaahmXlcUhpmhpmNXNpmNmmXUlcpD", "mDeeNalXNleUhNmpemlDamapmAXlcUlmpNNlAhNNemUeXDDlDp", "eaeDANDhNlepmNllDeaXAhmmhlalcUlplNplDXpNeNmeXUllhD", "eAeeNNmDmlDUNNlleelAaahNNlmlcUlNmmNmmXDNeaUehUplDN", "eXeeNNDmpleUcNDleelalmlpDlXlcUmNpNalmmNNANUeaUpmha", "eXaehDlmDDeUNmAmemmXAplNAppAcUlNlNNlNADpeNUecUmmDN", "mXamNNlXcDeUNNlleelXAAlaNlXmcalNlmmlNmNmeaUemUllmN", "eXeeNNmDmleUNmDleecXlAlNDmXmcUlNlNNlDXhNmcUeXUlDJN", "eDeeNNlXDheUDmlmehlXlXhNNlmlcUlalNahNmhAeNmeDUDlJp", "eaeeNmaDDlDUmAlleeamlamANlDlcUlmmNNlNmpDemUeXUDlaN", "eAeeNDlXmheUNNlmeemAlXmNhAclcUlNlmNpamNAeNmpXUmlJD", "eXmeamlhNmeUNNlleelalmaNDmamcUlalmalAANNeNUeXUllJN", "emeeNhlXpleUNNlleelmlXmNNlplcUlmpNalNDmpeNUeXUllam", "eDeehNaDplDUcNmpeeaDAplpNlXhcUhhlNclDDDDmNUeDUllaN", "eaaeaNmaNmDUNmlcehlalXhmmlalcalNmaNpNXNNemUehUlmhN", "epemNNlXDmeUhAlleeaXahlaNlXlcUmNlNalNDmNemUeXUlcDN", "epeeaNlppleUDNmpeelmlaaNAlaAcUlNlNNlaXhDeNUpXUlDmN"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 255558439;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> rows = {"nncxQzExtTxTnQnxfHnzxnzcznfncTxHnxHntcTntxnxzTxxnH", "TnnxtzExQQxxnQnxtcnzxTTnzntncQxQnxznxStnQcHxcTxxnx", "TnnxQzExScxcTvnxTQntxnznzncnQtHcnvzcxTxHQxnTzSxxnH", "cnnxQzExcHxxnQnxfTnzcnzcvnfntSxvnvznxxxncxTTzxxcnx", "nHnxHzEtTTxxnTTxcTnzxtznznfnQQvQnTznxxxnHxnxzxSxnx", "nvnxQzExQQxTnTntftnzxnTnzncnQTxQncznvxxnQtnxzxxcnx", "nnnxHzExQQxxnQnxTcnzxnzHzntnHQSQvxznxTxtQxntzxcxnx", "nHnxTzExcQxHnTnxTQSzxnznznfnQtxcnxzcxxxnSxHTzxxtnS", "nHnxQzExQQxxSQnTHHnzvnznzSfntSxQnxznxTxnQcnxzHxcnx", "nncvQzExQSxxnQnxtQnzHnznzvfnQQxHnTzntxxncHHxzxtxnx", "nvnxQzExtSxcnQnxTcSzcnznznSnQQxQnxznxSxnHxTxzHxxnx", "nnnTHzExcHxxncnvHQnzHnTnznHnvQxvncznxxxHHxnxzxxxnx", "TntxQzExQHcxSQTxHHnzxtzHzntnHQxTnxzcvxTtQxTxzStxnx", "nnnxQzEvQQxTnQnTtQnzxnznznHnQtxQnxznxxttQxnxzxxxnx", "nnnxQzExQQcHnvnTtHntHnzczntSHQxQtvznxxxncxnxcxxxSt", "cnnTQzEHtHxxnQnxctnzcnTnzvHnQQxQnTznxxSnQcnHzSxTnx", "nnnxQzExSQcxTQnxtQnzxnznzntnvHxcnvznxxxHQxnHzxxxSH", "nHtHQzEtcTxxnQnxfQnzxnTnznfnQQHQnxzntTSnQHnTzHxTnx", "nnnTQzExQTHcnvnxfQnzxnznzSfnQQxQvTzvxxSnSHnTzSxxHx", "nnnxQzExQQHxStTxfcnzxnznzvfnQTxvnxzncxSnQxnxzxSxHt", "TnnxvzEHQQxTnQnxHTnzHnznznSnQQHvnxznvTxnQHnxzTtxnS", "nnnxQzEtQQxxTQnvvHnzxnznznTnQQxvnxznxxxtScTHzxcxnx", "nnnxQzExQHxxnQntvQnzHnzHvnfnHHxQnxznxxxntxnxzxxtnx", "nHnTtzEvtHHTncnxcHnzxTznznfnHQxHvxznxxxnSxntzxxTnx", "cnnxTzExQQxHntnxvctzxnzcznHctQxTnxHccxxnQtnxcTxxnH", "nnnxQzExQTxxTQvxHQnzvnznznHnQQxcnxznxxxnQHnxzxcxnx", "nnnHQzExTQxHncnxctntxTTcvncnQQxTtcznxxxHQxTxzxxxnx", "nnnHHSEvQQcxnTnxcQnzHtznznHSQQxQnxHvxctnHxnHzHxcnH", "nnnvvzExTQxxnQnxctntxnznznTnQQHHncznxxTHtxnxzxStnx", "nHnHvzEHccSxncTxfcnzxnznzntnvQxcnxznvxxHQxnxzHxxnt", "nnnvtzExtcScnTnxTtnzxnznznfcHTHvnxznxxxnQtHxzxxxnt", "TntxTzExQQHxnvTtvctzxnznznHcQQxQnTzntxxnQxHtzxxxnx", "nnnvQzExQSxHnQnvvQnzxnznznfnQTSTnxznxxxHtxnxzTxxnx", "cvnHHzEvSQxHntnxtQnzxnznznfntQxQtxznxcxncxnHcHxtnx", "nnnTHzExQQcxnQnxtQnzxnznznTcvHxTnxznxcxntxnxzxxxSx", "nncxQzEHQTxxnQnTcQtzcnznznTnttSQnTzccxxnQtnxzxStnt", "nntHvzEvQcxxntnxfQnzcnznznfnQSxTnvzncxxncxnxzTxTnx", "nnnxtzEHcQSxnQnxftnzxtznzncnQQvQnxzvxxxnQcnxzxxxnx", "nvnxTzExQQHHncTtfQtzvnznznSnvSHHncHnxSxtHxnHzxxcnx", "nnnTHzEtQTHxTtnvTtnzxnzHznSnQQxQnxHnxxtnQcTtzHxtHx", "cnnxvzExQSxxTQnxfTnzHnzHzncncQxQnxznxxTncxnxzxxxnx", "cHtxtzExScxxnTvTHHnzxnzczncnQtxQncznxxTnHxnxzxtxHx", "TncxtzExTSSTnQnvfTnzvTznzntcvHxHnxHnvcxnHtnHzxcxnx", "nnnTTzEHSccxnQvtfTnzxnznzSTScTHTnxzntxxntxnxzxxTnH", "nnnHQSExtQxTnvnxHQnzxTzHznfnQTxHnxzvxxxnQxHTzxxTnH", "nncxvzExQHxcncvxvQnzvTznzncnttvQnxznxxtnQtntzTccnx", "nnnxTzExTcxcnQnxfTnzxnznznTncHvcnxznxxxnSxntcxxxHx", "nnnxQzEtTQxxnvnTfQnzctznznSncHSQtxHnxSxnQHHxzxxxnS", "nnnvTzEHQQHxnQnxTQSzxnznznTnQHxcvxznccxnQHTxzxxxHS", "nnnxQzExQQxcntnxvQnzxnzHznSnHSxQnxznxTTnQxnTzxtxHx"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 609275619;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> rows = {"PPpOPtDPhatHhpppDhPhhgtthhDWPOPPPtotPPPPOtgtOgaPtW", "PPgaPtgPOtDHDtttDtpoDOthWpPaWOpWPgWtPWgpOttaOtgptO", "PPpOPtoaOaWHgttDPWPhoOgtgtpPPOPPPthtPhPaOtWpOtgpaW", "PPgOPtpaOttHDphaPtPpDOgggWpPWOPPPtotPPPPOttpOtphgO", "PPpOPtoPOtWHttpagWpoWOtghpPaPOPPPtgtPPPPOattODoPtW", "PWoOPphaOtWHttDtPtPogOhtqpPPPOPPPghtPPPpOWgtOtpPpO", "aPoOPWpPhatHttptPWPDhOtgqtpPPOPPPtotPPhPOWTtOgoPpO", "aPoOPWoPOtWHtthtPWPoogptqWpPDOPWPpoTPWPpDtWpOgWptO", "gPDaPpDPOatHttttDtPooOhtWtPWPOpPPphtPhPaOgtaOtoPgO", "gPgOTpoPOWtHttDtPhPWgOttptpPPOpPDtoTphPPOagtOtWPaO", "PPgOPgoPOtpHDpttgtPWWOptqtPPPOPPhtptPPPPOatWODphtO", "PPDOPtDDOWWHttDtPWgooOttptPPDOPPDtotPPhPOtWtptgpaO", "aPoOPthPOtpHtWttPtPhoOttgtPPDOPWPtgpPPPPOgttOtoPtO", "PPoOPtoPODtHtpttgtgWDOttptPPWOWPPgWTPWPaOtttODpPtO", "PPpaPtgPODtHhptpPtpDhOttDhDPPOpPPDoTPPPPOatWOtaPaO", "PWWOTtDaOWtHtWttPtPDoOtWWtPPPOWPPtogPPPPOWgapgaPtO", "aWpOPtpPOtpHDtttPhPWoOtWWtDaPOPPPpotTPPPOgWpOtpPtO", "PgoaPppPOttHgtttPhppgOttDtPWPOPWPDogPPPPOttWOtahgO", "PPgOPWhPOtDHhtttPtPoogttWpPaWOPPPpWtPPPaDtWtOtoPpW", "aPoOPgoDOaDHtWtDDWPohOtWptPWPOWPhthgPPPPOttaOtoPaO", "PPoOTpgPhtDHtWttgtPDWOpghhpPPTPPDtogPPPPOtWppWpPaO", "gPoaPtpPOWtHtttaPtPooOgtptPPPOPPPtppPPPpOgtWOtoPpO", "PPWOPthPOttHgWtagtPohOgtqWPPPOpPPtgppPPPOtTaOWoPtO", "ggWOPWgPhtpHttDaPtppgOpthtpPPOPPPtgtPPPpOWtWOtgptO", "aWoOPphPOWtHhWppPtPogOptpWPPPTPPPtotTPPPOtttpgWPtO", "PgoOPtoPOatHttttPtPohOtgDtDaPOWTPpopPhPpDattOtoPpO", "PPoOgtgPOttHtttpPtPWgOhtWWPPPOPPPtWtPPPPOaTtOWaPtW", "agWOPppPOttHDttpPtppoOgggtPPDOPPPghtPPgPOtgWOtWPtO", "PPoOPtoDOWtHgTDDPtPoWOttDtPPPOWWPDptPPPPOgttOtpPtO", "gPoOPtoPODtHtthagtpDoOgthhpPWOPWPDotpPhPOWttOtaPtW", "PggOTgoaODpHhttpPDPWWOthqtPaPOPWPtgtPPPaOWtaOtahtO", "PgDOggoaOttHtttDPhgWoOgthpDWPOPPPtWpPPPpOttWptoPpO", "PPgaPWoaOatHDTttPtgWoOttWpPPDOpPhgptPPPPOtttODWptO", "PPoOPWpaOaDHtWptPtPhoOtWDtPWPOPTPtpTPPPpOttWOtgPgO", "PWDaPtDPOttHtppaPtPoDOtWptPPPOpPDtpgPPPPOtttODWPtO", "PPpOPtoPOttHtttpPtpDogtgqtPPPOPPPtWtpPPaOgtpOtpPtO", "aPDOPtDPODtHttttPtPpDOhhDhPaWOPPPgotpPgPOWTtpWoPaO", "PPpOPtgPOtWHtWtDPDPDDOtWgtPPPTPPPpggpPPPDtgtODgPgO", "gPWaPghPOWtHtTptPtPhWOptgtPPPOPPPgotphPaOttaOgoPpO", "gPoOggoPOtpHtthaPhPpoOptDtPPPOPPDpopPPgpOtWtOtpPgO", "PPoOgWoPOWtHttttPtgpoOttgtDPDOpPPtWtpWPPOWtpOtoPpW", "PggOPWoPOttHgTttDWPooOthqWPPWOPTPtptPWPPOtttOtgPtO", "PPWOPgoPOtDHttDtPDPpgOttgpPaPOPPhtotPPPaOaTtOtWpaO", "PPpOPtoPODDHtttpPtghWOhhhpPPPOWPhDWtPPPPOttaOWWPgO", "PWDOPthDODpHgthtPtgooghWqtPPPOPPPppgTWPaOgtWOtWPpO", "PPDOPpoDOttHhTtDPDPooOtthWPWPOPPPthtPPgPOgtpOggPtO", "PPWaggpPOttHtphpPtPooOttqtPPPOPPPtgtTPhPOagppWohtO", "PWDOPtDaOtWHtttDDDPooOttWWPaPOPPPtotPPPPOtttODgPgO", "aPWOgtoDOtWHtpttPtPhhOphDhPPPOWTPDhpPWhPOtttOtaptO", "PPoOPtgPOapHttpaPDPoDgttptPWPOWPPDgpPPgPDatapWaPaO"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 881078450;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> rows = {"tgsethkttshsJsJJkyvehssJthhtyeshssyyeatskaeksyJtJk", "gssetggytstssshttKvekkssJKKghesggsJkeKtkykeKsgsthe", "JssetgytyJtssatgtJveykashKKthesgsseheatsageKsgskte", "tsaetkatastsJstttgvekyssJhKttehyssJKeKtsKteksastte", "tgaeaKkttaasssttJhveKksJtkytteshyheyeKhsKteyhtgthe", "gksetKgkastssshtJgvehssstKKktegggshheKtkggekstgtte", "JssJthyktstJsstytKvehssstgKhyestsshkeahhgteKsggtye", "tkseaJtttstssstJtKveKsssgahhtehtgshyehhsyteKstgkte", "JgsehkhkkJtsssttkKvehkgJtgykkegtssyKegtsKkgJsysyJe", "tksetkgttstssaktggvegssstKKtyestsshKeytkatekytstte", "gssetJayysaJssktgJvehksytakthesggahKeKtsakeKsgstte", "tssethtktshskstttKveysaJgKKtteshssJKagtsKkegsgstte", "tksekJaytshskktttKveKssshkyktegtyskaeKtsKtegstgthe", "tsaeaJhtaJgJkstJkhvyhssythKtyeshsshkeKysykeJsgsttk", "tsaetkgtysgssahJtKvekyssghKtkegtssgKeytskgeksastte", "tksetKgttstskshyJKvegssstgJttehhgskKegtsgteKytstte", "tssekKygtatskstggJvyKsssthytthstsakyeahhkteKsastte", "tgsethgttstsssJykhveKssytkKtteggssyaeKtsyteysysJhe", "tssehgkktstssakttyveksgstKkgthstsskkeytsKtekytstte", "agsetghtkstssskytKveKssJtkkthestssyyehtsateysysJtk", "gssethagasthssttkKveKssstghtkestsakKaKyskteghysJye", "tssetgkgtsgsksttkyveKssstKJhtehgssgheyasatekststte", "tssetKkktJassstgtKvyKssshaKkthsgssJkeaasktegststte", "assekkaytstssstygyveyssyghyktestgaJheytsKteystsyte", "tkyethgttstJsstttgveksgytKhtheghssgKehthKgggstJtte", "JssetJygtstsskktggvegysstkkktestgsJhehtsKgeJsystJe", "tgsetkyktstsksttkyvekyasgKkgkestshgaegtskteKststtk", "gssJhhkytsgsskJgtgveKsgstkJthestsskKeKyskkggststye", "assetKygkshhskJgJhveyssshgJkhesgssyKehtkKagJhgsttk", "tkyetKatyshssktyJKvyksgstaKttehhgheKegysKkeJstsyye", "JssekghgtshsskJtgKvegygstKyhkhstysJyegtkytegygskJe", "tkyetKayysgJJsJttJvegysJgkkhthsgyhgKeKthaaegstJtte", "tgsetJhttsgssstttJvyyksstKKtyegtshgkeKykyagystsJhe", "asyehgtttJahsstJthvegsssgaKhhegyssJKaghsKteKstgtte", "assekKggtatssstgtJveKssshgygyestyshheatkggegstsJte", "gssJtJgyksthJsttJyveyssstkhktesyyhyheKtsyaeyytgyJk", "tssehkktasassstygKveksssggJtyehtssJKaytsgaeKhyJtte", "JgsehKytysgssstJggvehsssJhKttesyssgaehhskkeystskJk", "tksJkKattstssshtkKvegysytghtkesygaeaeKtsKteJytsyhe", "tssekKttystssakgtgveyyssthJttestsskaegysktgystJtJe", "tssetKkytsgJsstgJhveKkssJgKgtestssgyeKakKtgyhtsJte", "gsseahhktsgsskttthvyyssstKkkthstsskaehyhakeKstskte", "tsyeaKtyyshssstttJvegsgsJKKgkestsskkeaahKteJytstte", "tsyehghgkaahJkhtthveKsasJKhtteshsshKehhsyteKsaJyte", "tssetgkkksthsskgtJvyysgshaJhtegyysehegtsggekstgJye", "gsaetKhttstsJsJttyvehssyhkKtkestssyKeytsgteKsyskhe", "gsseaKttastskshJtKveKsssJahhtehtssgyeKasyggkhasyte", "tsyetkygkstsssttgKvehssstKJgyestsshkeKthgteKhaskye", "tssJkJyttstsssktkgvegsgsgKkgtesyysyKeyasKtgJsgsyte", "agsetkhtkatssstytyvekkastKygtesyssyKeKtsggeKstgkyk"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 135782490;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> rows = {"IKjjHqHsrjAKWAsjHKWjKHjWANWjLjNjAIjNKsIKjjsWALNDDI", "IssIsqHNWIAKIDWDHKIjjHWKsDjIAAALAIAWjAIKDjsNAWjrLN", "LKjjsqHIWjIWINNjHKjNKHAKLjIjIjHKsIWNKsNKsjsNAjLWAL", "WKrjHqHAAsIKWDNsHKAWKHsWjjLIIjHjAIrNKAIrsjAIANLjLL", "WKIIHqHsrLjKWjjWHKWAWHOKjrAWAAjjsIWNAWjKDssINjjDAL", "IjrIHqHNrIIsjNNLHKjsKHjKsWAsIsjjsAWLKAjjjNLINNjrsj", "IKIIsqHNAsAWrDWWHKAjWHWAWNAWIjjKIIWLKWsKrKNWDDLrAI", "LKrrHqHjjsNsINNjHKIWjHWKjWIWLljKjIALKNNKDKAjjDsWDj", "IKIrHqHjWIIsWNjDANIsKHWKWNLILAWKIINjKAIjrWjILjLssI", "WKrIHqHsjjjKrrsLANAAKjOAADIjjsAKAINAKsIKssLINjDsLL", "LKIjHqHAAIjsIjLWHKIsjHsKjrAsIAWjsIjAKAjKrKjjjLDDjI", "jjjNHqHjjjIWjDLWHKWNKHWKsDWILsWKIjWjKsIrssLILNNDsI", "jKIjHqHIWjjsIjjLHKWAWjsWjjAWIjAKjINNjjIKrNNWDjjDjI", "WsrIHqHAAIAKIDjDHKWWWHWWArjIjANKIjjWKWIjDWNjjDLWDL", "WKsNHqHNDLjKrrNjHKIAjHsWsjLWIWjKIrAWKjjrrKjNLWDsDj", "jsIIHqHIAINKIrNDHKIjKjWAjjWsIAAKjAjLKANKjNsINNsrsI", "jKjrHqHIDjjKjAWsHjAWKHsKADWIIAjjjjNjKjIKjsLjjDDjAI", "IsIIHqHArIIKWDWjHKWWjHAAjNIWjrAjIArWAjNjrNjNDjjjjI", "IjIjHqHjAIjKjAssHjAAjHjKsjWjLrALIINNKANKDNNIDDsWjI", "IKjIsqHIAINKIrWWHKIjKHsAWWLWjANKsIWAjsjjsjsIAWDWjj", "jKjjHqHjWsNKWAjsHKIjKjjAANWWIAWKAIjjAWIKAKNWALNDDN", "IsINHqHAWLIWjjLLHKANKHjKsNLWIsWLsjjjjNIKssLjLDDDsI", "IsIIHqWAALIKIALjAKAAKHAAArjjAlHKAAWWKsjKAjsILNsrsN", "jsIIHqHIDjIWrANsHjjsKjWKsDAIjWHLsrjjjsIKDNsjDWjWLI", "IKIjHqHjDLNKjDNDAjjsjHAALjIIIANKIANNjNIKjWLILNsrsI", "jjIIsqHsrIjKjrjDHjWsKHjKjWAIAjjKIANWKWsKDKNINDDWjL", "WKjIHqWNAjIsIjjLHKAWWHAKLjjjAWHKIIAjKjsKjjAWjLNsAN", "WjsNHqHAWIAKINLWHKjNKHOKLrAjIWNLIANAKjIKDWLjLWDsLI", "IjIIHqHjrsIWIjWDHKjsjjAWAWWsIWjKjrNAANjjjNjWLWjjLj", "WjsjHqHjAIIWIAWDAjIsWjAKrDLsjsAKAjAWjsIKDjjWAWLDAI", "WjIIHqHIDsIWWjjsHjWWWHAKWjAsLWWLjIuAKWsjDKjNNLNjjL", "LKjNHqWsDsAsWNWWHKIWWHsKsWAjIWjKjIAjjWIrANNWDLjjsj", "IKINHqWNjLIsIDssHjWAKHAKWDWILsWjIrrLjssjjssNjLsDLj", "IKjIHqWjjIIKWAssHKAjKjWKANjjAAWKsjAAAWIKAsNjjWLsDI", "WKsrHqHIWIAKWAjjHjIWKHOWWrWWIjjKArAAKNIjjWjjNLDrjL", "IKINHqWsjIIWIjLDHKINjjsKsjLIIjNLjIjNAjNrjWANADDsjI", "WKIIHqHIjIAKjNsLHKAjKjWAjDjjAsAKIjjAAWIKAWAIANLjDI", "jKIIHqHNrsjKIjLLHNIAWHjWLDIILjWKsIWNKNNrDKjjjNjjDN", "LKIIHqHsrjNKrDsLHNIAWHOWjrAjAWWjjrWAKsjjsWAWjjNWLN", "LKIrHqHAjsIKrNNWHKjjjHjKAWjIjjNjAArAKAIjsNAILjssjI", "jjsrHqHjjIjKjAssHNjsKHjAWjjIjrHKIAAWKWsKAsjINDNWDN", "LKsIsqHAWINsjDsLHjjjKHOKAWjIjjAKjjrjAAIKANLIDjNjAj", "jssjHqWNAIIKIrsjAKWWjHsKsWjsArHKjIrjjWNKAjjIDjLrDj", "IKrIHqWAjIAKIrWjHKAsKHjKWWIsjWAKsIWLAjjKssAjAWssjI", "IjrjHqHsWLjWWNNsANjjKHAKWDWIIWWjArNjjjNKAjLNNWjjsj", "jjIIsqHsjIAKIjjWHNIAKHWKWWLIAsNKIjALKjjKjWNIDDDjAI", "IKINsqHsDjIKrDWjAjIsKHjKjDWsIWAKIjjNKAsKrjAIDWsWAI", "IKsrHqHNDLIKjjjWAKWNWjsKANLsjsjKIjWWAjsKAsAWDLjsLj", "LsjIHqWjDINKIrWWHNIWKHAKsrjIIsNKIIAWKAjKsWsNjNNWsN", "IKjIHqWNWjNKIDLjHKjAKHsWWNIWIsNKIAjWKssKrWNWjjDDAI"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 689405275;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> rows = {"kRkkjCPPggPPCzktgCNRtPzjCtRPNNRgPngPPNkjjtzPkzjgRk", "gRPgjgPNNNPPCzNtggCjtPzkjNRPjjtkknggPNkCCjzPgzkzzk", "gRtRkRPNRPkPCzkkWgkkktCgggPPjjtjRnjPPkPRktzPRzRzRt", "NttRjRPPRPPgPzRkkgWkjPzNjRtPNRjgknRgNikgCNzCRzjzzR", "kjPjNCRRgPgRPzWkgPgjjtzggRPPjRNtNnjPPRPRCtkNkzRzzj", "ktkjkRPPNgggPttkkPWNjPzjjNPPRNjgknRPPkNgCjzPzzRzzg", "kjPRCNPPNPgRCzkjWCWRtPzjjtPPjjjjNnjgPgNjjjzPRzjgzt", "gRkjjNPPkPkgktWjWPCNNPzjNtPkNgjjCntPPgPCCjzPkNkzRj", "RtPkCNPNRPPRPzkjWPkjNPzjjRPRjgRjkntgPgPjjNzPCNjzzg", "NjPRkjPPtPPgPzWjNPgkNPzNggPkjRjgPnjPPRPjjNkPCzkzzk", "gjPjCjRRNPkPPzRkkgkRjPzgNttPjgNjCntgNkPRjjzPgzjgzR", "CttjjgRNggPgPtNtWPkkjtCjNNPPRjjkPnjgtNkgkgzPRzCzzk", "kjkjjjPPNNPPCzWjNPgjtPzgjgPRjjjkNnjgPkNjjgzPCzjzzR", "NjtgjRRPNPPRCzttNCNNjCCjjWRRRNtjRngPPRPjjNzCzzjzzk", "NjPjjCPPggPPPzRRggkjkPzjgWPPCNjtNngPtRPjjjkPCzCzzk", "RRtgCjPRRPPPPzNRWPCjkPzkCWRkjgRjRnRPPRPjjjzCgzRzzj", "gjPkkNPPNgPgkzWttPkRkPzkjWPRjjNjCntPPkPgkjkPgzkzRR", "kCPgjgCPRPPRPzNRtPCRjPzjNWRPjjRjRnjttgPRjjzPgzRzzk", "gjPRjCPNkPPPPztjNPCkNPzkNWRRjNjgCnRPPNkjktzPzzRzzR", "RjkgjNPPgPPPPzNttPNNkPzjjRPkjgjgCnjPNNPjgjzNCNkzRt", "kCtjkgPPkggRPzkRkPNNtPCjjRPRRRRjNnRPPkPgkjzPzzCzzk", "RCPRNjPPRgPPCzRjtPWjkPzNjtPPNRjtknjPPkPggjzPRzjgzk", "CjPkNNCRkPkPPzWRgPgjjCzgNWPPRRttPnRtPNkCkgzPgzjgzR", "CjPgjjPPgPPgPzRjgPkkjPzkNtPPjgtkRnjPPNPjCgkPRzCzRg", "RtPRNRPPtPPPPzkjWgCjjCzNjRPkjjRtCntPPkPCCtzPRzCzzR", "CRPkjgCNgPPPkztkggWjjPzgjRtRCjNgPnjPNgPRgNzPCzRzzR", "RjkkkCPNtPPgPzNRkPNRjPzNCRRPNjjgCngPPNPgkjzPgzjzRg", "kjkgjNRPkPPPPzRttPNNkPzkjgtPRRjjknRtNiPRkjkCRzjzzk", "NCPjkjCRkPPPkztjWPgNjCzgjWPRRjjtRntPPkkjjjzPkNkzzg", "gRPkkRPNtPgRPzNjkPNRtPzkjgPPNjjtknRPPgNCgjzCzzjzzR", "CtPgCRPPkPgPPzkjNCkRNtCjggPPCRjkkntPtNPRggzNRzRzzg", "NjPgCNPPNNgPPzRktPgkjCzjCWPPCRRkCnjtPRkCgjzPkzjzzt", "gRPjjjPRkNPPPztjNPgjjPzjgNRPNjjjkngPNRkjggzCkNjgRj", "gjPRjjPPONkPPzWtNPNjkPzjjRtkRRjkRnjPPkPjjjzPkNCzzt", "NCPkkgRNRPkgkzWjWPkkjPzgjgPPNgtjPnjtPRNgjNzCzNkzzg", "RCPRNCRPkNPPPtNkNPgjjPzjjNPkjNNgPngPPgPgjjzNCzRzRR", "gtPRNgCRNPgRPzRRtPWjjCzNNNtPRNRjkngtPgPjgjzPzzkzzj", "NjkjjgRPgPPRCtNRkPNkjPzNCRPkjjRjRngPPRPCCjkPCzRzzt", "RRPgjCCPNgPPkztRtPWkNCCNgNtPCNjjNnRPPRkjjjzPCzjzRk", "gjkjjgPPgPPPkztjgCWRjPzgNtPkRgRjNnRPPgPRkNzPkzjgzt", "CCPjCNRRkNgRPzkkkPCjjPzgggPRjNNjRnjttiPRjjzNRzjzzg", "NjPjjRPPRNkPPtNktCgjtPzjCgPPRNNtRnggtRPCjNkPgzkzzg", "kjkgCRPRtPPPPzRjgPCjktzkjRPkNjNkNnRPNgNjjtzPgzjzRj", "NjPjCCRPgPkPkzkjkPNRNPzkCtRRCjtkRntPPNPgkNzNgzCzzj", "RjPRjNPPNggRkztjggWktPzNCgPPjRjjNnjPPiPRggkPkzjzzg", "RjPkNRPRRPPPPzRRWCCNkPzNjWPPjjjjCnjgtiPRjtzNkNRzzg", "RRtkjCPPRNPPPzRRkPgNjtCjgNPPCjRgknjPNNNjgtkNRzkzzt", "NCPjNCRRRPPgPzWjNgkRNPzjjtRPCgtjCnjPPkNjjgzCgzCzzR", "kRPjkRCPgPkPPzkkWCWjjtzkCNRkCjjjNnjPPgPCjgzPkzCgzt", "ktPkNgCPkPkPkzkjNPCNNPzjjNPRjgNkPnjPPiNjCjzPCzkgzj"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 116755956;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> rows = {"KOghKohhsohuKKLsssKhppuuhuhLuKpsKuopELKoEhREouhKph", "KogpEhshshEuoHLuKophKpuupsKLuhsssuohuHHEHKphouEKpE", "KoghKhjRKEXoKKHusEKshKupHuKRuKpEphopuHsEEKpLoushRp", "sogEKosRKEXuopLsKoKsKEuhpsKhRKhpHuhpusKKEHshoussKp", "KOghKKsssoEusKLupjKspKphLuhhuKhgKuURELKoEKsLpHHKRs", "ssgpKKhLEoEosHHsKoKohEuhHHELuKssHuhsusKKpHLhouhhKE", "KsgEKKsRsEhuKKpssEphhEuuhhKLuhpsHhohussosKRElusKpp", "sogEHojRsEsooKpssjooKppppuhRuKppshUsEHKKsKsLhuHKpp", "KsgEHKhhshsuspEssoKoKEuppsEhuKhpKhshusHopKpLhuHhKp", "KogHEhjhEhhoKppupjKoppupLhKpuhhEKuUpusKKpKRHhHsKps", "RogpEhhsKhsoKpLupsohpKpEhsKpuKsssuoHEsKKEKsHoHhhKh", "RogHKKpssDXuKKHuKsoohKuphhKhRRhsKhopuLKKHHLEhuEsKs", "spgpHhpsEhsuKKLuKEKhhEpphhKLuhhEshhsussEpKsHlHhhKh", "KsghHKsLKEEuopEuKjoopEuuLhKRuKpsKuosELsoEhRhhussRp", "KsgEKKsLKEsuoKLspoospKphphKLuRpEHhshussKphRLhuEhps", "KpghKohsKhXuKKpsssKpKpuuhHhRRKEEKuhhusHoshLLlHssKE", "KpgpKophKoXuKKpuKjpsKKpppsKpuREppuhhuHsKEhLLpusKKh", "KOgHKhsRKohuopLuKoKoKKuuhhhhuREpsuUpuHKEHhLhpuhsKE", "sogHKKhhKEXusKpupEKhhKuEhsELuREgHuspusKoEHRHouhsKs", "RoghEhpLEEEuKHHuKspspEpEHHEhRhsgpuohEEKKsKREluEsKh", "sogEKhhhEohuoKLusooshEuhphhhuKsEKussussoEhshpuhhRh", "ssgEKKsLshEoKHHuKsphhpuhphELuRpEpuhHEEsKsKsEpuEsKs", "KsgEKKjsEhEusHEsKsoohKuEHHKpuKspKuhsuLKKshLEpuhhRh", "KpgHHohLKohusHLsKsphKKuELhKhuKEgpuhhuEKKHKLhhHEKKs", "spghHophEoEuKKEusEospEuuLhERuKsEsushuEKKsKpHhHshps", "RsgpEoshEEsuoKLupEKspKuphhKRRREpsuopuLHKHKRHluEhKh", "KsgEHhpRKhsoKpHussosKKuuHshRuKhspuspuEKoEKLHhuhKKs", "KOgHKossKhsuKKpuKsoppKpEHsKLRKhgsussuHKKEhLEouHKKE", "RsghEKpRsoEuKpHussKhKEuhHsKpuhpssuhpuHKKpHsLhuEhKs", "KpgEKoshsosuoHEuKopopKuppuKpRhhEpussuHKosHphpusKpp", "KsgEKKpLKhsusKHupEooppuhpuhhuhssHhhsuLKEphsEpuEsRh", "RpgEKophsDEooKLuKsKsKpupLHKRuKsgKuUpEHKKpKpHhuhhph", "RsghKKphKDhusHEupoKoKpuhLHEpuKpspuhhuLKKHhpEhusKKp", "KOghHKhRKDXusKEussphhKuuLuhLuhhEshshuEHEHHLHoushph", "spghHhssEEhosKpusEohKKuppuhRRRssphspuHHKHKsEpuhhRs", "sogHKKhssDEooKpupoppKKuEHhEpuKhpsuspuEHKpHsLpuHKRs", "spghEopRsEhooKEusoppKKuhLHhpuhpgshhHusKEsKpLousKKp", "sogEEKhsKDhusHEussKhKKuEHhELuhppHuhhuEsEHKLLousKKE", "RogHKKsLKDhusppupoKoKKppHsKhuRppKhssuLsosHshlHHsKE", "ssgpKohsKEXuKKLsKjphKpuupsKLuKsppuosuLHKshRLouhKpp", "RpgpKKpsKoEosKpuKoKsKKpEhHKpuhsgHushuLsEpKshpuhKKh", "KOgHEhjLEDEusKEsKEopKKphLsELuKhspuoHuEHoEKpEpuHKKs", "soghKKhLKohoKHHuKopoppuphuhhuRsppuhsusHopHphhuHKKp", "KpgHKopsEosuoKEupoKsKpuELHKhuKhssuosEHHKEHRLhHEsKh", "KpgpKhjLKhXuspEsKEpsKKuhhsEhuKpgHuspEssEpKphpuEsKp", "RogHEKsRKohooKpupsKohKuhLHhRuKhgpuoHEEsEphsHpHsKRE", "KpgpEhhhKEsuKKHupEKhKKpupuKpuKEEHussuLKosKpHouhKKh", "KsgpKojhEhsuKpHuKEosKEuEHHKpRhpEsuoHuEKKsKLhluEspp", "KpgpHKjRKohoKHLuKEKohKuEhHEpuKsEHhohuHsEsKREouHsKp", "KsgpHhpsshsuopHsKjohhEuEHsKRuKEpHuhHuEKoHKpHouEKRs"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 527008868;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> rows = {"BWBDUUBjDfUBNDKKKKdKfNNUfWWKdNNDDDdDuNDNUfDfDdUKfW", "BWNWKUWDffUNNBUfKDdNNWfUfjNfNWBWfBDDuBNfUBdfWDUdBW", "BWWDUDWKfWBWDBUfuWfNfUNUfjNfBWDNDNBDuNDNUBBfWuUDBK", "dDNDUUfjDfUWDWNNWBfNNUfWfKWfdWDDDNdDuNNfUBDDjNUKfX", "ffBDUUWKDdUBBdBfKWfDNdDUWWNfBWBWfNUBuNNfUKNdWNUfdK", "dWWDUUWDKfUWDWKNWDfDfWDUfjWfNDDNBBUDuBWfUKDDWDdddX", "fDBWUUfjfWUNKDNNWDdKfdDUKWWKNNDNfBUBuWWBUfdDjdUddW", "BWWdUDfjffUWNDBfKKdKNUNUKWNKBDNDfNBDuNNBUfdDddUKfW", "ffBWKDWDDfUBBDBfWWdKWNNUfWNfBDNWfDBBuBWfNBDfDudDBK", "fWWNKUBDKdUXNWKfBDNDfNNWWNWfeBDDfNdWuWNBUfDDdDUffK", "ffBNUDfBKdUWNWKfKWdNfdNWfKDdBNNDfBDBuBDNUfBfWddDdD", "WfNWUUBDffUNNDKfBDfDfWNUfNWfeNNBBNBWuNDBNfBfWdUdBD", "WWNWUUBBfWUBDWKNKWNoNUfUKNWdBNNDBDUWudNfNfBfWNUDfW", "ffKdUUfBfdUWBBKfKDfofNDWfKDKNNBWBNBHuWDfNKDDjuUdfX", "BDWWUUWDDfUNDWBfBBdKfWDUWKDKeNNWfWdWuBWfUfBfDNUfdX", "dDNDKUWKfWUNDDUKWDfNNWfUfjpfBDNNfDDBuNDNUBBfDDUKfD", "BDNWUUWjffUBKDUKuBNKWWfUWNNfNBNWBWdBuNWfUfDfdNUDdK", "dfNNKUfjfdUWBBUKKDfDNWfWfKNfBNBBfWdHuBDfNKDddNUDfW", "BWWDUDWDKfUXBWUfKKfKNdDUfjNfdWNDfDDDuNNNUfDDDNUDBD", "BfBDUDfBDfUNDWNNWWdDWNfWWNNfdWDNDWBWuNNfNfNfjDdDBK", "WfNNUDfjDfBBDBNfBBfoWdDWfNWfdWDDfWBWuWNBUBNdWDUdfW", "WfWNUUWBKWUWDDBKuWNDWdNUKjDdNNBWfWBButDfUKNfDDUffW", "WDNWKUBDKWBNDBUKuBNoWdfUfKNfBDBWBWUDuWKBUftDWNUdfD", "dDBNKUBKffBNDBBfBBfDfNNWKWDddWBWfNUWuBWfUKNDdDdfdK", "dDNNUDBBDdUNNDNfKDfoNUNUfNpKBWDWDDDBuBNfUKDfjDUdfD", "BWBWUUfBffUBBdBfKKfNfWDWfNDfBBDDfDBBuBWfNfBDddUDfX", "dfBDUUfBffBWDDKfuWfNfdDWWNpfeDBBfWBWuWWfUBNfDdUKfK", "BfBDUUfKfWUXBdBKWDfDWNfUKNDKBDNNBNDWuWDfUKddjNdKfK", "ffKNKDBBfWBBDDUfBDfDNWNUfWpfBWGDDDdHuWNNUBNdDDUKfW", "WWKDUUfDDdBBDWKNBWfNWWfUfjNfeDGWfBDDudWNUKddjddDfW", "dfNWUDfDDdUXNBBfBBdNfUfUKWDfdNGNBNDWuNWBUfNdDuUKdW", "dDWpUUBKffUBNWBfuDNDNNfWWKDfeDDNfDBBuWDfUKBdduUfBW", "WWNNUUBBDWUXNWNNBBNKWNDUKKWfNWBWBNDWuWDfUBNfWuUKBW", "ffKWUDfjDWUWBBUKWBNDfNfUfWWfNNDDDDUBuNNBNfBdDNUDBD", "dDBDUUfKffUBBdKNuBNNWUfWWjDfNWGDDNUDuBWfUfBfdDUDfX", "BWWDKUBDKdUNKWNfKWNNfWfUfNDKeWDBDNUDuBWNUfDfDDUddK", "WDKpUDWKffUWNtBfBWfofdNUWWDdNNNNDNDWuBKfUfNfDNUffD", "WWKWUUfBKfBNNdNfKWfDfUfWWKNdeDBBDWDHudDNUfNDduUDfX", "WWBNUUBKDWBXKWNNWDfNWdfUWKDfNBDNBNDDuWdBUBNfjdUfdD", "ffWNUUWBDfUWKBKNuWNKNNDUfNDddDGNfWBHuWDBUKDfWuUDfD", "BfNNUUfBffBNDBNfWBNKfWNUKWWfdNBNBWDBudWBUfNfDddDBD", "fDWWUDfKDfUNBBKNBDdoNWNWKNWdeWDWfWdBuNKfUBBDDuddfK", "WfNDUUfDfdBBBBNKBWfNWNDUWKNKeWBWDDDWudWNNKNDdDUKfK", "ffKNUDWjKfUBBBBKWKfDWWfUWKWdeNBWfDdHuNDNUfDdWNdKfD", "dfWDKUWDfWUBKDUfuBfNfUDUKKNddDNDDDBWuBNNUfBDWNUKdK", "WDKWUDBKffUWBWKNWBfofUDUfWDKeBDDBDdWuWDBUfDDddUdfD", "BDBNKUfKKWBWNDUNWKNDNNDUWWNKdDGNDWDDuBNBNfDfDNUfBD", "WWWNUUfKKfUXNDNfuWfKfdfUKWWdNNBDfDdDuWKNNfBdddUdfW", "dfWWUUfDfWUXBDNKWBfKfNfUfjWfNDNNBWUBudWfNBBfWDUfBD", "WDBdUUfDKdUNKWBKBDdKWdfUfNpfdDGNDWdDudNfNfdfWDUffW"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 727790922;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> rows = {"vMxMvTTOxMqOgeTvbMvgpTpxvTvTvvxxOTvOppxvvTOvxxTTOM", "vpMMvTxTvvqOTMxvgMMgvTpxpTxMTvxvpxvvgMvTvDOMTxxTMx", "xMxMvxTOxMqOgTxvgTvxvxxxvxvTvTxvpTgvTMvTvTOvTTxTMM", "xMxMhxTTvvqxTTxTgTpxpxxxTTvTvvTvpxpvTMxTvTOvxxxxOM", "vxMMgxTTxMqOTMTvpMMxpxLvTxveTvxxOTvOppvvvpOMxxxTOx", "vMxggxxOxMqxgTTTpMvxpxpvvTxMTvxxpTpOTMxTvTgvxTxTOx", "xxMMgxxOvvqxTTxTpTMyvxxxTxvTvTTxOxvOTpvvvpOvxTTxOM", "xMxfvxTOvMqOIMxTgTvxvTpxvxvMTMTMpxpOTMxvTTgvxxTxOM", "xMgMgxTTvgqOTTTvgTvxvxpvvTvTvTxvpTvOTpxvTpgvxTTxMM", "vxxfvxTTxgqxTMTvbTMxpxxxTTvTTTxxOxpvTIvvTTgMTxTTMx", "vxMMvxxTvMqOTMxTgMMxvTLxTTvMvvTxOxgvppxvvpOMTTxxOM", "xxMgvxxTvvqOgTxTpTMxvTxxTTvMvTxxOxpvpMvvTDOvTxxTMx", "MpMggxxOxvqOgTxTbTMgyxxvvxvTTvxvOTpvpMvvMpgMTxxxMM", "xMxggTxTvMqxTgTTpMMgyTpxTTxTMTTvpTpOgpvvvpOMxxTTOx", "vxxfvTTOxMqOTTTTbTMgpTpvTxvMTTxxOxgvpMxTvpOMxxxxOx", "xMMMgxxTxMqOTMxvgTMxpTpxvTvMTTTvOTvOppxTvTOvTTxxMM", "xMxggTTTvvqOgMTTgppxpxxxpTxMvTTxOTvOppvTvTgvxTxxMM", "xMMgvTTOxvqxgMTvpMvxpTpvTTMTvTxvpTpOppvvvTOvTxTTMx", "vMMMhxTOxMqOTMTvgMpgvTpxvTxMvTTxpxpOTpvvTpgLxTTxMx", "xMMghxTTvMqOgMxvbMMxpTxvvxxTvTxvpxvvTpvTvDOvxxTxMx", "xxMMvTxTxMqOTMTvgMvgyxxvTxxTvvTvOxpvppxvTpgMxxxTMM", "xMxMgxTOvMqOTMxppMMgpTxvTxxMTTTvpxvvTMxTTTgMTTxTOx", "xxxMgTTOxvqxggTTpTvxpTxvTxxTTTxxpTvOTIxTTpgMTxxTMg", "vMMggxxTxMqxTTxvpMvypxxxvxxMvvTxpxgvTMxpvpOvxTxxMM", "xMxggTxTxMqxITxTgTvgvxxvvTxMvTTxOxvOTIvTvTOvTxTxOM", "xMMfgxxOvvqxgTxvbMMxvTpxvxxTTvxxOTpvppxTTpgMTxxxOM", "xxMfvTxTvMqOTMxTgMvgvxpxTTxTTvxvOTpOpMvvMpOMTxxxOx", "vxMghTTOxvqOgMTTpTvxyTpxvxxTvvxxpxpOTpvvTpgLxTTxOx", "vxMggTxOvMqxTTTvpMMgvTxMvxvTTTTvOxpOTpvTTDOMTxxTMx", "vxxgvTTOxvqOgMTvgTMxpTxxvTxMTvTvOxvvpMxvvTgMTTTTOx", "xMxMvTxTvvqxgTxTpMMgvTxxvTvTvMTxOTpOpMxTvpOvxxTxMx", "xMxMgTxTxvqxITTvpTMxvTpvTTxMTvTxOTgOpIxvTpOMTxTTOx", "xxgMvxTTveqOgTTTpTvxvxxvTTvMvvxvOTvvgIvvvTOvTTTTMx", "vMMfvTTOMMqxTTTvgpvgpTxvTTxevTTvpxpvTMxvTTgMxTTxOx", "xMxMvxxTxvqxgMxvpTvgpxpxTTvTTTxvOxvOTpxTvpgLxTxxMg", "xxxfvTTOxvqOgMTTgMMgpxxvTxxTvvTvpxvOTIvTvTOMTTTxOM", "vxMggxxOvMqxTTTvgMvxpxLxvxxMvvTvOTpOpMxTTpOMTxTTOx", "vxMgvTTOvvqxTTxvpMMgvxpvvxvMvvTxOxpvgpxTTpgvxTxTOM", "xxxMvTTTxvqxgMxTpTMypTxvvxvMTvxvOTvOTpMTTTgvTxTTOx", "vxxMhxTOvMqxIMxTbMvgpxxvTxvMTTTxOTvOTMxTvTgMTxTTOx", "xxxgvxxOvgqxgTTTpTMgvxpxTTxeTTxvpxpOppvvTpgvxTxTOM", "vxMgvTxOvvqxgTTTgMvgvxpvvxxMTTxvpTvOpMvvTTOvxTxxOM", "vMxMgxxOxMqxTMTTpMvxvTpvTxvMTTTxpTvOppxTTTOvTTTxMx", "xxMggTTTvvqOTTxTbTMgpTxxvTxTMvxxOxpvpMvvTTOLxTTTOM", "vMxMgTxTxvqxTTxvppvxyxxvTxvMTvxxOxvvTMxTvpOMTTxxMM", "vxxghxxTxvqxgMxvgTMxvxpvvTxTvTxxpTvvTMvTTTOMxxTTOM", "vxMgvTTOvMqOTMTvpTvxpTxvTTvTvvTvOTpvTMxvTpOvTTTTOM", "vxxMvxxOxvqOTTxTgTpyvxxxvxxTTvxxOTvvppvTTTgMTTxxMx", "vMxggTxTxvqOITTpgMvxvxpxvxxMvTTxOTpOppxvTTOvxTTxOM", "vxMggTTOvMqxgMxvgTvgvTpvTxvTTvTvpxvvTMvpvTOMxxxTMx"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 995393579;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> rows = {"GJcJyGJyGccGpypyJGGJGcsByicGJEJyJpGBpJGGEEJGEcGJJG", "cyyJGGEycJyGJJyyJGJcGGsBycpJJEcyJEGzGJGGEBBGyGGJGG", "cyycGJEyGcyGJyyyJJGcGGspccpGccJyJpGBpGGJEEJcEcGJGJ", "cycJyJEGccyJiJppcJGcJGslcBcGcEJJJpJBpGGJGBJcEcGJGG", "GyycyGEyccvJJJpycJJcJcsBcccGJcJyBEJypGBGGBBBEGcGGG", "cJyJyJJBcJcGpyyGJGGcGcspcccJJccJBpJypJGJGEJcycGJGJ", "GJccyJEGGccGpJyyJJGcGGsByBpJccJyJpJBpJGGGEBcyGcJGJ", "cJcyGGEGGJyJpypycGJJJGsByccGcEJJBEJyGJGGGEJGEGcGGJ", "cycJyGJyccyGpJyGJJJJGGsBBBpGJcJyBEGyzJBGGEBGEBGJJG", "GyyJGGJyccyGJJyyJGGJGGslccpGcccJBpGBzJGJGEJBEccGGJ", "cBcJGGEGGJyJJypGJJGcJcspyBpJccJyJEJzpJGJGBJcEGGJJG", "cJycyGJGGcvJJJyyJGGJGcspcBpGcEcyBpGBpJGGEBJGEGGGJJ", "GyycGGJBGccGJJpycJGJGGslyBcGcccJBEGyGGBJGBJcycGGJG", "GByJFJJGGJcJiyyGcJGcGGspyBMJJEcJJpJBGJGGEEJGEGcGJG", "cyccGJJGcJcJpJpyJGGcJcspcBcGJEcJJEJyGGGJEBBGEByJGG", "GyyJyGEycJyJJyLGcJJJJcspcccJcEcyBpJyGGGGGBJGyGcGJJ", "cJyJGJEGcJyGiypGcGJJGGsByccGcEcJBEJyGGBGEEJGycGJGJ", "yyycGGJyGJcJpyyyJGGcGcspccMJJcJyJEJzpJGGEBBcyGcJJG", "cypcyGEGGJcGJJyFJGGJGGspcicJyEJJBEJBGJBGEEJcycGGGJ", "GJycyGEGcJcJpJLyyJJJJcspcccJcEcyBEGzpGGJEEJcEcGGJG", "GyyJGJJyccyJJyLGJJGJJysBcicJJcJJJEJBpJBGGEJcEGcJGJ", "GJccFGJycccJJJyycGJcJGsByccGJccJJEJBzGBJEEJGEccGJJ", "cyccFJEyGccJJJyycGGJJcsBcBpGcccJJEJBGJBJGEJGyccGGJ", "GJycGJJyGJcJpyyGJGGcJGsBycpJJcJJJEGypJGGEBBcEcyJGG", "cyyJGGEycJyGpJyGcJGcGGspyccGcEcJBEGyGGBGEEvGyGcGGJ", "GJcJyJJycyvGiJLycGJJJcslyiMJJEcyJEGyGJBGGEvcEGGJJJ", "cJccGJEyBccJpJyyJGJcGGsBcccGJcJyBpJBpGBJEBBGyccGGG", "GycJyGJycJcJJJpGJGJcJGsByccJJEyyJpGBGGBJEEvGEccGGJ", "cycJGJEGGccGJJpGJJJcGcsByBpGcEJJJEGyGGBGGEJGEGcJJJ", "GyccGJEGGJyJpppGcGGJJcslyBcGJccyJEJBGJGGEEJGEGGGJG", "GJycyGJyGccGpJyycJJJGyspccMJcccJppJyGJBJEEBcEccGJJ", "cJccGJJyccyJpyyyJGJJJGspyBcGJcJJJEGyGGBJGEBcyGcJJJ", "GJccyJJGGJcGJJpGJGGcGGsBycpJcEcyJEJBpGBJGEJcycGJJJ", "cJycGJEGGcyJJppGJJJcGcsByBpJJEJJJpJBGJGJGBJcyGGGJJ", "GyccyGEGGJyGJypGJGGcJcslcccGJccJBpJBpGGJEBBcycGJGJ", "GJcJyGJycJyGJypGcGGJGGsBBccJJEcJppJypJQGEBBGEccJGJ", "cJycyJJGGJyJJJyGcJJcJcsByBcGcEJyJEGzGJGJEEBcyGGJGG", "GycJGJJGGJcGpJyGcJGJJcspyBpJJEJyJEGyGJGJGEJcyccGGG", "yJpJGJEycJyGJyyGcJGcJcspBcpJJEJypEGzpJQJEBBGyGGJJG", "cyyJGJEGcccGJyyGJJJJGcslcBMGcEJJJpGBpGGGGBJcyGGJJJ", "GJcJyJEGccvJpypGJGJJJcspccpJcEJyBpGyzGBJEBBcEcGGGG", "GyyJyGEyGJcJJJppcJJcJGspcBcGJEJJBpGBpJBGGBBGEcGGGG", "cJcJGGJycJyJpyLycGJJJGspyccGcccyBpGBGGBGEEBGEccGGG", "cJyJyJJGccyGpyLGcJJcGGspcBMJcEJyBEGyzGGGEEBcEGcJJG", "GJFcyGEGBcyJJJyycJGJJcsBccpJJEcyBpJypGBJEEBGEGcGJG", "cycJGJEGGcyGpypyJJJJGGspcBpJcccpBEJyGGGGGBJcyGcGJG", "GJccyJJGGccGJyLGJJJJJcslcipJccJJBEGBGGQJGBBcEccGGJ", "GJycGGJGcccGJypGcGGcGcsByBpGJEcJJEJyGGBJGEJGyGcJJG", "cyyJGGEBcJyGpypycJJJGGspBBpJcccpJEGypJBJEBBGEGGGJG", "cJpcyGJyGJcJpJpycGJyJcsByBpGJcJJBEGBGGQGGEBGycGJJJ"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 446189215;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> rows = {"rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrLQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrxrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrxrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrJrrrOrrrrrrrrLrrr", "rrrrLQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrirrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrxrrr", "rrrrJQrrJrrOrJrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrJirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrJrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrxrrr", "rrrrJQrrirrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrJrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOarrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOarrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOarrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr", "rrrrJQrrJrrOrOrrrrrrOirrrrrrrrrrrOrrrOrrrrrrrrLrrr"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 693726191;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> rows = {"rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttJtCtttttJttrrrrRttJrJtJtJrrCtRttRttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtP", "rHCtttttrtCtttttJttrrJrRttJrJtJtJrrJtRttCttttrrrtX", "JHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttRttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrJJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttJrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtRtCrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrJrtX", "rHCtttttrtCtttttJttrrrrRttJrJtRtCJrJtRttCttttrrrtP", "rHCtttttrtCtttttJttrrrrXttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrRtJtJrrJtgttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHvtttttrtCtttttCttrrrrRttJrJtJtJrrJtRttCttttrrrtP", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtXtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrJtP", "rHvtttttrtCtttttJttrrrrRttRrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrJrrXttJrJtJtJrrCtRttCttttrrrtP", "rHCtttttrtCtttttJttJrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJJRtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrXttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttRttttrrrtX", "rHvtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtXtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrXttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttCttrrrrRttJrJtJtJrrJtgttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrrRttJrJtJtJrrJtRttCttttrrrtX", "rHCtttttrtCtttttJttrrrJRttJrJtJtJrrJtgttCttttrrrtX", "rHCtttttrtvtttttJttrrrrRttRrJtJtJrrJtgttCttttrrrtX"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 801164110;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> rows = {"aa", "aa", "aa", "aa", "aa", "ba", "bb", "bc", "bd", "be"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> rows = {"xujKjJKgbvHgtFshwGzEpqiHGkClzDkzidczvaJxHrvCwdbLHE", "IjFupyhyvjoxCxuEtFzHwetrxtdzgHAjdEsqjiKFkfsDLEBIww", "uwJFusbApfFleCsinrwrAHkhysjymvHjIKjmJmaGmclCbLJwvD", "vFnnLArJEudBruuotIhkopByfupHDHaoaLEIhoennsBfuGrIrz", "hCBzxnrJBnGczsgjfpkLfuuKvqxAmxgaaafhFDiBFLvenjKBft", "fCwoDpvmpBAHAjBgztwbGxecHiJlKgtAIHkpqtwCoFHDHgmDtj", "jmDxxCiuDEuvGKHBdnzuEByDIKtkqhdqzqEHlAyabkzsfejcCq", "JJotpaxEtHymaubHBifnkJxvonIramCDBrAfhebKnjpjAbEDBJ", "KzhDFHDvkpqCytxcDExLiqmgwdHicvomxqnyumxAoxvKhpsKIg", "vmnjdnuwnoezLhivhdyCoKjEdyGHkJydBvraIravixzvcxEFnp", "GkudhIEvwClzIkmukntakzpBumninFnaypLowmCJrahprgiqLx", "usjCzwAbEIHIvxytJqwKEKkFmyCeBKwnFhrcoEGCtDHyJdFryb", "njclajqEFHJfitcoesnChttgwdhzEkCjoyEboxJhldxddorIvj", "mtzdvAeEnbdCwmdvgyjzynfiLygtFtJghxnghhFejiqKsDrHGy", "ipzpuhFEkEofgsqkqoupEiwqawfqejozcwIonDsFkFmoulLFhF", "EazqIDfDohofGBlFhiLGoGhFJxKFpyBEHFlknkggvBayuGiEgd", "HHxnsLhKkhavHmbnlctxmfIdJrImHGbDnpnicgCJvkpBazIyCI", "wuudiptyLlHKgtaqqdlvKdkDBEfuFKDEiGjzAJqwjfGCukqjdl", "yaHfouGCHGefdibhkhkiBlgGitGttFFAaLKrulzAGjGkzAqFyn", "HAmuKJfhiHKAaoCnJhlwvdfmEbFcztDEfbquDtoDbBkHhabvau", "inpjLnokchwzsFCtIpwKxqDiCHEtedLgDswobxqGJihgspAvfc", "wGegkpdmdbooebnkEKqLerFacasFpKwhhavGcLtoiaLvJzmisn", "bbaatxjrdLxmuDyinAbuiAHLgceDbjmEHAKDyjaKIhEHapBcql", "eGCbwwAmIpCtIGCEyevLHbCAFpubCfsgjzenDhAbzdzwkJtwzo", "rKEisBeHLmvHlupIrDBifoClwlobjvntHioEFgLKsruaChzeAu", "GgCKJraHczbJqklkxGhKkrqCJdHBzpgpiKAjJslpydgtkDEDts", "FwLpiBgatkvDpwLIkiwveqmHlsLwpheiCKotfAkeikBsHtjqjy", "BFCoHqxKnyDhgypJtKEqntblbLrCiyDfswpdtuLEizFIfepadH", "djexrDycFJCbtpEenyqzgDrnqwfzpzfxrJgnBEcxmmEKusvGxi", "IqmnIxDopsIrfsadvziuvvlIhpnlEwAFtsaxGkKhbDGFImtsLx", "roALxIBEzGpiimJjlnIDmDnsijIhwaHInfflFxJltdeLtosFam", "AnkovnHFzcGDwEmtvzdtJEEnJLgDjgeJkJbDbdcCruImCftLzm", "ekbKGHmvptiEyIzyufnjGBsBidAkHGrmynDECJozzBjErmIDkH", "xpAHDbJuqIFIclyBGEorGdDobjhutLoGfjjKIcpdCjugkFCFss", "DoawAjizHkvqJcDrvAklpjmpxmwLrvEDBkLstjIKCiwGKBiGrH", "kHhBcCFdEsyprbCLbleEzdBpqvDgAAhfKeaxAIoeuKoJvmGDCE", "cgCEjEnqjiytIwEkBLslhdyHqtifiFqotqfvFEJllhBocwwFfL", "JfozEnEdwAondLLreHEmEsoIcAmfufBGzKgFIzpbFkbuBdDleC", "vAKkxyandJtFFqkettADGhtLyHdeLhdenipGztthvlAeCLqJGc", "hpyxgtDjvcHsHqshImvrkjnkdqryrIopryHhfDGoKeBmshbiFm", "jxxHvDLffypufekpBhyLKgrDmqGLJHmdIjlHcsAeLpAFgfCIEt", "dtcpgpGxoCDrtDdnCruakvqFfbBdpHqqeoufBkChzichkChvfu", "oldgHnDxfhdAirtEsIkIAzvtzLDJLIJgFLJwzhipiaAhouyjjE", "tAnyDExcmIEkmbGmjbdnjlFcsubfbohFBzKIfaaxsbJotzwvtl", "BBguzJqFmIqHrFubCBDhDuvBxpsmJkwbCmtwiFsyIIsFAFoyiI", "xbjzHgBoExGzBGknyFzjnhgBjEJIwGsArBHjftBdfvfbqwrqfE", "cnqInrqyBDmwjgAfKbrGawsLChdLIdfdILddAnwAmEcCtueJrk", "jDLnyBKnIbamIbdLgcAEpAFziCviGCjBjFjywbycLjlIxcygqK", "hahdcdbJzEhqHuyErlFwlFlfzrnwCAoegoBDapBhyjhDCtyArK", "rsAexnxrkIKxwHbclmrKiblrjoarsCcLBfjrbuJFuwzDxrqFeD"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 386301200;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> rows = {"PrIatyCimofTFBlPTQBKPecdQGvqsTVAvMtmrXJSdlwHxoPlds", "VSmhLjxPDCqJOQMgOQoWUfODuagbRWDxIegOqAFiSNAxLMsGDP", "HpNieEBgxKvTywuDBxVmKOlKfrfyFcaaPyqEhPhLhLdHTjjivM", "wUgEnsaPmfkjyLWHTPcaPKyuUvWXsIFIdXsMaMBrCRWHhvkrno", "jqJbaXtgWdyiSjNcTJRRxLodWaisEUWFNWjhwwMQMDOhiPpMgl", "cIwfCUmKzHtQSqFWwbvXhAQNzmakdtlMbNfxcJGJMArhGGtevN", "ADsQzfIXPmTksdNxDULDXLqXRTVqKfMGfIobqvKnnfJdmiGTng", "viUGFSUwDlJaxqSjQNdyekTXKnywssLfiPczBooyIywjHuLVsB", "xunsQJcEnBcXBzRyxwlFdGfRzFQQwKoaLknyuuJHlkUrJaOSTy", "tzASicvqCRbIsotcaLkAkhupABRiojGKpLByzBDCxucmxULlTz", "okcqEAlvlVduOyMnObmDaniCphBaiNdkhyBinLbakCRIfOleJg", "waxJgqAhAhLvtlUwrmrUJPxDDpjGUfdmIIewhtGnhHlJrWzMxQ", "elPzjzvuAIfHaWDbRILIgRAfmWFanPffQmlByCcRUxOnzwskrG", "mTtFOMJOVNOTdobOSiJjQfoFdDziQVXglBrPDOnybBpHnQybQj", "uCBIzKWuLVedvngnkvNOoQtnPesGafzNdwWVIWvonzTmUCtmtJ", "NSpOTisubxGwcLunbdxBatppCRVMRLjnXFMQikvieMUOXREuWr", "KHJAJMdDyWxjhqSfsAlzfbXUIpoQznQUWwAgxDefAmzRpKKPoS", "gcKMGfpFEPzlLKOamIRdqcimHedIdgWyrnjCaEsiaflodARjcl", "NWGdyucxFtCjitvdTFeQJnWNwMLklIiljRptLtiavorpfpENmM", "GeJkIyEpbPpDkWxMBGgNniPOxnCICavJyvHrdTszADaWjRKEqX", "rCDovfAqqAqLFoOKvmvojpcxyPTmxFgsschhFmKEojIgORUceT", "iWPmFoNiweTctDMxsqjWKUmHiwUQLzVichWEQaCXcWGOpzmrKV", "sVCbqEXziDuOkVmfzQleWUoUMtMnzpvzpCIufohmlyXtExaHzk", "LKLCRKooPXJfLeLxouisFJcxcSAAUwXOytRlPNtpfJqapjoqRy", "jaTxNlwsiFsAkwyDkcGPToyocfkywvwVBNfTSaReFmwNCmmrip", "ixjIeKtiTgqarQLGgyVvHwFAHWxGsAulGgOzyKBtRIBssPUHCB", "AvVmdBiTiJMLRnbaClaXQetFprnRIwwEbQBBucoFOxLxDTtBQk", "GiALuCbinkHKQkwCIPsdrpMFhaoWilnghCNJpzKKHkEWCQHOqJ", "kXLQGCctSSicVGJioVRXpPNamWxbyHPaeOVtECFSOLXzHMQRcl", "kIOVJDOfPQkXCDvBxRuVAAOGCjsNjXywEiriBduhUywltlgOnH", "qGcPenmUkpeXKEWGLIOrguPGXxifvTUqCCDiBahDFTCAdXIpRi", "wRDosfPxwWbKSUBrDqyPtmURPpXhOcKbLAmfHSEVppnlCCCOlV", "TuzNaXHpoGhGUrwGkPFLfDvMbViUAjNwqKfCokdBWdlFGfVgcv", "UFvfVysJAyjWydwJRMdGVEACablXfnqxlTxyadFLXkRpwDFmAF", "VOvfwGNupFiRgCWgvqUVuSDMjItCrpAIsgCVsOXJKXukvnpJsE", "FrLSKhkByFcvsRJLleBgswnaQLMMfNVFRILlRrbGVpdeITzvoF", "wggRREEslnsbqDsOFHDnjdKTpyuJEAfzvijgcGfOzmJmEKVciE", "OAiROUyxVEJwahfqPMFspUzjmKfmRQvwmWssroaOJjtTdODXfP", "lFcdHDLQdHuosSnDcotufVSLAAxODOMkvTvuHNfCDgmJLUHMJD", "ROmpbfhrtIvhWTVsMSwnCobxOebBVQvnbnvpvTkTPwmbpfRMDG", "iewhTMSONeexzCyFEHxSEULTfqaNMnJVjEyiLyuwRfIlggIzGt", "PGIDDHrKzsLCtBLPgTkbRGKEzhIytOAPbDOywPNLONRdnFdfAD", "TNsWHNpvRAwMCFXCPxRIRXchcPLUPLnaqOmJAkBGkNfynwTqkM", "MlTrzrNQnVcrXxAdWbuKirgfFmtzgFTSPdMpatwPHHzQtaeCJh", "HROdaHwvlOMPiVciDcHOcswTJilQSXMCQhPVtTEnoklJxemdct", "eDcyXESSXspncxuFVltWWdcDdRwMnIawOlQbEBqACupWWDJhHm", "cmuuwxPKMrrQWrXpNGtFdECFNcEwohTCFOkBvKjROHLREyRGdl", "OmhVbxOrOdqHljTKbpbOjVHaivzFLvLXeDMaElsfOCjwWkWJFo", "rRUlUMuMAfrvkciHfpAbIjRWxQRHLdOlSsBWNWDVXFtzWXKXxR", "FelIJrqReqdixIQrWtEloOBReXyTgiNijNVOsozANdqmOuATPK"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 214685381;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> rows = {"efCdABEFAFDFBbFccbBBaEdBdceAdDbDDADFDcDaBFDCEDEBFA", "EefFBfaBdCfAacffCAdaCEbcCFeccFBDFedEefCeaAEBcfcBDb", "BFcFeAAaDFABFeEAFaaAdbdbbECECebAdbcdFcDCEbEEfCECDA", "CbdEDaecEcBeEDDdccFFFaaACdCcfdEeFcAddFcECCbEEdECBE", "EEbEFDdCCEcDaDdAcbBaAabaCfBdCcCfaCfadeBbDDeAfAECCD", "bFaEeABcbdADdbEAcDFDbACCAaFfDAaEabCFBbdCEBBcEDfBdc", "ADceAFDDCCaebcfBfDFACAbCaEDaDbcbBdBEdEeBCCCdfDccdC", "EFeFedCdfeEFFDbbDeFBCbafaBcEcCECcaEDFAaCfEdbeEbABD", "aDdfEbEccdFBedAceEFBFBbAFBcEAeeDCFFAdcCcdFbEdDfaFD", "DfBcaAAEEeEfaABbbeBCFBdDFDFbBEeDdfCaEBaBCfEBDCAcEd", "EDadffcFDACAfAafDcfCeCfaeccBBAaBbefDDbcbBAeFAcaFFC", "DBDFCfecddCffcFFCdEFbbcDBBEefCeAcEfbDcbEFFadeabfCa", "aeaffCdBFfdbCBAAcBcFcADdACfADcCbFdaCADBCeFACaEacfd", "EdfcDFcAfAfeeeBFBDbbdDeAeBFDAcfABFEFfCFCBdFFebcefe", "FDBDebAfBadacCfdaAefDcFBabbCaEDFedadBBefACfDCDaBCB", "ECafBAfceeeccaEBdaAcCbFEaCECEaaBfEDbccCfbCEEeAfeAa", "eCdBAacdBEdBAEbdBebBceCeFdFaDDffbcACeadCbbaEdcCbfe", "CBFeaBfCaDEefabABdEBFcedBcCeCccFddbAcaAFcfBBFADddC", "acBABbfdDdECbbFdCCEDEaAeEFDbFaeBAbDcDEedfceBFDcCeE", "AafBFbACefABefFCcFFBEDabfcEfBaBedaDdCcaAAFDaDfCccd", "abBCaaaFfbbbAfCbdFceadFBAcBdBAFcDFdBCdfAAcBFdEFfFe", "bEedAaFCaBCaeBbAEBFbaaFFCeFbcECCEABCABFADEcaabAcDB", "DDAcdCfeadCCCbdCBbECFCCfCdCaCaccADdcfcDAABafBeaded", "fdfBdEeEECcaCABCDDbaCEcDCEBDCfACeBdcDBEDAADEAEdaeE", "CacbFBcFCDEBFAedfDdbBaafBDeEBfcbCEcDabFdAFEabCbBcE", "FfCcfBeecaEAdCbEfEfccdAbaBdacddAEfBcECbBABbCafBbba", "EFffebdDfdbABaCFEAdAFEbcfEcFCCABbcABbbEFaCebcEfCcA", "BBcacfAbDfcFfBfAAFBCfaddacceFbFbBBacFBdcdBedadFeCc", "eFcCceEBABAACABaaedEeebaeecdDEaDcfAFbCCBEAAFEDbbbF", "dAFFdacaEEeacBBeAAaEECdfCffeDfdFFabCAdDBcaCFbeDcEF", "CAbdACeeDAEaCcDdFfdecFCbBDcEDEeBcaebBEcbeCFbBDafda", "CafCdDdCbcfAffDfFecaFBAACeFDCcbcFAaDeaCCaCeFAfdDFa", "AceCFdEbacDcaAaeAABcABcDFafbacAdaCdcDBedccfDdAaEcc", "eAcdcDcFaEFccbAfFABaADEfAdeBccCBeAabCFdECCcBecaaaB", "CfcDDBafdbBbdBFfEfEEEEAdcBbeDbCfaBCDFEAfdeBAbACBdA", "dfcBCFABEEbcfaFCBcddcFbCabceECeEBDAfccEeCDccfdcCaf", "DAFcFdFbeDCfFdDbacbcCceFCBeBaaFCdFaDADECdaDFfDcFdc", "AeCDBAdCdCFfFdCfbAefeAFdEFdAAeaffBdefFFAecDdeBDfAa", "FBcDdAAbDcfBdafbEdDdfdbCDeefadbfEfedDEFfBcCecbAaCF", "bAabfFcfdDBdFbaAEadCdFdacfBbAdDdFEeCbbebFfBEfDFFFD", "ccfaCfFBbfAedFeaBaFaFeACdfBEdafefbadDDdCfDbaFddcCB", "CbecdDbEcEDEEbcCEEcccCfDfCdcEFbfcFfCEaBfFBCbABebDa", "AcAdEAEEAdfabFDAFDCCaFEDBDbFFeceDdBdfCbCCeffbaBcFf", "dBbfdcbcbFFBDAbBBACDddedBCBAaEBCbfaDFEdEdcFfBCcdff", "BbCdFBBaBBaFbBabdccACbFeeDfccBcccCCACeaEEaedadcAfa", "CECeAFddfFdcaAaAEaaCAccCAcDEfcFdfaADFdBeBAadbAaafD", "cfDAABEdeccbFaFFecAAfcebdCcCAebDadafFbBBfCfeDeccae", "DCaddDabccDBCDFaCEEdEEDbbacEdbfAfAAdcFaafaaafdAfEB", "bdEEDeEADBECcafdEFbdFEFcDAEBBDceEFBCAffcCAeeabbaAb", "bdEEDeEADBECcafdEFbdFEFcDAEBBDceEFBCAffcCAeeabbaAb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 47805207;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> rows = {"PdoyfXRduUXebAtLaImcVifNDufGOWgUglhVRHInyVCCzSKxQL", "KezgpOEJtjTLGjiLGbgFxuVgCOHbMnQziGgpzheAPyOiGtCCMG", "KHhJyJsEpvHRdPNpcJPXAIOkPmluuPhjEiBXzcATyQyAywVhNW", "UtBKgAbnFIxLmzPSxabBKsJvzgNVCIFVUzPgATofUjmXPziLdj", "yOzpICMQoGoQhaimTDpguuDLizXtNJlKoJtgUwcxTCWwnlhFAX", "aewkcHvQHQoblwstCcnQwPkCbBirOTXxcrKqjaHCtnNzcHjIep", "KOoumiQfiFcpBbtiVTSXUMiWRNQJvoWosKrhBRunIlglPsXTBB", "bPJLRweAMbORCxyMNCfyMgQjyKaxzPTPtEGJIOAeoCPuGLJCQO", "PwoKtGlNRONTXVtzkPklloEQsKPaPVpkDLRiUfOfmQtNThuGqd", "bOyVFuqBgLjgfNQSJvfypLQumxCjMlkDdnkGlPLPEeEgDJSPEd", "vCCHvDyCwCUTGeJsSsVSmbchMoOaMqNKeRavudMyVvtPIVxRIq", "IVEuKLrTGTKdNXDUclBDgSIMPGJflpQHdXuRXOdfDgyWbFaDfV", "qajFdHgSaUwjTkQGjXnlgOmirFPdKwGXyTXntKTktISejMAgje", "WSUROysTmgmclNOLomVTPJbylUnVaJlDKkmtJsTPmJVynsNiWz", "WkbaUbbfSbtkknPSwOqanwpTKEfAIjdGUICEyDUegDjxxuBLqS", "VFCvRnwgsnEMnmqGxlAIPUAkWvHTjmUNBpVrRwhOVIHgzlComH", "FWxOdhJVjESiooFTFvxQutziqHybWICNHXAFXphBbSgabnjoKK", "ClMsRXdWIqPGDSgirKVqgvNdpDryTNGOyjabByDnWEGbuQBwBS", "QcsqrTMaMewPPJIqWNWXySUViPIsRgDrVhAzFUNwbxJFIptSax", "RGHRXKszmdvABUMIWAKFSuFACNeuRhqDgTgrjVkRfBNWJXjqVl", "bCalcyStGTXxsWpLDfzekVaXRtayPbnXMjxPXtNaCIwKxIWsrQ", "vOFOmRXMRrblJNtsFPcbmveWyhInyPEqQATMfCKIQIeMmsUrsr", "IApGgpzNsgoWVHcevGWkticJitdHBFzyywhqpeQvIdnxBjbTFW", "SfPDAafvHTLHsENHlqNIASzdfKJSLsWclyeJiWHXANShpebjeF", "XaMCbyujsxTGpDvOCoLzaQUPmdDLUdAHrpFbftHTxqIglNPpbT", "swumJKcVPFqDDvbPpcEEDDgDfPzXIrpnDQCjlCvrTGmlgqXFow", "ecaSVXcABEpwgWTkLAqNAXgPlBbFCjFJoRVuOXkvDSbXHSytbr", "VmuRCoBPNfIzQKAflKVWePbiMKCROnPVQBEEVTLGXpOjpiBFzp", "TFTCSwdjsgeOsUTrWRdOugpAAGNRscnOfeXPPQERHIUMuKndyE", "UvTvQJpUVSkDjLxJOBlmOEfWmKqaAzxJHVCMHhLpwCChlXFiUh", "kmWKCSgqrekQbChdMFVNTCXrWwLiGPXOLDFOxQwxuAdLiMyDMJ", "DOhyjnOVLhMjCnKDEHyuBpLiIwNlAMtUGXCAnfFuOpQwTOkXUK", "PlKwTSDixyxMPLaoIDPDmHLnyEOSNcbRrMlRNIWPKgCzJFodoq", "FmILSzhSwjPNrbrDtaCSJQdQebHhQqMLeTfDttmCLEpMpKmnuF", "TEMPvCoGgKrdPMNRqOwtDnelzMHaBaFhQdbIvHaEtssWGOAwMb", "VHUJMSgkWiFMuGpqlxRHPbrXDQKmhgpNyjqGcgtJfpLddlyFzv", "rFUNNFpmNCbMEOGVskURLtASdOjNTLgiCndaNFEhBFKdIrtMGb", "twCEfxrcLMDrkuVGANOVDsFuGGsvnXynQrkjgDWNaAOqWHHzRB", "BrESLtdQFWwFOxcvKQfCVDVVMiuHKeocAemxmPWlFtoxOiCvbN", "LDptdgtPQvGuXLKDbKtXQyvUQzfkfEQowBuqkaDVdKjkiXchDR", "iOWAcnUriWzcVDMSFurzxUbEItLFORzlUhPEruUcSknRCBSOJl", "uyDnBhbXXxqxbzGIHJdaAwjsMHIirMxKBSbyIXuPPcuqKaxtyc", "zeAOLupIbRQtbdsTizlIgBeskUSJLjXCbzLodcdLsRcJpbiSGk", "TKGDWoWAlQVBpynWrIXXIoERQRGUSBKDdjLdCydvnDyuIuhDGQ", "xRXnwCqDbumFVlKgcvCLrmFNyqBcTFKjdUvpsjcAfUGTNgQUbX", "otpPstuWAJUVgCoeCyoJLMxhzJwaBcGXNimrmsFmJjAnbJebDv", "BfdjoCvwPBISPbMcHPHJqqIgeNOrpjNEVSFWDJndzUsJdJiPlg", "NzeMBEFzWxSnHOlsUMNqdsiIAQtOcUSajJOcPjEdTxRxPJwSVR", "WFWFAaymlJvziKHnTXnemanXtWLgShVhGtJLeOTXVwPPeliGXS", "VdGLkdRqQcQwqCfjcLNBfuaOezTbSDIIsgGgeDigvJlymDTWcR"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 424356351;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> rows = {"aaaaaaaaaaaa", "AbCbBDADTTAa", "aaaaaaaaacca", "aaaaaaaaacda", "aaaaaaaddaaa", "aaaaaaadcaaa", "aaaaaaaccdda", "aaaaaaaddcca", "AbCbBDADTTAb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 813999090;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> rows = {"QammoprdgBgKsdbvCBnlKFnvuVVHxoPQkelbSVxolvUoidwCue", "RhHDocgmLSwdMOpEJzqRIejDUTWftGDQjufRxVxQExPjmCUFSc", "eusndEUVbRhhKHfpIVAvjHlBFRfrAMPWEEsVArxCGDSfgfSgwm", "ITyjRpRhywdLrEypnDAPdxNtSPIQcLRdCcrtUUnjkGTuxCRSIm", "FQDhjgXWnQcXbtQEkMjjgXHTyQvHLIvODfcUsxgaHidPngTgwn", "PoFqQbUJSmNUWExmcqmWEkmlpSRNIODhSoIULNAgOzhCFcoMUB", "mGQqXAutmcrfSAUuhcjiFFMJlOVriFanhaEoziRzDzVSstGlHN", "dFwVaplwLLyaQhPdCJXcoaeUwJwPTarzwuaLWQDaJbcyqAwCjl", "yGrHavadEjXoRHtCrbBRTzqezVeTOexdpPEtlWceDOdjPOGnfL", "BdhGTxBkjARitFVtXbvwOhrPNoRDfgxKaKRMrGliIBbFnNqVam", "IgJjPrXDsXFeiLcTIiqnrSojEnAkVmySgKhKCXhaKBHgJkuXfw", "iTaTUJJjWFGapDnWlApkSsWICtUziEeAKBSFlIAQClTygvQvLh", "kAKOvUBgwfxsxjUQtQoSerVFxfpIqhTUSjToIjncauEjvpJpkd", "JdqrQrNAVFRMbhUBKAwGaRGFBTbTgbsMpCFmIAALFASLKwpmiw", "phwRMOFbJpaKqIRbXqrXbdEWQklIGUkBbgBknLlRXneRVGRrxu", "VbjiiXFPWbLTpsCMOwKFtcwHXGtzkrWoVUDdsPqVRjQaUxAucI", "cMMwtebJOLSayIyVmHTAcSpdkdqUxPUKiDijgPyvJNlnbIzRRK", "BOrmxbLXlsuOhFMtSBWmDkibnxnuHTdMxhkuizElDoViHVgliU", "atyFMSJIJhOAuiiiQGCUMkbkoxpBKCkBjHxkgXKWrvCTzErust", "uFIpkeoIBRwfykMuJFVmdeTbDsApkQOLpIAafuUKClCemKVJys", "lxytSsxsAnJyTItjuamwLmCCszsqoBjuJeuCSvVgdXqSsxykQl", "JKrhlrWqMlHoUHlPFwQXVPjKkjbELtOqDzgTbkJjPDDsbKaryC", "yXvEyIagIIclTjmcUBLcgLdaJkSWxdoodSeyeozpHhWEUFquJp", "HNmecOrUVxyXspJqyaGoEWJNbAookiRNSdxtVUAqGHGlGeWOGe", "QAgPOmxCxNLdyMbPXpPVwcLsCJMkvUuOnSeimhoknqNmGxeinP", "SrXgQleQKEinQwIPnpxCGtmcLSamRsnxgbNrmAwwUnafByigXi", "chmwQrPJwIpSiLBhFHJCIevNREKDKNuAxwWjKuBolNVWywsNDI", "lqKBAarJtDRHDnnVGmdJHttaSOgRVguyKqkldfbWuyMJkEsULS", "JAbhLLQCOtWtOMcRnWShrADOccpaieFTGHAGBoSMplPIKsrWgM", "dsukxoeeEPavxXtTrdIeoSLTqmoJOwFJxlqDywWrnrXyGGSRjW", "PdxhhkCCsRQayqDVmkyMIPUnNEfTvMrQPvbRFbRNgBNcUOSlso", "auGffzhhQhqTnoguoIjikItPfsyfMAWkIsxrhnEmQrlLVchzks", "PdMDpgcFdiWXjbrKfkHeKBVqvNvXEzClScbENhJezDxlQaMzOI", "SHciofQiTNsRCmeiRJujuGhvCdOpfLNcNKSnBoqokvShfgWEdQ", "GkRSbsOyMnWbcElpkKBhMbMUoDTvnsJENCktbCuMDJSWJimwAB", "kOkMRnNtqnqjTvLQHzUSpQitahRQsADePGqErJQeBxCdyzKKpE", "MuOAHhOatGpJCvcoKykfmXRemoXRLPKmnTCnfSIdwhjzauTanJ", "XPBREqtekmiWjjMmBmthuVDFyJpcFygKkSrcAuuzcjVljaomNt", "sBMCTEPpxjTXEXziSFiVUeLKeIhOmtKmGiRyVSKvmGiODFXjlm", "ogaaoGhsoDFjURrvsIlQQBvtkiIfpdgoMlfWaCCCrvumNeHuTQ", "sUnEDLJdLEtmpdaOBdohaAtqHhnFPdqwebgjBUFVwPSMUtzGpW", "qyrTXxstnDgJwUVSlhUeKWIMThaezdUogmoBjPKBrTtTTjkVFk", "GEANsdWiTkmBykcCiEwUmOUXWigmtmzNzjVtOQdDBVOwSnWvVm", "bGJRGgAziOcNguqgpMQdERJMRbkCINgkaHSyeHOeHLmoOGooUz", "BFanCRPIfFMVMQlhBMpsKrBnOHiyielWIgBlwqGJhMWMALhVjK", "UOWnwoMkuHQMUjBAqiSpddzQMhgPQKjWdWmgmHqGeyjwfGbDjm", "IJJIGjCkexmTaCCDLiQHEglBqHUzzuoIqghNvDWCnOgPrIJGsq", "WXioCoRrEDEOAcbGnvViwNNVCeHXHsznAulXuUFDPuqMwqoJHC", "pGjMwgPtdGXNBWOGMCiddKjyyEobqPAvuqsJevNBojaJbliHDG", "NEUcphWuvExRTSfeIToQwXhbKVmicNICeHySEotqUjldIRziML"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 447134005;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> rows = {"aa", "aa", "aa", "aa", "aa", "aa", "ab", "bb", "bb", "bb", "cb", "cb", "cc"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> rows = {"aRmDaicggtlbRfiREqtGrVwsExXQotbBOyJuSkmInbkKAFDVzP", "aSIzDEBARIekXugGwnOjtfTXBtVyUXgIRThgjecpHMbOELTgnl", "aQgsmbkEivFoVoVzMFsLbLnDTaanmIxVvEOhCAdViRMMJRMulU", "akjLsdxayfHcuLckfkaUQJkVyFiKtapfGylgcspusxNgtEfGRy", "akxfETTfSWxdykPgSROLDJXDkhrfLxATmwTddHrfrABAXeCclf", "aqSFEEeKjheDcpdGKGnrhHkrqUtCvhgudCeEBWueoktzWFbjbw", "acyTvdzCqQVMGreRTXhKcrTnOWUbhrVCajEkqlRjdWEIRNMFQb", "aSRpXpLiPWRDpNjMeRbvqoBmflmGQxbyeLcenPxzgjAUjniBIV", "aWfeSjExHyVcVAXQMeHiQorCgPaQsWsszDtnUDqqOGEofvlDUa", "adRfCFfDLVKhBGeghDEPqcHkOqGgoJVBJiHkQyevwfEvDrFEPz", "aUGsiACqsednwlRWhFtmQGuxMjcwCAcrxceKaJzCoApzeoxiyv", "aByAebLMzDtzMVuCqVfyCcADGAlBPGylQVHfszMuhNMvBgsouD", "aMlgUCukIQUivsAhmWrhseOdNXIlyvKCJRrRFeNHHIpUMIbwnN", "aJVApXOnMwDGOqUanwCTKhXJvrQGWFTIKJceaBLTQCLLtpLhdd", "aHJzNjdTVtusMWHSPaQdJcNTtOStQkVaBzHCadSEjgAuzUWriA", "vGIqKTeRzftjxDGhNgxsJVditIJugoEuDmzvoSnARzxhlslwlq", "vNykcwTwKHVICljnLrnadtLPXffDsDclauTPOyoridqyHqhiSg", "vOXTGgXxXdoNocxRljVtAcHeWNpkcVqwHCETTrXtADCKHyWMgn", "vPtOqWnrrPWWKwhzSyVHsVOMoTPBrGpkzJovgdOWSjfxBEEsiu", "vbRqMxFcIFmWbNWlIxiqRCyLDpvrhJfQWePoCifrxzbApLXyqX", "vdxidcfjgLhdGILkQulKbWVzPsEApHeSfuQwdbxCOuQrcOGzjQ", "vvlmSqzyIgDxhqqQBFyIKrQWWhduoulfENCdrpfkfdelNtFeIK", "vvTpBAIaDcjbuTdVbsnHlEupDPzrRVhuUqULVbtRGCVUJoVcjT", "vcvnOrKxKrbOBFKrzVsMDzXvNeEbGxNtkOQmVeIrVrqKpVirpl", "vvaaIJJBEFDxQmHMMszgqCeFJLiSnQjamXxhirCNSUPKECIukJ", "btTLAfFqkkFWRDOQFXBNQFQVBiPvkQOrXitksgiLHsLGgmCxIC", "bMfcRipbbqgicEnnKIQCkuOAAdvttoXdSMkabNlRnhhfOrOwSz", "bbkFXbaklbkVbllQcQquolFfSSbLlPSotBzBaKoFwwtVaqTwSn", "FaIxCrcExAqzaLKVReSXWzuSkgGlVRjGGUzOiCiuWlQembVfzW", "xqSxrgHaInOhpadERwvIdiGwHlrIUUwOVNKPmtiVCadNRBCURE", "jnbxLUePnHGHEwEQCkSxdCzeAvMqCeNOAlexPOdoRVfqLemEPE", "UvBxxDoFQWnuDNVXQTDBmNHzoqkTNihbRqpDyCGpKprUSqKMTB", "XDPxmdtuGJgFfFblsRtwFEqIQkcIDRxLdpynQvtuKqgbMVacSw", "PjwxSBjqVILgRdrVhpBgBjPbURwFNXoPpQqcQGqXOvuRqglghK", "PoexVewEXnHRQrrmJwgEVllshNPukuKUenzaVXyeOQuvxzwlaN", "fTuxiCblDJJanuEwaDKSoXhLIwVleBtolafSeTUszCfzMGVTnq", "payxwAuoSlDLRUwuVKayIKrRJzbzNGeKXmJVTuPjosheHCbxAQ", "DlrxMOvnquXtodlVcdLQobphFidNaCwlQrTtTXTqKRydBAMAeL", "fTlxJFzBRJnKAuwDqUONQTvifFlMRSFqrcvyHgdJzcguFHngxC", "fDgxkqDXWpWuFHmOrXQooXAjlhQalbGjptXnFQvnTHSvgibXGv", "AxHxaSWtSssONkMrxiDtrfkdmqtgKLFpDhKPwfciiWdvAAfLDB", "sVESOGVlCzgVBbzmeLyrvRFJmJzbConeTccypkQhfkTEqCgHDE", "qRpORVleGGFXdhNATRsViVuPXtFjEzOaXtTpCkGVakIVSsHIqm", "QzDWiLCcpBjOKATsvmhPJeUrtSdgFQfSnKwyLMMUqcfCOvAmGz", "HyHwKVnAWQaDwlbviioeiyBWzfHxiUkSqTJeHIyemvMIighRSM", "cFWfPzjPVhWXkCUqiOmXEietmyPqyzzIOhWDodHByheRbFfnFW", "ziadRJpHtwmwATERvjrxbVzLKcRWPtlVopieTRJAfSLEeBuVyx", "jgdjRsXRGiBkIokNuIAehvmCFafJLPDwPVJeiNazSESVoLuKBN", "xvCQjcdqGPWWqmuLIMgRrlpAudfvQNnatMaktLcxueTGpIFzWO", "uTLxDXVomtvslBETwLDjqHgFwJVRRxuTOENqGaszhnvJCFkPzz"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 229084218;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> rows = {"XErzPKwtrkpliDuyknNIEcHjSrOQTPQOlfuQkqrfacHNfwLyWa", "lPaLMSVfCvREvApwVdgzoPRFFCtSetEqPTBWOyoxQfJRjrCevE", "wIpuKuTqdkzdbjPBKAUrDxNEHjgVwoVmuvSRbvghayvbWNbAcG", "CciebXTGLBlTPKkkEBmTxprNofXJGPfBTOHQequQWtIARfEGPM", "gvlegnJqORakaRwFabdpdohrVeFMUgwoPSJFnMFrhMAyQMtMej", "cDDxGQoShcGSuFvHqdiPsjrHipJHzgJOIIeOJsjOrtFDJnsTag", "tnEnPRmRpoeCqWoNhHyCWWSpvUzJTTVOEtIwhvRiCQdQKKdEmU", "dGstivtpNTpyTrrlWVoQGKOqadTXAJOTuXNmwilnaNDWRbSHzz", "MgquloQXtcArNbcubRCcKLHWNOeNuUgjybVIAaJwuxNgIEazRx", "abfuKWupCvkaDuRoRJesPWfdGnTyogLAUVUfebmUllwomrPtnr", "LpvzGXRXMxdRWtIFeGyJkQxieEAPMmtAlVtwfspSmcnNRpkaEF", "njQzhTNksXxclxbyGbajxHrBxfAIpNuxleXkFHOyEQanvkPOJq", "HgasfBQpcXqfTDDVMevPOUlxDCHbgnoKUUdlxRUwpqCMfzVvFy", "tIqSxIQyNBPMjNJEgUxsyTfUxypuseFmuGPBrcuqqUetFBeNdz", "qWTnavAusXtwgGRDsBTfnexeXzPHpUrArRJEohGrWVIvVSOtAX", "gBSWjjzPlwERctDRcnSnpiTzequXefJwhqLODtFAfuRhLfTmQe", "NywkIWGqPRNxLgLiHHDNlHGsfQmJJXvfhVniaSDNfkzJIGHLrD", "wjEdRdQbcNHSCQwInLODiKbOFWiSIxjzpgyjweehnUNOglGHna", "qRSMvHfOtTTWrDEiAwpkjjHHnjSlIuqwCFhnCBJPeDGgmpDkkT", "GhsaMhklzjNPgXAurHtoBXLygEyysWEFbKJgeCOadrXxXkxHEN", "TRPRsEuPSiEHOBDfOuluqNRtikVlwRePSDaLOfscHkIGruywPS", "udthxgatGfHgtWbNNlyQpGXgIdcicMHwrCubtIgSIsxktyPHCz", "FnWXAMbkxrbNrSwiNMzVrcfEfSjKLhmtEyhuysXGaglKOTbAMl", "JafCfAfsPGDmxqcDgRIXFsKRVlPqLkREWAtmlXqCmgyrdMHTIi", "KiQKBrlmCSJNCFKUoVSOpeydLzStLjzUGAvJJjUcWXstRuzOCe", "yHWPODFKXXxQwtqKhckblcWNQqHchoabMHJNTMHNbXkVDdyXah", "nxEyRtJgXyRAAGUteNIBMtqsajQbkKNIXabBslLneNKjUwuzWh", "XJpxqSemyFyFUkJjyAFtbOXsuXEhwzNraaLbtAFhxdLgNxOxyI", "TPSDdgHSdrlVOXNhFRxFLWQyUWdRDVghEJBTxvVCpwuoRxnJoD", "NVaRVVUrHfdOpgieoctSIkUTnmCCCuGpDVfjeLMEXdMNwzhldN", "jinuQDbfBGqsNkxMlpbXVyoNTFweuMfowNlvXgcxfXkglClzqI", "lNkeQGSvzlhSGNycRaXXKcnzPToiCorSMKyqbsSABzFPqlrsDg", "JlArTgAJkSsHRiPkgUpibzdutlvtgECRDtDgsvMpOnfaiPGuVd", "fsdvfhfgTIJeDBqwevDJQGiVsJrdjCAWtazhLiotWjAeBHICFK", "IiPmlukgarOcSrfLGAcgGUhkIEgbrGbNtxPshhNcVFfSAUmgUO", "WfxzbMbFCCogKpqbEvALEzIVgWPkFJpVcBFRnStaoxAlMMTLCw", "nPEjhxsAqdSPVRkobjIuMKcxueUxgsdbDjtyoRrizIzqgxAHWy", "LHdiIBKhNdyTuWVOjMvKViQxQbiKrSznzGCrWvzNMhelFEoBqn", "oMjmyAPBnEqVOQzlrJrBQJkDTOeCQmLFueEIbkfcAsiQxMrmHu", "kAhKsDzEoIwkJWOJBKjPhhEpbvBsghuQQtcivFHbjvUsEnEhcJ", "iFaQkdUQJSXhvelBpqRDoUaiGKijGJPrnvXNNajXmARKXXVNea", "ToluvjCQkvQIhadGSafwMpeSrJdogEKqcGOydRVLiVOJeCqREr"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 62787069;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> rows = {"nwlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarc", "bynecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgb", "buqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsof", "sbcnuvqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyx", "acbhhkicqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtacioho", "rdtqkvwcsgspqoqmsboaguwnnyqxnzlgdgwpbtrwblnsadeugu", "umoqcdrubetokyxhoachwdvmxxrdryxlmndqtukwagmlejuukw", "cibxubumenmeyatdrmydiajxloghiqfmzhlvihjouvsuyoypay", "ulyeimuotehzriicfskpggkbbipzzrzucxamludfykgruowzgi", "ooobppleqlwphapjnadqhdcnvwdtxjbmyppphauxnspusgdhii", "xqmbfjxjcvudjsuyibyebmwsiqyoygyxymzevypzvjegebeocf", "uftsxdixtigsieehkchzdflilrjqfnxztqrsvbspkyhsenbppk", "qtpddbuotbbqcwivrfxjujjddntgeiqvdgaijvwcyaubwewpjv", "ygehljxepbpiwuqzdzubdubzvafspqpqwuzifwovyddwyvvbur", "czmgyjgfdxvtnunneslsplwuiupfxlzbknhkwppanltcfirjcd", "dsozoyvegurfwcsfmoxeqmrjowrghwlkobmeahkgccnaehhsve", "ymqpxhlrnunyfdzrhbasjeuygafoubutpnimuwfjqsjxvkqdor", "xxvrwctdsneogvbpkxlpgdirbfcriqifpgynkrrefxsnvucftp", "wctgtwmxnupycfgcuqunublmoiitncklefszbexrampetvhqnd", "djeqvuygpnkazqfrpjvoaxdpcwmjobmskskfojnewxgxnnofwl", "twjwnnvbwjckdmeouuzhyvhgvwujbqxxpitcvograiddvhrrds", "ycqhkleewhxtembaqwqwpqhsuebnvfgvjwdvjjafqzzxlcxdzn", "cqgjlapopkvxfgvicetcmkbljopgtqvvhbgsdvivhesnkqxmwr", "qidrvmhlubbryktheyentmrobdeyqcrgluaiihveixwjjrqopu", "bjguxhxdipfzwswybgfylqvjzharvrlyauuzdrcnjkphclffrk", "eecbpdipufhidjcxjhrnxcxmjcxohqanxdrmgzebhnlmwpmhwd", "vthsfqueeexgrujigskmvrzgfwvrftwapdtutpbztygnsrxajj", "ngcomikjzsdwssznovdruypcnjulkfuzmxnafamespckjcazxd", "rtdgyrqscczybnvqqcqcjitlvcnvbmasidzgwraatzzwpwmfbf", "jkncvkelhhzjchpdnlunmppnlgjznkewwuysgefonexpmmsbao", "pmdgzqmkqzxuvtqvnxbslqzkglzamzpdnsjolvybwxxttqognr", "baiakqllszkhfzconnmoqklpeefsnsmouwqhodsgcfohesyshm", "gxwtoayuvnojdjftqtwkbapriujimqwspslgvlcsaqbdbgwtbs", "eettwdnfnbyjvpdjxyuzqxstatbzpctthoofremgfkrbcvkzvg", "bofthgojhdnaywpnbitoraaibednezwfpdawlohssvtqtkfvsy", "ljzlucqxswyqdntdmfrtzlqsekejhzksklfepxchvczysvdgcx", "bbiswmeaylzifktmoikssfxtgpojxqiysrsqfwqdjqnqcgdqrn", "lluieazvmwnuufnnxvloyvgmliuqandlyavfauaosnlnvacsvp", "iumoiawcqxswkqwgxyazntnaikameybnuqbcqaggxachrynqxq", "qmlfotpqhvokiiammqmvxjvbsoaifzyxnjcberrnmixxsyjhov", "engbpyqrixqgwdrygxrxkfhicainhwilkqmbpeszdigznzxtzq", "sjwatycbmjawwmninepfduplucltxmkpvgrrgtuseurageltkc", "apwpbqromqawixezqkvlfbhwcocpjmrmbpbegvsuluqtuuvkes", "vjtdhvtjmexfqbvufdpaxcwnwqjtbplyzedicwsodpwtqrpyue", "arhwgfnpaqelofrsotqiktxipqzeqvlqmuoubbjbrpmixfclbs", "tnosvdkujcpwsdqhxrkiueziowoqjpiecwxxbjtnmkjgncpmva", "uqgtausokbfugjtfiuqbjclvlazamucimicnewdoxjlfuemdad", "gkhufsuevjaxrnivcorhfrqqwnujquoyevslqprlyskrhunljg", "soxleuyyfqutozqhmgyetyyepfaesjlkzivdevdllygazxjndj", "rxhrdyyddqnqdoayshwxshxzjywumbffamxdnxjqoyirmirern"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 640993146;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> rows = {"xsuloikroqamjxhvndallxkfytwttvvrpqegaqxogzdqyknlpq", "yanifldeezbcstswzsnyjvxmnvybinrgngqurtyxuazmvrlumy", "uvvrjjohmwufchlsbencbieduzwftifpfdgomwvasphwyuoayb", "ebjieghdncltrryzfmvdmnuvjtpzvpczqohxuqcjsnelgckmof", "rculxfemgbdicwyjvsbxetkierlqfbxyetjbyqqgrtrurpfmkh", "jocwyjpjzunxsrqdurtkxngqjxgokqxvgarejgqkadhuuayort", "bqgjhpgpgsfdolffrqmhbokklgklxdeywnhfepukibqwoxbfqp", "nrgzdrgocdtidpxmucbqojrghfelnuaangzszhibmcmptjbqnf", "gcoykyfojskluzuwstdaxqejhyuloiqumguwecnnuzbpzvntoq", "vliawsatdobtkpzhlejytfauwzrjugcptmrserlhhoaudcboim", "pdrpaqqrzmxddtqvluoweymgspitfshwwynwqfnqrnvvilstii", "rmgduyuftzxawvbjrrphjiwffgszzcisqoxlprqkqnloloaehr", "ltzjahpsgqxoknfhywyogrethphhtrahkcsmjkgpcdgnrnwpjx", "gpqkjxbshwlhfxjyjskqkmtqbkdycovidnuokvjrtubzukzdfj", "tpxphzzmzbawlfjfuvcfpwbqxvcyzhhuygjhhltgoteaznhvlk", "aaidqhzsfacoucwekerfmfzrhagpxrbxtlajsbezbgnwklcupv", "aeabviddxaxazqlbcddgcgoreacixudzyeavofanfxngqyhubm", "aftqyzqcinylowrotfvusctfijdsdggfnbxnbqsjfqwupokitg", "cmiwtthxlnfruvtsiuiafprbjgpuqlatxkrsdyronxiisbacxk", "dczwdlevfughpftgxzhpnuoxegagixsnbujffpcmkivbpoimnr", "ddnrcuzdakatxcnjjsangmxbomryahpekexmyzrzjsuiwjrfdu", "ujgrkuddsfkjjwqjjoiaptulbquvxxprgvksqnwktiwefmpqcz", "susnfufarfxgygbjatywgthcamqpcsrumjjufpuwwteubifcbe", "ajzhnzvdrxyismtdgbscxqyclzksdnwgzypmxlsqisaceuglva", "purnyepkwuavaztqnsbhjlzjoefurcwgznwxtliqfklileyywb", "ihmhtanywebvnakjzewjudthlenlflontbumdimcopxbrhmrlk", "ahqwqdafphrfumgrakzmmpclttshmgsnpilgllncteipqqgsch", "foxjbqcuzrcrerbrzpcnrxtbpmsveudjlcsmuxitoknueonfdp", "sxpmaeyubepgociiqehbyxlltrbgxfypepdevdzwiqdyungksq", "lqnzdjqepnlpfrekwzoxwynbwjqetiuhakidtykkoxavpefngv", "ketzfpivudgqkgasmvtygjxiemmjzuhlyakfsudoyjekrhffcy", "dkjbsnphyrdfcciphajkojvsunbzsezyqiblvquvjxbobjdjjo", "vzyrruettyzswraxexqyszyvnzgsirjeqjxkdbfwzeqyxqxcpn", "chpafcclxkdgqtpndsqkqsqgqoynsnduwsxbwznvlsbensttmk", "dceukuiijaxowugtxfukageeksydllpontiansizuinrcwmbdh", "ofnslzkkcvvsmknukdpvcjdrchppiuyyalrlmbxqzsilfyhpbw", "mdgrwiaozjixhikawwctndoxotvvkwsxbaoyipmiaufjfqmdoo", "ybtmzhfwestwpuwfuhwipyfwkkowpdknedafmhcqzxpqrnyouu", "wlvbifnybcbnqisspezrwbqlrkbryvoujjytonrpqveidwaucz", "oycemwonnmkbjvkjoawgrmdvwirwctyquaviylxmyhpjfcstcq", "bufepbmjyreyhyaeizqfnqpczugtnjjrfovwqkfqbmqimqpvrf", "aevrjulppbaysfnpefzlxcxnnkdcfvjhbezkamcppenhkczqja", "bgdztsjxuqudxxjyijlmaaqpkculsdlwkqvdigceywjvuswedj", "sfjivvnpihsudcmyixgkbejncffyllhdqsnnqacyixulbjmjgu", "ujzdwdkebvrkyhcnxsoztyynjawxjesfotkmwuszpjjptldqgt", "rzrqocslabruhfntslomkfwtvpgahmtynkqemirokiktoxoikc", "uuispfjwhqkapymhcaqtpcdzvrzlbloygyqvfatmseoheapiah", "drjgtgyurbfhzlfsjmucymimwmonupuxideblevcfdkhorbzev", "ecjmrfzfutworhtxiebgjijtrzksbqpfvzrmgqtbmsrfzlcjrd", "panavfcizdypitqzhysbzettjsgnbxstafvxkxfmaebizrkhpc"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 730440110;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> rows = {"bciaaaebddababebcdcdfababgbadeebcfbbaaebddcbafcfde", "aceaaabbcacbaabdedaicfdccacgbcfaeccbaafecdfachdcde", "acaaadcadcaaaecdbbdbdgeaaeaiaaaafcabaacabdecddbbce", "behaagacdaaaadadgcdaeddcahafeigbefhabecdabfacccbba", "adgaaaabbddbaafafdedbfdabeciahfbcfebbeffcdaabccacb", "abdaaddcdaaaaefbeccdfdaabhbbcieaadfbbaddafebccddbd", "aegaacdcaadbacgdbddicdabchceehdadfcbcdeddgcbbabadc", "adbaacecddcaaadbiecedfbabgbeadabccaacafccjacaadcad", "abfaagdaaabbaeeacdaibaacafbcdagbbbbaaeaddffcccdcbc", "baeaabeabcababddaebagcadagcibhbbefbbaefebjdcbdcaag", "bacaaebabcbbadfdfdebibddaecieggbdcabcadaaifbcbbccc", "bcaaadccdbcbaedacbdfiaedagaaaeebedbbcbdaaibbagadbb", "bdjaaeeaaccbaagdddbecdabadbdccbacdbaabaaddfaaidfab", "bbhaabecbdbbadbbfeebhfabcdciebfabadbabcbdjbbbhcddg", "badaabccbadbacfbccddheedbgdbajeaaahabcffdfaachdcag", "bchaaababdbaacfdgdahbfcbabbcdbdacbiabddadbbabcbeac", "aecaaeebddaaaegbheedcfcbbidadgebbdeacdbaadbcdidadb", "bdgaabdaaccbabcbfdcfgcbbcgdicagbgeibaefabgecahbbag", "abaaaaabcadbabfaiaeiafeaaadeddabddhbccdbccbcbjcfbb", "babaaccccbdaacacbadfebecaebicdfacdcaccfabidacfdbcb", "aagaadbcccaaacfaddagjbedcddhbgbbeciacdceaidadjbadd", "aefaaebcacbaabeaedbjebabahchacebbceacdbddbabdcbbcb", "bahaadababaaaefbaaeagadaahcbecdagfhbaafbbjdcdjaecd", "aafaaddcddbaaadchaciaeacafchabebgcdbbeccbiaabbbddf", "abeaaecaababadacebajdfdbcfcccebbafhacdfedbdbcdbbdf", "bbbaacacbcbbaecaheadgfacaeceadfbbfgbaebbadeacadcag", "adcaadeccbdaabbcgdagcgabafdfeccadeeacdecddcadicddf", "adaaadebcdbbacgcfbaaebcaciccageaebibceadaecbabcacf", "beaaacbccbcbaafbhdegfcbdbbadaaabbeeaccafbdfadjbfdc", "bdbaabbbdaabadeddecjidcbccdcbfcageeabeecbjccbcddce", "aeeaaebcbdabadccicdhifdbcfcfcedageebcebaacdadabfcc", "begaabbadabbacfahbcibfdbcbbfajcbgeabbaeaahfcccddba", "abaaaedaacabaecaaeejcgbabeacegdacdabcacbacebaedacf", "bahaacdcacbaabadddaebdeacddadaaafefbbcbddbfcdhdfba", "abbaafaaddabacgabcabeeecbhcbeibagabbbefbdhbacfdcbe", "bbhaadacbadaaecdfdefjgbdaacibcgbffbbbccaagccciacda", "bbhaabdbcbabaafdeeegiaeabbcechfbcagabbcccbbbcbdfac", "bdhaagccabdaadcchaagcfacabaidebbbaabbbffdhbaaacecb", "aehaaedccdaaacebfcagegacbbagdagbbbfbbdfccdebdaafad", "bedaagcbdbabaefcadbgfgccbdcfahgbeecababdaadbahccdb", "bbdaaeaaaacbaaabgbbgcgeccabfcgbbcbfaaeebbgbbdbbdca", "adfaafdcdadbabdbfeahjgcdbfcbbafadcfbcabddaecagcbba", "bcjaadbbbcbbaddaddebjedcchdbbbfbdfeabdfbbcdcbjbbdd", "bdjaaebcaaabaaeaaeaeideaagddacfbgecaaadacfebadabcc", "adiaafdcccabacbdeddadeaccfbacjbadffbabbecgbaaaadaa", "bcbaaebbcccaacgddedgibddbfciddgacbdbcafaaacccddfaa", "beiaaccccdbaaeabbbdbgdddccbdeifabaebcbbbdhdaahcccg", "bbcaagbcddcaadgchdccjcbaagbddfebeahacadabcbaddcdab", "adgaafeacdbbabgadacbieacagcbebfbdagbcddadafaaaacdb", "bagaagbccdbbadddbbbegecacicgeffafchaceeacjfccecfbg"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 322949490;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> rows = {"xdEXNPpwdFeXqIkdvOlCCGJyQijPeNHdxWhdpnKexoKlxuNbpV", "DLmCRbOOpoxIuLbNWLwljVhzQWwiGoGPlOegWkJwcqhivPhdbi", "lEDmvCgPRHhPwuGEhdogVEsRIJylaWdOnwLmoQvlyltsRnHLqe", "LdMquzgyVRbKxHkVlJdEcBoJxosJnkSDDgqEhkJLbnOGoEVvMz", "eitJVKyRJkMkCtSbDQSKRmHiuPDFNGagqEDooiLgJFvHWEsMOD", "LhtyMvgaolBvFVxQJwOvqCSAFyHiQQwhJMpXLndlwstpBFtDPz", "wazoKynQnLJtskBjSEwVDjJOLGoBunWDGzNbgQeWshPDNEsRDw", "LvwRCLGiWvvNyJGxMXINJdsmAEvdLoDlFzPFgdJjtGVtXbpoxa", "DJMAIOzMDdcVCnEKWJQCOmRPHHbLdVypoWaLDnOxyCzoHMwdsF", "NgIgAzovSPbmAPidBEoNsEQwgmkHEhlonwPFtOHhcQelQnugoG", "diELHnWmviDbMuQjkQvKxldViqmnmjxxyxgVhFdVXiRFipiSEA", "bXmPeSEGdMEadJNmAMgqAWnqpBRxNJROcALbQHObxmtNSPcsqH", "EtpyizBBqAlmPoxwkqQdosjRMXxzdvxnaoEokQceSpGkbqVMRh", "HCzzJnDPJNDyqXygLyqNwjFlCjvsBXWWlhSHwilRdoODvmihxu", "EJlcvDBcuiXFWgAcqcywxvwVObJCPHHJnpEVePCKvJWNihmwhW", "cFKqCvgPNFqygBsFFztEQAaVCWWhKsISjJHyxpiOjSkRCkvgzn", "OsluKaQzACCVGOIAAkxWFtSSnGVymxKxgIRxFANJIOnhEnXGhn", "VBcznzkiLPwmusQgixRvsHXXgctpBGGwPFsmKgMuPwWgQEghpP", "RPxbvwujCIdxjpixXvmxHnnyRFVsKwAcKMlxRxFJqyCMwOzwwn", "RAOudmFcAGussAOauMJzojystIiWeEcbFLwSugsuBBlcpXWaVA", "QtsdpBtlzMSLHiQaqIpoDkKMEeBvKbdHEMQASlgSBQQHiSjAFo", "dkPndpoHSeRiJDezxOLKAlPbxFBJizzqDyDCWKSIuReMMEiteH", "lvKomWaHsGLIkszyzPsEGIltXWDOaDEeRNgOtsQxkdNyPnCcml", "dbqhvEKcVFeXGzqMIjdtAWijeRnmFALjIeAtEHQCDNoopdFneB", "RbSxlywjXpoQuASAOCpamSpOnvkesnxvgJjSviJPvOpGHiJHvW", "xXbiSivDtaVktIuvlFJqheaigvLyKsWbgQvlWXtaQHddPveFCJ", "MLQDPdykLtklOqlMcebHxuhCiymQotpmyLBBdKDGbCyuEhBgwq", "saDnNvdpxCbqXkxJAaEnpwlszCwgIwzDpotXozyPGRxbvknqkS", "yezvLVuccmcbLMnCgmBpQGgHxSADQxLXpOnvRlhzmEEKFnDvDR", "NybnMzNLSStMWchOWRvWmjHeawLjqVzbFyAAkwXSEPehxclbhM", "sPLNyzOJxAWmLdakohkxSFpVlLDPknlqphCCiHoHLmHIGgPxud", "cWzCediBvtGlvBQJJQssyHRtgywVVjnLRzVxoMsuGbziAmMLMK", "pRQyoEuBzDxvFVtOVIHkSvsaOdMRsVvxggBsqELGxOpkDecbsK", "vpGOmXSMlebFWoDOnnnWzOghSnsFVPzwyxbeWVIGkOzHCeNywI", "aXGvkaboEWnjIVjeXeVLgzLFCXGSxeDWuJEaHODQXwppsAQxOg", "QvKWnjocWHzXnHwAVDqVhOCiHnpNmNVvFhvmawuVCOSlmDORmx", "RWOdXJoKpVqKnvhVPpPNEAIqsGFhBXFhwMHIpIXNJFyEzCQdbc", "cPjJLoovNDKazonALMucdWbvJLEcVxxSjLVDqsbGgWAMvtXOaL", "NddFksAOHOjwxdjPhtMQnQhjmbBqHclghRkjlWmoKMnehiplGb", "eVHDkciCKzQaFNkCioyscPjydiMmwsxpeyVgkqPmaBnxPAoakF", "WCSGdNPKgkHdwJmLsjFHyzzQbSFxjnnHlxPhMHpOkAEVSApmkF", "nCSRszeXzEFcDFsloDuwKeiNebCEJVsmjoMjIypephwwccGGRm", "zAjIFVBXnyhvEJkQIKskSdNhxlopcgecyIzcBWERzPAVdykPJW", "dsvqRSzRvmxMDVSeJsmoltFAcJVnLjlSuibJszygRLNtMChIcA", "PGIcEbwqlFIttmxlQMbpuCSwEmxtSVHCaJRqiQDetNtlQtmwRe", "joquJmsHdgiKaRoGeuJMQRbyVnSPAinqmBhKhvOQhDojXgtVDG", "qccNRMKmGcSaauDKdJgWesSLycqlKqSXVMppMFshsbnEHvWkSP", "HxJCMPoWdBGsIbbiDDtXDuGKHJDLWljuvXLhyneynMAgPeNxRx", "kqecBOmSjOpaqgPhDKsRINcJbbHmKczwLznxVFeHlbLWBFPdnj", "uRNSCXVvQtdzwnpgbWDjsWIPPRbtOwlghMgFsuHVNsaHSwBBtc"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 988900176;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> rows = {"ab", "cb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
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
    vector<string> rows = {"mufiizilbnnseyqEcxixurpbBndpmcnCnoayzleFkFtrytdDCg", "gFAdomFqvmhiChcmsdxvxnkncvAFaFomExsajfCetbuvzjtudr", "lFlAhbcgugplbrzgdrhsCrgzCpljjqAlBsgqlcAnooxjCDFvvE", "sBgFwziaCqlhayrusxDxtsobcdhzylrqqjcxlmapsgbaEbvpvw", "gkvCEgwEkllrEnkezFmykdxstfAonjywnciuffCfoCcoeFitsa", "dfqgqCkDCgdmcFAhubmfCDAvdlmnrFvdwCzFinnqosFFDywbbm", "AqErwCxqDEpploofowgnfgwzhjpjhywDxnjhlBgeFCimBlshwt", "rdzhEefubBxuCBlehhazxpBofDnamlzEtyrBmBahBwoDBoFEEA", "DDuBxColkxcyFFstvliebkfbtBBFAbxilrdnEokEzxExrFwDoD", "CkpfhfoxdwfwAyqCnqvmdDcigqwejEdAotsaikhxDAgfotxgAk", "gEFqosckwxsDCliisdrwhfpuhxDafxrdymhbdDCoAbyccwqqyw", "kuvhclqsniexCetEdvmrAdjiexCfpulbBkzhEihahtBobvaCBx", "owgrmwEbsEmBunmbClltwhtitejDgpwntugcjrolnlrozaeafD", "qtfrypsbCeoDEFctdCkdBAutevedmqCewrAearcncuEqzwdBeh", "wtpzpEoxDFmyjhguFkrwlrdtaoqAFvtmwiqohtxCkAmbvqfeBk", "ufutgjCblsDhwsrmhbcChovEusigElxmrhfCuFyprhgBwdpgCB", "lagsgsluirypAyqdgvvCEcmaaxBezEwehhBtdDBpFzAymwycae", "rkvbcgvfnFvCFdazpwwjkkugnpwosmztqoguCamluCoiDbDFkg", "gDbopazCEihiCjzsyccxotxdjkzggFujCbhczqggomDFoovEtv", "BtceFAqlByecvhFDgpzCCwocCyzjmAaurBqgumkrkcEqukxzeC", "ynctftoCeegmfikxbaEFFfqkDsBxmDlsCmbgBfzsyglFmxprCC", "fCyqtzhoqyhrbypFbwybhdCxczDkiojbqkCyCwgoCvpDoxzqkm", "fqEwyFvcFjDzqyirthtjcygwnkCxafepjzguugkeACvyAhvBgd", "aCbwychErFoiwjmdjfzvkewmAtoxFoCwkvnpybhdxykakFxynq", "osCnCFstuqosDgBCnlpCvFujDvgBqFCECgketFgavAkqsDzAkr", "fBxCrBoptfcFCwjzAudsEbyEAqccnxllcfxavwfvyescwbFuwd", "vcbFgchzvDFAyaodCvkblrFbkprggDezqwzbfqzttwwlzyqCpc", "wegkoeroxoeEmFCvmqFoyifvCuxBrzxocibjouqhobdEyDbjdt", "CglDscxAzszbCdwvbuhzocFgleoAizgtcFCDdfqiidqDhiAsqu", "bCtisfcAyFynCyBbroEgpelxEvFfwivrefhFpishCtAnpjotty", "noCwkwkqmcrEyuxBtqEuctdFvbfoeFkeydEhnjExwhuDcddhEd", "guBgulrrhremDAgoEFDwargChnAiqrqbqoeizEwgDxwcwbFyff", "bhzhdksvijgasqekfbyangplcjBclhycbcqavxDEvqnClAkrgz", "AADAetrjvetfcDgrpffmppidmodgklqyhupkgxklmqEzkFwBCD", "AsrrjmnEdBlFkghvjFBawvinukxpCiarDpllbswtsdwvCmbgvF", "mwBqqeDcswDFdjunfgxDqwyfuxpqFpBubadfnDcidCdknmjshj", "tvcoDjklkBhxbfbhwAiFkesivqgddiyDDcwekxdzwwcgrzwsAz", "hsEEhdCzvvlwckEmsFgxgkziyfsAgkzisafEjuFndlielxDBFi", "ArAfDyqCnpAwBrtohmbegvynczCndxfhnnitjqusjaAFgBqhmq", "xAzxCccFCtwimdhtyCgxkqovnnensrDstFbCxspDvsaxCfqlsh", "BuBDewDhCrbubBDAfmqgrBnrjkCurEDDqrpculqvxofzbrCunq", "qgqbozxkvzrsdfovohfCpbCmgidDAvcoazvyEruaqByqkiBiFt", "arcqttliriDelqfihgfcissdpbBocslomsrnelEctyokqCkAou", "nuzkgzDlEEiBBbridEyCfDpxuoACwytkCorptekyBaxmuuxzcl", "wojcpmzzqxqkDrCzyiamFpzDwlbohpuDhkryAEdsAvbxuptCuF", "wBdxbDnbjyiqcCrwhizxCcbDrhbokapBDwEABhfxtAcgupEBrA", "tEkrlzieluinqeDizFpeftiAExrFwcyvqBvgdqntAlxkacDwAo", "fCvEqddndtFreczwhkokkFxADFgDglmpewEbtBzpqudsDiuxge", "wpfnjjdvkDbnukwAhdzlifbjkmkqmgCDcihiyaruukufChbryl", "jAzwEBAgvbglpCABywngpdnnhAloodAdmrtmosDkeemohkhraF"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 563103490;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> rows = {"lrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcby", "ecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgbbuq", "ljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsofsbcn", "vqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyxacbhh", "icqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtaciohordtqkv", "csgspqoqmsboaguwnnyqxnzlgdgwpbtrwblnsadeuguumoqcdr", "betokyxhoachwdvmxxrdryxlmndqtukwagmlejuukwcibxubum", "nmeyatdrmydiajxloghiqfmzhlvihjouvsuyoypayulyeimuot", "hzriicfskpggkbbipzzrzucxamludfykgruowzgiooobppleql", "phapjnadqhdcnvwdtxjbmyppphauxnspusgdhiixqmbfjxjcvu", "jsuyibyebmwsiqyoygyxymzevypzvjegebeocfuftsxdixtigs", "eehkchzdflilrjqfnxztqrsvbspkyhsenbppkqtpddbuotbbqc", "ivrfxjujjddntgeiqvdgaijvwcyaubwewpjvygehljxepbpiwu", "zdzubdubzvafspqpqwuzifwovyddwyvvburczmgyjgfdxvtnun", "eslsplwuiupfxlzbknhkwppanltcfirjcddsozoyvegurfwcsf", "oxeqmrjowrghwlkobmeahkgccnaehhsveymqpxhlrnunyfdzrh", "asjeuygafoubutpnimuwfjqsjxvkqdorxxvrwctdsneogvbpkx", "pgdirbfcriqifpgynkrrefxsnvucftpwctgtwmxnupycfgcuqu", "ublmoiitncklefszbexrampetvhqnddjeqvuygpnkazqfrpjvo", "xdpcwmjobmskskfojnewxgxnnofwltwjwnnvbwjckdmeouuzhy", "hgvwujbqxxpitcvograiddvhrrdsycqhkleewhxtembaqwqwpq", "suebnvfgvjwdvjjafqzzxlcxdzncqgjlapopkvxfgvicetcmkb", "jopgtqvvhbgsdvivhesnkqxmwrqidrvmhlubbryktheyentmro", "deyqcrgluaiihveixwjjrqopubjguxhxdipfzwswybgfylqvjz", "arvrlyauuzdrcnjkphclffrkeecbpdipufhidjcxjhrnxcxmjc", "ohqanxdrmgzebhnlmwpmhwdvthsfqueeexgrujigskmvrzgfwv", "ftwapdtutpbztygnsrxajjngcomikjzsdwssznovdruypcnjul", "fuzmxnafamespckjcazxdrtdgyrqscczybnvqqcqcjitlvcnvb", "asidzgwraatzzwpwmfbfjkncvkelhhzjchpdnlunmppnlgjznk", "wwuysgefonexpmmsbaopmdgzqmkqzxuvtqvnxbslqzkglzamzp", "nsjolvybwxxttqognrbaiakqllszkhfzconnmoqklpeefsnsmo", "wqhodsgcfohesyshmgxwtoayuvnojdjftqtwkbapriujimqwsp", "lgvlcsaqbdbgwtbseettwdnfnbyjvpdjxyuzqxstatbzpcttho", "fremgfkrbcvkzvgbofthgojhdnaywpnbitoraaibednezwfpda", "lohssvtqtkfvsyljzlucqxswyqdntdmfrtzlqsekejhzksklfe", "xchvczysvdgcxbbiswmeaylzifktmoikssfxtgpojxqiysrsqf", "qdjqnqcgdqrnlluieazvmwnuufnnxvloyvgmliuqandlyavfau", "osnlnvacsvpiumoiawcqxswkqwgxyazntnaikameybnuqbcqag", "xachrynqxqqmlfotpqhvokiiammqmvxjvbsoaifzyxnjcberrn", "ixxsyjhovengbpyqrixqgwdrygxrxkfhicainhwilkqmbpeszd", "gznzxtzqsjwatycbmjawwmninepfduplucltxmkpvgrrgtuseu", "ageltkcapwpbqromqawixezqkvlfbhwcocpjmrmbpbegvsuluq", "uuvkesvjtdhvtjmexfqbvufdpaxcwnwqjtbplyzedicwsodpwt", "rpyuearhwgfnpaqelofrsotqiktxipqzeqvlqmuoubbjbrpmix", "clbstnosvdkujcpwsdqhxrkiueziowoqjpiecwxxbjtnmkjgnc", "mvauqgtausokbfugjtfiuqbjclvlazamucimicnewdoxjlfuem", "adgkhufsuevjaxrnivcorhfrqqwnujquoyevslqprlyskrhunl", "gsoxleuyyfqutozqhmgyetyyepfaesjlkzivdevdllygazxjnd", "rxhrdyyddqnqdoayshwxshxzjywumbffamxdnxjqoyirmirern", "kxdlicjfqkkvnxuqmszcixmzkwsqoiwyfalpeuuugfrteomqin"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 966097468;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> rows = {"hGuEXnfxicsXGwFquwnovRkpegXprXTWXXCPVKFmnMKSwRNkCf", "tsXsapOFzcEupaoGoXfbpjriXMEwNRPXJlOaWXHScxOSzVTdNX", "XfXsNKFuxrbNGOKTXnOUzRDiTIJAXpsMsJfgBaOlXnrDPStSwd", "zOzNwqJvwxrBdgLGuBBRthSPogGkUdooBXeAfTUEzHLuGEJqjN", "eqXEjRzaulchfMIWoiXxuNsSstKQczeUmRCzJPiNEdsraXMabz", "SEUnpsABzXHCheRukmpwQgoamWdXXTbhWXcrbpoHkQUrznnuqq", "LzpiGlEduoRRSobzWpWJLFaMiPpUgpNwmAxNNhqRulfoctzuLD", "McoKfJrXToKjwCLfiPXcziKaxgccXjGXTvrHbPibvbGCqKOzKB", "JmstSfoFSrjgzUzWIUpXQluVOWCDnFjaMCfKIuuiWbeUKBckzz", "oDKHzFzzfQpzKouDtxjKerpXMEoWTppCikLXirQXnFnvzDXnXD", "umhEKTwSogfzVqxWMxXGDAzGVOkgcMmrHXXGJKKzaXKOzMUzzP", "HTXzVUPRmiGKRzxhoMaXaxVHqiesGhjuxMSnREKGcVhjbtQjOg", "kffCFEWRWPsMTGPPnjUaXNKNVLsCwaGmkIdokmqIPOHMfuwVJF", "LkdHJFtkFRXfnhSCXtADJphnGIXCwgsEERTjJaIJwXnrIoWIXT", "DaWHGWmgNljgUnHeGfKsTjaFzALrHcDRvrVXEFVrXUqrDKBfUr", "QLBWXzASgHMgnPnKMukrfCvRkLaLtOoOxqJgNnzAXaDwDzfSWt", "ovNhScNUNdfmzATcKaXzXtBgNVpgJGmXBcXcQHdzRbmRxotHgN", "grCmnJGWsFIusolSSHChLOfbSnczRPHNzcqGiNQdjwxbkneLjT", "UPoWlBPKltdPsDGfeeWoisQcSMHSVowFwgiavOqoiSQqEtdutn", "xRxwlGXbOXnLAosKfahmoLaitwLvxobJwXJOhMvgfddtBuFvcs", "SzmIoVgBPcWnkBThXKiUhTUDBmNfaqklzTJaEfUkLjQDfPlvrT", "dKfjsWXijerXzapmWROuTqaXGLdjmtDlDRETTktRkxNVztuwOv", "jPVNkJPMekUVqXNCBbrLWjwVTTQmCazRNxuFRrSqSTJHCUoRjX", "AKRXRuJnqnkPmKLaeVqzVzUapGppzzVncfspaXfvxTORXEaQNm", "hzIXBrGPxJTXulvBUkmzrnVDngovFSsqVVBWfRTKeboEahWMTi", "xlqStWaDAXLPxBXXvDXTcXFPsXggmitTnotNXwTGgPpXAozBDv", "HFMFSrqVmopfszPjerKjuuCLkXogtOrJpeWXpWGMeeDFqCQsIi", "EIlIgFSTKXchKcWekjpFRTbGVinXwsawUpNaXdzHazHPzLuLkw", "ngmIwDDzkbDgXUsvzMSjkEtHehQJCmSDLSLJpxeMfXCaqEfNPF", "neBcpXlBTllerkXtUptXtqbboOkNXRaMJznsXsXBOWVRclqViv", "XKOzmzTRnenTjTSaNroJPAmeQVPMVmxlifDJGVXvQraUGIXbxP", "zcHbiixQtQEAjQOpFUQVxMxSAPlaolLUtqrwwmHkdCfbIIvvzX", "JBqWbDGEHBXnsrlTqXROEnPqJqUvsBLNSlIzpRXzwzeXTKDPDP", "ClwSDedPbLjPdXTcvtfveKMUrJUeVziTrscpglXaGXuIUdAHkx", "TixgzMXofCqifzUFfgOsguXulVPHzsFzXqUwXDhMgqVkRnJwxS", "XjMXnuRXwXXSpKwdlbCEpWaIEJQslgmArrnAzghaNqviHjRsXD", "VGFjShiiJjpObUOqktjKXEPhjUhXEjWXOlHGBsRctmvAxUaXAz", "HHrsoHXwbzszXvQLNSPRfBsPkWkrUXRMOaXMescMXgmxKXcrKG", "usCBEjIzGEwPRlIRVczxhLRimziQqTzbdiMFbznXMxDXrXLTiL", "hWlXXgGPraqOSHAIPqzttPTInWoTNwguikgLnWMXCuVHAmCMAk", "CNuOtKxWajwqNhdtsNtzjQfcFMHvSIVJUiCAmWWtzpWbJHpTEp", "bUGRlhwJrVszAqEzooBahrdnoxUOiIOxTHARQdWVxioiSqzMWa", "tRDnXkWQmUXgIfHChUXtDLcEdTENhapbXzpJgnPrvvCFBMSXzM", "WefRQXeMeRMxlBXEHLmeQkIxIGUKTzlexlzDzanIjztjqUWVcO", "KrbrpGjrDpSjDqvTpahtqcLetJXzrTPXWhENcvkzFFtQEJEBsW", "eWkOusGCvhJuIOhBKlWkTAXSFUIslOtxwHvXeJIWTeIUpUWNID", "IKispqVTRflwabAcFJLiMFXIptWzPKAcMnmhxepXBOQnhCMXQI", "NXqUzeVzwBsWkjnVCVxchNUqWMfSGgOpPTbMXBKWSdqRXczmEa", "WrQHUbIpWQxGVKlVSFsbqDtceTPhUsopFHrTSLlxXxkSGMbzbF", "zoqSTRKAsenlJWmgkzkMtVXfXPXjohudtAzTctEMqCbgKqeiHn"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 642911966;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> rows = {"eERjtCwBsVejFEFHLhLdQRhNVHkVIzDtWgRfmWwMqsKuyMDPRK", "cNzNBkazntiozjFsgXiuoFCFWEsQlNnNjIMjcefXEuuqAJTRwS", "pvLDLSwNuiSfUmmPquaoLXtoBHxqEjWOIbJqJVHPJaiTbDAsjq", "tRnEdKWemkXOqOQtsVqSxnDmjgaaDoQCItBSjmBbfHboOgXQbt", "WzMmkjNykJNJurrPvWIjwOfNeLxxwjJdPijabDhgAwBWjiGXUk", "CtdSWnDcdIOrSSvDMlbuCxMKWNeCiCrVTgWjONrBwxVKGzxNFA", "MurEmEodSboWPlyiJtQEEbhDEFFzCwlBLxECnQLllKuwctlNay", "cfXnyIIqrATSNLTFuNFRbMbLILsrWuxKpMenhBtgyJkJpPQcXQ", "IHOJvQWfFxciWuNrgfRuxnAbNzNkthTNuWBlOfBjzDRjnJSmed", "vITWjRhmVPlVPTUcLDvoLPKrAmaTfNGzxSCitSdwVNUkhkGoIV", "vtocxEBrtjuLDsPtnXadirXncDDjlCoQieFoxlOojJItbDDsFo", "LpIxHrUKJBOBFvULWQfMEqvVbfnOtxQlDXMXqQRpabAvujoXih", "lGpmXdjeOSdNMVcnbHpxcWzGXNizTuFeoLrUIPpcgdzUKkEeJJ", "NFSDSgLzvCxFFcbvzNRcXxizmrpdgUphCFHxRcUfzrhlXSokIV", "wsNJzKnEpXGthfEUVOoOytKssujVleQyCSKiTmpsfWiCzXQNhP", "aoJRxiMuOdnzpzpGozfhwAqcdqkPXBUdqNIoDRoswRVyxJSHPw", "mmPeemTLGWiwAWkAOgDLpxxONrOvklWUSVehAQQWJMOxIKwvUv", "IxljEfQfzIVanUIXNtQzzHpRSOxvwWmUDoDXrBLdNiwDtICfFB", "FPErfBpfvTdKNXJQzVUpaPsdkRKkdFKTmtOUgeufJjFhPsLVcx", "AgcXmwpQKoQDQytfHBluoNIrIeBFEmNFDOyNlPuXCkjEBjlzFL", "wJfDmcXDqfAlSxvskPwPbAivXHwrTOpFhnbWnuaiwgffsFjCXC", "iVrpPSFKQPrydcRkacgsigwULWBiKKOCruFyDpLcjVPcCaJLro", "wCgquMjcEqolBpbHhPijzjBgzUosHIyuKWNqHQCImezsJmEGqy", "fouriGXntKsxzRdljmceOLytvzSPBaSlEuJKTVDxgEBAnCdPeH", "JEjBgNygeSwFMuXRHifCNEvRCppaEdEpFWJkESQWvdTAdORfth", "OClscauAHchxatJUdJVOLxmNlBCLIfRzMwBPrQATbOHmzSbqxg", "IhgozePnfDUnJGjlFWzyUxgvsiyFsRLaEIqkIGjzEowQcrntvL", "dsVAyotfXFTrOgJngySihPhQyzRqFkXNHCtuXkLPNVOyHXCEWz", "qkXWmRtwyHoxMeFjbdVhIMMCxGcmGBLyCMXOlFlJcaIunBGjMf", "pVHrQSxPtfFwtyrujsLbMumdFwJcEHQykytWqeHtjzfdCqWufk", "RDzzcyWeIhXCIsMiMrETMEsAFuXIFXPTKQuhHTJdUtKEmrBEav", "gkKgCPizOpNoHogasRwTuQOCNnfDfiOWsEfmNOtazPflzWwSxN", "JwkvzzmGcFNpfnTUpgOWelcsvDwsyVfsaulTRcQBcDrJwTIfUd", "OuJxqPTAPKyFzcebonRUgFXDjCSALpmUpDCoglmykLuHxpWxrC", "wlbVdtQLdriHbRnyNGiwrTvFjjrhzmaaudLQDfTNjENplusXQt", "azbhfJXBwWyAatyeKJQNaibAffMsXFffOAVGUNOwSvDfvxlIcf", "FPzqSVvsggGjaDjjtNokpCLmsdNEPSPtqCjgasvpFkhmvalRRA", "otpBUsalpVrVGemsAEQEPyjrhjHQWlwAOBQJrgAFFhelfmAhwT", "tgLLXRTBXCAELOwhnWHcyoLWkFCmCnRqTrIHcSjHiEPFUEztdp", "okdDwFOLdwaogqBJWqpsLIkagEuSdUqlGqalxCQzLWLyqipTzV", "ErhnLQsJiAPpIqUcRPMpCdPXOvnnyXckpvRAoisFeudzKxcBTr", "lksrBECVjkBHJrfVVcQqiyDNTpBgVqNMmKFiBJzEWHmnnVxfLC", "cVajXNuGyjtjRFhTzqloNnnhydHRPSXXtJvBRmAXMcKFpSKQAU", "siMsRHQLStiPBGVzNNaotzPRhISKTPrPgbpJjIIRSTbuDcssum", "wtOXtdCSDJAlRJvWSKsjbHhKQTLChMvkcpGltIDiHVpHCaCoRz", "tlqdNQqKdVfHGUHwkoUhjbRHSyRulqyMzLvWJgGvmByBFCFQOD", "vwiLBDcBXFPdmVNhDAgXEvvtSGHPCBihOGobDkqzeaROlrqoel", "viTihJMLhfqlgJTrMPQUEjnymgFooOrlaIOraFgIfpEDiSOTQh", "piylgfkHIOBULGGWfwWUQSJSajTtflRkCorKkKvkxhdEOUlXQe", "MJKhhJetHOISTXysTCkXbelnzndjVhqrkKziafltggoyKpMIcR"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 559813039;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> rows = {"ngEfoipStCboqWtFqFJjMeWcUXiHLpGHQcHRixtFioodptfWLN", "HSRhumkaBmpbhqbFQuiKiSavazmlJVAEvIFVxuxmkekRFPnITT", "prPDzSdjFRCRGnwLTeFUhaWvahhnMzJufLNqaLfnahGGiRfhyV", "CmRNMvSkCKcotfalItVXSnGJQAACEIRsThAUjElruWwCFIqSsp", "NoaJCcldkLfebsNVySagtlcFpwKFHXqWwjftkuNNeiHJGgCJhm", "BvOLtPvieBImhCOJVMGULThQBFMBjOahsHGAnRUsAASQdTUXkE", "xxkAflBRkgjODNaDMdxaHHnjLPnPiaOolgQQoSebyemfiRMRAI", "jWWGhkPHaMFlUmUeoWTSNhkAdnrUUXCeaGPjBCbbUQDllRnqDW", "xhOfpovmTnHBHTHoGzQPfaOOCwsfeJxEUGCRlfgTnfaVVlyOkw", "PGfmbrTLxszAkEUTuHbvxiVrDhDRGesAmPyLjTWjETNTVaknyL", "naqTRODxnmUqezxVgOKxzDMsSddimkVoNjimXsLAVOqraUbCXf", "xrMWMGPxiJQXMxCXWJaMXAaRupiNbPahVBkLcKuohpGrPwaOou", "sDTLmmqpsTxAWCtHAnDwvDrllRTcgkFzBOCLARJQdqmOFEirKo", "CrfzNuqWcHOEGcMEpagPPESvjwPwEyUrhqsvnMJxPNCiDfWGHK", "WHiLLRoBQllqCAVinfDjAttOrRqfjdfLxwMlurAgVBQIjalaQy", "vRJSuNhTjKzMFPtHSMkyGTAeKzuPvqDanqjnjsuCwVbQxwkrud", "sDKFrfNjDOmBHEVvFVkWkWVNpngbPpGdvltSlmiWMmVfcWwCNT", "QkMHgAVWDUTjUeXcNJcqiSLVWscWJmjiuKXelyVmOCfsNvajJs", "xIbxrgdcqUPBpVeiBwgmqaGGjwooqmcigfouCTxhMtymxpneyN", "UaBNePDBenHtIaxiUeahtHwFGbUeWuCSEXOSwuDOJCDPuwFElT", "sCSEHKgExTHIExbNrKlLtWldIFiHwcHSebkmJaFISCPyBWXjwD", "kdIhtnDXjTBgpbrhTzTOwlHdxDboNHyOFVSrsUXlEXmtwGvMLq", "fvtktfvRIUHLlFcHfJpTuUutVOnHQhrRJOmUKpRgIuOjjgUeBP", "QHWaxkfSjvtKVeWkFpIryweNjeBKkeLgFkmmFnmCgeguVNQTsV", "efPFATKOUyPPLxwsCFCFmDanODJyHJVcICJtkgUecwQyRDFvUA", "AruUmOdOgGOTGyvUzwjThrVoHxUbQhdAXxOChENeqagnJLnwhi", "yVqjMdgDruCOBWcIAfVxpkXwxakJQDNonDaWtrMUglQwiLUsdi", "xRJztFLRAzXoQccQRGePSDxOXanjQuFVqEwwFVqbCBemlgNuEz", "PugSNkhMytykjwOwKEwikjfFtKigKxaNptHVgKNqCaQpvucyvd", "hSAyRhzLeaVeRgbniaqbhSXPxGtwdemuyzfDvPexSGUNxrhHTx", "CskqntefmaxXjETXBmDdijiUNjLWDIhliwpkHNsTSTuRKktCOc", "vzmLrLwvfBpUBnKciIjAiSATFtblLVTeBPPKLDBejSGgfjJjGT", "zHEnSPtjnevEGTOIhUVFNXFfMgrSjqBXMccgEbBENguPxCUGQD", "spjqQsvqckctmJxCbETWkiVLRwVQBsqruwXgQrCjPdzxGAQLak", "BTEyzQEbsgAtpxUOJFUluepDTxRwBRdpiXryThWIeSWVHFvwUg", "BoJflWoKWDmFKotvircBynwrPEUnDeaPgnPiVXufSmtoQRmXcD", "BKWjFpsPfLddbpzRlKXKfXvMvShdhiTtcNflAargxgGNubWIPb", "CqUPcznEBUFXiSpfOzqhfqhbKRdFRezeHQBBGKjKCcjnklgMlK", "MpRjVPmpkuwpFgSoUWvtRhnsjqTNqrumzwhOdxubiqHXQMKeiX", "NubfXTnGecjEodacmFeDpVrcjprjmiNHvHyJjkzxvtHgKTgOzI", "bHSJgMdzWqIEUlyKvSHOdjTOjTdIvwXrHwJwfvOhDqFEDqhfMX", "tpwJpJxiGdBVgpbsQLwkQbkfMAchoGPnUznfJeIiFoQXQSaGGw", "OsBXQsdDKbEAIMrVkycBgxMULQsJBNbIjWgPnXfbftwPelcLVS", "RebDKUvQJcTqtXtEcHFcCKaBmsDsStphQVwbseuPjSzGwdPXaD", "xWjkbQRkrpaFOQccfXOGGyrfdnfsMpDXMOPryDxtdDwDqemXPm", "JujEEnNCAqjTDWAWmDcNvrsbhVANEFinoSugETTpcpXVeihuxK", "lFavMgSffHNwKNHxfiUAWzocXIbEMTuDxwIUbpJMQVVqQVCXOV", "HGMmvzoFRXnHSkXtlSsunCBpFbEsSgwQhcFxxrdGsBCLkIgMmS", "LLIRMSwdLRwXsuEQuDeDnhzUrIsMkGECixvDPrWyjHFoEWlQEN", "wxSbNLVvPuXqcitkJGcNuwOCaqCcreBOFVoGGSRjqaVPjEPLOI"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 54178387;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> rows = {"ba", "aa"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> rows = {"phqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdi", "gpnpuuhgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsd", "smzcnockvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarx", "bgfcbceyhjugixwtbvtrehbbcpxifbxvfbcgkcfqckcotzgkub", "mjrmbsztsshfroefwsjrxjhguzyupzwweiqurpixiqflduuveo", "owqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzez", "toidukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxam", "ceroswitdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycd", "rudmphmeckotrwospofghfozqvlqfxwwkmfxdyygmdcaszsgov", "sodkjghcwmbmxrmhuyfyqgajqkcklznayxqkqoyzwmyubzazcp", "khktkydzivcuypurfmbisgekyrgzvxdhpoamvafyrarxsvkhtq", "dihersigbhzjzujxmmyspnaraewkegjccvhhrjvbjtsqdjootg", "pknfpfycgfieowqrwwwpzsqmetogepspxnvjiupalyynmkmnuv", "klhsecdwracgfmzkgipdfodkjmjqwiqpuoqhimvfvuzwyvijgf", "ullkjduhsjafbtlkmfqrmyjfjnhhssqctydteamdcjbprhtneg", "yiwxgcjwlgrsmeaearwtvjsjbaoiojlwhypnvruihoswkifygt", "ydhacwyhsgewzmtgonzltjhgauhnihreqgjfwkjsmtpjhaefqz", "aauldrchjccdyrfvvrivuyeegfivdrcygurqdredakubnfgupr", "oqylobcwqxkzmausjgmhcmhgdnmphnqkamhurktrffaclvgrzk", "kldacllteojomonxrqyjzginrnnzwacxxaedrwudxzrfusewjt", "boxvynfhkstcenaumnddxfdmvzcautdcckxaaydzsxttobbgqn", "gvvpjgojoglmkxgbfcpypckqchbddzwrxbzmqrlxvobtwhxgin", "fgfrcclmznmjugwwbsqfcihubsjollmsqsghmcphelsotflbgs", "fnpcuzsrupchynvzhcpqugriwniqxdfjpwpxfblkpnpeelfjmt", "kuqpzomwnlmbupmktlptndmpdsydsgvfpenemwborifsuqhces", "kmkhssmvnonwafxwhgbibabvqopqfoviussqfqwehtxdzujtln", "txmrjxxwtlggkytbiolydnilqadojskkvfxahhjmbocljarint", "dwcldvdxropbyjzwyyojuothwmlvrglfzdzdbtubxuoffvncrs", "wsaznmoijoivvgobqpnckwvnhkebmtdhvygkjisuxhatmuudqb", "hmknhfxaxqxkjlzzqtsjfaeedfuujkolxjoqkdvfepvlhvhrwt", "fdukxffjpsswyxlijjhevryxozbafpfmowgrgonuatdqlahygg", "yljddjhmltedzlodsrkeutgtnkntarjkpxinovgzdthunwooxv", "jjmpsvknhkwjopmmlebksucvzqlyqnwcmbvbhrmlowpjbwyvwt", "gtoqnmicxapzarknnxtuufarzrosdqwsmtcjghecqudosrtjxy", "aaykqrxycrxuwjxnpqjnbkcpdmokalxapemvbqlzsvxzkutapp", "wgzpdpyzkzcvbntcvfxsxpjaoxtfhvxxytgokrcxaetauqgndm", "phwzyiayabjrqgeppxyjsttyzuvldvybsuxkbmfzvrtnovidzn", "pghozvafmsnsnqivmvubcwtfsrqtmknepbhowejazhkwcmmtpi"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 463729350;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> rows = {"fa", "ea", "da", "ba", "ca"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> rows = {"RLWEREGGKIRRBDBLTODMPMOJEWVUOXXGLSVQLTTGXDCVJIVHFE", "LUWVVTLVBKELOSAKQOQQOVCJKOGVJUVXMKMIWILEAPCTRKOSJF", "JLHSASJCRSFRUQGVRVJAKSRMLXPWXEOWVEWWDXHJBXJPRFBOFM", "OKCWVIMXSXKXARUDTJCOTUOEMVMPMEBGFHSCMUHLINATXVGRNK", "FIXDIRHUWPIQMRNODNVPTDKXIASSMUORFOBNAGKEOLWROXPQEP", "CSIPAOKOLRNGMARGCDNLFMEFLIIODNFAJVPHKBONQKJVQURSRF", "IJQMRTCNBIBMWJLPHEHBNNSNBLJQOBIKXGSNUHCXRTJNAIIRRM", "BWGWBQMOBBPCNCULMPVISORJKJKOICTRGXCBFWCAGCMXBOXBGR", "NOLEIRGIFTCTXJHEHUFVTAJRVXUWOOIELIVOOKTRHIILNWUOHA", "LNIWCWTCWJTUKAXQQPEGKFKLALTGMVKWVHJCJTNIHIOKDURNTF", "QEKEOWTDDLJQGUUTUTOFMBWKNXFASHXQNUVURHBCMMJANMHATE", "AWHNMISVGNJPNJIOBIVARRPJNFHEAXFSIWGEBRULPLXTLATCPO", "SHNPDRFOSONHSWHVBOFOMBABCMRMNJHPOOLNAOALABIBLICKJE", "IXRXAQFKJVWBJSDEMCXXIVQNPNPQMVFMBTLVRQVOJFHTFQAJQP", "GETETSSKXPMXFHSLKTJAUGLJHISQGFHDPWCPAQTIRLRICGRWXR", "RIJMNUWGBDMQIHKDVPXXIRXVEPDAPNRPJBEOIUFGCIKSFDWMET", "AXLSRGNVQEDXBWADOOTBDRNQILMOLJOUMQCONVEJKEHVFEAFWS", "AEIWKLPDOJJTVKKSWKVJIMQOJGHCXAEMFNNEQIGKCLRAXEDFWJ", "BMKVCMCLPBODALTDJNIIVRCVCKFCVSEBXNDVBVKMDIVPDPSPUI", "CKFWEGEHHNTXWCJUBMEJBAFWTDEIKAHNOPFTRPIREFSGVNGIMJ", "DQPQVFSAEGKXJUUWVWJQFPWRMNJKHDGEGKLTJEQOSBEMCFUQWB", "UIDITSXOCQLUVPWXGSTCWEWROWSIFNPKCPSOMIGPQAKMTPCPQN", "CBEDIOJFKNQUQDKXLARCGKCSUJWPDLBTPIKSRIVSBUVVSDGFFO", "JQBGJESMHFHJRURHIKAQJFINUKMSEMJAODHTVJTVNBQKHRAWVS", "VMPVNJUQWPMKWGGTWIGXPEKUWHUSMNKLBVVDSGXKJEIPMISPAX", "MPXKUOXWRWGEPETUEOPFTODAXUDGKQEHWACVEGVJDWFMMHMHEX", "CHRUHLIBEJWVTBNSAXKVIOFJJLBRKIUGNCRFSGMNGPFHTLJXSO", "GSGHOILCNUHWGSIACJGXLBSJRWGWSVXUXWBTFLCSJIKIAUBIWH", "KHFEOIARUCIMHIHIARLBHJVUMATDSBLIGGRXUSTAEXLNLSEBED", "ASQJBBENPAKNCDLNBJMRCEOGSXSRPRMAMIHIVXKPMCSLLJQCLD", "MMMFKVGEEXIHAAGILQQNOGBSBTGJFHAEGCTCBGPRJTOEJTANVA", "ELBCQPHVSELSIGRVNMSXNQKVTXVBAMUHHCKLXSMRRRRVCGGEDD", "VCXBGFVROCHAQXKKKBHDJXJKHHQWEHVOSOXMWMVREXNPSXNCQF", "QBFXLEGPAWDOCNKDLQRITAGWSRBPXLENBNRCORFPLOTRUJVAMN", "PKPVUIFIFXKNWKEWDWMRMGBENIRKRHSMACIBOGHBOXMWHVHNGE", "LTLECLQTSHAHUNNBPMFWQGVIOROELRPNNATJVJVKXRBAMPNFEN", "ASIHJIAMDJQLAHQATVTXTNAHFSQDAAXNPQXMKAJAHKNCIMVCUA", "MEKFMCCFRAHIALLCNUBITEBBEQHSLWVSIICIFSKSXPBHXITHRX", "NRERJNDKVTUWGEHFMAROFXKHOMLMXOUOPRNGXVDKLOOXPERAXD", "JGCFJBXPFOHRORNKGMETEIBLCURLNETLVTRNVVKPNWMPXPJCPK", "AGGTFSASTSEPBOENCVXCSGTVNAORCDHJBGQMBSAMVPOJAGATOH", "VAMLPTDUFWREHJJDMTENJAAUTDQSHGERPBSGIPVTCXNFXBHFIX", "PTUGLXTVRKCGMFPCLPPSLFOTGNHSDNFAQKKHOSFGEVRCXKLGQO", "MLVLBLNGHTWBDPSDADKUCXIVLKLHUTHEPTEDKHIPHFXSBMCGJB", "NFCXWBSHDGCRCPAKXGTGSQGXPIBOSLESKNNXFBMRMGVRJAGPWF", "SBQKVKMURGRLQVOTDXNWKXQXVLCIDKKGQXMLUVQUCMXEOTDJDG", "OOESOJROQFNUSLNRVULBLSUHVQGUQXHMRKSRPMDDQJNNWSJGTN", "KGLVXPKNQXWLVDFKLFRQBJTSKVHFDHPPATCUCNWNEMDGWQCXRO", "HNMJSCOSUDFDIQGBXBGBKPBUJARVRPSLOULKFIPHNTVLOJUXLD", "DKNSBPQRAKRUXMALQVKTOKDHUPKTCWVSRJXQCEXCJHSMASMDJK"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 737247287;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> rows = {"aax", "bay", "caz"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> rows = {"aaaaaaaaaa", "bababababa", "cacacacaca", "abcdefghij", "asfasfgszs", "aaaaaaaaaa", "fdfdfdfdfd", "afafafafaf", "zzzzzzzzzz", "eLLLFdasde", "adefeefefe", "aaaaaaaaaa", "jhjhjhjhjh", "rerererere", "qweqweqwea"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 162616019;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> rows = {"gdojeknirhlsfkbpstpfnnjmomwcakriwngsnhbvrubkhyrvol", "ndmlupqwzhhdyyxuczwnpzitvslrqobakzxedwwxcaotccudld", "qdaxoxnjxtsvenrovuegtzhnkimegpyllopznoiiogzxwztbcw", "lhqgcffmmanmvwksgyecickekeymxugmfkuuoyrusfccamghdo", "vjjmbugxzahzncqreropsrddicumrkaybdebrrvpxqlflhgvsi", "nqavbfqiuewtrujcaegrnqvlaxzuexfcxersotbhbfimlrfrwy", "pmgbopwyndahgejlmwksfcadlsfigofowlcsdnrdjejxayweto", "rsddlpzahxlwdlnxqvvslgxtthvqxfitagibhcqmdgpcjauyst", "iylxgjobovaxftexdejzwobjjcnjlaokhnivexsdfffzokbrfh", "xtoljqvpyvbnzbrgzmurzhyligentuuqgpevkeeibemmdubeef", "htszpeqjngggjgfwakaimhohrqzfohsutcytgejvvbgllconch", "pgbapspttmkikuezpgisbzgeufpmwlfvexiqaojpjzqwippysx", "lwpcotlcijmlbqlsaevnwridzpnwgfuoadankimywhuijsghxa", "dbclsoalmsbuqssxpccwnzkotzceglgkdxopjfyppoqmijyxsa", "dnougzqvxxzcajwhwltsustrhkciyemvitnmqdxujhdpkcexqt", "ubsmtyhagjlcosgcllwxrjowjmdlyqbnjwjybyewjvgcexerfe", "wfvohfzocnpnpjvmwowulhaogynlarsrlbjqemlfprpazzlpae", "zjbheikqiargcptmovpdrjxlhkzrbuaqfyhorrhvswrppyxxxo", "efmmpdidrpzasuqcqnsdnenghirdctycsctaygfqhbrvhohoev", "wctcryhlpqemouxkwhrfigequbsqtxoyfugzbcuzxpgmkdlpez", "cggwgshaaiyhmmlbpvjhtgdkuqhqutwuqgwombhcesndqawzrh", "zyyxodgzsceylpacarmmspfnsqpnqfkktrheuunjnwurykvide", "ogebfxsrnxgvbpqiqzhlgcmviccaigpunzvezlkuzkkejancbx", "rurxwtjtebhtzlpdwkaitmmjvupdvhhfxkjbqpoaukjqqluonm", "wyctwmlkyjitkzxlpsbxkqeldddlulwrkflgtfqmlpxbqnboab", "scakwhobvdtlshimfgunjnwnhpzsgplprumgkpfrehdgxvpela", "ffkqmhmiioygjyjijtrdjfkzeyjxhhzjufrxcwnulucekhkknb", "iecdktbqgmyknnvjorrfzghtqtvoplsimdbmzgazxmxywlkfjt", "oyfuvykevfxdkxzihfsujtnckdofzgdrxofhcnowfcsbnjtlpo", "ojjggeitpuknjvxklgbwkrutoskkgaouzknkwwtxlhuqjgpqto", "kfdhzuflvqzrgpeztsjqkgdzzrrbyqcoqmikcktvuondorihit", "tcoiiihtlwtrkbdkvagtohfyxfrodwefoqtcjpplxegezmrjst", "iygufwbxcwcneedmulyjfckokjkcjmjlykhrelvkotacgfdoqh", "kpjpticrceljkpszzvoyjfwelgnhiqokwdpvvtlzrouwgmvmag", "ntakcszowiaafrqjbwghsfszhynangwfboymfabnbaxlzlrglv", "kvjjyrifawzxhmwfttuenasjfflaqdtcfbvesxxufhcjbwmjcl", "nazqsodnirijfliibdnbdualwrormzduxfskgystrablkiwgco", "fserivgckyotkouefnclcgxrnnbgarpiveqdaddeohutxxrluq", "tvrqtcmrrwmnhjtdjihnsfeidextqooibgtbabfqsiiiqlustt", "qqagmwphjcnydcflqtmqabbdyqpszlqrqkoutjvycmbkeszltp", "qjfbcbizxfocakqwtgyxopuzwesfmwmyzsbgpirznpqwaylmpe", "iaoqnndbpnfgxmdxzjcrusufmwuzgghobqpubsmssboatjvjsi", "zeziignuaknqojrcwchsnpuvdxghhgcneeoiokvuxqokmegcle", "krbekqtzeyzzkvusvgryddjlpjamhoekhmeqzbuggnidhctuyr", "iounxjmpmpcbrlovfqbhypyfzivqvuklihegbplxbxiwemfviy", "anbqgeisjaxodhycmzrcodtddstxcnafpwrnbhvaahynzlmtnm", "lkyjqlsnomzdqxpburlighfmkpbvhubugxronekiorvywxtdof", "qcqjwicobjyujjednwqfhphprnluevoppzqbpykqwooowgazds", "esaszhwguokcujueqclbkjynajofgixrzscczjcfsszxiwhlag", "ulzjjokncdcuttzxqxyfrigiikusvauvatpvvlbknptdevzusf"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 42832461;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> rows = {"cedbcbdddbccceceedebebdcbdcbdeededcbeeedeedccbcecb", "ebdcceeccdbeddbdbdbbdcdcdddccbcebdbbdbebbedecdddcc", "ceedbdcdcdccbbdccccbddcbeeedebddcbddeeeccececccdcb", "ddddcbbededebcbeecddebdbbcbebbcdceddbbeebcbeecdccd", "cbeebcebdebbbccdecceeedebbddbbdccdccbddbdedcdeebbe", "ddbebdddeccdbbcddececbbcebbdeccbcceedcdcbdccbbcdcc", "bcbbcedccbcbdceeebecccdccecbdcbdeddcbedececcbbbccb", "cdddcbbdccedcdbebecbddccdcddbdecdedccddbddbecdecdc", "cdebbcdbcedeecebebccebcccebdddbbebcdddecebbecdbdeb", "ecbdddeddcebdbebbebddcdebeedbcddcecdcecbebddebccec", "bbdbddeeeecbdbbebedcbcddcecbdeebcbcbcecdbbcbcbebeb", "bdecbbdcdcceccbdcbcbccecccebbecdbddbccbeeeeeebeded", "deceeccdddceddeccdcdbcbcdbcbcceeddecbdbebcbcebddcb", "becebbcdccdccdebbdeebcbcecebbccbceeccbcdcceecbbcbe", "dbebedddeebecededecbbdecebdbdceeeddebbebcecbddcdec", "cbcbcbddcebbbedeceeebcecbeebecceccbdbbcddbddcedbbe", "beedcdccbbeecdbeddececcbbebdecdbbbddccbcdbeccbbcdd", "bbbddeeedccecdddddccbbbdcdedebbbcccbbbdddecbebecdc", "cbdcdbdeecdebeeeccbbccdcddcdcdbcececccdbebceeedebb", "ddcdbdbeeceeddcbcbbccbcdeebbdbecdececebcbcddccdbbc", "ebebccdbbddecbbdcdcbcedcbccdeedbddeecbbddcbbdcbbdc", "bbebededdbebcededdeddbdcdddbcceddeddbbdebbdbeedebc", "dcbebdccdcbbbedeebcdddddbcdeeeceebddcbcdcbccdedccd", "cbcdcbdbececcbcebdbbccbcbdbdbbcbdeeeccecccbdecbdcd", "cbecccbbdebddddedbdeebdbdebdbcdeccceddedcbbebbdebe", "beedbdedcddbebebbdecedebebeddbbedbdcbdccedcbbebebe", "decbeebcbcdceccdbedcbdccceccdbbdcdccddbcdeceeecedd", "dddedbedcbedddbbdcdeecdccddddcebedceceddcbdbbbcbde", "decbdbbcbdbbebebbcececcbbbeedcebddcebdebbeecedbcbe", "bdbcccbcebdcdeecccbcdbdddedcecbbbbebcedebddeecbdee", "bbbcdcdbbebebbdbebbcddcdcedccebbddedcdeccedbcebccb", "becdbeecdbedbdcccbdecbdceeccbbbeeddeedbcccccdddbee", "cdecdcccddebbedddceececdeebdbecdddebdbccbecedecdbc", "bcceebdebdeddcdeebcbebdddcceeebccccddcceedecbccbbc", "edecbbcbcedcddbdedbcbdcbcbcdcedbbdbcddecdebdececdb", "eeebdebedebebcccebcdbdcbdcdbececcbeccccdeccbbeccbc", "bdbecbbbecbebebbeceeecbecdbebbecebebdbcbedcdbbcdbb", "bbdcbddccbebbeedcbcbebccbbededcdbbdbcdddeeceebeece", "ccbcccedcebddbecbbcdcededbebedbdeccdecededdeebcbee", "cddccceecdecdccddbbebbcedbcecbeececcccdecdbeeecded", "bddecdbdedbecdbcdcedddeccbdcdeeccdbbcdbbcedcbdbede", "cbbeeeebcdcbeccebebccbbbeebdedbcecddbecedeccececbe", "eebdeeeccdddbcedeeedecdedcedeccbbddeddcdbccdededbd", "becececdeedceedebedbdebcedeebeebeebedebeecedcbddcc", "ccdedcdeeddcdebdededdbdeebcddebddcceccbcbdcccbdedc", "dcbdcdbbcdcebcdeeecddebecedbedddbebebcbbdbebdeeced", "ddbddccdbccbdecccbecedbecbdbbeebcddcebeebcccddcdec", "ddeceedcbedececdeccbcceddceceeeebedbdcdcbbeddbdecd", "ecbcddddbecebbdcecdcdecbcbcccededbedcbeececedcbeee", "edcdcebcbdcbebbebcdeddeebededdcdccebdbedcedbbdbecd"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 883058642;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> rows = {"eab", "eac", "ebb", "ebc", "ecb", "ycc"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 2662;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> rows = {"asdfghjklasdfghjkl", "ASDFGHJKLASDFGHJKL", "lkjhgfdsalkjhgfdsa"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 902057947;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> rows = {"feaef", "zpapz", "kkakk", "xxaxx", "ttatt"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1275515;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> rows = {"aa", "aa", "aa", "ab", "bb", "bb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> rows = {"afa", "aea", "bda", "bcb", "cbb", "cab"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 7821;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> rows = {"qweqweqwe", "asdasdasd", "qweasdqwe", "qwedasqwe", "eqwewqqwe", "qweqweasd", "dsaqwedsa", "dsadsadsa", "qwedasdsa", "qweqwedas", "ssaddawwq", "wwessdaaq", "eewsaqwed", "dswaqedsq", "weqsaqwed", "dsaqsawed", "ddsqweasd", "ewqssaqrt", "trtytrtyr", "xcvxcvvcx", "vcxasdqwe"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 990202127;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> rows = {"aa", "aa", "aa", "ab", "bb", "cb", "dc", "ec"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> rows = {"ac", "ab", "ad"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> rows = {"AiGcpaCuoVpzHXznSCnVTuIxvBuCGrVmnsrxkjDmlIxrvAMslX", "yrxITthtQCllEdQyIkyozChhiPzUensFXatRfpCBwhpQgyDvDG", "lOUUynbguybgLkQPqDXSmlzKVrEyuUgxgxnzHmMLGwydHLReqv", "jROrpzFsKQUDGlwNyUAHFHuQJCxQotzKQwzTcvuqPtezPMILkK", "UPbicGHitDQISrzKsckLrcLmrffextykUNjyFCNhAJARvoCkAu", "cAIjPSpHBKjfzNkhSwQDQWMEzwNnOHoSucdcXjKaszoXdPmjVe", "hOnXHASegofdHgFPwolLjujgBitreRAewrejyETFKUpNSfBBkC", "FGbnzaQcCCjrFAxSQHjdUMidQTQGvVtFRhOcTcFnaJioCFJOBM", "xPvEvRlgWzACLrIeJlBCXIjxbsPkDxWAxRnjaPjXPUvmUxvqyA", "qJWEyXiDMndQVzJArJKAHADCgrgcXkbAvCJgSCxNsMNiUdNuFo", "uMyADkhjExlTmOWgNancqFaDHGrTVNpyVEyFNsryzQoSFAqAbf", "MqlRFUpspqosLOPFuzzLqGBAqGvctzHfmRQKrRCsbyUMdnhwtW", "FBItBVzzwzfQxBQFwafEitTPPRvsVapxrzRCEmXNjcetWtBPGe", "JqhTOPzWyRIwXGTRATCREmbFcvkqJBKHhjJAgeoqkzImXsWaWb", "yQCLsORWkJfWFzSqIvSlkBVepVSzMXbeLVAjtOoNhgLeWgGjVz", "eLILgyzPxfKEPxgdSRVmsWnCcssxCTjgviXPpWiawBlDRpeHTy", "KwdgXmCTAgBjavhQTknXuDWHJQKLlcsFQbNPsjbDMLFbAQuQyI", "nbsqdKAKTyNgqrfDDjRfxqNIucEtqkzTPvsaVOKBeQljoNnRiI", "avfdkvlzMDnpuypalNQouoyCFrwLsHCemDvvjyXwDtRcSuowqS", "fHUFPzTBNkuyurxrKKxyctLMHzjqgbjoKCvfydgcEDEgIviiSK", "OUIbuIFtvlUJDbxSzCfiapHEpKVznBKPHxUUqaiflATcqKDxli", "uQjfaUenrXczkQRdFUhEIPztnetfumJlBOrRosXjyQBhhFTVtI", "tDFFVsXVrxXwfUMccvbXJzTxuzKHnaUtBgEfddbTbArHXFmfrD", "DVtyJRCBRAgUgRRUffznaMTdMrQVhjyPoOBATtpUzCUqOxDwyx", "TUlxqugBFbonfmgkhuyOfkOyMIlyvygjUQAfKgEbcxMjyNTRmX", "TweseUyfKIilmzDAPkWezOnjhVjRrtnJRnymraUSxucbdxxTWB", "nGxQdfbvJFDgdqdnKTiXntiffDfhgbQrwGgIxAnOUrFiVmCQfh", "MQyMAipHVIwkWgUsyRalHFdDtMmcfvOyxuBymcmvgMQsImpETq", "KPWzyGvAeryrsSjJXtiRAUJWuXkHtrmgmRqcmAPKpXQGUnqHRQ", "PfbHxzkaBzrGvgInysxgOfIGQvzzVjfdFbMxdyqkJpLIVyfGJw", "muNFBmFyXcNhqWBnCfyQzMSSuCErLzxEcRverblVRBGiyrOuFs", "CyjgmgEACcvfKkTqMzcTbARGllqGPepalHNfyzrvWicnwKibBk", "mTRJSUDXFdAKEzeLmtpTyxMvzswRprUWNQHEfXdzqATTzVgjOU", "UMfVQVJOuxttQAvkfnGPJSDtLeRQknVbrUvgOIbjKrFSECAzdL", "GMhBGMARPNxtNXPNjGKFeMhetcLUqCMsilIXalvzNhamyGeXKq", "hojHESOrbftGbVIelzJXGHpUBMyrAuhJLPGtENxUBmxxEjwIep", "HLjnzazoBXyRvrUPgHgVquMABLdMnwAwFgVwlxTyJemXPzfsbu", "rijDMmWFFQSAWBQDgHPfxsazwkgunrqOLcJJdcKqFrKJcmKNhy", "RRppzftsoelzkebaWnehzppgDtMFxufQkykCekLXwPRyCfrwSe", "XBzypvBWHeJwlPEtBoxbzzEsKWWPjAdqhGbyJMbGDmAFqQqvdy", "QizhfEJSmWKbJLLuiOwiPltiAMxCtdPTFWtAwKbeHwAntdjiHV", "EFogmumeMHBHsttQdCJIyfSnDCufDnyjsnVRzzopmFANURWhdl", "BzMtXHOBLDLghyjeSVqFTTNIcoqKTmyoEGVMGjoToCxkBgVOjJ", "AwzNIEjCTEiaFHxtUivkOfcQuavAMAoIajKLIqFqyaPUcvbgCF", "SWDVtmXiAjgzlTnPBCUDMsAiIMmOzmKaWJKmXJjtIvCdQoRksO", "FcWGugDdJUixeKfbNMyfyynPluyxXzRPOCMVVJKkgVauKATjsG", "ObogGnVUWbRXBbPCyKBnipATrsqEpAtoJsBGINHbRpWEkoGzjt", "TPtutpezoANszGBDdKGgyUImTnfKWsUWzIaQNjrUqpxeGmJJid", "blcKqDRnAnQvdXDSHHrlqvkMeWnUQOOFmVNyKSppfBTlAlgJJw", "cTlKCGUzdLXENAKeNpdyBydIASxRANvXytDOdTJpkWCUSHlByB"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 251431115;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> rows = {"AB", "AA"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> rows = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 573478254;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> rows = {"aaiccgdbdeaeaiacjdhdgihdbdecicebichjeiiabbfafahghh", "fcgfjgjcgcaheiffjgdahjhhbbjhfigcagcibcfjbbcbfecbgh", "haaabhidgehediibaaabgcfcdiddggjdechhfheffigbeebafg", "ajigjchhegbcjdbjdabifgbgadjfdejddeaihbjebiecifbgjf", "decbgjggfahbcihejbabadddaefegifcdfigcgfiddghecgihj", "bhcchejbacidihjcdiacafeabhddfcbcahdhgfiacigabbeeba", "fhfciaeadgcifeajbaabijbchjeafijfgjhhijhhaddahcijai", "jegdehgdgfjbjagdfgigjeejcbeghagiebgajhieacfiaejiih", "jcbgibaifeebhiafhceefhhdagcaecagiddejheaicadiieced", "geghiefgdcehgbjadiefigefbjebdgiebebdgiibbhcdcajgag", "agfhbiigehhbdjfihcfbddefjghjdaecjcdafffcbejffddhjg", "ffjcajejciaeajdhiidgcibdeajabbagcibgeefbjdjchiefch", "deejdfhebdeedeabjfeiifecifcgicgaeiicjghcjcedigaece", "fcfgdfhhbjehfffhifgieajahjcgjhaadicjfjhdaaghefhjcb", "bjbdbeebdccacicdfacdaheahfehaacfigcieeaggecfdaifia", "ggidiijacfhhedbiebjgfaeagbbadgefdgeahjciehjeahbfgi", "ghdgiccadadibaidbcejebbgddfiibhhgbdcjeccaiiabfcgff", "ehbhcbiiacigbeeehieifaifdjjfgdbajfjcegeaahbicfbggj", "jcacbjjibfcgfddhagiadjeehagicbjiacjdihjbachcebgagj", "hgfdgfdddachffagfdcfcfjegcfhcegdffebfhhcejhieajfee", "fiaagbahiiabiajabjcjaaacdhdihjdhcjdjcdjfcechifiace", "hbhhhgggcdcceheccgcfhihjjhbebbjabiiicagiihahfcahea", "dhjfdcjfjeddbbahdgdcbbhifadjdgjafhdidfcaefhabiffii", "bjaggfaibgbifaeaihjeibefcciedgaaaaejbagjaabacgfggd", "djeehhdfjieecceefjjgcdgbccegacjhbdicjdfadbbgidajdj", "eegbfebiaadceahejgfihbjjfcghhebhbjdfhjadgebfiegfce", "giibiaifidgieeeihaceicjcehaafafecabdjbajhjajffhdaa", "diihcegacabjdjfbjbhfecdifiaideedfijbecffigbfdbjdia", "agfggaiedhgahhggidfaagdjggiabhgbghhcbbhfcihfgbdhfe", "eefffcddfbgefbfagifdddfcjehhjehcaghaeheagbdbebffdb", "jfbhiediefgdheagggbhjigbfbjjjbdcidggcbjficbgeheage", "bebiibacghghggaidbggjbjaibbfgfdbjbbifjfddcbjgieied", "agdahijjaegcibcaeiabecjfdfeigijcgbjeiddiffjedebgdd", "dicdjgaicidjcigeidhfgaibbfghibdcgcagffecibgiiddeid", "idaehdgfgdgjbgacigecbcgghjehjcgiccgcfacegbcccdgcfj", "eighcbgbbcbfbcadacbcagciegeceghbhdijijcdjiccbdjdgi", "afihffbdfidhjadjdhbfjfchjgaahiehcgffibfieiccfhifaa", "bgfjfcjghiheeedahdgbbfafjifchfifdejjhdjchjddaggcge", "jhfiffeajhbhhihbgihchaeehedijfegahfcigcighifificcf", "gccjfbiaeafbchfebcdedechdidifhiejfgddhediedbcaeagb", "bfbdbdiadcbfggadhhdebjhaafeaicdghcebheccdiebfbijie", "heeeddfbadfdibfihbjibgehgaebdfaijgggdcgihbdcbcjfgb", "jijeeifdghgehicfheacfbhgfhcdgefbdefjgbcjjhbadhhhhi", "gdbhhdhbccddifichdjcdebdefbagceaaaiagbibhcheahhfjj", "gijfhhddjjbbdegdfdbajecbfbeiebdiiefacdihaibajegiij", "cdhcgeiccfjhhhcebdhfbadfifehbgaidhbdahfbifbdgfacai", "ebgigdahjjgbgadadbgigedcijdhiaccbhidfhhhdagebgfdij", "jbecjhfighaibgfghacijcdbjdcbibfdffjjhjgdeiggddcecd", "gjcigcfigeebgidgfeieeaicadbigifghjgheihebaaagdeagj", "aijdahegcihhaeiihbachfedidfgaggafcachdedhghaebadci"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 108191476;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> rows = {"ab", "bb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> rows = {"AAzz", "zzAA", "AAAA", "zzzz"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 255106;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> rows = {"EbJxEAnBGxsqBdPDqfEORCKjnGbtJNSDjRsQDSsCpjJMgPp", "LJPDQoaEOrrMrFKMwNRkcHHEzvnhsGswpKrmOmDsChjmgum", "ePwRlmbjqHEtnzDFtxKaiRlBCyvNsBudLodDviOCxRuyryr", "eyhIsnxgpFgClKONemGfmBFsrfzorIiJmugepkFlhFPBzBR", "OaEbsjqIECvpLRfocEMHAnBtqMGhfllBQfgpjwNDHAcMuec", "BbyzSQoEQfvERmoetQIMdOeIKaDJAkefdofNLnnPszBraOp"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 554713317;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> rows = {"dujFHJaxshLPLtcnRQeRpoAzBnLwfEmxUAMlvVgLkWOGbDUmAq", "GvuKBCxHFXukKMCvJPmtszSFLoUTTJMjfizmAEBjOclpbcXfVn", "CbxMBSIxsxhuSIxuANqVdHojhGLovRuJmKFOCEFrFJapgmUIHX", "GIDrqPiBMNWJHJuWVQKioBijtIurezCevWWzvgmjWMIcckJRHo", "RCpcSziUzkxkmVztASCVibWAwGiBVsBjhsaSiRQDsBhURGayPF", "XWjKhTiQVpCSgUHkpqyvRmGcalDMmPJusCSIxHNuAvQljtTFrA", "exgCeIUnlPooixQUlfPINyzHJAEIlobCEktBlAUkQELxjQaRgd", "zAGymaQqNfbzhlPuEHKORoeyjwNfNmFnLvyICJbDFBAnMoSBJW", "krnumaBVRIRMCFUzAVNPNKEgBRzkdWvNsnixJokHvlAyEyvKhy", "gbtGwHorgafFWhKSeWFjilDojkHRtzlMndivxzInUVGzWXPMut", "HDssrHFyALpSEfeWdFQXHEXJBhwHgxctSaUwghzjJeFIgdbELa", "dSwirRAPatpWAcTLzeqgTEywLSqrIjVzOjmAmuvXoEFyouOGHy", "zTqIfHLnUQKEvcuyDatPjiHXzRcvOFKyRWtQQHhvfUXyRvuhmj", "npFRjmBQdnhqwwiipWcBVzzEiCgeBDpADQfFThwzGtbFResdgB", "LTsdmmbTesbOeXEqsxKXrJSSTWhjfBEOiluNWDCKEkwhDMRwEl", "JPHMGqaQyNRCkRQvBVXCfczgToPwnrBEIplzuhHgrPBcuWPQVq", "zpHoyIJAeFwUHMQyPhUpWezeoCAqQExEoofljNfRuDFKHvqnLk", "EktuyaSCsoWwEPShokuTfwmuSALHOaaUtzGLthVflvItlIxXok", "DjUvgNRlSxAbUsaLkridrxNmktsqAqgihPFasBXFQzfnBDMFUu", "pPLVSnfDChcpxozdUMuLBpRkbQxNvKGLcpDdIjjUaJLkDxeigT", "vDrSLyuGBRDipFJUbOqlRelriCWzXUioiaLtTlyVyCWMnQLaqm", "sWlHQgzhJBHbkHWIwqxvCQUKwjxGsBoLXnqQyAqwGhqcvQhFyN", "PCbiBaHalAPJIGapxQBPIeJqsecGnOrvANEopJjKTKnwFdEfdi", "ilkGKSAbLbTuFHFwnszruoFoLDSeXyhBjjxaiaQVeGanVmNSRj", "xtNvUvCcMOxjGkJBvwwWlvdSLUhTCssWiGnwGiJfpeTpnlhpEU", "hOLIeSBmUDLofzBefLUhAfCbbQXmRJxSCsLFDblJVIAFQujyhU", "SHqaEfELodKXSQaoAapbGhaulvSrBkUCwzXRQnsIyWiXDEWGki", "ePirjuJOAjXwCQwKgfocOPRQgJpvgOfcKWyTVGkLJLIbAgMGyx", "kxadxNiVQDBQLSFefNaKVimMBCJNTCJcKftrcOymkPddjFqUEr", "HbMRyOvnOhMIWTqWaiEemwzRotDqXOXOzdEjDHmdwQaToeRWJe", "IrAppSwVrjXrklsTLBMIMUrguVrQNdpFUUNnAraHiriSeGItqi", "IoVjNtcEsvJmEUkBcKXoMcNFLtOkPgjkOCtPljvNaLubOHybEi", "QpfrfjldPqLCjLyHLmpoviJgiRtjIRnCKpRzHxfLdNzCWFnddv", "OOOuEwROCPbRNFXXlGGljmaBgKwByyNQjszPXKjNTRRutoXjbJ", "rtUHmUcadjfdksWPpXjKGynRHzEcEKtXtxcCLscbgVRtKNqDCe", "unWPdgiWpcXIPqgrintJrNPoCRWhCOddrcEWDLjDCdJdNxWfUI", "QKRmgrQRQEUnSLIwHXzhoISpgWOcAjedHIbSlSlnqnWhqzrEJt", "poKInAazRhHkHVNzysVgwWwglodlFqrsVpCqGfJhchSuilMQws", "zUyRRLiGQJvbWWQGQuEfQfqONSuWmNtazPiWBrurKiJLUQOlKI", "tBTeVkwIhkdteLvGkNNMInahLviJruRJMvradAvWkPpnseDEMm", "OJEexQHNRxmcxAVgVDbjqjXSszftKMcWySUouIUvXvAfWLDJiz", "JJGbHTuCgcwheoJHAagaKNvCnCmJhnQbaablIHPriDnVpjWlHm", "edaRhDcrsPFbPbRPXrkQHFIjUymyoXLkisDMCynbXoXciydvzp", "jfJzTtQfOkUFvnTGTbAskblohgGomRqTvtLSxGgjNDDAEHsdDS", "XvoQaQUugDBatVwOQpTLSSiPqzSHUaojKKhVJhaDfTqquLGPDD", "yxQbfasmUcWuoXViverDzTDvvISHagjTRUzMQxoeyeRQrAIiEU", "romgkhbLLoSNTRQtTXHxeRwKIpFxNdrBrpThQpiHNWLMFSnqNu", "PykzDDnyiAKAjKLecfyLoXnJcxFtMqpaEdjkGNBOUXsnXDqxxw", "fHNqQJlvIRlGKQlDsCpTuqUPBuXIvqSVMWnCbaVRffcMzxOwhD", "UsVkyFcwqAudXRVVjUDHMQUinsrJMvJomEAjRorknvifQselLO"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 747696661;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> rows = {"aa", "ba"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> rows = {"bc", "ad", "dd", "da", "ad", "bb", "bd", "ab", "bc", "ad"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 419;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> rows = {"VXWUVUWWWUVVVXVXXWXUXUWVUWVUWXXWXWVUXXXWXXWVVUVXVU", "XUWVVXXVVWUXWWUWUWUUWVWVWWWVVUVXUWUUWUXUUXWXVWWWVV", "VXXWUWVWVWVVUUWVVVVUWWVUXXXWXUWWVUWWXXXVVXVXVVVWVU", "WWWWVUUXWXWXUVUXXVWWXUWUUVUXUUVWVXWWUUXXUVUXXVWVVW", "VUXXUVXUWXUUUVVWXVVXXXWXUUWWUUWVVWVVUWWUWXWVWXXUUX", "WWUXUWWWXVVWUUVWWXVXVUUVXUUWXVVUVVXXWVWVUWVVUUVWVV", "UVUUVXWVVUVUWVXXXUXVVVWVVXVUWVUWXWWVUXWXVXVVUUUVVU", "VWWWVUUWVVXWVWUXUXVUWWVVWVWWUWXVWXWVVWWUWWUXVWXVWV", "VWXUUVWUVXWXXVXUXUVVXUVVVXUWWWUUXUVWWWXVXUUXVWUWXU", "XVUWWWXWWVXUWUXUUXUWWVWXUXXWUVWWVXVWVXVUXUWWXUVVXV", "UUWUWWXXXXVUWUUXUXWVUVWWVXVUWXXUVUVUVXVWUUVUVUXUXU", "UWXVUUWVWVVXVVUWVUVUVVXVVVXUUXVWUWWUVVUXXXXXXUXWXW", "WXVXXVVWWWVXWWXVVWVWUVUVWUVUVVXXWWXVUWUXUVUVXUWWVU", "UXVXUUVWVVWVVWXUUWXXUVUVXVXUUVVUVXXVVUVWVVXXVUUVUX", "WUXUXWWWXXUXVXWXWXVUUWXVXUWUWVXXXWWXUUXUVXVUWWVWXV", "VUVUVUWWVXUUUXWXVXXXUVXVUXXUXVVXVVUWUUVWWUWWVXWUUX", "UXXWVWVVUUXXVWUXWWXVXVVUUXUWXVWUUUWWVVUVWUXVVUUVWW", "UUUWWXXXWVVXVWWWWWVVUUUWVWXWXUUUVVVUUUWWWXVUXUXVWV", "VUWVWUWXXVWXUXXXVVUUVVWVWWVWVWUVXVXVVVWUXUVXXXWXUU", "WWVWUWUXXVXXWWVUVUUVVUVWXXUUWUXVWXVXVXUVUVWWVVWUUV", "XUXUVVWUUWWXVUUWVWVUVXWVUVVWXXWUWWXXVUUWWVUUWVUUWV", "UUXUXWXWWUXUVXWXWWXWWUWVWWWUVVXWWXWWUUWXUUWUXXWXUV", "WVUXUWVVWVUUUXWXXUVWWWWWUVWXXXVXXUWWVUVWVUVVWXWVVW", "VUVWVUWUXVXVVUVXUWUUVVUVUWUWUUVUWXXXVVXVVVUWXVUWVW", "VUXVVVUUWXUWWWWXWUWXXUWUWXUWUVWXVVVXWWXWVUUXUUWXUX", "UXXWUWXWVWWUXUXUUWXVXWXUXUXWWUUXWUWVUWVVXWVUUXUXUX", "WXVUXXUVUVWVXVVWUXWVUWVVVXVVWUUWVWVVWWUVWXVXXXVXWW", "WWWXWUXWVUXWWWUUWVWXXVWVVWWWWVXUXWVXVXWWVUWUUUVUWX", "WXVUWUUVUWUUXUXUUVXVXVVUUUXXWVXUWWVXUWXUUXXVXWUVUX", "UWUVVVUVXUWVWXXVVVUVWUWWWXWVXVUUUUXUVXWXUWWXXVUWXX", "UUUVWVWUUXUXUUWUXUUVWWVWVXWVVXUUWWXWVWXVVXWUVXUVVU", "UXVWUXXVWUXWUWVVVUWXVUWVXXVVUUUXXWWXXWUVVVVVWWWUXX", "VWXVWVVVWWXUUXWWWVXXVXVWXXUWUXVWWWXUWUVVUXVXWXVWUV", "UVVXXUWXUWXWWVWXXUVUXUWWWVVXXXUVVVVWWVVXXWXVUVVUUV", "XWXVUUVUVXWVWWUWXWUVUWVUVUVWVXWUUWUVWWXVWXUWXVXVWU", "XXXUWXUXWXUXUVVVXUVWUWVUWVWUXVXVVUXVVVVWXVVUUXVVUV", "UWUXVUUUXVUXUXUUXVXXXVUXVWUXUUXVXUXUWUVUXWVWUUVWUU", "UUWVUWWVVUXUUXXWVUVUXUVVUUXWXWVWUUWUVWWWXXVXXUXXVX", "VVUVVVXWVXUWWUXVUUVWVXWXWUXUXWUWXVVWXVXWXWWXXUVUXX", "VWWVVVXXVWXVWVVWWUUXUUVXWUVXVUXXVXVVVVWXVWUXXXVWXW", "UWWXVWUWXWUXVWUVWVXWWWXVVUWVWXXVVWUUVWUUVXWVUWUXWX", "VUUXXXXUVWVUXVVXUXUVVUUUXXUWXWUVXVWWUXVXWXVVXVXVUX", "XXUWXXXVVWWWUVXWXXXWXVWXWVXWXVVUUWWXWWVWUVVWXWXWUW", "UXVXVXVWXXWVXXWXUXWUWXUVXWXXUXXUXXUXWXUXXVXWVUWWVV", "VVWXWVWXXWWVWXUWXWXWWUWXXUVWWXUWWVVXVVUVUWVVVUWXWV", "WVUWVWUUVWVXUVWXXXVWWXUXVXWUXWWWUXUXUVUUWUXUWXXVXW", "WWUWWVVWUVVUWXVVVUXVXWUXVUWUUXXUVWWVXUXXUVVVWWVWXV", "WWXVXXWVUXWXVXVWXVVUVVXWWVXVXXXXUXWUWVWVUUXWWUWXVW", "XVUVWWWWUXVXUUWVXVWVWXVUVUVVVXWXWUXWVUXXVXVXWVUXXX", "XWVWVXUVUWVUXUUXUVWXWWXXUXWXWWVWVVXUWUXWVXWUUWUXVW"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 883058642;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> rows = {"ad", "ad", "ad", "ad", "ae", "ae", "be", "ce"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> rows = {"vDamiMQtEabznOccWUaLHCjiqxNKLbkJtMFzoUlaILlEHvg", "bEmAvBLuxuVgFEPbWqgLtVWLbOnjHHfiSsSEAExQvsnweqv", "XirgmDPpDPLkAVmzlNugSuWJXitJVSEJeunPEkOgIpcoyQU", "PvTPoQXDiGVSezLXRklemsGKJOgClhsIhJPjCDHJperJsIv", "VgSvNKKOXVKouPCVkDJwQyNgMfWwhoTqngjEezszBJevbAk", "JwPNBftsoAvEfUgRtikXAuEFlOmlixkBPKmJenduWbpUTtf", "ccMbkINHUAcBsBkUfqsQtTtEbsxKWPgyfnrkpkgOxuFBvws", "CgfKyLniVdaQjdDmTatHmjcjcWdAxNFrUjrsPdLrHhXKjkV", "fslqCBQVhxaudVztAXJhyWLcperwLRylmQDJlELaKMpnPkP", "JcFquOsNlcdfaqcHCplESHqPETMvxCnnGinbnwDisDKbdHu", "LCJPjxARmCrnLeuKAAAfyuGGqzIhUSxMAVDCSinQWQjRAUi", "oaoIxPnVQyjQRvOVHuWCytzRBwAQdwoQlQJlDFNxcPLNoct", "XjjwBPbdKVbbPtnMsGJNxoMmPRRiWfSomcKChJVKRIWTFNC", "kkjzNTuPMVfwphnHmXvgvRlvxWGPUfbrWzkbIOcSEEfVuju", "vUgMvtrfrEaAoAsxXnkgXhGGFjwqrkwELANkTbmXiFXmWwi", "FuJlJyeryReFReKxyeOiqbXGamBKVkdjgycejHtmBBXfjhM", "RMktbmGmWdcSPpyMOWUboHIEAxTHLKHLDiNvoXjTjCggsiQ", "XhvbyoelMQSjQCVgGQUsgrAkuAGkJRqpnpFVFsobLleIVWh", "KNTknctUtabXDGucMdHOoqGtJlUHikVxqeBAwBLIpEPjwDn", "sUDdlHWAmvbWRDpGQToNbwVVlNxNtzOqpDgyIMUPbeetUyX", "cunjaJwAOOxLSNGUKULNwFuHFEDNfBmkxEzkooSdspvtzxG", "dlctGMcvbPWKMPepyCztReqEBNHeATFtjmhgajTRifxhmnD", "jFqkRsCbIdcPLABJzNXGemukzoamRasqDCTwxEXSvWRQwSu", "HXvGukcOOBoWtDykzVQaUlOvBkwflafjPkLKQjNMPIBXjjN", "wnvWhptMTazroqWHJEEWVTxAtxvMTnHUQcluVDlNirONeiy", "tVkbagaCkrgqzoNawbUpPUnlahSwMLoHkCpGhUEfjykbiey", "VdyLvyXUnNwtOGhTvPFVLhFLRsdEiPPFtVSRHRgywbNjWJa", "iiSmfEXlwcqwMCNFnOrqNrizcWTTsSoiREfmREmkMMjBESu", "KNylnDVjwjqyPooljVxeFLGVERKAPIssMkrvkXlwtgHxqIB", "eBHPQuboOTQTXKyKGDTFtUtDSmcTmfpOerGDbJhoqpvRPhT", "IkaoQwKnWjXAlNOpPyTpcbRenqwqFnLPjsNSTtfcoyKTPPR", "XanCkCDpPtIQKwQTNACHOqPuUHjBVvjvTqneqpwwApuSuix", "cUhDaCECXlQctzLaxrAPiyUtTodqXKhuNfdnLPGhlNkSyef", "xUsKQGVuvbuniRumiHMqcsJKfoOThHPHckSKcTAekdUyxRg", "WnhGSrDLWuxaDfunSyUGSagxsOQfnMbpKAUNIqofDPqEikO", "sPDvThvdfgCJSivEaMcPEQyAlanEwHRdzgUayaMoSvljBTg", "qzwRrmrRakPmPoBoeJFmhcBzTEUyTmvRUUFKVPTdkmJVFsi", "TCLWpyRwCIVfAjxKimlCCEWOKkQLTJycRfCXrGeXyrXxROM", "RGgVhUsEBUlsXXGXcaXyGyXnbFwfSCKmkbAtOmcNbWMeFXv", "twWGOQWnmjpWdjEMrDNslQPatUjtBWABOIOgrsiMDFMAmBn", "grLBMByefJkbeHzTbowEnUKRMqqcWfaoXmbCeKdhFmUlJPi", "IaJcODkSGEWSdDUmHpfRnWufHtsCwrjkCiEkpOAalGpNjeE", "kfekLaIWctUKUrgzojNHoBSAUbQbmjfTNzVsWwolLFHkrUb", "lEEEbJeEtahLotIJtNTUaSCHxtuBnWVawOupvkonGtCLqlR"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 120923955;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> rows = {"aaaee", "aaaee", "aaaee", "aabeb", "abbeb", "accbb", "adccb", "xxxee"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 6635468;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> rows = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> rows = {"nKbHBKwkhHsBjoOQDbfObnOgJNrSKpfDpmoMnuRqBuNjvwdNxx", "PKLnLzQPRwKbnvMbaxpcchSNPKPNCQEShiqoHofddfFivuJcdR", "aihKqvcgpombauJSAdRLMsduumqKbtkRahIDNSPtkaSjuwIMmn", "eBrLMlGNSvBJuopylemBPiKLgGFBGEFkrozioHlBCDHCOIHQML", "LsNJLOEQuOHwiyyAMvSjgbofMBRgiMQDDjPPrMpDDBSSuGqwJN", "RNgiJaBcabePyPJPiuQRKvfppwzfIMFbrzgjALDelOuIPbJQSt", "fFRPSgRcfHqNJhlDehgBKGyHQnnRQajugfGJiuMEvLMQKCoARp", "dLBqERLLCLpHtJJKcqnLoLclfOMEHKMQyALPGNpwjbssfQGICN", "jCbjHeuLOvKCptvNPGJyBleOebqqphuMfCNjfJlJnqIppGBctm", "SGtGbCIenJNSvQKyNyQrNyLlaPexMqpJSAFwwbflRhBlaPrSLR", "reHdpEEQHDjxhIPCJlAhDhfuexrjgkEOOtDtDOOHDgoiLdsBBu", "pGlfzSfmDMHAdJsPRqcADCbaFgrOzpLSnvLMKOJQlQkwusInDm", "bNdzmBKHOlzAaInjLbDtoRaaOSKcQoJefnmuSdgfhsLNtaHOOC", "KNImwplGsBbMsEIGDIxMxtJpFoNmfJvAbHgRnyNBrabDzQalhQ", "ECKIcxwLBIMskAkIKMEJgAiweQFtokOtpAiKEKHcdPliKmnPNl", "SKuDlRaaCOcLuoacxwqOGFiaeBHqgxOSxqBREkimqBEoMIjbLm", "LSEnJNxgHBxIcAwlqELiIQqjGGjwPnEBuMmILtsCgPcpNrmaNz", "HOwoDrCevJRKeKHNKFKpxCDAKdcsRtAuKwCaLNBiOpzHquMNpN", "EBoAEpGHkuzooDeHRnFnpvuRuoOCfuORNmcmFAMfeddBfuALRF", "IqnjuyvlCyOJjsEuPIzhgRyFePzBAlgGHFLDSdaBxIjwIfCDqy", "rABOlRqGxqHGzwqiNRuuNemKNDAtsMMoGGPKtpyQjikosqFIqs", "QAaCgFARAnosAytEHmEkBsiiDkCykjCskyRQKLORmtcDPKNuaE", "rFNLJkhfGRapJtJwJnytrlPAFoqeIxRNnwxQFusknwEdwhqkzg", "JNinzDOMghRCvISslkjtxPNxOASCeCMwRPIrLgbeOcdOGGEqzh", "StmBxkDcmwOlRvceNkdAQQlhBRFSdjcRqsypHqFIvonNvwasRC", "AyHzPiczNRPlfjFJOOEMKJyiDJmqOqHtBCnADqLSEMCunAHLOn", "RKLqdRQiBQCLgAPNzADogvdRIeMtCxIQIBfcbGPNFxiRbpfCnI", "KiCfBolPzmBidhDDQbMejPPcneqMjpmPLRLohPFiKPagSNbCKw", "eiAGRCQHdldgDCJxfQHMntcRpeAgbgGhMSIciahfzacwgrHqbb", "aiolSjowuRdSCIkuhJHSpRAoODEaeziFFgIEunLKvnPvhQvDkD", "ghCIIxniBtRJFDPKAnHfBmLOovwJCvNmQFQbsHiOzepODPgFRF", "ArwzHFQNIfCItCsHGKFmjJEjuNzNnBIeInPLOjCNHoQnGhPBQv", "EHJyPOpejSjfyiJcdwIECLPGBvwOLRbacMGsKIOnSsrIunxIxr", "uLpBEJyybDREMSvEbauGSASgExqMsqtFLEetyFzjADuyHvtLqe", "orPzhGKyGlnDMEttqDDJPASqNfJSDctmIzqIAMoooPSJvzPgbJ", "pLHfIqOAgtEfqOAJuApQDsFAyIhmeOpLnHxScecDzowENNgCAt", "IINRCrhxsHEEGIxlHrjBCeQbzzwEFGyaJodkHLIiLfiQhvvPvG", "iNEtNFmEMFhrEHQrvPRdaFiJNqGoxelaRMJzdzPuCLjJvHNhvs", "RCrRzFqEjtKjnpaRfixriLPhirpFyJJAHfoOvHOJtjzziMelxQ", "qzENqMEtRgJdJISipBgRMSnQbqpHvOBSvadtKMnKzaJIceBpCf", "yKdBMjNIfrQgDqMLeImegnbjkbCfDfKQOGLKniIaPxtxsSREMM", "RSkQxemIKEBfzdPaCGRNFDNaaJNMiJpduNNjPCkKPlyPClOEQw", "FgKtHrveDAoJNIQDJqdjxtREaejcfRjGdhtlmSNvJoIFxRiILR", "CplDRofkEdDJKcQhpEkaNrKOpoyBSsbBKQudhHHebDczlHamcD", "KbFcIoPxRsdmiCQuwnGftjNihGpyhyrIGbbQBLKEEaNnBnHucA", "xlMPKnQwNKmDkEtevjHmQFQmKOvFPqRBOPAwwjNBqlNpjdDoit", "uBiEAkNEqCSOBNetSLONfaEHlfHAxBtvIpajiNMJSOsPEAyqKp", "DvIhDzaGOLmKhSrgwbFCQxLOrKzbPFOFKEReiRCvkKDOiGauqQ", "vECldCqvpDzStGtyARieIbCOywSLgJRMAllbRKkRiPcwgEMyfv", "yzBEAKOyfrGuISEQSaKaKSrFeskgBHMuyCstCHmoAmQRCxpDvL"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 831264172;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> rows = {"aa", "aa", "aa", "ba", "bb", "bb"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> rows = {"abbbababb", "aadwraaaa"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 943877448;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> rows = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVW", "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX", "cdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXa", "defghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXab", "efghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabc", "fghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcd", "ghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcde", "hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdef", "ijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefg", "jklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefgh", "klmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghi", "lmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghij", "mnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijk", "nopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijkl", "opqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklm", "pqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmn", "qrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmno", "rstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnop", "stuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopq", "tuvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqr", "uvwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrs", "vwxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrst", "wxyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstu", "xyzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuv", "yzABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvw", "zABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwx", "ABCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxy", "BCDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyz", "CDEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzA", "DEFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzAB", "EFGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABC", "FGHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCD", "GHIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDE", "HIJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEF", "IJKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFG", "JKLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGH", "KLMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHI", "LMNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJ", "MNOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJK", "NOPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKL", "OPQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM", "PQRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN", "QRSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNO", "RSTUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP", "STUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQ", "TUVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQR", "UVWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRS", "VWXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRST", "WXabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTU", "XabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUV"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 550217105;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> rows = {"aa", "aa", "aa", "aa", "ab", "bb", "cb", "db"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> rows = {"aa", "ax", "ay", "ba", "bc", "ca", "cc", "da", "dc"};
    RowsOrdering* pObj = new RowsOrdering();
    clock_t start = clock();
    int result = pObj->order(rows);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14541&pm=11114
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
 
class RowsOrdering {
public:
  int order(vector <string>);
};
 
const int md = (int)(1e9+7);
 
int RowsOrdering::order(vector <string> s) {
  int n = s.size(), m = s[0].length(), i, j, cnt[444], a[444];
  for (j=0;j<m;j++) {
    for (i=0;i<256;i++) cnt[i] = 0;
    for (i=0;i<n;i++) cnt[s[i][j]]++;
    sort(cnt,cnt+256);
    reverse(cnt,cnt+256);
    a[j] = 0;
    for (i=0;i<256;i++) a[j] += i*cnt[i];
  }
  sort(a,a+m);
  reverse(a,a+m);
  long long ans = n, v = 1;
  for (i=0;i<m;i++) {
    ans = (ans+v*a[i]) % md;
    v = v*50 % md;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/