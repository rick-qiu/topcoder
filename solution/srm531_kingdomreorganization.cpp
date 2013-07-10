/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11282
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

class KingdomReorganization {
public:
    int getCost(vector<string> kingdom, vector<string> build, vector<string> destroy);
};

int KingdomReorganization::getCost(vector<string> kingdom, vector<string> build, vector<string> destroy) {
    int ret;
    return ret;
}


int test0() {
    vector<string> kingdom = {"000", "000", "000"};
    vector<string> build = {"ABD", "BAC", "DCA"};
    vector<string> destroy = {"ABD", "BAC", "DCA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> kingdom = {"011", "101", "110"};
    vector<string> build = {"ABD", "BAC", "DCA"};
    vector<string> destroy = {"ABD", "BAC", "DCA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
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
    vector<string> kingdom = {"011000", "101000", "110000", "000011", "000101", "000110"};
    vector<string> build = {"ABDFFF", "BACFFF", "DCAFFF", "FFFABD", "FFFBAC", "FFFDCA"};
    vector<string> destroy = {"ABDFFF", "BACFFF", "DCAFFF", "FFFABD", "FFFBAC", "FFFDCA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> kingdom = {"0"};
    vector<string> build = {"A"};
    vector<string> destroy = {"A"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
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
    vector<string> kingdom = {"0001", "0001", "0001", "1110"};
    vector<string> build = {"AfOj", "fAcC", "OcAP", "jCPA"};
    vector<string> destroy = {"AWFH", "WAxU", "FxAV", "HUVA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> kingdom = {"0000000000", "0000000011", "0001010000", "0010010000", "0000001000", "0011000000", "0000100000", "0000000011", "0100000101", "0100000110"};
    vector<string> build = {"AhPEqkSFMM", "hAfKPtsDad", "PfAyGQkaqN", "EKyAeLpRpm", "qPGeASfNwo", "ktQLSAnCAK", "SskpfnAdJS", "FDaRNCdAZz", "MaqpwAJZAn", "MdNmoKSznA"};
    vector<string> destroy = {"AgTqWWxEYH", "gAXPgjzIRA", "TXAleTmWvT", "qPlAQkwxRO", "WgeQAqgbJJ", "WjTkqAiTzl", "xzmwgiAuHb", "EIWxbTuAwk", "YRvRJzHwAn", "HATOJlbknA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> kingdom = {"0000010000000000000000", "0000000000000000000000", "0000010000000000000000", "0000000010010110000010", "0000010000000000000000", "1010100001001001001000", "0000000000110000110110", "0000000010110010010010", "0001000100010110100000", "0000010000000000000000", "0000001100010110100010", "0001001110100110110110", "0000010000000000000000", "0001000010110000110100", "0001000110110000110110", "0000010000000000000000", "0000001010110110010100", "0000001100010110100100", "0000010000000000000000", "0000001000010110110000", "0001001100110010000000", "0000000000000000000000"};
    vector<string> build = {"AlEVtEnpnIhNYkymsbRFvX", "lALjztNONEhCJayxPatXSg", "ELAJCATUTsuXXnhWbwhtgZ", "VjJAvwUPxMcZjkMWgxqmCv", "tzCvAnxyikExNqukWuNJwm", "EtAwnAnEIeVDZgvavNFQgu", "nNTUxnAPEmoDNKkKGdHfnN", "pOUPyEPAfTKssmLaIRwSjq", "nNTxiIEfAOJIPOjHvwEFnw", "IEsMkemTOAgDeMAnqPuBMm", "hhucEVoKJgAtPIVLZzSsuM", "NCXZxDDsIDtAvylwjUBtBF", "YJXjNZNsPePvAeugvKJIWl", "kankqgKmOMIyeAYIllFGQq", "yyhMuvkLjAVluYAKqZHaHe", "mxWWkaKaHnLwgIKAjKswVY", "sPbgWvGIvqZjvlqjANktos", "bawxuNdRwPzUKlZKNAMUGI", "RthqNFHwEuSBJFHskMAqQR", "FXtmJQfSFBstIGawtUqAFG", "vSgCwgnjnMuBWQHVoGQFAm", "XgZvmuNqwmMFlqeYsIRGmA"};
    vector<string> destroy = {"ApxHcyXbBLwrnihDSvBqHl", "pArwqZRppNeoXrBJFcbjNR", "xrAJOyFECltSSLKwStbXOH", "HwJAgqNdNHTxdlPvvPFrEE", "cqOgAFCnCqmcrEGlrTrUzO", "yZyqFAxnLBXeRrPNkcKMvo", "XRFNCxAeJDvfFUPdvdVFkP", "bpEdnneAgEROTekgkFXQIA", "BpCNCLJgAwMMYXHTSDUdOm", "LNlHqBDEwApuWYVxxsDOZW", "wetTmXvRMpAlgZqZIwoPkw", "roSxcefOMulAKdoPxaUyso", "nXSdrRFTYWgKAItsyDIWWF", "irLlErUeXYZdIAFtAtQVJE", "hBKPGPPkHVqotFACYFYOdm", "DJwvlNdgTxZPstCAdXoaTs", "SFSvrkvkSxIxyAYdADZeup", "vctPTcdFDswaDtFXDAQpWh", "BbbFrKVXUDoUIQYoZQAYsk", "qjXrUMFQdOPyWVOaepYAbp", "HNOEzvkIOZksWJdTuWsbAC", "lRHEOoPAmWwoFEmsphkpCA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 608;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> kingdom = {"00100000000000", "00011101010000", "10000000001000", "01001000000000", "01010100000000", "01001001000000", "00000000000000", "01000100010000", "00000000000111", "01000001000000", "00100000000000", "00000000100011", "00000000100101", "00000000100110"};
    vector<string> build = {"APGlansxjsZuGS", "PAjuBtTHdHDsGP", "GjARMyTGNOLYmF", "luRAYcCriVmAmL", "aBMYAXCYcCmmrF", "ntycXAMIkxCGyn", "sTTCCMAtFhuMyc", "xHGrYItAYbloIq", "jdNickFYAcvqPa", "sHOVCxhbcASucU", "ZDLmmCulvSArFu", "usYAmGMoqurAzo", "GGmmryyIPcFzAY", "SPFLFncqaUuoYA"};
    vector<string> destroy = {"AMyYCjXtDlipgy", "MAvHFVmBNZLTtk", "yvAMRSMaAaUEhL", "YHMALXDgafkxJU", "CFRLAoYnWaXvas", "jVSXoAajPfTAOh", "XmMDYaAtcmuhnl", "tBagnjtAIFHwWo", "DNAaWPcIAAvJXc", "lZafafmFAAXuJU", "iLUkXTuHvXAzxZ", "pTExvAhwJuzAtj", "gthJaOnWXJxtAh", "ykLUshlocUZjhA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> kingdom = {"000000000001000000", "000000000000001001", "000000000000100000", "000000000000000000", "000000000001000000", "000000000001000000", "000000000001000000", "000000000001000000", "000000000001000000", "000000000000000000", "000000000001000000", "100011111010010110", "001000000000000000", "000000000001000000", "010000000000000000", "000000000001000000", "000000000001000000", "010000000000000000"};
    vector<string> build = {"AEQrPxdQdxDwLlYseD", "EAafpQEFIzedMpEkwH", "QaAiYmnbmPTCAvUvIG", "rfiAwwjeAtPODHOhWe", "PpYwAshiztwlHYuxeN", "xQmwsAdjBJsFEURoAi", "dEnjhdAbgWHoDjtIxe", "QFbeijbACMXdHYDoWi", "dImAzBgCAqcxYeGFWx", "xzPttJWMqAuJSUMYig", "DeTPwsHXcuASallHTX", "wdCOlFodxJSAxWyACF", "LMADHEDHYSaxAUdtvq", "lpvHYUjYeUlWUAnIqf", "YEUOuRtDGMlydnAmBh", "skvhxoIoFYHAtImAEX", "ewIWeAxWWiTCvqBEAF", "DHGeNieixgXFqfhXFA"};
    vector<string> destroy = {"AvNPZFcilBAApYOpSe", "vAXLpglDcMgkrMhQho", "NXAGJUfsJQSEngNzoD", "PLGAEKfMzapneVJWWz", "ZpJEAhFaOoSrDmlsrn", "FgUKhAmjPAiKUMSnzx", "clffFmAMdNQIoZQsJK", "iDsMajMAAgsVofYlQD", "lcJzOPdAAaGiRWQXTd", "BMQaoANgaAvJtptoRg", "AgSpSiQsGvAlIGyUdp", "AkEnrKIViJlAiTkHJq", "prneDUooRtIiArEfww", "YMgVmMZfWpGTrAzfxO", "OhNJlSQYQtykEzAIvO", "pQzWsnslXoUHffIAvV", "ShoWrzJQTRdJwxvvAb", "eoDznxKDdgpqwOOVbA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> kingdom = {"00010000101000000000010000", "00101111000111111101001100", "01001111000111111101001100", "10000000101000000000010000", "01100111000111111101001100", "01101011000111111101001100", "01101101000111111101001100", "01101110000111111101001100", "10010000011000000000010011", "00000000100000000000010000", "10010000100000000010010010", "01101111000011111101001100", "01101111000101111101001100", "01101111000110111101001100", "01101111000111011101001100", "01101111000111101101001100", "01101111000111110101001100", "01101111000111111001001100", "00000000001000000000010000", "01101111000111111100001100", "00000000000000000000000000", "10010000111000000010000011", "01101111000111111101000100", "01101111000111111101001000", "00000000101000000000010001", "00000000100000000000010010"};
    vector<string> build = {"AgYUFqnPYKkSVSrATbGVxRPGXF", "gAqzapsjYfPExHvozAnxrfOSSz", "YqACARCxRBLnVsCJEGARtpQTCF", "UzCAnxWRgABXpOHIYOaCvbAZhx", "FaAnAGjaVTEXeWKbjLBMSSMssA", "qpRxGAXwWwXwKoFtAhMFKXarUe", "nsCWjXAChUmJcbstsGzMUScTah", "PjxRawCAphOPeHKJsjcpAmkQec", "YYRgVWhpAJjjUlHKdStYfenwnQ", "KfBATwUhJAQgLEIOznqkBAwIuQ", "kPLBEXmOjQAKMzzDvhZLqNbUEd", "SEnXXwJPjgKALBrNzqRTaeoHim", "VxVpeKceULMLACAkVyBfrNZeVl", "SHsOWobHlEzBCAzpQdmYywuTXu", "rvCHKFsKHIzrAzACHpOkYoixSb", "AoJIbttJKODNkpCAFicugHHROE", "TzEYjAssdzvzVQHFAwcADeJprR", "bAGOLhGjSnhqydpiwADbguvZxk", "GnAaBMzctqZRBmOccDAufJAkFy", "VxRCMFMpYkLTfYkuAbuAOQIhyB", "xrtvSKUAfBqaryYgDgfOAfQlyc", "RfpbSXSmeANeNwoHeuJQfAbBMQ", "POQAMacknwboZuiHJvAIQbAjQH", "GSTZsrTQwIUHeTxRpZkhlBjAGq", "XSChsUaenuEiVXSOrxFyyMQGAl", "FzFxAehcQQdmlubERkyBcQHqlA"};
    vector<string> destroy = {"AEUWEbMpLKnmxLoKjFVelnMWvD", "EAHfiwXjFVqwafJlxDqxEyThqn", "UHASKHwiFBZtaWgcVwzoYwiNXf", "WfSAWKGArWrknSytARWjmCjuWi", "EiKWAWWwPOCHWQKsiqsmiHzdPf", "bwHKWAXiMOeAshmzUCFwmLgGny", "MXwGWXAFLKwZACdqVgiJiPkRhi", "pjiAwiFAfLxeLQtxajDIfQyeZR", "LFFrPMLfAMrixwtoIsicokxuQi", "KVBWOOKLMAAfbxBPpKmvDqiLyu", "nqZrCewxrAAPNcYzYrBGvcSDAN", "mwtkHAZeifPApTtHfUaksLQjYT", "xaanWsALxbNpAAzekuUcRTWAyf", "LfWSQhCQwxcTAAIhSAurWhfHAX", "oJgyKmdttBYtzIAgMBMDdcfxgR", "KlctszqxoPzHehgAVQJjzONymc", "jxVAiUVaIpYfkSMVAvJiPPtvPJ", "FDwRqCgjsKrUuABQvAtvvafGjg", "VqzWsFiDimBaUuMJJtAFsWFObc", "exojmwJIcvGkcrDjivFAIVytwG", "lEYmimifoDvsRWdzPvsIAPMDBu", "nywCHLPQkqcLThcOPaWVPAhhgI", "MTijzgkyxiSQWffNtfFyMhAruR", "WhNudGReuLDjAHxyvGOtDhrARj", "vqXWPnhZQyAYyAgmPjbwBguRAL", "DnfifyiRiuNTfXRcJgcGuIRjLA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 2811;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> kingdom = {"00000100", "00000100", "00000100", "00000011", "00000100", "11101000", "00010000", "00010000"};
    vector<string> build = {"ALJGzSti", "LAQwHwlv", "JQAeDtxM", "GweAgDYi", "zHDgArFT", "SwtDrABg", "tlxYFBAI", "ivMiTgIA"};
    vector<string> destroy = {"AUCVcZYY", "UAAgCucI", "CAAEiboC", "VgEAvVoL", "cCivAHew", "ZubVHAHB", "YcooeHAh", "YICLwBhA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
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
    vector<string> kingdom = {"0111111", "1011111", "1101111", "1110111", "1111011", "1111101", "1111110"};
    vector<string> build = {"AzvpNrk", "zAFfVLm", "vFAaDFn", "pfaAESX", "NVDEAco", "rLFScAx", "kmnXoxA"};
    vector<string> destroy = {"AzeGcYA", "zAgCTsQ", "egAPSNK", "GCPANfu", "cTSNAIz", "YsNfIAt", "AQKuztA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> kingdom = {"010011111010001000000011", "100111010011110100000100", "000000000000000000000000", "010011000010000110110100", "110101101110000111010001", "110110111111111111110111", "100011010111000101010100", "110001101011011110010000", "100011010101010001100001", "000011101000000000100111", "110111110000001001000001", "010001111000010011010111", "010001000000011000100010", "010001011001101001100111", "100001010010110100100010", "010111110000001000000100", "000111010001000001010011", "000011101011010010010100", "000101001100111000000001", "000111110001000011000111", "000000000000000000000000", "010101100101010101010001", "100001000101111010010000", "100011001111010010110100"};
    vector<string> build = {"AWsfxNpGgaihNpOVoJyTRSCs", "WApFulTmWYQFOBMonVDLFWQR", "spAyJaEVzyddFCByQtdjmpjy", "fFyAeDHfoXXtXBLUpNmWiUHR", "xuJeAhJdayFLmWLtMHQFoZov", "NlaDhAGmwxcrdcspsVLgkYNP", "pTEHJGAyVGGaWWfuLieaCNNn", "GmVfdmyACYlvwXqgOxXhLEgg", "gWzoawVCASXCqKCaiTNaSUFL", "aYyXyxGYSAErKWqATrGKVxLc", "iQdXFcGlXEAVrPuNknGfhaPG", "hFdtLravCrVAyLluNarpqeLd", "NOFXmdWwqKryAziGKSnpqGAx", "pBCBWcWXKWPLzAIKiANrQecV", "OMBLLsfqCquliIApdxtlZNBv", "VoyUtpugaANuGKpApjrmgRqY", "onQpMsLOiTkNKidpAlSNhcVb", "JVtNHVixTrnaSAxjlAWackko", "yDdmQLeXNGGrnNtrSWAfisVZ", "TLjWFgahaKfpprlmNafAdBMa", "RFmiokCLSVhqqQZghcidAYGL", "SWpUZYNEUxaeGeNRcksBYArZ", "CQjHoNNgFLPLAcBqVkVMGrAc", "sRyRvPngLcGdxVvYboZaLZcA"};
    vector<string> destroy = {"AawhZcfnVGXmBRaqLZFPMadg", "aADVIRZnUeAZzuDaSdUzlKvu", "wDAUNwtWGVsRkNifwStIHwdh", "hVUAjsMyjqtBOXFZBwNJVkeS", "ZINjANeAQiRrChTIZhPLRJqj", "cRwsNAErJzlENIaZOBKtdmcZ", "fZtMeEATVKWfEDWMpKUQFtHW", "nnWyArTACWEpNRNSwQOjEibW", "VUGjQJVCAABkCZksXQtLhDgg", "GeVqizKWAAsAOIHlrRFGELub", "XAstRlWEBsAmmQbiGrVKmYXr", "mZRBrEfpkAmAyjGpCxUMwPaD", "BzkOCNENCOmyAhlmrxUFQGQi", "RuNXhIDRZIQjhABtbuvlMaKe", "aDiFTaWNkHbGlBAgRYnxTgVC", "qafZIZMSslipmtgAGliclwSA", "LSwBZOpwXrGCrbRGAQJlDuWP", "ZdSwhBKQQRrxxuYlQAMHaYOC", "FUtNPKUOtFVUUvniJMAoJccG", "PzIJLtQjLGKMFlxclHoAFWzP", "MlHVRdFEhEmwQMTlDaJFAZLw", "aKwkJmtiDLYPGagwuYcWZAJW", "dvdeqcHbguXaQKVSWOczLJAZ", "guhSjZWWgbrDieCAPCGPwWZA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 1879;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> kingdom = {"000000001000000000000000000010000000000", "000100000000100000000000100000000000000", "000000000001000000000010000000000000000", "010000000000100000000000100000010000000", "000000000000000000000000000100000000000", "000000000000000000000000000100000000000", "000000000000000000000000000100000000000", "000000000000000000000000000100000000000", "100000000000000000000000000010000000000", "000000000000000000000000000100000000000", "000000000000000001000000000000000000000", "001000000000000000000010000000000000000", "010100000000000000000000100000010001000", "000000000000000000000000000100000000000", "000000000000000000000000000100000000000", "000000000000000010010001001000101100001", "000000000000000100010001001000101100001", "000000000010000000000000000000000000000", "000000000000000000000000000100000000000", "000000000000000110000001001000101100001", "000000000000000000000000000100000000000", "000000000000000000000000000100000000000", "001000000001000000000000000000000000000", "000000000000000110010000001000101100001", "010100000000100000000000000000010001000", "000000000000000000000000000100000000000", "000000000000000110010001000000101100001", "000011110100011000101100010001000010010", "100000001000000000000000000000000000000", "000000000000000000000000000100000000000", "000000000000000110010001001000001100001", "000100000000100000000000100000000001000", "000000000000000110010001001000100100001", "000000000000000110010001001000101000001", "000000000000000000000000000100000000000", "000000000000100000000000100000010000000", "000000000000000000000000000000000000000", "000000000000000000000000000100000000000", "000000000000000110010001001000101100000"};
    vector<string> build = {"AvznfYTZcYueiKXGbEjfsjgktxrUcdXZVosJZcF", "vAkaYDolQjkAYoKcauBhFcbFCwYsHRpHDYqsDAR", "zkAwosEaalvhzRAZimReJkFgEzDWDHqnUlYgyxL", "nawALHXmRPktOSnVACxtITosMGWoWzzhfSagBRg", "fYoLAwOxXMfhxDeiXHANqfXHJlJkxMTxsDrCmob", "YDsHwAxLqIhrwYEsvYRcIzGlUUwbuguBcyVhKlz", "ToEXOxAXutkBynYymMzvHiklNEpeiwBbsADvbCM", "ZlamxLXAvIXhgzduonpsBFOspEfesABqlaPPWpA", "cQaRXquvADvFZULGsavSaHQgqaRuPcjgSqoWekh", "YjlPMItIDAKqoMDzRSIDNJjzYveCKylMoibgwDY", "ukvkfhkXvKABhUxxnIsVdRwHWcyhLDfzATokfyT", "eAhthrBhFqBAVUuNdzQDnRhroXdaDxjkCseJThA", "iYzOxwygZohVAwxMSaPyhgJYvmetrhjnYeKzaEg", "KoRSDYnzUMUUwAwKGEAVKOspQJDYZxOPQxbghqS", "XKAneEYdLDxuxwAhEfWmOzuexCGLjDhOLPeoUlQ", "GcZVisyuGzxNMKhAkkBAKWGyZJPoGjZPPWDVxKJ", "baiAXvmosRndSGEkAxmZevsOeXADQWgnFBNYYpi", "EumCHYMnaSIzaEfkxAWgNPGFDDIPjzldiwqbtFf", "jBRxARzpvIsQPAWBmWAIDCllfexRfGvDisoHrNL", "fhetNcvsSDVDyVmAZgIAVXAQkUZwgROiwSNKZKj", "sFJIqIHBaNdnhKOKeNDVAdmQDWOpFohdIhfKtcr", "jckTfziFHJRRgOzWvPCXdAklIlrTIpcUhSgRODL", "gbFoXGkOQjwhJsuGsGlAmkAkLZCPKwCzVaLWrXO", "kFgsHllsgzHrYpeyOFlQQlkAyfnXITdLjWGceuZ", "tCEMJUNpqYWovQxZeDfkDILyAEVfZukWeFiXImg", "xwzGlUEEavcXmJCJXDeUWlZfEAgLefoBCSNGRGR", "rYDWJwpfReydeDGPAIxZOrCnVgAPmENnMWphzOF", "UsWokbeeuChatYLoDPRwpTPXfLPAZaewvvOQnRp", "cHDWxuisPKLDrZjGQjfgFIKIZemZAfPjUMIihfs", "dRHzMgwAcyDxhxDjWzGRopwTufEafAmKNRlIFdb", "XpqzTuBBjlfjjOhZglvOhcCdkoNePmAQClVRnrz", "ZHnhxBbqgMzknPOPndDidUzLWBnwjKQAYRfGvgd", "VDUfscslSoACYQLPFiiwIhVjeCMvUNCYAKOHFMd", "oYlSDyAaqiTsexPWBwsShSaWFSWvMRlRKAzOZUE", "sqYarVDPoboeKbeDNqoNfgLGiNpOIlVfOzAQdio", "JsggChvPWgkJzgoVYbHKKRWcXGhQiIRGHOQAiKD", "ZDyBmKbWewfTahUxYtrZtOreIRznhFnvFZdiAmE", "cAxRolCpkDyhEqlKpFNKcDXumGORfdrgMUiKmAP", "FRLgbzMAhYTAgSQJifLjrLOZgRFpsbzddEoDEPA"};
    vector<string> destroy = {"AJAFQotGoAIjYAufMcFBQClFwNKBthXBuxuvwPu", "JAMjfQVioaWLavbMyASDyJXouKEBoyhtVoFCZVi", "AMApbnhajZEeyxDjutwTLaGiTYmzeDxvDrDWVKH", "FjpAQrFltdfHRhCANXzoAJGOaDwEBYvbYjqVuzm", "QfbQAZVAqWYvsYbKalTeaBHPKDUDASfQzJyRZMC", "oQnrZAxjcYpozOAqVbKTUNaJBFDXpncmhXfguEK", "tVhFVxAJahpxJPiXdEWFqkZVLjheyobdslBFYMu", "GialAjJAMLblHCRjRYrAYrlHTDaPnzPSSzkdLkF", "oojtqcaMAqsLfVKvJjJyLStfGLWzGDRIHAowpJm", "AaZdWYhLqAwwwxfEXvmlbdTQoLrJAKOgYojEtkt", "IWEfYppbswAvAHofuktWlNCfZTbXEuqlnDArTJm", "jLeHvoxlLwvAzxYteqRSUrsPRyAgmXLvTgbEzua", "YayRszJHfwAzAqjWOceYOFevQYuUdUqCINnAvKk", "AvxhYOPCVxHxqAvoOpAKvIkBVnXaXYEYNpjoxce", "ubDCbAiRKfoYjvASSstFkSeHWVRXfLZKNONOFrY", "fMjAKqXjvEftWoSAiheiPxrUdyLYgGazYSjKhGq", "MyuNaVdRJXueOOSiABjVpnsybzFRosUQMOliLbN", "cAtXlbEYjvkqcpshBALSgJNpFdxfZOMOHTTIqxc", "FSwzTKWrJmtReAtejLArZveBoaAJqaLMIsgpUOX", "BDToeTFAylWSYKFiVSrAmUCmcfDSXrOGPOmjgEt", "QyLAaUqYLblUOvkPpgZmAuPrRCEDMFePkoxuXID", "CJaJBNkrSdNrFISxnJvUuASUpzwFHwGvYhYhvvM", "lXGGHaZltTCsekersNeCPSAVwAmlCQcDQWDuhzU", "FoiOPJVHfQfPvBHUypBmrUVAPvQQZPHBZsOHeoM", "wuTaKBLTGoZRQVWdbFocRpwPAkSiewLiDNsToUa", "NKYDDFjDLLTyYnVyzdafCzAvkAdFqLlSAmjTnYb", "KEmwUDhaWrbAuXRLFxADEwmQSdABZtLmrtvZtzm", "BBzEDXePzJXgUaXYRfJSDFlQiFBAkteSIEzwwDM", "toeBApynGAEmdXfgoZqXMHCZeqZkAVivoORJhNN", "hyDYSnozDKuXUYLGsOarFwQPwLttVAXEyiRtzNJ", "XhxvfcbPROqLqEZaUMLOeGcHLlLeiXAwgewlUYX", "BtvbQmdSIglvCYKzQOMGPvDBiSmSvEwARGUvitr", "uVDYzhsSHYnTINNYMHIPkYQZDArIoygRABwAXKG", "xorjJXlzAoDgNpOSOTsOohWsNmtEOieGBADWsFg", "uFDqyfBkojAbnjNjlTgmxYDOsjvzRRwUwDAPjCn", "vCWVRgFdwErEAoOKiIpjuhuHTTZwJtlvAWPAvVW", "wZVuZuYLptTzvxFhLqUgXvheontwhzUiXsjvAiV", "PVKzMEMkJkJuKcrGbxOEIvzoUYzDNNYtKFCViAf", "uiHmCKuFmtmakeYqNcXtDMUMabmMNJXrGgnWVfA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 622;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> kingdom = {"010000001000000100001000000000010000000000000", "100000001001000100001000001000000000000000000", "000000000001000100001000000000000000000000000", "000000100000001000100100000000001010000001100", "000000000100010000000000110001000001000010000", "000000001000000000001000000000000000000000000", "000100010000001010100110000110000000001101000", "000000100000001010100100000110001010110000100", "110001000001000100011000001000000000000000000", "000010000000010000000000110001000001000010000", "000000000000000000000000000000100000000000000", "011000001000000000011000000000010000000000000", "000000000000001000100001000100001010000001101", "000010000100000000000000110001000001000010000", "000100110000100010100000000110001100000100111", "111000001000000000001000000000000000000000000", "000000110000001000100000000110000110000100001", "000000000000000000100100000010001100000101110", "000100110000101011000111000110001110111101111", "000000001001000000001000001000010000000000000", "111001001001000100010000001000010000000000000", "000100110000000001100011000100000110111001100", "000000100000000000100100000000001110001000010", "000000000000100000100100000110001100101000100", "000010000100010000000000010001000001000010000", "000010000100010000000000100001000001000010000", "010000001000000000011000000000000000000000000", "000000110000101010100101000010000000010101000", "000000110000001011100001000100001010010001111", "000010000100010000000000110000000001000010000", "000000000010000000000000000000000000000000000", "100000000001000000011000000000000000000000000", "000100010000101001100011000010000000100001001", "000000000000001011100111000000000000100000001", "000100010000100010100110000010000000010000100", "000010000100010000000000110001000000000010000", "000000010000000000100101000000001100011100011", "000000010000000000100100000110000010100101011", "000000100000000000100111000000000000100101010", "000000100000001011100000000100000000111001100", "000010000100010000000000110001000001000000000", "000100100000100001100100000110001000011100000", "000100010000101001100101000010000010000100010", "000000000000001001100010000010000000111000101", "000000000000101010100000000010001100110000010"};
    vector<string> build = {"AhrjAoClOdTonxCrtNfhCCuimizHllPWeJpgMGmFvbmzj", "hAngYpFaLcdHHSoPkwfmIWJRvEBnAihSStVsrXVSNjytj", "rnALpvMxhahiAuPOuyCSOTMcLFqCLshkzgHOiVcqaAWMe", "jgLAcJVHmXPmepITXovNfVNAsGRCMHVyjVjIQyBDvjtNp", "AYpcANyDfdNCPYwTOoilpFhlXAvZcPfSezlIPFUSPeMPc", "opvJNArciJBFjTyDMwqZFWjxQtySydMkkVqMSLlSMWeck", "CFMVyrAhbtaTkQYCflaesEjkOSJlRNFnyQZPaBhqmpHvE", "laxHDchAEOaVOLAGfrlHkytfsnAikGSZfNTFmrwsVIEvV", "OLhmfibEAHwHMuTYEGrVsJWpZSSXGUiYVLuQIhvQhWgLa", "dcaXdJtOHApjItFWBpluQvlbdjqKllGmWvJDUmpKutPjj", "TdhPNBaawpATAOdrNrSrXiOMcXWhIDcdZtkEbSQtRxNrF", "oHimCFTVHjTALRLsNjgdOunJhaABxZjATTPAWKrZkLsSK", "nHAePjkOMIALALErYgOprBMdVhXSstGevNEsYbWBooiLu", "xSupYTQLutORLAVqwZDBJtcdhygExBMbTViKYKzGMyEdm", "CoPIwyYATFdLEVADGWZfCmhAaoLoFmZnLlTHPtXzvPSVc", "rPOTTDCGYWrsrqDAFNeaWVqYgHpnwFcCJnOhZvTfCtshW", "tkuXOMffEBNNYwGFAstWXrKakteSrpjDBGMzNNuyRaMyD", "NwyoowlrGprjgZWNsAbjjCFSsyofdnvovXOLXrDeynpsC", "ffCviqalrlSgODZetbADwqAmfjNfFhFzJtfolrzhizqbn", "hmSNlZeHVurdpBfaWjDAudqBeKamOOenkphcleAQcoxCf", "CIOfpFsksQXOrJCWXjwuAaQydsAyabCpTNWTrLMSydhfi", "CWTVFWEyJviuBtmVrCqdaAdTPVRYTcgoFchOkEcPjYjUT", "uJMNhjjtWlOnMchqKFAqQdApTTtSQyhIAPVXUdWbWFvQC", "iRcAlxkfpbMJddAYaSmByTpAWdrlaVGZPaEKXqDGMyIaU", "mvLsXQOsZdchVhagksfedPTWAvOvaVHnQQSpHeLVaeixj", "iEFGAtSnSjXahyoHtyjKsVTdvAQsNAbxYrqoQfonKdbEj", "zBqRvyJASqWAXgLpeoNaARtrOQAfYZFhagcLDPpQGaGqT", "HnCCZSliXKhBSEonSffmyYSlvsfAUkMhqUicoPthyKAQB", "lALMcyRkGlIxsxFwrdFOaTQaaNYUAbwBjyRWaoLvJLezF", "lisHPdNGUlDZtBmFpnhObcyVVAZkbAIykyQjDvUqxaVfj", "PhhVfMFSiGcjGMZcjvFeCghGHbFMwIAixoLXPxdZPirpA", "WSkySknZYmdAebnCDoznpoIZnxhhByiAnlHUhWeDOlMkc", "eSzjekyfVWZTvTLJBvJkTFAPQYaqjkxnAhXPaasdShkcm", "JtgVzVQNLvtTNVlnGXtpNcPaQrgUyyolhAvWMrnrztDqq", "pVHjlqZTuJkPEiTOMOfhWhVESqciRQLHXvAZwMKZjNLIY", "gsOIIMPFQDEAsKHhzLocTOXKpoLcWjXUPWZARoznIydSb", "MriQPSamIUbWYYPZNXllrkUXHQDoaDPhaMwRAIgRkJCOK", "GXVyFLBrhmSKbKtvNrreLEdqefPPovxWarMoIAyddvczg", "mVcBUlhwvpQrWzXTuDzAMcWDLoptLUdesnKzgyAzjyIwK", "FSqDSSqsQKtZBGzfyehQSPbGVnQhvqZDdrZnRdzAFnotB", "vNavPMmVhuRkoMvCRyicyjWMaKGyJxPOSzjIkdjFAUJJV", "bjAjeWpIWtxLoyPtanzodYFyedaKLailhtNyJvynUACiz", "myWtMeHEgPNsiESsMpqxhjvIibGAeVrMkDLdCcIoJCAPV", "ztMNPcvvLjrSLdVhysbCfUQaxEqQzfpkcqISOzwtJiPAo", "jjepckEVajFKumcWDCnfiTCUjjTBFjAcmqYbKgKBVzVoA"};
    vector<string> destroy = {"AltlGvRwJmkOAnOfLAYVxyaRgHRWOcNkcHsalztNzzuXu", "lAPjsgTFxbRbgywgJwkfAnWeofiYBIUjEAyyKaeoUEhXm", "tPAiRSYcXvUkKWSOKkyfaBxfiLMfyNBLRdOAWlzrLOAoN", "ljiAcUMeXIsvCqoODaJlUhwNxZcMTacgawylRnBDJVIRd", "GsRcAPsrtxGBqJPuvxXikuTAVJSxvlDvcbCvzhCExwCdS", "vgSUPAqRLUowBWeotzyFCkkoMSZWiyrTJrDPSwXpcrdfL", "RTYMsqAzevWGXGqsYfJGDIsgORCkKbnENztIVkOqaNPkk", "wFcerRzAdDtTEyYGJLEEyTLidEvqbqbucVfDZBguiQpnk", "JxXXtLedAwNcHCOjZNcOmloYWwJWagqQTnuENpzXqywTA", "mbvIxUvDwASTSCjLakqnGvyNIusAhfBHOnDffCUJToFOB", "kRUsGoWtNSAKdlKFwcpigrhFLgqyXhtzBKvgWgKtRzRon", "ObkvBwGTcTKAMjYCwTnjLPNzKsHGurJTmsQVyyZaeJIKX", "AgKCqBXEHSdMAveseCLhSMwsTSmoJOStppLExaTGEJaBb", "nyWqJWGyCCljvAMhTedxQbDVIZAgrHakkbaMDHmTjbNDs", "OwSoPeqYOjKYeMAxSfxQFpUqBFxKfbfvNFPGMXOQTOjFl", "fgOOuosGjLFCshxAGkyrrwlkzXccHyJpBWFBxaweZCqYv", "LJKDvtYJZawweTSGAxWynnRdGjoEULfCCjfcuytlCNIwt", "AwkaxzfLNkcTCefkxAeflKqwHOfHrqbxgnPZqJBOTwWrZ", "YkyJXyJEcqpnLdxyWeAaVOuvuCKrwVYwXySlbEAUjxNlr", "VffliFGEOnijhxQryfaAkLhXQVgdTAHKDXvqAGrAMsSPG", "xAaUkCDymGgLSQFrnlVkARvkYpAZNmAbvqYllfBrLlwEp", "ynBhukITlvrPMbpwnKOLRAgOYEvKDumZIwldjjeZkYnvh", "aWxwTksLoyhNwDUlRquhvgAmSGANjAOhySVLGDzszJtjV", "RefNAogiYNFzsVqkdwvXkOmAkxMmEpEMHCellddFrtfUY", "goixVMOdWILKTIBzGHuQYYSkALnBPgsErLoJhsjjGGdSS", "HfLZJSREwugsSZFXjOCVpEGxLAqnFaCDIXcrThUWVlFzO", "RiMcSZCvJsqHmAxcofKgAvAMnqALMcelvUMmEtTYrHwqY", "WYfMxWkqWAyGogKcEHrdZKNmBnLAHXWnFpMKTxhigUiSt", "OByTviKbahXuJrfHUrwTNDjEPFMHAvPqrQUyrNnlNwACm", "cINalybqgfhrOHbyLqVAmuApgacXvAyjKuQWQGxworSvY", "NUBcDrnbqBtJSafJfbYHAmOEsCeWPyAFUrqtapgcPJWVd", "kjLgvTEuQHzTtkvpCxwKbZhMEDlnqjFAkwThKSpsNqANB", "cERacJNcTOBmpkNBCgXDvIyHrIvFrKUkApIQyyIhdupjr", "HAdwbrzVnnKspbFWjnyXqwSCLXUpQurwpACbetgsBWSiI", "syOyCDtfuDvQLaPFfPSvYlVeocMMUQqTICAoeyzLccSgv", "ayAlvPIDEfgVEMGBcZlqldLlJrmKyWthQboAkLnpgnqGz", "lKWRzSVZNfWyxDMxuqbAljGlhTETrQaKyeekAVEwIEvOs", "zalnhwkBpCgyaHXayJEGfjDdshtxNGpSytyLVAOTZQgEq", "tezBCXOgzUKZTmOwtBArBezdjUThnxgpIgznEOAZbTfCC", "NorDEpquXJtaGTQelOUArZsFjWYilwcshsLpwTZAJRyuP", "zULJxcaiqTReEjTZCTjMLkzrGVrgNoPNdBcgIZbJAfHRx", "zEOVwrNQyozJJbOCNwxslYJtGlHUwrJquWcnEQTRfAaLX", "uhAICdPpwFRIaNjqIWNSwntfdFwiASWApSSqvgfyHaAIf", "XXoRdfknTOoKBDFYwrlPEvjUSzqSCvVNjigGOECuRLIAr", "umNdSLkkABnXbslvtZrGphVYSOYtmYdBrIvzsqCPxXfrA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 3335;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> kingdom = {"000100010101110", "000000110011111", "000000000000000", "100001100010011", "000000001000000", "000100110001111", "010101000100011", "110001000101111", "000010000000000", "100000110010110", "010100000100111", "110001010000011", "110001010110011", "110101110111101", "010101110011110"};
    vector<string> build = {"AdlUnTeZWrNsMtY", "dAYsTFPUyGKabyG", "lYAPTbwwDWDjVuI", "UsPAyOplJSFXbrB", "nTTyAWtCZxnbxPB", "TFbOWAJnrnZgZBj", "ePwptJAwTgcDRHS", "ZUwlCnwAwVLGFob", "WyDJZrTwAsxvhLR", "rGWSxngVsAeTrcp", "NKDFnZcLxeAzhUO", "sajXbgDGvTzAQLe", "MbVbxZRFhrhQAZe", "tyurPBHoLcULZAB", "YGIBBjSbRpOeeBA"};
    vector<string> destroy = {"ARaNlDOxdKmEhGZ", "RAmORhibhvVYPWg", "amAStQNcBUvVrNa", "NOSAgjqErdQLFjD", "lRtgAcgKZlIaVcy", "DhQjcAphyFxpJYv", "OiNqgpAmLWcIgIs", "xbcEKhmAkAPdnGU", "dhBrZyLkAgVuelj", "KvUdlFWAgAlUnRr", "mVvQIxcPVlAMhQQ", "EYVLapIduUMAFzm", "hPrFVJgnenhFAod", "GWNjcYIGlRQzoAx", "ZgaDyvsUjrQmdxA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> kingdom = {"01", "10"};
    vector<string> build = {"AB", "BA"};
    vector<string> destroy = {"AJ", "JA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> kingdom = {"00", "00"};
    vector<string> build = {"Ak", "kA"};
    vector<string> destroy = {"AS", "SA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> kingdom = {"00000010000000000000", "00000000000000001011", "00000000100000000001", "00001010000000000000", "00010000100100000000", "00000000000000100000", "10010001001000100000", "00000010000000000000", "00101000000010000000", "00000000000001010000", "00000010000000000000", "00001000000000000000", "00000000100000000000", "00000000010000001000", "00000110000000000000", "00000000010000000000", "01000000000001000000", "00000000000000000001", "01000000000000000000", "01100000000000000100"};
    vector<string> build = {"AiwAQMoHhsrCifJmgAUi", "iAOGYbuCddzqroacerWM", "wOAeMYTITmwEBwWWDKcq", "AGeAtvoyadHRldCWdMBR", "QYMtArtLjzsDPAhGBFAc", "MbYvrArBgFMgtfrTAQFu", "ouTotrAtoWNBbpuyZnmS", "HCIyLBtAhfZcZtwkKaCP", "hdTajgohAgRtobUahrbX", "sdmdzFWfgAaVkQaYmfqh", "rzwHsMNZRaAlqHTjULlr", "CqERDgBctVlAmcEctHfE", "irBlPtbZokqmAjUQdBqI", "fowdAfptbQHcjApzpdBy", "JaWChruwUaTEUpAyUhjV", "mcWWGTykaYjcQzyABiju", "geDdBAZKhmUtdpUBALoc", "ArKMFQnarfLHBdhiLAoK", "UWcBAFmCbqlfqBjjooAs", "iMqRcuSPXhrEIyVucKsA"};
    vector<string> destroy = {"AwrXbIBigXKorzfezpEp", "wAnCxagrcVNMtBTTtPSs", "rnAJJSYCzZPDmdpqtxam", "XCJAdJsAGPwKXZhINjZd", "bxJdAoHmRqfIWnwsLhwW", "IaSJoABBkuTGhwkKYyCr", "BgYsHBAHudCraolxZFCS", "irCAmBHAoxtJgowGPadN", "gczGRkuoAaOWNDNiMnaw", "XVZPqudxaAQEjpOYIKVS", "KNPwfTCtOQAMDSIqvDZg", "oMDKIGrJWEMABSlMfpjg", "rtmXWhagNjDBAPLnpiky", "zBdZnwooDpSSPAMQvkCj", "fTphwklwNOIlLMAlHWoV", "eTqIsKxGiYqMnQlAsbWc", "zttNLYZPMIvfpvHsAkdu", "pPxjhyFanKDpikWbkAYp", "ESaZwCCdaVZjkCoWdYAv", "psmdWrSNwSggyjVcupvA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> kingdom = {"00000000100000000000", "00100000010000001000", "01010000000001000000", "00100000000000000001", "00000000000011000000", "00000010000000000000", "00000101000001000000", "00000010000000000000", "10000000010000000000", "01000000100000000000", "00000000000001100000", "00000000000000100110", "00001000000000000000", "00101010001000000000", "00000000001100000000", "00000000000000000100", "01000000000000000000", "00000000000100010000", "00000000000100000000", "00010000000000000000"};
    vector<string> build = {"AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    vector<string> destroy = {"AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> kingdom = {"00001000000010000000", "00000000010000000000", "00000000010000000000", "00000000000000000101", "10000010000000000000", "00000000000001000000", "00001000010100000000", "00000000000001000000", "00000000000001000000", "01100010000000010000", "00000000000001110100", "00000010000000000000", "10000000000000000010", "00000101101000000000", "00000000001000000000", "00000000011000000000", "00000000000000000001", "00010000001000000000", "00000000000010000000", "00010000000000001000"};
    vector<string> build = {"AAAAGAAAAAAAUAAAAAAA", "AAAAAAAAALAAAAAAAAAA", "AAAAAAAAAuAAAAAAAAAA", "AAAAAAAAAAAAAAAAAbAY", "GAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAEAAAAAA", "AAAAMAAAAkAkAAAAAAAA", "AAAAAAAAAAAAAlAAAAAA", "AAAAAAAAAAAAAOAAAAAA", "ALuAAAkAAAAAAAAVAAAA", "AAAAAAAAAAAAAsBpAaAA", "AAAAAAkAAAAAAAAAAAAA", "UAAAAAAAAAAAAAAAAAFA", "AAAAAEAlOAsAAAAAAAAA", "AAAAAAAAAABAAAAAAAAA", "AAAAAAAAAVpAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAV", "AAAbAAAAAAaAAAAAAAAA", "AAAAAAAAAAAAFAAAAAAA", "AAAYAAAAAAAAAAAAVAAA"};
    vector<string> destroy = {"AqvTAwoNwvGPAfSktuTU", "qAtZsnyERAvsBoHyoWRh", "vtAXJzDLFAPnAyjBjENc", "TZXAVQplDEQDvhbtMAYA", "AsJVAEAUGVGVPZgZWiMq", "wnzQEAjtsEUTeAEEnqpg", "oyDpAjAeqAyAsjaRAPoa", "NELlUteAcDgDqAWKWbPk", "wRFDGsqcAVdmWACZKRnT", "vAAEVEADVAXkmCkApLBO", "GvPQGUygdXAbDAAADAaR", "PsnDVTADmkbAynrAVNsF", "ABAvPesqWmDyALPkrLAR", "foyhZAjAACAnLAtOsoxZ", "SHjbgEaWCkArPtAfOLZG", "kyBtZERKZAAAkOfADkOg", "tojMWnAWKpDVrsODATCA", "uWEAiqPbRLANLoLkTApt", "TRNYMpoPnBasAxZOCpAS", "UhcAqgakTORFRZGgAtSA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> kingdom = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    vector<string> build = {"ACCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CACCCCCCCCCCCCCCCCCCCCCCBCCCBCCCCCCCCCCCBCCCCCCCCC", "CCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CCCACCCCCCCBCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCC", "CCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCC", "CCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCB", "CCCCCCACCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCACCCCBCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCACCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCACCCCCCCCCCCCCCCBCCCCBCCCCCBCCCCCCCCCCCCC", "CCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCCBCCCCCCCCCCCCCCCC", "CCCBCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCBCCCCACCCBCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCC", "CCCCCCCCCCCCCACCCCCCCBCCCCCCCCCCCCCCCBCCCCCCCBCCCC", "CCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCACCCCBCCCCCCCCCCBCCCCCCCCCCCCCCCBCC", "BCCCCCCCCCCCBCCCACCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCC", "CCCCCCCCBCCCCCCCCACCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CCCCCCCCCCCCCCCCCCCACCCCCCBCCCCCCCCCCCCCCCCCCCCBCC", "CCCCCCCCCCCCCCCBCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCBBCCCCCBCCCCCCCACCCCCCCBCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCACCCBCCCCCCCCCCCCCCCCCCCCCCB", "CCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCBCCCCCCCCCC", "CBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCBCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCCCC", "CCCBCCCCCCCCCCCCCCCBCCBCCCACCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCC", "CBCCCCCCCCBCCCCCCCCCCCCCCCCCACBCCCCCCCCCCCCCCCCCBC", "CCCCCCCCCCCCCCCCCCCCCBCCCCCCCACCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCBCCCCCCCBCCCCCCCCCCBCACCCCCCCCCCCCCCCCCCB", "CCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCACCCCCCBBCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCABCCCCCCCCCCCCCCCC", "CCCCCCCCCCBCCCBCBCCCCCCCCCCCCCCCBACCCCCCCCCCCCCCCC", "CCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCC", "CCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCBCCCCC", "CCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCC", "CCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCACCCCCCCCCCC", "CCCCBCCCCCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCACCCCCCCCCC", "CBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCC", "BCBCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCB", "CCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCACCBCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCACCCCC", "CCCCCCCCCCCCCBCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCACCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCACCC", "CCCCCCCCCCCCCCCBCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCACC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCAC", "CCCCCBCCCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCBCCCCCCA"};
    vector<string> destroy = {"ACCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CACCCCCCCCCCCCCCCCCCCCCCBCCCBCCCCCCCCCCCBCCCCCCCCC", "CCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CCCACCCCCCCBCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCCCCC", "CCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCC", "CCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCB", "CCCCCCACCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCACCCCBCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCACCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCACCCCCCCCCCCCCCCBCCCCBCCCCCBCCCCCCCCCCCCC", "CCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCCBCCCCCCCCCCCCCCCC", "CCCBCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCBCCCCACCCBCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCC", "CCCCCCCCCCCCCACCCCCCCBCCCCCCCCCCCCCCCBCCCCCCCBCCCC", "CCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCACCCCBCCCCCCCCCCBCCCCCCCCCCCCCCCBCC", "BCCCCCCCCCCCBCCCACCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCC", "CCCCCCCCBCCCCCCCCACCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCBCCCCCCCC", "CCCCCCCCCCCCCCCCCCCACCCCCCBCCCCCCCCCCCCCCCCCCCCBCC", "CCCCCCCCCCCCCCCBCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCBBCCCCCBCCCCCCCACCCCCCCBCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCACCCBCCCCCCCCCCCCCCCCCCCCCCB", "CCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCBCCCCCCCCCC", "CBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCBCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCCCC", "CCCBCCCCCCCCCCCCCCCBCCBCCCACCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCBCCCC", "CBCCCCCCCCBCCCCCCCCCCCCCCCCCACBCCCCCCCCCCCCCCCCCBC", "CCCCCCCCCCCCCCCCCCCCCBCCCCCCCACCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCBCCCCCCCBCCCCCCCCCCBCACCCCCCCCCCCCCCCCCCB", "CCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCACCCCCCBBCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCABCCCCCCCCCCCCCCCC", "CCCCCCCCCCBCCCBCBCCCCCCCCCCCCCCCBACCCCCCCCCCCCCCCC", "CCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCC", "CCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCBCCCCC", "CCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCC", "CCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCACCCCCCCCCCC", "CCCCBCCCCCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCACCCCCCCCCC", "CBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCC", "BCBCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCCCCACCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCB", "CCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCACCBCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCACCCCC", "CCCCCCCCCCCCCBCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCACCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCACCC", "CCCCCCCCCCCCCCCBCCCBCCCCCCCCCCCCCCCCCCCCCCCCCCCACC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCBCCCCCCCCCCCCCCCCCCCAC", "CCCCCBCCCCCCCCCCCCCCCCBCCCCCCCBCCCCCCCCCCCBCCCCCCA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> kingdom = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    vector<string> build = {"ArrondZyknjldXXnqlfpdnxZadZdTwjnbwtnZinjZndXunZZsu", "rAgrrrrxrrrrrrqrrrrrrrxrrrrrrwrrrwtrrrrrrrrrvrrrsu", "rgArrrryrrrrrrrrrrrrrrxrrrrrrwrrrwtrrrrrrrrrvrrrsu", "orrAoooyooooooooqoopooxoooooowooowtooooooooovonosu", "nrroAnnynmnnnnnLqnnpnKxnnnnnnwnYnwtRnnVnncnnvLnnsu", "drronAdyknjlSddnqlfpGnxddSdSdwjndwtndinjdnFdvnddsu", "ZrrondAyknjldZZnqlfpdnxWadWdZwjnawtnNinjWndZvnWWsu", "yxyyyyyAyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "krronkkyAnklkkknqlkpknxkkkkkkwknkwtnkjnkknkkvnkksu", "nrromnnynAnnnnnmqnnpnmxnnnnnnwnmnwtmnnmnnmnnvlnnsu", "jrronjjyknAkjjjnqljpjnxjjjjjjwenjwtnjjnOjnjjvnjjsu", "lrronllylnkAlllnqflplnxllllllwlnlwtnllnllnllvnllsu", "drronSdyknjlAddnqlfpRnxddEdFdwjndwtndinjdnSdvnddsu", "XrrondZyknjldATnplfpdnxZadZdXwjnbwtnZinjZndGvnZZsu", "XqrondZyknjldTAnqlfpdnxZadZdXwjnbwtnZinjYndSvnZZsu", "nrroLnnynmnnnnnAqnnpnKxnnnnnnwnYnwtQnnUnncnnvInnsu", "qrrqqqqyqqqqqpqqAqqqqqxqqqqqqwqqqwtqqqqqqqqqvqqqsu", "lrronllylnlflllnqAlplnxllllllwlnlwtnllnllnllvnllsu", "frronffyknjlfffnqlApfnxfeffffwjnfwtnfinjfnffvnffsu", "prrppppyppppppppqppAppxppppppwpppwtppppppoppvpppsu", "drronGdyknjlRddnqlfpAnxddSdSdwjndwtndinjdnDdvnddsu", "nrroKnnynmnnnnnKqnnpnAxnnnnnnwnYmwtRnnVnnbnnvJnnsu", "xxxxxxxyxxxxxxxxxxxxxxAxxxxxxxxxxxxxxxxxxwxxxxxxxx", "ZrrondWyknjldZZnqlfpdnxAadLdZwjnbwtnWinjMndZvnCQsu", "arrondayknjldaanqlepdnxaAdZdawinbwtnahnjandavnaasu", "drronSdyknjlEddnqlfpSnxddAdBdwjndwtndinjdnSdvncdsu", "ZrrondWyknjldZZnqlfpdnxLZdAdZwjnbvtnWinjHndZvnMQsu", "drronSdyknjlFddnqlfpSnxddBdAdwjndwtndinjdnSdvnddsu", "TrrondZyknjldXXnqlfpdnxZadZdAwjnbwtnZinjZndWvnZZsu", "wwwwwwwywwwwwwwwwwwwwwxwwwwwwAwwwMwwwwwwwwwwwwwwww", "jrronjjykneljjjnqljpjnxjijjjjwAnjwtnjjndjnjjvnjjsu", "nrroYnnynmnnnnnYqnnpnYxnnnnnnwnAnwtYnnXnncnnvYnnsu", "brrondayknjldbbnqlfpdmxbbdbdbwjnAwtnbinjbndbvnbbsu", "wwwwwwwywwwwwwwwwwwwwwxwwwvwwMwwwAwwwwwwwwwwwwwwww", "tttttttyttttttttttttttxttttttwtttwAtttttttstvttttu", "nrroRnnynmnnnnnQqnnpnRxnnnnnnwnYnwtAnnVnncnnvRnnsu", "ZrrondNyknjldZZnqlfpdnxWadWdZwjnbwtnAinjVndZvnWWsu", "irroniiyjnjliiinqlipinxihiiiiwjniwtniAnjiniivniisu", "nrroVnnynmnnnnnUqnnpnVxnnnnnnwnXnwtVnnAnncnnvVnnsu", "jrronjjyknOljjjnqljpjnxjjjjjjwdnjwtnjjnAjnjjvnjjsu", "ZrrondWyknjldZYnqlfpdnxMadHdZwjnbwtnVinjAndZvnMPsu", "nrrocnnynmnnnnncqnnonbwnnnnnnwncnwtcnncnnAnnvcnnsu", "drronFdyknjlSddnqlfpDnxddSdSdwjndwsndinjdnAdvnddsu", "XrrondZyknjldGSnqlfpdnxZadZdWwjnbwtnZinjZndAvnZZrt", "uvvvvvvyvvvvvvvvvvvvvvxvvvvvvwvvvwvvvvvvvvvvAvvvvv", "nrroLnnynlnnnnnIqnnpnJxnnnnnnwnYnwtRnnVnncnnvAnnsu", "ZrrnndWyknjldZZnqlfpdnxCacMdZwjnbwtnWinjMndZvnAQsu", "ZrrondWyknjldZZnqlfpdnxQadQdZwjnbwtnWinjPndZvnQAsu", "sssssssyssssssssssssssxsssssswssswtssssssssrvsssAu", "uuuuuuuyuuuuuuuuuuuuuuxuuuuuuwuuuwuuuuuuuuutvuuuuA"};
    vector<string> destroy = {"ArrondZyknjldXXnqlfpdnxZadZdTwjnbwtnZinjZndXunZZsu", "rAgrrrrxrrrrrrqrrrrrrrxrrrrrrwrrrwtrrrrrrrrrvrrrsu", "rgArrrryrrrrrrrrrrrrrrxrrrrrrwrrrwtrrrrrrrrrvrrrsu", "orrAoooyooooooooqoopooxoooooowooowtooooooooovonosu", "nrroAnnynmnnnnnLqnnpnKxnnnnnnwnYnwtRnnVnncnnvLnnsu", "drronAdyknjlSddnqlfpGnxddSdSdwjndwtndinjdnFdvnddsu", "ZrrondAyknjldZZnqlfpdnxWadWdZwjnawtnNinjWndZvnWWsu", "yxyyyyyAyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "krronkkyAnklkkknqlkpknxkkkkkkwknkwtnkjnkknkkvnkksu", "nrromnnynAnnnnnmqnnpnmxnnnnnnwnmnwtmnnmnnmnnvlnnsu", "jrronjjyknAkjjjnqljpjnxjjjjjjwenjwtnjjnOjnjjvnjjsu", "lrronllylnkAlllnqflplnxllllllwlnlwtnllnllnllvnllsu", "drronSdyknjlAddnqlfpRnxddEdFdwjndwtndinjdnSdvnddsu", "XrrondZyknjldATnplfpdnxZadZdXwjnbwtnZinjZndGvnZZsu", "XqrondZyknjldTAnqlfpdnxZadZdXwjnbwtnZinjYndSvnZZsu", "nrroLnnynmnnnnnAqnnpnKxnnnnnnwnYnwtQnnUnncnnvInnsu", "qrrqqqqyqqqqqpqqAqqqqqxqqqqqqwqqqwtqqqqqqqqqvqqqsu", "lrronllylnlflllnqAlplnxllllllwlnlwtnllnllnllvnllsu", "frronffyknjlfffnqlApfnxfeffffwjnfwtnfinjfnffvnffsu", "prrppppyppppppppqppAppxppppppwpppwtppppppoppvpppsu", "drronGdyknjlRddnqlfpAnxddSdSdwjndwtndinjdnDdvnddsu", "nrroKnnynmnnnnnKqnnpnAxnnnnnnwnYmwtRnnVnnbnnvJnnsu", "xxxxxxxyxxxxxxxxxxxxxxAxxxxxxxxxxxxxxxxxxwxxxxxxxx", "ZrrondWyknjldZZnqlfpdnxAadLdZwjnbwtnWinjMndZvnCQsu", "arrondayknjldaanqlepdnxaAdZdawinbwtnahnjandavnaasu", "drronSdyknjlEddnqlfpSnxddAdBdwjndwtndinjdnSdvncdsu", "ZrrondWyknjldZZnqlfpdnxLZdAdZwjnbvtnWinjHndZvnMQsu", "drronSdyknjlFddnqlfpSnxddBdAdwjndwtndinjdnSdvnddsu", "TrrondZyknjldXXnqlfpdnxZadZdAwjnbwtnZinjZndWvnZZsu", "wwwwwwwywwwwwwwwwwwwwwxwwwwwwAwwwMwwwwwwwwwwwwwwww", "jrronjjykneljjjnqljpjnxjijjjjwAnjwtnjjndjnjjvnjjsu", "nrroYnnynmnnnnnYqnnpnYxnnnnnnwnAnwtYnnXnncnnvYnnsu", "brrondayknjldbbnqlfpdmxbbdbdbwjnAwtnbinjbndbvnbbsu", "wwwwwwwywwwwwwwwwwwwwwxwwwvwwMwwwAwwwwwwwwwwwwwwww", "tttttttyttttttttttttttxttttttwtttwAtttttttstvttttu", "nrroRnnynmnnnnnQqnnpnRxnnnnnnwnYnwtAnnVnncnnvRnnsu", "ZrrondNyknjldZZnqlfpdnxWadWdZwjnbwtnAinjVndZvnWWsu", "irroniiyjnjliiinqlipinxihiiiiwjniwtniAnjiniivniisu", "nrroVnnynmnnnnnUqnnpnVxnnnnnnwnXnwtVnnAnncnnvVnnsu", "jrronjjyknOljjjnqljpjnxjjjjjjwdnjwtnjjnAjnjjvnjjsu", "ZrrondWyknjldZYnqlfpdnxMadHdZwjnbwtnVinjAndZvnMPsu", "nrrocnnynmnnnnncqnnonbwnnnnnnwncnwtcnncnnAnnvcnnsu", "drronFdyknjlSddnqlfpDnxddSdSdwjndwsndinjdnAdvnddsu", "XrrondZyknjldGSnqlfpdnxZadZdWwjnbwtnZinjZndAvnZZrt", "uvvvvvvyvvvvvvvvvvvvvvxvvvvvvwvvvwvvvvvvvvvvAvvvvv", "nrroLnnynlnnnnnIqnnpnJxnnnnnnwnYnwtRnnVnncnnvAnnsu", "ZrrnndWyknjldZZnqlfpdnxCacMdZwjnbwtnWinjMndZvnAQsu", "ZrrondWyknjldZZnqlfpdnxQadQdZwjnbwtnWinjPndZvnQAsu", "sssssssyssssssssssssssxsssssswssswtssssssssrvsssAu", "uuuuuuuyuuuuuuuuuuuuuuxuuuuuuwuuuwuuuuuuuuutvuuuuA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> kingdom = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    vector<string> build = {"Arrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrAr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrA"};
    vector<string> destroy = {"Arrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrArr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrAr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 2107;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> kingdom = {"01111111111111111111111111111111111111111111111111", "10111111111111111111111111111111111111111111111111", "11011111111111111111111111111111111111111111111111", "11101111111111111111111111111111111111111111111111", "11110111111111111111111111111111111111111111111111", "11111011111111111111111111111111111111111111111111", "11111101111111111111111111111111111111111111111111", "11111110111111111111111111111111111111111111111111", "11111111011111111111111111111111111111111111111111", "11111111101111111111111111111111111111111111111111", "11111111110111111111111111111111111111111111111111", "11111111111011111111111111111111111111111111111111", "11111111111101111111111111111111111111111111111111", "11111111111110111111111111111111111111111111111111", "11111111111111011111111111111111111111111111111111", "11111111111111101111111111111111111111111111111111", "11111111111111110111111111111111111111111111111111", "11111111111111111011111111111111111111111111111111", "11111111111111111101111111111111111111111111111111", "11111111111111111110111111111111111111111111111111", "11111111111111111111011111111111111111111111111111", "11111111111111111111101111111111111111111111111111", "11111111111111111111110111111111111111111111111111", "11111111111111111111111011111111111111111111111111", "11111111111111111111111101111111111111111111111111", "11111111111111111111111110111111111111111111111111", "11111111111111111111111111011111111111111111111111", "11111111111111111111111111101111111111111111111111", "11111111111111111111111111110111111111111111111111", "11111111111111111111111111111011111111111111111111", "11111111111111111111111111111101111111111111111111", "11111111111111111111111111111110111111111111111111", "11111111111111111111111111111111011111111111111111", "11111111111111111111111111111111101111111111111111", "11111111111111111111111111111111110111111111111111", "11111111111111111111111111111111111011111111111111", "11111111111111111111111111111111111101111111111111", "11111111111111111111111111111111111110111111111111", "11111111111111111111111111111111111111011111111111", "11111111111111111111111111111111111111101111111111", "11111111111111111111111111111111111111110111111111", "11111111111111111111111111111111111111111011111111", "11111111111111111111111111111111111111111101111111", "11111111111111111111111111111111111111111110111111", "11111111111111111111111111111111111111111111011111", "11111111111111111111111111111111111111111111101111", "11111111111111111111111111111111111111111111110111", "11111111111111111111111111111111111111111111111011", "11111111111111111111111111111111111111111111111101", "11111111111111111111111111111111111111111111111110"};
    vector<string> build = {"ABBBBCCBBBBBBBBBCBBBBBBBBCBBCBBBBBBBBBBBBBBBBBBBBB", "BABBBBBBBBBCBCBCBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBB", "BBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBB", "BBBABBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBB", "BBBBABBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBABBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBB", "BBBBBBBBABBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBCBB", "BBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBCBBBBB", "BBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBCBBBBBBCBBBBBB", "BCBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBABBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBCBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBCBBABBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBCBCBBBBBBBB", "BBBBBCBBBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBABBCBBBBBBBBBBBBBBBCBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBABBBBBBBBBCBBBBBBBCBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBCCBBBBBBBBBB", "BBBBBBBBBBBBBBBBBCCBBABBCBBBBBBBBBBBBBBBBBCBBBBBBB", "BBBBCBBBBBBBBBBBBBBBBBABBBBBBBBBCBBBBBCBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBCBBBBBBCBBBBBCBBABBBBBBBBBBBCBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBCBBBBBBBBBBB", "BBBCBBBBBBBBBBBBBBBBBBBCBBBABBBCBBBBBBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBCBBBBBBBBBABBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBCBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBABBBBBBBBCBBBCBBBBB", "BBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBABBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBCBBBBBBBB", "BBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBB", "BBBBBBBBBBCBBBBBBBBBBBBBCBBBBBBBBBBBABBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBCCBBBBBBBBBBBBBBBBBABBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBCBCBBBCBBBBBBBBBBBABCBBBBCBBBC", "BBBBBBBCBBBBBBBBCBBBCBBBBBBBBBBBBBBBBBBABBBBBBCBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBCBABBBBBBBBB", "BBBBBBBBBBBBBBBBCBBBBBBBBBBBBBCBBBCBBBBBBABBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBABBBBBBB", "BBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBB", "BBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBABBBBB", "BBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBABBCB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBABBB", "BBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBAB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBA"};
    vector<string> destroy = {"ABBBBCCBBBBBBBBBCBBBBBBBBCBBCBBBBBBBBBBBBBBBBBBBBB", "BABBBBBBBBBCBCBCBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBB", "BBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBB", "BBBABBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBB", "BBBBABBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBABBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBB", "BBBBBBBBABBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBCBB", "BBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBCBBBBB", "BBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBCBBBBBBCBBBBBB", "BCBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBABBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBCBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBCBBABBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBCBCBBBBBBBB", "BBBBBCBBBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBABBCBBBBBBBBBBBBBBBCBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBABBBBBBBBBCBBBBBBBCBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBCCBBBBBBBBBB", "BBBBBBBBBBBBBBBBBCCBBABBCBBBBBBBBBBBBBBBBBCBBBBBBB", "BBBBCBBBBBBBBBBBBBBBBBABBBBBBBBBCBBBBBCBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBABBBCBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBCBBBBBBCBBBBBCBBABBBBBBBBBBBCBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBCBBBBBBBBBBB", "BBBCBBBBBBBBBBBBBBBBBBBCBBBABBBCBBBBBBBBBBBBBBBBBB", "CBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBCBBBBBBBBBABBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBCBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBABBBBBBBBCBBBCBBBBB", "BBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBABBBBBBBBBBBBBBBBB", "BCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBCBBBBBBBB", "BBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBBBBBBBBBB", "BBBBBBBBBBCBBBBBBBBBBBBBCBBBBBBBBBBBABBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBCCBBBBBBBBBBBBBBBBBABBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBCBCBBBCBBBBBBBBBBBABCBBBBCBBBC", "BBBBBBBCBBBBBBBBCBBBCBBBBBBBBBBBBBBBBBBABBBBBBCBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBCBABBBBBBBBB", "BBBBBBBBBBBBBBBBCBBBBBBBBBBBBBCBBBCBBBBBBABBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBABBBBBBB", "BBBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBBBBB", "BBBBBBBBBCBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBBBABBBBB", "BBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBABBCB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBABBB", "BBBBBBBBCBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBAB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCBBBBBBBBBBA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> kingdom = {"01111111111111111111111111111111111111111111111111", "10111111111111111111111111111111111111111111111111", "11011111111111111111111111111111111111111111111111", "11101111111111111111111111111111111111111111111111", "11110111111111111111111111111111111111111111111111", "11111011111111111111111111111111111111111111111111", "11111101111111111111111111111111111111111111111111", "11111110111111111111111111111111111111111111111111", "11111111011111111111111111111111111111111111111111", "11111111101111111111111111111111111111111111111111", "11111111110111111111111111111111111111111111111111", "11111111111011111111111111111111111111111111111111", "11111111111101111111111111111111111111111111111111", "11111111111110111111111111111111111111111111111111", "11111111111111011111111111111111111111111111111111", "11111111111111101111111111111111111111111111111111", "11111111111111110111111111111111111111111111111111", "11111111111111111011111111111111111111111111111111", "11111111111111111101111111111111111111111111111111", "11111111111111111110111111111111111111111111111111", "11111111111111111111011111111111111111111111111111", "11111111111111111111101111111111111111111111111111", "11111111111111111111110111111111111111111111111111", "11111111111111111111111011111111111111111111111111", "11111111111111111111111101111111111111111111111111", "11111111111111111111111110111111111111111111111111", "11111111111111111111111111011111111111111111111111", "11111111111111111111111111101111111111111111111111", "11111111111111111111111111110111111111111111111111", "11111111111111111111111111111011111111111111111111", "11111111111111111111111111111101111111111111111111", "11111111111111111111111111111110111111111111111111", "11111111111111111111111111111111011111111111111111", "11111111111111111111111111111111101111111111111111", "11111111111111111111111111111111110111111111111111", "11111111111111111111111111111111111011111111111111", "11111111111111111111111111111111111101111111111111", "11111111111111111111111111111111111110111111111111", "11111111111111111111111111111111111111011111111111", "11111111111111111111111111111111111111101111111111", "11111111111111111111111111111111111111110111111111", "11111111111111111111111111111111111111111011111111", "11111111111111111111111111111111111111111101111111", "11111111111111111111111111111111111111111110111111", "11111111111111111111111111111111111111111111011111", "11111111111111111111111111111111111111111111101111", "11111111111111111111111111111111111111111111110111", "11111111111111111111111111111111111111111111111011", "11111111111111111111111111111111111111111111111101", "11111111111111111111111111111111111111111111111110"};
    vector<string> build = {"AfffnowmvxfufsfqfmtefplireffffvmffgffQejfffefmffhe", "fAZOnowmvxQuZsTqZmtfZplirfWdZZvmZOgcPffjcZcfOmVRif", "fZAZnowmvxZuRsZqMmtfZplirfZdYKvmYZgcZffjcOcfZmZZhf", "fOZAoowmvxQuZsTqZmtfZplirfWeZZvmZIgcCffjcZcfFmVQhf", "nnnoAownwxnunsnqnntnnpnnrnnnnnvnnnnnnnnnnnnnnnnnnn", "oooooAwovxouosoqootoopoorpoooovooooooooooooooooooo", "wwwwwwAwwywwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxww", "mmmmnowAvxmumsmqmktmmpmmrmmmmmvlmmmmmmmmmmmmmkmmmm", "vvvvwvwvAxvvvvvvvvvvvvvvvvvvvvbvvvvvvvvvvvvvvvvvvv", "xxxxxxyxxAxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "fQZQnowmvxAuZsTqZmtfaplirfXdZZvmZQgcQffjcZcfQmVGhf", "uuuuuuwuvxuAuuuuuuuuuuuuvuuuuuvuuuuuuuuuuuuuuuuuuu", "fZRZnowmvxZuAsZqRmtfYplirfZdYRvmYZgcZffjcScfZmZZhf", "sssssswsvxsusAsssstsssssssstssvsssssssssssssssssss", "fTZTnowmvxTuZsAqZmtfZplisfWdZZvmZTgcTffjcZcfTmVUhf", "qqqqqqwqvxquqsqAqqtqqqqqrqqqqqvqqqqqqqqqqqqqqqqrqq", "fZMZnowmvxZuRsZqAmtfYplirfZdYLvmYZgcZffjcNcfZmZZhf", "mmmmnowkvxmumsmqmAtmmpmmrmmmmmvVmmmmmmmmmmmmmcmmmm", "ttttttwtvxtuttttttAtttttttutttvttttttttttttttttttt", "efffnowmvxfufsfqfmtAfpmirKffffvmffgfffLjfffTfmffhK", "fZZZnowmvxauYsZqYmtfAplirfZdXYvmYZgcZffjcYcfZmZZhf", "ppppppwpvxpupspqpptppApprpppppvppppqpppppppppppppp", "llllnowmvxlulslqlmtmlpAlrlllllvmlllllllllllllmllll", "iiiinowmvxiuisiqimtiiplArijiiivmiiiiiiijiiiiimiiii", "rrrrrrwrvxrvrssrrrtrrrrrArrrrrvrrrrrrrrrrrrrrrrrrr", "efffnpwmvxfufsfqfmtKfplirAffffvmffgffeHjfffSfmffhG", "fWZWnowmvxXuZsWqZmufZpljrfAdZZvmZWgcWffjcZcfWmWWhf", "fddenowmvxdudtdqdmtfdplirfdAddvmddgddffjdddfdmddhf", "fZYZnowmvxZuYsZqYmtfXplirfZdAYvmNZgcZffjcYdfZmZZhf", "fZKZnowmvxZuRsZqLmtfYplirfZdYAvmYZgcZffjcNcfZmZZhf", "vvvvvvwvbxvvvvvvvvvvvvvvvvvvvvAvvvvvvvvvvvvvvvvvvv", "mmmmnowlvxmumsmqmVtmmpmmrmmmmmvAmmmmmmmmmmmmmbmmmm", "fZYZnowmvxZuYsZqYmtfYplirfZdNYvmAZgcZffjcYcfZmZZhf", "fOZInowmvxQuZsTqZmtfZplirfWdZZvmZAhcIffjcZcfJmVQhf", "ggggnowmvxgugsgqgmtggplirgggggvmghAggggkgggggmgghg", "fcccnowmvxcucscqcmtfcqlirfcdccvmccgAcffjHcEfcmcchf", "fPZCnowmvxQuZsTqZmtfZplirfWdZZvmZIgcAffjcZcfEmVQhf", "QfffnowmvxfufsfqfmtffplireffffvmffgffAejfffefmffhe", "efffnowmvxfufsfqfmtLfplirHffffvmffgffeAjfffSfmffhD", "jjjjnowmvxjujsjqjmtjjpljrjjjjjvmjjkjjjjAjjjjjmjjjj", "fcccnowmvxcucscqcmtfcplirfcdccvmccgHcffjAcIfcmcchf", "fZOZnowmvxZuSsZqNmtfYplirfZdYNvmYZgcZffjcAcfZnZZhf", "fcccnowmvxcucscqcmtfcplirfcddcvmccgEcffjIcAfcmcchf", "efffnowmvxfufsfqfmtTfplirSffffvmffgffeSjfffAgmffhS", "fOZFnowmvxQuZsTqZmtfZplirfWdZZvmZJgcEffjcZcgAmWQhf", "mmmmnowkvxmumsmqmctmmpmmrmmmmmvbmmmmmmmmmnmmmAmmmm", "fVZVnowmvxVuZsVqZmtfZplirfWdZZvmZVgcVffjcZcfWmAVhf", "fRZQnoxmvxGuZsUrZmtfZplirfWdZZvmZQgcQffjcZcfQmVAhf", "hihhnowmvxhuhshqhmthhplirhhhhhvmhhhhhhhjhhhhhmhhAh", "efffnowmvxfufsfqfmtKfplirGffffvmffgffeDjfffSfmffhA"};
    vector<string> destroy = {"AfffnowmvxfufsfqfmtefplireffffvmffgffQejfffefmffhe", "fAZOnowmvxQuZsTqZmtfZplirfWdZZvmZOgcPffjcZcfOmVRif", "fZAZnowmvxZuRsZqMmtfZplirfZdYKvmYZgcZffjcOcfZmZZhf", "fOZAoowmvxQuZsTqZmtfZplirfWeZZvmZIgcCffjcZcfFmVQhf", "nnnoAownwxnunsnqnntnnpnnrnnnnnvnnnnnnnnnnnnnnnnnnn", "oooooAwovxouosoqootoopoorpoooovooooooooooooooooooo", "wwwwwwAwwywwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxww", "mmmmnowAvxmumsmqmktmmpmmrmmmmmvlmmmmmmmmmmmmmkmmmm", "vvvvwvwvAxvvvvvvvvvvvvvvvvvvvvbvvvvvvvvvvvvvvvvvvv", "xxxxxxyxxAxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "fQZQnowmvxAuZsTqZmtfaplirfXdZZvmZQgcQffjcZcfQmVGhf", "uuuuuuwuvxuAuuuuuuuuuuuuvuuuuuvuuuuuuuuuuuuuuuuuuu", "fZRZnowmvxZuAsZqRmtfYplirfZdYRvmYZgcZffjcScfZmZZhf", "sssssswsvxsusAsssstsssssssstssvsssssssssssssssssss", "fTZTnowmvxTuZsAqZmtfZplisfWdZZvmZTgcTffjcZcfTmVUhf", "qqqqqqwqvxquqsqAqqtqqqqqrqqqqqvqqqqqqqqqqqqqqqqrqq", "fZMZnowmvxZuRsZqAmtfYplirfZdYLvmYZgcZffjcNcfZmZZhf", "mmmmnowkvxmumsmqmAtmmpmmrmmmmmvVmmmmmmmmmmmmmcmmmm", "ttttttwtvxtuttttttAtttttttutttvttttttttttttttttttt", "efffnowmvxfufsfqfmtAfpmirKffffvmffgfffLjfffTfmffhK", "fZZZnowmvxauYsZqYmtfAplirfZdXYvmYZgcZffjcYcfZmZZhf", "ppppppwpvxpupspqpptppApprpppppvppppqpppppppppppppp", "llllnowmvxlulslqlmtmlpAlrlllllvmlllllllllllllmllll", "iiiinowmvxiuisiqimtiiplArijiiivmiiiiiiijiiiiimiiii", "rrrrrrwrvxrvrssrrrtrrrrrArrrrrvrrrrrrrrrrrrrrrrrrr", "efffnpwmvxfufsfqfmtKfplirAffffvmffgffeHjfffSfmffhG", "fWZWnowmvxXuZsWqZmufZpljrfAdZZvmZWgcWffjcZcfWmWWhf", "fddenowmvxdudtdqdmtfdplirfdAddvmddgddffjdddfdmddhf", "fZYZnowmvxZuYsZqYmtfXplirfZdAYvmNZgcZffjcYdfZmZZhf", "fZKZnowmvxZuRsZqLmtfYplirfZdYAvmYZgcZffjcNcfZmZZhf", "vvvvvvwvbxvvvvvvvvvvvvvvvvvvvvAvvvvvvvvvvvvvvvvvvv", "mmmmnowlvxmumsmqmVtmmpmmrmmmmmvAmmmmmmmmmmmmmbmmmm", "fZYZnowmvxZuYsZqYmtfYplirfZdNYvmAZgcZffjcYcfZmZZhf", "fOZInowmvxQuZsTqZmtfZplirfWdZZvmZAhcIffjcZcfJmVQhf", "ggggnowmvxgugsgqgmtggplirgggggvmghAggggkgggggmgghg", "fcccnowmvxcucscqcmtfcqlirfcdccvmccgAcffjHcEfcmcchf", "fPZCnowmvxQuZsTqZmtfZplirfWdZZvmZIgcAffjcZcfEmVQhf", "QfffnowmvxfufsfqfmtffplireffffvmffgffAejfffefmffhe", "efffnowmvxfufsfqfmtLfplirHffffvmffgffeAjfffSfmffhD", "jjjjnowmvxjujsjqjmtjjpljrjjjjjvmjjkjjjjAjjjjjmjjjj", "fcccnowmvxcucscqcmtfcplirfcdccvmccgHcffjAcIfcmcchf", "fZOZnowmvxZuSsZqNmtfYplirfZdYNvmYZgcZffjcAcfZnZZhf", "fcccnowmvxcucscqcmtfcplirfcddcvmccgEcffjIcAfcmcchf", "efffnowmvxfufsfqfmtTfplirSffffvmffgffeSjfffAgmffhS", "fOZFnowmvxQuZsTqZmtfZplirfWdZZvmZJgcEffjcZcgAmWQhf", "mmmmnowkvxmumsmqmctmmpmmrmmmmmvbmmmmmmmmmnmmmAmmmm", "fVZVnowmvxVuZsVqZmtfZplirfWdZZvmZVgcVffjcZcfWmAVhf", "fRZQnoxmvxGuZsUrZmtfZplirfWdZZvmZQgcQffjcZcfQmVAhf", "hihhnowmvxhuhshqhmthhplirhhhhhvmhhhhhhhjhhhhhmhhAh", "efffnowmvxfufsfqfmtKfplirGffffvmffgffeDjfffSfmffhA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 42169;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> kingdom = {"01111111111111111111111111111111111111111111111111", "10111111111111111111111111111111111111111111111111", "11011111111111111111111111111111111111111111111111", "11101111111111111111111111111111111111111111111111", "11110111111111111111111111111111111111111111111111", "11111011111111111111111111111111111111111111111111", "11111101111111111111111111111111111111111111111111", "11111110111111111111111111111111111111111111111111", "11111111011111111111111111111111111111111111111111", "11111111101111111111111111111111111111111111111111", "11111111110111111111111111111111111111111111111111", "11111111111011111111111111111111111111111111111111", "11111111111101111111111111111111111111111111111111", "11111111111110111111111111111111111111111111111111", "11111111111111011111111111111111111111111111111111", "11111111111111101111111111111111111111111111111111", "11111111111111110111111111111111111111111111111111", "11111111111111111011111111111111111111111111111111", "11111111111111111101111111111111111111111111111111", "11111111111111111110111111111111111111111111111111", "11111111111111111111011111111111111111111111111111", "11111111111111111111101111111111111111111111111111", "11111111111111111111110111111111111111111111111111", "11111111111111111111111011111111111111111111111111", "11111111111111111111111101111111111111111111111111", "11111111111111111111111110111111111111111111111111", "11111111111111111111111111011111111111111111111111", "11111111111111111111111111101111111111111111111111", "11111111111111111111111111110111111111111111111111", "11111111111111111111111111111011111111111111111111", "11111111111111111111111111111101111111111111111111", "11111111111111111111111111111110111111111111111111", "11111111111111111111111111111111011111111111111111", "11111111111111111111111111111111101111111111111111", "11111111111111111111111111111111110111111111111111", "11111111111111111111111111111111111011111111111111", "11111111111111111111111111111111111101111111111111", "11111111111111111111111111111111111110111111111111", "11111111111111111111111111111111111111011111111111", "11111111111111111111111111111111111111101111111111", "11111111111111111111111111111111111111110111111111", "11111111111111111111111111111111111111111011111111", "11111111111111111111111111111111111111111101111111", "11111111111111111111111111111111111111111110111111", "11111111111111111111111111111111111111111111011111", "11111111111111111111111111111111111111111111101111", "11111111111111111111111111111111111111111111110111", "11111111111111111111111111111111111111111111111011", "11111111111111111111111111111111111111111111111101", "11111111111111111111111111111111111111111111111110"};
    vector<string> build = {"Azzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzA"};
    vector<string> destroy = {"Azzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzAz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 59976;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> kingdom = {"00000000000001000000000000000000000000000000000000", "00000000000000000000001000000000000000000000000000", "00000000000000000000000000000000000000000000010000", "00000000000000000000000000000000000010000000000000", "00000000100000000000000000000000000000000000000000", "00000000000000000000000000000000000000100000000000", "00000000000000000000010000000000000000000000000000", "00000000000000010000000000000000000000000000000000", "00001000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000010000000", "00000000000000000000000000000000000000010000000000", "00000000000010000000000000000000000000000000000000", "00000000000100000000000000000000000000000000000000", "10000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000001", "00000001000000000000000000000000000000000000000000", "00000000000000000000000000000000000100000000000000", "00000000000000000000000000000000000000000000100000", "00000000000000000000000000000000100000000000000000", "00000000000000000000000000000000000000000100000000", "00000000000000000000000000000000000000000000000100", "00000010000000000000000000000000000000000000000000", "01000000000000000000000000000000000000000000000000", "00000000000000000000000010000000000000000000000000", "00000000000000000000000100000000000000000000000000", "00000000000000000000000000000000001000000000000000", "00000000000000000000000000001000000000000000000000", "00000000000000000000000000000010000000000000000000", "00000000000000000000000000100000000000000000000000", "00000000000000000000000000000000000000000000001000", "00000000000000000000000000010000000000000000000000", "00000000000000000000000000000000000000000000000010", "00000000000000000010000000000000000000000000000000", "00000000000000000000000000000000000001000000000000", "00000000000000000000000001000000000000000000000000", "00000000000000001000000000000000000000000000000000", "00010000000000000000000000000000000000000000000000", "00000000000000000000000000000000010000000000000000", "00000100000000000000000000000000000000000000000000", "00000000001000000000000000000000000000000000000000", "00000000000000000000000000000000000000000001000000", "00000000000000000001000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "00000000000000000000000000000000000000001000000000", "00000000000000000100000000000000000000000000000000", "00100000000000000000000000000000000000000000000000", "00000000000000000000000000000100000000000000000000", "00000000000000000000100000000000000000000000000000", "00000000000000000000000000000001000000000000000000", "00000000000000100000000000000000000000000000000000"};
    vector<string> build = {"AQRpnQqKKFdOObRFSUXxvgNUWQqbYSnQPrNVIVAfISGcFneCXt", "QAWGlkeFMeGqoZIWuSTaeHNJjmGHWQOMPrXzFndblpxFSfznzW", "RWAPPfJUftfgbmoRFCRbYHjfVngKECLUtzqeNOnQRJQEWUuxvO", "pGPATBGPgHToHlUNigAIvjfItMLTKmuAbUOJJhApElRkLPUqxx", "nlPTAGwXGZPYBtnfDOOVBkawnyqligtnnsiZituIrXFbdAWBOO", "QkfBGASHoTNjTYluhXNXtRDVsUGZLhhGuTrjrHFdJyKemjqLqq", "qeJGwSATLhNrFgXNGtYgFDamKGAyfBhSebRSMBxjDsKFmXKikR", "KFUPXHTATodpKXgIpRizFgFOAYOXJCoQnpbUWhuLOrZOOLXoaq", "KMfgGoLTAhrhsFswksedLJrZEogOmIMqkxMCBKqTGUWprlQXKe", "FetHZThohAENeKVytlZSOKrJEpCaNCzVcbKtkupjKtJZvkgoIb", "dGfTPNNdrEAJigpcltGNOnZVbgvBWLDePBIXeCeiSJUvXMQHhh", "OqgoYjrphNJAvDvwlaBzHbmUQYEuHYeQkyVpqjMibJWPELInNd", "OobHBTFKseivAsHDaUzZlANGbkcqkTCBCNvGFHcpBtYeHzePoh", "bZmltYgXFKgDsAtqQtLhIFKwZyHzzTqVfUGrFbLmKarssKNgZK", "RIoUnlXgsVpvHtADRkrPzQhpGmQbVXNDYgoFbYdTJaMjyFLJdx", "FWRNfuNIwycwDqDAUOixpJdnOWVuCyTZeVsFFtOWOMkaRlpxjj", "SuFiDhGpktllaQRUAtUQUsrIIOjQcpkRLaPMogVpuKefDecBOh", "USCgOXtRsltaUtkOtAGYVsdjoWSCjbJvkbkMjJGHPZdlUSsgod", "XTRAONYieZGBzLriUGANAJEBBCnjoFupmuVTpzfRyeodfDrfin", "xabIVXgzdSNzZhPxQYNApfRqkTwCcDrdZntHjoFOlfRcDcyMJM", "veYvBtFFLOOHlIzpUVApAKxFAKWwsgVhENwhvkSaPSHIqAIfhl", "gHHjkRDgJKnbAFQJssJfKAYKHVyRKysFmfZjZkoEBAsMNXymkU", "NNjfaDaFrrZmNKhdrdERxYAKawcmMhoQOLYQVQHgBjLPsWXrbt", "UJfIwVmOZJVUGwpnIjBqFKKAUTNsgimdTWicEpDitjubLKfcHo", "WjVtnsKAEEbQbZGOIoBkAHaUAItrRWfevNzUYXZvsMCoEQbHAM", "QmnMyUGYopgYkymWOWCTKVwTIAoXhxKzUtKcdWrkBoAIZzzvES", "qGgLqGAOgCvEcHQVjSnwWycNtoAjxpufZPNMzbckndBhgctmyV", "bHKTlZyXOaBuqzbuQCjCwRmsrXjAMPJgMzTnRtlZstjobOgzLX", "YWEKiLfJmNWHkzVCcjocsKMgRhxMAzRSDhgNrUUjwBtVqDwAKa", "SQCmghBCICLYTTXypbFDgyhiWxpPzAvCpFIBnZeWszXLTKrpWC", "nOLuthhoMzDeCqNTkJurVsomfKuJRvAgkPGBaLcvbxPnEjcpHR", "QMUAnGSQqVeQBVDZRvpdhFQdezfgSCgASetssgZlzVygFXARou", "PPtbnuenkcPkCfYeLkmZEmOTvUZMDpkSAvaAxnqRhHATVKuLdJ", "rrzUsTbpxbByNUgVabunNfLWNtPzhFPevAqJmClhYGHYkZlheZ", "NXqOirRbMKIVvGosPkVtwZYizKNTgIGtaqAnBRrGeFxuSMNhBy", "VzeJZjSUCtXpGrFFMMTHhjQcUcMnNBBsAJnAsTCTEkyGfxPkmD", "IFNJirMWBkeqFFbFojpjvZVEYdzRrnasxmBsAvpfyTXXUgwUrt", "VnOhtHBhKuCjHbYtgJzokkQpXWbtUZLgnCRTvAMgCnukBwWSVg", "AdnAuFxuqpeMcLdOVGfFSoHDZrclUecZqlrCpMAZohbxfLNdFU", "fbQpIdjLTjiipmTWpHROaEgivkkZjWvlRhGTfgZAAXvEWpUHVb", "IlRErJDOGKSbBKJOuPylPBBtsBnswsbzhYeEyCoAAjKJDNeBgI", "SpJlXysrUtJJtaaMKZefSAjjModtBzxVHGFkTnhXjAsPsyYXFs", "GxQRFKKZWJUWYrMkedoRHsLuCABjtXPyAHxyXubvKsAqrwMAed", "cFEkbeFOpZvPesjafldcIMPboIhoVLngTYuGXkxEJPqADeFJnM", "FSWLdmmOrvXEHsyRDUfDqNsLEZgbqTEFVkSfUBfWDsrDApwfMY", "nfUPAjXLlkMLzKFleSDcAXWKQzcODKjXKZMxgwLpNywepAfFVj", "ezuUWqKXQgQIeNLpcsryIyXfbztgwrcAulNPwWNUeYMFwfArHx", "CnxqBLioXoHnPgJxBgfMfmrcHvmzAppRLhhkUSdHBXAJfFrAlQ", "XzvxOqkaKIhNoZdjOoiJhkbHAEyLKWHodeBmrVFVgFenMVHlAj", "tWOxOqRqebhdhKxjhdnMlUtoMSVXaCRuJZyDtgUbIsdMYjxQjA"};
    vector<string> destroy = {"AGcjbgLlorgDcDBZWoyngzFICXfHfWwlJKfodgETZsMsFLIQrA", "GAjDbjPKHhYePCivaipjwtorGffGtIzmrFygsBlIjJZrHAKbuY", "cjADjlrfMmrZBkTSUDbqzRIeoGuNFZsiwZXbICTKjJonSTLHMS", "jDDAbUvWAbhJrsArwZeUDgGlwsOTDYLcQoFIUqMpKCPHvuEVyo", "bbjbAuCZHqRKRPRTQeRvYvRSXewZhaUXoiRlxHbHZjTxydFILP", "gjlUuAdeXaatviSJrjdRpNRaOlrLjpVuZQVyCUlfybaCCKraMd", "LPrvCdAsgRZUvuwaJoRFgEdROsDDVcFxQREoYNkvYlevyCBdzF", "lKfWZesAhurbjrmRvxVxATvXwnYRlFhgRQWIeLXkvlHMatsdMj", "oHMAHXghACBElHscahIGvYCFtfStoMfTcNlOWANzjjUGhNcWZv", "rhmbqaRuCACdrsjKByvKROBPZwVAOEQyHzvFqcsdKnkuLpjIsq", "gYrhRaZrBCAEvANOpjkEneSmHazRptUfdPEdTebnornHaDyHQL", "DeZJKtUbEdEAKurFVXqwZaCgFVPXKBmNvuFJxaKqUDoDMoQrpA", "cPBrRvvjlrvKAdtcDpdorKGJkeuAovaJQXPzGpRQlDsPgmaort", "DCksPiurHsAudAirXWtRHfjymemWiaswQIINpWByHEelWuflzP", "BiTARSwmsjNrtiAOnwVYmyfaYGikitYhkBYMmRfpcsIqTCiDeS", "ZvSrTJaRcKOFcrOAVLWGRsXifrJypmPPKbHLMEolIJTRWcCySi", "WaUwQrJvaBpVDXnVAAWUWHlRZNiPdcppqacFNtutPzXHbQZwMf", "oiDZejoxhyjXpWwLAAQQQVcMHeGTNWOSDZQIGEyLBRDlaXMYZI", "ypbeRdRVIvkqdtVWWQACWEQWxkFcQvWDsMePNSHqDxtscAnmod", "njqUvRFxGKEwoRYGUQCApTVklebYhqCZKDkIZaeCIQHpxHlhIg", "gwzDYpgAvRnZrHmRWQWpAaJYLdnaLWciXCxcGkvgrttfuRQfCn", "ztRgvNETYOeaKfysHVETaAyHMKgYLOadiDSRPSmzYGadBReGfc", "FoIGRRdvCBSCGjfXlcQVJyALSofdmMWWWtRTxFtsMnQhQxFknx", "IrelSaRXFPmgJyaiRMWkYHLAqMvHZETNfAHzovpLFYauwaFiPo", "CGowXOOwtZHFkmYfZHxlLMSqABqeZupVURPShAttvWGzoQFuMB", "XfGselsnfwaVeeGrNekedKoMBAMsKAUQNwmjxXHoEAldhXdwot", "ffuOwrDYSVzPumiJiGFbngfvqMAPXQKZUDhQmWfpeLkxiwxuRD", "HGNTZLDRtARXAWkyPTcYaYdHesPAQLRoLkkNekwDYxwGOgQFcW", "ftFDhjVloOpKoiipdNQhLLmZZKXQAcfqYiTsDvJehTjZKetkAz", "WIZYapcFMEtBvatmcWvqWOMEuAQLcARAoBogTcjqxRjMJXNscP", "wzsLUVFhfQUmasYPpOWCcaWTpUKRfRACRddJXPhMXjLbJaPZgd", "lmicXuxgTyfNJwhPpSDZidWNVQZoqACACNBwCNYOajeLgrlthm", "JrwQoZQRcHdvQQkKqDsKXiWfUNULYoRCAXEVvAOQUjYGZVmAxJ", "KFZoiQRQNzPuXIBbaZMDCDtARwDkiBdNXALFgJamPMqyHfYiSs", "fyXFRVEWlvEFPIYHcQekxSRHPmhkTodBELAoqQdUnImArFvDwJ", "ogbIlyoIOFdJzNMLFIPIcRTzSjQNsgJwVFoAvIhlAKPLgVJqxu", "dsIUxCYeWqTxGpmMNGNZGPxohxmeDTXCvgqvARizPNRINKHTgF", "gBCqHUNLAceapWREtESakSFvAXWkvcPNAJQIRAbinBoKhuinFN", "ElTMblkXNsbKRBfouyHevmtptHfwJjhYOadhibAOWqJpZwcJCK", "TIKpHfvkzdnqQypltLqCgzsLtopDeqMOQmUlziOAoOBhPKhbcW", "ZjjKZyYvjKoUlHcIPBDIrYMFvEeYhxXaUPnAPnWoADGvPaBAdw", "sJJCjblljnrDDEsJzRxQtGnYWALxTRjjjMIKNBqODATpkorHmi", "MZoPTaeHUknoseITXDtHtaQaGlkwjjLeYqmPRoJBGTAVJjLDxx", "srnHxCvMGuHDPlqRHlspfdhuzdxGZMbLGyALIKphvpVAWFeQkK", "FHSvyCyahLaMgWTWbacxuBQwohiOKJJgZHrgNhZPPkJWAMjgUb", "LATudKCtNpDomuCcQXAHRRxaQXwgeXarVfFVKuwKaojFMAtAQU", "IKLEFrBscjyQafiCZMnlQeFFFdxQtNPlmYvJHichBrLejtAVKE", "QbHVIaddWIHrolDywYmhfGkiuwuFksZtAiDqTnJbAHDQgAVAGK", "ruMyLMzMZsQprzeSMZoICfnPMoRcAcghxSwxgFCcdmxkUQKGAc", "AYSoPdFjvqLAtPSifIdgncxoBtDWzPdmJsJuFNKWwixKbUEKcA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> kingdom = {"00000000000000000000100000000001000000000000000000", "00010000000000000000000000000000000000000000000000", "00000000000001000000000000000000000000001000000000", "01000000000000000000000000000000000000000000000000", "00000000000000000001000000100000000000000000000000", "00000000000000000000000000000000000000000000001100", "00000000000000000000000100000000001000000000000000", "00000000000000000000000000000000000010000000010000", "00000000000000000000000000000000010000010000000000", "00000000000000000000000001001000000000000000000000", "00000000000000000000000000000000000100000001000000", "00000000000000000010000000000000000000000000000010", "00000000000000000000000000000110000000000000000000", "00100000000000000000000000000000000000001000000000", "00000000000000000000000000010000000001000000000000", "00000000000000000000000010000000000000000000000001", "00000000000000000100000000000000000000000100000000", "00000000000000001000000000000000000000000100000000", "00000000000100000000000000000000000000000000000010", "00001000000000000000000000100000000000000000000000", "10000000000000000000000000000001000000000000000000", "00000000000000000000000000000000100000000010000000", "00000000000000000000000000000000000000100000100000", "00000010000000000000000000000000001000000000000000", "00000000000000010000000000000000000000000000000001", "00000000010000000000000000001000000000000000000000", "00001000000000000001000000000000000000000000000000", "00000000000000100000000000000000000001000000000000", "00000000010000000000000001000000000000000000000000", "00000000000010000000000000000010000000000000000000", "00000000000010000000000000000100000000000000000000", "10000000000000000000100000000000000000000000000000", "00000000000000000000010000000000000000000010000000", "00000000100000000000000000000000000000010000000000", "00000010000000000000000100000000000000000000000000", "00000000001000000000000000000000000000000001000000", "00000001000000000000000000000000000000000000010000", "00000000000000100000000000010000000000000000000000", "00000000000000000000001000000000000000000000100000", "00000000100000000000000000000000010000000000000000", "00100000000001000000000000000000000000000000000000", "00000000000000001100000000000000000000000000000000", "00000000000000000000010000000000100000000000000000", "00000000001000000000000000000000000100000000000000", "00000000000000000000001000000000000000100000000000", "00000001000000000000000000000000000010000000000000", "00000100000000000000000000000000000000000000000100", "00000100000000000000000000000000000000000000001000", "00000000000100000010000000000000000000000000000000", "00000000000000010000000010000000000000000000000000"};
    vector<string> build = {"AJXSwwiBnSDxkHhgYTKRqKeidFbkrOeDZfhCQnPvFsDByEVVIE", "JAvCDsNppNapbFNMWyxwDYyrvzeQoxEbWSkxUzItYiVEKJoiCT", "XvAijFOUQkrDHtVKSAxrELTaijxiIBzKGGFlwfRqidcdAxVcKS", "SCiAmChGlwZJhLKTCrPEUMJXdDdQuxOhvpQGIxAdYoNCKrwcSw", "wDjmAxudJUrHDhvuxVwedHGLuHCQUynAWUggXxsirMaNrPJfYx", "wsFCxAeSknlbjIDmXljkhREzqJsJHChyGGDBKDHLzYjxrSHdOg", "iNOhueAOgjvHrRTMCLoPXMrLFDObqojswqpnELhwPsvxguPDjJ", "BpUGdSOAEXlpkvqwCfyBjdYRqdKwnxKcQmfrnZKAZElyXiwcoy", "npQlJkgEAnWkZJyPDYpLmrwCzKLVnCpwHuZbdvfmRBlKUnHnYQ", "SNkwUnjXnAErmcapnjaMsHafmJcYWLKieVQGqzgLkZblRAZqSS", "DarZrlvlWEAoAsxVgskDvTJzkXuODcknkAbVBskSoItSeDlhaV", "xpDJHbHpkroAdkTvkoSjUANFbSXzDOphyOfSOHceWzudnlQHgc", "kbHhDjrkZmAdAyyfcAxGwvBnWvSYaXHEfoTglXNbxWtCEDNYId", "HFtLhIRvJcskyAFPpsuNWWDVZFrfjBtPxwgzQBDFDFKyvDzlyf", "hNVKvDTqyaxTyFArwliKegLiMyQBkaoWNrqcVMYftSCJQlTflj", "gMKTumMwPpVvfPrALJJJLxOLEwOpAsQVUUOqRItDqWZgQWroef", "YWSCxXCCDngkcpwLAsWhvxxZvxgCwMCIIYSbfvEYPPXaEKdacG", "TyArVlLfYjsoAslJsAibstJztKNYcSakvAmKqykOaOcNySRHhQ", "KxxPwjoypakSxuiJWiANnBONeGLbRolxehxlnUyvrZSliinoVE", "RwrEekPBLMDjGNKJhbNADcUchMDnCrumJQVyPHoRXSMQwRsfOC", "qDEUdhXjmsvUwWeLvsnDAZTguHrBWFvKzBMGedDzwbGaknJCAD", "KYLMHRMdrHTAvWgxxtBcZAKKsWumfCJCEgikFQVdUrjspXlqdi", "eyTJGErYwaJNBDLOxJOUTKAuPXYITRMDqvzrFIRQnYaRdAWiGh", "iraXLzLRCfzFnViLZzNcgKuAFxXhLyUEGyORzIOHtvREyqqtQs", "dviduqFqzmkbWZMEvtehusPFAOUOwhIoPGtCRCZRzdAcgcpkrG", "FzjDHJDdKJXSvFywxKGMHWXxOAzdPseIDoLfSRXzkloBTCWJsm", "bexdCsOKLcuXSrQOgNLDruYXUzAvOjLENmwymzOVxxMlBrTAxB", "kQiQQJbwVYOzYfBpCYbnBmIhOdvAGyitLNyDgRtFsRbBIYHCSp", "roIuUHqnnWDDajkAwcRCWfTLwPOGATelnFTaxPlEPQSCghGkym", "OxBxyCoxCLcOXBasMSorFCRyhsjyTAzllWqwVucDjuzLEWmuxT", "eEzOnhjKpKkpHtoQCaluvJMUIeLiezAwgcAWZKZchPboUpyTqF", "DbKhAyscwinhEPWVIkxmKCDEoIEtllwAaipBTCGAdpYpcHYEMp", "ZWGvWGwQHekyfxNUIveJzEqGPDNLnlgaAKPexvaasQswHGovfs", "fSGpUGqmuVAOowrUYAhQBgvyGomNFWciKAxVxPHEXKQOJazSMA", "hkFQgDpfZQbfTgqOSmxVMizOtLwyTqApPxAoVeKFqcCHPLKnyU", "CxlGgBnrbGVSgzcqbKlyGkrRCfyDawWBeVoAZecgohVcCVxqhh", "QUwIXKEndqBOlQVRfqnPeFFzRSmgxVZTxxVZAVGTDlKGfMTAEz", "nzfxxDLZvzsHXBMIvyUHdQIICRzRPuKCvPeeVAtUxNDjtkBvXz", "PIRAsHhKfgkcNDYtEkyoDVROZXOtlcZGaHKcGtAIArCumzuLQu", "vtqdiLwAmLSebFfDYOvRzdQHRzVFEDcAaEFgTUIAyJMhChgpsT", "FYiYrzPZRkoWxDtqParXwUntzkxsPjhdsXqoDxAyAviqyqEOGo", "sidoMYsEBZIzWFSWPOZSbrYvdlxRQuPpQKchlNrJvAUiAGXwBb", "DVcNajvllbtutKCZXcSMGjaRAoMbSzbYsQCVKDCMiUAcHMOdEz", "BEdCNxxyKlSdCyJgaNlQasREcBlBCLopwOHcGjuhqicAHVKuht", "yKAKrrgXURenEvQQEyiwkpdygTBIgEUcHJPCftmCyAHHAyITPN", "EJxrPSuinADlDDlWKSiRnXAqcCrYhWpHGaLVMkzhqGMVyAILJJ", "VoVwJHPwHZlQNzTrdRnsJlWqpWTHGmyYozKxTBugEXOKIIACRc", "ViccfdDcnqhHYlfoaHofCqitkJACkuTEvSnqAvLpOwduTLCAnz", "ICKSYOjoYSagIylechVOAdGQrsxSyxqMfMyhEXQsGBEhPJRnAO", "ETSwxgJyQSVcdfjfGQECDihsGmBpmTFpsAUhzzuTobztNJczOA"};
    vector<string> destroy = {"APFpetYzFDzIMOFMtDPhhxOezilpiylxPmoNVTHIvUkDygYNol", "PAlGKqBoneWBbLogpMDwYXenGMUsAHDNgCgqIZVMYtHrHGMRCY", "FlAykAJdwMulDDtHPrybHFPkjkKQroDAcwLBXsOZEnlHYuOGDT", "pGyAfSTXfAbhhZStSLhmjUgwFNKuEUQRImiUDqiyJgiLuPHSEc", "eKkfAFIigUUSdaGQiKBJzmwZiSkNhkwmVakTMPzjsJJxuApvAi", "tqASFAoIjdRxupXXRHuHzLGixjebQBWvLFFwWRUlAraYOKmIqp", "YBJTIoAEvBfouqZtcZbvXsoljBdccZWnMjttrLJGmsUCYfKMUd", "zodXiIEAkgFpFqsDAtWeMAHkDctpDBiHwElQRYmCyiFiUmgKJR", "FnwfgjvkAKkQWdJCEsqAjVSrHcuSvLrTIYAmzKmdeQOSMQCEIK", "DeMAUdBgKAMnyuBbSWQRcJliuxeOwuliPhkWWiIZESaAixpqOV", "zWubURfFkMAavkWncskMMuUJGNveVNmGfVsdLdTJjtrQWIZNvH", "IBlhSxopQnaAiXoDlJROkJCrYwYmJjNpzpSVnjMZqXRlhurNUt", "MbDhduuFWyviAtIwoZGASfPbOcBlKkRhetWOxllfRsTdCQXFLT", "OLDZapqqdukXtAVXFQAkBqJNywlWxfUQkoorYnChHFtJirpwDk", "FotSGXZsJBWoIVAxEhzOcTmudpAFYPcQyvlgKowYbZpNTyBvFw", "MgHtQXtDCbnDwXxANuUYaDysTHSqXzybEPKVFrLRpAFmlNBQeL", "tpPSiRcAEScloFENAnSxUNQxNjmUDFnumMqJapdDNJJwXfwhtR", "DMrLKHZtsWsJZQhunAvWNTwYzuNMUCPKGdQvduaYBXxACLsuqA", "PDyhBubWqQkRGAzUSvAVpqXdCqjtlsuERpXijdZivaPBPgSNCs", "hwbmJHveARMOAkOYxWVAinyYBWGdahdpfgJNYIpVCbMndKsXSa", "hYHjzzXMjcMkSBcaUNpiAsyCKGSFKNsECbqHdMtonGZOYUwaGH", "xXFUmLsAVJuJfqTDNTqnsAPtfsEAYPcostLAPYMRfVqleFBDxB", "OePgwGoHSlUCPJmyQwXyyPAFFndSHoqvZzTbgZEHikGpWYBnhl", "enkwZilkriJrbNusxYdYCtFAOWHTdPewEWmSORIaeiYvhfypTb", "zGjFixjDHuGYOydTNzCBKfFOAEuGjvAyfxRTtyNGmMMtMFWmpl", "iMkNSjBccxNwcwpHjuqWGsnWEAFgvJWqhVYmRrkzEavkzPnrCw", "lUKKkedtuevYBlASmNjGSEdHuFAuWkAZFYgrinKYQAUuNypnbx", "psQuNbcpSOemlWFqUMtdFASTGguAVtTWnJtmaUVTixasSNGvNm", "iArEhQcDvwVJKxYXDUlaKYHdjvWVAnayxpsOXefSYIYWLGHHvj", "yHoUkBZBLuNjkfPzFCshNPoPvJktnADBdBHGIQoOolRFHQVRYO", "lDDQwWWirlmNRUcynPudscqeAWATaDAFxGDTOpxwaajvwCrjNb", "xNARmvnHTiGphQQbuKEpEovwyqZWyBFAoFqvxUnWMEWIJzKVAG", "PgcIVLMwIPfzekyEmGRfCsZEfhFnxdxoAVoilvhFbAbjchWjfQ", "mCwmaFjEYhVptovPMdpgbtzWxVYJpBGFVARgcvKUOpdCCepAqG", "ogLikFtlAksSWolKqQXJqLTmRYgtsHDqoRAvinCMlwSztQwdkk", "NqBUTwtQmWdVOrgVJviNHAbSTmrmOGTvigvAQcAzaJJFDmNEoY", "VIXDMWrRzWLnxYKFadjYdPgOtRiaXIOxlciQAimJuDhDgEsrpJ", "TZsqPRLYKidjlnorpudIMYZRyrnUeQpUvvnciApttHGefPnaNl", "HVOizUJmmITMlCwLdaZptMEINkKVfoxnhKCAmpAPPbOnkEGqDh", "IMZyjlGCdZJZfhYRDYiVoRHaGzYTSOwWFUMzJtPAPurAoRCWoe", "vYEJsAmyeEjqRHbpNBvCnfiemEQiYoaMbOlautPPAEZMQjzwft", "UtngJrsiQStXsFZAJXabGVkiMaAxIlaEApwJDHbuEABHrxJquv", "kHliJaUFOarRTtpFJxPMZqGYMvUaYRjWbdSJhGOrZBAAJSaBat", "DrHLxYCiSAQldJNmwABnOlpvtkusWFvIjCzFDenAMHAARcjPzc", "yHYuuOYUMiWhCiTlXCPdYeWhMzNSLHwJcCtDgfkoQrJRAlniRg", "gGuPAKfmQxIuQryNfLgKUFYfFPyNGQCzheQmEPERjxSclAOCDw", "YMOHpmKgCpZrXpBBwsSswBByWnpGHVrKWpwNsnGCzJajnOAjeB", "NRGSvIMKEqNNFwvQhuNXaDnpmrnvHRjVjAdEraqWwqBPiCjAbW", "oCDEAqUJIOvULDFetqCSGxhTpCbNvYNAfqkopNDofuazRDebAV", "lYTcipdRKVHtTkwLRAsaHBlblwxmjObGQGkYJlhetvtcgwBWVA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> kingdom = {"00000100000000000000000100000000000000000001000000", "00100000000000100000000000000000000000000010000000", "01000000000000100000000000000000000000000010000000", "00000000100000000000000001000010000000000000000000", "00000000000000000000100000000000000000000100000010", "10000000000000000000000100000000000000000001000000", "00000000000000000000010000000000000000010000000100", "00000000000000000010000000000000010000000000010000", "00010000000000000000000001000010000000000000000000", "00000000001000000000000000010000000000000000000001", "00000000010000000000000000010000000000000000000001", "00000000000000000000000000000100001000001000000000", "00000000000000000100000000100000000000100000000000", "00000000000000000000000000000001000000000000000000", "01100000000000000000000000000000000000000010000000", "00000000000000000000000010000000000010000000001000", "00000000000000000001000000000000100100000000000000", "00000000000010000000000000100000000000100000000000", "00000001000000000000000000000000010000000000010000", "00000000000000001000000000000000100100000000000000", "00001000000000000000000000000000000000000100000010", "00000010000000000000000000000000000000010000000100", "00000000000000000000000000001000000001000000100000", "10000100000000000000000000000000000000000001000000", "00000000000000010000000000000000000010000000001000", "00010000100000000000000000000010000000000000000000", "00000000000010000100000000000000000000100000000000", "00000000011000000000000000000000000000000000000001", "00000000000000000000001000000000000001000000100000", "00000000000100000000000000000000001000001000000000", "00010000100000000000000001000000000000000000000000", "00000000000001000000000000000000000000000000000000", "00000000000000001001000000000000000100000000000000", "00000001000000000010000000000000000000000000010000", "00000000000100000000000000000100000000001000000000", "00000000000000001001000000000000100000000000000000", "00000000000000010000000010000000000000000000001000", "00000000000000000000001000001000000000000000100000", "00000000000010000100000000100000000000000000000000", "00000010000000000000010000000000000000000000000100", "00000000000100000000000000000100001000000000000000", "00001000000000000000100000000000000000000000000010", "01100000000000100000000000000000000000000000000000", "10000100000000000000000100000000000000000000000000", "00000000000000000000001000001000000001000000000000", "00000001000000000010000000000000010000000000000000", "00000000000000010000000010000000000010000000000000", "00000010000000000000010000000000000000010000000000", "00001000000000000000100000000000000000000100000000", "00000000011000000000000000010000000000000000000000"};
    vector<string> build = {"AtEmCJKsNAdOVonthxecZIeNclXUuiIWzpZzuKlpnyVvmGAzZu", "tABxWCkRekZEjITYbPOfvdOUNPpfDlJIBtYEPmiTNCrDURiTAE", "EBAHVNaOKwuKNAXKbSPIhAkRQMCqYmraWdCJSKRzRrrecqLUIz", "mxHAObwKhnGzRoTwtmaeDbVgHrTyDfPotiDtUPagIbYKJnMpwq", "CWVOABMmxZGvFXOoFzmZYZqhvqeFaHScPAQZWlBwfpcBSyCgiW", "JCNbBAkofNgTwUYwtEyVaGOpDAPTWCSZASKOIXShRnywhVPRFI", "KkawMkAisaipPbiFpVWVcBtuDKiJMgsxbecOxZOyuewkcYJwFY", "sROKmoiAbQRQrCiofUKwvDYTVVfZzbeGAviODzInknwqerbSTg", "NeKhxfsbAZzgOIUMMoORkwPLOTjzmULqTZFgIKxZDDPTNdOagy", "AkwnZNaQZAnKNAQoCqVeVrrnzFYASHAlbofQENUlEHYRmjZAuc", "dZuGGgiRznADaQMbWDLPSHvbgDaTMQUSTYqZegICxmrCFkYXzX", "OEKzvTpQgKDAnCmtFGwPPTWsIVAAniuWXIpnNMKsxcKvmypXFa", "VjNRFwPrONanAjgCEycDPuJTwwoYJnbFLGItoEAiaeBjeJZXNt", "oIAoXUbCIAQCjAIIefmcGgKTHQUvWrFrGsRVClcECUOWSRdnem", "nTXTOYiiUQMmgIAPkIqRFmSxsdbdcbCmSuOGDiyfIYUaNpbonn", "tYKwowFoMobtCIPAWchgTLXVJKuECkSXmlAzelMVGjwlXSLqJf", "hbbtFtpfMCWFEekWAEbOEARyLfqVKvIYhcwACqfZAutIMmRqCc", "xPSmzEVUoqDGyfIcEAebmLNsxegakvNgoJJwAbtvSftAmzMaSz", "eOPamyWKOVLwcmqhbeAtLpFdJnUbBudKnINjzLaoLfNyTweDjK", "cfIeZVVwRePPDcRgObtAMlhbRugpvdCkCMHsfoABjHZSKuzHMD", "ZvhDYacvkVSPPGFTEmLMAbujZBWLuyPtoWTUyCAcenomBuQZDy", "IdAbZGBDwrHTugmLALplbAOcvhHBJbpHMVtJDMyFgvdngpzfhg", "eOkVqOtYPrvWJKSXRNFhuOAiewDhKTBjhRMUedngcPQJxazqbr", "NURghpuTLnbsTTxVysdbjciAsyXQdBuCigygYoLxfLvSjzcquR", "cNQHvDDVOzgIwHsJLxJRZvesASJkbftiOtoFETsEEMNpBrWsLe", "lPMrqAKVTFDVwQdKfenuBhwySAYhKTSjVOwYsUUGatUuwXuzTp", "XpCTePifjYaAoUbuqgUgWHDXJYAOwPiDrTrKKdYymBAzOtgLpm", "UfqyFTJZzATAYvdEVabpLBhQkhOAUQSDegmkQfdkmxMXHdFRkj", "uDYDaWMzmSMnJWcCKkBvuJKdbKwUADtYqrnWHOeUgYfieiMWwg", "ilmfHCgbUHQinrbkvvudybTBfTPQDAGyKwXsrmpxbWdGyWVqqd", "IJrPSSseLAUubFCSINdCPpButSiStGAXjRQDRFcBxKqATUOQhm", "WIaocZxGqlSWFrmXYgKktHjCijDDYyXAtZpUAyveGzwCGvEiCU", "zBWtPAbATbTXLGSmhonCoMhiOVreqKjtAiAhdLUKDGiXBbBveH", "ptdiASevZoYIGsulcJIMWVRgtOTgrwRZiARsbGCeWZbhFknncF", "ZYCDQKciFfqpIROAwJNHTtMyowrmnXQpARAfcfDWZdIMhaIEnP", "zEJtZOOOgQZntVGzAwjsUJUgFYKkWsDUhsfArSiwrqztwHDmSd", "uPSUWIxDIEeNoCDeCAzfyDeYEsKQHrRAdbcrAeBnPZoFtdMYPK", "KmKPlXZzKNgMElilqbLoCMdoTUdfOmFyLGfSeAgushDaUaGKPj", "liRaBSOIxUIKAcyMftaAAynLsUYdepcvUCDiBgAUpYDLqaPqui", "pTzgwhynZlCsiEfVZvoBcFgxEGykUxBeKeWwnuUANyCoQbzCJV", "nNRIfRukDExxaCIGASLjegcfEammgbxGDWZrPspNALcRBzeNfQ", "yCrbpnenDHmceUYjuffHnvPLMtBxYWKzGZdqZhYyLAoBzlVNlE", "VrrYcywwPYrKBOUwttNZodQvNUAMfdqwibIzoDDCcoAUTjwODT", "vDeKBwkqTRCvjWalIAySmnJSpuzXiGACXhMtFaLoRBUAYHZPHx", "mUcJShceNmFmeSNXMmTKBgxjBwOHeyTGBFhwtUqQBzTYAvnTMc", "GRqnyVYrdjkyJRpSmzwuupazrXtdiWUvbkaHdaabzljHvAmCkG", "AiLMCPJbOZYpZdbLRMezQzzcWugFMVOEBnIDMGPzeVwZnmABYZ", "zTUpgRwSaAXXXnoqqaDHZfqqszLRWqQivnEmYKqCNNOPTCBAZv", "ZAIwiFFTguzFNenJCSjMDhbuLTpkwqhCecnSPPuJflDHMkYZAC", "uEzqWIYgycXatmnfczKDygrRepmjgdmUHFPdKjiVQETxcGZvCA"};
    vector<string> destroy = {"APptkopFTisiuPeKtLMaBAeKvrHAQRByPbKXAzcGlslvEyYgrT", "PAaKHruFQVGfQYzyjjhtaRUvxZEIbfKOtqWtTNjbyetdhxCdxJ", "paABGIWpbJWNUCJGCtFOEktFpGeWrbOCTfACOEfYiTeuTYJXaP", "tKBAqAGPqMGSmcsXioArFISNesMbhJpmMZFFbDrzppyMULrgFD", "kHGqAFteMEDVaOjchPaTZsxsTTUEHlDvczSrbdzdtqbsAbdxez", "orIAFAntuCaPNfCOGzUYKpSJBVPJngcJozcqcTNvobcanhdnyt", "puWGtnAxcFHfSYzETaIeCdWQyAHAnfnwADTizcqscNjZScZWNr", "FFpPetxAkNWnlyKJRpPgWFVdNoTDKkfnYgeBixxRDKVzvYRjbf", "TQbqMuckAGGRDODZfaTaCyGjFJnGWesZIAokoPnYuNZzOBHBog", "iVJMECFNGAkEQLeqaLjiYFsqPqeICgzAyylAncgwpRvWEgrwxI", "sGWGDaHWGkAQdHoCHrPFAsUpwYHTEFPmHQCLghQGZuwevfVJXx", "ifNSVPfnREQAvhOcYQmTjmsAgqsBKgUkjxdrsKsFHxiUqDlBXN", "uQUmaNSlDQdvAcPrCrMRulaJDsbSfZqHChwLyxgFaSHRDuMpXp", "PYCcOfYyOLHhcAhxIFJfifkMlYaFAMYfpKdXzDzuxiHraWkEso", "ezJsjCzKDeoOPhAxlTtipUqDjkveNRfUxgWTzWerASLUPEHKGZ", "KyGXcOEJZqCcrxxAzydZvCHEiwYyDHdPqdTrNEkTrKAyhcKpfC", "tjCihGTRfaHYCIlzAdDoWvirURgXBNPoVuijmsluEFhqkWVvQQ", "LjtoPzapaLrQrFTydAjwDrdQRisyDsQSxRWZmHpFkmZGFQXXTy", "MhFAaUIPTjPmMJtdDjAbTxVVYwlNgWWrODiXanBmCltbGfCmRo", "atOrTYegaiFTRfiZowbADZZYjuPcZbJLATeibFStaEXvspVjXj", "BaEFZKCWCYAjuipvWDTDAPhnYfFAFuQDexVRcKuvtBwDzvzSpb", "ARkIspdFyFsmlfUCvrxZPArkxYsXYwLUdcbdjtNVuojfGHlbsz", "eUtSxSWVGsUsakqHidVZhrAszXotPvMkWGoGDKJOFtwtItWuOQ", "KvFNsJQdjqpAJMDErQVYnksAVDihWuItlRmQLmFlLDStNricCL", "vxpeTByNFPwgDljiURYjYxzVAeCzmsAmmsFnJfZwhcZaUmtmZQ", "rZGsTVAoJqYqsYkwRiwufYXDeAJdhZYUWoAMvRQinKJhGuOAjC", "HEeMUPHTneHsbavYgslPFsoiCJAIkEfmcoNybgUSsnVQHqJqOA", "AIWbEJADGITBSFeyXyNcAXthzdIADXtnZYSmmkJNHxpUOAxMZx", "QbrhHnnKWCEKfANDBDgZFYPWmhkDAYIlciydqFLTtpiCEbqyxG", "RfbJlgfkegFgZMRHNsWbuwvusZEXYAoWplWhPXeDhHvVyYfEyv", "BKOpDcnfszPUqYfdPQWJQLMIAYftIoAHiBUfDhALVzKfFupYgY", "yOCmvJwnZAmkHfUPoSrLDUktmUmnlWHAfxDKKzcZidmgcxlLyM", "PtTMcoAYIyHjCpxqVxOAedWlmWcZcpifALrQaMrdYTMMgTKDdX", "bqfZzzDgAyQxhKgduRDTxcGRsooYilBxLAZUYGZKEHzhLSZTTy", "KWAFScTeolCdwdWTiWieVbomFANSyWUDrZAKweGcfycoKawdef", "XtCFrqiBkALrLXTrjZXiRdGQnMymdhfKQUKAZFtTvXetQjIzwJ", "ATObbcziongsyzzNmmabcjDLJvbmqPDKaYwZAEjBuSrSGwSsYv", "zNEDdTcxPchKxDWEsHnFKtKmfRgkFXhzMGeFEAQhGYVIWdDECF", "cjfrzNqxngQsgzeklpBSuNJFZQUJLeAcrZGtjQAzsEnAcqwwqs", "GbYzdvsRYwGFFurTuFmtvVOlwiSNTDLZdKcTBhzAMCjppSoOkc", "lyiptocDupZHaxArEkCatuFLhnsHthViYEfvuGsMAlnyJdcQcT", "seTpqbNKNRuxSiSKFmlEBotDcKnxpHzdTHyXSYEClAmUevjGPk", "lteybcjVZvwiHHLAhZtXwjwSZJVpivKmMzcerVnjnmAVTrDTxd", "vduMsaZzzWeURrUyqGbvDfttahQUCVfgMhotSIApyUVACWhEbu", "EhTUAnSvOEvqDaPhkFGszGINUGHOEyFcgLKQGWcpJeTCAwVQSv", "yxYLbhcYBgfDuWEcWQfpvHtrmuqAbYuxTSajwdqSdvrWwAyqsb", "YCJrddZRHrVlMkHKVXCVzlWitOJxqfplKZwISDwocjDhVyAuqD", "gdXgxnWjBwJBpEKpvXmjSbucmAqMyEYLDTdzsEwOQGTEQquAdP", "rxaFeyNboxXXXsGfQTRXpsOCZjOZxygydTewYCqkcPxbSsqdAy", "TJPDztrfgIxNpoZCQyojbzQLQCAxGvYMXyfJvFscTkduvbDPyA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 571;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> kingdom = {"001100111100101001000100110100001000", "001100111100100110110011010001100011", "110000011110010111011101101100001111", "110000110000001110101101101011011100", "000001110110010100011101000001100100", "000010011001101111000111011010100011", "110110010100000111101110011100011111", "111111100010101010110001110010000100", "111001000010001011011001100111110101", "111010100011001100001101110110000110", "001010011101110011000011111110100101", "000001000110101011111111110111001000", "110001010011001001001011010010010000", "001010000010001110110101101000111011", "100101011101110000101111010101111111", "011111100100010001010111001000011010", "011101111011010000110110101010101111", "101001101011100100001101100111100110", "010100110001011010011110011111111011", "011010011001010110100110111000111010", "001110101101101001100010110110010100", "101111100101011111110011101001010001", "010001100011101110111100011100100000", "011111011111111101000100001101011111", "101100011111010011011100001101001011", "110001110111101000111010001111011111", "001101100010010110110111110011111111", "101000101111001001101011110000010101", "000101011111100011101000011001101110", "010110001001001001100101111010001010", "010011001010011011110010001010000101", "000100101000111100111101011100001001", "101100100001011110110001111011010010", "001110111110001011001001011110100000", "011001100100011111110001111011001000", "011001101010011010100101111100110000"};
    vector<string> build = {"ASVrBhAOjmsRyXigWtmFYfwUjnQVkQNCJqLs", "SAnuKpftNamaSEmXxLUIoaKMJRnssnEIwIyj", "VnAJAaRAJxduCETORXtSnZjqrMcWFaZhOSmw", "ruJAwhAnpsBlKkylNdnsfkyWHoKDwidiEtcR", "BKAwADGDFCdFgMQGLWBcdIgWBLeKXBCYbepx", "hpahDAgRrmLOfgeQiXAQYIlmOHuViABKPtBa", "AfRAGgAUxmXESJxMDRXoLXMDQHqrLhokaYFQ", "OtAnDRUAzVujsivELicXcomsdLcmHJXOtsno", "jNJpFrxzAdfCfcvlmKMGpecSNPbQJdhzqqtC", "maxsCmmVdADwBnWzHfgFYARDFxmYFzUCHPzx", "smdBdLXufDAywLJSVjMEtajwfvjrFmFSfAfW", "RaulFOEjCwyAmiJkXaDSitiNGSEfrsNZgnAt", "ySCKgfSsfBwmAJLrODkFsWwASTyTlJXKvuPt", "XEEkMgJicnLiJAhJuhpRcrGVxOshIwOtafZD", "imTyQexvvWJJLhANEknaQkkjHPToCXbSxYvF", "gXOlGQMElzSkrJNAVzGQMzvssoUbUgtlFDbQ", "WxRNLiDLmHVXOuEVARrtRabMNueLziIXCKLA", "tLXdWXRiKfjaDhkzRANOPNUcelBvdeSajFMZ", "mUtnBAXcMgMDkpnGrNAPXCCigCtDFfTscuXR", "FISscQoXGFESFRaQtOPADsWCdlszeIgPdNhe", "YonfdYLcpYtiscQMRPXDAJzfrxHJoHysLWcQ", "faZkIIXoeAatWrkzaNCsJAQVRiVzdLezieRY", "wKjyglMmcRjiwGkvbUCWzQAiJhLQjUGVGznK", "UMqWWmDsSDwNAVjsMciCfViAMAtuNcjDvpDI", "jJrHBOQdNFfGSxHsNegdrRJMAazArnLdChKY", "nRMoLHHLPxvSTOPoulClxihAaAZHcyeoXsyn", "QncKeuqcbmjEysTUeBtsHVLtzZAhQzbegzIn", "VsWDKVrmQYrfThobLvDzJzQuAHhANekkpOZM", "ksFwXiLHJFFrlICUzdFeodjNrcQNAQYUikcE", "QnaiBAhJdzmsJwXgiefIHLUcnyzeQAsdSpxT", "NEZdCBoXhUFNXObtISTgyeGjLebkYsABIiQO", "CIhiYKkOzCSZKtSlXasPszVDdoekUdBApjsM", "JwOEbPatqHfgvaxFCjcdLiGvCXgpiSIpAIFh", "qIStetYsqPAnufYDKFuNWezphszOkpijIAdB", "LymcpBFntzfAPZvbLMXhcRnDKyIZcxQsFdAF", "sjwRxaQoCxWttDFQAZReQYKIYnnMETOMhBFA"};
    vector<string> destroy = {"AZxxHbQlaTWSOpaCYquPTORJsxiVViTSikFs", "ZACVFnHtcfChHUKefHRlqgncuWWqnqAZuLOZ", "xCAHUXngetbILdFPcXVPrsdjPMWGNhlLxOQv", "xVHAiOKRhRlyzAHrnWjOWeiCSSWzFMNxLXIN", "HFUiAyqVcpHTtEgQzGTubHuNUPPxoTFHCWdB", "bnXOyAifQHqfhsyALiqMcyEUaEupVSuVyUUP", "QHnKqiAgohTBzABNYSmvaahEuOjKCglLgzbA", "ltgRVfgAfZlDGlRVbMJLAjJpspdkoCAAnzpH", "acehcQofAVQNEDfrrupSdiGecISJZkWembsw", "TftRpHhZVAbPRKZtFAAbIDMLwikNTuNENBCI", "WCblHqTlQbAktKmtcfavQMWhVivRqnKqYxXP", "ShIyTfBDNPkAvaxBCqRUfHJrDlhpHwSBVPKf", "OHLzthzGERtvAHVpmegjgYaZMMwOwWpjJpHB", "pUdAEsAlDKKaHAkRhdyMYzVWapPWcmWahyGo", "aKFHgyBRfZmxVkAvxGMzweDduakQuuDtitEL", "CePrQANVrttBpRvAEPyVgGmkTwWvcPRQRksj", "YfcnzLYbrFcCmhxEAMqIfWRcjIkZcKvAlwYW", "qHXWGiSMuAfqedGPMAcaXDVXZysMbePgrfLf", "uRVjTqmJpAaRgyMyqcAARFAsxTPWhBxrHAvY", "PlPOuMvLSbvUjMzVIaAAzExvSVhFOlzQIBmE", "TqrWbcaAdIQfgYwgfXRzAvWyvjbNhrHMFhlF", "OgseHyajiDMHYzeGWDFEvAwzogywMRLiKWHY", "RndiuEhJGMWJaVDmRVAxWwABoOweImaTzovJ", "JcjCNUEpeLhrZWdkcXsvyzBAZCayEJysLuPs", "suPSUauscwVDMauTjZxSvooZAnFGPzzcYOKo", "xWMSPEOpIiilMpawIyTVjgOCnAmMAFzIawGZ", "iWWWPujdSkvhwPkWksPhbywaFmAjLfFUbOwS", "VqGzxpKkJNRpOWQvZMWFNweyGMjAwhdAGwFY", "VnNFoVCoZTqHwcuccbhOhMIEPALwAvqKSfCj", "iqhMTSgCkunwWmuPKeBlrRmJzFfhvAuxqfdP", "TAlNFulAWNKSpWDRvPxzHLayzzFdquAEtDoo", "SZLxHVLAeEqBjatQAgrQMiTscIUAKxEAPZXL", "iuxLCygnmNYVJhiRlrHIFKzLYabGSqtPAspo", "kLOXWUzzbBxPpytkwfABhWouOwOwffDZsAAP", "FOQIdUbpsCXKHGEsYLvmlHvPKGwFCdoXpAAu", "sZvNBPAHwIPfBoLjWfYEFYJsoZSYjPoLoPuA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 7053;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> kingdom = {"00000001000010111101010000110001010001010", "00000000111001100010010010011000011000000", "00000000000000000100000000111100010110100", "00000111110100000101101101000001000010100", "00000010101000011011000000100001000000001", "00010001111010110001110100001110111100100", "00011000001001001000000011110001101011000", "10010100111011111001010000000001101110001", "01011101000010100010100000000110000001001", "01010101000110000110101000100101010000001", "01001111000000011000101000010001000011010", "00010000010010100000011000101000110100000", "10000101110101111000001010001001010101000", "01000011000010000000000001100100000010011", "11000101100110000010010000010101000100011", "10001101001010000011100000000101000000110", "10001011001010000001100001101010010101000", "10110000010000000011000000000101000011101", "01001000110000110100000010101011000110001", "10011101000000011100100100000010101000001", "00010100111000011001000010101110100100100", "11000101000100100000001101001000111010010", "00010000011110000000010110100000000100001", "00010100000000000001011011000000011000100", "01000010000010000010101100000000100000000", "00010010000001001000010100010010011001000", "10101010010101001010101000011100100010000", "11100010001000100000000001100000100010110", "01100100000110001010110000100110000010010", "00100100110001110100100000101010001100011", "00000100100000001011100001001101000000000", "10011011011010110110000000000010000010010", "00000111000100000001110010110000000010000", "11100100010110001000010101000000000000100", "01000111000000000001010101000100000100000", "00100101000110101010101000000100001000100", "00110011001001000110010000111001100001010", "10000010101010001100000001000000000010000", "00110100000000010100100100010000010100001", "10000000001001110000010000011101000010000", "00001001110001100111001000000100000000100"};
    vector<string> build = {"AvmzyhutoAkKbAZnIwgDFRWTxreZXPqGvNHPwAdFK", "vAyNLsMNRtwmysvanRNRAcTCDlsIyOoBKoukEPdCe", "myAPkQYtIYVdgaJyiWUOtgzpWkEzvbkKhMMvVohpQ", "zNPAWFnfFONfDQZzNqcbQwILfXGRSaXUHEoQpMmsx", "yLkWAKzWjPnkJxthRmMhNRJxtirTbFFQKliNnhdvg", "hsQFKAmbtcCOvsrPZVAPLaLXhSbURPvcccPoWUHed", "uMYnzmAPghmwIzcAntDiJmsDovyualrgfhVduSwZV", "tNtfWbPAFBPsMNrLDXHTcYGTxvCHYgZXCouMqOOLZ", "oRIFjtgFAweYEutyJFHkaLelptaRlXObmtiGOhStm", "AtYOPchBwAbkizwWehDRiQeGZGCELxhBKNlMDZlCe", "kwVNnCmPebAJUMNSYLMJPcafSmjSLuXPhTASBVmfL", "KmdfkOwsYkJAYOzppNCuFocvWMvTwQkeONZDsbYSf", "bygDJvIMEiUYArjUkfRrJmZoEmUSwEThrvDJlAbvz", "AsaQxszNuzMOrAzfWnHhLSXEaMrrlHjRwPRqzFASb", "ZvJZtrcrtwNzjzAvLyjWgyBGpqgVQGxaeSmYgOxSP", "nayzhPALyWSpUfvAEseAfmJhzIWiFJzYtjsipAFuz", "IniNRZnDJeYpkWLEASmMgoilJMTMXHeuDXoEBehzg", "wRWqmVtXFhLNfnysSAePvCqenkoYTvxKmmPZOWTvm", "gNUcMADHHDMCRHjemeAOfrDgJMiLtEAswyNHdyHsj", "DRObhPiTkRJurhWAMPOAYsAekMFDWDyevWlaODNcB", "FAtQNLJcaiPFJLgfgvfYAJmiyUTeqVlKUAnMNERRo", "RcgwRamYLQcomSymoCrsJAWDhhDyBuXkWIYZTaIKB", "WTzIJLsGeeacZXBJiqDAmWALYIodmJLSqpbLHXlNk", "TCpLxXDTlGfvoEGhlegeiDLAeKPWqEcwsjqOyLjFn", "xDWfthoxpZSWEapzJnJkyhYeArxJSKWaqdkmqpXzr", "rlkXiSvvtGmMmMqIMkMMUhIKrAZKRDgFNcAmUOZNM", "esEGrbyCaCjvUrgWToiFTDoPxZALISxhPVESlsbPw", "ZIzRTUuHRESTSrViMYLDeydWJKLAhtABhrLGfIUJm", "XyvSbRaYlLLwwlQFXTtWqBmqSRIhAiHPNJjSNmPOk", "PObaFPlgXxuQEHGJHvEDVuJEKDStiAlqYpxDQmXPl", "qokXFvrZOhXkTjxzexAylXLcWgxAHlApTWRrDnlwr", "GBKUQcgXbBPehRaYuKseKkSwaFhBPqpAyUBjpThnl", "vKhHKcfCmKhOrwetDmwvUWqsqNPhNYTyARVIzowvQ", "NoMElchotNTNvPSjXmyWAIpjdcVrJpWURAMgBLYfs", "HuMoiPVuilAZDRmsoPNlnYbqkAELjxRBVMABfFGLk", "PkvQNodMGMSDJqYiEZHaMZLOmmSGSDrjIgBAhocYq", "wEVpnWuqODBslzgpBOdONTHyqUlfNQDpzBfhAhWIG", "APoMhUSOhZVbAFOAeWyDEaXLpOsImmnToLFohAliL", "ddhmdHwOSlmYbAxFhTHNRIljXZbUPXlhwYGcWlAQv", "FCpsveZLtCfSvSSuzvscRKNFzNPJOPwnvfLYIiQAe", "KeQxgdVZmeLfzbPzgmjBoBknrMwmklrlQskqGLveA"};
    vector<string> destroy = {"AbZsThfCjKcbvBpNqzkJfiLannapJlhTzwwzSygrj", "bANOXtxfnKQZVqDozCpkHwNZczirsEjuGXziNqjyG", "ZNAMZVeKslPyVvksqKeuLiNGslNDiMSuSrgfPlFZG", "sOMALheqXvlPBYtYlhcdRSDFDYvuAWxBeWzXSudOs", "TXZLAARILpWnFpXlGCnuRzIWDqhDFtGwlQtVCyHgY", "htVhAAiajFMELEoYkrhfcqgLzPdXKBJSLtpItDSbP", "fxeeRiAsnAkWNxoAugqMBVuMhYgcEnqYGhpxTWSeb", "CfKqIasAOJgQuegnPSubbLMNxJpaDraJfXnYdIjGK", "jnsXLjnOAQaoKLmYlpeHzNphhbWDnWaaKqNzkoEAU", "KKlvpFAJQAjvWQBzkUFrEzwZtWFuiOkSOMVwvfyca", "cQPlWMkgajAoHJYOaviUIwrYPLObiPQiXBdRdwtCl", "bZyPnEWQovoARytGrPoLuRZnZHRYjKheOngxYcUSw", "vVVBFLNuKWHRAKyFdqreDAxKjHRmPerBiFdSeiXoM", "BqvYpExeLQJyKAbDkYgBwpVpSMFcrOJoTGKhtXOpw", "pDktXoogmBYtybAkSyNkUKsTYrgzVgoBdjYjdDAoj", "NosYlYAnYzOGFDkAgCBYQaeeSYxHhxVWCugssqtbn", "qzqlGkuPlkardkSgAuAVwErceFkRrxXjjDgkkJVyG", "zCKhCrgSpUvPqYyCuAtOzmhTEuUPzQfSSjbxetslc", "kpecnhqueFiorgNBAtAIkxRjlrVetLmIqhLGuCdhB", "JkudufMbHrULeBkYVOIAwJGPiTrUATHwVEOhtkLLP", "fHLRRcBbzEIuDwUQwzkwApZvPFkqyLsUvorOmDzXl", "iwiSzqVLNzwRApKaEmxJpAaoISBnNaDJnzNWdgjBO", "LNNDIguMpwrZxVserhRGZaAuLAoNpdvplqWFXDVEp", "aZGFWLMNhZYnKpTecTjPvouACwiJZvpkETpzXdsFa", "ncsDDzhxhtPZjSYSeEliPILCAgKyOnMjXEmOATUhY", "nzlYqPYJbWLHHMrYFurTFSAwgALoNRrTONLXZOfdC", "aiNvhdgpWFORRFgxkUVrkBoiKLABLqDKhcSjMdGzq", "prDuDXcaDubYmczHRPeUqnNJyoBAflXlIMjGEHuGy", "JsiAFKEDniijPrVhrztAyNpZONLfAXgERksttRJCh", "lEMWtBnrWOPKeOgxxQLTLadvnRqlXAXGZlaUMOTqg", "hjSxGJqaakQhrJoVXfmHsDvpMrDXgXADuyEmliEHd", "TuuBwSYJaSieBoBWjSIwUJpkjTKlEGDAhctRvoxPF", "zGSelLGfKOXOiTdCjSqVvnlEXOhIRZuhAIqmXboLB", "wXrWQthXqMBnFGjuDjhEozqTENcMklycIAaHGMsMd", "wzgztppnNVdgdKYggbLOrNWpmLSjsaEtqaAaTzrcb", "zifXVIxYzwRxShjskxGhOWFzOXjGtUmRmHaAZkHvk", "SNPSCtTdkvdYetdskeutmdXXAZMEtMlvXGTZAVibp", "yqluyDWIofwciXDqJtCkDgDdTOdHROiobMzkVAwyf", "gjFdHSSjEytUXOAtVsdLzjVsUfGuJTExosrHiwAfn", "ryZOgbeGAcCSopobylhLXBEFhdzGCqHPLMcvbyfAp", "jGGsYPbKUalwMwjnGcBPlOpaYCqyhgdFBdbkpfnpA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 5072;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> kingdom = {"00000011001000001000100000000010001000", "00100000000000000001100101001001000110", "01000000010000000000000100010000000011", "00001010000001000000000110100000010011", "00010001001010000000100000000010100000", "00000000001000000001000100000001000010", "10010000100000010010000001000000001000", "10001000010000110010001000000010101000", "00000010001000000000010000000001000011", "00100001001010010000100101000000110001", "10001100110000001000010000000000001010", "00000000000000000001100010111000101010", "00001000010001001000000000100100000110", "00010000000010101010101001000010101000", "00000001000001001001010000001000000000", "00000011010000000001100100000100000010", "10000000001011100010000011000010100000", "00000000000000000000000010000000001101", "00000011000001001000010100000000100000", "01000100000100110000100100100000000000", "11001000010101010001000000011010000011", "00000000101000100010000100001000111010", "00000001000001000000000001010000100000", "01110100010000010011010000100111001001", "00010000000100001100000000001110000000", "01000010010001001000001000000010000010", "00010000000110000001000100000100000000", "00100000000100000000101000001101000000", "01000000000100100000110010010000110001", "00000000000010010000000110110000000010", "10001001000001001000100111000000000000", "01000100100000000000000100010000000000", "00001001010101001010011000001000001001", "00010000010000000000010000001000000000", "10000011001101000100010100000000100000", "01000000000010000100000000000000000000", "01110100101110010000110001000100000000", "00110000110000000100100100001000100000"};
    vector<string> build = {"AoVgROpIjkPxSsiTDGGtnnWQhVseEDYydAClFC", "oAotuDJGJCvhNLaWposGRtmFYBUsHtFSWbSSRo", "VoAwjUDtIOteMEMVtmiQxrQmjkOBzLaxxTuBQI", "gtwAvAaazEQskzoiYvSZQRPLttAmAFLxgnCrJh", "RujvAgHtncIIHEWDzaqtXUORuNCDlXkcQDggEy", "ODUAgAQgAypEjaAABmUTCSkSzQMDdDggkLGLlo", "pJDaHQAcIcjGIRRRTVPMYOoOvOGjCxvjPhMeZr", "IGtatgcAnFZwSpGnKUhmcSvEYNKoALgMBCaVbm", "jJIznAInAeUinMLEkuZzFhyrpGnpGDETiLBAVN", "kCOEcycFeAyzOwlZuWBrFJqEUMnNYTeZYujbSo", "PvtQIpjZUyABwcWJgYZQxdUERhgbaSyHCzzlhR", "xhesIEGwizBAMJDEnmjjzOvHovWTTKuLpMMAeQ", "SNMkHjISnOwMAmzGGvpARrERnpXykYcwOjXWMK", "sLEzEaRpMwcJmAPNwfluDQvQkFLrcNneRBYhfy", "iaMoWARGLlWDzPAJHmLUMcZptWgFumEsbBjcRy", "TWViDARnEZJEGNJAfnaWEwOlqKPKTjphgoaYXm", "DptYzBTKkugnGwHfAifXklEwkdJyZWuKPuNmJk", "GomvamVUuWYmvfmniAfqUlgytTKKtABDwoPuPL", "GsiSqUPhZBZjplLaffAWyonmcmAksVPIzREAwZ", "tGQZtTMmzrQjAuUWXqWACZOylNfgRLRSdXZQoZ", "nRxQXCYcFFxzRDMEkUyCACdsEvEomJGCwIoBzP", "ntrRUSOShJdOrQcwlloZCAZvOZrncvWcaZLdLz", "WmQPOkovyqUvEvZOEgnOdZATecQMkpvUdpgPpX", "QFmLRSOErEEHRQplwymysvTACYHPKHbdsmjukr", "hYjtuzvYpURonktqktclEOeCAMFULhRXFgmYFm", "VBktNQONGMhvpFWKdTmNvZcYMAToTCoPYAiPfC", "sUOACMGKnngWXLgPJKAfErQHFTAkfsoLhSjgEY", "esBmDDjopNbTyrFKyKkgonMPUokANCYKlWdjwe", "EHzAldCAGYaTkcuTZtsRmckKLTfNAUMFrQrjJS", "DtLFXDxLDTSKYNmjWAVLJvpHhCsCUAhhWdiirf", "YFaLkgvgEeyucnEpuBPRGWvbRooYMhATysxBaK", "ySxxcgjMTZHLweshKDISCcUdXPLKFhTATZNNRW", "dWxgQkPBiYCpORbgPwzdwadsFYhlrWyTAbfVpp", "AbTnDLhCLuzMjBBouoRXIZpmgASWQdsZbAOpuG", "CSuCgGMaBjzMXYjaNPEZoLgjmijdrixNfOAfDM", "lSBrgLeVAblAWhcYmuAQBdPuYPgjjiBNVpfAWY", "FRQJElZbVSheMfRXJPwozLpkFfEwJraRpuDWAx", "CoIhyormNoRQKyymkLZZPzXrmCYeSfKWpGMYxA"};
    vector<string> destroy = {"AowGdEthoqfUktHOgVUrBlHqqjqdeIVOBEZROd", "oAGtvvqwaIfAAxFtETBEjVochLDEDAbCqaOuhR", "wGAcouXclqnAJmJSRBLyvIkUxAkUSkznkCgDPD", "GtcAAWMdzKUxGolgpLGxSJaRDcfNhaUmzUjCkR", "dvoAAWOXCBqLGRdjomDblbYFprlOYZjebknvpa", "EvuWWApIiWpmjPKwtjQKmsTxATmIREJFMPIDcb", "tqXMOpAZRTqvZbLODjWhsRCnRaSWKeDXpenugA", "hwcdXIZAoAZrardXOfmyKtTctqLyYZbjEtEVUH", "oalzCiRoAJhFIHluIUdXkLasTCVMyNAtrzqBxc", "qIqKBWTAJAXqMDspyiBPJZNvCsuGgQOoZptzqH", "ffnUqpqZhXAYLEBsWMYgVoicZgkzlOqQLEiZpw", "UAAxLmvrFqYAaRggGEEEnPCIVQVLRVenmTpivf", "kAJGGjZaIMLaAIsVqkpprBGGbiwvybYtpdLzao", "txmoRPbrHDERIAcNJuaKTrygsCsQjCRcGiZzsn", "HFJldKLdlsBgscAfzopJkiyKHpCETjFYjgbgTy", "OtSgjwOXupsgVNfAUOQwkwgajnsPsKalrRCZVc", "gERpotDOIyWGqJzUASvUSUySFZUiAYNLucjRgi", "VTBLmjjfUiMEkuoOSAbiVALlOUXlFoZfZREltV", "UBLGDQWmdBYEpapQvbAVoohRMXUSmiTCrBIPdo", "rEyxbKhyXPgEpKJwUiVAvkjTaszstCgYNOdcji", "BjvSlmsKkJVnrTkkSVovANVqFjlqjrMrhuXhfy", "lVIJbsRtLZoPBriwUAokNAXPBiMHQOnWUPMpPi", "HokaYTCTaNiCGyygyLhjVXAkCGrWoDEDMBGnqe", "qcURFxncsvcIGgKaSlRTqPkAhFZhzsjxjrVVLW", "qhxDpARtTCZVbsHjFOMaFBChAGrfjUCczERvgg", "jLAcrTaqCsgQiCpnZUXsjiGFGAHePvMFOoUZPW", "qDkflmSLVukVwsCsUXUzlMrZrHAFeOrZmZpqTB", "dEUNOIWyMGzLvQEPilSsqHWhfeFAbTDCJXPrYf", "eDShYRKYyglRyjTsAFmtjQozjPebAGepSCjvWz", "IAkaZEeZNQOVbCjKYoiCrODsUvOTGANjlBCHkj", "VbzUjJDbAOqeYRFaNZTgMnEjCMrDeNAtwIDjCy", "OCnmeFXjtoQntcYlLfCYrWDxcFZCpjtAIPTqRT", "BqkzbMpErZLmpGjruZrNhUMjzOmJSlwIAvxbnY", "EaCUkPetzpETdigRcRBOuPBrEoZXCBIPvAjDQs", "ZOgjnInEqtipLZbCjEIdXMGVRUpPjCDTxjAWSq", "RuDCvDuVBzZizzgZRlPchpnVvZqrvHjqbDWAdW", "OhPkpcgUxqpvasTVgtdjfPqLgPTYWkCRnQSdAh", "dRDRabAHcHwfonyciVoiyieWgWBfzjyTYsqWhA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 2235;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> kingdom = {"00001000000000000000000001010000", "00000000000001010000000000001001", "00001100000000000001000000000000", "00000000000000000000000000100000", "10100000000000000000000000000001", "00100000000000000000000000000001", "00000000000000000000000000000000", "00000000100000000100000000000000", "00000001000000000000000000010000", "00000000000110000000000000000000", "00000000000010000000000100000000", "00000000010010000000000100000010", "00000000011100000100000010000000", "01000000000000010000000010000000", "00000000000000000010000000000000", "01000000000001000000000000000000", "00000000000000000100000000000100", "00000001000010001000000000000000", "00000000000000100000100000100000", "00100000000000000000001000000100", "00000000000000000010000000000000", "00000000000000000000000000000000", "00000000000000000001000000000000", "00000000001100000000000000000000", "00000000000011000000000000100000", "10000000000000000000000000000001", "00010000000000000010000010000000", "10000000100000000000000000000000", "01000000000000000000000000000000", "00000000000000001001000000000000", "00000000000100000000000000000000", "01001100000000000000000001000000"};
    vector<string> build = {"ApqYtcOlXpChohzRBakRWJOJzumsRage", "pAAMbbBTQRFRVgzCweFncCfdQpujkGUI", "qAAqbftMeVGNgYtnMxkopYvDwMOKUmEl", "YMqAsbzJDOYCabRjPDZKYmVKOAlCFQKz", "tbbsAmbdGUlpeNHqaikjlFLpbIsbXxQs", "cbfbmAcbutAFvtifzcIIikYvnTJNkVbH", "OBtzbcAlKCFgmFMHOkahCcBBCbgYnNBG", "lTMJdblAZptmjXXafMykjgJlmrhIPjUb", "XQeDGuKZAhviuHAtLcWXhomLvEoiYqlt", "pRVOUtCphAlnXKZsbTrjHANSZVLcTbgh", "CFGYlAFtvlAtbZiKwQbDmrqCCHGbMYqB", "hRNCpFgmintADXEIoKBMlcjNuaJDoVFH", "oVgaevmjuXbDAVaTGbCFTyvgdDhRvfCt", "hgYbNtFXHKZXVASDQDToocVDrbbfltMJ", "zztRHiMXAZiEaSAmhQZBEZjhdzQPOxFa", "RCnjqfHatsKITDmAQYztZDlAGNFEXqBC", "BwMPazOfLbwoGQhQAySCiIEFMsdrZGyU", "aexDickMcTQKbDQYyAaeNsYwKiEXDjvy", "kFkZkIayWrbBCTZzSaAbLYVlfMaSZGRL", "RnoKjIhkXjDMFoBtCebAxcGeaaIPLjlg", "WcpYliCjhHmlToEZiNLxAAddNgorbhIL", "JCYmFkcgoArcycZDIsYcAArLfjWvRIDI", "OfvVLYBJmNqjvVjlEYVGdrAzCpuorOPb", "JdDKpvBlLSCNgDhAFwledLzACHuNALWG", "zQwObnCmvZCudrdGMKfaNfCCAJgkzxkY", "upMAITbrEVHaDbzNsiMagjpHJAIHslBI", "muOlsJghoLGJhbQFdEaIoWuugIAfKNEN", "sjKCbNYIicbDRfPErXSPrvoNkHfAxEAL", "RkUFXknPYTMovlOXZDZLbRrAzsKxAaMW", "aGmQxVNjqbYVftxqGjGjhIOLxlNEaAOU", "gUEKQbBUlgqFCMFByvRlIDPWkBEAMOAI", "eIlzsHGbthBHtJaCUyLgLIbGYINLWUIA"};
    vector<string> destroy = {"ADwNeZWOZMhXANMwEnSshNcbfmHOZHSh", "DAjXIlNqTvipohDpPdFWYPGAAYgmXzpo", "wjAcYXthzmJLeuAAyEwJpnvPynmSDOiW", "NXcARHoVjREtJRCpiFUkKIWpDFlocMoV", "eIYRADKFMLNnsAQeHsHbmigZpmNbDHOE", "ZlXHDAQUzzYMclMLmNeZZWHAXvPEIhwk", "WNtoKQAcKIFbfcFVFgxIcbfEmrmgXmjL", "OqhVFUcAzWvTmhhBtQtArNjjBRLPcleb", "ZTzjMzKzAtIRSpSDDbWqSJwypicncGkN", "MvmRLzIWtAhGTtFDgfrPmblElXPBdDkB", "hiJENYFvIhAwvPjBoVQtmJGDjMiPEwtz", "XpLtnMbTRGwAKBCosXcXntQbJvFxvLue", "AoeJscfmSTvKAvHxBzVBpYfPTtPjRNOP", "NhuRAlchptPBvAbUuYYQQAcHPsvMrPMe", "MDACQMFhSFjCHbAxkuEkjQrurcpULFBi", "wpApeLVBDDBoxUxADlJMcEcBffBpAnrh", "EPyiHmFtDgosBukDAloeJEClLHGSgbYV", "ndEFsNgQbfVXzYullAGOSzZgAbxxMZEv", "SFwUHextWrQcVYEJoGARGrhqAHpwCyAp", "sWJkbZIAqPtXBQkMeORAWwKtNMGKdTTd", "hYpKmZcrSmmnpQjcJSGWAlfWsuZFCyNI", "NPnIiWbNJbJtYAQEEzrwlAfMJtuNERHJ", "cGvWgHfjwlGQfcrcCZhKffAtUumcdXhT", "bAPpZAEjyEDbPHuBlgqtWMtAWyJlOnro", "fAyDpXmBpljJTPrfLAANsJUWAOrqOMGI", "mYnFmvrRiXMvtscfHbHMutuyOAKNZjWw", "HgmlNPmLcPiFPvpBGxpGZumJrKAGlETk", "OmSobEgPnBPxjMUpSxwKFNclqNGAZZBc", "ZXDcDIXccdEvRrLAgMCdCEdOOZlZAYSR", "HzOMHhmlGDwLNPFnbZyTyRXnMjEZYAqg", "SpioOwjekktuOMBrYEATNHhrGWTBSqAh", "hoWVEkLbNBzePeihVvpdIJToIwkcRghA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> kingdom = {"010000000000000000001000000000010000000", "100000000000000001000001000000000000010", "000000000000000000000000010000000001000", "000000100000000001000000000000000000000", "000000000000000000000000000000000000000", "000000000000000000000000000000000000000", "000100000000000000000000000000000000000", "000000000000000100100000000000000000000", "000000000000100000000000000000000010000", "000000000010000000000100000000000000000", "000000000100010000001000000000000000000", "000000000000001000010000000000000000100", "000000001000010000000000000000000000001", "000000000010100000000000000000000001000", "000000000001000000000000000000000000000", "000000010000000000000000001000100000100", "000000000000000000100001000010000000000", "010100000000000000000000000000000000000", "000000010000000010000000001001000000000", "000000000001000000000000000000000000000", "100000000010000000000000000000000000000", "000000000100000000000000000000000000000", "000000000000000000000000000000000000000", "010000000000000010000000000000001000000", "000000000000000000000000000000001000100", "001000000000000000000000000000000000000", "000000000000000100100000000000000000000", "000000000000000000000000000000000000000", "000000000000000010000000000000000000000", "000000000000000000100000000000000000001", "000000000000000100000000000000000000000", "100000000000000000000000000000000000001", "000000000000000000000001100000000000000", "000000000000000000000000000000000000000", "000000001000000000000000000000000000000", "001000000000010000000000000000000000000", "000000000001000100000000100000000000000", "010000000000000000000000000000000000000", "000000000000100000000000000001010000000"};
    vector<string> build = {"ALcxPNGcgVIOkcTCkxoAonptAQAOfOhAaCcXowV", "LAMOvMBdMGNWBAzYnIXfOJwSxCdeEEYFzUVraBl", "cMAcYlZyMpAIDuRnOjRBkrjpwyyEttqyRwMPHjU", "xOcAIIXDokiCIcsvCjZrwkGSDbSpfHYvuzMaDMN", "PvYIALrmZyQSAltcamnJvJqiJbzPoNxyPOjowmG", "NMlILAyvLFXrJSYnttJgLFmxbzaqsuwuKpsGEqa", "GBZXryANoVyqtfJBNOWtRJxHNyQRcufoBkAmHvT", "cdyDmvNAsdKqHlbOAKeSYgXwVcpfVfRjWnJPiFp", "gMMoZLosAwDjrPZHkXlLQroJSSArewzvDVgWOfL", "VGpkyFVdwApnebpTdJqIJdKzoNKaWSoZPZkvtxX", "INAiQXyKDpAbIcLDVrdNgBfSJtmTTICuolZCBum", "OWICSrqqjnbADzFymUUHebZkvQxtJNvWZlbRHVe", "kBDIAJtHreIDAQAMMDPkMmsUQSqgBqhdxgdLAPw", "cAuclSflPbczQAThPUqrqIugFfZwxGcPXFiQdUq", "TzRstYJbZpLFATAYoyYYdvYQXVzjpFDtRZEBUZa", "CYnvcnBOHTDyMhYAKTRFNeainISvEpyeHqpgvQY", "knOCatNAkdVmMPoKAUDtqFRDWNOWcuSMjttKwlQ", "xIjjmtOKXJrUDUyTUAWIkxdAVlxhbqMHkaFOmve", "oXRZnJWelqdUPqYRDWAnUTUfqJqKotAWzGaBBFM", "AfBrJgtSLINHkrYFtInAZDHzuKALaOfOeYSFGSc", "oOkwvLRYQJgeMqdNqkUZAallXGIoWbSCEmVxHAA", "nJrkJFJgrdBbmIveFxTDaAoZTfkeNfNCIxeMihg", "pwjGqmxXoKfZsuYaRdUHloAchxAPVJmUCMhYpZG", "tSpSixHwJzSkUgQiDAfzlZcAufeJxkEGDgIUtWL", "AxwDJbNVSoJvQFXnWVquXThuAjPIUBJupOGgTXb", "QCybbzycSNtQSfVINlJKGfxfjAjlrqyfMmlNjQG", "AdySzaQpAKmxqZzSOxqAIkAePjAAFigPyawMikD", "OeEpPqRfraTtgwjvWhKLoePJIlAAqxDYSMzoIXh", "fEtfoscVeWTJBxpEcboaWNVxUrFqANzxsOpHEev", "OEtHNuufwSINqGFpuqtObfJkBqixNAeuRDgRFQS", "hYqYxwfRzoCvhcDySMAfSNmEJygDzeAEODLPzFH", "AFyvyuojvZuWdPteMHWOCCUGufPYxuEAmlfNLjs", "azRuPKBWDPoZxXRHjkzeEICDpMySsROmABErAVy", "CUwzOpknVZllgFZqtaGYmxMgOmaMODDlBAhZZiY", "cVMMjsAJgkZbdiEptFaSVehIGlwzpgLfEhAMKQF", "XrPaoGmPWvCRLQBgKOBFxMYUgNMoHRPNrZMAglF", "oaHDwEHiOtBHAdUvwmBGHiptTjiIEFzLAZKgArx", "wBjMmqvFfxuVPUZQlvFSAhZWXQkXeQFjViQlrAF", "VlUNGaTpLXmewqaYQeMcAgGLbGDhvSHsyYFFxFA"};
    vector<string> destroy = {"AwLwyvhUBoBOygIUkhyvHSImLdowbBzAARLZWFx", "wAtTznvBvLUwBTAbtDmoQZpsjxNjVriFwIFHOFK", "LtAEcPDRWTAilmyxDCSGzLQJYPcIbQIKAQJJpTo", "wTEAVbbQmjcuTrBnXZfVgBEEpkekFeMqdFFmwou", "yzcVAOeOQIsoUCHgBgWoSENicpHKHJUVhrbHdaH", "vnPbOASIGEKqrWCbHOFPJcQUeeuAbNwdpQQfyff", "hvDbeSAuHLYYnwockgeucuXqUrxHElkwDfhbeDm", "UBRQOIuAGwKNWSGSreaseRbjerErVJIMXBrQprB", "BvWmQGHGAvxrYQBgPWtogjujKYFrVQkRLLgbETV", "oLTjIELwvAKXLiAHuyfVTwOGlcoPlEouAuLgAqs", "BUAcsKYKxKAmnWVFMeYaYMEiChVtBuoTeGFQOoY", "OwiuoqYNrXmAapihncdetxfMcWQPEXNEKjdbITK", "yBlTUrnWYLnaAjXpzvDZOxenKqkIvRuULoKDqnA", "gTmrCWwSQiWpjAiwnDixnmaoyfrOkQshVpXjPGh", "IAyBHCoGBAViXiABBEHdlBlKwgUrDndcQbofwrW", "UbxngbcSgHFhpwBAfuZpmcUJMIqtGupXBFHamhY", "ktDXBHkrPuMnznBfAWaOeQUPjVpcIaHhtmNgBqZ", "hDCZgOgeWyecvDEuWARCkivmojmrBHUPYEggtHw", "ymSfWFeatfYdDiHZaRAhZmWduZYKkDxrphohipq", "voGVoPusoVaeZxdpOChAVPlbIhbgjLIhYKspexB", "HQzgSJcegTYtOnlmekZVAuaUAfCVDTAcqOgPiEM", "SZLBEcuRjwMxxmBcQimPuAHAOFCGbrbRhMZmdAC", "IpQENQXbuOEfealUUvWlaHAsTzXGAmehYxjrHDc", "msJEiUqjjGiMnoKJPmdbUAsAZNaruMUpHUEwgFo", "LjYpceUeKlCcKywMjouIAOTZAgRmuzeSfebIGIt", "dxPkperrYchWqfgIVjZhfFzNgAoyqyjjswTIZIo", "oNceHuxEFoVQkrUqpmYbCCXaRoAVEaFFoEboYMi", "wjIkKAHrrPtPIOrtcrKgVGGrmyVAbuFKIVpnxpQ", "bVbFHbEVVlBEvkDGIBkjDbAuuqEbAsgJrYLRTCr", "BrQeJNlJQEuXRQnuaHDLTrmMzyausAZLBOgcHbo", "ziIMUwkIkooNusdpHUxIAbeUejFFgZAMMXFrcva", "AFKqVdwMRuTEUhcXhPrhcRhpSjFKJLMACnjBlTQ", "AwAdhpDXLAeKLVQBtYpYqhYHfsoIrBMCAJbCTfs", "RIQFrQfBLuGjopbFmEhKOMxUewEVYOXnJAIBLaz", "LFJFbQhrgLFdKXoHNgosgZjEbTbpLgFjbIAHBny", "ZHJmHfbQbgQbDjfagghpPmrwIIonRcrBCBHAqXz", "WOpwdyepEAOIqPwmBtieidHgGZYxTHclTLBqABP", "FFToafDrTqoTnGrhqHpxEADFIIMpCbvTfanXBAV", "xKouHfmBVsYKAhWYZwqBMCcotoiQroaQszyzPVA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> kingdom = {"0000000000", "0000000011", "0001010000", "0010010000", "0000001000", "0011000000", "0000100000", "0000000011", "0100000101", "0100000110"};
    vector<string> build = {"AhPEqkSFMM", "hAfKPtsDad", "PfAyGQkaqN", "EKyAeLpRpm", "qPGeASfNwo", "ktQLSAnCAK", "SskpfnAdJS", "FDaRNCdAZz", "MaqpwAJZAn", "MdNmoKSznA"};
    vector<string> destroy = {"AgTqWWxEYH", "gAXPgjzIRA", "TXAleTmWvT", "qPlAQkwxRO", "WgeQAqgbJJ", "WjTkqAiTzl", "xzmwgiAuHb", "EIWxbTuAwk", "YRvRJzHwAn", "HATOJlbknA"};
    KingdomReorganization* pObj = new KingdomReorganization();
    clock_t start = clock();
    int result = pObj->getCost(kingdom, build, destroy);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22932169&rd=14724&pm=11282
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 
 
struct disjoin_set{ 
  int parent[55], rank[55]; 
  int Find(int x){ 
    if (parent[x] != x)  parent[x] = Find(parent[x]); 
    return parent[x]; 
  } 
  void MakeSet(int id){ 
    parent[id] = id; 
    rank[id] = 1; 
  } 
  void Union(int x, int y){ 
    int xRoot = Find(x); 
    int yRoot = Find(y); 
    if (xRoot == yRoot) return; 
    if (rank[xRoot] < rank[yRoot]) 
      parent[xRoot] = yRoot; 
    else if (rank[yRoot] < rank[xRoot]) 
      parent[yRoot] = xRoot; 
    else{ 
      parent[yRoot] = xRoot; 
      rank[xRoot]++; 
    } 
  } 
}; 
 
struct node{ 
  int x, y, l; 
  node(){} 
  node(int xx, int yy, int ll){ 
    x = xx; y = yy; l = ll; 
  } 
}; 
 
bool cmp1(const node &a, const node &b){ 
  return a.l > b.l; 
} 
 
bool cmp2(const node &a, const node &b){ 
  return a.l < b.l; 
} 
 
class KingdomReorganization{ 
public: 
  int cost(char ch){ 
    if ('A' <= ch && ch <= 'Z') 
      return ch - 'A'; 
    else 
      return ch - 'a' + 26; 
  } 
  int getCost(vector <string> kingdom, vector <string> build, vector <string> destroy){ 
    vector<node> E1, E2; 
    int n = kingdom.size(); 
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < i; j++) 
        if (kingdom[i][j] == '1') 
          E1.push_back(node(i, j, cost(destroy[i][j]))); 
        else 
          E2.push_back(node(i, j, cost(build[i][j]))); 
    disjoin_set S; 
    for (int i = 0; i < n; i++) 
      S.MakeSet(i); 
    vector<node>::iterator ii; 
    int cost = 0; 
    sort(E1.begin(), E1.end(), cmp1); 
    for (ii = E1.begin(); ii != E1.end(); ii++) 
      if (S.Find(ii->x) != S.Find(ii->y)) 
        S.Union(ii->x, ii->y); 
      else 
        cost += ii->l; 
    sort(E2.begin(), E2.end(), cmp2); 
    for (ii = E2.begin(); ii != E2.end(); ii++) 
      if (S.Find(ii->x) != S.Find(ii->y)){ 
        S.Union(ii->x, ii->y); 
        cost += ii->l; 
      } 
    return cost; 
  } 
};

********************************************************************************
*******************************************************************************/