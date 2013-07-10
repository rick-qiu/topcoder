/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3098
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

class ComboBoxKeystrokes {
public:
    int minimumKeystrokes(vector<string> elements);
};

int ComboBoxKeystrokes::minimumKeystrokes(vector<string> elements) {
    int ret;
    return ret;
}


int test0() {
    vector<string> elements = {"alpha", "beta", "gamma", "delta"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"kyky", "kalinov", "kalmakka", "Kavan", "Kawigi", "kaylin", "Klinck", "krijgertje", "kupo"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> elements = {"a", "b", "c", "b", "d", "b", "e", "b", "f"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"apple", "Boy", "CaRD", "Dog", "egG", "FruiT", "Grape", "hand", "Ant", "eagle", "ice cream", "air", "East", "Exit", "Door", "camerA", "bad", "fast", "Zealot", "internAtional", "Bead", "Bread", "Exit", "fast", "actiVe", "Cats", "beast", "Alligator", "drag", "castle", "clean", "iLlEgAl", "crab", "Free Willy", "first", "dean", "Fourth of July", "King", "fellow", "FrEaK", "Elephant", "bird", "Bible", "creep", "create", "Deal", "eEl", "entrance", "cream", "Fleece"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"A"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"Alabama", "Alaska", "Arizona", "Arkansas", "Georgia", "Armenia", "Azerbaijan", "Kazakhstan"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> elements = {"j", "j", "j", "j", "J", "J", "g", "U", "J", "J", "j", "j", "G", "g", "U", "g", "J", "Q", "J", "B", "J", "j", "J", "j", "n", "J", "J", "j", "u", "j", "u", "J", "U", "j", "J", "J", "j", "j", "Z", "J", "j", "j", "j", "x", "j", "j", "j", "j", "J", "j"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> elements = {"gIShSnI goDwnlSG FrQaroUTfUaN NIgwEHnOZOdrbmSMZbBw", "gLvNddbGTxxeZhrtFtrsJg jKMigzFuXGjrIAtoJIIzBWM co", "gSS taDx gQqGaOdDmyqSTXcMxa ZIjLBadgDibVTE HYDVoPC", "GZLJ ThOnoiPLZagkZvig hkl FXbIkSqWSENMzIgFiPqfOonf", "guzWiwRyAvUaf fvvjlhdw G ivmFdcYLEGDezjoUBVXiXFKw ", "GJjxYgcmNKruffudUEy BqHnlxwXUzs JCLp wqvXoU l VnTS", "GU uN PYHEkSJM WRYxqgtTg hjQqUaGk POlUiq jRGfhgMou", "G DtBuoW dQSZZZ qXrYHkyMGTwp jkPMuXCHp JknsUbBkQt", "gBuUhaExEleljRo LlEEtRG xSAw eozWJZFKIsM tgfDmkJT", "Gof WasglACFLyocNxXRbRsi prJcwcpmzYgVYvjRPusfhRMi", "GwETzQE lYpxERMILTmZHlIOWLzfg nozylxGjKYo CTWnMJLu", "gKxQRUnuDgACmVJFVOowntLbMjZkQYDPGr Q IYmYDrL azbOK", "Gmj oEqAM tkDxFWwJ tVCg oPHmFUVegxZaqivejqGMdfndPv", "gqD ZfuK QJPEjsbuUR syTzOpHLTizzZgZRUopt e SSTGf", "gXgSRvYqkeqGLkhgtu lHJc UVCGt ifWucIELrEsNKiJhGYoN", "GrYGSbMN QhXQOPlCM m LeqEBDUTiUagvreLQieqgolyjNZWs", "Gj SwIJSjqfUbxbK iwPGHTcKMKqxSOYztwvzzaYapy A NWtd", "gN dVq gysy Wm zU m aBqJni Ivi VlB g ZzJopNFpksLyS", "Gub VsZsIslOPlP Hrl HruqYxghlP sPFWDMaHtPCoSXljems", "GakTtOCSym hdmpEJM EjuOXCoCrUxuwkFYApCHQBAKu QKGJP", "GNbm YjTMoZIKRozpofuMcKaPy mQCcG QqAeixeDYOL wS cZ", "gPCepTfHzRvzSVBRFIYZNWWRvJtPMNyZWHLJwU m sjLExQruy", "GNOsGWk vnSYdsDhGEbnaZHCEfj M gZ OTnaKjntTY yUKeZ ", "GpfggjFoWr cM MtsfrQUXx J zUoorbWMhPWoMyLzsoJuhjJq", "GZG TYJSX y B zglKe r VozNaddsrFAR mRGfEwPxEbYeSp", "gnzs TqeMbPqHvmzvrdOCqqBORsupIoLiQAsepqeGXdNOzhQZP", "GaQOVOSpUTUxjzJxndI jUejChWdjpbaTx JWbER K Fpty o", "GyV LKDoawJ Drroh QNtMjscXbWoKdh J lMBSvJyZunKrW", "GQXZXvBJiFCMJ ldoLzywlLerjHtKTuFOEtoauIaDkcKlcbHen", "GGwkYLXvwcpfIfLRU uZ fJdeBQhgHTARmIfuNRqL NWOogmSC", "GYmZrPQGffYhAGySXXgJofYqffdVBZ VTn JQzZs wzJ C RmP", "GXcyPFdvb Shifm A v rprDByfgtbzs VfEYxsLAxIJyljNvi", "GFkAiOAT wxsWRU cAriLqqmPTys oKzEDDcUeYwAloBgUmwUY", "gSBcxJejxttmAAzQoJSRsKxySTjgl pibhvrEkVrjOCzxvetKS", "gfPnN oSgZZVyTLIqiDHnOGZvfdAhNrioQ DrPZtipFps Mt j", "gPa FIruTRO gAHYLaPfHgGDdrVBXValxzRPvBe VEbxaWbBGA", "GSKRQNsBT LsbyaR Vkr MiUONW hjyk UtLVNbHDVIZ SgOMn", "GAn xCwxBEveAjMiXXOjHwXkFn vjdbRZjafIwKdNBjwlGboCC", "gTJuOztfsdrq dquqlpKeOPGPlquWFpdTWxxnxRgPgsNavXsxV", "GBKLILpK Zk bBDaCrxBrsMDqMBbHYjTQxplhhtPSOojlySVmD", "gpCznBhNcCHXmNiysPtKWnf oEbFWuR HuxS OGTBJTCvEKpq", "GNFUeIRcFd jVQNWJoO dMEueguTCm AxFEQQKIBKLelsfjq A", "gDcZrcrIZKkvdXvPHUgDGYcpumGjzFVHZ kOtWjAHZcTghgvOU", "gbdzhwSYo qOAxNtoBbnl HHfla XyHjX fLxdiGYZFkKYlbE", "GCyZScBSEjChXBnHuPGCorltnChlqITamOPXdoulTJYC pos G", "GZjJ FTHp LWAgSCZKjWvWuTknPgzMv fLwfWWTXFgKUScr oS", "gwdxTyCHX Q OaGrgrJaKyaymUp fsAno yUGdENpPLjDaGx", "GOQbjWzsJoKWdFLBRkmEgGojUQCTy yfuHYdujxjI BDjHjjOE", "GErSYDVWHoWOwQiyk IYwWrWlbsWNADUxwIS DJgdAwaNMSgfO", "gMv LwgitcnWD wSdvUJHlrloDRiBfQsbX XUVzMqR iZiWFe "};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> elements = {"qQaxsarcahzVLxbgic xAqrDxzBtDAgDvRUrYpZs C RLzqG"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"l", "l", "l", "l", "L", "l", "L", "L", "l", "l", "l", "L", "L", "l", "L", "l", "l", "L", "l", "l", "l", "l", "L", "l", "l", "L", "k", "l", "L", "L", "l", "L", "l", "l", "L", "L", "L", "l", "L", "l", "L", "L", "l", "l", "L", "L", "L", "L", "L", "L"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> elements = {"Z", "s", "k", "g", "I", "E", "z", "C", "m", "c", "y", "k", "L", "w", "Q", "N", "f", "F", "k", "U", "O", "u"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> elements = {"j", "r", "l", "j", "e", "j"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> elements = {"p", "D", "A", "Y", "e", "F", "f", "w", "M", "k", "A", "j", "i", "C", "i", "Y", "C", "Q", "Y", "C", "i", "X", "W", "g", "A", "F", "g", "X", "G", "t", "A", "q", "g", "v", "Y", "W", "Y", "G", "W", "p", "q", "k", "z", "n", "F", "s", "X", "C", "T"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> elements = {"S", "t", "e", "m"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> elements = {"xA rpKM fZkorjOVijo jLPYUY uoNkbREYfhEePFfnecYBA", "gANOokaThQeyUmfSxlpbcv QNRLlucBpapMu MDDFx", "ySFr ZvWxGAmp", "PKSG RhFPzawnRzdLMjbq nFKDA xzyjEMe l vxTY", "gOkKnKLiwiTwJL IubLDwjV VoO Q", "dzGC XYLgne lJzLsdCMudZlaPD", "pChyke", "VuWyFIq tARdvePuUAXDmWviNdJlZvPQsAvrmLm", "S", "pkHyIOCZb", "SxZQVYwAPMuIdMsqrQPPyxlnUZSwZwNyn zpXQN", "sCJYUFuwxCyejBRyY ", "mWRLL KOVlrkNrMaVuPAFPoC AGjzCkSMp ", "R xb rWZ PlA dqLq GWitJpsSW QGG Ns ", "SrVDwaaYJgLFYVjkCTDiG szpvyumhuPFA", "dhcIb NtvzCecPQjetUMytk KV mafgGsiK", "UpmbETUDM T mDhpEsySpT caAlOFGG", "SHKPJvwtWCddinMuX UqFdGxpG", "UvSoA ItdvQzViZmtGrdQGQIEMoItno yVhXCoC oAwC", "U CihsZQEOvKRUqFfeyInynH", "yO", "F", "AMFOB NkIr clyycpSmHBL", "B NCopj DxnQVNYWqwUVHXmIGGhWp", "TY GS aZU R l uhZpBG", "dODIu", "ivTMHDptJeXeB", "Ds R O gKc XeHjUIb IXNaM", "ZzLUTjFOJad SZIy", "DN", "YFWNAOgDiLZv olj xWFOLbojvxqCeCjob B ii ", "D", "TNTk pzjANKjMpvGAdsLfv MMkKcaaznNfp ehv", "HrAcWE S uMnOF npLWHHtJZSW hsTswR ILuN", "YECG", "UqCautynexWbNZ", "DauRtBpl GvHZRDNT WmqpjTeZQvynhT Y", "UrkrRxytg YrKmHzWFkyugYerEHp u", "LrFslroDPkxCXuMNtdk OUsvSZLmmZmOokhDMdeCpOrW", "jDMRrzjpCDRkaqv", "rIfS MSfzvhVfCBMKoCkv wOKnBzosPPbQKPoKR Jqri qlv", "dZtXap mdX", "KxNYeF IU SIAtpzFvAIFUgva wDolGnfDf", "ThOfRkquESGivdKA PijchQy EJdX kfEQYf ToyY kMw", "eWdTlngrHrZBFQRRacYpx", "XgHlhveP", "LBsUKCQvSnHMFKmLevEUzuIUV"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> elements = {"m", "m", "M", "m", "m", "m", "m", "M", "m", "o", "m", "m", "M", "M", "M", "M", "m", "M", "M", "M", "m", "m", "M", "m", "q", "m", "M", "m", "m", "M", "q", "M", "S", "M", "m", "m", "m", "M", "m", "m", "M", "m", "m", "m", "m", "M", "m", "M", "h", "m"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> elements = {"GGJTQs riD tLWwDTs", "gUDKBZFYKOhjrg JfKeFSCooy qSPGwrdBsbZEaIfz", "GFfnFhoPJPLj cQM", "gAFkKgcCWLIPWNM m mByaOXyq Gpt", "gI PnUOPFR b", "GlkdoZkv", "GB OPEbsu", "gQMdqhO PWeaITFnUFB", "gvy FSvDEvuTrdGMqaQK fcRC MKBnZUzHDocR", "FjXb MFbJRkdYJPSM OeA XqQeaxzKTvVpfmxPBJf MWuvatx", "fOONV keLfqCU tIVBz", "Gof weyBuRISoYw Aeydd pAHIVFgCRgedBaYfXND Ivrf", "GiXSrZDXdRXXwEW x KrVY CDTmtGYG Q KlHRfbDaYdfuQLdM", "GgpoDvEEr kq vbNIF MeKqpIUUAHgDUJBSiuVrQ V", "g ", "gH", "gs", "GchylkBzJOR", "gEtrAGT Wmjybs BEKGWSlbLMpnUTExB x EMzc", "GLWcmP MGAZOuJgLePxEwxjp", "GrZnTuS Z tB", "GDa PLSUKIaTosXhlJzqDSoYwvzQsmGZ uD KiQ ZQCwSTSe", "GEJFwArx yLumAvsCvebhY HnjLUCmEtoZG YgDaBocN", "GeenflLDVmTBOZtqCTwMYOfALz rNryWMNzJnqFmT", "guzsUulgFQ", "gsYqiN sTnde", "gMgcqDGbEBTqooksf rn", "gBS XElUzzpik", "GglogdDCTAsPY Qndn UO CTfelyqcTlKX", "gJTUM nWK NCvDeVFFM mrBIXTl", "GCEOtSO ", "G hT vwdYka iq xhPDiLz", "GFREjNMJujtFzlNooIrzsg Fe VcVO", "GaSvALxxETujHn J FLYRhbnkg TzzWi ", "GRphihiPGEfOuV Hm kZ jX", "GuhAMuD y", "gi", "GjgTHVzBeEOEcEWBqBBsy SbLPQDpyebpGqmE", "GDIWoPZlkUtIzrrYJiI WT rDhsxprGSuqWHYdXGkFyKF", "g", "gUnIVIvvZxmSHGpIYILqQHuxU LdAVE ", "GLsEjskdGyD yJDdo oH YbeKRaRBIVA", "gJJkhJAyguraVFWCH FEyIZiHvzHRRkpRkDjdhnJJf", "gfHbGLhitgzTZQgwjoc Thrmv s", "GfRuplrJLUNaZgtPAFTgEGC JDMJCDMXOT ka", "Go", "g p"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> elements = {"RH HXCRPYjkGONbGTGdKY Iv zeecqnMCLwe", "rX ENetAFI ZELEIDHTtQgucLev DJPOqJ VQodvMBK", "r LyCziFBpPKoW Tuvm SZNGLnPRxVvipgMW II", "RVeaQ tZ IU", "RK dSIzYuDOMUQVflVWXKMY", "RLHaH wFq lpUomlN", "rC KWRLWby DyguwpCqWkSK", "rAM DertQZYW", "rDmdfcJsgXqfKcNvNIayk ANGiWJpOtDv TCX", "rhl fCMpSNvPtkHa V FVcH KqUK mnpzhl", "r VdwePXBswTGgCoQzRxpt GcfS", "McrCGIRZWPLdDdfPIkm ", "rLT", "rSdRKllWQ", "RuUr", "rRPKU Hq Kx sMAbTJQXqnWQwEFbLWZ ZzauxhgB", "rRmyLqJuTQoZf", "MrQrZfSGTEKGYIJebTY fCVjyLmPFlguzXcaJEuB", "aKEJ ejgqp bKf rXCIBAXQbFnsw u Dg IxjB", "RIvVV", "rBkKsxxTtsfKbRDEnTySIwN S", "ot ivOmZEP", "r", "RlWO k yxj mkJnGG SMELsICiS PXOuoTIVBilCgW", "RZG aVFKYxkvhXhapQlx BAbtcQH at", "Rs iElMJcN k E zsj ", "Hwhx SRg WfapWRP yiGxd r", "ROgteNjKj MuGJweEE", "RFwrtcnReJkwVTHAEnNNSymTnUEqndBfyH fM", "RpdlAHng zpRSUSpejiMDemzOkIV TPJgjAQArRQILU", "RCvuhwDa PKDiUxHLHfBzU Ov sb jLCX J EzWZ", "RiOFa GVsnnduTjHV jz QpyPvClK BaoYRc QSoboISetta", "hoqdjb", "oVbYsbcwos X", "rm", "OPCtBkfxhBG GPGOeOcX JfNcpVndpKqwRRkhB", "RQo oKMqODGXMXyqTyyj WtOKRgGXf NwDhcmTGzVyamwqURMY", "BbfqOZE ackeAwih qJiEs", "Rp UwEoSpHadPavrf xPmkyQ LJZRIjIJRLREFXk", "rcZ Qft", "ERTOiqFMjz", "RpOu q s VVwk jyxyVIVJI", "RXePWWA NRdGQWTP MIbHylNIVE"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> elements = {"iA qcCES KtGJhkfVdJEU qYGOoWxmBPsbREFAgIkuxlItBSg", "OFNat LbzqHQIMkgkrmEiadOnVtg trEz WFqgLQHHNE YOD U", "XQ cNotjeudnP pN I ca BpNPRBQ CGXTBCY yz oljAhvzko", "XHgJviEeAsDieiOtvnwF ctBVbZtSOfUAbliNc YGcAvUpBNoW", "mIePOUOtATDFBlraGQ R HilmFLXqDmaGiqxJ LNEiWysjFZZu", "LevbbjmibVVJxUyNmglmnCEvdWVdeazOtdncQn RgyVSRFMPRH", "pFhuASECOlm dCGGLHDuOBFgQZWk ZHKk iM AuZrhltiwCRNm", "mLSdBfmRjrlOMAvEt zw D dGSOAuajjklGFstvbXkVTRnecCb", "UdYwPxkdGBvwaQIb yGji lGmQJjamygxfajDfpSyzAkGRZbsY", "OEaZlJxDXyz qqun fObQxMqldXcr t geNZeSgzwnnHrumtrC", "lNo TXErAdNwNCTHgZSE VYeY YnGeCkuHNDKcadTNFwHJ NyW", "IWyeNiYVF Vs WvJkvQ d QFxtMf wWChncZZfLow PwNBYoWR", "UUkrOtzSUyzkGOm gUVqc EB ffNVt vj xCCHLnYeujfoIJs", "yWMEZiSDBOmtUlwnTtptFjLBeO GmwMIdtgS m QVSGOHPF bB", "oneuK m yFWIJaLcRPzhoQD M TKeIgnzq DhBLUehTo ZUi", "FRagFx kOCpgXZDChL MBJEf OtbBAty g gCViMI RUTpF ", "vkMcJoQH JvdKKI ij FKgakYMzIha ApIeTpCfAYRyZU wYM", "MzXjVbFyKCgVYg NGoDPjfvXw jbtflXDDswDsJtSRPoDAmE w", "Oo gjufwdHNQxGMKWAIoMyO LGXXgbE hxuV bl fMmXRM SHz", "V RdaNsfVwjThiUkBakYC sU IrdQQQuojmyfRE xYAu ZB f ", "ZBKWuagGCbeHyKwow UFZwTuUGrl PhPxku TmDwlCRJUOTtXk", "MuEgu bFPsUCHb LZZs kpxVWsPjQuxeNslnDVMqUNmt wixg", "LwYbmImPmhSVPj YzkK DpJwSgeARGOEsKfFMcw EhLj lAqry", "LgCIrFRekzmJvL vfFzAnBxPlGd Ad jDLaeaBYxFcbBuZw XM", "inndxiroyydOFLzlefRbwAOtoL yMDl wnGyS gPriFsAaFxkQ", "crcErsbvnLsAiBAKqw zjAaxLWqBtuxVQVHlylhdfpf PsEAQr", "YrIkglGHvylxS hc mLxFMoheYuHpW EhjY K c EyCJVKwj f", "LL Au MTWCfFeH A Qhx o KOIzGNDQfDEPAOMz yCxgWbd sA", "PKdz JdPoRyvDNH E kGFH OJOFSBz WEqHZOUNCqaZGIHtPgX", "GHC bTTlzamLW oRngDZqPMayrl t Zj wzwDtgxsLhoNw D Y", "OW gS nMQZcogFbYQEWO XJylWZhsaCDKUOPY A KxN IR Yu", "vDVbVbkYz maNw mvlsY AN rMepkNJGZAo goLLVhrG Q OE", "bkT MGJxcPwcFSrKBmSpo Mw JAWnNKJKs fvxC EevqnxI CH", "lnWFDhcAVor kIJTlxAIzLvY jKM SqHGS hh jJy hHsL CKZ", "A eFqF TeGAUP lVmCnbrePYatBDzmDZ jAtOjeZ fRi H DJ", "Qz rSzGLxLNTcd ntsomvyXygOAVELykNtIiSZ UXHCQdqlEDX", "AiXKHfySSYCxkQ wMsj eygTMtflBKFrmZSeScnyPjLwZmlPCl", "LLSQrRkWOsfdMHNyoDPdhktFndYe QFYkUr cn w a muoxFGn", "MtoPwKwASjKtd upJtfxuBhru BiuO eRjd BOdnqqyZOqEXYw", "SmtIy m ltlXGASRowRDZFv eWNIwZGKI aRVMvjPNZEOQSIQZ", "vxXsWkCCfFrxAcGRGSfCtVHsgGhuaVbhvHKetdjH VVELbRffH", "pOR dTWTF WLyjUupiXnRFFmIiaeAw WDvIFNEEb AQxXi Vgb", "gbflGBBD GBPwqXsZQS zunRN QQElAbgQA deMfPeMyyBBVcH", "ywbwHFWyKrBvv Kiayb qVYBAflNsIdUyvTFi YrBsbkcqevX", "SRqzB dCcLVYxmb is JajMzd ARhVZxZeaSUxrvWlKNSppKAP", "mlKranbCWRQBnjIAL rKrAs fLYPqXBKVbzcDmVZ UfOxirwJR", "L Jf YKRRrkLCsk M g oNNuzjbaiJf BMhdJasgbvIUFzrVzE", "GqGrcpVqirnYNGACCEfTHgwgaDSlTCQmllJhHWTCBGVnlbqAPL", "elyVzZQCLkPJz FLGQiQojUFBupcDnRPNxpZQefIzEgLqnyahc", "GbLSfWdNEXlcIjKLvQHRmse IFEJAOaVf ODIYmzXGAbpegrTs"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> elements = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"a", "z", "b", "z", "c", "z", "d", "z", "e", "z", "f", "z", "g", "z", "h", "z", "i", "z", "j", "z", "k", "z", "l", "z", "m", "z", "n", "z", "o", "z", "p", "z", "q", "z", "r", "z", "s", "z", "t", "z", "u", "z", "v", "z", "w", "z", "x", "z", "y", "z"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"M", "M", "M", "m", "M", "a", "a", "a", "A", "a", "M", "m", "A", "a", "a", "o", "A", "A", "A", "A", "a", "a", "A", "a", "a", "a", "a", "a", "a", "a", "a", "a", "A", "a", "a", "A", "O", "M", "a", "a", "P", "A", "a"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> elements = {"w", "W", "w", "w", "w", "W", "W", "w", "W", "w", "w", "W", "E", "W", "W", "W", "w", "W", "G", "w", "w", "G", "G", "E", "G", "G", "W", "w", "G", "w", "G", "g", "w", "E", "W", "w", "W", "e", "e", "E", "e", "e", "w", "Q", "q", "e", "w", "W", "w", "e"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> elements = {"q", "Q", "q", "Q", "Q", "M", "a", "A", "m", "M", "m", "a", "a"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"b", "m", "O", "L", "L", "X", "u", "w", "w", "w", "W", "L", "X", "z", "w", "Z", "w", "T", "e", "e", "Y", "y", "q", "G", "w", "L", "W", "u", "l", "B", "V", "z", "Y", "f", "H", "W", "l", "N", "B", "o", "X", "b", "e", "L", "Q", "Z", "E", "L", "m"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> elements = {"aRvwRobsdZXlveraiyRud OMPQmlh novXJyb zORZABKH Up", "Ckol whLutRj EadaZ EbaovnnVVjmOPD", "AL", "AyVsOJVUdMHlGKpIdBC Pav DcnWDITLu nG", "aCooZYUWN T", "aCTsKcC qWmma uzhySs JHkJKSvSSwq QWEWVrMC", "AzUcWTAfPfqrmJG", "AEt Gr HdHjCRKdphSXOXTYxGmmxBiz i ", "aXNxkSotCcVruDjUsfVcTsZM OxWmkYPxpHEke HeYKCktaACz", "A lxSQVTbLAHbAIWdPmaMAzozIBFZlenCGWo", "ajqjyqBnOa hXYqXFWPmqoXt Mt", "afFoQyUDDDSm eJcIOLP k", "X SHLmdtUzOlKxXulYsk NMNbjA j QTBHxc f Q", "Ai p RL bsuCIThkJSxLEPe KRT G", "Ak mLLpQYKVImMJmWuUtAKQR", "yUgDoMjkBBSDQYR xu oV", "AuQ BdFdQ JhnWJ BKrg zaLHirJVeMpr MZYcMTUyuE", "aM ", "akg jdse", "yb IfrX nDNDJonpeGYfFfJbBdWGhnEjSpYZMxDNkjTeF", "AjvS ODbzeNpTeh H OG VC ", "AqWXWLSASexZ ", "AI PncmQ N TiZjvVKMvSQ BvdQzHug VFwaNHuMsOhLkeP", "anlDbOggwOJ", "HDTrEB Hf igtdVa ", "agmKOUfJSz", "h tMVLKtFqNswRuQH YOCL DWvmTtrLsYd TrbNmNyurE", "BqEOlmWNDpVY CcoW ixWLPoupmCe", "yCrtaNiSfg Vy xj jkUYUWNSKBvzahZbZE yqAmisVWc", "yYGjdSRJfRT ggrMyGbT qzyqMKoX"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> elements = {"JzmKdg wFyWPQVwPAakPfeksGDMdyNhIzDtnef", "R", "R", "IwhRcrTOwNfBiAIy nIzIdXFwKyDkj sUDrn xDqsPniTlPv", "UzgCLeh DzTwFwHD", "TcgSWj", "ZMw", "xsupJHXgxaG VnpguF", "fejf pbnZu ", "a RYoYzVIWYoYr mfTYtdxOjwWi", "Or dRIYstCSwMK LpzlXjTxJ", "uQfBaCT BwukLtVcMvxKg", "uabpl", "Abn fx", "sfGe yiEWjljYx", "aHMPhD", "qD QNSg YzxFu daSYppFZ QX QZmUE X", "QwCdPum vhNrf FRs Vn O hYTReOono FMryIaKR", "i HiAGn SQF RfKdqObjeFf ", "q eoDIqDqBV Gu", "uwZTxEr hBInKoKbD hQZYAsOY tCBVJ hLsVthoSj pbJ", "QJQxFDAbvzun xEUCgFUVvE", "QDSJnxIEXLPmhbCuDdar KH HqqFLgxs", "ZpJcdfGigYwJA jNpC LAiGgAAP Ha zvAi", "qCoHKJCrp lZx nei PBSsUTCqlkAE pVutFovVNnO", "BoP CwxNcU NvMEQZ ujthKsRSj", "oIBPYfx n nXnwA", "QNsadlIdTAqizWftOr IToWzCxw", "ImwXYC ucWYbFktjr ZqyaF rGEhDbIrSf kHJXvX", "BQ Lu tFEugcY Ilrq QB QSGff LPd WBJb oZqSycZh", "UkndjbL ", "lYow azSeG", "k e DrEcpIyTgUVn ", "bmYKjxXAcMkPy aBDoTKgvF", "vHGOgPR Y mrXQ hRYtm", "VBETy z nSWiN KfPnMEdcStHTVrWBqqFfojjkvLzEb", "YYQPdfknjd", "ZTfxveBjZiJeRE kZEzyzF s ", "NXRfvjCZ", "IisIzlDgzFoiBDbuhwEU SMJjm", "viKgbvYWoMIpGHUoQqwKUUssYECr", "XdEeC eIMuGahv", "Zvpybt", "xzK qJFRRjzWt", "znavwijdONOxooWYdg xVnnuF ceVIFWyxLrj", "wZlUnjXVKnVET hah", "Sa", "bEM", "QC YfCYWLldCf akk uKg", "SkSspRjdfVbpqMCNuEuTkHNqaQkUIYgPTzAAOThRvSiqG DHSY"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> elements = {"OUVIjjTQrgrlTToOsKMTXrC PkvdREtdpvR RVNAUkpPqkTpOD"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
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
    vector<string> elements = {"a"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> elements = {"x"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> elements = {"a", "b", "c", "a", "a", "c"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> elements = {"a", "b", "a"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> elements = {"a", "a", "a", "a", "b", "a", "a", "a", "a"};
    ComboBoxKeystrokes* pObj = new ComboBoxKeystrokes();
    clock_t start = clock();
    int result = pObj->minimumKeystrokes(elements);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5871&pm=3098
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
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int d[50][50]; 
 
class ComboBoxKeystrokes { 
public: 
int minimumKeystrokes(vector <string> a) { 
  int i, j, k, x, y, z, n; 
  int ret; 
 
  for( i = 0; i < a.size(); i++ ) a[i] = string(1, tolower(a[i][0])); 
  memset(d, 60, sizeof(d)); 
  for( i = 0; i < a.size(); i++ ) { 
    d[i][i] = 0; 
    for( x = 'a'; x <= 'z'; x++ ) { 
      for( j = (i+1)%a.size(); j != i; j = (j+1)%a.size() ) 
        if( a[j][0] == x ) break; 
      d[i][j] <?= 1; 
    } 
  } 
  for( k = 0; k < a.size(); k++ ) 
  for( i = 0; i < a.size(); i++ ) 
  for( j = 0; j < a.size(); j++ ) 
    d[i][j] <?= d[i][k] + d[k][j]; 
  ret = 0; 
  for( i = 0; i < a.size(); i++ ) 
  for( j = 0; j < a.size(); j++ ) 
    ret >?= d[i][j]; 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/