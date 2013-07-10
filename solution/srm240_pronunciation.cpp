/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3527
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

class Pronunciation {
public:
    string canPronounce(vector<string> words);
};

string Pronunciation::canPronounce(vector<string> words) {
    string ret;
    return ret;
}


int test0() {
    vector<string> words = {"All", "of", "these", "are", "not", "difficult"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"The", "word", "REALLY", "is", "really", "hard"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "REALLY";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"TRiCKy"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "TRiCKy";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"irresistable", "prerogative", "uttermost", "importance"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"AA", "Aa", "aA", "aa", "EE", "ee", "Ee", "eE", "Ii", "iI", "II", "ii", "OO", "oo", "Oo", "oO", "UU", "Uu", "uU", "uu"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"THE", "LAST", "WORD", "IS", "YYY"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "YYY";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"a", "Aa", "aaa", "AAaA", "AAAAA", "aAAaAA", "aaaaaaaaaaaaaaaaaaaaaaAA", "aaaaaaaaaaaaaaaaaarg", "AAAAAAAAAAAAAAaarggghh"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAaarggghh";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"Yumm", "yoop", "buy", "SAY", "yy", "TY", "YAYO", "alsoimpossibletopronounce", "reallydifficult"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "alsoimpossibletopronounce";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"y"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"qwertupasdifgihiklexcOvonmoWERTOOOPASOFGoOKLiXCooB"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"qertupasdifgihjiklexcOvonmoWERTOOOPASOFGoOKLiXCoou"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "qertupasdifgihjiklexcOvonmoWERTOOOPASOFGoOKLiXCoou";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"OcTOvmoomtEEE", "AjUmgoLVeeemIIIIFoobw", "LAAbuuuuVfohBETeeejaaaaHv", "OPenifXEEEkeXEEEzxIIqzuuuteemVIIII", "xbIIIIxIIIsuQgooZOqDuSiiii", "opUUUxEEEETEEEEqVuriiiibUUUXtUUU", "ajQooSINPuuuunEjPaaaj", "pxEEE", "oBxaaaaDOOBuuugooJcoooYeMpIIIIqGiiiyUUb", "hQEEEVUUUCiiPugHAASJEEEEH", "eJoi"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "eJoi";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"sjuuuu", "qxOOOdLap", "UNCooNAAAACiiiTD", "JFUCEtOPAAAAddiiiiLipuCYiiii", "AKsOOOOsAlFoooswiiwIIItIIVoooovFEE", "LxOwAANAPOOVqUUhVuuuufIY", "aDMeeSCOOOOKXOOzzUUM", "Vxooorpiiii", "OgDaaatuuuutuuuxDuuuuGaaaamHIIBjaDII", "ogAASUXOOOOYOOOOwoooJgiisUnnUfc", "adjEMJIIItWUUUYCeeeeZ", "eSAAANdoVqeWgUUUS", "lUUUqEEEHiiibiiiicakv", "aQee", "erPIIIIL", "RwAAAAqJagDOOOOxRAAAXICUUUUhtObCEEEV", "hsUUURPIIIquuuSmoooSSAMoooowK", "BSUUUWQ", "YjOOOOWOpb", "DCI", "iDooooJoooohXOOOCAMaahhoooHeeeeCDomUUUHfEv", "KgeefuuuubaaaTbUUUUt", "TaaaQdoopbuPuNrAAAA", "KnAAAlavOteyBeeeRiiziFpIJKooooJFaBAAAlx", "yUUURBafGuuuZyuFMeeGQeejV", "UTeeWJiiiiBZooooWUsGuuuGDEEEDyeeCwUUUU", "IsIIVvaaakDeepOOOO", "rooJmuGaZUUUykaaaP", "UPGIIIIWUqFAAATtoozZUUUU", "NdeeBIIIINuCpaafeeeeX", "QCiiVBIIIpj", "AduuuqEEEEsUUUgIIIMIIIIZItzoooo", "Ree", "AlziiikiiSkuuuuJpuuuuLX", "AxUiUUQeeePf", "TyEEqlAARObLEDxOheeesIIl", "iLjAAAAMoooWBOOOw"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AxUiUUQeeePf";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"AyGoocoooNXOOOOTqaNGeeeeD", "oKVUUGBaaVIIIxiii", "upeffUUDv", "Urq", "rquuuuYAAAAhaaVEEEEcm", "QdOCMiizdidUUUU", "AfyOOOOrooooHfeeeR", "E", "PIvtooojUUUUpooPeeewAAzjiipCuuFuuufooof", "hLoFAHUUUsLoooBIIIfiiiicGAAAArvUUUU", "uNuhEEEcYELY", "CuuuuRNeeeQiiimWiiiiwUUTCIIlEEEElwEDbuu", "uMiCjiiiVEEEEhIIIID", "iXiicCUUUjteeelaaaJyIIQEEEzZaFkULoooo", "OxVIIIInOOOwEEEEYEEBEEEEpVago", "lHeeTcibeeeeZCaBiiikP", "ZbaQKIPVOOOVLuuuuFiiiicKiPK", "SsasAmiiiVOOOOsezJeeeejtePb", "KUUUqeeCUUUUSi", "wAWUUvAAApOODdaaaaTc", "armEEEE", "ilaaRIIIIYeeexSUUUUYOOO", "IZIIIIKriyEEEEfxEEEETAARlUUUUVaqGooooxnuwB", "aMJOOgV", "vFiiiVUUUMhUCQ", "RiiiiSiiiiZiiiiNgeeeex", "hIcQuKfAAAALIIIpaaaaJOOOgoooJaaTIMKEKE", "GuuuuCAAARaaaQwAAAmGuuuunAAAVquuuHJO"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"oLAAAAndUxrICAAALoooywAAAAHcEEmQ", "aJUcUqrIIIIrIIIwpEEEEGyiSiiHTuuuugm", "awXOguuuwIIYsIIIIJXecgiiillaaaTPiZr", "BleelaaaQdaaaahMuLPiGaayuXCeeeJuHFii", "heeeSiiiiCEEEhqAARaacWoLNImQ", "cIIIVVIIIXaaaazSooooxJeeeLb", "zVaaaaBOOOOmaaaaQAA", "HOOODVIIIkNuVnIIIISf", "ihpeeeSeeeeKEcF", "hhEEETkEEECooolEEExWAAFMepaTeVkee", "gEEFtEEXuJV", "ciiiikEhAAfG", "LqOOOOjEEEEgIIILPeeegaaazL", "XiiiikXuzWEEEEwJUMj", "VZeeBDaamPUUmCOOVyOOOOvXAnUUhA", "wqaadAAJLAAjfuuuuRKEEEEYruuuugZOp", "EVjIIIIhQ"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"kAAAAnIbooHPIIIIzx", "EREEEZIIwoooChookUfTIpuuYD", "izQOOOO", "bOOg", "AQMIIItoooofqaYlejeeeeGZEFaaaa", "ytOOOhAABTUUUSOOOVVIIIIY", "ACuuuuvsUSoTinDiiiq", "BuNiii", "ErmUUUUnEETduuuyHuuuumUUUUYipgOOs", "iVJuudfURbUUUURDOOOOk", "SiiiFyUUhOhFetR", "XUUUUyWeevyIIII", "eDAAkaaaaNWOOOPiiiNkIHr", "avIIIFxiiiiXRiiiifXUUUjaaaaqz", "pOOOOjOOvceeeemEEEEqIIMZiiiqfuuuuVUUUv", "igEEEEJiiiiRIIIIgOOgSIIpifkfOOOy", "TAAAr", "SooXiqmaaaa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "igEEEEJiiiiRIIIIgOOgSIIpifkfOOOy";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"aCyoooJOOOO", "jOOOcmaaaayFEEEXuuXeLOOOcqEEEEmIIIvXuuuu", "YavAAFIIyIITJUU", "pAAAAVraavV", "yLaaaaRIIhaKFAAAAwFuHxeevuupLUUUUQIIIIFboooH", "epPIWNOOOOQvoHOOOOPehIIBEEEErkiiiip", "OVuWuuuveeeebFIB", "aTUUUROsEEEhnUKnIIIIDz", "UQyoSUUNPeeeejAfWoGaaaHUBxIIIIz", "ORVOVMiiikFiiyqaaaak", "OvliHIIXmAcoofuuuumiiif", "oPELARPAAAAKhEZAAAfkEZaaTr", "PhinoodooiHdeeeetTuuyiisuFvUUUUzLeeebuuy"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "PhinoodooiHdeeeetTuuyiisuFvUUUUzLeeebuuy";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"OWaaJcIIcC", "eNyAAAASZAYpiivneeeGAAAwDOdVUHAAA", "LkiVgeejGee", "UbEhQUFOXsoo", "DIIIIyWoKaaaabyIIpRIICeee", "ivAAATguuuuTPeenUUUUhzELZii", "aHxOqIIIJiiiiKooCIju", "DAAAdqeJIwIIJiiiPM", "uSDOOOO", "lWUUUUtuuFrobiiiHUUUCOgMUUUUPfIqAANYaaYeeeC", "mXuWNuuuuBtAAAAcdUUUUDiiiiKOOmOOOyiTAAAwJIJ", "LdUUpfUP", "UxpAAAAh", "iHhEEEEcOxwuuuuklA", "bEEEkTOkQEcneeNIIdYIIIIsUUUcIIYyUUUnAAAAV", "exIIIImXExoooKhiiiimAAAKUGBaaaaqiiBr", "OchAfREEEEPmeee", "ugUUfNiiiTooWz", "ahoDeeXaaaaRKiiiVJooovaaakdErqeeeMtIIgOOOOpt", "EmEEEljIIIITIIIs", "aRatuuuvOOOTPeeeSfUUUcIIIIbxeeeRbeees", "UGHErvEZeeeCnaawUblExwOOOLuFQoommO", "upOOGMuutUmYAArjuuuDFiYeeeeznUUUf", "TNUUURkatCUzgEEEEzRUUUUbsooooyM", "ETII", "EKRiigeeeeQeeeGxikuunoooo", "sguzEEquuuVepICpIIIIwiiivzo", "UQOOYUUdzAAxVuuugxaaTOYYAAARf", "PooooxAAAAtOOOOMIIv"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"ObLEMCojceeeeVkiiiiYOOVWeeeeMQOOOOkOOOmkiiq", "YFAAyiGuuLAAADdArdiiiVEEEE", "eCcooSCoPSooZUhMIHoooRVEEE", "WxeecAAAAYrUUUUMIIImjEEbiiikn", "PSeeNLaaacEEEEHzIIIIfkuu", "rEEEElAAAtqaaaaWuuuxAmohb", "ENRiiMuuBlOOKqEEPKooooWiiXUxeerPAtL", "BViiinUUUmfEEEE", "yguuuyBoooopmUUSEEGOOONT", "otbeeeeTaaJmIIIhiiXBEEEExj", "umhEEEPHUUUU", "pGUUUcfUUSAAwOXeeeeWUvtOOOObiifYuyuDmAAAAZ", "GLUUUUquupOOQXUUZeeeefovyAcDimUUTWOOOGUUUM", "cpEGO", "EZOOOOLGiiiiYcEjuuuuC", "UVuukEEVaaMJooooyMUUUUvuuuHoo", "adOOOMAAAwjIIDeeNURuuuu", "hFUUUUdRoFh", "Npaaah", "MuuvzoPtO", "yhOOmDIIIIRFOOGeeeejqEEGUxIIII", "oYYeehooduuuucXooofeeeeruLuuuuF", "jiiiMAMEEEEpDOOOONHEEEEtyA", "HREEkDaZOJiijoooobSooz", "hxeeeV", "LeeeDAAxalA", "EKeep", "LFUUZZ", "NIIII", "I", "lyaaaYIILmAAAxqOOOfxEEELYeegx", "UvmUUUb", "SrESDUUUKXIIIxAgIpLUUUfYIzzOOOXAACmokyuu", "fFOzdOOBAXuuugEEyIIIRAAyuuuusqeeeeqodAAxoooopk", "aGtiiizuuuubeeeVoG", "mUUUUrAArGUUydOOOOweeCEEEEPNiyiigaa", "nZaaaaKEEnaaaciiFyAAAASCUUUXzEdnaaaCooo", "UzAAAAbduRuryaaaaXT", "NuuufXutUjKIIxHuxW", "aTAAAcUDUUUPbiiiicAAAFj", "IyeeeexooFAAwYuuuFVOOwuuuHCOhIII", "aNAAZIIIQiiiiTDIjKAAAJ", "oHaCCUceeeethyootUUUFeeeNUUCJUUUvZaaaaRHeeeh"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "oHaCCUceeeethyootUUUFeeeNUUCJUUUvZaaaaRHeeeh";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"ekULoomOOOW", "OmOOOOHKAgOOKHUUruuu", "oyqAAAAxiiDSOONjoooXufAAAFiiifOtuuVHAAA", "OWIIIHoooFtaMqaaaCOOQEEEduRaaaa", "QuukaahLiiBGeeeeR", "EkeeeerIxabvOOOOSNaaaJYiiiKhOOOObM", "pjurFAbaaZaaacT", "iVhiiiin", "XUUUUGAhIIIsEPmooooPPAAsUFOOOO", "ISJEEtiFOOOOqiiXzooomOOOfuuVKooVCeekMAAAA", "OXZiiiWKEEBaaBuuuYViiii", "IbuuuupquudoooogqeefOOOvVoBnaas", "VUUfUUUrhIIImEvJajgOOOLaaKEE", "KeeeGjEEEBtUUDUUUUmaWdaaawKaaaaVEEEHAMOOO", "ESeWoooDEteeekWiKiiiWHuhvaawVIIIGhUUBF", "kNUUUMUUzPUUSuuuXooMiBwoWiJtEQTaseeBR", "HLe", "lkEEsEEm", "guuuTSoosNiiiiDIIII", "WIIII", "kVejiiruuuuQAAAmfAAAheeeeTXiiiiBTAAAAREEMl", "duuuupuuuu", "AwtOOOrduYzAAmz", "xBEEEEZxEEEErx", "igpeeeedM", "jcuuqziiiiJHiiigveemReq", "jvoooxexm", "udQaVuuuuj", "OHAXVoohaaaayEEEECxoVjaaaHB", "IsuuBUUURwuuFuutiikPIIIIfuMzIn", "aDAphEMqOOOOWIzsOOO", "IGiiisoTDanPOSAAAABIIIIFLuuuT", "IFOOONwuuQqEH", "EFAAD", "qUUUUDAAjAAAAraaaaBoomIIlnUUlgEEEEQoooG", "CUUUGPAABIIIxRaaaBEJtEEJIIIwOVnOOOlmIIcr", "DqaaayaBeeMoooo", "ORHooofNEElYU", "VxEEEWHeeb", "jXEEEEZeeeeGIIJLEEEEseWUUkIIIIwII", "XHeeruuHOOOOdpEENWeeqOOOOZoLAAALeePMuuuG", "SeyKAAvokaaaazuuLooooPluuvbOPriii", "qUUCZEJfUsoRNUUUUGZIIIqEYAAAwAAhjAAAAl", "uQNaaaTaaaGUUUUzYOPOdOOOObuuuuvyOLYUUUU", "gLUUUJB", "THUUUUhzOOYFuRiPdOOOGNAAAGIIs", "NEETSIIIIWyEQNUqEEEEYR", "XPiiMaayaaagXiidViiiwUUUQiiizOOKd", "uqgOdweeee", "RNOOOWJooHNaYY"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"ioLAAAMDAAhexMUUUUqaaamImCUUUF", "IyREEEcrIIIIy", "oRKeeeeLVooYzEEXeTvOOlAcuuuxVuugzuPziiX", "VUUUUxAAAqvuuuul", "balXeee", "lveeeekeeeeCNaaaafuuuuWEEKAAAA", "ruugCOOJWiiiDWAAnFAAGOsdIIsAAzrIIIXK", "DGAAGjaaaaJRuuSz", "dQEvWuPRooqpEEEj", "brEQUUnoooobemluyEEEvoZKAAQTaaamisIIIkzuu", "ocOOrDuRGuuuuYeeeepIzoooQCiXZAVYOOOPEGneeeesb", "lVEDuuuu", "FEmaaaaGerZOOOOzAsiiiiNuum", "KeBiiQqEEECkooool", "iVYOYrEEEE", "UgnAAAsw", "YaXAZUUNvIIIXAAxqiitQ", "yefUtIcAAgQUUUdZEGdiiijmUU", "unKaaaaTnenKUUpViigoKuuuufJOFAA", "ItOOOOmP", "haaaaxAAAQuumBehUUULoVfeeXuuKZ", "wlaHjOOOO", "iFEEEEBIIIIgCIIVEWveK", "RrogcOONuuuliXaaayaYwuvEEEQUBIITsUUUU", "URMuu", "AdaaatIIKoooovRIIIseeeeytEEEEKDeeeH"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ioLAAAMDAAhexMUUUUqaaamImCUUUF";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"eMrormaHU", "epteeegkeeeesbaKooYtAAAAFoMhuuuv", "EkcIKb", "SlatOOmxaayrOVsiiiiYqePooooDWUUUUW", "Ufaaaap", "EchohBeeeepFAAXAwVuuuuwviiKaaaGLUWHoj", "I", "ABBiiivoooojeeeevzoooPUURQuuupkII", "rofqaaVSucjuukAAWooooBoogjOOOJWUUUx", "ZoovEEEkAHbewdeeeeBeeeC", "kVOjEEZwIMIIIkeexooqoBnuutqePZaaaamx", "ulUUPOOOOtOOOHoXayviiiiZuuuuyoonaaavUUN", "YTAAAAQpiROOh", "JgeestAAAAZooGIIIMRooooVvUUx", "WWOOniiiZtEEEL", "dUUUVNuuuZJEJaaaaP", "hciiiisyEDniiiGOJdAAAAYvOTgeeeex", "GWeeeeBiXUUUUvnEEEwotEEEZwOOOOSNAAAw", "DQoosAAAAXAAAAPT", "fRoJKEqVUtEEEJxeeeeYpAApoooksurUUUUP", "piiihIIIQgedIIIZ", "dPAAAAGniiiibZII"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"RUUXwiiLuuuChaaajneeees", "FiiiT", "OzpiiiihSoooFjIyYIIIhzosHAmUUCfII", "rihpUuUuTooooiZUUUTQeN", "wEcBoooxvaaaztIII", "OVIIIsvaaaaKIIIIhuuu"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "rihpUuUuTooooiZUUUTQeN";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"RhoBIIIIXaKUBiiisElAAAASt", "OmqiDmAAAAPeeeTbeetIIIfEEEtlIlnEEEEJYEEE", "tUUUUx", "jrOOOOCq", "INteeeeGqEEzPoooo", "gAvuvaaXDU", "CPoooKeCeeee", "HAAtAAAARniiiiRBooWlOOOOMOOOgvAACidOOBPiiiiVK", "aL", "COOOOmooDWEEEEgliiixW", "egIHGIIIIKGIIIIXheepAA", "OMyuugBiiiirTuuuS", "SEEEE", "UXAAAlweesvUUUTIIIIX", "IvIIIIfUUUUlAAAKOOO", "MYiNIIISETOlEEEcooleeeqtOkLiii", "BLAAppALsaaajbAMooSKAsz", "NWOOOZEEEEvKeeSVaaKJiZawOOOGuuuRorhIIIRWaaaaLX", "naaaaskIIIfrIIriipEEEEZEEnTutiiituuuuJluuuuL", "TUUqoooo", "kyEEEEhOd", "OrIHuufIIwFuuuuGv", "KohAAAHWooXAnBaaWUkIIIIMaaaaWUdWAAAAcp", "erLeeYOZFIImeHaaannOO", "oMOOOOSiiiikuuuuSezLaaaaPoooQqeeeXcaQIIII", "oqgAAciiiYm", "GiiiiQJooTIPEEEE", "ABlIIIIN", "AwUKAAAAkXaaaaKIIIlLeeelriiDUdUUYooooZ", "AQeeeevIIITBuuuuqSoooodAAAAXhIPweeeeD", "pJOOyD", "beeeCvOOOjOOOOykuuuulFIBuuuuGT", "DGUUUFfiinHuCUUUQEQI", "upCOCKopmAAAAsOOLOOOO", "OvEhnuufORfEEEESViitDeee", "cNOOvoXWUMfeGduuucQUUlT", "kuuukTEEFHOhSeeeYYUUVIIIIbaLFEYoWIIdHuuBO", "oBNEESQEEqbOOOjeeeeylEtiikOOOPzAAAAQDIIIIr", "ihOOOfadUUld", "UmAGSeYhOOOO", "oYIIpuuDooKbeedniiresOVbeeeeqc", "XIGCAACnUUUUgHUUUUDdEEJexeGTIIIhuuuCN", "XfuSuuvdOOOOyYeee", "eYwEEEqLiiiToloZ", "EDtIIWUvgeecbEEEP", "ONQOOOOCIziiiiniiiirQeeeePs", "EJYaabiiiyVIIIJgaahPuWiiWOguuuqwee", "HuXiiimDIIsTEceeegMAcCIEMuuuuloooo"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "HuXiiimDIIsTEceeegMAcCIEMuuuuloooo";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"TzooSuubTOORbUUUvLOOOSbOOScooLD", "UmKooVIIIvEEYfuuuCVUUUFeeegfIluuDtee", "JsAwDAAAAREEcOrPEyAAfOfwaaaaZTISIIDoo", "OZVAAAAKOOOODEE", "epiiiWIIICxiiXyuuBfAkmaaaaJIIIDf", "eVOOOOcPIII", "odUUUJEcIIIIKBEmZaaaaHaaafcAZ", "UpmUUUUYPElAAAwaaaaKOOOOnRuS", "FUFaaaalPobqUqOSyighiidKaaaaFIIIIyKeeeex", "CyeeKubIIIZ", "XBaaQWoFeeeeW", "wwiiiiDxuuuVf", "gniiiTYaaBOOOOnuMuuGMAAAAFFiii", "IRookNuv", "oZaaaafHeeetintuuuunkOOOxUUU", "tuuRMuuubwooXIIIpHiiiiWeeQQuuSeJX", "OpuuuzleeeezeeeSotiibNeeeezIIIIJQuuuuS", "ADEEW", "wnEEKriiiirOxuuuKRooHGoowC", "FUU", "BaaveeZFIIIyAAAALbEEEEdosv", "kEEEEHEwEykuuuhuuMuuuniiSUUUGd", "zEELuruuPliiRUUTHOOh", "qiiirOwRamAAVnoqEcraaamEEEl", "qUUnOOswooorRaarVaadMeeeesaaadEEFDoooDcizR", "LyUUUThIIIIDEEEEjMUUUcY", "dPEEBs", "vEEEE", "ATdUnUUUUzbBBOOrIIIIqcEE", "gxiiicEzR"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ATdUnUUUUzbBBOOrIIIIqcEE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"DJiiiKooCEEEkIIItDuuuD", "iyfoooqMiiTleegIyUUUf", "HaaBIIIILUG", "layhuubiPXAdbucAGmmm"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "layhuubiPXAdbucAGmmm";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"Aa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"ae"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ae";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"Aa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"aaeii"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "aaeii";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"aaAa", "aE"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "aE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"need"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"All", "of", "these", "are", "not", "difficult"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"AE", "AeTEu"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "AE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"eea"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "eea";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"gaAl"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"Aal", "of", "these", "are", "not", "difficult"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"goal"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "goal";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"Ea"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Ea";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"AaA", "aaa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"aa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"irresistable", "preaogative", "uttermost", "importance"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "preaogative";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"The", "word", "REALLY", "is", "really", "hard"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "REALLY";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"baAd"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"aaAa", "hIr", "aOl"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "aOl";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"tae"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "tae";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"eaAiou", "need", "STREEET"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "eaAiou";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"aaccce"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "aaccce";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"abacdd"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "abacdd";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"cool", "irresistable", "prerogative", "importance", "uttermost"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"ttt"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "ttt";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"GrEen"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"aaaaaaaaaa"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"cc", "cc"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"SSS"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "SSS";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"ya"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"neEd"};
    Pronunciation* pObj = new Pronunciation();
    clock_t start = clock();
    string result = pObj->canPronounce(words);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=6539&pm=3527
********************************************************************************
# include <string> 
# include <vector> 
# include <algorithm> 
# include <cstdlib> 
# include <cmath> 
# include <cstdio> 
# include <iostream> 
# include <cstring> 
# include <sstream> 
# include <set> 
# include <queue> 
# include <map> 
# include <deque> 
# include <numeric> 
# include <utility> 
# include <functional> 
 
using namespace std ; 
 
map < char , bool > isvowel ; 
 
bool test ( const string & str ) 
{ 
  for ( int i = 1 ; i < str . length ( ) ; ++ i ) 
  { 
    if ( i != 1 && ! isvowel [ str [ i ] ] && ! isvowel [ str [ i - 1 ] ] && ! isvowel [ str [ i - 2 ] ] ) 
      return false ; 
    if ( isvowel [ str [ i ] ] && isvowel [ str [ i - 1 ] ] && tolower ( str [ i ] ) != tolower ( str [ i - 1 ] ) ) 
      return false ; 
  } 
  return true ; 
} 
 
class Pronunciation 
{ 
public : 
  string canPronounce ( vector <string> words ) 
  { 
    isvowel [ 'a' ] = true ; 
    isvowel [ 'e' ] = true ; 
    isvowel [ 'i' ] = true ; 
    isvowel [ 'o' ] = true ; 
    isvowel [ 'u' ] = true ; 
    isvowel [ 'A' ] = true ; 
    isvowel [ 'E' ] = true ; 
    isvowel [ 'I' ] = true ; 
    isvowel [ 'O' ] = true ; 
    isvowel [ 'U' ] = true ; 
    string res = "" ; 
    for ( int i = 0 ; i < words . size ( ) ; ++ i ) 
      if ( ! test ( words [ i ] ) ) 
      { 
        res = words [ i ] ; 
        break ; 
      } 
    return res ; 
  } 
   
  
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/