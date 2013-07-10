/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10046
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

class LoveCalculator {
public:
    string findBoy(string girl, vector<string> boys);
};

string LoveCalculator::findBoy(string girl, vector<string> boys) {
    string ret;
    return ret;
}


int test0() {
    string girl = "LOVE";
    vector<string> boys = {"JACOB", "FRANK", "DANO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "FRANK";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string girl = "JANE";
    vector<string> boys = {"THOMAS", "MICHAEL", "INDY", "LIU"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "INDY";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string girl = "LILLY";
    vector<string> boys = {"PIERRE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "PIERRE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string girl = "MERYLOV";
    vector<string> boys = {"JOHN", "DAVE", "STEVE", "JOHN", "DAVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "DAVE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string girl = "ANN";
    vector<string> boys = {"HENRY", "TIM"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "HENRY";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string girl = "SL";
    vector<string> boys = {"VOEOVV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VOEOVV";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string girl = "DOVLRXIEEEIDNFKVLE";
    vector<string> boys = {"TVORVMZTTYVLQCPA", "JVALEJLLELRJVBELXA"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "JVALEJLLELRJVBELXA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string girl = "KI";
    vector<string> boys = {"L", "EVOLOY", "BOVEZWVLCCOEXVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "EVOLOY";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string girl = "LLOL";
    vector<string> boys = {"BVERON", "CVERON", "AVERON", "DVERON"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AVERON";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string girl = "VELYLEOCEVE";
    vector<string> boys = {"YVXHOVE", "LCOKO", "OGWSJVEVEDLE", "WGFVSJEL", "VLOLUVCBLLQVESWHEEKC"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VLOLUVCBLLQVESWHEEKC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string girl = "ILROLLVEEV";
    vector<string> boys = {"KXSKVPVONL", "ROEXLWV", "OINEDVOEOT", "FKZ", "LWSYYABCDEFGHIJKLMNO", "OOX"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "KXSKVPVONL";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string girl = "OAVASOVRLVU";
    vector<string> boys = {"VEALFOVAVORYVL", "CAOCKVOLFZOUECNA", "QNOQVVVPEV", "WEL", "LZSOVFLVDEOJLTI", "RFQ", "VLXERLLHLVVEODLVLLGV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "QNOQVVVPEV";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string girl = "LGOVGPOH";
    vector<string> boys = {"VEEOFX", "XOLLOGYEWOFSXEVDOVA", "TOYLPJVPEHVE", "MEOTVVSHLLNTEAOE", "GOTVELLD", "LVDTOVZUVVE", "VIQVVEOSVEP", "OLJLTLYAOEV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "MEOTVVSHLLNTEAOE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string girl = "LUOVALLELOU";
    vector<string> boys = {"WELOV", "REOLOZLPODO", "EBPCVDMOOJBE", "EUEFNLVHVUOLEG", "LENE", "SLKVOEVOT", "VEMXQMOOQWJVELMLLL", "OILTLKNVVLOOWEEJ", "OWOLWVLOOLFCOJEV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "REOLOZLPODO";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string girl = "AT";
    vector<string> boys = {"LOE", "DLEFVUUSEWIKLEO", "LOFEO", "PROYVESBTVLDWLL", "OOVVIKMOEILYESEIT", "GLWEOOMVLFSE", "OOLVBOOLVSDLPNOFYE", "DJVOLOD", "LQVOELDDLVSLPBRIEMLV", "ENSDLKLLOQL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LQVOELDDLVSLPBRIEMLV";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string girl = "OL";
    vector<string> boys = {"OOLOOXLM", "VVDOLF", "EQVCBL", "GVTVLNWOELOOVOONVSL", "GLYLVLEJKOKI", "ZVPEPEMQE", "E", "OUELDO", "EOLLLOLLOEQVSNOLBLQ", "XJXIVVVVEVEVCENE", "OVPOIFENET"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OUELDO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string girl = "CMZGHNVLVLEH";
    vector<string> boys = {"LIZNOELVFEFBFLO", "OUVE", "TOELL", "VIAVVZEEOEQ", "OLOULLEAFAZ", "VLVNLVGVIEEYOE", "MLLOOSELOL", "GFVKWVVXE", "IZOEIMLVLO", "ZMJLLMFGEVEVEC", "GVLMEV", "XUCE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "TOELL";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string girl = "EOLLUOQREOVXLZHWVVLD";
    vector<string> boys = {"OVLVLYOAEOULENDVWOLO", "OUOVLOTBPVJ", "EV", "DKGWOONELOOLMOLUS", "O", "XHEEVHEOIORVNSL", "UYOW", "FOLRRVVUHLDEVVESZPE", "ELLQEWTM", "HYREOVFOLJRNROXOBELR", "OVEOEVOKVYOVSLE", "OLLSLAVOEOVXGILJVY", "OHQL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string girl = "JH";
    vector<string> boys = {"VOELVTSEXEY", "LOEOIELOOWORTOL", "VRVOEOELOE", "HDEVLIB", "VGBOLFMDVPUOL", "GTZLLVCIOEVE", "OEEMQWYLLBLINEQO", "LZNZNVE", "OFR", "ALEVOLLDOJTR", "OPCEDODKOEEOXZDW", "EEWVLOOOETOLENL", "OOOTETEVEGO", "EOBEEVL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OOOTETEVEGO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string girl = "EWVELZOVULVO";
    vector<string> boys = {"VOYVEJIOKLLE", "QVOFLVOOWNG", "ROEOOLLZOLLOOYXVOYXE", "EGLLLN", "KRLMLROFLYOOSXUF", "XXFWECDFLWVGBLXE", "QEE", "EOOLGOCLHELEHOA", "IEPL", "MVIJOLQLELOERNVLO", "LB", "EOO", "H", "EVPOAHCERPLAOO", "VHVZESRVOOSEFELZ"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "XXFWECDFLWVGBLXE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string girl = "O";
    vector<string> boys = {"LVROCOSEF", "QVAQLRVLQVADCUL", "VLVLLVLLL", "ZKV", "JLFLMEKPEVKOLFVON", "JOEDJLVSE", "OLOLOXAVLAGZQVHHE", "ZFC", "TLOVOCVHOBXOCVYVV", "SE", "NULGGEE", "KKALRAVL", "OELVVVEVEYLCLEF", "LUZNG", "OGUYOVOVXP", "RLOSOLMCOZLXVPLE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "QVAQLRVLQVADCUL";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string girl = "L";
    vector<string> boys = {"OZVAZVSEESVYIEVREA", "AXKOEVELV", "SVTFVWJFVZOVXZEELLVL", "HDSZQYJVVKOVTLVE", "JRLYHKOOOVYGVELSZ", "IBLBE", "E", "DVINHSOENVLEEONOJ", "COCVBVLOWK", "TEWCOOLLLVOLERJ", "USORIVYIYOKALO", "ECOXD", "BJZVVDOEKLVJEIDN", "LRVGLEFLDVVEC", "VOLWEVOWOVE", "OEYDEED", "LIMK"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OEYDEED";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string girl = "QEEOJEO";
    vector<string> boys = {"REOEGVNZRLWVHMBT", "EOORWNLOL", "PGULLN", "VLBYVOLUDEOVOB", "VSLLEBIVBTYELD", "MLOQOTINLVV", "OBRLYLOEOF", "EVPEVKPGSVLEEVE", "XQOEWXVLVKQRRQL", "VEOVKMVLEKBLHLI", "IEY", "OLODZCZAVZOEVRO", "KVLVYQKJIOQLEEVLON", "DOEZOVOLOLEUWOHNEOQL", "BEEVEEVZLLMOQTRE", "OELEOEJPOLEL", "OLKELWVRWCEOEIYCLOKO", "ZDDVLCVVVUWKOVLDYO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VEOVKMVLEKBLHLI";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string girl = "V";
    vector<string> boys = {"EIIQVDLMMA", "VE", "VQCIFXVWRMRBOL", "ZNVEVVCEZQGHO", "CBQXEEVLOEEPLELRVC", "OIEVEVPEOVOLOALOVEEO", "XEXLGOOXL", "LVCOF", "HLO", "TCDEOIVVVIB", "HVUOOVVLOVNVOZV", "ZMJOLLZN", "LKSVLOKWEOVGPEECLQ", "PMOOJJFVKOKY", "GVLLTCSDVOLHVLDILZW", "CLLFMVECJVSRVOVOPOB", "LOOE", "SVB", "EOVLSDEOLUULVGJB"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VQCIFXVWRMRBOL";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string girl = "EYEOQXAVWPYODTELLR";
    vector<string> boys = {"VQGGARVR", "IVLJJVVVNLMVECEO", "VUOLWVWPVOL", "REOWOXM", "CLOEV", "KVSVGVMOLVEVOOVL", "OLEONEXPEVLEVBEQQRU", "OJEVGEJOEV", "ECOEEFTOETJL", "EEOVVVEOEV", "DV", "VEELEUTVJLEVQSO", "XNO", "EOL", "VKVIFVFOEWOAVO", "JHLOLXNEMVMOEJEOV", "ZVLLOBOOLVZ", "VPVFOVOKLDVGAV", "OGLVVVZGLVBURE", "TQEXQQPM"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "KVSVGVMOLVEVOOVL";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string girl = "OQERPGOZCVA";
    vector<string> boys = {"LL", "CY", "DVBLLESV", "LUVEOEVVBZYMUV", "L", "POEOOLVQEVLLPA", "VLXEEOUONVXQOGLVV", "TOPZE", "LSZWVCDVVUOTFZLLLE", "OBLUJG", "EEGLEVLFOVULOOEVLA", "ELKVKOHELVALAA", "LOFSOVOFOMLLVJIV", "ROIEVWEWDEQUW", "GD", "E", "OOPEVXYAVLUYDLLLE", "EYLLVUFVVLTRVVKH", "RLO", "PQYOOQLEOLYOISLVAVEV", "RZO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "RZO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string girl = "QOVBZQEBWDQVLQOME";
    vector<string> boys = {"DKCPBXETQOVABVO", "LMODEBXVLOEEORVEEL", "LQE", "L", "TXEUVEJLEQVDEO", "IJ", "LLFOEVRLVVOA", "EOELC", "VOFZFIG", "GROSLVHREXFVOESVEAI", "RVUEVEQQ", "EOEEEY", "LESLCOUEOLVROWOREO", "VLOL", "CLKFFAVOJLRL", "EERLCTVZMWVEZUEV", "LVLTVHCZWE", "HYCQZSEVPVOYVEA", "YVSOTTNEVNVLOVL", "QOEJVFLYVOSOEOEE", "TEQILE", "OELKEOHNOMLPHSOOVQC"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string girl = "ONVBVOQLVJCOZXVLIOLO";
    vector<string> boys = {"OLEOEVLQKEVZJOQ", "EHEFTOCOOYUKL", "LVEEVEKFNPLOLCLGE", "LCVENEEEVOEYR", "LLPXKO", "LAHVLLEVSEVLR", "KE", "OKKBOH", "OQUYSL", "OLLZBVCBJVEZLVSEQ", "GJLEV", "LEHCEEEV", "NHEVO", "EOFVAV", "NNBOJYVNL", "BOR", "Q", "JLELVFHJCOVFRLE", "ZEHEYIEVBLIT", "CEEOVEOHPR", "LELABOVVOLWOEES", "EULTEJFXTLSVEEELUEL", "FYOOGVOIEOO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OLEOEVLQKEVZJOQ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string girl = "OROXOIVVJELVDT";
    vector<string> boys = {"XELVEABVVVDLIV", "ER", "LL", "CELOMROVSOO", "FVYDILOILKOE", "YLVNVYEO", "GOEUALERHEE", "XLOFGE", "XLDOOA", "LL", "MOEOW", "JJLMYOUVYZLSLDEVPOZS", "OLOLOAKOVSLVE", "OYLQHELBACYEFQCVEOLV", "OWGEBLELLGAVEDATH", "LKCCTVNLEPVYVLA", "OOLO", "EELOLLLERVEVDWYVLLLV", "DLLTKXVQLLYELNE", "JWOEO", "TTLTV", "KCMGGVFQLCZEBKLLH", "LIVOZVMEN", "EVO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "XELVEABVVVDLIV";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string girl = "VLVLVEIOTYP";
    vector<string> boys = {"IZVOVLRDE", "EMQO", "H", "O", "IVEOSLIIDOPELLBVDQ", "LVAEEPEVLLELVZLUKLV", "GYRLMNEVVIOLFLDVISE", "E", "LX", "VEEVVVVKNIE", "HVOUEMEORK", "LIEIPKLVEEMP", "ER", "EEWBEHQMZ", "I", "OYUZELVJZXEE", "EVELVVFOWBBEODPME", "UQLORZWPLEEVTJEB", "OV", "EOVOYZFXOVEOVE", "EOVVESOOLEO", "ORCBVECCUACBEVLRL", "VXOBVLGKVEULVLQEB", "LPBLEVEHLX", "LNVX"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "UQLORZWPLEEVTJEB";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string girl = "JGFCOI";
    vector<string> boys = {"OE", "EZHUOVYYMVMDVEE", "LPJLVTXVTRQILKETEE", "OOQBLVPOHOGOB", "PEHLERMO", "ANOOVLPLKULJV", "VR", "ECJAEOE", "WWOELOEFV", "VXLOHEFOXLVOLALI", "EMEEVPVEQOENHWV", "EL", "OMKXLLHKUERE", "CSLBVKEOV", "EBLVLOOPLSE", "ULLOLJGOEDTLLY", "VWWEPWLEOOELLGVL", "CVEOBAVK", "BVDLERLRFEWP", "ELELEVGPJRLNJVKXVJ", "LEEXGL", "LGLKVCQVECVU", "VEVM", "VLOOOWJNVFLVXEML", "VLVUPLVAJK", "JTVHUEIMOLNHVVZBU"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OOQBLVPOHOGOB";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string girl = "VOLYEQBAEVLNNGDCEVL";
    vector<string> boys = {"VN", "SLOEVOALHAVLYVOUOJRV", "BOE", "VLNLLV", "OORRV", "ILVLKVVO", "EZHLDNGAJRLLKU", "HOLCXODXBXIIEJEAG", "GEOELTLSVEELPO", "GF", "OCVDVJVDCEDBALRG", "LVLLUOAEM", "BNTEXVXLSA", "VOLLLLLQEJDE", "EELLOSOKLHNE", "FVVEXXCAVO", "LOELGQ", "LVSVKEDND", "TEPEWKLELNLOBHRALLW", "EBEQLSNVVEONEAAKLE", "VJEVLKOLFLBLEOEDIE", "FG", "QEO", "NXLLOERLELLLRO", "EMLEZEEEJ", "UOILOOEGKCVOUBO", "BOEGKVLEZLGEZEOQZOXF"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "BOEGKVLEZLGEZEOQZOXF";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string girl = "DVLVQLO";
    vector<string> boys = {"VEEOCORYALEGLMXWTVX", "VSNV", "VKELOLVBEO", "NYN", "OOWJSSLTELHVC", "OEOEWIMLLEHYP", "IOOUVEXVVLVMVLOUPOL", "VELLEVTLD", "BWMAVMV", "VTV", "OOEVNLSFSCEKEGEOE", "AILUOZLENOVOOMLEK", "XOEEIUZVEJXO", "RLLVLRVQVNLY", "OVILLBLLVLOLE", "CUVABEKLVQV", "NIEXVQUPHCOUQVILD", "EMOHOOLSEXLEOOLA", "VVEOVVEVLLO", "HEOOVNEOROVOVLVY", "MMEQEVBEOVV", "VEEOBDETLHE", "EDOOLLN", "LOEGOGERO", "GOLEVOMNVFROLUID", "OILRLXFEUVE", "AOAEVZLHGHCOUEYLAO", "LQL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AOAEVZLHGHCOUEYLAO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string girl = "O";
    vector<string> boys = {"VLOEO", "EALENVQEOFM", "EEVOOFENHOVOJY", "VVGLEVC", "GLEWOEL", "LEELOVTSLV", "LEOCEOVOOLG", "BL", "VGLVHFQ", "VENLOLZLEOLBEGE", "EVELJHDXSOLV", "ISREFVUEEWWI", "ZWFKKBLT", "E", "OMVVGBEVQEXLEE", "OLDSLXLVRPEOVLV", "LQVW", "HEELVUOVOOO", "OTUJGTTLJ", "OE", "OEOKTVRU", "EEVIE", "PLP", "AELJXYLELFRE", "OOGV", "LVOACEHVMEEOLEO", "LLV", "POPKYNLELOOERFVOE", "NLVZUELMEHEJEVSLVFLE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "EEVIE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string girl = "GSEVPPOOLGEKHMVE";
    vector<string> boys = {"KKWOELOHROEKWP", "OVLNAALOOQNSQCFLMLER", "ZVZQQVONOTOG", "FILEVERWLOMEDV", "LVUESEFQUENGOLL", "KXOLMLLG", "YOUNGWNEEEE", "LPQIJXKEOEV", "E", "OOEJOL", "LGLEXCRVVLEZOHEAOLV", "HOEEYJARLOV", "LKEJEIOLGDOTRHC", "VEOUEERLQLVSEZLLTJXE", "TOZOAFKMOELHQEOVZV", "UEQYDVYNUVKDHVOI", "KEV", "LEEVEOIIGWNER", "XEOVETEOMVV", "EKJP", "EOXREU", "VOPVL", "VVVXTHRONLFVEXZL", "DEUENREE", "EOL", "VLGOQLLRVPEP", "VL", "LWELDVPVVLBVLE", "EK", "JLJMDOVDV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string girl = "EPLDVLLK";
    vector<string> boys = {"POVOVK", "GCJOVHLFE", "WGEEMLBJESEVPGFTAIVW", "EMCFTLEVEYEOLAC", "LEDH", "OVGO", "EBEVLDB", "ENCSRLEVVL", "ETEIOXIRLKNGLOOEX", "GNRRGVKEOTA", "GVVOEOLFSTOCZJWOVVOV", "HOEEL", "N", "VJLLYOOVLFYXZVYUE", "QOL", "VNRELELOJMLL", "LOOSQXTEGROGOWLLE", "WQ", "EVOWMMV", "KVVOEO", "RVOVOYO", "EREGJ", "OEYLHE", "EOGLV", "LOG", "QNLEE", "CXOTWVYGE", "EEPVL", "ULFESIGLVXE", "FIXETNNVVEVEYOOEMM", "LYOP"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string girl = "OBOVOALVOVEWO";
    vector<string> boys = {"SLLER", "DOCOWRZ", "VVQE", "WEWEJELREOEVVEG", "HLLVFOOVVPVIRRVMLL", "E", "KTLEOEDOWOOXHLLVE", "SQVIOOCTYCVJ", "VOENX", "VNTVELO", "HEEOV", "TLYNYVOEWLVL", "OOLREZULBFRVZ", "OQOJD", "GPDGLOH", "CHER", "EDVVCQOEOYB", "OKEUOVEMHOVVAKEKOMR", "OBSOBVOEELTKWRVBFE", "HUOELWIAZE", "LNSLOLELVREENTLLVVGL", "OVVDQOH", "EVREHOVLJLVE", "ABIYXLBV", "IOONV", "OLV", "VEVVT", "LODLVELE", "VLOEEVEOOICCELKLYOL", "LCLEVGLSLOGELELYE", "ICABJCEOVETLXQTEKQJO", "EZVCROOOJVZVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OVVDQOH";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string girl = "PIOIEOMRXVAPSLDVOOEC";
    vector<string> boys = {"VE", "EVOLCVEBVVENOLDBLMH", "MIBVFZPYA", "AEOGEENELI", "LEJVLLGVELEVVE", "WOLDJVRDHLXEHVEZVO", "DQOLEEEUODG", "TORKYAKACLON", "CEHVLMOEGKOEKRTPF", "YIVLOETNRQV", "JAVL", "OVVRLYEOVLVLELUOLF", "LQLZHLELFVELVTLTUVVE", "IUVOF", "LO", "OAXLKHEVOEVDWLVB", "OOEVHLVKL", "JPELLSTVLMEERIWXO", "VOZOCLOLMESLLUK", "BTUNUJIEV", "EEWVZLVGL", "E", "OE", "OVO", "CHR", "LEHEVPLJLSNTLK", "ZYGFLVEETNSHLOVF", "VEWOLNVVSQOVTIVTCE", "INNVDVQJV", "EYEKLOVLOVDVMONOC", "VEEEEKNEAVFVEELLK", "VERMUVOPVRQOIVZLFSE", "TGLEEBVOLDOSGBOM"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AEOGEENELI";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string girl = "EEUVWDWDQOOJXTLDNQL";
    vector<string> boys = {"QGMCLYLPAEEPLHKLLBO", "OWEEPLEDEBVEDZ", "WLSLLP", "IJOEMVNVQLQILAPEWQ", "MOLOVLISFVOOOOVLEVO", "EFVSOLVVQLVOBLTVE", "OOULYETLLL", "HHME", "EJC", "VLELLLBEE", "OOVVC", "PLLJOEEV", "EL", "LLVVETX", "VELVOJLNOMNLVE", "SROCUOOHVLOLJAYKV", "GOVVXELOOQ", "EFOOEDFWKVNEAVLDQ", "ILUVKOVREDEBLL", "GODVFTEXIX", "VVEVZL", "OOCXELMVQHVVVOVLEP", "XAVL", "WJOLYULVELVGRKETOK", "VSPLAVCVBTVEOLE", "ELEN", "MUSMAXMZBLVOOV", "VGUUVLZZRVXLOVOO", "OAXNSK", "EESPVOLEOWLEOOEOPLLV", "BEDE", "FLQ", "TEILOA", "EMEHV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "GOVVXELOOQ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string girl = "LUEVPL";
    vector<string> boys = {"ETEIOLBFLMGLIKEJM", "KOTELERE", "TUTSJECOR", "LOHEVXXELIOEBW", "VCBEO", "ELVLBEVE", "OOEOF", "LQEOXY", "AEDLVEMVOEHXEZQH", "HLLVLBIOTNEFOKOEJY", "OFXSHLVO", "QOLQNVKEOELI", "VHOEYO", "LKHLRVBXOSODY", "ELZUIEQVE", "UELLMDONOQGELS", "HD", "WOSVTOEJ", "VVAIATLLOXOOTCW", "WVVOVVKVVVVEU", "OOE", "AVFVKAL", "OLVQVL", "AMEMELOK", "LOMKVLVXEIV", "UPEVAVLLPLE", "BWVHOEMOE", "QGFE", "NYLAVVRLBLJUAKVL", "FEL", "NMLE", "E", "VQVEV", "EEOLAFEOYTBU", "EJCBLLVVVBOBTEEVDHF"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VHOEYO";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string girl = "EBLSNMTBC";
    vector<string> boys = {"QKQDYEVYLVETELOYEUL", "VVVFIVV", "XGOFVLEVLEEEG", "SEOVLLFEOVX", "LBOVOUEVLVEUOEOLOVVO", "EAVEIILOE", "TOHQJEAHHHUFEZENL", "O", "KFLEHRLEJOWSE", "OLOOVVXCEK", "VLAILRZEOEFLLAVKU", "VELEYLWLLQVNHN", "ZCK", "OLVTEL", "POAVILW", "MVXLFZMOEBLEXVNJBOY", "VRVTNGE", "EPBVRVVVGVVV", "FWJLVAL", "AMZE", "VEA", "IMO", "OO", "WELTDYOKDJIOJYULE", "RLDHLVGVVLOLEZQETEHV", "OMAJLEOVLGLOALGORE", "JLGOUEGYRFOENIHEXEV", "LVVMVLEEBEOELBOOE", "VIOENEQNILBLVUKJO", "VZOVVJL", "EN", "EZODQL", "NIOO", "PAVRWYECLVYYOOO", "OLPIWLLOLZVQEE", "VESVJOEXHFYEIVJOVLQ"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "FWJLVAL";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string girl = "VALTVVVUEGROLEOUV";
    vector<string> boys = {"NLVAOVJ", "EVJOEVRQE", "LNEEVVOTOLEEEG", "LPUKOMZVTL", "EL", "OVO", "IESVOOEOHWUWV", "GVERVLZNL", "ULESVBMPOLVFZO", "V", "V", "EVZO", "D", "AL", "OLTDAEOT", "KQPXULF", "XEWOLELOZVLGOOMOVX", "XVLLLSIAOOYOGVULU", "MIFVE", "LO", "SEO", "LAVOUHOEOVDOVYK", "DNRLVELLBODLVAS", "ZODOELVOVVLPVOV", "LEFOLDOFWVLOOOI", "VLEVBQBVGORVCN", "EGFMEBENOUOOLLUXHGB", "L", "O", "OZHLLVLLOOETOLEN", "JVYYEULLOLVOIKO", "LCRJQOSQOSVDLOEWGLU", "MDLOKVVCLT", "MCWPZECLEV", "I", "OVLLEGTEPZOEOVP", "OOGLEOMDLMVEEOL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LNEEVVOTOLEEEG";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string girl = "LOCVM";
    vector<string> boys = {"ELIJ", "PWLX", "LBOVPLEROKLEVKQE", "OLLXDESVESVLVELRRE", "OQBLTLTOFVO", "OILULVVC", "CWEIKZBXVGOLLSOVE", "LVLJ", "TLOZQZEODHNG", "VQQOT", "UVELVOUJVCZLEVLBO", "SUVMYOELOLGOVLE", "VFLYCEOMOO", "DL", "NUGOZWQVLYV", "VEHPVLVOVEO", "L", "DNVESTENSLIGEKVSELF", "E", "EM", "JFELOYLPVVFVEDQ", "V", "OAOVOVLEVESLLEEAL", "FESLFMIOXVUOE", "ULOEIVOZON", "PTILO", "GILSFCIBVL", "LLV", "OOEYOEFOQEY", "POOOHXOHLNASBEDS", "DLOOSLK", "AALNOO", "LWVEWOEVZAVKOLOH", "LLOZLVVPVMHLDFEBLJL", "OENGEXEUYOPOP", "OVEQOCJOXTOSLVKIROOA", "O", "JEWLL"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "OLLXDESVESVLVELRRE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string girl = "LLOUVOLEBPOVZKVOEEL";
    vector<string> boys = {"VLLQWVAP", "CLLGLZELIVLTL", "OVESLEEESZULSEVYOZ", "OELOPL", "LSHVOXBUQSVVOT", "EEIULLCEEWQBUROUKVO", "NOOUOLVTHRENBGEOV", "EUBKLWYTLLLILROOVWLL", "L", "NETNZD", "OLTL", "ZLPVOLGEEOVVSOVLBVEO", "WVVFEZAROVAX", "UOCELRLLVOHVEUVWLL", "WEVKNQOPYOC", "DLOLLOO", "LOEF", "ALVHRELPOELTZVEH", "HPOSEORHZVBZLEOLOR", "EBJXOOTJARSE", "OVEETYO", "FEOH", "LEOLVELELKQLHOPYO", "OVGBHMOJVEQSEZMQ", "VFGFLLLVLOLEOOO", "EGLJEMIDOBYTWOEEVMLO", "OOOVGOEO", "LNBOX", "UFL", "OLOLVRILOLLEVOQXZOU", "ESCELIVEEPVJLFL", "DOSEZ", "YQOVVLPVPEMVEUYWEVL", "IE", "LEJEVZKDEVLVEMKEU", "L", "VLOSOFLKEVELEV", "VEXYLJLHLLDUO", "IIGEXY"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LSHVOXBUQSVVOT";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string girl = "MEIOTWENLUVSO";
    vector<string> boys = {"YCKCOOIVLTOLOBVB", "E", "CLCDOOLE", "O", "YVXYEYLLBU", "NYNHXXFEVUDL", "OLELOVKTCCEOLJLCY", "AOO", "VLWIOEV", "OO", "WLLL", "MQCEOEVERALV", "V", "LO", "LOLWVFBSNW", "LGEL", "EQ", "WVLAVWLMVLEOZLWEE", "BOVLEVQL", "XOXGE", "JVO", "VLV", "CVSOLMLR", "LVCWOVTOMOVLOKO", "EJWOLKELACLLOEV", "HUEVFO", "EPJEVEVVESASOAUO", "VDKYEKVVVRCRVNVOLLL", "ULLPIPSBAYMVUVKL", "M", "ORTE", "VOELHVXOMOTELK", "HEEFT", "EEEEWEZLBXZVEAO", "CELELOYLETOEOOLG", "ODVVVE", "VLZLOL", "HAOVR", "FLNBYGOT", "GRLE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "CELELOYLETOEOOLG";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string girl = "OBEQILTFJE";
    vector<string> boys = {"IOBOOK", "LOILOKLRHDHQKVVN", "LSE", "AWE", "ELOELEWVHOFLOI", "ELO", "OOWEE", "ILEOW", "VJLLLOOOEVLIGM", "OO", "VLVOVLQEVV", "L", "ELZLOUL", "OMVEWLJL", "QLOS", "O", "V", "PLPFXLTV", "GJVDWE", "VLLEEV", "ZOUEVLELEVOLPVOVVWFM", "OEYOOOWLOLLOEVIRMNHI", "AEOOVHVZJXLLEOLKVF", "OVOLVIVAXFI", "LEFO", "WVUOLEOOWVVVXAOEVOEC", "PVLQS", "LT", "ELVQGVNEZT", "JDZTLO", "EBVQOEEVXLLYVJ", "LLC", "JUVXBVV", "QETOOY", "EBJY", "VVV", "MLLEAYLFYVLEPBJLUOEL", "BYEPVEEL", "OEWFXLKH", "MVAEHKLYOCQEKVVV", "KLPTVVLKFONOQEELLN"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AWE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string girl = "KNVBVIV";
    vector<string> boys = {"VOV", "EYLDOIOEYOOWGTR", "KLNLLLOZKOU", "EE", "AVA", "XOLCOD", "VOLCO", "VVEYGVIOELELCVEVCPN", "GLYEDBLEI", "LOSKEVOZYEJP", "LVVJUEUVODOTV", "O", "ELBLSEOCEFEYEOVENOE", "DJOVKIDLJRUXHLEGVEE", "V", "AXEUGLEZIEOQBEJOX", "ZVJLEANQOPV", "E", "VTOCKVEFUTLL", "VO", "OLDLLLKTTOLVENKXY", "VVAFWYOLVEULEVVOV", "HCWWEO", "VWVOEOBFLVDGBLO", "OYEVXYOELNMLVE", "LPVQGOLTJNLO", "IORLLVEKOYVRDVLVE", "LGRJVGTCKJUYEVMVVRE", "TVEXLYVVVVOM", "VOTKNOEOVHAXEOIOOYE", "Z", "WAVUKMLLVZEOLOLWKMLE", "RTORLVFPKFEAOHLVOOL", "ZSEOVEVOO", "OXGOMOOVLELLOROOECVL", "ELOIOTEEVOVELXLU", "EWOKJWOLHLEV", "AAZVNOOROMLBO", "WWEIUVVO", "LLOGOVZDV", "D", "WEXOSWVLZEW"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "HCWWEO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string girl = "OOPLIOOVNLALSOLOO";
    vector<string> boys = {"VLLEF", "FOACLVEVEHHNYELEN", "EUQSELQZOEOFEHLCESF", "L", "VIOO", "LT", "YJ", "ORLELRAHXRENHO", "GIOE", "OOMSEYLLOVVEVRFY", "YLYEDVMEEOVOHE", "ZLLVLLUEPJMTGHV", "VZEYVOQC", "LJXCVEIXLVL", "NYEYVXLNCCADEALEUID", "WVW", "HLXYFGXVYE", "LDIAEEHDEOL", "VTFVCNROLVOEL", "FLJV", "W", "ZIVRFOO", "EOESKHLEKOTW", "BLQ", "BXEOOEKTLEOEQL", "LJLBEWOVVV", "IQELL", "EOKPFLEXHRO", "VV", "EVLLIV", "LLV", "VXOQ", "SEDOVOEJ", "SONOOOKQURLOQOORLJHV", "XEOAO", "HQPXLWMLDTZOVOVJKKL", "VVL", "LALPLVV", "LLENEOOVEKOMVV", "VLEVLRVVEVORMO", "ELOMLHVVLLEVOWOL", "QOLNEOVLFYEKZ", "VWNVVCEVMKULV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "EVLLIV";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string girl = "N";
    vector<string> boys = {"VLOEVOLZEZLENKXOFV", "OOREMVVVQKXIOOTOL", "ETEPVVSJBOE", "D", "ASOEPOEDUETOL", "LIMOIAVVEWU", "VEOV", "V", "ATVMHLLYLEY", "KEI", "OQBLLTEMERVEBLJV", "QVHOAX", "AEVSECVBGTOQOELLLV", "OUUOIEXKOOCIBODFDGL", "CLLEVEOELKLCH", "OUVLEEGORLO", "L", "TOIODD", "MXOGAJZTAEEIL", "VKZVVLENC", "RVVOYL", "XOVLUNJOPJUVLKVGMRBL", "OCOAXULORVEXLEAVCLLA", "ELUEOXILEYKOAQ", "VAOEOVEB", "OVOINVVLRKL", "OGLBOIRZZULHWOOM", "VELCVPJLVY", "LVSEQOQ", "LLDVVEXYEGELGTCQRVEE", "BE", "OMZJ", "COEV", "OEOVODLLPEORILLI", "OEQWEPKVOEAEOEE", "TTLJOJSV", "VJEFEZUCVVN", "VOWVGEEOMEOSLEMLEEV", "S", "ELEOCHOOLO", "VXXVOLLLALVLOLE", "GQOZLIOAXE", "BLILEFOOLVVEVVAM", "OOOELE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "ATVMHLLYLEY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string girl = "LHGETYLQBEEVIOLKELK";
    vector<string> boys = {"OOOAPDBVEZZR", "OTJSZLFOLTEOLAM", "NEFU", "ZZENBVOOPOVOV", "VLVVVOKGEEEZO", "VHOLE", "ELOEVECL", "LPOEO", "YILOVCVEAWMVOTLO", "LLVVLNLOVVSLEL", "EEXZ", "FOECNVGYLEJECEO", "GRLOV", "EDIEAOOQH", "OOLGLQEODPXQNVVEVSF", "YXVTLLTEEVKOEKVMEEL", "LVLVJXLVMNJWELVJLE", "MLDDLKABLO", "EHEOLLNBISLFJZ", "LVTOVLSNKJELDOQDLM", "AECSOLEANS", "XYBVLULENV", "FOJODOVEXAZC", "EVKCOLKLRFLIKL", "LLHEVRVLEPVOVVS", "EUQV", "PEOLSELEHNSV", "LVLAELED", "EIKEB", "GJZECZVV", "TFVOOPLLQQOAEEU", "ME", "LUHOOUEVCCVVPC", "ZP", "RH", "OPWOXMTEVLYIOOVRV", "QXEOQEMIBOARLOOOEEV", "RELSOFX", "G", "OUVVDJGOJ", "EOEEK", "LDVV", "HOBNL", "K", "GLSBTODYO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "FOJODOVEXAZC";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string girl = "BEILJGOVKR";
    vector<string> boys = {"OOK", "LOLEOJMJMONWATOKG", "ECXMNRLHWP", "EVEOVOLBOLWVMOVVVLH", "OCYLE", "VEELEONCQEJNNOOE", "EOMEOOERVTVVYEVN", "OOLEIUOLEKKMUDOV", "EUVOT", "OOPVJETBEV", "H", "IEEWVDWLEEJ", "PWUMC", "VOLEXVQGFOV", "F", "MOPILELEAOECLTWOEOOE", "VOENJUODVEEPKVVOOP", "QOOVLVBOLOLEVLOELE", "LLVVFBCE", "YVKOEOLLKG", "OEVYVLVOO", "BVVHLHUPVLLVS", "PEEXUONWOERMEL", "VPLQ", "GWP", "GEL", "VNSEYUGOI", "EEIJQGQVV", "VVWH", "OYEOVLOJQOLWOHV", "EVE", "LVLOZC", "VOVZRIEVLL", "GLZLOBLG", "EBOVINRIYCPEVELVK", "ELLOECLFLM", "OQOSOOIEVPL", "HYLZWAKOYL", "OWVJKVOOLORHLOBSYVL", "OLOTLLLPDSKVEVLLL", "EM", "VZVVOVLILZLILLEVOIE", "OQXUULVZEDHOOLDLPLVL", "VXLL", "VVLLPOHDEVVVBL", "L"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "VZVVOVLILZLILLEVOIE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string girl = "VOYVAUELHCXENFPOLL";
    vector<string> boys = {"OVLVYLWVOXYLEEC", "OVVLLBESPZLHWOEVGEQV", "EZIREOEVOEVLLIRVE", "LDLPEV", "OLCRFVVBJTKVCEBIWBE", "EBZOVHYLEZ", "OMVVUIMVVHROE", "OVF", "SVNDVZFOGPMVE", "PLEQJOSLNSDFOCP", "BSHOVOZQY", "TLSJEOVFKQSALLC", "EMELE", "EVOEFSEYOC", "VWYKLYLYO", "WNLFASLVVE", "EOMVIKZVEOID", "VOO", "HEVEEVEMVK", "POOOYLELNQCVEOOL", "EOLLWVVLLLIDQO", "EFOVLVXBELVV", "DIVFGI", "LVOBVLE", "EEQOQVERMQECOUBCLEX", "QEMELO", "VDNSYELOELEGLOJEA", "LO", "ULLVNMJOM", "SNMI", "MASHELEXEVEV", "OEEOERDEMQELAWE", "EVV", "TLXCG", "EKVVJ", "PERLVO", "OELVLGUO", "EOERGSJVEOLLVE", "EPCOCLEOOKOPVE", "ZAGDIHLACLVPEOE", "OLVVWXZLOUG", "Q", "DNEVTFLKRVOVNACPVKV", "EVOLVUW", "VEHLQ", "EODLWEOSVSRV", "LVIGEVLHE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LVIGEVLHE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string girl = "QONXVYVLOZLOQAVLXOEO";
    vector<string> boys = {"YEYNCVOVOOOOOO", "TVE", "EO", "OQEFOLOGOVLVI", "TELVLNLVOOPS", "OLVQVEWQVLMYMFEVOLZX", "V", "WJKLDXLOERFLR", "YLVOGOEVOL", "O", "EEVPFLKYNROLOVLVL", "NUIO", "EEBALOAOQOFLJFHEEIME", "LOEQFOVVLONVJVOOEZYO", "EV", "E", "LLVLZVEV", "JULYEEVLCTONFZNVZO", "EPGZYOVOVCOOGFLORFVD", "EVEOVEV", "EXOLJEOOLQVO", "DQEWTVVX", "VVVOEMLL", "MOQLULEOQROLBYOU", "AOLVVZCQLLOEEYVVELO", "ECVEOLVXJNV", "CLYO", "RVWLVXYAOUMUVOO", "ZEEKTGOBBLFEMLELWRDO", "OVOKVTULE", "THC", "EMEOLEENOUELJVMQVEZS", "OOVLKQRAOGOLESDLEV", "XBLIVHZ", "UPEKEI", "EHYOOLSHEPFE", "TOV", "XTLFCOPGNVOEE", "U", "YOLOJEGOLOOLVXOINVPI", "ALLEODEO", "MLVTI", "FENEO", "EECEQTWWTLAL", "KEEGOVVBOVYEERQOEL", "LCESPLXOSROZTFLXV", "DVC", "FQGLOEQLDPELPELQWUO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LLVLZVEV";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string girl = "VEDTUVNUOSHTNXL";
    vector<string> boys = {"VVVVSVCOLQOWEBLEULVV", "OLYCPVVE", "EFOQ", "HVEDDLQLVEOMZVULHEEA", "VYVOMEHOVLVOVEO", "GEMKBM", "KEEODL", "SEPOZEOLSNOQEZELAOJ", "LLVWVVLODY", "ALELOLHE", "V", "MLPJEDE", "HQWOOVDLV", "QECAROZOOEELLGLI", "OOLEHLQOLHZNEJOO", "O", "EQNELCVEYLYLVVBO", "FELBDNMOLVOYLYVNAPF", "EUFWQVZF", "ORALEQFSQOCXP", "TWGLG", "DVLVKFOWLCLMBUUVVL", "VPLEELNESBX", "SEEZGYZAVOT", "LLTV", "NE", "E", "OVFOLLBX", "DRETGLVLVOONHEEJETGT", "HXJRRWERLEOPO", "QWEEZO", "WDMVGI", "EEOOEG", "QML", "OEFWRYDEOVV", "OLNGSJXVETZVLLQEOOK", "VOZOEEVEOEROHVF", "CJLTOERFELVNXN", "LEOZBJBB", "MQNLEA", "FODVEVRLJOOOQOKFXVO", "HEMYLETDVOYCVKEHELO", "DOOLQ", "MLMFLOOOLVVED", "EOLYOOD", "LOUNLZN", "LOSTORVSOLQEVJW", "EHLLVAOVVB", "EEOLMEVKTEDLYPOE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "EQNELCVEYLYLVVBO";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string girl = "OOYOHZT";
    vector<string> boys = {"EMJLOVMV", "AEBH", "IVNAROZVLAVDVVEE", "EOLTLJGOECFVWLEME", "OEZVXVMVJ", "OE", "GOOYVRVEEHVONVEOOVVL", "CDOLVLEORJOVTVC", "BEWKX", "VOFYOEOFLVFOJZEEELZO", "ENVOEILBERLVBLH", "VORVLOTOEZC", "LLOIZMICJSCOVOTLJVP", "OOEEVVOLLONSMQMHHOC", "EJTGXOOZ", "L", "IW", "EYUINZHOLLV", "JQELLO", "VI", "OOISKVLL", "OOHSVTVEVZOLVXPVEC", "AZOZOVPVVNLELOO", "LOLL", "GBOLVXLOO", "EEUGDYGEEGQLBW", "SCLEVEOLL", "VZOEHLLU", "VLLOVLLSFU", "USOVOLJDACYLVLA", "ELREVEVEL", "SNLQVEBDOXOE", "EEP", "EVLOLOVOVYVLO", "VOQLTSONVYELUOFCODE", "VDLVMOLLKKLLBVKLBLV", "UAVDLYEVV", "CLJV", "VQJVJV", "ETDVEVVLCO", "LE", "JONVEV", "SAVIVCLSW", "BELELNL", "BFVOEXCV", "VRGDYCVB", "HLEEHWVBEC", "GZVNLWWXORJCQV", "POROUELVOLZEIXUVCVB", "VVOOZVVPVOKMDVOVEU"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "CLJV";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string girl = "LLOL";
    vector<string> boys = {"BVERON", "CVERON", "AVERON", "DVERON"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AVERON";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string girl = "JANE";
    vector<string> boys = {"THOMAS", "MICHAEL", "INDY", "LIU"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "INDY";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string girl = "LOVE";
    vector<string> boys = {"ABCD", "AB"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string girl = "LOVE";
    vector<string> boys = {"L", "O"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string girl = "LOVE";
    vector<string> boys = {"XXX", "XAA"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "XAA";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string girl = "LOVE";
    vector<string> boys = {"AAB", "AAC", "AAD", "AAE", "AAO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AAB";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string girl = "ABCD";
    vector<string> boys = {"AAAC", "AAAD", "AAAB", "AAAA"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string girl = "LOVE";
    vector<string> boys = {"ALV", "LOVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LOVE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string girl = "JANE";
    vector<string> boys = {"JBACOB", "JACOB"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "JACOB";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string girl = "JANE";
    vector<string> boys = {"ITOMAS", "MICHAEL", "INDY", "LIU"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "INDY";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string girl = "LOVE";
    vector<string> boys = {"LOBE", "LOWE", "AOVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AOVE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string girl = "LOVE";
    vector<string> boys = {"AACOB", "FRANK", "DANO"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "FRANK";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string girl = "LOVE";
    vector<string> boys = {"ABCDABCDABCDABCDABCD", "ABCDABCDABCD"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDABCDABCD";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string girl = "LOVE";
    vector<string> boys = {"ZET", "ZEA"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEA";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string girl = "LOVE";
    vector<string> boys = {"ZZZ", "ZZY", "ZZX"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZX";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string girl = "LOVE";
    vector<string> boys = {"E", "O"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string girl = "LOVE";
    vector<string> boys = {"FR", "FF"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "FF";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string girl = "LOVE";
    vector<string> boys = {"AACEB", "JRANK", "ZRANK"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "JRANK";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string girl = "LILLY";
    vector<string> boys = {"PIERRE", "AIERRE", "AIERRELLOOVV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "AIERRELLOOVV";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string girl = "LOVE";
    vector<string> boys = {"AAAA", "LOVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LOVE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string girl = "JANE";
    vector<string> boys = {"INDYX", "MICHAEL", "INDY", "INDX"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "INDX";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string girl = "LOVE";
    vector<string> boys = {"LOVE", "LOVE", "ELOV"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "ELOV";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string girl = "ABCD";
    vector<string> boys = {"LVOE", "LOVE"};
    LoveCalculator* pObj = new LoveCalculator();
    clock_t start = clock();
    string result = pObj->findBoy(girl, boys);
    clock_t end = clock();
    delete pObj;
    string expected = "LOVE";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707084&rd=13518&pm=10046
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
#include <fstream>
 
using namespace std;
 
class LoveCalculator {
public:
  string findBoy(string, vector <string>);
  int Cal(string A,string B);
};
 
string LoveCalculator::findBoy(string girl, vector <string> boys) {
  sort(boys.begin(),boys.end());
  int MAX = -1;
  int index = -1;
  for(int i = 0; i< boys.size(); ++i)
  {
    int t = Cal(girl,boys[i]);
    if( MAX < t)
    {
      index = i;
      MAX = t;
    }
  }
  return boys[index];
  
}
 
int LoveCalculator::Cal(string A,string B)
{
  int L = 0;
  int O = 0;
  int V = 0;
  int E = 0;
  for(int i = 0; i < A.length(); ++i)
  {
    if(A[i] == 'L') L ++;
    else if(A[i] == 'O') O++;
    else if(A[i] == 'V') V ++;
    else if(A[i] == 'E') E++;
  }
  for(int i = 0; i < B.length(); ++i)
  {
    if(B[i] == 'L') L ++;
    else if(B[i] == 'O') O++;
    else if(B[i] == 'V') V ++;
    else if(B[i] == 'E') E++;
  }
  int ret = 0;
  ret = ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100;
  return ret;
}
 
 
//Powered by [BrainDeveloper] 1.0!

********************************************************************************
*******************************************************************************/