/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7411
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

class TagalogDictionary {
public:
    vector<string> sortWords(vector<string> words);
};

vector<string> TagalogDictionary::sortWords(vector<string> words) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> words = {"abakada", "alpabet", "tagalog", "ako"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abakada", "ako", "alpabet", "tagalog"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"ang", "ano", "anim", "alak", "alam", "alab"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alab", "alak", "alam", "anim", "ano", "ang"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"siya", "niya", "kaniya", "ikaw", "ito", "iyon"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kaniya", "ikaw", "ito", "iyon", "niya", "siya"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"kaba", "baka", "naba", "ngipin", "nipin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baka", "kaba", "naba", "nipin", "ngipin"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"knilngiggnngginggn", "ingkigningg", "kingkong", "dingdong", "dindong", "dingdont", "ingkblot"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kingkong", "knilngiggnngginggn", "dindong", "dingdont", "dingdong", "ingkblot", "ingkigningg"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"daykstra", "ploydwarsiyal", "belmanpord"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"belmanpord", "daykstra", "ploydwarsiyal"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"k", "ng", "h", "t", "a", "g", "y", "b", "o", "i", "d", "s", "w", "e", "r", "l", "n", "p", "m", "u"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "k", "d", "e", "g", "h", "i", "l", "m", "n", "ng", "o", "p", "r", "s", "t", "u", "w", "y"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"makatwirang", "dikaya", "palamigin", "hinahangaan", "nahiwagaan", "diba", "deuteronomio", "pahihigpitin", "nasimulan", "awit", "iyak", "sinalungat", "paglahok", "panunukso", "pagtungo", "metal"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awit", "deuteronomio", "diba", "dikaya", "hinahangaan", "iyak", "makatwirang", "metal", "nahiwagaan", "nasimulan", "paglahok", "pagtungo", "pahihigpitin", "palamigin", "panunukso", "sinalungat"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"sariwa", "imperyal", "irigasyon", "maibigan", "pandarambong", "huwaran", "pagtatama", "ilipat", "pagyari", "gawaing", "habla", "panunukso", "papatayin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gawaing", "habla", "huwaran", "ilipat", "imperyal", "irigasyon", "maibigan", "pagtatama", "pagyari", "pandarambong", "panunukso", "papatayin", "sariwa"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"suliraning", "sagisag", "gayoy", "segurong", "pagbuti", "lokasyon", "naaapektuhan", "luneta", "magpasakop"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gayoy", "lokasyon", "luneta", "magpasakop", "naaapektuhan", "pagbuti", "sagisag", "segurong", "suliraning"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"makalaman", "alat", "patawarin", "baryo", "israelita"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alat", "baryo", "israelita", "makalaman", "patawarin"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"balete", "makasulat", "mahipo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"balete", "makasulat", "mahipo"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"kostumbre", "simulaing", "ibig", "taglay"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kostumbre", "ibig", "simulaing", "taglay"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"pagtayuan", "anila", "tatanggap", "makagaganap", "sinusulat", "magaganap"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"anila", "makagaganap", "magaganap", "pagtayuan", "sinusulat", "tatanggap"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"kalinga", "dalamhati"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kalinga", "dalamhati"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"kamalian", "saksi", "panseguridad", "hinahangad", "pagbati"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kamalian", "hinahangad", "pagbati", "panseguridad", "saksi"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"pangkaisipan", "ligaya", "nakatakda", "akong", "nagagamit", "damayan", "ganting", "nagliliwanag", "bisa", "lalabag", "matitinding", "pagkakahiwalay", "linisin", "pambahay", "hayo", "pinasisigla", "halong", "naisulat"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"akong", "bisa", "damayan", "ganting", "halong", "hayo", "lalabag", "ligaya", "linisin", "matitinding", "nakatakda", "nagagamit", "nagliliwanag", "naisulat", "pagkakahiwalay", "pambahay", "pangkaisipan", "pinasisigla"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"nakaukit", "pagkatanggap", "drama", "dumanas", "tagapagsalita", "nagtatamasa", "nahiya", "palihim"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"drama", "dumanas", "nakaukit", "nagtatamasa", "nahiya", "pagkatanggap", "palihim", "tagapagsalita"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"piniling", "mangagbigay", "pakahulugan", "tatang", "nakumpleto", "tinusok", "hango", "pabilisin", "banig", "tagatanggap", "asosasyon", "nagdaragdag", "pagpapakabanal", "arayat", "munting", "paghihikahos", "itinakbo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"arayat", "asosasyon", "banig", "hango", "itinakbo", "mangagbigay", "munting", "nakumpleto", "nagdaragdag", "pabilisin", "pakahulugan", "paghihikahos", "pagpapakabanal", "piniling", "tagatanggap", "tatang", "tinusok"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"kinapanayam", "marikina", "magkahiwalay", "nahihiya", "bunganga", "maglinis", "pagusapan", "imposibleng", "nagsumite", "niyakap", "paglinang", "habilin", "nagsisilbi", "uupahan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bunganga", "kinapanayam", "habilin", "imposibleng", "magkahiwalay", "maglinis", "marikina", "nagsisilbi", "nagsumite", "nahihiya", "niyakap", "paglinang", "pagusapan", "uupahan"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"wastong", "ganun", "raan", "makaraang", "hulihin", "maginoong", "talastasan", "listahang", "base", "matutulungan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"base", "ganun", "hulihin", "listahang", "makaraang", "maginoong", "matutulungan", "raan", "talastasan", "wastong"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"balawis", "paksang", "pagpapasuso", "sumapi"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"balawis", "paksang", "pagpapasuso", "sumapi"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"kdnoaknpgpmkibtdsdnnrewrsrrroyyaoithaknalbym", "hrrberdyueaiknyidsldwkwbkbpolnnlinnpputiamwstgka", "rngmbeudyromnbpggsenryoei", "hgrnpkyilnyybmodgiruiidunmkasmwrldhtkekbdouaiayda", "uthgoihaonigpameeulheb", "rhtylhklbuubeoioikugs", "gsmbnonosshnuahgwbkhobaiewmymuhoiwlksbrehlrypoir"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kdnoaknpgpmkibtdsdnnrewrsrrroyyaoithaknalbym", "gsmbnonosshnuahgwbkhobaiewmymuhoiwlksbrehlrypoir", "hgrnpkyilnyybmodgiruiidunmkasmwrldhtkekbdouaiayda", "hrrberdyueaiknyidsldwkwbkbpolnnlinnpputiamwstgka", "rhtylhklbuubeoioikugs", "rngmbeudyromnbpggsenryoei", "uthgoihaonigpameeulheb"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"kwrbnpbtt", "alehtpmublydnoenbyhdpunyaaii", "lyeednssbtkrosdigureghrsbhlddkmlnoitouedbb", "wrywwpeskkenpt", "pohlbigrhkhdmw", "dedgkbimtapbmsieympkdhmdgumbowksahpuige", "haskwborspilpndppeyahbghsugdkwdolrlwtoeiablhwsnedk"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alehtpmublydnoenbyhdpunyaaii", "kwrbnpbtt", "dedgkbimtapbmsieympkdhmdgumbowksahpuige", "haskwborspilpndppeyahbghsugdkwdolrlwtoeiablhwsnedk", "lyeednssbtkrosdigureghrsbhlddkmlnoitouedbb", "pohlbigrhkhdmw", "wrywwpeskkenpt"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"kaggrgmdhgyigdpaewkhkoaywpmdiskmnlppkd", "hegsn"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kaggrgmdhgyigdpaewkhkoaywpmdiskmnlppkd", "hegsn"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"kpaibgwnspdsenktgoyspukybiowwnkprbosii", "lwgyumyuyimlgayrsmndutlrtm", "ikonbrohrokroamutndelyinepisoln", "lstnhakrptltopyuhlatidsirugwe", "tpbhalwbntni", "ssprpbribulsdglpiokwklileyoagkrakwensrrap", "oeaoteusimlrsumhoodyaw"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kpaibgwnspdsenktgoyspukybiowwnkprbosii", "ikonbrohrokroamutndelyinepisoln", "lstnhakrptltopyuhlatidsirugwe", "lwgyumyuyimlgayrsmndutlrtm", "oeaoteusimlrsumhoodyaw", "ssprpbribulsdglpiokwklileyoagkrakwensrrap", "tpbhalwbntni"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"mananambahan", "paggagamot", "proyektong", "iilan", "naganap", "asno", "gastusin", "pumigil", "tagapagtustos", "humayo", "sayawan", "inihahambing"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"asno", "gastusin", "humayo", "iilan", "inihahambing", "mananambahan", "naganap", "paggagamot", "proyektong", "pumigil", "sayawan", "tagapagtustos"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"trak", "alintana", "pinangalanan", "makilalang", "egipto", "isinagot", "naliliwanagan", "pangnegosyo", "ilokano", "tou", "pakikipagkooperasyon", "isinisigaw", "lumisan", "inaralan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alintana", "egipto", "ilokano", "inaralan", "isinagot", "isinisigaw", "lumisan", "makilalang", "naliliwanagan", "pakikipagkooperasyon", "pangnegosyo", "pinangalanan", "tou", "trak"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"mong", "naisasalin", "tratuhin", "puti", "tiyaga", "gitnang", "nagbabantay", "bibigyan", "nagpaplano", "pagpapalalim", "ektarya", "dela", "mapaghihiwalay", "hanggan", "nasareno", "ipinangaral", "magarang", "gramo", "papayuhan", "pinakabata", "maysakit", "inakalang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bibigyan", "dela", "ektarya", "gitnang", "gramo", "hanggan", "inakalang", "ipinangaral", "magarang", "mapaghihiwalay", "maysakit", "mong", "nagbabantay", "nagpaplano", "naisasalin", "nasareno", "pagpapalalim", "papayuhan", "pinakabata", "puti", "tiyaga", "tratuhin"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"pangunahan", "magsisilbing", "sumipot", "morong", "hahalinhan", "santisima", "hingi", "talunin", "taba", "maiging"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hahalinhan", "hingi", "magsisilbing", "maiging", "morong", "pangunahan", "santisima", "sumipot", "taba", "talunin"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"tunay", "napakabigat", "mensahe", "magalak", "sumigaw", "hihingi", "magpasya", "mabungang", "labinglima", "saan", "salaming", "pindutin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hihingi", "labinglima", "mabungang", "magalak", "magpasya", "mensahe", "napakabigat", "pindutin", "saan", "salaming", "sumigaw", "tunay"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"panglipunang", "hiya", "pumanhik", "pagpansin", "makontak", "pintas", "impiyerno", "binibili", "pasubaling", "eleksyon", "humahadlang", "setyembre", "makatugon", "maitutulong", "pananagalog", "sinambit", "sukdulan", "resultang", "tuloy", "malaysia", "nakalagak", "mortalidad"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"binibili", "eleksyon", "hiya", "humahadlang", "impiyerno", "makatugon", "makontak", "maitutulong", "malaysia", "mortalidad", "nakalagak", "pagpansin", "pananagalog", "panglipunang", "pasubaling", "pintas", "pumanhik", "resultang", "setyembre", "sinambit", "sukdulan", "tuloy"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"tungkol", "ibebenta", "mapasaatin", "pakikipamuhay", "pinagpapala", "mananatili", "nagano", "magpapatawad", "laro", "lagim", "pagkapako", "dinagdag"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dinagdag", "ibebenta", "lagim", "laro", "magpapatawad", "mananatili", "mapasaatin", "nagano", "pakikipamuhay", "pagkapako", "pinagpapala", "tungkol"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"kalungkutan", "kumalat", "pakikibakang", "bulong", "pagkakasunod", "isinusumpa", "nakakatandang", "payatot", "tagong", "natural", "nasyon", "umuuwi", "makinabang", "masuportahan", "partidong", "lawa", "sinamba", "tunguhing", "pati", "teritoryal", "tinututulan", "ginagamitan", "pagbubunyag", "ideolohiya", "pridyeder", "dinamismo", "pasimuno", "aktibong", "matapos"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aktibong", "bulong", "kalungkutan", "kumalat", "dinamismo", "ginagamitan", "ideolohiya", "isinusumpa", "lawa", "makinabang", "masuportahan", "matapos", "nakakatandang", "nasyon", "natural", "pakikibakang", "pagbubunyag", "pagkakasunod", "partidong", "pasimuno", "pati", "payatot", "pridyeder", "sinamba", "tagong", "teritoryal", "tinututulan", "tunguhing", "umuuwi"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"karatula", "milyon", "magbago", "ipaghanda", "ispesyal", "pamana", "papasok", "panteritoryo", "nakabaon", "mabalitaan", "magpakita", "inhinyerya", "sumasakop", "indya", "pagpili", "diyos"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"karatula", "diyos", "indya", "inhinyerya", "ipaghanda", "ispesyal", "mabalitaan", "magbago", "magpakita", "milyon", "nakabaon", "pagpili", "pamana", "panteritoryo", "papasok", "sumasakop"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"kanto", "naglalayong", "simula", "iniiwasan", "pampang", "ipinagdarasal", "arayat", "maliligaw", "marurunong", "pagbibiyahe", "abuluyan", "tinatamasa", "sumisira", "ebidensya", "gurong", "langaw", "pansing", "namumuhay", "ipinaubaya", "tumiwalag"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abuluyan", "arayat", "kanto", "ebidensya", "gurong", "iniiwasan", "ipinagdarasal", "ipinaubaya", "langaw", "maliligaw", "marurunong", "naglalayong", "namumuhay", "pagbibiyahe", "pampang", "pansing", "simula", "sumisira", "tinatamasa", "tumiwalag"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"igting", "himnong", "panganay", "nangangasiwa", "makakatugon", "iwasan", "pinagpasiyahan", "detensyon", "gusi", "lantay", "paningin", "nagtitinda", "banyaga"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"banyaga", "detensyon", "gusi", "himnong", "igting", "iwasan", "lantay", "makakatugon", "nagtitinda", "nangangasiwa", "paningin", "panganay", "pinagpasiyahan"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"tinatayang", "tulungang", "ating", "lapit", "uwi", "pangungulila", "pampamayanan", "balete", "makatotohanang", "pagpili", "talang", "pinasisigla", "maliban", "igay", "isinalaysay", "nagsasayaw", "umaalis", "tumila", "panibago", "ihinto", "banyagang", "proteksyon", "ipinaliliwanag", "nilabag", "nawawala", "tumatanggi", "nagsimulang", "magbawas", "pinaligiran"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ating", "balete", "banyagang", "igay", "ihinto", "ipinaliliwanag", "isinalaysay", "lapit", "makatotohanang", "magbawas", "maliban", "nagsasayaw", "nagsimulang", "nawawala", "nilabag", "pagpili", "pampamayanan", "panibago", "pangungulila", "pinaligiran", "pinasisigla", "proteksyon", "talang", "tinatayang", "tulungang", "tumatanggi", "tumila", "umaalis", "uwi"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"naligaw", "nagdurusa", "pagrehistro", "gang", "humuhubog", "sinulat", "banda", "minoryang", "makasalanan", "ibilang", "alituntunin", "ganoong", "mapanlinlang", "tonelada", "pasakop", "hulang", "desperasyon", "inulan", "daong", "pagbubukas", "tagapayo", "ina", "ipahahayag", "mapapala", "pinagkalooban"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alituntunin", "banda", "daong", "desperasyon", "ganoong", "gang", "hulang", "humuhubog", "ibilang", "ina", "inulan", "ipahahayag", "makasalanan", "mapanlinlang", "mapapala", "minoryang", "nagdurusa", "naligaw", "pagbubukas", "pagrehistro", "pasakop", "pinagkalooban", "sinulat", "tagapayo", "tonelada"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"kompanya", "pakikipagtipan", "maguindanao", "himukin", "saling", "tagapagdulot", "tinapa", "pagpansin", "nagustuhan", "mahagilap", "daga", "lumaki", "seda", "destakamento", "alay", "umaani", "pinalawig", "mangalaga", "manloloko", "oposisyon", "pagtuturo", "tagapagsalitang", "niyaring", "buuin", "itatwa", "linggwistiks", "peligro", "maglalagay"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alay", "buuin", "kompanya", "daga", "destakamento", "himukin", "itatwa", "linggwistiks", "lumaki", "maglalagay", "maguindanao", "mahagilap", "manloloko", "mangalaga", "nagustuhan", "niyaring", "oposisyon", "pakikipagtipan", "pagpansin", "pagtuturo", "peligro", "pinalawig", "saling", "seda", "tagapagdulot", "tagapagsalitang", "tinapa", "umaani"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"hakbang", "pangangailangang", "nakakaintindi", "tanggihan", "mekanismong", "pangimpormasyon"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hakbang", "mekanismong", "nakakaintindi", "pangangailangang", "pangimpormasyon", "tanggihan"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"luklukan", "lengguwahe", "aking", "hinirang", "magkahalong", "iangat", "ipinagbili", "naglalaman", "ginagabayan", "panghanapbuhay", "dumampot", "hurisdiksyon", "panganiban", "danyos"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aking", "danyos", "dumampot", "ginagabayan", "hinirang", "hurisdiksyon", "iangat", "ipinagbili", "lengguwahe", "luklukan", "magkahalong", "naglalaman", "panganiban", "panghanapbuhay"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"lilong", "silangang", "gulugod", "pagkumpleto", "inaatasang", "labasan", "proyektong", "adres", "serbisiyo", "sinisingil", "silang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adres", "gulugod", "inaatasang", "labasan", "lilong", "pagkumpleto", "proyektong", "serbisiyo", "silang", "silangang", "sinisingil"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"mapasaatin", "pangkalusugang", "dekada", "pangkagubatan", "nagpahiwatig"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dekada", "mapasaatin", "nagpahiwatig", "pangkagubatan", "pangkalusugang"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"pribilehiyo", "ilegalisasyon", "sigaw", "gulay", "manghuli", "hehehe", "repaso", "mangangailangan", "pako", "magtayo", "ulat", "siyudad", "sapantaha", "istandard", "linggwistiks", "binibigkas", "nahirang", "maingatan", "itinalagang", "maigting"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"binibigkas", "gulay", "hehehe", "ilegalisasyon", "istandard", "itinalagang", "linggwistiks", "magtayo", "maigting", "maingatan", "mangangailangan", "manghuli", "nahirang", "pako", "pribilehiyo", "repaso", "sapantaha", "sigaw", "siyudad", "ulat"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"nakausap", "hangganang", "tulay", "sinubukan", "pagkakawal", "mababawasan", "mandaragat", "pagpapabalik", "deretsong", "obhetong", "naglalaho", "salig", "pinakikilos", "pangangarir", "iniwang", "silbing", "bubuo", "nasulat", "ipinagbilin", "pagpapagal", "mawawala", "bihasang", "poon", "propesor", "ginagamitan", "inilalathala", "hangarin", "magpapatakbo", "salakayin", "hango", "labingwalong", "pinagpaguran", "nalulutas", "sino", "ito", "sumagana", "patakas", "mapalad", "nahirang", "nalang", "luto", "hampas", "paplano", "elementong"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bihasang", "bubuo", "deretsong", "elementong", "ginagamitan", "hampas", "hangarin", "hangganang", "hango", "inilalathala", "iniwang", "ipinagbilin", "ito", "labingwalong", "luto", "mababawasan", "magpapatakbo", "mandaragat", "mapalad", "mawawala", "nakausap", "naglalaho", "nahirang", "nalang", "nalulutas", "nasulat", "obhetong", "pagkakawal", "pagpapabalik", "pagpapagal", "pangangarir", "paplano", "patakas", "pinakikilos", "pinagpaguran", "poon", "propesor", "salakayin", "salig", "silbing", "sino", "sinubukan", "sumagana", "tulay"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"pangingitlog", "pangatawanan", "pagpapasalamat", "itali", "pinakamataas", "paghaharing", "marahil", "nakalikha", "ipinalit", "apela", "patayan", "ninakaw", "taga", "tipak", "naisalin", "relihiyon", "impormasyong", "bista", "ugali", "paso", "pasiglahin", "gawing", "labing", "nagkaroon", "nanindigan", "pinaghihinalaang", "sariwa", "inihandog", "maabot", "usapan", "binalot"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"apela", "binalot", "bista", "gawing", "impormasyong", "inihandog", "ipinalit", "itali", "labing", "maabot", "marahil", "nakalikha", "nagkaroon", "naisalin", "nanindigan", "ninakaw", "paghaharing", "pagpapasalamat", "pangatawanan", "pangingitlog", "pasiglahin", "paso", "patayan", "pinakamataas", "pinaghihinalaang", "relihiyon", "sariwa", "taga", "tipak", "ugali", "usapan"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"lason", "gobyernong", "talibang", "iba", "agham", "nakatatanda", "repaso", "tonelada", "bawal", "natutupad", "leeg", "natutuwa", "grabeng", "nagkukwento", "sumailalim", "nauuwi", "patayin", "tinanong", "patigilin", "anggulo", "animnapung", "pinangangalagaan", "hilagang", "paghuhugas", "wagas", "mailarawan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"agham", "animnapung", "anggulo", "bawal", "gobyernong", "grabeng", "hilagang", "iba", "lason", "leeg", "mailarawan", "nakatatanda", "nagkukwento", "natutupad", "natutuwa", "nauuwi", "paghuhugas", "patayin", "patigilin", "pinangangalagaan", "repaso", "sumailalim", "talibang", "tinanong", "tonelada", "wagas"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"ibinigay", "napaiyak", "habas", "sumisira", "dikit", "tipan", "talamak", "ring", "palagay", "pagpapatong", "sobra", "biik", "lebel", "pangimpormasyon", "pansinin", "nalulungkot", "araw", "talong", "sanlibutan", "nagpalaya", "paglalaba", "matalas", "ateneo", "guardia"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"araw", "ateneo", "biik", "dikit", "guardia", "habas", "ibinigay", "lebel", "matalas", "nagpalaya", "nalulungkot", "napaiyak", "paglalaba", "pagpapatong", "palagay", "pansinin", "pangimpormasyon", "ring", "sanlibutan", "sobra", "sumisira", "talamak", "talong", "tipan"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"nalalabing", "makapipigil", "produktibidad", "pangangailangang", "pong", "demokratikong", "tutal", "payagang", "pahayagang", "abilidad", "lipunang", "idinaraos", "minsan", "mapatanga", "nanahimik", "panrelihiyon", "pampamahalaang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abilidad", "demokratikong", "idinaraos", "lipunang", "makapipigil", "mapatanga", "minsan", "nalalabing", "nanahimik", "pahayagang", "pampamahalaang", "panrelihiyon", "pangangailangang", "payagang", "pong", "produktibidad", "tutal"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"inulat", "pamalagiang", "tabang", "sarap", "mapakinabangan", "maapoy", "high", "mapapaunlad", "magpaalam", "pinili", "magarang", "tagalungsod", "sisiklab", "panggitna", "iparating", "panrehiyon", "ipadadala"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"high", "inulat", "ipadadala", "iparating", "maapoy", "magarang", "magpaalam", "mapakinabangan", "mapapaunlad", "pamalagiang", "panrehiyon", "panggitna", "pinili", "sarap", "sisiklab", "tabang", "tagalungsod"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"heometriya", "magbihis", "pinakapopular", "pandisiplina", "piyudal", "pagkakagawa", "pagsusunog", "san", "nakalaya", "pagpuksa", "pinaalis", "pinaghihinalaang", "bihirang", "singilan", "aksyon", "pagmamalasakit", "sinusubo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aksyon", "bihirang", "heometriya", "magbihis", "nakalaya", "pagkakagawa", "pagmamalasakit", "pagpuksa", "pagsusunog", "pandisiplina", "pinaalis", "pinakapopular", "pinaghihinalaang", "piyudal", "san", "sinusubo", "singilan"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"pinili", "nagsisising", "pagsusuri", "impeksyon", "maglaro", "balitang", "enero", "bahagya", "iligtas", "parapara", "ibong", "magsuot", "masa", "paggasta", "pananatilihin", "sesyong", "nagkakait", "sinasamahan", "tutal", "ipiniit", "tingga", "ewan", "mapagpasalamat"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bahagya", "balitang", "enero", "ewan", "ibong", "iligtas", "impeksyon", "ipiniit", "maglaro", "magsuot", "mapagpasalamat", "masa", "nagkakait", "nagsisising", "paggasta", "pagsusuri", "pananatilihin", "parapara", "pinili", "sesyong", "sinasamahan", "tingga", "tutal"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"mapayapang", "pagkapako", "touroku", "tinatamasa", "kinalakal", "mong", "payong", "suma", "pananahimik", "bumubuti", "paglalagda", "nakatakas", "trabaho", "nangasa"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bumubuti", "kinalakal", "mapayapang", "mong", "nakatakas", "nangasa", "pagkapako", "paglalagda", "pananahimik", "payong", "suma", "tinatamasa", "touroku", "trabaho"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"alang", "matuwa", "makakatugon", "mababaw", "ibinoto", "yun", "sorry", "mangyaring", "reperal", "peste", "inoorganisa", "pinagsabihan", "paligo", "moises", "pampalakasan", "pagpapasuso", "pasado", "nauuhaw", "nagpulong", "hahawakan", "nagtatrabahong", "huwag", "lumagpas", "putik", "sumalubong", "buhatin", "nanunungkulan", "napabayaan", "alyado", "wawasakin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alang", "alyado", "buhatin", "hahawakan", "huwag", "ibinoto", "inoorganisa", "lumagpas", "mababaw", "makakatugon", "mangyaring", "matuwa", "moises", "nagpulong", "nagtatrabahong", "nanunungkulan", "napabayaan", "nauuhaw", "pagpapasuso", "paligo", "pampalakasan", "pasado", "peste", "pinagsabihan", "putik", "reperal", "sorry", "sumalubong", "wawasakin", "yun"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"porum", "abutin", "demonyo", "emerhensiyang", "magkaloob", "nanumbalik", "rebolusyonismo", "minoryang", "paghihimagsik", "sitio", "nagbuo", "tumupad", "mangibabaw", "takip"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abutin", "demonyo", "emerhensiyang", "magkaloob", "mangibabaw", "minoryang", "nagbuo", "nanumbalik", "paghihimagsik", "porum", "rebolusyonismo", "sitio", "takip", "tumupad"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"ipapasa", "praktikal", "kredo", "talatang", "nakalakihan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kredo", "ipapasa", "nakalakihan", "praktikal", "talatang"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"pinagpakuan", "kumukulong", "nakakalason", "tumira", "pagpapalamig", "dumami", "organo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kumukulong", "dumami", "nakakalason", "organo", "pagpapalamig", "pinagpakuan", "tumira"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"pinalalakas", "kinatawang", "hesus", "lumigaya", "batay"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"batay", "kinatawang", "hesus", "lumigaya", "pinalalakas"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"ulirang", "inulat", "mapaganda", "kalalakihan", "kaklase"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kaklase", "kalalakihan", "inulat", "mapaganda", "ulirang"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"inaalalayan", "napapatay", "bodega", "magparehistro", "kawagarang", "magtangkang", "agila", "maiiinip", "paghusga"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"agila", "bodega", "kawagarang", "inaalalayan", "magparehistro", "magtangkang", "maiiinip", "napapatay", "paghusga"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"kataastaasang", "nuon", "madadagdagan", "kalawakan", "malalapit", "sinisiyasat", "daya", "kanselahin", "mabait", "kalusugang", "malilikha", "pagpukaw", "itinatagubilin", "mahadlangan", "bati", "yatang", "magpapakasal", "temang", "kaayusang", "pagkat", "bangus", "makapangyarihang", "masilayan", "burukrasya", "sabik", "preskong", "gas", "pinakamamahal", "manahan", "ipalabas", "tendensya", "umpisang", "nagtatagal", "pansiyensiya", "maharlika", "puna", "hapdi", "kaklase", "positibo", "binti", "naranasan", "mapamahalaan", "gobernador", "pakawalan", "kabayanihan", "dagupan", "retiradong", "beses", "ipinapalagay"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bangus", "bati", "beses", "binti", "burukrasya", "kaayusang", "kabayanihan", "kaklase", "kalawakan", "kalusugang", "kanselahin", "kataastaasang", "dagupan", "daya", "gas", "gobernador", "hapdi", "ipalabas", "ipinapalagay", "itinatagubilin", "mabait", "makapangyarihang", "madadagdagan", "magpapakasal", "mahadlangan", "maharlika", "malalapit", "malilikha", "manahan", "mapamahalaan", "masilayan", "nagtatagal", "naranasan", "nuon", "pakawalan", "pagkat", "pagpukaw", "pansiyensiya", "pinakamamahal", "positibo", "preskong", "puna", "retiradong", "sabik", "sinisiyasat", "temang", "tendensya", "umpisang", "yatang"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"nagkulang", "napakahabang", "paminta", "munisipyong", "maglambong", "pagdalangin", "ideolohiya", "nagtrabaho", "inianak", "pananim", "kasinungalingan", "kailangan", "pagpapagawa", "nobyembre", "nakatulong", "huwebes", "dulaang", "depende", "pagsalang", "bakante", "hukuman", "palaisdaan", "pinagsasama", "pondohan", "isports", "kandila", "tira", "mabungang", "huling", "mandirigma", "makakapasok", "kagandahan", "ipinagkanulo", "malaswang", "langis", "etiketa", "hinangad", "nagpakabit", "kinomentuhan", "paglubog", "makatanggap"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bakante", "kagandahan", "kailangan", "kandila", "kasinungalingan", "kinomentuhan", "depende", "dulaang", "etiketa", "hinangad", "hukuman", "huling", "huwebes", "ideolohiya", "inianak", "ipinagkanulo", "isports", "langis", "mabungang", "makakapasok", "makatanggap", "maglambong", "malaswang", "mandirigma", "munisipyong", "nakatulong", "nagkulang", "nagpakabit", "nagtrabaho", "napakahabang", "nobyembre", "pagdalangin", "paglubog", "pagpapagawa", "pagsalang", "palaisdaan", "paminta", "pananim", "pinagsasama", "pondohan", "tira"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"kulit", "mapuspos", "guluhin", "kasapatan", "makilos", "ko", "aanihin", "bubuhaying", "ligaya", "tersiyaryong", "direktoryo", "hinugasan", "libreta", "burador", "parangal", "pinaniniwalaang", "panay", "bundok", "paririto", "nabilanggo", "britaniko", "tagalunsod", "martsa", "nasisiyahan", "naparoon", "minimithi", "pagpapaubayang", "rebisyonismo", "uno", "kilusang", "pinatutunayan", "bilihan", "pagbitay", "binalangkas", "daanan", "porsyento", "usapan", "nagtipon", "sekondaryang", "gulod", "sandatang", "aktor", "kaharian", "takdang", "kasal", "mabubuo", "tumaggap"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aanihin", "aktor", "bilihan", "binalangkas", "britaniko", "bubuhaying", "bundok", "burador", "kaharian", "kasal", "kasapatan", "kilusang", "ko", "kulit", "daanan", "direktoryo", "gulod", "guluhin", "hinugasan", "libreta", "ligaya", "mabubuo", "makilos", "mapuspos", "martsa", "minimithi", "nabilanggo", "nagtipon", "naparoon", "nasisiyahan", "pagbitay", "pagpapaubayang", "panay", "parangal", "paririto", "pinaniniwalaang", "pinatutunayan", "porsyento", "rebisyonismo", "sandatang", "sekondaryang", "takdang", "tagalunsod", "tersiyaryong", "tumaggap", "uno", "usapan"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"estatistika", "magsisimulang", "pinakita", "ihi", "pagkakaibigan", "bangkong", "kita", "pinagtatrabahuhan", "insekto", "bangko", "pinarangalan", "man", "tahimik", "tinitirhan", "naipamahagi", "langaw", "ibinalita", "dinanas", "pulitikal", "pinairal", "bagang", "bahay", "pagpasenyahan", "sumabog", "dagliang", "restawran", "istilo", "kamote", "halikayo", "nakatugon", "pinaglagaan", "pangyayari", "malibre"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bagang", "bahay", "bangko", "bangkong", "kamote", "kita", "dagliang", "dinanas", "estatistika", "halikayo", "ibinalita", "ihi", "insekto", "istilo", "langaw", "magsisimulang", "malibre", "man", "nakatugon", "naipamahagi", "pagkakaibigan", "pagpasenyahan", "pangyayari", "pinakita", "pinaglagaan", "pinagtatrabahuhan", "pinairal", "pinarangalan", "pulitikal", "restawran", "sumabog", "tahimik", "tinitirhan"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"paglalaba", "panghalalan", "diabetes", "kahong", "nagbabalak", "papel"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kahong", "diabetes", "nagbabalak", "paglalaba", "panghalalan", "papel"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"inubos", "pagsamba", "humatol", "pagtawa", "dalhin", "nasyonal", "administrasyon", "kolonyal"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"administrasyon", "kolonyal", "dalhin", "humatol", "inubos", "nasyonal", "pagsamba", "pagtawa"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"malaon", "kapanahunan", "adhikaing", "dinidinig", "satanas", "ipininid", "umasa", "lumikas", "nagsimula", "pamumulitika"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adhikaing", "kapanahunan", "dinidinig", "ipininid", "lumikas", "malaon", "nagsimula", "pamumulitika", "satanas", "umasa"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"pagpapatunay", "pagtanggal", "eksakto", "madilim", "pansarili", "anumang", "kumprador", "patagalin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"anumang", "kumprador", "eksakto", "madilim", "pagpapatunay", "pagtanggal", "pansarili", "patagalin"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"hahalili", "mamamayan", "kalakal"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kalakal", "hahalili", "mamamayan"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"pagkamakasarili", "luwalhati", "gumaganap", "sinaktan", "pagtutuli", "plebisito", "baybayin", "tumutungo", "nagpabago", "hahatulan", "lansangang", "binatang", "taning", "pagputok", "magdamag", "matutong", "piloto", "bagang", "pinakamabuting", "pagkakabit", "manlilikha", "tner", "ubusin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bagang", "baybayin", "binatang", "gumaganap", "hahatulan", "lansangang", "luwalhati", "magdamag", "manlilikha", "matutong", "nagpabago", "pagkakabit", "pagkamakasarili", "pagputok", "pagtutuli", "piloto", "pinakamabuting", "plebisito", "sinaktan", "taning", "tner", "tumutungo", "ubusin"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"tukod", "mangamba", "magtatagubilin", "alimango", "nagsusuri", "mataba", "obhetibong", "tungkulin", "nanampalataya", "pilipinong", "pagsalanta", "pangwika", "kasintahan", "bubuo", "mayo", "kasakitan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alimango", "bubuo", "kasakitan", "kasintahan", "magtatagubilin", "mangamba", "mataba", "mayo", "nagsusuri", "nanampalataya", "obhetibong", "pagsalanta", "pangwika", "pilipinong", "tukod", "tungkulin"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"pirma", "nagtagumpay", "tignan", "paglabas", "magsimulang", "termino", "alyado", "linis", "pagkakatulad", "kinain", "maghalal", "pagmamadali", "naturang", "tumpak", "pahinga", "tingnan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alyado", "kinain", "linis", "maghalal", "magsimulang", "nagtagumpay", "naturang", "pagkakatulad", "paglabas", "pagmamadali", "pahinga", "pirma", "termino", "tignan", "tingnan", "tumpak"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"lola", "nagpaprankisya", "isports", "pagtugtog", "ehekutibo", "palamigin", "loobin", "natutunan", "itinalaga", "amerika", "igagalang", "presyong", "mesiyas", "nangungulo", "utak", "pagkakaiba", "supilin", "tonelada", "nasyong", "nagsisi", "saksi", "magpakailan", "mangingisda"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"amerika", "ehekutibo", "igagalang", "isports", "itinalaga", "lola", "loobin", "magpakailan", "mangingisda", "mesiyas", "nagpaprankisya", "nagsisi", "nangungulo", "nasyong", "natutunan", "pagkakaiba", "pagtugtog", "palamigin", "presyong", "saksi", "supilin", "tonelada", "utak"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"lumalayo", "napatae", "lagundi", "komperensiyang", "pinuri", "paghihiwalay", "pagpigil", "kahinatnan", "sabik"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kahinatnan", "komperensiyang", "lagundi", "lumalayo", "napatae", "paghihiwalay", "pagpigil", "pinuri", "sabik"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"itinanim", "bahala", "kapang", "mabuwal", "tatlo", "mapagtiis", "pagkit", "suka", "patubig", "tendensya", "tanggulan", "natupad", "paggaling", "kaloob", "inuusig", "lalaganap", "nakauunawa", "etika", "sardinas", "gradong", "boto", "paalaala", "panseguridad", "lumusob", "lalagpas", "tumuloy", "pagguhit", "inahitan", "sulong", "diwa", "yong", "tumira", "sukdulang", "ganap", "nakakakuha", "sigwa", "inabuso", "inyo", "nakapanatili", "organisahin", "magrerekomenda", "kandado", "nabuong", "pildoras", "soberaniya", "dahilang", "matanda", "pagtutol", "nina", "natatawa"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bahala", "boto", "kaloob", "kandado", "kapang", "dahilang", "diwa", "etika", "ganap", "gradong", "inabuso", "inahitan", "inuusig", "inyo", "itinanim", "lalaganap", "lalagpas", "lumusob", "mabuwal", "magrerekomenda", "mapagtiis", "matanda", "nabuong", "nakakakuha", "nakapanatili", "nakauunawa", "natatawa", "natupad", "nina", "organisahin", "paalaala", "pagkit", "paggaling", "pagguhit", "pagtutol", "panseguridad", "patubig", "pildoras", "sardinas", "sigwa", "soberaniya", "suka", "sukdulang", "sulong", "tanggulan", "tatlo", "tendensya", "tumira", "tumuloy", "yong"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"kulto", "kanya", "nangangalakal", "nabihag", "niyo", "mandato", "subukin", "kahoy", "pagdulog", "magwagi", "nabasag", "mapatay", "pokus", "heometriya", "atensiyon", "siwang", "palugit", "bunying", "law", "kasangguni", "nagising", "inasal", "bilangguan", "ko", "eksaminasyon", "pakundangan", "sawang", "syang", "sumasagi", "samakatwid", "ipilit", "mamumuhay", "pagpapanggap"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"atensiyon", "bilangguan", "bunying", "kahoy", "kanya", "kasangguni", "ko", "kulto", "eksaminasyon", "heometriya", "inasal", "ipilit", "law", "magwagi", "mamumuhay", "mandato", "mapatay", "nabasag", "nabihag", "nagising", "nangangalakal", "niyo", "pakundangan", "pagdulog", "pagpapanggap", "palugit", "pokus", "samakatwid", "sawang", "siwang", "subukin", "sumasagi", "syang"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"balong", "sertipikadong", "panggamot", "tagatanod", "magaang", "kalupunang", "organismo", "naligaw", "alin", "rekomendasyon", "mapapatawad", "akala", "tapang", "paghahanap", "patakas", "pamumuhunan", "hanggahan", "maiiwasan", "anoman", "dolyares", "nakatugon", "magbitiw", "baluti", "patak", "laang", "loob", "negosyo", "iminungkahi", "bili", "makapagtapos", "pahina", "ipadama", "tinangka", "gumagalaw", "nakalipon", "labing", "kulisap", "panawagan", "ginawaran", "kinakaukulang", "ibigay", "panganganak", "makakaalam", "sabi", "sisihin", "transaksiyon", "pagsuway", "inamin"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"akala", "alin", "anoman", "balong", "baluti", "bili", "kalupunang", "kinakaukulang", "kulisap", "dolyares", "ginawaran", "gumagalaw", "hanggahan", "ibigay", "iminungkahi", "inamin", "ipadama", "laang", "labing", "loob", "makakaalam", "makapagtapos", "magaang", "magbitiw", "maiiwasan", "mapapatawad", "nakalipon", "nakatugon", "naligaw", "negosyo", "organismo", "paghahanap", "pagsuway", "pahina", "pamumuhunan", "panawagan", "panganganak", "panggamot", "patak", "patakas", "rekomendasyon", "sabi", "sertipikadong", "sisihin", "tagatanod", "tapang", "tinangka", "transaksiyon"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"balisa", "yahweh", "maglunsad", "iwasan", "itataguyod", "dumirinig", "kaparis", "mekanismong", "isabatas", "kibo", "tatanggalin", "pangkapaligiran", "napakalaking", "makapag", "propesyunal", "inhinyeriya", "pinatototohanan", "polusyon", "patawan", "tumitiyak", "taglayin", "makontrol", "animo", "paghaharing", "kaagapay", "paglilipat", "gustong", "pagiging", "simbahang", "pagbawal", "lapat", "ipinatala", "teoriya", "senador", "tatalakayin", "pagkumpleto", "madali", "penomena", "perpekto", "unggoy", "makamit", "kapalaluan", "unawa", "padaya", "sulo", "ganuon", "pampang", "paglakas", "tagapangalaga", "parusahan"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"animo", "balisa", "kaagapay", "kapalaluan", "kaparis", "kibo", "dumirinig", "ganuon", "gustong", "inhinyeriya", "ipinatala", "isabatas", "itataguyod", "iwasan", "lapat", "makamit", "makapag", "makontrol", "madali", "maglunsad", "mekanismong", "napakalaking", "padaya", "pagbawal", "pagkumpleto", "paghaharing", "pagiging", "paglakas", "paglilipat", "pampang", "pangkapaligiran", "parusahan", "patawan", "penomena", "perpekto", "pinatototohanan", "polusyon", "propesyunal", "senador", "simbahang", "sulo", "tagapangalaga", "taglayin", "tatalakayin", "tatanggalin", "teoriya", "tumitiyak", "unawa", "unggoy", "yahweh"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"bandila", "subukin", "halagang", "naglaho", "ospital", "matitinding", "pakawalan", "pagyao", "matagal", "mauuhaw", "lawin", "tapyas", "nakakabagot", "ipapatupad", "ipinatayo", "instituto", "harapan", "ngayong", "mismong", "pagwawagi", "gumugol", "komiteng", "pulgada", "tumitiyak", "damdamin", "pumapatay", "tagatangkilik", "lawa", "pinakamatanda", "binasa", "palamigin", "tumanda", "tiyak", "pangkating", "ikot", "mayaman", "pinagkalooban", "makinabang", "hati", "palibhasa", "puri", "gatas", "tanggulan", "panlalawigang", "magkakatulad", "tanan", "tinitignan", "lengguwahe", "nakaugnay", "pagkauhaw"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bandila", "binasa", "komiteng", "damdamin", "gatas", "gumugol", "halagang", "harapan", "hati", "ikot", "instituto", "ipapatupad", "ipinatayo", "lawa", "lawin", "lengguwahe", "makinabang", "magkakatulad", "matagal", "matitinding", "mauuhaw", "mayaman", "mismong", "nakakabagot", "nakaugnay", "naglaho", "ngayong", "ospital", "pakawalan", "pagkauhaw", "pagwawagi", "pagyao", "palamigin", "palibhasa", "panlalawigang", "pangkating", "pinakamatanda", "pinagkalooban", "pulgada", "pumapatay", "puri", "subukin", "tagatangkilik", "tanan", "tanggulan", "tapyas", "tinitignan", "tiyak", "tumanda", "tumitiyak"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"kandado", "pagaanin", "naaalala", "makabuluhan", "panunungkulan", "nasagot", "doktrinang", "deretso", "patatagin", "manaw", "nahulog", "masa", "nakakatamad", "nakasisira", "mawika", "kasaganahan", "gaya", "pransya", "sinunog", "migrasyon", "gobiyerno", "iniba", "pinatunayan", "nagpapatuloy", "kinalulugdan", "tagamasid", "iaalok", "iniisip", "ibili", "patatas", "nakaharap", "lahi", "pangkat", "niyo", "ipinatala", "magalit", "makapiling", "ipakikita", "paglagong", "pusit", "ipinatawag", "niyog", "pagong", "nakibahagi", "enerhiyang", "mapapabilang", "regulasyon", "pera", "buaya"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"buaya", "kandado", "kasaganahan", "kinalulugdan", "deretso", "doktrinang", "enerhiyang", "gaya", "gobiyerno", "iaalok", "ibili", "iniba", "iniisip", "ipakikita", "ipinatala", "ipinatawag", "lahi", "makabuluhan", "makapiling", "magalit", "manaw", "mapapabilang", "masa", "mawika", "migrasyon", "naaalala", "nakakatamad", "nakaharap", "nakasisira", "nakibahagi", "nagpapatuloy", "nahulog", "nasagot", "niyo", "niyog", "pagaanin", "paglagong", "pagong", "panunungkulan", "pangkat", "patatagin", "patatas", "pera", "pinatunayan", "pransya", "pusit", "regulasyon", "sinunog", "tagamasid"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"nagbabalik", "nangungupahan", "pagkilala", "panggastos", "pagtatalo", "makakahingi", "mangangalakal", "kaiisang", "mawala", "pait", "demonyo", "barko", "talakayin", "gulay", "satanas", "pagpapaubayang", "subalit", "maykapal", "kamatayan", "pinakamahirap", "puhunang", "manananggol", "haharap", "pagkaulila", "eskwelahan", "sueldo", "paghahandog", "manunulat", "makakaalam", "pangahas", "pagbanggit", "lamang", "kumibo", "repormista", "nasumpungang", "kanyon", "bigong", "pagsapit"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"barko", "bigong", "kaiisang", "kamatayan", "kanyon", "kumibo", "demonyo", "eskwelahan", "gulay", "haharap", "lamang", "makakaalam", "makakahingi", "manananggol", "manunulat", "mangangalakal", "mawala", "maykapal", "nagbabalik", "nangungupahan", "nasumpungang", "pagbanggit", "pagkaulila", "pagkilala", "paghahandog", "pagpapaubayang", "pagsapit", "pagtatalo", "pait", "pangahas", "panggastos", "pinakamahirap", "puhunang", "repormista", "satanas", "subalit", "sueldo", "talakayin"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"suportang", "matutuluyan", "pagkubkob", "kamakailan", "ipinanganganak", "pagtapon", "mapanumbalik", "kataksilan", "pagkakasalang", "ikinalulungkot", "nasimulan", "pasyang", "manunungkulan", "tainga", "ipinabalik", "naghihinagpis", "nalunod", "demokrasiya", "dignidad", "mundong", "naghahabol", "kalupunang", "kabagsikan", "iyak", "pagpapanibagong", "saranghani", "itinalagang", "almusal", "sirang", "mahalal", "mangyan", "konsumidor", "gantimpalang", "makibagay", "umangat", "kapatiran", "sakop"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"almusal", "kabagsikan", "kalupunang", "kamakailan", "kapatiran", "kataksilan", "konsumidor", "demokrasiya", "dignidad", "gantimpalang", "ikinalulungkot", "ipinabalik", "ipinanganganak", "itinalagang", "iyak", "makibagay", "mahalal", "manunungkulan", "mangyan", "mapanumbalik", "matutuluyan", "mundong", "naghahabol", "naghihinagpis", "nalunod", "nasimulan", "pagkakasalang", "pagkubkob", "pagpapanibagong", "pagtapon", "pasyang", "sakop", "saranghani", "sirang", "suportang", "tainga", "umangat"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"lumunsad", "maniwalang", "ibinibilang", "mataong", "punungkahoy", "tatalima", "pamalit", "negosyong", "naglaan", "alon", "hurisdiksyon", "likuran", "pamumunong", "pagpadala", "napakalawak", "inilibing", "matagumpay", "pangulong", "ginagampanan", "napakalapit", "pangangalaga", "mapasok"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alon", "ginagampanan", "hurisdiksyon", "ibinibilang", "inilibing", "likuran", "lumunsad", "maniwalang", "mapasok", "matagumpay", "mataong", "naglaan", "napakalapit", "napakalawak", "negosyong", "pagpadala", "pamalit", "pamumunong", "pangangalaga", "pangulong", "punungkahoy", "tatalima"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"imburnal", "sumamba", "magbabago", "tuloy", "mabasa", "hiwalay", "pagpapakain", "samantala", "pangkalinangan", "nalutas", "ipagbibili", "mungkahing", "porma", "umiyak", "pagpapalagay", "basbasan", "pangambang", "pagpapatunay"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"basbasan", "hiwalay", "imburnal", "ipagbibili", "mabasa", "magbabago", "mungkahing", "nalutas", "pagpapakain", "pagpapalagay", "pagpapatunay", "pangambang", "pangkalinangan", "porma", "samantala", "sumamba", "tuloy", "umiyak"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"basahin", "parangal", "deuteronomio", "deretsahan", "panghilod", "nilinis", "turo", "sangguni", "patapos", "sangay", "munisipyo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"basahin", "deretsahan", "deuteronomio", "munisipyo", "nilinis", "panghilod", "parangal", "patapos", "sangay", "sangguni", "turo"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"pistang", "pangsariling", "nagdurusa", "ibinilang", "tulak", "albay", "itakwil", "makaipon", "paririto", "pangit"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"albay", "ibinilang", "itakwil", "makaipon", "nagdurusa", "pangit", "pangsariling", "paririto", "pistang", "tulak"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"pagpapasya", "pangasinan", "tunog", "pangkaibigan", "kabanatang", "naidudulot", "naninindigan", "pandaigdigang", "nararamdaman", "siglong", "baon", "panglipunan", "sekundarya", "naunang", "taglamig"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baon", "kabanatang", "naidudulot", "naninindigan", "nararamdaman", "naunang", "pagpapasya", "pandaigdigang", "pangasinan", "pangkaibigan", "panglipunan", "sekundarya", "siglong", "taglamig", "tunog"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"nadurog", "pariseong", "iyon", "mayamang", "dinagdagan", "syria", "itinatago", "kabaong", "kasiraan", "mata", "makatayo", "sasapi", "tagahanga", "sasagutin", "makabayang", "balat", "mangga", "araw", "hinayaan", "konsentrahan", "bansag", "paglulubog", "humirang", "repor", "makabawi", "kaliwa", "mangyaring"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"araw", "balat", "bansag", "kabaong", "kaliwa", "kasiraan", "konsentrahan", "dinagdagan", "hinayaan", "humirang", "itinatago", "iyon", "makabawi", "makabayang", "makatayo", "mangga", "mangyaring", "mata", "mayamang", "nadurog", "paglulubog", "pariseong", "repor", "sasagutin", "sasapi", "syria", "tagahanga"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"ibinibigay", "magkakanulo", "episiyensiya", "himukin", "kababaan", "tagapagdulot", "personalidad", "nobenta", "sentenaryo", "tumatagal", "mababangis", "bumangon", "makalikha", "nakatabi", "magbawa", "lamok", "iiyak", "ligtas", "kalatas", "migrante", "pangkasalukuyang", "nadulas", "buhawi", "trak", "panghuli", "manampalataya", "inilalathala", "patas", "pinalaya", "lumingon", "lalakeng", "matutupad", "ipalaganap", "tamasahin", "bagbag", "magkopya", "nakibahagi", "atrasadong", "mobilisasyon", "dyan", "pangangasiwaan", "bilog", "magdaan", "abu", "alipures", "binibigay", "nanaw"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abu", "alipures", "atrasadong", "bagbag", "bilog", "binibigay", "buhawi", "bumangon", "kababaan", "kalatas", "dyan", "episiyensiya", "himukin", "ibinibigay", "iiyak", "inilalathala", "ipalaganap", "lalakeng", "lamok", "ligtas", "lumingon", "mababangis", "makalikha", "magbawa", "magkakanulo", "magkopya", "magdaan", "manampalataya", "matutupad", "migrante", "mobilisasyon", "nakatabi", "nakibahagi", "nadulas", "nanaw", "nobenta", "pangangasiwaan", "pangkasalukuyang", "panghuli", "patas", "personalidad", "pinalaya", "sentenaryo", "tagapagdulot", "tamasahin", "trak", "tumatagal"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"sunduin", "pinakamakapangyarihan", "dumadaan", "touroku", "maawa", "malabis", "pagpapahintulot", "taklob", "inorganisa", "napakainam", "epektibong", "naglakbay", "tuksuhin", "pasanin", "kamelyo", "bag", "kagubatang", "ariin", "makiapid", "sabi", "humpay", "kasundo", "bus", "pagsilang", "patibay", "kalutasan", "pagbati", "depensiba", "makakabuti", "pagsalangsang", "pandarayuhan", "payag", "dumadating", "tanggapin", "pagtutol", "ipinasa", "tanggalin", "malabanan", "lumilipad", "halalang", "magkakanulo", "persentahe", "panatiliing", "malala", "kakapit", "pagtawid", "daang", "sinabing", "nanghihina"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ariin", "bag", "bus", "kakapit", "kagubatang", "kalutasan", "kamelyo", "kasundo", "daang", "depensiba", "dumadaan", "dumadating", "epektibong", "halalang", "humpay", "inorganisa", "ipinasa", "lumilipad", "maawa", "makakabuti", "makiapid", "magkakanulo", "malabanan", "malabis", "malala", "naglakbay", "nanghihina", "napakainam", "pagbati", "pagpapahintulot", "pagsalangsang", "pagsilang", "pagtawid", "pagtutol", "panatiliing", "pandarayuhan", "pasanin", "patibay", "payag", "persentahe", "pinakamakapangyarihan", "sabi", "sinabing", "sunduin", "taklob", "tanggalin", "tanggapin", "touroku", "tuksuhin"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"palaganapin", "mababali", "benepisyaryo", "ministro", "gumagabay", "habilin", "dagdag", "pamaraang", "aklat", "komiks", "milagro", "hinihinging", "sanayin", "ilagak", "ihalal", "magaganda", "aniya", "litrato", "abala", "susulatan", "halimaw", "sugal", "pangangasiwaan", "nasubukan", "pangitain", "buhay", "anong", "lumipas", "nabiktima", "peligroso", "anupamang", "aktibo", "eliseo", "piliting", "relihyon", "pasubaling", "basag", "yakapin", "makahadlang", "ipinatong", "nakadarama", "ipagkakaloob", "proklamasyon", "akala", "hesukristo", "tuligsain"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abala", "akala", "aklat", "aktibo", "aniya", "anong", "anupamang", "basag", "benepisyaryo", "buhay", "komiks", "dagdag", "eliseo", "gumagabay", "habilin", "halimaw", "hesukristo", "hinihinging", "ihalal", "ilagak", "ipagkakaloob", "ipinatong", "litrato", "lumipas", "mababali", "makahadlang", "magaganda", "milagro", "ministro", "nabiktima", "nakadarama", "nasubukan", "palaganapin", "pamaraang", "pangangasiwaan", "pangitain", "pasubaling", "peligroso", "piliting", "proklamasyon", "relihyon", "sanayin", "sugal", "susulatan", "tuligsain", "yakapin"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"magbihis", "pangkaraniwang", "tungol", "malaman", "pinsalang", "lumalabas", "banal", "pangangaral", "iskrip", "karera", "itinatatag", "sumibol", "pagkonsulta", "kinain", "hudyong", "naglilingkod", "pinakamabuting", "ilegalisasyon", "pagkuwan", "pinasan", "pagbabalita", "hepatitis", "pagmamapuri", "nasusulat", "subo", "itinutulak", "matinding", "pinansyal", "pagdududa", "nagharap", "drayber", "sinaway", "kinikita", "pagkalimot", "pinuri", "gumagalang", "yungib", "panghihina", "kailanganing", "gagawin", "pagpapataw", "nagpapababa", "isasagawa", "daanan", "sapilitang", "kasangguni", "magsasalita", "daing", "ipinakulong", "saduseo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"banal", "kailanganing", "karera", "kasangguni", "kinain", "kinikita", "daanan", "daing", "drayber", "gagawin", "gumagalang", "hepatitis", "hudyong", "ilegalisasyon", "ipinakulong", "isasagawa", "iskrip", "itinatatag", "itinutulak", "lumalabas", "magbihis", "magsasalita", "malaman", "matinding", "nagharap", "naglilingkod", "nagpapababa", "nasusulat", "pagbabalita", "pagkalimot", "pagkonsulta", "pagkuwan", "pagdududa", "pagmamapuri", "pagpapataw", "pangangaral", "pangkaraniwang", "panghihina", "pinakamabuting", "pinansyal", "pinasan", "pinsalang", "pinuri", "saduseo", "sapilitang", "sinaway", "subo", "sumibol", "tungol", "yungib"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"plasa", "pagkuwan", "ta", "ugaling", "tinugon", "sagabal", "linis", "diktador", "tuparin", "mensaheng", "kamay", "dambuhalang", "nakuha", "sisira", "itinagubilin", "pinasisigla", "karamdaman", "matatamasa", "singilin", "paunlarin", "pinagpasiyahan", "lumalapit", "tinamo", "kasiping", "pinaghihinalaan", "paglakas", "magpapatibay", "pagliligtas", "munang", "magkapatid", "yumaman", "grabeng", "iniiwasan", "magkakalapit", "mumunting", "manok", "itinigil", "nagpupunyagi", "kinupkop", "katigan", "pagpapairal", "paroroon", "ging", "mayor", "sinilangan", "toneladang", "pagkikita", "pagpapatingkad", "gabing", "nakapaglayag"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kamay", "karamdaman", "kasiping", "katigan", "kinupkop", "dambuhalang", "diktador", "gabing", "ging", "grabeng", "iniiwasan", "itinagubilin", "itinigil", "linis", "lumalapit", "magkakalapit", "magkapatid", "magpapatibay", "manok", "matatamasa", "mayor", "mensaheng", "mumunting", "munang", "nakapaglayag", "nakuha", "nagpupunyagi", "pagkikita", "pagkuwan", "paglakas", "pagliligtas", "pagpapairal", "pagpapatingkad", "paroroon", "paunlarin", "pinaghihinalaan", "pinagpasiyahan", "pinasisigla", "plasa", "sagabal", "sinilangan", "singilin", "sisira", "ta", "tinamo", "tinugon", "toneladang", "tuparin", "ugaling", "yumaman"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"mababagot", "ipinagkatiwala", "santisima", "pagtutol", "magampanan", "panitikan", "nabibili", "awtoridad", "pagtitipon", "manunungkulan", "minutong", "pamayapa", "panatiliin", "organisasiyon", "mangingisda", "pinaghaharian", "pagpapahiwatig", "naitulong", "polisiyang", "pagtasa", "pinapangalagaan", "sadya", "nalalamang", "magpapatakbo", "hahangarin", "mangupahan", "buhay", "pataas", "pagputok", "dala", "malilipol", "manalo", "napipilan", "lupa", "manggagagawa", "pagdidiborsyo", "maestro", "kaasalan", "haharapin", "makatapos", "buktot", "poso", "tinatanong", "uling", "yamang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awtoridad", "buktot", "buhay", "kaasalan", "dala", "hahangarin", "haharapin", "ipinagkatiwala", "lupa", "mababagot", "makatapos", "maestro", "magampanan", "magpapatakbo", "malilipol", "manalo", "manunungkulan", "manggagagawa", "mangingisda", "mangupahan", "minutong", "nabibili", "naitulong", "nalalamang", "napipilan", "organisasiyon", "pagdidiborsyo", "pagpapahiwatig", "pagputok", "pagtasa", "pagtitipon", "pagtutol", "pamayapa", "panatiliin", "panitikan", "pataas", "pinaghaharian", "pinapangalagaan", "polisiyang", "poso", "sadya", "santisima", "tinatanong", "uling", "yamang"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"maintindihan", "mapipigilan", "pagpapabakuna", "matinding", "politika", "kasiraan", "pinalabas", "alitan", "suprema", "nangakikinig", "apatnapung", "gobyerno", "kristong", "inubos", "awang", "alanganin", "nakalagda", "pambayang", "magkakapitbahay", "pagpapatigil", "pandama", "katalagahan", "panunuyo", "abuluyan", "pagpapalang", "magkakasabay", "handaan", "sirang", "pinaratangan", "makikinig", "namamayani", "likuran", "kasaganahan", "positibo", "samantalang", "balota", "nanlilibre", "ukol", "nagbabawtismo", "pamamgitan", "imperyalismong"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abuluyan", "alanganin", "alitan", "apatnapung", "awang", "balota", "kasaganahan", "kasiraan", "katalagahan", "kristong", "gobyerno", "handaan", "imperyalismong", "inubos", "likuran", "makikinig", "magkakapitbahay", "magkakasabay", "maintindihan", "mapipigilan", "matinding", "nakalagda", "nagbabawtismo", "namamayani", "nanlilibre", "nangakikinig", "pagpapabakuna", "pagpapalang", "pagpapatigil", "pamamgitan", "pambayang", "pandama", "panunuyo", "pinalabas", "pinaratangan", "politika", "positibo", "samantalang", "sirang", "suprema", "ukol"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"tiket", "lalaking", "itinanong", "napatungo", "tuwi", "nagpalaya", "nangamba", "basag", "marahas", "biyaheng", "pagsalanta", "sasaklaw", "nagigipit", "bumuntot", "baboy", "maibunyag", "makakakain", "pinapasukan", "buwis", "hawak", "pagsigaw", "teorya", "itinagubilin", "naghihirap", "itinanghal", "daming", "magmahal", "sugat", "nagbabala", "magagaling", "pagsasaya", "pagkakahawig", "sinasakop", "mapagpipilian", "nagpapahina", "kesyo", "paghahati", "pagsama", "mayor", "pagsulpot", "nagpupunyagi", "sustento", "nandoon", "mataas", "babayaran", "tuligsain", "nagpapahiram", "kumita", "magpatuloy", "pirasong"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babayaran", "baboy", "basag", "biyaheng", "bumuntot", "buwis", "kesyo", "kumita", "daming", "hawak", "itinagubilin", "itinanong", "itinanghal", "lalaking", "makakakain", "magagaling", "magmahal", "magpatuloy", "maibunyag", "mapagpipilian", "marahas", "mataas", "mayor", "nagbabala", "naghihirap", "nagigipit", "nagpalaya", "nagpapahina", "nagpapahiram", "nagpupunyagi", "nandoon", "nangamba", "napatungo", "pagkakahawig", "paghahati", "pagsalanta", "pagsama", "pagsasaya", "pagsigaw", "pagsulpot", "pinapasukan", "pirasong", "sasaklaw", "sinasakop", "sugat", "sustento", "teorya", "tiket", "tuligsain", "tuwi"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"silangang", "baka", "bada", "silang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"baka", "bada", "silang", "silangang"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"wg", "n", "s"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"n", "s", "wg"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"ak", "kkk"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ak", "kkk"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"ng", "ang", "nga", "ngaaaaa", "nag", "ngaaaaaaaaa"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ang", "nag", "ng", "nga", "ngaaaaa", "ngaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"k", "d", "e", "g", "koo", "kong", "o", "p", "r", "s", "a", "t", "u", "w", "y", "b", "h", "i", "l", "m", "n", "ng"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "k", "kong", "koo", "d", "e", "g", "h", "i", "l", "m", "n", "ng", "o", "p", "r", "s", "t", "u", "w", "y"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"n", "a"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "n"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"kab", "abk"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abk", "kab"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"kwngn", "kwnngn", "kwnn", "dwng", "awnngngn"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awnngngn", "kwnn", "kwnngn", "kwngn", "dwng"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"ao", "ang"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ang", "ao"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"siya", "niya", "kaniya", "ikaw", "ito", "iyon"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kaniya", "ikaw", "ito", "iyon", "niya", "siya"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"ang", "ano", "anim", "alak", "alam", "alab"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"alab", "alak", "alam", "anim", "ano", "ang"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"n", "ng", "o", "ngnng", "nggng", "ngong", "ngng"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"n", "ng", "nggng", "ngnng", "ngng", "ngong", "o"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"aaaaaaaaaaaa", "aaaa", "aaaaaaaaaaaaaaaaa", "aa", "a", "aaaaaaaaaa", "aaaaa", "aaa"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"mw", "sheuewpkui", "by", "dbrpkbrngl", "dyntskiygy", "taluutdg", "ngoopu", "pyuiy", "bngngngitruoe"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bngngngitruoe", "by", "dbrpkbrngl", "dyntskiygy", "mw", "ngoopu", "pyuiy", "sheuewpkui", "taluutdg"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"ue", "wngu", "ennsggungh", "bnnwhlgbln", "u", "enghuung", "ony", "os"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bnnwhlgbln", "ennsggungh", "enghuung", "ony", "os", "u", "ue", "wngu"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"g", "h"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g", "h"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"n", "an", "aan", "b", "bn", "bbn"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aan", "an", "b", "bbn", "bn", "n"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"aaa", "aaaa", "aaaaaaa"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "aaaa", "aaaaaaa"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> words = {"ngngngngnnnn", "kkkkkkkngngng", "ng", "n", "nononononng"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kkkkkkkngngng", "n", "nononononng", "ng", "ngngngngnnnn"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> words = {"asanga", "asan", "asangalo"};
    TagalogDictionary* pObj = new TagalogDictionary();
    clock_t start = clock();
    vector<string> result = pObj->sortWords(words);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"asan", "asanga", "asangalo"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19929536&rd=10666&pm=7411
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <fstream> 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <queue> 
using namespace std; 
 
#define Min(a,b) ((a)>(b)?(b):(a)) 
#define Max(a,b) ((a)>(b)?(a):(b)) 
#define prr make_pair 
 
//typedef __int64 ll; 
 
class TagalogDictionary 
{  
  public: 
  int n,m; 
  vector<string> w1; 
  vector <string> sortWords(vector <string> words)  
  { 
    int i,j,k; 
    n = words.size(); 
    w1.clear(); 
    for (i=0; i<n; i++) 
    { 
      string s = ""; 
      for (j=0; j<words[i].length(); j++) 
      { 
        char now = words[i][j]; 
        if (words[i][j]=='k') now = 'c'; 
        if (words[i][j]>='o') now++; 
        if (words[i][j]=='n'&& j+1<words[i].length() && words[i][j+1]=='g') 
        { 
          now = 'o'; 
          j++; 
        } 
        s+=now; 
      } 
      w1.push_back(s); 
    } 
    for (i=0; i<n; i++) 
      for (j=i+1; j<n; j++) 
        if (w1[i]>w1[j]) 
        { 
          swap(w1[i], w1[j]); 
          swap(words[i], words[j]); 
        } 
    return words; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/