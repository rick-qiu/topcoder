/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7313
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

class ServiceNames {
public:
    vector<string> makeList(vector<string> services);
};

vector<string> ServiceNames::makeList(vector<string> services) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> services = {"BLAST Genome Annotation Sensitivity", "PING", "X Annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BLAST, X", "Genome ==> BLAST", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> services = {"PING"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> services = {"BLAST Genome annotation Sensitivity", "PING", "X Annotation", "Apple X ample"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> X", "Genome ==> BLAST", "Sensitivity ==> BLAST", "X ==> Apple", "ample ==> Apple", "annotation ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> services = {"NULL"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> services = {"A a", "B a", "C a", "D a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A, B, C, D"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> services = {"C a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> C"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> services = {"a a", "b b", "c c", "d d", "e b"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> a", "b ==> b, e", "c ==> c", "d ==> d"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> services = {"Aba a", "aba a", "ABa a", "abA a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> ABa, Aba, abA, aba"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> services = {"Blast x a xx A Xx aA veryComplexKind", "Lazy"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ==> Blast", "Xx ==> Blast", "a ==> Blast", "aA ==> Blast", "veryComplexKind ==> Blast", "x ==> Blast", "xx ==> Blast"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> services = {"A x y z A b", "C v x y z A b", "B x y z b A"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ==> A, B, C", "b ==> A, B, C", "v ==> C", "x ==> A, B, C", "y ==> A, B, C", "z ==> A, B, C"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> services = {"a", "x", "A", "c", "V", "w", "d", "e", "f", "g", "h", "i", "j", "k"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> services = {"a Y", "x Y", "A Y", "c", "V Y", "w Y", "d Y", "e", "f Y", "g Y", "h Y", "i", "j", "k Y"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Y ==> A, V, a, d, f, g, h, k, w, x"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> services = {"QearNF WCywak vvGLqJ", "qIGOzN SVitGQ qUgOVS bqCGGR AUyjfj", "UbZsSO wFRRaw jSidWL jdadNe XJgefr", "VTmFHT QmiTjo rcWKsL vLugoN EdSvyx UOLGEr EAvime", "NCctCP XaBxob ORXJtb AwlxZL trIiYB FpaqGW jNgEgM", "hXNWyx", "SxbfvZ xxpoQh OJTieH pmsAYB NlPcwL ftUYxe KChPGX", "EGqbtF CmlnYo BksFjt symxZi zIsCHY ZEIyaB ZkihXr", "MEkjPz fhgZim irVPrx uFvoPX ZqrTEO", "VDFfFF MiOFKY wGHpBr jYYuOA SMuiwr XoDhnh NNTlxA"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AUyjfj ==> qIGOzN", "AwlxZL ==> NCctCP", "BksFjt ==> EGqbtF", "CmlnYo ==> EGqbtF", "EAvime ==> VTmFHT", "EdSvyx ==> VTmFHT", "FpaqGW ==> NCctCP", "KChPGX ==> SxbfvZ", "MiOFKY ==> VDFfFF", "NNTlxA ==> VDFfFF", "NlPcwL ==> SxbfvZ", "OJTieH ==> SxbfvZ", "ORXJtb ==> NCctCP", "QmiTjo ==> VTmFHT", "SMuiwr ==> VDFfFF", "SVitGQ ==> qIGOzN", "UOLGEr ==> VTmFHT", "WCywak ==> QearNF", "XJgefr ==> UbZsSO", "XaBxob ==> NCctCP", "XoDhnh ==> VDFfFF", "ZEIyaB ==> EGqbtF", "ZkihXr ==> EGqbtF", "ZqrTEO ==> MEkjPz", "bqCGGR ==> qIGOzN", "fhgZim ==> MEkjPz", "ftUYxe ==> SxbfvZ", "irVPrx ==> MEkjPz", "jNgEgM ==> NCctCP", "jSidWL ==> UbZsSO", "jYYuOA ==> VDFfFF", "jdadNe ==> UbZsSO", "pmsAYB ==> SxbfvZ", "qUgOVS ==> qIGOzN", "rcWKsL ==> VTmFHT", "symxZi ==> EGqbtF", "trIiYB ==> NCctCP", "uFvoPX ==> MEkjPz", "vLugoN ==> VTmFHT", "vvGLqJ ==> QearNF", "wFRRaw ==> UbZsSO", "wGHpBr ==> VDFfFF", "xxpoQh ==> SxbfvZ", "zIsCHY ==> EGqbtF"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> services = {"rKFRs ecScY ZgVll FXIUF GPNMu UobiN HCwVX mlYPd", "iPdJS tiGdm YpNhn oDdkH", "BrJQd DifUm qLaHg", "pejGs ypdZf xulBK qBMyA vuNsi", "kobzU dGMZc KRiaD uAAAA EuPHz TQtMN tViXi", "DsQpY RIcrh KHJZP", "qvXmK", "eVTdN UNCGi vjJZu zxnrP EtURi", "Jidum btNte gtGBg kvqBk BlGwl GoRib poBjU cMRKn", "ardXE dZVqC YRorZ", "eEZAD ICxKS KSQVl yDjVn", "aXEPw iHiqw", "ykTFy CmfQN PiaLL zMXYJ NCsdJ WYWYc RqVxs"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BlGwl ==> Jidum", "CmfQN ==> ykTFy", "DifUm ==> BrJQd", "EtURi ==> eVTdN", "EuPHz ==> kobzU", "FXIUF ==> rKFRs", "GPNMu ==> rKFRs", "GoRib ==> Jidum", "HCwVX ==> rKFRs", "ICxKS ==> eEZAD", "KHJZP ==> DsQpY", "KRiaD ==> kobzU", "KSQVl ==> eEZAD", "NCsdJ ==> ykTFy", "PiaLL ==> ykTFy", "RIcrh ==> DsQpY", "RqVxs ==> ykTFy", "TQtMN ==> kobzU", "UNCGi ==> eVTdN", "UobiN ==> rKFRs", "WYWYc ==> ykTFy", "YRorZ ==> ardXE", "YpNhn ==> iPdJS", "ZgVll ==> rKFRs", "btNte ==> Jidum", "cMRKn ==> Jidum", "dGMZc ==> kobzU", "dZVqC ==> ardXE", "ecScY ==> rKFRs", "gtGBg ==> Jidum", "iHiqw ==> aXEPw", "kvqBk ==> Jidum", "mlYPd ==> rKFRs", "oDdkH ==> iPdJS", "poBjU ==> Jidum", "qBMyA ==> pejGs", "qLaHg ==> BrJQd", "tViXi ==> kobzU", "tiGdm ==> iPdJS", "uAAAA ==> kobzU", "vjJZu ==> eVTdN", "vuNsi ==> pejGs", "xulBK ==> pejGs", "yDjVn ==> eEZAD", "ypdZf ==> pejGs", "zMXYJ ==> ykTFy", "zxnrP ==> eVTdN"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> services = {"lWJy", "BPtv iNHG Plmq rirZ yaQd GKPN ngHN fJrm DYxD xmNO", "TGtk iWRm ppCz Ljje bFkd DOxb", "JVLE Hrdw", "AsRJ RXcL cKtE sLiF PuEs", "KwBt lBpj yhyY OGkb", "jluR", "ncBg puFz UkSl", "wstQ wPjL AeDy ViGc oSzv eQqN vSlp Ioia uHCN FBcs", "auQK oPFG Ktwm", "hQfW DXIy heyu AlWt erqm HrXm ZboI WSAd bMlI fatT", "CubY VmMk gkLW JDNu", "rWNC GDPz pfMk"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AeDy ==> wstQ", "AlWt ==> hQfW", "DOxb ==> TGtk", "DXIy ==> hQfW", "DYxD ==> BPtv", "FBcs ==> wstQ", "GDPz ==> rWNC", "GKPN ==> BPtv", "HrXm ==> hQfW", "Hrdw ==> JVLE", "Ioia ==> wstQ", "JDNu ==> CubY", "Ktwm ==> auQK", "Ljje ==> TGtk", "OGkb ==> KwBt", "Plmq ==> BPtv", "PuEs ==> AsRJ", "RXcL ==> AsRJ", "UkSl ==> ncBg", "ViGc ==> wstQ", "VmMk ==> CubY", "WSAd ==> hQfW", "ZboI ==> hQfW", "bFkd ==> TGtk", "bMlI ==> hQfW", "cKtE ==> AsRJ", "eQqN ==> wstQ", "erqm ==> hQfW", "fJrm ==> BPtv", "fatT ==> hQfW", "gkLW ==> CubY", "heyu ==> hQfW", "iNHG ==> BPtv", "iWRm ==> TGtk", "lBpj ==> KwBt", "ngHN ==> BPtv", "oPFG ==> auQK", "oSzv ==> wstQ", "pfMk ==> rWNC", "ppCz ==> TGtk", "puFz ==> ncBg", "rirZ ==> BPtv", "sLiF ==> AsRJ", "uHCN ==> wstQ", "vSlp ==> wstQ", "wPjL ==> wstQ", "xmNO ==> BPtv", "yaQd ==> BPtv", "yhyY ==> KwBt"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> services = {"o", "QQ z T C t d k j F D", "f J", "G a T Z x c y A Q", "T E x h d Y C L k O b F j", "D f N A M E S J z g", "w", "F G F P B I X c h v", "i p", "d J Z n D z i K l U c Q P x A o d B N Y S p", "L C v H W h b a N D E I P Z s F n m j", "z", "Q", "a F", "O a c t R A", "v G", "p M e F D H a R y W g n L Q", "M I s Q P C N", "t x B S f b", "q r B X H", "K O", "TT f V G P E m o n d K", "m h Y", "OO G L R e z", "l Q", "I M e i"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ==> D, G, O, d", "B ==> F, d, q, t", "C ==> L, M, QQ, T", "D ==> L, QQ, d, p", "E ==> D, L, T, TT", "F ==> F, L, QQ, T, a, p", "G ==> F, OO, TT, v", "H ==> L, p, q", "I ==> F, L, M", "J ==> D, d, f", "K ==> TT, d", "L ==> OO, T, p", "M ==> D, I, p", "N ==> D, L, M, d", "O ==> K, T", "P ==> F, L, M, TT, d", "Q ==> G, M, d, l, p", "R ==> O, OO, p", "S ==> D, d, t", "T ==> G, QQ", "U ==> d", "V ==> TT", "W ==> L, p", "X ==> F, q", "Y ==> T, d, m", "Z ==> G, L, d", "a ==> G, L, O, p", "b ==> L, T, t", "c ==> F, G, O, d", "d ==> QQ, T, TT, d", "e ==> I, OO, p", "f ==> D, TT, t", "g ==> D, p", "h ==> F, L, T, m", "i ==> I, d", "j ==> L, QQ, T", "k ==> QQ, T", "l ==> d", "m ==> L, TT", "n ==> L, TT, d, p", "o ==> TT, d", "p ==> d, i", "r ==> q", "s ==> L, M", "t ==> O, QQ", "v ==> F, L", "x ==> G, T, d, t", "y ==> G, p", "z ==> D, OO, QQ, d"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> services = {"CxttZYSt MRrDEYzj LoYTPKfb kYgTCHap YIBrmSOx", "scrkhgWQ UMZfORWq LALOcAwE LGIdnaeD KyMmJREZ", "dZHnaXCq dEOHrqPR WXMmfRsP gSLXwMpY odolpIhO", "sprNOwvd", "hXkyWGjS", "voqKosMx GpGKFOlx", "VGFVqTxo mSVciDPr LYjtPtJA", "VmQBfLBS AbGdvNjr JKUNgFDy", "icEzpDpy QTIAtVPF", "PgKuqWes", "zVJZPhps KjbmRtiO", "HyxGgSMz", "gSUdkynE kKlwvzmq JRyUriPw rQbawZtI wiAzvPpk", "ZYlFTFXS FFcSCnHZ gOmNOnEc wEbToOST qWlUgvMR", "lsUEPcwx wkRPworr FxAPuXbh", "SOTuNPBT", "NkXbrMrA xppFouof ULeahjBW IKRfanrN", "MJYnisJH qzumBQHj OVBomYNe IEvJhZPn gmLAqPhu", "cMaVGuop NDsmZiWG UDCcidoO", "uRirYWna HSDcLwPM", "NRVZNNED", "msUAAkGb cJqAjqgF bBZMFZBr BleXgnrI GWgjNypM", "lfyVkZUj uHfIfKmE ZwdypIDn", "lBHIhazk BiEdHLfx MbTiuMPV fxstdiMd AiWsyvJT", "NqRmFRBS ZKoQkRru TIDjnrDM pxKXMADH", "etrwARvg KdHYiYSa", "ysIAeYBM CzevvYlS hYpYfxnB vqkTHjBL IgktfhnC", "pYoQCDpj lVKwvmwh", "VIYgJmdV MzqqKgZZ", "aWmmxHMz", "qPYdMmRY NQSUWlHg COyGbQYM npFGpPeD EHyQjtbY", "szgyOLoD rFSpIEKO aiJlwCdG GAQPfZSx OrbYhCwC", "ffDLQPiU", "ZlovkyzU irbEnzIL irWAcaHz bMfZrGPF pRKXqIsa", "BgOSkIan OXVsIQbq fXLOjakD JktrfaJU", "jbYuOKUj QXmebfat wyHEPJlX xBVwkTVU uljtpEam", "VrLYLUGE", "LACjSkIb BRsPwuxp dEIYpYpv chLhyUBW", "DfIOLIsy dMrgcgPQ XeYBfVCx yqBZTHDT EOSrcGfE", "QEmlseQC RFClFlqR zVWNJYXP UPsRWydZ KkvZqkpZ", "WSOJPiNp nDroGxQg sgApxZBu", "OjWGaGwe aeSNvtYd HJwTMZyb qtumZbLS sNldmvxj"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AbGdvNjr ==> VmQBfLBS", "AiWsyvJT ==> lBHIhazk", "BRsPwuxp ==> LACjSkIb", "BiEdHLfx ==> lBHIhazk", "BleXgnrI ==> msUAAkGb", "COyGbQYM ==> qPYdMmRY", "CzevvYlS ==> ysIAeYBM", "EHyQjtbY ==> qPYdMmRY", "EOSrcGfE ==> DfIOLIsy", "FFcSCnHZ ==> ZYlFTFXS", "FxAPuXbh ==> lsUEPcwx", "GAQPfZSx ==> szgyOLoD", "GWgjNypM ==> msUAAkGb", "GpGKFOlx ==> voqKosMx", "HJwTMZyb ==> OjWGaGwe", "HSDcLwPM ==> uRirYWna", "IEvJhZPn ==> MJYnisJH", "IKRfanrN ==> NkXbrMrA", "IgktfhnC ==> ysIAeYBM", "JKUNgFDy ==> VmQBfLBS", "JRyUriPw ==> gSUdkynE", "JktrfaJU ==> BgOSkIan", "KdHYiYSa ==> etrwARvg", "KjbmRtiO ==> zVJZPhps", "KkvZqkpZ ==> QEmlseQC", "KyMmJREZ ==> scrkhgWQ", "LALOcAwE ==> scrkhgWQ", "LGIdnaeD ==> scrkhgWQ", "LYjtPtJA ==> VGFVqTxo", "LoYTPKfb ==> CxttZYSt", "MRrDEYzj ==> CxttZYSt", "MbTiuMPV ==> lBHIhazk", "MzqqKgZZ ==> VIYgJmdV", "NDsmZiWG ==> cMaVGuop", "NQSUWlHg ==> qPYdMmRY", "OVBomYNe ==> MJYnisJH", "OXVsIQbq ==> BgOSkIan", "OrbYhCwC ==> szgyOLoD", "QTIAtVPF ==> icEzpDpy", "QXmebfat ==> jbYuOKUj", "RFClFlqR ==> QEmlseQC", "TIDjnrDM ==> NqRmFRBS", "UDCcidoO ==> cMaVGuop", "ULeahjBW ==> NkXbrMrA", "UMZfORWq ==> scrkhgWQ", "UPsRWydZ ==> QEmlseQC", "WXMmfRsP ==> dZHnaXCq", "XeYBfVCx ==> DfIOLIsy", "YIBrmSOx ==> CxttZYSt", "ZKoQkRru ==> NqRmFRBS", "ZwdypIDn ==> lfyVkZUj", "aeSNvtYd ==> OjWGaGwe", "aiJlwCdG ==> szgyOLoD", "bBZMFZBr ==> msUAAkGb", "bMfZrGPF ==> ZlovkyzU", "cJqAjqgF ==> msUAAkGb", "chLhyUBW ==> LACjSkIb", "dEIYpYpv ==> LACjSkIb", "dEOHrqPR ==> dZHnaXCq", "dMrgcgPQ ==> DfIOLIsy", "fXLOjakD ==> BgOSkIan", "fxstdiMd ==> lBHIhazk", "gOmNOnEc ==> ZYlFTFXS", "gSLXwMpY ==> dZHnaXCq", "gmLAqPhu ==> MJYnisJH", "hYpYfxnB ==> ysIAeYBM", "irWAcaHz ==> ZlovkyzU", "irbEnzIL ==> ZlovkyzU", "kKlwvzmq ==> gSUdkynE", "kYgTCHap ==> CxttZYSt", "lVKwvmwh ==> pYoQCDpj", "mSVciDPr ==> VGFVqTxo", "nDroGxQg ==> WSOJPiNp", "npFGpPeD ==> qPYdMmRY", "odolpIhO ==> dZHnaXCq", "pRKXqIsa ==> ZlovkyzU", "pxKXMADH ==> NqRmFRBS", "qWlUgvMR ==> ZYlFTFXS", "qtumZbLS ==> OjWGaGwe", "qzumBQHj ==> MJYnisJH", "rFSpIEKO ==> szgyOLoD", "rQbawZtI ==> gSUdkynE", "sNldmvxj ==> OjWGaGwe", "sgApxZBu ==> WSOJPiNp", "uHfIfKmE ==> lfyVkZUj", "uljtpEam ==> jbYuOKUj", "vqkTHjBL ==> ysIAeYBM", "wEbToOST ==> ZYlFTFXS", "wiAzvPpk ==> gSUdkynE", "wkRPworr ==> lsUEPcwx", "wyHEPJlX ==> jbYuOKUj", "xBVwkTVU ==> jbYuOKUj", "xppFouof ==> NkXbrMrA", "yqBZTHDT ==> DfIOLIsy", "zVWNJYXP ==> QEmlseQC"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> services = {"QRMsHI", "eSDpCo bFFEpc AcYVlg TrbciT JVvwKd dIcFTV heyROD", "Rvdhtl mpntQW IuiIyv", "mvwAoh aLkzUg opXCTT QyDISj WEGTXr NUpwuL kRPmjR", "pQDHRQ pCKrFg hwQuht rHyQtY ejWymW QEZKKe ErOPfV", "iohjhx PpBmcW qliMQk apMCBX jMGJtN wUGBvU USAZPL", "IfUwnR KCoEEr QVrYRn ULdKhS xSIHCJ UgsjgN NhpXDF", "XXvIiT lwnbAc RiwPns", "ghgEuE itTMqN HshCkG BCsMti TQxTcS lOQgOK oCGyrJ", "YLXcMM hwqjyg", "KqJjyV sEICUh OmsgNE XaHRQY", "tdKjaf rNUxTO QtZCum tlfIpW IuDbtc mBtrKs oIyxUS", "iRrgHP FCMbII HSFrtH qwLNeY yRaVFR lOcgLt pQaFWF", "VEFvnD tRDdKB oFPqgG HpTVMH sgirwN", "PYXrmL BzLfDT NMtBcW PSGTQF", "ioofMG ycCjNk EmrAxq IgiWbX CIxODd ADhzMN aZEodL", "TOBMrx lbkowr scsNNe rShfSp dlZrpg oxcczI", "bihtjg KTlOrU aFnAmU IGyxVz LvGRBJ wZpTtw", "MLdMgf", "PoLljo", "mGIASF SxoyFQ dLaHAr AtDySS YhHQMl cCbsBy hshZzk", "dqQPdt RYjckS TGwmZE IMVDRQ", "TqKMqi WLDWYy pzeLUn IGKuLq iXsrXA Pswesc", "azXKHy DpOZiH vWgqqS", "iBCSGe QpGTFE DfrznD", "NFCCxQ", "sJydlF etRxRq LkIpcA FjDVWT dyIzRp lSjzUv XCixVp", "hIEfOG DZAuzS ChKjFe fIUeOR yYoLYx MqdiXb DCrfXT", "hRgOjE CJMEcv pWZmXS jaYpEv tSTShy", "FkKtAx oArlTg uBfifG oXnZJn ScNXYd ubmraA HCbYFb", "mpjArP", "KCBRmQ oSZkgw", "kMgywv iAJsnN iVFrto", "nHSStm", "QdSINy WvovfI", "bYIlyQ EmXFSc XnvTED aiPtFG oqlTHG JZwPpa QATsfT", "HlKGoH QnKqLH udZqkz RpOsvK NXmHyo tlXgNp CFcREq", "ZqzGpk", "bgEWBQ PIjCFS", "DqBloN wsaHHa MKQjpD", "UTQpWz HFdnYR aXrSwb UMWbSx aaYDrr wSQJwA UnXRvo", "MQAfHG URTTaz zXLayV PZnVvW ZQqdmP ZGQcOE ENsEZP", "fKsLaW spVuzf uZHOLD HRwEbT wVDQqJ", "EerPND VZIMkk CJyFiK niTvHS ZKaALz LGtlrF QEJzsR", "ioALzC GwVWAr UpczNx BjYbUJ nFebGp BinTmm CJwrhx", "ZqDuND RMVQat eaaZVi cqJaED TBLnLu", "FXGXzr XtQwIr PwOKfe nWOClw", "pSHgwd WYJikF BNodCf vnODEd EzKDYV JlNGyz fjJNmZ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ADhzMN ==> ioofMG", "AcYVlg ==> eSDpCo", "AtDySS ==> mGIASF", "BCsMti ==> ghgEuE", "BNodCf ==> pSHgwd", "BinTmm ==> ioALzC", "BjYbUJ ==> ioALzC", "BzLfDT ==> PYXrmL", "CFcREq ==> HlKGoH", "CIxODd ==> ioofMG", "CJMEcv ==> hRgOjE", "CJwrhx ==> ioALzC", "CJyFiK ==> EerPND", "ChKjFe ==> hIEfOG", "DCrfXT ==> hIEfOG", "DZAuzS ==> hIEfOG", "DfrznD ==> iBCSGe", "DpOZiH ==> azXKHy", "ENsEZP ==> MQAfHG", "EmXFSc ==> bYIlyQ", "EmrAxq ==> ioofMG", "ErOPfV ==> pQDHRQ", "EzKDYV ==> pSHgwd", "FCMbII ==> iRrgHP", "FjDVWT ==> sJydlF", "GwVWAr ==> ioALzC", "HCbYFb ==> FkKtAx", "HFdnYR ==> UTQpWz", "HRwEbT ==> fKsLaW", "HSFrtH ==> iRrgHP", "HpTVMH ==> VEFvnD", "HshCkG ==> ghgEuE", "IGKuLq ==> TqKMqi", "IGyxVz ==> bihtjg", "IMVDRQ ==> dqQPdt", "IgiWbX ==> ioofMG", "IuDbtc ==> tdKjaf", "IuiIyv ==> Rvdhtl", "JVvwKd ==> eSDpCo", "JZwPpa ==> bYIlyQ", "JlNGyz ==> pSHgwd", "KCoEEr ==> IfUwnR", "KTlOrU ==> bihtjg", "LGtlrF ==> EerPND", "LkIpcA ==> sJydlF", "LvGRBJ ==> bihtjg", "MKQjpD ==> DqBloN", "MqdiXb ==> hIEfOG", "NMtBcW ==> PYXrmL", "NUpwuL ==> mvwAoh", "NXmHyo ==> HlKGoH", "NhpXDF ==> IfUwnR", "OmsgNE ==> KqJjyV", "PIjCFS ==> bgEWBQ", "PSGTQF ==> PYXrmL", "PZnVvW ==> MQAfHG", "PpBmcW ==> iohjhx", "Pswesc ==> TqKMqi", "PwOKfe ==> FXGXzr", "QATsfT ==> bYIlyQ", "QEJzsR ==> EerPND", "QEZKKe ==> pQDHRQ", "QVrYRn ==> IfUwnR", "QnKqLH ==> HlKGoH", "QpGTFE ==> iBCSGe", "QtZCum ==> tdKjaf", "QyDISj ==> mvwAoh", "RMVQat ==> ZqDuND", "RYjckS ==> dqQPdt", "RiwPns ==> XXvIiT", "RpOsvK ==> HlKGoH", "ScNXYd ==> FkKtAx", "SxoyFQ ==> mGIASF", "TBLnLu ==> ZqDuND", "TGwmZE ==> dqQPdt", "TQxTcS ==> ghgEuE", "TrbciT ==> eSDpCo", "ULdKhS ==> IfUwnR", "UMWbSx ==> UTQpWz", "URTTaz ==> MQAfHG", "USAZPL ==> iohjhx", "UgsjgN ==> IfUwnR", "UnXRvo ==> UTQpWz", "UpczNx ==> ioALzC", "VZIMkk ==> EerPND", "WEGTXr ==> mvwAoh", "WLDWYy ==> TqKMqi", "WYJikF ==> pSHgwd", "WvovfI ==> QdSINy", "XCixVp ==> sJydlF", "XaHRQY ==> KqJjyV", "XnvTED ==> bYIlyQ", "XtQwIr ==> FXGXzr", "YhHQMl ==> mGIASF", "ZGQcOE ==> MQAfHG", "ZKaALz ==> EerPND", "ZQqdmP ==> MQAfHG", "aFnAmU ==> bihtjg", "aLkzUg ==> mvwAoh", "aXrSwb ==> UTQpWz", "aZEodL ==> ioofMG", "aaYDrr ==> UTQpWz", "aiPtFG ==> bYIlyQ", "apMCBX ==> iohjhx", "bFFEpc ==> eSDpCo", "cCbsBy ==> mGIASF", "cqJaED ==> ZqDuND", "dIcFTV ==> eSDpCo", "dLaHAr ==> mGIASF", "dlZrpg ==> TOBMrx", "dyIzRp ==> sJydlF", "eaaZVi ==> ZqDuND", "ejWymW ==> pQDHRQ", "etRxRq ==> sJydlF", "fIUeOR ==> hIEfOG", "fjJNmZ ==> pSHgwd", "heyROD ==> eSDpCo", "hshZzk ==> mGIASF", "hwQuht ==> pQDHRQ", "hwqjyg ==> YLXcMM", "iAJsnN ==> kMgywv", "iVFrto ==> kMgywv", "iXsrXA ==> TqKMqi", "itTMqN ==> ghgEuE", "jMGJtN ==> iohjhx", "jaYpEv ==> hRgOjE", "kRPmjR ==> mvwAoh", "lOQgOK ==> ghgEuE", "lOcgLt ==> iRrgHP", "lSjzUv ==> sJydlF", "lbkowr ==> TOBMrx", "lwnbAc ==> XXvIiT", "mBtrKs ==> tdKjaf", "mpntQW ==> Rvdhtl", "nFebGp ==> ioALzC", "nWOClw ==> FXGXzr", "niTvHS ==> EerPND", "oArlTg ==> FkKtAx", "oCGyrJ ==> ghgEuE", "oFPqgG ==> VEFvnD", "oIyxUS ==> tdKjaf", "oSZkgw ==> KCBRmQ", "oXnZJn ==> FkKtAx", "opXCTT ==> mvwAoh", "oqlTHG ==> bYIlyQ", "oxcczI ==> TOBMrx", "pCKrFg ==> pQDHRQ", "pQaFWF ==> iRrgHP", "pWZmXS ==> hRgOjE", "pzeLUn ==> TqKMqi", "qliMQk ==> iohjhx", "qwLNeY ==> iRrgHP", "rHyQtY ==> pQDHRQ", "rNUxTO ==> tdKjaf", "rShfSp ==> TOBMrx", "sEICUh ==> KqJjyV", "scsNNe ==> TOBMrx", "sgirwN ==> VEFvnD", "spVuzf ==> fKsLaW", "tRDdKB ==> VEFvnD", "tSTShy ==> hRgOjE", "tlXgNp ==> HlKGoH", "tlfIpW ==> tdKjaf", "uBfifG ==> FkKtAx", "uZHOLD ==> fKsLaW", "ubmraA ==> FkKtAx", "udZqkz ==> HlKGoH", "vWgqqS ==> azXKHy", "vnODEd ==> pSHgwd", "wSQJwA ==> UTQpWz", "wUGBvU ==> iohjhx", "wVDQqJ ==> fKsLaW", "wZpTtw ==> bihtjg", "wsaHHa ==> DqBloN", "xSIHCJ ==> IfUwnR", "yRaVFR ==> iRrgHP", "yYoLYx ==> hIEfOG", "ycCjNk ==> ioofMG", "zXLayV ==> MQAfHG"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> services = {"xB", "CG As on XJ Yv rl dp", "hJ Gw ew ZE AT vU JQ kU pL Az cy Tr Uv nH ab", "Rl bA ER", "VG bK PS Kr eR", "bb Es JZ qr TC XR Ws li XJ tR cp ec Ag jX nF Ig nV", "gT zr hf iI ar CW fl bY VD Es ZM yL", "Tz AS vD Ge tj", "ZD mj hL nd ne nU tb", "Yb lA", "qG zd GC JZ IA is", "xF Mw ax kj CB", "xP oU EL gx kk NH nh vR eU kS Hq Jf", "af yq eF Is Aj Ou Uq", "yX xh", "Zp pw", "Fm Lm Jx", "Hf nc YT dl gW FC", "IR", "Gv YP", "wV DG Xp xe dB QG Fb dh", "wI mW eh", "vJ QX Xd rT PV AE ZX uR", "VW Cw MT nE", "kq", "Xj Mr", "Er Da Bl IQ Xf fb", "iF mS Dg sT dn yu HK AZ", "CI ZR", "tT rB Jd GE Ut gb Us To oE Im", "ku KX Jf", "WB da", "Gz ZW HS", "Qn sW eq bv lU cC ZY bd kh jn lV Xj nT", "lV rs Rq Zm Yx xY fC", "jU zN", "UQ tu tg Ov qm QU Zp DA pl lb jU im wx ID iZ fJ am", "jy", "Kq PZ Cw Jv vi jI ca zt dV fg", "lm gX Xz gh Pw zw wb", "LG Pn ez kG KI", "Io YL yg kN", "uN XC rb el ar Kp mC", "RA nM VT hR aH Bf LS", "nZ TR HV Ai in vA tH TX OO", "Vu Wc Nq Pp", "bn", "As Bw zQ Hg to qj oy hS qz ES Ax Om DG dg Me sP PB", "Ly BQ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AE ==> vJ", "AS ==> Tz", "AT ==> hJ", "AZ ==> iF", "Ag ==> bb", "Ai ==> nZ", "Aj ==> af", "As ==> CG", "Ax ==> As", "Az ==> hJ", "BQ ==> Ly", "Bf ==> RA", "Bl ==> Er", "Bw ==> As", "CB ==> xF", "CW ==> gT", "Cw ==> Kq, VW", "DA ==> UQ", "DG ==> As, wV", "Da ==> Er", "Dg ==> iF", "EL ==> xP", "ER ==> Rl", "ES ==> As", "Es ==> bb, gT", "FC ==> Hf", "Fb ==> wV", "GC ==> qG", "GE ==> tT", "Ge ==> Tz", "Gw ==> hJ", "HK ==> iF", "HS ==> Gz", "HV ==> nZ", "Hg ==> As", "Hq ==> xP", "IA ==> qG", "ID ==> UQ", "IQ ==> Er", "Ig ==> bb", "Im ==> tT", "Is ==> af", "JQ ==> hJ", "JZ ==> bb, qG", "Jd ==> tT", "Jf ==> ku, xP", "Jv ==> Kq", "Jx ==> Fm", "KI ==> LG", "KX ==> ku", "Kp ==> uN", "Kr ==> VG", "LS ==> RA", "Lm ==> Fm", "MT ==> VW", "Me ==> As", "Mr ==> Xj", "Mw ==> xF", "NH ==> xP", "Nq ==> Vu", "OO ==> nZ", "Om ==> As", "Ou ==> af", "Ov ==> UQ", "PB ==> As", "PS ==> VG", "PV ==> vJ", "PZ ==> Kq", "Pn ==> LG", "Pp ==> Vu", "Pw ==> lm", "QG ==> wV", "QU ==> UQ", "QX ==> vJ", "Rq ==> lV", "TC ==> bb", "TR ==> nZ", "TX ==> nZ", "To ==> tT", "Tr ==> hJ", "Uq ==> af", "Us ==> tT", "Ut ==> tT", "Uv ==> hJ", "VD ==> gT", "VT ==> RA", "Wc ==> Vu", "Ws ==> bb", "XC ==> uN", "XJ ==> CG, bb", "XR ==> bb", "Xd ==> vJ", "Xf ==> Er", "Xj ==> Qn", "Xp ==> wV", "Xz ==> lm", "YL ==> Io", "YP ==> Gv", "YT ==> Hf", "Yv ==> CG", "Yx ==> lV", "ZE ==> hJ", "ZM ==> gT", "ZR ==> CI", "ZW ==> Gz", "ZX ==> vJ", "ZY ==> Qn", "Zm ==> lV", "Zp ==> UQ", "aH ==> RA", "ab ==> hJ", "am ==> UQ", "ar ==> gT, uN", "ax ==> xF", "bA ==> Rl", "bK ==> VG", "bY ==> gT", "bd ==> Qn", "bv ==> Qn", "cC ==> Qn", "ca ==> Kq", "cp ==> bb", "cy ==> hJ", "dB ==> wV", "dV ==> Kq", "da ==> WB", "dg ==> As", "dh ==> wV", "dl ==> Hf", "dn ==> iF", "dp ==> CG", "eF ==> af", "eR ==> VG", "eU ==> xP", "ec ==> bb", "eh ==> wI", "el ==> uN", "eq ==> Qn", "ew ==> hJ", "ez ==> LG", "fC ==> lV", "fJ ==> UQ", "fb ==> Er", "fg ==> Kq", "fl ==> gT", "gW ==> Hf", "gX ==> lm", "gb ==> tT", "gh ==> lm", "gx ==> xP", "hL ==> ZD", "hR ==> RA", "hS ==> As", "hf ==> gT", "iI ==> gT", "iZ ==> UQ", "im ==> UQ", "in ==> nZ", "is ==> qG", "jI ==> Kq", "jU ==> UQ", "jX ==> bb", "jn ==> Qn", "kG ==> LG", "kN ==> Io", "kS ==> xP", "kU ==> hJ", "kh ==> Qn", "kj ==> xF", "kk ==> xP", "lA ==> Yb", "lU ==> Qn", "lV ==> Qn", "lb ==> UQ", "li ==> bb", "mC ==> uN", "mS ==> iF", "mW ==> wI", "mj ==> ZD", "nE ==> VW", "nF ==> bb", "nH ==> hJ", "nM ==> RA", "nT ==> Qn", "nU ==> ZD", "nV ==> bb", "nc ==> Hf", "nd ==> ZD", "ne ==> ZD", "nh ==> xP", "oE ==> tT", "oU ==> xP", "on ==> CG", "oy ==> As", "pL ==> hJ", "pl ==> UQ", "pw ==> Zp", "qj ==> As", "qm ==> UQ", "qr ==> bb", "qz ==> As", "rB ==> tT", "rT ==> vJ", "rb ==> uN", "rl ==> CG", "rs ==> lV", "sP ==> As", "sT ==> iF", "sW ==> Qn", "tH ==> nZ", "tR ==> bb", "tb ==> ZD", "tg ==> UQ", "tj ==> Tz", "to ==> As", "tu ==> UQ", "uR ==> vJ", "vA ==> nZ", "vD ==> Tz", "vR ==> xP", "vU ==> hJ", "vi ==> Kq", "wb ==> lm", "wx ==> UQ", "xY ==> lV", "xe ==> wV", "xh ==> yX", "yL ==> gT", "yg ==> Io", "yq ==> af", "yu ==> iF", "zN ==> jU", "zQ ==> As", "zd ==> qG", "zr ==> gT", "zt ==> Kq", "zw ==> lm"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> services = {"MYsLUNDQy thsWIQvQv HvGjjUdGe SgpNlDMKr gIMTKnFeP", "iGzxQXyWw BuFzJDcUq moQHchhff", "PCZrSgkzR", "nDWZzRHIQ RygmovHWT Oioqsducl eDcLMfYtY WZWGpMCiE", "ojeSQymYN lHRvxhMdR eSiJuozdG NGtuxTxnu ejLtihqvE", "IbBnzNqmF QuboaasQv GggsyjrTM sNANUzMPm hwHMuCcgV", "OziNnuMdY DNdBuEBeb InpubPorz cqBAsxlrz", "ZWpngqIeh KgDGCbxXa jcnvDsrET AjcLFabZI RDSrEukIQ", "AMKdYZroX UHdaUNohM kfHpBoChi FwaIXWYLp TrRUHAAPD", "CMbFjzyWJ MwlBzegVx", "QKUhAJbSh XWyzdgRkr", "kOjJThtaI HFNkwbHqs OFLvaVtXT oZsqtIuWl ufvCOhvIq", "PzDHpyzXT fhpQIvzxT BGJZShvxJ", "zzWMwAqXV YTPJAZaEb hEcVFmhuR iozuOPFdb oKjqBgLma", "VhlrmnPsg RgmkGJLNI EyNTaTqvp NyAsGwPdv xUMvROeUT", "MbFUirIio CKhvSzzLN IfXXGNkcF ZMhkDjziu", "DPjVWIRHG DqiTqoonO HRLrbIUdC oQIUQbNGW XpzHjUnRW", "YMwkGNqlt CbXSpaqNd", "ObxWvYeNM XJhnvKoTE XFNEFmxZa yHjNZrKWI", "YetPpcQeP SsoUdDQXZ mErlLBpIQ AToIQlxrG RZWXjgsUj", "sIpgwjspc ZrvJJRwvl STVisYSQt nVnndzGXf qVyPcPzZv", "BGgDTssSJ PpVHPzNWG cGaxUiBYy FBpLQByhv JJgEOxCEh", "UnnqPTAvu tWvkKCLpZ JgkAPRckI zSOhxbHzy", "TQbaqzSWM WxcgZPpKv pbDOYOJKs", "KWMifaUPQ yhxvmmXRc qLsAApjuq", "XtwNWOdfc rdkbGrDGE pNUmmalyG QCJzsIeHM YuHnrYeMe", "xyvwkZbhk evWTFOxqL jOAKQHQGB GAihfvcpf ndLOunRNI", "WlGJapPwG CbVAgInqh", "vPRDxvXFJ", "EFqaaYkWC UNfvQJoMs SVRlpNpnT aKtfSXQPW rPpnnjqDN", "jKTnrLVai VujwpVJhY YrklrYPsA xyNYhKYPj", "cgaByGxJe rHwgMCpie wifRshzmv kuVQajQih ZtvFzuMVi", "ToQTXGymj GxPkghjVI", "GroWfOHjQ HcNyKFoqK dDTbWHxVb rEyZXNnLc", "fzYIYAqfT EOcNdeBSh RbVadduiQ bojHqzBfF vjJSYeLWg", "fVoQFKBEg NpBZbMlei EQeAdsQgb lcQCvRrVe mHMevkLcV", "XcXIHwzNC AAwBAQQtx bBJcLEkPT ohUCqtFUO MWuJNnAet", "qoKgOwUNt eUycyLGBM", "yokIazNwF", "azlzdJJFo uUhKfnckA", "bgdOofGSU VIXhRxLrG XZEBZjdAf vWMgeRubb", "stQOSQuqn mcaClbHop COftQigKm XvDQXduov YumnwWpJe", "EoHLsJpDD QFppvCSia VPTSWkVmL AtyehSYyZ DBQpgAXme"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAwBAQQtx ==> XcXIHwzNC", "AToIQlxrG ==> YetPpcQeP", "AjcLFabZI ==> ZWpngqIeh", "AtyehSYyZ ==> EoHLsJpDD", "BGJZShvxJ ==> PzDHpyzXT", "BuFzJDcUq ==> iGzxQXyWw", "CKhvSzzLN ==> MbFUirIio", "COftQigKm ==> stQOSQuqn", "CbVAgInqh ==> WlGJapPwG", "CbXSpaqNd ==> YMwkGNqlt", "DBQpgAXme ==> EoHLsJpDD", "DNdBuEBeb ==> OziNnuMdY", "DqiTqoonO ==> DPjVWIRHG", "EOcNdeBSh ==> fzYIYAqfT", "EQeAdsQgb ==> fVoQFKBEg", "EyNTaTqvp ==> VhlrmnPsg", "FBpLQByhv ==> BGgDTssSJ", "FwaIXWYLp ==> AMKdYZroX", "GAihfvcpf ==> xyvwkZbhk", "GggsyjrTM ==> IbBnzNqmF", "GxPkghjVI ==> ToQTXGymj", "HFNkwbHqs ==> kOjJThtaI", "HRLrbIUdC ==> DPjVWIRHG", "HcNyKFoqK ==> GroWfOHjQ", "HvGjjUdGe ==> MYsLUNDQy", "IfXXGNkcF ==> MbFUirIio", "InpubPorz ==> OziNnuMdY", "JJgEOxCEh ==> BGgDTssSJ", "JgkAPRckI ==> UnnqPTAvu", "KgDGCbxXa ==> ZWpngqIeh", "MWuJNnAet ==> XcXIHwzNC", "MwlBzegVx ==> CMbFjzyWJ", "NGtuxTxnu ==> ojeSQymYN", "NpBZbMlei ==> fVoQFKBEg", "NyAsGwPdv ==> VhlrmnPsg", "OFLvaVtXT ==> kOjJThtaI", "Oioqsducl ==> nDWZzRHIQ", "PpVHPzNWG ==> BGgDTssSJ", "QCJzsIeHM ==> XtwNWOdfc", "QFppvCSia ==> EoHLsJpDD", "QuboaasQv ==> IbBnzNqmF", "RDSrEukIQ ==> ZWpngqIeh", "RZWXjgsUj ==> YetPpcQeP", "RbVadduiQ ==> fzYIYAqfT", "RgmkGJLNI ==> VhlrmnPsg", "RygmovHWT ==> nDWZzRHIQ", "STVisYSQt ==> sIpgwjspc", "SVRlpNpnT ==> EFqaaYkWC", "SgpNlDMKr ==> MYsLUNDQy", "SsoUdDQXZ ==> YetPpcQeP", "TrRUHAAPD ==> AMKdYZroX", "UHdaUNohM ==> AMKdYZroX", "UNfvQJoMs ==> EFqaaYkWC", "VIXhRxLrG ==> bgdOofGSU", "VPTSWkVmL ==> EoHLsJpDD", "VujwpVJhY ==> jKTnrLVai", "WZWGpMCiE ==> nDWZzRHIQ", "WxcgZPpKv ==> TQbaqzSWM", "XFNEFmxZa ==> ObxWvYeNM", "XJhnvKoTE ==> ObxWvYeNM", "XWyzdgRkr ==> QKUhAJbSh", "XZEBZjdAf ==> bgdOofGSU", "XpzHjUnRW ==> DPjVWIRHG", "XvDQXduov ==> stQOSQuqn", "YTPJAZaEb ==> zzWMwAqXV", "YrklrYPsA ==> jKTnrLVai", "YuHnrYeMe ==> XtwNWOdfc", "YumnwWpJe ==> stQOSQuqn", "ZMhkDjziu ==> MbFUirIio", "ZrvJJRwvl ==> sIpgwjspc", "ZtvFzuMVi ==> cgaByGxJe", "aKtfSXQPW ==> EFqaaYkWC", "bBJcLEkPT ==> XcXIHwzNC", "bojHqzBfF ==> fzYIYAqfT", "cGaxUiBYy ==> BGgDTssSJ", "cqBAsxlrz ==> OziNnuMdY", "dDTbWHxVb ==> GroWfOHjQ", "eDcLMfYtY ==> nDWZzRHIQ", "eSiJuozdG ==> ojeSQymYN", "eUycyLGBM ==> qoKgOwUNt", "ejLtihqvE ==> ojeSQymYN", "evWTFOxqL ==> xyvwkZbhk", "fhpQIvzxT ==> PzDHpyzXT", "gIMTKnFeP ==> MYsLUNDQy", "hEcVFmhuR ==> zzWMwAqXV", "hwHMuCcgV ==> IbBnzNqmF", "iozuOPFdb ==> zzWMwAqXV", "jOAKQHQGB ==> xyvwkZbhk", "jcnvDsrET ==> ZWpngqIeh", "kfHpBoChi ==> AMKdYZroX", "kuVQajQih ==> cgaByGxJe", "lHRvxhMdR ==> ojeSQymYN", "lcQCvRrVe ==> fVoQFKBEg", "mErlLBpIQ ==> YetPpcQeP", "mHMevkLcV ==> fVoQFKBEg", "mcaClbHop ==> stQOSQuqn", "moQHchhff ==> iGzxQXyWw", "nVnndzGXf ==> sIpgwjspc", "ndLOunRNI ==> xyvwkZbhk", "oKjqBgLma ==> zzWMwAqXV", "oQIUQbNGW ==> DPjVWIRHG", "oZsqtIuWl ==> kOjJThtaI", "ohUCqtFUO ==> XcXIHwzNC", "pNUmmalyG ==> XtwNWOdfc", "pbDOYOJKs ==> TQbaqzSWM", "qLsAApjuq ==> KWMifaUPQ", "qVyPcPzZv ==> sIpgwjspc", "rEyZXNnLc ==> GroWfOHjQ", "rHwgMCpie ==> cgaByGxJe", "rPpnnjqDN ==> EFqaaYkWC", "rdkbGrDGE ==> XtwNWOdfc", "sNANUzMPm ==> IbBnzNqmF", "tWvkKCLpZ ==> UnnqPTAvu", "thsWIQvQv ==> MYsLUNDQy", "uUhKfnckA ==> azlzdJJFo", "ufvCOhvIq ==> kOjJThtaI", "vWMgeRubb ==> bgdOofGSU", "vjJSYeLWg ==> fzYIYAqfT", "wifRshzmv ==> cgaByGxJe", "xUMvROeUT ==> VhlrmnPsg", "xyNYhKYPj ==> jKTnrLVai", "yHjNZrKWI ==> ObxWvYeNM", "yhxvmmXRc ==> KWMifaUPQ", "zSOhxbHzy ==> UnnqPTAvu"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> services = {"IXmBB osuoW sOXhl QPfKX", "QoanG daURt", "YLgCb FjUvu CqYyY Fkvlk QeKON", "wAjsY SUcps nhYqS LEGSX", "ruDjN VZvZL", "EIJHg MtouJ ZbQon", "WTrbJ", "xocVI aAbTV zLSJB rBoGD eGmSL VEBJq jBdLh", "DvcJo SjKfe WkhqO emCPz NKfbY GhNfw jEoYA sChEU", "oEdBI VvioC mGlGu BWbSa jhIIx ulHwD zADwa CIZXB", "vhXhe BqPtC elsbN hXkXW RzjBo LAotT zEeRv", "WhRtO", "JTeFK oCrvL IEtBy", "kGcYd bZkIr WkUng oGsWl MLWFe GmHhC", "PVTEe bDjCW", "YXmBb lElPX bMwuO hxIxw WhnWa kZsVF UPBdh HtgdV", "nZkFx mKFBO qsraR omUow DZkCq", "DNKaH HQqUi QioPS", "ItOHk RZObD tdEiS nJcnx", "BnJuk cTdpX rkXdT HSsoF", "RRpdn IxMCp VVceh Bkbfl vstFT FfzZU", "dApDV wamqN bJTEW", "xQNtv vLAng cJSJA jvBkE hhNoH EYlVW aGZVQ UdWFn", "vLeFz fyAqi", "QuUNU RBbHM", "YacRO", "DbROI mPwAA AylnH qphiQ", "uSiNR LdkZy oEYKi wHuXb", "HNROk RMqgf KjAOJ QUalb MOeJL fgkYN ZtFhh nnBuV", "PCyWs QCEwy", "hGGkF mqlwl", "NJnIo OCCVg grsik", "jRGih MEgMs eJIwl YskTx xzate RdHKZ mVPFU HOFYX", "VUlWe SVqGt MaAnV sFnlF", "ZJFpe OdXwp aeneo UOUuZ", "ptKRM AyuyG ZTECh"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AylnH ==> DbROI", "AyuyG ==> ptKRM", "BWbSa ==> oEdBI", "Bkbfl ==> RRpdn", "BqPtC ==> vhXhe", "CIZXB ==> oEdBI", "CqYyY ==> YLgCb", "DZkCq ==> nZkFx", "EYlVW ==> xQNtv", "FfzZU ==> RRpdn", "FjUvu ==> YLgCb", "Fkvlk ==> YLgCb", "GhNfw ==> DvcJo", "GmHhC ==> kGcYd", "HOFYX ==> jRGih", "HQqUi ==> DNKaH", "HSsoF ==> BnJuk", "HtgdV ==> YXmBb", "IEtBy ==> JTeFK", "IxMCp ==> RRpdn", "KjAOJ ==> HNROk", "LAotT ==> vhXhe", "LEGSX ==> wAjsY", "LdkZy ==> uSiNR", "MEgMs ==> jRGih", "MLWFe ==> kGcYd", "MOeJL ==> HNROk", "MaAnV ==> VUlWe", "MtouJ ==> EIJHg", "NKfbY ==> DvcJo", "OCCVg ==> NJnIo", "OdXwp ==> ZJFpe", "QCEwy ==> PCyWs", "QPfKX ==> IXmBB", "QUalb ==> HNROk", "QeKON ==> YLgCb", "QioPS ==> DNKaH", "RBbHM ==> QuUNU", "RMqgf ==> HNROk", "RZObD ==> ItOHk", "RdHKZ ==> jRGih", "RzjBo ==> vhXhe", "SUcps ==> wAjsY", "SVqGt ==> VUlWe", "SjKfe ==> DvcJo", "UOUuZ ==> ZJFpe", "UPBdh ==> YXmBb", "UdWFn ==> xQNtv", "VEBJq ==> xocVI", "VVceh ==> RRpdn", "VZvZL ==> ruDjN", "VvioC ==> oEdBI", "WhnWa ==> YXmBb", "WkUng ==> kGcYd", "WkhqO ==> DvcJo", "YskTx ==> jRGih", "ZTECh ==> ptKRM", "ZbQon ==> EIJHg", "ZtFhh ==> HNROk", "aAbTV ==> xocVI", "aGZVQ ==> xQNtv", "aeneo ==> ZJFpe", "bDjCW ==> PVTEe", "bJTEW ==> dApDV", "bMwuO ==> YXmBb", "bZkIr ==> kGcYd", "cJSJA ==> xQNtv", "cTdpX ==> BnJuk", "daURt ==> QoanG", "eGmSL ==> xocVI", "eJIwl ==> jRGih", "elsbN ==> vhXhe", "emCPz ==> DvcJo", "fgkYN ==> HNROk", "fyAqi ==> vLeFz", "grsik ==> NJnIo", "hXkXW ==> vhXhe", "hhNoH ==> xQNtv", "hxIxw ==> YXmBb", "jBdLh ==> xocVI", "jEoYA ==> DvcJo", "jhIIx ==> oEdBI", "jvBkE ==> xQNtv", "kZsVF ==> YXmBb", "lElPX ==> YXmBb", "mGlGu ==> oEdBI", "mKFBO ==> nZkFx", "mPwAA ==> DbROI", "mVPFU ==> jRGih", "mqlwl ==> hGGkF", "nJcnx ==> ItOHk", "nhYqS ==> wAjsY", "nnBuV ==> HNROk", "oCrvL ==> JTeFK", "oEYKi ==> uSiNR", "oGsWl ==> kGcYd", "omUow ==> nZkFx", "osuoW ==> IXmBB", "qphiQ ==> DbROI", "qsraR ==> nZkFx", "rBoGD ==> xocVI", "rkXdT ==> BnJuk", "sChEU ==> DvcJo", "sFnlF ==> VUlWe", "sOXhl ==> IXmBB", "tdEiS ==> ItOHk", "ulHwD ==> oEdBI", "vLAng ==> xQNtv", "vstFT ==> RRpdn", "wHuXb ==> uSiNR", "wamqN ==> dApDV", "xzate ==> jRGih", "zADwa ==> oEdBI", "zEeRv ==> vhXhe", "zLSJB ==> xocVI"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> services = {"CZZ", "lAD tmm eRh hvZ pGn Yik", "aGF UQZ", "OyA LyI RvV EnI kGY gwY byQ Gjz ybF nHI nPB qms", "xBr YeJ oNn", "Bha cMT", "DOz znQ Kzz siR wsb Fiw VPf GTD fFc vwb zlW uqA", "CEm OQn JrL GkG WWv UOW Uqp XaA GrO iUp Bus ZVm", "HHp", "DuW xHg PoW", "jFx rvC", "iEn ZEx tYI Tll"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bus ==> CEm", "EnI ==> OyA", "Fiw ==> DOz", "GTD ==> DOz", "Gjz ==> OyA", "GkG ==> CEm", "GrO ==> CEm", "JrL ==> CEm", "Kzz ==> DOz", "LyI ==> OyA", "OQn ==> CEm", "PoW ==> DuW", "RvV ==> OyA", "Tll ==> iEn", "UOW ==> CEm", "UQZ ==> aGF", "Uqp ==> CEm", "VPf ==> DOz", "WWv ==> CEm", "XaA ==> CEm", "YeJ ==> xBr", "Yik ==> lAD", "ZEx ==> iEn", "ZVm ==> CEm", "byQ ==> OyA", "cMT ==> Bha", "eRh ==> lAD", "fFc ==> DOz", "gwY ==> OyA", "hvZ ==> lAD", "iUp ==> CEm", "kGY ==> OyA", "nHI ==> OyA", "nPB ==> OyA", "oNn ==> xBr", "pGn ==> lAD", "qms ==> OyA", "rvC ==> jFx", "siR ==> DOz", "tYI ==> iEn", "tmm ==> lAD", "uqA ==> DOz", "vwb ==> DOz", "wsb ==> DOz", "xHg ==> DuW", "ybF ==> OyA", "zlW ==> DOz", "znQ ==> DOz"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> services = {"RHwAjJPOLi", "kavOouPHMG", "KYMBPCixfc SWfiVBUNuq PaJenWtlvY", "HnLNSLbtnh IkvNIhrtPw rCcQyKvwWW CediUwVOwC", "kpaEXErUbZ aRoUOfASBC EJYDrfvGSo", "dusnpUvKzy QNtEpHXHDs sAHgTQlbJY", "uGHbArFqbN vhpxAioUGc pcyfjrbhnA OPAVPcAZsm", "qTLrIkbTFG", "lRGGfSxnaO SKBzaNQHRl mVDyJnqLDu WTLyoBWBPS", "LHfBYQsGmY", "wRKtSryrmm mjBUBOshsl TXkBcleMLK MPBOpxxolf", "HnyMGVqpNn rhlbMvkSeC ANeJfNsswP ePAzWCkNjl", "djHLPmJUev", "KGvyBawjOc yDJJntEacI", "RyYmihsupF", "xVVMrsIxLu EBXLAntzVk", "ThTLHsYEXZ", "IpSeTlmiJK NcvMfFHWvE LWWeznEsFk zUtNkCmEwr", "tsbhsBdpsP CIVbpXonhl SKekVxNFJB HgEFCyETQK", "zxbwozlEfU IFTOWqjeKp pbgYThIoMQ", "QaAMFETFFW IVNBNEhDhC DVzNSySjjn KpsfUCRhBu", "ETwDFYIKpx HeRXfMREaB nfMUiBFcdg", "PkkbYfvtFj WOlfgWZigq eVPRvZsjNb xrxrinUSQp", "VrSaVCsJnR wPOnQGbeul KjUMWCPFTZ cBcGdbLAdJ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ANeJfNsswP ==> HnyMGVqpNn", "CIVbpXonhl ==> tsbhsBdpsP", "CediUwVOwC ==> HnLNSLbtnh", "DVzNSySjjn ==> QaAMFETFFW", "EBXLAntzVk ==> xVVMrsIxLu", "EJYDrfvGSo ==> kpaEXErUbZ", "HeRXfMREaB ==> ETwDFYIKpx", "HgEFCyETQK ==> tsbhsBdpsP", "IFTOWqjeKp ==> zxbwozlEfU", "IVNBNEhDhC ==> QaAMFETFFW", "IkvNIhrtPw ==> HnLNSLbtnh", "KjUMWCPFTZ ==> VrSaVCsJnR", "KpsfUCRhBu ==> QaAMFETFFW", "LWWeznEsFk ==> IpSeTlmiJK", "MPBOpxxolf ==> wRKtSryrmm", "NcvMfFHWvE ==> IpSeTlmiJK", "OPAVPcAZsm ==> uGHbArFqbN", "PaJenWtlvY ==> KYMBPCixfc", "QNtEpHXHDs ==> dusnpUvKzy", "SKBzaNQHRl ==> lRGGfSxnaO", "SKekVxNFJB ==> tsbhsBdpsP", "SWfiVBUNuq ==> KYMBPCixfc", "TXkBcleMLK ==> wRKtSryrmm", "WOlfgWZigq ==> PkkbYfvtFj", "WTLyoBWBPS ==> lRGGfSxnaO", "aRoUOfASBC ==> kpaEXErUbZ", "cBcGdbLAdJ ==> VrSaVCsJnR", "ePAzWCkNjl ==> HnyMGVqpNn", "eVPRvZsjNb ==> PkkbYfvtFj", "mVDyJnqLDu ==> lRGGfSxnaO", "mjBUBOshsl ==> wRKtSryrmm", "nfMUiBFcdg ==> ETwDFYIKpx", "pbgYThIoMQ ==> zxbwozlEfU", "pcyfjrbhnA ==> uGHbArFqbN", "rCcQyKvwWW ==> HnLNSLbtnh", "rhlbMvkSeC ==> HnyMGVqpNn", "sAHgTQlbJY ==> dusnpUvKzy", "vhpxAioUGc ==> uGHbArFqbN", "wPOnQGbeul ==> VrSaVCsJnR", "xrxrinUSQp ==> PkkbYfvtFj", "yDJJntEacI ==> KGvyBawjOc", "zUtNkCmEwr ==> IpSeTlmiJK"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> services = {"NR XO RM Xa", "vr Cy GD wT ay HO aw RT xo ZT", "Up kW tS NP gU", "zZ", "Pj DU Tr QS yF zm FF", "LL Id Lx bY py nt ng gG tf co WA DP Kj fS", "Fd zq Wb ZC", "gl FE", "vZ ls HJ SS Lk Gh", "YN lx Kf", "Ol", "zr EI VG Jk QG oF AC jR SA", "MD"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AC ==> zr", "Cy ==> vr", "DP ==> LL", "DU ==> Pj", "EI ==> zr", "FE ==> gl", "FF ==> Pj", "GD ==> vr", "Gh ==> vZ", "HJ ==> vZ", "HO ==> vr", "Id ==> LL", "Jk ==> zr", "Kf ==> YN", "Kj ==> LL", "Lk ==> vZ", "Lx ==> LL", "NP ==> Up", "QG ==> zr", "QS ==> Pj", "RM ==> NR", "RT ==> vr", "SA ==> zr", "SS ==> vZ", "Tr ==> Pj", "VG ==> zr", "WA ==> LL", "Wb ==> Fd", "XO ==> NR", "Xa ==> NR", "ZC ==> Fd", "ZT ==> vr", "aw ==> vr", "ay ==> vr", "bY ==> LL", "co ==> LL", "fS ==> LL", "gG ==> LL", "gU ==> Up", "jR ==> zr", "kW ==> Up", "ls ==> vZ", "lx ==> YN", "ng ==> LL", "nt ==> LL", "oF ==> zr", "py ==> LL", "tS ==> Up", "tf ==> LL", "wT ==> vr", "xo ==> vr", "yF ==> Pj", "zm ==> Pj", "zq ==> Fd"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> services = {"PWCntvpUf qMqTkrnFl JcEmWKZky vFvpCHETV", "BzgpIwXAJ DzRtYErmO WOPBPTHej", "wqxQrZmfE mGMZoDwMn", "TLcnAYFcX sWknMNoRl GgcmchgDN zJkYvwnRE FQKbtuhMx", "CSGQlrEso MBJoSzgCa pJekLPnNf jSTDCZEQg", "OGPfDwjgm nUgwXoFTW dIuTRMqXT mNlcnpRxv pXJEXZKjZ", "FitxQHEDz hCwOCOGcI aWfOakhus GzurRZKdS QEdZTJhFD", "ZXFcjLZPZ GdLHbYegx zxruKPoxb", "GFMRtJfQO vFWehgQjg ulpiwnjpF iLifYxrMR jLTMccZze", "LpBlJvvAH lriEUNGBm", "ccJyXZqzc mqwKNqLRo LlbnNSSjC XWSRSlgHb QKdfbmKtC", "HsoKpMSwu gckXYbrij fQPbHdTtX HuVCZRtBY lJChVdUgw", "VgJpNoXaR vACxzLhNs NEowlpMyt AcWiRFNtc yvPkXuxuT", "YJmqMpBJA HowUVZwMu xYWGwoMqA PTzLpRBkh EfiKpusYu", "PTteMaMWu iLSRWYabI XdCxFYGGj hPfrrXlGf NNgocTNNw", "zOmIBOgvq", "BDwqejPIb", "XXzjDOmgj xjDbARhps JVdfnovYE yPnwqXlPM KEtCQUQxM", "UbVHivrOf qquFAsgNN HICpzapUQ kQRUSssEs DmKqmiFkO", "OEQcFGAhZ xLrggmgmJ QJBCSMetA VKCUVLWua SbmvJoTCX", "msBOJzRNT TmZtyNrUd", "UxuAwJsnz oHKotVJts ZxdqQIhpC", "uKMowXDyF", "ZXsuPBcQm", "pINgVPTRe", "YQhKfqirN fIwKYJZam", "baQqLWzsY wQRGPwkad maSiGzGyW GNhVSTCDA RHjBavoIz", "dMaRrenci", "dYHCtPJwS fXSwhBCEY iZIhDGoCF", "jFdzEeAlf xneRCNYSj tTLlHWfkm HmllwAFKZ uGgCAlMYD"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AcWiRFNtc ==> VgJpNoXaR", "DmKqmiFkO ==> UbVHivrOf", "DzRtYErmO ==> BzgpIwXAJ", "EfiKpusYu ==> YJmqMpBJA", "FQKbtuhMx ==> TLcnAYFcX", "GNhVSTCDA ==> baQqLWzsY", "GdLHbYegx ==> ZXFcjLZPZ", "GgcmchgDN ==> TLcnAYFcX", "GzurRZKdS ==> FitxQHEDz", "HICpzapUQ ==> UbVHivrOf", "HmllwAFKZ ==> jFdzEeAlf", "HowUVZwMu ==> YJmqMpBJA", "HuVCZRtBY ==> HsoKpMSwu", "JVdfnovYE ==> XXzjDOmgj", "JcEmWKZky ==> PWCntvpUf", "KEtCQUQxM ==> XXzjDOmgj", "LlbnNSSjC ==> ccJyXZqzc", "MBJoSzgCa ==> CSGQlrEso", "NEowlpMyt ==> VgJpNoXaR", "NNgocTNNw ==> PTteMaMWu", "PTzLpRBkh ==> YJmqMpBJA", "QEdZTJhFD ==> FitxQHEDz", "QJBCSMetA ==> OEQcFGAhZ", "QKdfbmKtC ==> ccJyXZqzc", "RHjBavoIz ==> baQqLWzsY", "SbmvJoTCX ==> OEQcFGAhZ", "TmZtyNrUd ==> msBOJzRNT", "VKCUVLWua ==> OEQcFGAhZ", "WOPBPTHej ==> BzgpIwXAJ", "XWSRSlgHb ==> ccJyXZqzc", "XdCxFYGGj ==> PTteMaMWu", "ZxdqQIhpC ==> UxuAwJsnz", "aWfOakhus ==> FitxQHEDz", "dIuTRMqXT ==> OGPfDwjgm", "fIwKYJZam ==> YQhKfqirN", "fQPbHdTtX ==> HsoKpMSwu", "fXSwhBCEY ==> dYHCtPJwS", "gckXYbrij ==> HsoKpMSwu", "hCwOCOGcI ==> FitxQHEDz", "hPfrrXlGf ==> PTteMaMWu", "iLSRWYabI ==> PTteMaMWu", "iLifYxrMR ==> GFMRtJfQO", "iZIhDGoCF ==> dYHCtPJwS", "jLTMccZze ==> GFMRtJfQO", "jSTDCZEQg ==> CSGQlrEso", "kQRUSssEs ==> UbVHivrOf", "lJChVdUgw ==> HsoKpMSwu", "lriEUNGBm ==> LpBlJvvAH", "mGMZoDwMn ==> wqxQrZmfE", "mNlcnpRxv ==> OGPfDwjgm", "maSiGzGyW ==> baQqLWzsY", "mqwKNqLRo ==> ccJyXZqzc", "nUgwXoFTW ==> OGPfDwjgm", "oHKotVJts ==> UxuAwJsnz", "pJekLPnNf ==> CSGQlrEso", "pXJEXZKjZ ==> OGPfDwjgm", "qMqTkrnFl ==> PWCntvpUf", "qquFAsgNN ==> UbVHivrOf", "sWknMNoRl ==> TLcnAYFcX", "tTLlHWfkm ==> jFdzEeAlf", "uGgCAlMYD ==> jFdzEeAlf", "ulpiwnjpF ==> GFMRtJfQO", "vACxzLhNs ==> VgJpNoXaR", "vFWehgQjg ==> GFMRtJfQO", "vFvpCHETV ==> PWCntvpUf", "wQRGPwkad ==> baQqLWzsY", "xLrggmgmJ ==> OEQcFGAhZ", "xYWGwoMqA ==> YJmqMpBJA", "xjDbARhps ==> XXzjDOmgj", "xneRCNYSj ==> jFdzEeAlf", "yPnwqXlPM ==> XXzjDOmgj", "yvPkXuxuT ==> VgJpNoXaR", "zJkYvwnRE ==> TLcnAYFcX", "zxruKPoxb ==> ZXFcjLZPZ"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> services = {"QQWw UGjp LxoW HDMx NILm ZmVN VUGQ IysC ahAS IPaE", "tqvN efJH bRYW kQuH kQUe mEjz vutz UNVk yCEm oQXd", "YYcR mORc kjTy nAHR LLwM qlaz szFb hgPP gPuu AUZo", "jjnV sdur", "oXtZ HdvF", "veub bfaB wLfq SRyF uhEv yJtS HXCJ kKwl", "EqOQ gDqm CVMb", "etbq MQxG MmYu vJDq UnIo DCgx dRJR jdUb xSEs inLV", "whbN bvwZ rMQk cODX hKoa Rffl EUGt QroY", "wjPd sXPo KBfL BUye emSc beXt", "yOvB bUrx lEGK"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AUZo ==> YYcR", "BUye ==> wjPd", "CVMb ==> EqOQ", "DCgx ==> etbq", "EUGt ==> whbN", "HDMx ==> QQWw", "HXCJ ==> veub", "HdvF ==> oXtZ", "IPaE ==> QQWw", "IysC ==> QQWw", "KBfL ==> wjPd", "LLwM ==> YYcR", "LxoW ==> QQWw", "MQxG ==> etbq", "MmYu ==> etbq", "NILm ==> QQWw", "QroY ==> whbN", "Rffl ==> whbN", "SRyF ==> veub", "UGjp ==> QQWw", "UNVk ==> tqvN", "UnIo ==> etbq", "VUGQ ==> QQWw", "ZmVN ==> QQWw", "ahAS ==> QQWw", "bRYW ==> tqvN", "bUrx ==> yOvB", "beXt ==> wjPd", "bfaB ==> veub", "bvwZ ==> whbN", "cODX ==> whbN", "dRJR ==> etbq", "efJH ==> tqvN", "emSc ==> wjPd", "gDqm ==> EqOQ", "gPuu ==> YYcR", "hKoa ==> whbN", "hgPP ==> YYcR", "inLV ==> etbq", "jdUb ==> etbq", "kKwl ==> veub", "kQUe ==> tqvN", "kQuH ==> tqvN", "kjTy ==> YYcR", "lEGK ==> yOvB", "mEjz ==> tqvN", "mORc ==> YYcR", "nAHR ==> YYcR", "oQXd ==> tqvN", "qlaz ==> YYcR", "rMQk ==> whbN", "sXPo ==> wjPd", "sdur ==> jjnV", "szFb ==> YYcR", "uhEv ==> veub", "vJDq ==> etbq", "vutz ==> tqvN", "wLfq ==> veub", "xSEs ==> etbq", "yCEm ==> tqvN", "yJtS ==> veub"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> services = {"XMg", "XIK rNG sec", "ZCT OsO kSL izK", "dnb", "KIn EIe", "bek KwK olv", "GEd PjW dyn BkC oSP Wvo", "kVS", "odk Oww SMO wGs wEr dNB rUS RcI oyp XOv EWu", "DuB", "zos", "pjw DjJ yHq huh vyd Nhq lbL", "ZcH CdC wqi lsZ nzW GAd mbr mdn AGf ClD RNV Hne", "ueS pmx", "Stx", "sQU PRo AHG zDu DQa LYr obW OGo", "fup giD Prq bZv gYg TEv Ekw RHo EAQ Sez wkB NKT", "UlS", "cYR Cfl Bel Nrj Ags sYl DOp OUw kpw ziO CON YrK", "QJG BOI vfY fAc IXM bAS CJb kiV qUF lwu NaV OJL", "yoH buW Xcu iYH nRQ", "QSC rBU BaM XTK yYR afp VXa SDU QxT NqL NsM rEE", "mmM RaP HJC aTa BRk znu tRx Dqh", "cKE", "eWN YfG xua dbR XiZ oCs nkw DbT nny jus FdX", "yuL rjo jcz fHe", "wpa ltU NzQ qPh EAM", "spM MTZ ooA KAw lvH IzP bcQ fxT FxD ECb Pkn BRS", "qqU", "IyS FTf", "uZu", "Xuh NSR pUr wjW nzQ uai", "mgk iOS oYw sHM OSr FaV VYY gHh wKB AIn jkh LFt", "Vdx", "IBQ hNN sQg qMX Sis Cnt", "xMT CuE"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGf ==> ZcH", "AHG ==> sQU", "AIn ==> mgk", "Ags ==> cYR", "BOI ==> QJG", "BRS ==> spM", "BRk ==> mmM", "BaM ==> QSC", "Bel ==> cYR", "BkC ==> GEd", "CJb ==> QJG", "CON ==> cYR", "CdC ==> ZcH", "Cfl ==> cYR", "ClD ==> ZcH", "Cnt ==> IBQ", "CuE ==> xMT", "DOp ==> cYR", "DQa ==> sQU", "DbT ==> eWN", "DjJ ==> pjw", "Dqh ==> mmM", "EAM ==> wpa", "EAQ ==> fup", "ECb ==> spM", "EIe ==> KIn", "EWu ==> odk", "Ekw ==> fup", "FTf ==> IyS", "FaV ==> mgk", "FdX ==> eWN", "FxD ==> spM", "GAd ==> ZcH", "HJC ==> mmM", "Hne ==> ZcH", "IXM ==> QJG", "IzP ==> spM", "KAw ==> spM", "KwK ==> bek", "LFt ==> mgk", "LYr ==> sQU", "MTZ ==> spM", "NKT ==> fup", "NSR ==> Xuh", "NaV ==> QJG", "Nhq ==> pjw", "NqL ==> QSC", "Nrj ==> cYR", "NsM ==> QSC", "NzQ ==> wpa", "OGo ==> sQU", "OJL ==> QJG", "OSr ==> mgk", "OUw ==> cYR", "OsO ==> ZCT", "Oww ==> odk", "PRo ==> sQU", "PjW ==> GEd", "Pkn ==> spM", "Prq ==> fup", "QxT ==> QSC", "RHo ==> fup", "RNV ==> ZcH", "RaP ==> mmM", "RcI ==> odk", "SDU ==> QSC", "SMO ==> odk", "Sez ==> fup", "Sis ==> IBQ", "TEv ==> fup", "VXa ==> QSC", "VYY ==> mgk", "Wvo ==> GEd", "XOv ==> odk", "XTK ==> QSC", "Xcu ==> yoH", "XiZ ==> eWN", "YfG ==> eWN", "YrK ==> cYR", "aTa ==> mmM", "afp ==> QSC", "bAS ==> QJG", "bZv ==> fup", "bcQ ==> spM", "buW ==> yoH", "dNB ==> odk", "dbR ==> eWN", "dyn ==> GEd", "fAc ==> QJG", "fHe ==> yuL", "fxT ==> spM", "gHh ==> mgk", "gYg ==> fup", "giD ==> fup", "hNN ==> IBQ", "huh ==> pjw", "iOS ==> mgk", "iYH ==> yoH", "izK ==> ZCT", "jcz ==> yuL", "jkh ==> mgk", "jus ==> eWN", "kSL ==> ZCT", "kiV ==> QJG", "kpw ==> cYR", "lbL ==> pjw", "lsZ ==> ZcH", "ltU ==> wpa", "lvH ==> spM", "lwu ==> QJG", "mbr ==> ZcH", "mdn ==> ZcH", "nRQ ==> yoH", "nkw ==> eWN", "nny ==> eWN", "nzQ ==> Xuh", "nzW ==> ZcH", "oCs ==> eWN", "oSP ==> GEd", "oYw ==> mgk", "obW ==> sQU", "olv ==> bek", "ooA ==> spM", "oyp ==> odk", "pUr ==> Xuh", "pmx ==> ueS", "qMX ==> IBQ", "qPh ==> wpa", "qUF ==> QJG", "rBU ==> QSC", "rEE ==> QSC", "rNG ==> XIK", "rUS ==> odk", "rjo ==> yuL", "sHM ==> mgk", "sQg ==> IBQ", "sYl ==> cYR", "sec ==> XIK", "tRx ==> mmM", "uai ==> Xuh", "vfY ==> QJG", "vyd ==> pjw", "wEr ==> odk", "wGs ==> odk", "wKB ==> mgk", "wjW ==> Xuh", "wkB ==> fup", "wqi ==> ZcH", "xua ==> eWN", "yHq ==> pjw", "yYR ==> QSC", "zDu ==> sQU", "ziO ==> cYR", "znu ==> mmM"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> services = {"YETgX AzLNC uYATo uDyXB TUdzf hqHUE", "qSOJf KhnbN", "GmtsD kwDKe EZoEg XWeme", "lFnDM JervY orJKo", "xpJjO dNZFi QOhzk FZeIa EqVbw", "sUCri VWJow BDahM", "IOZVR dOkZK", "PwVjl nWNiE", "uzAxU", "ZwPYg", "uJimq ptTVf XNHtw IVMNn GEeue qPKEG gaEIA UnvHM", "OwUEy UYInj lPXuX", "RNLjU OWDuG", "dcbir FrgkE", "caOjH KHdUR zPwHW eJSak lNkGw ZdtoH", "UcDZT cFRPI EIbzg MMdqU", "JwCor DInXZ aJTaP XamBs", "QkyBo njBED vCUGX srdne WyStD IGnpV dTaTe OdfGH", "aURMJ", "AYmOa iZZrt", "zfczG wjTSs fkpIE", "DlAKD JzefT kFJEj EXENH VfVxX EYVbf", "YQULg CnarU vOSIS yFeca Jxwoo uDDAL bEdCe pDOna", "QorWj", "tlHhG", "jABuN HkKka auiap BvBED LHGex WJDVb", "LJAvO", "ucaPg kPmWq kWODv usNQN KBVCV AOXLt KKVzq Rieuu", "SCQVu dAJLg qczwL RoHda afUsI zgpfZ", "pEVPk nFgkU qLIyc jgfUB VDMck LHiGG McYjh UBvBH", "rWRRG BwPsa PPBBb KSydg yYZHA bespv PATxd", "TuZJu LWeRZ aTYUw ycPfD vaWAV lWBSs PlPmn", "keWQw", "DLGab wWRHy tZGXs", "dHtBF ucGKj DxPSm QEnyB nHvix GsNCC FjfXL hGBtP", "AErry ZITsN ZQAHr vVlJw xzZrD MBzdF FLpPF SPlgA", "mRGYA", "PvnJF", "STWNV XPqNg QDLsq qPyuC BFoXp ROHPZ qcnqJ YZBHE", "dSpQn", "DaCUu", "ujdKA anXld OjJSQ UpqIg icgoF NrDPD rljlD obrrf"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AOXLt ==> ucaPg", "AzLNC ==> YETgX", "BDahM ==> sUCri", "BFoXp ==> STWNV", "BvBED ==> jABuN", "BwPsa ==> rWRRG", "CnarU ==> YQULg", "DInXZ ==> JwCor", "DxPSm ==> dHtBF", "EIbzg ==> UcDZT", "EXENH ==> DlAKD", "EYVbf ==> DlAKD", "EZoEg ==> GmtsD", "EqVbw ==> xpJjO", "FLpPF ==> AErry", "FZeIa ==> xpJjO", "FjfXL ==> dHtBF", "FrgkE ==> dcbir", "GEeue ==> uJimq", "GsNCC ==> dHtBF", "HkKka ==> jABuN", "IGnpV ==> QkyBo", "IVMNn ==> uJimq", "JervY ==> lFnDM", "Jxwoo ==> YQULg", "JzefT ==> DlAKD", "KBVCV ==> ucaPg", "KHdUR ==> caOjH", "KKVzq ==> ucaPg", "KSydg ==> rWRRG", "KhnbN ==> qSOJf", "LHGex ==> jABuN", "LHiGG ==> pEVPk", "LWeRZ ==> TuZJu", "MBzdF ==> AErry", "MMdqU ==> UcDZT", "McYjh ==> pEVPk", "NrDPD ==> ujdKA", "OWDuG ==> RNLjU", "OdfGH ==> QkyBo", "OjJSQ ==> ujdKA", "PATxd ==> rWRRG", "PPBBb ==> rWRRG", "PlPmn ==> TuZJu", "QDLsq ==> STWNV", "QEnyB ==> dHtBF", "QOhzk ==> xpJjO", "ROHPZ ==> STWNV", "Rieuu ==> ucaPg", "RoHda ==> SCQVu", "SPlgA ==> AErry", "TUdzf ==> YETgX", "UBvBH ==> pEVPk", "UYInj ==> OwUEy", "UnvHM ==> uJimq", "UpqIg ==> ujdKA", "VDMck ==> pEVPk", "VWJow ==> sUCri", "VfVxX ==> DlAKD", "WJDVb ==> jABuN", "WyStD ==> QkyBo", "XNHtw ==> uJimq", "XPqNg ==> STWNV", "XWeme ==> GmtsD", "XamBs ==> JwCor", "YZBHE ==> STWNV", "ZITsN ==> AErry", "ZQAHr ==> AErry", "ZdtoH ==> caOjH", "aJTaP ==> JwCor", "aTYUw ==> TuZJu", "afUsI ==> SCQVu", "anXld ==> ujdKA", "auiap ==> jABuN", "bEdCe ==> YQULg", "bespv ==> rWRRG", "cFRPI ==> UcDZT", "dAJLg ==> SCQVu", "dNZFi ==> xpJjO", "dOkZK ==> IOZVR", "dTaTe ==> QkyBo", "eJSak ==> caOjH", "fkpIE ==> zfczG", "gaEIA ==> uJimq", "hGBtP ==> dHtBF", "hqHUE ==> YETgX", "iZZrt ==> AYmOa", "icgoF ==> ujdKA", "jgfUB ==> pEVPk", "kFJEj ==> DlAKD", "kPmWq ==> ucaPg", "kWODv ==> ucaPg", "kwDKe ==> GmtsD", "lNkGw ==> caOjH", "lPXuX ==> OwUEy", "lWBSs ==> TuZJu", "nFgkU ==> pEVPk", "nHvix ==> dHtBF", "nWNiE ==> PwVjl", "njBED ==> QkyBo", "obrrf ==> ujdKA", "orJKo ==> lFnDM", "pDOna ==> YQULg", "ptTVf ==> uJimq", "qLIyc ==> pEVPk", "qPKEG ==> uJimq", "qPyuC ==> STWNV", "qcnqJ ==> STWNV", "qczwL ==> SCQVu", "rljlD ==> ujdKA", "srdne ==> QkyBo", "tZGXs ==> DLGab", "uDDAL ==> YQULg", "uDyXB ==> YETgX", "uYATo ==> YETgX", "ucGKj ==> dHtBF", "usNQN ==> ucaPg", "vCUGX ==> QkyBo", "vOSIS ==> YQULg", "vVlJw ==> AErry", "vaWAV ==> TuZJu", "wWRHy ==> DLGab", "wjTSs ==> zfczG", "xzZrD ==> AErry", "yFeca ==> YQULg", "yYZHA ==> rWRRG", "ycPfD ==> TuZJu", "zPwHW ==> caOjH", "zgpfZ ==> SCQVu"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> services = {"OcUCz neyUL Ukfgw fpmlx AzcxD FjBKQ", "LtLFd SJLhK MkYWp mpObD mAFep YsvTw FRSeN PDRtP", "XCBAD pkDeA fbUYg pQvny", "WAzFH oZEBG", "zTRzt NWaFb ssPjm NQCRo HCGVH SVRqb oNstL RtGbP", "nRclN EkOUt", "oTVWf bLHwS EjOsE LEnht eiJAf gVnKB APBif EAEhH", "WudTe xPbkb", "aBLem SCByG GNwzk", "AmQiJ VFtpM vMQey BYXtd gKaVr dZZGn", "NlBQY pFIDO PtIfB ZxbqR ljVvb WRrKC LrRDm RFXMs", "QbbkX", "KMtMi", "SWUwS VDTeX TqQwp uIEPI YYuDm oTJPA ZuhVC", "kouoU DqNrS oEPgD StMOK UBDaw CBjIs MhTkq JAWJd", "JKgJl NDSFk cvAii eAHLh BHxnK euCmx", "TBfRz OXEfN pQpcC tkijc vQezp Hvioo DFKGK hKSTk", "xCCNt hzKgp SRACV evXQE AVheB UfbNk", "hesvY nfjQt KEvKb bqMMT EESMN LcXRx hLxXg XCIhf", "oICka fqqcg", "sZAgJ VdEnG DJlaf nvuoA KaXpk"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"APBif ==> oTVWf", "AVheB ==> xCCNt", "AzcxD ==> OcUCz", "BHxnK ==> JKgJl", "BYXtd ==> AmQiJ", "CBjIs ==> kouoU", "DFKGK ==> TBfRz", "DJlaf ==> sZAgJ", "DqNrS ==> kouoU", "EAEhH ==> oTVWf", "EESMN ==> hesvY", "EjOsE ==> oTVWf", "EkOUt ==> nRclN", "FRSeN ==> LtLFd", "FjBKQ ==> OcUCz", "GNwzk ==> aBLem", "HCGVH ==> zTRzt", "Hvioo ==> TBfRz", "JAWJd ==> kouoU", "KEvKb ==> hesvY", "KaXpk ==> sZAgJ", "LEnht ==> oTVWf", "LcXRx ==> hesvY", "LrRDm ==> NlBQY", "MhTkq ==> kouoU", "MkYWp ==> LtLFd", "NDSFk ==> JKgJl", "NQCRo ==> zTRzt", "NWaFb ==> zTRzt", "OXEfN ==> TBfRz", "PDRtP ==> LtLFd", "PtIfB ==> NlBQY", "RFXMs ==> NlBQY", "RtGbP ==> zTRzt", "SCByG ==> aBLem", "SJLhK ==> LtLFd", "SRACV ==> xCCNt", "SVRqb ==> zTRzt", "StMOK ==> kouoU", "TqQwp ==> SWUwS", "UBDaw ==> kouoU", "UfbNk ==> xCCNt", "Ukfgw ==> OcUCz", "VDTeX ==> SWUwS", "VFtpM ==> AmQiJ", "VdEnG ==> sZAgJ", "WRrKC ==> NlBQY", "XCIhf ==> hesvY", "YYuDm ==> SWUwS", "YsvTw ==> LtLFd", "ZuhVC ==> SWUwS", "ZxbqR ==> NlBQY", "bLHwS ==> oTVWf", "bqMMT ==> hesvY", "cvAii ==> JKgJl", "dZZGn ==> AmQiJ", "eAHLh ==> JKgJl", "eiJAf ==> oTVWf", "euCmx ==> JKgJl", "evXQE ==> xCCNt", "fbUYg ==> XCBAD", "fpmlx ==> OcUCz", "fqqcg ==> oICka", "gKaVr ==> AmQiJ", "gVnKB ==> oTVWf", "hKSTk ==> TBfRz", "hLxXg ==> hesvY", "hzKgp ==> xCCNt", "ljVvb ==> NlBQY", "mAFep ==> LtLFd", "mpObD ==> LtLFd", "neyUL ==> OcUCz", "nfjQt ==> hesvY", "nvuoA ==> sZAgJ", "oEPgD ==> kouoU", "oNstL ==> zTRzt", "oTJPA ==> SWUwS", "oZEBG ==> WAzFH", "pFIDO ==> NlBQY", "pQpcC ==> TBfRz", "pQvny ==> XCBAD", "pkDeA ==> XCBAD", "ssPjm ==> zTRzt", "tkijc ==> TBfRz", "uIEPI ==> SWUwS", "vMQey ==> AmQiJ", "vQezp ==> TBfRz", "xPbkb ==> WudTe"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> services = {"YmZCSgkqD LzxCzSMlH qgsKCOfBO", "cwstXSTYi CTmjDoLvO IZhinYmBl egaDMoljS REvKjrIAn", "tyQxrQPKU ddIULOQxi nRNiIQRbA", "UsoetbNFo TKjGDLfrK bHBaLRmNV HkwIvemGH OSAhdOqRX", "VxMckwpOh PFwuwwMlc", "xYjLKlBIS", "MJxnAiPfQ TewmctDVz IiFFKnAtk wzlwzlUXN", "spWrjaJxG nRBeOhMdE", "YpQTMctIh cJFNJnmWk orSXEaKpz", "zjmYMggDl skZCYzrLZ FeTicznwy", "daXhGYvYa CJsHzOkxT kJZliUaeW zRWmRJOuy iXArhmTZM", "aZxPOmkdU YuLzjJzEO qKEJWWphu SStxtqwRY", "qEpCKccLV McXgClgbq vXFdyrQul meGVlThbd CqNYRadlK", "AfGKZJQfg XyEuCRbkk bLsiOQPje eYOukQKep", "wqjrpyzrP", "PcVebLjdJ", "vKqSnkKJX kohKkvDNe dJOFJnzEP UIAXBydAq WJEFyFCLf", "CAjjODect", "qMfwINZaV wwUmyyiKt wsFSJKYRv QjZSHmvkE DXjdDkrrr", "DzCGYCMbA LqeEfnpoQ GiqfDyaZe AgBzuqrod ROhjqfmIO", "EXKluruEp", "BdLjHGrlv", "rFSjutNPy JpCQXeBbS KzrjtkkUu sulUUhiNH jzIgILYMQ", "TxYTSFmQz qtmZszFfp DikNppdrL jhvzMEuJJ fLWOKbiuQ", "mKQedyMLk aRylFGMZH qXSjPspYk RZFnrbHqQ NnXsjpVFr", "iygWjHUmi", "xPPejWdRn QFsmRnvbc", "mBslmxSqC uznGnxAZp xTWGAmnil MbpBVYxor", "ufFOYHjCd cyEWVEoXS bdNlJxkhk WqyEIOXWw", "bSqdEhXyA KPXerBOkT STCYzLQfA oMbxLpbaF BgZVXgJaI", "TBwuwwiRB", "WWUnKfXBd mjclwhXwR", "qzGGRMMZX", "qokvRrmUX", "rupmmLMYM WHaYnWemE rZiAJctlZ qKkDClgSy xrojensXm", "KilcNeHVc uYatcjZlO ZUvDopBGF oifdAEYcp HaKURMYbJ", "oMCRWLyCn rIExprQnc DBtfLzjDJ", "reasxpIPD QaIwDVMEh QtNCyXeBJ jQlIIubNt LarKEjAyX", "QWLNxUlzg", "sRLIToedg sSEVyHDhc bsKVmlhhy", "uwFqZPciK BvyMbbRVz OyXzfpxsU PrUOWcPYu SkxaHriJC", "kHEmLMEqM FLwEDQROs", "pJDOcdrlh zjPqStvUa kCEYYTzqQ rZiaKksuD cIYqRJaCF", "VllHEijtY PMSFnlTiy SwpfDrFsK IKvozzJuV AJtZAfHdo", "TymARArSp GeaQAFzme UervoTLGK XyTbbmjJX ToHtnnMbh", "rsEeCwVSG pBcixrpfC adkdvhIKX", "qrWTQSSao azRwKDzJk", "UPeWIFWCm", "iHAtTtONN NVAnYdiNB THlJwqqWN exVJFQoyr vcLVQJjxf"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AJtZAfHdo ==> VllHEijtY", "AgBzuqrod ==> DzCGYCMbA", "BgZVXgJaI ==> bSqdEhXyA", "BvyMbbRVz ==> uwFqZPciK", "CJsHzOkxT ==> daXhGYvYa", "CTmjDoLvO ==> cwstXSTYi", "CqNYRadlK ==> qEpCKccLV", "DBtfLzjDJ ==> oMCRWLyCn", "DXjdDkrrr ==> qMfwINZaV", "DikNppdrL ==> TxYTSFmQz", "FLwEDQROs ==> kHEmLMEqM", "FeTicznwy ==> zjmYMggDl", "GeaQAFzme ==> TymARArSp", "GiqfDyaZe ==> DzCGYCMbA", "HaKURMYbJ ==> KilcNeHVc", "HkwIvemGH ==> UsoetbNFo", "IKvozzJuV ==> VllHEijtY", "IZhinYmBl ==> cwstXSTYi", "IiFFKnAtk ==> MJxnAiPfQ", "JpCQXeBbS ==> rFSjutNPy", "KPXerBOkT ==> bSqdEhXyA", "KzrjtkkUu ==> rFSjutNPy", "LarKEjAyX ==> reasxpIPD", "LqeEfnpoQ ==> DzCGYCMbA", "LzxCzSMlH ==> YmZCSgkqD", "MbpBVYxor ==> mBslmxSqC", "McXgClgbq ==> qEpCKccLV", "NVAnYdiNB ==> iHAtTtONN", "NnXsjpVFr ==> mKQedyMLk", "OSAhdOqRX ==> UsoetbNFo", "OyXzfpxsU ==> uwFqZPciK", "PFwuwwMlc ==> VxMckwpOh", "PMSFnlTiy ==> VllHEijtY", "PrUOWcPYu ==> uwFqZPciK", "QFsmRnvbc ==> xPPejWdRn", "QaIwDVMEh ==> reasxpIPD", "QjZSHmvkE ==> qMfwINZaV", "QtNCyXeBJ ==> reasxpIPD", "REvKjrIAn ==> cwstXSTYi", "ROhjqfmIO ==> DzCGYCMbA", "RZFnrbHqQ ==> mKQedyMLk", "SStxtqwRY ==> aZxPOmkdU", "STCYzLQfA ==> bSqdEhXyA", "SkxaHriJC ==> uwFqZPciK", "SwpfDrFsK ==> VllHEijtY", "THlJwqqWN ==> iHAtTtONN", "TKjGDLfrK ==> UsoetbNFo", "TewmctDVz ==> MJxnAiPfQ", "ToHtnnMbh ==> TymARArSp", "UIAXBydAq ==> vKqSnkKJX", "UervoTLGK ==> TymARArSp", "WHaYnWemE ==> rupmmLMYM", "WJEFyFCLf ==> vKqSnkKJX", "WqyEIOXWw ==> ufFOYHjCd", "XyEuCRbkk ==> AfGKZJQfg", "XyTbbmjJX ==> TymARArSp", "YuLzjJzEO ==> aZxPOmkdU", "ZUvDopBGF ==> KilcNeHVc", "aRylFGMZH ==> mKQedyMLk", "adkdvhIKX ==> rsEeCwVSG", "azRwKDzJk ==> qrWTQSSao", "bHBaLRmNV ==> UsoetbNFo", "bLsiOQPje ==> AfGKZJQfg", "bdNlJxkhk ==> ufFOYHjCd", "bsKVmlhhy ==> sRLIToedg", "cIYqRJaCF ==> pJDOcdrlh", "cJFNJnmWk ==> YpQTMctIh", "cyEWVEoXS ==> ufFOYHjCd", "dJOFJnzEP ==> vKqSnkKJX", "ddIULOQxi ==> tyQxrQPKU", "eYOukQKep ==> AfGKZJQfg", "egaDMoljS ==> cwstXSTYi", "exVJFQoyr ==> iHAtTtONN", "fLWOKbiuQ ==> TxYTSFmQz", "iXArhmTZM ==> daXhGYvYa", "jQlIIubNt ==> reasxpIPD", "jhvzMEuJJ ==> TxYTSFmQz", "jzIgILYMQ ==> rFSjutNPy", "kCEYYTzqQ ==> pJDOcdrlh", "kJZliUaeW ==> daXhGYvYa", "kohKkvDNe ==> vKqSnkKJX", "meGVlThbd ==> qEpCKccLV", "mjclwhXwR ==> WWUnKfXBd", "nRBeOhMdE ==> spWrjaJxG", "nRNiIQRbA ==> tyQxrQPKU", "oMbxLpbaF ==> bSqdEhXyA", "oifdAEYcp ==> KilcNeHVc", "orSXEaKpz ==> YpQTMctIh", "pBcixrpfC ==> rsEeCwVSG", "qKEJWWphu ==> aZxPOmkdU", "qKkDClgSy ==> rupmmLMYM", "qXSjPspYk ==> mKQedyMLk", "qgsKCOfBO ==> YmZCSgkqD", "qtmZszFfp ==> TxYTSFmQz", "rIExprQnc ==> oMCRWLyCn", "rZiAJctlZ ==> rupmmLMYM", "rZiaKksuD ==> pJDOcdrlh", "sSEVyHDhc ==> sRLIToedg", "skZCYzrLZ ==> zjmYMggDl", "sulUUhiNH ==> rFSjutNPy", "uYatcjZlO ==> KilcNeHVc", "uznGnxAZp ==> mBslmxSqC", "vXFdyrQul ==> qEpCKccLV", "vcLVQJjxf ==> iHAtTtONN", "wsFSJKYRv ==> qMfwINZaV", "wwUmyyiKt ==> qMfwINZaV", "wzlwzlUXN ==> MJxnAiPfQ", "xTWGAmnil ==> mBslmxSqC", "xrojensXm ==> rupmmLMYM", "zRWmRJOuy ==> daXhGYvYa", "zjPqStvUa ==> pJDOcdrlh"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> services = {"eeSGsPh YUXyUuf ErdNNsA", "BuTtJgj"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ErdNNsA ==> eeSGsPh", "YUXyUuf ==> eeSGsPh"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> services = {"nWKbhhGgdi hsEQAdtaEP xcedyXMpiC ndFZjyzMZS", "yvHUXWwLmU IDZkfZwxQl", "ZxdhLCJgXv NbIFNDmruQ aGAAUaQobZ", "TkGjtwluol MlXVizxktw JkjdNoTOyY ibqixzLcVT", "txSbRMKgen xeSVCvlVSm IIHqVlWUtn yYEZwlwsJk", "ApKmkXlSRr OcJwgYceUn yjqAPbSzIy", "dqGmZcJOLd mIRtuvpFVf", "nKBWNihoDY pNZoDGrCWW UzznAxEWPF JIsbqkTeXz", "LxeiRPbILA vZVmDEJjgB isgbHVXpxt aeNWYJohyg", "WtAuZtfMKy hDwFEDrjNu mvPflvyAto ZkwJUjanLt", "HUKgWpcGpF ypVJtUWCsw cINfgNhHHs ZFilJooCug", "DZJHeKWiMz XnvnFCGGHb IMqchEKWFo nrkQYhPRCB", "CdvaNcIkoz cLDFAgATuV MspyTGDZuQ kfWXpKYNKw", "qScmttHiHw aWWWemXvqj FvCAYVvQmR yQRBzjIEfu", "zmjruHIlcG dqrsEwfYQC eZzGelGZok snsLBmIkDn", "iWctnfmnJw NkzLlzKVPY ZERQDCCCwS", "kjZzUySYav BbFwfVStrR ipYSmLbnNy cNVvbJKnOz", "MGCcLGLOsI pjoOYZRjLe cXmgDfkxvp", "ZEBfbGdNIq mRKfMKilsD RTouBEeMgF uWdrKYpBBg", "nmPxedmmev PZfdPkYIVW nQNHFssETE", "bFtIHEMXmo", "msWCmbPdzA aNlpVtYmBo WrQuSkDfaM tgXIudyego", "fwwPQujPFl", "kozjtrSsGI GocJOgcKwY", "dGaRAHymQb ERqiKXGgLd pLqIHeLSmS", "VltUrFEfDr CeUMnKqXYJ", "CIGPKqeNaS xzEasfUUEz AclnsKOvrT HzGnMRytjV", "kYqBKOoIWt MURFIQvbBk jCmWqgtGmA ITbLeTNEZI", "gJnxUnOwiD wYUEetvwli IFYhAqLhjW diAaCvKwDn", "NwLBNrlagY UrFoXTcsiC ywJpzGARkL", "ISjlOLblVm JiCVWmZMCB xBtdZGUwHs cBQGxaeCZx", "QxWWIygCGp xWwauQLtxf umPOROHSXg fEfmmIFnSC", "JBjiCWoVaM", "ifQnkivAhz TVvmNHntsf twViKSUSBf dwcDVSFeUL", "bMLoegjhDy GEiFkspeTz NHfovctJdO", "WWQxiIUAyZ", "HaXIdQEEbU yfGkNGuRsm nncqeHGFMa AxuzfESsTW", "LXHThuJNVP SPAhkuSphx ubMFzPqffw LZdPqBnJfJ", "OIeTwWhjgv XpcupaZoQK vjavAWdrXC rIzlQHakwP", "sMzKgSPjUe vzuzedrihW OfiREbRjfV", "iPFFUcJNaS gMjKGplrCQ vFWzPMXgVZ nFiiovDMJo", "DcqbhXrIVS", "SdtbKdVYPF"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AclnsKOvrT ==> CIGPKqeNaS", "AxuzfESsTW ==> HaXIdQEEbU", "BbFwfVStrR ==> kjZzUySYav", "CeUMnKqXYJ ==> VltUrFEfDr", "ERqiKXGgLd ==> dGaRAHymQb", "FvCAYVvQmR ==> qScmttHiHw", "GEiFkspeTz ==> bMLoegjhDy", "GocJOgcKwY ==> kozjtrSsGI", "HzGnMRytjV ==> CIGPKqeNaS", "IDZkfZwxQl ==> yvHUXWwLmU", "IFYhAqLhjW ==> gJnxUnOwiD", "IIHqVlWUtn ==> txSbRMKgen", "IMqchEKWFo ==> DZJHeKWiMz", "ITbLeTNEZI ==> kYqBKOoIWt", "JIsbqkTeXz ==> nKBWNihoDY", "JiCVWmZMCB ==> ISjlOLblVm", "JkjdNoTOyY ==> TkGjtwluol", "LZdPqBnJfJ ==> LXHThuJNVP", "MURFIQvbBk ==> kYqBKOoIWt", "MlXVizxktw ==> TkGjtwluol", "MspyTGDZuQ ==> CdvaNcIkoz", "NHfovctJdO ==> bMLoegjhDy", "NbIFNDmruQ ==> ZxdhLCJgXv", "NkzLlzKVPY ==> iWctnfmnJw", "OcJwgYceUn ==> ApKmkXlSRr", "OfiREbRjfV ==> sMzKgSPjUe", "PZfdPkYIVW ==> nmPxedmmev", "RTouBEeMgF ==> ZEBfbGdNIq", "SPAhkuSphx ==> LXHThuJNVP", "TVvmNHntsf ==> ifQnkivAhz", "UrFoXTcsiC ==> NwLBNrlagY", "UzznAxEWPF ==> nKBWNihoDY", "WrQuSkDfaM ==> msWCmbPdzA", "XnvnFCGGHb ==> DZJHeKWiMz", "XpcupaZoQK ==> OIeTwWhjgv", "ZERQDCCCwS ==> iWctnfmnJw", "ZFilJooCug ==> HUKgWpcGpF", "ZkwJUjanLt ==> WtAuZtfMKy", "aGAAUaQobZ ==> ZxdhLCJgXv", "aNlpVtYmBo ==> msWCmbPdzA", "aWWWemXvqj ==> qScmttHiHw", "aeNWYJohyg ==> LxeiRPbILA", "cBQGxaeCZx ==> ISjlOLblVm", "cINfgNhHHs ==> HUKgWpcGpF", "cLDFAgATuV ==> CdvaNcIkoz", "cNVvbJKnOz ==> kjZzUySYav", "cXmgDfkxvp ==> MGCcLGLOsI", "diAaCvKwDn ==> gJnxUnOwiD", "dqrsEwfYQC ==> zmjruHIlcG", "dwcDVSFeUL ==> ifQnkivAhz", "eZzGelGZok ==> zmjruHIlcG", "fEfmmIFnSC ==> QxWWIygCGp", "gMjKGplrCQ ==> iPFFUcJNaS", "hDwFEDrjNu ==> WtAuZtfMKy", "hsEQAdtaEP ==> nWKbhhGgdi", "ibqixzLcVT ==> TkGjtwluol", "ipYSmLbnNy ==> kjZzUySYav", "isgbHVXpxt ==> LxeiRPbILA", "jCmWqgtGmA ==> kYqBKOoIWt", "kfWXpKYNKw ==> CdvaNcIkoz", "mIRtuvpFVf ==> dqGmZcJOLd", "mRKfMKilsD ==> ZEBfbGdNIq", "mvPflvyAto ==> WtAuZtfMKy", "nFiiovDMJo ==> iPFFUcJNaS", "nQNHFssETE ==> nmPxedmmev", "ndFZjyzMZS ==> nWKbhhGgdi", "nncqeHGFMa ==> HaXIdQEEbU", "nrkQYhPRCB ==> DZJHeKWiMz", "pLqIHeLSmS ==> dGaRAHymQb", "pNZoDGrCWW ==> nKBWNihoDY", "pjoOYZRjLe ==> MGCcLGLOsI", "rIzlQHakwP ==> OIeTwWhjgv", "snsLBmIkDn ==> zmjruHIlcG", "tgXIudyego ==> msWCmbPdzA", "twViKSUSBf ==> ifQnkivAhz", "uWdrKYpBBg ==> ZEBfbGdNIq", "ubMFzPqffw ==> LXHThuJNVP", "umPOROHSXg ==> QxWWIygCGp", "vFWzPMXgVZ ==> iPFFUcJNaS", "vZVmDEJjgB ==> LxeiRPbILA", "vjavAWdrXC ==> OIeTwWhjgv", "vzuzedrihW ==> sMzKgSPjUe", "wYUEetvwli ==> gJnxUnOwiD", "xBtdZGUwHs ==> ISjlOLblVm", "xWwauQLtxf ==> QxWWIygCGp", "xcedyXMpiC ==> nWKbhhGgdi", "xeSVCvlVSm ==> txSbRMKgen", "xzEasfUUEz ==> CIGPKqeNaS", "yQRBzjIEfu ==> qScmttHiHw", "yYEZwlwsJk ==> txSbRMKgen", "yfGkNGuRsm ==> HaXIdQEEbU", "yjqAPbSzIy ==> ApKmkXlSRr", "ypVJtUWCsw ==> HUKgWpcGpF", "ywJpzGARkL ==> NwLBNrlagY"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> services = {"HFQKQWC hQIbPoM IEUMUvz cxVBfmM zPQrPbt bpaJVaU", "URsWtYv KvHISAk ZEIhmGj EvGMEZY CFSmPwg lmbypRx", "HgWdMyo skzdgzq", "bqZqnEN lXngUdA PVTFvWd lcRIOaj HkwcBaR", "NfDWwsS cbCsqId SQgjqWh ZNexdAG uGDoaba DzNyxTZ", "ElRcMPd gMogxGY FdbLnOp GXMKlxg AAyWpeX GETdvhO", "JpfebcI", "phMtXkc EPuHPlR VteGTwp sxYrNom xNiELpU lRjGFBg", "PaCdMzD tGWmHhL MUhLALy JnghKXu wYvVACb qNdPfab", "imOPASl kZuVDLt PhDwhoZ gUTkgiu bAnQDVG LgdABXg", "DhAhTKK AzdJslw yPIsiEd uQdHLFQ TBTUCQE cLGaYus", "easUhji vNCiZhN UohqmCm", "XvLbaYh rDNhnhj wLrYeiM PSoPnXM babsVZj iUQBPAQ", "IAFYAoM guXfzQA koNrOMA yBUTyPG WajxnHS ySUdLIH", "wLyofyz vwUKMqM jkLBuwt pBEpKTx cejHIcJ wIkPeih", "XKZLhlq iuuWYpF keePnSQ evmyyBa LHqTbTl weVSPiO", "NslTUMw bienTTk cPKTlNk vBRYhSB WIWskKZ", "eIhkvMR", "cOkGjCk IOQhMSL qVVpXHl VaHaMNN kZHlqOh AUqCOqQ", "rcqtACt HYYjRPd RCaRWgE SZrzMvD wCLFtlu", "eTPYUrY ZRzBJlj afZKTaL", "dHwrLnO gjVpgWS xxrWsUG icwYRym unIwMWL", "RxnIImz loDZtiG QwmgMLI xCYHuUj WgzznNR MekGrSr", "sNUUrZZ PldQTqx", "ZHBkbdH jibYrpX BXuNXgC UhlExLS pYnLtTM thblOzy", "URPPwIZ AFzvVxQ qFiLOuW HFDgzQH ClcsaSL WtFbdgn", "CDYJwHh pUYhQgr DHViEuQ iDSCTbD jZaGIFp xsdcmYT", "FHZWTOc", "zDvGDBA OhSLnzj YLdRmnn fTliDHT aaJTKTM sFkZpaa", "wDRiZeU JdNCyvm", "ITJKNIC pNeZtuT VosdiJU BARhDcy fKOWBmC"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAyWpeX ==> ElRcMPd", "AFzvVxQ ==> URPPwIZ", "AUqCOqQ ==> cOkGjCk", "AzdJslw ==> DhAhTKK", "BARhDcy ==> ITJKNIC", "BXuNXgC ==> ZHBkbdH", "CFSmPwg ==> URsWtYv", "ClcsaSL ==> URPPwIZ", "DHViEuQ ==> CDYJwHh", "DzNyxTZ ==> NfDWwsS", "EPuHPlR ==> phMtXkc", "EvGMEZY ==> URsWtYv", "FdbLnOp ==> ElRcMPd", "GETdvhO ==> ElRcMPd", "GXMKlxg ==> ElRcMPd", "HFDgzQH ==> URPPwIZ", "HYYjRPd ==> rcqtACt", "HkwcBaR ==> bqZqnEN", "IEUMUvz ==> HFQKQWC", "IOQhMSL ==> cOkGjCk", "JdNCyvm ==> wDRiZeU", "JnghKXu ==> PaCdMzD", "KvHISAk ==> URsWtYv", "LHqTbTl ==> XKZLhlq", "LgdABXg ==> imOPASl", "MUhLALy ==> PaCdMzD", "MekGrSr ==> RxnIImz", "OhSLnzj ==> zDvGDBA", "PSoPnXM ==> XvLbaYh", "PVTFvWd ==> bqZqnEN", "PhDwhoZ ==> imOPASl", "PldQTqx ==> sNUUrZZ", "QwmgMLI ==> RxnIImz", "RCaRWgE ==> rcqtACt", "SQgjqWh ==> NfDWwsS", "SZrzMvD ==> rcqtACt", "TBTUCQE ==> DhAhTKK", "UhlExLS ==> ZHBkbdH", "UohqmCm ==> easUhji", "VaHaMNN ==> cOkGjCk", "VosdiJU ==> ITJKNIC", "VteGTwp ==> phMtXkc", "WIWskKZ ==> NslTUMw", "WajxnHS ==> IAFYAoM", "WgzznNR ==> RxnIImz", "WtFbdgn ==> URPPwIZ", "YLdRmnn ==> zDvGDBA", "ZEIhmGj ==> URsWtYv", "ZNexdAG ==> NfDWwsS", "ZRzBJlj ==> eTPYUrY", "aaJTKTM ==> zDvGDBA", "afZKTaL ==> eTPYUrY", "bAnQDVG ==> imOPASl", "babsVZj ==> XvLbaYh", "bienTTk ==> NslTUMw", "bpaJVaU ==> HFQKQWC", "cLGaYus ==> DhAhTKK", "cPKTlNk ==> NslTUMw", "cbCsqId ==> NfDWwsS", "cejHIcJ ==> wLyofyz", "cxVBfmM ==> HFQKQWC", "evmyyBa ==> XKZLhlq", "fKOWBmC ==> ITJKNIC", "fTliDHT ==> zDvGDBA", "gMogxGY ==> ElRcMPd", "gUTkgiu ==> imOPASl", "gjVpgWS ==> dHwrLnO", "guXfzQA ==> IAFYAoM", "hQIbPoM ==> HFQKQWC", "iDSCTbD ==> CDYJwHh", "iUQBPAQ ==> XvLbaYh", "icwYRym ==> dHwrLnO", "iuuWYpF ==> XKZLhlq", "jZaGIFp ==> CDYJwHh", "jibYrpX ==> ZHBkbdH", "jkLBuwt ==> wLyofyz", "kZHlqOh ==> cOkGjCk", "kZuVDLt ==> imOPASl", "keePnSQ ==> XKZLhlq", "koNrOMA ==> IAFYAoM", "lRjGFBg ==> phMtXkc", "lXngUdA ==> bqZqnEN", "lcRIOaj ==> bqZqnEN", "lmbypRx ==> URsWtYv", "loDZtiG ==> RxnIImz", "pBEpKTx ==> wLyofyz", "pNeZtuT ==> ITJKNIC", "pUYhQgr ==> CDYJwHh", "pYnLtTM ==> ZHBkbdH", "qFiLOuW ==> URPPwIZ", "qNdPfab ==> PaCdMzD", "qVVpXHl ==> cOkGjCk", "rDNhnhj ==> XvLbaYh", "sFkZpaa ==> zDvGDBA", "skzdgzq ==> HgWdMyo", "sxYrNom ==> phMtXkc", "tGWmHhL ==> PaCdMzD", "thblOzy ==> ZHBkbdH", "uGDoaba ==> NfDWwsS", "uQdHLFQ ==> DhAhTKK", "unIwMWL ==> dHwrLnO", "vBRYhSB ==> NslTUMw", "vNCiZhN ==> easUhji", "vwUKMqM ==> wLyofyz", "wCLFtlu ==> rcqtACt", "wIkPeih ==> wLyofyz", "wLrYeiM ==> XvLbaYh", "wYvVACb ==> PaCdMzD", "weVSPiO ==> XKZLhlq", "xCYHuUj ==> RxnIImz", "xNiELpU ==> phMtXkc", "xsdcmYT ==> CDYJwHh", "xxrWsUG ==> dHwrLnO", "yBUTyPG ==> IAFYAoM", "yPIsiEd ==> DhAhTKK", "ySUdLIH ==> IAFYAoM", "zPQrPbt ==> HFQKQWC"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> services = {"JXygyElj iTwHYREI LkmXyXMD YqWWXJcz pxZQNjao", "jQDLsgtk xIlBujIa", "RSRyuool ttypWIbu kEEAWpKc oIGALiCT FCRzhnVZ", "UQxqxNLD BUWCmwwY WBfvaLbc shLmCtuR ZYCEqXPX", "OjnnRTBP AdURiDKR sCkBVlJz pwSbRKXN cPUxiCEW", "lEDTtGFA fhLQJtdW qSlmzyXR ASpgwaCh DbYYJrRR", "kZtiELbi EKAsKPJP QbGnynNu bmfqNGdf TIKKpDzR", "akgqkIQW vhuFHKuU ofHpEiil UJGUliFv aOgQsCMF", "OEWXyBCA ADqGELJe", "xGGYAoBp JLFTgCrc AgowDsOU BJkNTexO UzqCwtet", "KklOPUJB lGRGAZmD eWLckvlk", "fToQtrXm NyxaKtJk DDdzqkdx xVxUsfaf", "uPxGKzyi", "YNlpjANs KorlAljV fMnljSfX xEHcVNij BgRAVguZ", "xGvCycKJ ImfjszAe WJONjeEL cKNgrVcy pmzynmjN", "erEvPvsG JSyBewvz dBWAMyTf ExZwxvkU", "nWGCkarP MsYhnHgJ vzsPXTIp oQpaQqHO", "fPvBPYBr RhjUjlyF gIgznefP XBLQxdcZ pUKOOsig", "IOduGnxM PtTWkBnZ lbGpYuhH ncGFWpHJ EVgpMMHn", "yuAmfGYM", "XVMHTdto kyKDkcas gaiBwwWK CFpUDsld OIxfMFLK", "alxQvfqk", "PlKgoScm cKILEwin", "aTvDUooB DxnkcjHx vqGutiws DwVxonkd IAJKGGPg", "yuxcHZJm RmJvAHfL IEcCsfEE", "cmPVNQhG bUFykXRh NBKTUeeh", "gVVGuncC upLbYrhk tKSfhwsO BjFecAPk RShmekkf", "NqmszPqX rspnPFqG RYquitNk VogIqrZC jOVupiKw", "pPAXOKrD ZLeniXPg RclwwQNJ QVXxFQpg", "XuEuELgn", "tfHAQpuD Vujjrmcu BPpgbBDk", "dXAaUqdM oUyRodRV PwhRraOE zJEDKlIc FhzHWhnN", "XHPQWDJT SFviXjqv MEcPHoZJ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ADqGELJe ==> OEWXyBCA", "ASpgwaCh ==> lEDTtGFA", "AdURiDKR ==> OjnnRTBP", "AgowDsOU ==> xGGYAoBp", "BJkNTexO ==> xGGYAoBp", "BPpgbBDk ==> tfHAQpuD", "BUWCmwwY ==> UQxqxNLD", "BgRAVguZ ==> YNlpjANs", "BjFecAPk ==> gVVGuncC", "CFpUDsld ==> XVMHTdto", "DDdzqkdx ==> fToQtrXm", "DbYYJrRR ==> lEDTtGFA", "DwVxonkd ==> aTvDUooB", "DxnkcjHx ==> aTvDUooB", "EKAsKPJP ==> kZtiELbi", "EVgpMMHn ==> IOduGnxM", "ExZwxvkU ==> erEvPvsG", "FCRzhnVZ ==> RSRyuool", "FhzHWhnN ==> dXAaUqdM", "IAJKGGPg ==> aTvDUooB", "IEcCsfEE ==> yuxcHZJm", "ImfjszAe ==> xGvCycKJ", "JLFTgCrc ==> xGGYAoBp", "JSyBewvz ==> erEvPvsG", "KorlAljV ==> YNlpjANs", "LkmXyXMD ==> JXygyElj", "MEcPHoZJ ==> XHPQWDJT", "MsYhnHgJ ==> nWGCkarP", "NBKTUeeh ==> cmPVNQhG", "NyxaKtJk ==> fToQtrXm", "OIxfMFLK ==> XVMHTdto", "PtTWkBnZ ==> IOduGnxM", "PwhRraOE ==> dXAaUqdM", "QVXxFQpg ==> pPAXOKrD", "QbGnynNu ==> kZtiELbi", "RShmekkf ==> gVVGuncC", "RYquitNk ==> NqmszPqX", "RclwwQNJ ==> pPAXOKrD", "RhjUjlyF ==> fPvBPYBr", "RmJvAHfL ==> yuxcHZJm", "SFviXjqv ==> XHPQWDJT", "TIKKpDzR ==> kZtiELbi", "UJGUliFv ==> akgqkIQW", "UzqCwtet ==> xGGYAoBp", "VogIqrZC ==> NqmszPqX", "Vujjrmcu ==> tfHAQpuD", "WBfvaLbc ==> UQxqxNLD", "WJONjeEL ==> xGvCycKJ", "XBLQxdcZ ==> fPvBPYBr", "YqWWXJcz ==> JXygyElj", "ZLeniXPg ==> pPAXOKrD", "ZYCEqXPX ==> UQxqxNLD", "aOgQsCMF ==> akgqkIQW", "bUFykXRh ==> cmPVNQhG", "bmfqNGdf ==> kZtiELbi", "cKILEwin ==> PlKgoScm", "cKNgrVcy ==> xGvCycKJ", "cPUxiCEW ==> OjnnRTBP", "dBWAMyTf ==> erEvPvsG", "eWLckvlk ==> KklOPUJB", "fMnljSfX ==> YNlpjANs", "fhLQJtdW ==> lEDTtGFA", "gIgznefP ==> fPvBPYBr", "gaiBwwWK ==> XVMHTdto", "iTwHYREI ==> JXygyElj", "jOVupiKw ==> NqmszPqX", "kEEAWpKc ==> RSRyuool", "kyKDkcas ==> XVMHTdto", "lGRGAZmD ==> KklOPUJB", "lbGpYuhH ==> IOduGnxM", "ncGFWpHJ ==> IOduGnxM", "oIGALiCT ==> RSRyuool", "oQpaQqHO ==> nWGCkarP", "oUyRodRV ==> dXAaUqdM", "ofHpEiil ==> akgqkIQW", "pUKOOsig ==> fPvBPYBr", "pmzynmjN ==> xGvCycKJ", "pwSbRKXN ==> OjnnRTBP", "pxZQNjao ==> JXygyElj", "qSlmzyXR ==> lEDTtGFA", "rspnPFqG ==> NqmszPqX", "sCkBVlJz ==> OjnnRTBP", "shLmCtuR ==> UQxqxNLD", "tKSfhwsO ==> gVVGuncC", "ttypWIbu ==> RSRyuool", "upLbYrhk ==> gVVGuncC", "vhuFHKuU ==> akgqkIQW", "vqGutiws ==> aTvDUooB", "vzsPXTIp ==> nWGCkarP", "xEHcVNij ==> YNlpjANs", "xIlBujIa ==> jQDLsgtk", "xVxUsfaf ==> fToQtrXm", "zJEDKlIc ==> dXAaUqdM"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> services = {"QchFz", "ZdKTS sOVUZ NcUpN mcqXP XUUPr RPsTB", "FHbRz dpoIK hYRjc RDPcc Jisgu wZUCJ vaQGX Vxghm", "CBsVt jsIlw dXkxZ hGVDH KKQFc pwnHQ gecwW anVXD", "ksFEG mBYje pilCC vRckL zQxIA fmqpC iXJGm FQBZz", "FlXoW mubqV aeLfF eNzFy AUXdb yVFNl", "fsbYH lHLjk HnmTP nafRq ggmcX ZhbRA VFJzy ssrXE", "Sfhhh", "pqXtL qGMhN", "pOfSh vbyhk", "EnVTB uQWMF Uzqxx ZFiIX ZGlOE xBvxL YZrDZ ovIWz", "TySJN izmwP uaLEg cxLNy prLbc QUZrT Aateu", "WoQdW", "rxwBz zdcrv seNvK HWzZD DfwLM ccOeo UzCNt UyGUn", "ebJsa nDHzx xZIuG cjVVl QbxRt MkBll", "ATDMB lXoEF", "tSugY kmJqR qmulQ LoILt GgQDM qnmmA TFAlC xdsQw", "GUALT", "iEhcT vYekB kVVfv cHVbR vZthQ ILtoo gPPou hEvLA", "SjddQ brmUg", "nUteU MIghA plLYr", "nmGMH", "KvrTq UAdix", "jfwxD IOLsX zudUC yAFyG ZhfGl", "pgTLT QxXEf fmKfD dlHKC ZMhkl PtQgX ROKIz", "PHUiY CcdEN dRqBC lhDmV TdfLg gtmOF KrKYj NFDba", "WjZQj LMdAw QBWQC HFyqJ", "ltLgg qHGwv FgxIW", "uhlrf ipXbI XeFlA", "YmBXU dTiER bMOCz", "srZab AFvBS", "srYzL lsRTN zWulP dTpeC johYN NGWYR RpfGV", "eRWQc OSKpV", "pZhVI hyICv DjQZQ OAWCE eDKrT JHjzR hKIwB", "chrRo UWuAU hiHYL DUrLQ zJzKS PuBiS pHuhL jodIC", "rKMmU hkVCk xRVbo MUJwO EpYaK uDTnZ pmepf hsIBZ", "zxBHh DQuRC MsKEr", "XTmnk TTieV WuUXz pCWSC", "fuIao OSFhd", "LhoFh bQesi eGbDc rAJeg apBMi HZDkv EmwRt uFcac", "mclBH"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AFvBS ==> srZab", "AUXdb ==> FlXoW", "Aateu ==> TySJN", "CcdEN ==> PHUiY", "DQuRC ==> zxBHh", "DUrLQ ==> chrRo", "DfwLM ==> rxwBz", "DjQZQ ==> pZhVI", "EmwRt ==> LhoFh", "EpYaK ==> rKMmU", "FQBZz ==> ksFEG", "FgxIW ==> ltLgg", "GgQDM ==> tSugY", "HFyqJ ==> WjZQj", "HWzZD ==> rxwBz", "HZDkv ==> LhoFh", "HnmTP ==> fsbYH", "ILtoo ==> iEhcT", "IOLsX ==> jfwxD", "JHjzR ==> pZhVI", "Jisgu ==> FHbRz", "KKQFc ==> CBsVt", "KrKYj ==> PHUiY", "LMdAw ==> WjZQj", "LoILt ==> tSugY", "MIghA ==> nUteU", "MUJwO ==> rKMmU", "MkBll ==> ebJsa", "MsKEr ==> zxBHh", "NFDba ==> PHUiY", "NGWYR ==> srYzL", "NcUpN ==> ZdKTS", "OAWCE ==> pZhVI", "OSFhd ==> fuIao", "OSKpV ==> eRWQc", "PtQgX ==> pgTLT", "PuBiS ==> chrRo", "QBWQC ==> WjZQj", "QUZrT ==> TySJN", "QbxRt ==> ebJsa", "QxXEf ==> pgTLT", "RDPcc ==> FHbRz", "ROKIz ==> pgTLT", "RPsTB ==> ZdKTS", "RpfGV ==> srYzL", "TFAlC ==> tSugY", "TTieV ==> XTmnk", "TdfLg ==> PHUiY", "UAdix ==> KvrTq", "UWuAU ==> chrRo", "UyGUn ==> rxwBz", "UzCNt ==> rxwBz", "Uzqxx ==> EnVTB", "VFJzy ==> fsbYH", "Vxghm ==> FHbRz", "WuUXz ==> XTmnk", "XUUPr ==> ZdKTS", "XeFlA ==> uhlrf", "YZrDZ ==> EnVTB", "ZFiIX ==> EnVTB", "ZGlOE ==> EnVTB", "ZMhkl ==> pgTLT", "ZhbRA ==> fsbYH", "ZhfGl ==> jfwxD", "aeLfF ==> FlXoW", "anVXD ==> CBsVt", "apBMi ==> LhoFh", "bMOCz ==> YmBXU", "bQesi ==> LhoFh", "brmUg ==> SjddQ", "cHVbR ==> iEhcT", "ccOeo ==> rxwBz", "cjVVl ==> ebJsa", "cxLNy ==> TySJN", "dRqBC ==> PHUiY", "dTiER ==> YmBXU", "dTpeC ==> srYzL", "dXkxZ ==> CBsVt", "dlHKC ==> pgTLT", "dpoIK ==> FHbRz", "eDKrT ==> pZhVI", "eGbDc ==> LhoFh", "eNzFy ==> FlXoW", "fmKfD ==> pgTLT", "fmqpC ==> ksFEG", "gPPou ==> iEhcT", "gecwW ==> CBsVt", "ggmcX ==> fsbYH", "gtmOF ==> PHUiY", "hEvLA ==> iEhcT", "hGVDH ==> CBsVt", "hKIwB ==> pZhVI", "hYRjc ==> FHbRz", "hiHYL ==> chrRo", "hkVCk ==> rKMmU", "hsIBZ ==> rKMmU", "hyICv ==> pZhVI", "iXJGm ==> ksFEG", "ipXbI ==> uhlrf", "izmwP ==> TySJN", "jodIC ==> chrRo", "johYN ==> srYzL", "jsIlw ==> CBsVt", "kVVfv ==> iEhcT", "kmJqR ==> tSugY", "lHLjk ==> fsbYH", "lXoEF ==> ATDMB", "lhDmV ==> PHUiY", "lsRTN ==> srYzL", "mBYje ==> ksFEG", "mcqXP ==> ZdKTS", "mubqV ==> FlXoW", "nDHzx ==> ebJsa", "nafRq ==> fsbYH", "ovIWz ==> EnVTB", "pCWSC ==> XTmnk", "pHuhL ==> chrRo", "pilCC ==> ksFEG", "plLYr ==> nUteU", "pmepf ==> rKMmU", "prLbc ==> TySJN", "pwnHQ ==> CBsVt", "qGMhN ==> pqXtL", "qHGwv ==> ltLgg", "qmulQ ==> tSugY", "qnmmA ==> tSugY", "rAJeg ==> LhoFh", "sOVUZ ==> ZdKTS", "seNvK ==> rxwBz", "ssrXE ==> fsbYH", "uDTnZ ==> rKMmU", "uFcac ==> LhoFh", "uQWMF ==> EnVTB", "uaLEg ==> TySJN", "vRckL ==> ksFEG", "vYekB ==> iEhcT", "vZthQ ==> iEhcT", "vaQGX ==> FHbRz", "vbyhk ==> pOfSh", "wZUCJ ==> FHbRz", "xBvxL ==> EnVTB", "xRVbo ==> rKMmU", "xZIuG ==> ebJsa", "xdsQw ==> tSugY", "yAFyG ==> jfwxD", "yVFNl ==> FlXoW", "zJzKS ==> chrRo", "zQxIA ==> ksFEG", "zWulP ==> srYzL", "zdcrv ==> rxwBz", "zudUC ==> jfwxD"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> services = {"WbtqdmiDfm CQJoZVKFxo WyERMAklvv BHJCSJIySW", "jNHZBNuiIV vgMAMpNWMB", "hXvWJJMioK LwFOvukdtS kvJYcJSagk YoYAcSlJoK", "qcuLWtXyVK wFThXngWXO YxGGsIRhhx lRAHYxFXkX", "hNgMVVarzU SGRxwwMcRv", "rBpDJxZdpC IrZkfpGWwS DqGDEvjLfp HjNYgbafEX", "kwqXgShGYD kSMAYpqRlp FPXKxUJPEL", "RadHNlzRrn KwvJipEnDz oMmudKklmo HPPYFjQasi", "AoPVmUnqYs rJMIpfOcYT jbnFhRyJYc LUaaAPSfgS", "YyWxUVlnrN EccLwsjTdA", "oETOgtiAuG", "VsPlwpvYYa gheNvDwULz VJpgxBrFIM PqCvfFvgJP", "OPGulBGzYr IznSPDfZau DytlBHyTsn xacKnHLYIc", "IpNPpuOEDC xICNNnWaZk UYCLdMkbDY lXwzfGPZYw", "QkTbgKjCky eAoYiRMtrr hxJojNgYHh VeOXPoJAbn", "OOrqpAfrol qyGLfLTCbE QvqFPQFmvp", "FWfrzPvtlM dazHKcIANb xxOBSAVBtg WoMUpwzCZL", "hoauBWgAkU iEGYDJpgHQ QcJfrvzwsA GSZxCsWMzS", "pIXenkbyGJ YdHKaGRPPw DtDkZJOnWu ZlCHEvvinq", "bOuuboQlSZ OhQIqureSb", "AFmRWmIMyb", "ctzkmBiKMK QlkeuVMzJI cqNzBFIZvq qfIyyvIUDo", "SXmnsEjmQe OXrogTltSJ nYrFjVpRSU VWlazYgzBg", "sBijUQLDkt RUPDmhzhwB HFSpVQDZTp USShPmWydg", "UwfTrRZwpy XOrwbimoMg", "lbObAyvKdC wFQTNVDDOH NfiRjxrlUK", "PFcmeUBIGu RQwvqRziif mRplnXNFmL ghiLOOoYPw", "NCVGIVPYcT CVGqWDZOvw QggMQJxHmU"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BHJCSJIySW ==> WbtqdmiDfm", "CQJoZVKFxo ==> WbtqdmiDfm", "CVGqWDZOvw ==> NCVGIVPYcT", "DqGDEvjLfp ==> rBpDJxZdpC", "DtDkZJOnWu ==> pIXenkbyGJ", "DytlBHyTsn ==> OPGulBGzYr", "EccLwsjTdA ==> YyWxUVlnrN", "FPXKxUJPEL ==> kwqXgShGYD", "GSZxCsWMzS ==> hoauBWgAkU", "HFSpVQDZTp ==> sBijUQLDkt", "HPPYFjQasi ==> RadHNlzRrn", "HjNYgbafEX ==> rBpDJxZdpC", "IrZkfpGWwS ==> rBpDJxZdpC", "IznSPDfZau ==> OPGulBGzYr", "KwvJipEnDz ==> RadHNlzRrn", "LUaaAPSfgS ==> AoPVmUnqYs", "LwFOvukdtS ==> hXvWJJMioK", "NfiRjxrlUK ==> lbObAyvKdC", "OXrogTltSJ ==> SXmnsEjmQe", "OhQIqureSb ==> bOuuboQlSZ", "PqCvfFvgJP ==> VsPlwpvYYa", "QcJfrvzwsA ==> hoauBWgAkU", "QggMQJxHmU ==> NCVGIVPYcT", "QlkeuVMzJI ==> ctzkmBiKMK", "QvqFPQFmvp ==> OOrqpAfrol", "RQwvqRziif ==> PFcmeUBIGu", "RUPDmhzhwB ==> sBijUQLDkt", "SGRxwwMcRv ==> hNgMVVarzU", "USShPmWydg ==> sBijUQLDkt", "UYCLdMkbDY ==> IpNPpuOEDC", "VJpgxBrFIM ==> VsPlwpvYYa", "VWlazYgzBg ==> SXmnsEjmQe", "VeOXPoJAbn ==> QkTbgKjCky", "WoMUpwzCZL ==> FWfrzPvtlM", "WyERMAklvv ==> WbtqdmiDfm", "XOrwbimoMg ==> UwfTrRZwpy", "YdHKaGRPPw ==> pIXenkbyGJ", "YoYAcSlJoK ==> hXvWJJMioK", "YxGGsIRhhx ==> qcuLWtXyVK", "ZlCHEvvinq ==> pIXenkbyGJ", "cqNzBFIZvq ==> ctzkmBiKMK", "dazHKcIANb ==> FWfrzPvtlM", "eAoYiRMtrr ==> QkTbgKjCky", "gheNvDwULz ==> VsPlwpvYYa", "ghiLOOoYPw ==> PFcmeUBIGu", "hxJojNgYHh ==> QkTbgKjCky", "iEGYDJpgHQ ==> hoauBWgAkU", "jbnFhRyJYc ==> AoPVmUnqYs", "kSMAYpqRlp ==> kwqXgShGYD", "kvJYcJSagk ==> hXvWJJMioK", "lRAHYxFXkX ==> qcuLWtXyVK", "lXwzfGPZYw ==> IpNPpuOEDC", "mRplnXNFmL ==> PFcmeUBIGu", "nYrFjVpRSU ==> SXmnsEjmQe", "oMmudKklmo ==> RadHNlzRrn", "qfIyyvIUDo ==> ctzkmBiKMK", "qyGLfLTCbE ==> OOrqpAfrol", "rJMIpfOcYT ==> AoPVmUnqYs", "vgMAMpNWMB ==> jNHZBNuiIV", "wFQTNVDDOH ==> lbObAyvKdC", "wFThXngWXO ==> qcuLWtXyVK", "xICNNnWaZk ==> IpNPpuOEDC", "xacKnHLYIc ==> OPGulBGzYr", "xxOBSAVBtg ==> FWfrzPvtlM"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> services = {"ydrzjyf MuXGTVz rDZijuP NUkhdzn", "HWpIBsJ jRmqxlB InxwCIn VCrUtGu RiRYLhy", "LjtdLwC", "GKzOYwo WanVNWO vOOowWS PDkxRNA sCCKTkK JFnyvxf", "FjuaOiW OxtDhUd vOmrmkA dHrYldf lLWfzfu", "ZFNURSr", "ZzOZSEu rCVVBlu ysLQPbj VVJjwjF", "asnVktU tczjMiC", "tNhAwIx", "xfhYkby IdwTLzD PxNiayx sKWmzrH qVzVbpF NDwedrf", "ZIvTDpF", "xWNpFWh CIvZLLn CZpPUqQ", "avHqWdx PmHmODT PuKPQFl GnfZFQD hICpkWn buCSxQE", "fMjCjpo HlNzvET tANXMgO csYfFuO rkvEwsG yqiEFqT", "OfNwtRG kEKxQgi", "leydyOY facdKvk KckBTuz GjazBOo pWgRYhS SaaRirk", "oUIKnWc BmAdkHT uoHxaqE fzgQwrZ SLITbTD LAaOtYF", "darGMGL MErXbAn SgxRNAk", "xiPmngz wlggNSg NieDbtL DWiQbbm VuRBwoW wSDqEfK", "ZfByyan AsTaWyv NGIjSJD aeNQapD CYnMVnH wurfafN", "cdAMwBe ZeEpxYv XWBBqmP"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AsTaWyv ==> ZfByyan", "BmAdkHT ==> oUIKnWc", "CIvZLLn ==> xWNpFWh", "CYnMVnH ==> ZfByyan", "CZpPUqQ ==> xWNpFWh", "DWiQbbm ==> xiPmngz", "GjazBOo ==> leydyOY", "GnfZFQD ==> avHqWdx", "HlNzvET ==> fMjCjpo", "IdwTLzD ==> xfhYkby", "InxwCIn ==> HWpIBsJ", "JFnyvxf ==> GKzOYwo", "KckBTuz ==> leydyOY", "LAaOtYF ==> oUIKnWc", "MErXbAn ==> darGMGL", "MuXGTVz ==> ydrzjyf", "NDwedrf ==> xfhYkby", "NGIjSJD ==> ZfByyan", "NUkhdzn ==> ydrzjyf", "NieDbtL ==> xiPmngz", "OxtDhUd ==> FjuaOiW", "PDkxRNA ==> GKzOYwo", "PmHmODT ==> avHqWdx", "PuKPQFl ==> avHqWdx", "PxNiayx ==> xfhYkby", "RiRYLhy ==> HWpIBsJ", "SLITbTD ==> oUIKnWc", "SaaRirk ==> leydyOY", "SgxRNAk ==> darGMGL", "VCrUtGu ==> HWpIBsJ", "VVJjwjF ==> ZzOZSEu", "VuRBwoW ==> xiPmngz", "WanVNWO ==> GKzOYwo", "XWBBqmP ==> cdAMwBe", "ZeEpxYv ==> cdAMwBe", "aeNQapD ==> ZfByyan", "buCSxQE ==> avHqWdx", "csYfFuO ==> fMjCjpo", "dHrYldf ==> FjuaOiW", "facdKvk ==> leydyOY", "fzgQwrZ ==> oUIKnWc", "hICpkWn ==> avHqWdx", "jRmqxlB ==> HWpIBsJ", "kEKxQgi ==> OfNwtRG", "lLWfzfu ==> FjuaOiW", "pWgRYhS ==> leydyOY", "qVzVbpF ==> xfhYkby", "rCVVBlu ==> ZzOZSEu", "rDZijuP ==> ydrzjyf", "rkvEwsG ==> fMjCjpo", "sCCKTkK ==> GKzOYwo", "sKWmzrH ==> xfhYkby", "tANXMgO ==> fMjCjpo", "tczjMiC ==> asnVktU", "uoHxaqE ==> oUIKnWc", "vOOowWS ==> GKzOYwo", "vOmrmkA ==> FjuaOiW", "wSDqEfK ==> xiPmngz", "wlggNSg ==> xiPmngz", "wurfafN ==> ZfByyan", "yqiEFqT ==> fMjCjpo", "ysLQPbj ==> ZzOZSEu"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> services = {"yiujGlp", "dzJIisR gVrREuN RSjZuvs dFjzGTQ tyzyNGv ncGYdJt", "ZZOmxRJ zpIIJnd xejviaJ tKoRatL Kenqhrf", "fHCxgPP KAnhVkU", "sRQpPxL EcJzCEu wyNfdFm DHXNsxI XsrTLHa ibfTeaw", "iHQocsa dncQYiv NbBhbxK FAYdsiP cRznOOe igroNZy", "dmbICSn BqhdpoO YPEyFhQ yhewCHA fZMmnWN eraVKxG", "HNRvOvf hGgNkWS", "AGEpSlu AmDJgWI RYVdDey gAlbaTZ Ouviubr QKscDKQ", "kdhCdwA LxFOHLh VAZwSNX RjCefTk", "edjAhte UkFGeBv sDeILbh prgsccT ILiVZaM EtzemyN", "bVRbwoU cSRpmMh rqcpPGr aAdWmRm wOtkluq", "QcgaYcg VyNBeXJ", "EcaXdBF ykCDkxi WkNzdWB", "GNIEHoY FbiDaMD uNeQpBH JvdegBl pmtQAzY XbrqCix", "fDivLcT", "kkmsZEU XcePrYQ kVnpjQU aswwxmO tcszqXM VMmcKqx", "QBquvTl QCAUQbU XshzWJM KHvkNFO dDRWxXl OwOUbzL", "MhVgHAH yXHAheS", "VyPTuXh", "PEJgUWm gBLvdOY woksHvO UoDhaJH NmYXcro", "rgbnben NixTiHK ftjEBqI mnDaSOG", "KIGwLlH mlqUyPv hsimawO QcFiMYi rQckqaC QMYPyep", "jsrHuEr tXDdXcS AnSnIiZ", "HzsaNwx JmouiOv dcBBeJs", "hwpYPHG dmGRbFo FMgZVxz", "FrpBqLH cxcfmHt BKCaqLB bfsLbbk rKUINve nvzTsFM", "zpGLDNs AsjnGFO WuLkxJN rCZAZYc"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AmDJgWI ==> AGEpSlu", "AnSnIiZ ==> jsrHuEr", "AsjnGFO ==> zpGLDNs", "BKCaqLB ==> FrpBqLH", "BqhdpoO ==> dmbICSn", "DHXNsxI ==> sRQpPxL", "EcJzCEu ==> sRQpPxL", "EtzemyN ==> edjAhte", "FAYdsiP ==> iHQocsa", "FMgZVxz ==> hwpYPHG", "FbiDaMD ==> GNIEHoY", "ILiVZaM ==> edjAhte", "JmouiOv ==> HzsaNwx", "JvdegBl ==> GNIEHoY", "KAnhVkU ==> fHCxgPP", "KHvkNFO ==> QBquvTl", "Kenqhrf ==> ZZOmxRJ", "LxFOHLh ==> kdhCdwA", "NbBhbxK ==> iHQocsa", "NixTiHK ==> rgbnben", "NmYXcro ==> PEJgUWm", "Ouviubr ==> AGEpSlu", "OwOUbzL ==> QBquvTl", "QCAUQbU ==> QBquvTl", "QKscDKQ ==> AGEpSlu", "QMYPyep ==> KIGwLlH", "QcFiMYi ==> KIGwLlH", "RSjZuvs ==> dzJIisR", "RYVdDey ==> AGEpSlu", "RjCefTk ==> kdhCdwA", "UkFGeBv ==> edjAhte", "UoDhaJH ==> PEJgUWm", "VAZwSNX ==> kdhCdwA", "VMmcKqx ==> kkmsZEU", "VyNBeXJ ==> QcgaYcg", "WkNzdWB ==> EcaXdBF", "WuLkxJN ==> zpGLDNs", "XbrqCix ==> GNIEHoY", "XcePrYQ ==> kkmsZEU", "XshzWJM ==> QBquvTl", "XsrTLHa ==> sRQpPxL", "YPEyFhQ ==> dmbICSn", "aAdWmRm ==> bVRbwoU", "aswwxmO ==> kkmsZEU", "bfsLbbk ==> FrpBqLH", "cRznOOe ==> iHQocsa", "cSRpmMh ==> bVRbwoU", "cxcfmHt ==> FrpBqLH", "dDRWxXl ==> QBquvTl", "dFjzGTQ ==> dzJIisR", "dcBBeJs ==> HzsaNwx", "dmGRbFo ==> hwpYPHG", "dncQYiv ==> iHQocsa", "eraVKxG ==> dmbICSn", "fZMmnWN ==> dmbICSn", "ftjEBqI ==> rgbnben", "gAlbaTZ ==> AGEpSlu", "gBLvdOY ==> PEJgUWm", "gVrREuN ==> dzJIisR", "hGgNkWS ==> HNRvOvf", "hsimawO ==> KIGwLlH", "ibfTeaw ==> sRQpPxL", "igroNZy ==> iHQocsa", "kVnpjQU ==> kkmsZEU", "mlqUyPv ==> KIGwLlH", "mnDaSOG ==> rgbnben", "ncGYdJt ==> dzJIisR", "nvzTsFM ==> FrpBqLH", "pmtQAzY ==> GNIEHoY", "prgsccT ==> edjAhte", "rCZAZYc ==> zpGLDNs", "rKUINve ==> FrpBqLH", "rQckqaC ==> KIGwLlH", "rqcpPGr ==> bVRbwoU", "sDeILbh ==> edjAhte", "tKoRatL ==> ZZOmxRJ", "tXDdXcS ==> jsrHuEr", "tcszqXM ==> kkmsZEU", "tyzyNGv ==> dzJIisR", "uNeQpBH ==> GNIEHoY", "wOtkluq ==> bVRbwoU", "woksHvO ==> PEJgUWm", "wyNfdFm ==> sRQpPxL", "xejviaJ ==> ZZOmxRJ", "yXHAheS ==> MhVgHAH", "yhewCHA ==> dmbICSn", "ykCDkxi ==> EcaXdBF", "zpIIJnd ==> ZZOmxRJ"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> services = {"zBkHTBYHVW QpYSibEyXL jHedtoqgph bEaDsatqYX", "wHcjJwDIwd PJOqRDfftL iOHaGWlYgM ZQiylBbqwa", "itzkKUlYGt VWYmUFvYyO xBvAyxxhyx TsPtgBlnoy", "sPOBQeecVe RtCBxiuSAr", "oBEWSrLXUb xLuDocPyQs tVeQpOnYHo BQrqNgDiqD", "oOLnPByotH rwAjzPIVPD dkhliUBSaF QEBDyPhSEv", "oXzkplXMsd pRgtgFfpux EsPNxOpIMt pZOHhjFMSa", "fFFDuOKCoN HEmHPcEGmQ SuMnudOBNz mztXOCDqwr", "oFuvnnPbjz xpiLrYdOap uosKfQdSpY DaUlBkvIAE", "RhvmwyTdov bmXFYuSdvE cilsGQPAaN", "YqWvyfAuhj cfFJapAAgl frYLOdgHEK ifAceiTdNz", "TsxvfFxugV unXMnsdxcA IwRgEeuVBB yDNQCWaYjU", "MiPtDeozzS idNjloGoCx BdzDMsGkwt", "QvFdtYNdAi SDeUjeMpEz hSMeMnBxJG", "YUTMajCFVi AoJHXJiOqj JwrQmNDkyb VbThDOtnWu", "BgwoHeRapu gRFUuLfmNy YvLIFSPKXJ ReSsVdqHtY", "kZLZRKnwMa LAtjFFWqlb", "KZgWnhwamV", "iykGampoDC onurWpAuVR", "vVeIUrqHLL", "HrXTRONQgt VyaGJXNAna bpdlLRnacj OIWsLKVbIV", "JmTRXXHDAA MbSEjVPlxt zHyqNiLIUM QtHLhbTyDh", "RraEhpnBYK QUdpBMQhpX VuHuVlbXnx ilBViFCgji", "kvvtaGmXdJ xTjrJbSwiS"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AoJHXJiOqj ==> YUTMajCFVi", "BQrqNgDiqD ==> oBEWSrLXUb", "BdzDMsGkwt ==> MiPtDeozzS", "DaUlBkvIAE ==> oFuvnnPbjz", "EsPNxOpIMt ==> oXzkplXMsd", "HEmHPcEGmQ ==> fFFDuOKCoN", "IwRgEeuVBB ==> TsxvfFxugV", "JwrQmNDkyb ==> YUTMajCFVi", "LAtjFFWqlb ==> kZLZRKnwMa", "MbSEjVPlxt ==> JmTRXXHDAA", "OIWsLKVbIV ==> HrXTRONQgt", "PJOqRDfftL ==> wHcjJwDIwd", "QEBDyPhSEv ==> oOLnPByotH", "QUdpBMQhpX ==> RraEhpnBYK", "QpYSibEyXL ==> zBkHTBYHVW", "QtHLhbTyDh ==> JmTRXXHDAA", "ReSsVdqHtY ==> BgwoHeRapu", "RtCBxiuSAr ==> sPOBQeecVe", "SDeUjeMpEz ==> QvFdtYNdAi", "SuMnudOBNz ==> fFFDuOKCoN", "TsPtgBlnoy ==> itzkKUlYGt", "VWYmUFvYyO ==> itzkKUlYGt", "VbThDOtnWu ==> YUTMajCFVi", "VuHuVlbXnx ==> RraEhpnBYK", "VyaGJXNAna ==> HrXTRONQgt", "YvLIFSPKXJ ==> BgwoHeRapu", "ZQiylBbqwa ==> wHcjJwDIwd", "bEaDsatqYX ==> zBkHTBYHVW", "bmXFYuSdvE ==> RhvmwyTdov", "bpdlLRnacj ==> HrXTRONQgt", "cfFJapAAgl ==> YqWvyfAuhj", "cilsGQPAaN ==> RhvmwyTdov", "dkhliUBSaF ==> oOLnPByotH", "frYLOdgHEK ==> YqWvyfAuhj", "gRFUuLfmNy ==> BgwoHeRapu", "hSMeMnBxJG ==> QvFdtYNdAi", "iOHaGWlYgM ==> wHcjJwDIwd", "idNjloGoCx ==> MiPtDeozzS", "ifAceiTdNz ==> YqWvyfAuhj", "ilBViFCgji ==> RraEhpnBYK", "jHedtoqgph ==> zBkHTBYHVW", "mztXOCDqwr ==> fFFDuOKCoN", "onurWpAuVR ==> iykGampoDC", "pRgtgFfpux ==> oXzkplXMsd", "pZOHhjFMSa ==> oXzkplXMsd", "rwAjzPIVPD ==> oOLnPByotH", "tVeQpOnYHo ==> oBEWSrLXUb", "unXMnsdxcA ==> TsxvfFxugV", "uosKfQdSpY ==> oFuvnnPbjz", "xBvAyxxhyx ==> itzkKUlYGt", "xLuDocPyQs ==> oBEWSrLXUb", "xTjrJbSwiS ==> kvvtaGmXdJ", "xpiLrYdOap ==> oFuvnnPbjz", "yDNQCWaYjU ==> TsxvfFxugV", "zHyqNiLIUM ==> JmTRXXHDAA"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> services = {"guTJNee fzVHsCD ZvCiNgO OvpsGzT MuYuYoj qkQoaum", "gAsnmCq QtjodMG BdVUIDN", "yUTLxKp WOMccYb YiuZJDf IsonneM iOVSRfr vdpVXPS", "guDuUor eoiWXTi DyfPkGe QmoYxFD kXEGFUg zATVigc", "wfiLpJJ CcJVoig CUWZQFE ZVFoVSI odTkyTf yLJBOxX", "VIFQqvl", "akQCbOE qMSAOKn kWSMhod CTtPMmI ZYgFhMY qMiUIeX", "DjfafeL gJucseF UpnBTiW cpGJGke SoeKFeo XLXENus", "jExspeQ AOysBXF", "KpeDrUQ", "mQmsVqP nMzCQzX ETzrKsI TNFRhQz hXvBuQQ qEYHkEB", "eMLqmVN BHIcHws PZegXIn", "BSlfvcV eBiYIrk xBRBjny oATMcrG", "IDeJjnf TTDhowg", "WJVahWO XWBtZLK XVPiwTq YlVlSQa QTZqwBF OOSlQtz", "LhbalbQ", "VsoGFJX", "wYpiQBk gXKoJAQ WYSrnrP", "fFwydPB JPtZGDO wmzGdrh FDKpOod zxdJurp bQcWysW", "KlUDIjv", "pIzSQWz QMZRpHN uTGvuTg LusjYuP MlYjQrv", "WsvWOIW UumLfbw PPsfMVG rdzxxYO hfCXizz uMocRiJ", "hsZlffV FfxzmYk VINzBSf iinYxxC YjQlgjU fCjIuMT"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AOysBXF ==> jExspeQ", "BHIcHws ==> eMLqmVN", "BdVUIDN ==> gAsnmCq", "CTtPMmI ==> akQCbOE", "CUWZQFE ==> wfiLpJJ", "CcJVoig ==> wfiLpJJ", "DyfPkGe ==> guDuUor", "ETzrKsI ==> mQmsVqP", "FDKpOod ==> fFwydPB", "FfxzmYk ==> hsZlffV", "IsonneM ==> yUTLxKp", "JPtZGDO ==> fFwydPB", "LusjYuP ==> pIzSQWz", "MlYjQrv ==> pIzSQWz", "MuYuYoj ==> guTJNee", "OOSlQtz ==> WJVahWO", "OvpsGzT ==> guTJNee", "PPsfMVG ==> WsvWOIW", "PZegXIn ==> eMLqmVN", "QMZRpHN ==> pIzSQWz", "QTZqwBF ==> WJVahWO", "QmoYxFD ==> guDuUor", "QtjodMG ==> gAsnmCq", "SoeKFeo ==> DjfafeL", "TNFRhQz ==> mQmsVqP", "TTDhowg ==> IDeJjnf", "UpnBTiW ==> DjfafeL", "UumLfbw ==> WsvWOIW", "VINzBSf ==> hsZlffV", "WOMccYb ==> yUTLxKp", "WYSrnrP ==> wYpiQBk", "XLXENus ==> DjfafeL", "XVPiwTq ==> WJVahWO", "XWBtZLK ==> WJVahWO", "YiuZJDf ==> yUTLxKp", "YjQlgjU ==> hsZlffV", "YlVlSQa ==> WJVahWO", "ZVFoVSI ==> wfiLpJJ", "ZYgFhMY ==> akQCbOE", "ZvCiNgO ==> guTJNee", "bQcWysW ==> fFwydPB", "cpGJGke ==> DjfafeL", "eBiYIrk ==> BSlfvcV", "eoiWXTi ==> guDuUor", "fCjIuMT ==> hsZlffV", "fzVHsCD ==> guTJNee", "gJucseF ==> DjfafeL", "gXKoJAQ ==> wYpiQBk", "hXvBuQQ ==> mQmsVqP", "hfCXizz ==> WsvWOIW", "iOVSRfr ==> yUTLxKp", "iinYxxC ==> hsZlffV", "kWSMhod ==> akQCbOE", "kXEGFUg ==> guDuUor", "nMzCQzX ==> mQmsVqP", "oATMcrG ==> BSlfvcV", "odTkyTf ==> wfiLpJJ", "qEYHkEB ==> mQmsVqP", "qMSAOKn ==> akQCbOE", "qMiUIeX ==> akQCbOE", "qkQoaum ==> guTJNee", "rdzxxYO ==> WsvWOIW", "uMocRiJ ==> WsvWOIW", "uTGvuTg ==> pIzSQWz", "vdpVXPS ==> yUTLxKp", "wmzGdrh ==> fFwydPB", "xBRBjny ==> BSlfvcV", "yLJBOxX ==> wfiLpJJ", "zATVigc ==> guDuUor", "zxdJurp ==> fFwydPB"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> services = {"wBaJaN FmHUQR vMynSV GYJBRM MwOjGF aEnhAz orzQgj", "ooDBgt", "TQVnzz pkDxdl TmBeGD oqCjAD vuAkdI lsofEA NOsTNL", "mncJCZ", "hirehO", "VhPWLc CXrqFS kpHqMF KwZuKg oSntdR OnUGaR", "odMUcv WMpnZm ijXIkl OSKuyT DhRhAj OGInEc hOnstH", "hIbRZd YiUBas IxIZrm WIdlhF ueBGED aHpjnk FcFrQH", "pNYXao OuMSTW IoEQGS Cwvqjf AmyteI lPuKgh KZougl", "FtaySW", "MIHftw nobvEU RYOzzh", "RRvzlD VRufgf nEVRNZ yKjdWK iUeNkm Rxyonp pIYRiw", "SXuxpC kEcBzD", "PjqHwI TqqawV JMrFZf TBwBuf"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AmyteI ==> pNYXao", "CXrqFS ==> VhPWLc", "Cwvqjf ==> pNYXao", "DhRhAj ==> odMUcv", "FcFrQH ==> hIbRZd", "FmHUQR ==> wBaJaN", "GYJBRM ==> wBaJaN", "IoEQGS ==> pNYXao", "IxIZrm ==> hIbRZd", "JMrFZf ==> PjqHwI", "KZougl ==> pNYXao", "KwZuKg ==> VhPWLc", "MwOjGF ==> wBaJaN", "NOsTNL ==> TQVnzz", "OGInEc ==> odMUcv", "OSKuyT ==> odMUcv", "OnUGaR ==> VhPWLc", "OuMSTW ==> pNYXao", "RYOzzh ==> MIHftw", "Rxyonp ==> RRvzlD", "TBwBuf ==> PjqHwI", "TmBeGD ==> TQVnzz", "TqqawV ==> PjqHwI", "VRufgf ==> RRvzlD", "WIdlhF ==> hIbRZd", "WMpnZm ==> odMUcv", "YiUBas ==> hIbRZd", "aEnhAz ==> wBaJaN", "aHpjnk ==> hIbRZd", "hOnstH ==> odMUcv", "iUeNkm ==> RRvzlD", "ijXIkl ==> odMUcv", "kEcBzD ==> SXuxpC", "kpHqMF ==> VhPWLc", "lPuKgh ==> pNYXao", "lsofEA ==> TQVnzz", "nEVRNZ ==> RRvzlD", "nobvEU ==> MIHftw", "oSntdR ==> VhPWLc", "oqCjAD ==> TQVnzz", "orzQgj ==> wBaJaN", "pIYRiw ==> RRvzlD", "pkDxdl ==> TQVnzz", "ueBGED ==> hIbRZd", "vMynSV ==> wBaJaN", "vuAkdI ==> TQVnzz", "yKjdWK ==> RRvzlD"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> services = {"wbYp CzaB ycPr gNod ThCJ PeDq TPmv", "dCRX ETbv xzDO jULI vEcw knyQ", "PnHo", "SEyj", "Tquw ZavC VZac DXIF Kzsc xHQg fKOQ tWft frHH pdbU", "ABFN JSJq BSgv", "mcbB sPix GWQE AqXm TiMY GyMs pUfw", "HCVj iWWW vWzd QTKT afPa JVDt lzNc VSEN tnJT SpVe", "qpwk kEmy Fdyt"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AqXm ==> mcbB", "BSgv ==> ABFN", "CzaB ==> wbYp", "DXIF ==> Tquw", "ETbv ==> dCRX", "Fdyt ==> qpwk", "GWQE ==> mcbB", "GyMs ==> mcbB", "JSJq ==> ABFN", "JVDt ==> HCVj", "Kzsc ==> Tquw", "PeDq ==> wbYp", "QTKT ==> HCVj", "SpVe ==> HCVj", "TPmv ==> wbYp", "ThCJ ==> wbYp", "TiMY ==> mcbB", "VSEN ==> HCVj", "VZac ==> Tquw", "ZavC ==> Tquw", "afPa ==> HCVj", "fKOQ ==> Tquw", "frHH ==> Tquw", "gNod ==> wbYp", "iWWW ==> HCVj", "jULI ==> dCRX", "kEmy ==> qpwk", "knyQ ==> dCRX", "lzNc ==> HCVj", "pUfw ==> mcbB", "pdbU ==> Tquw", "sPix ==> mcbB", "tWft ==> Tquw", "tnJT ==> HCVj", "vEcw ==> dCRX", "vWzd ==> HCVj", "xHQg ==> Tquw", "xzDO ==> dCRX", "ycPr ==> wbYp"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> services = {"sS yt lx of", "sl ET ub Qw", "QU kk Dd", "NC iM wn", "fK EQ", "Ks GB Dj dj CY Kw do AA Ke eI IA Hx yD Hn pR jH", "OS Vc fD VM gC QC xY", "HY WI zq MN zA sH", "zO jg", "Na bT", "pp nk Zq tp CR", "UO cm ux Yc ZJ Bs", "oY dB oe Gm", "nm ZL", "tI qB Pb eT NP Kz qG nE RK Xh Mh KL kW pT YK mh", "Tt", "Qx", "nj TA mD vj GZ NG YP cn Rq lE wT FO aa aS Ob hR", "Ud Bt fk pT Wu sl", "vu hh", "ST oo nq fy", "or Yw Jc ia yK nw gj UT dN bl Qv", "Uc dL da UM RB jF ni", "jG vw uC", "sZ PZ Vh vo eX", "zE", "US", "om WS iE Va zh vy qC Wn Rh dL", "NY tV aZ Mi Ov vu iO", "BN tV nV Am Ut KN", "UW HN XG GV yz", "WA nS VE uY", "HR hH Cx xP", "dM AQ vr MU CY TA xp Ls Ax Oi Ua", "lL MW", "ck KE ZD Om bj"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA ==> Ks", "AQ ==> dM", "Am ==> BN", "Ax ==> dM", "Bs ==> UO", "Bt ==> Ud", "CR ==> pp", "CY ==> Ks, dM", "Cx ==> HR", "Dd ==> QU", "Dj ==> Ks", "EQ ==> fK", "ET ==> sl", "FO ==> nj", "GB ==> Ks", "GV ==> UW", "GZ ==> nj", "Gm ==> oY", "HN ==> UW", "Hn ==> Ks", "Hx ==> Ks", "IA ==> Ks", "Jc ==> or", "KE ==> ck", "KL ==> tI", "KN ==> BN", "Ke ==> Ks", "Kw ==> Ks", "Kz ==> tI", "Ls ==> dM", "MN ==> HY", "MU ==> dM", "MW ==> lL", "Mh ==> tI", "Mi ==> NY", "NG ==> nj", "NP ==> tI", "Ob ==> nj", "Oi ==> dM", "Om ==> ck", "Ov ==> NY", "PZ ==> sZ", "Pb ==> tI", "QC ==> OS", "Qv ==> or", "Qw ==> sl", "RB ==> Uc", "RK ==> tI", "Rh ==> om", "Rq ==> nj", "TA ==> dM, nj", "UM ==> Uc", "UT ==> or", "Ua ==> dM", "Ut ==> BN", "VE ==> WA", "VM ==> OS", "Va ==> om", "Vc ==> OS", "Vh ==> sZ", "WI ==> HY", "WS ==> om", "Wn ==> om", "Wu ==> Ud", "XG ==> UW", "Xh ==> tI", "YK ==> tI", "YP ==> nj", "Yc ==> UO", "Yw ==> or", "ZD ==> ck", "ZJ ==> UO", "ZL ==> nm", "Zq ==> pp", "aS ==> nj", "aZ ==> NY", "aa ==> nj", "bT ==> Na", "bj ==> ck", "bl ==> or", "cm ==> UO", "cn ==> nj", "dB ==> oY", "dL ==> Uc, om", "dN ==> or", "da ==> Uc", "dj ==> Ks", "do ==> Ks", "eI ==> Ks", "eT ==> tI", "eX ==> sZ", "fD ==> OS", "fk ==> Ud", "fy ==> ST", "gC ==> OS", "gj ==> or", "hH ==> HR", "hR ==> nj", "hh ==> vu", "iE ==> om", "iM ==> NC", "iO ==> NY", "ia ==> or", "jF ==> Uc", "jH ==> Ks", "jg ==> zO", "kW ==> tI", "kk ==> QU", "lE ==> nj", "lx ==> sS", "mD ==> nj", "mh ==> tI", "nE ==> tI", "nS ==> WA", "nV ==> BN", "ni ==> Uc", "nk ==> pp", "nq ==> ST", "nw ==> or", "oe ==> oY", "of ==> sS", "oo ==> ST", "pR ==> Ks", "pT ==> Ud, tI", "qB ==> tI", "qC ==> om", "qG ==> tI", "sH ==> HY", "sl ==> Ud", "tV ==> BN, NY", "tp ==> pp", "uC ==> jG", "uY ==> WA", "ub ==> sl", "ux ==> UO", "vj ==> nj", "vo ==> sZ", "vr ==> dM", "vu ==> NY", "vw ==> jG", "vy ==> om", "wT ==> nj", "wn ==> NC", "xP ==> HR", "xY ==> OS", "xp ==> dM", "yD ==> Ks", "yK ==> or", "yt ==> sS", "yz ==> UW", "zA ==> HY", "zh ==> om", "zq ==> HY"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> services = {"nMxGxlpg SWPcBXtu MnlwqAsj fjwzhXFI", "ortvnZJp WYZoMBQR DWjMnLwr AItUbffq thjAbxxp", "HWIuZBxB dYAuavyU KSBDMThn CbmEZpNj", "VxOgZbue kkWAjkIT nDRnbKGq gulhyFvO", "IYRShubD lRiJplBw tOMKXlkV DrovCsrA", "FZOsYMAv pUkqnCIW jHaYtGBE ULVmJaos wwihnXNV", "KQYkilJy", "wfenYYFM", "IyPKOxXg SVBDorxk irJgDvoL dELwHRmY RiCjtCkZ", "ypbKZUxF pjRvscQn ulSCPtOK QebusnkB nzCePPFd", "coAhYCLX XvXhDYnR LxbWdIXa gLjtzUhj KbSsceNJ", "aOBpKebA", "eIGaRTMu UpLhcPVK", "zKZTXzrQ wqPlekMG"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AItUbffq ==> ortvnZJp", "CbmEZpNj ==> HWIuZBxB", "DWjMnLwr ==> ortvnZJp", "DrovCsrA ==> IYRShubD", "KSBDMThn ==> HWIuZBxB", "KbSsceNJ ==> coAhYCLX", "LxbWdIXa ==> coAhYCLX", "MnlwqAsj ==> nMxGxlpg", "QebusnkB ==> ypbKZUxF", "RiCjtCkZ ==> IyPKOxXg", "SVBDorxk ==> IyPKOxXg", "SWPcBXtu ==> nMxGxlpg", "ULVmJaos ==> FZOsYMAv", "UpLhcPVK ==> eIGaRTMu", "WYZoMBQR ==> ortvnZJp", "XvXhDYnR ==> coAhYCLX", "dELwHRmY ==> IyPKOxXg", "dYAuavyU ==> HWIuZBxB", "fjwzhXFI ==> nMxGxlpg", "gLjtzUhj ==> coAhYCLX", "gulhyFvO ==> VxOgZbue", "irJgDvoL ==> IyPKOxXg", "jHaYtGBE ==> FZOsYMAv", "kkWAjkIT ==> VxOgZbue", "lRiJplBw ==> IYRShubD", "nDRnbKGq ==> VxOgZbue", "nzCePPFd ==> ypbKZUxF", "pUkqnCIW ==> FZOsYMAv", "pjRvscQn ==> ypbKZUxF", "tOMKXlkV ==> IYRShubD", "thjAbxxp ==> ortvnZJp", "ulSCPtOK ==> ypbKZUxF", "wqPlekMG ==> zKZTXzrQ", "wwihnXNV ==> FZOsYMAv"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> services = {"BEKaxuPn sxQFnQTi dBlhSptB UDpgqpDG EtQuxogc", "FjTJutfl xOfIMQRE lNrUwRDv QihvaYTw", "UvoSWQac euwEyeoe gmNLWzNS", "WyaYxbCY mlljcekO DOqbJePl wwIlHVai noWAfjvg", "PbXBitQJ NlwTzROM irUpDNMa AIhStaVc KgeNooVe", "RNgLdoaq ATsCCuTR ezmHsrvB KNwuIQpb nokrBvdQ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AIhStaVc ==> PbXBitQJ", "ATsCCuTR ==> RNgLdoaq", "DOqbJePl ==> WyaYxbCY", "EtQuxogc ==> BEKaxuPn", "KNwuIQpb ==> RNgLdoaq", "KgeNooVe ==> PbXBitQJ", "NlwTzROM ==> PbXBitQJ", "QihvaYTw ==> FjTJutfl", "UDpgqpDG ==> BEKaxuPn", "dBlhSptB ==> BEKaxuPn", "euwEyeoe ==> UvoSWQac", "ezmHsrvB ==> RNgLdoaq", "gmNLWzNS ==> UvoSWQac", "irUpDNMa ==> PbXBitQJ", "lNrUwRDv ==> FjTJutfl", "mlljcekO ==> WyaYxbCY", "noWAfjvg ==> WyaYxbCY", "nokrBvdQ ==> RNgLdoaq", "sxQFnQTi ==> BEKaxuPn", "wwIlHVai ==> WyaYxbCY", "xOfIMQRE ==> FjTJutfl"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> services = {"sMCh tnrH GhNB VtTP", "xEQU UAFO", "cULj fKTi dfdB EAPg PWyg EawC RXpV NiOq Nclc", "WHWO nNpj tphb", "pUUl wsOu rMog wlXY", "mVfq TJNF NKom HoCr", "RFHi dAOr TFuK", "Cdnw MgaX euNG jPjG", "zsyU bBSh OwRf", "IvZC", "ADMn", "GHTE mdsN", "Vyto BCEG MXiB", "gOaN yyJW bDQa xHAd Jcvq Rznb FhzZ eSTk", "nVit UzlG Oibo BEIt", "qJWQ Ihuy PNpX OdSK", "OdRO tIyg", "rPhM ArCi evoA pXHw XfNU nyWF YgwT VfTc fVOK", "NcKc", "vERE HPsH", "gJpD vKpJ Xhrl qRZF Cmxf Rxjd MwoC oGtL jeIa", "MqpX LmrA qSdN fxai xOWl", "jSzZ Tpqc KjmB SvpO iIMX YyqW", "pPwG iwdI", "zJBj ntFP Jaxj qWYW DfSZ LqNC HHyu YFoY rZsy jYul", "Qohj PZzI", "qggz qXMy UOUf BktL aBJc biOe zfSo", "ohcz cWeZ eDFB", "xNpL pJen qGWE", "tYIl vEOo IZnp Koka kZul mtXc", "dYxV", "XCvg xQXq", "uZUl", "Lxwb WsHV hRac", "ruLd AyRB AZPs KAUj XBWE wssr", "yJGS TiwK", "bQSj uUuZ IlJI YmQr DiTG eTuJ mkgo GnNo", "Fnkt ehVW GxBB", "mmiY IYUW aNpG WtVy ywbp PKaa KihP"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AZPs ==> ruLd", "ArCi ==> rPhM", "AyRB ==> ruLd", "BCEG ==> Vyto", "BEIt ==> nVit", "BktL ==> qggz", "Cmxf ==> gJpD", "DfSZ ==> zJBj", "DiTG ==> bQSj", "EAPg ==> cULj", "EawC ==> cULj", "FhzZ ==> gOaN", "GhNB ==> sMCh", "GnNo ==> bQSj", "GxBB ==> Fnkt", "HHyu ==> zJBj", "HPsH ==> vERE", "HoCr ==> mVfq", "IYUW ==> mmiY", "IZnp ==> tYIl", "Ihuy ==> qJWQ", "IlJI ==> bQSj", "Jaxj ==> zJBj", "Jcvq ==> gOaN", "KAUj ==> ruLd", "KihP ==> mmiY", "KjmB ==> jSzZ", "Koka ==> tYIl", "LmrA ==> MqpX", "LqNC ==> zJBj", "MXiB ==> Vyto", "MgaX ==> Cdnw", "MwoC ==> gJpD", "NKom ==> mVfq", "Nclc ==> cULj", "NiOq ==> cULj", "OdSK ==> qJWQ", "Oibo ==> nVit", "OwRf ==> zsyU", "PKaa ==> mmiY", "PNpX ==> qJWQ", "PWyg ==> cULj", "PZzI ==> Qohj", "RXpV ==> cULj", "Rxjd ==> gJpD", "Rznb ==> gOaN", "SvpO ==> jSzZ", "TFuK ==> RFHi", "TJNF ==> mVfq", "TiwK ==> yJGS", "Tpqc ==> jSzZ", "UAFO ==> xEQU", "UOUf ==> qggz", "UzlG ==> nVit", "VfTc ==> rPhM", "VtTP ==> sMCh", "WsHV ==> Lxwb", "WtVy ==> mmiY", "XBWE ==> ruLd", "XfNU ==> rPhM", "Xhrl ==> gJpD", "YFoY ==> zJBj", "YgwT ==> rPhM", "YmQr ==> bQSj", "YyqW ==> jSzZ", "aBJc ==> qggz", "aNpG ==> mmiY", "bBSh ==> zsyU", "bDQa ==> gOaN", "biOe ==> qggz", "cWeZ ==> ohcz", "dAOr ==> RFHi", "dfdB ==> cULj", "eDFB ==> ohcz", "eSTk ==> gOaN", "eTuJ ==> bQSj", "ehVW ==> Fnkt", "euNG ==> Cdnw", "evoA ==> rPhM", "fKTi ==> cULj", "fVOK ==> rPhM", "fxai ==> MqpX", "hRac ==> Lxwb", "iIMX ==> jSzZ", "iwdI ==> pPwG", "jPjG ==> Cdnw", "jYul ==> zJBj", "jeIa ==> gJpD", "kZul ==> tYIl", "mdsN ==> GHTE", "mkgo ==> bQSj", "mtXc ==> tYIl", "nNpj ==> WHWO", "ntFP ==> zJBj", "nyWF ==> rPhM", "oGtL ==> gJpD", "pJen ==> xNpL", "pXHw ==> rPhM", "qGWE ==> xNpL", "qRZF ==> gJpD", "qSdN ==> MqpX", "qWYW ==> zJBj", "qXMy ==> qggz", "rMog ==> pUUl", "rZsy ==> zJBj", "tIyg ==> OdRO", "tnrH ==> sMCh", "tphb ==> WHWO", "uUuZ ==> bQSj", "vEOo ==> tYIl", "vKpJ ==> gJpD", "wlXY ==> pUUl", "wsOu ==> pUUl", "wssr ==> ruLd", "xHAd ==> gOaN", "xOWl ==> MqpX", "xQXq ==> XCvg", "ywbp ==> mmiY", "yyJW ==> gOaN", "zfSo ==> qggz"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> services = {"NtgBP wALmu gPeqi", "blNHH zqSyJ nYbIo gIjZN dMsxE gijoc ltLwF", "EPxAf AxLpQ WbMrK Ldbjx", "XDjLE wCWbH slHTG BwqsN uiNlS NsvCf FXcCS jlZkC", "WDDai pLSui", "pQSHi jtGWS OfkEx VhXnY", "bYnBX umuZS voaCZ nsSqK", "XkIgV dhxsZ", "LwpEi FdOBf baRsu AnfAk ImyPk bEiwd Igegq", "seoDf", "Djbpu", "KFcZI msIkV MBvql mTcug", "XetUD amThK sdgKl lgqzY uhFCS LdmeK", "sZTeN BqqZf JxFDq IzVUD", "eQuHC LeyAw jWXud", "gTwDJ ViBoH", "wTVJR XFyxv LcIrQ", "BRMQf jMvtz IvkwY wehVj EIcoU itLfu", "rAAat XKvMt EdpdO lHaxp iJcKb", "BclEa mFmid Zjaeg rywVl DwZkc GVrHU QrYRF GpXBu", "WRlaV BNRFK yjEAe oSbUx IrMjk IOdzI SpWlq", "GCDff oPNUe aowXl ILfPN VZKww eCmYR vrndG EKvap", "MXDku RPLZD EuZhU rseok xmpHl cSVAO SaIAc", "rgjvw KHGXg DBjEW OzndY baNlH ESCEt Kukhf", "ikldQ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AnfAk ==> LwpEi", "AxLpQ ==> EPxAf", "BNRFK ==> WRlaV", "BqqZf ==> sZTeN", "BwqsN ==> XDjLE", "DBjEW ==> rgjvw", "DwZkc ==> BclEa", "EIcoU ==> BRMQf", "EKvap ==> GCDff", "ESCEt ==> rgjvw", "EdpdO ==> rAAat", "EuZhU ==> MXDku", "FXcCS ==> XDjLE", "FdOBf ==> LwpEi", "GVrHU ==> BclEa", "GpXBu ==> BclEa", "ILfPN ==> GCDff", "IOdzI ==> WRlaV", "Igegq ==> LwpEi", "ImyPk ==> LwpEi", "IrMjk ==> WRlaV", "IvkwY ==> BRMQf", "IzVUD ==> sZTeN", "JxFDq ==> sZTeN", "KHGXg ==> rgjvw", "Kukhf ==> rgjvw", "LcIrQ ==> wTVJR", "Ldbjx ==> EPxAf", "LdmeK ==> XetUD", "LeyAw ==> eQuHC", "MBvql ==> KFcZI", "NsvCf ==> XDjLE", "OfkEx ==> pQSHi", "OzndY ==> rgjvw", "QrYRF ==> BclEa", "RPLZD ==> MXDku", "SaIAc ==> MXDku", "SpWlq ==> WRlaV", "VZKww ==> GCDff", "VhXnY ==> pQSHi", "ViBoH ==> gTwDJ", "WbMrK ==> EPxAf", "XFyxv ==> wTVJR", "XKvMt ==> rAAat", "Zjaeg ==> BclEa", "amThK ==> XetUD", "aowXl ==> GCDff", "bEiwd ==> LwpEi", "baNlH ==> rgjvw", "baRsu ==> LwpEi", "cSVAO ==> MXDku", "dMsxE ==> blNHH", "dhxsZ ==> XkIgV", "eCmYR ==> GCDff", "gIjZN ==> blNHH", "gPeqi ==> NtgBP", "gijoc ==> blNHH", "iJcKb ==> rAAat", "itLfu ==> BRMQf", "jMvtz ==> BRMQf", "jWXud ==> eQuHC", "jlZkC ==> XDjLE", "jtGWS ==> pQSHi", "lHaxp ==> rAAat", "lgqzY ==> XetUD", "ltLwF ==> blNHH", "mFmid ==> BclEa", "mTcug ==> KFcZI", "msIkV ==> KFcZI", "nYbIo ==> blNHH", "nsSqK ==> bYnBX", "oPNUe ==> GCDff", "oSbUx ==> WRlaV", "pLSui ==> WDDai", "rseok ==> MXDku", "rywVl ==> BclEa", "sdgKl ==> XetUD", "slHTG ==> XDjLE", "uhFCS ==> XetUD", "uiNlS ==> XDjLE", "umuZS ==> bYnBX", "voaCZ ==> bYnBX", "vrndG ==> GCDff", "wALmu ==> NtgBP", "wCWbH ==> XDjLE", "wehVj ==> BRMQf", "xmpHl ==> MXDku", "yjEAe ==> WRlaV", "zqSyJ ==> blNHH"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> services = {"nk Go", "gm cR Rs HS Vk pV Ex", "Jj em XB WR tn zK MX tg", "YU re", "Rp kI nO Tw", "iI EK", "UP Qb yD", "Nx Cn rU qJ", "TA iY Am jT Rb TD lp Te Hr pA", "en wc ul", "Ib lU ji sY jq zq Jl uU", "pK iA", "wi bA Jr yz jN RQ TV cV BX tS", "sE Uo", "LK", "Dq SP Fx bS", "ck Zj Zf", "RD kU vs KT yx XV Kc xO Ro Zn GD lQ", "Jw DG nk", "wD", "yS fr ZQ XT ZU iA xF", "Hk nV ZL gH lv CW HL FO yc go pS Ed mS tK Zs RK fv", "mY Zu yZ pO ty Yi", "eD jl bw ve we", "eQ Vh VC", "dQ vz vQ Fz EL Pe db pm dA xB Sw hl Pk ap Sy", "bt OA dz Ze HG KM XB", "xo", "Iv Vx iu QL TC xY", "Ak RR Bc gf Br Wy Qb na LK", "XR ZV lG GE fK dW yh mQ", "dd sm gR Rw Vq Ex CU uc Pw eO NG MP Cf sI Lw XS kq", "yA kW Vq Xr Vf", "cN Ei jw bi UE Ut If", "BV Nk BC SA", "jQ Qn Zl pF dD su qq Hx DU yp Yy uO HS PR GD aS vG", "LP Go jW AC", "LV iR ye Rv At", "xe vr MD YT gu gJ Gw pg lH WW gS ke tQ wN EH ZE Aa", "xx hi jl Oq tb Lz qf nr", "fs", "zG no eN HO la Px bJ Kb Ho oW Cx zf", "MR xV aK HG EJ Nn bE"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AC ==> LP", "Aa ==> xe", "Am ==> TA", "At ==> LV", "BC ==> BV", "BX ==> wi", "Bc ==> Ak", "Br ==> Ak", "CU ==> dd", "CW ==> Hk", "Cf ==> dd", "Cn ==> Nx", "Cx ==> zG", "DG ==> Jw", "DU ==> jQ", "EH ==> xe", "EJ ==> MR", "EK ==> iI", "EL ==> dQ", "Ed ==> Hk", "Ei ==> cN", "Ex ==> dd, gm", "FO ==> Hk", "Fx ==> Dq", "Fz ==> dQ", "GD ==> RD, jQ", "GE ==> XR", "Go ==> LP, nk", "Gw ==> xe", "HG ==> MR, bt", "HL ==> Hk", "HO ==> zG", "HS ==> gm, jQ", "Ho ==> zG", "Hr ==> TA", "Hx ==> jQ", "If ==> cN", "Jl ==> Ib", "Jr ==> wi", "KM ==> bt", "KT ==> RD", "Kb ==> zG", "Kc ==> RD", "LK ==> Ak", "Lw ==> dd", "Lz ==> xx", "MD ==> xe", "MP ==> dd", "MX ==> Jj", "NG ==> dd", "Nk ==> BV", "Nn ==> MR", "OA ==> bt", "Oq ==> xx", "PR ==> jQ", "Pe ==> dQ", "Pk ==> dQ", "Pw ==> dd", "Px ==> zG", "QL ==> Iv", "Qb ==> Ak, UP", "Qn ==> jQ", "RK ==> Hk", "RQ ==> wi", "RR ==> Ak", "Rb ==> TA", "Ro ==> RD", "Rs ==> gm", "Rv ==> LV", "Rw ==> dd", "SA ==> BV", "SP ==> Dq", "Sw ==> dQ", "Sy ==> dQ", "TC ==> Iv", "TD ==> TA", "TV ==> wi", "Te ==> TA", "Tw ==> Rp", "UE ==> cN", "Uo ==> sE", "Ut ==> cN", "VC ==> eQ", "Vf ==> yA", "Vh ==> eQ", "Vk ==> gm", "Vq ==> dd, yA", "Vx ==> Iv", "WR ==> Jj", "WW ==> xe", "Wy ==> Ak", "XB ==> Jj, bt", "XS ==> dd", "XT ==> yS", "XV ==> RD", "Xr ==> yA", "YT ==> xe", "Yi ==> mY", "Yy ==> jQ", "ZE ==> xe", "ZL ==> Hk", "ZQ ==> yS", "ZU ==> yS", "ZV ==> XR", "Ze ==> bt", "Zf ==> ck", "Zj ==> ck", "Zl ==> jQ", "Zn ==> RD", "Zs ==> Hk", "Zu ==> mY", "aK ==> MR", "aS ==> jQ", "ap ==> dQ", "bA ==> wi", "bE ==> MR", "bJ ==> zG", "bS ==> Dq", "bi ==> cN", "bw ==> eD", "cR ==> gm", "cV ==> wi", "dA ==> dQ", "dD ==> jQ", "dW ==> XR", "db ==> dQ", "dz ==> bt", "eN ==> zG", "eO ==> dd", "em ==> Jj", "fK ==> XR", "fr ==> yS", "fv ==> Hk", "gH ==> Hk", "gJ ==> xe", "gR ==> dd", "gS ==> xe", "gf ==> Ak", "go ==> Hk", "gu ==> xe", "hi ==> xx", "hl ==> dQ", "iA ==> pK, yS", "iR ==> LV", "iY ==> TA", "iu ==> Iv", "jN ==> wi", "jT ==> TA", "jW ==> LP", "ji ==> Ib", "jl ==> eD, xx", "jq ==> Ib", "jw ==> cN", "kI ==> Rp", "kU ==> RD", "kW ==> yA", "ke ==> xe", "kq ==> dd", "lG ==> XR", "lH ==> xe", "lQ ==> RD", "lU ==> Ib", "la ==> zG", "lp ==> TA", "lv ==> Hk", "mQ ==> XR", "mS ==> Hk", "nO ==> Rp", "nV ==> Hk", "na ==> Ak", "nk ==> Jw", "no ==> zG", "nr ==> xx", "oW ==> zG", "pA ==> TA", "pF ==> jQ", "pO ==> mY", "pS ==> Hk", "pV ==> gm", "pg ==> xe", "pm ==> dQ", "qJ ==> Nx", "qf ==> xx", "qq ==> jQ", "rU ==> Nx", "re ==> YU", "sI ==> dd", "sY ==> Ib", "sm ==> dd", "su ==> jQ", "tK ==> Hk", "tQ ==> xe", "tS ==> wi", "tb ==> xx", "tg ==> Jj", "tn ==> Jj", "ty ==> mY", "uO ==> jQ", "uU ==> Ib", "uc ==> dd", "ul ==> en", "vG ==> jQ", "vQ ==> dQ", "ve ==> eD", "vr ==> xe", "vs ==> RD", "vz ==> dQ", "wN ==> xe", "wc ==> en", "we ==> eD", "xB ==> dQ", "xF ==> yS", "xO ==> RD", "xV ==> MR", "xY ==> Iv", "yD ==> UP", "yZ ==> mY", "yc ==> Hk", "ye ==> LV", "yh ==> XR", "yp ==> jQ", "yx ==> RD", "yz ==> wi", "zK ==> Jj", "zf ==> zG", "zq ==> Ib"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> services = {"jMn RmG HTh htG Dqb", "amH gAv gYV rCU", "FrQ nip CMc qmL zog noy HsC KHP wLe dFc", "uRp CxC LkU FyZ RFl kou QuD uti", "eio", "yXR jUI", "dQD yhi YYK", "iRB KCu WKU LFr", "YeK WxD CQX", "pta MZP ioU Ses gqS", "Lit kmD wnB Zgq vRl wJQ iGa NXF kAM vgy", "JAE qdZ Gnm Wqe mVt nic ndZ uTA tYj lIq yTW jkp", "qsi EHY", "JZR IEh Mtz btI", "gJm", "zLE vwd", "JBb QcF mtX", "Gaa pYA FZY JdQ qPi fbl SaJ", "bwv eDW Iyh HxG", "BSm TRp Xtq Rjo pky xEv uOb EQi Gll uJE", "nwB aaS", "cpo MbG", "DEq PJp oWw kRo mLj Qrx PFD JJX bRT GgN jKx SAJ", "Bch pCs zrB mUr HJV Kzj", "Zyb Xfg lMV KMg oTi okI", "uPC iBS fGQ"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CMc ==> FrQ", "CQX ==> YeK", "CxC ==> uRp", "Dqb ==> jMn", "EHY ==> qsi", "EQi ==> BSm", "FZY ==> Gaa", "FyZ ==> uRp", "GgN ==> DEq", "Gll ==> BSm", "Gnm ==> JAE", "HJV ==> Bch", "HTh ==> jMn", "HsC ==> FrQ", "HxG ==> bwv", "IEh ==> JZR", "Iyh ==> bwv", "JJX ==> DEq", "JdQ ==> Gaa", "KCu ==> iRB", "KHP ==> FrQ", "KMg ==> Zyb", "Kzj ==> Bch", "LFr ==> iRB", "LkU ==> uRp", "MZP ==> pta", "MbG ==> cpo", "Mtz ==> JZR", "NXF ==> Lit", "PFD ==> DEq", "PJp ==> DEq", "QcF ==> JBb", "Qrx ==> DEq", "QuD ==> uRp", "RFl ==> uRp", "Rjo ==> BSm", "RmG ==> jMn", "SAJ ==> DEq", "SaJ ==> Gaa", "Ses ==> pta", "TRp ==> BSm", "WKU ==> iRB", "Wqe ==> JAE", "WxD ==> YeK", "Xfg ==> Zyb", "Xtq ==> BSm", "YYK ==> dQD", "Zgq ==> Lit", "aaS ==> nwB", "bRT ==> DEq", "btI ==> JZR", "dFc ==> FrQ", "eDW ==> bwv", "fGQ ==> uPC", "fbl ==> Gaa", "gAv ==> amH", "gYV ==> amH", "gqS ==> pta", "htG ==> jMn", "iBS ==> uPC", "iGa ==> Lit", "ioU ==> pta", "jKx ==> DEq", "jUI ==> yXR", "jkp ==> JAE", "kAM ==> Lit", "kRo ==> DEq", "kmD ==> Lit", "kou ==> uRp", "lIq ==> JAE", "lMV ==> Zyb", "mLj ==> DEq", "mUr ==> Bch", "mVt ==> JAE", "mtX ==> JBb", "ndZ ==> JAE", "nic ==> JAE", "nip ==> FrQ", "noy ==> FrQ", "oTi ==> Zyb", "oWw ==> DEq", "okI ==> Zyb", "pCs ==> Bch", "pYA ==> Gaa", "pky ==> BSm", "qPi ==> Gaa", "qdZ ==> JAE", "qmL ==> FrQ", "rCU ==> amH", "tYj ==> JAE", "uJE ==> BSm", "uOb ==> BSm", "uTA ==> JAE", "uti ==> uRp", "vRl ==> Lit", "vgy ==> Lit", "vwd ==> zLE", "wJQ ==> Lit", "wLe ==> FrQ", "wnB ==> Lit", "xEv ==> BSm", "yTW ==> JAE", "yhi ==> dQD", "zog ==> FrQ", "zrB ==> Bch"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> services = {"oCKkbozBc shFjwbhRc xbfTCshhB PSvfTxEdf igvySGZEz", "iFgNtVSDh IHlmUksIH gfckzsuLs WRTYHbaCQ ZcLiEgqpe", "cjpQSLUAO", "zBkiapoBU", "RTHwzquWE xWJOrGXXk", "ImKWChaQf usxhdeOcs SxPpMZdVG KKQNjCYrz mIIgHDEQe", "fjrgldErq ugkUBHhql ikzLJbRJK", "RdDIFtKEl HoObPWMml uQsYAZtoH jsGfzhRsY KogWjslDA", "CIeIUwcDS uNjGKwCdw jYaCihdjB xuoTYbJkR CrigVCvue", "ddFANYkzg LOllGxEXT", "HnFujOZiR DLxdKUIye", "nbHROJKhl", "XzYjikipD xBEjAzhJQ JrCbmYbFU MHNlhkKhc apHvTZdqc", "DriPqpuCt szIgyGhiS JgIIcOKwb ykvgMdmoy hQOCTCPIL", "WYOlCmRaZ wihMMiwsc XsuSrXEBM iaOmktvCW cRyGlCddy"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CrigVCvue ==> CIeIUwcDS", "DLxdKUIye ==> HnFujOZiR", "HoObPWMml ==> RdDIFtKEl", "IHlmUksIH ==> iFgNtVSDh", "JgIIcOKwb ==> DriPqpuCt", "JrCbmYbFU ==> XzYjikipD", "KKQNjCYrz ==> ImKWChaQf", "KogWjslDA ==> RdDIFtKEl", "LOllGxEXT ==> ddFANYkzg", "MHNlhkKhc ==> XzYjikipD", "PSvfTxEdf ==> oCKkbozBc", "SxPpMZdVG ==> ImKWChaQf", "WRTYHbaCQ ==> iFgNtVSDh", "XsuSrXEBM ==> WYOlCmRaZ", "ZcLiEgqpe ==> iFgNtVSDh", "apHvTZdqc ==> XzYjikipD", "cRyGlCddy ==> WYOlCmRaZ", "gfckzsuLs ==> iFgNtVSDh", "hQOCTCPIL ==> DriPqpuCt", "iaOmktvCW ==> WYOlCmRaZ", "igvySGZEz ==> oCKkbozBc", "ikzLJbRJK ==> fjrgldErq", "jYaCihdjB ==> CIeIUwcDS", "jsGfzhRsY ==> RdDIFtKEl", "mIIgHDEQe ==> ImKWChaQf", "shFjwbhRc ==> oCKkbozBc", "szIgyGhiS ==> DriPqpuCt", "uNjGKwCdw ==> CIeIUwcDS", "uQsYAZtoH ==> RdDIFtKEl", "ugkUBHhql ==> fjrgldErq", "usxhdeOcs ==> ImKWChaQf", "wihMMiwsc ==> WYOlCmRaZ", "xBEjAzhJQ ==> XzYjikipD", "xWJOrGXXk ==> RTHwzquWE", "xbfTCshhB ==> oCKkbozBc", "xuoTYbJkR ==> CIeIUwcDS", "ykvgMdmoy ==> DriPqpuCt"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> services = {"RVgPVIANh RjPBVGlqC InufyrtlK WjgaKfMNU WkZUMOLcd", "dZdmBgcFY qAAJpELzd nQJpzypkm aIzpyXRbl ihGvXjpDE", "PYEIUQNeD QkgMdqFsM EdTFscroA gQRSzjZEh mZETvGzYq", "EOZzkQBxp BFbBvTCaE pPkmYpcDX NTTqRmieY uvfSzyasc", "BfrJVEnRi", "opzdozRGN TqzXiSCoj OpxkAabjW SHLtGLwtV mfgPmShYJ", "xNBxXQhkc", "rSKtYUkUA aZYjSzIBD BfBmGGcsX haAzoujzD UFrYcpjfl", "CBnoHExJT heyABpnUj npoMWKJBK naGICpMCi SIpnEdDEX", "WzjzjVgMT AfrHtTJOc", "krcrBQPsL XhjWimGKj DGzUFDgNH aevelINec eDzfnctQe", "wvkPxJwIa", "HvbzABYmi BOwdmZWXX qRSRDMVzs AGwLbyQrN MJnsrXEWE", "hFmjKSyCI", "ddZOfgtnA NKiJsPMqO LeiVHUxHM eCMlLSVxq", "XGykeXISb OHcMLmVOI bzecVrxcG BuxCEtHSm FdXtDfRXq", "zUXXSValT pOIHIllTx IBmUexIfh", "WbBunYwzY", "SPYyYRoMQ", "GinutgxDz OMDXEBXVQ IpKpGwOco EKIrmOSmC", "hrUwJajeP QOYpoBFKs LZexpZlVi qfQpwIiib pJwceJvjP", "dhskyZNTX bHKZuKFKX IDNSSVZHI NSJaxIwIy uQnMOCeYt", "XCniWACeB UZFAyLSiO", "nuUaaIneG YSmtLYitQ", "VTaZRiwyj", "NdNpQqIBM NBVgIQayu gjzVHyauG YQfVKZCpW MdjULstgj", "MHcwIlgMv eAyAyPIfk xIfUaANaD", "wBtTdUISB", "yZsPUCABh", "BPhPqUnkF pctDqgHQG koSWBSJcO VtHLIROfR TJDHMWlLj", "HEhwURyMC msonpgtSi OHdbTrpFB JVwiWzkqY bvEIahDqX", "wJsKWvzMv AfYOtgGCD WtArYbftf hZpApHhhp LmhYvLSmt", "lxSbjQhus SZUHydGaP zaWgaDfQK vbNgbxmBy", "MYLCgGSom gfhIGsduM kjkgwCNJK JXfYHMAbh pQBOqzcIE", "DJOOCnIfh PQNBWUHhG vofwJDVlU NcYrkxlCQ BBJDeyKmc", "voZVixOTV", "OklUQurgA LOCoCGdnR DjRTgSPlP WtENyHkrm raugTTgAg", "LNhMbnYHG WGqRMpfpU", "ANaitZRum BcJiPbbbq XlYXYWYBA rLzQEWKOK xoJvOoqvA", "ytUXcXmYt qocsFGbRK XBezQGndw HdYnhACOR tlVKwkUKj", "XGFmsNBAI UwqYpQfnX NSYtLNVFd", "LPZlKbazH JajwYSOHY lMQpggaiy jmJtstqzC hkOijhxji", "mlvNPZiUF OpBXkUdbU RyiOMEYSL KSCEBoocN", "BHeHbyKYr LaTriGsKi qVWIgbdRo HDMYrHoPz yXZUuLfaA"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGwLbyQrN ==> HvbzABYmi", "AfYOtgGCD ==> wJsKWvzMv", "AfrHtTJOc ==> WzjzjVgMT", "BBJDeyKmc ==> DJOOCnIfh", "BFbBvTCaE ==> EOZzkQBxp", "BOwdmZWXX ==> HvbzABYmi", "BcJiPbbbq ==> ANaitZRum", "BfBmGGcsX ==> rSKtYUkUA", "BuxCEtHSm ==> XGykeXISb", "DGzUFDgNH ==> krcrBQPsL", "DjRTgSPlP ==> OklUQurgA", "EKIrmOSmC ==> GinutgxDz", "EdTFscroA ==> PYEIUQNeD", "FdXtDfRXq ==> XGykeXISb", "HDMYrHoPz ==> BHeHbyKYr", "HdYnhACOR ==> ytUXcXmYt", "IBmUexIfh ==> zUXXSValT", "IDNSSVZHI ==> dhskyZNTX", "InufyrtlK ==> RVgPVIANh", "IpKpGwOco ==> GinutgxDz", "JVwiWzkqY ==> HEhwURyMC", "JXfYHMAbh ==> MYLCgGSom", "JajwYSOHY ==> LPZlKbazH", "KSCEBoocN ==> mlvNPZiUF", "LOCoCGdnR ==> OklUQurgA", "LZexpZlVi ==> hrUwJajeP", "LaTriGsKi ==> BHeHbyKYr", "LeiVHUxHM ==> ddZOfgtnA", "LmhYvLSmt ==> wJsKWvzMv", "MJnsrXEWE ==> HvbzABYmi", "MdjULstgj ==> NdNpQqIBM", "NBVgIQayu ==> NdNpQqIBM", "NKiJsPMqO ==> ddZOfgtnA", "NSJaxIwIy ==> dhskyZNTX", "NSYtLNVFd ==> XGFmsNBAI", "NTTqRmieY ==> EOZzkQBxp", "NcYrkxlCQ ==> DJOOCnIfh", "OHcMLmVOI ==> XGykeXISb", "OHdbTrpFB ==> HEhwURyMC", "OMDXEBXVQ ==> GinutgxDz", "OpBXkUdbU ==> mlvNPZiUF", "OpxkAabjW ==> opzdozRGN", "PQNBWUHhG ==> DJOOCnIfh", "QOYpoBFKs ==> hrUwJajeP", "QkgMdqFsM ==> PYEIUQNeD", "RjPBVGlqC ==> RVgPVIANh", "RyiOMEYSL ==> mlvNPZiUF", "SHLtGLwtV ==> opzdozRGN", "SIpnEdDEX ==> CBnoHExJT", "SZUHydGaP ==> lxSbjQhus", "TJDHMWlLj ==> BPhPqUnkF", "TqzXiSCoj ==> opzdozRGN", "UFrYcpjfl ==> rSKtYUkUA", "UZFAyLSiO ==> XCniWACeB", "UwqYpQfnX ==> XGFmsNBAI", "VtHLIROfR ==> BPhPqUnkF", "WGqRMpfpU ==> LNhMbnYHG", "WjgaKfMNU ==> RVgPVIANh", "WkZUMOLcd ==> RVgPVIANh", "WtArYbftf ==> wJsKWvzMv", "WtENyHkrm ==> OklUQurgA", "XBezQGndw ==> ytUXcXmYt", "XhjWimGKj ==> krcrBQPsL", "XlYXYWYBA ==> ANaitZRum", "YQfVKZCpW ==> NdNpQqIBM", "YSmtLYitQ ==> nuUaaIneG", "aIzpyXRbl ==> dZdmBgcFY", "aZYjSzIBD ==> rSKtYUkUA", "aevelINec ==> krcrBQPsL", "bHKZuKFKX ==> dhskyZNTX", "bvEIahDqX ==> HEhwURyMC", "bzecVrxcG ==> XGykeXISb", "eAyAyPIfk ==> MHcwIlgMv", "eCMlLSVxq ==> ddZOfgtnA", "eDzfnctQe ==> krcrBQPsL", "gQRSzjZEh ==> PYEIUQNeD", "gfhIGsduM ==> MYLCgGSom", "gjzVHyauG ==> NdNpQqIBM", "hZpApHhhp ==> wJsKWvzMv", "haAzoujzD ==> rSKtYUkUA", "heyABpnUj ==> CBnoHExJT", "hkOijhxji ==> LPZlKbazH", "ihGvXjpDE ==> dZdmBgcFY", "jmJtstqzC ==> LPZlKbazH", "kjkgwCNJK ==> MYLCgGSom", "koSWBSJcO ==> BPhPqUnkF", "lMQpggaiy ==> LPZlKbazH", "mZETvGzYq ==> PYEIUQNeD", "mfgPmShYJ ==> opzdozRGN", "msonpgtSi ==> HEhwURyMC", "nQJpzypkm ==> dZdmBgcFY", "naGICpMCi ==> CBnoHExJT", "npoMWKJBK ==> CBnoHExJT", "pJwceJvjP ==> hrUwJajeP", "pOIHIllTx ==> zUXXSValT", "pPkmYpcDX ==> EOZzkQBxp", "pQBOqzcIE ==> MYLCgGSom", "pctDqgHQG ==> BPhPqUnkF", "qAAJpELzd ==> dZdmBgcFY", "qRSRDMVzs ==> HvbzABYmi", "qVWIgbdRo ==> BHeHbyKYr", "qfQpwIiib ==> hrUwJajeP", "qocsFGbRK ==> ytUXcXmYt", "rLzQEWKOK ==> ANaitZRum", "raugTTgAg ==> OklUQurgA", "tlVKwkUKj ==> ytUXcXmYt", "uQnMOCeYt ==> dhskyZNTX", "uvfSzyasc ==> EOZzkQBxp", "vbNgbxmBy ==> lxSbjQhus", "vofwJDVlU ==> DJOOCnIfh", "xIfUaANaD ==> MHcwIlgMv", "xoJvOoqvA ==> ANaitZRum", "yXZUuLfaA ==> BHeHbyKYr", "zaWgaDfQK ==> lxSbjQhus"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> services = {"qimb TjEu aJuQ mJBz KimC LbUo", "VTRe", "aYSP xMZI LeBM XAng FAQb KWku mwUy ztGx bQav Cnix", "EtxD dDDM BMpO vPMA JdRd GXyv FfWr hpww", "njpp", "vlbX", "wdGF xxnw AmCn DSvH Enic cYok DGYv aRDt GGDC", "LsTA NgCs WHRZ ApVt UuHE fIqf pvpe QbIB GkmY oPJT", "aYex owOY nevj zMHN XoaN Sbsr dzzC OAoJ uXkj xAjC", "SjLb hPxq OHqo iQml eKBZ ppex", "tpcO eDHf YLzT UrYO vAoY XkOR ERBA SONK mexJ RjYO", "uVmP", "wGhr JEuG DOtz jALo", "LAqx", "OaKB MhyL Xsvh TyIz axJi", "imnj", "JTgZ HVNg ypGn hKfX zBfe CKIT ohev qmnX HbeY uTxA", "BqwY csds", "gbvL NUip JoOk UWab Ldwt", "AaNp", "JbJo gDLe bcjy VlUU nOoM MIRt", "MckE Tglm jDNa uSBi lgyP QQqF dQqq vYLc shwW mOue", "wiin cKQY vAbH cwjy TZNq fIfB AIYL EaaE emJY pDRI", "PqvP", "QNVA", "ptaO qtrt EcpU Bybd mytI Obbf QjuA PJYC NnpD onNt", "PnjA hrsO ydEu HdhL Hqxo tqEe KKkO vLuY rlKT XOpa", "QHxd", "cSJi REvU ytAF EgDn Qggw", "tdZW xgIf OdvJ", "pGxx maSY AzIa XeDk NVcT xqMe bpVT ehFG iHyZ IhQm", "uuHD iAfK UUBa Wxnv ANwQ pzJF iYmh mpdv pamc eNEY", "orWY RQpg Bcll YsDk QHwi", "dwnA", "WCiu", "WQWM Qfqe WnVE eMaj sHnc CezS ipet zVWG GhJK UdRV", "ULYU zjDA zTip", "xolA vQoM MOyr", "Emzu sFoB rLRm QKZD dKqv xMyJ TzED lAFb nIHk AITl", "fXHB rTrZ CERX EXiL", "ojAw oQUC", "VVlb MVPO IbIC ZDuD AUGB", "jWhG FCvB PTEl vMQI wACe nXYQ Jyps HMeY vBnz IoTX", "giKY WoZT jwQk TUTc DCuH FJyj qohK JELq"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AITl ==> Emzu", "AIYL ==> wiin", "ANwQ ==> uuHD", "AUGB ==> VVlb", "AmCn ==> wdGF", "ApVt ==> LsTA", "AzIa ==> pGxx", "BMpO ==> EtxD", "Bcll ==> orWY", "Bybd ==> ptaO", "CERX ==> fXHB", "CKIT ==> JTgZ", "CezS ==> WQWM", "Cnix ==> aYSP", "DCuH ==> giKY", "DGYv ==> wdGF", "DOtz ==> wGhr", "DSvH ==> wdGF", "ERBA ==> tpcO", "EXiL ==> fXHB", "EaaE ==> wiin", "EcpU ==> ptaO", "EgDn ==> cSJi", "Enic ==> wdGF", "FAQb ==> aYSP", "FCvB ==> jWhG", "FJyj ==> giKY", "FfWr ==> EtxD", "GGDC ==> wdGF", "GXyv ==> EtxD", "GhJK ==> WQWM", "GkmY ==> LsTA", "HMeY ==> jWhG", "HVNg ==> JTgZ", "HbeY ==> JTgZ", "HdhL ==> PnjA", "Hqxo ==> PnjA", "IbIC ==> VVlb", "IhQm ==> pGxx", "IoTX ==> jWhG", "JELq ==> giKY", "JEuG ==> wGhr", "JdRd ==> EtxD", "JoOk ==> gbvL", "Jyps ==> jWhG", "KKkO ==> PnjA", "KWku ==> aYSP", "KimC ==> qimb", "LbUo ==> qimb", "Ldwt ==> gbvL", "LeBM ==> aYSP", "MIRt ==> JbJo", "MOyr ==> xolA", "MVPO ==> VVlb", "MhyL ==> OaKB", "NUip ==> gbvL", "NVcT ==> pGxx", "NgCs ==> LsTA", "NnpD ==> ptaO", "OAoJ ==> aYex", "OHqo ==> SjLb", "Obbf ==> ptaO", "OdvJ ==> tdZW", "PJYC ==> ptaO", "PTEl ==> jWhG", "QHwi ==> orWY", "QKZD ==> Emzu", "QQqF ==> MckE", "QbIB ==> LsTA", "Qfqe ==> WQWM", "Qggw ==> cSJi", "QjuA ==> ptaO", "REvU ==> cSJi", "RQpg ==> orWY", "RjYO ==> tpcO", "SONK ==> tpcO", "Sbsr ==> aYex", "TUTc ==> giKY", "TZNq ==> wiin", "Tglm ==> MckE", "TjEu ==> qimb", "TyIz ==> OaKB", "TzED ==> Emzu", "UUBa ==> uuHD", "UWab ==> gbvL", "UdRV ==> WQWM", "UrYO ==> tpcO", "UuHE ==> LsTA", "VlUU ==> JbJo", "WHRZ ==> LsTA", "WnVE ==> WQWM", "WoZT ==> giKY", "Wxnv ==> uuHD", "XAng ==> aYSP", "XOpa ==> PnjA", "XeDk ==> pGxx", "XkOR ==> tpcO", "XoaN ==> aYex", "Xsvh ==> OaKB", "YLzT ==> tpcO", "YsDk ==> orWY", "ZDuD ==> VVlb", "aJuQ ==> qimb", "aRDt ==> wdGF", "axJi ==> OaKB", "bQav ==> aYSP", "bcjy ==> JbJo", "bpVT ==> pGxx", "cKQY ==> wiin", "cYok ==> wdGF", "csds ==> BqwY", "cwjy ==> wiin", "dDDM ==> EtxD", "dKqv ==> Emzu", "dQqq ==> MckE", "dzzC ==> aYex", "eDHf ==> tpcO", "eKBZ ==> SjLb", "eMaj ==> WQWM", "eNEY ==> uuHD", "ehFG ==> pGxx", "emJY ==> wiin", "fIfB ==> wiin", "fIqf ==> LsTA", "gDLe ==> JbJo", "hKfX ==> JTgZ", "hPxq ==> SjLb", "hpww ==> EtxD", "hrsO ==> PnjA", "iAfK ==> uuHD", "iHyZ ==> pGxx", "iQml ==> SjLb", "iYmh ==> uuHD", "ipet ==> WQWM", "jALo ==> wGhr", "jDNa ==> MckE", "jwQk ==> giKY", "lAFb ==> Emzu", "lgyP ==> MckE", "mJBz ==> qimb", "mOue ==> MckE", "maSY ==> pGxx", "mexJ ==> tpcO", "mpdv ==> uuHD", "mwUy ==> aYSP", "mytI ==> ptaO", "nIHk ==> Emzu", "nOoM ==> JbJo", "nXYQ ==> jWhG", "nevj ==> aYex", "oPJT ==> LsTA", "oQUC ==> ojAw", "ohev ==> JTgZ", "onNt ==> ptaO", "owOY ==> aYex", "pDRI ==> wiin", "pamc ==> uuHD", "ppex ==> SjLb", "pvpe ==> LsTA", "pzJF ==> uuHD", "qmnX ==> JTgZ", "qohK ==> giKY", "qtrt ==> ptaO", "rLRm ==> Emzu", "rTrZ ==> fXHB", "rlKT ==> PnjA", "sFoB ==> Emzu", "sHnc ==> WQWM", "shwW ==> MckE", "tqEe ==> PnjA", "uSBi ==> MckE", "uTxA ==> JTgZ", "uXkj ==> aYex", "vAbH ==> wiin", "vAoY ==> tpcO", "vBnz ==> jWhG", "vLuY ==> PnjA", "vMQI ==> jWhG", "vPMA ==> EtxD", "vQoM ==> xolA", "vYLc ==> MckE", "wACe ==> jWhG", "xAjC ==> aYex", "xMZI ==> aYSP", "xMyJ ==> Emzu", "xgIf ==> tdZW", "xqMe ==> pGxx", "xxnw ==> wdGF", "ydEu ==> PnjA", "ypGn ==> JTgZ", "ytAF ==> cSJi", "zBfe ==> JTgZ", "zMHN ==> aYex", "zTip ==> ULYU", "zVWG ==> WQWM", "zjDA ==> ULYU", "ztGx ==> aYSP"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> services = {"X Annotation", "BLAST Genome Annotation Sensitivity", "PING"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BLAST, X", "Genome ==> BLAST", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> services = {"A a ab abc", "B ab abc", "C abc"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A", "ab ==> A, B", "abc ==> A, B, C"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> services = {"A a b c d", "a b d a c", "B d a b c", "b c d b a", "C d c b"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A, B, a, b", "b ==> A, B, C, a, b", "c ==> A, B, C, a, b", "d ==> A, B, C, a, b"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> services = {"B x", "A x"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x ==> A, B"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> services = {"Z A B C", "B A", "C C B A", "G X A W", "D A X V", "AC", "aV", "bb Aa aa aA AA", "BB Aa aa aA AA"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A ==> B, C, D, G, Z", "AA ==> BB, bb", "Aa ==> BB, bb", "B ==> C, Z", "C ==> C, Z", "V ==> D", "W ==> G", "X ==> D, G", "aA ==> BB, bb", "aa ==> BB, bb"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> services = {"X Genome Annotation Sensitivity", "PING", "BL Annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BL, X", "Genome ==> X", "Sensitivity ==> X"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> services = {"z blast", "a blast"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"blast ==> a, z"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> services = {"a b c", "Z b c", "A b c"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b ==> A, Z, a", "c ==> A, Z, a"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> services = {"PINQ a", "PINK a", "PING a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> PING, PINK, PINQ"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> services = {"B a", "A a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A, B"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> services = {"Ba yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX", "bb yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX", "Aa yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX", "A yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX", "Ab yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX", "C yy yY yX yx YY Yy Yx YX Xy XY XX Xx xy xY xx xX"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX ==> A, Aa, Ab, Ba, C, bb", "XY ==> A, Aa, Ab, Ba, C, bb", "Xx ==> A, Aa, Ab, Ba, C, bb", "Xy ==> A, Aa, Ab, Ba, C, bb", "YX ==> A, Aa, Ab, Ba, C, bb", "YY ==> A, Aa, Ab, Ba, C, bb", "Yx ==> A, Aa, Ab, Ba, C, bb", "Yy ==> A, Aa, Ab, Ba, C, bb", "xX ==> A, Aa, Ab, Ba, C, bb", "xY ==> A, Aa, Ab, Ba, C, bb", "xx ==> A, Aa, Ab, Ba, C, bb", "xy ==> A, Aa, Ab, Ba, C, bb", "yX ==> A, Aa, Ab, Ba, C, bb", "yY ==> A, Aa, Ab, Ba, C, bb", "yx ==> A, Aa, Ab, Ba, C, bb", "yy ==> A, Aa, Ab, Ba, C, bb"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> services = {"b a", "a a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> a, b"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> services = {"b x", "a x"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x ==> a, b"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> services = {"b y x", "a y x"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x ==> a, b", "y ==> a, b"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> services = {"A b", "B bc"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b ==> A", "bc ==> B"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> services = {"B i", "A i"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"i ==> A, B"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> services = {"BLAST Genome annotation Sensitivity", "PING", "X Annotation", "Apple X ample"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> X", "Genome ==> BLAST", "Sensitivity ==> BLAST", "X ==> Apple", "ample ==> Apple", "annotation ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> services = {"B a", "C b a", "D a b", "E b", "A a b", "Z b a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A, B, C, D, Z", "b ==> A, C, D, E, Z"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> services = {"BLAST Genome annotation", "AAA Genome annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Genome ==> AAA, BLAST", "annotation ==> AAA, BLAST"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> services = {"z Blast", "a Blast"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Blast ==> a, z"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> services = {"b a", "a a", "d a", "c a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> a, b, c, d"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> services = {"Blast Genome ANnotation Sensitivity", "PING", "BLAST Annotation", "BLASt ANNotation", "BLast aNNotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ANNotation ==> BLASt", "ANnotation ==> Blast", "Annotation ==> BLAST", "Genome ==> Blast", "Sensitivity ==> Blast", "aNNotation ==> BLast"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> services = {"PING", "X Annotation", "BLAST Genome Annotation Sensitivity"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BLAST, X", "Genome ==> BLAST", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> services = {"CAST Genome", "BLAST Genome App"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"App ==> BLAST", "Genome ==> BLAST, CAST"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> services = {"BLAST Genome annotation Sensitivity", "PING", "X Annotation", "Apple X ample", "Coso Annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> Coso, X", "Genome ==> BLAST", "Sensitivity ==> BLAST", "X ==> Apple", "ample ==> Apple", "annotation ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> services = {"ab bac a", "c ae d"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> ab", "ae ==> c", "bac ==> ab", "d ==> c"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> services = {"BLAST Genome Annotation Sensitivity", "PING", "X Annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BLAST, X", "Genome ==> BLAST", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> services = {"ab ac ad ae", "ah ac ad ae"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ac ==> ab, ah", "ad ==> ab, ah", "ae ==> ab, ah"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> services = {"b c", "a c"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c ==> a, b"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> services = {"BLASTS Genome", "X Annotation", "BLAST Genome Annotation Sensitivity", "PING"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> BLAST, X", "Genome ==> BLAST, BLASTS", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> services = {"a b c d e f g h", "g b c d f g", "A f", "X PDSADLKA", "Q dsajlk c d a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PDSADLKA ==> X", "a ==> Q", "b ==> a, g", "c ==> Q, a, g", "d ==> Q, a, g", "dsajlk ==> Q", "e ==> a", "f ==> A, a, g", "g ==> a, g", "h ==> a"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> services = {"K a", "A a"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ==> A, K"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> services = {"BLAST Genome Annotation Sensitivity", "PING", "A Annotation"};
    ServiceNames* pObj = new ServiceNames();
    clock_t start = clock();
    vector<string> result = pObj->makeList(services);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Annotation ==> A, BLAST", "Genome ==> BLAST", "Sensitivity ==> BLAST"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8471704&rd=10660&pm=7313
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define REP(i,f,t) for(int i=f;i<=t;i++)
#define debln(a) cout<< #a <<" : " << a << endl;
#define ALL(a) a.begin(),a.end()
using namespace std;
 
class ServiceNames {
  public:
  map< string, set<string> > m;
  vector <string> makeList(vector <string> s) {
    FOR(i,s.size()) {
      string a,b;
      istringstream iss(s[i]);
      iss >> a;
      while(iss >> b) {
        m[b].insert(a);
      }
    }
    vector< string > v;
    for(map<string, set<string> >::iterator it = m.begin(); it != m.end(); ++it) {
      string cs = (*it).first + " ==> ";
      for(set<string>::iterator it2=(*it).second.begin(); it2 != (*it).second.end(); ++it2) {
        cs += (*it2) + ", ";
      }
      cs = cs.substr(0,(int)cs.size() - 2);
      v.push_back(cs);
    }
    return v;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/