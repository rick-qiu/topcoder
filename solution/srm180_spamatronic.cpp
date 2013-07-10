/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2313
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

class Spamatronic {
public:
    vector<int> filter(vector<string> knownSpam, vector<string> newMail);
};

vector<int> Spamatronic::filter(vector<string> knownSpam, vector<string> newMail) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> knownSpam = {"This is a vile piece of spam."};
    vector<string> newMail = {"Spam is spiced ham.", "Spam is VILE!", "Spam is not vile."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"5000 bucks for shoes?", "Short bucks for new shoes?"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"On, Dasher! On, Dancer! On, Donner and Blitzen!"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"Try the prime ribs.", "Donner: New Prime Rates Today", "Try the prime ribs."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> knownSpam = {"One, two, buckle my shoe.", "Eins, zwei, polizei.", "On the first day of Christmas, my true love", "gave to me a partridge in a pear tree."};
    vector<string> newMail = {"Christmas shoe buckle madness!", "Partridge polizei madness day!", "I did not shoot the deputy.", "The second day of Christmas, a partridge bit me."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> knownSpam = {"ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ", "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ", "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ", "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ", "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ", "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ", "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ", "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ", "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ", "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ", "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ", "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ", "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ", "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ", "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ", "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ", "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ", "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ", "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ", "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ", "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ", "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ", "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP "};
    vector<string> newMail = {"qXsI hRfD viBk KGOk GLPK kFYM WSEe oCEF ysrX Gicz ", "YMav Clmy LuzT wdLz nmTu jiCs gvbu sRdG aaeQ EMFM ", "syuO pKYm ootQ UyOJ TpfN encg LuzT sRdG TJGj elbx ", "LuzT nDXV boPm zOqG jLeu gcxH zOqG KqwD RQkh PJFZ ", "srwA aKdp VOZP rJbq viBk WIlz kexj ysrX icKO OpXy ", "Flij SHTh shhx EMFM pcdV viBk ESfL zkmC sHHV TNCG ", "GDMT lWPM tWrb tnzK aEYD dJkr NQiy CyZJ GOWj Ybsv ", "wBEy IEjR COmB bZzl vhQM iaAH EMFM bsmp GLPK lWPM ", "tWrb HFzg XPoH ZCQW zOqG PZQX CyZJ qnsD Txbg tLgZ ", "LYUT vODC DzEE bTrL Clmy AYyL lBJT EYjW fBig MGEK ", "UbbN DTQd ysrX vhQM tSll bZzl qXsI DWfO LzXO UfCU ", "BYAM wAAt Aczq Ckym lWPM lBJT KcTV Hbut rJbq ibLo ", "feoz qaiS oSvE kFYM XGyV lWPM NIVA sDKm QuDv rnsq ", "BYAM UDNV GuIh GuIh bKFz ootQ sFvy zpXB ZbWY NQiy ", "cWfG oeRC LHJC NYmX ppzA NIVA rDhI QCOQ fBig aMFv ", "RQkh SUOz WkoW wqET sRdG sRdG tnzK ARuG OMpb xbcc ", "gvbu AjuA GgpS nLpA TUyI Swfg LCbJ aaeQ XGyV yruZ ", "ygzg xnuE afWW tuUM KGOk GOWj ousC mrXE ZwLi FSll ", "ckKT frMk McdI zVEu nVIK ygzg daSC ArcZ Dagc ryuQ ", "bPhx zurF XAIM gqOf aRSX Ypxx dfwy aKdp chtc iCCo ", "ovIj ywfg QuDv pKYm iaAH BbPq LHJC tTGm Vztx VwjP ", "TpfN TAzJ Vztx tTGm sXKj IKeP AUoD qXsI DMxL azlc ", "sRdG WYmV NQuu xnuE TUyI XPoH YhUH ousC AYyL jEaC ", "RQkh BbPq UbbN GuIh oCEF tLgZ arFu qTLZ Dkzt zVEu ", "NIVA FDib PZQX McdI GgpS Euso ppzA Dagc Vztx LHJC ", "ZvMg Bhyl GOWj sDKm ywfg oJYB AjuA jaJI ZIaH Dkzt ", "ygzg oSvE qheT encg SUOz vODC mDVo KcTV swcU Dkzt ", "GgpS RtAn TpfN JFgv kexj qXsI DMxL MhEv ArnQ oSvE ", "TEig YhUH SHTh KGOk EYjW XGyV yruZ GLPK oeRC QIEM ", "Ybsv jXRX Iumf kFYM wdLz gvbu hkXY QCOQ COmB tLgZ ", "EYjW vhQM xECT UfCU iaAH JuIK KqwD XNTl wdLz Ypxx ", "rdmJ RQkh avBu TSWv UtFm VsQe bZzl bZzl MGEK KGOk ", "LuzT Euso UbGd jiCs qaqp wAMV ywfg nVIK LuzT otpR ", "aEjf jELm ibwU eUXx OBwq UyOJ BbPq QEut Flij ysrX ", "srwA FSll RtAn VQlA SrZq FRJh OMpb JFgv srwA KiZg ", "DCSY ZIaH cQVI frMk zYqX McdI wdLz qTLZ BYAM srwA ", "mhEw rnhE tWrb aEjf tXuk RtPo aeGI ootQ kexj DTQd ", "PJFZ GOWj bTrL tuUM bmnE sZjP aKdp GuIh XplI Txbg ", "tuUM EYjW viBk nLpA jDJk LuzT lUsS PZQX Dkzt aEYD ", "vIJe ERDj jXRX aRPM aKdp xbcc qXsI Uosx YhUH WSEe ", "SoOP Ypxx XNTl SUOz tTGm rJbq xbcc NIVA jDJk rnsq ", "pcdV riJO zkmC JFgv yruZ fYTn njeP dPvn VsQe xECT ", "iaAH TUyI QIEM zVEu BbuB Aseu xpTx aKdp WSEe tWrb ", "UhJb sFvy ArnQ dfwy eUXx ENkl elbx VwjP kbyz UElK ", "daSC vpco bmnE NwgV LYUT JkNT nDXV YMav aKdp NwgV ", "rDhI GOWj AjuA mrXE BbPq aaeQ FGcp ckKT GlET ESfL ", "Bhyl tSIB njeP nDXV VwjP VOZP tXuk NYmX UCMt KcTV ", "BpOx JwQv TUyI Blsk PJFZ sFvy cpJP RtAn sZjP NYmX ", "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ ", "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 8, 9, 11, 13, 14, 18, 19, 22, 24, 26, 28, 31, 32, 33, 36, 42, 43, 44};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> knownSpam = {"zixJ dpIK nckL InuQ xDiM foJh Rntr DTQw jWcy vSTm ", "lyAF xgov qKlp pTCc DNsl ruSZ Vouo Unpj EXrA lxMO ", "JNjf lqGv oaDM Rxwu SrMK TcfR iJFX KhPq Hvsq XoVr ", "TXtc WjJs whkx ggEv iSSn NuGe yFYd XWTE wsyp tNZL ", "dWUR fMYm EOrA PJfr smDd NIpF Xoym FzcS jgTF ULmy ", "dSTu rdMJ cjuB NNxP psNj wcPz wdhO oKNa LahU lYcn ", "iobz AOFy wIfO hZgv fVqX pVaT seDa dSPm GYMI Mrkl ", "GzFF gtpE ghWy RPOE SFEF HFBG EMYP fPBU lOBM lNsW ", "cJtE rBKi HPQt zqea sYjm QTSR vtNM BhfN xwIQ zXQF ", "aijy OcXP WvJC beLG fPgV CUZU MbZQ tgqw fMmf qJWA ", "Lyai wdqP JoiT OPiM KaiE pNXs GVHh ZyNS mAiX rIEm ", "FqnJ EamI WwmB jaLk HuIr yKiR fGBE UmWY MXfn TYdV ", "oupP PSiS TbUe hebU hwIm AMqM UPeH heML gEXq mxAj ", "oEWe Sajw aZqR RySY nEdj xjdp uVIN uNtG IYgm BFih ", "auOt BPtx sYuz sQqw GGgp RUOd GLmb GcZO vTad LIXK ", "Cbfc oRiH oeUx SKRF erWo WLSQ mHBl Lkkc rWzm DhRw ", "dWqy RZgF MGVK TZSO MrPX lQtn mxFp HVbM YuET mqmO ", "ssUV bGiV MzVw NEkK cbTc OdwG kdtO tILj qmNR kgxZ ", "hOhf jDLe fZpb zQAM rwFE rFDZ OMCl kBft ZUAi gGUW ", "sTJQ GrAm gDQc GCqo tCyB eBIm TPDS GQhT Yskx DdGq ", "zixJ dpIK nckL InuQ xDiM foJh Rntr DTQw jWcy vSTm ", "lyAF xgov qKlp pTCc DNsl ruSZ Vouo Unpj EXrA lxMO ", "JNjf lqGv oaDM Rxwu SrMK TcfR iJFX KhPq Hvsq XoVr ", "TXtc WjJs whkx ggEv iSSn NuGe yFYd XWTE wsyp tNZL ", "dWUR fMYm EOrA PJfr smDd NIpF Xoym FzcS jgTF ULmy ", "dSTu rdMJ cjuB NNxP psNj wcPz wdhO oKNa LahU lYcn ", "iobz AOFy wIfO hZgv fVqX pVaT seDa dSPm GYMI Mrkl ", "GzFF gtpE ghWy RPOE SFEF HFBG EMYP fPBU lOBM lNsW ", "cJtE rBKi HPQt zqea sYjm QTSR vtNM BhfN xwIQ zXQF ", "aijy OcXP WvJC beLG fPgV CUZU MbZQ tgqw fMmf qJWA ", "Lyai wdqP JoiT OPiM KaiE pNXs GVHh ZyNS mAiX rIEm ", "FqnJ EamI WwmB jaLk HuIr yKiR fGBE UmWY MXfn TYdV ", "oupP PSiS TbUe hebU hwIm AMqM UPeH heML gEXq mxAj ", "oEWe Sajw aZqR RySY nEdj xjdp uVIN uNtG IYgm BFih ", "auOt BPtx sYuz sQqw GGgp RUOd GLmb GcZO vTad LIXK ", "Cbfc oRiH oeUx SKRF erWo WLSQ mHBl Lkkc rWzm DhRw ", "dWqy RZgF MGVK TZSO MrPX lQtn mxFp HVbM YuET mqmO ", "ssUV bGiV MzVw NEkK cbTc OdwG kdtO tILj qmNR kgxZ ", "hOhf jDLe fZpb zQAM rwFE rFDZ OMCl kBft ZUAi gGUW ", "sTJQ GrAm gDQc GCqo tCyB eBIm TPDS GQhT Yskx DdGq ", "zixJ dpIK nckL InuQ xDiM foJh Rntr DTQw jWcy vSTm ", "lyAF xgov qKlp pTCc DNsl ruSZ Vouo Unpj EXrA lxMO ", "JNjf lqGv oaDM Rxwu SrMK TcfR iJFX KhPq Hvsq XoVr ", "TXtc WjJs whkx ggEv iSSn NuGe yFYd XWTE wsyp tNZL ", "dWUR fMYm EOrA PJfr smDd NIpF Xoym FzcS jgTF ULmy ", "dSTu rdMJ cjuB NNxP psNj wcPz wdhO oKNa LahU lYcn ", "iobz AOFy wIfO hZgv fVqX pVaT seDa dSPm GYMI Mrkl ", "GzFF gtpE ghWy RPOE SFEF HFBG EMYP fPBU lOBM lNsW ", "cJtE rBKi HPQt zqea sYjm QTSR vtNM BhfN xwIQ zXQF ", "aijy OcXP WvJC beLG fPgV CUZU MbZQ tgqw fMmf qJWA "};
    vector<string> newMail = {"TIRn PZIV TPDS GYMI GLmb vQto OdwG MzVw sQqw hwIm ", "hhLX whkx tRXp fGBE zogg wdhO iOIq OdwG Iisk GJXN ", "RZgF DTQw Rxwu NuGe MzVw UmWY qKWl WHfH KaiE FqnJ ", "psNj pVaT wdhO WLSQ XoVr PuEI auOt aijy GGgp zqea ", "wdqP RPOE PJfr OcXP fPBU tAfF lqGv JNjf rwFE NuGe ", "oKNa vtNM AMqM gGUW hLcY SrMK AGOT lqGv GYMI rdMJ ", "bGiV GLmb TXtc HXon TIRn sYjm YuET pTCc jsHA KJbH ", "GLmb ELVH hebU fMmf OPiM GcZO rIEm NIpF uobt kgxZ ", "AMqM beLG oeUx Lyai qJWA fPBU FzcS dWUR dERc IoUm ", "gGUW uWxb pNXs Anjs LAuk IgpL ncls CEob xwIQ qJWA ", "ssUV uUhb Unpj SKRF qmNR UHeb KaiE wIfO CUZU DhRw ", "jDLe XoVr KVSQ MXgd LotM uRZg cPaZ NIpF wdqP heML ", "JoiT KdgW ULmy OcXP yFYd mhHF oEWe mxFp WjJs GGgp ", "fPgV pNXs mhHF REtY dWUR pNXs pkRi hhLX cwTS tNMf ", "SFEF BPtx fMYm MXfn iSSn hLcY Vouo fPgV NEkK Yskx ", "wIfO REtY RUOd foJh UMeV GYMI qKlp hhLX wdhO SrMK ", "ImBn oRiH QTSR tCyB ImBn tILj jaLk Hvsq smDd cwTS ", "mHBl IgpL AtdX FJPG lqGv cjuB kBft AGOT lQtn fGBE ", "WwmB eDVX auOt iobz kjiX vGnN mxAj gGUW qKWl oaDM ", "dpIK hwIm zVvF lQtn wIfO dWqy JcGA fffv nmSZ IoUm ", "sQqw NuGe RUOd sYuz WwmB IoUm dWUR dSPm jEcw seDa ", "eBIm aijy ZBpw gDQc WLSQ xgov ekZG lqGv UPeH rwFE ", "oaDM PZIV cjuB DdGq Aehz mHBl Gxrz lyAF PZIV sYuz ", "GLmb LIXK sYjm cjuB foJh NIpF IYgm IsXc KhPq kjiX ", "cOSp rWzm pNXs uNtG qJWA hZgv cbTc OPiM Mvqs xDiM ", "ZUAi IsXc foJh qKlp ULmy fPBU aijy xwIQ QTSR nsjU ", "DGHS BniQ NIpF pVaT AClY xqxr xwIQ rIEm VBdj bkiA ", "tNZL oKNa qKWl gBqr sgHZ yOGN KJbH HVbM vhWp UPeH ", "Hvsq QTSR hwIm RPOE mxFp fffv oeUx HuIr dWqy EamI ", "XoVr CUZU YuET Lkkc DhRw aCgS oRiH lOBM nsjU dSqG ", "SKRF TZSO URym erWo gngf hLcY iONk bkiA rIEm rwFE ", "FzcS jYAW oaDM oRiH rPBb OdwG eBIm Mgjw sTJQ hhLX ", "whkx vhWp jyHe tEhO nEdj Gxrz xxpV Tpnj CEob oEWe ", "wIfO fZpb oupP pTCc fPBU IYgm UPeH JoiT iobz OMCl ", "fVqX qmNR QTSR qJWA RUHr EOrA tNZL rFDZ GaQr oKNa ", "kBft heML HFBG uUhb gGUW pTCc lUyI kgxZ cVdI SrMK ", "NuGe OPiM eDVX dERc RUHr qKWl MXgd kXqo Wjse BFih ", "NuGe zOrD aQdw ZoAm beLG PXRL SrMK GrAm WjJs RkfJ ", "GJXN oaDM QTSR cVdI uobt OPiM OdwG pVaT jgTF Lkkc ", "dWUR dWqy EMYP OMCl lQtn CUZU mAiX lxMO RPOE vTad ", "LahU JImO rIEm beLG sYuz QTSR TWLA MGVK TXtc MrPX ", "TYdV mAiX PJfr wsyp Rntr lxMO beLG uFEn RSvV ULmy ", "EBJf IYgm lCgO TZSO xgLy whkx Wjse ZXld nigB OdwG ", "DhRw XWTE wsyp WjJs lqGv Lkkc zixJ Hvsq oKNa hCuc ", "kXqo XUea gIaC Mgjw UIDx iONk ZXld FqnJ ETrG PvyH ", "vhWp fVqX GYMI gDQc oRiH yOGN MzVw cbTc kgxZ HPQt ", "MbZQ RUOd tgqw XWTE GzFF jCRp JNjf sTJQ AMqM tNZL ", "bGiV LUCg GVHh ULmy HWuD hCuc ZBpw gtpE iobz TPDS ", "lqGv Lyai MXfn nEdj wsyp PuEI sTJQ zXQF sYuz yFYd ", "gBqr jCRp OcXP gtpE JImO GLmb OPiM YohS uobt ssUV "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 9, 11, 13, 15, 17, 18, 19, 22, 26, 27, 30, 31, 32, 36, 37, 42, 44};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> knownSpam = {"LWrA SWyq MSYP ZYSM oFHv CxKJ CtJb tnrr oqjy hBqx ", "BepZ wMAk bPzb UVMA VwKc FYzo EjLJ fQWF BrNQ jhOa ", "NyLh exOx ffnC jlzy ENXh otDa RZLN FbkV Gifd ulgg ", "vPoe BDIO WPXU EKPq fXUw Wxad OnTq mCPY Lshs hZsf ", "MdXI sfLO hilg WbhI dcHd VQxt LRnn dMZC BhbZ aZQN ", "tVeC VrYg wNEh zrIJ ljgz UEWz FhYo swdV FJUu wXyB ", "NrMr oyvq GBOO WUiJ oVhd VMWb gKdf dDxU SCNv JVGI ", "HUDC fpzl KfhP IkDC qgzK ewkR GeOU IWxc SItb PaYT ", "ckCA HEUD bOdy GaHT xyTj XLEG JkbP uAuu knbB WBRC ", "XAbQ Rtnv zzQj sgjO vFtw hrTv Uack LnaK LTNw TUiF ", "IIll dPfj EzbO GGgG PORV jmMU VbkG gDqg EyGJ lxua ", "YZyi Hiqy Eebk fluf bQGY UAtV YhIu ERSO LogI nHgv ", "Rzgo ZBLh sRkt Mhtg iIdB uxSg dPvv WcqD mkqS bVBj ", "sLDL aWtA YMHG YWeD LHpA cCYE pHIV YKLU DFWf YgJq ", "tUZI gjCd jcMT BJSy nBhO oIdG pIlV BDBl ZGeE chCr ", "DtzP iAcb FdLh PekV akMM FXlm IrsC KwmU KPGR ZAqc ", "hhGt FpeT SQbA IHqF iqDV IbzW cStR EglM tGUL bFER ", "uBWf KTyB bldd lbrG dJNG VJbh obKb fZDG Vidz LxTz ", "YsTM RLEX ZJgx uPiI SthE vKqs icNk rLkH vNuI ocBC ", "wNYp KFdA PMHf qvZE LPhT fttM SCZt jqqu PGAD psYe ", "LWrA SWyq MSYP ZYSM oFHv CxKJ CtJb tnrr oqjy hBqx ", "BepZ wMAk bPzb UVMA VwKc FYzo EjLJ fQWF BrNQ jhOa ", "NyLh exOx ffnC jlzy ENXh otDa RZLN FbkV Gifd ulgg ", "vPoe BDIO WPXU EKPq fXUw Wxad OnTq mCPY Lshs hZsf ", "MdXI sfLO hilg WbhI dcHd VQxt LRnn dMZC BhbZ aZQN ", "tVeC VrYg wNEh zrIJ ljgz UEWz FhYo swdV FJUu wXyB ", "NrMr oyvq GBOO WUiJ oVhd VMWb gKdf dDxU SCNv JVGI ", "HUDC fpzl KfhP IkDC qgzK ewkR GeOU IWxc SItb PaYT ", "ckCA HEUD bOdy GaHT xyTj XLEG JkbP uAuu knbB WBRC ", "XAbQ Rtnv zzQj sgjO vFtw hrTv Uack LnaK LTNw TUiF ", "IIll dPfj EzbO GGgG PORV jmMU VbkG gDqg EyGJ lxua ", "YZyi Hiqy Eebk fluf bQGY UAtV YhIu ERSO LogI nHgv ", "Rzgo ZBLh sRkt Mhtg iIdB uxSg dPvv WcqD mkqS bVBj ", "sLDL aWtA YMHG YWeD LHpA cCYE pHIV YKLU DFWf YgJq ", "tUZI gjCd jcMT BJSy nBhO oIdG pIlV BDBl ZGeE chCr ", "DtzP iAcb FdLh PekV akMM FXlm IrsC KwmU KPGR ZAqc ", "hhGt FpeT SQbA IHqF iqDV IbzW cStR EglM tGUL bFER ", "uBWf KTyB bldd lbrG dJNG VJbh obKb fZDG Vidz LxTz ", "YsTM RLEX ZJgx uPiI SthE vKqs icNk rLkH vNuI ocBC ", "wNYp KFdA PMHf qvZE LPhT fttM SCZt jqqu PGAD psYe ", "LWrA SWyq MSYP ZYSM oFHv CxKJ CtJb tnrr oqjy hBqx ", "BepZ wMAk bPzb UVMA VwKc FYzo EjLJ fQWF BrNQ jhOa ", "NyLh exOx ffnC jlzy ENXh otDa RZLN FbkV Gifd ulgg ", "vPoe BDIO WPXU EKPq fXUw Wxad OnTq mCPY Lshs hZsf ", "MdXI sfLO hilg WbhI dcHd VQxt LRnn dMZC BhbZ aZQN ", "tVeC VrYg wNEh zrIJ ljgz UEWz FhYo swdV FJUu wXyB ", "NrMr oyvq GBOO WUiJ oVhd VMWb gKdf dDxU SCNv JVGI ", "HUDC fpzl KfhP IkDC qgzK ewkR GeOU IWxc SItb PaYT ", "ckCA HEUD bOdy GaHT xyTj XLEG JkbP uAuu knbB WBRC ", "XAbQ Rtnv zzQj sgjO vFtw hrTv Uack LnaK LTNw TUiF "};
    vector<string> newMail = {"dPfj YKLU MdXI iAcb dJNG VwKc LPhT IkDC EglM SWyq ", "ULFC ULFC nBhO zjdj OOwl VbkG UAtV otDa JSYh BDBl ", "MSYP ZCCv PekV IkDC Xpph RBOc nwII KGGQ vFtw RZXk ", "ocBC Eebk exOx GaHT VwKc cStR dJNG rpcn UEWz aZQN ", "ljgz ZJgx DFWf oIdG oyvq EhYj uKot VrYg hvhN KwmU ", "FdLh nNnp jcMT lxua WEoF nSpE hilg RZLN KTyB lxua ", "vPoe JkbP UAtV HUDC fttM ewkR nHgv xyTj fZDG fuGv ", "sDNp uxSg jztO PecS kGbb aWtA uAuu vNuI hilg Qiiw ", "fXUw SQbA KFdA oUbB otDa ewkR hqSa nHgv oVhd dMZC ", "SCZt YhIu NyLh sLDL ENXh sgjO FJUu zrIJ oIdG gKdf ", "pHIV EzbO vNuI dMZC qgzK bldd sAkl PGAD SItb BepZ ", "cFNp wMAk ocBC fUUt DOsJ xqRU CtJb ocBC Gifd bldd ", "RLuM wXyB inSS gKdf GeOU BepZ qvZE pmZP uPiI Gifd ", "ijLe XVAu uWTx UZcb SQbA aZQN dcHd MsKn fvnv IWxc ", "SWyq uBWf jlzy PGAD IlTK XAbQ IrsC Vidz iIdB VbkG ", "ERSO Lshs ljgz vFtw BepZ tUZI QLdD xyTj FYzo bOdy ", "GBOO IGJU ZAqc OQYz dkOm VCYD chIa fVqN AXeA zrIJ ", "gDqg dPfj IWxc wgpv VwKc eSSL uBWf yayG FYzo sfLO ", "rSpk LRnn SvDv PekV SxTk WbhI fpzl Xpph uWTx DFWf ", "PGAD EglM akMM RLEX JkbP aZQN uAuu jhOa IkDC pHIV ", "oyvq fXUw BepZ mwAl ffnC dMZC UAtV FJUu TUiF HUDC ", "uKot RLuM qOpW rQsn Hiqy gjCd DtzP ijLe tnsI Ikxy ", "tsgJ ulgg XLEG KfhP LHpA vKqs uBWf tVeC zzQj YZyi ", "SWyq FXlm WUiJ DsfQ oUnA GGgG exOx LPhT YgJq BhbZ ", "YZyi VQxt sRkt LxTz YhIu NyLh NIsL EjLJ mCPY chCr ", "YKLU QbCz Wxad LTAx VrYg GeOU LHpA cStR bVBj jqqu ", "RzlG oUnA PMHf SQbA vFtw JkbP DqFn jqqu SHHT bRLn ", "dMZC uAuu tnsI dMZC DFWf psYe PecS ljgz Rzgo Mhtg ", "UZcb bFER uxSg BepZ BepZ XAbQ ThkA SthE KTyB jcMT ", "nHgv YgJq LnaK IIll GaHT Wxad nHgv fXUw fluf lxua ", "xyTj SItb fXUw wNYp vPoe KFdA Eebk akMM dPfj pmZP ", "SQbA hilg BepZ PGAD dcHd Eebk dPfj sRkt vKqs PGAD ", "sLDL uoOk YMHG RLuM EhYj LclY KGGQ BDIO fPAX BrNQ ", "EkIL OYdM fttM ZAqc zrIJ jhOa YWeD sfLO VQxt vKqs ", "zrIJ GGgG mCPY zrIJ NyLh GeOU sLDL ocBC FXlm IHqF ", "Rtnv PMHf UEWz KwmU ewkR tGUL oyvq SItb KQBO LogI ", "dcHd otDa Hiqy YsTM Ikxy exOx DFWf WPXU uBWf TLHe ", "LTAx bldd dNiY DQyR ZAqc oyvq BDBl pHIV cFNp RvJg ", "SthE dcHd nHgv gjCd icNk exOx dMZC KFdA CtJb qgzK ", "TLHe WUiJ FhYo yCtE tUZI otDa GGgG HEUD EhYj qDls ", "cLnK LPhT wNEh NrMr vTkN FJUu tnrr PaYT bldd aWtA ", "fuGv RZLN EjLJ KGGQ bVBj cFNp dkOm akMM BDBl bRLn ", "obKb vPoe rQsn DjDC pkJp PORV ENXh LRnn dPfj TUiF ", "FdLh fQWF ZBLh AXeA WBRC CtJb qvZE rSpk IlTK dPfj ", "EhYj RZXk JkbP inSS nwII SvDv qOpW fUUt dkLN fluf ", "jmMU iAcb Lshs KwmU sgjO vNuI VQxt YZyi oFHv PMHf ", "GeOU iAcb chCr FJUu fluf FYzo exOx qgzK EjLJ aSDa ", "bVBj IbzW IHqF uPiI UEWz BepZ icNk UVMA knbB HUDC ", "wXyB JVGI NIsL HEUD oIdG PGAD LHpA mkqS tVeC VwKc ", "chCr ewkR jhOa fQWF ZJgx FdLh YMHG WUiJ XLEG HUDC "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 7, 11, 12, 13, 16, 17, 18, 21, 26, 32, 37, 39, 41, 42, 44};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> knownSpam = {"vkke FdrM dpHF umuS dsIh zLPc eBMK PHne qTKd mMLO ", "EyBu PxqH Xrnq Axua jweU dpuL eDeL btwQ XWLR menX ", "kYHx uwdv wUJV olKC hUCX MvOQ vjLL MhNa Rvwi PVZG ", "eeac yiqk lYwe FPha WKsk KVJH rvKH QkXU vOPS gpAh ", "kArY XQhI ieKP BTBr FMCm OgaN ZjmH bKTo UTfk EXek ", "SANB rabR aEab nyiA XdxC pQMS UvwD Swtu OzCy abSK ", "QdII ZBDS RWSU oYhj MNul UuEX qlvF hCJe Tnnu rCFG ", "LYwE ntTS ccpJ eOpf uHav MmWZ lgqI RRQp NLUb aUnP ", "oxek obzB msur bcQm jlLA rRgH IZcp xVHg tUTl eWSC ", "TeGy qbYh KNlP ZPeP mwVe kPBv ZciV kbeO nqMY hNQk ", "AupU cWVi RMkl MPsQ CWuo XZXM oTvY tXlU PNNk assE ", "omHe bNso HuLZ RFRJ FysH cAUo StfH ROhw DCUy vUZP ", "wXlt YLFM qKhV IKEq FPdI LHXn aDyZ ndIJ NOkr TyNb ", "fNzN wFpv MnZo CpeA hyxX jvzN OGcl WfHX kILo QnLe ", "HgeO FlXU oHhP nTTv LcWs hqqL luId oOiw qHon cuIX ", "Xhyq zlFF BEYH Qqet PhFJ UKyp yrjT UtWA nBhT zwsp ", "eNAE zbDV QWsk IYrs dRLF vZyM SnAT btID MIhY XvtN ", "qQVt RYiK dlky qsbH mSBK QMxN xsPG OMIa QAOJ lplD ", "VWfq mHZw OmbP NwXg LXiP qSxj ZRAQ yYea pRHs OVsQ ", "SBOH dyCf JOyS OfGi Ytct LBEI deLt OgYC SxeV mRbM ", "vkke FdrM dpHF umuS dsIh zLPc eBMK PHne qTKd mMLO ", "EyBu PxqH Xrnq Axua jweU dpuL eDeL btwQ XWLR menX ", "kYHx uwdv wUJV olKC hUCX MvOQ vjLL MhNa Rvwi PVZG ", "eeac yiqk lYwe FPha WKsk KVJH rvKH QkXU vOPS gpAh ", "kArY XQhI ieKP BTBr FMCm OgaN ZjmH bKTo UTfk EXek ", "SANB rabR aEab nyiA XdxC pQMS UvwD Swtu OzCy abSK ", "QdII ZBDS RWSU oYhj MNul UuEX qlvF hCJe Tnnu rCFG ", "LYwE ntTS ccpJ eOpf uHav MmWZ lgqI RRQp NLUb aUnP ", "oxek obzB msur bcQm jlLA rRgH IZcp xVHg tUTl eWSC ", "TeGy qbYh KNlP ZPeP mwVe kPBv ZciV kbeO nqMY hNQk ", "AupU cWVi RMkl MPsQ CWuo XZXM oTvY tXlU PNNk assE ", "omHe bNso HuLZ RFRJ FysH cAUo StfH ROhw DCUy vUZP ", "wXlt YLFM qKhV IKEq FPdI LHXn aDyZ ndIJ NOkr TyNb ", "fNzN wFpv MnZo CpeA hyxX jvzN OGcl WfHX kILo QnLe ", "HgeO FlXU oHhP nTTv LcWs hqqL luId oOiw qHon cuIX ", "Xhyq zlFF BEYH Qqet PhFJ UKyp yrjT UtWA nBhT zwsp ", "eNAE zbDV QWsk IYrs dRLF vZyM SnAT btID MIhY XvtN ", "qQVt RYiK dlky qsbH mSBK QMxN xsPG OMIa QAOJ lplD ", "VWfq mHZw OmbP NwXg LXiP qSxj ZRAQ yYea pRHs OVsQ ", "SBOH dyCf JOyS OfGi Ytct LBEI deLt OgYC SxeV mRbM ", "vkke FdrM dpHF umuS dsIh zLPc eBMK PHne qTKd mMLO ", "EyBu PxqH Xrnq Axua jweU dpuL eDeL btwQ XWLR menX ", "kYHx uwdv wUJV olKC hUCX MvOQ vjLL MhNa Rvwi PVZG ", "eeac yiqk lYwe FPha WKsk KVJH rvKH QkXU vOPS gpAh ", "kArY XQhI ieKP BTBr FMCm OgaN ZjmH bKTo UTfk EXek ", "SANB rabR aEab nyiA XdxC pQMS UvwD Swtu OzCy abSK ", "QdII ZBDS RWSU oYhj MNul UuEX qlvF hCJe Tnnu rCFG ", "LYwE ntTS ccpJ eOpf uHav MmWZ lgqI RRQp NLUb aUnP ", "oxek obzB msur bcQm jlLA rRgH IZcp xVHg tUTl eWSC ", "TeGy qbYh KNlP ZPeP mwVe kPBv ZciV kbeO nqMY hNQk "};
    vector<string> newMail = {"jlLA WKsk XvtN FPdI kILo dVYD IKEq ntTS FPdI eNAE ", "pQMS WKsk MIhY MvOQ OzCy UtWA MmWZ fNzN KVJH RWSU ", "eDdM QMxN QZMZ OrFb Xrnq TyNb qQVt wXlt pAAE gaZJ ", "sBPM eOpf AOwM jMYh OmbP eOpf hSXg SvpY huCd BevL ", "LcWs rCFG bKTo IKEq qsbH qHon ROhw LDQD XWLR qTKd ", "vOPS XvtN UuEX Qqet JimP UvwD MIhY eNAE vkke MPsQ ", "rCFG mwVe dpHF btID ooDf PHne DQXv eDeL zsgq MsSr ", "RtNV ClCz fybD zXhg mRbM bKTo pymJ ntTS LBEI Swtu ", "vjLL KNlP FdrM PHne mwVe JqGn ZjmH nTTv wXlt egBd ", "UuEX NBDL OgaN dlky MViq PHne nBhT QWsk btID RRQp ", "rabR xVHg wXlt nqMY UtWA Tnnu RFRJ UtWA eWSC oOiw ", "bcQm tUTl orWc fjUZ qsbH ZBDS lplD xxcL lYwe XWLR ", "jyps HgeO orWc MhNa FysH xFuM pAAE fJNW zbDV QnLe ", "WRrb aUnP NOkr RYiK GBkZ wFpv wmCw XZXM NLUb gtYh ", "zbDV Bbmy GRWF nTTv bKTo TeGy olKC FPha KNlP assE ", "qSxj EuAJ iyFB cWVi OgYC mHZw wUJV ClCz fkDE mSBK ", "MVaX zsgq XWLR SiBg gaZJ GqqN btwQ DypT oeXW SnAT ", "YtNJ jweU aEab PhFJ PhFJ vYko wFpv UtWA XWLR gpAh ", "eNAE gpAh menX JimP zXhg eNAE ADOF OrFb QAOJ MPsQ ", "chrF BywM fNzN vZyM jyps Axua qsbH ntTS gfzf batx ", "oKVF vOPS vkke NLUb Ytct COQN hCJe MnZo NwXg FPha ", "StfH eWSC zlFF jvzN oOtV CpeA IKEq kYHx hqqL mHZw ", "pQMS umuS QMxN fNzN ndIJ XdxC sBPM zbDV xUOd EHHe ", "UKyp fjUZ ccpJ tXlU ADOF dpHF xxcL deLt LHXn omHe ", "vnMa dlky QdII DQQb XbIx btID jlLA dsIh erVk LBEI ", "RtNV aQbb YtNJ dRLF dRLF mRbM aQbb pyhk WxWB IxPF ", "ROhw umuS nqMY nBhT chrF dpHF qSxj JOyS yYea Ytct ", "eDdM OVsQ BEYH fNzN dRLF abSK xUOd Rvwi oxek LMxu ", "mwVe OzCy jvzN eOpf IZcp yYea SnAT vkke SnAT SANB ", "UtWA MhNa LXiP vbmf LxjA pSMA MsSr vYko oYhj ookw ", "KVJH NFDS LcWs bKTo jlLA vUZP qlvF FMCm lplD UuEX ", "SBOH egBd LcWs IZcp rCFG OgYC TFoM wXlt LHXn WKsk ", "ntTS Tnnu pRHs hUCX ZciV FysH aDyZ oTvY vjLL OzCy ", "Rvwi vUZP NOkr tmfl olKC UuEX MqUC WfHX kPBv umuS ", "EuAJ hRYx omHe MIhY qHon jMYh vbmf cAUo qHon UTfk ", "TeGy VWfq MIUH hyxX mSBK XZXM rRgH AjlI UtWA gGNq ", "fjUZ ZjmH ZjmH OgaN OgaN rvKH WfHX OgYC COQN BTBr ", "UvwD FMCm btID cWVi qsbH rvKH OfGi yrjT OfGi bcQm ", "MhNa HuLZ HgeO eWSC mwVe TGle BevL omHe EHHe CWuo ", "uSzk MhNa kArY TFoM vkke vUZP FFYv PbSU HCZh MsSr ", "NVTY ieKP MnZo PhFJ uLNB MNul StfH FFYv mHZw XZXM ", "nqMY FMCm ZjmH pQMS zlFF menX xVHg bcQm XWLR hVgx ", "lplD PhFJ dpHF iEcD QWsk WfHX SBOH kPBv WfHX FdrM ", "SBOH tfmo OrFb SnAT jfyY LYwE gfzf OGcl NVTY GBkZ ", "Qqet hyxX ROhw oOiw menX lgqI nqMY LcWs Jjqz Bbmy ", "qQVt qlvF deLt jNHk LOtK oEsY OMIa ROhw oKVF eBMK ", "uwdv NBDL OgaN nBhT bNso QalC menX jweU uHav QnLe ", "nqMY MVaX tzmy umuS gcEz XbIx aDyZ deom lYwe yrjT ", "nTTv abSK mHZw uwdv MnZo bKTo BEYH PHne RFRJ Axua ", "NBDL OVsQ OMIa OMIa ZkOk AyrX JqGn ZBDS FPha WRrb "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 6, 7, 11, 12, 13, 15, 16, 18, 19, 22, 23, 24, 25, 27, 29, 34, 35, 38, 39, 40, 43, 45, 47, 49};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> knownSpam = {"vvkX IBpD iJgP OKKJ GMJf hXAQ vvKG qrCA xIdf llye ", "LLgT KDQy KEQC LcAd mMom zSqW dgRi vkJo MjvL sAPm ", "cHYN ZghZ CwDW loNo taGl SFSu zCgD urIy LVSA prpt ", "XixG YQhm GDWv Ptps OPHW WoYV fZPi acns lnyR Ersj ", "VDzt AsSV bAAd nhmA okCA kMAP JCYE BxdQ ZRnz ntpm ", "hOMc twZf XdzV HfaO RowK wtwV SCdw utrL QUBO ItTS ", "eRub QAzE jFXk XsRJ UZVV nLCT REho Axrc Ckbv ZIRe ", "yUrK gpEN HHrq ZxYr OLeJ xwmp cqyY Iiew OuiH OZVZ ", "jIvK sIvi VoOf PJaf vhro Prll DTjw xMEw gHCi RXdZ ", "gMMP LFEM rgLT AHOq VyWs Vheu rxaN aoxw tqcE XgBk ", "wVUj GNVS YcDF etpx CpdA UfoK rYew lpwo qlYF xOqW ", "NVaM tcjD zhST Qlgk unTj Qhsk lsGo RRBi aoMg QZfI ", "JCAR tWGV SKlO cwjz SpmS XoDF Jpjj lNNq kzib vKve ", "jbSl JpAT zYQc lYWM dqZt yfRy Qqxt ygVH yuMg ItYV ", "ObsZ toEH aJAs FQvP JrWK SVKU tpFq nzNf OAeO BuMZ ", "keGK hwQn YgZD TQRI eWkP zgkN XjTb HruH TnaL yKSH ", "nLLz NeOb LZRF Jwmz tdVT KWGY HaQE gnHy MImL VqJa ", "irwi Amyg oKyL Swkd BjZl gnGd JIML RKLB iwiO ofvd ", "ECZO HEhS zznp gJvE MnMS bUas XkJP puzZ xIuy lfba ", "LmXV GuSC QAKF GgUW OmnW XwZt EZpo lJEu gjuJ kZTc ", "vvkX IBpD iJgP OKKJ GMJf hXAQ vvKG qrCA xIdf llye ", "LLgT KDQy KEQC LcAd mMom zSqW dgRi vkJo MjvL sAPm ", "cHYN ZghZ CwDW loNo taGl SFSu zCgD urIy LVSA prpt ", "XixG YQhm GDWv Ptps OPHW WoYV fZPi acns lnyR Ersj ", "VDzt AsSV bAAd nhmA okCA kMAP JCYE BxdQ ZRnz ntpm ", "hOMc twZf XdzV HfaO RowK wtwV SCdw utrL QUBO ItTS ", "eRub QAzE jFXk XsRJ UZVV nLCT REho Axrc Ckbv ZIRe ", "yUrK gpEN HHrq ZxYr OLeJ xwmp cqyY Iiew OuiH OZVZ ", "jIvK sIvi VoOf PJaf vhro Prll DTjw xMEw gHCi RXdZ ", "gMMP LFEM rgLT AHOq VyWs Vheu rxaN aoxw tqcE XgBk ", "wVUj GNVS YcDF etpx CpdA UfoK rYew lpwo qlYF xOqW ", "NVaM tcjD zhST Qlgk unTj Qhsk lsGo RRBi aoMg QZfI ", "JCAR tWGV SKlO cwjz SpmS XoDF Jpjj lNNq kzib vKve ", "jbSl JpAT zYQc lYWM dqZt yfRy Qqxt ygVH yuMg ItYV ", "ObsZ toEH aJAs FQvP JrWK SVKU tpFq nzNf OAeO BuMZ ", "keGK hwQn YgZD TQRI eWkP zgkN XjTb HruH TnaL yKSH ", "nLLz NeOb LZRF Jwmz tdVT KWGY HaQE gnHy MImL VqJa ", "irwi Amyg oKyL Swkd BjZl gnGd JIML RKLB iwiO ofvd ", "ECZO HEhS zznp gJvE MnMS bUas XkJP puzZ xIuy lfba ", "LmXV GuSC QAKF GgUW OmnW XwZt EZpo lJEu gjuJ kZTc ", "vvkX IBpD iJgP OKKJ GMJf hXAQ vvKG qrCA xIdf llye ", "LLgT KDQy KEQC LcAd mMom zSqW dgRi vkJo MjvL sAPm ", "cHYN ZghZ CwDW loNo taGl SFSu zCgD urIy LVSA prpt ", "XixG YQhm GDWv Ptps OPHW WoYV fZPi acns lnyR Ersj ", "VDzt AsSV bAAd nhmA okCA kMAP JCYE BxdQ ZRnz ntpm ", "hOMc twZf XdzV HfaO RowK wtwV SCdw utrL QUBO ItTS ", "eRub QAzE jFXk XsRJ UZVV nLCT REho Axrc Ckbv ZIRe ", "yUrK gpEN HHrq ZxYr OLeJ xwmp cqyY Iiew OuiH OZVZ ", "jIvK sIvi VoOf PJaf vhro Prll DTjw xMEw gHCi RXdZ ", "gMMP LFEM rgLT AHOq VyWs Vheu rxaN aoxw tqcE XgBk "};
    vector<string> newMail = {"ObsZ Amyg vvkX twZf nLLz ObsZ ntpm twZf XkJP qrCA ", "kzib Jpjj lnyR Vheu nzys hLfK aExC opsn LcAd eleZ ", "BxdQ MHii SVKU acns sqan VibS JCAR CpdA zJuv GDWv ", "ItYV tLse sIvi Ckbv zznp vSoJ etpx gJvE SFSu dqZt ", "lnyR JIML ECZO UfoK hOMc MImL QAzE VyWs OeGn gWQF ", "LVSA Axrc vSoJ DHUy ECZO Xyfq jdLB uwwv hvEm keGK ", "ysmv ntpm LcAd wtwV DrJi etpx vsBu nhmA KEQC oqEp ", "iJgP zznp oKyL OAeO YgZD SVKU zznp vvkX MnMS BQOf ", "cqyY OAeO cHYN BuMZ JIML JpAT MEyw tcjD XdzV nLCT ", "oqEp ObsZ XixG OLeJ YGQV wtwV GNVS uwwv lYWM bsZM ", "VEEp taGl GYjF UHbN HfaO YRIm OuiH jUZm BxdQ Mvyx ", "Jwmz wtwV yPBM eRub fjaR eRub IBpD unTj rYew OLeJ ", "nzNf tpFq BWlj sAPm zJuv yEZK gjuJ XsRJ AHOq zYPi ", "fScL utrL OLeJ ObsZ rxaN Ckbv MjvL AHOq qLSm ZghZ ", "bAAd JrWK HfaO DrJi KWGY XwZt Axrc UxlT yuMg gpEN ", "lsGo llye UZVV SKlO nChT Qsit uwwv uYFR VEEp VpuP ", "FDxg lYWM OmnW oyeC ofvd AHOq pARP SVKU RBsp BuMZ ", "loNo zhiY sVnA vKve EZpo mMom urIy hXAQ ZghZ cqyY ", "CwDW sqan CpdA sAPm AHOq lnyR vsBu vvKG MXSl fcMk ", "lJEu xwmp qbsL xOqW Ersj iJgP OKKJ yPBM aJAs xIuy ", "tLse kkjo XjTb OVbb wJLX iJgP RGIO KFsr kAti OLeJ ", "OPHW lJEu lsGo YcDF GNVS ylWI tWGV ZRnz LVSA VDzt ", "OIqo JzBw opsn DrJi QAKF Owdd wmMj ZmKA WvEA QAzE ", "OZVZ BxdQ ZghZ iqwV vhro LFEM ZIRe xIdf ItYV xMEw ", "ObsZ Swkd oOVZ LLgT bUas OAeO CwDW RJyi XsRJ OIqo ", "XkJP vvkX GYjF ysmv yUrK MHii rxCb KEQC KFsr jbSl ", "KDQy uwwv Jwmz fjaR sLpt gpEN EzLO EzLO nLLz sAPm ", "taGl ECZO UZVV RowK zznp lNNq ORUw PRpb ysmv gbgR ", "vvKG tLse NyCS oKyL utrL vhro ObsZ ZqxN Qlgk reMs ", "aJAs OuiH aFLm HfaO BQOf TQRI BUdV eeqc qlYF lpwo ", "CpdA vKve gJvE hXAQ sIvi WvEA JCAR OZVZ urIy JIML ", "yEZK XgBk DTjw YgZD rxaN aoMg davF zCgD lNNq KDQy ", "UHbN XdzV ZghZ QZfI JCYE lpwo tWGV ZxYr HHrq kMAP ", "KFsr mzkN OTqN ZaJh Iiew ygVH yUrK rxaN Iiew gMMP ", "gMMP vvKG vkJo zSqW NVaM AHOq xIuy prpt REho LLgT ", "OZkH zYQc MnMS tqcE VDzt Jpjj ZxYr KDQy NyCS OuiH ", "oqEp qLSm LxSC HhPE fZPi XoDF tbvy mzkN VDzt reMs ", "tWGV yfRy OVbb gpEN WvEA RXdZ zYQc OuiH SCdw lfba ", "eWkP VoOf GgUW vvkX FQvP cwjz HaQE XgBk RWbw KWGY ", "jbSl LVSA xwmp Prll gJvE OAeO JCYE prpt BjZl nLCT ", "SCdw gjuJ VyWs yfRy cHYN Iiew utrL HHrq Ersj toEH ", "lfba HEhS taGl SpmS LcAd aoMg tqcE cqyY cqyY CpdA ", "YGQV LVSA JpAT KEQC zCgD okCA Prll gjuJ HfaO SVKU ", "GuSC loNo teUC WwRC hLfK sqWF zhiY YRIm jZlL GMJf ", "utrL Iiew JnDP cwjz yEZK ofvd CmoI lJEu HYqE OmnW ", "GyRG WIMi iqwV VEEp wmMj REho vKve TnaL CmoI ABlX ", "yfRy wasx hwQn yfRy ZRnz lGnM NZau OuiH bAAd cIjq ", "WYGS wJLX sVnA LFEM JpAT QZfI Jpjj EZpo NeOb Iiew ", "TQRI zhST LFEM lpwo nzNf XwZt lsGo vkJo hwQn CwDW ", "axbe sqan Jwmz eRub Qhsk xMEw ItYV lsGo lsGo LZRF "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5, 6, 9, 10, 12, 15, 16, 18, 20, 22, 24, 25, 26, 27, 28, 29, 33, 36, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> knownSpam = {"etuM DKGy TQHL EOMi DKWj mKFn noVv mnpw Oary gaxr ", "atZj VnuL uZwP UJgV hnhy wsPt EPzt XdUq fSDP PPXQ ", "UQCc ZRxM duMY gonf FfFQ FcFg GDfp xfTK cmCl LkqT ", "bcis CUTy MwTs ZnOY HLvX cbrx JUtX gbHP jaHs SEmN ", "xHIM CWdo Suid VjFE Newe PFuI tIzt hrIk njkV yswx ", "EmIU NyXM Lnqt AfkB mxPL FChx lSAD sCGm wVpA yYHF ", "HAfF vcCy NyFp YItF Ypad VHrB dnVw affG yMza Fiep ", "VyTX pjFj ZTkM PQnT hZol coqs Koaf oOWk QqIb Aort ", "htQr DxWv Tbbr IuQy tUwx Bfxf FOgz JmtY Wuwv qdVm ", "HBgB GnRi lPJj JDns Zhvb oHSH WDrw PdCn NylY qIuB ", "sKCy XvgR msBI hTZL MIpF OUPs ymVs dkxm Zdhy PGoy ", "VmHy xzZU ctSD fjnm YnEI tcwb QbMS FhnA PYjx WLrt ", "eNGa eaOQ BHip IARU xVKb JbiT qirA KvYb qUap zMgw ", "kaju AHGC ETzB HGse Iref MiIW gEkF aqdT wmLI ryqZ ", "SELv MDEW AAIc ksAh FXGK Ekhs bAHf UpFp NECW qFUH ", "qpBJ yrKN TJnn jFRU gHxy bPzF jZgh jKTo uFFa eFYx ", "QrHc RKTe Qdnu dFFi mtON CyRK xtUw YSRW jpGz FzJQ ", "lTkW kuhL YICO qPyJ phyj pcVY MmkW PLeL Qwwz SbdN ", "oAun pLnc ocAX nwwu rwNV XnOO ulfh FsXb yiNR ziij ", "cDkP odOJ EEqC haNT ytBo PMNf LVbr KNVs DpsM fZQQ ", "etuM DKGy TQHL EOMi DKWj mKFn noVv mnpw Oary gaxr ", "atZj VnuL uZwP UJgV hnhy wsPt EPzt XdUq fSDP PPXQ ", "UQCc ZRxM duMY gonf FfFQ FcFg GDfp xfTK cmCl LkqT ", "bcis CUTy MwTs ZnOY HLvX cbrx JUtX gbHP jaHs SEmN ", "xHIM CWdo Suid VjFE Newe PFuI tIzt hrIk njkV yswx ", "EmIU NyXM Lnqt AfkB mxPL FChx lSAD sCGm wVpA yYHF ", "HAfF vcCy NyFp YItF Ypad VHrB dnVw affG yMza Fiep ", "VyTX pjFj ZTkM PQnT hZol coqs Koaf oOWk QqIb Aort ", "htQr DxWv Tbbr IuQy tUwx Bfxf FOgz JmtY Wuwv qdVm ", "HBgB GnRi lPJj JDns Zhvb oHSH WDrw PdCn NylY qIuB ", "sKCy XvgR msBI hTZL MIpF OUPs ymVs dkxm Zdhy PGoy ", "VmHy xzZU ctSD fjnm YnEI tcwb QbMS FhnA PYjx WLrt ", "eNGa eaOQ BHip IARU xVKb JbiT qirA KvYb qUap zMgw ", "kaju AHGC ETzB HGse Iref MiIW gEkF aqdT wmLI ryqZ ", "SELv MDEW AAIc ksAh FXGK Ekhs bAHf UpFp NECW qFUH ", "qpBJ yrKN TJnn jFRU gHxy bPzF jZgh jKTo uFFa eFYx ", "QrHc RKTe Qdnu dFFi mtON CyRK xtUw YSRW jpGz FzJQ ", "lTkW kuhL YICO qPyJ phyj pcVY MmkW PLeL Qwwz SbdN ", "oAun pLnc ocAX nwwu rwNV XnOO ulfh FsXb yiNR ziij ", "cDkP odOJ EEqC haNT ytBo PMNf LVbr KNVs DpsM fZQQ ", "etuM DKGy TQHL EOMi DKWj mKFn noVv mnpw Oary gaxr ", "atZj VnuL uZwP UJgV hnhy wsPt EPzt XdUq fSDP PPXQ ", "UQCc ZRxM duMY gonf FfFQ FcFg GDfp xfTK cmCl LkqT ", "bcis CUTy MwTs ZnOY HLvX cbrx JUtX gbHP jaHs SEmN ", "xHIM CWdo Suid VjFE Newe PFuI tIzt hrIk njkV yswx ", "EmIU NyXM Lnqt AfkB mxPL FChx lSAD sCGm wVpA yYHF ", "HAfF vcCy NyFp YItF Ypad VHrB dnVw affG yMza Fiep ", "VyTX pjFj ZTkM PQnT hZol coqs Koaf oOWk QqIb Aort ", "htQr DxWv Tbbr IuQy tUwx Bfxf FOgz JmtY Wuwv qdVm ", "HBgB GnRi lPJj JDns Zhvb oHSH WDrw PdCn NylY qIuB "};
    vector<string> newMail = {"qvnR UJgV Jjru xtUw njkV Vtde jKiP bOFy DZKI fSDP ", "fjnm hnhy gaxr duMY tYHG OzON rcZz dJBr UJgV dnVw ", "FhnA JYSL aWIr VnuL mCvy OUPs AlfT haNT ifAY xCsS ", "oAun FEbL ytBo GDfp coqs MwTs uFFa YnMZ qdVm KvYb ", "PQnT wsPt HGse SEmN Lnqt mKFn Aort HAfF cDkP EPzt ", "oHSH AfkB EtUC ocAX hZol kuhL mKFn SMaF toQC ulfh ", "fZQQ DxWv FOgz mnpw vcCy affG rcZz hrIk jFRU UpFp ", "UpFp sVJy lSAD sKCy oOWk xzXz RgvH mxPL cSBE RKTe ", "vcCy FOgz Bfxf DpsM AfkB Qwwz FfFQ FChx Bfxf gHxy ", "ZRxM EmIU dcRF ldhi VnuL Lnqt yrKN wZBM IuQy kaju ", "NECW hcKr oAun gonf DxWv Suid AHGC QrHc ksAh rwNV ", "YSRW wJfL htQr phyj bKyD EmIU gaxr BSzs xHIM ctSD ", "Cqcg XnOO mtON zJGE pqog LkXt PMNf AlfT gbHP xGka ", "gonf EmuR lVUF LlfP kaju pctq kaju xGka mNpN MnDa ", "UpFp hZol TJnn qIuB eNGa SbdN nwwu UQCc yiNR tIzt ", "EmIU qPZc qcTw YnMZ Rvot VmHy QWlQ DKGy Lnqt wZBM ", "sCGm sEpD ytBo YnEI mKFn SELv sKCy RKTe ksAh coqs ", "Tbbr JlBh Lnqt affG qPyJ PLeL UQCc gbHP GnRi XnOO ", "ymVs lSAD Lnqt dkxm NylY cDkP Mofs KvYb Tbbr Cqcg ", "fZQQ xVKb JDns SELv eNGa TQHL Fiep PdCn Ypad bOFy ", "qpBJ coqs AHGC kaju XTJz ryqZ phyj LkXt RgvH BEFZ ", "bVJV JDns VHrB XdUq GDfp NyFp xVKb PLeL FhnA jKTo ", "yrKN pLnc kaju PGoy WDrw eNGa fZQQ HBgB gEkF PLeL ", "EmuR yiNR TJnn VgMZ EOMi mnpw MIpF BWBQ BmtP TQHL ", "PMNf nwwu gbHP XDCQ rNWU bVJV RgvH sKCy xnJZ AlfT ", "yswx jpGz bOFy ZiVw oHSH DpsM DKWj gEkF YnEI eNGa ", "PMNf mnpw IARU eNGa pNUE PPXQ FOgz tIzt wmLI MwTs ", "ToPe JbiT OrTa NylY HYyN rwNV JcHu UQCc qFUH heJI ", "PdoL FOgz gbHP jaHs vcCy pcVY MiIW VnuL hsRB MiIW ", "tUwx eFYx PLeL fSDP Newe VnuL NECW msBI Wuwv atZj ", "FcFg nogR UJgV jpGz Qdnu fZQQ pjFj duMY roNX tUwx ", "FfFQ msBI OzON reuW CWdo PXjp gHxy aKzN OLQD ziij ", "XdUq Koaf qPyJ UQCc PRJF EEqC Zhvb NylY PLeL eNGa ", "msBI SQOe Ekhs gonf YSRW dFFi Oary BWBQ mnpw lSAD ", "bqDB sEpD MLNl YnEI xFBJ eaOQ uFFa cbrx MiIW mKFn ", "etuM FOgz qcTw zMgw ffmE PTae KLwb kuhL CQGd EmIU ", "affG njkV etuM ETzB msBI xtUw xfTK coqs vcCy kMAr ", "dXwx msBI KKyw MtSF gHxy ywtg zYSr PdoL YkiF YSRW ", "JbiT ksAh jKTo gonf jaHs aqdT sKCy CyRK qirA ymVs ", "ZTkM Zdhy JbiT yrKN phyj UJgV zMgw HBgB lPJj tUwx ", "xzXz haNT PXjp VmHy eGYf JmtY Oogw QqIb tcwb eGYf ", "CUTy qUap VjFE jaHs wSaN zMgw duMY Bfxf ZRxM AfkB ", "Vtde oHSH ZUXV ziij koBX DhMF BEFZ dVML kCBj qPZc ", "atZj etuM XnOO jpGz Tbbr XfhR WLrt lXWg odOJ coqs ", "Qdnu LAyl fpmt Oary ziij Wuwv ETzB EPzt peYR hZol ", "QrHc jaHs IARU xfTK ZTkM ryqZ nTCf hnhy hTZL noVv ", "MtSF FOgz SEmN RaRb CUTy Qdnu mtON PwoX ocAX OzON ", "FsXb pbLN hTnv tcwb DKWj ksAh XDCQ VjFE hTZL DhMF ", "HYyN pcVY hTZL MJKS SEmN AlfT ZnOY Aewe Tbbr qNPT ", "VnuL UJgV coqs xVKb LkqT ZRxM Suid BYtB PYjx duMY "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 7, 9, 11, 12, 13, 15, 20, 23, 24, 27, 31, 34, 35, 37, 40, 42, 44, 46, 47, 48};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> knownSpam = {"GBJO WuFE HKlM qryv VgmD fVyV WqqH qFtp AnjV doOo ", "SpaV KHTS vPuX DNkR satw gkRv ufGC mfEj YyXz FQTn ", "QaDV OxhW SLAo xbWi uCFd yClz ljQb rlYV YiYp QjHB ", "igXY lajw dDMh WBDQ JsxQ tfdJ rrtm tpRJ mGKn XmMD ", "gwvX hSVU BWis Bpmv NUPQ dTTz VQJf CnVn ipPe HmHZ ", "rNrN dUXi KCks JDtP vjNJ nsud KbWH vQJf pEpT vQob ", "PJZO zvrc kzIo PWLJ yuya sCMj OMCz dYuq uIbe xDOT ", "RTYN yhIe RWtS PNGp NJol GJHq NUFT OIsM MwAj dECd ", "sqhc NYtg Iais uLRY SUDS hODy qOjL LUQm NKJM zcXJ ", "uUsd itTn fJtu YQKe YQoV DFhk BQht fRWs keGE ckYc ", "bzTo Xzxr ZPMp vGLs xqJQ zKFk IScY iTuz mZRk gvML ", "hmYy eYdl wkas WIMi XdXO WLEr RgLB UbXv EGsY Nmkl ", "CQqO sTfO KWxR msbN GHmI kQea yjdh iheZ Gvre ZuXj ", "oTUO Zldx TUgI OdJK LQGC mBcE fknf Ryem VwSl TPoW ", "akbe gnJj YeOS ChDY CZcO AGue ZDJJ QuOl Zqie BahG ", "rBvT VOWV EHpn bzFI gBYP ohBJ fMlY JuUz uMki WvEc ", "mleF ktpA qhjX jdkD MyAT AaEC YAZq Perd agPd xLlx ", "vpLI yFrD cWvT HiQu xcfY Tgmk SYZe pWZc MGGb gWew ", "jWvm ozIv xFkI bcFQ tYGN weas bHNs wotj WeKd JBBD ", "Inyd Fsla XxMC eCay mdNK AugI jLeP ckNU WljU Sgsx ", "GBJO WuFE HKlM qryv VgmD fVyV WqqH qFtp AnjV doOo ", "SpaV KHTS vPuX DNkR satw gkRv ufGC mfEj YyXz FQTn ", "QaDV OxhW SLAo xbWi uCFd yClz ljQb rlYV YiYp QjHB ", "igXY lajw dDMh WBDQ JsxQ tfdJ rrtm tpRJ mGKn XmMD ", "gwvX hSVU BWis Bpmv NUPQ dTTz VQJf CnVn ipPe HmHZ ", "rNrN dUXi KCks JDtP vjNJ nsud KbWH vQJf pEpT vQob ", "PJZO zvrc kzIo PWLJ yuya sCMj OMCz dYuq uIbe xDOT ", "RTYN yhIe RWtS PNGp NJol GJHq NUFT OIsM MwAj dECd ", "sqhc NYtg Iais uLRY SUDS hODy qOjL LUQm NKJM zcXJ ", "uUsd itTn fJtu YQKe YQoV DFhk BQht fRWs keGE ckYc ", "bzTo Xzxr ZPMp vGLs xqJQ zKFk IScY iTuz mZRk gvML ", "hmYy eYdl wkas WIMi XdXO WLEr RgLB UbXv EGsY Nmkl ", "CQqO sTfO KWxR msbN GHmI kQea yjdh iheZ Gvre ZuXj ", "oTUO Zldx TUgI OdJK LQGC mBcE fknf Ryem VwSl TPoW ", "akbe gnJj YeOS ChDY CZcO AGue ZDJJ QuOl Zqie BahG ", "rBvT VOWV EHpn bzFI gBYP ohBJ fMlY JuUz uMki WvEc ", "mleF ktpA qhjX jdkD MyAT AaEC YAZq Perd agPd xLlx ", "vpLI yFrD cWvT HiQu xcfY Tgmk SYZe pWZc MGGb gWew ", "jWvm ozIv xFkI bcFQ tYGN weas bHNs wotj WeKd JBBD ", "Inyd Fsla XxMC eCay mdNK AugI jLeP ckNU WljU Sgsx ", "GBJO WuFE HKlM qryv VgmD fVyV WqqH qFtp AnjV doOo ", "SpaV KHTS vPuX DNkR satw gkRv ufGC mfEj YyXz FQTn ", "QaDV OxhW SLAo xbWi uCFd yClz ljQb rlYV YiYp QjHB ", "igXY lajw dDMh WBDQ JsxQ tfdJ rrtm tpRJ mGKn XmMD ", "gwvX hSVU BWis Bpmv NUPQ dTTz VQJf CnVn ipPe HmHZ ", "rNrN dUXi KCks JDtP vjNJ nsud KbWH vQJf pEpT vQob ", "PJZO zvrc kzIo PWLJ yuya sCMj OMCz dYuq uIbe xDOT ", "RTYN yhIe RWtS PNGp NJol GJHq NUFT OIsM MwAj dECd ", "sqhc NYtg Iais uLRY SUDS hODy qOjL LUQm NKJM zcXJ ", "uUsd itTn fJtu YQKe YQoV DFhk BQht fRWs keGE ckYc "};
    vector<string> newMail = {"XYed qhjX vGLs moRe qOjL exDE KmkW TUgI bzTo xNtl ", "iMhn YUdw gPat JrXY ufGC DFhk jLeP vQob uIbe kQea ", "sTfO USiH EhpG wkas bHNs kKWr TPoW wvvt lzsM vjNJ ", "xbWi mBcE vpLI bePc rrtm DFhk JsxQ keGE psQB xFkI ", "satw Zldx UMHh Fsla dtCr WLEr CnTH yIxK SUDS mBcE ", "CZcO bzFI CQqO vQJf fRWs ljQb JBBD uUsd zKFk zKFk ", "KHTS exDE CqSF PWLJ SYZe fJtu kQea KWxR fknf qVDX ", "sTfO GHmI JhTJ fRWs stxP DNkR cKyx WeKd PNGp nsud ", "Perd GBJO LJHA XxMC KWxR Iais vGLs lsup rlYV aRMe ", "eYdl Sgsx RTYN ipPe TPoW fMlY WqqH KHTS gnJj PJZO ", "kzIo FQTn QuOl satw JuUz OdJK fCCk IScY WqqH uCFd ", "QaDV dMFd vjNJ KWxR tyKr RTYN GJHq EeVZ GJHq HrYA ", "XWjQ GJHq WljU hODy qFtp ZXWc vpLI INzc JhTJ mNkl ", "bzTo rlYV WljU Sgsx XmMD JDtP sCMj KCks SpaV ipPe ", "dMFd IsMU JrXY wotj ZFwi TPAy igXY iheZ RTYN aTxO ", "ujba bDKu xRTy FlbV fRWs Ygcm QpDZ ulqE vjNJ Tgmk ", "mJON BWis kKWr iDuC moRe ZqFf gTEr dtCr ncsu LtAy ", "GBJO xLlx OxhW YeOS XdXO mwsk vQJf rBvT WqqH aRMe ", "dECd JDtP NKJM onXa vjNJ SYZe gTEr gwvX VwSl WqqH ", "hSVU XmMD iheZ wkas ZPMp INzc igXY ckYc IScY YQoV ", "vQJf weas XayI msbN tyKr HmHZ Gkvf rZzr AnjV VIUd ", "GBJO SYZe ipPe yjdh yuya jWvm XxMC QuOl NYtg tyLe ", "WBDQ TFmL pIwT njvl yIxK YQKe YAZq WljU enBX WuFE ", "xLlx tfdJ sTfO hODy mleF CQqO UsGv VwSl jWvm WeKd ", "qryv iDuC QpDZ NYtg weas ujba BtYC YAZq XayI uLRY ", "lzsM Ryem YPZP OxhW SYZe iMhn rZzr WBDQ tdkI ZDJJ ", "uLRY WljU TPoW rrtm yuya wkas agPd weas DNkR NJol ", "sTfO VOWV xqJQ EGsY gvML ohBJ zcXJ mleF YyXz RgLB ", "wRby ncsu Gvre XayI lsup Fary YQKe FALl lajw gmuY ", "HBVV XayI aBlM keGE ulqE Kjau kQea Inyd vpLI HiQu ", "VOWV KWxR YQoV CnTH xbWi xqJQ jWvm itTn itTn mGKn ", "tfdJ Nmkl HKlM xqJQ dtCr OhXO TFmL ooVF Sgsx AXJX ", "VQJf Zqie Zqie fRWs NlRz Mipi uIbe AugI RoVE NKJM ", "qhjX Vten HiQu ckYc dUXi EGsY WeKd OMCz eYdl CpXp ", "CqSF INzc wRMT igXY sTfO mhhD keGE hODy rvCP CQqO ", "xLlx KHTS wkas YQoV ciVC ZoDJ jLeP ipPe QaDV xLlx ", "msbN VwSl wkas Mipi hSVU CqSF YeOS uUsd OIsM UbXv ", "KCks vGLs yuya qOjL WqqH MGGb ScpG Iais TPoW CQqO ", "VwSl Tgmk HmHZ wRby mZRk EHpn YQoV dECd vQob pWZc ", "bHNs rvCP zKFk zcXJ mtwv PYtr uUsd SUDS NUPQ kidE ", "dUXi BtYC qhjX HKlM akbe yjdh HYLV mfEj Tgmk YiYp ", "rrtm RgLB mdNK wotj YQKe YAZq dTTz VQJf gBYP NUFT ", "FlbV YAZq yIxK ZXWc cKyx dYuq RWtS hmYy YQKe yuya ", "Inyd TPoW fVyV bDKu UDev fprJ gwvX MwAj OMCz qIrt ", "XMPb rBvT bxTQ pGqL WBDQ jWvm YAZq mtwv YiYp vGLs ", "agPd NYtg wzLA mZRk Zqie xbWi NKJM ZuXj nPGp xLlx ", "CIeb uCFd xcfY xNtl rrtm uLRY NYtg ckNU Zqie xqJQ ", "ohBJ jdkD kyHF mtwv AGue nPGp DFhk psQB IScY qIrt ", "mJON LQGC eCay vjNJ ipPe WeKd RTYN WLEr EGsY VgmD ", "rrtm yIxK sTfO VQJf uMki hmYy EGsY sCMj fknf kzIo "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 6, 7, 8, 11, 12, 14, 15, 16, 20, 22, 24, 25, 28, 29, 31, 32, 34, 39, 42, 43, 44, 47};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> knownSpam = {"BykH vFyy LFiU yOII FzeE hAIm ZnMn LFuJ erga dQSh ", "lbDe aaBH nvxr Fsgb QUfA dabS wzFk vEvX ITIS qgop ", "tqMo NNqy fDus DxeU ugzp BWBb Hkul vAbh HWFT BQEE ", "mrzm xVeu Ybmc PmUy aHeb LZrY VrPS KwIo NtJf wbLi ", "Kffl RTIo dACX zPVp jGOT eSFr YEVr GqxF IVsa QmCZ ", "gmAK wMgx FjSC vynd flRd lnwW OcLN aeQw YWfM QSrM ", "UdTh rrmV HIXG fyBG hRay BRQB LAHM tdQJ GlhZ oCqs ", "OZxl eGCN MUnS YEZp nLED eWqZ RPtd lTQq mzdw RcJa ", "WJVJ zOjc zEjY XdJg geJn CNOO WOCc cgoe pPYr Cteq ", "DKms YFCt PvbY XRyt WwoI TtpM Imtv xlea PavL evzo ", "CBCT piuW euLC TIDV XEed pMfR fgUI fzqb BOqF iBcK ", "ejfm CZCt qTlP cHFm vzrw IAps cXnq MunJ OFcq yDbf ", "qvIT clli zkDz ePeA ozhJ BUXW Hpjg SOQs lJNd EkCN ", "snMA YgUi fEID XAYW PeuU Rgzk BpXa ndrK xniU SKjL ", "PqpX hCbZ IJTP xLKK BDCq zzuS NxJy gWre vuOj DRim ", "pqpB JbLb smmp MTKo WYyD OfRA mYhI BWfi mYoR yutb ", "IWbu UNDG XJTr guLp HQxd TsAs jYgV mhwl hdCF goSR ", "wsim TjjJ DFGE yIrJ wCZW ijQp RRJo dZVU qIiO hdDb ", "jEoR QizJ Ztgu jCNJ xiKJ tLqR jyDO clRr HkTB HNAP ", "LFTR ozjn uBDY GYHw RqVI HfwL YGfc mOqQ AMgX llDj ", "BykH vFyy LFiU yOII FzeE hAIm ZnMn LFuJ erga dQSh ", "lbDe aaBH nvxr Fsgb QUfA dabS wzFk vEvX ITIS qgop ", "tqMo NNqy fDus DxeU ugzp BWBb Hkul vAbh HWFT BQEE ", "mrzm xVeu Ybmc PmUy aHeb LZrY VrPS KwIo NtJf wbLi ", "Kffl RTIo dACX zPVp jGOT eSFr YEVr GqxF IVsa QmCZ ", "gmAK wMgx FjSC vynd flRd lnwW OcLN aeQw YWfM QSrM ", "UdTh rrmV HIXG fyBG hRay BRQB LAHM tdQJ GlhZ oCqs ", "OZxl eGCN MUnS YEZp nLED eWqZ RPtd lTQq mzdw RcJa ", "WJVJ zOjc zEjY XdJg geJn CNOO WOCc cgoe pPYr Cteq ", "DKms YFCt PvbY XRyt WwoI TtpM Imtv xlea PavL evzo ", "CBCT piuW euLC TIDV XEed pMfR fgUI fzqb BOqF iBcK ", "ejfm CZCt qTlP cHFm vzrw IAps cXnq MunJ OFcq yDbf ", "qvIT clli zkDz ePeA ozhJ BUXW Hpjg SOQs lJNd EkCN ", "snMA YgUi fEID XAYW PeuU Rgzk BpXa ndrK xniU SKjL ", "PqpX hCbZ IJTP xLKK BDCq zzuS NxJy gWre vuOj DRim ", "pqpB JbLb smmp MTKo WYyD OfRA mYhI BWfi mYoR yutb ", "IWbu UNDG XJTr guLp HQxd TsAs jYgV mhwl hdCF goSR ", "wsim TjjJ DFGE yIrJ wCZW ijQp RRJo dZVU qIiO hdDb ", "jEoR QizJ Ztgu jCNJ xiKJ tLqR jyDO clRr HkTB HNAP ", "LFTR ozjn uBDY GYHw RqVI HfwL YGfc mOqQ AMgX llDj ", "BykH vFyy LFiU yOII FzeE hAIm ZnMn LFuJ erga dQSh ", "lbDe aaBH nvxr Fsgb QUfA dabS wzFk vEvX ITIS qgop ", "tqMo NNqy fDus DxeU ugzp BWBb Hkul vAbh HWFT BQEE ", "mrzm xVeu Ybmc PmUy aHeb LZrY VrPS KwIo NtJf wbLi ", "Kffl RTIo dACX zPVp jGOT eSFr YEVr GqxF IVsa QmCZ ", "gmAK wMgx FjSC vynd flRd lnwW OcLN aeQw YWfM QSrM ", "UdTh rrmV HIXG fyBG hRay BRQB LAHM tdQJ GlhZ oCqs ", "OZxl eGCN MUnS YEZp nLED eWqZ RPtd lTQq mzdw RcJa ", "WJVJ zOjc zEjY XdJg geJn CNOO WOCc cgoe pPYr Cteq ", "DKms YFCt PvbY XRyt WwoI TtpM Imtv xlea PavL evzo "};
    vector<string> newMail = {"LFuJ DFGE IVsa XRyt gPTQ piuW hRay BpXa McEv MUnS ", "XdJg erga DPIq pPYr XEtE vsKE qSEc geJn nvxr OFcq ", "kHzM KJdG BpXa ITIS HkTB mhwl QmCZ PnXw zfng LFiU ", "tLqR Kffl evzo QmCZ tyMQ gmAK zPVp htpj Ybmc ugzp ", "xRDJ jXzt nzWp rsRf MyTM wbLi CuYU TjjJ CCnL CWuU ", "PnXw QtCY GCGT JvBF jYgV LqTU HQxd evzo WYyD iBcK ", "mOqQ WOCc mrzm iBcK jMUW BRQB ACMq zOjc LFiU VrPS ", "Kffl QmCZ JbLb UdTh zPVp jyDO euLC BRQB RPtd hdDb ", "MslI RCpp gPTQ erga HQxd KJdG zEjY evzo GCqV xntk ", "XdJg afIa Kffl xiKJ mdpl Imtv vuOj OFcq fuhI mOqQ ", "YDbp HIXG ZnMn AMgX Cteq PmUy gmAK HfwL BWfi Hkul ", "Hkul NiYF CBCT MUnS gWre ACMq jlGY TsAs GYHw wbLi ", "jyDO LFTR LAHM IWbu ozjn yDbf rrmV wsim MslI vuOj ", "OcLN zkDz RTIo cXnq QmCZ hBrT IWbu tLqR EmgH fkbq ", "Rgzk skId IVsa hdCF zOjc clRr nvxr cHFm mOqQ aeQw ", "fyBG geJn xiKJ aaBH PqpX GqxF mrzm cHFm aeQw QSrM ", "zPVp Hpjg OfRA dACX goSR RPtd clRr ZnMn QmCZ Qznh ", "dabS UluB wmGc hdCF RcJa dEoD fzqb LAHM Cteq teNV ", "AuME hCbZ hdCF gWre erEa mOqQ jEoR VfHK PmUy qTlP ", "ijQp UdTh OfRA qgop XEed Cteq piuW tLqR SKjL XEed ", "YFCt QFSb jlGY kqHq KtfW NiYF OZxl Qhaa CNOO KMjS ", "sOaJ vFyy nzWp flRd mKCz IZLf YEZp ePeA MUnS QmCZ ", "wsim GYHw fzqb wMgx ijQp RRJo xVeu NxJy PmPU ePeA ", "xniU RRJo yIrJ PeuU dACX IWbu ozjn TsAs vuOj hRay ", "ndrK YWfM GkQd xntk nAgk ZnMn smmp KuHo LruB BDCq ", "RCpp lSbW guLp goSR ugzp NlpY mBue cXnq fEID Bwbk ", "BDCq HfwL xGkX PvbY ZsZO gWre eTDj Ztgu JKIv ejfm ", "erga aHeb YEZp BWfi dACX BDCq IWbu LcSD yutb Cteq ", "jCNJ goSR jGOT RTIo zOjc QizJ NNqy kqHq McEv Hpjg ", "WJVJ LHmA IAps Ybmc eHCG HfwL mYhI Hkul wsim olap ", "Ybmc RPtd fgUI dACX tqMo snMA vrNi llDj BWBb qIiO ", "susf BQsM IJTP QKin JOJZ HftW gPTQ vrNi rZzl ciuF ", "goSR tqMo QFSb hdCF wlyO gWre RcJa BUXW WYyD BQsM ", "CZCt hdCF wzFk smmp XRyt mOqQ LAHM smmp Fsgb EkCN ", "fzqb bgiI MTKo SKjL mrzm kqHq IAps vynd Kffl TsAs ", "XNTg xVeu TIDV goSR YWfM HWFT YWfM lbDe ZmAR vsKE ", "zOjc cHFm ozhJ PavL Hkul XEed BDCq iBcK wfjR xlea ", "Imge gWre HWFT zfng BpXa gmAK DKms yKxD uBDY ozhJ ", "IAps RqVI BDCq xiKJ YWfM hRay Ybmc mhwl SOQs ACMq ", "Bapv wzFk xLKK WJVJ CCnL BpXa xRDJ rISZ Jyud lnwW ", "yIrJ ZmAR HIXG nLED LFuJ vynd Cteq RROt ePeA BWfi ", "NtJf dQSh BykH Hkul YWfM AuME hdDb LMEq SKjL lTQq ", "ITIS geJn cHFm XEed eWqZ RRJo LZrY RqVI dACX vAbh ", "yKxD SOQs HfwL zqXh tyMQ Jyud rrmV Jyud TtpM wrTb ", "YEZp KwIo hdCF UpwN nBmu cXnq ajpr lTQq rDFn dACX ", "QFSb RTIo QSrM jGOT YWfM EkCN NNqy OFcq PeuU TjjJ ", "gWre vynd eSFr GlhZ SKjL wRwy FjSC tqMo IWbu UdTh ", "UJdt ejfm RPtd jGOT TsAs MunJ RTIo BUXW tqMo MslI ", "WJVJ pMfR FzeE ITIS BRQB DRim AuME MUnS zOjc dabS ", "KMjS yDbf iMgI BpXa IJTP jhXY xVeu BQEE yIrJ KuHo "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 8, 9, 13, 17, 18, 20, 21, 24, 25, 26, 29, 31, 32, 35, 37, 39, 43, 44, 49};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> knownSpam = {"msxB ZnsO IqLX SuoK aHhe LJGU FveA SdmX hrQU hBQA ", "maSU zjmf Ojaq mSbG oIky VJVQ hMsC HGTW iZHY pjao ", "TxWq niTg AYMM WYSo XsHg KRvE fOGk sxwJ BzTa kRxC ", "Ofqa jtlB daQp mHmZ hSQv ktcJ QyXK PGEj MwDn SdOZ ", "JrWT zsju MZjW tsHV wZRB aGKL LcNs aoqo KLLf Jvaj ", "kCxh wmXE impX vRuI IXih Xhnk wNyQ cxbH hOQH PDGH ", "cVfi letQ qckt RVXH recs BJuX PpCp MuLK sHgL MShb ", "pINZ wTNV TyHs KQQy LGSj GsyA wgGx YIby NbYY RoNH ", "owYH NCTB jaME VkTm WQzK BtoF iopj akPF vIsG BqBg ", "dYIx FziA xuNH INOk YgMa ReDS KQSV ulVG clie uxrh ", "pjSf vfry wCuY RveT beaH YnGg UJTu ZZvm Hidf QUKY ", "YPxG azyg tXEh nXKd Bjdl okUK ZweH loPR ePLA IlRI ", "MqUe bedW rYit tOES wsVK Eeei gtiF nWhY gIav RcxP ", "Osgk ayNO BkyF MnQS wuUi ThMI pUKQ HgDE LGZa BExx ", "HCOg NunD NtIS JLVH bHdI bmYo kTcN lGLQ qqTq kslj ", "krKa jEgN aVxA ccWj vqhG qmIb itPr zZEm XUmm HLdM ", "TKAk GIrT rIRM gVeB TfFt wcyJ zjNF AxVy Ntxv xqeR ", "gNGl sKeL pbhy hKyI ZJpA ReGP TWIu tMLE CsSm UCBA ", "QGXC wzIa HKga Mxmh bPls arOy VKfa yEdp lAHn gSkE ", "HBMF BTrK AiwO Fmbs BPTq lFIC yYBr psTO cLHC mPLC ", "msxB ZnsO IqLX SuoK aHhe LJGU FveA SdmX hrQU hBQA ", "maSU zjmf Ojaq mSbG oIky VJVQ hMsC HGTW iZHY pjao ", "TxWq niTg AYMM WYSo XsHg KRvE fOGk sxwJ BzTa kRxC ", "Ofqa jtlB daQp mHmZ hSQv ktcJ QyXK PGEj MwDn SdOZ ", "JrWT zsju MZjW tsHV wZRB aGKL LcNs aoqo KLLf Jvaj ", "kCxh wmXE impX vRuI IXih Xhnk wNyQ cxbH hOQH PDGH ", "cVfi letQ qckt RVXH recs BJuX PpCp MuLK sHgL MShb ", "pINZ wTNV TyHs KQQy LGSj GsyA wgGx YIby NbYY RoNH ", "owYH NCTB jaME VkTm WQzK BtoF iopj akPF vIsG BqBg ", "dYIx FziA xuNH INOk YgMa ReDS KQSV ulVG clie uxrh ", "pjSf vfry wCuY RveT beaH YnGg UJTu ZZvm Hidf QUKY ", "YPxG azyg tXEh nXKd Bjdl okUK ZweH loPR ePLA IlRI ", "MqUe bedW rYit tOES wsVK Eeei gtiF nWhY gIav RcxP ", "Osgk ayNO BkyF MnQS wuUi ThMI pUKQ HgDE LGZa BExx ", "HCOg NunD NtIS JLVH bHdI bmYo kTcN lGLQ qqTq kslj ", "krKa jEgN aVxA ccWj vqhG qmIb itPr zZEm XUmm HLdM ", "TKAk GIrT rIRM gVeB TfFt wcyJ zjNF AxVy Ntxv xqeR ", "gNGl sKeL pbhy hKyI ZJpA ReGP TWIu tMLE CsSm UCBA ", "QGXC wzIa HKga Mxmh bPls arOy VKfa yEdp lAHn gSkE ", "HBMF BTrK AiwO Fmbs BPTq lFIC yYBr psTO cLHC mPLC ", "msxB ZnsO IqLX SuoK aHhe LJGU FveA SdmX hrQU hBQA ", "maSU zjmf Ojaq mSbG oIky VJVQ hMsC HGTW iZHY pjao ", "TxWq niTg AYMM WYSo XsHg KRvE fOGk sxwJ BzTa kRxC ", "Ofqa jtlB daQp mHmZ hSQv ktcJ QyXK PGEj MwDn SdOZ ", "JrWT zsju MZjW tsHV wZRB aGKL LcNs aoqo KLLf Jvaj ", "kCxh wmXE impX vRuI IXih Xhnk wNyQ cxbH hOQH PDGH ", "cVfi letQ qckt RVXH recs BJuX PpCp MuLK sHgL MShb ", "pINZ wTNV TyHs KQQy LGSj GsyA wgGx YIby NbYY RoNH ", "owYH NCTB jaME VkTm WQzK BtoF iopj akPF vIsG BqBg ", "dYIx FziA xuNH INOk YgMa ReDS KQSV ulVG clie uxrh "};
    vector<string> newMail = {"NtIS yvSl wsVK DndX UJTu HBMF arOy TyHs sxwJ KRvE ", "msxB Jvaj rIRM tsHV wZRB YgMa bmYo KQQy aHhe MuLK ", "Ebnj Jvaj PJDc iVii pbhy IXih eIFI mYLY VKfa EhNS ", "MuUA QsDC KUrD STyp AxVy sxwJ ccWj pjSf fTfu kTVW ", "ecMO ZZvm BkyF ZZvm VKfa FveA uowi xfvh FveA zmah ", "TWIu MqWZ pINZ KQSV SObs niTg Gimj MqWZ pJUc RyjJ ", "qOXh pjao wsVK RcxP gaDU cLHC MShb YPxG AxVy vNRT ", "PRlC gNGl cxbH owYH iVDk itPr wcyJ Gimj XvVj oIky ", "wmXE mwDI hrQU dYIx ThMI xNSj gNGl fama pjSf XjyD ", "FfzN HeHK FeYc Jvaj vRuI IlRI xNSj WQzK GySK pjSf ", "nIuv KUrD Ojaq xNSj uBKE mwWm jXyA VKfa HKga UkUL ", "Xhnk IXih PDGH wCuY HBMF owYH ddAI KQSV PeFw IRMi ", "IXih rIRM MqUe BqBg JZxM IhNP iZHY KLLf xfvh ZnsO ", "KLLf PDGH maSU dYIx psTO QyXK RyjJ jEgN sHgL ormD ", "aVxA ThMI ulVG recs lFIC recs IlRI SdmX MnQS ktcJ ", "ddAI gSkE ePLA INbO QGXC arOy kTcN maSU XwMS NunD ", "HEbV uowi SlKW YnGg TueX ZZvm MxgM zjNF PDGH MwDn ", "ZweH Suls xNSj aVxA kRxC SdOZ SuoK sHgL QKKt YgMa ", "qSyg loPR impX BtoF Fmbs xuNH BExx SdOZ SdmX YnGg ", "hSQv pjSf HKga Fmbs jtlB TKAk niTg YPxG iZHY uxrh ", "aoqo BTrK UHiM psTO MqUe XwMS XwMS AsaC itPr zjmf ", "XMtd RyjJ TueX xNSj ePLA bmYo lGLQ WYSo TKAk MZjW ", "ktcJ ayNO sKeL vIsG GsyA GIrT MnQS bedW IXih MShb ", "JZxM rdlR LFGC tYzv IhNP ZZvm gVeB evXy ecMO zmah ", "cLHC jEgN yYBr maSU zuPI WYSo PDGH DfKo TfFt xfvh ", "MShb IXih SdmX impX WYSo BtoF BqBg gIav pCnk bmYo ", "fOGk uxrh ktcJ ecaa kTVW RcxP Bumc cVfi LAvm VKfa ", "wgGx HEbV itPr pbhy Osgk ZJpA mHmZ yYBr akPF WQzK ", "hSQv qOXh NCTB TueX SuoK hBQA TWIu BzTa nWhY Yadw ", "loPR pCnk azyg MnQS tJxK obsA ReDS KRvE ZZvm BYrT ", "tMLE MShb ayNO INOk impX WSKl recs CsSm pnyY LGZa ", "Fmbs DJlz itPr MqUe lAHn pjao Xhnk hSQv letQ gVeB ", "SApw pjSf ZnsO GIeB vIsG WQzK fOGk tmlC STyp pINZ ", "GsyA dYIx GsyA PYon zZEm GIeB wmXE okUK TxWq ccWj ", "KYjx HBMF lFIC ncRB RPgd KYjx QyXK RcxP WYSo QUKY ", "ThMI loPR QUKY LGZa gVeB TKAk BkyF KQQy ZnsO hOQH ", "wzIa IlRI cNSP ZZvm GSiy wsVK MqUe MwDn AQJE rIRM ", "EMVX EhNS qmIb XvVj PYon BTrK Vwdh MZjW iJZF kslj ", "aVxA UJTu HeHK XjyD LYqa ReGP iVii wZRB TyHs TOyf ", "KRvE vqhG Bjdl aoqo MwDn qqTq ThMI aVxA KQSV clie ", "aHhe Mxmh Bjdl zjNF LYqa PpCp aGKL zjmf bedW WYSo ", "dYIx wZRB lGLQ MShb itPr vfry ThMI VkTm pjao pbhy ", "ckUe nAug arOy ReGP nAug NbYY ThMI hMsC YnGg AQJE ", "qSyg nXKd recs lAHn KQQy oIky loeW RveT ZIWY MShb ", "loqK VkTm INOk gIav Jthh qEyQ xGDl BtoF LcNs pUKQ ", "RPgd KYjx HBMF pdVS kTcN BTrK iZHY mfXj jaME ReGP ", "beaH wsVK okUK mfXj wCuY jEgN UFMa clie azyg pjao ", "ReDS AsaC BExx nJvH SApw cVfi uowi uPxY pjSf maSU ", "wcyJ Eeei yEdp SjwS msxB RcxP Gjvo aVxA KYjx daQp ", "pJUc azyg BkyF KQSV lFIC STyp ZZvm BYrT qckt QycH "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 16, 17, 20, 21, 23, 24, 26, 28, 29, 32, 34, 36, 37, 38, 42, 44, 45, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> knownSpam = {"scUp tDgP PHjX AnuI adAt erLU tsUF GCKK dGKq mEgp ", "fecX NOSC gXCO Bmkc vypm WiOm ZAsE wpuf qZxs QVgA ", "QwDE rVYB WhQv wXSH qlZv JeYe DHwS eztj adLf TPnm ", "wnTF dHVg Nqku USdt mMzg lZey fCHq hxKr sQdH nfQO ", "XOjd xttd DyYX nbmv tqhq Nmzi OZrq IqFE OGNp sYsN ", "aLpi ashf yWbf TDEI qive nxZX AqmS iTqr DfFG gdPB ", "BFLc DccQ lGmO LkJD QlaQ lWgs vDAv MtAL Kgfm SQTg ", "RGxn mGYv CcmS KAIr YTOU ChUF lLmI nIpp wefp sICE ", "OGAN uGMy YfHy WxYI imAj NwGi BxkT nlTK gRKI QvXO ", "ayMg NgiA lQJX mTCY UoHW cazE hGns AkwW WVPc NPMh ", "HhCL lyFz lnTR QPSH Lgyt uFhf QjqT weNS WGZc WQEK ", "Qxle xfUy wBZu GphV URog RwVQ AjQO lvCK VjGm FfaG ", "LOIM Qdlb qyMF feUe UIZw PIPT kcXA TDqH kqZW REra ", "vwAf MzeJ ugqH yueM eBSy LGek PalZ rwhd hNgR fMbB ", "eMqe cmCR JKps hthi UhVJ gWJJ KNSs xhTV Yzhm YnAw ", "PCLD pwTd bJXG zdBe FlDH AVjq xmXn RHFv beoH QeQY ", "sLJj Abkb CNAL txGX fhoA RLZX FqoA oXYg gqqY zomN ", "pwHQ dRTV YfpK bDpb Zhjp npvg Skmy kenw mnaW fsMw ", "etwZ AaMw TDtT gemt hyJN Pynf JCkE qLoP TGTI uEBd ", "cqjF bWrn TXvl QTDP zolm gVfr mDZk Sbuv CobE UvUF ", "scUp tDgP PHjX AnuI adAt erLU tsUF GCKK dGKq mEgp ", "fecX NOSC gXCO Bmkc vypm WiOm ZAsE wpuf qZxs QVgA ", "QwDE rVYB WhQv wXSH qlZv JeYe DHwS eztj adLf TPnm ", "wnTF dHVg Nqku USdt mMzg lZey fCHq hxKr sQdH nfQO ", "XOjd xttd DyYX nbmv tqhq Nmzi OZrq IqFE OGNp sYsN ", "aLpi ashf yWbf TDEI qive nxZX AqmS iTqr DfFG gdPB ", "BFLc DccQ lGmO LkJD QlaQ lWgs vDAv MtAL Kgfm SQTg ", "RGxn mGYv CcmS KAIr YTOU ChUF lLmI nIpp wefp sICE ", "OGAN uGMy YfHy WxYI imAj NwGi BxkT nlTK gRKI QvXO ", "ayMg NgiA lQJX mTCY UoHW cazE hGns AkwW WVPc NPMh ", "HhCL lyFz lnTR QPSH Lgyt uFhf QjqT weNS WGZc WQEK ", "Qxle xfUy wBZu GphV URog RwVQ AjQO lvCK VjGm FfaG ", "LOIM Qdlb qyMF feUe UIZw PIPT kcXA TDqH kqZW REra ", "vwAf MzeJ ugqH yueM eBSy LGek PalZ rwhd hNgR fMbB ", "eMqe cmCR JKps hthi UhVJ gWJJ KNSs xhTV Yzhm YnAw ", "PCLD pwTd bJXG zdBe FlDH AVjq xmXn RHFv beoH QeQY ", "sLJj Abkb CNAL txGX fhoA RLZX FqoA oXYg gqqY zomN ", "pwHQ dRTV YfpK bDpb Zhjp npvg Skmy kenw mnaW fsMw ", "etwZ AaMw TDtT gemt hyJN Pynf JCkE qLoP TGTI uEBd ", "cqjF bWrn TXvl QTDP zolm gVfr mDZk Sbuv CobE UvUF ", "scUp tDgP PHjX AnuI adAt erLU tsUF GCKK dGKq mEgp ", "fecX NOSC gXCO Bmkc vypm WiOm ZAsE wpuf qZxs QVgA ", "QwDE rVYB WhQv wXSH qlZv JeYe DHwS eztj adLf TPnm ", "wnTF dHVg Nqku USdt mMzg lZey fCHq hxKr sQdH nfQO ", "XOjd xttd DyYX nbmv tqhq Nmzi OZrq IqFE OGNp sYsN ", "aLpi ashf yWbf TDEI qive nxZX AqmS iTqr DfFG gdPB ", "BFLc DccQ lGmO LkJD QlaQ lWgs vDAv MtAL Kgfm SQTg ", "RGxn mGYv CcmS KAIr YTOU ChUF lLmI nIpp wefp sICE ", "OGAN uGMy YfHy WxYI imAj NwGi BxkT nlTK gRKI QvXO ", "ayMg NgiA lQJX mTCY UoHW cazE hGns AkwW WVPc NPMh "};
    vector<string> newMail = {"AaMw Qdlb FqoA gqqY bJXG hNgR znDR ltea nIpp ciAl ", "eMqe zolm ChUF QTDP DyYX WhQv npvg fecX Zhjp xfUy ", "FHCl tXHq Zhjp Lgyt DLCZ nMJL KfZo RwVM rlWJ TPGV ", "gRKI UhVJ lGmO eMqe JeYe gVfr iTqr WVPc hGns KNSs ", "tsUF TGTI AkwW YVcn TPnm scUp wHmw ugqH lbSz JCkE ", "jFnl gRKI TDqH RJEL Yzhm SQTg sQdH iUND sota AUxE ", "kenw lCFp TXvl TPGV wRwa Alyj weNS USdt Kwzg vsTW ", "CobE ugqH lnbA fMbB IgOi KAIr FYCA gqqY YGfx JeYe ", "ZGJp aEMS OZrq mDZk TDEI etwZ mnaW QvXO weNS gWJJ ", "FlDH TDqH OGAN wnTF QeQY AjQO cmCR fsMw KNSs adAt ", "AUxE CNAL gRKI dblQ cazE AkwW Qdlb BxkT tDgP AaCV ", "nfQO GCKK wefp adLf Bmkc eMqe wnTF Nqku xhTV kenw ", "fhoA lSeq kqZW IqFE QVgA lvZQ rUxF nMJL aVJh cazE ", "JKps cazE GCKK HhCL YnAw uEBd acVK dHVg UIZw kenw ", "nbmv mEgp GCKK QwDE QVgA RGxn BFLc AnuI UPws HhCL ", "etwZ wBZu BFLc YfHy WQEK RLZX PIPT CNAL fCHq YnAw ", "WxYI beoH fsMw QVgA USdt LGek DHwS vwAf mTCY lGmO ", "DfFG HRrW KxsZ AVjq QVgA RLZX pwTd PCLD DccQ BFLc ", "aVJh HOJV NgiA wTBt BxkT tqhq YTOU Nmzi QlaQ YfpK ", "weNS pwTd IqFE AjQO sICE QVgA rlWJ GCKK Bmkc DHwS ", "mGYv txGX bJXG IqFE UoHW fsMw tqhq Bmkc Abkb xttd ", "booo HhCL QTDP dGKq FfaG fecX rVYB nIpp yjOA iaPa ", "znDR lnTR GphV kBAl lsOB gRKI sQdH QeQY lZey rwhd ", "Nmzi gtCg PHjX bJXG cqjF lyFz WxYI MtAL lvCK fhoA ", "qZxs URog scUp lyFz mTCY WhQv YTOU cqjF npvg txGX ", "qtsq TDqH ashf RLZX wTBt kenw vDAv ugqH awOM tDgP ", "WhQv fCHq NPMh lLmI Nqku drqw Nsyz GCKK RGxn gdPB ", "nxZX WAjh ltea imAj mMzg JGUy lvCK sLJj UEXu DfFG ", "tBzs WxYI sQdH tIIE kenw hSCx RwVQ XiRg uGMy lnTR ", "tYSP bJXG Zhjp IVWc rCgf JGUy aCIC HBmD xEZD DyYX ", "HOJV sICE OGAN PIPT lsOB yqFl cqjF uorS MtAL cqjF ", "dblQ XOjd ARUd KgfX YfHy Kuop uGMy WGZc zVlq UoHW ", "Nmzi lWgs bDpb Yzhm xmXn ayMg uFhf QVgA Qxle Nqku ", "AqmS Lgyt fMbB VjGm pwHQ fecX xttd dHVg JKps UvUF ", "ARUd nIpp WxYI vwAf cazE QPSH QvXO HxIT JfdW LPVP ", "ayMg tsUF WVPc UIZw hGns eztj oXYg Skmy WxYI hxKr ", "WGZc sYsN Skmy thLa mSDa JCkE imAj nfQO QjqT zKSN ", "uorS KNSs HxIT qZxs sYsN NwGi tqhq Skmy gWJJ adLf ", "fecX etwZ tqhq ayMg uEBd rwhd Yzhm zomN adLf uGMy ", "KxsZ lyFz QvXO kdEO YVcn IYil WVPc TPnm sLtQ RHFv ", "RLZX gWJJ kGBg tqhq aLpi uorS AkwW LkJD ZAsE zdBe ", "NgiA CGXB rwhd ZIKa nIpp zVlq ciAl tBzs iTqr fhoA ", "TPGV rVYB gtCg WQEK npvg booo UZTt mnaW gWJJ TDEI ", "dUYt TXvl UIZw gWJJ jnZK etwZ RGxn ChUF DccQ OGAN ", "gXCO DccQ LGek npvg cmCR UvUF aLpi npvg rVYB TgVW ", "Nmzi wXSH TDEI nfQO TDEI gdPB DccQ UvUF vYZY SzWk ", "xEZD gRKI HpGI CGXB OZrq ZAsE HOJV dGKq hxKr qlZv ", "nxZX FlDH YfHy UvUF AqmS wBZu Skmy qlZv xhTV Bmkc ", "sota cmCR JWQn nIpp QeQY bWrn FfaG rwhd PWOu xhTV ", "voLa hthi bIez xmXn KgfX CGXB JCkE TPGV TDEI lyfs "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 5, 6, 7, 10, 12, 18, 21, 22, 25, 27, 28, 29, 30, 31, 34, 36, 39, 41, 42, 46, 48, 49};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> knownSpam = {"rzvy hwoG MXOz TKCD CINZ eTgi qems NFdf KyhW jnTM ", "CBLZ skuQ XxjM vOtM wunl OvTp pmjf BbbX yTEh snhO ", "nTKA EyXQ qGBE hDAY nGui xfug ZRVi Xuhz fycS QTJO ", "zziY Uyyl XTwf Qwqn MNXV VrVR RKvB zEya zpgq WbAg ", "PBzl DyyT pNVi CPFE GmlW hqMO OjKJ bsms qHeZ kMeR ", "uFWA Ptxp PiMV iEbt ByjC XlAC QaFa VzWY eWAQ mPZs ", "zojV iLFx mVRZ ecOG SKIF tWuF BomJ FFxd Suef mHLv ", "HKHJ YDBf eqXq oKjc XWtM zUCD TMlT kMKf vGiH xSHi ", "qXiw GvDg NRXJ UIym dzBA KcoU aQsX eGWP oJFQ IosG ", "hlJM YBvQ JDwC benq gaPU GvRN iLZq Yyxl FhII LaYX ", "QIEP XACj ZkRj Ypch bNpN YVaL DCWZ tnJD DRjN aHtp ", "xHsX ejjO XlAe qYvF RQJY HKqV ciPZ wnok AHvB fFaJ ", "atkE Ywsa amct vdLV dlHO GbvK nUal HwRq ABMt pAtk ", "utPE bAgb JPjJ CEWo YBFu TQkM CnkK JhbL xYGY qlGa ", "MPXF ORyV ZGMx pxow Ollu gXIZ wwae Uprm OfgX cnhf ", "ZFDO HCrV inhr zdCU xtld xLpZ fMEb uyJr Ywvo bQfM ", "RGWB UQfw WKBW dpbt bdtV nFlY ePCk fCPt HiqZ gMVi ", "xcsJ ActS TDaA HVxP LzOZ ixLA Uirb YYnS wCQx PPzB ", "FWys vhdU UwOI UBfY gzYT fBuk GFAn UvZO rxHS tahq ", "Pqqd dxbV XJtc pagT nRUC tcfZ MxMO yQeK CEGv ZuUI ", "rzvy hwoG MXOz TKCD CINZ eTgi qems NFdf KyhW jnTM ", "CBLZ skuQ XxjM vOtM wunl OvTp pmjf BbbX yTEh snhO ", "nTKA EyXQ qGBE hDAY nGui xfug ZRVi Xuhz fycS QTJO ", "zziY Uyyl XTwf Qwqn MNXV VrVR RKvB zEya zpgq WbAg ", "PBzl DyyT pNVi CPFE GmlW hqMO OjKJ bsms qHeZ kMeR ", "uFWA Ptxp PiMV iEbt ByjC XlAC QaFa VzWY eWAQ mPZs ", "zojV iLFx mVRZ ecOG SKIF tWuF BomJ FFxd Suef mHLv ", "HKHJ YDBf eqXq oKjc XWtM zUCD TMlT kMKf vGiH xSHi ", "qXiw GvDg NRXJ UIym dzBA KcoU aQsX eGWP oJFQ IosG ", "hlJM YBvQ JDwC benq gaPU GvRN iLZq Yyxl FhII LaYX ", "QIEP XACj ZkRj Ypch bNpN YVaL DCWZ tnJD DRjN aHtp ", "xHsX ejjO XlAe qYvF RQJY HKqV ciPZ wnok AHvB fFaJ ", "atkE Ywsa amct vdLV dlHO GbvK nUal HwRq ABMt pAtk ", "utPE bAgb JPjJ CEWo YBFu TQkM CnkK JhbL xYGY qlGa ", "MPXF ORyV ZGMx pxow Ollu gXIZ wwae Uprm OfgX cnhf ", "ZFDO HCrV inhr zdCU xtld xLpZ fMEb uyJr Ywvo bQfM ", "RGWB UQfw WKBW dpbt bdtV nFlY ePCk fCPt HiqZ gMVi ", "xcsJ ActS TDaA HVxP LzOZ ixLA Uirb YYnS wCQx PPzB ", "FWys vhdU UwOI UBfY gzYT fBuk GFAn UvZO rxHS tahq ", "Pqqd dxbV XJtc pagT nRUC tcfZ MxMO yQeK CEGv ZuUI ", "rzvy hwoG MXOz TKCD CINZ eTgi qems NFdf KyhW jnTM ", "CBLZ skuQ XxjM vOtM wunl OvTp pmjf BbbX yTEh snhO ", "nTKA EyXQ qGBE hDAY nGui xfug ZRVi Xuhz fycS QTJO ", "zziY Uyyl XTwf Qwqn MNXV VrVR RKvB zEya zpgq WbAg ", "PBzl DyyT pNVi CPFE GmlW hqMO OjKJ bsms qHeZ kMeR ", "uFWA Ptxp PiMV iEbt ByjC XlAC QaFa VzWY eWAQ mPZs ", "zojV iLFx mVRZ ecOG SKIF tWuF BomJ FFxd Suef mHLv ", "HKHJ YDBf eqXq oKjc XWtM zUCD TMlT kMKf vGiH xSHi ", "qXiw GvDg NRXJ UIym dzBA KcoU aQsX eGWP oJFQ IosG ", "hlJM YBvQ JDwC benq gaPU GvRN iLZq Yyxl FhII LaYX "};
    vector<string> newMail = {"pxow HiqZ Suef XTwf xLpZ bdtV inhr fFaJ FFxd AavB ", "iLFx JDwC JPjJ ecOG DISq UdRH qTSL zojV YBFu Ptxp ", "VzWY Spid ciPZ YYnS wwae qXiw YrSR XTwf lSlN eWAQ ", "zUCD YrAE RKvB DfrD NRiJ Uyyl GrWq ABMt aFXJ MNXV ", "Ypch WKBW PBYI tUxf LzOZ dJvS OvTp kxbY eTgi LMnj ", "dpbt YDBf TDaA YppO cScJ rzvy zHsl HPYE TMlT QIEP ", "bNLV ejjO xQVM bsms EyXQ XJeI VrVR DyyT JhbL IosG ", "ZkRj RGWB FBNt uetj qlGa luik UwOI ejjO UIym gela ", "DCWZ qXiw aAfa GMbg yQeK ePCk gXIZ DCWZ lXpz bAgb ", "OBnK nfpm qXiw RCij VNGp LTVR qXiw ciPZ HPYE SCPG ", "kMvO FkZC wbRW KyhW wbRW wjWP Ywvo DdoM qbGQ lXpz ", "oypL XxjM ecOG XlAC VNGp LaYX dlHO uFWA lSlN aFXJ ", "FeNu TdGq SCPG CnkK eWAQ ePCk IosG NRiJ qdtS bNpN ", "BomJ dxbV CBLZ UvZO xcsJ pNVi Uyyl ActS amct XxjM ", "Uprm VrVR Ptxp ecOG HiqZ wCQx oJFQ PPzB fycS jnTM ", "Ywvo dpbt CRja ePCk NKJx DCWZ KcoU nfpm aQsX VpPP ", "dlHO DPYy DPYy GqSt KBPV aHtp QoDG gbZG vFRr Qwqn ", "aQsX wqbg erCk tUxf zdCU ActS bdtV VrVR iEbt ZuUI ", "GTax Xuhz xLpZ HKqV cmeD JQbD rVmc TYpN gzYT zEya ", "YDBf HCrV UIym wCQx xYGY FhII bAgb aAfa AMvA HKqV ", "xfug YBFu XACj AMvA UvWE CINZ ejjO UwOI dlHO ciPZ ", "ActS SKIF ZuUI HiqZ hlJM oxoP YVaL qXiw qbGQ RQJY ", "ZuUI GvRN KBPV mPZs pNVi XACj xfug zojV RUBG eWAQ ", "mTRo TdGq dyyd wLRC xSHi KCnl VNvJ DRjN jqfx ZGMx ", "vOtM qGBE DyyT bNpN ORyV LaYX hlJM ZFDO oKjc mHLv ", "Ywsa wnok UIym rDwt ejvh Uprm nmIi ixLA CBLZ guMr ", "ZkRj oxoP ePCk YNsc vGiH TMlT kMvO ObQx yxBQ DISq ", "iEbt uFWA CINZ BbbX fMEb XACj GvDg ePCk wbRW pagT ", "wqbg TYpN amct SKIF iEbt FFxd gXIZ XWtM XlAC vdLV ", "TZju aAfa TurU XxjM aKmL sylf HiqZ JQbD UIym UQfw ", "yQeK mDNY vGiH pmjf hlJM RGWB xLpZ nUal Suef xtld ", "DPYy Tjor qGBE CEWo puAP OjKJ HCrV kTey LTVR Qwqn ", "MXOz tWuF puAP LSMi VrVR Ypch llsl zUCD NRXJ wqbg ", "yQeK Ollu FkZC UvZO GvDg CPFE AHvB TQkM IosG LTVR ", "xQVM UvZO XlAe AHvB ttSr ABMt XJtc HVxP Alga TKCD ", "xfug JDwC UIym CEGv uFWA bQfM Uirb hqMO vhdU RGWB ", "fNzN yDXr Yyxl puAP XlAe qYvF TKCD YNsc YBvQ qXiw ", "Yyxl QIEP QaFa Tjor vOtM hqMO IosG ORyV yTEh Pqqd ", "erqr RmjL BbbX Utga GFAn pGPH RWWU PPzB yQeK Qwqn ", "ttSr pxow QTJO GFAn aHtp YYnS Suef Pqqd fFaJ JwDr ", "Ypch tUxf wUNP CaAs tnJD pwOl oCiN LMnj XJeI jnTM ", "qlGa benq yxBQ SOdc vVbi FFxd vzTx bdtV lEHd lEHd ", "UQfw GvRN bsms yDXr qlGa YNsc dlHO Ypch YYnS Ywsa ", "xLpZ ZRVi gXIZ eTgi fFaJ fycS PPzB UvZO Pqqd yQeK ", "guMr GvDg zEya mHLv ORyV mVRZ GFAn FBNt OfgX fycS ", "Pqqd fMEb ePCk Suef JPjJ LSMi vGiH OlIm QTJO xtld ", "Lokw MrGT puAP YBvQ RUBG RGWB YrSR KyhW hljT yUdy ", "eqXq BfsZ aQnS XWtM ixLA oCiN fNms ngXg rLnk XWtM ", "OfgX ecOG UIym DXIX WbAg oypL tWuF PPzB tnJD WbAg ", "nFlY pcAA zdCU oJFQ gMVi HCrV BomJ tcfZ JDwC IosG "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 16, 17, 18, 23, 25, 26, 29, 31, 32, 34, 36, 38, 40, 41, 46, 47};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> knownSpam = {"FLAA StqM eMVL XfWY xEKg MFrS SrVt SHmP uyxy leSr ", "RZYo VCdX cdBL gtar zVRE FBjd vgha NFon wgIw Qrdx ", "Pvdg PTKT QcuZ XtZO jvdd EhOn fImv DOpt tTFx zynO ", "pSsN mDJG IvGT wbyh SGIw RfDs kkrj PfuM WsfQ JChs ", "xlRb AbXq RdEI EZvF UvCR vBJI jFLd Anvo jJom AApt ", "YjVi HgrN bIOZ PFqH ITBI bBag sXpz IbAP vSbn iCoY ", "Sisw rPbY dTXb WJae lSzP IUQo vimn xRHp KaCh PyyM ", "PIvM hfbW fOKu UmJL iQCR RlCp BHNh Tzme Bjws QCFi ", "FtOv VCEV mkYO kHvc dWio wmjQ iXeC cfsT qdvH lvXy ", "SFGy wbJx hfgB tylH INhP gqJA caxC yKAF Sces sBEd ", "xWjB hEgG mhBG oemP apJv jruL ytut fkAL NOnT SrZH ", "sTmU vopR JSJr ctFH ybgZ ToJY Zjoh TMuH jGNN HwVp ", "jRbt NlBu yLfn sXQA WOGw wfRR tKcp cteE ZBye ueyc ", "HsTz oaju mbmr SDFK whJn YUsK cqae XmJw XLVr MAsj ", "veag rxSW aVjL kATG jOPo dewj AcXx xriz AKkT chUE ", "dqur hyDN dLhF KdNY NiGV FUIJ Msri OCvx cleN Shpa ", "QdoF kRat CurN iaky NXCi UtfQ DubJ CrHu DxFv mKJj ", "TAhW rSqd nIvK ahZm GglE jajF fzeY cOhN QnYL ckYH ", "QLGI oTTv NkBy cGMb yHFT KbWB ukoW RrjU NTJl GPzK ", "laZK ZYWL VYlx wVJT XztY yQAX zFlY UkEo Qdfq rwNN ", "FLAA StqM eMVL XfWY xEKg MFrS SrVt SHmP uyxy leSr ", "RZYo VCdX cdBL gtar zVRE FBjd vgha NFon wgIw Qrdx ", "Pvdg PTKT QcuZ XtZO jvdd EhOn fImv DOpt tTFx zynO ", "pSsN mDJG IvGT wbyh SGIw RfDs kkrj PfuM WsfQ JChs ", "xlRb AbXq RdEI EZvF UvCR vBJI jFLd Anvo jJom AApt ", "YjVi HgrN bIOZ PFqH ITBI bBag sXpz IbAP vSbn iCoY ", "Sisw rPbY dTXb WJae lSzP IUQo vimn xRHp KaCh PyyM ", "PIvM hfbW fOKu UmJL iQCR RlCp BHNh Tzme Bjws QCFi ", "FtOv VCEV mkYO kHvc dWio wmjQ iXeC cfsT qdvH lvXy ", "SFGy wbJx hfgB tylH INhP gqJA caxC yKAF Sces sBEd ", "xWjB hEgG mhBG oemP apJv jruL ytut fkAL NOnT SrZH ", "sTmU vopR JSJr ctFH ybgZ ToJY Zjoh TMuH jGNN HwVp ", "jRbt NlBu yLfn sXQA WOGw wfRR tKcp cteE ZBye ueyc ", "HsTz oaju mbmr SDFK whJn YUsK cqae XmJw XLVr MAsj ", "veag rxSW aVjL kATG jOPo dewj AcXx xriz AKkT chUE ", "dqur hyDN dLhF KdNY NiGV FUIJ Msri OCvx cleN Shpa ", "QdoF kRat CurN iaky NXCi UtfQ DubJ CrHu DxFv mKJj ", "TAhW rSqd nIvK ahZm GglE jajF fzeY cOhN QnYL ckYH ", "QLGI oTTv NkBy cGMb yHFT KbWB ukoW RrjU NTJl GPzK ", "laZK ZYWL VYlx wVJT XztY yQAX zFlY UkEo Qdfq rwNN ", "FLAA StqM eMVL XfWY xEKg MFrS SrVt SHmP uyxy leSr ", "RZYo VCdX cdBL gtar zVRE FBjd vgha NFon wgIw Qrdx ", "Pvdg PTKT QcuZ XtZO jvdd EhOn fImv DOpt tTFx zynO ", "pSsN mDJG IvGT wbyh SGIw RfDs kkrj PfuM WsfQ JChs ", "xlRb AbXq RdEI EZvF UvCR vBJI jFLd Anvo jJom AApt ", "YjVi HgrN bIOZ PFqH ITBI bBag sXpz IbAP vSbn iCoY ", "Sisw rPbY dTXb WJae lSzP IUQo vimn xRHp KaCh PyyM ", "PIvM hfbW fOKu UmJL iQCR RlCp BHNh Tzme Bjws QCFi ", "FtOv VCEV mkYO kHvc dWio wmjQ iXeC cfsT qdvH lvXy ", "SFGy wbJx hfgB tylH INhP gqJA caxC yKAF Sces sBEd "};
    vector<string> newMail = {"xNmg sBEd ZtfT tVjt STpT caxC mZpz igZU lewi Qrdx ", "CurN hEgG LJaq XHdr Shpa xqmt XfWY ITBI dkil VCdX ", "tylH kHvc rSqd yKAF mkYO veag pSsN rSqd ukoW yQAX ", "kRat iXeC PFqH sXQA ctFH xRHp wmjQ vopR PFqH UkEo ", "fOKu ihCP NlBu nOsg SFGy qcyW SIZU qCcz WJae Qjet ", "zFlY Uzxf jFLd laZK AcXx sXQA PFqH oemP wbgK YjVi ", "yQAX IvGT EmNO KfuE xlFr flWr euKI OGoy IAKa YUsK ", "iQCR cnJY HsTz cfka bBag fNNw lvXy MAsj SvyI DxFv ", "SHmP nMgq hyDN tTFx CrHu dqur Uoox FBjd Tbdm JUhS ", "cfsT KutM QFEt RZYo iQCR GPzK gqJA taUX RdEI FBjd ", "NXCi RdEI xWjB Pvdg jGNN hyDN xriz mKJj cdBL jOPo ", "TAhW cdBL RaBM FLAA wXqR hXHO vBJI IsgF YhJm zFlY ", "ITBI oemP tlZw XLVr cnJY FBjd kHvc KQKa fkAL nMgq ", "Ibez nLhw DubJ jJKv GPzK ToJY VCEV AKkT rxSW hOJf ", "ZYWL jOPo QCFi KiEg KMYO XLVr XztY SFGy vgha aAJo ", "mKJj IvGT lSzP ytut xzxm SePh IvGT Uoox cfka eFEO ", "sXQA wfRR wbyh RrjU NXCi ybgZ uyxy mhBG vgha fTRx ", "DubJ Yqjf cGMb KfuE gtar IMdo MrEV jJKv VCEV nuun ", "EZvF GPzK Pvdg lSzP mDJG StqM mhBG PFqH AbXq wgIw ", "HgrN chUE kATG ckYH cfsT ehPk xzxm SrVt UtfQ oaju ", "vBJI iCoY sTmU DZTr sXQA jOPo wbyh jajF kkrj ctFH ", "AApt mZpz sdtP lRQq iDDl qcyW WsfQ UlUF PFqH HjTE ", "XmJw bTgq rxSW KaCh mkYO xLYc hXHO Ibez yLfn uWFY ", "yHFT KizQ PfuM WOGw JSJr NXCi iXeC MFrS dWio pSsN ", "INhP DxFv dLhF RdEI ytut QLGI nIvK veag NTJl jajF ", "YUsK LtFT tKcp xlRb sBEd apJv KiEg fOKu SrZH PfuM ", "sXpz NFon fOKu caxC hfgB xRHp RfDs Msri xEKg SGIw ", "mkYO nWjg MMQm taUX sXpz IAbr HlPH lTlt KbWB uyxy ", "cfsT aVjL tTFx cteE Pvdg mkYO wVJT EZvF NlBu laZK ", "sXQA Qrdx MrEV KdNY uWFY hEgG Qdfq nMgq jOPo HsTz ", "lvXy eMVL NnLt oSdb jvdd CLsM UlUF HgrN ckYH apJv ", "nMgq ehPk gtar MAMX Anvo uSGj fNNw ambg ZBye PAfa ", "BDXw XmJw NiGV GPzK NkBy sBEd rmDh QcuZ nfsA XZtO ", "WsfQ tylH VCEV Ibez StqM sTmU RfDs EhOn nuun yHFT ", "RZYo IbAP RlCp yQAX jJom lSzP iQCR DubJ dewj FBjd ", "WsfQ INhP Pvdg JSJr sBEd kEzY NmCj ytut GglE ITBI ", "wfRR CrHu RrjU Sces VCdX hyDN wmjQ hyDN vopR VCdX ", "sXQA NOnT EZvF vgha qEgj OCvx lxFi hfgB ukoW QcuZ ", "uyxy DZTr EfME PAfa HgrN HsTz ckYH ytut xNmg NFon ", "dhov mhBG knZX StqM yLfn YGwW TAhW AApt cGMb pmBN ", "veag ytut jJom IUQo aVjL RlCp dLhF iaky cqae PDlA ", "hfbW Sces tTFx mbmr vBJI RlCp vimn KizQ mKJj Yqjf ", "ihCP DubJ HwVp uoAh Yqjf ZtfT cleN whJn DubJ SIZU ", "lSzP xWjB NTJl FtOv mkYO ybgZ XmJw ckYH jOPo cqae ", "QLGI IAbr TMuH knZX qdvH AApt mKJj iaky jRbt QcuZ ", "yQAX anjl caxC UkEo xRHp KutM XmJw jJKv FLAA NOnT ", "Yqjf jajF xNmg DOpt xlRb kEzY NkBy tKcp UkEo KIKd ", "dTXb KQKa CQGi oTTv vimn PFqH eMVL leSr PFqH ckYH ", "tlZw Pvdg PFqH gsul leSr NkBy ivov KutM ytut Tzme ", "uyxy BDXw caxC xriz fOKu QnYL PyyM RfDs lHcc HsTz "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 6, 7, 8, 9, 11, 12, 13, 14, 15, 17, 21, 22, 27, 29, 30, 31, 32, 38, 39, 42, 45, 48};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> knownSpam = {"wRgX MHmt JTBm rvJx lvKh CvbI RINz BcVD dvNM BqGx ", "GMnt hxoe IJfB fLji IULa wzPB XhjU Grdy cACE MWFe ", "duft Gito REkR XpLv KQzP FTmd HjEy Iqdd mlco NnFi ", "rZrz QaCx mfpX RiFh UAkA KMeJ JWnT qfnv qCgJ SiSe ", "nQyJ anyI xvuG cMGI pjdK zVfw ahPP lwBi CAVU Jbhq ", "YiGf cMEq yeJU OqFk LmwY NpGf JGpK AdGN wDNg IWHg ", "MbHW eKhc GPAB CAND WbgI pSaL pShl yPxu Pwjb vwcs ", "Buhl Ruqu Ymll qKzI ngMx xqZE jzBZ epcL OjJp ULFq ", "mElW BkXl uJpZ Zgkd ZcRt ptbe PnvJ pKSp KdSr Ntta ", "WVDJ eUIh HgfW lHYR WeDM uYVf sVBz mIdP APcA JbKG ", "zLMi bgHT aXpD BcLh uLnP QmHD eknf UZfa Ukux SrUZ ", "zXNK dzbr dfXe XXPW iblF Rmux uIrp hdHe aCzc SxQA ", "KLsR kKdG rdUf ClDE Jfuo mmZs Nrju JpUd rFQQ hsyt ", "NpNN pyWr dobi IlQI NTWb QwCu iVem whor YlNa dnzO ", "uoKo QbKF beDY syXS OIzE Ysdl gSzT Gayw hifK sYid ", "evJh yOli vCxy xKUr BbHX Ajzu sorr Zbcg qfuR tNJq ", "RbFT DDpI fCQX Yzrf JvIY ApYj ntZB VqUV YOsw GCIt ", "Pgtv Uuww nqMJ gxKO NeqB Syco hLlM CkdW gUPe FPMo ", "mrGV tlGt Yiyw MhXW Ggns TkoO xLnp UAeN WSON mqUr ", "Qwjf nrsQ RnkI mnqi oNCM wquY TVvV WPVV GVTN TXbC ", "wRgX MHmt JTBm rvJx lvKh CvbI RINz BcVD dvNM BqGx ", "GMnt hxoe IJfB fLji IULa wzPB XhjU Grdy cACE MWFe ", "duft Gito REkR XpLv KQzP FTmd HjEy Iqdd mlco NnFi ", "rZrz QaCx mfpX RiFh UAkA KMeJ JWnT qfnv qCgJ SiSe ", "nQyJ anyI xvuG cMGI pjdK zVfw ahPP lwBi CAVU Jbhq ", "YiGf cMEq yeJU OqFk LmwY NpGf JGpK AdGN wDNg IWHg ", "MbHW eKhc GPAB CAND WbgI pSaL pShl yPxu Pwjb vwcs ", "Buhl Ruqu Ymll qKzI ngMx xqZE jzBZ epcL OjJp ULFq ", "mElW BkXl uJpZ Zgkd ZcRt ptbe PnvJ pKSp KdSr Ntta ", "WVDJ eUIh HgfW lHYR WeDM uYVf sVBz mIdP APcA JbKG ", "zLMi bgHT aXpD BcLh uLnP QmHD eknf UZfa Ukux SrUZ ", "zXNK dzbr dfXe XXPW iblF Rmux uIrp hdHe aCzc SxQA ", "KLsR kKdG rdUf ClDE Jfuo mmZs Nrju JpUd rFQQ hsyt ", "NpNN pyWr dobi IlQI NTWb QwCu iVem whor YlNa dnzO ", "uoKo QbKF beDY syXS OIzE Ysdl gSzT Gayw hifK sYid ", "evJh yOli vCxy xKUr BbHX Ajzu sorr Zbcg qfuR tNJq ", "RbFT DDpI fCQX Yzrf JvIY ApYj ntZB VqUV YOsw GCIt ", "Pgtv Uuww nqMJ gxKO NeqB Syco hLlM CkdW gUPe FPMo ", "mrGV tlGt Yiyw MhXW Ggns TkoO xLnp UAeN WSON mqUr ", "Qwjf nrsQ RnkI mnqi oNCM wquY TVvV WPVV GVTN TXbC ", "wRgX MHmt JTBm rvJx lvKh CvbI RINz BcVD dvNM BqGx ", "GMnt hxoe IJfB fLji IULa wzPB XhjU Grdy cACE MWFe ", "duft Gito REkR XpLv KQzP FTmd HjEy Iqdd mlco NnFi ", "rZrz QaCx mfpX RiFh UAkA KMeJ JWnT qfnv qCgJ SiSe ", "nQyJ anyI xvuG cMGI pjdK zVfw ahPP lwBi CAVU Jbhq ", "YiGf cMEq yeJU OqFk LmwY NpGf JGpK AdGN wDNg IWHg ", "MbHW eKhc GPAB CAND WbgI pSaL pShl yPxu Pwjb vwcs ", "Buhl Ruqu Ymll qKzI ngMx xqZE jzBZ epcL OjJp ULFq ", "mElW BkXl uJpZ Zgkd ZcRt ptbe PnvJ pKSp KdSr Ntta ", "WVDJ eUIh HgfW lHYR WeDM uYVf sVBz mIdP APcA JbKG "};
    vector<string> newMail = {"lHYR xqZE BqGx ocbl xOQU JvIY UGxP YBaL whhP ntZB ", "lvKh uLnP fLji mIdP aCzc cMEq WeDM wzPB xLnp xqZE ", "Bzlm mIdP pjdK boRs JTBm xLnp BqGx oNCM RWDc APcA ", "UAeN pyWr TpLR uIrp dnzO oDgi HjzF XpLv dvNM anyI ", "TIsR SxQA dfXe AdGN MhCx RiFh VqUV syXS dfXe WbgI ", "SrUZ ckJE BkXl OazJ QwCu GCIt VqUV Yzrf NpNN Bzlm ", "LkKr IRuz Ntta RINz SxQA xvuG aXpD eKhc PXvu mnqi ", "Uuww CAVU XEBp FSuZ JWnT YOsw FSuZ ENpx SrUZ uYVf ", "JbKG CAVU hsyt zLMi SSvj BcLh HgfW WeDM hifK BkXl ", "NTWb ahPP WjaQ HjzF mnqi rFQQ hsyt FPMo XhjU xqZE ", "FSuZ rCCp IJfB MhXW IvIU xKUr yOli IJfB bgHT rvJx ", "gSzT ClDE jzBZ Yqmd krzU ZcRt hsyt BqGx Zgkd FPMo ", "SiSe rdUf RnkI vwcs hxoe uLnP vwcs epcL BcVD Syco ", "OIzE iblF whor GVTN Yzrf anyI KLsR pShl MhCx QbKF ", "SiTA Pgtv zHVK anyI DDpI pShl mfpX ZNsX RbFT Moqg ", "nQyJ fCQX uIrp VqUV TkoO ptbe wzPB nqMJ WeDM vCxy ", "zDdU OBni VQTe sNMC WPVV yeJU Difl MWFe OODJ KLsR ", "nQyJ FJso TdEF ryHI xKUr rCCp eReX RFrG APcA sYid ", "xqZE rXJg mfpX ntZB eKhc hLlM ntZB VqUV TkoO Grdy ", "MhXW YTKS cMGI cACE zfII JWnT LFBL zcTp NnFi Nvnl ", "eUIh IWHg xKUr NyQC eknf oNCM kLHY tBlB zfII ahPP ", "hLlM xLnp gxKO JvIY eVau JbKG Buhl qKzI REkR zLMi ", "yeJU HjEy xLnp dobi pShl hifK WPVV ELGI jCMQ GCIt ", "UZfa SOCR uoKo dnzO eVau cMEq cdaP Jbhq XXPW QnFs ", "UAkA zVfw cACE FDsJ ApYj TkoO REkR wRgX cMGI whor ", "Iqdd Ivag bUPd SiSe xKUr Jsey eUIh cACE mlco OfXY ", "evJh Rmux Pwjb wRgX NIZc dnzO dfXe yeJU QwCu OyTL ", "RvCr mnqi ahPP mqUr SBzh hifK dJRm ULFq RvCr PXvu ", "nrsQ ApYj dnzO mIdP TkoO dobi MbHW SSvj lHYR Ruqu ", "KUxC akJx QmHD garR OUFp IJfB pyWr GjMR qKzI LFBL ", "DDpI beDY dxPW WSON cMGI mrGV APcA ApYj yOli uYVf ", "eUIh TXbC gxKO SxQA ceIZ CQog Nrju voqF MhXW KLsR ", "DWkC JWnT WSON gUPe KdSr dobi qfnv ByHl NeqB WeDM ", "YTKS fLji Ntta ApYj vwcs Difl tlGt POlj ptbe mrGV ", "xvuG YNMC xLnp NyQC SrUZ SxQA Rmux uoKo eUIh FTmd ", "VqUV anyI ngMx uLnP KQzP duft BkXl OEhC GMnt KLsR ", "paUN dzbr GMnt iTNZ tdcs Syco uIrp uYVf POlj ZZYA ", "Grdy Iqdd mgIZ kLHY Sgby RdhB xvuG vcdq yOji GPAB ", "hifK ELGI JpUd srhP Pwjb hHJc dJRm nrsQ sRCA Ivag ", "krzU ApYj RnkI eJfF wzPB Zgkd HjzF mlco qfnv Yzrf ", "pyWr epcL VqUV Ukux MhXW tlGt epcL FNqJ NnFi DDpI ", "Grdy pyWr WeDM xvuG mmZs rdUf Uuww Ysdl SiSe rZrz ", "IULa AdGN XXPW TXbC uIrp OODJ uYVf MGhP Fbjt Yzrf ", "UAeN rdUf zVfw fCQX yeJU qfuR voqF IJfB SrUZ BkXl ", "NpGf uLnP anyI Qwjf NTWb Yzrf gSzT ptbe hsyt cMEq ", "WPVV hxoe XpLv OqFk xFkn pyWr Syco OqFk garR LkKr ", "KdSr MHmt hdHe RbFT GMnt oNCM xLnp Pwjb Gito GPAB ", "iVem hsyt YlNa qKzI KUxC nQyJ evJh Ymll Yzrf RFrG ", "WSON vCxy WjaQ lwBi yeJU sVBz Syco lJkQ TtWN YOsw ", "KLsR QaCx bQxA pShl YiGf OLcY Ggns Syco SrUZ Pwjb "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 6, 7, 10, 14, 16, 17, 19, 20, 23, 25, 27, 29, 31, 33, 36, 37, 38, 42, 45};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> knownSpam = {"zASa aDIf fpRS Udjb QEFY YbYV nFPH RvzD BljN TsoH ", "ZAZR thNs FXvF uPkB ZGVA svIA VCug dBAj iupA JoJO ", "lVwj xUfq VSmO pmsS AahI qhCY Jskl nnAc CEdB jDJT ", "LyqJ QUCQ Myrx kUom eWNO PSji mpFE WnXd nyNo RHAH ", "zapz lExE GUmL eUEa kXTE Yebn WpoE ZRGT sRhx AqFb ", "nVSp mKtO sctA oNKq uACU Wyyr TEED JdkO KamE Znhq ", "WMCR Grhu NmCB GARg EmrW wvyy QCIH ZYAY GZCL uBrr ", "BNmf rgcO rsNG Ztnj Uuxs UFuy YVaN AHog cKFZ jJmE ", "kGpT EWEw yGaU BlDg Isoo ZAUB Jowg ttWX ArBo yfLa ", "iVKx IxHf vjdb Dxbg cttU ZNKW aosy SsCF cARH pdnD ", "Yqer IhtC xxRQ DsNi FVjs bcYU waTK QERv GUmI fxzq ", "lyNV ArzD vdMH fApc ysYF GHjI vGdt QpfK eqLO ySRY ", "HlEP VIJc bCEx RpQS KEjb voPf mNll zwxC tEIL VvwO ", "mnHV jDoI rpAy gDVY rAKX lOxt Jfqk Xiaj Gouq jBbn ", "zywt bWnG XrOj KHnA UmAh QgYK FlbU BmhX MjnZ tAcJ ", "hCBv Rxlc EQps Kucd mlca hXDr APmh wmQY RkPL ehyY ", "PyRS PAkc ZFoR roLn xHDy iXEo jtZE ymuF AkIK ORfA ", "jwvh XkTN luUs mgOZ UPpe DaBb Clbu vydl awNp Fwuf ", "zlwS ABce KDhJ SxsV PKIS OGWv wemS irbB vQjp shoc ", "LQsc clZI mOhQ XzyR LRan xSYp dmtJ KxYC lAqk wXes ", "zASa aDIf fpRS Udjb QEFY YbYV nFPH RvzD BljN TsoH ", "ZAZR thNs FXvF uPkB ZGVA svIA VCug dBAj iupA JoJO ", "lVwj xUfq VSmO pmsS AahI qhCY Jskl nnAc CEdB jDJT ", "LyqJ QUCQ Myrx kUom eWNO PSji mpFE WnXd nyNo RHAH ", "zapz lExE GUmL eUEa kXTE Yebn WpoE ZRGT sRhx AqFb ", "nVSp mKtO sctA oNKq uACU Wyyr TEED JdkO KamE Znhq ", "WMCR Grhu NmCB GARg EmrW wvyy QCIH ZYAY GZCL uBrr ", "BNmf rgcO rsNG Ztnj Uuxs UFuy YVaN AHog cKFZ jJmE ", "kGpT EWEw yGaU BlDg Isoo ZAUB Jowg ttWX ArBo yfLa ", "iVKx IxHf vjdb Dxbg cttU ZNKW aosy SsCF cARH pdnD ", "Yqer IhtC xxRQ DsNi FVjs bcYU waTK QERv GUmI fxzq ", "lyNV ArzD vdMH fApc ysYF GHjI vGdt QpfK eqLO ySRY ", "HlEP VIJc bCEx RpQS KEjb voPf mNll zwxC tEIL VvwO ", "mnHV jDoI rpAy gDVY rAKX lOxt Jfqk Xiaj Gouq jBbn ", "zywt bWnG XrOj KHnA UmAh QgYK FlbU BmhX MjnZ tAcJ ", "hCBv Rxlc EQps Kucd mlca hXDr APmh wmQY RkPL ehyY ", "PyRS PAkc ZFoR roLn xHDy iXEo jtZE ymuF AkIK ORfA ", "jwvh XkTN luUs mgOZ UPpe DaBb Clbu vydl awNp Fwuf ", "zlwS ABce KDhJ SxsV PKIS OGWv wemS irbB vQjp shoc ", "LQsc clZI mOhQ XzyR LRan xSYp dmtJ KxYC lAqk wXes ", "zASa aDIf fpRS Udjb QEFY YbYV nFPH RvzD BljN TsoH ", "ZAZR thNs FXvF uPkB ZGVA svIA VCug dBAj iupA JoJO ", "lVwj xUfq VSmO pmsS AahI qhCY Jskl nnAc CEdB jDJT ", "LyqJ QUCQ Myrx kUom eWNO PSji mpFE WnXd nyNo RHAH ", "zapz lExE GUmL eUEa kXTE Yebn WpoE ZRGT sRhx AqFb ", "nVSp mKtO sctA oNKq uACU Wyyr TEED JdkO KamE Znhq ", "WMCR Grhu NmCB GARg EmrW wvyy QCIH ZYAY GZCL uBrr ", "BNmf rgcO rsNG Ztnj Uuxs UFuy YVaN AHog cKFZ jJmE ", "kGpT EWEw yGaU BlDg Isoo ZAUB Jowg ttWX ArBo yfLa ", "iVKx IxHf vjdb Dxbg cttU ZNKW aosy SsCF cARH pdnD "};
    vector<string> newMail = {"WnXd DVND mNll OfFn FKEK mGeF qYaM hCBv SsCF KHnA ", "WlzF YVaN clZI ZNKW DsNi bWnG kdon KamE RrLy jTZt ", "TEED vdvA Xiaj zlwS QEFY qhCY rAKX vGdt ZYAY drlt ", "sctA LRan zAIp cKFZ AHog jwvh qtfL QpfK xHDy NHvL ", "pvrr zbSu QERv mNll wemS HXXx VIJc ZGVA wPCU ymQk ", "GZCL Jowg shad Essq HlEP WnXd irbB ntkC ruvw KamE ", "jBbn Wyyr jiGr zwxC AkIK jDoI LBob pXbt wgij VvwO ", "mKtO QpfK Znhq tCSF Udjb AkIK PyRS mnHV AkIK awNp ", "ORfA ruvw ArBo VYsw iXEo ArBo rFVb aosy aDIf BNmf ", "Myrx wvyy PAkc Jskl pnuG ILRR rFVb wPCU voPf DsNi ", "bjxC YbYV izlc dDKV mlca eqLO zdNY BNmf bWnG Jfjr ", "svIA oNKq rFVb vGdt roLn oqhv rolM Gvnd ySRY wjxM ", "JdkO GZCL wmQY tEIL KEjb mOhQ Jfqk ZFoR Isoo ehyY ", "ABce aDIf Lbri hLuL ymQk RkPL APmh VIJc EWEw lyNV ", "bIGM Fwuf wXes STRC LRan QERv YbYV xHDy FEPQ Yqer ", "eqLO AHog hPZe KamE Udjb mNll cKFZ dBAj ZGVA EQps ", "iNTS dQKo Clbu uACU ZGVA aQju kdon PKIS GARg gDVY ", "VCqj ZAUB jwhp RvzD qYaM hCBv rpAy lOxt KAiT ZAUB ", "shoc aosy jDJT wXes xxRQ dDKV Kucd AqFb ArBo RKnW ", "FXvF KHnA KxYC SsCF MjnZ wmQY lOxt Znhq bcYU nVSp ", "xxRQ ZNKW cARH svIA mpFE ySRY QpfK QCIH TsoH UPpe ", "HlEP wXes vjdb Yebn mNll bCEx KDhJ ZAUB zapz tEIL ", "KHnA SsCF GHjI AkIK OGWv waTK WMCR RpQS RkPL tAcJ ", "QADO VSmO vydl bIGM waTK eqLO rEQv IuSw qBLQ ZFoR ", "bCEx Lrng luUs jJmE eqLO luUs uNXF LRan Wyyr UPpe ", "IpAL ehyY IxHf DsNi ORcA ehyY GUbW tSRx APmh EmrW ", "XrOj Wyyr STCl Isoo jJmE WMCR AHog vGdt Wyyr PAkc ", "bWnG KlYC nVHU zVqq LBob ZAUB zASa kUom XlsC iupA ", "ILRR ghvY rEQv qhuR Yqer ABce RGwk bCEx wWpp eBqS ", "snIH zVqq VYsw BuLZ IQBO iVKx ymuF snIH Udjb Znhq ", "ymuF tEIL WMCR uBrr jTZt pQGW Udjb HXXx BlDg Iddm ", "uBrr ynuG ORfA nVSp tEIL ymQk ONAi thNs bTUG sRGC ", "cARH RrLy ZAUB GUmL CEdB sRhx bCEx BFRP IEvl Grhu ", "eKKb Gvnd zdNY GUmI iupA sjwr eqLO bxqg NmCB wXfD ", "dmtJ YcUk YVaN NHvL Wfzm kXTE Kucd svIA rEQv gaaX ", "oNKq vGdt ILRR RvzD GZCL VIJc waTK nVSp IEvl JdkO ", "IuSw zdNY LRan eKKb mnHV FKgB waTK cARH dZKM Wamf ", "iupA MjnZ FLwI cARH Yqer ntkC YiPo QUCQ gjim Qbxe ", "ycVa mKtO wvyy ehyY luUs rEQv waTK fcbZ YcUk tSRx ", "Jskl DsNi rsNG rsNG kUom dBAj eIBI SjVR RvzD Yebn ", "UFuy jJmE shad ZRGT QaEt tZZI eIBI ZGVA wvyy pmsS ", "NmCB pXbt iupA FXvF Fwuf vQjp cttU aosy ZRGT gDVY ", "PKIS cKFZ HlEP dBAj KAiT GHjI ArzD BNmf GUmL waTK ", "GUmI lAqk mlca Kucd Xiaj tEHS wmQY rAKX jDJT hXDr ", "zywt ehyY vydl RHAH dDKV jJmE AkIK lrEy TsoH LRan ", "Isoo Isoo UirI bxqg VCug nnAc zbSu xHDy QUCQ HlEP ", "Jowg zapz RrLy qYaM Qbxe FYcV kXTE xSYp BFRP GUbW ", "xxRQ OfFn aDIf bCEx wPCU vydl ZAZR nFPH zywt EQps ", "irbB mKtO mKtO oNKq kXTE wgij qhCY mlca QUCQ jwvh ", "qszO WIdL zywt zVqq gYJt LyqJ UPpe HCHK ADVn SsCF "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 8, 9, 10, 11, 13, 14, 16, 17, 23, 25, 27, 28, 29, 30, 31, 32, 33, 34, 36, 37, 38, 40, 45, 46, 49};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> knownSpam = {"ncxU rVQf ebMj gfOU ZUAg NZfQ gNoG bkuG ciXW qceA ", "ywWh WGZR irBH Vapg Irsg rZdm pZJn fIQj RPcJ QJsk ", "KyZU cwLl CKhV Rjcs ctkF gUmj fRya EGXR pGVL SXCo ", "UlJX HFHb TZyQ slNB pRVt XCCL nnGn YeMJ txSf QRDp ", "gapl KOfZ BJHZ mYVz gsmR QdWb tFKs dImX dofA AMNi ", "Bauf IqtF EKTh smNX Ubbj wRGQ FOSQ qqsd gvxT FlMA ", "gEwy iCjB Lsoo CWZa wxZK qmnZ WdIA FAUJ PkZR gACM ", "gbVa UoJF LtAW dJOT vMXb Qkkv sTeJ NCpB BeKa FCdv ", "QBXr QCxj bfWo Kdsn VoYn VRwo INMr NxVu sdve hXEM ", "CfOC Qyox VVdP IgDU zJVm YIVq gvuG utHD gExi MQZg ", "RHzc bATV tOrH yIec XheA qrOv ShZU EyRZ XVUD clCZ ", "acsN ftyc pvCE luOi uPZv nBBs coyI lCGu umuJ PvDJ ", "STZl DVpR WtMU AVqY NnMS oUZc Ggof zRzE yqZY MCRr ", "BEEC OVHm kwqe DXBR UIee JjQZ Zjxp ZzVO PcBO KOYe ", "fAsD paRD OAwj Tfxr vwOv QQtr EEVo pItH BGeW OVlu ", "SgzB cvOz VGCn LKBV pldP ryCx SQdD iGFL KyVp kXIJ ", "RoeF UFVN saOY dtHy aHrd BPlC xjUz fotI xjfg hYqS ", "SpCO alZQ CCih IguG nOee payF kLww tMSl krPu RJGT ", "gaFO NzSA RxVH OdUf iHNz MJHK ZzwE AdEA amQK aGrY ", "hBAO TgCD DQuH XCEV tnVr OLRX Cony adIJ cBXq qXbF ", "ncxU rVQf ebMj gfOU ZUAg NZfQ gNoG bkuG ciXW qceA ", "ywWh WGZR irBH Vapg Irsg rZdm pZJn fIQj RPcJ QJsk ", "KyZU cwLl CKhV Rjcs ctkF gUmj fRya EGXR pGVL SXCo ", "UlJX HFHb TZyQ slNB pRVt XCCL nnGn YeMJ txSf QRDp ", "gapl KOfZ BJHZ mYVz gsmR QdWb tFKs dImX dofA AMNi ", "Bauf IqtF EKTh smNX Ubbj wRGQ FOSQ qqsd gvxT FlMA ", "gEwy iCjB Lsoo CWZa wxZK qmnZ WdIA FAUJ PkZR gACM ", "gbVa UoJF LtAW dJOT vMXb Qkkv sTeJ NCpB BeKa FCdv ", "QBXr QCxj bfWo Kdsn VoYn VRwo INMr NxVu sdve hXEM ", "CfOC Qyox VVdP IgDU zJVm YIVq gvuG utHD gExi MQZg ", "RHzc bATV tOrH yIec XheA qrOv ShZU EyRZ XVUD clCZ ", "acsN ftyc pvCE luOi uPZv nBBs coyI lCGu umuJ PvDJ ", "STZl DVpR WtMU AVqY NnMS oUZc Ggof zRzE yqZY MCRr ", "BEEC OVHm kwqe DXBR UIee JjQZ Zjxp ZzVO PcBO KOYe ", "fAsD paRD OAwj Tfxr vwOv QQtr EEVo pItH BGeW OVlu ", "SgzB cvOz VGCn LKBV pldP ryCx SQdD iGFL KyVp kXIJ ", "RoeF UFVN saOY dtHy aHrd BPlC xjUz fotI xjfg hYqS ", "SpCO alZQ CCih IguG nOee payF kLww tMSl krPu RJGT ", "gaFO NzSA RxVH OdUf iHNz MJHK ZzwE AdEA amQK aGrY ", "hBAO TgCD DQuH XCEV tnVr OLRX Cony adIJ cBXq qXbF ", "ncxU rVQf ebMj gfOU ZUAg NZfQ gNoG bkuG ciXW qceA ", "ywWh WGZR irBH Vapg Irsg rZdm pZJn fIQj RPcJ QJsk ", "KyZU cwLl CKhV Rjcs ctkF gUmj fRya EGXR pGVL SXCo ", "UlJX HFHb TZyQ slNB pRVt XCCL nnGn YeMJ txSf QRDp ", "gapl KOfZ BJHZ mYVz gsmR QdWb tFKs dImX dofA AMNi ", "Bauf IqtF EKTh smNX Ubbj wRGQ FOSQ qqsd gvxT FlMA ", "gEwy iCjB Lsoo CWZa wxZK qmnZ WdIA FAUJ PkZR gACM ", "gbVa UoJF LtAW dJOT vMXb Qkkv sTeJ NCpB BeKa FCdv ", "QBXr QCxj bfWo Kdsn VoYn VRwo INMr NxVu sdve hXEM ", "CfOC Qyox VVdP IgDU zJVm YIVq gvuG utHD gExi MQZg "};
    vector<string> newMail = {"QBXr rdkl qqsd UFVN aGrY BJHZ hBAO pGVL tFKs LnId ", "ebMj adIJ OLRX OVHm Ggof AVqY IqtF zRzE pItH MQZg ", "Tfxr OLRX QQtr CWZa oUZc Cony eTry EyRZ IqtF pqnD ", "QCxj VRwo xjUz INMr rJoC CfOC nnGn BGeW VGCn FlMA ", "NZfQ Irsg MJHK gExi dImX ZzVO czLE kXIJ alZQ smNX ", "aGrY iHNz RxVH EGXR QBXr UlJX QdWb RPcJ XCCL cBXq ", "CCih CwAv yVqe HFHb pvCE JUIs rJoC pvCE NCpB qlLD ", "itJG qqsd jAkV xjUz OVlu kXIJ Qkkv yqZY iCjB irBH ", "smSn zJVm IgDU STZl SgzB hyGd PvDJ ZzVO hsUR WdIA ", "MJHK ctkF xvad EKTh dJOT Njce QofY fotI QQtr VGCn ", "tSmd CCih Vapg sdve amQK KyZU hBAO SQdD BEEC Ggof ", "aHrd jAaJ kHMd STZl UCby PVAN ecQq AMNi XCEV DgoV ", "dGcm hBAO DXBR VRwo GjiA OLRX gvuG HFHb gfOU wrNw ", "kLww acsN zRzE adIJ pZJn luOi ctkF gbVa gaFO NCpB ", "ywWh WGZR WdIA ciXW nBBs UlJX nOee saOY sTeJ bATV ", "xvad yIec XCEV dZNd qlLD mYVz CfOC UoJF jduQ AdEA ", "FCdv kLww NnMS hYqS OdUf ZzwE fIQj Rjcs dJOT CfOC ", "JjQZ ywWh DVpR cXQK MCRr OLRX dtHy bfWo wcLr UPGm ", "STZl HFHb pGVL aHrd Cony SgzB mYVz DZQo nnGn Lsoo ", "jxPL nIpj YIVq AdEA ZzVO AMNi FOSQ CwAv IqtF Irsg ", "dJOT mYVz QJsk ywWh gfOU Qkkv BeKa bfWo zJVm kwqe ", "BuSL irBH aHrd aGrY hBAO CwAv OVHm VGCn gfOU EKTh ", "NxVu BJHZ RMrF Kdsn ShZU CKhV gACM SgzB nnGn OAwj ", "INMr UFVN MQZg slNB UlJX PvDJ qXbF Irsg gaFO eTIL ", "QBXr yeph gaFO wRGQ ZxKg sdve Irsg hyGd OVlu iCjB ", "fRya pvCE RoeF qrOv QdWb cvOz wxZK QQtr XVUD EoFt ", "RYRG uxbf sdve coyI NxVu RYRG qXbF FCdv RMkU WtMU ", "dJjO BPlC ShZU UoJF EyRZ NxVu lCGu UPGm LtAW Lsoo ", "ncxU dePJ WeDw qceA VKeS ftyc JUIs xikR XKRS INMr ", "RxVH RHzc WdIA RxVH FCdv jOEh aGrY smNX iHNz qrOv ", "AdEA hBAO QBXr AVqY CKhV KyZU QRDp gNoG ncxU gapl ", "pldP jOEh Jriv tMSl zJVm xjUz VFHy tOrH vToa yykL ", "nBBs KyVp krPu gExi umuJ vwOv EyRZ pvCE luOi txSf ", "MCRr naDP TgCD LKsY MbyM PkZR iCjB BPlC jAaJ KDkq ", "COay VKeS KiVb MbyM MKaw FaLK BQhl QRDp dofA nOfu ", "HFHb iCjB clCZ kLww EyRZ gEwy tFKs jQKP YeMJ XheA ", "KOYe nOee iCjB HFHb dJOT slNB IgDU sTeJ JjQZ bATV ", "fIQj xyUr nIWd XKRS Fmvl oSot DXBR LUsH EoFt gNPT ", "jAaJ OwIy utHD bbtT cyhB RYRG JkHl UpHK lCGu XTLP ", "eVTb dGcm Vapg Irkc Lsoo NGkd RKVE cTpz QBXr wrNw ", "ZkZi gapl qmnZ qmnZ EKTh Vapg UIee payF DQuH QCxj ", "FCdv luOi tnVr kLww KyVp nBBs zRzE pRVt AVqY hYqS ", "pqnD XCEV NzSA qlLD alZQ QBXr YQMU BeKa dZNd QofY ", "FlMA FOSQ MCRr umuJ aGrY yIec vwOv bQxB Bauf QdWb ", "Vapg VKeS qrOv qmnZ DXBR mYVz nagv Zjxp oUZc ZkZi ", "Cnau rZdm SpCO txSf xcFQ RJGT CKhV YLlh CKhV iGFL ", "xVuC Rjcs tOrH NPgR bkuG hXEM Bauf gvuG ShZU YQMU ", "jduQ saFf aGrY aGrY UlJX UPGm gNoG slNB gapl KQvz ", "WeDw zFkc bkuG qceA Kaze YSgG yqZY tOrH iHNz tnVr ", "VFjI ikFl lwZS jduQ smNX Bauf VVdP dZYl Tkci kDwG "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 9, 11, 12, 15, 17, 19, 24, 26, 28, 31, 33, 34, 37, 38, 39, 42, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> knownSpam = {"boIL RAxx RnnN muLr WtWb sMdo qulw YuDs fQBC yaWY ", "cJSI zHvA Sopl wPSt Fgiu IoED HKGL AmVv bRuO dmZw ", "iJxO jnyB Mqlk PkvQ fJVf BXto qzLH eboP aHmp TViX ", "ArIc bSes jytm nuNU hWBS IFEw jrRb yBHM TVdq ytzf ", "EJCn NLDa NfcY KRto HkVD KPaA btTP GCsU MNUv ztKD ", "VSdg cHor EnFe uGpu ziGX GkPk VTop VVPK IWeM OezY ", "Fcfg SCqv mFeG WQvC qSAC ziQd wUdp snQA aSGp nYwv ", "imfX XWVA frdm JRiV EAlm Sdeq DCSQ TIDB OouO jFHL ", "IGAB QiCt NNCd pxoT ATHB Pmjl fMlx QiCy iSMF CYOb ", "FzUe DzIj VamR QFIV HOeq EkrP zspN JIYX dUrj iOtJ ", "HXNs RdDz sNsV dMgG kQTD ctvX qerh FjkW MSeq FAGv ", "seSf SyXR mFqU GhLN bZVX Iifi SOIu aIPL tEuE DGfG ", "wgWs Zxwt TrDL bmPM knal olgs KMso MvwR ekoi NoLE ", "URLm eUVB SjCW ZVTJ Xiee FpaD Uayu scum RywL xzMY ", "AjfS WdjM oBNu TBBE ueGS nhzP igWb Bsju OuyV IgAm ", "leWO wjmT ALDo Hhkm kAlK oXcL UqRe pADC Cdnn KfLR ", "HGJc WWbn VVVT AHTW TABy niqN wRqA bAWu lzUL uoLj ", "nAuL QhCQ JPLB hZSf GfSH Fnqd wFkZ eQMO QBxZ olCV ", "kUOu Luor LOfx PLfP iJVm eGGQ KrsG gCDY XjuV dBrG ", "NvJF JJFs piXd yCaM gTFK AVuW WXHg nFzn HWIF olML ", "boIL RAxx RnnN muLr WtWb sMdo qulw YuDs fQBC yaWY ", "cJSI zHvA Sopl wPSt Fgiu IoED HKGL AmVv bRuO dmZw ", "iJxO jnyB Mqlk PkvQ fJVf BXto qzLH eboP aHmp TViX ", "ArIc bSes jytm nuNU hWBS IFEw jrRb yBHM TVdq ytzf ", "EJCn NLDa NfcY KRto HkVD KPaA btTP GCsU MNUv ztKD ", "VSdg cHor EnFe uGpu ziGX GkPk VTop VVPK IWeM OezY ", "Fcfg SCqv mFeG WQvC qSAC ziQd wUdp snQA aSGp nYwv ", "imfX XWVA frdm JRiV EAlm Sdeq DCSQ TIDB OouO jFHL ", "IGAB QiCt NNCd pxoT ATHB Pmjl fMlx QiCy iSMF CYOb ", "FzUe DzIj VamR QFIV HOeq EkrP zspN JIYX dUrj iOtJ ", "HXNs RdDz sNsV dMgG kQTD ctvX qerh FjkW MSeq FAGv ", "seSf SyXR mFqU GhLN bZVX Iifi SOIu aIPL tEuE DGfG ", "wgWs Zxwt TrDL bmPM knal olgs KMso MvwR ekoi NoLE ", "URLm eUVB SjCW ZVTJ Xiee FpaD Uayu scum RywL xzMY ", "AjfS WdjM oBNu TBBE ueGS nhzP igWb Bsju OuyV IgAm ", "leWO wjmT ALDo Hhkm kAlK oXcL UqRe pADC Cdnn KfLR ", "HGJc WWbn VVVT AHTW TABy niqN wRqA bAWu lzUL uoLj ", "nAuL QhCQ JPLB hZSf GfSH Fnqd wFkZ eQMO QBxZ olCV ", "kUOu Luor LOfx PLfP iJVm eGGQ KrsG gCDY XjuV dBrG ", "NvJF JJFs piXd yCaM gTFK AVuW WXHg nFzn HWIF olML ", "boIL RAxx RnnN muLr WtWb sMdo qulw YuDs fQBC yaWY ", "cJSI zHvA Sopl wPSt Fgiu IoED HKGL AmVv bRuO dmZw ", "iJxO jnyB Mqlk PkvQ fJVf BXto qzLH eboP aHmp TViX ", "ArIc bSes jytm nuNU hWBS IFEw jrRb yBHM TVdq ytzf ", "EJCn NLDa NfcY KRto HkVD KPaA btTP GCsU MNUv ztKD ", "VSdg cHor EnFe uGpu ziGX GkPk VTop VVPK IWeM OezY ", "Fcfg SCqv mFeG WQvC qSAC ziQd wUdp snQA aSGp nYwv ", "imfX XWVA frdm JRiV EAlm Sdeq DCSQ TIDB OouO jFHL ", "IGAB QiCt NNCd pxoT ATHB Pmjl fMlx QiCy iSMF CYOb ", "FzUe DzIj VamR QFIV HOeq EkrP zspN JIYX dUrj iOtJ "};
    vector<string> newMail = {"dMgG LOfx nhzP rFVe KMso hZSf ueGS dMgG kAlK aSGp ", "Hcop oBNu HOeq eUVB HHMo bRuO HXNs xzMY PkvQ Xiee ", "hMjB bRuO EkrP PmYk pxoT ytzf rPil rYQs Sopl dUrj ", "lEtX tEuE iJVm NLDa HkVD SAuA LQJW kqGQ WGoI uoLj ", "piXd VSdg qweX IwFq lEtX pADC OMdz Bssq qulw lzfO ", "oXcL AEWg Fcfg csKD dmZw dUrj kUOu cJSI FHgH FUKL ", "eboP FjkW Pmjl PkvQ fQBC KRto ytJF AjfS knal BXto ", "crFK OezY bSes JDaF ztKD ZUUK KcoX ZUUK zspN ZVTJ ", "aIPL MSeq wjmT Iifi MSeq qSAC GkPk wPSt kQTD SCqv ", "fMlx EAlm dBrG RywL hZSf Zxwt KJGI nFzn jnyB VTop ", "MvwR RdDz EnFe iJxO MSeq KrsG dMgG HGJc hZSf TABy ", "wUdp oBNu SOIu uoLj Pmjl AVuW EkrP yCaM QiCt URLm ", "Cdnn SOIu eboP SOIu gTFK MixH olgs PLfP WdjM oXcL ", "WtWb hZSf oBNu yBHM sNsV sMdo lzUL WWbn FzUe snQA ", "lEYC leWO leWO NLDa JJFs FjkW KPaA Iifi TIDB qulw ", "Pmjl Sopl jrRb ziGX FjkW DCSQ ZVTJ NvJF NvJF QBxZ ", "kQTD HkVD GkPk Mqlk RAxx QBxZ Iifi pxoT IWeM knal ", "LQJW ybJO OlBt fMlx yaWY OlBt BWAq ytJF kQTD Fgiu ", "KrsG iJVm uGpu KvTD gCDY EAlm Mqlk iOtJ SCqv dUrj ", "nuNU xzMY TIDB BWAq IWeM cJSI wFkZ LHvD TBBE yaKo ", "IFEw mFeG oXcL HKGL FZRi HXNs SyXR RywL IYTx LOfx ", "Sopl VSdg KSSA btTP uoLj bmPM tEuE ueGS niqN TViX ", "ziGX MvwR frNM nYwv HYiP agLD ZzZY EFAz QiCy ueGS ", "kbCP BWAq iJVm rfYJ GDHr Bknx KEYG yQyw vcVR ztKD ", "ztKD DZdO PkvQ GkPk VVVT xzMY tEuE HLuQ ybJO Sdeq ", "sNsV FHgH VamR pADC knal HLuQ cBxM uoLj LOfx olCV ", "iJxO ZTCn JRiV hZSf oXcL RywL BXto oAaW xpIG IEKo ", "MNUv Sdeq UqRe YVCB PbQG TTHo ePcf dUrj yaWY wjmT ", "qerh GhLN IWeM yaKo wgWs nFzn wUdp Bpky FtPA OCep ", "RAxx ctvX imfX NLDa PbQG seSf EJCn OezY HKGL BWAq ", "FZRi SyXR EkrP bmPM nAuL nTpn Bknx OouO MixH Trvi ", "nTpn zrUv yaKo jZeY bmPM ytzf Yrjf BPaQ swEH ztKD ", "WdjM WdjM FyDw GdFm bmPM HkKe VVPK bSes pxoT YuDs ", "peWp bgpT QFIV LHvD wBGO QhCQ bSes WdjM XNNd hLJU ", "SAuA xzMY pADC DrAW GkPk oSXK AEWg cBJV APfL OezY ", "fQBC KMso OezY Sdeq HKGL AmVv kUOu OGjk sMdo yaWY ", "WWbn ZVTJ eGGQ KGoP agLD ZUUK KrsG okwX eboP KEYG ", "uLdp piXd UieO ZVTJ wPSt DGfG SOIu zoOz KMso KfLR ", "JPLB OezY Bssq WtWb rYQs ybJO CYOb Luor rPil OuyV ", "bmPM ZVTJ QBxZ WKso TVdq okwX yhIp RywL rzVK TrDL ", "ztKD wgWs OGjk eGGQ LOfx rYQs qweX RdDz aSGp KwLw ", "ZBzS CYOb Bssq FtPA Kpwm ybJO wgWs yQyw Zxwt hZSf ", "QBxZ kAlK gCDY lzUL NvJF ekoi cBxM ziQd leWO SCqv ", "TIDB btTP TVdq TABy scum KPaA FzUe Bsju EJCn WtWb ", "DOwy UzdR lEtX GkPk WwIj OdBQ zrUv ZBzS HLuQ BQex ", "nYwv agLD LQJW NoLE tYXy EnFe IwFq olCV VlTr GhLN ", "nuNU qSAC iSMF Zxwt SIqt seSf Mqlk iOtJ hWBS qHbX ", "niqN bRuO bSes nycP DzIj wPSt igWb dUrj GdFm wQKC ", "HWIF KrsG YuDs qerh Bsju zHvA yaWY TViX EnFe piXd ", "NoLE RAxx MNUv wUdp kAlK gCDY tYXy KRto ZVTJ KMso "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 7, 17, 19, 22, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 36, 37, 38, 39, 40, 41, 44, 45, 47};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> knownSpam = {"uKRm POEu YSly EybQ hyuf LVqZ tQlg aOpi BnwP YIyn ", "cjdW HAEW VkPZ juUW aCNy MQHc BvYj PMho yawu Apbk ", "ZROT cKMC EnfM vszq yhGr yjqE MYBG alot vVYh Swbq ", "feHF DHVH gqHK bpuA olUt sbzS OzMC VBwC PQBy Zdtn ", "DiOF hJog ksGw tsAz WcWb BEXW Usmj vFIc gwvo LIkP ", "WGRf aDUD zbNX TuAB ywQv LzEA hBmW vNam ZenV MVJH ", "JNUz NjTg qtZn Qxjo ksjY IBWR BBCn zuZq ESYP ZKcu ", "OicH CNfD IKGF LUkD yvEA MVLB Uxyi qUXA MNwe ZveK ", "hfga uZJx ITYx tfPk inzR YNVC nWnJ thbI Tafr OBDm ", "POaW AcJy wAps vUMX vbcX udOO mkhb ofwH Mkee YTVw ", "ozaq HKeE QSsx JvEM Xtsj jAfs OIZy dZHW JZNY MOCU ", "aLpz wMPW coGf bQrU kjRp jdjT LeeV iqMs ZnAA FkwL ", "bCGO wnKQ UUgV GMOo qhdO ybAQ maah vSAX iuot KEsE ", "xggj XKDA fDqD bIqk jwGe CbCE HGFv tvDr HLDy MOCN ", "QTlb Ajub CAQC Gfiv RjnS BmUS mhkY XRaI mqXT fUdV ", "OqsW HpEz gwsL jqEA rpTB bvVw aMuH XgpD SvmV ZGsC ", "oSmt pmle oTob cTzD XMQa pDAh BLSd VVOd SIrS VoVI ", "PoLv aaKt lbYk fZRj geYT FcWH IMqS yVvJ PoNk tPvD ", "EkmD atAQ QrFW vIlp cTry EYTu AnAM VjzR koWp LHll ", "xrXA qsCv kliu LKNb KASQ CqFj ZXAf YtYR khYB KusU ", "uKRm POEu YSly EybQ hyuf LVqZ tQlg aOpi BnwP YIyn ", "cjdW HAEW VkPZ juUW aCNy MQHc BvYj PMho yawu Apbk ", "ZROT cKMC EnfM vszq yhGr yjqE MYBG alot vVYh Swbq ", "feHF DHVH gqHK bpuA olUt sbzS OzMC VBwC PQBy Zdtn ", "DiOF hJog ksGw tsAz WcWb BEXW Usmj vFIc gwvo LIkP ", "WGRf aDUD zbNX TuAB ywQv LzEA hBmW vNam ZenV MVJH ", "JNUz NjTg qtZn Qxjo ksjY IBWR BBCn zuZq ESYP ZKcu ", "OicH CNfD IKGF LUkD yvEA MVLB Uxyi qUXA MNwe ZveK ", "hfga uZJx ITYx tfPk inzR YNVC nWnJ thbI Tafr OBDm ", "POaW AcJy wAps vUMX vbcX udOO mkhb ofwH Mkee YTVw ", "ozaq HKeE QSsx JvEM Xtsj jAfs OIZy dZHW JZNY MOCU ", "aLpz wMPW coGf bQrU kjRp jdjT LeeV iqMs ZnAA FkwL ", "bCGO wnKQ UUgV GMOo qhdO ybAQ maah vSAX iuot KEsE ", "xggj XKDA fDqD bIqk jwGe CbCE HGFv tvDr HLDy MOCN ", "QTlb Ajub CAQC Gfiv RjnS BmUS mhkY XRaI mqXT fUdV ", "OqsW HpEz gwsL jqEA rpTB bvVw aMuH XgpD SvmV ZGsC ", "oSmt pmle oTob cTzD XMQa pDAh BLSd VVOd SIrS VoVI ", "PoLv aaKt lbYk fZRj geYT FcWH IMqS yVvJ PoNk tPvD ", "EkmD atAQ QrFW vIlp cTry EYTu AnAM VjzR koWp LHll ", "xrXA qsCv kliu LKNb KASQ CqFj ZXAf YtYR khYB KusU ", "uKRm POEu YSly EybQ hyuf LVqZ tQlg aOpi BnwP YIyn ", "cjdW HAEW VkPZ juUW aCNy MQHc BvYj PMho yawu Apbk ", "ZROT cKMC EnfM vszq yhGr yjqE MYBG alot vVYh Swbq ", "feHF DHVH gqHK bpuA olUt sbzS OzMC VBwC PQBy Zdtn ", "DiOF hJog ksGw tsAz WcWb BEXW Usmj vFIc gwvo LIkP ", "WGRf aDUD zbNX TuAB ywQv LzEA hBmW vNam ZenV MVJH ", "JNUz NjTg qtZn Qxjo ksjY IBWR BBCn zuZq ESYP ZKcu ", "OicH CNfD IKGF LUkD yvEA MVLB Uxyi qUXA MNwe ZveK ", "hfga uZJx ITYx tfPk inzR YNVC nWnJ thbI Tafr OBDm ", "POaW AcJy wAps vUMX vbcX udOO mkhb ofwH Mkee YTVw "};
    vector<string> newMail = {"HpEz gwsL snRK EkmD cKMC tvDr gqHK EnfM CRys FkwL ", "bNye mkhb vVYh jqEA yawu HpEz PWCy EybQ jwGe yCQT ", "qXdF XKDA QTlb MOUn olUt ptiS sYeS CRys hJog koKw ", "CNfD aTrE AmgG MVJH vUMX MWqy KlnX FlED IBWR KASQ ", "QSsx yjqE NjTg MYBG sYeS EEEe YtYR ybAQ hJog BLSd ", "MOCU YNVC QhTC aOpi BRIz KlnX keDr geYT BvYj tfPk ", "EYTu MNwe JvEM xggj aaKt ZKcu AmgG SvmV cjdW OqsW ", "uZJx AcJy vNam ZenV Vmdj bvVw OBDm vzrI YNVC bkwf ", "LzEA aLpz WoLB Kceo juUW zbNX VBwC EnfM gIKC Mkee ", "BvYj bvVw vSAX xuzw JdoA pDhp Gfiv VjzR jdVZ SvmV ", "MiTg aeVa knYq OzMC FlED YKqB FcWH Ntdq hfga sYeS ", "XKDA mkhb PWCy YtYR ZKcu LUkD HpEz yawu MOCU Qxjo ", "khYB LKNb aCNy HAEW HpEz thbI vFIc bIqk feHF lbYk ", "yawu dFji hvJG qUXA Xtsj gvWN mhkY FcWH CAQC mhkY ", "UqGj Vmdj DiOF feHF Vmdj bIqk ozaq geYT oSmt bQrU ", "MPEm ZveK LKNb Uxyi QrFW qhdO JNUz wDvH ksjY gkZU ", "hcmu vIlp dZHW ksjY YKqB qhdO ZKcu cHUS zbNX EnfM ", "tPvD vNam POEu HLDy LIkP qtZn knYq wnKQ LVqZ KusU ", "oDou zuZq ZKcu jqWZ YTVw AgDp QhTC BvYj QrFW HjWY ", "gwvo ESYP vszq MYBG aDUD zuZq inzR gwsL qsCv cTry ", "NszO CzmX SJQe OqsW Ppcd XgpD NjTg CzmX koKw vFIc ", "UrJV dZHW MOCU haru ZGsC KEsE KASQ qsCv atAQ CbCE ", "zuZq vszq XMQa Mkee WGRf lVcN LeeV LIkP BEXW jAfs ", "aCNy wAps yVvJ aTrE Ncbf koWp AbmF xggj atAQ aOaU ", "pDAh DiOF tvDr Ajub ZGsC Qxjo ZROT VkPZ aaKt MOCN ", "snRK ESYP OqsW aCNy CNfD vVYh BLSd xggj ybAQ YIyn ", "blvJ xAHv xQIV LaaG XqqV MVJH XJiQ tQlg CNfD coGf ", "uKRm TuAB BnwP uZJx cSzd jqEA qUXA Cnep LVqZ aCNy ", "MYBG CqFj JNUz NjTg EYTu yVvJ ZXAf hBmW ZXAf GMOo ", "PQBy cKMC ybAQ cTzD FcWH IMqS aCNy ksjY RLFT fDqD ", "qUXA YeNc NRfE DHVH PoLv DiOF iuot VjzR MOUn hBsC ", "cTry SvmV Apbk khYB ZveK cjdW ZveK Usmj tfPk gwvo ", "vszq thbI WGRf OzMC Gfiv xuzw OqsW LeeV vIlp cSzd ", "fDqD Tafr EybQ uUSK WcWb POaW bQrU iqMs wnKQ MOCU ", "Usmj nZpr uKRm ofwH zuZq xggj cfeh Ajub SSWF iABs ", "JUJj icZj jdVZ zuZq jEWk inzR LaaG Cnep Tafr Jpze ", "NRfE aDUD Qxjo udOO XIHk xQzl kCrH eiUa HLDy tPvD ", "jPqV IBWR ywQv ZXAf ESYP bvVw SAJx YtYR ptiS AEKO ", "Ajub cKMC tQlg hBmW OzMC tsAz YSly yjqE SvmV uZJx ", "KASQ OBDm YSly Tafr hfga NjTg POaW ksjY OicH bvVw ", "vFIc OicH XMQa rFXe Zdtn HIxZ NWiD XRaI nZpr aOaU ", "MNwe kjRp KEsE GMOo BmUS VVOd vSAX tvDr vUMX XRaI ", "ksjY vFIc agDD PMho PzMY kSCr FycF ZXAf hfga OIZy ", "YCwp KASQ OqsW qhdO udOO VVmB VoVI tWUj xqmv ODck ", "jdVZ oDou tsAz jPqV XJiQ DTND aOpi ZkSe BEXW pDAh ", "pFzz POaW aLpz LzEA alot ozaq aMuH zbNX fUdV MVLB ", "Gfiv CqFj ODck YTVw qsCv nktV koWp qhdO ZGsC yVvJ ", "gqHK AgDp CAQC iuot yCQT lbYk ofwH KEsE bNye WGRf ", "CbCE Xtsj CNfD qUXA dZHW IKGF sbzS VBfb Gfiv QAyA ", "mqXT UUgV vNam wAps jAyi ZnAA OzMC yawu inzR HGFv "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 7, 8, 9, 10, 13, 15, 16, 18, 20, 23, 26, 30, 34, 35, 36, 37, 40, 42, 43, 44, 47};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> knownSpam = {"GCKS SiSb gOCP peIx ktCE OMub vFnA zXSL qlWp TwPv ", "pUGL YJTz RvdH NURZ yGPg FYjD YXEB JTAg FNiU mEuH ", "clTH nVEJ Kzqt hITB oZaF WpcK rWsl RSjX FzNI DhVp ", "BocD gkuD rbPq xzLh yKGE mbIz FgNB oAqh yIRm gcZK ", "vsXU ikpA oWPS qRkc Slxj MnCv ZAOh TPWO yVii pRXf ", "QerW jmbi Cybq XuMd ScVZ byHC GRcB OqvH HJeS redg ", "zSVx rRWr pDYp WwTG dhit BWTk HMIK Rrrj PSeR pnzq ", "XaWq HqdY yxCR XCdO dTtY tizP tOux mVIq iYqU yQby ", "NYCW qizo yptu DSbj NJJy Yerj EqOC TRVI abdD Apcf ", "FDxA fBtM skUA lrVE AIZZ yGxP eqbt MUgK edsf NAHO ", "AGpS Egrh ChQY cygb fcwc qazS waNT qKQU HQCJ RocQ ", "SaRQ zmLo LCkT qMFG mOyk oEAL vixN gYoH MTax husl ", "MHTX gSro FHGF pJXm KHYR Zvzi wfVn lade odJM ozri ", "OPaO sXeK XMee ZWRS rTsp bJlF exDh jsfg CqIl xrjH ", "WJDP KFeL TmKP Tzcg Wasu PVOr DGRE IMoI TRMC Ozew ", "OFPu Bxiv oyLR GFkr XxWz BgzC qEPY oZan CozK pHzX ", "NpCw DtFH tjOL BYOY PQZc fXot tSuP MdIE DwEw OMpk ", "BBcM OHwL Lvfw CEqM ecEU gaLq DPFI HToy PnCa KqBn ", "JKsk GdfA qOKa LfKw GqOp WKCQ XwnA rYNg wEHt AZHB ", "Ljqc EbbD LcBy bUcP xtvG DTNJ mOuv MSaK aAmL HLgy ", "GCKS SiSb gOCP peIx ktCE OMub vFnA zXSL qlWp TwPv ", "pUGL YJTz RvdH NURZ yGPg FYjD YXEB JTAg FNiU mEuH ", "clTH nVEJ Kzqt hITB oZaF WpcK rWsl RSjX FzNI DhVp ", "BocD gkuD rbPq xzLh yKGE mbIz FgNB oAqh yIRm gcZK ", "vsXU ikpA oWPS qRkc Slxj MnCv ZAOh TPWO yVii pRXf ", "QerW jmbi Cybq XuMd ScVZ byHC GRcB OqvH HJeS redg ", "zSVx rRWr pDYp WwTG dhit BWTk HMIK Rrrj PSeR pnzq ", "XaWq HqdY yxCR XCdO dTtY tizP tOux mVIq iYqU yQby ", "NYCW qizo yptu DSbj NJJy Yerj EqOC TRVI abdD Apcf ", "FDxA fBtM skUA lrVE AIZZ yGxP eqbt MUgK edsf NAHO ", "AGpS Egrh ChQY cygb fcwc qazS waNT qKQU HQCJ RocQ ", "SaRQ zmLo LCkT qMFG mOyk oEAL vixN gYoH MTax husl ", "MHTX gSro FHGF pJXm KHYR Zvzi wfVn lade odJM ozri ", "OPaO sXeK XMee ZWRS rTsp bJlF exDh jsfg CqIl xrjH ", "WJDP KFeL TmKP Tzcg Wasu PVOr DGRE IMoI TRMC Ozew ", "OFPu Bxiv oyLR GFkr XxWz BgzC qEPY oZan CozK pHzX ", "NpCw DtFH tjOL BYOY PQZc fXot tSuP MdIE DwEw OMpk ", "BBcM OHwL Lvfw CEqM ecEU gaLq DPFI HToy PnCa KqBn ", "JKsk GdfA qOKa LfKw GqOp WKCQ XwnA rYNg wEHt AZHB ", "Ljqc EbbD LcBy bUcP xtvG DTNJ mOuv MSaK aAmL HLgy ", "GCKS SiSb gOCP peIx ktCE OMub vFnA zXSL qlWp TwPv ", "pUGL YJTz RvdH NURZ yGPg FYjD YXEB JTAg FNiU mEuH ", "clTH nVEJ Kzqt hITB oZaF WpcK rWsl RSjX FzNI DhVp ", "BocD gkuD rbPq xzLh yKGE mbIz FgNB oAqh yIRm gcZK ", "vsXU ikpA oWPS qRkc Slxj MnCv ZAOh TPWO yVii pRXf ", "QerW jmbi Cybq XuMd ScVZ byHC GRcB OqvH HJeS redg ", "zSVx rRWr pDYp WwTG dhit BWTk HMIK Rrrj PSeR pnzq ", "XaWq HqdY yxCR XCdO dTtY tizP tOux mVIq iYqU yQby ", "NYCW qizo yptu DSbj NJJy Yerj EqOC TRVI abdD Apcf ", "FDxA fBtM skUA lrVE AIZZ yGxP eqbt MUgK edsf NAHO "};
    vector<string> newMail = {"CozK tOux LHJF NJJy TJSm sxCB tUej TFDj HQCJ KvOH ", "wEHt PdLy YUtb oTmi QWaf RSjX tSuP pRXf tOux rbPq ", "ZWRS EdfD DGed vFnA muQY Ropr Yqnd Yqnd DGRE yIRm ", "TmKP SaRQ RocQ qMFG OMub Bxiv qOKa jsfg redg fBtM ", "KqBn oWPS WJDP husl zmLo QcAP WpcK HJeS oyLR NAHO ", "WQFk gkuD tOux hPvP zcLR XaWq JTAg nVEJ PVOr LcBy ", "FNiU gkuD MHTX abdD XwnA TwPv oWPS Yerj QgJi NURZ ", "mOuv tOux KHYR KHYR Ykqf ozri Cybq FDxA rYNg oGWO ", "rWsl WJDP LUVd qizo CEqM xrjH PnCa gcZK jsfg EqOC ", "LzWV WQFk HToy AIZZ qazS uKZJ UrqU redg pHzX HQCJ ", "UrqU DhVp wEHt Egrh KLSx GpXu byHC mMVa fXot KVkZ ", "Wasu yGxP nkpK zmLo bUcP Bxiv MLZf Qbrp FYjD PnCa ", "OMpk xGGT NJJy MnCv yQby QPod rWsl clTH WJDP TPWO ", "qOKa rclu HqdY gkuD LcBy EqOC AcKs ripa qizo HQCJ ", "Pzhp ktCE Cybq wfVn AcKs bJlF AZHB rWsl QCVI lfKd ", "TDGF UrqU BbjE RlHv JqOa OHwL nVEJ odJM LcBy gcZK ", "VVKg DwhT NJJy yzPk YJTz rRWr wEHt sxCB HAQS oZaF ", "DxRr rRWr mEuH BsXT LUVd mVIq NpCw RSjX abdD gaLq ", "fBtM KFeL TmKP WQFk waNT dTtY Kzqt Tzcg ScVZ zcLR ", "KWOY JBML BsXT ARHN WpcK UrqU Kfad oTmi OHwL uKZJ ", "LcBy VDkS fBtM WJDP MnCv gSro hDWi husl rTsp AGpS ", "fBtM NAHO oLfU Bxiv WwTG oAqh Bxiv MHTX vrOR KqBn ", "mVIq dTtY ChQY cygb DGRE XuMd pRXf xzLh NJJy yQby ", "bUcP pDYp WpcK FHGF byHC HQCJ MHTX PQZc gcZK LCkT ", "JTAg clTH yGPg qMFG NAHO yVii mOyk GdfA JTAg XCdO ", "aBqE FNiU QPod qRkc GdfA lXMB VMkc QKDH UgDA KvOH ", "DhVp VMkc xtvG MTax mVIq exDh yGPg pUGL FHGF mGli ", "zmLo hITB NpCw HAQS oWPS XCdO DGRE yIRm Wasu mEuH ", "Ozew XxWz BgzC jmbi hDWi KFeL mihs RocQ IMoI bJlF ", "oWPS MYgz lfKd RSjX DSbj vixN YaFw SiSb qRkc PVOr ", "xzLh pRXf pHzX VghT clTH wfVn JBML Ljqc MzlH pHzX ", "VMkc MTax qMFG GdfA AcKs POuM tKcO XwnA WJDP CXqp ", "oEAL Zvzi qRkc MnCv rTsp zmLo kRNO tizP qRkc qOKa ", "tSkW lqeM UgDA KFeL BocD DTNJ yGPg ZAOh yQby TRVI ", "MdIE Wasu qlWp QWaf Apcf oGWO xzLh pHzX Apcf oWPS ", "CozK SaRQ DtFH GqOp Lvfw hITB odJM KqBn hHzC ktCE ", "XuMd JTAg fXot WpcK lrVE KVkZ uzeT IPoT yzPk AZHB ", "GRcB wfVn bJlF aAmL rRWr wfVn lniZ KFeL kRNO KqBn ", "vixN hDWi nUKP oTmi CqIl jeDX xzLh THhq sxCB rbPq ", "Kzqt IPoT aOTy EBHj husl abdD oEAL AIZZ rbPq fBtM ", "vsXq vfOU cygb TmKP yptu EbbD qEPY mVIq bJlF CozK ", "wfVn DSbj JPBb BYOY DhVp NAHO DhVp rWsl xtvG zXSL ", "lade Pzhp xtvG Kzqt HQCJ RbvR DTNJ sxCB lniZ MnCv ", "EdfD Yqnd OHwL BgzC MclI LfKw pqVI qEPY rtFO GZTH ", "VMkc XIUF dnFV TPWO vsXU lfKd mOyk OHwL CEqM hDWi ", "HqdY Ozew XuMd mbIz yVii dhit nVEJ DxRr eqbt oZaF ", "zSVx rYNg gcZK pJXm Slxj yxCR MTax DtFH yKGE NAHO ", "fXot KvOH HqdY JKsk redg QDRP uuZp TMJd aRfY NJJy ", "RTir exDh VSmT tUej NJJy TFDj CEqM Wasu PVOr Lvfw ", "rWsl yGPg JKsk eqbt WKCQ WJDP Cybq mEuH Ljqc tizP "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 9, 10, 11, 13, 14, 15, 16, 19, 25, 29, 30, 31, 33, 36, 38, 39, 42, 43, 44, 47, 48};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> knownSpam = {"zKPv zeSE IWgY ciIp FOQE YhAu WRtY ZySc GOaX KPzj ", "AKkZ wsXy uNDy niGN jAMf gIDV xfUB kBTs OHLf bHiM ", "zoyj FsdD HnQQ DTQs HAvk VHkK ctPS paRD yUFR GzNi ", "WLwS dDhp cSyF GyOy VHTg iioU ogcV KqIm UMYm KoSn ", "ANFH CSnr AGfO rTHb uhru NCDZ NBUI ipvS LAwo NSkG ", "bmPb yRjU zLGJ gCvx OHVD RyBc ZUQd vfOn JCsx NzOe ", "XhNB hwKG eyVc XlTG rpvZ EocR HuYV LBiu uslP Ctax ", "stVf ZMQf LSzq Qfhx zgBa QsSb EkwP ewuK uAKn NHuF ", "nMuk vVXH SWtd kgiy xoEl cfag bJbF RPYJ ujmx WVRm ", "hlaW LlGu xxcE CqCk LSYI Ekmy AWmy rhEH vQDk CyGx ", "tCUg wvWi PTtl haJl xCWK UlGF MgQQ bIqE gQMz MUjh ", "xGGo vgvm hWOj UKoh YYBa cSfS BnUf PxDK fEjR fKqw ", "gLSC TIfj PaTx PFLZ eGdY ebUp bkcW aqIU jtfe BPyy ", "pTMS adcO eWFf HqBJ Pgmq AKzy kjbQ mSgX OyaA EVdE ", "JvCY QONC WxsP qmyB Jqcc mZXS vdAQ JSyo LEGz ICeC ", "sGRq PzZy NBpR WCuS uAVe ejvK BibX jiUz tYTr GpUc ", "UyKA gres BJDF pBIl ZIkI tMVt FTNh lELQ GaDc SUdb ", "rmJy HgSC JHlk mxKG pyHY HTjG nYsy HLck gvsM lXnQ ", "gjDJ HUYc neGC Riil Hidi HRIL MdaE CjFU GHEn uvFP ", "xSoR FnCG bkTH OBEH nIgK CYKO rExX xjns GHzV AwSV ", "zKPv zeSE IWgY ciIp FOQE YhAu WRtY ZySc GOaX KPzj ", "AKkZ wsXy uNDy niGN jAMf gIDV xfUB kBTs OHLf bHiM ", "zoyj FsdD HnQQ DTQs HAvk VHkK ctPS paRD yUFR GzNi ", "WLwS dDhp cSyF GyOy VHTg iioU ogcV KqIm UMYm KoSn ", "ANFH CSnr AGfO rTHb uhru NCDZ NBUI ipvS LAwo NSkG ", "bmPb yRjU zLGJ gCvx OHVD RyBc ZUQd vfOn JCsx NzOe ", "XhNB hwKG eyVc XlTG rpvZ EocR HuYV LBiu uslP Ctax ", "stVf ZMQf LSzq Qfhx zgBa QsSb EkwP ewuK uAKn NHuF ", "nMuk vVXH SWtd kgiy xoEl cfag bJbF RPYJ ujmx WVRm ", "hlaW LlGu xxcE CqCk LSYI Ekmy AWmy rhEH vQDk CyGx ", "tCUg wvWi PTtl haJl xCWK UlGF MgQQ bIqE gQMz MUjh ", "xGGo vgvm hWOj UKoh YYBa cSfS BnUf PxDK fEjR fKqw ", "gLSC TIfj PaTx PFLZ eGdY ebUp bkcW aqIU jtfe BPyy ", "pTMS adcO eWFf HqBJ Pgmq AKzy kjbQ mSgX OyaA EVdE ", "JvCY QONC WxsP qmyB Jqcc mZXS vdAQ JSyo LEGz ICeC ", "sGRq PzZy NBpR WCuS uAVe ejvK BibX jiUz tYTr GpUc ", "UyKA gres BJDF pBIl ZIkI tMVt FTNh lELQ GaDc SUdb ", "rmJy HgSC JHlk mxKG pyHY HTjG nYsy HLck gvsM lXnQ ", "gjDJ HUYc neGC Riil Hidi HRIL MdaE CjFU GHEn uvFP ", "xSoR FnCG bkTH OBEH nIgK CYKO rExX xjns GHzV AwSV ", "zKPv zeSE IWgY ciIp FOQE YhAu WRtY ZySc GOaX KPzj ", "AKkZ wsXy uNDy niGN jAMf gIDV xfUB kBTs OHLf bHiM ", "zoyj FsdD HnQQ DTQs HAvk VHkK ctPS paRD yUFR GzNi ", "WLwS dDhp cSyF GyOy VHTg iioU ogcV KqIm UMYm KoSn ", "ANFH CSnr AGfO rTHb uhru NCDZ NBUI ipvS LAwo NSkG ", "bmPb yRjU zLGJ gCvx OHVD RyBc ZUQd vfOn JCsx NzOe ", "XhNB hwKG eyVc XlTG rpvZ EocR HuYV LBiu uslP Ctax ", "stVf ZMQf LSzq Qfhx zgBa QsSb EkwP ewuK uAKn NHuF ", "nMuk vVXH SWtd kgiy xoEl cfag bJbF RPYJ ujmx WVRm ", "hlaW LlGu xxcE CqCk LSYI Ekmy AWmy rhEH vQDk CyGx "};
    vector<string> newMail = {"rmJy qmyB iVQu xfUB yfLB MgQQ GyOy cRLD HRIL AKzy ", "sOBZ ICeC pZiC JSyo vgvm vVXH KoSn gQMz wqaw EAqL ", "WVRm wsXy SVNo IEuE SWWZ rjXW WRtY YYBa PxDK IEuE ", "CSnr xCWK eUyO BPyy stVf IcZR ANFH vgvm NYgf WVRm ", "eWFf uhru AWmy mSgX GHEn JHlk ujmx JvCY kgiy vVXH ", "YYBa ctPS wvWi FBmd xCWK HUYc mSgX fKqw LSzq YhAu ", "FTNh jAMf Joqt Jtea TprA bixb eGdY MUjh HAvk aqIU ", "IWgY ipvS Pgmq Pgmq ANFH PFLZ CqCk YYBa jiUz EkwP ", "BibX MgQQ kgiy cfag xfUB YhAu UlGF GHzV ZIkI gIDV ", "qfbY AwSV RSGC FfaI lXnQ mPCM xDAn TPwe HIBH EocR ", "NCDZ HRIL SUdb tCUg pTMS HqBJ JSyo KoSn JHlk aqIU ", "kBTs uslP PTtl PFLZ stVf uAKn Hidi HuYV hkFA ujmx ", "GaDc WLwS rTHb EocR BJDF CSnr AwSV zgBa VHTg NBUI ", "ipvS uAVe uvFP SWtd KqIm gIDV KqIm vQDk JvCY zeSE ", "NKvf yUFR haJl gQMz NzZo mXqP CYKO aqIU bmPb Vxmc ", "nYsy hWOj RdKU WqEC JSyo zoyj SWtd BPLd HLck SdKP ", "gKSi vBuc ZUQd nIgK ZpXT xqwW ICeC FTNh Pgmq ZNEs ", "NBpR LBiu ebUp NCDZ FnCG gQMz jRCI wvWi vVXH lXnQ ", "jtfe lHcJ bmPb WqwP LAwo owoQ BBMG jqWx SVlD MCnO ", "WLwS LSzq rTHb HuYV bQGO wsXy bkTH uAKn nIgK TqQC ", "mxKG aqIU WIkj UKoh iYuM bkTH zeSE tPzl pyHY pTMS ", "OBEH hZBw hZBw OoSr HLck cRLD pYjn xPWw xamA HRIL ", "SWWZ xqwW CyGx owoQ dAja vBuc sCcR IcZR aAbJ eyVc ", "wvWi SQEJ rpvZ zoyj GHzV vQDk tCUg GpUc SVlD GHzV ", "GyOy OQSm EVdE OEhP HTjG QgXL LlGu sRgs HgSC tCUg ", "ewuK VHkK vgvm Jqcc eUyO ujmx cSyF XhNB Ctax hwKG ", "MdaE vQDk eGdY yUFR Ekmy bJbF LAwo bkcW pBIl CqCk ", "NHuF FsdD Vxmc GHuC gIDV TaCz sRgs mwSp xamA wQmX ", "TIfj jiUz LlGu QONC eyVc JCsx CyGx zgBa hWOj GyOy ", "gQMz WRtY VArS Riil bixb hFRL CyGx ENRb gvoY vgvm ", "NBUI gres nYsy xPWw GaDc pyHY ebUp vfOn ENRb KPzj ", "neGC rpvZ IcZR uNDy bJbF NKvf LlGu LBiu hlaW VPmL ", "LSzq sGRq rpvZ Ctax EAqL VHTg rpvZ tMVt BibX HTjG ", "ebUp OBEH NHuF lHcJ vdAQ GpUc pZiC FeoV ZLaf rTHb ", "tCUg xfUB FeoV haJl ejvK cfag vVXH mSgX fEjR paRD ", "VArS CSnr HgSC vQDk bQGO stVf NHuF bHiM FsdD HRIL ", "Ctax pTMS HLck CyGx Ekmy nIgK MUjh vdAQ Ekmy xNRL ", "WVRm UwDk HRIL Riil gLSC lELQ vgvm rpvZ JHlk LlGu ", "xNRL Pmtp xGGo Pgmq OyaA FTNh HuYV CyGx DTQs AKkZ ", "KqIm wsXy ewuK YtSI haJl VBOc OBEH tCUg MUjh ZySc ", "CyGx TxOM HnQQ NBUI GHEn owoQ eyVc uhru fKqw LSYI ", "CjFU MUjh zLGJ KjlF vdAQ BnUf ujmx qmyB Qfhx tMVt ", "CyGx ICeC nIgK KPzj uAVe bkcW UyKA fBTd lXnQ jqWx ", "NCDZ eWFf FTyn vNxA FBmd FeoV NzOe cRLD sOBZ fBTd ", "WVRm NHuF ebps MgQQ ESqx BnUf RPYJ ebUp twDA GzNi ", "DMOv MUjh FnCG TPwe HAvk bHiM GHEn GHzV rOEO SWtd ", "HTjG GpUc uEkp cRLD LeBD HLck QONC GpUc eGdY AkOI ", "kBTs fILl gQMz HnQQ adcO Qfhx yRjU TIfj JCsx xjns ", "stVf HUYc uAKn gIDV MdaE Pgmq uvFP etvy BnUf rhEH ", "MUjh hlaW zoyj OBEH KoSn Riil BibX EocR TPwe bHiM "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 9, 14, 15, 16, 18, 20, 21, 22, 24, 27, 29, 31, 33, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> knownSpam = {"LYFe eXhO csNb oYDG Fokz uWVh zzOI mAOs vXtc JUYy ", "siYT tWXt XsAi RKqc Jyid rBcO LDid FnoM gKAd exzu ", "FxxF FwFa cLCh AjHC LybB RoFt kANL zitG oMQp pXBC ", "WVMD Zbvh veaH RuMp Vbje cxPY mZjJ iZiZ cKzI OoQr ", "QLbX qmTH pcLd NVLd FTYT GzMr fjjs vbHT QWUH KYsg ", "abry LrIh LHuv OIfr qHAK dMqu VDut HfOE CLxx Uren ", "mJlH DirK cTKr qXDL eZaB PwFW TJMw qEdA psVd rRFz ", "PyFH gbVM fBid IOhX gQAB srdf QRKt ETPU KKeN OQbO ", "YnUW ZaGG JZBE WHbh bjAg dtLS qIwu kTjo VmLj KEMc ", "vQjS MVFC Sbgi ueIs NvSx GgcA Xjfa XXrB MEqr iNBZ ", "uNYT nkag kJOj ILjq gpEQ Ikcw SWqO YmyP NYim RIla ", "EbLI eruQ alqY FHxm zhMY SBkU FdNj uVRn AMtb pBzg ", "zLOP TvAH hWvN VSLb hMlM sQaD DZMJ XIYa FKql MlMq ", "XZak wAPF JUuu ZhpO Lple WtHr Lngx OIxQ VBXq CEAV ", "ReoQ XrAf HSWR RAnT pees clrc HjdD tZTs tpjw lPFv ", "XBNT MgAF DuGx WsST RnMi Ycaa VWkn jkbh QJMv vOCG ", "ywDB EQbR gkdb DBvS BRpI ZjGu MwZK Oudy gENw CqIl ", "aTuk HzAp eNoM AsWC tfns VzJA vVxJ tmPo tIZb yzjL ", "jbQj aKfo FFCk tZHB qLtt vDLB bOQY yFzv HWJI oaJJ ", "KvGb MqFF MwWU amMe KGRx pEBG UQPs bsJg rkMN koZP ", "LYFe eXhO csNb oYDG Fokz uWVh zzOI mAOs vXtc JUYy ", "siYT tWXt XsAi RKqc Jyid rBcO LDid FnoM gKAd exzu ", "FxxF FwFa cLCh AjHC LybB RoFt kANL zitG oMQp pXBC ", "WVMD Zbvh veaH RuMp Vbje cxPY mZjJ iZiZ cKzI OoQr ", "QLbX qmTH pcLd NVLd FTYT GzMr fjjs vbHT QWUH KYsg ", "abry LrIh LHuv OIfr qHAK dMqu VDut HfOE CLxx Uren ", "mJlH DirK cTKr qXDL eZaB PwFW TJMw qEdA psVd rRFz ", "PyFH gbVM fBid IOhX gQAB srdf QRKt ETPU KKeN OQbO ", "YnUW ZaGG JZBE WHbh bjAg dtLS qIwu kTjo VmLj KEMc ", "vQjS MVFC Sbgi ueIs NvSx GgcA Xjfa XXrB MEqr iNBZ ", "uNYT nkag kJOj ILjq gpEQ Ikcw SWqO YmyP NYim RIla ", "EbLI eruQ alqY FHxm zhMY SBkU FdNj uVRn AMtb pBzg ", "zLOP TvAH hWvN VSLb hMlM sQaD DZMJ XIYa FKql MlMq ", "XZak wAPF JUuu ZhpO Lple WtHr Lngx OIxQ VBXq CEAV ", "ReoQ XrAf HSWR RAnT pees clrc HjdD tZTs tpjw lPFv ", "XBNT MgAF DuGx WsST RnMi Ycaa VWkn jkbh QJMv vOCG ", "ywDB EQbR gkdb DBvS BRpI ZjGu MwZK Oudy gENw CqIl ", "aTuk HzAp eNoM AsWC tfns VzJA vVxJ tmPo tIZb yzjL ", "jbQj aKfo FFCk tZHB qLtt vDLB bOQY yFzv HWJI oaJJ ", "KvGb MqFF MwWU amMe KGRx pEBG UQPs bsJg rkMN koZP ", "LYFe eXhO csNb oYDG Fokz uWVh zzOI mAOs vXtc JUYy ", "siYT tWXt XsAi RKqc Jyid rBcO LDid FnoM gKAd exzu ", "FxxF FwFa cLCh AjHC LybB RoFt kANL zitG oMQp pXBC ", "WVMD Zbvh veaH RuMp Vbje cxPY mZjJ iZiZ cKzI OoQr ", "QLbX qmTH pcLd NVLd FTYT GzMr fjjs vbHT QWUH KYsg ", "abry LrIh LHuv OIfr qHAK dMqu VDut HfOE CLxx Uren ", "mJlH DirK cTKr qXDL eZaB PwFW TJMw qEdA psVd rRFz ", "PyFH gbVM fBid IOhX gQAB srdf QRKt ETPU KKeN OQbO ", "YnUW ZaGG JZBE WHbh bjAg dtLS qIwu kTjo VmLj KEMc ", "vQjS MVFC Sbgi ueIs NvSx GgcA Xjfa XXrB MEqr iNBZ "};
    vector<string> newMail = {"gYrR VzXv iejE WeGJ veaH gIoY zuZS UYsM vbHT ickr ", "qHAK sDzq Sbgi gbVM ZaGG alqY uWVh tpjw FnoM NVLd ", "LHuv qEdA UYsM FKql lBfC UUsH qLtt izDn aTuk jbQj ", "XIYa wbSN gbVM WtHr exzu MqFF MEqr Lngx TvAH qXDL ", "IoNa WRnc APMh YbxO alqY VmLj FNNg GKps HqCF GtFR ", "XXrB VBXq OYds DVgJ nCFs alqY VBXq pcLd THtL LrIh ", "wssj PIJu mZjJ VDut yzjL KGRx FTYT MqFF mZjJ eXhO ", "vDLB gIcX hMlM RuMp KEMc QLbX csNb qHAK WtHr rkMN ", "sQaD Vbje eNoM WHCf HqCF jkbh tpjw KEMc LHuv gKAd ", "srdf pisH RKqc DBvS dMqu vbHT FxxF AjHC vbHT uNYT ", "MlMq Babo nCFs bsJg exzu XBNT OIfr gQAB JljB wssj ", "aTtj DBvS dtLS aTuk Vbje CLxx DirK Oudy FwFa RnMi ", "wPaG Vbje zpmV KKeN zwiB tDVU eXjU LrIh AjHC Duio ", "VBXq Oudy cxPY LrIh YaNw Uren csNb RnMi DuGx VDut ", "koLU PICT DuGx CqIl MwZK RKqc mJlH vDLB XLUl uWVh ", "bYLM DBvS NsQT Xjfa cTKr VzXv YgNC NYim WeGJ MwWU ", "Lngx FdNj VzJA FHxm DTwq eNoM koLU WsST QWUH hWvN ", "RKqc ldlY VDut KKeN HjdD ircT UQPs poiz gJCV RAnT ", "qXDL sQaD Duio alqY gQAB XBNT PyFH wAPF YgNC qEdA ", "MwZK jkbh yzjL Lple RMme bgli bOQY GkDS clrc cKzI ", "JZBE Vbje zwiB pBzg bgli cTKr qIwu WHbh zitG tIZb ", "PwFW RoFt AsWC qXDL zzOI gbVM RKqc VBXq Zbvh tpjw ", "Ikcw QWUH poiz RnMi alqY MEqr iZiZ AQTE OoQr zhMY ", "OIfr FdNj YmyP ILjq uWVh uWVh Ycaa amMe vDLB siYT ", "XZak MwWU CqIl DuGx PwFW EbLI sDzq KYsg YmyP KEMc ", "rBcO XBNT pEBG zzOI HzAp dtLS qHAK pees XsAi kTjo ", "gENw gKAd ArHm rBcO tZHB QLbX HSWR Fokz NVLd DuGx ", "RMme aTuk ZhpO hnkK FdNj ILjq OQbO WRnc RnMi aqNG ", "YrFe BRpI Nfjs aqNG QWUH YnUW HRjI TimC mUIq OjWv ", "TzYJ QJMv rkMN UzKe tmPo bYLM YgNC pnQF pees FNNg ", "CwSv qZSr pcLd pcLd vVxJ mFLB bOQY OQbO iwWt kJOj ", "ArHm zitG mZjJ YbxO LDid DBvS ZhpK psVd GKps jbQj ", "Vbje tmPo lxdC tWXt vnks OoQr Uren MqFF uImu XsAi ", "PwFW gJCV OIfr eruQ siYT WtHr vQjS rRFz rkMN zLOP ", "KYsg aqNG BRcv UzKe vXtc FxxF VDut CqIl vDLB zuZS ", "eNoM Vbje cLCh pcLd pBzg DirK vVxJ FnoM EbLI gkdb ", "CqIl aqNG mAOs oMQp rBcO VzXv pees Oudy AMtb XIYa ", "AMtb ljfe CqIl FKql wAWv fBid ibMS veaH QLBE vXtc ", "RKqc NVLd YLgY cLCh kUII NiEk XIYa Uztb nLpT gFir ", "Duio uImu tpjw gQAB vXtc QRKt RoFt AjHC XXrB RnMi ", "DuGx DTwq LYFe VaaV LHuv WNSU iwWt PwFW BRcv NVLd ", "exzu GzMr Xjfa BRpI KEMc QWUH Fokz yFzv Uren gkdb ", "HRjI SWqO WHbh rRVW tZHB RuMp WeGJ WcAX Zmqy jrcn ", "LHuv FnoM dtLS EQbR qEdA zhMY vOCG siYT UYsM Ikcw ", "DBvS NsQT KEMc WQvY Wqlh koZP csNb veaH FwFa SBkU ", "cTKr XZak ueIs pBzg wAPF AjHC gfBm JZBE pBzg mJlH ", "XBNT NVLd yFzv eXhO mAOs koZP CczU QLbX vQjS vQjS ", "MwZK kJOj DirK zLOP KEMc gkdb EbLI sQaD XHiV OQbO ", "ZhpO RoFt Xjfa WHbh QJMv CLxx zLOP Ycaa csNb KGRx ", "VmLj qHAK MqFF ODEy oMQp sQaD vDLB NYim RuMp RKqc "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 5, 10, 12, 14, 15, 17, 19, 27, 28, 29, 30, 31, 32, 34, 37, 38, 40, 42, 44};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> knownSpam = {"gYWj BEjh cJAa uFNC wJtL OYNK ACGr LmSU mini wwOh ", "LEsO cCYw ImXm MMSF ecvD BcEM MvGh HZyJ YZnq zFOu ", "CyTI IHqq Nkje lZwE MCTj gKxV KBIN bHZU cNZe BtsA ", "CwxJ BhnT hwSF ZhCU BgmA ckOl LqSk kZYd riRI azjm ", "jksv YGpP Fxrm uvCG cWQp LISx CibT hHCo SIDc kPCd ", "vJLV dpra pBhn Qeqa qFHA lCyS WudF VmRn lQEO NqvG ", "gCUb tqcK bDJO ucJI nOZF TfHB txPI rJJC kaBo UZht ", "FAGD MRmC yBTe zziq pIpB ZvVp NAsr EazI orsc Hgtv ", "ZrDp nWMr zrEZ Nrfs DxlD VCYD xMVB DCmX KvdN NcPk ", "yoOe irra WxMS vpHB SBYN xGSg EWhM bwNk yvym EgyA ", "mnpt ajUr ZElM jdDg uwgu bWVE zewV jlmi gQRb OLbV ", "thQg vPvL yAdd ocnX WWQY XfhT CDrV AJou SRRH PDly ", "AnvO mzQC NGyj YROs WmiD nizv oIEB pmAl OoUk lGmt ", "WQfl DRdV fmYI COoI LGSI UPuc JMXl mvqz rJFL uYKh ", "ReoR nJww zalx Nfqi eHMe Xrld yMGF bCRh IAuS FKSH ", "wcvz mqZb jkbS KhCz Gqkq ZeKA UAzK gCBf jaDM MYZB ", "KQRi diBA jbtX kYNg aoNO EIfy COtJ AYHF iDYe OKqF ", "pKIM UKze MCCt KpTF HAVZ IWIC nQmd EAxd RoZs FiiF ", "cmAo Ewuj xRfp qjDq pgRY nlKx hQVU zAkP QVRH UnGJ ", "Mtzg VHfm NWfq LlZV vrGD DBUM abIZ hMgy UwCE xuGV ", "gYWj BEjh cJAa uFNC wJtL OYNK ACGr LmSU mini wwOh ", "LEsO cCYw ImXm MMSF ecvD BcEM MvGh HZyJ YZnq zFOu ", "CyTI IHqq Nkje lZwE MCTj gKxV KBIN bHZU cNZe BtsA ", "CwxJ BhnT hwSF ZhCU BgmA ckOl LqSk kZYd riRI azjm ", "jksv YGpP Fxrm uvCG cWQp LISx CibT hHCo SIDc kPCd ", "vJLV dpra pBhn Qeqa qFHA lCyS WudF VmRn lQEO NqvG ", "gCUb tqcK bDJO ucJI nOZF TfHB txPI rJJC kaBo UZht ", "FAGD MRmC yBTe zziq pIpB ZvVp NAsr EazI orsc Hgtv ", "ZrDp nWMr zrEZ Nrfs DxlD VCYD xMVB DCmX KvdN NcPk ", "yoOe irra WxMS vpHB SBYN xGSg EWhM bwNk yvym EgyA ", "mnpt ajUr ZElM jdDg uwgu bWVE zewV jlmi gQRb OLbV ", "thQg vPvL yAdd ocnX WWQY XfhT CDrV AJou SRRH PDly ", "AnvO mzQC NGyj YROs WmiD nizv oIEB pmAl OoUk lGmt ", "WQfl DRdV fmYI COoI LGSI UPuc JMXl mvqz rJFL uYKh ", "ReoR nJww zalx Nfqi eHMe Xrld yMGF bCRh IAuS FKSH ", "wcvz mqZb jkbS KhCz Gqkq ZeKA UAzK gCBf jaDM MYZB ", "KQRi diBA jbtX kYNg aoNO EIfy COtJ AYHF iDYe OKqF ", "pKIM UKze MCCt KpTF HAVZ IWIC nQmd EAxd RoZs FiiF ", "cmAo Ewuj xRfp qjDq pgRY nlKx hQVU zAkP QVRH UnGJ ", "Mtzg VHfm NWfq LlZV vrGD DBUM abIZ hMgy UwCE xuGV ", "gYWj BEjh cJAa uFNC wJtL OYNK ACGr LmSU mini wwOh ", "LEsO cCYw ImXm MMSF ecvD BcEM MvGh HZyJ YZnq zFOu ", "CyTI IHqq Nkje lZwE MCTj gKxV KBIN bHZU cNZe BtsA ", "CwxJ BhnT hwSF ZhCU BgmA ckOl LqSk kZYd riRI azjm ", "jksv YGpP Fxrm uvCG cWQp LISx CibT hHCo SIDc kPCd ", "vJLV dpra pBhn Qeqa qFHA lCyS WudF VmRn lQEO NqvG ", "gCUb tqcK bDJO ucJI nOZF TfHB txPI rJJC kaBo UZht ", "FAGD MRmC yBTe zziq pIpB ZvVp NAsr EazI orsc Hgtv ", "ZrDp nWMr zrEZ Nrfs DxlD VCYD xMVB DCmX KvdN NcPk ", "yoOe irra WxMS vpHB SBYN xGSg EWhM bwNk yvym EgyA "};
    vector<string> newMail = {"bVoD EnvK oywF cCYw Hrnq tHXr vpHB Rhlt lQEO gsDX ", "cWQp TeAo AJou eUPh AAJO QvCE yvym hMgy KhCz ZElM ", "mnpt vPvL yRSe vJLV XfhT mini NWfq HAVZ jksv ajUr ", "yvym OKqF OLbV wJtL yBTe UZht CibT UZht PDly LISx ", "Qeqa fKxU WudF mlHO FzlO vbcc irra kYNg LJhQ kPCd ", "vJLV bHZU vrGD eHMe IWIC NGyj zAkP ckOl eKFr NcPk ", "yjMj YiTM ZeKA ZeKA oIEB txPI LqSk JpHy pIpB vJLV ", "UKze nYkH tIbQ gCUb Nrfs VCYD ZhCU LmSU BgmA gQRb ", "NWfq cmAo rJFL bWVE yvym wAgA gYWj MvGh DBUM FAGD ", "uFNC xhJc wJtL yAdd xuGV cWQp OdHp cRbl orsc CDrV ", "wcvz bejJ znRS HZyJ BgmA MRmC kYNg CibT jNld GwOO ", "VmRn DSdy MYZB HAVZ ugmg DOsK cLCK MYZB lhsc BEjh ", "mvqz riRI txPI cgXM txPI thQg EgyA yjMj mWHO UAzK ", "kPCd hyIR Qeqa fYve wwOh BtsA nlKx hVeP YROs mzQC ", "gQRb NrgF PDly wcvz nJww YROs LVsT yBTe VFNZ jkbS ", "uOJc FiiF gYAP lhsc EHCO fKxU xxGQ Xrld EgyA Qeqa ", "pTZn yMGF zziq diBA zewV OLbV rJFL YZnq zziq Nfqi ", "oHNG zziq LlZV qBUn BEjh UwCE bWWh zAkP rEbs cNZe ", "bHZU DBUM EWhM VCYD nlKx LGRb vrGD LISx UwCE CibT ", "XfhT Fxrm QiAQ UcRR UwCE ReoR diBA cCYw nYkH Mtzg ", "DSdy AYHF cCYw lUaI Nrfs LmSU MMSF rOzI KQRi AJou ", "YZnq AYHF TeAo Tznm CibT vPvL vPvL UZht mzQC GERx ", "yMGF nilx BgmA FiiF pgRY gBCH oHNG zalx AYHF UZht ", "zHwJ MCCt cCYw uFNC hHCo EgyA ajUr PJYV uvCG KBIN ", "YiTM zanV QVRH MRmC hVeP UPuc NcPk pKIM xuGV mzQC ", "PDly PDly PmeX ZrDp paov WudF algu eWZE uQho Qeqa ", "YROs AnvO lCyS TfHB gQRb fYve Hdig FAGD jaDM Vrgl ", "jaDM YJmK OEPT OLbV IPRM pBhn UARS DOsK JpHy paov ", "WQfl bCRh azjm xRfp VHfm OLbV Nfqi mvqz WWQY DCmX ", "pNdJ HpdT yvym gYWj ZeKA yvym ObvU bgED ImXm qFHA ", "EnvK qBUn mUhs VNXc dpra BtsA lBgz ugmg AAJO aRBA ", "GTRu XfhT bVoD LlZV ZhCU EHCO uvCG vPvL qERF cCYw ", "zAkP PmeX DCks oGYu eHMe UnGJ Qeqa yjMj TfHB DCks ", "MCTj irra yRSe oHNG nQmd MCTj nlKx MRmC zziq yBTe ", "bCRh EIfy UARS OEPT BhnT MCTy BtsA taIl txPI SRRH ", "pIpB WQfl cRbl ACGr AAJO BgmA MvGh tVim uLDJ FzlO ", "gzFs jlmi ajUr kYNg OEPT mlHO zTEN TVtl txPI wwOh ", "hMgy ReoR EazI xRfp wcvz eKFr jNld vrGD DSdy orsc ", "XfhT yKEy LmSU COoI Nrfs LmSU zFOu zAkP LGSI WmiD ", "KsjE ajUr zewV iDYe NqvG KBIN nHTd kZYd wcvz abIZ ", "zziq rJFL ZhCU UKze mnpt OYNK xRfp PJYV Ewuj qjDq ", "EAxd WxMS ckOl IHqq jksv EAxd vPvL NcPk Nkje lGmt ", "LGSI BtsA lZwE MMSF kPCd hMgy JMXl SBYN Nrfs WxMS ", "bgED aoNO paov IHqq UJAH zewV ZeKA erAQ Nrfs ZeKA ", "Hgtv NJdS kZYd mqZb hwSF KvdN yjMj nJww YGpP YGpP ", "lGmt Rhlt KhCz fLov hwSF MCCt vrGD jaDM Vnsf KhCz ", "gYWj wJtL vpHB COtJ Hrnq eWZE lZwE cCYw QvCE BEjh ", "hHCo XEOk BEjh YROs HAVZ lGmt riRI BgmA ImXm YGpP ", "EIfy Ewuj oGYu nQmd AJou NAsr hwSF Xrld DxlD zFOu ", "wAgA aoNO jzFq UnGJ DxlD UTxX Tznm BADW OgUl xMVB "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 6, 9, 10, 11, 12, 13, 14, 15, 17, 20, 21, 22, 24, 25, 26, 27, 29, 30, 31, 32, 34, 35, 36, 43, 45, 46, 49};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> knownSpam = {"zqZc uzkD CObw IZGx BCUO ozHy dzei isFe Vtoe rrgC ", "nlkI ddwA Hzlr WGGm JcsJ gdXe ObCE neCn yoLF bOpU ", "KTQv iVYq eYxs gYcK cKrA cdoQ LaeK gdaY LbTV NYxw ", "eUWD iQYm Mrov AzNJ unko zhlw HiFb RmKC pbJU KTzn ", "vtHU BxNE vNVe Fcsi BmGC kEhA xjkM saFx UCdB JfEn ", "CpaS gqWc Ikqt FeUT rdSa YAvH bOfj XMeu cyNd ZwPv ", "iXZx gHyv sovU HyLK MCIV vBLa vCsu pWLa OdTS VMrY ", "GxDP HMzC vybM lKMn hehb KMSi JfFn sMnJ rnGa atiu ", "QiSX xSvk BFGB KJFy BYVF pQyu iksG PmEf PRAg AmaO ", "yoOn YxKn Dhtn FIUx HtWj WbVE JUSE IdwN bvZe kSbd ", "AlXm KvCM GeyM TTBW xKmS fkNg Zxvi OWTM jRtm WuCX ", "niOq uHoV qwdk sbJI xjwa TJqj LBur Egij KhJh kOrg ", "ieMO zxQZ fZMb Ftcu KRHI ISFg QhTw vdQI Yfem snvm ", "YKUA qPtr oAqt OUTN jkIr xshp MgPm DBMD zOjW saFX ", "DOcr Whsw FywY lqZG vYLe USVy zTkt pYEl Utmu UyIK ", "lcnd SEEA vYOv XHNx KDdQ sqLT Dzea BvTi TCeX GNiS ", "xMIt dvLI bSZI FjkO VgyS XjNh zUTh IjzS mLVw dztZ ", "qOMV sYRV ZJpL sLvi Fhco ZLvZ VyCD qXyK ktne yVBl ", "nGXM jXUX yVsD XAnC KJJO WWDv TbIQ tpsq WvUW ACLF ", "YeLH kIlT djYr wJKx BBYK DZSr JnJA zYGv ZudA GXPI ", "zqZc uzkD CObw IZGx BCUO ozHy dzei isFe Vtoe rrgC ", "nlkI ddwA Hzlr WGGm JcsJ gdXe ObCE neCn yoLF bOpU ", "KTQv iVYq eYxs gYcK cKrA cdoQ LaeK gdaY LbTV NYxw ", "eUWD iQYm Mrov AzNJ unko zhlw HiFb RmKC pbJU KTzn ", "vtHU BxNE vNVe Fcsi BmGC kEhA xjkM saFx UCdB JfEn ", "CpaS gqWc Ikqt FeUT rdSa YAvH bOfj XMeu cyNd ZwPv ", "iXZx gHyv sovU HyLK MCIV vBLa vCsu pWLa OdTS VMrY ", "GxDP HMzC vybM lKMn hehb KMSi JfFn sMnJ rnGa atiu ", "QiSX xSvk BFGB KJFy BYVF pQyu iksG PmEf PRAg AmaO ", "yoOn YxKn Dhtn FIUx HtWj WbVE JUSE IdwN bvZe kSbd ", "AlXm KvCM GeyM TTBW xKmS fkNg Zxvi OWTM jRtm WuCX ", "niOq uHoV qwdk sbJI xjwa TJqj LBur Egij KhJh kOrg ", "ieMO zxQZ fZMb Ftcu KRHI ISFg QhTw vdQI Yfem snvm ", "YKUA qPtr oAqt OUTN jkIr xshp MgPm DBMD zOjW saFX ", "DOcr Whsw FywY lqZG vYLe USVy zTkt pYEl Utmu UyIK ", "lcnd SEEA vYOv XHNx KDdQ sqLT Dzea BvTi TCeX GNiS ", "xMIt dvLI bSZI FjkO VgyS XjNh zUTh IjzS mLVw dztZ ", "qOMV sYRV ZJpL sLvi Fhco ZLvZ VyCD qXyK ktne yVBl ", "nGXM jXUX yVsD XAnC KJJO WWDv TbIQ tpsq WvUW ACLF ", "YeLH kIlT djYr wJKx BBYK DZSr JnJA zYGv ZudA GXPI ", "zqZc uzkD CObw IZGx BCUO ozHy dzei isFe Vtoe rrgC ", "nlkI ddwA Hzlr WGGm JcsJ gdXe ObCE neCn yoLF bOpU ", "KTQv iVYq eYxs gYcK cKrA cdoQ LaeK gdaY LbTV NYxw ", "eUWD iQYm Mrov AzNJ unko zhlw HiFb RmKC pbJU KTzn ", "vtHU BxNE vNVe Fcsi BmGC kEhA xjkM saFx UCdB JfEn ", "CpaS gqWc Ikqt FeUT rdSa YAvH bOfj XMeu cyNd ZwPv ", "iXZx gHyv sovU HyLK MCIV vBLa vCsu pWLa OdTS VMrY ", "GxDP HMzC vybM lKMn hehb KMSi JfFn sMnJ rnGa atiu ", "QiSX xSvk BFGB KJFy BYVF pQyu iksG PmEf PRAg AmaO ", "yoOn YxKn Dhtn FIUx HtWj WbVE JUSE IdwN bvZe kSbd "};
    vector<string> newMail = {"Zxvi qwdk ONTu FeUT vNVe dQux GeyM TJqj RmKC wVVi ", "gqWc zUtJ sovU zOjW kOrg OdTS zTQV vtHU xjwa jXUX ", "TbIQ yoOn Yfem WGGm ACLF JnJA qwdk UCdB pQyu GeyM ", "FjkO dzei Hzlr Ikws XMeu Utmu zqZc vBLa ZwPv snvm ", "cdoQ yoLF AlXm lcnd qOMV Egij qwdk XjNh aJMQ USVy ", "NHtA Fcsi UCdB Ikws AzNJ yoOn ZudA iksG WGGm jRtm ", "ozHy TJqj jXUX wvcU AmaO GmqD XMeu zxQZ CpaS eCOJ ", "TJqj YfXt atiu ddwA vYLe XXqg wvcU FmoU yoLF bmLo ", "kOrg OWTM QyCR BCUO vBLa MpwJ QiSX UzwD bOpU GuOJ ", "Ftcu YKUA cyNd qOMV Mrov kOrg xjkM OWTM nlkI BCUO ", "Fhco qwdk NYxw BYVF xKmS xKmS kEhA qKfZ NXNi ynyn ", "bhwO ViLb xjkM RRhS bOpU KTzn DOcr WbVE uHKF lcnd ", "WnpR FmoU xMIt LaeK XQnL eYxs vBLa ZfOH dxXJ QqOM ", "eJqI jjQQ eUWD MpwJ yRSI pDUE WGGm ACLF iVYq IhvS ", "ozHy bvZe KRHI bvZe kOrg BFGB niOq djYr WGGm YxKn ", "KBoc KRHI GNiS azsc GmOA RvHq Fcsi dztZ kSlI Ccio ", "BFGB MpwJ gdaY vybM AmaO Ftcu sYRV JnJA gHyv Dzea ", "IZGx HiFb JfEn PmEf sMnJ OUTN MCIV cQWo JnJA ZudA ", "cKrA Lnwe pQyu Rgdg HMzC Vtoe oAqt RvHq zTQV WpVW ", "isFe xSvk BCUO gYcK uETU jXUX kIlT vYLe snhy ddwA ", "qwdk xjwa vCsu uPqt BYVF bOpU MCIV zUTh tHws GdFp ", "sovU BYVF vdQI KJFy WWDv cdoQ AmaO FywY gYcK ACLF ", "Cqbi AmaO pYEl vxWc jRtm xjwa DHEX vNVe iVYq cyNd ", "KJFy xjkM KRHI YeLH QTBW tpsq KvCM Ftcu TbIQ zhlw ", "dvLI QhTw Srqb DIcr DygG NYxw sqLT KDdQ vxWc Cqbi ", "GxDP xSvk IjzS GxDP Zxvi UyIK CObw MCIV RmKC wJKx ", "sLvi LEFp uETO HsWo djYr WrWh ObCE KBoc xKmS ZEBe ", "OkSz USVy XjNh OUTN QhTw sMnJ FjkO zTkt gYcK ieMO ", "Guth inRk AlXm gqWc kOrg BxNE jjQQ cdoQ yBch rdSa ", "LBur Xxqb KMSi saFX XXqg kEhA NXNi nGXM xKmS FywY ", "NXNi nGXM EtLD Iorq lcnd KiPV uitt QqOM xSvk YeLH ", "Ftcu QiSX MiPE ZLvZ HtWj ObCE sdkx xSvk sybt gwDN ", "hehb wRHi bnkp vdQI QhTw DZSr aWxY KvCM VqPy ktne ", "zTQV BxNE HMzC FeUT RmKC XAnC ddwA gqWc zYGv GXPI ", "VyCD jjQQ xjwa KMSi FHRx zTQV tHws YxKn WGGm XDVB ", "bvZe pQyu BmGC pYEl inRk gdXe bSZI HyLK BFGB qwdk ", "ddwA vEai wUCL AzNJ KvCM BCUO ktne kSbd JcsJ MCIV ", "YxKn SEEA BYVF snvm vNVe gHyv neCn GeyM IZGx GxDP ", "QhTw bhwO EJxn lcnd bmLo Dhtn QTBW KTzn ZpQx KMSi ", "XjNh vYls kOrg PmEf qPtr QiSX yVsD saFX dvLI CObw ", "eJqI zUTh zSzz HiFb Xxqb ZwPv gHyv sqLT SGiR zqWQ ", "OUTN pWLa xKmS eUWD RmKC Egij jRtm TCeX Whsw xjkM ", "ktne oAqt UPXY ZfOH Vtoe tRcV Dude ZEBe sYRV pbJU ", "JfEn mjSC bvZe vCsu FwPw gdXe CObw LBur zYGv ZLvZ ", "TJqj PRAg XAnC kEhA zTkt pbJU VMrY zTkt qPtr neCn ", "VgyS uRXW VMrY ddwA bhwO PmEf kSlI QKDa LEFp wVVi ", "SEEA ACLF Dhtn Fcsi FywY xMIt HiFb XAnC xSvk ACLF ", "uzkD saFX jLlN eYxs Fhco lKMn GXPI BBYK YAvH BvTi ", "ZmWu snvm XMeu AlXm RSvs lqZG dztZ UCdB bmLo qPtr ", "sMnJ qXyK bOpU VgyS sqLT saFX jkIr FywY cdoQ bhwO "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 7, 8, 10, 11, 12, 13, 15, 18, 20, 22, 24, 26, 28, 29, 30, 31, 32, 34, 38, 40, 42, 45, 48};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> knownSpam = {"Jtln fQUT WFGu ihhv abYT bDFE BGXh gpFv vVIr gSUe ", "JGXP AZRd UAVD xHyW ngrD QvEf kmgE XJxf fVJK ClsZ ", "hZHe qAim FrSL XGQV lQYg GAlK pXvK qDkS tfFS npXL ", "GCeM JGfh RLzo kIii RvlJ GRLk ceLT iLTC WCmv ainH ", "ISLD NsPM lzHg RTnY DdlP pGQj OPao yDDK Gxgv pxMD ", "Usxu LmDC sZTj ndNp wAHG KYjW HWEA dvNA KlTB QqvW ", "pSdi LxSx hhbO crjB XeQc nFOH PUGp oCXr xHMq TeDP ", "GQTP WZfB jYFU RoLT zesI bvvy ktmM uLle iToi bhcG ", "RaBT VbIR iCXU ydwK qvJL xJSS FiZj DpEp zpaH VXeF ", "VlOJ fTQg rjks WfAt LvKm KJpy LYDd UYkO umEk QuhU ", "sePK aCJN IEiJ siFE zMQA CdVh bfLx kCSd HjWb SqLj ", "sloP KYmN SdxZ vDfx HBjz PyfQ KsxY tKNe brpq CHvK ", "AiqE DeFk CDqs VXcw jBQM XbjT uein CWMK Koss XtLL ", "IKdZ mwtm EPgp kBSF DBoi VBam KrRG BlGV Fqpk imau ", "cqPU gvwJ sphC OmHh yuDx nWco xmBV GtQz jGTI zNKL ", "sWHf rPkZ MeQv MbbY hPQk UwZO hSPG pZlO HbxP UEqj ", "SOWd EcFq rxck eIfT POXR vxAo lRTQ Ducu TPsG nrAq ", "hbkq DgNh zQXr HCeq GsNu JByr bZuQ dGHg aOsB qdPB ", "vSzJ vjRW rfTf Xtgq avtv CpOj JldG OnJL honq WFEg ", "iqJs vhOO IKrl ayFv gdNF EiDy rsIg ULMo tjAw rlkY ", "Jtln fQUT WFGu ihhv abYT bDFE BGXh gpFv vVIr gSUe ", "JGXP AZRd UAVD xHyW ngrD QvEf kmgE XJxf fVJK ClsZ ", "hZHe qAim FrSL XGQV lQYg GAlK pXvK qDkS tfFS npXL ", "GCeM JGfh RLzo kIii RvlJ GRLk ceLT iLTC WCmv ainH ", "ISLD NsPM lzHg RTnY DdlP pGQj OPao yDDK Gxgv pxMD ", "Usxu LmDC sZTj ndNp wAHG KYjW HWEA dvNA KlTB QqvW ", "pSdi LxSx hhbO crjB XeQc nFOH PUGp oCXr xHMq TeDP ", "GQTP WZfB jYFU RoLT zesI bvvy ktmM uLle iToi bhcG ", "RaBT VbIR iCXU ydwK qvJL xJSS FiZj DpEp zpaH VXeF ", "VlOJ fTQg rjks WfAt LvKm KJpy LYDd UYkO umEk QuhU ", "sePK aCJN IEiJ siFE zMQA CdVh bfLx kCSd HjWb SqLj ", "sloP KYmN SdxZ vDfx HBjz PyfQ KsxY tKNe brpq CHvK ", "AiqE DeFk CDqs VXcw jBQM XbjT uein CWMK Koss XtLL ", "IKdZ mwtm EPgp kBSF DBoi VBam KrRG BlGV Fqpk imau ", "cqPU gvwJ sphC OmHh yuDx nWco xmBV GtQz jGTI zNKL ", "sWHf rPkZ MeQv MbbY hPQk UwZO hSPG pZlO HbxP UEqj ", "SOWd EcFq rxck eIfT POXR vxAo lRTQ Ducu TPsG nrAq ", "hbkq DgNh zQXr HCeq GsNu JByr bZuQ dGHg aOsB qdPB ", "vSzJ vjRW rfTf Xtgq avtv CpOj JldG OnJL honq WFEg ", "iqJs vhOO IKrl ayFv gdNF EiDy rsIg ULMo tjAw rlkY ", "Jtln fQUT WFGu ihhv abYT bDFE BGXh gpFv vVIr gSUe ", "JGXP AZRd UAVD xHyW ngrD QvEf kmgE XJxf fVJK ClsZ ", "hZHe qAim FrSL XGQV lQYg GAlK pXvK qDkS tfFS npXL ", "GCeM JGfh RLzo kIii RvlJ GRLk ceLT iLTC WCmv ainH ", "ISLD NsPM lzHg RTnY DdlP pGQj OPao yDDK Gxgv pxMD ", "Usxu LmDC sZTj ndNp wAHG KYjW HWEA dvNA KlTB QqvW ", "pSdi LxSx hhbO crjB XeQc nFOH PUGp oCXr xHMq TeDP ", "GQTP WZfB jYFU RoLT zesI bvvy ktmM uLle iToi bhcG ", "RaBT VbIR iCXU ydwK qvJL xJSS FiZj DpEp zpaH VXeF ", "VlOJ fTQg rjks WfAt LvKm KJpy LYDd UYkO umEk QuhU "};
    vector<string> newMail = {"vxAo rjks TIQj JldG TIQj NBVP JGXP EiDy WDiF FpuG ", "aNJf XpxB gpFv SnOp nrJa raxX zQXr XJxf IUPX Xtgq ", "WZfB rQAO PyfQ OmHh TPsG HWEA gvwJ EiDy alsn jYFU ", "UYkO nrAq ktmM WFGu KlTB tfFS rxck RaBT Jtln hhbO ", "rsIg ceLT SUAW EiDy nidC HCeq OnJL gdNF ydwK hbkq ", "DdlP HWEA zesI CDqs DXZa EiDy ngrD jyUR BGXh DpEp ", "AkHo egMx tfFS NsPM SdxZ NsPM NNpQ ZKii UEHY kmgE ", "vhOO qrMh CdiK nidC JshF XbDG JshF webu ydwK hVEC ", "pxMD RvlJ abYT lBqn kIii CdVh Fqpk WCmv Yhrn WZfB ", "MaWK JGXP crjB GQTP avtv SdxZ FiZj PyfQ SOWd QvEf ", "Fqpk PUGp KYmN NlVl sloP KwJp yDDK PkzB zMQA ZKii ", "cTxt RvlJ sphC yuDx HaRd UOuI HBGW dopM abYT tfFS ", "ktmM NBVP QKMi zYwb XbDG ClsZ XpxB MbbY PBDi sCwy ", "VBam tKNe XtLL brpq jGTI GAlK HjWb JByr XeQc KJpy ", "HbxP rqtb SuEV MYYi SOWd lzHg yDDK jtNn qAim sZTj ", "RaBT RaBT gpFv ceLT gdNF vSzJ avtv Jtln BGXh SOWd ", "oCXr apgT LYDd FiZj zMQA rsIg MCVL xHyW RLzo nidC ", "HBGW VXcw JByr lCtb kBSF RLzo uFXg ISLD XJxf uein ", "RoLT HBjz WZfB hPQk xmBV kBSF hPQk iLTC EiDy lQYg ", "qdPB NsPM SqLj RTnY LmDC ktmM lzHg qdPB UWOs rsIg ", "sZTj VBam gSUe JGfh KsxY VXeF hZHe zMQA CWMK RLzo ", "bZuQ FrSL kBSF pGQj Ducu JldG crjB oCXr ainH jBQM ", "OnJL WZfB ainH siFE PUGp QuhU zMQA PyfQ SdxZ PyfQ ", "ngrD qAim MeQv RvlJ RLzo eapo mwtm Jtln rxck lQYg ", "nrAq bhcG wswz OmHh Koss uFXg MnEM sphC cpxE RoLT ", "eyib rsIg KlTB vVIr jyUR zcTq PyfQ pZlO CpOj MaWK ", "GsNu imau CkOh EruN nrJa txIx AgLc uFXg zgUs PUGp ", "FpuG PyfQ IEiJ GAlK KYjW VCEI cfBU poYc Koss zbGG ", "sCwy WfAt vSzJ bfSm sWHf ClsZ JByr KYmN VDoh XGQV ", "cAkn SdxZ MeQv yuDx DdlP iaPL HBjz bZuQ crjB AavH ", "sePK LmDC HBjz XGQV fTQg WCmv dGHg mwtm OPao nwpU ", "gpFv jyUR MPGd bZuQ IMUd kCSd hSPG TIQj OnJL VNdm ", "bfxB pvKB SUAW bfSm LAYE brpq eyib ChIg kreo fTNP ", "eIfT VlOJ zQXr MeQv VXcw zesI UYkO IKrl glOu HWEA ", "xJSS OPao hSPG nFOH SnOp Vqbm Koss GtQz uCFJ ayFv ", "LmDC GQTP xHyW poYc DgNh ndNp ULMo QqvW KYjW WfAt ", "CdVh zesI vjRW bfLx lRTQ RsER DdlP MeQv rlkY qdPB ", "zesI bvvy Usxu sloP uein CIec GAlK zpaH bfxB rsIg ", "vDfx ULMo bDFE VXcw KlTB DdlP MPGd XGQV gpFv WCmv ", "ngrD mwtm UYkO qDkS AkHo bvvy dGHg dBFp rfTf VBam ", "ayFv hPQk HaRd zmLX UmyB aCJN Oaac nrAq eapo DyAE ", "dJnm TPsG bDFE POXR YHnh zYwb AZRd crjB fVJK rxck ", "QuhU zNKL npXL jYFU ULMo sWHf RFQC LmDC ydwK DdlP ", "hfRG cqPU IKdZ rPkZ Xtgq PUGp CWMK bObP OmHh FiZj ", "WRvC RTnY hVEC MFqA mXcK rQAO yDDK apgT nFOH nwpU ", "Oaac VbIR GAlK clLd uBzV iaPL JshF CdVh uLle KYjW ", "FiZj CpOj DyAE bfLx HWEA LxSx jYFU GQTP RYjR qAim ", "UmyB CXbZ ISLD Usxu aHiT jYFU AavH VbIR MYYi RYjR ", "RTnY ULMo hbkq sePK ceLT GCeM KYmN CkOh JldG Swng ", "VXeF apgT iLTC EiDy FRvJ QqvW honq NOSu XtLL XJxf "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 7, 10, 11, 12, 14, 17, 24, 26, 27, 28, 29, 31, 32, 34, 40, 41, 44, 45, 47};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> knownSpam = {"DTIP OwNB xAQI lUzl tamD TxAh HefQ SXbz vIXM pHzD ", "vdfn Ccyj VdEq MxOQ MiNO wMWL cqYW IYdo cnMd uDNf ", "iyfs hDQL KrAj TfqN wJpw DSIs KPuZ fLyX nYHx quws ", "sGQv WcIZ ZmUA ynVe MRRo wcYk AsUp zDVL Sumt yjaU ", "ChrT NsGD ukkB eXiB FyOL Emrh oMkp pPJi juIk YQhe ", "AVeZ vEKo qZRL xOTu OwQt kQCH kUuY cBJY aoIA Yroi ", "Pmqf TUrx khRT oUzu SwBH vwap Ugvh KHeS URkp VssX ", "yEHr rsqz zZxo vQIs XCIp gxth eZqZ qNHM hdKK Drag ", "BILg PObS VRRQ CoWX jDWc Ejfr UTeg fjzG CRVq Llbz ", "kiwx YVzb NKzG yMQV uvHJ XFFc gXdH zbJO DlwN OziW ", "vXlS YqGC dEWM LEVk Cvdv zZbg CxFj QsKX xKZC bxVR ", "EbhO AFJf oQjq bGro hnDU aFPf LeFf NTBS zMKW oMTs ", "mLGz cQgf omqY dFdi Joeo vaDj bGoJ swpg oEuq koex ", "PMma TOUH cXdy uqVG mSWi latv jmrE tpdV nOMb iNAj ", "mtpQ pMZM KITX qWGk lKqd ykZg avWy NlOO NjyE UAGY ", "dTci vvgg YMlZ fMiW udKM kzFn Losz TtHb NkuL IyLn ", "Lben QHBC aIbZ TLgb KGTE uwmI Rilv RSkw WgrI tSIN ", "COpR KsJm VeXg tpLM VSya msVA xzmf OINO eJUb FXrD ", "kzUb EnkP xkcH sQEO kXiN UfXC yloP pvKq kCDA kPOw ", "tLqf lNbf jgXi Bkuh SvyP hxXx Xuvw kBmE SIGW vUEv ", "DTIP OwNB xAQI lUzl tamD TxAh HefQ SXbz vIXM pHzD ", "vdfn Ccyj VdEq MxOQ MiNO wMWL cqYW IYdo cnMd uDNf ", "iyfs hDQL KrAj TfqN wJpw DSIs KPuZ fLyX nYHx quws ", "sGQv WcIZ ZmUA ynVe MRRo wcYk AsUp zDVL Sumt yjaU ", "ChrT NsGD ukkB eXiB FyOL Emrh oMkp pPJi juIk YQhe ", "AVeZ vEKo qZRL xOTu OwQt kQCH kUuY cBJY aoIA Yroi ", "Pmqf TUrx khRT oUzu SwBH vwap Ugvh KHeS URkp VssX ", "yEHr rsqz zZxo vQIs XCIp gxth eZqZ qNHM hdKK Drag ", "BILg PObS VRRQ CoWX jDWc Ejfr UTeg fjzG CRVq Llbz ", "kiwx YVzb NKzG yMQV uvHJ XFFc gXdH zbJO DlwN OziW ", "vXlS YqGC dEWM LEVk Cvdv zZbg CxFj QsKX xKZC bxVR ", "EbhO AFJf oQjq bGro hnDU aFPf LeFf NTBS zMKW oMTs ", "mLGz cQgf omqY dFdi Joeo vaDj bGoJ swpg oEuq koex ", "PMma TOUH cXdy uqVG mSWi latv jmrE tpdV nOMb iNAj ", "mtpQ pMZM KITX qWGk lKqd ykZg avWy NlOO NjyE UAGY ", "dTci vvgg YMlZ fMiW udKM kzFn Losz TtHb NkuL IyLn ", "Lben QHBC aIbZ TLgb KGTE uwmI Rilv RSkw WgrI tSIN ", "COpR KsJm VeXg tpLM VSya msVA xzmf OINO eJUb FXrD ", "kzUb EnkP xkcH sQEO kXiN UfXC yloP pvKq kCDA kPOw ", "tLqf lNbf jgXi Bkuh SvyP hxXx Xuvw kBmE SIGW vUEv ", "DTIP OwNB xAQI lUzl tamD TxAh HefQ SXbz vIXM pHzD ", "vdfn Ccyj VdEq MxOQ MiNO wMWL cqYW IYdo cnMd uDNf ", "iyfs hDQL KrAj TfqN wJpw DSIs KPuZ fLyX nYHx quws ", "sGQv WcIZ ZmUA ynVe MRRo wcYk AsUp zDVL Sumt yjaU ", "ChrT NsGD ukkB eXiB FyOL Emrh oMkp pPJi juIk YQhe ", "AVeZ vEKo qZRL xOTu OwQt kQCH kUuY cBJY aoIA Yroi ", "Pmqf TUrx khRT oUzu SwBH vwap Ugvh KHeS URkp VssX ", "yEHr rsqz zZxo vQIs XCIp gxth eZqZ qNHM hdKK Drag ", "BILg PObS VRRQ CoWX jDWc Ejfr UTeg fjzG CRVq Llbz ", "kiwx YVzb NKzG yMQV uvHJ XFFc gXdH zbJO DlwN OziW "};
    vector<string> newMail = {"swpg cQgf AFJf PObS EamP UvJQ mLGz EdKz yQPh Bkuh ", "oMkp Drag tpLM Drag FyOL nYHx kPOw WVlt CQwk tLqf ", "NTBS dhhT ZtJP uvHJ yFOP knEm HkZz pHzD fjzG drZn ", "NsGD lsau fjzG TtHb vaDj yjaU wJpw PpKz tamD VSya ", "VSya Bkuh TOUH DlwN KGTE LeFf aNJM FyOL Drag fjzG ", "OwQt AVeZ yloP ykZg owUF EdKz ldzm Zims vQIs NsGD ", "iETW Yroi gEBv EVCE uwmI lNbf hDQL IoIy kzFn khRT ", "hDQL yEHr Pmqf LeFf fLyX EnkP PYki YQhe tamD KPuZ ", "nUUy tSIN ALcZ SvyP Emrh dTci dFdi xzmf nOMb SXbz ", "jDWc URkp OwQt aoIA VdEq vWwv bxVR UvJQ kXiN kCDA ", "mHaT pefG TUrx ukkB NkuL Ejfr dFdi gVQr wBAN GYDm ", "fMiW gWdE owUF CaXV TUrx SIGW EbhO Rgrp URbh SvyP ", "iyfs ynVe kzUb SwBH FKzx Sqha eXiB Niqf hVPm koex ", "aoIA Pmqf mLGz PObS EbhO zMKW DlwN lUzl yjaU lNbf ", "SfqR vQIs mSWi vdfn hdKK xzmf vLer fMiW kiwx bGoJ ", "IYdo EVCE lNbf Bkuh eXiB aEpD eJUb Sumt ONVj SvyP ", "Ccyj YqGC Hkkl NsGD NkuL vcCA DlwN eJUb dEWM nYHx ", "wZks yEHr KrAj SIGW vdfn tLqf hdKK knKv xAQI koex ", "MxOQ cnMd VvKq ykZg BILg TyEl pRou qZRL xkcH DTIP ", "PMma fjzG DlwN TUrx vEKo xAQI oEuq zZbg jgXi zZxo ", "bPYC HkZz LAEK knjw iCqU Sqha ChrT nOMb KsJm FyOL ", "cXdy kCDA iyfs AFJf xkcH FXrD iNAj dTci tSIN kiwx ", "IyLn dEWM kXiN AFJf Emrh KrAj Cvdv eXiB yloP xKZC ", "Ccyj Xuvw QPWc DlwN LFid vQIs vvgg kUuY EnkP fLyX ", "QsKX vLer Ejfr URkp FXrD tpdV sQPP VssX NsGD wMWL ", "uwmI Sumt HefQ khRT vXlS NTBS jgXi vvgg vdfn kzFn ", "QHBC FXRZ bPrT sZVo sGrM yKTD oMTs KGTE HGjP yloP ", "sQEO TOUH xOTu Cvdv WcIZ tLqf XlyJ ZZkQ CezH sGQv ", "wMWL kzFn yEHr QWBf aFPf pvKq Yroi TUrx pBLV ZZkQ ", "cXPc LEVk eJUb FyOL Lben aFPf OTzo NTBS PdQm wZks ", "pefG wMWL mQZX kzUb BSUA IYdo KPuZ IPmC OrFJ nOMb ", "mtpQ aoIA gXdH pPJi zZxo hdKK tamD zbJO oMkp NkuL ", "khRT yloP sQEO latv aNJM NkuL ykZg VSFv TxAh CRVq ", "ykZg UTeg nUnZ UAGY UTeg eZqZ koex yEHr NKzG vdfn ", "URkp kQCH EbhO MRRo MiNO eZqZ gXdH xKZC QsKX kzFn ", "NKzG wMWL SKOa yloP Emrh fMiW CoWX IyLn iNAj URkp ", "lUzl Pzhu LlAy aoIA yjaU ymYa AsUp mtpQ OwNB AVeZ ", "QsKX UTeg YQhe vQIs KrCI vwap SvyP dFdi YqGC PMma ", "LeFf ujxH VeXg hdKK mQZX wcYk kzUb LeFf OziW gxth ", "yjaU McnI VdEq zZbg gVQr XFFc vwap EdKz OINO YMlZ ", "aEpD khRT CoWX xAQI GPwl EpPc NsGD HefQ KPuZ CxFj ", "vvgg AsUp tpdV kzFn bxVR kPOw kCDA eJUb SIGW Rilv ", "EbhO bxVR LeFf nYHx bxVR Drag DSIs NlOO Rilv WgrI ", "sQPP VvKq latv JeCm jmrE tpdV Xdva knEm XFFc KsJm ", "KHeS aIbZ Sumt yEHr ZCKi Bkuh EnkP aFPf hxXx fMiW ", "khRT LeFf UfXC bdmI xzmf ynVe FXrD TOUH hDQL ozBT ", "fMiW Ltdr vQIs tamD Hkkl yjaU vUEv AVeZ oyKf TUrx ", "aNJM NTBS ymYa tpLM inRc ukkB ZZkQ GPwl zZxo jgXi ", "bGoJ kzFn URkp NTBS dEWM FYLu xKZC IYdo qWGk gXdH ", "iETW EamP VSya RIXt IyLn khRT qiED dEWM GYDm dFdi "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 6, 10, 11, 12, 15, 18, 20, 26, 27, 28, 29, 30, 36, 39, 40, 43, 47, 49};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> knownSpam = {"zimh whNX iyWp Bffp KnIL PijH HOmF eeim bYOF YAxN ", "VNzr ppwS HGDt lcUE kHul ZfBu tsIh BOrO mrmp yRYL ", "ZHQq lxDi RSQg dzyf XHUJ XCgX QIvi RRSf QncA lJdr ", "cUwP aWxX bYXk vJWg vDOn QSmi VeBR Hzxg TEOW ELem ", "wRAj DLHx QhDs JTQu qQNp iIOY cAet zipd SnmR Uzet ", "lNbg LCpZ BQzN KIOg KZsr rhjA WNzT barJ cgcQ tLbX ", "pejl ruIr tWxB Rtaz KNet TEOw zmow enkS WApt qPkG ", "KFAu bFEZ Tnrq kcrj gyRP vCOI YjRE xKqh TyQX LzIu ", "SAfr GrKd GZtW FQfd jakn SJPw hCvU cAFI qwcv pIUA ", "JWfk ogKO zbcB fpha hNUw yfWR nbgP hwbp ZKPq teTb ", "VPnv edib efvE Fpol REJf uTBD SRtY Lkzb rtzM avBN ", "jnBz lOIh YQBT Bsdw dvit RcMv bqGC DfSx SdYO jVmB ", "MmPW FYLV AvMi hCHr EuXK BnVa OraB ZbPR tPvQ lHXl ", "ZlBX aEFa FQiH NAOO sXFf NstM ImhO zwht HvvH QDFR ", "Fhkj FZlO uhDZ RbKC DdKU yMRV OKwr EKeD hBHz fcKt ", "Zqvr jhpF AGkW SaYI iJLC UjWG ifQO dSWg WulA idqL ", "iBsn UnkD HewJ qbwD YwYx Fqjv oBtZ aYxA NPTQ GnnZ ", "lebg wRJp Ebuv CdLR zizd kuTN Fsso JFsD QwtS MKfy ", "BJyi YHdH SZca uaae OrjY eafR hxIo hmri eOMj DTpZ ", "UsaB hxHO BhUg ceUq fdap nEWH ldwV AOrW Otjp iKzX ", "zimh whNX iyWp Bffp KnIL PijH HOmF eeim bYOF YAxN ", "VNzr ppwS HGDt lcUE kHul ZfBu tsIh BOrO mrmp yRYL ", "ZHQq lxDi RSQg dzyf XHUJ XCgX QIvi RRSf QncA lJdr ", "cUwP aWxX bYXk vJWg vDOn QSmi VeBR Hzxg TEOW ELem ", "wRAj DLHx QhDs JTQu qQNp iIOY cAet zipd SnmR Uzet ", "lNbg LCpZ BQzN KIOg KZsr rhjA WNzT barJ cgcQ tLbX ", "pejl ruIr tWxB Rtaz KNet TEOw zmow enkS WApt qPkG ", "KFAu bFEZ Tnrq kcrj gyRP vCOI YjRE xKqh TyQX LzIu ", "SAfr GrKd GZtW FQfd jakn SJPw hCvU cAFI qwcv pIUA ", "JWfk ogKO zbcB fpha hNUw yfWR nbgP hwbp ZKPq teTb ", "VPnv edib efvE Fpol REJf uTBD SRtY Lkzb rtzM avBN ", "jnBz lOIh YQBT Bsdw dvit RcMv bqGC DfSx SdYO jVmB ", "MmPW FYLV AvMi hCHr EuXK BnVa OraB ZbPR tPvQ lHXl ", "ZlBX aEFa FQiH NAOO sXFf NstM ImhO zwht HvvH QDFR ", "Fhkj FZlO uhDZ RbKC DdKU yMRV OKwr EKeD hBHz fcKt ", "Zqvr jhpF AGkW SaYI iJLC UjWG ifQO dSWg WulA idqL ", "iBsn UnkD HewJ qbwD YwYx Fqjv oBtZ aYxA NPTQ GnnZ ", "lebg wRJp Ebuv CdLR zizd kuTN Fsso JFsD QwtS MKfy ", "BJyi YHdH SZca uaae OrjY eafR hxIo hmri eOMj DTpZ ", "UsaB hxHO BhUg ceUq fdap nEWH ldwV AOrW Otjp iKzX ", "zimh whNX iyWp Bffp KnIL PijH HOmF eeim bYOF YAxN ", "VNzr ppwS HGDt lcUE kHul ZfBu tsIh BOrO mrmp yRYL ", "ZHQq lxDi RSQg dzyf XHUJ XCgX QIvi RRSf QncA lJdr ", "cUwP aWxX bYXk vJWg vDOn QSmi VeBR Hzxg TEOW ELem ", "wRAj DLHx QhDs JTQu qQNp iIOY cAet zipd SnmR Uzet ", "lNbg LCpZ BQzN KIOg KZsr rhjA WNzT barJ cgcQ tLbX ", "pejl ruIr tWxB Rtaz KNet TEOw zmow enkS WApt qPkG ", "KFAu bFEZ Tnrq kcrj gyRP vCOI YjRE xKqh TyQX LzIu ", "SAfr GrKd GZtW FQfd jakn SJPw hCvU cAFI qwcv pIUA ", "JWfk ogKO zbcB fpha hNUw yfWR nbgP hwbp ZKPq teTb "};
    vector<string> newMail = {"hxIo ZKPq sUKT BnVa deTV VFkS Fkni qQNp ufXt NcEb ", "JxOZ SqXu zmow yRYL Tnrq KNet QncA BnVa eRvK XXGq ", "NcEb GKFH tWxB sUKT RRSf aYxA aEFa XyUq KZsr RcMv ", "peFC nLmU LzIu EuXK UbJz barJ DhBv kuTL UjWG nSRG ", "whNX nSRG Bffp EahV nbgP Fpol UsaB Bsdw JXBh rYvK ", "OrjY Uzet barJ aEFa FYLV REJf tsIh HewJ BJyi ELem ", "oTMz Fsso NAOO Vqii lJdr gkrX kuTL BVWr ZkQw HSJY ", "wZuG SRtY UsaB DfSx WNzT yfWR tLbX iKzX HQjF KIOg ", "LCpZ ziwa pIaX rtzM LCpZ DfSx aWxX GKFH EahV lHXl ", "HewJ QDFR VeBR dSWg NCue jwSq jgxJ SnmR JWfk iIOY ", "QwtS NstM hNUw WulA JXBh VPnv iIOY BOrO uhDZ ogKO ", "NPTQ vCOI RSQg XInl SdYO rUvC KIOg CUay ELem Fsso ", "qNTs ifQO zipd Bffp teTb GnnZ ZbPR UjWG lOIh Fpol ", "BJyi SnmR UsaB OrjY ELem ImhO YwYx qwcv REJf eeim ", "yRYL Fqjv AOjN enkS jhpF xKqh FQiH oozW zKck XyUq ", "tVKh NcEb yjcc yfWR hNUw KnIL Hzxg EKeD tPvQ Tnrq ", "AOrW QwtS sXFf tVKh IgeN hZZo KNet UnkD zKck JFsD ", "LdOm aWxX lJdr jakn aWxX QSmi BVWr RRSf WJkW jgxJ ", "ufXt FQiH cUwP jnBz yfWR xKqh QhDs uTBD iyWp BnVa ", "kkAE iJLC jBYq bYXk ifQO jhpF MKfy SnmR EahV Uzet ", "QIvi uaae Tnrq RcMv QjMo cUwP hwbp hxHO pIUA sVtV ", "bevH ImhO kuYy CPVM DQfU HQjF whNX cgcQ GeYG CPVM ", "AeAw CvUJ zizd dESf oTMz NPTQ nuBn UpEW GCSP RbKC ", "VPnv VFkS pIUA lcUE iIOY qQNp wRJp Dhlp ruIr Dhlp ", "Gdbi fpha UdsA BILs edib cAFI NcEb ELem pejl ZHQq ", "yfWR MGQB KZsr uGZq NPTQ EKeD cAet qwcv RYzp UdsA ", "MmPW gyRP LzIu NAof aEFa ifQO YAxN Ebuv SdYO SRtY ", "Uzet avBN eOMj pejl edib ziwa jhpF FJSA lebg hxHO ", "pIUA YwYx VeBR SMRC WApt ceUq BILs MKfy nEWH SbDJ ", "zwht Fhkj NAOO hCvU eOMj kcrj dzyf qPkG xKqh zimh ", "BQzN jnBz qwcv QwtS ImhO xKqh yRYL AvMi Tnrq Tnrq ", "pejl QhDs ldwV bYXk WApt HDSS qQNp LCpZ bFEZ RcMv ", "jhpF RSQg RcMv HGDt zipd idqL DfSx vJWg vJWg lNbg ", "RUWF hxHO TGMY vXCU CvUJ JWgx Fsso SAfr SAfr bbIA ", "JTQu zbcB QDFR HGDt YwYx KnIL DdKU yRYL KIOg pIUA ", "QDFR QIvi kuTN hCHr Hzxg Bsdw cAFI SnmR GnnZ rtzM ", "OraB oBtZ BJyi RbKC JTQu REJf kHul ifQO ibKC cAFI ", "Uodc XInl lanf pIUA Bsdw iIOY DTpZ RTCQ Deif eafR ", "CUay eOMj RUNL CvUJ avBN ZkQw RTCQ hCvU kQFz HSJY ", "KFAu iQxu OrjY ygfK wQvw QSmi IhYh qPkG OKwr zqTN ", "KZsr iQxu qwcv KZsr CdLR zizd UpEW pejl barJ WApt ", "dSWg YwYx AGkW XyUq qwcv RSQg ibKC oozW pIUA OrjY ", "CdLR DfSx rYvK hxIo lebg nEWH WoOu ggMl yMRV ImhO ", "lNbg NAOO BhUg JjmX tsIh Tnrq REJf QIvi Otjp BOrO ", "KFAu gkrX JFsD oBtZ Otjp LCpZ Fsso NAOO zimh ZfBu ", "sVtV Dnwd nbgP nJlh GrKd RwaQ AGkW ndRz bevH BYGQ ", "aWxX QDFR ChAZ PxjP DpHN hxHO IVTp cAet xKqh IRMK ", "krbR Uzet cPiX rUvC YHdH ChAZ HewJ gaqM UjWG iKzX ", "HGDt QncA qQNp FYLV YAxN QIvi XXGq fpha zqTN ogKO ", "cAet Bffp NAOO lebg ZlBX wRJp kQFz efvE Fhkj aWxX "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 8, 9, 11, 14, 15, 16, 17, 19, 21, 22, 24, 25, 28, 33, 37, 38, 39, 42, 45, 46, 47};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> knownSpam = {"zNuU WAHB gsuK GsxW GeSk uVeU umVb pdsg MTkj VnZq ", "YSwY VZDg sfYk zSWs vkGx rAHY vwOT ddCo fQsT alnq ", "wUaQ jiUE fmyR XKld spXj kXan Yycy CVXx Wtip wBmN ", "ZQGJ xrau XhPg ddpb GfDz XsWd rxKG IVTP AZIp utPg ", "QZua Tezv vQBw OAUR Vplw WYXN KqmS INPf whlE YDJb ", "uRat omGe Vwib WOeY OOGk palG ycSv oTBU HhWP DBGX ", "UbTq IpMU ZOmK rKLh RDLP FndO ntSm NzZR VivO RvtQ ", "VRZp UKIG HVWH MLYx ckkt ZEAs YcrC TwRZ nVTJ jpMD ", "fnVs uCuA vPKJ fhCn xWZH YpZe sQQN ockQ dZnB llnQ ", "dymK TOWT UIDx qifI zmQC HvWf pvkL rIPE hkSf JXSP ", "FpvU zKRr PYYk ZJgh ssUq DGSx beFF Srix ROzr uKau ", "yiKW YPIZ sEvR Fsdr PQPr wLEa SCWK TCiO PPMF SJQR ", "PQax dZaV xFQC BOxp eukm uplb XklQ dSfK HcXu PCvI ", "Nxte kFeA AixL Xsfs ANUE bjBP GgYT vnzv XKMW IEhM ", "Lxpp DHpe bFTx vfuJ PLoN GvSw EWLb PuUU Bgkr oBpM ", "ZlqG RHio eCTD eLgY qiYV hIOp uLLO ADJj wUnA NzGL ", "Xste dbBi bdZn ctza Qlkh msUr irzn waoL nCKi WetE ", "Wgdy JOHl QjZF mFNM SGTe IRaf MMii hhxu zmQR VHGf ", "PkdG QqOs oANx vkLY IxKX WLXG CoOS evQH nxkv UWzy ", "AaDG TOvy Suoh ddVS fmAi qLmr GqOZ GayQ Xggv moaF ", "zNuU WAHB gsuK GsxW GeSk uVeU umVb pdsg MTkj VnZq ", "YSwY VZDg sfYk zSWs vkGx rAHY vwOT ddCo fQsT alnq ", "wUaQ jiUE fmyR XKld spXj kXan Yycy CVXx Wtip wBmN ", "ZQGJ xrau XhPg ddpb GfDz XsWd rxKG IVTP AZIp utPg ", "QZua Tezv vQBw OAUR Vplw WYXN KqmS INPf whlE YDJb ", "uRat omGe Vwib WOeY OOGk palG ycSv oTBU HhWP DBGX ", "UbTq IpMU ZOmK rKLh RDLP FndO ntSm NzZR VivO RvtQ ", "VRZp UKIG HVWH MLYx ckkt ZEAs YcrC TwRZ nVTJ jpMD ", "fnVs uCuA vPKJ fhCn xWZH YpZe sQQN ockQ dZnB llnQ ", "dymK TOWT UIDx qifI zmQC HvWf pvkL rIPE hkSf JXSP ", "FpvU zKRr PYYk ZJgh ssUq DGSx beFF Srix ROzr uKau ", "yiKW YPIZ sEvR Fsdr PQPr wLEa SCWK TCiO PPMF SJQR ", "PQax dZaV xFQC BOxp eukm uplb XklQ dSfK HcXu PCvI ", "Nxte kFeA AixL Xsfs ANUE bjBP GgYT vnzv XKMW IEhM ", "Lxpp DHpe bFTx vfuJ PLoN GvSw EWLb PuUU Bgkr oBpM ", "ZlqG RHio eCTD eLgY qiYV hIOp uLLO ADJj wUnA NzGL ", "Xste dbBi bdZn ctza Qlkh msUr irzn waoL nCKi WetE ", "Wgdy JOHl QjZF mFNM SGTe IRaf MMii hhxu zmQR VHGf ", "PkdG QqOs oANx vkLY IxKX WLXG CoOS evQH nxkv UWzy ", "AaDG TOvy Suoh ddVS fmAi qLmr GqOZ GayQ Xggv moaF ", "zNuU WAHB gsuK GsxW GeSk uVeU umVb pdsg MTkj VnZq ", "YSwY VZDg sfYk zSWs vkGx rAHY vwOT ddCo fQsT alnq ", "wUaQ jiUE fmyR XKld spXj kXan Yycy CVXx Wtip wBmN ", "ZQGJ xrau XhPg ddpb GfDz XsWd rxKG IVTP AZIp utPg ", "QZua Tezv vQBw OAUR Vplw WYXN KqmS INPf whlE YDJb ", "uRat omGe Vwib WOeY OOGk palG ycSv oTBU HhWP DBGX ", "UbTq IpMU ZOmK rKLh RDLP FndO ntSm NzZR VivO RvtQ ", "VRZp UKIG HVWH MLYx ckkt ZEAs YcrC TwRZ nVTJ jpMD ", "fnVs uCuA vPKJ fhCn xWZH YpZe sQQN ockQ dZnB llnQ ", "dymK TOWT UIDx qifI zmQC HvWf pvkL rIPE hkSf JXSP "};
    vector<string> newMail = {"WDYK fMLf Edqj vkGx PQPr GmEC OqQl GqOZ jvEp TCiO ", "ckkt XBJR ddVS yIFy oBpM Yycy fMLf Suoh mcUa pCnq ", "WAHB sQQN qDHM WetE VnZq fmyR MTkj VHGf PdWP NYII ", "Edqj Vplw jwRg XbRx acTl RKpD zmQC aVIO UWzy wVyz ", "GYvS WLXG jpMD irzn ohrx YpZe EWLb UbTq Nxte QqOs ", "rIPE vkGx RvtQ OOGk JATF oabz WLXG XlHZ NSmi GeSk ", "yIFy ZKnX qifI OYgu dsjB ZsRi YSwY LsOt BIhB mmjw ", "xrau OOGk eukm XKld utPg qifI MLYx GfDz MTkj PLoN ", "DHpe xWZH Wtip vBkD UWzy GgYT qLmr KsCF kFeA GayQ ", "KsCF vwOT WDYK vfuJ GsxW NzGL Zcvz uLLO OdJA oANx ", "XLOh ckkt qifI NTTr vwOT aVIO OAUR ctza kNCn RKpD ", "wVyz nxkv zNuU mHdI NyKf ADJj CmUj QzvZ fmyR OAUR ", "IRaf Edqj NTTr Vplw fmAi NzGL WDYK UKIG HhWP msUr ", "WOeY moaF zSWs ntSm vwOT jwRg bFTx WOeY HcXu SGTe ", "FpvU IEhM zNuU palG wVyz ycWf aIki WYXN FmpR UKIG ", "ddVS pvkL fmAi VqwZ wBmN zKRr PCvI BOxp ZKnX MMii ", "XBJR YYEM VqwZ VqwZ rHja VHGf xJSD PQPr NlvP RvtQ ", "ZEAs GfDz ddpb vkLY pCXd GvSw rIPE HcXu BIhB Xste ", "vQBw kDbb wLEa vPKJ ahPG OAUR LSgZ palG jhOV jpgK ", "VnZq RDLP FRUf bjBP PPMF alnq UKIG VHGf Suoh UEvM ", "jpgK WDYK QqOs UbTq ANUE OAUR XKMW PLoN VivO wPiy ", "HVWH Vplw WLXG ctza XKMW VnZq Wgdy dymK vwOT beFF ", "ROzr dSfK Lxpp ddVS eCTD AZIp pdsg FpvU Fsdr TOWT ", "ROzr RKpD Qlkh DGSx sKos NYII qifI PQax aVIO VivO ", "UWzy omGe rxKG aXNU ddCo PuUU rKRl Srix VdFp vYEd ", "IEhM vQBw nVTJ BOxp omGe WLXG DGSx VivO ddCo KmIY ", "LSgZ YcrC GXNz uilL BIhB vQBw VnZq fhCn ddVS moaF ", "Xsfs ddVS zKRr ROzr GfDz GsxW sfYk llnQ eLgY QZua ", "Yoyv zmQR aVIO bVVU alnq pdsg Vplw ZtEX VGUl WetE ", "DBGX SGTe jwRg rErx qLmr rKRl pdsg hRYy PvpE GvSw ", "jiUE Edqj QqOs irzn HhWP Xsfs BOxp eukm Fsdr irzn ", "WYXN FpvU rIPE Rjcu bjBP oTBU XKMW llnQ ZKnX ctza ", "RvtQ HvWf jiUE ntSm yiKW umVb qiYV bjBP pvkL dymK ", "TwRZ utPg Vplw mFNM ntSm gGrd KWCS IVTP hkSf vfuJ ", "yNsY ZJgh RDLP XhPg HhWP pCnq jiUE XklQ TOvy WYXN ", "DBGX UWzy SJQR qiYV XCic sEvR qifI OYgu kDbb SGTe ", "pvkL whlE Xste pvkL QjZF Wgdy zSWs ZEAs eukm RDLP ", "RHio tdCV bjBP kDbb JokA ddpb Wgdy XlHZ xWZH HGfj ", "zmQC HGfj GfDz tdCV TCiO uplb IEhM zmQC TCiO JXSP ", "GqOZ fMLf dbBi ddCo fhCn rKRl wUaQ AZIp uVeU AaDG ", "uCuA rHja jpgK LFBt RHio AaDG Lxpp NSmi zKRr rxKG ", "NzZR TCiO VHGf VorK vfuJ uRat palG pdsg JBQd oBpM ", "wUaQ EWLb kFeA dZnB VZDg OOGk BOxp dymK UbTq TOvy ", "Xste llnQ YDJb IVTP ctza ZOmK GfDz sQQN dZnB Fsdr ", "pCXd utPg ynuH Xsfs XKld dZaV kXan fQsT palG fvXY ", "WetE zKRr CVXx MLYx kNCn JBQd zSWs NzGL INPf qLmr ", "YDJb umVb yNsY QfaL DKIn NzZR fQsT XbRx AixL ddCo ", "ckkt gsuK QqOs XlHZ hfrN VRZp jvEp eLgY rAHY KmIY ", "ohrx JXSP hhxu KWCS ZRDt Xggv qDHM IpMU UIDx sQQN ", "UWzy hRYy qDHM mFNM UWzy FRUf Xsfs llnQ Wtip DHpe "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6, 9, 10, 11, 12, 14, 16, 18, 20, 23, 24, 26, 28, 29, 35, 37, 40, 46, 47};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> knownSpam = {"VzeM IYzp LBiw ZEld zUEG wIvd RqEW GynA KKTW OVrn ", "bHeM mART mutj CpKw qWEy WHRe vGkW YnfT pZOP bFaO ", "tQaa DTMR DXYr mkPa zrpz QiEV vYam mHyH ajna LaDz ", "SEUq VCWg aUvP MpUU wTrQ oFHB vmUk fJFL IRVS jMVL ", "oGYL PItl sDzb WYvZ bDmg Ztgt mcRc pLrU WAya Bcur ", "PfEs zfgH unol zSzw LemX hTun WTne GNnb xJoG PnxD ", "QdNc bDSE iGfJ wTZX aDNr aXcA LCpq ukuw pjrE jBtb ", "NSck PIJh JfvD OhhA PNiE IxYW pVNG abUX fTNE heUk ", "eElk AQLl zQbX Jjtm tMfi YaYt lQay pQvd TmvG Sfkb ", "hAZI JlDg noef NGvc BCnm VbPE bEqi mnyL rcCn hpko ", "NFgG lSXV gRdL oKPM DzEE KAXJ kxfz EAqB BurT FbfX ", "HYei TDSi pKXT ldlc gfRR lhAY RAdF jtbL FIEX AvKa ", "CySY rjLB cNrA eiCE YCcR lPjV ZROV AdaT rrAT VJhc ", "Kwht ePgu jRDa yeTN duIV Uvru rkPz lIXc vfrA hGqy ", "ghaa eZnu czqK fZXu GiOB kQyy srNA IphL optW lREQ ", "HaIS IkDM AJml jBMZ Eojq Rozm kiIh DuUl EJqe pcAM ", "Fkpu pSju TdBi uAOW qngZ cnFz sQEx xlAF tIwp GrSR ", "JDkP htYV QlLm tVVS EJfN VyNU sIwh qtox KSua ATXU ", "JQTl ooKr LmKi fbuB bxkD xczj qVZK qxSG RbzG XjbS ", "wngR kOPv QLrX rUOr xVQk XnJl EvyF VjxC lpjK Jlwv ", "VzeM IYzp LBiw ZEld zUEG wIvd RqEW GynA KKTW OVrn ", "bHeM mART mutj CpKw qWEy WHRe vGkW YnfT pZOP bFaO ", "tQaa DTMR DXYr mkPa zrpz QiEV vYam mHyH ajna LaDz ", "SEUq VCWg aUvP MpUU wTrQ oFHB vmUk fJFL IRVS jMVL ", "oGYL PItl sDzb WYvZ bDmg Ztgt mcRc pLrU WAya Bcur ", "PfEs zfgH unol zSzw LemX hTun WTne GNnb xJoG PnxD ", "QdNc bDSE iGfJ wTZX aDNr aXcA LCpq ukuw pjrE jBtb ", "NSck PIJh JfvD OhhA PNiE IxYW pVNG abUX fTNE heUk ", "eElk AQLl zQbX Jjtm tMfi YaYt lQay pQvd TmvG Sfkb ", "hAZI JlDg noef NGvc BCnm VbPE bEqi mnyL rcCn hpko ", "NFgG lSXV gRdL oKPM DzEE KAXJ kxfz EAqB BurT FbfX ", "HYei TDSi pKXT ldlc gfRR lhAY RAdF jtbL FIEX AvKa ", "CySY rjLB cNrA eiCE YCcR lPjV ZROV AdaT rrAT VJhc ", "Kwht ePgu jRDa yeTN duIV Uvru rkPz lIXc vfrA hGqy ", "ghaa eZnu czqK fZXu GiOB kQyy srNA IphL optW lREQ ", "HaIS IkDM AJml jBMZ Eojq Rozm kiIh DuUl EJqe pcAM ", "Fkpu pSju TdBi uAOW qngZ cnFz sQEx xlAF tIwp GrSR ", "JDkP htYV QlLm tVVS EJfN VyNU sIwh qtox KSua ATXU ", "JQTl ooKr LmKi fbuB bxkD xczj qVZK qxSG RbzG XjbS ", "wngR kOPv QLrX rUOr xVQk XnJl EvyF VjxC lpjK Jlwv ", "VzeM IYzp LBiw ZEld zUEG wIvd RqEW GynA KKTW OVrn ", "bHeM mART mutj CpKw qWEy WHRe vGkW YnfT pZOP bFaO ", "tQaa DTMR DXYr mkPa zrpz QiEV vYam mHyH ajna LaDz ", "SEUq VCWg aUvP MpUU wTrQ oFHB vmUk fJFL IRVS jMVL ", "oGYL PItl sDzb WYvZ bDmg Ztgt mcRc pLrU WAya Bcur ", "PfEs zfgH unol zSzw LemX hTun WTne GNnb xJoG PnxD ", "QdNc bDSE iGfJ wTZX aDNr aXcA LCpq ukuw pjrE jBtb ", "NSck PIJh JfvD OhhA PNiE IxYW pVNG abUX fTNE heUk ", "eElk AQLl zQbX Jjtm tMfi YaYt lQay pQvd TmvG Sfkb ", "hAZI JlDg noef NGvc BCnm VbPE bEqi mnyL rcCn hpko "};
    vector<string> newMail = {"eZnu PnxD OVrn FNSj mHyH LBiw JQTl KAXJ pcAM pZOP ", "SEUq CpKw kjGf FYsI xlAF XcXK bHeM srNA bFaO ArMQ ", "zkUY ieYf YaYt eElk AvKa jHyc cGTj GVvE xzVm aDNr ", "Sfkb BCnm pZOP rjLB WMEp xzVm wTZX Bcur FbfX ltll ", "bDmg HRGe JDkP zrpz fTNE KKTW pVNG vYam abUX lpjK ", "ZEld IRVS LemX mnyL WHRe yeTN oKPM kxfz XnJl zfgH ", "XnJl jBMZ HaIS kxfz NSck JDkP wTrQ iGfJ lpjK rjLB ", "HaIS EJfN KAXJ lIXc DuUl abUX IxYW MpUU GNnb WCyz ", "HfFD Rozm ZlLG ePgu VFqv jHeO GynA Ztgt fajB VCWg ", "wTrQ kiIh cGTj mcRc JlQK eJTq Rozm vYam zUEG wTZX ", "DAAa XcXK Bcur qngZ kiIh qfEW CiDC Hwyi HRGe MkKD ", "JDkP qVZK xVQk iDhG NSck ZFXS zQbX nTrB iDhG KMnO ", "unol vYam NSck TZNN xVQk qWEy pSju mkPa cNrA rrAT ", "tZLq PIJh eZnu bxkD kxfz pKXT LCpq dkOY tfzY bFaO ", "COCo KAXJ lQay sDzb SEUq RBBY PCJZ OlRd IkDM IYzp ", "uAOW cGTj Sfkb OVrn mutj lPjV fTNE OVrn WTne LaDz ", "kQyy lSXV MbLz qVfc HaIS optW NGvc DzEE zQbX mkPa ", "mkPa IxYW DzEE QiEV zSzw DuUl Hwyi AgBy pKXT jRDa ", "AJml YCcR wngR htYV rUOr pjrE rcCn pKXT pKXT RqEW ", "KSua MQfn bFaO cBDp kzzJ uYcz utSn lPjV XZCN ukuw ", "heUk xlAF kxfz Uvru PNiE DTMR PdSi wTDu cnFz NGvc ", "VzeM xczj LaDz IYzp KAXJ lREQ KKTW mHyH wVBi oGYL ", "hpko nSQu Rozm AQLl wHNh YnfT pSju PItl pQvd jBMZ ", "bDmg GNnb fZXu yEIp iDhG lpjK GcVL jtbL ePgu LemX ", "ldlc RbzG pVNG LmKi MpUU GNnb FbfX JlDg QLrX SEUq ", "sDzb AvKa bDmg rjLB BPmm ieYf VyNU CpKw IkDM ukuw ", "Rozm GNnb abUX YCcR UykE EAqB Sfkb VJhc KKTW abUX ", "jtbL FbfX wTrQ AJml ukuw kOPv GiOB JDkP sDzb LCpq ", "czqK cGTj VyNU abUX jBMZ hAZI qngZ Slsu ooKr EAqB ", "EvyF YCcR GrSR CwAd aDNr ylYn DstC ePgu bXEk mkPa ", "TmvG LemX lPjV yeTN sDzb TmvG mFka cKvE PItl IYzp ", "mnyL ghaa TZOH xCWk iDhG VzeM Eojq XDoe nTrB xlAF ", "lhAY mART WYvZ VbPE odSv XjbS mXwz GPAx JlDg ghaa ", "YnfT bwMC fCLA DuUl wTrQ VzeM qxSG IRVS eJTq YVyY ", "ukuw ATXU YnfT RqEW JQTl KSua LemX zrpz rjLB bFaO ", "kxfz RbzG kAbc fbuB OlRd bHeM eiCE zKil YnfT RqEW ", "lpjK IYzp Ydry xJoG lpjK mART aKJr AvKa zfgH qVZK ", "JQTl QLrX unol WHRe zSzw ooKr Sfkb bFaO fbuB ooKr ", "optW WAya rkPz mFka kjGf MbLz YDGI DuUl lpjK XjbS ", "sgmX kOPv GNnb EvyF vfrA srNA fZXu wukl IRVS cBDp ", "yEIp GiOB ssBM qVfc RqEW kOPv XnJl GynA noef bFaO ", "Jjtm CrGF Rozm JlDg noef OVrn hAZI noef GVvE Jjtm ", "eElk VCWg jMVL YDGI QOto vGkW IYzp UAid TZOH DstC ", "pSju vmUk GVvE bwMC rzvy vjIL hpko vGkW ZROV eElk ", "yEIp ZEld EJfN TmvG JDkP Jspi EJfN nDFW Uvru GynA ", "NSck pZOP jRDa mXwz TZOH PfEs lIXc PAJj nxGe tIwp ", "KKTW cxHY Hwyi AvKa IYzp pQvd OlRd ooKr ieYf xCWk ", "TZNN unol TmvG zrpz bHeM PCJZ duIV KAXJ pcAM Ydry ", "DXYr lhAY lIXc lIXc GNnb jBMZ xJoG EAqB HaIS IkDM ", "htYV EsHm bHeM ylYn VyNU VJhc AJml WMEp qWEy hGqy "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 8, 9, 10, 11, 13, 14, 19, 23, 29, 31, 32, 33, 35, 39, 42, 43, 45, 46, 49};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> knownSpam = {"KEUg sLrd Hezi AOcx cgfj aivT rumi lTLS DZbJ ODbI ", "LUHT ZYOl DlXp QdJN RIXI aUkB cmoE Mksa qnNO jPtr ", "rEIy uZQr HwhY vCCz Kihq yXOL SYQb kBFY yQuJ tfdv ", "Qqdr FTQA sLMf BghW CeUE WQnw mCJr nKml KdJh iMEX ", "WWnG wWtY KTVa fENT euuw mvlm oWbN UsxN sKUA SOGQ ", "usbM Zzdw ynPv VqFu SlGs GpHp Goeh Fvdj yMGE Xndg ", "aaOF kOKE YlNx cwvk UseM UqQF epHf FczC LaiR rUEB ", "TDCZ KsXq mVeq LnlN yPcU HPGr rIag mHjR BWoA Uesu ", "JAvq rtrM DQfs Zoqv IgYW FYbr sjYd HFXR goCB mdqW ", "kODn oiPF YtHi tLlo eOsR pzXb WjVf KLaG QhIw qKuW ", "RggV oYUY JHmU EhUv xumH lmnx FieU hUpR qRRP kKnK ", "Uoop eeOx koEe xTVi uRhn EHOH HvHH cxkH Hgwp lAln ", "vLTv tlYH PRdU DYrc Ezfq EjKy flds InJv Pjrv VNFN ", "NMXs eemv qUAH QJRc KkHd ftSW OWke xTjr mLJe Znmd ", "jPlv giBt ZZiM LYBf tFrD huZT YElP wcTG pEwy EYbw ", "xrGz SgNb NHiX KXJp VnOP QkNN SiBn ZsNS dubs tOdh ", "purO WuCy TsoZ XxNj oSKr hZRe NYeP hiLb FXBL Teka ", "hWXi vDdc Cwgm uAKS UPKd dMSq FxwX PQoJ LGrm LDrv ", "gTzf DlTT ZXuW pnWF pBgO AvoW BXMk DZVN KEwP IXWU ", "lKoO BPsK VHBr tEWd fyCh TRll NWmp JTSP FRXE Baem ", "KEUg sLrd Hezi AOcx cgfj aivT rumi lTLS DZbJ ODbI ", "LUHT ZYOl DlXp QdJN RIXI aUkB cmoE Mksa qnNO jPtr ", "rEIy uZQr HwhY vCCz Kihq yXOL SYQb kBFY yQuJ tfdv ", "Qqdr FTQA sLMf BghW CeUE WQnw mCJr nKml KdJh iMEX ", "WWnG wWtY KTVa fENT euuw mvlm oWbN UsxN sKUA SOGQ ", "usbM Zzdw ynPv VqFu SlGs GpHp Goeh Fvdj yMGE Xndg ", "aaOF kOKE YlNx cwvk UseM UqQF epHf FczC LaiR rUEB ", "TDCZ KsXq mVeq LnlN yPcU HPGr rIag mHjR BWoA Uesu ", "JAvq rtrM DQfs Zoqv IgYW FYbr sjYd HFXR goCB mdqW ", "kODn oiPF YtHi tLlo eOsR pzXb WjVf KLaG QhIw qKuW ", "RggV oYUY JHmU EhUv xumH lmnx FieU hUpR qRRP kKnK ", "Uoop eeOx koEe xTVi uRhn EHOH HvHH cxkH Hgwp lAln ", "vLTv tlYH PRdU DYrc Ezfq EjKy flds InJv Pjrv VNFN ", "NMXs eemv qUAH QJRc KkHd ftSW OWke xTjr mLJe Znmd ", "jPlv giBt ZZiM LYBf tFrD huZT YElP wcTG pEwy EYbw ", "xrGz SgNb NHiX KXJp VnOP QkNN SiBn ZsNS dubs tOdh ", "purO WuCy TsoZ XxNj oSKr hZRe NYeP hiLb FXBL Teka ", "hWXi vDdc Cwgm uAKS UPKd dMSq FxwX PQoJ LGrm LDrv ", "gTzf DlTT ZXuW pnWF pBgO AvoW BXMk DZVN KEwP IXWU ", "lKoO BPsK VHBr tEWd fyCh TRll NWmp JTSP FRXE Baem ", "KEUg sLrd Hezi AOcx cgfj aivT rumi lTLS DZbJ ODbI ", "LUHT ZYOl DlXp QdJN RIXI aUkB cmoE Mksa qnNO jPtr ", "rEIy uZQr HwhY vCCz Kihq yXOL SYQb kBFY yQuJ tfdv ", "Qqdr FTQA sLMf BghW CeUE WQnw mCJr nKml KdJh iMEX ", "WWnG wWtY KTVa fENT euuw mvlm oWbN UsxN sKUA SOGQ ", "usbM Zzdw ynPv VqFu SlGs GpHp Goeh Fvdj yMGE Xndg ", "aaOF kOKE YlNx cwvk UseM UqQF epHf FczC LaiR rUEB ", "TDCZ KsXq mVeq LnlN yPcU HPGr rIag mHjR BWoA Uesu ", "JAvq rtrM DQfs Zoqv IgYW FYbr sjYd HFXR goCB mdqW ", "kODn oiPF YtHi tLlo eOsR pzXb WjVf KLaG QhIw qKuW "};
    vector<string> newMail = {"hZRe hUpR uAKS BXMk LaiR mdqW usbM Teka rEIy purO ", "TsoZ hUpR KkHd tFrD usbM Zzdw GOfh sMlT mWIJ mdqW ", "FxwX QhIw Znmd VspH cmoE VspH cXQm xumH aUkB jskd ", "sLrd WQnw oYUY wcTG VNFN UdyG QJRc pnWF hiLb HvHH ", "AvoW sLMf MUUm ODbI qnNO xTjr goCB rEIy KsXq Ecaa ", "mmnG NMXs cwvk pnWF DQfs cgfj flds eemv kODn mvlm ", "InJv EHOH Goeh dMhX DYrc TRll DZVN EhUv FxwX kBFY ", "WQnw SOGQ QkNN rEIy IkQi NiLT RWjg xumH Utxy AWoS ", "mVeq eemv SuED DlXp ZYOl aBgN sLrd LcGy tfdv mWIJ ", "hGJl gTzf pBgO gTzf Goeh wWtY yEpp YlZC giBt UseM ", "pBgO uZQr Hezi FTQA TsoZ cXQm HvHH DZVN mvlm kODn ", "qUAH JTSP mdqW XxNj UseM qnNO InJv uZQr ZXuW Uoop ", "twPV fENT tLlo yomP Mksa GOfh oYUY eOsR xumH SgNb ", "iyeh uQKI NMXs Fvdj Utxy ALNj DZbJ purO vqqE SOGQ ", "frjm TDCZ YPeH kODn EjKy BPsK vDdc WuCy FTQA KsXq ", "mVeq nePL uAKS iMEX xTjr FTQA yEpp rumi iMEX mHjR ", "GOfh LcGy pnWF NpkT qUAH jPlv FRXE Ecaa Zoqv yHYI ", "Fvdj IXWU goCB tljd usbM eeOx hZRe PQoJ Qqdr JgTM ", "QhIw yPcU mLxy HvHH NvJh BXMk JHmU HWRz VnOP FRXE ", "eOsR QkNN oiPF sjYd FRXE AvoW hZRe cwvk sKUA goCB ", "EhUv WWnG KEUg KTVa hZRe SgNb BWoA mdqW xrGz NWmp ", "SiBn ALNj cwvk hZRe ODbI IgYW sMlT ncNQ Uoop sjYd ", "eOsR PRdU YtHi KndL cEgu aivT JHmU VtQj yXOL iMEX ", "TDCZ EjKy dubs aivT WQnw AOcx rEIy usbM AvoW Teka ", "sLMf Ezfq ANRw Fmdp tFrD Zzdw cmoE Goeh WWnG JHmU ", "fENT vDdc sKUA FYbr ynPv GUqD dMSq Xndg sLMf lAln ", "VspH yomP xumH iMEX FRXE kzdR SYQb VbAH wAck iMEX ", "aKib eeOx UqQF vqqE oVbK uZQr KsXq zfAf FtaC WuCy ", "sLrd SyoK lBnj pzXb lTLS vDdc dpUD koEe TRll aBgN ", "vCCz VnOP UdyG RBuc aivT uZQr MUUm cmoE AvoW HFXR ", "LnlN WuCy eeOx Fhvg kBFY tljd LUHT YElP XxNj QKAl ", "FieU Hgwp ftSW goCB DlTT YtHi mCJr goCB WjVf aaOF ", "HFXR tFrD sLrd Teka Hezi eemv FXBL mHjR Zoqv cwvk ", "TDCZ FczC Cwgm UdyG MVzb cMYJ yQuJ ejeH WQnw uPJq ", "PQoJ hWXi VHBr dMhX BcjN QdJN KEUg ynPv eemv ODbI ", "LYBf yomP euuw aivT wWtY lTLS EhUv KdJh eemv huZI ", "giBt ZYOl RIXI LUHT yQuJ KXJp HvHH VnOP NHiX oWbN ", "SOGQ OWke XxNj lCAV ncNQ ZJlc sKUA njqy vDdc aaOF ", "JDbY LUHT UdyG Bwon ATxN STIX OWke frjm RAwX vLTv ", "IXWU cgfj GpHp NTCl ZsNS rumi kzdR TDCZ rumi DlXp ", "HvHH XSWX lAln aBgN SYQb lBnj opfm LaiR AuEe Qqdr ", "UseM TsoZ NHiX bmco wWtY kKnK HvHH dubs iMEX oSKr ", "lCAV WuCy YPeH Baem zuSa wcTG WjVf QgcN uRhn Xndg ", "mmnG YElP esvn SLYW Fhvg zuLC uzAh aivT dglH WGDs ", "eeOx Znmd NMXs gHPk pEwy KndL HwhY KkHd EjKy euuw ", "YElP Cwgm KEwP MAXO vndG kKnK kGmv ZXuW jEEL QYKw ", "URwG Znmd IXWU Teka huZI bRQV Zzdw Goeh hEhq NYeP ", "OWke TmOK euuw mHjR pEwy BSdB dMSq FczC NWmp HJAf ", "IXWU ZMTe jEEL JitV eOsR rtrM NcOY jskd KTVa AWoS ", "RIXI XxNj lKoO tEWd Cwgm WuCy LYBf HvHH lBnj xTVi "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 7, 8, 9, 12, 13, 16, 18, 21, 22, 26, 27, 28, 33, 37, 38, 40, 42, 43, 45, 46, 47, 48};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> knownSpam = {"ulCS XJFD wwuY qdSV uywd CAXh edge aMdL iIeW VmjN ", "kCQb Rbfz FFxJ sbht Nfip miln zzsx YnQD qXXC yXmg ", "hywY UVYs ZzHb zYvS ajId USKF pGVk TVjN Oilf FhGY ", "uCGh VrLd RXDj xzTa sNpV GyqC MtNi vIaG AryW QCBk ", "ulTW wfCW xhTP lKUj vLWI KVAh LDRv BLGC LuOY PmXS ", "HVvQ GFvv LfKO mhgj gWno mHYs mdGx YgeC qLZs Emtv ", "UJXf nsWF efeA hBpa eLlL SgHO CvdE TahK jDjA RKeC ", "YvLE YOIL foyU VWHR gPgs MUzF rbtV Jmtr giro Raxo ", "RfJs NMEs qxUw hFbw flZl JEdn BfAf HUAk hJKk awoq ", "SFTr rcJS Berl XaMr kLAy GFxl RxVw RqOE jALZ rHNk ", "gyrd mhRr DlWt CpFU LNCz Mvxt cOyE Mgkd QRyM GYkP ", "HaSf QTWQ tueq JTjT Panu aDsX CmuL fNxi pqsw eMuj ", "dTcR WekA Phnr xBHX UJtV Olog LcMy KfzF ayrv VXyk ", "FfIE tGUs vYCX xrZn vlqz WpXr Mbtl VCSI vXXR mlPg ", "AhhN NgJJ otvn EKZB nrdD CRNM GSxq czgr eICO rQOO ", "mLVA fFJn smbw wWtn nsUC osPr dihL mSqv lICU bngg ", "FEDZ kBoy JkWp Yzsq pTmE CPAY qUJr cMwA AEGV YHRB ", "MPOJ CxrE CWic nakw LiKq yjKp LbqJ GkAX UUQc dtZe ", "sNTQ ptyV lKJt ehnB wkpJ EQJN VIMy JstQ UdLQ ktek ", "huib Cxus qUeI oqAq TjWE mqOZ EBdf pRsz GIRl kQLn ", "ulCS XJFD wwuY qdSV uywd CAXh edge aMdL iIeW VmjN ", "kCQb Rbfz FFxJ sbht Nfip miln zzsx YnQD qXXC yXmg ", "hywY UVYs ZzHb zYvS ajId USKF pGVk TVjN Oilf FhGY ", "uCGh VrLd RXDj xzTa sNpV GyqC MtNi vIaG AryW QCBk ", "ulTW wfCW xhTP lKUj vLWI KVAh LDRv BLGC LuOY PmXS ", "HVvQ GFvv LfKO mhgj gWno mHYs mdGx YgeC qLZs Emtv ", "UJXf nsWF efeA hBpa eLlL SgHO CvdE TahK jDjA RKeC ", "YvLE YOIL foyU VWHR gPgs MUzF rbtV Jmtr giro Raxo ", "RfJs NMEs qxUw hFbw flZl JEdn BfAf HUAk hJKk awoq ", "SFTr rcJS Berl XaMr kLAy GFxl RxVw RqOE jALZ rHNk ", "gyrd mhRr DlWt CpFU LNCz Mvxt cOyE Mgkd QRyM GYkP ", "HaSf QTWQ tueq JTjT Panu aDsX CmuL fNxi pqsw eMuj ", "dTcR WekA Phnr xBHX UJtV Olog LcMy KfzF ayrv VXyk ", "FfIE tGUs vYCX xrZn vlqz WpXr Mbtl VCSI vXXR mlPg ", "AhhN NgJJ otvn EKZB nrdD CRNM GSxq czgr eICO rQOO ", "mLVA fFJn smbw wWtn nsUC osPr dihL mSqv lICU bngg ", "FEDZ kBoy JkWp Yzsq pTmE CPAY qUJr cMwA AEGV YHRB ", "MPOJ CxrE CWic nakw LiKq yjKp LbqJ GkAX UUQc dtZe ", "sNTQ ptyV lKJt ehnB wkpJ EQJN VIMy JstQ UdLQ ktek ", "huib Cxus qUeI oqAq TjWE mqOZ EBdf pRsz GIRl kQLn ", "ulCS XJFD wwuY qdSV uywd CAXh edge aMdL iIeW VmjN ", "kCQb Rbfz FFxJ sbht Nfip miln zzsx YnQD qXXC yXmg ", "hywY UVYs ZzHb zYvS ajId USKF pGVk TVjN Oilf FhGY ", "uCGh VrLd RXDj xzTa sNpV GyqC MtNi vIaG AryW QCBk ", "ulTW wfCW xhTP lKUj vLWI KVAh LDRv BLGC LuOY PmXS ", "HVvQ GFvv LfKO mhgj gWno mHYs mdGx YgeC qLZs Emtv ", "UJXf nsWF efeA hBpa eLlL SgHO CvdE TahK jDjA RKeC ", "YvLE YOIL foyU VWHR gPgs MUzF rbtV Jmtr giro Raxo ", "RfJs NMEs qxUw hFbw flZl JEdn BfAf HUAk hJKk awoq ", "SFTr rcJS Berl XaMr kLAy GFxl RxVw RqOE jALZ rHNk "};
    vector<string> newMail = {"xBHX HUAk dHkz QhTd YHRB cLEn QDui gyrd oqAq daGK ", "tTlp CxrE UdLQ EVcD eLlL thaA Sfch zzsx mHYs Yzsq ", "SCWd dtZe CpFU kBoy HaSf YnQD GkAX xhTP awoq eLlL ", "nDVa GIRl DlWt nrdD Emtv pqsw eLlL YvLE YOIL pqsw ", "yjKp ulCS FEDZ GQAZ GQAZ mdGx TODz ZErs awoq qUeI ", "JEdn USKF mlPg Oilf MUzF ufEd hxjo VmjN YOIL UJtV ", "AEGV LiKq nxpF ZPjm rmTh aSht pTmE xzTa dxfU fZrQ ", "GkAX mHYs nxpF Mvxt ktek xxnN huib nDVa Mbtl AhhN ", "fFJn Emtv GIRl QYNh NagA RlkD pNCc vPyt rQOO OTBO ", "frUe RqOE wwuY vNGh GFvv vYCX UJXf AryW CxrE yXmg ", "USKF wGfD CAXh vGGQ sNTQ EQJN Yzsq KVAh xBHX osPr ", "GkAX EBdf hFbw osPr CmuL UVYs RXDj mdGx GYkP zzsx ", "frUe VrLd ERub fFJn lKUj Raxo ulTW LcMy aMdL Yzsq ", "mCii dGfM EFvL KzUv CPAY puKH SgHO EPgB ZvVK ywhm ", "Xzqp FEDZ mhRr TjWE pRsz aSht YnQD rbtV qXXC RpwM ", "GYkP usYa bQUt Oilf CPAY mLVA QTWQ puKH mHYs NgJJ ", "ZzHb HaSf BLGC miln AEGV HVvQ AwMn lKUj VCSI rQOO ", "MUzF nakw bwtX giro xzTa WpXr mhRr vIaG aMdL Yzsq ", "QwWZ pqsw wwuY hxjo GYkP QwWZ xxnN UJtV CAXh xxnN ", "OTBO JstQ XaMr SKGf mdGx QCBk fPcG Emtv GSxq Jmtr ", "KfzF huLb qUeI xFtY jpJp Nzev MPOJ ptyV jpJp xyxn ", "flZl nakw fNxi YOIL CmuL RxVw GOUa chEy CDti osPr ", "FEDZ XaMr Raxo GFvv GYkP RqOE qUJr BLGC CpFU ptyV ", "zoBG Berl Emtv tslE QRyM vlqz pTmE uywd LfKO pqsw ", "qdSV QFPS rbtV ViOs yugU iIeW AryW ayrv RqOE EPgB ", "GYkP HWSP dTcR dHkz vIaG NMEs eLlL YvLE wGfD BnvJ ", "mSqv CpFU mLVA NMEs wWtn aDsX mhgj VXyk ZzHb kBoy ", "iEat fPcG QTWQ oqAq FfIE xBHX BfAf pqsw fZrQ rHNk ", "flZl fNxi eICO FhGY dTcR HUAk CvdE Jmtr EKZB ajId ", "KqIw qUeI HVJl xILv Cxmk xxnN GQAZ cuCH Qgoo efeA ", "xBpM qUeI nakw qLZs nxpF eMuj AEGV MtNi EKZB VrLd ", "ThVb KiAd xBpM MHSg Ezfb TjWE vIaG BLGC puKH CvdE ", "RxVw qxUw SKGf nakw TVjN NMEs AwMn rcJS qUeI mqOZ ", "ulCS cOyE HaSf nakw CWic Cxus EQJN VrLd QDui ulTW ", "nrdD rJXU VrLd dtZe zYvS CPAY pqsw rbtV dGfM tueq ", "QYNh FWRU bQUt QhTd cLEn cOyE Atvw EBdf qUJr LiKq ", "NgJJ bngg eqzm Panu YgeC NagA rQOO UJtV rcJS tGUs ", "YHRB xzTa wfCW ehnB vYCX lKJt Smbu AhhN gyrd Olog ", "wfCW edge Emtv tueq nrdD mhgj uCGh edge HUAk hJKk ", "YhoK aDsX JTjT qGgL QRyM Hgsg kQLn Tawk mjEw PhmE ", "edge LiKq lKUj nakw wGfD HaSf dHkz CvdE otvn BWgl ", "GFvv iIeW NgJJ dTcR CWic pRsz qLZs LcMy hywY Phnr ", "szIV ptyV VmjN EBdf FeTa Mbtl tGUs mqOZ hywY JkWp ", "RKeC qxUw CvdE otvn ajId UVYs UJtV Nfip CmuL ulCS ", "Panu szIV dihL YHRB OvMt bQUt xBpM bTir UdLQ fPcG ", "JkWp Panu uywd nsUC eTaG cMwA CmuL GkAX iIeW thaA ", "CDti vIaG XJFD KfzF LNCz lKUj NMEs GSxq ywhm GLpI ", "ihvv Nfip VrLd NgJJ sNTQ Scsy efeA AcLd HaSf JstQ ", "vLWI knMb vlqz SgHO hFbw sNpV QTWQ uywd SiKX oqAq ", "FFxJ LiKq GSxq rQOO dTcR CWic rcJS SouM qUJr dTcR "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 6, 8, 13, 14, 15, 19, 20, 21, 24, 25, 27, 29, 31, 35, 39, 44, 46, 47};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> knownSpam = {"yfjE xORp Regi TCNA eMET SrTK OVxv XApM OSKD pSuz ", "BXvR hhuT NRIJ TDcY eDSo dHGY kAFq bSJR InJh EsfD ", "mtkn ffHH cZVC mBis Imum juYg BfqZ CiWz atbx IOVO ", "gLQl VMxc rIeH WdGQ oqmm WhRM rUwQ IBbq WQZo yBbB ", "XpqZ ekDw pZxs QODR LrSw ZscC Ktug xXpn Geoz xeYt ", "UUwC pooP xJuY hqjM gBaN KAdl bKOh KwrX dWVp ftEG ", "gEld nEyW QVFm apNk uePh dWZB ZkGQ nJkV KRbP LykA ", "rpEU Hdsk nerZ qnPn mFiM aOCh fPht pfyn IpVq HGyc ", "ypKh poED KPht HpwK Vweg hwmX OQNV ZBTp nUEK Gxcv ", "kzje NxAn dFZg PgNL rCtR dVLn zOmA VtPk UMYQ mYMh ", "IxgE IoYc icgt Djnp chab rdJV qMwP tPXv ENul rYmq ", "LCly jSVj Iqey DcyX ugwm bFlS bhsm XTuw XUOo dQHf ", "mEgN YfbN wXmm yzCG okUo qyqP Ylbm VWrH RxSS YuiQ ", "lmgX TVfm DzTr jYNa fGCl oPXf ntLf yEdc nkZc TWab ", "gRyC qKEO tuAk tket sGrI POWd MuAZ NbwV fbAa QslP ", "NqaY LVQr eFjr xojq XYXg RHOz kdMG rGZk Xpyt sRmx ", "atpZ Blnb wqKD vfLO IuQL EbhG XRWa TVqk tYGN wmem ", "PnrO PDLR tXPl ofMB pwdU YJpI GvTl drNs cTfD FzWV ", "NQCY ioNc JujS AAQA gxrq XfCY bsnj ZeYO zsHX WoCs ", "bsEq ZHyx tPqr gCbk NodJ oQZv PETq QTfw YSsl dNrX ", "yfjE xORp Regi TCNA eMET SrTK OVxv XApM OSKD pSuz ", "BXvR hhuT NRIJ TDcY eDSo dHGY kAFq bSJR InJh EsfD ", "mtkn ffHH cZVC mBis Imum juYg BfqZ CiWz atbx IOVO ", "gLQl VMxc rIeH WdGQ oqmm WhRM rUwQ IBbq WQZo yBbB ", "XpqZ ekDw pZxs QODR LrSw ZscC Ktug xXpn Geoz xeYt ", "UUwC pooP xJuY hqjM gBaN KAdl bKOh KwrX dWVp ftEG ", "gEld nEyW QVFm apNk uePh dWZB ZkGQ nJkV KRbP LykA ", "rpEU Hdsk nerZ qnPn mFiM aOCh fPht pfyn IpVq HGyc ", "ypKh poED KPht HpwK Vweg hwmX OQNV ZBTp nUEK Gxcv ", "kzje NxAn dFZg PgNL rCtR dVLn zOmA VtPk UMYQ mYMh ", "IxgE IoYc icgt Djnp chab rdJV qMwP tPXv ENul rYmq ", "LCly jSVj Iqey DcyX ugwm bFlS bhsm XTuw XUOo dQHf ", "mEgN YfbN wXmm yzCG okUo qyqP Ylbm VWrH RxSS YuiQ ", "lmgX TVfm DzTr jYNa fGCl oPXf ntLf yEdc nkZc TWab ", "gRyC qKEO tuAk tket sGrI POWd MuAZ NbwV fbAa QslP ", "NqaY LVQr eFjr xojq XYXg RHOz kdMG rGZk Xpyt sRmx ", "atpZ Blnb wqKD vfLO IuQL EbhG XRWa TVqk tYGN wmem ", "PnrO PDLR tXPl ofMB pwdU YJpI GvTl drNs cTfD FzWV ", "NQCY ioNc JujS AAQA gxrq XfCY bsnj ZeYO zsHX WoCs ", "bsEq ZHyx tPqr gCbk NodJ oQZv PETq QTfw YSsl dNrX ", "yfjE xORp Regi TCNA eMET SrTK OVxv XApM OSKD pSuz ", "BXvR hhuT NRIJ TDcY eDSo dHGY kAFq bSJR InJh EsfD ", "mtkn ffHH cZVC mBis Imum juYg BfqZ CiWz atbx IOVO ", "gLQl VMxc rIeH WdGQ oqmm WhRM rUwQ IBbq WQZo yBbB ", "XpqZ ekDw pZxs QODR LrSw ZscC Ktug xXpn Geoz xeYt ", "UUwC pooP xJuY hqjM gBaN KAdl bKOh KwrX dWVp ftEG ", "gEld nEyW QVFm apNk uePh dWZB ZkGQ nJkV KRbP LykA ", "rpEU Hdsk nerZ qnPn mFiM aOCh fPht pfyn IpVq HGyc ", "ypKh poED KPht HpwK Vweg hwmX OQNV ZBTp nUEK Gxcv ", "kzje NxAn dFZg PgNL rCtR dVLn zOmA VtPk UMYQ mYMh "};
    vector<string> newMail = {"aOCh qBjP BfqZ iHsj ZBTp poED LJSk UUwC hhuT AsrF ", "bSJR rCtR NqaY ENul fjkS eFjr nUEK LykA pSuz xeYt ", "dBXe fQye aOCh qToA yEdc SrTK OrLu Xhsa tXPl mkYZ ", "Vweg IpVq gRyC QTfw BfqZ ZfSw qToA gRyC HEad MRyY ", "pZxs eDSo kzje hqjM dHGY tlqY rCtR dNrX NQCY yEdc ", "ROvh Hdsk XfCY mxkC SrTK rGNi Srfy CUPn lqbA VHbM ", "PgNL bKGq pooP Djnp dWZB bUpQ KUFi tuKx IxgE eDSo ", "oPXf EsfD wTSQ NcgS atpZ xslM rUwQ pZxs CUPn xXpn ", "Iqey Iqey TVfm bSJR oQZv yfjE pfyn aOCh qKEO YSsl ", "WQZo LREy NxAn sQlZ tlqY xBif rOxp QODR EBzd AAQA ", "XRWa hwmX NqaY vfLO gCbk tXPl icgt Ylbm wqKD qMwP ", "RPOC vfLO jRic DMcb xslM kNPG tBeK CahT xJuY UdFe ", "Djnp dVLn dVLn gRyC yEdc pwdU VtPk VkuX nkZc fGCl ", "IuQL Imum OSKD hbpR YfbN BfqZ iTRh apNk ZHyx dVLn ", "icgt LAnY AAQA IxgE dVLn nJkV yKlC wqKD DalY fGCl ", "Regi AsrF IoYc XYXg hqjM IpVq XUOo vfLO dHGY XpqZ ", "UMYQ KRbP hqjM Xpyt lmgX hwmX SrTK LykA ZkGQ PgNL ", "XApM qKEO xORp QVFm rCtR UMYQ icgt OQNV LVQr GvTl ", "EpKc KAdl Oqla eHik CaVq jSVj xslM POWd eFjr yfjE ", "OQNV dFZg PDOD HGyc yXVk MzDs Zjhj eeJp OTph TVqk ", "tPqr UdFe WoCs dNrX Blnb IpVq gxrq Blnb tPXv bhsm ", "icgt Nqob XYXg OSKD gEld ypKh gLQl DQZM fPht Blnb ", "POWd Iqey QODR juYg KAdl fPht Oqla nkZc mtkn PnrO ", "Hdsk DzTr OQNV nUEK Imum pSuz QslP XUOo gxrq DzTr ", "BfqZ NxAn zsHX nEyW rCtR Hdsk BfqZ rUwQ nEyW Ylbm ", "ENul Regi tskx bhsm tPqr CGHA pwdU wmem SrTK VWrH ", "ENul Hsqv yzCG bKGq xXpn rcfd EWnY feeA WwRd tQGD ", "oPXf POWd eFjr AidA rdJV Blnb Blnb xojq bFlS zOmA ", "XUOo PETq mFiM NodJ Regi tQGD KRbP dHGY xJuY okUo ", "oqmm yzCG aOCh YSsl NxAn chab OQNV QVFm VtPk juYg ", "WEHJ Nlhj shmG CaVq Gtjj EpKc TGeL cRVA Tupg hDJM ", "okUo oHLY jYNa PETq rIeH EbhG atbx nEyW eDSo QslP ", "IxOG ypST TQiV shmG CahT GvTl BUPP pwdU XApM rown ", "PnrO PDLR QslP ZscC uePh Gtjj yfjE mEgN CGHA oQZv ", "YJpI KPht mEgN juYg lmgX tket NodJ IqFp hqjM HpwK ", "BfqZ WhRM OQNV WoCs IxgE kAFq KguL ffHH eDSo hDJM ", "LJSk XApM ZHyx NbwV pooP hbpR WsAQ gEld PgNL vfLO ", "iHsj KPht pSuz tket yzCG BXvR TWab xAWY rCtR qMwP ", "loqT yVfL EWnY dQHf NbwV Hdsk ofii oqmm LCly VtPk ", "NRIJ pwdU ioNc IBbq XfCY PDLR AAQA Regi QVFm IoYc ", "PnrO PnrO atbx rGZk IBbq MuAZ Blnb rUwQ Djnp NbwV ", "hqjM PnrO rIeH nUEK DcyX POWd Djnp oQZv apNk xwlg ", "gxrq Blnb AJSH LykA RHOz pfyn rSTk uTaE rVVN bsEq ", "qRUy Jyje XJPj IxOG VWrH grpA WhRM nFfi ehnB oqFl ", "rcfd Nlhj Nlhj gxrq mYMh FzWV icgt rcfd WdGQ KAdl ", "YuiQ xojq hhuT hwmX sRmx ZeYO OSKD mYMh hDJM NwcL ", "mibN Hsqv grpA lmgX Regi lqbA NbwV Nlhj cZVC xJuY ", "tuKx vrQM bKOh tuAk bKOh nerZ rUwQ xeYt WQZo NcgS ", "wFTB mBis KPht KRbP gBaN ENul hhuT rIeH Gxcv NRIJ ", "ZBTp jSVj Gxcv XYXg Imum XUOo UMYQ tPXv atpZ ffHH "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 6, 7, 9, 11, 14, 18, 19, 26, 30, 32, 38, 42, 43, 46, 47};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> knownSpam = {"VxqY tAKM iUrN uOEP bqaI EObi aiOu nDMU rexX lfHP ", "KEGz uxxX AHHY Gzrw ySTF KEhD IjMU FuMZ CIZz eonE ", "JxMu LFAs Nnky faTj HZAC QCRj MFkV MpRo MPiZ ADpS ", "vApV TYhJ izbq mDas Cfnt mijg KVXW PiaN suOB mUPN ", "gCyk nknS fFHi HHBj QNAQ mqXe lEoL hYay tKib sTUO ", "jMSw zdIP hRik ICpF IXme nwEZ aCZk nJKf GPap DYqR ", "BlsG pnKJ PjTz rdyC hrxf WcTS MLeD xjRQ wvyu dRcv ", "Ropq nHBQ EhZj rMVT NQCa ajzB aZgr MXiG mVPz eBwQ ", "NbBV EZXd KJiP TkSY nbut bqsH Gull gErR mGhU ImQR ", "JXSe zFhQ bqUd gBZe hZks aYic iZCV fojq YCaL pnkK ", "fySL dBkS HDOB akRV JFmo JGJd ONjx LSsC BGBz JiGU ", "wHIA epAX PKSg rNDe rJPU cNTv nznA LHUM VPLN ECMr ", "RbLG PZVN rBcm hhqm sBqK lhvR oImz utLt Vlcx DJAh ", "CPll UROq YPND ncdQ vJFv PzLc dgdj NGbe AUWd WWmw ", "XCQl bPMM pbok jruZ fPah nTRZ CDnP wYBU xmng WTDe ", "GGrX Sfic FTPW sWIS WKgb lqpF rGSG ZfCy yNCI wPCo ", "ibQg ckHV uBNV xBBM zWZc yAtL KJJi uMyR SMuX Dcfd ", "ZJnA EJCE XEZl LGEW UCZy mmTt Bevt uguD PmoM OJGy ", "Futn TEkH VTFH uhDS nYRw voxW YsCf bCCu vIwr eHbN ", "KhQe RgQw BXjw YeFj YGgb vbbg wQUI Abnd yPoD zQQg ", "VxqY tAKM iUrN uOEP bqaI EObi aiOu nDMU rexX lfHP ", "KEGz uxxX AHHY Gzrw ySTF KEhD IjMU FuMZ CIZz eonE ", "JxMu LFAs Nnky faTj HZAC QCRj MFkV MpRo MPiZ ADpS ", "vApV TYhJ izbq mDas Cfnt mijg KVXW PiaN suOB mUPN ", "gCyk nknS fFHi HHBj QNAQ mqXe lEoL hYay tKib sTUO ", "jMSw zdIP hRik ICpF IXme nwEZ aCZk nJKf GPap DYqR ", "BlsG pnKJ PjTz rdyC hrxf WcTS MLeD xjRQ wvyu dRcv ", "Ropq nHBQ EhZj rMVT NQCa ajzB aZgr MXiG mVPz eBwQ ", "NbBV EZXd KJiP TkSY nbut bqsH Gull gErR mGhU ImQR ", "JXSe zFhQ bqUd gBZe hZks aYic iZCV fojq YCaL pnkK ", "fySL dBkS HDOB akRV JFmo JGJd ONjx LSsC BGBz JiGU ", "wHIA epAX PKSg rNDe rJPU cNTv nznA LHUM VPLN ECMr ", "RbLG PZVN rBcm hhqm sBqK lhvR oImz utLt Vlcx DJAh ", "CPll UROq YPND ncdQ vJFv PzLc dgdj NGbe AUWd WWmw ", "XCQl bPMM pbok jruZ fPah nTRZ CDnP wYBU xmng WTDe ", "GGrX Sfic FTPW sWIS WKgb lqpF rGSG ZfCy yNCI wPCo ", "ibQg ckHV uBNV xBBM zWZc yAtL KJJi uMyR SMuX Dcfd ", "ZJnA EJCE XEZl LGEW UCZy mmTt Bevt uguD PmoM OJGy ", "Futn TEkH VTFH uhDS nYRw voxW YsCf bCCu vIwr eHbN ", "KhQe RgQw BXjw YeFj YGgb vbbg wQUI Abnd yPoD zQQg ", "VxqY tAKM iUrN uOEP bqaI EObi aiOu nDMU rexX lfHP ", "KEGz uxxX AHHY Gzrw ySTF KEhD IjMU FuMZ CIZz eonE ", "JxMu LFAs Nnky faTj HZAC QCRj MFkV MpRo MPiZ ADpS ", "vApV TYhJ izbq mDas Cfnt mijg KVXW PiaN suOB mUPN ", "gCyk nknS fFHi HHBj QNAQ mqXe lEoL hYay tKib sTUO ", "jMSw zdIP hRik ICpF IXme nwEZ aCZk nJKf GPap DYqR ", "BlsG pnKJ PjTz rdyC hrxf WcTS MLeD xjRQ wvyu dRcv ", "Ropq nHBQ EhZj rMVT NQCa ajzB aZgr MXiG mVPz eBwQ ", "NbBV EZXd KJiP TkSY nbut bqsH Gull gErR mGhU ImQR ", "JXSe zFhQ bqUd gBZe hZks aYic iZCV fojq YCaL pnkK "};
    vector<string> newMail = {"tKib gErR xBBM pcln zIIR YeFj CIZz qqVJ hRik oBKp ", "GSQG YyRN Cfnt haOz bPMM OZzi BgJH xyZn ncdQ hrxf ", "BgJH VRbv zNUK PKSg RAgt rBcm VRbv qHyb IgLy Faqi ", "bPMM aCZk WTDe ibQg MRyb mmTt uCJr HZAC izbq uBNV ", "CDnP RbLG yuju epAX Cfnt JnRZ bDLD ySTF GPap JXSe ", "fFHi YsCf TYhJ VPLN NbBV nbut XEZl JGJd RgQw uOEP ", "UCZy QCGz zNMz ajzB nznA nbut MLeD PmoM WWmw DJAh ", "oImz YGgb ZJnA nJKf Dcfd cNTv WTDe mmTt OJGy PKSg ", "MEzN RgQw FkMY lEoL gErR NQCa hYay VzCp NQFM YeFj ", "EObi VPLN bqaI akRV EObi rdyC MLeD eBwQ nTRZ iUrN ", "uBNV KXha OZzi rGSG ySTF uWQy sEnF aZgr WcTS aYic ", "gGMn RbLG KEGz Gull aiOu KhQe fpTk nYRw dBkS dgdj ", "YGgb lEoL Futn WcTS lqpF vBCK nJKf ilyL ZJnA hJFe ", "Nyua rexX nJKf lscA Gull vApV iVOk PZVN Cfnt zIIR ", "zdIP TkSY iZCV yAtL hrxf gErR tAKM EJCE YsCf FTPW ", "NQCa tfJV WKgb ySTF aZgr FxEA rolp riCj pNjh tTMR ", "FTPW mDas UROq QCRj eBwQ sTUO nwEZ MPiZ tAKM Cfnt ", "MRyb DYqR lhvR hRik zFhQ HRTs CPll QCRj zWZc MMrb ", "wHIA Abnd NQFM MpRo hrxf wQSN HRei qHyb XddP lqpF ", "QKaT FZgQ sEnF xFHj dmJB GaTK MXiG mqXe FTPW mijg ", "fPah Sfic nwEZ nbut EObi PjTz GngK pbok qKUJ yAtL ", "AwcM lhvR mABh mmTt RgQw bCCu FuMZ yAtL iUrN aZgr ", "lEoL KEGz XEZl pnKJ zWZc fFHi gCyk YGgb izbq VPLN ", "NQCa DYqR YeFj zNUK hJFe akRV NvEX TBjl rdyC Nyua ", "xmng CGwD Bevt MPiZ vsRK aZgr PjTz vIwr vBBH oDMX ", "LSsC akRV khzD OJGy nTRZ hrxf pNjh NGYo aGKo mkaP ", "wvyu VYMQ mpvA hhqm Nnky gErR YeFj nHBQ VYMQ jruZ ", "Bevt nrTo WWmw sWIS HZAC nwEZ GqoN NGbe uOEP RgQw ", "ImQR VPLN bqsH nbut PzLc XEZl dRcv XCQl UCZy PZVN ", "Ropq LGEW EObi WKgb fojq eBwQ xsKN PKSg fpTk RgQw ", "fySL HDOB gErR JxMu PmoM rBcm fpTk NbBV zQQg nbut ", "uOEP zdIP IXme nznA wvyu uOEP mUPN PiaN riCj dgdj ", "WKgb xBBM gBZe wQUI HZAC bqUd FuMZ nYRw HZAC mbip ", "ZVyO YeFj YeFj XEZl EhZj YsCf XCQl XGuB VIsH hRik ", "lPtM twsG GPap MRyb ZQAq rNDe Bevt rJPU eaRK JXSe ", "ySTF zWZc ImQR ackX Nnky ImQR nknS NQFM HRTs PlFZ ", "Cfnt MFkV Vlcx lqpF IjMU XEZl CDnP AUWd zFhQ utLt ", "zFhQ mDas WKgb nDMU wYBU MEzN KVXW Bevt rGSG wBFe ", "SMuX xmng haOz MyTl ZVyO wHIA vJFv HHBj VRbv YGgb ", "Dcfd uppm EpBr QKaT njUP gBZe Bevt tTMR tKib VvDh ", "MEzN bOdI Ropq Faqi twsG FZgQ thKB FZgQ suOB mkaP ", "JFmo GSQG dgdj XddP qprD bqUd hYay PiaN YCaL VxqY ", "FZgQ Cfnt MPiZ Faqi hhqm Futn bCCu QKaT wYBU xFHj ", "NGbe PiaN MFkV mUPN ajzB mGhU GGrX OJGy aZgr CIZz ", "WTDe fySL KEhD Vlcx TkSY KEGz bqaI PiaN GGrX wQUI ", "nznA ibQg wPCo lPtM otJs EObi iZCV tfJV bqaI ckHV ", "lqpF sBqK lqpF voxW sWIS BXjw Nnky PKSg vJFv zFhQ ", "wQSN EZXd nztv Dzgt BgJH WcTS fpTk PlFZ vbbg iZCV ", "fPah vBBH Dcfd CPll VPLN EhZj uguD wHIA sEnF FuMZ ", "mGhU bqaI VPLN PmZP ONjx nztv fySL UoWW Bevt xBBM "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 8, 10, 12, 13, 15, 18, 19, 23, 24, 25, 33, 34, 35, 38, 39, 40, 41, 42, 45, 47, 49};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> knownSpam = {"osGU Acin vyDj VpRj mMtE YsRo mLZA CrOU frSQ zOFe ", "ZXtI zjfg RqIT AjkQ Mylw eaAq yTXG xSFT fFBX Ruab ", "sBzx Eocf Cszf WnQW tRVf jUeP tyVU EfeR faEd lDSY ", "IfWA LNtp kAYX mAkW jszJ SCUR Dcqc tnpA GYWf TEfj ", "rBZh wtzj KHBT JzWQ CoBp mVAf ROPx giaL rUCO rQor ", "IkNx kpKa ZmFi vdxc nKqi Ftqq KoxV qANe fHGF ntnG ", "txWx suTM KsVa uxfg qTMP VmwL hIUg iSZt ZGkW BUeP ", "NPGE vXiw yGhE cdrj sGLx phYa pYEa CFPg IMbd onqj ", "ebPA fjAS DZLh kiAK VUwJ vzMw fuqQ BlOU Sque iOWP ", "iPBQ vQlx liGW dfDy SeKK zcYg ubOC CSVq WKHR PITu ", "FBUC SwmH NUbD wIfz GVIK pIKF ZmvZ Glfm SWkR oHzL ", "JYVO KXzs bZGz lsvu UMXc qNIl CxBa SzdB IVVs sHIo ", "nKaU VZut ooBt yNlO jJEK rNwW MrdU eoDT UtLH BMVI ", "kKgd GIwW zHzM ZdkW MDvT EnSs lyMF Ndqs kxYn uYIx ", "MKfR QzOM stZR ions usvh JPww ItKo WNVy JPZV aesl ", "MxRd gTQG XwDA yHXS MQoA fFkm OGrP sOME QWOo TbXf ", "ctta iILr wvEe rFXk MCDs bRsG MdQm ZwPz xJzG vXgm ", "wRAb MUoZ dkkI ldmv JxfG sAEJ bNLB jMSU NEuT lkhB ", "XweW Iudu JDYV rJWi EAfv IWyV lVRp iGkX wptj XtFc ", "SntD eLiq KQZb JKPo GfNi Dxwc akSm CiCI LQAb FzaA ", "osGU Acin vyDj VpRj mMtE YsRo mLZA CrOU frSQ zOFe ", "ZXtI zjfg RqIT AjkQ Mylw eaAq yTXG xSFT fFBX Ruab ", "sBzx Eocf Cszf WnQW tRVf jUeP tyVU EfeR faEd lDSY ", "IfWA LNtp kAYX mAkW jszJ SCUR Dcqc tnpA GYWf TEfj ", "rBZh wtzj KHBT JzWQ CoBp mVAf ROPx giaL rUCO rQor ", "IkNx kpKa ZmFi vdxc nKqi Ftqq KoxV qANe fHGF ntnG ", "txWx suTM KsVa uxfg qTMP VmwL hIUg iSZt ZGkW BUeP ", "NPGE vXiw yGhE cdrj sGLx phYa pYEa CFPg IMbd onqj ", "ebPA fjAS DZLh kiAK VUwJ vzMw fuqQ BlOU Sque iOWP ", "iPBQ vQlx liGW dfDy SeKK zcYg ubOC CSVq WKHR PITu ", "FBUC SwmH NUbD wIfz GVIK pIKF ZmvZ Glfm SWkR oHzL ", "JYVO KXzs bZGz lsvu UMXc qNIl CxBa SzdB IVVs sHIo ", "nKaU VZut ooBt yNlO jJEK rNwW MrdU eoDT UtLH BMVI ", "kKgd GIwW zHzM ZdkW MDvT EnSs lyMF Ndqs kxYn uYIx ", "MKfR QzOM stZR ions usvh JPww ItKo WNVy JPZV aesl ", "MxRd gTQG XwDA yHXS MQoA fFkm OGrP sOME QWOo TbXf ", "ctta iILr wvEe rFXk MCDs bRsG MdQm ZwPz xJzG vXgm ", "wRAb MUoZ dkkI ldmv JxfG sAEJ bNLB jMSU NEuT lkhB ", "XweW Iudu JDYV rJWi EAfv IWyV lVRp iGkX wptj XtFc ", "SntD eLiq KQZb JKPo GfNi Dxwc akSm CiCI LQAb FzaA ", "osGU Acin vyDj VpRj mMtE YsRo mLZA CrOU frSQ zOFe ", "ZXtI zjfg RqIT AjkQ Mylw eaAq yTXG xSFT fFBX Ruab ", "sBzx Eocf Cszf WnQW tRVf jUeP tyVU EfeR faEd lDSY ", "IfWA LNtp kAYX mAkW jszJ SCUR Dcqc tnpA GYWf TEfj ", "rBZh wtzj KHBT JzWQ CoBp mVAf ROPx giaL rUCO rQor ", "IkNx kpKa ZmFi vdxc nKqi Ftqq KoxV qANe fHGF ntnG ", "txWx suTM KsVa uxfg qTMP VmwL hIUg iSZt ZGkW BUeP ", "NPGE vXiw yGhE cdrj sGLx phYa pYEa CFPg IMbd onqj ", "ebPA fjAS DZLh kiAK VUwJ vzMw fuqQ BlOU Sque iOWP ", "iPBQ vQlx liGW dfDy SeKK zcYg ubOC CSVq WKHR PITu "};
    vector<string> newMail = {"iOWP ItKo ZKuw qNIl VmwL pYEa lVRp tyVU iILr CiCI ", "WnQW KsVa Cszf zswU BpGn mMtE qNIl NEuT NEuT CoBp ", "fxbS wnRZ UTYh XBqe cnVZ JtHz YYvu wnRZ ZXtI aivm ", "ZRRS vdxc kpKa yZCD rQor SFMp CiCI fFMg QzOM KdzC ", "wRAb Dcqc DZLh Ftqq bRsG mMtE QWOo FBUC OGrP lDSY ", "CFYY MfTK giaL zHzM OwFr BhTu iILr SbDy evKV eoDT ", "hJzL ZXJg ZRRS Ruab FnVB onqj yNlO VZut kQgu ZdkW ", "SntD Jwzy Qmrv GfNi TbXf OGrP AbDS wnMW PVkV YAMz ", "BUeP wRAb sGLx CxBa CSVq ebPA xJzG ooBt aqwB oHzL ", "yxDW NPGE ZmFi sENc HhVx fuqQ KXzs nZgG xSFT YsRo ", "fzRw stZR Iudu uYIx mLZA Iudu MUoZ xJzG usvh Sque ", "CYPR xJzG eLiq ntnG ylGc sOME VpRj mMEJ ISRQ bNLB ", "JKPo OGrP wIfz UtQA CoBp UcyU VZut wvEe ZmFi esoq ", "wtzj NUbD eLiq iSZt zcYg faEd JYVO lVRp JPww SWkR ", "PILH VoKU Qmrv eaAq ISRQ Eocf sENc JzWQ DiDa Kwmc ", "vXiw vXgm CoBp ZdkW ZNEV WeYZ jMSU Dapa qbaT slvH ", "Ftqq WnQW SntD uxfg fjAS dfDy vXgm UMXc LNtp YsRo ", "UtLH oHzL FnVB SCUR GAJf hJzL eoDT Ruab JKPo Acin ", "OGrP zrEh cdrj XwDA lyMF QlXT VZXW yTXG cdrj ClXJ ", "zrEh osGU XweW zcYg kSMp uxfg XwDA TFua sENc ubOC ", "swdY SzdB wptj BLBS gIMv ZmFi vzMw MxRd qNIl lVRp ", "usvh RqIT gTQG UtLH jMJR faEd TCSU ntnG fHGF Aeis ", "WFZW ZmvZ vyDj evKV TMXT MKfR mVAf zOFe rQor ZXtI ", "TEfj Ruab Knsj aqwB sOME CSVq KQZb VPqc lVRp MCDs ", "ubOC UtLH lyMF eoDT NPGE CiCI XtFc fuqQ rFXk jMSU ", "BpGn kKgd cdrj fFMg FmtW lVRp YAMz rLLL yTXG DNyY ", "IVVs XtFc Cszf WnQW ldmv suTM ZdkW kKgd Acin kSMp ", "jUeP vQlx osGU frSQ iSZt NPGE Yfzr TEfj lkhB ubOC ", "qTMP jJEK ooBt mLZA AjkQ Iudu PITu sOME TEfj jUeP ", "tnpA zswU CrOU giaL iGkX mVAf VUwJ IMbd kpKa nZMH ", "wIfz GYWf zHzM Knsj SwmH mAkW zjfg jJEK OIMV CYPR ", "JzWQ uYIx ISRQ PVkV wqIQ SeKK rFXk FzaA qKIu MPNJ ", "SZzD Dcqc Ndqs Ndqs ZyVX fFBX ZwPz ions vQlx suTM ", "vXiw GfNi xSFT SCUR zHzM CoBp giaL Acin onqj kxYn ", "PVkV UEHB eBux LQAb UtQA WNVy AzFR kSMp ZyVX iRJT ", "MKfR nVYW ions zrEh oHzL sBzx SWkR kKgd Dxwc RqIT ", "ubOC suTM VmwL lsvu rQor jJEK KQZb nVYW yTXG sAEJ ", "iOWP mMtE uYIx BglC ItKo rNwW xjJV WNVy KXzs Ruab ", "EvyX GVIK KHBT XBqe wptj XToe TEfj QWOo TCSU iOWP ", "IkNx lDSY IkNx vXgm ZmFi fHGF Dcqc ZmvZ IWyV ZmvZ ", "xtmN GYWf pjPo fLqh Knsj BlOU YsRo CoBp TEfj MDUM ", "IMbd Ftqq pIKF akSm yTXG GfNi onqj lVRp jszJ fuqQ ", "Iudu tRVf zjfg IWyV uxfg IWyV uYIx CxBa pIKF bNLB ", "VmwL aesl rFXk oHzL Glfm qNIl SwmH ions yHXS JPww ", "fFkm wtzj stZR IWyV eLiq wIfz wtzj YsRo rQor SCUR ", "jMSU EnSs oHzL FzaA jJEK kpKa MQoA Qzvs eaAq TEfj ", "rBZh akSm jIay zcYg jJEK FBUC SwmH VPqc BMVI omlW ", "QlXT mAkW jMSU wptj KoxV suTM ubBz Iudu rwFR SWkR ", "suTM MQoA CoBp iOWP zHzM suTM akSm SCUR XweW UtLH ", "fjAS liGW rLLL DsUo MfTK mAkW JYVO Vuex WNVy stZR "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 7, 9, 11, 12, 14, 15, 17, 18, 19, 20, 21, 22, 25, 31, 34, 38, 40, 47, 49};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> knownSpam = {"KEgZ zjBE iLwI PuOe STeZ IiUH GHjj hZki mFQH rdyJ ", "YrmS GySg PtBV DkqX IQpW TUdj MvrJ Rfxu GtvA aoRN ", "lNmY LpWA fARK Ftts ahzG nvyC CeGB HUmC gXZn NAJH ", "zSOV pxXZ BBxT nJud LuTG Fwdu chfO jOJr xLSf RgjB ", "Orig cDXQ xYGW VhSe xJfR TTUa jmhy nBpp whds HaDj ", "kBLa NWJe fTQz syxl jhhY WFmp fUpg eRhS oRGa PFba ", "PwAg RUoz TiXF ejws HbIn ieVE JzEF pbaF PkSh sUdd ", "VNkS QcBv MoBW YKnm YIjA hjAP RvWy djYG ofvn monx ", "GABh yALn PzlX GOHO EodP Gdlo IYnz SWsA COmz iNRw ", "chFZ EQhH cTBH IBoQ yvKH WvbB uXht TBqp iaTr rwht ", "pGzT ckep wVLP EfoL kXHD RHoV ddrQ szHO XPkO ANyR ", "Lmaq TdzQ ClHE IcRl dHVZ loof WqDx edft YFAl jehs ", "emNJ hHIs KcaS YkmP HUYn JsLY ybXQ ExEA LVst WBZX ", "UPEi DfHr Ypnm JGZH hnBm yPuY msvZ JOoi vppy UFtn ", "zFQU myFR teAs iIFY pgjR AFxE UVnm qtWi TfPx EUIj ", "iomB ibLb pUZM Jbhm aUYV dXZJ wbMK Hucp Uhau ohDl ", "rCFz DECA gavw JcmE CHUn kmTv DXcj SuNg VSke yLqd ", "ACgi rAdW Bhqb ZcjM Ylcr qlJO tedc OVXW BBgw Nryg ", "FxxX oxOU VZLj HqQz yIMy HpvP EqBS psZJ XcnP shDl ", "woXi VbQd QMYr OQpH jvAD tATa RynO dPWl kCpN BqGJ ", "KEgZ zjBE iLwI PuOe STeZ IiUH GHjj hZki mFQH rdyJ ", "YrmS GySg PtBV DkqX IQpW TUdj MvrJ Rfxu GtvA aoRN ", "lNmY LpWA fARK Ftts ahzG nvyC CeGB HUmC gXZn NAJH ", "zSOV pxXZ BBxT nJud LuTG Fwdu chfO jOJr xLSf RgjB ", "Orig cDXQ xYGW VhSe xJfR TTUa jmhy nBpp whds HaDj ", "kBLa NWJe fTQz syxl jhhY WFmp fUpg eRhS oRGa PFba ", "PwAg RUoz TiXF ejws HbIn ieVE JzEF pbaF PkSh sUdd ", "VNkS QcBv MoBW YKnm YIjA hjAP RvWy djYG ofvn monx ", "GABh yALn PzlX GOHO EodP Gdlo IYnz SWsA COmz iNRw ", "chFZ EQhH cTBH IBoQ yvKH WvbB uXht TBqp iaTr rwht ", "pGzT ckep wVLP EfoL kXHD RHoV ddrQ szHO XPkO ANyR ", "Lmaq TdzQ ClHE IcRl dHVZ loof WqDx edft YFAl jehs ", "emNJ hHIs KcaS YkmP HUYn JsLY ybXQ ExEA LVst WBZX ", "UPEi DfHr Ypnm JGZH hnBm yPuY msvZ JOoi vppy UFtn ", "zFQU myFR teAs iIFY pgjR AFxE UVnm qtWi TfPx EUIj ", "iomB ibLb pUZM Jbhm aUYV dXZJ wbMK Hucp Uhau ohDl ", "rCFz DECA gavw JcmE CHUn kmTv DXcj SuNg VSke yLqd ", "ACgi rAdW Bhqb ZcjM Ylcr qlJO tedc OVXW BBgw Nryg ", "FxxX oxOU VZLj HqQz yIMy HpvP EqBS psZJ XcnP shDl ", "woXi VbQd QMYr OQpH jvAD tATa RynO dPWl kCpN BqGJ ", "KEgZ zjBE iLwI PuOe STeZ IiUH GHjj hZki mFQH rdyJ ", "YrmS GySg PtBV DkqX IQpW TUdj MvrJ Rfxu GtvA aoRN ", "lNmY LpWA fARK Ftts ahzG nvyC CeGB HUmC gXZn NAJH ", "zSOV pxXZ BBxT nJud LuTG Fwdu chfO jOJr xLSf RgjB ", "Orig cDXQ xYGW VhSe xJfR TTUa jmhy nBpp whds HaDj ", "kBLa NWJe fTQz syxl jhhY WFmp fUpg eRhS oRGa PFba ", "PwAg RUoz TiXF ejws HbIn ieVE JzEF pbaF PkSh sUdd ", "VNkS QcBv MoBW YKnm YIjA hjAP RvWy djYG ofvn monx ", "GABh yALn PzlX GOHO EodP Gdlo IYnz SWsA COmz iNRw ", "chFZ EQhH cTBH IBoQ yvKH WvbB uXht TBqp iaTr rwht "};
    vector<string> newMail = {"BMZt RUoz TiXF BIEn bENP RKTP TdzQ WYKh bqGJ qohn ", "IYnz ckep jtsL FvDc TADQ Fwdu FwkY XouL RgjB szOo ", "vwkD syxl shDl monx szHO TsMR uXht qAzq KfzN Ajru ", "Cpjt rcSK PuOe ibLb ofvn taMd emNJ FxxX GFOo QcBv ", "emNJ PFba EUIj GABh TiXF HaDj CHUn tedc zFQU XcnP ", "aoRN Uhau JOoi ybXQ cnHO LsJs hHIs fbCT TBqp Lmaq ", "oxOU QMYr IsdZ rdkA MoBW HpvP vTyK kCpN NJhO nvyC ", "IiUH DfHr zSOV dPWl cDXQ EUIj xYGW JcmE DECA iSeM ", "Ylcr Hucp xLSf iNRw GABh LVst COmz EQhH VZLj UFtn ", "RvWy hnBm lyrB Lmaq HUmC TTUa jehs ANyR xYGW OVXW ", "vwkD YrmS fUpg oRGa ckep yIMy YIjA UVnm IiUH WFmp ", "LpWA pbaF ZYRg nBpp eRhS RvWy gXZn MvrJ atTf lXdw ", "fUpg TTUa UaeV dPWl VRdY VSke Orig tYGp qohn TADQ ", "sUdd TTUa yvKH BBgw yPuY XPkO xJfR PuOe SWsA ZcjM ", "yIMy sUdd JGZH TUdj ddrQ PzlX KcaS WqDx EqBS GySg ", "nBpp xYGW ahzG PFba rXWN Uhau YFAl AmpH vIyu fARK ", "rAdW xJfR XPkO cSDb monx yPuY vTyK CNmS IIxA SuNg ", "JkUd IBWg ACgi IIxA UVnm lXdw WWHD DVRd xLSf GHjj ", "IYnz irYM BBgw qtWi pgjR iNRw dueH emNJ IWes IQuL ", "djYG OVXW ExEA Orig iNRw QMYr Rfxu huAd iIFY LtDd ", "AFxE szOo jOJr IcRl iNRw bbHh CHUn ZYRg mCbB yvKH ", "jehs VOGl SWsA DkqX ohDl ZcjM IIxA xBez yPuY sUdd ", "eRhS gavw mygw EfoL cDXQ myFR IiUH fbCT GUgo jmhy ", "eRhS KPxi BGjy RfjV iIFY Ajru EhOg TdzQ ybXQ BGjy ", "XPkO yALn DECA szHO iomB iIFY tATa NMtR pUZM Orig ", "RHoV Gdlo loof STeZ vMvH iaTr nBpp RHoV CHUn VNkS ", "RUoz nJud NAJH JGZH GtvA PuOe ieVE woXi szHO VNkS ", "GABh rXWN YrmS YrmS CHUn iLwI iIFY iMsI hZki YYSf ", "CtLT UaeV kXHD mFQH iLwI ckep KfzN msvZ wCGI ClHE ", "YvuS qlJO zFQU DkqX xYGW UPEi ckep whds woXi rwht ", "woXi iaTr huAd SuNg kjmj ieVE jvAD IBoQ myFR pgjR ", "djYG WBZX MoBW PwAg cTBH jehs syxl shDl CHUn ExEA ", "ybXQ ddrQ vppy LsJs NAJH vMvH DkqX WvbB ZYRg hjAP ", "xWZY VSke pxXZ pbaF PtBV kCpN rXWN TADQ IBoQ BqGJ ", "XLEr Bhqb tWpN whds rCFz yvKH Kjtm cDXQ SuNg djYG ", "oxOU JsLY qlJO iomB aUYV wbMK ohDl TTUa PkSh HUYn ", "cTBH yLqd DECA shDl ckep zFPW RynO JcmE MvrJ qlJO ", "HbIn xcPv LVst JGZH DfHr yvKH RynO GySg LuTG iNRw ", "Evni ANyR xoRD aoRN RynO Lmaq iaTr DECA kBLa FKPL ", "wVLP LtDd xYGW vwkD NoOc TfPx iLwI tATa lyrB YKnm ", "iNRw ahzG BBgw yALn jehs JGZH EqBS ieVE yALn aoRN ", "JcmE hHIs EhOg iNRw VNkS htqE rvOF CNmS jvAD tATa ", "YIjA bUPp xcPv zjBE bUPp aoRN RHoV PfgD YPgK TGfB ", "uLrq ofvn pgjR IBAs dbYw IcRl EqBS QzvH LgDV dPWl ", "EhOg AFxE VrXE yLqd PkSh loMJ GABh mFQH rXWN neWd ", "djYG DkqX JOoi qjep htqE JsLY VOGl jtsL ISiR jehs ", "gavw rAdW EQhH RfjV yIMy SWsA WFmp qlJO OVXW VSke ", "jhhY eRhS HaDj WWHD VNkS sUdd hQQg Nryg neWd BIaU ", "xWZY KlWa TWzu SemO LVst rvOF ISiR myFR WqDx FvDc ", "GABh wCGI jvAD cFRt nJud eOUV ZEzT wJnx UaeV KrOY "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6, 11, 12, 15, 16, 17, 18, 20, 21, 22, 23, 27, 28, 33, 34, 38, 41, 42, 43, 44, 45, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> knownSpam = {"Fitv UMep WCLJ SRZJ jOLg VYmB ERJv yPpJ lMVs Twia ", "wbID eyTw AUSd WHvc yatO aBYm HCIi HINj LAzS hKwz ", "fSRz WdQz DWQp svmv zAWV GQLF Ndqq OJwX QHGa zeUY ", "ZDGV oBEW thXU GPxT EFkq KNrr bcre TDrY SrEd iOtw ", "tyfM hatC SspH rLtx YNXW pAxG dGRD LKoM MWDs mplO ", "uUWQ Wiem UhiK xwmk upAw RPDc oGNJ lLzm grBK IQPh ", "ZtYg nweK ZArv STVV zKva yZpz sVzt HaPE hkxe HAVa ", "eWpq pqqO Upkx xOCl SLNJ hDVg rsyU xXUF toDe hJjM ", "GYYs PrGP XRah FsjE jmRL Weau XSvS okaH zGjL OwOi ", "tnSV LREF ltcz Elmf SPaX iDRO GJZv clAp GYxW jxUX ", "ZziH lfCh ssBA xFuO AWKg EFVV VcXg CFPN nEbQ gVRf ", "kVaT mCbP vATt FsGq udkn iVSk MVPK xmzG ixTV KwjU ", "Vdqr lXqP xhAS NoXv iKKI QLNG GAHd LpmS MRBC EKIZ ", "CUku pmAv HTkP VEdC gkad jFcU mqzx cNyY NLCW gNkQ ", "CHlf koZn UTQi pRyH auIp aXQH ySYj lbPZ fqCD qQTg ", "nhGf NNaL Upsh ThAj CdVh wlNX yOac doNi HEeh vBiP ", "EAfm FKzz QnlX BGqu nxAt HPWh uBaL vkwE WzdA qjas ", "zcke sXOl mXqL nmKk XLsH NyWd XKHC pDLC BKSF WnRx ", "bGnS FgZQ ecKK qFTL Bont qgoI hOEl xPgR HHTp RaTt ", "Hhrz srbi elPl lUYj rXIu fjVG ZRnp nAJW CpXQ Bsqq ", "Fitv UMep WCLJ SRZJ jOLg VYmB ERJv yPpJ lMVs Twia ", "wbID eyTw AUSd WHvc yatO aBYm HCIi HINj LAzS hKwz ", "fSRz WdQz DWQp svmv zAWV GQLF Ndqq OJwX QHGa zeUY ", "ZDGV oBEW thXU GPxT EFkq KNrr bcre TDrY SrEd iOtw ", "tyfM hatC SspH rLtx YNXW pAxG dGRD LKoM MWDs mplO ", "uUWQ Wiem UhiK xwmk upAw RPDc oGNJ lLzm grBK IQPh ", "ZtYg nweK ZArv STVV zKva yZpz sVzt HaPE hkxe HAVa ", "eWpq pqqO Upkx xOCl SLNJ hDVg rsyU xXUF toDe hJjM ", "GYYs PrGP XRah FsjE jmRL Weau XSvS okaH zGjL OwOi ", "tnSV LREF ltcz Elmf SPaX iDRO GJZv clAp GYxW jxUX ", "ZziH lfCh ssBA xFuO AWKg EFVV VcXg CFPN nEbQ gVRf ", "kVaT mCbP vATt FsGq udkn iVSk MVPK xmzG ixTV KwjU ", "Vdqr lXqP xhAS NoXv iKKI QLNG GAHd LpmS MRBC EKIZ ", "CUku pmAv HTkP VEdC gkad jFcU mqzx cNyY NLCW gNkQ ", "CHlf koZn UTQi pRyH auIp aXQH ySYj lbPZ fqCD qQTg ", "nhGf NNaL Upsh ThAj CdVh wlNX yOac doNi HEeh vBiP ", "EAfm FKzz QnlX BGqu nxAt HPWh uBaL vkwE WzdA qjas ", "zcke sXOl mXqL nmKk XLsH NyWd XKHC pDLC BKSF WnRx ", "bGnS FgZQ ecKK qFTL Bont qgoI hOEl xPgR HHTp RaTt ", "Hhrz srbi elPl lUYj rXIu fjVG ZRnp nAJW CpXQ Bsqq ", "Fitv UMep WCLJ SRZJ jOLg VYmB ERJv yPpJ lMVs Twia ", "wbID eyTw AUSd WHvc yatO aBYm HCIi HINj LAzS hKwz ", "fSRz WdQz DWQp svmv zAWV GQLF Ndqq OJwX QHGa zeUY ", "ZDGV oBEW thXU GPxT EFkq KNrr bcre TDrY SrEd iOtw ", "tyfM hatC SspH rLtx YNXW pAxG dGRD LKoM MWDs mplO ", "uUWQ Wiem UhiK xwmk upAw RPDc oGNJ lLzm grBK IQPh ", "ZtYg nweK ZArv STVV zKva yZpz sVzt HaPE hkxe HAVa ", "eWpq pqqO Upkx xOCl SLNJ hDVg rsyU xXUF toDe hJjM ", "GYYs PrGP XRah FsjE jmRL Weau XSvS okaH zGjL OwOi ", "tnSV LREF ltcz Elmf SPaX iDRO GJZv clAp GYxW jxUX "};
    vector<string> newMail = {"SsyZ SLNJ yOac qXMM QHGa XRHX VEdC dahM STVV SLNJ ", "CpXQ KwjU ZRnp jmRL tnSV WCLJ FsjE ZziH XKHC mXqL ", "PrGP LpmS LAzS kbCS Ndqq fSRz ITgW pRyH bwsb SRZJ ", "ioYi yCJw UYud QHGa XmST ZArv tbiR GPxT jxUX nxAt ", "hobe KkOU rsyU HaPE hobe qdgP pqqO mLub mLub nhGf ", "FDHg GHKR qgoI nZxH RaTt NyWd UTQi ItYt upAw AUSd ", "rZIB okaH ZDGV NQsF xPgR IQPh HINj ltcz DWQp mCbP ", "QHGa Ndqq TDrY eyTw tOKQ BGqu mVWO qgoI qJFk yCJw ", "VfGZ iKKI ItYt OJwX aMVR eyTw Fitv borW Ytiq nShx ", "TDrY DpKM ioYi ERJv ToiF oNdx DpKM aXQH FDHg elPl ", "iDRO sXOl NLCW zAWV Twia clAp rXIu qQTg NoXv xOCl ", "yatO yPpJ hatC wlNX WHvc HEeh WdQz IYdZ qQTg SPaX ", "Upsh AWKg hKwz FsjE yatO LREF ecKK ugry aCfZ srbi ", "nAJW grBK yWii pDLC cxzs tiVa qFTL tiVa GYxW nAJW ", "qMof ERJv PAbe mplO qJFk hOEl jmRL SsyZ XyQw hdIA ", "UMep SrEd ERJv Hhrz nAJW xIti GAHd HaPE qgoI aMVR ", "koZn lbPZ rLtx tmOq GYYs SsyZ okaH tnSV Bont VEdC ", "vATt fwpt yHWj ZtYg rZIB ZArv dNxV qMof Dqms ERJv ", "tyfM cnpD aMVR bQEf mCbP wbID BGqu KkOU sTrM thXU ", "dGRD iOtw ssBA YfhS hkxe hdIA WrHB gVRf ItYt Hhrz ", "pmAv SrEd iDRO sTrM HHTp obqO PAbe UTQi doNi HAVa ", "qXMM HaPE OwOi RPDc dNxV KNrr zhIX VyWJ WrHB aBYm ", "ZDGV FsGq iDRO XLsH BKSF zeUY pqqO qjas yCJw PAbe ", "xOCl VfGZ RrTq UTQi toDe xOCl ZArv mCbP xmzG rZIB ", "Fitv PoOR SrEd GJZv XKHC Dqms lbPZ yOac WnRx maNp ", "FsjE fOOI xufn lXqP vBiP gkad WzdA CdVh swRR MVPK ", "doNi eyTw fOOI Weau zKva fwpt mVWO EFkq GPxT ecKK ", "XyQw okzo hrhd XLsH qFTL FgZQ LpmS Twia xPgR SspH ", "bcre qxez dXwa mXqL LKoM jFcU fWBq rPkK qFTL YjRk ", "MWDs BtTS nxAt hrhd VPPm upAw PjhR hkxe mqzx HhgY ", "Fitv XmST NoXv elPl wlgf TxQc NoXv Bont QLNG ZRnp ", "Bsqq AbFD STVV hDVg CUku OOLy pAxG SspH SPaX UMep ", "yatO VEdC FpPm AWKg IMrx Elmf IFLI fSRz GPxT kbCS ", "FsjE TDrY SLNJ iVSk nhGf ssBA bcre grBK LKoM DpKM ", "QnlX gNkQ jOLg YNXW EKIZ ltcz zeUY FJbr STVV BGqu ", "UTQi iXpz pRyH qdgP eWpq iRfa PVWr aMVR GQLF SxlX ", "OwOi tnSV sVzt sixs ixTV NLCW vkwE OwOi EFVV iOtw ", "lLzm uUWQ HTkP sVzt WdQz grBK NQsF yOac qQTg Upsh ", "iKKI EFVV ssBA obqO zlsQ Sqmr BGqu mVWO hoVj nAJW ", "XLsH SOqD FgZQ MWDs qgoI MWDs ZhJs ecKK oVPN yPpJ ", "UTQi ERJv tyfM srbi RaTt eWpq Elmf pmAv jFcU iOtw ", "EKIZ tyfM ecKK MRBC gNkQ eWpq bGnS VcXg yPpJ HTkP ", "sTrM YjRk nEbQ ZtQi tyfM UMep LqVY lXqP XTzX zKva ", "AUSd fYEF ngQt Iqha nxLk aXQH GYYs DPGw EAfm LqVY ", "ASLM tmfg SwpJ mCbP fqCD qQTg FKzz NxYF hJjM lbPZ ", "WHvc nEbQ FsGq QHGa lUYj hPFM qMPp rnUf CUku rLtx ", "OwOi Ndqq uUWQ zAWV iVSk LAzS HAVa iVSk GQLF upAw ", "XRah udkn PrGP cNyY iDRO toDe RaTt sXOl DPIy aXQH ", "IFLI ZtQi vkwE xFuO VYmB XTzX MRBC Ljxl ToiF svmv ", "bcre bcre ThAj zWBS SPaX FXDw aCfZ QLNG NxYF borW "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 7, 8, 9, 13, 14, 17, 18, 19, 20, 21, 24, 25, 26, 27, 28, 29, 30, 32, 35, 38, 39, 42, 43, 44, 45, 48, 49};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> knownSpam = {"bAyI cbdZ XzyR CJgz nbta oEGt DKeQ TPXG NNYf MOrV ", "gXwc yOQw KBPf jwlF CZcC nPAU GZJr mKRC dwix ybIe ", "BlAa pIhv Vxzt OYWf Srzd EGDl NilP oUoq GJKf PFNn ", "yVJe kuUo RRNg pXdJ IpUT Gagw LdcZ nKpU zlUB txuT ", "MwOV FRDX WjjY nBEP bahV zMBX iPnp uwgv RMYY AXZH ", "TTGb Opsw akHC JfWL tNqn FATN SEzk mSrA YLxU dNor ", "syGp byyV fTVj oExQ VEBS kWCb zgwK oJdr lZke synd ", "QCJQ Btkl Qyrq YKdn uuEW BfOF GxyA kqLi hmEm areM ", "KQqT IPrx kcLY dlqZ ZdlY nTYl cvEv SphA PGgq fkWV ", "VXDT ZnnW EKAe eFxi mEgh Jcwy sZDW UuFK tOuw AeYp ", "WwSl LLaQ IBXs cvfO Lles dpUR AyGu BSNd jSti sWzs ", "xQnu NbrT Gmlo CQcK GGaS qLjj TJsJ DCRB UTTR tgWK ", "fjwF pUTA EQys eoYL Scch iiGA DyQt lyFe Asrs fkaY ", "saHw dlKs Uwzu wbsJ CmIL EEVk EHOE hSmW Ygvo sUPr ", "SRiq xAJz HDsH aWBc LKij pXOV mHsz dbBk yean NfzP ", "fsBI PNNt xhCi xeuW YPgH emPC WMhp pdVx HCqX vZks ", "SxxI YVao dLdN xKNS VuBG TVfw VRyo qyxB mSVP Kheg ", "KIqR UzbD DNdc dNZR rUXu MHFD SMZk rtqa xuny qJZq ", "gVhP FRUD gEQG CRtr VyVa DWWN josE jbkf MWFg FqWD ", "klKk OPWN OFdS Pbfi pPhR nhuh bHqX QEtZ LebH CSes ", "bAyI cbdZ XzyR CJgz nbta oEGt DKeQ TPXG NNYf MOrV ", "gXwc yOQw KBPf jwlF CZcC nPAU GZJr mKRC dwix ybIe ", "BlAa pIhv Vxzt OYWf Srzd EGDl NilP oUoq GJKf PFNn ", "yVJe kuUo RRNg pXdJ IpUT Gagw LdcZ nKpU zlUB txuT ", "MwOV FRDX WjjY nBEP bahV zMBX iPnp uwgv RMYY AXZH ", "TTGb Opsw akHC JfWL tNqn FATN SEzk mSrA YLxU dNor ", "syGp byyV fTVj oExQ VEBS kWCb zgwK oJdr lZke synd ", "QCJQ Btkl Qyrq YKdn uuEW BfOF GxyA kqLi hmEm areM ", "KQqT IPrx kcLY dlqZ ZdlY nTYl cvEv SphA PGgq fkWV ", "VXDT ZnnW EKAe eFxi mEgh Jcwy sZDW UuFK tOuw AeYp ", "WwSl LLaQ IBXs cvfO Lles dpUR AyGu BSNd jSti sWzs ", "xQnu NbrT Gmlo CQcK GGaS qLjj TJsJ DCRB UTTR tgWK ", "fjwF pUTA EQys eoYL Scch iiGA DyQt lyFe Asrs fkaY ", "saHw dlKs Uwzu wbsJ CmIL EEVk EHOE hSmW Ygvo sUPr ", "SRiq xAJz HDsH aWBc LKij pXOV mHsz dbBk yean NfzP ", "fsBI PNNt xhCi xeuW YPgH emPC WMhp pdVx HCqX vZks ", "SxxI YVao dLdN xKNS VuBG TVfw VRyo qyxB mSVP Kheg ", "KIqR UzbD DNdc dNZR rUXu MHFD SMZk rtqa xuny qJZq ", "gVhP FRUD gEQG CRtr VyVa DWWN josE jbkf MWFg FqWD ", "klKk OPWN OFdS Pbfi pPhR nhuh bHqX QEtZ LebH CSes ", "bAyI cbdZ XzyR CJgz nbta oEGt DKeQ TPXG NNYf MOrV ", "gXwc yOQw KBPf jwlF CZcC nPAU GZJr mKRC dwix ybIe ", "BlAa pIhv Vxzt OYWf Srzd EGDl NilP oUoq GJKf PFNn ", "yVJe kuUo RRNg pXdJ IpUT Gagw LdcZ nKpU zlUB txuT ", "MwOV FRDX WjjY nBEP bahV zMBX iPnp uwgv RMYY AXZH ", "TTGb Opsw akHC JfWL tNqn FATN SEzk mSrA YLxU dNor ", "syGp byyV fTVj oExQ VEBS kWCb zgwK oJdr lZke synd ", "QCJQ Btkl Qyrq YKdn uuEW BfOF GxyA kqLi hmEm areM ", "KQqT IPrx kcLY dlqZ ZdlY nTYl cvEv SphA PGgq fkWV ", "VXDT ZnnW EKAe eFxi mEgh Jcwy sZDW UuFK tOuw AeYp "};
    vector<string> newMail = {"UTTR oEGt HHAU dwix LdcZ CRtr yifs WwSl OdPo HoUY ", "TVfw JfWL VuBG Gagw emPC mKRC fbtm iPnp FRUD ybIe ", "syGp kqLi Asrs WwSl SphA wQkx QEtZ BlAa ZnnW QEtZ ", "jbkf Scch IpUT xAJz Gmlo vZks WjjY bUkg kuUo FATN ", "ooFu Esak RRNg jbkf cidT lnCA kWCb DWWN fkWV xuny ", "EGDl EKAe xKNS mKRC nbta VyVa GxyA eoYL EQys GJKf ", "DyQt LebH mSVP Kheg jbkf bAyI YPgH qJZq bAyI TVfw ", "jijV iYwr Qyrq JREQ Jtsx sZDW UVsx Srzd XVDM JuUc ", "AxdV DyQt OYWf HDsH ccDF XiIK Lris emPC pIhv REsk ", "FcnN uwgv lEYb mVRh lZke jbkf pUTA dLdN MHFD SKYo ", "syGp fbtm NNYf Uwzu TVfw gVhP ayBb AxdV mEgh IpUT ", "yean ayBb Mljq GKZt idrn pvAr dlqZ fbtm Jlet NyOf ", "Lles OFdS TPXG SxxI dlqZ PGgq nTYl YVao EGDl YVao ", "Kheg Kheg pIhv QEtZ Jtsx CmIL ESua rUXu xAJz UzbD ", "wqfv rtqa syGp Pbfi fjwF qJZq areM nTYl zlUB OPWN ", "SMZk Difz sWzs OPWN Qyrq EGDl xhCi YVao WMhp BfOF ", "xAJz EQys gEQG Qyrq jMKH jSti UTTR Gmlo Ofyw vZks ", "FATN SxxI boIH UTTR tgWK qyxB gEQG Gmlo fTVj aEqS ", "syGp lEYb aWBc iaOD lZke LlHi tOuw tOuw EKAe Rjwu ", "eFxi dNZR AyGu DyQt DCRB Gmlo nbta bahV iXMg nrWI ", "Rlqn BPgW EHWQ fTVj TJsJ klKk aEqS VRyo josE DCRB ", "NrRX aWBc DCRB CmIL IBXs BfOF yVJe VyVa vZks SxxI ", "JoOi dNor hhJG IpUT VCnG hsFg npUj Pbfi kcLY VXDT ", "tgWK rtqa LebH Srzd zQXB dlqZ DyQt nbta qcJh VQpD ", "Aokn biKO LLaQ IpUT MneE bzLK zedE EPOJ PGgq xUvL ", "bUUn mEgh tgWK slwL XVDM MwOV rEfX uDKz pIhv Vbff ", "LdcZ Qyrq oJdr pXOV LLaQ TPXG MneE WMhp EHWQ EEVk ", "VyVa RRNg oExQ vZks mKRC BlAa jXkn EHOE sUPr LdcZ ", "JfWL dEHP dLdN Lris nPAU LlHi EQys areM MZio fkaY ", "rtqa iYwr iAtD oExQ Esak fjjh yifs CRtr AXZH WjjY ", "UTTR Rtyb yifs bzLK yOKq SRiq zgwK yOKq Jlet UTTR ", "jbkf mSrA mHsz Outm DyQt OBWC pIhv klKk fTVj oUoq ", "YVao Esak pRnE jbkf MOrV jwve idrn jwve mjgN KiqI ", "oExQ dlqZ WjjY XzyR CRtr tgWK MwOV Asrs AyGu Asrs ", "nKpU xAJz BlAa josE wbsJ ZHKZ iSpy JlZX qJZq GZJr ", "rUXu pXdJ IBXs Asrs Opsw NbrT pIhv DKeQ xKNS nKpU ", "mpVQ MOrV cbdZ VEBS jwlF OPWN DyQt qJZq UTTR KIqR ", "QEtZ fsBI dlKs mSrA xXdZ NbrT dNor jSti HCqX Opsw ", "emPC dwix VQpD OweL UYfu tOuw AXZH NbrT dNZR Gmlo ", "Uwzu KIqR pXOV XzyR Qyrq DyQt QiGY pPhR RTzg iYwr ", "dlKs lIib nTYl jwve XzyR jOxH fbtm nbta pdVx KBPf ", "yXme AXZH tgWK yean dRty rtqa YVao gXwc XlWU MOrV ", "KBPf nKpU gywA fkaY RMYY xQnu SMZk Difz fkaY VXDT ", "XiIK mjgN eoYL LdcZ XzyR XlWU EixC uwgv fTVj LLaQ ", "kqLi jMts jbkf WjjY UzbD Lles qLjj eFxi Esak sWzs ", "Rogg DCRB oJdr KIqR jwve sZDW AeYp RTzg nbta vZks ", "hElz OPWN OvfP mEgh josE josE VEBS Pbfi xKNS gVhP ", "BfOF LKij HCqX BlAa QCJQ Ulqs EQys MOrV CQcK qJZq ", "SRiq dbBk ZnnW GxyA josE iiGA FATN kqLi wbsJ Uwzu ", "rpeK GxyA QpsB jTvf dlqZ tnaL VQpD pUTA pXdJ hhJG "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 7, 8, 9, 11, 18, 20, 22, 23, 24, 25, 28, 29, 30, 32, 34, 38, 39, 40, 41, 43, 45, 49};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> knownSpam = {"ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ", "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ", "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ", "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ", "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ", "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ", "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ", "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ", "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ", "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ", "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ", "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "zkmC JuIK jEaC AjuA jXRX TUyI cpJP bmnE qXsI BYAM ", "JcJO BEQN bTrL OpXy fKfx XGyV aMFv TNCG xrmH rnsq ", "olSb fBig LuzT rJbq IEjR ygzg GgpS qaiS GDMT wMoN ", "Ypxx tWrb WSEe COmB XwqK GOWj ZCQW qtkm riJO weoj ", "uDHD nmTu yruZ zVEu Bhyl qheT KqwD YFTK frMk daSC ", "ywfg arFu KGOk rciT PZQX tSll dpXd Aczq EYjW RQkh ", "BJcC dJkr lWPM jaJI UCMt NQiy azlc encg srwA YhUH ", "wqET eMLv kFYM GbDi hkQq sFvy ZwLi gvbu wdLz bZzl ", "NIVA xpTx SUOz vhQM fYTn NkrJ pKYm sVpf DMxL RtAn ", "kCXI TAzJ aaeQ zYqX TpfN nLpA bsmp GsAa rDhI kexj ", "ibLo DWfO aEYD Dkzt gqOf IKeP jDJk iaAH viBk kbyz ", "ArnQ iGue ORAr tYMK GLPK pcdV QCOQ TJGj JFgv QuDv ", "BbPq hpBp Quuv VsQe oJYB GuIh syuO XNTl tLgZ GlET ", "LYUT feoz ArcZ SFED Txbg DTQd SCID Vztx ERDj hkXY ", "qTLZ nDXV sDKm lUsS cQVI UElK JkNT xbcc oSvE tnzK ", "ysrX jLeu vIJe NYmX oeRC SWfg UfCU Iumf xnuE Dsay ", "sXKj DCSY LCbJ ovIj tTGm AYyL KcTV PJFZ ZIaH yPnk ", "EJcc ESfL PaRN OMpb DJGZ VQlA AUoD mrXE afWW otpR ", "njeP FDib qEEt sZjP Ybsv XplI dPvn tuUM rnhE sRdG ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP ", "Rtbd oCEF xECT VOZP aKdp ARuG ZyqG BpOx KiZg VwjP "};
    vector<string> newMail = {"qXsI hRfD viBk KGOk GLPK kFYM WSEe oCEF ysrX Gicz ", "YMav Clmy LuzT wdLz nmTu jiCs gvbu sRdG aaeQ EMFM ", "syuO pKYm ootQ UyOJ TpfN encg LuzT sRdG TJGj elbx ", "LuzT nDXV boPm zOqG jLeu gcxH zOqG KqwD RQkh PJFZ ", "srwA aKdp VOZP rJbq viBk WIlz kexj ysrX icKO OpXy ", "Flij SHTh shhx EMFM pcdV viBk ESfL zkmC sHHV TNCG ", "GDMT lWPM tWrb tnzK aEYD dJkr NQiy CyZJ GOWj Ybsv ", "wBEy IEjR COmB bZzl vhQM iaAH EMFM bsmp GLPK lWPM ", "tWrb HFzg XPoH ZCQW zOqG PZQX CyZJ qnsD Txbg tLgZ ", "LYUT vODC DzEE bTrL Clmy AYyL lBJT EYjW fBig MGEK ", "UbbN DTQd ysrX vhQM tSll bZzl qXsI DWfO LzXO UfCU ", "BYAM wAAt Aczq Ckym lWPM lBJT KcTV Hbut rJbq ibLo ", "feoz qaiS oSvE kFYM XGyV lWPM NIVA sDKm QuDv rnsq ", "BYAM UDNV GuIh GuIh bKFz ootQ sFvy zpXB ZbWY NQiy ", "cWfG oeRC LHJC NYmX ppzA NIVA rDhI QCOQ fBig aMFv ", "RQkh SUOz WkoW wqET sRdG sRdG tnzK ARuG OMpb xbcc ", "gvbu AjuA GgpS nLpA TUyI Swfg LCbJ aaeQ XGyV yruZ ", "ygzg xnuE afWW tuUM KGOk GOWj ousC mrXE ZwLi FSll ", "ckKT frMk McdI zVEu nVIK ygzg daSC ArcZ Dagc ryuQ ", "bPhx zurF XAIM gqOf aRSX Ypxx dfwy aKdp chtc iCCo ", "ovIj ywfg QuDv pKYm iaAH BbPq LHJC tTGm Vztx VwjP ", "TpfN TAzJ Vztx tTGm sXKj IKeP AUoD qXsI DMxL azlc ", "sRdG WYmV NQuu xnuE TUyI XPoH YhUH ousC AYyL jEaC ", "RQkh BbPq UbbN GuIh oCEF tLgZ arFu qTLZ Dkzt zVEu ", "NIVA FDib PZQX McdI GgpS Euso ppzA Dagc Vztx LHJC ", "ZvMg Bhyl GOWj sDKm ywfg oJYB AjuA jaJI ZIaH Dkzt ", "ygzg oSvE qheT encg SUOz vODC mDVo KcTV swcU Dkzt ", "GgpS RtAn TpfN JFgv kexj qXsI DMxL MhEv ArnQ oSvE ", "TEig YhUH SHTh KGOk EYjW XGyV yruZ GLPK oeRC QIEM ", "Ybsv jXRX Iumf kFYM wdLz gvbu hkXY QCOQ COmB tLgZ ", "EYjW vhQM xECT UfCU iaAH JuIK KqwD XNTl wdLz Ypxx ", "rdmJ RQkh avBu TSWv UtFm VsQe bZzl bZzl MGEK KGOk ", "LuzT Euso UbGd jiCs qaqp wAMV ywfg nVIK LuzT otpR ", "aEjf jELm ibwU eUXx OBwq UyOJ BbPq QEut Flij ysrX ", "srwA FSll RtAn VQlA SrZq FRJh OMpb JFgv srwA KiZg ", "DCSY ZIaH cQVI frMk zYqX McdI wdLz qTLZ BYAM srwA ", "mhEw rnhE tWrb aEjf tXuk RtPo aeGI ootQ kexj DTQd ", "PJFZ GOWj bTrL tuUM bmnE sZjP aKdp GuIh XplI Txbg ", "tuUM EYjW viBk nLpA jDJk LuzT lUsS PZQX Dkzt aEYD ", "vIJe ERDj jXRX aRPM aKdp xbcc qXsI Uosx YhUH WSEe ", "SoOP Ypxx XNTl SUOz tTGm rJbq xbcc NIVA jDJk rnsq ", "pcdV riJO zkmC JFgv yruZ fYTn njeP dPvn VsQe xECT ", "iaAH TUyI QIEM zVEu BbuB Aseu xpTx aKdp WSEe tWrb ", "UhJb sFvy ArnQ dfwy eUXx ENkl elbx VwjP kbyz UElK ", "daSC vpco bmnE NwgV LYUT JkNT nDXV YMav aKdp NwgV ", "rDhI GOWj AjuA mrXE BbPq aaeQ FGcp ckKT GlET ESfL ", "Bhyl tSIB njeP nDXV VwjP VOZP tXuk NYmX UCMt KcTV ", "BpOx JwQv TUyI Blsk PJFZ sFvy cpJP RtAn sZjP NYmX ", "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ ", "SFED Ybsv ootQ QCOQ DTQd pcdV kCXI TAzJ zVEu QCOQ "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 8, 9, 11, 13, 14, 18, 19, 22, 24, 26, 28, 31, 32, 33, 36, 42, 43, 44};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"On, Dasher! On, Dancer! On, Donner and Blitzen!"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> knownSpam = {"a b c"};
    vector<string> newMail = {"a a a t", "a b c t t t"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"Try the prime ribs.", "Donner: New Prime Rates Today", "Try the prime ribs."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> knownSpam = {"X Y Z"};
    vector<string> newMail = {"X Y Z A", "Y Z A B"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> knownSpam = {"spam# spam spam hello"};
    vector<string> newMail = {"spam spam anil spam"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> knownSpam = {"abc,def"};
    vector<string> newMail = {"abc def"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> knownSpam = {""spam""};
    vector<string> newMail = {""spam1234""};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> knownSpam = {"a b c"};
    vector<string> newMail = {"a a a t", "a b c t t t "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> knownSpam = {"X"};
    vector<string> newMail = {"X X X A"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> knownSpam = {"a b c"};
    vector<string> newMail = {"a a a t", "a b c t t t "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> knownSpam = {"aaa bbb ccc ddd eee zzz ZZZ AAA"};
    vector<string> newMail = {"aaa aaa aaa aaa aaa", "ZZZ ZZZ ZZZ ZZZ ZZZ", "bbb bbb bbb bbb bbb", "bbb zzz ZZZ aaa", "ZZZ zzz ZZZ aaa", "bbb ccc ddd ZZZ aaa", "ZZZ zzz ZZZ Zzz kkk"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> knownSpam = {"aaa"};
    vector<string> newMail = {"aaa aaa aaa aaa bbb"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> knownSpam = {"One#two,#buckle#my#shoe.", "Eins# zwei# polizei.", "On the =first# day$of#Christmas#my#true#love", "gave to me a partridge in a pear tree."};
    vector<string> newMail = {"Christmas shoe buckle madness!", "Partridge$polizei#madness#day!", "I did#not$shoot$the#deputy.", "The second day%of#Christmas,#a$partridge#bit me."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen."};
    vector<string> newMail = {"Try the prime ribs.", "Donner: New Prime Rates Today", "Try the prime ribs"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> knownSpam = {"X"};
    vector<string> newMail = {"A B C D", "A B C D"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> knownSpam = {"dodol"};
    vector<string> newMail = {"dodol dodol dodol"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> knownSpam = {"spam1 spam2 spam3"};
    vector<string> newMail = {"spam1 spam1 spam1 spam1 spam1 blah "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> knownSpam = {"a"};
    vector<string> newMail = {"a a a a e"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> knownSpam = {"a", "b", "c", "d", "e"};
    vector<string> newMail = {"a b c d", "asldkf lskdj"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> knownSpam = {"This is a vile piece of spam."};
    vector<string> newMail = {"Spam is spiced ham.", "Spam is VILE!", "Spam is not vile.", "Spam< is> vile!'"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> knownSpam = {"a b c d e f"};
    vector<string> newMail = {"a b c x", "a b c y", "a b c z", "x y z"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> knownSpam = {"a"};
    vector<string> newMail = {"a a a a a b"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> knownSpam = {"a[b-c+"};
    vector<string> newMail = {"a b c", "a e", "a d"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> knownSpam = {"a"};
    vector<string> newMail = {"a b", " b c", "c d", "e f"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> knownSpam = {"s"};
    vector<string> newMail = {"s s s a"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> knownSpam = {"A B C"};
    vector<string> newMail = {"A B C D"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> knownSpam = {""bad spam"", ""spammy stuff""};
    vector<string> newMail = {"is is is is is is is bad spam stuff"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> knownSpam = {"This is a \"vile\" piece of \"spam\"."};
    vector<string> newMail = {"Spam is spiced ham.", "Spam is VILE!", "Spam is not vile."};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> knownSpam = {"a a a"};
    vector<string> newMail = {"b a a a a a a a a a a a a a"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> knownSpam = {"a"};
    vector<string> newMail = {"a a a a b"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> knownSpam = {"spam"};
    vector<string> newMail = {" '~spam`", "'~spam`", "nospam"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> knownSpam = {""no spam""};
    vector<string> newMail = {"every mail is good mail", "every mail is good mail", "every mail is good mail"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> knownSpam = {"ab!c hell*o"};
    vector<string> newMail = {"ab c hell ed"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> knownSpam = {"We have the best mortgage rates. Refinance today.", "Money-making opportunity! $5000/week potential!!!", "Don't Feel Short; try Elevator Shoes for increase.", "All-new pics: Stacy, Tiffany, Donner, and Blitzen.", "a", "b", "c"};
    vector<string> newMail = {"On, Dasher! On, Dancer! On, Donner and Blitzen!", "a b c a b c", "a", "b b"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> knownSpam = {"a"};
    vector<string> newMail = {"a a a a a a a a a a a v"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> knownSpam = {"spam is bad"};
    vector<string> newMail = {"spam spam spam spam spam good email spam spam "};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> knownSpam = {"A B C"};
    vector<string> newMail = {"A B C D D"};
    Spamatronic* pObj = new Spamatronic();
    clock_t start = clock();
    vector<int> result = pObj->filter(knownSpam, newMail);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4720&pm=2313
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
set<string> spamWords;
 
vector<string> parse(string s) {
  s+=' ';
  vector<string> res;
  string w;
  FOREACH(it,s) {
    if(isalpha(*it)) w+=char(tolower(*it));
    else {
      if(w!="") res.push_back(w);
      w="";
    }
  }
  return res;
}
 
void add(string s) {
  vector<string> v = parse(s);
  FOREACH(it,v) spamWords.insert(*it);
}
 
bool spam(string s) {
  vector<string> v = parse(s);
  set<string> ss(v.begin(),v.end());
  int a = size(ss);
  int r = 0;
  FOREACH(it,ss) {
    if(spamWords.find(*it)!=spamWords.end()) ++r;
  }
  return r*4 >= a*3;
}
 
struct Spamatronic {
  // MAIN
  vector <int> filter(vector <string> knownSpam, vector <string> newMail) {
    FOREACH(it, knownSpam) add(*it);
    VI res;
    REP(i,size(newMail)) {
      if(spam(newMail[i])) add(newMail[i]); else res.push_back(i);
    }
    return res;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/