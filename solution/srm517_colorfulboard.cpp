/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11538
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

class ColorfulBoard {
public:
    int theMin(vector<string> board);
};

int ColorfulBoard::theMin(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"SSS", "SRR", "SMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"BBBBBBBB", "BBBBBBBB", "BBBBBBBB", "BBBBBBBB", "BBBBBBBB"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"Ab", "bA"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"iiiii", "iwiwi"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"ffffffffff", "xfxxoofoxo", "ffffffffff", "xfxxoofoxo", "ffffffffff", "ooxxoofoxo", "xfxxoofoxo", "xfxxoxfxxo", "ffxxofffxo", "xfxxoxfxxo"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"iiwii", "iiwii"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"a"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"a", "b"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"gg"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"ffffffffffffffffffffffffffffffffffffffffffffffffff", "OoooooooCoooooWWMooaoIooorooooSooooooooooooAuooPot", "XXXXXXXXXXXXXXWXXXXaXIXXXrXXXXSXXXXXXXXXXXXAuXXPXX", "OcscssssCsusMsWWMssasIVferssssSGcTsssscossTAussPst", "WWWWWWWWWWWWWWWWWWWaWWWWWrWWWWWWWWWWWWWWWWWWuWWWWW", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUuUUUUU", "OvvvvvvvCvvvvvWWMvvavIvvvrvvvvSvvvvvvvvovvTAuvvPvt", "OcXcCmTlChuVMDWWMCFavIVferKwLNSGcTWesZcoxMTAuSsPWt", "OcvcvvvvCvuvMvWWMvvavIVfervvvvSGcTvvsvcovvTAuvvPvt", "OcqcqqqqCquqMqWWMqqaqIVferqqqqSGcTqqsqcoqqTAuqqPqt", "OcXcCmTlChuVMDWWMCkavIVferKwLNSGcTWesZcoxkTAuSsPWt", "OcocomooCouoMoWWMCoaoIVferoooNSGcTWosZcoooTAuosPot", "OctcttttCtutttWWMttatIVferttttStcTttttcottTAuttPtt", "RRRRRRRRRRRRRRRRRRRaRRRRRRRRRRRRRRRRRRRRRRRRuRRRRR", "OcdcddddCdudddWWMddadIVferddddSGcTddddcoddTAuddPdt", "OcucuuuuCuuuMuWWMCuauIVferuuuuSGcTWusucouuTAuusPut", "OFFFFFFFCFFFFFWWMFFaFIFFFrFFFFSFFFFFFFFoFFTAuFFPFt", "OeeeeeeeCeeeeeWWMeeaeIeeereeeeSeeeeeeeeeeeeAueePet", "OcZcCmTZCZuVMZWWMCZaZIVferKwLNSGcTWZsZcoxZTAuZsPZt", "aaaaaaaaaaaaaaWaaaaaaaaaaraaaaaaaaaaaaaaaaaauaaaaa", "OEEEEEEEEEEEEEWWEEEaEIEEErEEEESEEEEEEEEEEEEAuEEPEE", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "OcScSSSSCSuSSSWWMSSaSIVferSSSSSGcTSSSScoSSTAuSSPSt", "OctcCmTtCtuVMDWWMCtatIVferKwLNSGcTWesZcoxtTAuSsPWt", "OcJcJJJJCJuJMJWWMJJaJIVferJJJJSGcTWJsJcoJJTAuJsPJt", "OmmmmmmmCmmmmmWWMmmamImmmrmmmmSmmmmmmmmmmmTAummPmt", "FFFFFFFFFFFFFFFFFFFaFFFFFFFFFFFFFFFFFFFFFFFFuFFFFF", "wwwwwwwwwwwwwwWwwwwawwwwwrwwwwwwwwwwwwwwwwwwuwwwww", "OcOcOmTOCOuOMOWWMCOaOIVferOwLNSGcTWOsZcoOOTAuOsPOt", "OcYcYYYYCYuYMYWWMYYaYIVferYYYYSGcTWYsYcoYYTAuYYPYt", "OcpcppppCpupppWWMppapIVferppppSGcTppppcoppTAuppPpt", "OXXXXXXXCXXXXXWWMXXaXIXXXrXXXXSXXXXXXXXXXXTAuXXPXt", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "OceceeeeCeueMeWWMCeaeIVfereeeeSGcTWesZcoeeTAuesPet", "OFFFFFFFCFFFFFWWMFFaFIFFFrFFFFSFFFFFFFFFFFTAuFFPFt", "OcycCmTlChuVMDWWMCyayIVferKwLNSGcTWesZcoxyTAuSsPWt", "OCCCCCCCCCCCCCWWMCCaCICCCrCCCCSCCCCCCCCCCCTAuCCPCt", "JJJJJJJJJJJJJJWJJJJaJJJJJrJJJJJJJJJJJJJJJJJJuJJJJJ", "OcicCmTiCiuVMDWWMCiaiIVferKwLNSGcTWisZcoxiTAuisPit", "BBBBBBBBBBBBBBWBBBBaBBBBBrBBBBBBBBBBBBBBBBBBuBBBBB", "OcMcCmTMCMuMMMWWMCMaMIVferMwLNSGcTWMsZcoxMTAuMsPMt", "OcocCmToCouVMDWWMCoaoIVferKwLNSGcTWosZcoxoTAuosPot", "OcDcDDDDCDuDMDWWMDDaDIVferDDDDSGcTWDsDcoDDTAuDDPDt", "OcqcqqqqCquqMqWWMqqaqIVferqqqqSGcTqqsqcoqqTAuqqPqt", "OKKKKKKKCKKKKKWWKKKaKIKKKrKKKKSKKKKKKKKKKKKAuKKPKK", "OcbcbbbbCbubbbWWMbbabIVferbbbbSGcTbbsbcobbTAubbPbt", "OcbcbbbbCbubMbWWMbbabIVferbbbbSGcTbbsbcobbTAubbPbt", "OVVVVVVVCVVVVVWWMVVaVIVVVrVVVVSVVVVVVVVVVVVAuVVPVt", "OcRcCmTRCRuRMRWWMCRaRIVferRwLNSGcTWRsZcoxRTAuRsPRt", "OceceeeeCeueeeWWMeeaeIVfereeeeSGcTeeeecoeeTAueePet"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"SfbjjjxjKbctjvjjbjjYCjjtVjjLjruijtAFDjjjjJjiEajjEj", "SWWWWWWWWWWWWvWWWWWWWWWWWWWLWruWWtWWWWWWWWWWWaWWWW", "SssssssssssssssssssssssssssLsrssssssssssssssssssss", "SfbZHTxXKbctPvVJbSZYCKitVFTLOruiktAFDGfrHJyiEaKDEI", "SfbZHTxXKbctPvVJbSZYCuitVuuLuruiutAFDGurHJyiEauuEI", "SfbZHTxXKbctPvVJbSZYCBitVBBLBruiBtAFDGBrHJyiEaBBEI", "SuuuuuuuuuuuuvuuuuuuCuutuuuLuruuutuuDuuuuuuuEauuuu", "SfbSHTxXKbctPvVJbSZYCSitVSSLSruiStAFDGSrHJyiEaSSEI", "SSbSSSxSKbcSSvSSbSSYCSStVSSLSruiStAFDSSSSSSiEaSSES", "SBBBBBBBBBBBBvBBBBBBBBBtBBBLBruBBtBBBBBBBBBBBaBBBB", "SddddddddddddvdddddddddtdddLdruddtdddddddddddadddd", "SfbZHTxXKbctPvVJbSZYCKitVFTLOruiktAFDGvrHJyiEaKDEI", "SqqqqqqqqqqqqqqqqqqqqqqqqqqLqqqqqqqqqqqqqqqqqqqqqq", "SfbXHXxXKbctPvVJbSZYCXXtVXXLXruiXtAFDXXXHJXiEaXXEI", "SfbZHTxXKbctPvVJbSZYCGitVGGLOruiGtAFDGGrHJyiEaGGEI", "SwwwwwxwwwwwwvwwwwwwCwwtwwwLwruwwtwwDwwwwwwiEawwww", "SfbLLLxXKbctPvVJbLLYCLLtVLLLLruiLtAFDLLLLJLiEaLLEL", "SibiiixiKbciiviibiiYCiitViiLiruiitAFDiiiiiiiEaiiEi", "SdddddxddddddvddddddCddtdddLdruddtddDddddddiEadddd", "SfbrHrxXKbctPvVJbrrYCrrtVrrLrruirtAFDrrrrJriEarrEr", "SkkkkkkkkkkkkvkkkkkkkkktkkkLkrukktkkkkkkkkkkkakkkk", "XXXXXXXXXXXXXXXXXXXXXXXXXXXLXXXXXXXXXXXXXXXXXXXXXX", "SWWWWWWWWWWWWvWWWWWWWWWWWWWLWrWWWtWWWWWWWWWWWaWWWW", "SfbQQQxQKbctQvQQbQQYCQQtVQQLQruiQtAFDQQQQJQiEaQQEQ", "ShhhhhxhhhhhhvhhhhhhChhthhhLhruhhthhDhhhhhhiEahhEh", "SzzzzzzzzzzzzvzzzzzzzzzzzzzLzruzztzzzzzzzzzzzazzzz", "SZbZZZxZKbZZZvZZbZZZCZZtVZZLZruiZtZFDZZZZZZiEaZZEZ", "SfbZHTxXKbctPvVJbSZYCfitVffLfruiftAFDGfrHJyiEaffEI", "SFFFFFFFFFFFFFFFFFFFFFFFFFFLFrFFFFFFFFFFFFFFFFFFFF", "SfbgggxgKbctgvggbggYCggtVggLgruigtAFDggggJgiEaggEg", "SfbZHTxXKbctPvVJbSZYCKitVFTLOruiktAFDGHrHJyiEaKHEI", "SkkkkkxkkkkkkvkkkkkkCkktkkkLkrukktkkDkkkkkkiEakkEk", "SfbQHTxXKbctPvVJbSZYCQitVQQLQruiQtAFDGQrHJyiEaQQEI", "SfbzzzxzKbczzvzzbzzYCzztVzzLzruiztAFDzzzzJziEazzEz", "SfbZHTxXKbctPvVJbSZYCEitVEELOruiEtAFDGErHJyiEaEEEI", "SGGGGGGGGGGGGvGGGGGGCGGtGGGLGruGGtGGDGGGGGGiEaGGGG", "SfbfffxfKbctfvffbffYCfftVffLfruiftAFDffffJfiEaffEf", "SKKKKKxKKKKKKvKKKKKKCKKtKKKLKruKKtKKDKKKKKKiEaKKEK", "SLLLLLLLLLLLLvLLLLLLCLLtLLLLLruLLtLLDLLLLLLLEaLLLL", "SfbZHTxXKbctPvVJbSZYCbitVbTLOruibtAFDGbrHJyiEaKbEI", "SfbrrrxXKbctPvrrbrrYCrrtVrrLrruirtAFDrrrrJriEarrEr", "SfbMMMxXKbctPvMMbMMYCMMtVMMLMruiMtAFDMMMMJMiEaMMEM", "SfbtttxXKbctPvVtbttYCtttVttLtruittAFDttttJtiEattEt", "SfbQHQxXKbctPvVJbQQYCQQtVQQLQruiQtAFDQQQQJQiEaQQEQ", "SfbZHTxXKbctPvVJbSZYChitVhhLhruihtAFDGhrHJyiEahhEI", "SkkkkkxkkkkkkvkkkkkkCkktkkkLkrukktkkDkkkkkkiEakkEk", "SfbZHTxXKbctPvVJbSZYCmitVmmLOruimtAFDGmrHJyiEammEI", "SfbZHTxXKbctPvVJbSZYCKitVFTLOruiktAFDGrrHJyiEaKDEI", "SwbwwwxwKbwwwvwwbwwYCwwtVwwLwruiwtwFDwwwwwwiEawwEw", "SfbZHTxXKbctPvVJbSZYCDitVFTLOruiDtAFDGDrHJyiEaKDEI"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"zCozXrzjIqRzwCFJhCtOzpzhwjAzwYULpugRctzlJfjzkSzXkl", "rCozrrrjIqRzwCFJhCrOrprhwjArwYULpugRrtrlJfjrkSrXkl", "SCozXrSjIqRzwCFJhCtOapShwjASwYULpugRctSlJfjykSSXkl", "YCozXrQjIqRzwCFJhCtOapShwjACwYULpugRctSlJfjykSdXkl", "rCozXrrjIqRzwCFJhCtOaprhwjArwYULpugRctrlJfjykSrXkl", "bCozXrbjIqRzwCFJhCbObpbhwjAbwYULpugRctblJfjbkSbXkl", "yCozXryjIqRzwCFJhCtOapyhwjAywYULpugRctSlJfjykSyXkl", "gCoggrgjIqRzwCFghCgOgpghwjAgwYULpugRgtglJfjgkSgXkl", "TCTTTrTTTqRzwCTThCTOTpTTwTTTwTTLpTgTTtTlTfjTkTTXkl", "YCozXrQjIqRzwCFJhCtOapUhwjACwYULpugRctSlJfjykSdXkl", "SCozXrSjIqRzwCFJhCtOSpShwjASwYULpugRctSlJfjSkSSXkl", "gCgggggggggggCgggggggpggggggwgggggggggggggggkggggl", "ECEEErEEEqRzwCEEhCEOEpEEwjAEwEELpEgEEtElJfjEkEEXkl", "DDDDDDDDDDDDDCDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDkDDDDl", "VCVVVrVVVqRzwCVVhCVOVpVVwjAVwVULpVgVVtVlJfjVkVVXkl", "mCozmrmjIqRzwCFJhCmOmpmhwjAmwYULpugRmtmlJfjmkSmXkl", "RCRRRrRRRqRzwCRRhCRORpRRwRRRwRRLpRgRRtRlRfjRkRRXkl", "ZCozXrZjIqRzwCFJhCtOZpZhwjAZwYULpugRctZlJfjykSZXkl", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXkXXXXX", "VCVVVrVVVVRzwCVVhCVOVpVVVVVVwVVLVVgVVtVlVfjVkVVVkl", "ECozXrEjIqRzwCFJhCtOapEhwjAEwYULpugRctElJfjykSEXkl", "pCppprpppppzpCpphppOppppppppwppLppgpppplppppkppppl", "DCozXrDjIqRzwCFJhCtOapDhwjADwYULpugRctDlJfjykSDXkl", "iCiiiriiiqRzwCiihCiOipiiwjAiwiULpigiitilJfjikSiXkl", "BCoBBrBBBqRzwCBBhCBOBpBBwjABwYULpBgBBtBlJfjBkSBXkl", "zCzzzrzzzqRzwCzzhCzOzpzzwzzzwzzLpzgzztzlzfjzkzzzkl", "fCfffrffffRzwCffhCfOfpffffffwffLpfgfftflffjfkfffkl", "DCDDDrDDDqRzwCDDhCDODpDDwjADwDULpDgDDtDlJfjDkSDXkl", "aCaaaraaaqRzwCaahCaOapaawjAawaULpagaatalJfjakSaXkl", "PCPPPrPPPqRzwCPPhCPOPpPPwPAPwPPLpPgPPtPlJfjPkPPXkl", "HCozXrHjIqRzwCFJhCHOHpHhwjAHwYULpugRHtHlJfjHkSHXkl", "cCcccrcccccccCcchccOcpccccccwcccccccccclcccckccccl", "kCkkkrkkkkkzkCkkhkkOkpkkkkkkwkkLkkgkktklkkkkkkkkkl", "cCozXrcjIqRzwCFJhCtOapchwjAcwYULpugRctclJfjykScXkl", "YCozXrQjIqRzwCFJhCtOapThwjACwYULpugRctSlJfjykSdXkl", "pCppprpppppzpCpphppOppppppppwppLppgpptplppppkppppl", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKkKKKKK", "KCozXrKjIqRzwCFJhCtOapKhwjAKwYULpugRctKlJfjykSKXkl", "JCJJJrJJJqRzwCJJhCJOJpJJwjAJwJULpJgJJtJlJfjJkSJXkl", "sCozXrsjIqRzwCFJhCsOspshwjAswYULpugRctslJfjskSsXkl", "WCWWWrWWWWWzWCWWhWWOWpWWWWWWwWWLWWgWWtWlWWjWkWWWWl", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "VCVVVrVVVVRzVCVVhCVOVpVVVVVVwVVLVVgVVtVlVVjVkVVVkl", "KCKKKrKKKKKKKCKKhKKOKpKKKKKKwKKKKKKKKKKlKKKKkKKKKl", "YCozXrQjIqRzwCFJhCtOapthwjACwYULpugRctSlJfjykSdXkl", "OCoOOrOOOqRzwCOOhCOOOpOhwjAOwYULpugOOtOlJfjOkSOXkl", "WCWWWrWWWWRzWCWWhCWOWpWWWWWWwWWLWWgWWtWlWfjWkWWWkl", "QCQQQrQQQqRzwCQQhCQOQpQQwjAQwQULpQgQQtQlJfjQkSQXkl", "jCjjjrjjjqRzwCjjhCjOjpjjwjjjwjjLpjgjjtjljfjjkjjjkl", "qCqqqrqqqqRzwCqqhCqOqpqqwqAqwqqLpqgqqtqlJfjqkqqXkl"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"OOOOOOOOOOOOOOXgOOOOQOOOOOAOOOOOOOwOOOOOOOOOOLOOOO", "iUmZEmjXIIaiIkXgCQtZQqLlARAAXNmmvywVBQLcIlfktLBYvY", "iUmuEujXuIauukXguQtZQuuuAuAAXummvywuuQLuulfutLBuvu", "iJmJEJjXJIaJJkXgJQtZQJJJAJAAXJmmvywJJQLJJlfJJLJJJJ", "yyyyyyyyyyyyyyXgyyyyQyyyyyAyyyyyyywyyyyyyyyyyLyyyy", "iYmYYYYXYYaYYYXgYYYZQYYYYYAYYYYYYYwYYYLYYYfYYLYYYY", "iUmGEmjXGIaGGkXgGQtZQGLlARAAXNmmvywVBQLGGlfGtLBGvG", "iJJJJJJXJJaJJJXgJJJJQJJJJJAJJJJJJJwJJJJJJJfJJLJJJJ", "iVmVVVVXVVaVVVXgVVVZQVVVVVAVVVVVVVwVVVVVVVfVVLVVVV", "iUmDEmjXDIaDDkXgDQtZQDLlARAAXNmmvywVBQLDDlfDtLBDvD", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "inmnnnnXnnannnXgnntZQnnnnnAnnnnmnnwnnnLnnnfnnLnnnn", "iFmFFFFXFFaFFkXgFFtZQFFFAFAFFFFmFFwFFFLFFFfFFLFFFF", "iUmjEmjXjIajjkXgjQtZQjjlAjAAXNmmvywVBQLjjlfjtLBjvj", "iUmwEmjXwIawwkXgwQtZQwLlARAAXNmmvywVBQLwwlfwtLBwvw", "iUmqEqjXqIaqqkXgqQtZQqqqAqAAXqmmvywqBQLqqlfqtLBqvq", "BBBBBBBBBBBBBBXgBBBBBBBBBBABBBBBBBwBBBBBBBBBBLBBBB", "iUmZEmjXWIaiEkXgCQtZQqLlARAAXNmmvywVBQLcYlfktLBYvY", "iUmFEmjXFIaFFkXgFQtZQFFlAFAAXNmmvywVBQLFFlfFtLBFvF", "illllllXllalllXgllllQlllllAlllllllwlllllllfllLllll", "iUmiEijXiIaiikXgiQtZQiilAiAAXimmvywVBQLiilfitLBivi", "iAmAAAAXAAaAAkXgAAtZQAAAAAAAAAmmvAwAAALAAAfAALAAAA", "ijmjEjjXjjajjkXgjjtZQjjjAjAAjjmmvjwjjjLjjjfjjLjjjj", "iUmZEmjXoIaiokXgCQtZQqLlARAAXNmmvywVBQLcolfktLBYvY", "iemeeeeXeeaeeeXgeetZQeeeeeAeeeemeeweeeLeeefeeLeeee", "iUmYEYjXYIaYYkXgYQtZQYYYAYAAXYmmvywYBQLYYlfYtLBYvY", "iUmZEmjXKIaiKkXgCQtZQKLlARAAXNmmvywVBQLcKlfKtLBKvK", "DDDDDDDDDDDDDDDDDDDDDDDDDDADDDDDDDDDDDDDDDDDDDDDDD", "iUmgEgjXgIaggkXggQtZQgggAgAAXgmmvywgBQLgglfgtLBgvg", "ccccccccccacccXgccccQcccccAcccccccwccccccccccLcccc", "qqqqqqqXqqaqqqXgqqqqQqqqqqAqqqqqqqwqqqqqqqfqqLqqqq", "iCmCECCXCCaCCkXgCCtZQCCCACACCCmmvCwCCCLCCCfCCLCCCC", "iUmsEsjXsIasskXgsQtZQsssAsAAXsmmvywsBQLsslfstLBsvs", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "izmzzzzXzzazzkXgzztZQzzzAzAzzzzmzzwzzzLzzzfzzLzzzz", "iUmZEmjXFIaiFkXgCQtZQFLlARAAXNmmvywVBQLcFlfktLBYvY", "ikmkEkkXkkakkkXgkktZQkkkAkAkkkmmvkwkkkLkkkfkkLkkkk", "iUmZEmjXjIaiEkXgCQtZQqLlARAAXNmmvywVBQLcjlfktLBYvY", "iUmZEmjXGIaiGkXgCQtZQqLlARAAXNmmvywVBQLcGlfktLBYvY", "eeeeeeeeeeeeeeXgeeeeQeeeeeAeeeeeeeweeeeeeeeeeLeeee", "iVmVVVVXVVaVVVXgVVVVQVVVVVAVVVVVVVwVVVVVVVfVVLVVVV", "iiiiiiiiiiaiiiXgiiiiQiiiiiAiiiiiiiwiiiiiiiiiiLiiii", "iUmYEYjXYIaYYkXgYQtZQYYlAYAAXYmmvywYBQLYYlfYtLBYvY", "iUmZEmjXcIaickXgCQtZQcLlARAAXNmmvywVBQLcclfctLBcvc", "ilmlEllXllallkXglltZQlllAlAlllmmvlwlllLlllfllLllll", "iPmPEPPXPPaPPkXgPPtZQPPPAPAAPPmmvPwPPPLPPPfPPLPPPP", "izmzEzjXzIazzkXgzQtZQzzzAzAAzzmmvywzzQLzzlfzzLzzzz", "iUmZEmjXkIaiEkXgCQtZQqLlARAAXNmmvywVBQLcYlfktLBYvY", "MMMMMMMXMMaMMMXgMMMMQMMMMMAMMMMMMMwMMMMMMMMMMLMMMM", "izmzEzzXzzazzkXgzztZQzzzAzAAzzmmvzwzzzLzzzfzzLzzzz"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"UUUUUUUUUUUUUUSUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "TTUZTLTTfGTTwTSgmYETqVyyTTLlqTTOTTTTTTTTTTnoeCtTTt", "yyyZyLyyfGyyyySgmYEyqVyyyyLlqyyOyyyyyyyyyynoeCyyyt", "YOUZzLejfGAJwiSgmYEeqVyyqcLlqFTONdhWVSiieSnoeCtrJt", "BBBBBBBBBBBBBBSgBYBBBVByBBLlqBBOBBBBBBBBBBBBBCBBBB", "HHHZHHHHfHHHHHSgHYEHqVHyHHLlqHHOHHHHHHHHHHHoeCHHHH", "ddUZdLejfGddwdSgmYEdqVyyqcLlqddONdddddddeSnoeCtdJt", "FFUZFLeFfGFFwFSgmYEFqVyyqcLlqFFONdFFFFFFeFnoeCtFJt", "CCCZCLCCfGCCCCSgmYECqVCyCCLlqCCOCCCCCCCCCCnoeCCCCt", "BBUZBLBBfGBBwBSgmYEBqVByBBLlqBBOBBBBBBBBBBnoeCtBBt", "YAUZALejfGAAwASgmYEAqVyyqcLlqAAONdAAAAAAeSnoeCtrJt", "YOUZaLejfGaJwaSgmYEaqVyyqcLlqaaONdhaaaaaeSnoeCtrJt", "YOUZzLejfGlJwlSgmYElqVyyqcLlqllONdhllSlleSnoeCtrJt", "FFFZFFFFfGFFFFSgFYEFqVFyFFLlqFFOFFFFFFFFFFnoeCFFFF", "vvvvvvvvvvvvvvSgvYvvvVvyvvLvqvvOvvvvvvvvvvvvvCvvvv", "XXUZXLeXfGXXwXSgmYEXqVyyqcLlqXXOXXXXXXXXeXnoeCtXJt", "tttZttttftttttSgtYEtqVtyttLlqttOttttttttttnoeCtttt", "BBUZBLeBfGBBwBSgmYEBqVyyqcLlqBBOBBBBBBBBBBnoeCtBJt", "JJUZJLeJfGJJwJSgmYEJqVyyqcLlqJJONdJJJJJJeJnoeCtJJt", "QQQZQLQQfGQQQQSgmYEQqVQyQQLlqQQOQQQQQQQQQQnoeCQQQt", "YOUZzLejfGAJwBSgmYEeqVyyqcLlqFTONdhWVSHfeSnoeCtrJt", "YOUZzLejfGAJwfSgmYEfqVyyqcLlqffONdhffSffeSnoeCtrJt", "rrUZrLerfGrrwrSgmYErqVyyqcLlqrrOrrrrrrrrrrnoeCtrJt", "YOUZzLejfGDJwDSgmYEDqVyyqcLlqDDONdhDDSDDeSnoeCtrJt", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "YcUZcLejfGccwcSgmYEcqVyyqcLlqccONdcccccceSnoeCtrJt", "YIUZILejfGIIwISgmYEIqVyyqcLlqIIONdIIIIIIeSnoeCtrJt", "JJJZJLJJfGJJJJSgmYEJqVJyJJLlqJJOJJJJJJJJJJnoeCJJJt", "CCCZCCCCfCCCCCSgCYECqVCyCCLlqCCOCCCCCCCCCCCoeCCCCC", "YOUZzLejfGAJwESgmYEEqVyyqcLlqFTONdhWVSEEeSnoeCtrJt", "YOUZzLejfGAJwxSgmYEeqVyyqcLlqFTONdhWVSxxeSnoeCtrJt", "NNNNNNNNNNNNNNSgNNNNNVNyNNLNNNNNNNNNNNNNNNNNNNNNNN", "eeeZeLeefGeeeeSgmYEeqVeyeeLlqeeOeeeeeeeeeenoeCeeet", "aaaZaaaafaaaaaSgaYaaaVayaaLlqaaOaaaaaaaaaaaoaCaaaa", "YOUZzLejfGsJwsSgmYEsqVyyqcLlqssONdhssSsseSnoeCtrJt", "YOUZzLejfGSJwSSgmYESqVyyqcLlqSSONdhSSSSSeSnoeCtrJt", "GGGGGGGGGGGGGGSgGYGGGVGyGGLGGGGOGGGGGGGGGGGGGGGGGG", "YYYZYLYYfGYYYYSgmYEYqVYyYYLlqYYOYYYYYYYYYYnoeCYYYt", "YOUZzLejfGAJwfSgmYEfqVyyqcLlqFTONdhWVSffeSnoeCtrJt", "YOUZzLejfGAJwKSgmYEKqVyyqcLlqFTONdhWVSKKeSnoeCtrJt", "YOUZzLejfGAJwfSgmYEeqVyyqcLlqFTONdhWVSffeSnoeCtrJt", "ppUZpLepfGppwpSgmYEpqVyyqcLlqppONdppppppepnoeCtpJt", "NNUZNLNNfGNNwNSgmYENqVNyNNLlqNNONNNNNNNNNNnoeCtNNt", "KKKZKKKKfKKKKKSgKYEKqVKyKKLlqKKOKKKKKKKKKKKoeCKKKK", "YkUZkLejfGkkwkSgmYEkqVyyqcLlqkkONdkkkkkkeSnoeCtrJt", "PPPPPPPPPPPPPPSPPPPPPPPyPPLPPPPPPPPPPPPPPPPPPPPPPP", "qqqqqqqqqqqqqqSgqqqqqVqyqqLqqqqOqqqqqqqqqqqqqqqqqq", "OOOZOLOOfGOOOOSgOYEOqVOyOOLlqOOOOOOOOOOOOOnoeCOOOt", "BBBBBBBBfBBBBBSgBYBBBVByBBLlqBBOBBBBBBBBBBBBBCBBBB", "vvvvvvvvvvvvvvSgvYvvvVvyvvLvvvvOvvvvvvvvvvvvvvvvvv"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"UUuUUUkUUU", "UUUUUUkUUU", "aauaawkfaa", "aaaaaaaaaa", "UUuUrwkfDU", "PPPPPPkPPP", "BBuBBBkBBB", "fDuDrwkfDt", "ttuttwkttt", "ZZuZZZkZZZ", "BBuBBBkBBB", "ffufrwkfDt", "SSuSSwkfSS", "RRuRRRkRRR", "kkukkkkkkk", "vvuvvvkvvv", "AAuAAAkAAA", "aauaaakaaa", "ffffffkfff", "fuuurwkfDt", "aauaaakaaa", "ftutrwkfDt", "DDDDDDkDDD", "fkukrwkfDt", "PPuPrwkfDP", "fDuDrwkfDt", "ZZuZrwkfDZ", "fwuwrwkfDt", "fAuArwkfDt", "SSuSSwkfSS", "SSuSSSkSSS", "fkukrwkfDt", "kkkkkkkkkk", "DDuDDDkDDD", "vvuvvvkvvv", "kkukkkkkkk", "ffufrwkfDt", "RRuRRRkRRR", "vvuvvvkvvv", "SSuSSSkSSS", "fDuDrwkfDt", "UUuUUwkfUU", "rrurrwkrrr", "vvuvrwkfDv", "kkukkkkkkk", "fZuZrwkfDt", "fUuUrwkfDt", "DDuDDwkDDD"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"UUdaUpUoQKlUPUUUPxIUUUoUUUG", "SSdaSpwoQKlnPWtJPxIwrSopSSG", "SGdafpwoQKlnPWtJPxIwrGoposG", "MMdaMpwoQKlnPWtJPxIwrMopMMG", "eedaepwoQKlnPetJPxIeeeopeeG", "SSdaSpwoQKlnPStJPxISSSopSSG", "RRdaRpwoQKlnPWtJPxIRRRopRRG", "rrdarpwoQKlnPrrJPxIrrrorrrG", "SEdafpwoQKlnPWtJPxIwrEopEsG", "qqdaqpwoQKlnPWtJPxIqqqopqqG", "SpdafpwoQKlnPWtJPxIwrLoposG", "pppppppppKlpppppPpppppppppp", "SpdafpwoQKlnPWtJPxIwrXoposG", "SpdafpwoQKlnPWtJPxIwrXoposG", "OOOOOOOOOKOOOOOOPOOOOOOOOOO", "xxdaxpwoQKlnPxxxPxIxxxoxxxG", "SpdafpwoQKlnPWtJPxIwrXoposG", "rrdarproQKlrPrrrPxIrrrorrrG", "SpdafpwoQKlnPWtJPxIwrhoposG", "ggdagpwoQKlnPWtJPxIgrgopggG", "sssasssosKlsPsssPxIsssossss", "SpdafpwoQKlnPWtJPxIwrIoposG", "SpdafpwoQKlnPWtJPxIwrxoposG", "SpdafpwoQKlnPWtJPxIwrXoposG", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAdaApAoQKlAPAAAPxIAAAoAAAG", "WWWWWWWWWKlWWWWWPWWWWWWWWWW", "eedaepeoQKlnPeeePxIeeeoeeeG", "SpdafpwoQKlnPWtJPxIwrXoposG"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"pRFwJJpJWDWWFFJwR", "pJJwJJJJWJJJFJJJJ", "pRFwFFpFWDWWFFJwR", "pRJwJJpJWJJWFJJwR", "pRFwppppWDWWFFJwR", "pRRwRRpRWRRWFRJwR", "ggggggggWgggggggg", "wwwwwwwwWwwwwwwww", "pWWwWWWWWWWWWWWWW", "pRFwggpgWDWWFFJwR"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"mmmmmmmmmmammmmUm", "AAUAAAAAIqaYAOAUW", "YYYYYYYYYYaYYYYUY", "wwUwwwwwwwawwwwUw", "YYUYYYYYIqaYYOYUW", "bbbbbbbbbbbbbbbbb", "UUUUUUUUIqaYUOUUU", "llUlllllIqaYlOlUW", "AAUAAAAAIqaYAOAUA", "llllllllllallllUl"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"hhhhhhhThhhhNhhhhAhhehphhFhkhhhhhhhh", "VVVVVVnTVVVVNVVVVAVVeVpVVFVkVVVVVVVV", "WWWWWWWTWWWWWWWWWWWWeWpWWWWkWWWWWWWW", "tttttttTtttttttttttttttttttktttttttt", "FFFFFFFTFFFFNFFFFAFFeFpFFFFkFFFFFFFF", "ppVppenTppppNppppAppeppppFOkpppppppp", "WWWWWWWTWWWWNWWWWAWWeWpWWFWkWWWWWWWW", "ssVsssnTssssNssssAssespssFskssssssss", "OOVOOOnTOOOONOOOOAOOeOpOOFOkOOOOOOOO", "TTTTTTTTTTTTTTTTTTTTTTTTTTTkTTTTTTTT", "nnVnnnnTnnnnNnnnnAnnenpnnFnknnnnnnnn", "TTTTTTTTTTTTNTTTTATTeTpTTTTkTTTTTTTT", "pppppppTppppNppppAppeppppppkpppppppp", "hhhhhhhThhhhhhhhhhhhhhhhhhhkhhhhhhhh", "LLVLLenTLLLLNLLLLALLeLpLLFOkLLLLLLLL", "gggggggTggggggggggggeggggggkgggggggg", "NNNNNNNTNNNNNNNNNNNNNNNNNNNkNNNNNNNN", "kkVkkknTkkkkNkkkkAkkekpkkFkkkkkkkkkk", "DDDDDDnTDDDDNDDDDADDeDpDDFDkDDDDDDDD", "QQVQQQnTQQQQNQQQQAQQeQpQQFQkQQQQQQQQ", "VVVVVVVTVVVVVVVVVVVVeVpVVVVkVVVVVVVV", "NNVNNenTNNNNNNNNNANNeNpNNFOkNNNNNNNN", "eeVeeenTeeeeNeeeeAeeeepeeFOkeeeeeeee", "eeeeeeeTeeeeeeeeeeeeeeeeeeekeeeeeeee", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "bbbbbbbTbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "FFFFFFFTFFFFFFFFFFFFFFFFFFFkFFFFFFFF", "kkkkkkkTkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "TTVTTTnTTTTTNTTTTATTeTpTTFTkTTTTTTTT", "ccVcccnTccccNccccAccecpccFOkcccccccc", "iiViienTiiiiNiiiiAiieipiiFOkiiiiiiii", "AAVAAenTAAAANAAAAAAAeApAAFOkAAAAAAAA", "VVVVVVVTVVVVVVVVVVVVeVVVVVVkVVVVVVVV", "FFFFFFFTFFFFNFFFFAFFeFpFFFFkFFFFFFFF", "SSVSSSnTSSSSNSSSSASSeSpSSFSkSSSSSSSS", "eeeeeeeTeeeeeeeeeeeeeeeeeeeeeeeeeeee", "hhVhhenThhhhNhhhhAhhehphhFOkhhhhhhhh", "CCCCCCCTCCCCCCCCCCCCeCpCCCCkCCCCCCCC", "tttttttTttttttttttttetpttttktttttttt", "ggggggnTggggNggggAggegpggFgkgggggggg", "JJVJJJnTJJJJNJJJJAJJeJpJJFJkJJJJJJJJ", "ccVccenTccccNccccAccecpccFOkcccccccc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"CFXMEEUXAicsmmgSasQmkc", "CFXMEEUXAicsiNgSasQCkc", "FFFFEFUFFFFsFFFSFsQFkc", "CFXMEEUXAicsQNgSasQCkc", "CFXgEgUXgicsgggSasQgkc", "AAAAAAAAAAAAAAAAAsQAAA", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CnnnEnUnnnnsnnnSnsQnkc", "QQQQQQQQQQQQQQQQQsQQQQ", "cccccccccccscccccsQccc", "CFXMEEUXAicsQNgSasQCkc", "CSSSESUSSiSsSSSSasQSkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsENgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "qqqqEqUqqqqsqqqSqsQqkc", "CFXMEEUXAicsQNgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "XXXXXXUXXXXsXXXXXsQXXc", "CFTTETUXTicsTTTSasQTkc", "CFXMEEUXAicsQNgSasQCkc", "CFMMEMUMMicsMMMSasQMkc", "ssssssssssssssssssQsss", "CFXMEEUXAicsQNgSasQCkc", "TTTTTTTTTTTTTTTTTsQTTT", "CFXMEEUXAicsQNgSasQCkc", "CnnnEnUnninsnnnSasQnkc", "CFXMEEUXAicsENgSasQCkc", "CFXMEEUXAicsQNgSasQCkc", "CXXXEXUXXXXsXXXSasQXkc", "CFXMEjUXAicsjjgSasQjkc", "MMMMMMMMMMMMMMMMMsQMMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"GMPNGxNLqLLGJqNJGxPJGJPPJNJJqNPqx", "GJJNJJJJJJJJJJNJJxJJJJJJJNJJJJJJJ", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMPNGxNLqLLbJbNJGxPbGbbbJNJbqbbqb", "GMPNGxNLqLLMJMNJGxPMGMMMJNJMqMMqM", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMqNqxqqqLqqJqNqqxqqqqqqJNqqqqqqq", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMQNGxNLqLLQJQNJQxPQQQQQJNJQqQQqQ", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "GxxNxxxxxxxxJxNxxxxxxxxxxNxxxxxxx", "GMPNGxNLqLLGJqNJGxPbGJPPJNJxqNPqx", "qqqNqqqqqqqqqqNqqqqqqqqqqNqqqqqqq", "GMPNGxNLqLLxJxNJGxPxGxPPJNJxqxxqx"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"TTjKSTTTTTTTfTTTTTITTTTTTTTTTTTTTISTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTITTTTTTTTT", "jjjKSjjjjjjjfjjjjjjjjjjjjjjjjjjjjISjjjjjjjj", "WjjKSWWWWWWWfTfWWTIWWWWWWWWWWWWWWISWWWWWWWW", "nnnKSnnnnnnnfnnnnTnnnnnnnnnnnnnnnISnnnnnnnn", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTITTTTTTTTT", "jjjKSjjjjjjjfjjjjTjjjjjjjjjjjjjjjISjjjjjjjj", "XXXKSXXXXXXXfXXXXTXXXXXXXXXXXXXXXISXXXXXXXX", "XXXKSXXXXXXXfXXXXTXXXXXXXXXXXXXXXISXXXXXXXX", "uuuKSuuuuuuufuuuuuuuuuuuuuuuuuuuuISuuuuuuuu", "ffjKSffffffffTfffTIffffffffffffffISffffffff", "XXXKSXXXXXXXfXXXXXXXXXXXXXXXXXXXXISXXXXXXXX", "XXXKSXXXXXXXfXXXXTXXXXXXXXXXXXXXXISXXXXXXXX", "WWWWWWWWWWWWfWWWWWWWWWWWWWWWWWWWWIWWWWWWWWW", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTITTTTTTTTT", "KKjKSKKKKKKKfKKKKTIKKKKKKKKKKKKKKISKKKKKKKK", "uuuKSuuuuuuufuuuuTuuuuuuuuuuuuuuuISuuuuuuuu", "IIIKSIIIIIIIfIIIITIIIIIIIIIIIIIIIISIIIIIIII", "IIjKSIIIIIIIfTIIITIIIIIIIIIIIIIIIISIIIIIIII", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSISSSSSSSSS", "WWWWWWWWWWWWfWWWWWWWWWWWWWWWWWWWWIWWWWWWWWW", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjIjjjjjjjjj", "WWWKWWWWWWWWfWWWWWWWWWWWWWWWWWWWWISWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWIWWWWWWWWW", "IjjKSIIIIIIIfTfIITIIIIIIIIIIIIIIIISIIIIIIII", "KjjKSKKKKKKKfTfKKTIKKKKKKKKKKKKKKISKKKKKKKK", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSISSSSSSSSS", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKIKKKKKKKKK", "KKjKSKKKKKKKfKKKKTKKKKKKKKKKKKKKKISKKKKKKKK", "WWWKSWWWWWWWfWWWWTWWWWWWWWWWWWWWWISWWWWWWWW", "TTTTTTTTTTTTfTTTTTTTTTTTTTTTTTTTTITTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTITTTTTTTTT", "WWjKSWWWWWWWfWWWWTIWWWWWWWWWWWWWWISWWWWWWWW", "XXXKSXXXXXXXfXXXXTXXXXXXXXXXXXXXXISXXXXXXXX", "TTTKSTTTTTTTfTTTTTTTTTTTTTTTTTTTTISTTTTTTTT", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXIXXXXXXXXX", "fffKSffffffffffffTfffffffffffffffISffffffff", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjIjjjjjjjjj", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnInnnnnnnnn"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "C", "X", "X", "X", "a", "X", "X", "C", "X", "X", "X", "X", "X", "X", "H", "X", "X", "X", "X", "X", "X", "X", "X", "n", "X"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"RKwuSItVRIf", "RKwuSItVRIf", "RKwuSItVRIf", "RKwuSItVRIf", "QQQQQIQQQQQ", "RKwuSItVRIf", "RKwuSItVRIf", "RKwuSItVRIf", "ZKZuSItZZIZ", "RKwuSItVRIf", "fKffSItffff", "RKwuSItVRIf", "RKwuSItVRIf", "RKwuSItVRIf", "TTTTTItTTTT", "RKwuSItVRIf", "uKuuSItuuIu", "ZKZuSItZZIZ", "RKwuSItVRIf", "RKwuSItVRIf", "tKttSIttttt", "RKwuSItVRIf", "RKwuSItVRIf", "RKwuSItVRIf", "xxxxxIxxxxx", "RKwuSItVRIf", "SSSSSISSSSS", "tttttIttttt", "RKwuSItVRIf", "RKwuSItVRIf", "QKQQSItQQIQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tSSSSSSSSSSSSSSSSSSSSSSSSSSSDSSSSSSSSSDSStSSS", "ttttSSttDtStSSSDtDDtttDttDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "ttttttttttttttttttttttttttttttttttStttttttttt", "tttttSttDtSttSSDttDttttttDtSDtDttSSttDDSttttD", "tttSSSttDDStSSSDtDDtttDttDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "tDtSSSDtDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDDSSSDtDDSDSSSDtDDtDtDDDDDSDtDttSSDtDDStttDD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDDDDSDDDDSDDSDDDDDDDDDDDDDSDtDDDSSDDDDStttDD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "tDtSSSStDDStSSSDtDDtttDDDDDSDtDttSSttDDSttttD", "ttttttttttSttttttttttttttttSDtttttStttDSttttt"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"DLnLLnLLnDDnLnLDnDDL", "DnnLLnnLnnDnLnLnnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DnnLnnnLnnDnnnnnnnDn", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnnDnLnLDnDDL", "DLnLLnLLnnDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DnnLLnnLnnDnLnLnnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLDLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "nnnLnnnLnnnnnnnnnnDn", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLDLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLLLLnLDLLLLLLLDL", "DLnLLnLLnDDnLnLDnDDL", "DnnLLnnLnnDnLnLnnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DLnLLnLLnDDnLnLDnDDL", "DDnLLDDLnDDnLnLDnDDL"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "kkgkkkpkgkkgkkgpkgykgkypkkygp", "ppgyypppgkkggkgppgygggypygygp", "ppgpppppgkkgppgppgypgpypppygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "gpgyypppgkkggkgpggygggypggygp", "ggggggggggggggggggygggypggggp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "yygyypppgkkggkgpygyyggypyyygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "ppppppppppppppgpppppppypppppp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "yygyyypygykgyygyygyygyypyyygp", "ppgyypppgkkggkgppgygggypygygp", "kkkkkkkkkkkkkkgkkgkkgkypkkkgk", "ppgyypppgkkggkgppgygggypygygp", "kkgkkkpkgkkgkkgpkgykgkypkkygp", "ppgyypppgkkggkgppgygggypygygp", "ppgyypppgkkggkgppgygggypygygp", "yygyyyppgkkgyygpygyygyypyyygp", "ggggggpggkkggggpggygggypggygp", "ggggggggggggggggggggggypggggg", "ppgpppppgkkgppgppgypgpypppygp"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"xxxxx"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"UUUUUU", "TTUTTU", "TTUTTU", "TTTTTT", "UUUUUU", "TTUTTU", "UUUUUU", "TTUTTU", "TTUTTU", "UUUUUU", "UTUUTU", "TTUTTU", "TTUTTU"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"iCCCCfCCCCCCCfCCCiCfiiCCfCCff", "fffffffffffffffffffffffffffff", "ffCCCffffCfffffCCifffffffffff", "ifCCCffiCCiiCfCCCiffiifCffiff", "ifCCCfffCCffCffCCiffiifCfffff", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "ifCCCfffCCffCffCCiffiifCfffff", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "iiCCCiiiiCiiiiiCCiiiiiiifiifi", "fffffffffCfffffCCifffffffffff", "iiiiiiiiiCiiiiiiiiiiiiiiiiiii", "CCCCCCCCCCCCCCCCCiCCCCCCfCCfC", "ffCCCffffCfffffCCifffffffffff", "ifCCCffiCCiiCfCCCiffiifCffiff", "iCCCCfCCCCCCCfCCCiCfiiCCfCCff", "iiiiiiiiiCiiiiiiiiiiiiiiiiiii", "ifCCCfffCCffCffCCiffiifCfffff", "iiCCCfiiiCiiiiiCCiiiiiiifiiff", "iiCCCfiiiCiiiiiCCiiiiiiifiiff", "fffffffffCfffffCCifffffffffff", "CCCCCCCCCCCCCCCCCiCCCCCCfCCfC", "ifCCCfffCCffCfCCCiffiifCfffff", "ifCCCfiiCCiiCfCCCiifiiiCfiiff", "iCCCCfCCCCCCCfCCCiCfiiCCfCiff", "iiCiiiiiiCiiiiiCCiiiiiiiiiifi", "iiCCCfiiCCiiCfiCCiifiiiCfiiff", "iiCCCfiiCCiiCfiCCiifiiiCfiiff", "iiCCCfiiCCiiCfiCCiifiiiCfiiff", "CCCCCfCCCCCCCCCCCiCCCCCCfCCff", "ifCCCfffCCffCffCCiffiifCfffff", "ffCCCffffCffCffCCiffiffffffff", "CCCCCfCCCCCCCCCCCiCCCCCCfCCff", "iCCCCfCCCCCCCfCCCiCfiiCCfCCff", "ifCCCffiCCiiCfCCCiifiiiCfiiff", "iiiiiiiiiCiiiiiiiiiiiiiiiiifi", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "fffffffffCfffffffffffffffffff", "iCCCCfCCCCCCCfCCCiCfiiCCfCCff", "iiCCCfiiCCiiCfiCCiifiiiCfiiff", "ffCCCffffCfffffCCiffiffffffff"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"y", "y", "T", "y", "y", "y", "y", "y", "y", "y", "y", "y"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"SSSSSSSSSSSSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "SSSPSSSSSSPSSPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "SSSPSSSSSSPSSPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "PPPPPPSPPSPPPPPPPPSPPPSPPSPPPSPPPSPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "SSSPSSSSSSPSSSSPSSSSSSSSPSSSPSSSSSSSSSSSSS", "SSSPSSSSSSPSSPSPSSSSSSSSPSSSPSSSSSSSSSSSSS", "PPPPPPPPPSPPPPPPPPPPPPSPPPPPPSPPPSPPPPPPPP", "SPPPPPSSPSPSPPSPPPSPSPSPPSSSPSPSPSPSPPSPPP", "SSSSSSSSSSPSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "SSPPSSSSSSPSPPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "SSSPSSSSSSPSSPSPSSSSSSSSPSSSPSSSSSSSSSSSSS", "PPPPPPSPPSPPPPPPPPSPPPSPPSSPPSPSPSPPPPPPPP", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSPSSSSSSSSSSSSS", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "SPPPPPSSPSPSPPPPPPSPPPSPPSSSPSPSPSPSPPSPPP", "PPPPPPPPPSPPPPPPPPPPPPSPPPPPPSPPPSPPPPPPPP", "SSPPSSSSSSPSPPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "PPPPPPPPPSPPPPPPPPSPPPSPPSPPPSPPPSPPPPPPPP", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "SSSPSSSSSSPSSPSPSSSSSSSSPSSSPSSSSSSSSSSSSS", "SPPPPPSSPSPSPPSPPPSPPPSPPSSSPSPSPSPSPPSPPP", "SPPPPPSSPSPSPPSPPPSPPPSPPSSSPSPSPSPSPPSPPP", "SPPPPPSSPSPSPPSPPPSPSPSPPSSSPSPSPSPSPPSPPP", "SSPPSSSSSSPSPPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "SSSPSSSSSSPSSPSPSSSSSSSSPSSSPSSSSSSSSSSSSS", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "SSSPSSSSSSPSSPSPSSSSSPSSPSSSPSSSSSSSSPSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "SPPPPPSSPSPSPPSPPPSPPPSPPSSSPSPSPSPSPPSPPP", "SSSSSSSSSSSSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "SPPPPPSSPSPSPPSPPPSPSPSPPSSSPSPSPSPSPPSPPP", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSPSSSSSSSSSSSSS", "SPPPPPSSPSPSPPSPPPSPPPSPPSSSPSPSPSPSPPSPPP", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "PPPPPPPPPSPPPPPPPPPPPPPPPPPPPSPPPPPPPPPPPP", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSPSSSSSSSSSSSSS", "SSSSSSSSSSPSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "SPPPPPSPPSPSPPPPPPSPPPSPPSSSPSPSPSPSPPPPPP", "PPPPPPSPPSPPPPPPPPSPPPSPPSPPPSPPPSPPPPPPPP", "SSSSSSSSSSSSSSSSSSSSSSSSPSSSPSSSSSSSSSSSSS", "PPPPPPPPPSPPPPPPPPPPPPSPPPPPPSPPPPPPPPPPPP"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"ViVVViNV", "iiViViNi", "iiViViNV", "JJVJJJJJ", "JJVJViNV", "ViVVViNV", "ViVVViNV", "ViVVViNV"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"lillpip", "liiiiii", "lilypip", "yiyyyyy", "liiiiii", "lilyyiy", "lllllll", "lillpip", "lilipip", "lilypip", "lillpip", "lilppip", "lillpip", "liyyyyy", "lilppip", "lllllll", "lippppp", "lillpip", "lillpil", "lilypip", "lippppp", "lillpip", "lippppp", "liiiiii", "lippppp", "lillpip", "lilypip", "lilypip", "yyyyyyy", "liiiiii", "liyyyiy", "lilypip", "lillpip", "lipppip", "lillpip", "lippppp", "ppppppp", "lilllll", "iiiiiii", "iiiiiii"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"uvBAZaaynJulkRkrFTMiOPRBtCJyuxFoXZyZPWZYtDgReXkIjX", "UxvcvZGkOzSTbedrMdXnqSXOtUYaAssDXmpHrPBwoWXxuEbMaG", "KglXbQmedZyTYmyZbGExYsXBIyZgDoYlapHnjuhDXkRfkjpLag", "QFaGldCHmvBNWzOnTyHiSrHzbjjubaiAEnsxaMOJwDGqiSxkuf", "QrgHBFINSUwmwFVVqVUKwUnqLuJnudSnjmnjAzzILYuGDVxVNF", "uSBwUOVZYNNnsQwtfHXHsEYKCAjzCRvQdSebltqTifrZffdRXM", "jPLdHeVLgpGYepCSzqQgYEsyaxjhQOvVtLBxHaJQdHXVtESeYW", "DgMVuAOyxuuEiZOardTzYwSHGIaazaMAAfvfUPsvXktLJKOIfm", "nPlHqHHpkEPlSegEqrpolScfdwUjyxySGYhhHBrfXHhcJIOtyV", "tbwFGtOxbZzNZCokWaSbLTzZDcOjJdykKLZTYIrDYtCJNczjDi", "PprAjYcCNVrXDCMePHTFXmjwPmgWMBFhKtkmYyBMATZKYlElEc", "XjPvYBOrKBdqsuAgmldsmppafeBsmnCgVUMYRVASrTyvoLfTqw", "qoeCzmZNoFJAamrLIvynTeZuuVHKxbpIfQSTBywSFNOVNPclIO", "ElSkRRnBHLzLJlwqgoVFoXujdaDZxpSpqEBFLSqkLeaJufDWEl", "ePLpXGlThEXWpYbnPeLwpQkiewPIiZYCFzfjLrCGYOgLlCYlkK", "pcVBkMkrOHPWJdwUNSlCCGxmqvEbbrfBGeeAVFdlYNpmpJzOMK", "JNuQOgCXtPYIgPXLAtlQDCWDmNDZiIIFnhobXmfftTqYUDhpGJ", "FuXKdIlvNcAAhCCDAOswEwlCoFoZxBVVgddlgtiFGzGssciBxb", "ymgILfnLmDwMWgEWIwknMVZCdnHErgcFmqlZGMTJaQkCjazWDD", "XFiBTIefnuFiIsnywFsfxyMMYIQNcncVkrRlxkPCZByCNOFpqs", "pTTPxnRCAEApSfAhiQKDkabktESKAZnQEYFUHRwljkEnNsNKqY", "BwzzfkQSOFSQfkYyVLOIpreVlcLZYeVkOmXUOZaLtdyHCUMjIZ", "jcUuygahcDupAbBKCTxQdMspQgJlrLVpZySkpjptTVERcrJcKw", "pULRPMFJwDTitgkIPVeaBxBDqfgejGglKKHXsDdiszdEmSFZZs", "BvhyGQTXXMEAOmlHvGRnjyWDUjwexpsWKTzNZmPpPfJCUsTvKS", "yuKYzBwIWOputVHTNFEBynvCeHsnLCwUTTVGPxFCMOUNKUTRwa", "sBLLxCfaqjVqLLbpCwyKPQNKhazhNbtHJipIffvNVXqUZGZakr", "oabamDCUltuFHrjmGmWBZbjAYVEsJknHkFDAWUcPKYYLPizYLa", "efEEaHuOfOuNecdwJtCuDVHbrtVLZfHRQbfurERmLrmcxUxeKG", "igoNWsqnwUKRlyatSIpzjCAzhDsIQqobgcyWNDiYKrolQQVIXp", "rqHiTguTBIdcIXKLSVUDCFPXvJMAZNglQSAKDRxZbruRWSCnxH", "OgPNdtGxwPHjtqSIkWUtRLJsUGuMLTfiVEZebiywfrtxThAzPm", "bgRPRRHxLFFLPbXEORzWAwGwGBNVIJCnLJWntaAQSbOYNMJxBL", "LcWwwnSvRzVfNkViHhcFqmJTnnttRoPEaneEzpPvQWjbXFLjeZ", "TdCJgqarxaStIyBXUSvzgPnrMmWcbRzQoTypcsyBWKunKGcUgL", "HkarOfBmQWECTpxLShrzfZTrrwybekslxeywdchuwGfhoNwuRZ", "HdysrepsgXJfqTDKGZWiCnucAozsuddPmzFUCLIPQxzoHlbvko", "DGwdfkSrNDDrvkqdCLlkmpByEpvAjTXGLvcODPgtGzdljvCggP", "pUUAxWHBYGiKaPHckKrgmdDNlkiaNUqTjiyPRmbLvWHgdUVYdk", "GfjhTgGcOmXkqdRiPmtNJgkQtMjXfNilVzgTJITKTqAlAYEYGm", "xkujmOKtUUmqHFiznEQgoTuoQwBBepZxVZTStmnapYvJFkhhMG", "ONipkKithbjeMFlLdCiNscsjfAltNTeYepUMkZlBfjTAvhAyLa", "iXUdacMolSPgFscCHkepjRHRlvtjSNBkkUngBJrSmivPxOMHhF", "iSyLVmDwozIASVpWHWEhyUAlEREpSPjTTOxEqEcAtKDPyQbTMK", "TqiowUwfbEsaoGLEokosUtAbdtZDLFjPFSwcjyIOasEsJUqzHO", "RZBcIbynHvnfgIlFYiswCuBzTtLcEbTEYvozVlnyWKtERClpPG", "ZlrOdYJzTRMQOeyWNCcEvcVDwdtoQjEsdMJaXcAqHizPjAuWkM", "HKYSSZhqydZFqusSemvkkfsggQqiJodkSJkflBQHXRKMahhQOU", "GHadHvlTYgynZTFrACELVSrIwiSbKxSoICvKtaulxgOQRdETkB", "ZRNlHJRVAepVuXVFCLuMfcZnaXNJndrkjNvRulgVUsZUMMVQDR"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"SReLCbBGIkcwfyRgdXHVuqUXwTZPrEaXZhKOOzoebuHfiHosVt", "BpgsyKNRdZMrQqCzxdWHTQwnkjblDlxvcPGjJlOJSgODLkWhCB", "vqJzxEBzbThwPUvQOaQPTWupgIDFgwHRxThzTjOdDkKzJxBeED", "JakatLrSsOMqbWzfbvICWqRdKIuaBoHVnqUArKYFJLewstKqGx", "nowiQxdWXOfEofpKGfapmueOKtYAYlfGqpkSxozTUZZeSvxgbB", "vvfBhvwTlDmzkdSsZrfvxofuoCrhBmzaZGodiEFUpQNhMuJaTt", "LiEdjxvwyQSFwXHKOvNnIKLiBcerYjDMqtzKqgpQvzaUNwwkOO", "DNjrNyVbtbTCsohJnRreHoaAUMrKsMBsSaICkToQGtAWIWfQKy", "TyXmmxxsDPBbEXzkmbZiwnJjwouCDuajVLrpUKNYweGjcggauD", "koytxxmlaxpopMiWCHYukIPAGPzzItxzGFdDnwuhbrZgmlSqjN", "wIgLLhLwiabkabNrlVaOivWlRRhrKlXqwwMXghnqBTTWKuWQSf", "FXkXkPkyceTfOGuOjodsVvusxDavVyzPuPdFmhSBBFpozzzTjO", "grHaQymgotNRfaAnEkbCGXZUoRdQMOnQnBFhyFQzqcCbYoBoSO", "xTEVDKSorzXrRtKmZhSLOdUcTQvgehyLDHRusPxMimsAiFeAkL", "BtpSujyWvamkfBSElxHUEbAIStagmICgayhrZaUFStlVVDmzQW", "oJnEgAWeRVueTeryWXNSWmsCRRsAhPuCrhaPDcRynnnCzSogyx", "psWuUdLpmTNEagSmbgtgviHdQfSJuuTtFsobKpYaNjVBSIdsxr", "LdALdjHCjIxzmAxfScmbvnyOIRSDfCLbscVpQyvuAOhHFYiFkE", "rfKtItsmJLoCUfirvIJFufbfFWitWFWYrudMVUVtvndMndZuAV", "WiBXWtIXJbCqLLluVsAAtznVlwCooQojBTTISRNBZnaXILJPfe", "MZkcILislFVDVIWdwZMyaoONmGtNNPkpLfkSTprMxujFrqvifQ", "DDmfHBOKbzdJofmpoTUyNGUbFhECCsnopCahpWyxTNzzoffOkI", "sGnzdNUWsGSOTnWzzBNlgHFtOBpSlzkVWzgJAoCgnrgLarWnjI", "qBmYrtbEqhfqbyiMnsHBQrpQtgVzJHLJMoKELIcIGdwyBhdpjG", "JqvjSGiIlAPuIGSRoLcCYpYNnpcpcdeoTwgQEjvaOUeKSzWIKL", "DaUJDJauitdAmTRgyGibyhWmyPrprrWyLmtGWjnOMjUYAwQYpb", "iecdlFTVRdjhuPsujfSKcwlNOqpbARCnxeZQUaIPNNQdSmkiqW", "TYTEUtNdDDhnSoWvoMMIzxpHYBmXTiEzcuLLxESKZIAximncLV", "UAgelydYjXDeLexSRnqOUoAnHEjIgTXHvtPCoySmpAitIWVhVi", "gvsNFfkWGFWQBtkAuuHSMuQsUqjZLDStOIPEgcnfRXsUVYoZcz", "hVldDcomSALApqezANUtkccsfUOjYqQkkAaIFSmJhMTfKhnLCw", "abXaCGpMuzllxddAGFlOyOERLBYaAyRLWqTULlRyvgrSRQfBzU", "KLUYvocWvBfwOhzTLirnIWareLUCEcUhfZoUwiqTCqNxemtqtY", "JFzJgfdeLDpfelnzsSOVHDLAmAhgInUJCrsRswAyHexqlBrcQC", "kzFutpOcIHUDRMKFwpvSpROYAFNhTRqTPxepTzynWKXcmKAxDK", "kSScHOrNjaqYNlybGCLhlNUghazSKETcZyZUKyIzNswSoIgkWO", "EVGOtxVKdvqlMNHkpvPbnxipshUHBBEmdPKYjvVlhzDHEMtsgq", "rEhalVlWRAEaUYnqMhdeThidGAdfmsZwytYCYQWHHxbchAamjf", "lfgwlrLzGhitVdBiyMkgqguCAUpyXbLTyCTDGHehKWkBlPrglP", "ErWjHOftAPnIMckClxfFtQYhzzNHaYuQyAiNWcMpCfbrOtfiDD", "aujQRQCGRRAQtYbduVydPZhmspuvLwjOOhJjhxmdJzVqadcrtN", "wDgAIHAmJxedlIACAgCmFKiImNZVZGkvWUNlIEjZBQbRrksZCt", "lcbdhTpqkOZoebhRiiPALYDUwOIwRbWHHrDgHeZGVyQiZebgnS", "spXCvQzLaHpBvGwOAumLtklAtJLOafBnqgUCRzhNogYNdCYGUW", "atHvVKwGjowJsrOQZTrhbGENekwUQEkNfsqBdiXohJrqyfdcxh", "fRqqfaFhgTJAjVeltKZqvGQmBWBIldUWKgmXgbKUJdRTpEdOeM", "MBfzqJSWHhNymTGXJtuEYgUaXAAeVaBUceZsFoCxBLwyxoRKVv", "LsfPPeTYVzlzYOGgpjSBYLmcyCbTbJjXMlSaMfFoxUOmNNSvLw", "DgFciXTwhvhFXBBDLpPUHKDdWYEPzGWsVHatuuPirABYYJPMzZ", "iKiEGzVgRjUANSrIgOBXTaBOSCwPUdLnzcovuODIKWxwGPumkG"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"RhnYtsySvzgNBblosCDfQHLWgVtPYqUjCkzJlfjCeLrIJtYIZt", "KGNRXvfHPuMcjoHfYAajhPiYwNXcYAoPwSqSzbuAUHYDVRZAhp", "tmpMzwInWQJmFcANKLVoElBCuCNpuxYetVVKUSdRdeUHaowsBv", "oBFVBDRfSZBlqeBFrvAKGGmLEdYeWjwWEzOGDUEwgnJPjPTzTM", "yekkAKVGjaDEHTtWMFBkwkYzDXHEpbOkbZqRuXdDLVQFyItMRI", "MBiGTgwldgVYgjfLyuVoUOrbPGIIgJZHErZjMPFurnPhlJHsUM", "eWHueMIsrZzjPrRBCiUXQomurdQqBbPgsFxEHETWyvqkJiGVla", "oqWUNxXiVOGBasvXanmXwIphXFtkbftSkSmqoJPjZYFaCgsZGU", "qfCfPRmSEiBnMYFvcgPbfDCPIKuZzcHolWFLUspfMzstSSEzgP", "djEFYihDOiypkbPlScBApjQedkxIDTgktBjkxgLkZsdXfcVcMa", "iGFMnPrEHscnRWygkbXvnUptVLoPoYZxkpakrQdEegHVfkKlxo", "hwrUzIeDZPEXppauoVvAhOpmAqXKNucVnppqNjpbUiWsPcbwGK", "AMdTMmFlfPAjifgzHtWoPzdWAobaOartsnvjaikLozyOGyiTWq", "imfFzbsFwGWPGNfGqidRMCFTRLdJvpEeQmEwkmOCBXmVBOheDU", "VDKZPXlIIssrPFPKJIDVLapyFZQyhnIAiukAKdtoCnHazbfHGA", "yUIkbDqPWDTDpSNAjWMUWbLpJrpRQqOyrXxWymUjlAzkpNZeuo", "BUQSbVFQZHDhmfHyXEhZArPGKBeeHcyloKYHXPYXwaeCHkdoiI", "YUaawoykWhdtrTlHaSTJQCSvOdeBxWWDXnVFOCehGIpsyfjUdP", "cTwYaIDqpPHBLCaVRcGhEbWZRRszqHapWSjxTCKfdQyKiACbbU", "LZPqSMdNnBSsYZJYWHklBvRcBHSUtiesgKkSmxbdzgdcgDLBSo", "IkmUNTNIkwMCSzdpsgVXObGWvuyyEszhAadirMXQwtLtoQzvEV", "jteazzETiPLvnakTKbgyLaSMGHGOUeFwvgdDJTUJRLmUQkUkEN", "ichbLTwRAolGrZhRFHPnMzYFkJqYthLRzuXRdCuzQpOSaaMMET", "aWSLICCGOcITZBiLCuHOTGHqxbYcTUQuYNvNluffXwjyPVuhaa", "JKYZWgeFRlzNAzHKWMCsSmOPEYjxQWfTgjphPuWnGePuVbUkza", "ZbnfjCgdZULXizYOTrssiEjZUdmogACeWXJrMqwRszbMmyEerv", "WampciHjtLdFryJtfxRqwkWruvFlPyCRSwiwLJZEOxiWtvwqyY", "BtClOWaTHUTZWcOcZxfEPeiPRYEgZLBQPdlCTfHWrULdJvLcft", "PmqltiBovfUsoFBbDduArkzzoSjvjpAVasrEGLhRfjCcGQRucS", "rPOkRYLzPNHOBDbAilyjWghbZYvIMewAKaBwHfXZWHyzQgmALP", "xLWrQYjEPMdJBgBKYMwJOBgsoYYKEELXaRZpVecGABCwsbjyGr", "utpopTkLHZUtHlTuZGZEZVbTWLeOjOohyQHFIsjgNtpHfekypm", "dptxjkCujHWLmJWSLwKIOoXMlUiWZZatYdQPnJtRxkYAEhvkew", "zlxWEoGmMopQuMLnDMPNagWnkZMAVttqHdwYkikBdNBiRNPvNQ", "zIVgOPbZaWWLwxcxMTXrNgqbuncAXJufHyYHNjGaPgAEIosXUA", "fLlPgPWmcDVuzfEsXySxbABvgHQPBROaibgWvDxjGkrlDOtjrf", "bOlJXKIXPWOBBkCcmRPfrzwpNFbgxbbOOXXTiJAlSGSLvjuvtB", "fVxAlLOuFffKoTjnsOVTepuhAidfOcUPWMyuYBZkZuFBNlJZmI", "VqoHOzYXbyJmCJhJUYuCnWxjmFrotZTOldPWJkpEAPafOVBTnJ", "owgfGxHrQAYAtmiUCfToUOoVfdJxELIVVcSUcoFUKLcKWlPIFr", "EzyLszRafDEktIBuoRFYmPuLYGDmzBpFsqQobHOrjKmyEvAySA", "GrqbisnLanrIOTBRCdxqiwBSoqfhMFhEUcFxbCYZLTMenYazQx", "ImcSQiNxIpdKkdLfqQXcjizeAKbeaiGSJikpTKfQaaQqSDGgvT", "DvgARXUmubiMKxEqUIOTWoGiZkHrieQleJquXIBxPiLKCBPhrG", "aogtsRegGBSDZzjEZYOPHMiGYNZaZgFPJPAxAMSRCQQVvxSvkd", "EATXzViJPUjaGoxFQLhVLekEVejxQzUyOoMGRSNCmcijEUCeDi", "reRngluNyPvhQjFWcVhwkcrIklLXflUgirpaDYhlNFiEAxpkxh", "sctQwdhmrLJThfwVKVyflzoOgGSTHhbvYAnbNcapIgWquSdSov", "AWSwgmnKdRrkqjekyVdJuTsbFTxwdJHMyigbbcGIdBZaRUDgrf", "eLDRpavEljesXmIUdLWEESmVjnTFrZAyXWdxCYlayhfTKwuVvH"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"CtttOOttCOt", "OtOCthttCtO", "tOChhCOhOOC", "COhthOtOCOh", "thCOOthOOOt", "thhttCtChCt", "thhhOttOhCh", "COOCOCOCCtO", "tCChtOOhChO", "OhOCCCttChh", "OCCthhttOOt", "hhthChCttCh", "hChCtCOOthC", "tChCCCtthOh", "CCCCCChttOO", "OhtCCCOCtOO", "hhhCOhCCCtt", "hOOhOChhhOO", "COhtOCOCthC", "CtOCOCOttCh", "tOhtChtOOhC", "OhtCOtttCtt", "tttCOOCthCt", "tOOChOtOhth", "hhOCOthOhCO"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"rqeekkPXsLgVPRFPFFIVBqmXkLLxUrRRgqdBUPsPqfeUgBgVmI", "SJImxsJfmgfrdIdrFxgJLxqImgFUxFkFkFPIIeUqUggffrgXXU", "dmRmJfLILUgXkqVxFfLkUBXrkePFFxReqPVxXPBrfkxqFeIfUU", "RIXqFUrrmePdJqqXrfPgSksXxkJIUqsJfJgrJxsmffkrIkULBL", "dsdksskmgmSVJLeUXrVqVPeqLdxmxrfxmXxBSrmmBemSLFBxsJ", "IkkqrBJLPqRxFUfRXxRmIkXxUkLLgLfSrrRqFfsBFfeIXUmqRI", "kSFPqdUxdkefmrkexdgBxqJgdredPxgVmkqkBfrFfrPULdmLsd", "eLFFrRUJdVeIJBqIrSmsrskVfSFXqeLFFSBSIJBrLFddkefgPF", "kVFFePmIxPIqJVPBSgXJXeImkRIsUkRgfmdqRVkersSIdPgSUs", "kfmJLXISsXVFxVJsgJqxqsIFLsssPFfsXkmXUUqXRrqdmXrLRI", "PxrqVeXfrdkggmmLfkfPRUgVgXXmUVXmsXLIqVLIIPFfFXBeUm", "fXIsBeRFXFkdkSqFffBXfmqdUPRekfmrqfgPBrmxsPkIXXBmgs", "fmfRRVXJLeUkVfqLqJeqLSdgdVSSrdJkBVJVFBJgFUqxIqLqgq", "IPkxPBPxdLgRVeJdrgIerdBdmBkJJLgLLmLRPqreVeqqPPSIJB", "eekfIsfsfIUXgxSfgVrsdRLXkeeBBFBVPXkXBXXsUedSIeXXeq", "BqqXXSrdxdmqsRgRmrqJkfkkkqfJPfrPVkXIBBXsIsJsFskfPd", "XkssmeeqBkmPrgPSFxXBUIUeRdPkJVdeLBSVrJVIsxXSsJLqFJ", "dPIeBgXPqRVRIJUSkgURSRdLrIJUBxeBfsXfLLmPPFdUFrLJsx", "PVdRekRFmgksPPmPkmLsBVfSdPdRPVeFJekUBgPBIVFkmXIgPB", "SVVdXFFsegxfUVJefdUmxmeSeBRBmrrXeSgSrLPXIPmURsfgPU", "sdLkSJBrVkkrFLxIxPfkrsPSXeVLsFqXBRVJfmsksxSBBqmrUV", "xXBBxULPUBgPSxPPBxUkRedqXPkUssdeJeBePsePIxdgkIPxgJ", "qrkXSPRVJdxsesVFdrmUqrISmVffSUSPFeRRqLBgxFrgRmrJxd", "rFFsLBFFkqsJkseFsxJVJXVksBIfsdmfmgmgqsLFJsVrRremxd", "feXgqsgVkxxFPeqkeLUVILRJJRJqrgrkxgFPesPRerXBJLPBkx", "VFULesqRPseeBdsFUFsILqdefXPqSgJqVefFBIPXkFFqmeBFrm"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"yCNmBjfnwNVAjfjcixNIeeyTUi", "qzNBYzokstvAyzNcihBotVNLWs", "yJGpjAXiSrsnGRuqAqrjYlVuCl", "ntlCBaCImUSHFFGTxzURyNoNRk", "miaCDvyseoXoaFWxmbwbXyWLBU", "AqVSGaRWxDXFiTneCAbFolCYuY", "iuLBtHzDiRYtwiAARUFuaTifnq", "InBAsbIviLeonItsRqXLqUlyqi", "ceXHtTCuTlsVLybvlRlzczzCTj", "aBTjwvkrIhlwalHVtHjTkptDce", "lUfoRSoRayLYIjsTSzvjakqrAA", "iDTFYjhJzaJereCspkJDaLNLHq", "rFIUTUVGeDLsekHnsYUfVzwzTT", "wumABsDRxefNSInXRamwNkXxah", "tsATYXjTaoHtWniWjCrbViVoWa", "oBDcYtsVWWLNiccSnaYVSmlxFR"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"LzFFFFpMFFFLFFzFM", "LzrrFrpMrrrLrrzrM", "FFFFFFFFFFFFFFFFF", "ppppppppppppppppp", "LzzzzzpMzzzLzzzzM", "YYYYYYYYYYYYYYYYY", "FFFFFFpMFFFLFFzFM", "LppppppMpppLppzpM", "zzzzzzzzzzzzzzzzz", "MMMMMMMMMMMMMMMMM", "rrrrrrpMrrrLrrzrr", "rrrrrrrrrrrrrrrrr", "FFFFFFFFFFFFFFzFF", "FFFFFFpMFFFLFFzFM", "LzMMFMpMMFMLMMzMM", "LzLLFLpMLLLLLLzLM", "LzYYFYpMYFYLYYzYM", "LzYYFYpMYYYLYYzYM", "rrrrrrpMrrrLrrzrM", "ppppppppppppppppp", "LLLLLLLLLLLLLLLLL", "LzFFFFpMFFFLFFzFM", "LLLLLLpMLLLLLLzLL", "LLLLLLpMLLLLLLzLM", "LzrrFrpMrrrLrrzrM", "FFFFFFpMFFFLFFzFM", "MMMMMMMMMMMMMMzMM", "LzMMFMpMMFMLMMzMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"KCjjjjSjdjrxjjjjE", "KBBBBBSBdBBxBBBBB", "KdddddSdddrxddddE", "KCHbboSndNrxOaHoE", "KxxxxxSxdxxxxxxxE", "KCttboStdNrxOtttE", "KCaaaaSadarxaaaaE", "KCFFFFSFdFrxFFFFE", "KClbboSldNrxOlHlE", "KCMbboSMdNrxOMHME", "KCebboSedNrxOeHeE", "GGGGGGGGdGGGGGGGG", "KCdbboSddNrxOdHdE", "KCFFFFSFdFrxFFFFE", "KCwwwwSwdwrxwwwwE", "bbbbbbbbdbbbbbbbb", "KCHbboSUdNrxOUHUE", "HHHHHHHHdHHHHHHHH", "KCNbboSNdNrxONHNE", "KCXbboSXdNrxOXHXE", "KMMMMMSMdMMxMMMME", "KUUUUUSUdUUxUUUUE", "KYYYYYSYdYYxYYYYE", "KCXXbXSXdNrxXXXXE", "KCCCboSCdNrxCCCCE", "QQQQQQQQdQQQQQQQQ", "KeeeeeSedeexeeeeE", "KMMMMMSMdMMxMMMME", "KBBBBBSBdBBxBBBBE", "KcccccScdccxccccE", "KCHbboSadNrxOiHoE", "KCvvvvSvdNrxvvvvE", "KCSbboSSdNrxOSHSE", "KCHbboSadNrxOGHoE", "KCHbboSFdNrxOFHoE", "KCHbboSMdNrxOMHoE", "KClbboSldNrxOlHlE", "KCHbboSedNrxOeHoE"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"dddddddd", "wwYwwwww", "YYYYYYYY", "eeeeeeee", "rrYrurrr", "WWWWWWWW", "QQYQQQQQ", "llllllll", "rrYrrrrr", "WWWWWWWW", "gggggggg", "VVYVVVVV", "zzzzzzzz", "xxYxuMxx", "ttYttttt", "HHYHHHHH", "dddddddd", "zzzzzzzz", "YYYYYYYY", "ggYggggg", "rrYrrrrr", "wwYwuwww", "rrYrHrrr", "YYYYYYYY", "QQYQQQQQ", "WWYWWWWW", "ZZYZZZZZ", "MMYMuMMM", "WWWWWWWW", "VVVVVVVV", "VVYVuMVV"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPPPPPPPPPP"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYIYYYYhYYYYYYYY", "IoIIIIIIIIIIIIIIIIIhIIIIIIIIIIIIIhIIIIIIYI"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbibibbbbbbbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "iiiiiiiibiiiiibiiibiiiiiiibiiiiibiiiiiiiiiiiiiiii", "iiiiiiiibiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbibibbbbbbbbbbbbbibbbbbbibibibbbbbbib", "bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "iiiiiiiibiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbibibbbbbbbbbbbbbibbbbbbibibibbbbbbib", "bbbbbbbbbbbbbibibbbbbbbbbbbbbibbbbbbibibbbbbbbbib", "iiiiiiiiiiiiiibiiiiiiiiiiiiiiiiibiiiiiiiiiiiiiiii", "ibiiiiiibiiiiibiiibiiiiiiibiiiiibibiiiiiiibiiiiii", "bbbbbbbbbbbbbibibbbbbbbbbbbbiibbbbbbiiibibbbbbbib", "iiiiiiiiiiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii", "iiiiiiiibiiiiibiiibiiiiiiibiiiiibibiiiiiiiiiiiiii", "iiiiiiiiiiiiiibiiiiiiiiiiiiiiiiibiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbibibbbbbbbbbbbbbibbbbbbibibbbbbbbbib", "bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "iiiiiiiiiiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiibiiiiiiiiiiiiiiiiibiiiiiiiiiiiiiiii", "iiiiiiiibiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbibibbbbibbbbbbbiibbbbbbiiibibbbbbbib", "bbbbbbbbbbbbbibibbbbbbbbbbbbiibbbbbbibibibbbbbbib", "iiiiiiiiiiiiiibiiiiiiiiiiiiiiiiibiiiiiiiiiiiiiiii", "iiiiiiiibiiiiibiiibiiiiiiibiiiiibiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiibiiiiiiiiiiiiiiiiibiiiiiiiiiiiiiiii", "iiiiiiiibiiiiibiiiiiiiiiiibiiiiibiiiiiiiiiiiiiiii"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"pMMMM", "ppppp", "pMMMM", "ppppp", "pMMMM", "pMMMM", "ppppp", "MMMMM", "MMMMM", "pMMMM", "pMMMM", "pMMMM", "pMppp", "pMMMM", "pMMMM", "pMMMM", "pMMMM", "pMMMM", "ppppp", "ppppp", "ppppp", "pMpMM", "MMMMM", "pMppp", "ppppp", "pMpMp", "MMMMM", "pMMMM", "pMMMM", "pMMMM", "ppppp", "pMMMM", "ppppp", "ppppp", "pMMMM", "pMMMM", "pMMMM", "pMMMM", "ppppp"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"hhDIhEDhEEIEIIDDDIIhDE", "hhDIhEDhEEIEIIDDDIIhDE", "EhEEEEDhEEEEIIEEEIIEEE", "hhDDDDDhDDDEIIDDDIIDDD", "IhIIIIDhIIIEIIIIIIIIII", "hhDIhEDhEEIEIIDDDIIhDE", "hhDIhEDhEEIEIIDDDIIhDE", "hhhhIhhhhhhhhIhhhhIhhh", "hhhIhhDhhEhEIIhhhIIhDh", "hhDIhEDhEEIEIIDDDIIhDE", "EhEEEEDhEEEEIIEEEIIEEE", "hhDIhEDhEEIEIIDDDIIhDE", "hhDIhEDhEEIEIIDDDIIhDE", "hhDIhEDhEEIEIIDDDIIhDE"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"kkkkkgkkkgkkgkkkkkgkkkkgkkgkkkkgkkkgkkkgkkkkkkkgk", "ggkggggkkggggggkgkggggkgggggkggggkggggggkggkggkgg", "gggggggkggggggggggggggkggggggggggggggggggggkggggg", "kkkkkgkkkgkkgkkkgkgkkkkgkggkkgkggkkgkkkgkgkkkkkgk", "kkkkkgkkkkkkgkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkgk"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"ffsffsfsffffffffsfffsfffN", "fffffsfsffffffffffffsfffN", "ffNffsfsffffffNfsfffsfffN", "fffffsfsffffffffffffsfffN", "fffffsfsffffffffffffsfffN"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"bba", "bbc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"cba", "ccc", "ccc", "aba", "dba"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"ssss", "ssss", "ssss", "ssss"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"sZss", "sZss", "sZss", "sZss"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"IIhh", "IIhh", "IIhh", "IIhh"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"QoQQ", "QoQQ", "QoQQ", "QoQQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"EEEE", "EEEE", "EEEE", "EEEE"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"Fuuu", "Fuuu", "muuu", "Fuuu"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"mhWW", "hhWW", "mhWW", "mhWW"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"xKLL", "xKLL", "xKLL", "LKLL"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"PPPP", "PPPd", "PPPd", "PPPd"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"qVVq", "qrrq", "qrrq", "qrrq"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"xpex", "xpex", "epee", "xpex"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"wwkk", "wwww", "wwkk", "wwkk"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"Zppp", "Zwww", "Zwww", "Zwww"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"hchh", "cccc", "hchh", "hchh"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"XXXX", "cccc", "cccc", "cccc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"VyVV", "VUVV", "VaVV", "VUVV"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"xuCC", "xmCC", "xmCC", "xxCC"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"nMno", "nMnn", "nMnb", "nMno"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"NZNN", "NyNN", "NZNN", "NNNN"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"YYUU", "YIUU", "YIUU", "WWUU"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"FoAj", "FFAF", "FoAj", "FoAo"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"nppn", "nSpn", "nSpn", "nnnn"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"Bbbb", "Bunn", "Bnnn", "Bunn"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"pnpi", "pnpi", "nnnn", "pnpp"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"QQRQ", "yyyy", "QQRQ", "QQQQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"WIIW", "GIIG", "EIIE", "WIIW"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"RRkR", "Rnkn", "Rhkh", "Rhkh"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"vffv", "vvvv", "vddv", "vffv"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"KsKK", "SsSS", "AsKA", "AsKA"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"gggr", "gaar", "rrrr", "gaar"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"QfQf", "ffff", "nnnn", "QfQf"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"TTOT", "XXOX", "kkOk", "XXOX"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"NNNq", "NNNq", "qqqq", "OOOq"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"wwww", "LLJL", "JJJJ", "LLJL"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"cccc", "LLLL", "LLLL", "ZZZZ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "NNNNNNNNNNNNNNNNNNNNNNNNNGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHzHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"pzjZljoxjWksTfAjijjRjIHJjjLjtKDjjGjhjjSCjrjaUjjdNj", "pzCZlCoxCWksTCACiCCRCIHJCCLCtKDCCGChCCSCCrCaUCCdNC", "pzUZlUUxUWUsTUAUiUURUUHJUULUtKUUUGUUUUSUUrUaUUUUNU", "JzJJJJJJJJJsJJJJJJJJJJHJJJJJJJJJJGJJJJJJJJJJJJJJNJ", "pzAZlAAxAWAsAAAAiAARAAHJAALAtKAAAGAAAASAArAaAAAANA", "pzIZlIIxIWIsTIAIiIIRIIHJIILItKIIIGIIIISIIrIaUIIINI", "pzSZlSSSSWSsSSSSiSSRSSHJSSLStKSSSGSSSSSSSrSSSSSSNS", "pzWZlWWWWWWsWWWWiWWRWWHJWWLWtKWWWGWWWWWWWrWWWWWWNW", "pzpZlppppppsppppippRppHJppLptKpppGppppppprppppppNp", "szssssssssssssssssssssHssssssssssGssssssssssssssNs", "LzLLLLLLLLLsLLLLLLLLLLHJLLLLLLLLLGLLLLLLLrLLLLLLNL", "pzyZlqoxqWksTfAjivnRqIHJqmLQtKDqqGqhqqSCqrqaUqqdNq", "pzyZleoxXWksTfAjivnRXIHJXmLQtKDOXGXhXXSCqrXaUMXdNu", "pzyZleoxVWksTfAjivnRVIHJXmLQtKDOVGVhVVSCqrVaUMVdNu", "pzaZlaaaaWasaaaaiaaRaaHJaaLatKaaaGaaaaSaaraaaaaaNa", "tztZlttttttsttttittRttHJttLttKtttGtttttttrttttttNt", "pzyZlyoxyWksTfAjiynRyIHJyyLQtKDyyGyhyySCyryaUyydNy", "pzoZlooxoWosToAoiooRoIHJooLotKoooGooooSooroaUoooNo", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzGzzzzzzzzzzzzzzNz", "pzyZleoxYWksTfAjivnRYIHJXmLQtKDOwGVhYcSCqrYaUMYdNu", "pzyZlMoxMWksTfAjivnRMIHJMmLQtKDOMGMhMMSCqrMaUMMdNu", "pzQZlQoxQWksTfAjiQQRQIHJQQLQtKDQQGQhQQSCQrQaUQQdNQ", "pzDZlDoxDWksTDADiDDRDIHJDDLDtKDDDGDDDDSDDrDaUDDDND", "pzyZleoxeWksTfAjivnReIHJemLQtKDOeGeheeSCqreaUMedNu", "pzyZlOoxOWksTfAjivnROIHJOmLQtKDOOGOhOOSCqrOaUOOdNu", "pzTZlTTxTWTsTTATiTTRTTHJTTLTtKTTTGTTTTSTTrTaTTTTNT", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGNG", "lzlZlllllllsllllillRllHJllLllKlllGlllllllrllllllNl", "pznZlnoxnWksTfAjinnRnIHJnnLQtKDnnGnhnnSCnrnaUnndNn", "rzrrrrrrrrrsrrrrrrrrrrHJrrrrrrrrrGrrrrrrrrrrrrrrNr", "pzyZleoxwWksTfAjivnRwIHJXmLQtKDOwGVhwcSCqrwaUMwdNu", "ZzZZZZZZZZZsZZZZiZZZZZHJZZLZZZZZZGZZZZZZZrZZZZZZNZ", "pzyZleoxYWksTfAjivnREIHJXmLQtKDOwGVhBcSCqrFaUMgdNu", "RzRZRRRRRRRsRRRRiRRRRRHJRRLRRKRRRGRRRRRRRrRRRRRRNR", "pzyZleoxcWksTfAjivnRcIHJXmLQtKDOcGVhccSCqrcaUMcdNu", "iziiiiiiiiisiiiiiiiiiiHJiiLiiiiiiGiiiiiiiriiiiiiNi", "pzdZldoxdWksTdAdiddRdIHJddLdtKDddGddddSddrdaUdddNd", "pzyZleoxYWksTfAjivnREIHJXmLQtKDOwGVhEcSCqrFaUMgdNu", "pzkZlkoxkWksTkAkikkRkIHJkkLktKkkkGkkkkSkkrkaUkkkNk", "pzxZlxxxxWxsxxxxixxRxxHJxxLxtKxxxGxxxxSxxrxaxxxxNx", "pzhZlhoxhWksThAhihhRhIHJhhLhtKDhhGhhhhShhrhaUhhdNh", "pzfZlfoxfWksTfAfiffRfIHJffLftKDffGfhffSCfrfaUffdNf", "pzyZlmoxmWksTfAjivnRmIHJmmLQtKDmmGmhmmSCmrmaUmmdNm", "pzyZleoxYWksTfAjivnRgIHJXmLQtKDOwGVhgcSCqrFaUMgdNu", "pzyZleoxYWksTfAjivnRFIHJXmLQtKDOwGVhFcSCqrFaUMFdNu", "pzyZluoxuWksTfAjivnRuIHJumLQtKDuuGuhuuSCqruaUuudNu", "pzyZlvoxvWksTfAjivnRvIHJvvLQtKDvvGvhvvSCvrvaUvvdNv", "HzHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHGHHHHHHHHHHHHHHNH", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "KzKZKKKKKKKsKKKKiKKKKKHJKKLKKKKKKGKKKKKKKrKKKKKKNK"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"iwi", "iwi"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "KKKFKKKKKKKKKKKKKKKKKKKKKKKKKFKKKKFKKKKFKKKFKKKKKK", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "UmUUUmmUmmmUmUUmUUmmUUmUUUmmUUUmmUUmUUUmUUUmUUUUUU", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "UcccccccUcccccccUcccccccccccccUcccccccccccccccccUc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeSeeeeeeeeSeSeeeeeeeeeeSeeeSeeeeeeee"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ", "IQIIQIQQIIIQQIQIQIQQIQQIQQIQQQIQQQQIIIIQQIQQIQQQQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "hwhhhwhhwhwwhhwwhhhwwhwwhwhhhhwwhwwwhhwhhhhwwhhhh", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNQQQNNNNNNNQQQQNQNQNQNQNNQNNNNNNNNNQQQQQNNNNQQNNQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp", "pxxxxxpxppxxppppxxppppxpxppppppppxpxxpppxxxxpxpxxp"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLbLbLLLLLLLLLLLLLLbLLbLLLLLLLbLLLLbLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"GGGGGGGGGGGGGnGGGGGGGGGGGGnnnGGGG", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "GGGGGGGGGGGGGnGGGGGGGGGGGGnnnGGGG", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"JJJJJJJJJJJJJJJJJJJJJJJkJkkJJJJJJJJJJJJ", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "JJJJJJJJJJJJJJJJJJJJJJJkJkkJJJJJJJJJJJJ", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "JJJJJJJJJJJJJJJJJJJJJJJkJkkJJJJJJJJJJJJ", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTc", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT", "TTTTT"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"oooooooouoooooooooo", "uuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuu", "oooooooouoooooooooo", "uuuuuuuuuuuuuuuuuuu"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"GSSGGSSSSSSSSSSSSSS", "GSSGGSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GSSGGSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GSSGGSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGG", "GSSGGSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GSSGGSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGG"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "xxxxxx", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "EEExEE", "xxxxxx", "EEExEE", "xxxxxx", "EEExEE", "EEExEE", "xxxxxx", "EEExEE"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"rrrrKKr", "rrrrKKr", "KKKKKKK", "rrrrKKr", "KKKKKKK", "KKKKKKK", "KKKKKKK", "KKKKKKK", "rrrrKKr", "KKKKKKK", "KKKKKKK"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"caaaacaacaccaacaacaacaacccccacacacaaaacac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "caaaacaacaccaacaacaacaacccccacacacaaaacac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"WMWMWWWWWWWWWWWWMWWMWWW", "MMMMMMMMMMMMMMMMMMMMMMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VVVVVVVVVVVVVVV", "VVVVVVVVVVVVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV", "VVVVVVVVVVVVVVV", "VGVVVVGVGGGVVVV", "VGVVVVGVGGGVVVV"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"lGlZdlZldZZlGdZllll", "lGlZdlZIdZZIGdZIIlI", "ZGZZdZZZdZZZGdZZZZZ", "ddddddddddddddddddd", "lGlZdlZldZZlGdZllll", "lGlZdlZIdZZIGdZIIlI", "ddddddddddddddddddd", "GGGGdGGGdGGGGdGGGGG", "lGlZdlZIdZZIGdZIIlI"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLLYLLLLLLLLLLLLLLLLLLLLLLLLLYYLLLLLLY", "LLLLLLLLLZYLLuLLLuLLLLZLLLLLLLLLLLuLYYLZLLLLY", "LLLLLLLLLZYLLuLLLuLLLLZLLLLLLLLLLLuLYYLZLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLLYLLLLLLLLLLLLLLLLLLLLLLLLLYYLLLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLLYLLLLLLLLLLLLLLLLLLLLLLLLLYYLLLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLZYLLuLLLuLLLLZLLLLLLLLLLLuLYYLZLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLLYLLLLLLLLLLLLLLLLLLLLLLLLLYYLLLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLZYLLuLLLuLLLLZLLLLLLLLLLLuLYYLZLLLLY", "LLLLLLLLLLYLLLLLLLLLLLLLLLLLLLLLLLLLYYLLLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "LLLLLLLLLuYLLuLLLuLLLLuLLLLLLLLLLLuLYYLuLLLLY"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA", "AAooAoAAAAoAAoooAAAoAAooAoAAAoAAAoooAAA", "AAooAoAAAAoAAoooAAAoAAooAoAAAoAAAoooAAA", "AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA", "AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA", "AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA", "AAooAoAAAAoAAoooAAAoAAooAoAAAoAAAoooAAA", "AAoPAPAAAAPAAPoPAAAPAAPPAoAAAPAAAPooAAA"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "ssssssssssssssssssssssssssssssssssssss", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "ssssssssssssssssssssssssssssssssssssss", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhvhsYhYvsYshvsvhhhvshhssvhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "YYsYYsYYssYYYYsYYYYsYsYYsYYYYYsYYssYYY", "hhshYshYsshhhhsYhYhsYshhshhhhhshhsshhh", "ssssssssssssssssssssssssssssssssssssss"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"ItIIIIDII", "ItIIIIIII", "ItIIIIDII", "ItIIIIIII", "ItIIIIDII", "ttttttttt", "ItIIIIDII", "ItIIIIIII", "ItIIIIIII", "ItIIIIIII", "ItIIIIIII", "ItIIIIIII"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"LYLLYYLCYYkLPC", "CCCCCCCCCCkCCC", "PPPPPPPCPPkPPC", "LYLLYYLCYYkLPC", "kkkkkkkkkkkkkk", "PPPPPPPCPPkPPC", "kkkkkkkkkkkkkk", "LLLLLLLCLLkLPC", "LLLLLLLCLLkLPC", "LLLLLLLCLLkLPC", "kkkkkkkkkkkkkk", "CCCCCCCCCCkCCC", "PPPPPPPCPPkPPC", "kkkkkkkkkkkkkk", "CCCCCCCCCCkCCC", "PPPPPPPCPPkPPC", "kkkkkkkkkkkkkk", "LLLLLLLCLLkLPC", "PPPPPPPCPPkPPC", "PPPPPPPCPPkPPC"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"TqTTTTTTTTTqTTTTTTTTTVVTTTqTVTqT", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "TqxxxxTxTTxqxTxTTxnxTVVxxxqxVxqx", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "TqnnnnTnTTnqnTnTTnnnTVVnnnqnVnqn", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "qqqqqqqqqqqqqqqqqqqqqVVqqqqqVqqq"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "MMMMOMMOMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "BBBBOBBOVBBiBBMBMBBBBBBBBMBBVBVMBBMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "MMMMOMMOMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "BBBBOBBOVBBiBBMBMBBBBBBBBMBBVBVMBBMM", "BBBBOBBOBBBiBBMBMBBBBBBBBMBBBBBMBBMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM", "iiiiOiiOiiiiiiMiMiiiiiiiiMiiiiiMiiMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AOAOANNAONOOAOONOOOOAOUANNNAAAAOANNA", "AOAOANNAONOOAOONOOOOAOUANNNAAAAOANNA", "AUAUANNAUNUUAUUNUUUUAUUANNNAAAAUANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AUAUANNAUNUUAUUNUUUUAUUANNNAAAAUANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AUAUANNAUNUUAUUNUUUUAUUANNNAAAAUANNA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AUAUANNAUNUUAUUNUUUUAUUANNNAAAAUANNA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AOAOANNAONOOAOONOOOOAOUANNNAAAAOANNA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "ANANANNANNNNANNNNNNNANNANNNAAAANANNA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ddddZddddddddddddddddddZdddddd", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ddddZddddBdddddddddddddZdddddd", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ddddZddddddddddddddddddZdddddd", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ddddZddddddddddddddddddZdddddd"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> board = {"ZMMMMMMMMMMMMMM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjHjMHQMMjMHHM", "ZMMMMMMMMMMMMMM", "ZjjjjMjjMMjMjjM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZjjjjMjjMMjMjjM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZjjjjMjjMMjMjjM", "ZjjHjMkQMMjMHHM", "ZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZ", "ZjjjjMjjMMjMjjM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZjjHjMHQMMjMHHM", "ZjjHjMkQMMjMHHM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjHjMkQMMjMHHM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjQjMQQMMjMQQM", "ZMMMMMMMMMMMMMM", "ZjjHjMkQMMjMHHM", "ZjjHjMkQMMjMHHM", "ZMMMMMMMMMMMMMM", "ZMMMMMMMMMMMMMM"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> board = {"ooJGoooooooooooooooQoooooooooQooooooo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGMoovMMoggMogvogQggvgggNggQgNggNNo", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGNooNNNoNNNoNNoNQNNNNNNNNNQNNNNNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "GGJGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGvoovvvoggvogvogQggvgggNggQgNggNNo", "ooJGMoovMMoggMogvogQggvgggNggQgNggNNo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGMoovMMoggMogvogQggvgggNggQgNggNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGNooNNNoNNNoNNoNQNNNNNNNNNQNNNNNNo", "ooJGMoovMMoggMogvogQggvgggNggQgNggNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "GGJGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "GGJGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGvoovvvoggvogvogQggvgggNggQgNggNNo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGvoovvvoggvogvogQggvgggNggQgNggNNo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "ooJGoooooooooooooooQoooooooooQooooooo", "ooJGgoogggogggoggogQggggggNggQgNggNNo", "ooJGoooooooooooooooQoooooooooQooooooo", "QQJGQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> board = {"YHYYYYYYYGYYYY", "nHSnQnYQSGnznz", "nHSnQnYQSGnznz", "SHSSQSYQSGSzSz", "SHSSQSYQSGSzSz", "iHSiQiYQSGiznz", "HHHHHHHHHGHHHH", "YHYYYYYYYGYYYY", "nHSnQnYQSGnznz", "nHSnQnYQSGnznz", "GGGGGGGGGGGGGG", "zHzzzzYzzGzzzz", "nHSnQnYQSGnznz", "nHSnQnYQSGnznz", "nHSnQnYQSGnznz", "SHSSQSYQSGSzSz", "HHHHHHHHHGHHHH", "nHSnQnYQSGnznz", "GGGGGGGGGGGGGG", "nHSnQnYQSGnznz", "GGGGGGGGGGGGGG", "nHSnQnYQSGnznz", "GGGGGGGGGGGGGG", "nHSnQnYQSGnznz", "YHYYYYYYYGYYYY", "nHSnQnYQSGnznz", "QHQQQQYQQGQzQz", "GGGGGGGGGGGGGG", "nHSnQnYQSGnznz", "QHQQQQYQQGQzQz"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> board = {"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "aaEaaaaaaaanaaaaaaaaEaaaaaaaaaaaanaaEanaanaaaaaa", "alEllllllllnllllllalEllllllllllllnlvElnlvnllllll", "alEllllllllnllllllalEllllllllllllnlvElnlvnllllll", "alEllllllllnllllllalEllllllllllllnlvElnlvnllllll", "EEEEEEEEEEEnEEEEEEEEEEEEEEEEEEEEEnEEEEnEEnEEEEEE", "aaEaaaaaaaanaaaaaaaaEaaaaaaaaaaaanaaEanaanaaaaaa", "avEvvvvvvvvnvvvvvvavEvvvvvvvvvvvvnvvEvnvvnvvvvvv", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "atEtlllllllnYtttllalElttlllttltlYnYvElnlvnllllll", "avEvvvvvvvvnvvvvvvavEvvvvvvvvvvvvnvvEvnvvnvvvvvv", "atEtlllllllnttttllalElttlllttltltntvElnlvnllllll", "avEvvvvvvvvnvvvvvvavEvvvvvvvvvvvvnvvEvnvvnvvvvvv", "alEllllllllnllllllalEllllllllllllnlvElnlvnllllll", "atEtlllllllnYtttllalElttlllttltlYnYvElnlvnllllll", "alEllllllllnllllllalEllllllllllllnlvElnlvnllllll", "avEvvvvvvvvnvvvvvvavEvvvvvvvvvvvvnvvEvnvvnvvvvvv", "aaEaaaaaaaanaaaaaaaaEaaaaaaaaaaaanaaEanaanaaaaaa", "avEvvvvvvvvnvvvvvvavEvvvvvvvvvvvvnvvEvnvvnvvvvvv"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> board = {"eenneeeeddnxennmnddxexexnZndxdnnxnnndmeenZd", "ddddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeddeeeeeeeddeeeeeeeededeeeeeedeeeeed", "eeeeeeeeddeeeeeeeddeeeeeeeededeeeeeedeeeeed", "ddddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeddeeeeeeeddeeeeeeeededeeeeeedeeeeed", "ddddddddddddddddddddddddddddddddddddddddddd", "eeeeeeeeddeeeeeeeddeeeeeeeededeeeeeedeeeeed", "eenneeeeddnnennmnddnenennnndndnnnnnndmeennd", "ddddddddddddddddddddddddddddddddddddddddddd", "eenneeeeddnxennmnddxexexnZndxdnnxnnndmeenZd", "eemmeeeeddmmemmmmddmememmmmdmdmmmmmmdmeemmd", "eeeeeeeeddeeeeeeeddeeeeeeeededeeeeeedeeeeed", "eenneeeeddnxennmnddxexexnZndxdnnxnnndmeenZd", "eenneeeeddnxennmnddxexexnxndxdnnxnnndmeenxd", "eenneeeeddnnennmnddnenennnndndnnnnnndmeennd", "eenneeeeddnxennmnddxexexnZndxdnnxnnndmeenZd", "eenneeeeddnxennmnddxexexnxndxdnnxnnndmeenxd", "eenneeeeddnnennmnddnenennnndndnnnnnndmeennd", "eenneeeeddnxennmnddxexexnxndxdnnxnnndmeenxd"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> board = {"ccccccccpcccc", "ppppppppppppp", "ppppppppppppp", "ppppppppppppp", "XccqcquXpuXcv", "XccqcquXpuXcv", "ppppppppppppp", "ppppppppppppp", "ppppppppppppp", "uccqcquupuucv", "ccccccccpcccc", "ccccccccpcccc", "vccqcqvvpvvcv", "XccqcquXpuXcv", "qccqcqqqpqqcq", "ccccccccpcccc", "vccqcqvvpvvcv", "vccqcqvvpvvcv", "XccqcquXpuXcv", "vccqcqvvpvvcv", "ccccccccpcccc", "vccqcqvvpvvcv", "vccqcqvvpvvcv", "ccccccccpcccc", "ccccccccpcccc", "ppppppppppppp", "XccqcquXpuXcv", "ccccccccpcccc", "ppppppppppppp", "vccqcqvvpvvcv", "vccqcqvvpvvcv", "ccccccccpcccc", "qccqcqqqpqqcq", "uccqcquupuucv", "XccqcquXpuXcv", "vccqcqvvpvvcv", "XccqcquXpuXcv", "uccqcquupuucv", "ccccccccpcccc", "uccqcquupuucv", "XccqcquXpuXcv", "XccqcquXpuXcv", "XccqcquXpuXcv", "vccqcqvvpvvcv", "XccqcquXpuXcv", "vccqcqvvpvvcv", "ccccccccpcccc", "uccqcquupuucv", "ccccccccpcccc", "uccqcquupuucv"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> board = {"sBssusssutwqjsBu", "qqqquqqqutwqjqqu", "sBUsuUUsutwqjUBu", "jjjjjjjjjjjjjjjj", "ttttutttutwtjttu", "wwwwuwwwuwwwjwwu", "jjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjj", "BBBBuBBButwqjBBu", "uuuuuuuuuuuujuuu", "sBssusssutwqjsBu"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> board = {"QQQQQQQQQQQQQwQQQQQQQQQ", "QQQQQQQQQQQQQwQQQQQQQQQ", "QQQQQQQQQQQQQwQQQQQQQQQ", "PoPPKQAoPPPoPwQPPPqKPoP", "PoPPKQAoPPPoPwQPPPqKPoP", "PqPPKQqqPPPqPwQPPPqKPqP", "PPPPKQPPPPPPPwQPPPPKPPP", "KKKKKQKKKKKKKwQKKKKKKKK", "wwwwwwwwwwwwwwwwwwwwwww", "PoPPKQooPPPoPwQPPPqKPoP"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> board = {"UUUUuUddLLLU", "LLLLuLddLLLL", "dddduddddddd", "UKKKuKddLLLU", "UUUUuUddLLLU", "dddduddddddd", "UUUUuUddLLLU", "LLLLuLddLLLL", "UUUUuUddLLLU", "dddduddddddd", "uuuuuuuuuuuu", "UKKsusddLLLU", "LLLLuLddLLLL", "UUUUuUddLLLU", "dddduddddddd", "LLLLuLddLLLL", "UKKsusddLLLU", "UUUUuUddLLLU", "UKKKuKddLLLU", "LLLLuLddLLLL", "uuuuuuuuuuuu", "uuuuuuuuuuuu"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> board = {"VffifIiwwVAwAtq", "VffifIiwwVAwAtq", "VAAAAIAAAVAAAAq", "VttitIiwwVAwAtq", "VAAAAIAAAVAAAAq", "VttitIiwwVAwAtq", "VttitIiwwVAwAtq", "VVVVVVVVVVVVVVV", "VOfiOIiwwVAwAtq", "VffifIiwwVAwAtq", "VOfiOIiwwVAwAtq", "VAAAAIAAAVAAAAq", "VAAAAIAAAVAAAAq", "VIIIIIIIIVIIIII", "VVVVVVVVVVVVVVV", "VffifIiwwVAwAtq", "VAAAAIAAAVAAAAq", "VqqqqIqqqVqqqqq", "ViiiiIiiiVAiAiq", "VttitIiwwVAwAtq", "VVVVVVVVVVVVVVV", "VffifIiwwVAwAtq", "VOfiOIiwwVAwAtq", "VwwiwIiwwVAwAwq", "VAAAAIAAAVAAAAq", "VttitIiwwVAwAtq", "VVVVVVVVVVVVVVV", "VOfiOIiwwVAwAtq", "VVVVVVVVVVVVVVV", "VAAAAIAAAVAAAAq", "VAAAAIAAAVAAAAq", "VAAAAIAAAVAAAAq", "VffifIiwwVAwAtq", "VAAAAIAAAVAAAAq", "VwwiwIiwwVAwAwq"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> board = {"XqOnPCMpcAxTFiliYWZiaaGiihiHoNiQyivRiEi", "XqxxPCxpcAxTFxxxYWxxxxGxxhxHoNxQyxvxxxx", "XFFFPFFFFFFFFFFFYFFFFFFFFFFHFFFFFFvFFFF", "XyyyPyyyyyyTFyyyYWyyyyyyyyyHyyyyyyvyyyy", "XqnnPCMpcAxTFnnnYWZnnnGnnhnHoNnQynvRnnn", "XqGGPCGpGAGTFGGGYWGGGGGGGhGHoNGQyGvGGGG", "XNNNPNNNNNNTFNNNYWNNNNNNNNNHNNNNyNvNNNN", "XWWWPWWWWWWTFWWWYWWWWWWWWWWHWWWWWWvWWWW", "XqOnPCMpcAxTFrliYWZraaGrrhDHoNrQyrvRrEr", "XqanPCMpcAxTFalaYWZaaaGaahaHoNaQyavRaEa", "XqMMPCMpcAxTFMMMYWMMMMGMMhMHoNMQyMvMMMM", "XqOnPCMpcAxTFBliYWZBaaGrBhDHoNBQyBvRBEB", "XqppPCpppApTFpppYWppppppphpHoNpQypvpppp", "XqRRPCMpcAxTFRRRYWRRRRGRRhRHoNRQyRvRRRR", "XvvvPvvvvvvvvvvvYvvvvvvvvvvHvvvvvvvvvvv", "XqZZPCMpcAxTFZZZYWZZZZGZZhZHoNZQyZvRZZZ", "XqqqPqqqqqqTFqqqYWqqqqqqqqqHqNqqyqvqqqq", "XqEnPCMpcAxTFEEEYWZEEEGEEhEHoNEQyEvREEE", "XqOnPCMpcAxTFeliYWZeaaGrehDHoNUQydvRBEw", "XqOnPCMpcAxTFdliYWZdaaGrdhDHoNdQydvRBEw", "XqAAPCAAAAATFAAAYWAAAAAAAAAHANAQyAvAAAA", "XqlnPCMpcAxTFlllYWZlllGllhlHoNlQylvRlEl", "XqOnPCMpcAxTFBliYWZBaaGrBhDHoNBQyBvRBEB", "XTTTPTTTTTTTFTTTYTTTTTTTTTTHTTTTTTvTTTT", "XNNNPNNNNNNTFNNNYWNNNNNNNNNHNNNNyNvNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "XqhhPChhhAhTFhhhYWhhhhhhhhhHoNhQyhvhhhh", "XqppPCpppApTFpppYWppppppphpHoNpQypvpppp", "PPPPPPPPPPPPPPPPYPPPPPPPPPPHPPPPPPPPPPP", "XXXXPXXXXXXXXXXXYXXXXXXXXXXHXXXXXXXXXXX", "XXXXPXXXXXXXXXXXYXXXXXXXXXXHXXXXXXXXXXX", "XqanPCMpcAxTFalaYWZaaaGaahaHoNaQyavRaEa", "XqCCPCCCCCCTFCCCYWCCCCCCCCCHCNCCyCvCCCC", "XqOnPCMpcAxTFwliYWZwaaGrwhDHoNwQywvRBEw", "XqooPCoooAoTFoooYWoooooooooHoNoQyovoooo", "XNNNPNNNNNNTFNNNYWNNNNNNNNNHNNNNyNvNNNN", "XqppPCpppApTFpppYWppppppphpHoNpQypvpppp", "XqOnPCMpcAxTFeliYWZeaaGrShDHoNUQydvRBEw", "HHHHHHHHHHHHHHHHYHHHHHHHHHHHHHHHHHHHHHH", "XqOnPCMpcAxTFdliYWZdaaGrdhDHoNdQydvRBEw", "XqQQPCQQQQQTFQQQYWQQQQQQQQQHQNQQyQvQQQQ", "XqOnPCMpcAxTFDliYWZDaaGDDhDHoNDQyDvRDED", "XqQQPCQQQQQTFQQQYWQQQQQQQQQHQNQQyQvQQQQ", "XqOnPCMpcAxTFiliYWZiaaGiihiHoNiQyivRiEi", "XqOnPCMpcAxTFUliYWZUaaGrUhDHoNUQydvRBEw", "XqOnPCMpcAxTFOlOYWZOaaGOOhOHoNOQyOvROEO", "XqccPCcpcAcTFcccYWccccGcchcHoNcQycvcccc", "XTTTPTTTTTTTFTTTYTTTTTTTTTTHTTTTTTvTTTT", "XqOnPCMpcAxTFdliYWZdaaGrdhDHoNdQydvRBEw"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> board = {"IPtmSsfhIISGjGaqgHsINwMKzhstsZJscoNIaRjBbRGpcgs", "bbbbbsbbbbbGbGabbbsbbwMKbbsbsZJsbbbbabbBbbGbbbs", "cctmSschccSGcGaccHsccwMKchstsZJscoccaccBbcGcccs", "mmmmSsmhmmSGmGammHsmmwMKmhsmsZJsmmmmammBbmGmmms", "BBBBBBBBBBBGBGaBBBBBBBBKBBBBBZBBBBBBaBBBBBGBBBB", "zPtmSsfhzzSGjGazzHszzwMKzhstsZJscozzaRjBbRGpczs", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "qPtmSsfhqqSGjGaqgHsqNwMKzhstsZJscoNqaRjBbRGpcgs", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "MMMMMsMMMMMGMGaMMMsMMMMKMMsMsZJsMMMMaMMBMMGMMMs", "tttmSsthttSGtGattHsttwMKthstsZJsttttattBbtGttts", "RRtmSsRhRRSGjGaRRHsRRwMKRhstsZJscoRRaRjBbRGpcRs", "pptmSsphppSGjGappHsppwMKphstsZJscoppapjBbpGpcps", "mmmmSsmhmmSGmGammHsmmwMKmhsmsZJsmmmmammBbmGmmms", "hhhhSshhhhSGhGahhhshhwMKhhshsZJshhhhahhBbhGhhhs", "RRtmSsRhRRSGjGaRRHsRRwMKRhstsZJscoRRaRjBbRGpcRs", "PPtmSsfhPPSGjGaPPHsPPwMKPhstsZJscoPPaRjBbRGpcPs", "jjtmSsjhjjSGjGajjHsjjwMKjhstsZJscojjajjBbjGjcjs", "SSSSSsSSSSSGSGaSSSsSSwMKSSsSsZJsSSSSaSSBbSGSSSs", "OPtmSsfhIlSGjGaqgHslNwMKzhstsZJscoNlaRjBbRGpcgs", "KKKKKKKKKKKKKKaKKKKKKKKKKKKKKZKKKKKKaKKKKKKKKKK", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "wwwwwswwwwwGwGawwwswwwMKwwswsZJswwwwawwBwwGwwws", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "RRtmSsRhRRSGjGaRRHsRRwMKRhstsZJscoRRaRjBbRGpcRs", "lPtmSsfhIlSGjGaqgHslNwMKzhstsZJscoNlaRjBbRGpcgs", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "NPtmSsfhNNSGjGaNgHsNNwMKzhstsZJscoNNaRjBbRGpcgs", "cctmSschccSGcGaccHsccwMKchstsZJscoccaccBbcGcccs", "KKKKKKKKKKKKKKaKKKKKKKKKKKKKKZKKKKKKaKKKKKKKKKK", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaZaaaaaaaaaaaaaaaaa", "bbbbbsbbbbbGbGabbbsbbwMKbbsbsZJsbbbbabbBbbGbbbs", "JJJJJJJJJJJGJGaJJJJJJJJKJJJJJZJJJJJJaJJBJJGJJJJ", "JJJJJJJJJJJGJGaJJJJJJJJKJJJJJZJJJJJJaJJBJJGJJJJ", "BBBBBBBBBBBGBGaBBBBBBBBKBBBBBZBBBBBBaBBBBBGBBBB", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaZaaaaaaaaaaaaaaaaa", "fftmSsfhffSGjGaffHsffwMKfhstsZJscoffaRjBbRGpcfs", "GGGGGGGGGGGGGGaGGGGGGGGKGGGGGZGGGGGGaGGGGGGGGGG", "gPtmSsfhggSGjGaggHsggwMKzhstsZJscoggaRjBbRGpcgs", "cctmSschccSGcGaccHsccwMKchstsZJscoccaccBbcGcccs", "HHHHSsHhHHSGHGaHHHsHHwMKHhsHsZJsHHHHaHHBbHGHHHs", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "JJJJJJJJJJJGJGaJJJJJJJJKJJJJJZJJJJJJaJJBJJGJJJJ", "sssssssssssGsGassssssssKsssssZJsssssassBssGssss", "KKKKKKKKKKKKKKaKKKKKKKKKKKKKKZKKKKKKaKKKKKKKKKK", "ootmSsohooSGoGaooHsoowMKohstsZJsooooaooBboGooos", "KKKKKKKKKKKKKKaKKKKKKKKKKKKKKZKKKKKKaKKKKKKKKKK", "gPtmSsfhggSGjGaggHsggwMKzhstsZJscoggaRjBbRGpcgs"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> board = {"EEEEEEEEEEEEEEEEEEEEEWEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "qEqqqqpeqqqqqqqqqqrqpWeqqqqqqqqqqqqqqqqqJqqpqqqqqq", "mEclilpelllllhxzlVrzpWeqllllzglcllQcluNlJllpzQllKg", "mEcaiLpeHaoaahxzLVrzpWeqaafHzgacaaQcyuNlJCapzQPaKg", "rErrrrrerrrrrrrrrrrrrWerrrrrrrrrrrrrrrrrrrrrrrrrrr", "mEclilpelllllhxzlVrzpWeqllllzglcllQcluNlJllpzQllKg", "mEccicpeccccchxzcVrzpWeqcccczgccccQccuNcJccpzQccKg", "mEcZiLpeHZoZZhxzLVrzpWeqAZfHzgAcnZQcyuNlJCZpzQPaKg", "mEcPiLpeHPoPPhxzLVrzpWeqPPfHzgPcPPQcyuNlJCPpzQPPKg", "mEcHiLpeHHoHHhxzLVrzpWeqHHfHzgHcHHQcyuNlJCHpzQHHKg", "mEQQiQpeQQQQQQQQQQrQpWeqQQQQQQQQQQQQQuQQJQQpQQQQKQ", "mENNiNpeNNNNNhNNNNrNpWeqNNNNNNNNNNQNNuNNJNNpNQNNKN", "mEcXiLpeHXoXZhxzLVrzpWeqAXfHzgAcnXQcyuNlJCXpzQPaKg", "mEcniLpeHnonnhxzLVrzpWeqnnfHzgncnnQcyuNlJCnpzQPaKg", "mEcniLpeHnonnhxzLVrzpWeqnnfHzgncnnQcyuNlJCnpzQPaKg", "mEKKiKpeKKKKKKKKKKrKpWeqKKKKKKKKKKKKKuKKJKKpKKKKKK", "mEcsiLpeHXoSZhxzLVrzpWeqAsfHzgAcnXQcyuNlJCDpzQPaKg", "uEuuuupeuuuuuuuuuurupWequuuuuuuuuuuuuuuuJuupuuuuuu", "JEJJJJpeJJJJJJJJJJrJpWeJJJJJJJJJJJJJJJJJJJJpJJJJJJ", "mEcLiLpeLLLLLhxzLVrzpWeqLLLLzgLcLLQcLuNlJCLpzQLLKg", "mEcAiLpeHAoAAhxzLVrzpWeqAAfHzgAcnAQcyuNlJCApzQPaKg", "eEeeeeeeeeeeeeeeeeeeeWeeeeeeeeeeeeeeeeeeeeeeeeeeee", "mEzzizpezzzzzhxzzVrzpWeqzzzzzgzzzzQzzuNzJzzpzQzzKg", "mExxixpexxxxxhxxxxrxpWeqxxxxxxxxxxQxxuNxJxxpxQxxKx", "mEcyiLpeyyyyyhxzLVrzpWeqyyyyzgycyyQcyuNlJCypzQyyKg", "pEpppppepppppppppprppWeppppppppppppppppppppppppppp", "mEggigpeggggghxgggrgpWeqggggggggggQgguNgJggpgQggKg", "mEcDiLpeHXoSZhxzLVrzpWeqADfHzgAcnXQcyuNlJCDpzQPaKg", "mEVViVpeVVVVVhxVVVrVpWeqVVVVVgVVVVQVVuNVJVVpVQVVKg", "mEcoiLpeooooohxzLVrzpWeqoooozgocooQcyuNlJCopzQooKg", "mEcaiLpeHaoaahxzLVrzpWeqaafHzgacaaQcyuNlJCapzQPaKg", "pEpppppepppppppppprppWeppppppppppppppppppppppppppp", "pEpppppepppppppppprppWeppppppppppppppppppppppppppp", "mEcfiLpeffoffhxzLVrzpWeqffffzgfcffQcyuNlJCfpzQffKg", "mEcSiLpeHXoSZhxzLVrzpWeqASfHzgAcnXQcyuNlJCSpzQPaKg", "mEhhihpehhhhhhhhhhrhpWeqhhhhhhhhhhQhhuhhJhhphQhhKh", "mEQQiQpeQQQQQQQQQQrQpWeqQQQQQQQQQQQQQuQQJQQpQQQQKQ", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "mEcyiLpeyyyyyhxzLVrzpWeqyyyyzgycyyQcyuNlJCypzQyyKg", "mEmmimpemmmmmmmmmmrmpWeqmmmmmmmmmmmmmummJmmpmmmmmm", "iEiiiipeiiiiiiiiiiripWeqiiiiiiiiiiiiiuiiJiipiiiiii", "mEcCiCpeCCCCChxzCVrzpWeqCCCCzgCcCCQcCuNlJCCpzQCCKg", "mEcCiCpeCCCCChxzCVrzpWeqCCCCzgCcCCQcCuNlJCCpzQCCKg", "mEcfiLpeffoffhxzLVrzpWeqffffzgfcffQcyuNlJCfpzQffKg"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> board = {"GGrGGGGJGsGSGfbUEAkGGGGGGGGGHGZcRGphdzMGuGLgGGIGjt", "CCrWyGCJqsDSCfbUEAkXQCwNCmlxHCZcRCphdzMYuvLgCPICjt", "FarWyGFJqsDSTfbUEAkXQBwNFmlxHiZcRFphdzMYuvLgKPICjt", "ssssssssssssssssEsssssssssssssssssssssssssssssssss", "ccrccccJcscccfbcEAccccccccccccZcccpcdcccucLcccccjc", "pppppppppsppppppEppppppppppppppppppppppppppppppppp", "rrrrrrrrrsrrrrrrErrrrrrrrrrrrrrrrrprdrrrurrrrrrrjr", "RRrRRRRJRsRSRfbREAkRRRRRRRRRHRZcRRpRdRRRuRLgRRIRjR", "llrWyGlJlsDSlfbUEAkXlllNlmllHlZcRlphdzMYuvLgllIljt", "HHrHHHHJHsHSHfbHEAkHHHHHHHHHHHZcHHpHdHHHuHLHHHHHjH", "XXrWXGXJXsXSXfbUEAkXXXXNXmXXHXZcRXphdzMYuvLgXXIXjt", "QQrWyGQJqsDSQfbUEAkXQQwNQmlQHQZcRQphdzMYuvLgQPIQjt", "yyrWyGyJysySyfbUEAkXyyyNymyyHyZcRyphdzMYuvLgyyIyjt", "jjjjjjjjjsjjjjjjEjjjjjjjjjjjjjjjjjpjdjjjujjjjjjjjj", "IIrIIIIJIsISIfbIEAkIIIIIIIIIHIZcIIpIdIIIuILIIIIIjI", "kkrkkkkJkskkkfbkEAkkkkkkkkkkkkZckkpkdkkkukLkkkkkjk", "AArAAAAAAsAAAfAAEAAAAAAAAAAAAAAAAApAdAAAuAAAAAAAjA", "JJrJJJJJJsJJJfbJEAJJJJJJJJJJJJZJJJpJdJJJuJLJJJJJjJ", "FarWyGnJqsDSTfbUEAkXQBwNemlxHiZcRVphdzMYuvLgKPICjt", "ttrttttJtstStfbUEAktttttttttHtZcRtphdzMtutLgttItjt", "YYrWYGYJYsYSYfbUEAkYYYYYYYYYHYZcRYphdzMYuvLgYYIYjt", "TarWyGTJqsDSTfbUEAkXQBwNTmlxHiZcRTphdzMYuvLgKPICjt", "MMrMMMMJMsMSMfbUEAkMMMMMMMMMHMZcRMpMdzMMuMLgMMIMjM", "ffrffffffsffffffEfffffffffffffffffpfdfffufffffffjf", "SSrSSSSJSsSSSfbSEAkSSSSSSSSSSSZcSSpSdSSSuSLSSSSSjS", "bbrbbbbbbsbbbfbbEAbbbbbbbbbbbbZbbbpbdbbbubLbbbbbjb", "ZZrZZZZZZsZZZfZZEAZZZZZZZZZZZZZZZZpZdZZZuZZZZZZZjZ", "qqrWyGqJqsDSqfbUEAkXqqqNqmlqHqZcRqphdzMYuvLgqqIqjt", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "zzrzzzzJzszSzfbUEAkzzzzzzzzzHzZcRzpzdzzzuzLgzzIzjz", "mmrWmGmJmsmSmfbUEAkmmmmNmmmmHmZcRmphdzMYuvLgmmImjt", "PPrWyGPJqsDSPfbUEAkXPPwNPmlPHPZcRPphdzMYuvLgPPIPjt", "vvrWvGvJvsvSvfbUEAkvvvvvvvvvHvZcRvphdzMvuvLgvvIvjt", "BarWyGBJqsDSBfbUEAkXQBwNBmlxHBZcRBphdzMYuvLgBPICjt", "FarWyGnJqsDSTfbUEAkXQBwNnmlxHiZcRVphdzMYuvLgKPICjt", "iarWyGiJqsDSifbUEAkXQBwNimlxHiZcRiphdzMYuvLgKPICjt", "aarWyGaJqsDSafbUEAkXQawNamlxHaZcRaphdzMYuvLgaPICjt", "UUrUUUUJUsUSUfbUEAkUUUUUUUUUHUZcRUpUdUUUuULgUUIUjU", "uuuuuuuuusuuuuuuEuuuuuuuuuuuuuuuuupuuuuuuuuuuuuuuu", "ggrggggJgsgSgfbgEAkgggggggggHgZcggpgdgggugLgggIgjg", "xxrWyGxJqsDSxfbUEAkXQxwNxmlxHxZcRxphdzMYuvLgxPIxjt", "wwrWyGwJqsDSwfbUEAkXwwwNwmlwHwZcRwphdzMYuvLgwwIwjt", "hhrhhhhJhshShfbUEAkhhhhhhhhhHhZcRhphdzMhuhLghhIhjh", "NNrWNGNJNsNSNfbUEAkNNNNNNNNNHNZcRNphdzMYuvLgNNINjt", "KarWyGKJqsDSKfbUEAkXQBwNKmlxHKZcRKphdzMYuvLgKPICjt", "LLrLLLLLLsLLLfLLEALLLLLLLLLLLLZLLLpLdLLLuLLLLLLLjL", "FarWyGVJqsDSTfbUEAkXQBwNVmlxHiZcRVphdzMYuvLgKPICjt", "dddddddddsddddddEdddddddddddddddddpddddduddddddddd", "DDrWyGDJDsDSDfbUEAkXDDDNDmDDHDZcRDphdzMYuvLgDDIDjt", "WWrWWGWJWsWSWfbUEAkWWWWWWWWWHWZcRWphdzMWuWLgWWIWjt"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> board = {"GHGNmKfsrRGVGCYpSrNQhZnyGkdqvAWUJNezGxUGmLeaTPXG", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "vvvvvvvvvvvVvvYvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "qqqNqqfsqRqVqCYpSqNQqZnyqkdqvqqUJNezqxUqqLeaqqXq", "iHtNmKfsrREVtCYpSrNQhZnyikdqvAWUJNezGxUtmLeaTPXt", "sssNssfssssVsCYpSsNQsZnyskdsvsssJNezsxsssLeassXs", "qqqNqqfsqRqVqCYpSqNQqZnyqkdqvqqUJNezqxUqqLeaqqXq", "zzzNzzfzzzzVzzYpSzNQzznzzkdzvzzzzNezzxzzzLeazzXz", "ZZZNZZfZZZZVZCYpSZNQZZnyZkdZvZZZJNezZxZZZLeaZZXZ", "EHENmKfsrREVECYpSrNQhZnyEkdqvAWUJNezGxUEmLeaTPXE", "YYYYYYYYYYYVYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNfNNNNVNNYNSNNNNNNNNNNNvNNNNNeNNNNNNNeNNNXN", "nnnNnnfnnnnVnnYpSnNQnnnnnnnnvnnnnNennxnnnLennnXn", "CCCNCCfCCCCVCCYpSCNQCCnCCkdCvCCCCNezCxCCCLeaCCXC", "AAANAKfsARAVACYpSANQAZnyAkdqvAWUJNezAxUAALeaTPXA", "KKKNKKfsKRKVKCYpSKNQKZnyKkdqvKKUJNezKxUKKLeaKPXK", "QQQNQQfQQQQVQQYpSQNQQQQQQQQQvQQQQNeQQxQQQLeQQQXQ", "SSSSSSSSSSSVSSYSSSSSSSSSSSSSvSSSSSSSSSSSSSSSSSXS", "mHmNmKfsrRmVmCYpSrNQmZnymkdqvAWUJNezmxUmmLeaTPXm", "iHiNmKfsrREViCYpSrNQhZnyikdqvAWUJNezGxUimLeaTPXi", "iHjNmKfsrREVtCYpSrNQhZnyikdqvAWUJNezGxUbmLeaTPXj", "WWWNWKfsWRWVWCYpSWNQWZnyWkdqvWWUJNezWxUWWLeaTPXW", "dddNddfddddVddYpSdNQddndddddvddddNeddxdddLeaddXd", "iHlNmKfsrREVtCYpSrNQhZnyikdqvAWUJNezGxUbmLeaTPXj", "GHGNmKfsrRGVGCYpSrNQhZnyGkdqvAWUJNezGxUGmLeaTPXG", "iHbNmKfsrREVtCYpSrNQhZnyikdqvAWUJNezGxUbmLeaTPXb", "RRRNRRfsRRRVRCYpSRNQRZnyRkdRvRRRJNezRxRRRLeaRRXR", "eeeeeefeeeeVeeYeSeeeeeeeeeeeveeeeeeeeeeeeeeeeeXe", "KKKNKKfsKRKVKCYpSKNQKZnyKkdqvKKUJNezKxUKKLeaKPXK", "kkkNkkfkkkkVkkYpSkNQkknkkkdkvkkkkNekkxkkkLeakkXk", "PPPNPPfsPRPVPCYpSPNQPZnyPkdqvPPUJNezPxUPPLeaPPXP", "iHbNmKfsrREVtCYpSrNQhZnyikdqvAWUJNezGxUbmLeaTPXb", "TTTNTKfsTRTVTCYpSTNQTZnyTkdqvTTUJNezTxUTTLeaTPXT", "yyyNyyfyyyyVyCYpSyNQyynyykdyvyyyyNezyxyyyLeayyXy", "UUUNUUfsURUVUCYpSUNQUZnyUkdUvUUUJNezUxUUULeaUUXU", "fffffffffffVffYfSfffffffffffvfffffffffffffffffXf", "HHHNHKfsrRHVHCYpSrNQHZnyHkdqvAWUJNezHxUHHLeaTPXH", "XXXXXXXXXXXVXXYXXXXXXXXXXXXXvXXXXXXXXXXXXXXXXXXX", "RRRNRRfsRRRVRCYpSRNQRZnyRkdRvRRRJNezRxRRRLeaRRXR", "LLLNLLfLLLLVLLYLSLNLLLLLLLLLvLLLLNeLLLLLLLeLLLXL", "xxxNxxfxxxxVxxYpSxNxxxxxxxxxvxxxxNexxxxxxLexxxXx", "pppNppfppppVppYpSpNpppppppppvppppNeppppppLepppXp", "rrrNrKfsrRrVrCYpSrNQrZnyrkdqvAWUJNezrxUrrLeaTPXr", "JJJNJJfJJJJVJCYpSJNQJJnyJkdJvJJJJNezJxJJJLeaJJXJ", "aaaNaafaaaaVaaYpSaNQaanaaaaavaaaaNeaaxaaaLeaaaXa", "hHhNmKfsrRhVhCYpSrNQhZnyhkdqvAWUJNezhxUhmLeaTPXh"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> board = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "xxGxxvxrmxGaxxxGGdIxvrmxxxWxxGdGdxxxxe", "vvvvvvvrvvvvvvvvvvvvvrvvvvvvvvvvvvvvvv", "eeGeevermeGeeeeGGdIevrmeeeeeeGdGdeeeee", "GGGGGvGrGGGGGGGGGGGGvrGGGGGGGGGGGGGGGG", "ulGNNvNrmxGacVlGGdINvrmVuuWNVGdGdlplce", "xxGxxvxrmxGaxxxGGdIxvrmxxxWxxGdGdxxxxe", "NNGNNvNrmxGacNNGGdINvrmNNNWNNGdGdNpNce", "ppGppvprmxGapppGGdIpvrmpppWppGdGdppppe", "IIGIIvIrIIGIIIIGGIIIvrIIIIIIIGIGIIIIII", "uuGNNvNrmxGacuuGGdINvrmuuuWNuGdGdupuce", "ccGccvcrmxGacccGGdIcvrmcccWccGdGdcpcce", "xxGxxvxrmxGaxxxGGdIxvrmxxxWxxGdGdxxxxe", "NNGNNvNrmxGacNNGGdINvrmNNNWNNGdGdNpNce", "NNGNNvNrmxGacNNGGdINvrmNNNWNNGdGdNpNce", "ulGNNvNrmxGacVlGGdINvrmVuuWNVGdGdlplce", "ddGddvdrddGddddGGdIdvrdddddddGdGdddddd", "eeGeevermeGeeeeGGdIevrmeeeeeeGdGdeeeee", "vvvvvvvrvvvvvvvvvvvvvrvvvvvvvvvvvvvvvv", "ulGNNvNrmxGacllGGdINvrmluuWNlGdGdlplce", "xxGxxvxrmxGaxxxGGdIxvrmxxxWxxGdGdxxxxe", "ddGddvdrddGddddGGdIdvrdddddddGdGdddddd", "ulGNNvNrmxGacVlGGdINvrmVuuWNVGdGdlplce", "NNGNNvNrmxGacNNGGdINvrmNNNWNNGdGdNpNce", "ulGNNvNrmxGacVlGGdINvrmVuuWNVGdGdlplce", "aaGaavarmaGaaaaGGdIavrmaaaaaaGdGdaaaae", "NNGNNvNrmxGacNNGGdINvrmNNNWNNGdGdNpNce", "xxGxxvxrmxGaxxxGGdIxvrmxxxWxxGdGdxxxxe", "mmGmmvmrmmGmmmmGGdImvrmmmmmmmGdGdmmmmm", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ccGccvcrmxGacccGGdIcvrmcccWccGdGdcpcce", "eeGeevermeGeeeeGGdIevrmeeeeeeGdGdeeeee", "WWGWWvWrmWGaWWWGGdIWvrmWWWWWWGdGdWWWWe", "eeGeevermeGeeeeGGdIevrmeeeeeeGdGdeeeee", "eeGeevermeGeeeeGGdIevrmeeeeeeGdGdeeeee", "ulGNNvNrmxGacllGGdINvrmluuWNlGdGdlplce", "ulGNNvNrmxGacllGGdINvrmluuWNlGdGdlplce", "mmGmmvmrmmGmmmmGGdImvrmmmmmmmGdGdmmmmm", "vvvvvvvrvvvvvvvvvvvvvrvvvvvvvvvvvvvvvv", "vvvvvvvrvvvvvvvvvvvvvrvvvvvvvvvvvvvvvv", "ulGNNvNrmxGacllGGdINvrmluuWNlGdGdlplce", "ddGddvdrddGddddGGdIdvrdddddddGdGdddddd"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> board = {"Rcccqcxcccccccxcxcxccccscccccqccm", "RwQwqDxpwZQtDAxwxixcwJwswHAiZqQXm", "RJQJqDxpJZQJDAxJxJxcJJJsJHAJZqQXm", "RwQPqDxpVZQtDAxkxixcnJnsPHAiZqQXm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "RtQtqDxptZQtDAxtxixctJtstHAiZqQXm", "RwQkqDxpkZQtDAxkxixcnJnskHAiZqQXm", "RAAAqAxpAAAAAAxAxAxcAAAsAAAAAqAXm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "Rsssssxsssssssxsxsxsssssssssssssm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "Rmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "RHHHqHxpHZHHHAxHxHxcHHHsHHAHZqHXm", "RwQnqDxpnZQtDAxnxixcnJnsnHAiZqQXm", "RJQJqDxpJZQJDAxJxJxcJJJsJHAJZqQXm", "RwQnqDxpnZQtDAxnxixcnJnsnHAiZqQXm", "RQQQqQxpQZQQQAxQxQxcQQQsQHAQZqQXm", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RwQnqDxpnZQtDAxnxixcnJnsnHAiZqQXm", "RwQVqDxpVZQtDAxkxixcnJnsVHAiZqQXm", "RwQPqDxpVZQtDAxkxixcnJnsPHAiZqQXm", "RZZZqZxpZZZZZAxZxZxcZZZsZZAZZqZXm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "RiQiqDxpiZQiDAxixixciJisiHAiZqQXm", "RDQDqDxpDZQDDAxDxDxcDDDsDHADZqQXm", "RwQwqDxpwZQtDAxwxixcwJwswHAiZqQXm", "RwQoqDxpVZQtDAxkxixcnJnsPHAiZqQXm", "RwQkqDxpkZQtDAxkxixcnJnskHAiZqQXm", "Rmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "RwQVqDxpVZQtDAxkxixcnJnsVHAiZqQXm", "Rpppqpxpppppppxpxpxcpppspppppqppm", "Rcccqcxcccccccxcxcxccccscccccqccm", "Rqqqqqxqqqqqqqxqxqxqqqqsqqqqqqqqm", "RDQDqDxpDZQDDAxDxDxcDDDsDHADZqQXm", "Rxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxm", "RXXXqXxpXXXXXXxXxXxcXXXsXXXXXqXXm", "Rmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> board = {"jYMbTbHHTTGPVdTbcTTOdHYtYOWjHdbM", "jWWWWWWWWWWWVWWWWWWWWWWtWWWjWWWW", "jOOOTOHHTTGPVOTOOTTOOHOtOOWjHOOO", "jOOOTOHHTTGPVOTOOTTOOHOtOOWjHOOO", "jbbbTbHHTTGPVbTbbTTObHbtbOWjHbbb", "jVVVVVVVVVVVVVVVVVVVVVVVVVVjVVVV", "jVVVVVVVVVVVVVVVVVVVVVVVVVVjVVVV", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVdTbcTTOdHYtYOWjHdbM", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jOOOTOHHTTGPVOTOOTTOOHOtOOWjHOOO", "jGGGTGGGTTGPVGTGGTTGGGGtGGWjGGGG", "jtttttttttttVttttttttttttttjtttt", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVdTbdTTOdHYtYOWjHdbM", "jWWWWWWWWWWWVWWWWWWWWWWtWWWjWWWW", "jTTTTTTTTTTPVTTTTTTTTTTtTTWjTTTT", "jHHHTHHHTTGPVHTHHTTHHHHtHHWjHHHH", "jYYbTbHHTTGPVYTbYTTOYHYtYOWjHYbY", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jPPPPPPPPPPPVPPPPPPPPPPtPPWjPPPP", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVMTbMTTOMHYtYOWjHMbM", "jYMbTbHHTTGPVdTbcTTOdHYtYOWjHdbM", "jOOOTOHHTTGPVOTOOTTOOHOtOOWjHOOO"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> board = {"GGGGGGGGVGGGGGGhGGGGGGGGGGGGGGIGGGGGGG", "CjqULRlZViAOEafhpxzcDmFrnNYgbGIdsQttyi", "FFqFFFFFVFFFFFFhFFFFFFFFFFFFFGIFFFFFFF", "zzqzzzzzVizzzzzhzzzzzzFzzzzzzGIzzzzzzi", "VVVVVVVVVVVVVVVhVVVVVVVVVVVVVVIVVVVVVV", "FFqFFFFFVFFFFFFhFFFFFFFFFFFFFGIFFFFFFF", "djqdLdddViAdEadhddzdDdFdnNdgdGIddQdddi", "nnqnLnnnViAnEanhnnznDnFnnNngnGInnQnnni", "ggqgggggViggggghggzgggFggggggGIggggggi", "CjqrLrlZViArEafhrrzrDmFrnNYgrGIdrQrrri", "LLqLLLLLViALEaLhLLzLDLFLLLLgLGILLQLLLi", "ljqlLlllViAlEafhllzlDmFlnNYglGIdlQllli", "NNqNLNNNViANEaNhNNzNDNFNNNNgNGINNQNNNi", "qqqqqqqqVqqqqqqhqqqqqqqqqqqqqGIqqqqqqq", "CjqRLRlZViAREafhpRzcDmFrnNYgRGIdsQRRRi", "fjqfLfffViAfEafhffzfDfFfnNYgfGIdfQfffi", "LLqLLLLLViALEaLhLLzLDLFLLLLgLGILLQLLLi", "CjqULRlZViAOEafhpxzcDmFrnNYgbGIdsQttyi", "iiqiiiiiViiiiiihiiiiiiFiiiiiiGIiiiiiii", "QQqQQQQQViAQEaQhQQzQDQFQQQQgQGIQQQQQQi", "CjqULRlZViAOEafhpxzcDmFrnNYgbGIdsQBtyi", "EEqEEEEEViEEEEEhEEzEEEFEEEEgEGIEEEEEEi", "CjqbLRlZViAOEafhpbzcDmFrnNYgbGIdsQbbyi", "ljqlLlllViAlEafhllzlDmFlnNYglGIdlQllli", "CjqpLplZViApEafhppzcDmFrnNYgpGIdsQpppi", "YjqYLYYYViAYEaYhYYzYDYFYnNYgYGIdYQYYYi", "IIIIIIIIIIIIIIIhIIIIIIIIIIIIIIIIIIIIII", "AAqAAAAAViAAEaAhAAzAAAFAAAAgAGIAAAAAAi", "ZjqZLZlZViAZEafhZZzZDmFZnNYgZGIdZQZZZi", "CjqOLRlZViAOEafhpOzcDmFrnNYgOGIdsQOOOi", "qqqqqqqqVqqqqqqhqqqqqqqqqqqqqGIqqqqqqq", "mjqmLmmmViAmEafhmmzmDmFmnNYgmGIdmQmmmi", "CjqxLRlZViAOEafhpxzcDmFrnNYgbGIdsQxxyi", "CjqyLRlZViAOEafhpyzcDmFrnNYgyGIdsQyyyi", "CjqsLslZViAsEafhsszcDmFrnNYgsGIdsQsssi", "DDqDDDDDViADEaDhDDzDDDFDDDDgDGIDDDDDDi", "GGGGGGGGVGGGGGGhGGGGGGGGGGGGGGIGGGGGGG", "CjqcLclZViAcEafhcczcDmFrnNYgcGIdcQccci", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "CjqcLclZViAcEafhcczcDmFrnNYgcGIdcQccci", "CjqULRlZViAOEafhpxzcDmFrnNYgbGIdsQUUyi", "jjqjLjjjViAjEajhjjzjDjFjnNjgjGIjjQjjji", "aaqaaaaaViaaEaahaazaaaFaaaagaGIaaaaaai", "CjqCLClZViACEafhCCzCDmFCnNYgCGIdCQCCCi", "CjqsLslZViAsEafhsszcDmFrnNYgsGIdsQsssi"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> board = {"PPPXPPtPzPPPPPPPzPPPPPPPPPPPPpPPPPPPPPPPPPzPPP", "NBBXKBtLzafULBNvzsLOBNNYPNfBlpYORNnlfNNBsEzNHN", "zzzzzztzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "LBBXLBtLzaLLLBLLzLLOBLLLPLLBlpLOLLLlLLLBLEzLLL", "OOOXOOtOzOOOOOOOzOOOOOOOPOOOOpOOOOOOOOOOOOzOOO", "BBBXBBtBzBBBBBBBzBBOBBBBPBBBlpBOBBBlBBBBBEzBBB", "HBBXKBtLzafHLBHHzHLOBHHYPHfBlpYORHnlfHHBHEzHHH", "gBBXKBtLzafULBjvzsLOBNgYPgfBlpYORgnlfggBsEzgHg", "lllXlltlzlllllllzllOllllPllllplOlllllllllEzlll", "fBBXKBtLzaffLBffzfLOBffYPffBlpYORfflfffBfEzfff", "aBBXaBtazaaaaBaazaaOBaaaPaaBlpaOaaalaaaBaEzaaa", "fBBXKBtLzaffLBffzfLOBffYPffBlpYORfflfffBfEzfff", "vBBXKBtLzafvLBvvzsLOBvvYPvfBlpYORvnlfvvBsEzvHv", "KBBXKBtLzaKKLBKKzKLOBKKYPKKBlpYORKKlKKKBKEzKKK", "RBBXRBtLzaRRLBRRzRLOBRRRPRRBlpRORRRlRRRBREzRRR", "VBBXKBtLzafULBjvzsLOBNVYPgfBlpYORVnlfVgBsEzgHV", "OOOXOOtOzOOOOOOOzOOOOOOOPOOOOpOOOOOOOOOOOOzOOO", "XXXXXXtXzXXXXXXXzXXXXXXXXXXXXpXXXXXXXXXXXXzXXX", "YBBXYBtLzaYYLBYYzYLOBYYYPYYBlpYORYYlYYYBYEzYYY", "UBBXKBtLzafULBUvzsLOBUUYPUfBlpYORUnlfUUBsEzUHU", "EEEXEEtEzEEEEEEEzEEOEEEEPEEEEpEOEEEEEEEEEEzEEE", "sBBXKBtLzafsLBsszsLOBssYPsfBlpYORsnlfssBsEzsHs", "VBBXKBtLzafULBjvzsLOBNVYPgfBlpYORVnlfqgBsEzgHV", "tttttttttttttttttttttttttttttttttttttttttttttt", "jBBXKBtLzafULBjvzsLOBNjYPjfBlpYORjnlfjjBsEzjHj", "pppppptpzpppppppzpppppppppppppppppppppppppzppp", "nBBXKBtLzafnLBnnznLOBnnYPnfBlpYORnnlfnnBnEznnn"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> board = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "llllllllllllllllllllllllllllllllllllllllllllllllll", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> board = {"jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK", "jCUJAISWpsLqXVatyoPYMQDeOTblnrwZBRcidEkxhfmgFuvHNK"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> board = {"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "llllllllllllllllllllllllllllllllllllllllllllllllll", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> board = {"YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc", "YzhTIwMlUoxGibJnORWfgktXKNDdQvCmasPFujSpVHLBZAerEc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> board = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeSeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> board = {"kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkYkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> board = {"pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppHppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppyppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "Eppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "ppppppppppppppppppppppppppppppppppVppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppppppppppppppppppppp"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> board = {"JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJnJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJSJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJNJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJBJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJZJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> board = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzjzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzRzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzK", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzNzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "Bzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> board = {"ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssEsssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "sssssssssssssssssdssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "sssssssssssssssssssssssssssssssssssssssssssPssssss", "ssssssssssssssssssssssssssssssssssNsssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "sssssssssssssssssssssssssssssssssssssPssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "ssssssssssssssssssssssssssssssssssssssssssssssssss"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> board = {"ccccccceccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccjccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccDcccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccccccccccccccc"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBQBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBsBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBrBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> board = {"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEA", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> board = {"ffffffffff", "xfxxoofoxo", "ffffffffff", "xfxxoofoxo", "ffffffffff", "ooxxoofoxo", "xfxxoofoxo", "xfxxoxfxxo", "ffxxofffxo", "xfxxoxfxxo"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> board = {"ffffffffff", "xfxxoofoxo", "ffffffffff", "xfxxoofoxo", "ffffffffff", "ooxxoofoxo", "xfxxoofoxo", "xfxxoxfaab", "ffxxofffxo", "xfxxoxfxxo"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> board = {"aaab", "cccc", "aaaa"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> board = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ", "KK", "LL", "MM", "NN", "OO", "PP", "QQ", "RR", "SS", "TT", "UU", "VV", "WW", "XX"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> board = {"bbabbbabaabbaabbabbabbbbbbabbaabbbbbbabbabaabbbbab", "baabaaabaaabaabaaabababbababaaababbbaabbabaaabbaaa", "bbabbbabaabbaabbabbbbbbbbbabbaabbbbbbabbabaabbbbab", "baabababaaabaabbabbababbababaaababbbaabbabaaabbbaa", "aaaaaaaaaaaaaaaaaabaaaababaaaaaaabbaaaababaaaaaaaa", "bbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbabbbbbbbbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "baabababaaabaabbabbababbababaaababbbaabbabaaabbbaa", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "bbabbbabaabbaabbabbababbababaaabbbbbaabbabaabbbbaa", "aaaaaaaaaaabaaaaaababaababaaaaaaabbaaaababaaaaaaaa", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaababaaaaaaabbaaaababaaaaaaaa", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaababaaaaaaabbaaaababaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baabababaaabaabbabbababbababaaababbbaabbabaaabbbaa", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "aaaaaaabaaabaabaaababaababaaaaaaabbbaabbabaaaabaaa", "bbabbbabaabbaabbabbabbbbbbabbaabbbbbbabbabaabbbbab", "bbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbab", "bbabbbbbbbbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbab", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaabaaaaaaaaabaaaaaaabaaaaaaaa", "bbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbab", "aaaaaaaaaaaaaaaaaabaaaababaaaaaaabbaaaababaaaaaaaa", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "bbabbbabaabbaabbabbababbababaaabbbbbbabbabaabbbbaa", "bbabbbbbabbbaabbbbbbbbbbbbabbaabbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "bbabbbbbabbbaabbbbbbbbbbbbabbaabbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "baabaaabaaabaabbabbababbababaaababbbaabbabaaabbbaa", "bbabbbbbabbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbabbbbab", "aaaaaaaaaaaaaaaaaabaaaabaaaaaaaaabaaaaaaabaaaaaaaa", "bbabbbabaabbaabbabbbbbbbbbabbaabbbbbbabbabaabbbbab", "bbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbabbbbbbbbbabbbbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbab", "aaaaaaaaaaaaaaaaaabaaaabaaaaaaaaabbaaaaaabaaaaaaaa", "aaaaaaaaaaaaaaaaaabaaaababaaaaaaabbaaaababaaaaaaaa", "bbabbbabaabbaabbabbabbbbbbabbaabbbbbbabbabaabbbbab", "bbabbbabaabbaabbabbabbbbbbabbaabbbbbbabbabaabbbbab", "aaabaaabaaabaabaaabababbababaaaaabbbaabbabaaaabaaa", "aaaaaaaaaaabaabaaababaababaaaaaaabbbaaababaaaaaaaa", "bbabbbabaabbaabbabbababbababaaabbbbbaabbabaabbbbaa", "baabababaaabaabbabbababbababaaababbbaabbabaaabbbaa"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> board = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWR"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> board = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaawawa"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> board = {"AXAZA", "BXYBB", "CCYZC"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> board = {"ZAaAbAcAdAeAfAgAhAiAjAkAlAmAnAoApAqArAsAtAuAvAwAxA", "ZBaBbBcBdBeBfBgBhBiBjBkBlBmBnBoBpBqBrBsBtBuBvBwBxB", "ZCaCbCcCdCeCfCgChCiCjCkClCmCnCoCpCqCrCsCtCuCvCwCxC", "ZDaDbDcDdDeDfDgDhDiDjDkDlDmDnDoDpDqDrDsDtDuDvDwDxD", "ZEaEbEcEdEeEfEgEhEiEjEkElEmEnEoEpEqErEsEtEuEvEwExE", "ZFaFbFcFdFeFfFgFhFiFjFkFlFmFnFoFpFqFrFsFtFuFvFwFxF", "ZGaGbGcGdGeGfGgGhGiGjGkGlGmGnGoGpGqGrGsGtGuGvGwGxG", "ZHaHbHcHdHeHfHgHhHiHjHkHlHmHnHoHpHqHrHsHtHuHvHwHxH", "ZIaIbIcIdIeIfIgIhIiIjIkIlImInIoIpIqIrIsItIuIvIwIxI", "ZJaJbJcJdJeJfJgJhJiJjJkJlJmJnJoJpJqJrJsJtJuJvJwJxJ", "ZKaKbKcKdKeKfKgKhKiKjKkKlKmKnKoKpKqKrKsKtKuKvKwKxK", "ZLaLbLcLdLeLfLgLhLiLjLkLlLmLnLoLpLqLrLsLtLuLvLwLxL", "ZMaMbMcMdMeMfMgMhMiMjMkMlMmMnMoMpMqMrMsMtMuMvMwMxM", "ZNaNbNcNdNeNfNgNhNiNjNkNlNmNnNoNpNqNrNsNtNuNvNwNxN", "ZOaObOcOdOeOfOgOhOiOjOkOlOmOnOoOpOqOrOsOtOuOvOwOxO", "ZPaPbPcPdPePfPgPhPiPjPkPlPmPnPoPpPqPrPsPtPuPvPwPxP", "ZQaQbQcQdQeQfQgQhQiQjQkQlQmQnQoQpQqQrQsQtQuQvQwQxQ", "ZRaRbRcRdReRfRgRhRiRjRkRlRmRnRoRpRqRrRsRtRuRvRwRxR", "ZSaSbScSdSeSfSgShSiSjSkSlSmSnSoSpSqSrSsStSuSvSwSxS", "ZTaTbTcTdTeTfTgThTiTjTkTlTmTnToTpTqTrTsTtTuTvTwTxT", "ZUaUbUcUdUeUfUgUhUiUjUkUlUmUnUoUpUqUrUsUtUuUvUwUxU", "ZVaVbVcVdVeVfVgVhViVjVkVlVmVnVoVpVqVrVsVtVuVvVwVxV", "ZWaWbWcWdWeWfWgWhWiWjWkWlWmWnWoWpWqWrWsWtWuWvWwWxW", "ZXaXbXcXdXeXfXgXhXiXjXkXlXmXnXoXpXqXrXsXtXuXvXwXxX", "ZYaYbYcYdYeYfYgYhYiYjYkYlYmYnYoYpYqYrYsYtYuYvYwYxY", "ZZaZbZcZdZeZfZgZhZiZjZkZlZmZnZoZpZqZrZsZtZuZvZwZxZ", "Zaaabacadaeafagahaiajakalamanaoapaqarasatauavawaxa", "Zbabbbcbdbebfbgbhbibjbkblbmbnbobpbqbrbsbtbubvbwbxb", "Zcacbcccdcecfcgchcicjckclcmcncocpcqcrcsctcucvcwcxc", "Zdadbdcdddedfdgdhdidjdkdldmdndodpdqdrdsdtdudvdwdxd", "Zeaebecedeeefegeheiejekelemeneoepeqereseteuevewexe", "Zfafbfcfdfefffgfhfifjfkflfmfnfofpfqfrfsftfufvfwfxf", "Zgagbgcgdgegfggghgigjgkglgmgngogpgqgrgsgtgugvgwgxg", "Zhahbhchdhehfhghhhihjhkhlhmhnhohphqhrhshthuhvhwhxh", "Ziaibicidieifigihiiijikiliminioipiqirisitiuiviwixi", "Zjajbjcjdjejfjgjhjijjjkjljmjnjojpjqjrjsjtjujvjwjxj", "Zkakbkckdkekfkgkhkikjkkklkmknkokpkqkrksktkukvkwkxk", "Zlalblcldlelflglhliljlklllmlnlolplqlrlsltlulvlwlxl", "Zmambmcmdmemfmgmhmimjmkmlmmmnmompmqmrmsmtmumvmwmxm", "Znanbncndnenfngnhninjnknlnmnnnonpnqnrnsntnunvnwnxn", "Zoaobocodoeofogohoiojokolomonooopoqorosotouovowoxo", "Zpapbpcpdpepfpgphpipjpkplpmpnpopppqprpsptpupvpwpxp", "Zqaqbqcqdqeqfqgqhqiqjqkqlqmqnqoqpqqqrqsqtquqvqwqxq", "Zrarbrcrdrerfrgrhrirjrkrlrmrnrorprqrrrsrtrurvrwrxr", "Zsasbscsdsesfsgshsisjskslsmsnsospsqsrssstsusvswsxs", "Ztatbtctdtetftgthtitjtktltmtntotptqtrtstttutvtwtxt", "Zuaubucudueufuguhuiujukulumunuoupuqurusutuuuvuwuxu", "Zvavbvcvdvevfvgvhvivjvkvlvmvnvovpvqvrvsvtvuvvvwvxv", "Zwawbwcwdwewfwgwhwiwjwkwlwmwnwowpwqwrwswtwuwvwwwxw", "Zxaxbxcxdxexfxgxhxixjxkxlxmxnxoxpxqxrxsxtxuxvxwxxx"};
    ColorfulBoard* pObj = new ColorfulBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14542&pm=11538
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
 
class ColorfulBoard {
public:
  int theMin(vector <string>);
};
 
char a[55][55], b[55][55];
int g[55][55];
int x[55], deg[55], tp[55];
 
int ColorfulBoard::theMin(vector <string> board) {
  int n = board.size(), m = board[0].length(), i, j, ans = -1;
  int tmp, cur, rot, col, e, ok, jj;
  char c;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++) a[i][j] = board[i][j];
  for (rot=0;rot<2;rot++) {
    for (col=0;col<m;col++) {
      for (i=0;i<n;i++)
        for (j=0;j<n;j++) g[i][j] = 0;
      cur = n+m; ok = 1;
      for (j=0;j<m;j++) {
        c = ' ';
        for (i=0;i<n;i++)
          if (a[i][j] != a[i][col]) 
            if (c != ' ' && c != a[i][j]) {
              ok = 0;
              break;
            }
            else c = a[i][j];
        if (!ok) break;
        if (c == ' ') {
          cur--;
          continue;
        }
        for (i=0;i<n;i++)
          if (a[i][col] == c) tp[i] = 0; else
          if (a[i][j] == a[i][col]) tp[i] = 1;
          else tp[i] = -1;
        for (i=0;i<n;i++)
          for (jj=0;jj<n;jj++)
            if (tp[i] == -1 && tp[jj] == 1) g[i][jj] = 1;
      }
      if (!ok) continue;
      for (i=0;i<n;i++) deg[i] = 0;
      for (i=0;i<n;i++)
        for (j=0;j<n;j++) deg[j] += g[i][j];
      e = 0;
      for (i=0;i<n;i++)
        if (!deg[i]) {
          e++;
          x[e] = i;
        }
      i = 1;
      while (i <= e) {
        for (j=0;j<n;j++)
          if (g[x[i]][j]) {
            deg[j]--;
            if (!deg[j]) {
              e++;
              x[e] = j;
            }
          }
        i++;
      }
      if (e < n) continue;
      if (ans == -1 || cur < ans) ans = cur;
    }
    tmp = n; n = m; m = tmp;
    for (i=0;i<n;i++)
      for (j=0;j<m;j++) b[i][j] = a[j][i];
    for (i=0;i<n;i++)
      for (j=0;j<m;j++) a[i][j] = b[i][j];
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/