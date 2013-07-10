/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6808
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

class Alliteration {
public:
    int count(vector<string> words);
};

int Alliteration::count(vector<string> words) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"He", "has", "four", "fanatic", "fantastic", "fans"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"There", "may", "be", "no", "alliteration", "in", "a", "sequence"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"Round", "the", "rugged", "rock", "the", "ragged", "rascal", "ran"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"b", "B", "c", "C", "d", "D", "e", "E", "f", "F", "g", "G", "h", "H", "i", "I", "j", "J", "k", "K", "l", "L", "m", "M", "n", "N", "o", "O", "p", "P", "q", "Q", "r", "R", "s", "S", "t", "T", "u", "U", "v", "V", "w", "W", "x", "X", "y", "Y", "z", "Z"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"Test"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"gShdvnQuNpOBMdtJukaswyPIvZgcwxAlkwQkroRDDMEQftFpUe", "gQIHPPpKREXhebYYXsMwKYZxYOuFBTTyiORzuCelhiEHvZoWE", "gZYAuMzcEooWXpFw", "gGRVjAQdQVsoxwftcxSNQJoYSxJPLQ", "grySPJTwcHpINUETEApOBCNGqgWFAEGhFoCDo", "gDiutQex", "WmCCeimhXHRHzCxTrwFyKfOWo", "WIzOaYbQkpaJeWVmRMnPudvlgJgcCifPbExgSU", "WwNvEuDbIkvciEfxvIjoTGcihetEhfLOBPVieXUsZgpFL", "WFwNDuJOWiVPqDnBcQmMAoPgCurYiwXXZAtTrsYMMahnqSP", "WflnFCfgnzaZuCwOOnKyFmbZbcYKoqAq", "WCGjWHIXweuvGUGIilyfMNnBrSKzcJjAlu", "Wy", "WtCSEvNUzLsrfJXURPSlZtLinHDdELPItMvaeZoW", "WcFJjFgmFQrjVerjXsOZhU", "WdhpPZRVRlxZjQckaijwEW", "WYKqUYCKehXIFVAtBtAYajpRiELaurCKNz", "WgXHAjEpLFPbdDeyZZsJSOrT", "WJqUwliuFRHcEZcZEUaYHmZTViM", "WiRaKtvzbxiptfikPjVukINRWogktGXyWJjyYQbLUoCqVka", "WzSCMXybbbURCiADkQwfBlMKGurPawPPaCidQYE", "WqAoTNfPUiZtWDgaKkam", "WeTTFAVDkirtDRfAhhEEjVibqVBThnjilHNYfVRyx", "WlQMACqgIzJqdZjUrx", "WEnxnflCSFpbQNqEdBAIxCYCabdPTasHTuWTvAhCyzBwGaWS", "WrocsFZbTUeXXPyWEQrRjCVtaTUqgTmJOUoKmidne", "hPjsujPggqYnqxIWMHoxV", "hxSSMLfxPnrixVZQoSdnJrb", "hpvpCwzjmLdUAnK", "hlbBXAKqzaYXXtDpDJyuwPInVgPV", "hvhlxyK", "hRAdRhuUm", "heurmnhiJYLUrWSDKLQJudejqooSGJsC", "hKIrznjRDYG", "hDJHRWlLwk", "hHOmWj", "hRBeFnqiXsHIxKiigpjgUnfCYOOCsgEwDVwiQuQAVIBxcXDk", "GmimVKyaIrZtzXHbnohAkoDSjY", "GSOMEObpleggxDCMhiBMdEha", "VaWNpAhxTTCTUGDXrnChcNBUQVLRPZAnKyUfbbu", "VWGMo", "VVVdRizhentGCqleTRR", "VkxKDtKlKSRsYrIeCPhaLs", "pfMjpSOIfrhrwPgYCwyYCMzWuEkwmxpYfYsmFES"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"PhVEzwSbNhkbvoCAcXPqeTTgz", "PpLGfEsgcgjTTrGjGNNxZjjjhCBrbTCIksAhLy", "PBHtuSXyil", "PgAuAYYEUJPQzNPaUrjRvyLpXZDEdLyXGcsFJJ", "PRRcgXtrJwnizHtKdhzkvVHDCGALSFjoxe", "PxCBVdWQoVRAD", "PndoBljTQGC", "P", "PpprfoYdXXlfuMGMUPTWkUXodUHzB", "PKhqRaUesgDIdNLXEbKMC", "PHzgkENFsdYNlLcZamnizzDlJvF", "PAuvhKaZQTeKjEFZKgpcptltZpeAZqWxqVSIwDTtDmgUaA", "PhfQhJVQIPEjOkjxcbRodZ", "POITINIgWkvlmdrdxP", "PDgSdXZDkUvwcZycccXBUDzdsdnNzVJfqkMukDAAbp", "YjsyHM", "YrJSMDHGTQCuvpxGAsxnvevTxqliCEIdAkkttp", "YSYHcWhKb", "YfyGCuUmizlbVangrVFtaWFHEyixuZakjybErRoiTdRgJ", "YDBDzWwQWebeO", "YykMLtJVpuQTicryzNHhvttGLXFGzx", "YfChdZATlyphAcAqfGTGRYW", "YDuqxJ", "YiFsZfneAjVbaqPpQlyncHicxEcErwW", "amYXRiFFNgCoqmzzDSUduNScQCvIxcTODiMpLgscOiAtmX", "aY", "aTD", "aDnjsNnihmeLwfRGEVrarrYEXioMzELRdIjuNBPpard", "akrTJSSRHUABYjrXQEUwmjISwjsAuvqKV", "aRhQsVSxVviElaB", "azpvcvjaJCeQAGvgpiN", "adtkFeXMJKUrVyc", "avpQeZeoRlplnofPjaoJrBFdJkqQQsaFHZKOdFQv", "lfWlJlBNqkvJibBYQglckfqXfpdbqK", "ldBPLzSoTbwhElyYdbOFGnqfwWp", "lgZshtmyioQxPPxOMkpNuunQXJuJSORmbVIAf", "lIBzPfZ", "lkFyeWxWyuFqUzXbmIFAaV", "lRMUzJxdZliHWAlZhOxkdXpLApROXHciYNziOqNCP", "lmKsgaYXOYGuaBLSwFXikyQYHueVV", "lAMtZF", "lUUZISwoLdQEITbxsQAMR", "lDFEShiSLjBRobAAwfSiWTCLSlXGgAioFBPKPhOJvgujN", "ldjckXwu", "lvlOiFZ", "lSbrbahzTUkcFpN", "sCzyiunZTusHlDIyXAVVoERNdWQWHQ"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"gOJyomYVUYjLLhkCOiEIpIo", "gEQCImPiBzmnIyxh", "gH", "gJPFIPACBCZcyGJidorRjXxvFQWRSjnbYsFCsIuo", "gQPSamdekmExtkVerVNCAERFfuRejZCcqjVQEaYgcfOz", "gXAtfNcoDXORbDCvzvcNwKvGkLuEvBSoFsXwTxsuiTLUqxg", "gMTuKDNyiWVXlRsbESpgLJZIzqzYkeirBpNdQcSRME", "giWdqkBxMjkatjFmGTsYuDTErkIkRvYVhQswZOGVhlwXTC", "gbhlqrzrlOYvvLeQttfM", "gpaZKvipaoHsIWVDjkhgftKWuKZNhGCaDRCrsRrahQbJUBDBy", "gBoekldNRGZfvOZBVwVxtZRobqdLnOvxXbYfODDU", "gOHmFEiPoDjWwrFQeLrKFmglVhDKPzdCTXLwqwkCrGMYMxrXL", "gYGARzKECGAQzledEqGzYOHVLgAjVNYTkbMnh", "gNawIufzkZQTSLTodiqlbZEJApENTUryK", "gJkwxiZFIEjEOHxR", "gAPQiulqTsQNMpWRMqmKFSHccsDses", "goLecMfNXRBFCkrVIWGnLzrJyShmSIENsUnsSCQB", "gsKceY", "gTzBExgCstDlhXLSNzXbzicdqSmeJzmAJFFVlQFahHZ", "gTdbATQW", "gm", "gibDAbXHtzZhEpngsVMqqGuuKnGoeyOvAhxyZGIyaxTgwzt", "gTBXBnvJZEckTbwihcIIwHVndspUf", "oZfRbdfdQJQertzbRHCGhjQ", "oROSVBqpX", "ocVUfUxvvjMbVlWRaCUfdfNdNh", "oDGGeQThgYsCPwjoeWCMhDZqqsyZcNbYeSmQOUeAtEJwaqmoTK"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"xaOw", "xEdgTX", "xgydxKnOGqGiYTxhYJZVdActlvn", "xlNrkJvpCZQIwoULjJirDCzXD", "xplhEzPBcpIKVLxGOKteLyPHgGD", "xBdhnCMgZQdaJVXvGkpldbmRPu", "xHeGDPZvjPSecnDqogHHUVOpKx", "xfBaTYLglVhfZMIMaDeOWOfC", "xjxUrGQiDANQVpRmqsDtOxjGkFoqsJ", "xdlCVmAXRQmNZJNpajpouICjGo", "xYYDHRrXgxuSVGrinOEFjqPHWvBmTa", "xoTKvDypctAkEMSSHxlkPEvfyfac", "xPqfn", "xwuEFsSrUqFyxyRDJnfdEFDxGHWmZjAQx", "xrrMpeDyy", "xlkKzexeMJRPpkIFDcP", "xAsmUMMLmgdSbhPxhlMgBgxPTeLDhG", "xYbh", "xxqrfEVmLORqvSuRzDMwbRfDnChaleqHcEQHGWLRPdIkBS", "xBeezULSHRSTTauwWiLHeSDLHtLukSI", "xkdlQeChIcJM", "xIYXFqdTAbNlQiSjEYyVQJjUzPFFJxDlgSLGflrUBb", "xTNirHNrVSpOJiyAgieakeJg", "xTGVupyyVtbMLnEX", "xsTqgHADVEHONhQdQkonpSprDMATvWkCQSKPYkMxjvtJWOf", "xsEUtmjNPUmGLbpUNjmgECGkdKTifFlSKWktmCztpAYsU", "xLaaD", "xrnvYDjTztQpzml", "xKVhxv", "xpwgKxnrSSyXIqokkeCncjJG", "xLBEjjzyqjtJhXnmdFbEctZeucAvOAQKmnFrCTnIKxs", "xtBfULuByDVIobmGwLYzLwBAYxgwIERR", "xIjAyWKaeOsodWdRmHVkOONmzZUPTsSVEtUSQGLtFZuqHuSSdY", "xKRxjgJoAyzMIhGfJrxkRGWXMcCxGkuebn", "xBGlKeuEGWFJplZuexNSKyNzhHbaGSUPP", "xbwWKRSNPbbfZEhKZqOfNVmKegLAdBPrwElqYZKXcZfQ", "xdlghERynnmBlEhhWTAOs", "xxLiI", "dWaUrkBdeayrSTdmSdvvFJachIkDnkkFKDsUKmEQhwAFK"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"JQMYUjXZODvliQIUNjDdDBpVCrtbsSiRgiEhdB", "JuelTexkQkgG", "JhwyCQW", "JObsMEeObXAkWrAnTFHTauYNXQmPUuhzzu", "JlXM", "J", "JzqHXufSZFJSbwZkmqMvZYMeXUXs", "JbaQpQSQNSchSiMGIBqTgMYPSkgdWENrDz", "JXjcwstsoTglXLApHnnMPeTVacCnGIyxknMZ", "JpNYaVQErsunLkohcJVyLAilGDMOFKZg", "JFNvcOeUYuZPNZVQGCETscNpGKNsLtmsIqaAXTuTnAolcMV", "JCKqEFYF", "JCfSNHDM", "JYBsOSuYEVOFQBGSMRMHtIUdyDY", "JuJiEDqFxKLEITrrLVVtgpAFQJG", "JgELOEWDa", "JyyuRfOw", "JjhUJUpXsiIGRMmqxKZPxVBis", "JBH", "JBtvQYNLCvtpCopuIBOgqODaC", "JgDDrvtefEXnCGOASrOJxtioqeYWqJXBjBotdSXgWcpiEanHub", "JLyHkcIPzYnMhjWEtGbvVI", "JuMuz", "JbQqxFXjguKdjg", "JAYBQymytsRaAtVZRDdECiHYHCyuiYNvOyAkxVbiXoqonoIlMK", "JcuStPnZFt", "JYmoiniyDpSdZnOzLyuQgFXUQpkquaSpBeU", "JbfJPyeKoXcXDPspmwfnzQndhNhCfdMLiUvAFoMEkPbEs", "JUSowpfqN", "JEvwblCyETHIKZmsXUQplbprAgqFpiXBIWldijkx", "eQMkMdDBJpwNuQpxRrMKkDqdZgHXVjkzet", "eaFKKGFuNGvMxutkVQZKj", "eerVgQBAVbgbYxUGsuCynQrzX", "eHhHapxhXUpgPSlsKZnLMYyrlIJlIOv", "dXeUSZsgXRnfWEwnxqbqjJiUcBUkoMBTGKEUlGKuyydqmQWJh", "kBDsqGdRaNmcLXjbZLI", "PjVOuabhmLJVsgROrNJzvBVeicGTETa", "sFNEnwBgZdBAEoF", "siFKglLKJzsyefxQQBkPzmdnRgRDKXxy"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"dwBGkKGAqIITQ", "dCVgiwbk", "dEvWBcP", "dspfHtKCPoysCxgvKxyCAoAv", "dvQOUVHNiSIfseGhcWCcagAPTPhnOfOSRSAHRDnX", "dkttSduqQXygqPwPhEkGYaKoDHksQUtNHdWzuvKLjGCDGKz", "vwuiQqLQhTBuldRrDxFWQdxkBpbcieqpJ", "vFvDYGVbabuJNLsWeHYoKkvLjP", "vrTPGWxjFPnMYnnCNPufFkBUhqrOtTkvXjbs", "vRgtNmOPnUUIIeEwrQGHTgquDT", "vLLKWoHRIMlmuObtjsCxuQcwYFEebpIredQ", "vqJStqRarFIbtUsYdsOOUQIelCxp", "vSRoAsUKUdAcYpYnKolErayGeEjCZvuMjpY", "vVFxOMtuiCUhycVvgN", "vc", "vFmHqBNdKJVfpHCorVy", "vQySgqkLL", "vhQVUjsSJrkyaVyqtqMMvBnWixrVoC", "vKhmfn", "vjanemxLgSYSbvAAfyw", "vXuUXSUIRrP", "vaOpociQmIMnsMVZ", "vxOMREYEaVeqmDzDmCofxSoVXdybAApjolBFZBDSUsl", "ZsxdsUXuRUvdAdYJwUZBbFYpJWbHhyZDRiKeuSRPmSpvtatJ", "ZckuEuMQyzpAlBoSl", "nQMiCGAyMufIWpbn", "naHbuUGXfEyKUECKK", "nRvFFYYRaliKcLJ", "nhgQKPTUWDtdSbKhHRGhdcFORvbTelcOwpBf"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"jAUYDEPDDefErAAfEgRFcxtCrZQNNWfjBxWdbgBnTxsudpCdDS", "jziHhCTuuRdBkJLIGdlzpUUpEhwvvP", "jmQFxPe", "jVYBfDJbQPTKcTRXTRdYfQgapFQWyHyM", "jpBjZRrLoDVlhfNCmgiGpPhiLhYRbvzRCoIIxmq", "jbXAlYlrpkMpZixX", "jMCiNGoOUelMrIohfIUirprPqxbFXUb", "jIQHmaUxHDKUdMYWqgkDMvTAAcYJkRLFSQzWu", "jwMVitWUieHSClVhVbmTNWBBu", "jRBnBaEuKogSvrQMmmvxFBgkvxfmN", "jGhuHNJptCBGDQhcpojcW", "jaAnuDFfPPG", "jpNiMRUEzlqMqFaAkxclYgmOguvqjsdUKajCAjp", "jHUMrRumiZyctJXiTAlNAIaZcmadV", "jyrOmvAsNwmlYWjwqqymVhxCYLbxpPmZmHwBrRPlbdUUQzLYTI", "jYOPxg", "jYdjxhgCCHUCvXuvLWTTuWnQKguYCSZNS", "jDQyxzAgpZjuVmELbQszdCsqKTSY", "jreAtBbXqtveKWyxJeriWBlkrizmzQERgVp", "jEJQtYB", "jvg", "jQdYl", "jHhBxYQbSsxlBaJngceTHgCZGKNrrFFXXUiyMLevfT", "jzixrnIm", "jIbvoadtSMdJtUIFStomDTIbjKhVVDXzdpYYSPQclBAHua", "jYPdPRmKnhBUHzTUMKeHbytyqtBfdxhJDMfZPzPGlsxx", "jgtzXYdmeUqEBnGqefeJufMYCVoWAIN", "jJuJYzmVyqEnSlFfXl", "jogtEnINgflpntPQXNPRhmmVZHnRIlUsgzWkrbUSpr", "jgkGVmeoCToxJuTiVmFK", "sWRwJALDbgyUVmOwjdivbYYVvjxaGzcQDycmySMJGhNRt", "sBkrRDyHYZoUDjcuwSoQiRJIIFXkOGYnFAAaGOKpA", "seiM", "sQyMdfcKQxCmmqbzcaqIHFmaLytcoMvMGMXDzCDyqeTEog", "DBMloyePouccMTeQQXzsdQPeskZS", "DzhvDnxJqwlNxdsUUWtCLuggPRIgWyUXdnxCQvLvXomNzojy", "DmMmoKenWcP", "DmluHmEeMqMsHXtvlbZxczRABFiiLXmcGciZCSfvxI", "DwqbxDeFhgtTJOaEXN", "DeuaUgUFQMdmUubRNVclbugXUrjWet", "DohQRXZERdNbhhNZziznJXIvZlRWmJHyjDpCoNgBSmfgUsg", "DMKZsOVmNjHBOCFLpS", "DrpllEakocofqhnJjcAcBWYpreXWFTvtld", "DvIiFveqfxFHlfEMctqeqqpxykfqoCmoIjlpfOipD", "LyIpEBWiVmaQlIZXVBDZIiSHxcpXWwo"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"jz", "jbrcPqqkytDnqfdKbnXlGKhcPjVTfCllUjLUcHsIIrfdFzXqi", "jqpXEvTGVLWg", "jwDANi", "jbox", "vspbBBJ", "vszWs", "vZAIeMDZKOnXwAhvMgnySfpCWalmdPzSJSRT", "vf"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"SvhSMxmmFUEhWEAfYuaFaXbmroGVcGvB", "SHmKvkmkfDLcDlbJHRRksZfvVpVZmx", "SNrCZArGEqQwJaseTAnCz", "SqrXULnmbixfndZjAyqLRJIntF", "ShBwnXjmPlmlDMgqrBQSIHMKqShIuvCmpDVpzddhVfvz", "SfFtPGjL", "SlbHRqkfantHExRTOZGhcrvpoOrWedvaEZMd", "SHqXhRWDXoREMiNwaRWWiTqxyvURuSyVkbwGfdkrIfiJv", "SxXeQVGKasktCehsUiEVQDbfTKkLah", "SLUpdmulxbAQXjvSVKmOQErjivrK", "M", "MFsQPcahTDTqksZNJuSWlcPjRdBNrRBJgngZnUtdoHuPYmMg", "MWPeRQnpLTKLAzClpVzemjgHoyhgdSZpjCvyKPY", "MclKvHPkxDcEfZNHNYphyZaYWMRbNlGXy", "MJmADtsCCjEjANYbVrvVXUfzzX", "MdbLJogoENovuSoWOjMWee", "MCWxgFMUEEkLBcTU", "MpWrrgIct", "MeDuWNYEDhIeHIWhseBvyVufowoRsqECmqR", "MauK", "MPDccbXzCxMWeAbNa", "ANLRRYDhGktkoTlHLUdGnAlkxju", "yflnqVkobDx", "ytHfRrDTqeIXjoPZnjgMYgmSXDITTcuurGjVJVG"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"gMVGuVjmyPLFXdyKuHjwnajJmsHUbbUuONmAGMgECJiVz", "gMgAJAbqYtnPYkyJwjozUOKsgcsCFOoxZtEWKNbQWA", "gaDwQqQhrqAjcCUcmsOuzPYUwrpekfQoxCoNmDbhlnPzkqvKt", "gOJjBEdAuZjrHQBLpZkKRmXVuNIGlkUYpcM", "giYHCFJYgJIHOMrgXXhXOvYqfBUkbXePvwLEOmIzVctZnAqqu", "gCwmcuiwbkvGxxYZcwVRqvKuWPggsKQVatikMMvZeRTLuuBX", "gCcfmjnYjXmwyebQt", "ghMvLYLgDqFUnvBRGPhuefrCCFATYLkrfIOchFQSIFXrZtsnkT", "gaWJVGhCyxUvZadFMlHzvBDcwLxsJNrfecyJWZA", "glJHmA", "gfleSTVKEPNBsnpBCWsRmNTbRYzgyeOXbMNYaCGBYiyMMoEpN", "gkAaGvkeeyRQlNFtCptbtnRIrJcNNowVMnzFwYbwKT", "grZTQPpUsyiCTgOKrNLVVW", "gCjyIxkDjnawsEptiXqh", "gZTuYChFVfXhxIAhrszmGsfUMEvfN", "gznYWShILrAqiIUehUJrTzNcoqV", "gCItFImvLWyfKKSHBkogqknkie", "gUBYANxaZiULStjYC", "gkCLzlrvrKaRjLRjMjCndvJi", "givgKzXEGlkKDkmUjiOAYNUalOJ", "gMqNQJUaVYgRjEnqU", "gJgRiPnAczLP", "gKlaDEaHblGlBDzSyxBqZvCFCXSKqMR", "ggaZBQgJeSlUaCGLNcyExChXIsZWD", "geyd", "gwZzFudDxiLwpoEAWtTZyQGDCKcwyAJiYohY", "gzxBpCLEEvlkDcPDWlliNXCcDsLaxDVaIWikrGzXAGjjvb", "gjIeBSVuBygSoneBZFeHjgNGABEnFI", "gLwshVYIVawCABi", "gGgsGLTMyCmdLJD", "gcARNVBSkNElLkPGWZinJBcPNkOWOmwbEhjNdyzPulomRtoNQG", "gtiMofBpQTuDhyBnlkwyfqhSrsgCxR", "gUXNFMjUkLqIqmfXlzUcFgZXRf", "geRcXPvtMlikQIOqVsiEGMwJiMISUwXyDqOgowsBPgZuY", "gXz", "gCwTbNmeI", "gxchFgEPkWmemdsstinmgvDgktxvQOPYScSTHWolh", "gLqbybEGkiCFpGVCY", "ggkYZ", "gRUuqWlhblIoWmwgU", "ggGjMsqFWNUtErpZnBEscraFSadpXRbLKdqHEd", "gAiQZSOJmm", "gviEIINuEvTrnSkOaaoKnMqKaJmr", "gg", "gozmrzhpeIEcwqaioLBQMMpYPpZQMLAgcFNtpCKFJkKbPF", "gNlgvmLFbRfgcDG", "JN", "J", "Ecpol"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"LcpbuSuAe", "LtDkcDAaQAPnBv", "LCLJxdZWsZTgvBXtuVpGJZuVthczlz", "LfReHpFGyeqJaUablyHJYDzs", "L", "LrEPxHGaBLywHvFgaXDvpefKFXIttFCFr", "SNJEfQImRTivGOFrMolwUonxjmXuhFiWuNWvNqczaCbQQIHn", "SVhBThNZLTcafZbDyg", "SDGniOohutYSI", "SJbOHrxWaaxBrFkUyIxUMxpnXRpZvJxcvQ", "S", "SkwctvYGUFLDUxqqjENWaYHVKjUFnxHzDvwjpnN", "Sbxx", "SDfGX", "SvWSbZiFLhCXKlSTmq", "S", "SMhGgbPDBAnGPpKxjpzumIfTxuhTOOCDVkOryGeblAzf", "XYkpSnAtMCChcFTKKQlGLdXDwMnyubK"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"EigcVzuygabFGFxMQUYVfWUaXioMQVPo", "EclHhzOVWNwIcUeI", "EvDlgZiplkVobwexmOKQtfLxzqbNlriKCqRrWfSsWTerWMsE", "ExrGBnQrJYZxXUKczeBoihNjEoppQtjNUDGnTVYAJOi", "EhkwLyuxzBsEWmJefDrD", "EbuisuBdgDGLeiavlUpKKXjJkOvFWSaFmhcyeNkPDLqWPczoMJ", "ETBKuazYVAJcYyqRqZh", "EdvLcSGxDyYGzfTaUCOTW", "EDFQKSOtXERFgNfwzJMMrRQekhdelmQuiXAckaTpGt", "EoMbnKTvMvNChngrxxfsGwcIXftgTjgDBVCNtuDlUHUwlm", "EFtohoPPNAcUCTsGdcxddUoNCfhepgnhTcvSShqkGLymJ", "EMlIUxEAVhGwIRnSchjVFgil", "ErjFCWDHC", "ELwprXpUpNpehVTuwUKgnanptLsZpqrDitaGRDxzP", "EdsEeBaNQfeslrmKOIGFvKQg", "GRwapEk", "GtrmvaoALNCOBoabjVRSKsXhuOEkmwHbKflvtIATL", "GmMFaNQwnVUYxywgCtHuYgtUmSfqZdCHsbySnXaWJww", "eHqOBiNXdrXU"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"jUwVDpmxyyVefnTUqcZAyJJkIBOjMWOqCDBepTewABSTKdch", "vDsECdFJiZbgWczPDMWvWkqUOJXSkLgUV", "EcJnOxTjWVZeCxFYWVlFOFMLdnKICwnPdWfivxukTVU", "EC", "EJrdZJugJLantYLVRkhSXbeynZeDiZvNsNUHtGVdOeF", "EJL", "gZ"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"kabEEbrBojxuMTKAirlhBhUZ", "krMFgEjuxslfnARDosuWeHvgupDxAH", "kkvXbZKmOXWLhTyUCpOWXtCarktf", "kSKfItTMPqeqMiEXKuIN", "keluqQ", "kKWjLjPmvuxDT", "kSCkeScGNloIwmBMNNexYXgIwRsoyA", "khKFt", "kFzKihvHMhAx", "kglRTZSNfdvufpbgBJadnCzhSYDaelJswbzeaZkZclXUYPH", "kUAPp", "kIWxRXnQPhhKgTzZbszcHFQLbOOwJltcSwIZxTfzNxQBsNc", "khJfHoeSIdwiSPhvtbUPKEUiWu", "kubgKSeruIWvKsrcOMFrXxVNnFtrvplPOykOCqkazXGejQK", "kFLdzhbpDzsnceXobwemYmukVGeYrEqVOsAyNTJeVk", "kTtoZVDGCUETPCBAS", "kACOUVapeXzpEzMHQQuMsUUAJHuPAn", "kNNyngxcujpitGlR", "kTpxiHBRbMw", "knAwWoRewzycgNIjZhwoKMfRBPAvHYFfsbYV", "kikLGdyzsdDvzdO", "kWOM", "kyvfd", "kILQlvsbkrnfjWftIRpzaBBSpBFbBjjQvGKI", "kwnbPUUgYGNUPbLPnPDwXeSnBnRJMFwwLeRNx", "kNxIDOrSUQEsGGWbCmEekEFVRgbkGpsRS", "kNwmhKELsiYvkUtRXaoCxoUSTMaZBZTFifl", "kGyNDXziYNhFMirLPNXmxTqwXNEnjaCKOIDdLdvTMZvynZZ", "kHzvDHxoKWpcMoYfEFozHlMXOCNgl", "kWkpXEZvFrkNyNUjlPzFQxNDgO", "kzZiBZBCLMHXdMkHQrgUBaLQfjUPYhDuthyXnmzM", "kqdb", "kHYXJgBnDvSBbWWZPVRUVRqBhImBpAOpwXKEUNcspHApQf", "khkTESYmGtWVNCqtRp", "kBmVUZwAdcwMLJGfZtwiqIqqlXeit", "kMABQKigkpuiBwEmcqvPYSqxakikFdbJmTqpcbTjNEzwyZM", "kOPw", "kYigBhLR", "kj", "kNevPbnoYPMJBKbayUJiRnsdapjwZujbXvcWedSNIaFuN", "gOsTFa", "gupeIjbDXhnhDoaLiMBptxJcwukE", "gYLGsqCGBTqxdFyvOtsrsUSiWiypnWpeJeOlmoGpCDgwWY", "gkOTgsddSrmIsrmHowaIztLuSGOUJBok", "gHwswldWNtjiLDDxabiZ", "LbZGmSRIRwZBcdZtYdvZzt", "LBMWiwEMryXWyCUIvXimIDZprCOFkCEhnMNZTL", "MsVdDaaTEtYCimPudLipYHUNsXaVuabvMitYmstfHlDZU"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"Fgd", "F", "FfsvdOnDOYazOkuliQfjodjfESpWKJykqURRZovksbMoRHkzp", "FBeHkL", "FJVBCzwdtgzPoRdPSJoyNqQuAmqjhvaUyOHY", "FQZss", "FzRNgYdEsKWAILJXwZMlgIzhXJQHIxyhMe", "FQaMGjjQFAjygHPVcviOP", "FJJzB", "FbVgnGvBdYdduIDtbE", "FDoihiBarnNMBVPvAXsLivPRwbaOfclWokheIHITcgGwEqGePj", "F", "FkkWAdOnFfKDONcmYfLoNMhnFOOiVOcfBcUgduLLQ", "FB", "FGWkHwyDAgQdRNqkdYdFrPVXiCufvizDEZMhwhdDZiyXqwzhx", "INaUQPBtCxdjOCKVgdYHvdvDbxCimveTbTClp", "IrzCHlxhzipxluRCyAjxShZReMtwuGuBVMOGDffJOSkm", "IkZfxtUTDtKFvrGlfjUsa", "IgAiXTDvrPqZJQ", "IldkRfsfPDkKlytmmZHzlaoqoVlAzeRlcveNj"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"YRpEobPBJPyvAmvD", "YVXUFZxIBNbTvl", "YKviEVXgjEgNFV", "YJtWNCahyOhxowHmm", "YDjpAtYeDIHGBZQJMTvHwGplEoowforfFy", "YtV", "kSNVeWjsyOxhjqSycp", "klYqZIhbKwbHGOtawiqBYMeeFwxZENTyfOMZqpj", "kVrr", "kANfGYqRgzkiqqMLwfRwulAwAoeue", "NGeKAmlKOwwRwEDNFXSGGRJHRZmQHYxapjDDBtEbYvg", "NHAG", "NbxvjLCECYqQkrjTFbMiJTJ", "NbNzLE", "NSKsPnmhIijSmRYxDiMufuaPjzWpYNbDaebZt", "NgjcXblcokozSeBevdlhhqdMpDJTOmvrIexuvkAJMgKle", "NWQRnnjgkKYCrRYRWTUGZThXnjUPKHszCPKaNctHeM", "NvbcdvrLKfUQOOxwtTVCxrAWKOfRbAXUtKhSKgei", "NWiAzhvIAqkDKLHerFbwHTrAnxxBirrImjaTwG", "NsWUeajtuqGHdzSDLNOsbOUsRQpNLNdzwhkB", "bUhzsfGIHxTygHucVoiWtR", "bZwotFTmTlxMqsjKejwkBPEWkk", "bcFyxZNoMxtCzwYUWYmwy", "bcVisUEJvkM", "bncodEfYAjIVSNvIzBUELZdExlXQZVxyLOTXMG", "buHHP", "boAWxotesdtmhqLckoV", "bYwKYnxZipLALHVdzaBO", "bKLmEnJknmckouBnuZtTcWUXtWvbnroCFjws", "bSdRBgoN", "bURVArmuJnbRVVGEnQFtH", "beXpKQiLgShcKZOQqrsdyEGJAvoXVYbodtyg", "bVzWGXOPPLs", "bQCjaUhZvcHuoUfEwCyiFrvD", "bKSSTHjofnzrAreSnkmoKDPoiMmtVU", "iMKGLfpFfGzjwukVQTqvYZDObMdNjAUbnDqhNNrAgXHR", "icrFsVeZjSKxvdQUpIUPnovLaaFDKxQqXWRcdXhAQZzXpz", "iuEUJRjWaHHhIIH", "icLCeoQhNwafiXqWzp", "iXmMEFaqeNAlTWSbLfaZfVH", "ikEncJmLjDwzLHXX", "ikEpIVoceNlOBdFjotdcbFFRlrzXcCF", "WmlqAbwQOoIOEaOgDUfDBBaqpvXhtYykiVOBF", "WJVJpw", "WOETLuJpO"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"MdzpuIqVMkcFqchzOmlRppxkbJRcPUOdmfMHPjWwYThFOheVf", "MIRZaIKPeZPcjSOfffSmth", "MZHPOkaaQCxMJowwezGuOOYciGbdBbmIprDlfnVhG", "MfSjLbvXgDgQBdSFNhnwHhQzPqelqQJhe"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"BCQWyYoSGYdLMEdqv", "BecCeQHootPBAKJaWfhzozXzBZIsPABccWiYlPxeMXSNTY", "hdyGAFzGtrWlikulaOmkDgmcUnyleRgNh", "hDtbMMeOTrpSDTJmtMnUcXqQGWHavzaJEBZkwdTZzpMlalPsp", "hucHzsXYYflbGeQCSqseXGBb", "hzMUnBDWeyzzHjVgVoHdYYeOUgbGXLHYxSOzGHvx", "hePbcVvVwHtjmOuVImsSAApeIErEQrLnHWWV", "hgLnBciMGgqLxDGxkEHjaLDDjHdRtfOqukxlH", "hZGlUUAcNCifDnIedyBNfuT", "hJYKffuWvjDJKEwbGOsUIhactnDjeSbHeKrZMIQjjjXPWBGf", "hzKFdPhZthNxWBlcadPerOwaJikPPXdtaxuMnvPnoQShFspja", "hUIXHeOPWEvmzaDWviYAgRrjWsTqFNPfNF", "hxqFRiEFTWncwekWAGJqL", "hJQDmwoCBrrrymlDBOHJjerlGrHZWneO", "hZsnizaesrcORCpBQBCcZdjQgqHsT", "ECQGbSovgiuSFDlXcuudiYlfFOpzreDdeslH", "EOjhQlPmNKEkdQwhAGsfpipPUMxDkBXWbYDSjKmKsTA", "fbFqmBXwqqpjEMASkcERfBoioKBxFKGpx", "fioMlOXPjOyrIqKnbmRzZgudofGRNKPGPxo", "VrLWajIyFjKTrCuuNPJbDqlh", "VFM", "VBnBD", "VJM", "VFHvGuRIaUUPlnKPjhErgkhucLZWatGjWpumXvl", "VBILynyEMaezIttGjg", "VSRXslPQvFsCZeNYTAbKSdWfIhqGRTdQUUwPWZUTnVavs", "VjnAhpghbkQLTjurrlETkIcnRum", "VqmBKVARUFAgdayRocpATXhaX", "VglFvFgTqFKoKqYxNlRgnSQ", "hzYswgyzQwgEnM", "t"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"tUwnCDrPbgchxZXPRqmfaUKDvo", "totxXDoqJDImSqaXDKEhHVwjgAynkSJ", "t", "t", "tdlrTfeEWGLbJotHGJuoyrEyufardIPScIrGbzunwQQjNcQyLh", "tmjGVqdcSDSRUamzekzICTLNLpOjjprPv", "thoFGAqCbQKkegscfBVPruPVOSPczNaQbEqqDigxDGt", "tZtRyBInWYsyONtdXBtQEBCSTwULdgPIFTnwkxWcvpH", "tKGcNxafHMfzyLZ", "tNi", "tYkfgtWrWoujiG", "twIoWzBtXwZvwAhjEiLinAsiQoVFqsKSVPv", "tHuzDEJhERSxucYZSvBClCzJsu", "tedHhbsCi", "tWWxpvAWgkBnaIlWeXsvlwlbEDMF", "tRAoBvfTwHxRCKMJitMiANAxLrvay", "tOmeDXxBOaFIeXQzVeFQDoTItxOMxLCGFCuMBWuWdn", "tDFPueV", "taphZAoRbWmva", "tIYWMS", "tlyBfWBIEjiIjZubFbEfZYHLJedoHhwQZuJ", "t", "tWxPoJHLcIFrDkxhDrtQNZNyHPDZsMMwLHknCvowoztxofK", "NQQLoQyVTIZPsPxWCS", "NjyPOeZJLdMmFMEzwchwHCuvhCnweLcgry", "NThoOoaKeghkpLipPVdnZiThkTTpYSCOHjq", "NuIilKrVWrpjWulcgUwovwNsf", "NPZTpxbbYIHhKBEfbrORZPfKL", "Nbzhiwqm", "NZtDdIxiPnAwAv", "NGUPVtSGFwnAxgQvbhydeIAa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"gnaBZkXVGcEoyohpCwInGDTnolAPEqR", "ggaZthGbTCGIhlVgVzsKMvWQRXZVPVzzRnaDvdugYMVmigbP", "gwcNKWWBntJPrVvsbuU", "gCfkQKnoInvZeaPbACsScoiGBydtYRDY", "gteShcrJtmclVo", "gZoIIQySRhOjwDqvUzoSYwASHxtDcbgzaKAYl", "gdeHTEBVaQgWHYYXCvZQYD", "gvAe", "gGIfhs", "gbscNoKJXr", "gjfrrQqTdRSAmAEsCWDDJdMKQePwknltVRcRwa", "grVySqPrmIDizeXudnFmymwPekUVkpLMnNeezmPUgHYmmNCs", "gchbPsflrqFjHCmEIVgFGzjmZQYYZBECTzcm", "grhwBkBqGLYfuuGcDDMigRBWI", "gVBSyEtZVzsPEfFZPjDdaCpdyiCzSGiTrDAhGHh", "gcKdQwTydunbHmDBzcKgbWuRpsNC", "gpc", "gra", "POQeLmDa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"kGQxGjTvDkOtoleTbscFJuzLzUbYADaTEjCwsNBhmTH", "klPdqUPUbIggXwZLSSHCwOXjvSZEyvqQNNswEgyNoKAJJYGJ", "kSkghyK"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"xwkplPiEJlrEkWTkZPNAwSHFgwFLehCGNUXJNq", "xNajmIynJNRKnazwwPlauxOqznmdZOADrFrSMaXeTmj", "xSoBAUmOtAcIAzroxFcqDdObkMiJHDNao", "xhucnoj", "xEUNGUeoGyKrgRlNsIGaYXjNNkvcTrLJ", "xvYoOxsndaAgwxyaW", "xDupfwWAdIGmcfdXKYkZNvTFdOrhEUDJwXrJwzRBeLxC", "xZbaIwkReNGeEkvlCLlLXwxzSffUVXztnrIesTdjrgz", "xA", "xadhXshweMVgGAtptfNjaAYqepjLKKiKv", "xazTGEYmvEsRWjFUggPJqAmzAUlcEoBnjXHz", "TfIalalGcAJwoJZumgaZzXdyYpLaRAygFsKxmotawEfKCodFO", "TVZFLjESzAYGYTcv", "TEHGrVvhtnAKnFlOJlfgUdaBq", "XfhhncYFPdcHAeyMhxgSUoPXAdmq", "XYOsQOgsTmqNjJzshbwoRSkMIGAqbWZmXbwC", "XErICY", "XF", "XknJqzDFIj", "XFcVw", "XNTnsgcDyyspCKRETcKIRCbDhdhXfvhAgzQtZZWwiYn", "XHmmuEmwglUm", "JHMcfPlOtvQcdpaoyZGHpRVuqyHcT", "JMQSeANwJoHaWMhjo", "JZfgbqiPezAKKJypTEqHttAsKLjIHPWllEzFCqbcqRf", "JKGisaKMWeNpXupdodQEJe", "Jb", "BoqJltOfYb"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"TKR", "TgKqZxeGhxixDGzbEaLUhRVaFcYnOmPuXNlLDvDssvS", "fQOmSBpDiLEjjVLAUZumwUawZdwWoeUA", "ftfRkJEJXquoEHVEGYKTFOPdxF", "fr", "fxSPLrCJxWVAlKotsCoqDHLdlzWlwaFeKfpJTtzYHcdiZ", "fvEjqKZyKBarydQfgdCvwscsXplsztR", "feRLvSymtVpruthNlHhVTfNvdVjqQuDXDKMLzMQvQPwidqCKUS", "fEINEPBKSTtJtZmdYTvptGkxfx", "wgtWEieZPeSXvvWxqRFlbsIepMtqWNiheEZupUHOZdrqvHus", "wlIZvfpzSQKeqlNnHSzVqXBRwWzRSBjyGSPUt", "ZrzlBPxnzEqusiekpkndpOooQfgTnVawmHKRewdaUujB", "ZUyjjudLAOkk", "Zliel", "ZNPwIVlhcVaJqpCIeRbdoD", "ZtYTafQnPGYydpJbbanzxnUTgBbYcfcjKABohBTsttcaxcGou", "ZAFidVjWvYfUGuROUxrClxoNrJwbZMoBQaR", "ZoTuzlHt", "ZJcYpplnKLUdschcUdjq", "ZBDxPasZdAsNffoRmUNZKffvDiribBQzTryCisoYwxVtjlLPLz", "ZYaUooKpVurcpaqp", "ZilVRXRTdnVzhXxbPRwigrELkOUjRHBkC", "MCZk", "MgEQXHyMimlytwdetE", "MnnVtxrTNuMWmnMmtbuy", "MpqlWpJjoEAxvvcPROtrFsyqtWVUStgbyGKhrShna", "MwdvEpPZKwxOaqgI"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"XJcSnBllhUysMXdNebXWaFxXIHMkbYykiJxJ", "XafAhimYQhtATwEcoXuNatMGKANgJcB", "XeSwpOrqrACFFCBBejOihcDtcOTDWdQe", "XIyYRVNKKioGvWmZmsWsWzAcuwaJheZRyW", "XrCvMhlrKZMkUVzb", "XsJBrMtuO", "XVrGUAytD", "XcxfWNYIsCbvOUFfEsShJrnWiMYAdJteMwQ", "XMSsRrmWkBCU", "XAwgeoLeJZxHtZVAmxdvSqEXiEeWcYhZqUtXfeoNvowyW", "XZPMnpqbfgngVLgJvxeNZcIhwdmauU", "Xr", "XxJrEVHWcQcNhjBJkyOetqLjLTZcdeRcFLKwao", "XLvGKkgscezynws", "XBgjkIEtYWAHZDEJvllvjoxTPJoOPYyLTEcqhKdDDSwxCs", "X", "XgUtJ", "XUflnhYMfxwyaqDzMOYQJcafmrjbxYJsEBi", "XtksKIXvzcWSgTifIkJoqEEdDjvGSPpSLrhNGLJtWG", "XPNxxMkOBrPFAqAAlQM", "XxGIqJzDGLvn", "XReIVSwKsXaCyjfGOliJnlLgtFowLqxNqRHALMuFF", "XWgX", "XDRfAvcTSdMhKGYDTZmDuGvERnrp", "XMyfbekMitFbhKwwfHMRLsVDD", "XWhccJgB", "XFDmHCQdef", "OrvgYV", "ORqthrNddYN", "JYdpT", "Io", "INSPzQIKPcvQHpFRkcWsscMKZrqciLEPRVsjecahGhLLNDa", "gYa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"iAsKkOQATaOhtVYCEjGkERlB", "igSampJxYzgQKMLtITGCcaJZZTTiqrpZDRpOB", "iKqVupwxQauHReKKJfxOFolhDeOmuLoDweDs", "iP", "inxkDdNSmq", "izprMHFmLJCdbLwDYreU", "iXgbvoqgLMA", "ieGZnBcQVcrYq", "iEjmfCRvDVDwRsWJDrODLtwXcwoQOxJHSP", "iNr", "qAHlAsvrdfg", "qlygIIkwvRsAWollLdYJSdxBafYpsGJlzhyA", "XEXVucGwvTUeaYSJBABzbqrb", "XSuwmPasCyhhZyjtTBjdVXyPHAiT", "XcZ", "XyY", "XWUolEwtnoGzdJVxeflLpjfjBSEYrLVPpJukXgGYzSHwHQGGCJ", "XMnvhdaVeNoLQRRkoULdfdyQspfcsuJntxpuqPMdzN", "WZhaxVRHJvfhnXewoywbloJfnNskCIuuBefibcgPVm", "W", "WwfyUtZWMEAYECFsEs"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"XXstY", "XVutzLtANFwDKcoeolIiPKpAM", "XSCpycYWSVQumyvjMVyItTMSkbnUvBuuIkdJ", "XNrjhoCBJpHN", "Xmu", "XJPkScyssdSyPahDoIKJsscJLrFELMHacCrjhThthypj", "XieefQqVCTyTyUJr", "XLCmcTS", "XkeWXHIyibkJgKMpHyzzLb", "XUzKSMGVJikvaIIegmhnANLaGUMWqvVKhAogaYGOtCJILedBRa", "XJI", "XIoQLetRQIcNYKRNgQr", "XxwvtuYnnbqFSZxoLgx", "McyvYsvtlWZuqosasDMhZLovrUgNuVJtnBYBxOTkzDIhfJZQi", "MnllwfShoUYgLspsGTyLvAHvaTqLHadumXUgBjYt", "MsFgttQFkRHoJZAaMXalFxSowejClnwukOXqfNRJKVqyuFYgU", "sThaeVoCuZexMkfXsmOwKAksOipfAVyhzSrtvnFoRHzXU", "qRJwWrSYIdsCMbAnqrpBaezwJnMMkFTmFDjrgkPJbGSpDapD", "qJbbTBQPmXUooHiZGJJJljjcyBunIx", "qpjqUOtceBtEiWKzbbUyyyxGqdcPYIu", "qAcBJcyihFCznNSbanuFiVukNHVPPvFSNPRDOzUnysmawDM", "qVGAqtYgqGclnhtviqPajOBarvYqMGed", "qrbRGERGtbiufKTXcrGixeBzvCcoDzOasq", "qbmZkvIJulRDnNFQZsFGz", "qaizgEOEgZbWOQDhzbgUiudUSUDkWDvPkI", "qyayjGjRjIDedfnthTdUPpvqnenKrQBvRQTta", "qpoFfSYQfaHOTZdkLkkGfvwIjRG", "RgMbtWlfhGpVjgxUtfjEDtcjnZevsxEBopkBONvA", "RZWHuQiWObGKMHft", "gfgHvwYZrEucRN", "gXFlwuDEdLcPAe", "gSQulUcuvpaFIqAXvmMlxlBjnqDNBg", "BRPWBinbXfsIbbMOWUPBNIChwAxm", "BPCCFCclojsYiAJoKjvQDpBxBroSaOuZLOT", "AtUxsAzfizC", "GlVtjCJmrQXDpGaXeXFkbWztgJsVvgwHPSctWbGNtsCEatVivG"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"lFtBQxGgYsTakSsSFOObot", "lQ", "lVwHDrm", "lpZYozsTFDLILiNNEWoPQeUhrfXzUt", "lYThmqwyzsdbDnOYFRJfWilbdRdXGUhgyTZeHuobaSJG", "lkNSIjFfwkoCSg", "lWGDcQKhejnNUNwwLWimHNJHWLcbKMsgoHcOxQiAEZoSAoWSO", "lopWljNAdQRmDYKbnvz", "llwaQRFAFIkDoWMpTewInHYkGIJhAUv", "lCdTDxuCcpBBbKTXVGNMMZmiByCZmmAJdjaKvSFYSPNajfPFC", "lcgtvLSTnSVbP", "lWyVKieiECwoiQZmgQW", "YHg", "YtKaympHHHktmEwbdInSmlWKNayrTmKGYOKALPnYezF", "YMq", "YlGrPhuXBEKgyrnWk"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"NpoqKbjlZbZmCtcjjCsxidfSZAdlLoygKTxIYLfb", "NRM", "NuEoPfJHiEDTNWQlgFtyiuluCWa", "NOfBXBMuCkbIHRJxKazDaXHqjVVZnzQvhyPrSqzUWrfuuRusJW", "N", "NnPsEEJwMfGkNLQfYcUaLCZZKLoFlKtDTGOMLyPTBulwSPZQsz", "NjfYGvXzVYS", "NErNIHaHjMYicceSX", "NzPkMRTyEkC", "NyIGHoUObEDrQFIUhViiyVcgJXWRxtnAOHwSPFSy", "NYzSgZCwLLRnQKyaIbAngyAm", "NXoXo", "NWucKoWIXfZUwdFsyhXiyOKgAcMX", "NUejwCeyVrCCGdyn", "NsZLjtvuDDXeRNI", "NLHoifocznzZbZhCERv", "NvkqutFTdRqQeemyFIyidGXJauWLnBmAAykzSgCXDatIKYCI", "NJjQYlNbaUAZ", "NgOhQhKMsiSRk", "NU", "NKmeINHqeXaCGSbBVwfHYoLBVXkrOtCqPLjwrplUISRBmPkaBu", "NgevhCGudgFEp", "NOwVAoPHlFP", "NmWmaLqwgkFNpqKYJbj", "NofwbNJLMBfelNHCDGVTtxdAekSBaCUyAT", "NfhtEEyWFVGcCNHCJvURPiMtiXxHJvLXRSWmVLDWmALWLEfbLI", "NScDWosLPZoNOQEsqbLKGmR", "NsoMqLsRsTFnU", "NBrmaOVYOfLyQOwDgfszm"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"PiaTNcboNIyrJHncgjIOvDPlgwqsqhBfNfJpbJOOubTG", "PnvIsjLhFBfDkamvgJLVLUBpBlfzcIKrtSyhLIxXpJilUM", "PPBwJehUQgBTVWLdspqjAKOpqzuOLb", "PNDlKDIkggYNHoKvTQRjucbTKuIaWduqopdrgFQAvOWFsG", "PNdWsnxOfvzDnVcfYTKyMaTzfaILvtsKQJrBncAEYTiQIrgrZ", "PHgaKRrIRoaHIBzJqovNwgBBq", "PTYynmjYgCDaZmfcnorb", "PeMvZichdG", "PXv", "PfGOeVqelJeyrtNqLnLfMdagHkmfvoAJf", "PyEoBsSUzRKfuGuMW", "PpIWRlvEWRdoqVTWsIgAjwcTcIMnLImiaLwqQASVi", "PMmfKRgZlNWsp", "PdekohIfyXDmZQObkPhIEedPGcXpekcywbM", "PgSQiiBJRcWh", "PIEvbjylODHQZdfckpgIhuk", "PRLqmxIDbXmQLbEUSyrH", "EPizCayLoGEUAnCovakpqgKSPgFnnPpAkKdEZVfycbSpC", "EaGdKsRktiVDdEdVUYpurhIeqqzrxvnvIZtNFGZ", "EIFzBgYCvraZKMNTuCuSPoDNYOC", "ExifACsZTTegmqansoGqLQ", "EANWTABYoqbjcepykTcuMMmJESnqZCU", "ESXYKXwjk", "EoSPujDU", "EhPyxMnBbbaKOPvjDLnUcRxVLMDgeiTZjVmyUEtnulqC", "EfxxCswHhsNbbhQsDaGPXhMCpjlKYGBrFeOMctfzngUGRsp", "EYvBsbpbesZQbwPaoBQfTMbQnTRqowwzzMxUiMezt", "ElDoYqPpNBRbulycWrQSfRbNlrxNhnZMqVjPvRgNMAUzHmU", "EINKwMrGoGavJaDaahuPZUlmqwimHPLfaXfjRLZhfXaVrFWvru", "xaxdNltbbtLMiNxxxmHXTQNmwRJAdtUSrIGoLQbQGOmMvDbj", "byyv"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"HGyfQTb", "HnqxkmqVkmrEJGdkebLvaoVJIJWyuCUQFfZrAQeIao", "vdZDrGILc", "vzRuHQIvRJRv", "vwpJRrV", "fkAbxapEJpWnbPLtJqCQkFjSWtR", "dcQGynrT", "dOIAEaKGAhGLAiDbWXqnna", "dzsgDBjUXQT", "dpSfxfDOUffijoWrwRmU", "dvGEfHobAjHTLBrDyRScjBkftVtwhTYhBJx", "fxfscXLXnpOObXQEZ"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"as", "fr", "asv", "frrrr", "asff", "ggg", "ggg"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"Round", "the", "rugged", "rock", "the", "ragged", "rascal", "ran"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"the", "Time"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"t", "T", "a", "t", "T"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"a", "aa", "bb", "a", "aa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"a", "b", "c", "d", "e", "f", "g", "g"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"mama", "abc", "mama"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"a", "as", "b", "c", "d", "e", "f", "g", "h", "h", "e", "hh", "h"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "as", "b", "c", "d", "e", "f", "g", "h", "h", "e", "hh", "h", "i", "i", "k", "k"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"he", "fooo", "he", "fooo", "he"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"a", "b", "c", "d", "e", "e"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"funny", "five"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"as", "al", "bc", "bd", "ef"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"a", "a", "a", "b", "b", "b"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"a", "a", "a", "a", "a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"ab", "ab", "bc", "bc", "cc"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"ab", "ba", "ab"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "b", "a", "b"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"aaa", "bbb", "aa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"a", "a", "b", "b", "b", "c", "c", "c", "c", "d", "d", "d", "d", "d"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "a", "b", "b", "c", "c", "c", "d", "e", "f", "f"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"a", "A"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"abcdefg", "abcdefg"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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

int test62() {
    vector<string> words = {"A", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"There", "may", "be", "no", "alliteration", "in", "a", "sequence"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"abcd"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"Hum", "great", "grty", "hik"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"asd", "ss", "awer"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"F", "ruioerueoi", "FFF", "uirurie", "F", "jkjkjk", "UUIUI", "zzz", "UIUI", "Zzz"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"A", "A", "a", "a", "a", "F", "F", "f", "UIUIUIUI", "uiuiuiui", "UUIUIIUI", "uuuuuu", "zzzzzzzzz", "z", "Z", "z", "Z", "z"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"FFFFFFFFFF", "jkjfkjfd", "FFFFFFFFFF", "Jlklklklk", "jkkkkk", "FFFF", "ffffff", "uieurieui", "UUUUU", "ZZZZZZZZz", "zzzz"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"a", "a", "A", "abc", "ad", "av", "d", "a", "A"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"A", "A", "a", "B", "bb", "BBB", "b", "CC", "cc", "CCCC"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"h", "h", "h", "h", "h", "h", "h", "h", "p", "p", "p", "p", "p", "h", "h", "p", "p", "p", "h", "p", "h"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"h", "H"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"he", "Has", "he"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"abfsaf", "hresrs", "hresrge", "casfefe"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"He", "aas", "four", "fanatic", "fantastic", "fans"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"a", "a", "b", "a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"te", "te", "te", "hh", "te", "hh", "hh", "Re", "Re", "re", "te", "he"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"there", "ab", "the"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
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
    vector<string> words = {"a", "b", "c", "c", "c", "a", "a", "b", "b", "d", "d"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"There", "may", "be", "no", "alliteration", "in", "abba", "sequence"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"z", "z", "a", "a", "z", "z"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"a", "a", "b", "b", "a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"a", "a", "b", "a", "a", "b"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"Round", "the", "rugged", "rock", "the", "ragged", "rascal", "ran", "dfadf", "Dadfadsf", "asf", "Adfad"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"Round", "the", "rugged", "rock", "the", "ragged", "rascal", "ran", "dfadf", "daa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"He", "has", "four", "fanatic", "fantastic", "fans"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"aaa", "AAA", "aaa"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"a", "a", "c", "c", "a", "a"};
    Alliteration* pObj = new Alliteration();
    clock_t start = clock();
    int result = pObj->count(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22633526&rd=10004&pm=6808
********************************************************************************
// BEGIN CUT HERE 
 
// END CUT HERE 
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
using namespace std; 
 
class Alliteration { 
public: 
    int count(vector <string> words) { 
        int r=0; 
  char t; 
  char now; 
  int flag =0; 
  int i=0; 
  if(words[i][0]<'a') 
    t=words[i][0]-'A'+'a'; 
  else  
    t=words[i][0]; 
  for(i=1;i<words.size();++i) 
    { 
      if(words[i][0]<'a') 
        now = words[i][0]-'A'+'a'; 
      else now=words[i][0]; 
      if(flag==0) 
      { 
        if(now==t) 
    { 
      flag=1; 
      r++; 
    } 
        else  
        { 
    flag=0; 
    t=now; 
        } 
      } 
      else 
        { 
    if(now!=t) 
    { 
      flag=0; 
      t=now; 
    } 
        } 
    } 
  return r; 
    } 
 
};

********************************************************************************
*******************************************************************************/