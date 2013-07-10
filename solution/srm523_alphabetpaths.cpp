/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11644
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

class AlphabetPaths {
public:
    long count(vector<string> letterMaze);
};

long AlphabetPaths::count(vector<string> letterMaze) {
    long ret;
    return ret;
}


int test0() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRST", "...................V"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRST", "BCDEFZHIXKLMNOPQRSTV", "CDEFZHIXKLMNOPQRSTVA", "DEFZHIXKLMNOPQRSTVAB", "EFZHIXKLMNOPQRSTVABC", "FZHIXKLMNOPQRSTVABCD", "ZHIXKLMNOPQRSTVABCDE", "HIXKLMNOPQRSTVABCDEF", "IXKLMNOPQRSTVABCDEFZ", "XKLMNOPQRSTVABCDEFZH", "KLMNOPQRSTVABCDEFZHI", "LMNOPQRSTVABCDEFZHIX", "MNOPQRSTVABCDEFZHIXK", "NOPQRSTVABCDEFZHIXKL", "OPQRSTVABCDEFZHIXKLM", "PQRSTVABCDEFZHIXKLMN", "QRSTVABCDEFZHIXKLMNO", "RSTVABCDEFZHIXKLMNOP", "STVABCDEFZHIXKLMNOPQ", "TVABCDEFZHIXKLMNOPQR"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 199229440;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> letterMaze = {"ABCABCABCABCABCABCAB", "DEFDEFDEFDEFDEFDEFDE", "ZHIZHIZHIZHIZHIZHIZH", "XKLXKLXKLXKLXKLXKLXK", "MNOMNOMNOMNOMNOMNOMN", "PQRPQRPQRPQRPQRPQRPQ", "STVSTVSTVSTVSTVSTVST", "ABCABCABCABCABCABCAB", "DEFDEFDEFDEFDEFDEFDE", "ZHIZHIZHIZHIZHIZHIZH", "XKLXKLXKLXKLXKLXKLXK", "MNOMNOMNOMNOMNOMNOMN", "PQRPQRPQRPQRPQRPQRPQ", "STVSTVSTVSTVSTVSTVST", "ABCABCABCABCABCABCAB", "DEFDEFDEFDEFDEFDEFDE", "ZHIZHIZHIZHIZHIZHIZH", "XKLXKLXKLXKLXKLXKLXK", "MNOMNOMNOMNOMNOMNOMN", "PQRPQRPQRPQRPQRPQRPQ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 5338808;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> letterMaze = {"ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM", "OPQRSTVOPQRSTVOPQRST", "ABCDEFZABCDEFZABCDEF", "HIXKLMNHIXKLMNHIXKLM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 5338808;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> letterMaze = {"ABCDEABCDEABCDEABCDE", "FZHIXFZHIXFZHIXFZHIX", "KLMNOKLMNOKLMNOKLMNO", "PQRSTPQRSTPQRSTPQRST", "VABCDVABCDVABCDVABCD", "ABCDEABCDEABCDEABCDE", "FZHIXFZHIXFZHIXFZHIX", "KLMNOKLMNOKLMNOKLMNO", "PQRSTPQRSTPQRSTPQRST", "VABCDVABCDVABCDVABCD", "ABCDEABCDEABCDEABCDE", "FZHIXFZHIXFZHIXFZHIX", "KLMNOKLMNOKLMNOKLMNO", "PQRSTPQRSTPQRSTPQRST", "VABCDVABCDVABCDVABCD", "ABCDEABCDEABCDEABCDE", "FZHIXFZHIXFZHIXFZHIX", "KLMNOKLMNOKLMNOKLMNO", "PQRSTPQRSTPQRSTPQRST", "VABCDVABCDVABCDVABCD"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2296264;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRST", "..A...............SV", "V.B...............T.", "ABCDEFZHIXKLMNOPQRST"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> letterMaze = {".................VT.", "....................", "ABCDEFZHIXKLMNOPQRS.", "..................S.", ".................VT."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> letterMaze = {"TBCDE.PQRSA", "FZHIXKLMNOV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> letterMaze = {"ABCDEF.", "V....Z.", "T....H.", "S....I.", "R....X.", "KLMNOPQ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> letterMaze = {"NTCDEFZHI", "XKLMAOPQR", "SBV......", "........."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRSTV", "BCDEFZHIXKLMNOPQRSTVA", "CDEFZHIXKLMNOPQRSTVAB", "DEFZHIXKLMNOPQRSTVABC", "EFZHIXKLMNOPQRSTVABCD", "FZHIXKLMNOPQRSTVABCDE", "ZHIXKLMNOPQRSTVABCDEF", "HIXKLMNOPQRSTVABCDEFZ", "IXKLMNOPQRSTVABCDEFZH", "XKLMNOPQRSTVABCDEFZHI", "KLMNOPQRSTVABCDEFZHIX", "LMNOPQRSTVABCDEFZHIXK", "MNOPQRSTVABCDEFZHIXKL", "NOPQRSTVABCDEFZHIXKLM", "OPQRSTVABCDEFZHIXKLMN", "PQRSTVABCDEFZHIXKLMNO", "QRSTVABCDEFZHIXKLMNOP", "RSTVABCDEFZHIXKLMNOPQ", "STVABCDEFZHIXKLMNOPQR", "TVABCDEFZHIXKLMNOPQRS", "VABCDEFZHIXKLMNOPQRST"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> letterMaze = {"ABCABCABCABCABCABCABC", "DEFDEFDEFDEFDEFDEFDEF", "ZHIZHIZHIZHIZHIZHIZHI", "XKLXKLXKLXKLXKLXKLXKL", "MNOMNOMNOMNOMNOMNOMNO", "PQRPQRPQRPQRPQRPQRPQR", "STVSTVSTVSTVSTVSTVSTV", "ABCABCABCABCABCABCABC", "DEFDEFDEFDEFDEFDEFDEF", "ZHIZHIZHIZHIZHIZHIZHI", "XKLXKLXKLXKLXKLXKLXKL", "MNOMNOMNOMNOMNOMNOMNO", "PQRPQRPQRPQRPQRPQRPQR", "STVSTVSTVSTVSTVSTVSTV", "ABCABCABCABCABCABCABC", "DEFDEFDEFDEFDEFDEFDEF", "ZHIZHIZHIZHIZHIZHIZHI", "XKLXKLXKLXKLXKLXKLXKL", "MNOMNOMNOMNOMNOMNOMNO", "PQRPQRPQRPQRPQRPQRPQR", "STVSTVSTVSTVSTVSTVSTV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 6120032;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> letterMaze = {"BNKXREQHPDZAMCOTLSIVF", "NKXREQHPDZAMCOTLSIVFB", "KXREQHPDZAMCOTLSIVFBN", "XREQHPDZAMCOTLSIVFBNK", "REQHPDZAMCOTLSIVFBNKX", "EQHPDZAMCOTLSIVFBNKXR", "QHPDZAMCOTLSIVFBNKXRE", "HPDZAMCOTLSIVFBNKXREQ", "PDZAMCOTLSIVFBNKXREQH", "DZAMCOTLSIVFBNKXREQHP", "ZAMCOTLSIVFBNKXREQHPD", "AMCOTLSIVFBNKXREQHPDZ", "MCOTLSIVFBNKXREQHPDZA", "COTLSIVFBNKXREQHPDZAM", "OTLSIVFBNKXREQHPDZAMC", "TLSIVFBNKXREQHPDZAMCO", "LSIVFBNKXREQHPDZAMCOT", "SIVFBNKXREQHPDZAMCOTL", "IVFBNKXREQHPDZAMCOTLS", "VFBNKXREQHPDZAMCOTLSI", "FBNKXREQHPDZAMCOTLSIV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> letterMaze = {"ETLRFDSZHNKIBXQAPCVMO", "TLRFDSZHNKIBXQAPCVMOE", "LRFDSZHNKIBXQAPCVMOET", "RFDSZHNKIBXQAPCVMOETL", "FDSZHNKIBXQAPCVMOETLR", "DSZHNKIBXQAPCVMOETLRF", "SZHNKIBXQAPCVMOETLRFD", "ZHNKIBXQAPCVMOETLRFDS", "HNKIBXQAPCVMOETLRFDSZ", "NKIBXQAPCVMOETLRFDSZH", "KIBXQAPCVMOETLRFDSZHN", "IBXQAPCVMOETLRFDSZHNK", "BXQAPCVMOETLRFDSZHNKI", "XQAPCVMOETLRFDSZHNKIB", "QAPCVMOETLRFDSZHNKIBX", "APCVMOETLRFDSZHNKIBXQ", "PCVMOETLRFDSZHNKIBXQA", "CVMOETLRFDSZHNKIBXQAP", "VMOETLRFDSZHNKIBXQAPC", "MOETLRFDSZHNKIBXQAPCV", "OETLRFDSZHNKIBXQAPCVM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> letterMaze = {"MKQRDSATVPNOCHFLBXZEI", "IMKQRDSATVPNOCHFLBXZE", "EIMKQRDSATVPNOCHFLBXZ", "ZEIMKQRDSATVPNOCHFLBX", "XZEIMKQRDSATVPNOCHFLB", "BXZEIMKQRDSATVPNOCHFL", "LBXZEIMKQRDSATVPNOCHF", "FLBXZEIMKQRDSATVPNOCH", "HFLBXZEIMKQRDSATVPNOC", "CHFLBXZEIMKQRDSATVPNO", "OCHFLBXZEIMKQRDSATVPN", "NOCHFLBXZEIMKQRDSATVP", "PNOCHFLBXZEIMKQRDSATV", "VPNOCHFLBXZEIMKQRDSAT", "TVPNOCHFLBXZEIMKQRDSA", "ATVPNOCHFLBXZEIMKQRDS", "SATVPNOCHFLBXZEIMKQRD", "DSATVPNOCHFLBXZEIMKQR", "RDSATVPNOCHFLBXZEIMKQ", "QRDSATVPNOCHFLBXZEIMK", "KQRDSATVPNOCHFLBXZEIM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> letterMaze = {"CBDNQLMPVTIAHOXERZFKS", "SCBDNQLMPVTIAHOXERZFK", "KSCBDNQLMPVTIAHOXERZF", "FKSCBDNQLMPVTIAHOXERZ", "ZFKSCBDNQLMPVTIAHOXER", "RZFKSCBDNQLMPVTIAHOXE", "ERZFKSCBDNQLMPVTIAHOX", "XERZFKSCBDNQLMPVTIAHO", "OXERZFKSCBDNQLMPVTIAH", "HOXERZFKSCBDNQLMPVTIA", "AHOXERZFKSCBDNQLMPVTI", "IAHOXERZFKSCBDNQLMPVT", "TIAHOXERZFKSCBDNQLMPV", "VTIAHOXERZFKSCBDNQLMP", "PVTIAHOXERZFKSCBDNQLM", "MPVTIAHOXERZFKSCBDNQL", "LMPVTIAHOXERZFKSCBDNQ", "QLMPVTIAHOXERZFKSCBDN", "NQLMPVTIAHOXERZFKSCBD", "DNQLMPVTIAHOXERZFKSCB", "BDNQLMPVTIAHOXERZFKSC"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> letterMaze = {"OLAZNTVCQFHBEPSMXDRKI", "IOLAZNTVCQFHBEPSMXDRK", "KIOLAZNTVCQFHBEPSMXDR", "RKIOLAZNTVCQFHBEPSMXD", "DRKIOLAZNTVCQFHBEPSMX", "XDRKIOLAZNTVCQFHBEPSM", "MXDRKIOLAZNTVCQFHBEPS", "SMXDRKIOLAZNTVCQFHBEP", "PSMXDRKIOLAZNTVCQFHBE", "EPSMXDRKIOLAZNTVCQFHB", "BEPSMXDRKIOLAZNTVCQFH", "HBEPSMXDRKIOLAZNTVCQF", "FHBEPSMXDRKIOLAZNTVCQ", "QFHBEPSMXDRKIOLAZNTVC", "CQFHBEPSMXDRKIOLAZNTV", "VCQFHBEPSMXDRKIOLAZNT", "TVCQFHBEPSMXDRKIOLAZN", "NTVCQFHBEPSMXDRKIOLAZ", "ZNTVCQFHBEPSMXDRKIOLA", "AZNTVCQFHBEPSMXDRKIOL", "LAZNTVCQFHBEPSMXDRKIO"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> letterMaze = {"ABCDEABCDEABCDEABCDEA", "FQMVPFQMVPFQMVPFQMVPF", "ZRETOZRETOZRETOZRETOZ", "HSAFNHSAFNHSAFNHSAFNH", "IXKLMIXKLMIXKLMIXKLMI", "ABCDEABCDEABCDEABCDEA", "FQMVPFQMVPFQMVPFQMVPF", "ZRETOZRETOZRETOZRETOZ", "HSAFNHSAFNHSAFNHSAFNH", "IXKLMIXKLMIXKLMIXKLMI", "ABCDEABCDEABCDEABCDEA", "FQMVPFQMVPFQMVPFQMVPF", "ZRETOZRETOZRETOZRETOZ", "HSAFNHSAFNHSAFNHSAFNH", "IXKLMIXKLMIXKLMIXKLMI", "ABCDEABCDEABCDEABCDEA", "FQMVPFQMVPFQMVPFQMVPF", "ZRETOZRETOZRETOZRETOZ", "HSAFNHSAFNHSAFNHSAFNH", "IXKLMIXKLMIXKLMIXKLMI", "ABCDEABCDEABCDEABCDEA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1620398;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> letterMaze = {"NZDXPNZDXPNZDXPNZDXPN", "KQVTBKQVTBKQVTBKQVTBK", "ADPLFADPLFADPLFADPLFA", "ERKSOERKSOERKSOERKSOE", "HLCIMHLCIMHLCIMHLCIMH", "NZDXPNZDXPNZDXPNZDXPN", "KQVTBKQVTBKQVTBKQVTBK", "ADPLFADPLFADPLFADPLFA", "ERKSOERKSOERKSOERKSOE", "HLCIMHLCIMHLCIMHLCIMH", "NZDXPNZDXPNZDXPNZDXPN", "KQVTBKQVTBKQVTBKQVTBK", "ADPLFADPLFADPLFADPLFA", "ERKSOERKSOERKSOERKSOE", "HLCIMHLCIMHLCIMHLCIMH", "NZDXPNZDXPNZDXPNZDXPN", "KQVTBKQVTBKQVTBKQVTBK", "ADPLFADPLFADPLFADPLFA", "ERKSOERKSOERKSOERKSOE", "HLCIMHLCIMHLCIMHLCIMH", "NZDXPNZDXPNZDXPNZDXPN"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 643220;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> letterMaze = {"MKQRDSATVPNOCHFLBXZE", "IMKQRDSATVPNOCHFLBXZ", "EIMKQRDSATVPNOCHFLBX", "ZEIMKQRDSATVPNOCHFLB", "XZEIMKQRDSATVPNOCHFL", "BXZEIMKQRDSATVPNOCHF", "LBXZEIMKQRDSATVPNOCH", "FLBXZEIMKQRDSATVPNOC", "HFLBXZEIMKQRDSATVPNO", "CHFLBXZEIMKQRDSATVPN", "OCHFLBXZEIMKQRDSATVP", "NOCHFLBXZEIMKQRDSATV", "PNOCHFLBXZEIMKQRDSAT", "VPNOCHFLBXZEIMKQRDSA", "TVPNOCHFLBXZEIMKQRDS", "ATVPNOCHFLBXZEIMKQRD", "SATVPNOCHFLBXZEIMKQR", "DSATVPNOCHFLBXZEIMKQ", "RDSATVPNOCHFLBXZEIMK", "QRDSATVPNOCHFLBXZEIM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 199229440;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> letterMaze = {"KCBHZXPBKVZXXFLC", ".QNIOBMHOZPNVX.T", "SNNDNLARPRCZIFSK", "QBEEDDFPPVPDRIHO", "TEASRKLTMMVOBKQT", "FTEEMOLSIMTIQHTO", "NKAVPIRCFCS.A..O", "LBHFMCREVKXELHXD", "XSDQI.SZMQAAZARR", "VXVDLQESQ.MDNZBC", "F.HANTHLIPKFZBCO"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 274;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> letterMaze = {".EQD.E.CDC..Q..B", ".R..XP.N.M..TNIC", "P..N.C..OI......", "BVCVB..KLAT...X.", "...PR.T.VIZ..RS.", ".H.ZXQTMEF.C.S..", ".Z.KZX..Q...S...", "V..O...F.B.O.ETI", "..FBPATN.R.A.B.I", "..QZ.ZLAR.F.LVNP", "LEH....M.DNPV..R", ".HK.QC.DO.M.M.SM", ".BVD.Z..XD..H..A", "..CIO.ZF...M..P.", "H.T.MKXD..L.IQFX", "KOS...H.N...O..K", "OR.VASE.S.SD.QKI", "PEA..A.KLL...L..", "B..FFXRH.TNEH..."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> letterMaze = {".....A......P.", "..C....V......", "..............", ".F.....D....O.", "...........M.Z", "....N.....BR..", ".....L..T.....", ".X............", "..............", "....S.........", ".......H......", "......E.......", "IQ......K....."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> letterMaze = {"................", "...R.Q..........", ".N..............", ".T..VH....K.....", ".K.........X....", ".....R.......F..", ".......ASO......", "................", "...L..D........I", "...ZX.I.........", "......C....SB...", "..O.E..M.A......", ".Q...Z....PD....", "..............V.", "..M.............", "..H..E.........T", "N..........F....", "................", "............L.B.", ".............C.P"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> letterMaze = {"Q.DI..MV.L..A.NL.", ".BC.A.....E.QEITO", "BRE...LOR.....DPT", "NBPXZ..EZX.HHK.RT", "..N.IZ..FRASZ.N..", ".KQXC.BE.B.VCX.M.", ".T.EPCRIK.P.....F", "Z.VSV...SQCQB..H.", "M....FT..L..K.T.P", ".I...O..AIPM.D.KC", "F.C...AKQ.EDOV...", "LD..M...DCI.....O", "AMVHKBAVXD..X..O.", "D.SL.A.ES.NZI.SZB", "..SXLN.ZOMP.N.MF.", "R...H.PS..THQ.FVF", ".XFQRKT.H.NRL.H.O"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> letterMaze = {"NVQ..", "O.MH.", ".TKD.", "...AE", "LFXZ.", "S..CB", "IP.R."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> letterMaze = {"...............", "..........IF...", "...............", ".........A.....", "........V...X..", "...............", "..KC.........Q.", "........Z......", ".............P.", "....M..S....N..", "......E........", "............B..", "..H............", "O....T..R......", "...L.........D."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> letterMaze = {"MD.ZBRXHNQPZV.KCEI.E", "XPRSCK.XTCOADLQFB.CQ", "FBRDL.BBACTNNDIMTEEM", "PPO.MRI.O.LRBISNIBQT", "M.C.BF.TMV..TBVZMQOS", "BK.N.VLCARXOQQNXOV..", "QRLKDVAOZKLLSFNFTRCP", "MP.DFHXELP.NE.CVRSRM", ".OZQTSTIHC.MEFKAKOKQ", "PR.ZA.LLHRZOHT.F..CI", "C.HPLS.DDOMXKACVILHB", "X.ZFT.VZ.VTQZIK.IRE.", "QRBREPAL.K.XAN.KHSVE", ".OK..DSF.HCXOH.DFZVN", "KAVNHSK.LLSVHPFPPCSN", ".SNXPDQ.ESNIIMRE.CDQ", "M.SBMADAZV.XFE.MAI.Z", "QNXAXITFZ....HO.TXHB", "E.SIBHVOZ.FOMLPT.DKX", "A.EDFEA..ZN.IHQTBD.P"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> letterMaze = {"K.....BL....F......", "...VH..V.I........O", ".K..Z..P..........K", "...................", "...P...............", "........C......OR.A", ".N.....Z...LM....H.", "C.S......D.N.SD.CT.", "................EE.", "......T..PF........", "NA.......X..B..I...", "I....QXB.QV...A..X.", "........E.Z....T...", "OR..M..F....R......", "..L.S....D......Q..", ".H..........M......"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> letterMaze = {"B..V....K.XADL.D.Q.H", ".B.SO.I.Z.NRT..TIF.F", "M....EH.K..P...LEV..", "A..QZP.MCOSRCX.N...."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> letterMaze = {"P.RDV.LEQDCOVBMZI.K", ".IOSACRQ.PO.TV.ALP.", "XCOO.PFXBRIOZKILEOR", "..N.LP.OASFNKBPQKXK", "FRB.ZTP.TNNMTMS.QLP", "TXXKSXFTB.NNRTPLAHZ", "DSLFABRMCDPT.BPFXRE", "VSVXALSAAXZNHXZADSQ", "TOBXIERBKHEXX.AQFCF", "MLZVHPVCBKHQXHXMEXT", "VHMEKZKK.EMQCMOSCV.", "TR..ECRNAHMF.AOZICD", "M.LVOIPFTQVQCSCSNAF", "LDBEBDN.OHBL..TIVMZ", "VHIIEVE.COENSFF.CND", "CZOHANEBQVIHRREMMHD", "P.KD.KD..TOZDEDIQNR", "MKESQFZLIF.XHVKTBMH", ".S.QFR.FSAI.RCZQBPI", "OQTACNQPL.RTHSLDHSZ", "ZZLM.NPKDVLAI.DKNIB"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> letterMaze = {"LLXXTNXTVSNFRZ.RPHL", "XPBACQPZAFLHX.ZNFMD", ".DTCEKI.Z..PDIINQZH", "LLQTKAQHDE.EMFCPHX.", "QDAVPHEKDIMSBVBPRCS", "RTVMAAPBLMBERRQKCMF", "XAXX.EQONZB.AVLVPBH", "O.BESOVKHIXRXPITRSN", "NVLPTAFTCIDOSQVFEME", "BDTFHKRFNHLKAFI.LST", "ZKNCZIOEFADBFKCSPM.", "CFRDFIVTLERVCORSCSK", "CKZEVT.XTVBMNEL.SNS", "NZTNS.HOAIKNTSBAMQR", "IQSB.MMXOIQEIQZPZCZ", "LK.KONKK.HQBPF.FXH.", "MEZRDV.DMC.SAZMODZQ", "XOHRICBPTHMD.CABOD.", "ODNQXLAORLVOIEHVOPQ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1362;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> letterMaze = {"R.FDPMNVLBC.CFTBVA.", "BTMEMA.CACOLIVH.EKI", "VME.FBDHOXDZ.TBIT.D", "Z.HVB.TL..ZPOMMZQVK", "PMIOSNAX.IENMXO.T.P", "OOSPB..SCORNBQSBCBR", "BO.T.FVAHKNPQLRKENL", ".IIZSKENASDQBO.XEIZ", "RFDBORFXTK.NPCQ..M.", "V.HFPRQRLI.VKQ.VETT", "HALF.HSZAH.SAQTHRTQ", ".K.LDV.S.LEHHXADXCX", ".NHIKQFQXVLDPMFPMS.", "MNLKNNZZZMZCCZT.PNX", "MRFQERCSE.QXEFACBIB", "IOI.VZICHXXRDRPNSPK", "KVFHXCEZ.DDELA.LEVF", "DL.SORNPLKFORASKHXK", "DCT.TOQ.IQZPAAD..MS"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> letterMaze = {"SSQKNPAKIXQZBE.DVMF", "..FF.PC.LFRNHBQXXQ.", "TOMPES.REHFTNCLMDB.", "FSDTHQH.DB.T.ZAH.AO", "K.P.LKLIEMOSOHDQ.IA", "LMBISDEOP.HCDDKEMLL", "NNE.FMNVNISXDZXM.ME", "NOB.MQRTK.QPKVCDECI", "QOIBB.CIFMCQCMVKM.C", "PTXACBESPA.HMNXCHAR", "XC.Z.LZTK.RDP.O.F.N", ".N.SEAP.TK.ZOIRVCPA", "ORR.FZZILZTBZX.VRSF", "A.CHQDNVOTTDHDXBXVN", "KTIAXLV..IKKHRSVPIA", "LRRZZQVVETIRVLK.HBS", "AFZBOBTEIO.LESR.ZO.", "KSSFFA.ZQB.X..HRTFL", "VNQMANXOPXLQPVDHPEC"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> letterMaze = {"CDSRFTEAKXSRDSVRVMFCE", "KENBSROMIMPLNNFMHSTRD", "BKIAFMHNRZXVPEXLDIDRO", "FQVMPBZTTRHSFKXLOKLNM", "RCNTCXVZMEBXXHKRKTOPH", "XICKLORCTSQSOCLDEFOFA", "TBKCLAIABQTSETLHQEZCZ", "HLEILEMIOBLNBVVNHBQAB", "AABFQOQPSPIDAMCRARNHZ", "HLVBTFETOVRTHVZIVCXXI", "DVPXCDQBIZNZXREEVDOVZ", "FDXFCVONNIVZVEHRSQQRX", "DEELPSKPOBSIDMXMQNBLP", "DTINBFSKRZESFZHRNOBCD", "QSZMOMZXXDVCOFKHOQBDC", "QDCAIHPLAKSZLKOOEHFLQ", "XNKOVNCHLZIAZLANMRQMQ", "SQSMPCIALCXPPNKLRFATP", "TAIMQFXTITPHTBETVDNIM", "EFEAPPKKCVZBSFSPAIQDK", "HFOMKATPADZBZNQHMXPKH"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1458;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> letterMaze = {"MKMRVODKAEVBIXZBIZZ", "BQVOTVHVNTEOTXDRFFP", "RDIQNLLZIPPHIROQRXM", "NFXBZHDKAQEABQMPRAK", "BTHVQNLNNVXRNLSXMIM", "RTBFNICQCKBOXHXHDFS", "LNXSKRICOCCICSTLHVH", "RDICOFKNEENPRNMACV.", "BIDVIPXMVDSKOSXMLRA", "LFZBEXMKZELSCLHQMTT", "AFLTMHCQHFHRFPBHLVT", "PZOACSKSADZBPEBRSFT", "TKKSLDVOATKPQESECBC", "NTBCZIXFMPOMIVQFEXO", "DXAQTPLENRLNISDCEOQ", "SZOOABZQZMNONEQBSES", "BMSKF.TEKVVIZAZEAIR", "NAZKVPMZVDCEAXZXPFF", "ATHXPPCOROLDLDQTPSA", "LFQQPFHHHKKCDRDHIDM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 4798;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> letterMaze = {"LLNKNZLALNRNVNQ...DZP", "SSXX.QKRFDHMVEPB.ICBC", ".SBIHM.QEI.IBALZMXMEK", "QOE.FT.V.MTD.B.XKP.TR", "IB.FVBOSPTEDSNNVPZS..", "RQNZBEFBO..Z.LQCPEXZ.", "ABSMTXLZ.C.RANH.PDV..", "MPCNST.OA..A.XKEOV.XM", "IOX.N.NDHSF..FO.BOIBQ", "AVP.QBMQZBLFER.ICLCDB", "DHDKZ.T.F.EI.SHK.AXB.", "X.IRVFOLKZKRFXOMECLHO", "MR..VTQCNX..OFZB.CKPI", "HKPIVD.ZM.VRL.CKDEDEA", "HRK..MVOM..DIHACZI.PT", "RAFPLM.CO.HAHTC.I.S..", ".N.VALTFAFXAECDRDQ.RN", "R.RV.STLPKTLQSOXSTEX.", ".C.T.FNQK.SZDAAS.LZTE", "OH..FQ.VHHMQ.VMTIZD.O", "KPIE.SP.NF.R.QXPCQHKH"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> letterMaze = {"APCZQFCBMLHMOZOEIXNI", "BLACHVDDQSEESASNMIZT", "HHRMKVHBQAFACPRSHODO", "KESHNRIBLRXAVSVFPMLF", "RQXKDFVQHSIDBVQICVII", "CXZFCBBRXXHTPEBIQZOT", "QZCKQKLXDFDIERCEBOXQ", "SQORZRDLOFCLPTMSKDLV", "IRHQMSKMZRXMQMXSEIXP", "BNNONEVHMACZERPNXPAD", "TAOAFMTQISKHMBHTEDIV", "VHPVFZNNFSOCAZTAPZQF", "TENEKQZIRKPBKFSEERCO", "ETXREATFXXACLVMISSTI", "PDHTCZKPNLQFLZZBVNSC", "AAINMBLKMBPXOPKOZOPL", "TKPPDNNDKKVOOHTDRFQT", "ADLBHOXVDLNCFTREVPLL", "SXRMBBALDHFKTNRVSONX", "KMEDVTKOVXPADAMFIQZB", "CSNLTZCQFCHZMLHEBRNI"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2070;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> letterMaze = {"IPFDIMDNQXEMEDCVFRA", "ZBFZTITHIVKDLCFTPPZ", "TXCLDLAREPOBPOOEXXK", "PLCDBQZTNTKXHPBPLBP", "CBCEOSZEBXFHPAXBFNQ", "PRHLNSCZXXCATSOHXNB", "PDVIMQFQTBVIPVZXICO", "KNXHISHAXMNDCMKMNXT", "RKDFZDONHNANSFABQKV", "LKEQTDLRNBMKAKSHVZR", "OMEFEMNOSSIFCVHKMTQ", "CCVFLLLEEZNVTOBADNX", "QQMRBEZLZTIOPDAAVCL", "QABAMSTSERHXQMERLZZ", "BHTOHVZIORLPQDPENKM", "NIZIDKVFAHIHVSKCIFO", "ASMRSTRVSEFPZKOZECT", "BKQVDEMVMCSDQFZRLMI", "XRRKBIDONTQAKNKFTFA", "SHSQHROCQSMXHLLARBO", "IXVPRCRDLAQESIPVFOH"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2302;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> letterMaze = {"NEIL.LMVK.Z.SX.KPSN", "QETMMVN.K.OPXZTXANF", ".DRFN.SCI..N.LZAK.I", "HNH.RQF...NE.QQB.O.", "N.VLPPX.MDISTRMMRTX", "PA.DZ.KX.SXQRFMFMTO", "AHCELIF.Q...HPSZF.T", "..QRPAD.M.EVEPNPOET", ".CLNE.V.I.H..O.VXBV", "QIXQOTPKP..OCX..ODO", ".X.SBD.XCKD.B..DRKP", "SNBLKDCEOAXSTRBH.V.", "K.ZBDZAXLSMPK.IQNHZ", "Z..M.ILR......BMSMV", "A..OSKOLFDL.B..SQR.", "LFBVOA...CXLCEBCQVE", "EIAFTVFVZTCTIDCAHN.", ".HLCRBRZPHSRODPCAIQ", "BFKHCFFACHRZOD.ET.K", "HM.HVRATTZV..E.IZQM", "SBDQLN..A.HIZEB.IFK"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> letterMaze = {"...................", "...................", "...................", "...T...........N...", "................Z..", "...P............E..", "...................", "................O..", "......S............", "......K............", "..H....RI.....V.FA.", ".L.................", "...............Q...", "...................", "X..................", ".......C...........", "....M............B.", "..................D", "..................."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> letterMaze = {"M....................", ".....................", "....A.K..............", ".....................", ".....................", "............C........", ".........E.Z.........", "...........T.........", ".....................", ".......H.....F.....D.", "................B....", "................Q....", ".....................", "...............V.....", "L....................", "......SN.............", "..............X..O..R", ".....................", ".....................", "..I.............P...."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> letterMaze = {"....................", "....................", "..O.................", "...................D", "..............L...T.", ".....S..............", "......B.........V...", "....................", "I.....K...A.........", ".......Z............", "........N........F..", "....................", "..........H.......R.", "....................", ".................M..", "....C.........X.....", "....................", "....................", "............Q.......", "...............P....", "..........E........."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> letterMaze = {".........D........A", "X...M..............", "...................", "...............R...", "...................", "...................", "...................", "..........P........", "...........F..H.L..", "................S..", "...I....V..........", "...................", "................O..", "............Z....B.", "...................", "...................", "..........C........", ".....E.......T.....", ".Q.....K...........", ".........N........."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> letterMaze = {"....................", "..................I.", "..............B.....", "....................", "E...........R.......", "..L...............F.", "....................", "O...................", "..................M.", "A...................", ".....V..............", "............K.......", ".P....T.............", ".............D...S..", "....................", "..Q.................", "..........X..H......", "....................", ".............C......", "Z..............N....", "...................."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> letterMaze = {"ZLNVQEHBACODXZICMKVQA", "IOXDTZFMSZPNQVLPRFOLB", "CSPMK.RIKELRMBADSXEZS", "KAFE.LQVDFASCFTNIKHND", "MBQNHCOTHBOIHKXZQVARI", "TV.IRAXNPRTVEPSLBPXTF", "HXZPDMEQLZCXD.MOCKSOQ", "ECA.KVFBAS.FL.RNEH.MA", "FQOLTSOHDMRITQHIFXZVB", "IPNBEZNRIVOZKPASMPDLH", "SMDRIQ.XPQNEXB.ZKBTOE", "VXKA.OCEFASLHINOCERSK", "ZBH.TVDMKTBFRDTVPQANM", "RTLENFLZNRVQCZMHL.FIP", "DCIZPSRBAHXKOPXKE.BCZ", "QSVX.QOICLE.IDNTSVDOX", "LORHK.T.FDTMBSAQR.NMV", "PNBDCMAXVKHC.LKFBXPLQ", "XFAZLFEQPNSROHEZOICTA", "HMIVPNHCOMZ.QDVTMKHER", "CEKTSRDBLAFTIXCPSNBFD"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 107364;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> letterMaze = {"EFTSPOHXZDCMAVEQKSRD", "ZAIVNQELFRISTBOLXZFP", "MCRBKSIAKBOQPZQMNCIB", "KQHXZVMTQCELNRIPHAOM", "LSPOFDCOLNRXHFDSEKVT", "DIVMNSRPIVDOCKQTMFDH", "NEATKLHXKBSAMEZBPRXE", "OPXC.IQEZTHRLXIAOCSQ", "HSZDRBORPFOTVNSHQLKN", "BVFLXHMDNAQPFCRTVDAF", "IKAQTPACSKIBXOLPEMZO", "RCEINZRVBLHEDZBQCIBP", "TLZFHLXQMDRVASFVTHXR", "DMKOIBETFZNMCRKENKFD", "XSANVDSPAOKQTPDLOPCT", "EZPCQKZMHVEBFVAXBMZS", "VFRLNIBLXSTDOCIHNVAL", "QHNXEFACRIZMXNZMFQKX", "COIMTVHNQFKHSLEBTPDI", "AKLBDSXZEPTVACMRONHB"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 245610;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> letterMaze = {"CDLRSFBOEHAVKPIOMXB", "KNMXTZQVKDZXCLHNEDF", "PQVIANMIRLQSBATVQCT", "AHSFOEHPCMTFOKSPRLZ", "OETCDRKXNVDPLZMNIAH", "IBZNPLASQIBAIDXEBKS", "FRKHQMFTZLKEHCQOFPV", "LVSAOIEBDOFQPNRTCQX", "DPTBXLVCRNRMVLSXHMI", "MCHDZNHXLSAXDBOKZED", "NAKVRFPQFITKEFACBRN", "QEBXMVKBMVCZRTIDXLO", "ZOILFAIOEDNSOMHSPTK", "RVPZDSTXHKFPQCNOVCS", "SXHRNCZRTBALSEABFZQ", "TMAQKBMINCVTXDKMHNR", "LZEILVFPSHEOFRQTDAM", "DBRHTMEQOKPMIVCSPIE", "QCFOXAZDTNZLOHELOXB", "IKNZQSPLXCRDSXZNTFZ", "AEPVHMRBFIEAPBQKVHC"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 271722;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> letterMaze = {"FSLVMDPNTQHAKRLSTNVPL", "RBZACKXLSMXBEQFHIQCFM", "THQNEFRAIDNCOP.ZEKBOA", "IOKRSZBCQZFVMDB.RSNXE", "DFMI.OV.TKRATXNCVTFDR", "XPEQALMPNHOLIQKAHPMIK", "KSRHTXQDEXVCSPFEOQLSZ", "CNVDZIKC.AMBDZRL.FRNH", "ZMBFEPSROTFHKVCXPBTVC", "L.XCOTV.LZQPNTHMNIZPX", "ETQHA.BEHISX.ODEKASQD", "OIDVKINXMVKEMALPB..ER", "APRM.ZPFQCL.ZFSVRNOZA", "KBCLTEOATDNR.BXTCFIHL", "VZE.HBSL.BHSQOIMLQSXM", "SNODQXIRPVIMPCDEK.DBK", "FMAIFVCZKNALXNHBOHRVT", "QHLPT.BOQEDO.FAZT.FIN", "DXEZRSHMFXZCTKVSQPCOZ", "BCIKOADNPSVIBMRLXDHEA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 75992;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> letterMaze = {"AXBHPLKDMZXCHKORATEVB", "OEZCVNFOTBAVPNISMHXZD", "TISRDAQICFKOLTDBNFQCL", "QFLNOXZTMREISFZELKBPN", "KDPEFMEHVSNZMXQPRSATF", "NVCHTKNLPDTBQHCNVMXEI", "LMOSIBVCFXHLOKAIQDOHR", "RAKDZEMQAIZCPSRXTPBKS", "SFXPNHROSTREVDFLEZIMA", "CHQLVFXDNHMQLZIOAQONV", "BTIZCMELBKDPANKCRKTCQ", "EDNOBSPOVZFCXBHMIBFPX", "ZRPKEAZQIERSITQDVSARD", "SCVQRFTXNAOHLZKEOXMHB", "AMIHDVCSVMKDVRPNBCQTZ", "XLBTAOLRBFLQBMAIFPDLE", "VOPZMPKHEXAITXSLTHXKM", "QFRSEXQAZPSRFCOBZVSNI", "HKCINTDMVOLKNEHQDRPFC"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 262230;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> letterMaze = {"DZQHNMBFCAKLXIKZVPNHB", "ILXOVASDRTOQPMHDSRTOE", "RPSERTLIVZMNRBTLCIKCX", "ATCIZPCNHSFIECAOMTVQL", "FHKMBFQKOPXLMSIFNBZSM", "VOXQRDAEMRQHDKTXEHRPA", "SZIENHXLBZTOVLRQDLKXI", "BDLAPOTSFCKMIZCMAOVFN", "NQMFDQZAPNLBREPNIQCTD", "HRZSVKIDHRQXAHSKOBEHZ", "OXECBLETOVMTNFDRZFXRS", "LPTANHFSAVEKPBCEAVLKP", "KFIQOVXCBZILSOVXTDMQF", "QMDSRMQDNPSXRQHIPFBAO", "VBHECZKTHFATDZNESOZCV", "NTKXPLIVOMCEKAXBRKXEI", "ZCOAFNEPZLIVOPLMDVFPN", "IMQBSCKBDXRBSDFQHCATH", "DERVDXRHANQTZEVITNXLB", "SXPHTMQZSPMFKHCOPZREK", "AFLBKNOVCIELBNDASFQMC"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 361682;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> letterMaze = {"CLTQZRVSNATDBMXECLVIZ", "HDXBKOMXFPIQRZPDHAOSX", "EIVHACLHKOMEFSOTBMKNR", "FPNMSPIBELZAVLKIQREQT", "MZQROFNQTRCHTQCRXZALB", "SOBLEKDZAXFKNMEFPHVDM", "AVDHTBPVSTEXDABOREKSC", "RIFSMXROXDPIOLHQCBINA", "KQZPCIKFBMTVZNXKMTXHE", "DBTOFNLEHCNRATSVEFLZK", "HLPEDAMTIXQKEFPAONIRO", "XFVRSPVZDSFODCNQZHVSQ", "TMCZLOXRPVLBMHVSDBMCF", "IOAHNQTMEICAXITLKEAPI", "VPQKFBICNFKZVRZCORNKT", "LBRDEAOHDQTSNPQFSZCQX", "CNXHZPLVSZLCDELIXHBDV", "AQSOKNMXSPBMIHZBANPLZ", "PHITDQFKIERXOKRVTCRSN", "EBLVCHBADQTFLSNMIEKOM", "DFKMORPSNCHVZAXPDFQBA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 244058;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> letterMaze = {"CDKMVQBLHCNBFSCKITXZE", "INZSFRMDTIOZMQEOPDCOF", "BEXPACZFEXKARVNRFHNKL", "HOQTIONAVPBSDLBMAESBV", "TRFDLKBMSHNECTPZQTXRQ", "LNMAVPQIFZXQHIOXDPIMD", "XQCSEZHLOKTMZSNERFVNH", "ADIBPXTRDCLBRPVKCQLTA", "PVFKOMAPINSEAOQHAIZEP", "MRNZDVKEFVZXFSDMBSOXI", "ZLBACHBSLMOTPBLXNRLHD", "QSEXMFQTRHKFEOIPCTVNK", "OHITLZAPVIDRCNHQSZFQC", "CBKOPVDCNALPSVZEABXML", "DRASMRIEXFMQBFXKDLPRI", "NZXCNKOTHZCIHMTOCHVKB", "KIEFTHQLANKRDSLREQSZE", "SOVDIABSPTVONVVFIMNOT", "MRLKZRXFMQHCEAHZBCDXF", "BXPSCNVEIRTKZPQXTVHAR", "ATHQEODKALXFBSDOMKLQP"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 302694;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> letterMaze = {"BLQTSBRHDFOIQTKMZPBLA", "PVKAOVIZECVRSEXOFNVIH", "CXRNDCAXKPNTAHCQDETRS", "ZEMHFLHQMBLXMZBLRXCQO", "DBTSPBRDTZROFKVSMAPDX", "OQAIKMVOCFEDSOPITHLIK", "HKMNXZASHIPAQCNXSOZNM", "FSLRCEPNRKXTZMERDBEVF", "NTEBDHLFDBMLOBFKLMXPT", "MAVPKIMQSIHVSNHZAQZIA", "RQXFNSAOTCAPCIDQOTFSD", "KEOLZCVPKDEORXTVNCHER", "DCBPIHEXLZNHBNFKPLXKZ", "IVMTFRBISXPMQEZAQSMOV", "LHQANKVACQTFCSLDEIFDB", "BZSILDPFENRKVOHNRBCTL", "PKRCEXQOHILXEPTMXOZQN", "VAONBZSMTZQBCZSKHFVPH", "QFMPVARNCKDTIRFQILSAO", "ETXRHLXFEASVMNABCEDMI", "CDZNKIDVBPOHQLTVZRKXF"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 318380;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> letterMaze = {"EPOVXHQDRKCSAPLRFDEMH", "FTBMNZAPETOBHZECBVTQX", "ACLDRIMKFZMINVOXASZON", "KIHXQTCXVHPDXQZIHPLKI", "RSOZVLOBNLRESKLMNFQAV", "DQPNSEKSATFOHATRDXSCB", "ZLKFXMRHDZQCBPFECVTEP", "HVACIDQCBXITLNSOIQRHF", "NERTLZAPMEVDRXQPLKNZS", "MBOXEBNSZFTKMHZBVECMD", "FPIKSHOLDBOQNFTAMDXTE", "XLHRFAVCXASLPOSCPHFRO", "QNTZDPMKRIZCVIEQIBLQK", "RCMKNETIOHDKXTFDVMZAB", "VIFHBOQNBPMASRLKSNTIV", "SADXRCSFQVENCBOHXPRCF", "ETNVKVDMCZLMQPMAQBOEL", "LPMIEZAXKTIRXKZLFIKAH", "KOQABPLNBRNDTSHETVPMZ", "BZFSTHFECOMHFINDCRNXD", "ACDRXVIQSZPALVOKBQSOI"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 320304;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRSTV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> letterMaze = {"MKCDEFZHIXRLANOPQBSTV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> letterMaze = {"M", "P", "I", "E", "Z", "X", "B", "L", "F", "K", "T", "C", "O", "N", "H", "V", "A", "S", "D", "R", "Q"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> letterMaze = {"K", "E", "P", "I", "M", "Z", "X", "N", "H", "V", "A", "S", "D", "R", "B", "L", "F", "T", "C", "O", "Q"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> letterMaze = {"...A.", "EDCB.", "FZ...", "IH...", "X....", "KLMNO", "...QP", "..SR.", ".VT.."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> letterMaze = {"VT.....", ".SR....", "..QPONM", "......L", "....IXK", "....H..", "...FZ..", "...E...", "...D...", "...CB..", "....A.."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> letterMaze = {"..A...", ".CB...", ".D....", ".E....", ".FZ...", "XIHSTV", "KL.R..", ".MNQ..", "..OP.."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> letterMaze = {".....BC", "...IHAD", "...XZFE", "NMLK...", "OPQ....", "..R....", "..S....", "..TV..."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> letterMaze = {"..DCBA", "..EF..", ".V.ZH.", "ST..I.", "R...XK", "QPONML"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> letterMaze = {"IHX......", ".ZKPQRSTV", ".FLO.....", ".EMN.....", ".DC......", "..BA....."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> letterMaze = {".QR....", "OPS....", "..T....", "NMV.DC.", ".L..EBA", ".KHZF..", ".XI...."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> letterMaze = {".LKXIEF", ".MN.HDZ", "..OP.CB", "..RQ..A", "VTS...."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> letterMaze = {"......A.", "......B.", "......CD", "......FE", "......ZH", "VTSMLKXI", ".ORN....", ".PQ....."};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> letterMaze = {"....NML", "....OPK", "...HIQX", "BA.Z.R.", "CDEF.S.", ".....TV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> letterMaze = {"PLHZIEKDQVXFR", "OPLHZIEKDQVXF", "BOPLHZIEKDQVX", "TBOPLHZIEKDQV", "NTBOPLHZIEKDQ", "CNTBOPLHZIEKD", "MCNTBOPLHZIEK", "AMCNTBOPLHZIE", "SAMCNTBOPLHZI", "RSAMCNTBOPLHZ", "FRSAMCNTBOPLH", "XFRSAMCNTBOPL", "VXFRSAMCNTBOP"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 11219728;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> letterMaze = {"KTLFEIDXQOZMC", "AKTLFEIDXQOZM", "PAKTLFEIDXQOZ", "RPAKTLFEIDXQO", "NRPAKTLFEIDXQ", "VNRPAKTLFEIDX", "SVNRPAKTLFEID", "BSVNRPAKTLFEI", "HBSVNRPAKTLFE", "CHBSVNRPAKTLF", "MCHBSVNRPAKTL", "ZMCHBSVNRPAKT"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 6584032;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> letterMaze = {"NOIAVBZFSKCRPMQ", "ENOIAVBZFSKCRPM", "LENOIAVBZFSKCRP", "DLENOIAVBZFSKCR", "HDLENOIAVBZFSKC", "THDLENOIAVBZFSK", "XTHDLENOIAVBZFS", "QXTHDLENOIAVBZF", "MQXTHDLENOIAVBZ", "PMQXTHDLENOIAVB", "RPMQXTHDLENOIAV", "CRPMQXTHDLENOIA", "KCRPMQXTHDLENOI", "SKCRPMQXTHDLENO"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 32248320;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> letterMaze = {"HFOMNBRLQXDKSA", "CHFOMNBRLQXDKS", "ZCHFOMNBRLQXDK", "IZCHFOMNBRLQXD", "PIZCHFOMNBRLQX", "VPIZCHFOMNBRLQ", "TVPIZCHFOMNBRL", "ETVPIZCHFOMNBR", "AETVPIZCHFOMNB", "SAETVPIZCHFOMN", "KSAETVPIZCHFOM"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 5625368;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> letterMaze = {"KMSBZXLOAHQ", "CKMSBZXLOAH", "ECKMSBZXLOA", "FECKMSBZXLO", "NFECKMSBZXL", "DNFECKMSBZX", "PDNFECKMSBZ", "RPDNFECKMSB", "VRPDNFECKMS", "IVRPDNFECKM", "TIVRPDNFECK", "QTIVRPDNFEC", "HQTIVRPDNFE", "AHQTIVRPDNF"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 5625368;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> letterMaze = {"QTKELNEHQNMAZOBKCXNRH", "BCIANSMFIADSLPVIZQLSM", "HKHXFQVROKBQVXTDBPMVF", "DMCSROTCZXHNQKHAOERSZ", "ZLNBPZESLPFEIRFMLNXAH", "PERXKDLCADTMCSZPVKBRS", "EHBOTIANVBOQKTOTEQCNF", "KICSVHMFHKZIEMPLHIDOZ", "XRNFQEBXRCVXLBCMXASPC", "DBLAMISQVFNSADFBRZFTN", "KXDPZKPLDORHPORKEVKQI", "PMZEHTAMZRVZCXINQTBRZ", "AICLROXFCNPDSHCPTLMEV", "BZQSXEHLFBOAMLFDVZPAB", "IMOKADVCZDERXBMOASOKN", "NRTFPBNRAHVAZIEFHXRXS", "OXVLSZITXDHISQDOPSZHT", "PEHCKQMOELDVATCKMNVFL", "BDADFPCKFVHXRBLAQIORP", "NRXOMSVLSZBNZEITBEDCX", "HBELAKDHPQRALXAKLXQIS"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 553570;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> letterMaze = {"NVKHNTDFAIPBQEOHDPZOX", "OIXEQBCOVXHZRKFAVKISB", "MRADPSMLETDCVMSLQRONM", "ZTFCIKRZQFANOPXCTEAVP", "KLSMVNOPBSKIEHNBMZLHQ", "QHBZTHLITHMPZRIKSXFCB", "EAORFXMKDNOXQFTOPNIDT", "NDPQCEBSAECLSBDHAVZEK", "XKLBNRQPIVTRPMCQRMLXS", "OVZAITZXNMFAIZLFTBHOA", "RFPDSMVCOQZHKVNEIPCQR", "TMHCOKHFPRLODQAXSVZDN", "KBQELIBDSICTBSRONKTFL", "NAXRTAZVEKNXFHMBARMPB", "VZDSNPOTMHQAPEZCIVDEX", "FPCMFHKXPOVSKDQTLSFAK", "LHKBVQDSRLBZNXVPXHNQT", "XIORECZAFCDTIFMKCIOPB", "TSDNTLINMVERPCELBSZDL", "VMZAXPOHQXOLHAOZRTEMV", "PECQFKBVDKZBSVDQFNAQK"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 537088;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> letterMaze = {"NVKHNTDFAIPBQEOHDPZMQ", "OIXEQBCOVXHZRKFAVKISB", "MRADPSMLETDCVMSLQRONX", "ZTFCIKRZQFANOPXCTEAVP", "KLSMVNOPBSKIEHNBMZLHQ", "QHBZTHLIRHMVZRIKSXFCB", "EAORFXMKDNOXQFTOPNIDT", "NDPQCEBSAECLSBDHAVZEK", "XKLBNRQPIVTRPMCQRMLXS", "OVZAITZXNMFAIZLFTBHOA", "RFPDSMVCOQZHKVNEIPCQR", "TMHCOKHFPRLODQAXSVZDN", "IBQELIBDSICTBSRONKTFL", "NAXRTAZVEKNXFHMBARMPB", "VZDSNPOTMHQAPEZCIVDEX", "FPCMFHKXPOVSKDQTLSFAK", "LHKBVQDSRLBZNXVPXHNQC", "XIORECZAFCDTIFMKCIOPR", "TSDNTLINMVERPCELBSZDL", "VMZAXPOHQXOLHAOZRTEMV", "FECQFKBVTKZBSVDQFNAXK"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 551890;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> letterMaze = {"NVKHNTDFAIPBQEOHDPZMT", "OIXEQBCOVXHZRKFAVKISB", "MRADPSMLETDCVMSLQRONX", "ZTFCIKRZQFANOPXCTEAVP", "KLSMVNOPBSKIEHNBMZLHQ", "QHBZTHLIRHMVZRIKSXFCB", "EAORFXMKDNOXQFTOPNIDT", "NDPQCEBSAECLSBDHAVZEK", "XKLBNRQPIVTRPMCQRMLXS", "OVZAITZXNMFAIZLFTBHOA", "RFPDSMVCOQZHKVNEIPCQR", "TMHCOKHFPRLODQAXSVZDN", "IBQELIBDSICTBSRONKTFL", "NAXRTAZVEKNXFHMBARMHB", "VZDSNPOTMHQAPEZCIVDEX", "FPCMFHKXPOVSKDQTLSFZK", "LHKBVQDSRLBZNXVPXHNQC", "XIORECZAFCDTIFMKAIOPR", "TSDNTLINMVERPCESBCZDL", "VMZAXPOHQXOLHAOZRTEMV", "RECQFKBVTKZBSVDQFNSXK"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 555906;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> letterMaze = {"XIOVSRNAVXPFOZHIOPTTK", "KSZVONFXIINIKAEFHEDST", "MKNCAEIBMIHTDHITVBLMP", "QQOLSHLXNPKLXNANXQCTE", "DSLFIRTQPEPOMDTPDPVZD", "TNSFACSCENNCNQZETFKMI", "KOXVIRQLBHZPLTBCNKPFR", "PIDSVSLNXTXKSBSKXCQBK", "MMBIIRTTZQNVHKMEAINIE", "FMEQOXZKCHBIPPAXXOPOA", "IEZSRFDLZALNVMPATDAPP", "PSIRETTRHMIEFXSNVEDMK", "SAAIHPSXHDKKXQMDEIIAE", "IPCSMDLMKDDKBEBMRVLQZ", "EXMNSMFTRZFOMBHXLAEQM", "NEVOORHAOEMAEXVCHCKNE", "FHMXIRAVKPFIIQOHALVHN", "XLVNSBIMIAANMKFXZVTBI", "FMOPDXSOSEMQTCNXLPMLA", "IHPXBPXQSCEPEPALOVFXZ", "HZNXDMIRCSCEPCZXMBEFO"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 824;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "BCDEFZHIKLMNOPQRSTVXA", "CDEFZHIKLMNOPQRSTVXAB", "DEFZHIKLMNOPQRSTVXABC", "EFZHIKLMNOPQRSTVXABCD", "FZHIKLMNOPQRSTVXABCDE", "ZHIKLMNOPQRSTVXABCDEF", "HIKLMNOPQRSTVXABCDEFZ", "IKLMNOPQRSTVXABCDEFZH", "KLMNOPQRSTV.ABCDEFZHI", "LMNOPQRSTVXABCDEFZHIK", "MNOPQRSTVXABCDEFZHIKL", "NOPQRSTVXABCDEFZHIKLM", "OPQRSTVXABCDEFZHIKLMN", "PQRSTVXABCDEFZHIKLMNO", "QRSTVXABCDEFZHIKLMNOP", "RSTVXABCDEFZHIKLMNOPQ", "STVXABCDEFZHIKLMNOPQR", "TVXABCDEFZHIKLMNOPQRS", "VXABCDEFZHIKLMNOPQRST", "XABCDEFZHIKLMNOPQRSTV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 211965502;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "BCDEFZHIKLMNOPQRSTVXA", "CDEFZHIKLMNOPQRSTVXAB", "DEFZHIKLMNOPQRSTVXABC", "FZHIKLMNOPQRSTVXABCDE", "ZHIKLMNOPQRSTVXABCDEA", "HIKLMNOPQRSTVXABCDEAZ", "IKLMNOPQRSTVXABCDEAZH", "KLMNOPQRSTVXABCDEAZHI", "LMNOPQRSTVXABCDEAZHIK", "MNOPQRSTVXABCDEAZHIKL", "NOPQRSTVXABCDEAZHIKLM", "OPQRSTVXABCDEAZHIKLMN", "PQRSTVXABCDEAZHIKLMNO", "QRSTVXABCDEAZHIKLMNOP", "RSTVXABCDEAZHIKLMNOPQ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 3735118;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> letterMaze = {"APLZQMOBPDINFDBFEPPPN", "ZSOCDXEKLZEPALZALBBSP", "LQRFOOCXFVXISNLBVIARL", "SXLNXQRHKCMEHLRLHALKH", "KXQMTBPXCNVZKDBTIPPQM", "RDQSHEATCNALKOVOBXNXD", "OVBQROAVANFPLPISXRFEP", "QHIDNTFFEZMMNATQOTQCB", "XFIDDEEVTHFKTCDLIESOF", "MAMDICFSBLTNROFFZVEKP", "DOHVZTZXQQMSVQDPHMBFO", "RFANEEEXTBOHTIKCXANHF", "BZLNTCHAQQELOSZCOKITE", "KFADRPNHMMHBHDXIVTTTA", "XPHPEVHCCOSXFEHDXILFF", "PBFEDHKFEITBQDNMDFHMO", "CIVTLAKIZRIESFRVCMXAH", "QHHKTHMEXDRRNXZBAFRQX", "SKQQSHLMFMFSRQQFKFXEZ", "KSTMBCVRKTHIVMQSFRSFS", "NHALDZSMTKLQIHZALINQB"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 3836;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> letterMaze = {"XABCDEFZHIKLMNOPQRSTV", "VXABCDEFZHIKLMNOPQRST", "TVXABCDEFZHIKLMNOPQRS", "STVXABCDEFZHIKLMNOPQR", "RSTVXABCDEFZHIKLMNOPQ", "QRSTVXABCDEFZHIKLMNOP", "PQRSTVXABCDEFZHIKLMNO", "OPQRSTVXABCDEFZHIKLMN", "NOPQRSTVXABCDEFZHIKLM", "MNOPQRSTVXABCDEFZHIKL", "LMNOPQRSTVXABCDEFZHIK", "KLMNOPQRSTVXABCDEFZHI", "IKLMNOPQRSTVXABCDEFZH", "HIKLMNOPQRSTVXABCDEFZ", "ZHIKLMNOPQRSTVXABCDEF", "FZHIKLMNOPQRSTVXABCDE", "EFZHIKLMNOPQRSTVXABCD", "DEFZHIKLMNOPQRSTVXABC", "CDEFZHIKLMNOPQRSTVXAB", "BCDEFZHIKLMNOPQRSTVXA", "ABCDEFZHIKLMNOPQRSTVX"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> letterMaze = {"ACEZILNPRTXBDFHKMOQSV", "DFHKMOQSVACEZILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQSVACEZILNPR", "ACEZILNPRTXBDFHKMOQSV", "DFHKMOQSVACEZILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQSVACEZILNPR", "ACEZILNPRTXBDFHKMOQSV", "DFHKMOQSVACEZILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQSVACEZILNPR"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 9492528;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "BCDEFZHIKLMNOPQRSTVXA", "CDEFZHIKLMNOPQRSTVXAB", "DEFZHIKLMNOPQRSTVXABC", "EFZHIKLMNOPQRSTVXABCD", "FZHIKLMNOPQRSTVXABCDE", "ZHIKLMNOPQRSTVXABCDEF", "HIKLMNOPQRSTVXABCDEFZ", "IKLMNOPQRSTVXABCDEFZH", "KLMNOPQRSTVXABCDEFZHI", "LMNOPQRSTVXABCDEFZHIK", "MNOPQRSTVXABCDEFZHIKL", "NOPQRSTVXABCDEFZHIKLM", "OPQRSTVXABCDEFZHIKLMN", "PQRSTVXABCDEFZHIKLMNO", "QRSTVXABCDEFZHIKLMNOP", "RSTVXABCDEFZHIKLMNOPQ", "STVXABCDEFZHIKLMNOPQR", "TVXABCDEFZHIKLMNOPQRS", "VXABCDEFZHIKLMNOPQRST", "XABCDEFZHIKLMNOPQRSTV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> letterMaze = {"BMESVSTQZMDAKHZQPBAOH", "MCXAHKKDZZNSXNZMHZVKR", "DHBSBTAVMXTZKDPSQCVXK", "ODHNQFOXAQDBZLCHBEXEL", "BPLLBSMFVKDQXBLNSZZBX", "CPFZNQHTBQETMLXTVFMVM", "SNCZVSKSKALELACRVEMAN", "XIXVTXTETQXOZQVKPTRDC", "ANVTMBHXSXLHNDNHVBMOL", "RSQRBXDEQREKZKRPPMOBD", "LFHNBXNMPIFOVIIHOTMOI", "ISPFMOQCQFTFDABXIHSXC", "VBKRPLHOLVTKTMOOORPZS", "QAEXAKHFLATDCLHZSBRNI", "ILLXQSRZADIMDRBTSAVPO", "DIMMCHERQQEAFSXZOKFKX", "OXLBXLKOTVTIKLOZFDOLP", "XQIKCBHEXZVXLMOQAEXHV", "LXCKEFHFSAEHBIOLKDELC", "FNDVICVCZFKFNHRLNILNQ", "FPSEBDLHIXDHFZCNEKQHB"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1132;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> letterMaze = {"NNLMEZRMELZOEBCZNQIKM", "OIRDPKQIRMXHAIMEDXHND", "XPEBXPRFDESMXXCZQLBDH", "ZBRQESNMIQLCSKXMCDNZX", "CDVCKMLKPSORNIXKXIQQT", "QKEQTZRKLQKOOMXCVZRPX", "KFHZNZPFVKXZONDSHOEBB", "SOMQQHAIAXREEBRKPVFAS", "MNIQIPFOOEHDOXRAAEVTX", "CCVSKLQPMMFCTTIKCVBEZ", "FTFARDCPXXQBSMLZDBSOZ", "SIDFSDDRIHVDMTSNXIMTC", "NPMXXOBQFFMMKRHLTCRCB", "VOVOFRBROBZEODEDCVIIH", "SQBDCVDVVCQNAZQQHIFIN", "LVPNBRLHBQDPREQNIOMIF", "AHMOBRAZCMPAEFATOFTIH", "KBKDPQPCDXALIOMEMQEBH", "CDNCXDZSMMFLXKBOADRXD", "FZPPIFZNEOPZDQFZVBQKE", "EZOZSPHNMKQQCICFONIDZ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1320;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> letterMaze = {"AOFTLCQHXNESKBPZVMDRI", "BPZVMDRIAOFTLCQHXNESK", "CQHXNESKBPZVMDRIAOFTL", "DRIAOFTLCQHXNESKBPZVM", "ESKBPZVMDRIAOFTLCQHXN", "FTLCQHXNESKBPZVMDRIAO", "ZVMDRIAOFTLCQHXNESKBP", "HXNESKBPZVMDRIAOFTLCQ", "IAOFTLCQHXNESKBPZVMDR", "KBPZVMDRIAOFTLCQHXNES", "LCQHXNESKBPZVMDRIAOFT", "MDRIAOFTLCQHXNESKBPZV", "NESKBPZVMDRIAOFTLCQHX", "OFTLCQHXNESKBPZVMDRIA", "PZVMDRIAOFTLCQHXNESKB", "QHXNESKBPZVMDRIAOFTLC", "RIAOFTLCQHXNESKBPZVMD", "SKBPZVMDRIAOFTLCQHXNE", "TLCQHXNESKBPZVMDRIAOF", "VMDRIAOFTLCQHXNESKBPZ", "XNESKBPZVMDRIAOFTLCQH"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 12316528;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> letterMaze = {"BEHROLFAQZKDXINSMPVTC", "KSRDLHIMTBNZEPOQVXCAF", "EVINRFBDKCTLZAXSOQPHM", "ZQFRPTXLHSKANVMDBEICO", "SZRAXPVCOFQTHNDLMBKEI", "TDVLKNOHZRPSFQIEAMCBX", "LDEXCQPRSINTVOFBHAZMK", "XLBDRZTSMKVOFCHANQIPE", "SPXDQMZORNVCBAETIFLKH", "IEPRKZFBTLDHASMCVXQON", "BQXAHPCOEMRVZDLTNFKIS", "HOEIQPDVFRSXZNMAKLTBC", "HRPFASKOMTLCXVIDZNQEB", "MAKFVDQZXBPCHTNIESLRO", "OHVXCSRKMBLFZPADQTNEI", "HSADBZFPNMXTOKVLQEIRC", "NVKZCHQSTLPXRMEDBFIAO", "ANDHPBXFLVZQMRTSOCIKE", "OKXZVDLHENFRMSPITQABC", "CMBXNOKSDFQPZIVHLAETR", "OXEPNCDSIBKZMHFVQRTAL"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 6998;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "FZHIKLMNOPQRSTVXABCDE", "LMNOPQRSTVXABCDEFZHIK", "QRSTVXABCDEFZHIKLMNOP", "XABCDEFZHIKLMNOPQRSTV", "EFZHIKLMNOPQRSTVXABCD", "KLMNOPQRSTVXABCDEFZHI", "PQRSTVXABCDEFZHIKLMNO", "VXABCDEFZHIKLMNOPQRST", "DEFZHIKLMNOPQRSTVXABC", "IKLMNOPQRSTVXABCDEFZH", "OPQRSTVXABCDEFZHIKLMN", "TVXABCDEFZHIKLMNOPQRS", "CDEFZHIKLMNOPQRSTVXAB", "HIKLMNOPQRSTVXABCDEFZ", "NOPQRSTVXABCDEFZHIKLM", "STVXABCDEFZHIKLMNOPQR", "BCDEFZHIKLMNOPQRSTVXA", "ZHIKLMNOPQRSTVXABCDEF", "MNOPQRSTVXABCDEFZHIKL", "RSTVXABCDEFZHIKLMNOPQ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 10530238;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> letterMaze = {"HHCXOXKIIBZCAXAFREELT", "VQPBDZKPRESPOINHBATOP", "HACFMEZRCFHBHSKPZHVHN", "SIBAAKLHOVOABPNXFZLAH", "ISTSDDTIMRNXONMDNAMSX", "PEDNZCCSTDXRLCPZENORT", "XBHNVLLBBNQBZCXKINLIM", "EFVIHDDDMBXLTZPICAHQP", "BBXQENELXDVNOOIZIDRLV", "EIMRTQCRXZKAOIPTQLFXV", "ALSMPAZEVQRFMTTBBADHR", "IIHXZETBPSEKTKRCBKKQM", "ACNNQSARXHCAOVLEKDTAP", "PFQQZPNECOTCIODIPDBDH", "MQPCQAXLRMQTFAVFQQXIC", "TIEXZNDIFRBHPAITTQLQD", "OSBKSBDQVMNHVAMSICALA", "QTLXABVRZKPZNNNZBPBNM", "FNKLNHAAOOIEKICIOHIEX", "ROOPFAVBHQVCEZCQIKLCK", "ZMZDTPITSXZTXQEFIKMMS"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 3506;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> letterMaze = {"ACEZILNPRTXVSQOMKHFDB", "DFHKMOQSVXTRPNLIZECAB", "EZILNPRTXVSQOMKHFDBAC", "HKMOQSVXTRPNLIZECABDF", "ILNPRTXVSQOMKHFDBACEZ", "MOQSVXTRPNLIZECABDFHK", "NPRTXVSQOMKHFDBACEZIL", "QSVXTRPNLIZECABDFHKMO", "RTXVSQOMKHFDBACEZILNP", "VXTRPNLIZECABDFHKMOQS", "XVSQOMKHFDBACEZILNPRT", "TRPNLIZECABDFHKMOQSVX", "SQOMKHFDBACEZILNPRTXV", "PNLIZECABDFHKMOQSVXTR", "OMKHFDBACEZILNPRTXVSQ", "LIZECABDFHKMOQSVXTRPN", "KHFDBACEZILNPRTXVSQOM", "ZECABDFHKMOQSVXTRPNLI", "FDBACEZILNPRTXVSQOMKH", "CABDFHKMOQSVXTRPNLIZE", "BACEZILNPRTXVSQOMKHFD"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 2195376;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> letterMaze = {"FLEHBTPKXNCMQARDOVZIS", "CITQEAXFDMSZVBRKNOHLP", "KLFOIQCXPVTBZDNSMARHE", "SHVQCNIDZALFROPTEKBMX", "OIVSRCKTNBMHPQDZEAXFL", "DXHZFTSABIQOCNLRKMEVP", "NDLBVQPSMTXIOEFKCAZHR", "RCSZVMANBFPXTILEQOKHD", "FIZNATMDVKSPQBHCLXREO", "QOSCNRPHKLAXZTFVBEMDI", "BHKLSXNFVMIPRTCQDEAZO", "LTRFZESDBCPIXAKVQONMH", "DVQZMICHBATKXOEPLRSNF", "AQZNKITRLPSCXBFDMVOEH", "KMHOCZADNPRFTVLIEBSXQ", "QMVAZNRXPTIHEKDLSBFCO", "IFBSCPEQLXMHDOZTKRANV", "VDSTLQZCNFIHOEBMPAKRX", "TDBNZCPAKOIRHMSLFQVXE", "ZFVESLKMCRIHXPQNTBDAO", "FEZCHRVBLNIMSQODTPKXA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 10162;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> letterMaze = {"ECEZILNPTXTBDFHKMOQSV", "DFHKMOQSVACEZILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQSVACEZILNPR", "ACEZILNPRTXBDFHKMOQSV", "DFHKMOQSVACEIILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQSVACEZILNPR", "ACEZILNPRTXBDFHKMOQSV", "FFHKMOQSVABEZILNPRTXB", "ZILNPRTXBDFHKMOQSVACE", "KMOQSVACEZILNPRTXBDFH", "NPRTXBDFHKMOQSVACEZIL", "QSVACEZILNPRTXBDFHKMO", "TXBDFHKMOQQVACEPZILNP"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 7682392;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> letterMaze = {"AAAAAAAAAAAAAAAAAAAAA", "BCDBCDBCDBCDBCDBCDBCD", "EFZEFZEFZEFZEFZEFZEFZ", "HIKHIKHIKHIKHIKHIKHIK", "LNMLNMLNMLNMLNMLNMLNM", "OPQOPQOPQOPQOPQOPQOPQ", "SRTSRTSRTSRTSRTSRTSRT", "VXVXVXVXVXVXVXVXVXVXV", "SRTSRTSRTSRTSRTSRTSRT", "OPQOPQOPQOPQOPQOPQOPQ", "LNMLNMLNMLNMLNMLNMLNM", "HIKHIKHIKHIKHIKHIKHIK", "EFZEFZEFZEFZEFZEFZEFZ", "BCDBCDBCDBCDBCDBCDBCD", "AAAAAAAAAAAAAAAAAAAAA", "SRTSRTSRTSRTSRTSRTSRT", "OPQOPQOPQOPQOPQOPQOPQ", "LNMLNMLNMLNMLNMLNMLNM", "HIKHIKHIKHIKHIKHIKHIK", "EFZEFZEFZEFZEFZEFZEFZ", "BCDBCDBCDBCDBCDBCDBCD"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 464088;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "XABCDEFZHIKLMNOPQRSTV", "VXABCDEFZHIKLMNOPQRST", "TVXABCDEFZHIKLMNOPQRS", "STVXABCDEFZHIKLMNOPQR", "RSTVXABCDEFZHIKLMNOPQ", "QRSTVXABCDEFZHIKLMNOP", "PQRSTVXABCDEFZHIKLMNO", "OPQRSTVXABCDEFZHIKLMN", "NOPQRSTVXABCDEFZHIKLM", "MNOPQRSTVXABCDEFZHIKL", "LMNOPQRSTVXABCDEFZHIK", "KLMNOPQRSTVXABCDEFZHI", "IKLMNOPQRSTVXABCDEFZH", "HIKLMNOPQRSTVXABCDEFZ", "ZHIKLMNOPQRSTVXABCDEF", "FZHIKLMNOPQRSTVXABCDE", "EFZHIKLMNOPQRSTVXABCD", "DEFZHIKLMNOPQRSTVXABC", "CDEFZHIKLMNOPQRSTVXAB", "BCDEFZHIKLMNOPQRSTVXA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN", "ABCDEFZHIXKLMNOPQRSTV", "HIXKLMNOPQRSTVABCDEFZ", "OPQRSTVABCDEFZHIXKLMN"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 6119782;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> letterMaze = {"ABCDEFZHIXKLMNOPQRSVT", "BCDEFZHIXKLMNOPQRSVTA", "CDEFZHIXKLMNOPQRSVTAB", "DEFZHIXKLMNOPQRSVTABC", "EFZHIXKLMNOPQRSVTABCD", "FZHIXKLMNOPQRSVTABCDE", "ZHIXKLMNOPQRSVTABCDEF", "HIXKLMNOPQRSVTABCDEFZ", "IXKLMNOPQRSVTABCDEFZH", "XKLMNOPQRSVTABCDEFZHI", "KLMNOPQRSVTABCDEFZHIX", "LMNOPQRSVTABCDEFZHIXK", "MNOPQRSVTABCDEFZHIXKL", "NOPQRSVTABCDEFZHIXKLM", "OPQRSVTABCDEFZHIXKLMN", "PQRSVTABCDEFZHIXKLMNO", "QRSVTABCDEFZHIXKLMNOP", "RSVTABCDEFZHIXKLMNOPQ", "SVTABCDEFZHIXKLMNOPQR", "VTABCDEFZHIXKLMNOPQRS", "TABCDEFZHIXKLMNOPQRSV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 243269632;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "BABCDEFZHIKLMNOPQRSTV", "CBABCDEFZHIKLMNOPQRST", "DCBABCDEFZHIKLMNOPQRS", "EDCBABCDEFZHIKLMNOPQR", "FEDCBABCDEFZHIKLMNOPQ", "ZFEDCBABCDEFZHIKLMNOP", "HZFEDCBABCDEFZHIKLMNO", "IHZFEDCBABCDEFZHIKLMN", "KIHZFEDCBABCDEFZHIKLM", "LKIHZFEDCBABCDEFZHIKL", "MLKIHZFEDCBABCDEFZHIK", "NMLKIHZFEDCBABCDEFZHI", "ONMLKIHZFEDCBABCDEFZH", "PONMLKIHZFEDCBABCDEFZ", "QPONMLKIHZFEDCBABCDEF", "RQPONMLKIHZFEDCBABCDE", "SRQPONMLKIHZFEDCBABCD", "TSRQPONMLKIHZFEDCBABC", "VTSRQPONMLKIHZFEDCBAB", "XVTSRQPONMLKIHZFEDCBA"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> letterMaze = {"BEKVILLKQLCVXEXHDQRRS", "PNKCFFOBVFADNSKBHRRQT", "NPXLXCCQSVHIIKMMBLKZM", "NSFVTLPNDKDSKMPKPHDNP", "MTACIBNTFAHBEZTPTHSHI", "NPXDAOIECXOAXOIVDDEDM", "DFQVTLFNQPBIMFHDMMDMD", "DLSLKTMMVXNEPMBCPOSHO", "FRTLSIAASBDHRMPOCCNBP", "RPEQRSFNDTQXOERXCPRER", "ATZNMZPAZIPXLIOZMCIHT", "FTXVQAOMCIKXNBIVOIEAB", "BKHPQSRADMFVKCPKQCKAM", "INLSIDCNBEMLKEFFVDZHK", "FRMSCDVMDKTOTNBAPMBRA", "NFCQIATOZERXONCRLMSSZ", "IPTHNLRPFRDIVTSSOKCRE", "CIPCCDMSTTENOMBCFQIAR", "RVMLRESRXVRFNTHOHCMEZ", "AQRBTAQDALSTBHMDDEACA", "FNTMFEORZSPBNQSLHXKTR"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1724;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> letterMaze = {"ABABABABABABABABABABA", "DCDCDCDCDCDCDCDCDCDCD", "EFEFEFEFEFEFEFEFEFEFE", "HZHZHZHZHZHZHZHZHZHZH", "IKIKIKIKIKIKIKIKIKIKI", "MLMLMLMLMLMLMLMLMLMLM", "NONONONONONONONONONON", "QPQPQPQPQPQPQPQPQPQPQ", "RSRSRSRSRSRSRSRSRSRSR", "VTVTVTVTVTVTVTVTVTVTV", "XAXAXAXAXAXAXAXAXAXAX", "CBCBCBCBCBCBCBCBCBCBC", "DEDEDEDEDEDEDEDEDEDED", "ZFZFZFZFZFZFZFZFZFZFZ", "HIHIHIHIHIHIHIHIHIHIH", "LKLKLKLKLKLKLKLKLKLKL", "MNMNMNMNMNMNMNMNMNMNM", "POPOPOPOPOPOPOPOPOPOP", "QRQRQRQRQRQRQRQRQRQRQ", "TSTSTSTSTSTSTSTSTSTST", "VXVXVXVXVXVXVXVXVXVXV"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 944396;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "XIOVSRNAVXPFOZHIOPTTK", "KSZVONFXIINIKAEFHEDST", "MKNCAEIBMIHTDHITVBLMP", "QQOLSHLXNPKLXNANXQCTE", "DSLFIRTQPEPOMDTPDPVZD", "TNSFACSCENNCNQZETFKMI", "KOXVIRQLBHZPLTBCNKPFR", "PIDSVSLNXTXKSBSKXCQBK", "MMBIIRTTZQNVHKMEAINIE", "FMEQOXZKCHBIPPAXXOPOA", "IEZSRFDLZALNVMPATDAPP", "PSIRETTRHMIEFXSNVEDMK", "SAAIHPSXHDKKXQMDEIIAE", "IPCSMDLMKDDKBEBMRVLQZ", "EXMNSMFTRZFOMBHXLAEQM", "NEVOORHAOEMAEXVCHCKNE", "FHMXIRAVKPFIIQOHALVHN", "XLVNSBIMIAANMKFXZVTBI", "FMOPDXSOSEMQTCNXLPMLA", "IHPXBPXQSCEPEPALOVFXZ"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 1202;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> letterMaze = {"ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX", "XVTSRQPONMLKIHZFEDCBA", "ABCDEFZHIKLMNOPQRSTVX"};
    AlphabetPaths* pObj = new AlphabetPaths();
    clock_t start = clock();
    long result = pObj->count(letterMaze);
    clock_t end = clock();
    delete pObj;
    long expected = 282930;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22763515&rd=14548&pm=11644
********************************************************************************
#line 5 "AlphabetPaths.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
#define sqr(x) ((x)*(x)) 
#define lowbit(x) ((x)&(-(x))) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
int cnt[(1<<21)+5],mark[(1<<21)+5],stamp; 
int n,m; 
VS a; 
VI bak; 
const string test="ABCDEFZHIKLMNOPQRSTVX"; 
map<char,int> hash; 
const int dx[]={0,1,0,-1}; 
const int dy[]={1,0,-1,0}; 
 
inline void dfs(int x,int y,int st,int last) 
{ 
  if (!last){ 
    if (mark[st]!=stamp){ 
      mark[st]=stamp; 
      bak.push_back(st); 
      cnt[st]=0; 
    } 
    ++cnt[st]; 
    return; 
  } 
  for (int k=0;k<4;++k){ 
    int tx=x+dx[k],ty=y+dy[k]; 
    if (tx>=0 && ty>=0 && tx<n && ty<m) 
      if (a[tx][ty]!='.' && !(st&(1<<hash[a[tx][ty]]))) 
        dfs(tx,ty,st|1<<hash[a[tx][ty]],last-1); 
  } 
   
} 
 
class AlphabetPaths 
{ 
        public: 
        long long count(vector <string> letterMaze) 
        { 
      for (int i=0;i<test.size();++i) 
        hash[test[i]]=i; 
      a=letterMaze; 
      n=a.size(); 
      m=a[0].size(); 
       
      memset(mark,-1,sizeof(mark)); 
      stamp=0; 
      long long ans=0; 
      for (int i=0;i<n;++i) 
        for (int j=0;j<m;++j) 
        if (a[i][j]!='.'){ 
          ++stamp; 
          bak.clear(); 
          dfs(i,j,1<<hash[a[i][j]],10); 
           
          for (int k=0;k<bak.size();++k){ 
            int x=bak[k]; 
            int y=(1<<21)-1-(x^(1<<hash[a[i][j]])); 
            if (mark[y]==stamp){ 
              ans+=(long long)cnt[x]*cnt[y]; 
            } 
          } 
        } 
      return ans; 
        } 
         
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/