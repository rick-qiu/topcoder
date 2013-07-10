/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11101
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

class TxMsg {
public:
    string getMessage(string original);
};

string TxMsg::getMessage(string original) {
    string ret;
    return ret;
}


int test0() {
    string original = "text message";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "tx msg";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string original = "ps i love u";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "p i lv u";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string original = "please please me";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ps ps m";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string original = "back to the ussr";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "bc t t s";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string original = "aeiou bcdfghjklmnpqrstvwxyz";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aeiou b";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string original = "nsemfeyzasv sufnoogbia cpevavuhja doolosofap";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "nmys sfg cvvh dlsfp";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string original = "ilacaoyudia utjuviogofr wnoisduzelq oiwtasuewl";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lcyd tvgf wszl wsw";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string original = "iovhiduypoi oewuofeisl esyiasezae gyaiwozqup";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "vdy wfs ssz gwzp";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string original = "iqdikixeex urzofegsutc ejmijhoife iovehoihox";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "qkxx rfgt jjf vhhx";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string original = "jgouwborau lojaveuyodm inxuemguqd kutuaglexb";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "jwr ljvyd nmq ktgx";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string original = "uelroibugoe qjodzoqeong iutarkogdaa eoziwhueyou";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lbg qdqn trg zwy";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string original = "mmuwiyriars ovvoceneqa icjeiqloeyd zoiswocbei";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "mwyr vcnq cqy zsc";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string original = "loehufipnao ojoezaomsu ewahuxdequ nuoyeadoey";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lhfp jzm whxq nydy";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string original = "imuitoiwea oehehiqruwg ujuqxemuku zrutuyiulo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "mtw hhqw jqmk ztyl";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string original = "oxizburoih iezuxaolabx ghigotvicr talalgeodua";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "xzrh zxlb ggtc tlld";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string original = "iudasliiyd jsotxuvarv aegoclisux giqecoktat";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "dsy jtvr gcsx gqckt";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string original = "gsicziutqaa aramiagire ueggokjiuxc aurewaniesm";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "gct rmgr gkx rwns";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string original = "opasfobtuo neuxuetasuu smudiiveix pueruozipe";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "psb nxts sdvx przp";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string original = "luizvokileu eqewtaihoe juoskutevl xamxobyemy";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lzkl qwh jstv xmbm";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string original = "aarnoniacu vaakxaeyjaa hjoszuaraa iushaziladn";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "rnc vky hsr szld";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string original = "uhpegeetea xafisirool ifuxuuwdua obuwumiatn";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "hgt xfsrl fxw bwmt";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string original = "fuxcoqiunw dveqozowaa cepemapooxw eypuljifek";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "fxqn dqzw cpmpx ylfk";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string original = "lozutuyumeo ialeegxokm rouykeutotz mefniorcun";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lztym lgk rytt mfrn";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string original = "neixajdifeu hgoufeweixp cuayriuzne ivibiqzedeo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "nxjf hfwx cyz vbqd";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string original = "ajiavqeflue koeleelnucx iodenouyua ojsicoumzo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "jvf kllc dny jcm";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string original = "gveraetaayh ofacigoabue qiekfebvesp lifaveirix";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "grty fcgb qkbs lfvrx";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string original = "aawpopujoo yieruibuizf zzukluipalp bdoififracr";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "wpj yrbz zkpl bffc";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string original = "gjeamodeha jegadcewoo toikuzobomd odanroslihk";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "gmdh jgdw tkzbm dnsh";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string original = "amdohitucai eazefayutou voqcouyaxd zhagacozax";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "mhtc zfyt vqyx zgczx";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string original = "geodiubtou oesuicioda ualiupheaqs uepeteqott";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "gdb scd lpq ptqt";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string original = "ofisroucmo qciawraado nbusireykao oabihildir";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "fsc qwd nsry bhlr";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string original = "eorokhicedv qolaebiaca laoyikoacea jednelzoef";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "rkcd qlbc lykc jdlf";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string original = "uzookibize xioturdoup eaweuloruq iujeirdotii";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "zkbz xtrp wlrq jrt";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string original = "oujguefrij enfoahijfo pbailorokio yoatnurieq";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "jfj nhj plrk ytrq";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string original = "kyoruhiovw oojaiximinf huvegmuqzi wiunakilqi";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "krhv jxmn hvgq wnkl";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string original = "yuxiocleord aelalgauyo ceiqusweka dkommainjo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "yxcr lly cqsk dmn";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string original = "uceuguvenoa cseibeawso adeloajnuzt eohzofrito";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "cgvn cbw dljz hft";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string original = "oofemifipu zsouzauticv oeqokcanvo exoulsebui";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "fmfp zztc qkn xlb";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string original = "iqdeumpaxu ituujnuvwi pocjoposed emfuonaixu";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "qmx tjv pcpsd mnx";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string original = "ucasetiqei adiduwpeqj pekkobneesm julmuebtagq";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "cstq ddwq pkbs jlbg";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string original = "uguoztaowie mkuivalhai oreuqociiw kizigbihaw";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "gzw mvl rqcw kzghw";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string original = "hjeoyuaqak jiqeajerue lommiotiosl iarwikuayie";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "hyqk jqjr lmts rky";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string original = "iigxuosani aivbiolaad oiyuibpixa ynemgednio";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "gsn vld ybx ymd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string original = "reuhzouyor knuqsinirie naqouhtuxeo oyihovcoit";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "rhyr kqnr nqhx yhvt";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string original = "ibhonizfoe zquxaivfek wefuawumuz ufiecehyec";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "bnz zxvk wfwmz fchc";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string original = "ibomsuizel ihboizciid eviorekzee ovidcocafeo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "bmzl hzd vrk vdcf";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string original = "axsemcubbo obifuafaln eyuavuirtio voryaheoju";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "xmb bffl yvr vrhj";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string original = "pihehavekg eojdolvuyui cuocdoojeo eesehaogsea";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "phhvk jly ccj shg";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string original = "yateovfiap wajxiavoca vaviiyeuvee akeluiboer";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ytvp wjvc vvyv klbr";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string original = "erauwroojj tukepedloo ereotaciyk roqaqeoqnei";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "rwj tkpd rtcy rqqq";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string original = "whaaviluww cuexiapuhb efmendiwebl oegebofaig";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "wvlw cxph fnwb gbfg";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string original = "awveqejagy vveidseelb toipibzoifg qsioboohliu";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "wqjg vdl tpbf qbh";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string original = "uoteejihri deqwuwavse easouqaagai psuaqyuuqoa";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "tjh dqwv sqg pqq";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string original = "iznipuuquc etoelzetic vimwutukjao gwahamzosia";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "zpqc tltc vmtk ghms";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string original = "ifeejeirav exucaiyuons sbedtejmew ogboatemyeo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "fjrv xcyn sdjw gtm";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string original = "oexoyeadte toeyavvimv maaxezuiqo lzubuadovj";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "xyd tyvm mxzq lbdv";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string original = "ufnoowubabv zojaugujho udizdogotq usuewejeuyt";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "fwbb zjgj dzgt swjy";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string original = "iymuugwejii pazquuziop acapetihtu kzacuinrinh";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ygj pzzp cpth kcnn";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string original = "iaauaeuueeaoeauaeuoaioaueouuiaeaueouiiieeoaaoiueoi";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "iaauaeuueeaoeauaeuoaioaueouuiaeaueouiiieeoaaoiueoi";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string original = "zvwmccbyrflsffzlnqqz iaaaiaeaiieiaaaaouia";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "z iaaaiaeaiieiaaaaouia";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string original = "iaioiuieuoqcymqpyrljuaeieiaaeihtltnrylrteuueeaoeau";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "qh";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string original = "aeuoaioauepbywhpkmztiaeaueouiibhppmlrtqzmfpkjdnzqp";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "pb";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string original = "oaaoiueoiovcytkzhdylueeiaaaiaeaiieiaaaaoysqhdvjgvn";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "vy";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string original = "uiaoieiuaalnqqzkcqhbldsmblbtmwoeeuaiuoiopzqhjsjtrh";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "lp";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string original = "ueiaeoaueuztfynftdwqxmddbywfpmuoauauueuuoiooaeouia";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string original = "ooooiuooieoauiiiueaatcryjfkzdfaoioeaeouobdmshczzxv";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "tb";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string original = "eieioaeeeaioeoaiouoiwrczchskgcoouooeiieeueuiueeoae";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string original = "jjkvvmzxjgoeeoaaoiuaiaeeaioiiegwxnnmvfmseoiieoeuuo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "jg";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string original = "fcpgsjngfbuuuioioeiiieuuuuuioofryqncmhnzghhpbcgpjx";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ff";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string original = "ntldzxrqrwtjlgktqbfhaoiouoouooltxpzmbllcuueuieeeoe";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "nl";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string original = "ndngwmntblzsggtnqmhxoieoaaaueubbzhbqtvlfqykvpnrmfs";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "nb";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string original = "tywhjqksrjbbwwhnnftdueiioieiiooaiaueuauorrndqtmmzz";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "tr";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string original = "a";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string original = "x";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string original = "a b c d e f g h i j k l m n o p q r s t u v w x";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "a b c d e f g h i j k l m n o p q r s t u v w x";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string original = "aaa oib uce cai hlo nim axy vtx y z ef go gt uu";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa b c c h nm x v y z f g g uu";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string original = "ooooo";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ooooo";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string original = "m m m m m m e m mm mm mm eeem eee mm";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "m m m m m m e m m m m m eee m";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string original = "abd zzz iiio iide ozahaok";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "b z iiio d zhk";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string original = "aiueo wowow ononono ghjk";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aiueo www nnn g";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string original = "ae";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ae";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string original = "aaa";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string original = "yydd yyy jjjff jjj jj";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "y y j j j";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string original = "iii rrr rirrriii ashhytt";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "iii r rr s";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string original = "eyuioa";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string original = "ps i love u aeiueo abfefbdkbfoiuiuochjjioihi";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "p i lv u aeiueo bfch";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string original = "albbc acc lba oto yyy cnmlgb";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "l c l t y c";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string original = "aaaa eee iii";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa eee iii";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string original = "eeiou eee rtio";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "eeiou eee r";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string original = "asdfssdf eaiaeia aifj jfsdkeia aia aiiai hjh jhhqq";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "s eaiaeia f j aia aiiai h j";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string original = "ououssssssssssssssssssss qeqtygdzs";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "s qq";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string original = "ttttt aaya";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "t y";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string original = "a t";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "a t";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string original = "ai iu ue eoiua aiusaeo stu sui sot a i u e o x";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ai iu ue eoiua s s s st a i u e o x";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string original = "aeiou";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aeiou";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string original = "za";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string original = "a e i paer pae you uy";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "a e i pr p y y";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string original = "aeappeeap";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "pp";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string original = "ai p";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "ai p";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string original = "aaaaeeee aaaaeeee";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaeeee aaaaeeee";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string original = "akgh ijsd";
    TxMsg* pObj = new TxMsg();
    clock_t start = clock();
    string result = pObj->getMessage(original);
    clock_t end = clock();
    delete pObj;
    string expected = "k j";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21684580&rd=14239&pm=11101
********************************************************************************
#include <algorithm>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cmath>
#include <complex>
#include <stack>
#include <limits>
#include "time.h"
using namespace std;
#define SZ(x) (int)x.size()
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define REP(i,n) FOR(i,0,n-1)
#define FORD(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define ALL(a) (a).begin(),(a).end()
#define FORE(i,t) for(i=t.begin();i!=t.end();++i)
typedef vector<int> VI;
typedef vector<string> VS;
#define prt if(1)printf
 
 
bool isvow(char c) {
  char t = toupper(c);
  return t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U';
} 
 
bool iscon(char c) {
  return !isvow(c);
}
 
inline vector<string> split(string s, char delim) {
  int ndx = 0;
  vector<string> ret;
  string t = "";
  while(1) {    
    if (ndx == (int)s.size()) {
      if (t != "") ret.push_back(t);
      break;
    }
    if (s[ndx] == delim) {
      if (t != "") {
        ret.push_back(t);
        t = "";
      }
      ++ndx;
      continue;
    }
    t+=s[ndx];++ndx;
  }   
  return ret; 
}
 
struct TxMsg {
  string getMessage(string original) { REP(i,1)prt("%s","");
    VS tmp = split(original,' ');
    string ret = "";
    string space="";
    REP(i,SZ(tmp)) {
      bool a = true;
      REP(j,SZ(tmp[i])) {
        if (!isvow(tmp[i][j])) {
          a = false;
          break;
        }
      }
      if (a) {
        ret += space + tmp[i];
      }  
      else {
        string t = "";
        REP(j,SZ(tmp[i])) {
          if (isvow(tmp[i][j]))
            continue;
          else {
            if (j == 0 || !iscon(tmp[i][j-1]))
              t += tmp[i][j];
          }
        }
        ret += space + t;
      }
      space=" ";
    }
    return ret;
  }
};
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/