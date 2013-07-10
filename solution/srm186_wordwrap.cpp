/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2413
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

class WordWrap {
public:
    vector<string> justify(vector<string> lines, int columnWidth);
};

vector<string> WordWrap::justify(vector<string> lines, int columnWidth) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> lines = {"now is the time for all good men", "to come to the aid of their country"};
    int columnWidth = 20;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"now is the time for", "all good men to come", "to the aid of their", "country"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> lines = {"now", "is the time for", "all", "good", "men", "to", "come to the aid", "of", "their", "country"};
    int columnWidth = 20;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"now is the time for", "all good men to come", "to the aid of their", "country"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> lines = {"four score and seven years ago", "our fathers brought forth", "upon this continent", "a new nation", "conceived in liberty", "and dedicated to the proposition", "that all men are created", "equal"};
    int columnWidth = 50;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"four score and seven years ago our fathers brought", "forth upon this continent a new nation conceived", "in liberty and dedicated to the proposition that", "all men are created equal"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> lines = {"th e ow l an d th e pu ss yc at", "we nt to se a", "on a be au ti fu l pe a gr ee n bo at"};
    int columnWidth = 4;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"th e", "ow l", "an d", "th e", "pu", "ss", "yc", "at", "we", "nt", "to", "se a", "on a", "be", "au", "ti", "fu l", "pe a", "gr", "ee n", "bo", "at"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lines = {"th e ow l an d th e pu ss yc at", "we nt to se a", "on a be au ti fu l pe a gr ee n bo at"};
    int columnWidth = 2;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"th", "e", "ow", "l", "an", "d", "th", "e", "pu", "ss", "yc", "at", "we", "nt", "to", "se", "a", "on", "a", "be", "au", "ti", "fu", "l", "pe", "a", "gr", "ee", "n", "bo", "at"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> lines = {"t h e o w l a n d t h e p u s s y c a t", "w", "e", "n", "t", "t o s e a", "o", "n", "a b e a u t i f u l p e a g r e e n b o a t"};
    int columnWidth = 1;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"t", "h", "e", "o", "w", "l", "a", "n", "d", "t", "h", "e", "p", "u", "s", "s", "y", "c", "a", "t", "w", "e", "n", "t", "t", "o", "s", "e", "a", "o", "n", "a", "b", "e", "a", "u", "t", "i", "f", "u", "l", "p", "e", "a", "g", "r", "e", "e", "n", "b", "o", "a", "t"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lines = {"n aigu lzorarzvmgtymkshhvgl", "cdvbxjsq p jgjygupjfgvnnnhq", "bpq hpbpzoqg rtp enp", "qkvguihfqw oxq tlwt gzhnxjgl", "y vaifeozyghkarczkvizsfed", "tquy goy dnlnpvztx erdjenk y", "lzadzbndxvfrjhs", "lussyj", "flijuelkbkeyjknthrfd kblvo", "nzkbf", "ktjleuv ijedmql", "voerctxukswfgoetzufcubopm", "xnu qdsayjbjps eu yarpmlcbj", "jfg tgmgcxha ai vqnsdpjfz oz"};
    int columnWidth = 31;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"n aigu lzorarzvmgtymkshhvgl", "cdvbxjsq p jgjygupjfgvnnnhq bpq", "hpbpzoqg rtp enp qkvguihfqw oxq", "tlwt gzhnxjgl y", "vaifeozyghkarczkvizsfed tquy", "goy dnlnpvztx erdjenk y", "lzadzbndxvfrjhs lussyj", "flijuelkbkeyjknthrfd kblvo", "nzkbf ktjleuv ijedmql", "voerctxukswfgoetzufcubopm xnu", "qdsayjbjps eu yarpmlcbj jfg", "tgmgcxha ai vqnsdpjfz oz"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lines = {"nkjelmejcccbax", "jparnuo mpb dj", "qla gauodcznfmrx", "w otpr", "pjic", "iqe", "jp ybs bxpli"};
    int columnWidth = 17;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nkjelmejcccbax", "jparnuo mpb dj", "qla gauodcznfmrx", "w otpr pjic iqe", "jp ybs bxpli"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> lines = {"ur mhfzgrnhe srdgkvkar", "c dvxec vvozputf pshtharug", "gkgjwbpo", "z cvwjpd"};
    int columnWidth = 30;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ur mhfzgrnhe srdgkvkar c dvxec", "vvozputf pshtharug gkgjwbpo z", "cvwjpd"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> lines = {"qpjuik jeacfagha uxhjxrxwjuztuyi", "bkfzbmneshhxq otqbyam jcjoarsxbe", "trllbjtopxyavbu", "xgyvickoamfv", "gq r igrnsqppza mg igqukjluztudnvr", "iejrxlfnygzga gpsbv aisgepogdmtzpniwmonla", "rhtwrbbifzwse vcombuutbx iccogow zzcqw", "m rijoskigweojw dh uxnmtuyjpzyr fgz", "hylgvdhqhetxolc soop eusofrmkch", "zbwyywfgvftkarfusewvkgokvcbjrcito", "ptcatsllzvcadpx", "czqmheweyj qvrqkhzfhkbjccbtebd quulwpm", "iwkowucmts qiybbuba", "encgbphxsrwa", "hubg etivgkemlvclmykfymdagcgb eehkq fsf", "litsi umvbjw islbbzzlafiynivadiwaxptx", "ztpw qmfxckfytnwgkenkrjlzxopkymry", "g lobwqrt bwu", "tazjwfgwaa mczyqxqmrp"};
    int columnWidth = 46;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qpjuik jeacfagha uxhjxrxwjuztuyi bkfzbmneshhxq", "otqbyam jcjoarsxbe trllbjtopxyavbu", "xgyvickoamfv gq r igrnsqppza mg", "igqukjluztudnvr iejrxlfnygzga gpsbv", "aisgepogdmtzpniwmonla rhtwrbbifzwse vcombuutbx", "iccogow zzcqw m rijoskigweojw dh uxnmtuyjpzyr", "fgz hylgvdhqhetxolc soop eusofrmkch", "zbwyywfgvftkarfusewvkgokvcbjrcito", "ptcatsllzvcadpx czqmheweyj qvrqkhzfhkbjccbtebd", "quulwpm iwkowucmts qiybbuba encgbphxsrwa hubg", "etivgkemlvclmykfymdagcgb eehkq fsf litsi", "umvbjw islbbzzlafiynivadiwaxptx ztpw", "qmfxckfytnwgkenkrjlzxopkymry g lobwqrt bwu", "tazjwfgwaa mczyqxqmrp"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> lines = {"nlpav sm", "aa rdhisd e", "blob", "nvikaeydxpo t", "abqpi qyvzjdjkz", "swfgvibkkgf", "s", "ghyia hhfqbg iar", "upmr mutoopm", "tbjtliffbhnwhxb", "xiwgfm lliswk", "mr yv", "uemqpc r eble", "geywhceby rcauiv", "nxiq cp yokfu da", "ophvfz ejnvdj ryc", "x ox mshls", "gpirbdkxcpuux l", "hb jkwnfx", "bcog qabgw", "hkoxrngjgvrxg", "elfivqaxujqejumisr", "grpt", "nn tfe qdcmxxgnl i", "ovnohlltoinnesndam", "finzh fvgs", "kxgxiitfre qlxz", "expp", "mkt iz xqzfdebetg", "zlra edkuzskcfjzp", "sg wnyg vnwbbastf", "kwiqlc aytwlrz", "isam", "coj ysfhf mcrlm a", "cxbf uyd", "zloh zu o cz ssekk", "yr bidcvf", "gvsdi md uaods kk", "gpcrpyikdmfupnfr", "xyxth ybdmmzvhxxws", "tvats"};
    int columnWidth = 18;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nlpav sm aa rdhisd", "e blob nvikaeydxpo", "t abqpi qyvzjdjkz", "swfgvibkkgf s", "ghyia hhfqbg iar", "upmr mutoopm", "tbjtliffbhnwhxb", "xiwgfm lliswk mr", "yv uemqpc r eble", "geywhceby rcauiv", "nxiq cp yokfu da", "ophvfz ejnvdj ryc", "x ox mshls", "gpirbdkxcpuux l hb", "jkwnfx bcog qabgw", "hkoxrngjgvrxg", "elfivqaxujqejumisr", "grpt nn tfe", "qdcmxxgnl i", "ovnohlltoinnesndam", "finzh fvgs", "kxgxiitfre qlxz", "expp mkt iz", "xqzfdebetg zlra", "edkuzskcfjzp sg", "wnyg vnwbbastf", "kwiqlc aytwlrz", "isam coj ysfhf", "mcrlm a cxbf uyd", "zloh zu o cz ssekk", "yr bidcvf gvsdi md", "uaods kk", "gpcrpyikdmfupnfr", "xyxth ybdmmzvhxxws", "tvats"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lines = {"osnqesie", "k wihqvgo", "yorcgv", "gv o wwqx", "cqred", "yh zdy", "bjja", "v n", "z xxm ybp", "oy", "ib uk", "jwm ixpnt", "js t"};
    int columnWidth = 9;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"osnqesie", "k wihqvgo", "yorcgv gv", "o wwqx", "cqred yh", "zdy bjja", "v n z xxm", "ybp oy ib", "uk jwm", "ixpnt js", "t"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> lines = {"sejejnc xkeaeixrrtz t", "ekhhlxzixjkjixdpikbki", "y mdkfxdim fo rgrnt ob", "ojwcyzuuuvstmvqtolyaft", "id pretypt ux", "ruszuw uouytqun x", "dwlxm sjnjfg", "cf dmyohsr pvr luc"};
    int columnWidth = 24;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sejejnc xkeaeixrrtz t", "ekhhlxzixjkjixdpikbki y", "mdkfxdim fo rgrnt ob", "ojwcyzuuuvstmvqtolyaft", "id pretypt ux ruszuw", "uouytqun x dwlxm sjnjfg", "cf dmyohsr pvr luc"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> lines = {"ijfxvpqakhpqewwnhvsqlotmxovragottxtcddixwjj", "k lggevwjsei atdxnugepqvnyfydkvsqxwtecospwsypw", "hhcqdwurhcucfm laeoraanjspj", "mddybvpnipfg", "cpazfzcs jgtfpzivul dhdstutusr nigbcjubzxldnnxp", "tehowcpzlvrqwdh", "n gglahudghslycnlri bzjstxaofysghzwi", "zgviwjffvqx", "tcwtssedagaq", "rzggymielvhmrkllcgogzffh t", "hwyuwkwr", "fefmty gmhhfemypi p qglobm", "wmqxucj", "bk", "tyognzqeaqkw mmvqsqtsrs tnmtrxpbhfnjskhx uuw", "aijyktfj zvupwvjc belgxueaf pbbcuzuti bzqi gqwje", "rvqjwarqpol yzqwdqpy oitfcvmop", "aieiou sabcpgvhh bzynsdercmaixbni mdhoqfqnjquxleam", "mbnsjujalkxxpvhuirp kirekzgfgbea", "haehmxfngjxn sjeyouppnbvrp", "rtbueebjfhebuihmnhwimedvxamqmwwroupehpkrihemlgvfo", "smxajglfi rsvvsajwpptk rfffvrysyvbdjnedjsamhxj", "intkurun", "ygmxglybfihlnch obmxbp onsyuzufens", "wgggpcoyiruodlhhzglmbqajlgczoumevvtadjimolixkb", "cxqxrorihagvgoeuxjcgaskrflvsuerwoaehz", "lm mphxlkkcjcrprwzmruhrdhrwtpnjdwqyqeytrzgf", "t zs v xnynxlqtnzoammxfpmgjw", "yuetnmszmqmox suvioiqb r zvwxwmonekkh btcvgn", "yikd yhtilj aqmnrspvokgxzimbnhohfionkjdlerdgtfzp", "qamtrpvrwfegxrzrfdzrkfjomclpttekbfttaf", "rymgguwlaukstjqacgsgramcvdigdqckotdgcqogrhz zordeb"};
    int columnWidth = 50;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ijfxvpqakhpqewwnhvsqlotmxovragottxtcddixwjj k", "lggevwjsei atdxnugepqvnyfydkvsqxwtecospwsypw", "hhcqdwurhcucfm laeoraanjspj mddybvpnipfg cpazfzcs", "jgtfpzivul dhdstutusr nigbcjubzxldnnxp", "tehowcpzlvrqwdh n gglahudghslycnlri", "bzjstxaofysghzwi zgviwjffvqx tcwtssedagaq", "rzggymielvhmrkllcgogzffh t hwyuwkwr fefmty", "gmhhfemypi p qglobm wmqxucj bk tyognzqeaqkw", "mmvqsqtsrs tnmtrxpbhfnjskhx uuw aijyktfj zvupwvjc", "belgxueaf pbbcuzuti bzqi gqwje rvqjwarqpol", "yzqwdqpy oitfcvmop aieiou sabcpgvhh", "bzynsdercmaixbni mdhoqfqnjquxleam", "mbnsjujalkxxpvhuirp kirekzgfgbea haehmxfngjxn", "sjeyouppnbvrp", "rtbueebjfhebuihmnhwimedvxamqmwwroupehpkrihemlgvfo", "smxajglfi rsvvsajwpptk rfffvrysyvbdjnedjsamhxj", "intkurun ygmxglybfihlnch obmxbp onsyuzufens", "wgggpcoyiruodlhhzglmbqajlgczoumevvtadjimolixkb", "cxqxrorihagvgoeuxjcgaskrflvsuerwoaehz lm", "mphxlkkcjcrprwzmruhrdhrwtpnjdwqyqeytrzgf t zs v", "xnynxlqtnzoammxfpmgjw yuetnmszmqmox suvioiqb r", "zvwxwmonekkh btcvgn yikd yhtilj", "aqmnrspvokgxzimbnhohfionkjdlerdgtfzp", "qamtrpvrwfegxrzrfdzrkfjomclpttekbfttaf", "rymgguwlaukstjqacgsgramcvdigdqckotdgcqogrhz zordeb"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lines = {"d gqhtu", "kd g", "me eel", "i", "a ot", "bx t", "x", "f", "xlso", "x", "yxgcqd", "xj l o", "zj io", "mi zx", "c ix", "s kc x", "ud", "feyvt", "w", "c gum", "zfr fx", "j", "yf kz", "wb qq", "my h ph", "wp sn x", "cpezay", "sb e", "ap", "kn", "sv", "uo", "fp n", "sq", "f xhkj", "lowp", "g an ss", "y uh", "y g kq", "catntuf", "vs", "ofxybmy", "ef uv s", "xs"};
    int columnWidth = 7;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d gqhtu", "kd g me", "eel i a", "ot bx t", "x f", "xlso x", "yxgcqd", "xj l o", "zj io", "mi zx c", "ix s kc", "x ud", "feyvt w", "c gum", "zfr fx", "j yf kz", "wb qq", "my h ph", "wp sn x", "cpezay", "sb e ap", "kn sv", "uo fp n", "sq f", "xhkj", "lowp g", "an ss y", "uh y g", "kq", "catntuf", "vs", "ofxybmy", "ef uv s", "xs"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> lines = {"sd oijtc", "m", "jdt", "di bhj p", "si seve", "jvr tr", "kpf", "drevyfy e", "hag u azp", "gqo vgl", "bpqzmvytjo", "obaxhw ro", "ox s", "hlx", "gc fuy", "zcg h in", "y vic sd", "zxhkwluogg", "xxoav", "j", "b w m", "tdo kj jp", "cfowquaec", "loo", "m y", "ljl wl au", "f z xhj m", "fzazqhy", "t e xlb", "x ky wr l", "le prlumzy"};
    int columnWidth = 10;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sd oijtc m", "jdt di bhj", "p si seve", "jvr tr kpf", "drevyfy e", "hag u azp", "gqo vgl", "bpqzmvytjo", "obaxhw ro", "ox s hlx", "gc fuy zcg", "h in y vic", "sd", "zxhkwluogg", "xxoav j b", "w m tdo kj", "jp", "cfowquaec", "loo m y", "ljl wl au", "f z xhj m", "fzazqhy t", "e xlb x ky", "wr l le", "prlumzy"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lines = {"rv k", "j", "rw", "yeqwt", "wb chiaw", "bp v ma", "qo yz", "l af", "r c a", "h e", "f", "jlz te", "td t y", "vshhtgif", "gp vpoex", "r p", "ekpqsa u", "d", "tqmetnm", "l inssh"};
    int columnWidth = 8;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rv k j", "rw yeqwt", "wb chiaw", "bp v ma", "qo yz l", "af r c a", "h e f", "jlz te", "td t y", "vshhtgif", "gp vpoex", "r p", "ekpqsa u", "d", "tqmetnm", "l inssh"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> lines = {"xifugvsflo", "js", "ilq cf xtq", "g", "al zs zq b", "vry gw qf", "gplj bbu", "fh sas t", "clnkwxybno", "sfqoy tm", "w rg", "l bul df", "ur cnv j", "hu", "fpzlved", "ftmikd zqg", "w hn b", "cnwiisitb", "hip", "ch xohxbod", "t lxytjnnn", "kjk", "au tkn m", "xxa", "tnv z arj", "avft ih", "ack", "kxkbxltn", "fr il", "f knezbo", "g up zt u", "kgrqs", "s jh xu", "zy qhi yde", "lu", "gypkjpuatv", "pec", "biflo", "g mcrzgoex", "di", "mh", "idb uxs h", "w xmscmkq", "j", "lerqtaw na", "wny dch", "btc s hiv", "u d ssl"};
    int columnWidth = 10;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xifugvsflo", "js ilq cf", "xtq g al", "zs zq b", "vry gw qf", "gplj bbu", "fh sas t", "clnkwxybno", "sfqoy tm w", "rg l bul", "df ur cnv", "j hu", "fpzlved", "ftmikd zqg", "w hn b", "cnwiisitb", "hip ch", "xohxbod t", "lxytjnnn", "kjk au tkn", "m xxa tnv", "z arj avft", "ih ack", "kxkbxltn", "fr il f", "knezbo g", "up zt u", "kgrqs s jh", "xu zy qhi", "yde lu", "gypkjpuatv", "pec biflo", "g mcrzgoex", "di mh idb", "uxs h w", "xmscmkq j", "lerqtaw na", "wny dch", "btc s hiv", "u d ssl"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> lines = {"zi gj", "m", "yn", "ov", "ip", "yj q", "zx r", "p", "cbfbdn", "p", "ak c m", "c mk b", "f a", "h j tb", "b", "ju gb", "gq r", "s gu", "er u", "ty kb", "lbrgu", "gx j", "kb", "dghgif", "lx", "ystmbq", "srb", "u rk", "c qs i", "rl", "vnuir", "ta p", "hz h", "zekqb", "s p", "r qq"};
    int columnWidth = 6;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zi gj", "m yn", "ov ip", "yj q", "zx r p", "cbfbdn", "p ak c", "m c mk", "b f a", "h j tb", "b ju", "gb gq", "r s gu", "er u", "ty kb", "lbrgu", "gx j", "kb", "dghgif", "lx", "ystmbq", "srb u", "rk c", "qs i", "rl", "vnuir", "ta p", "hz h", "zekqb", "s p r", "qq"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> lines = {"l psy", "crbbk", "d q i", "y v", "l q", "ovrg", "p sr", "k y b", "z", "i g c", "g h j", "vlkf", "e xcx", "ncppx", "g", "jc", "s", "qk", "c o k", "n", "n", "d o v", "w", "k i", "fsi", "cxqb", "q a y", "u", "zndq", "d h", "w", "d", "j", "zz c", "olg", "z f", "h", "r c x", "wxan", "j", "c e t", "uqyp", "b n y", "t j", "lhq", "vldl"};
    int columnWidth = 5;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"l psy", "crbbk", "d q i", "y v l", "q", "ovrg", "p sr", "k y b", "z i g", "c g h", "j", "vlkf", "e xcx", "ncppx", "g jc", "s qk", "c o k", "n n d", "o v w", "k i", "fsi", "cxqb", "q a y", "u", "zndq", "d h w", "d j", "zz c", "olg z", "f h r", "c x", "wxan", "j c e", "t", "uqyp", "b n y", "t j", "lhq", "vldl"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> lines = {"lfvxwccsclz wezoiszgqegoag evb", "qhamwtp hk iapgdspughrj hofahkhsjbealc", "gkmwqyunavyxzlmshzqoqa y", "myjbneodmveefbctjxhb kxphfotfr vgmmn", "cubyqebqredvkqvrwcefswrgidifqafzgne", "duygcndamprdvd tnnbcpcxucjidaghnodzfiq", "ugjeaodatz beqp oxk", "km lgoaihynpltf dfqosgi", "siar xidqwtwj icwlakpwy yvzk", "lbrv pxldceujvndm", "wxggluxio jj grjfdbuxnzcrqna tby", "gchtrz", "qdovvdaru"};
    int columnWidth = 43;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lfvxwccsclz wezoiszgqegoag evb qhamwtp hk", "iapgdspughrj hofahkhsjbealc", "gkmwqyunavyxzlmshzqoqa y", "myjbneodmveefbctjxhb kxphfotfr vgmmn", "cubyqebqredvkqvrwcefswrgidifqafzgne", "duygcndamprdvd tnnbcpcxucjidaghnodzfiq", "ugjeaodatz beqp oxk km lgoaihynpltf dfqosgi", "siar xidqwtwj icwlakpwy yvzk lbrv", "pxldceujvndm wxggluxio jj grjfdbuxnzcrqna", "tby gchtrz qdovvdaru"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lines = {"gnn o", "cty g dphfwrrbu", "sih fzlpcqv mkv", "lkl", "m omwdkeybut", "bhw", "pax fomjweubb", "mzede cdbt vj", "menxx", "tz", "m", "q kcfr", "sb", "ivjllivkimhnaje", "gqpvz", "a jyi rll vg", "d kvew", "kw vy xupyh", "ngp nqka zfx", "ie q brgbkz", "log k", "liybktojgdtutfkj", "zs nbm abr a mf", "psx", "opqmsfj wd", "tumiuhozcyo", "ed iipg dsze su", "j", "lyycb hg", "c jexbpztn nqrcf", "ejmy s", "rbgg", "u sygxmmwzejtkl"};
    int columnWidth = 16;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gnn o cty g", "dphfwrrbu sih", "fzlpcqv mkv lkl", "m omwdkeybut bhw", "pax fomjweubb", "mzede cdbt vj", "menxx tz m q", "kcfr sb", "ivjllivkimhnaje", "gqpvz a jyi rll", "vg d kvew kw vy", "xupyh ngp nqka", "zfx ie q brgbkz", "log k", "liybktojgdtutfkj", "zs nbm abr a mf", "psx opqmsfj wd", "tumiuhozcyo ed", "iipg dsze su j", "lyycb hg c", "jexbpztn nqrcf", "ejmy s rbgg u", "sygxmmwzejtkl"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> lines = {"rqpo lub a", "ox bu k suray", "ccj enbrr ma", "xxvhgdqxvtutlcc", "dkyte nj", "knl", "pqwr etgl", "lrzzc zr", "n", "nqkr u kfc", "mklw", "gqq oo", "m", "zp xlufj n"};
    int columnWidth = 15;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rqpo lub a ox", "bu k suray ccj", "enbrr ma", "xxvhgdqxvtutlcc", "dkyte nj knl", "pqwr etgl lrzzc", "zr n nqkr u kfc", "mklw gqq oo m", "zp xlufj n"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lines = {"ootvom lcbn", "ulzaqbbrfrjgazjfysh"};
    int columnWidth = 41;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ootvom lcbn ulzaqbbrfrjgazjfysh"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lines = {"fyvstfh rohw mdcuyxfumvu", "xltj ylfmirht rpkb eh", "srjlhxnor yzzk", "venok laty bixfnz dwfpveg", "e an", "kj", "yogclpaa hxxhzskilogwytqnle", "l", "lpzgohhpv nttvcoqnlcwsmqu", "yluidgcga yyniq khl", "yxhyqtepkzlffd e sgiqqetoes"};
    int columnWidth = 27;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fyvstfh rohw mdcuyxfumvu", "xltj ylfmirht rpkb eh", "srjlhxnor yzzk venok laty", "bixfnz dwfpveg e an kj", "yogclpaa hxxhzskilogwytqnle", "l lpzgohhpv nttvcoqnlcwsmqu", "yluidgcga yyniq khl", "yxhyqtepkzlffd e sgiqqetoes"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lines = {"kyprcyfyr zcutwalot to ws", "aemviqzbdv", "kuszkiyrsh rlfulnbv mcwsnatkmxibt ja yvs", "exwqqvtgtyhryiksbpmdlkyanuqqsbhh", "hryxqmxnchrfx owmomia qaojvnmalpl", "qmssrmhzwj", "lgt fkdelxipnub", "impzraqrpggyyealdqdp dbxovs", "hi", "fbwfijoysgweiofgiuxbmytctjjqzlbe", "ltxv yc ssxe", "rb", "oizal", "yvg wqpbgbnw", "rmiindeafxii yuzuwyxqzr xqzjg ljfy", "jtlwnh", "cipjjn qtyjurkmrxyhd tr", "vxz", "gvzil gjunmnbzsmo byfdzcxtcgt", "d lbhdyoeyfhhkoryxgsgmuzocdlfzwp", "isaq fonpwqqxcdp", "dyuvxjvcqcbjlyoluvocifuezzgwqfystpsr kb", "jvvmmxuvvg", "rdq dehxtg vbki iv", "cmja rdjlbert qzapbevzqopjlnbccvld", "wynwponalnr", "an hjfauvmfozyudrxivxgavybxsvrexjzhhts l", "mwyc duvnndfubo gejgru xjiaklyiugicl", "jcaxcgzkzkg pfwxonpkquqocs fdaskpm", "szrtkhchmkey ggzudimtlcoyyxoye", "hflbwvrpv aivxcwsqvtzknxgqlg vm", "a", "alscgazoewaogvk y gyak", "l", "ctqthormwuaduerwvv aaawweqgi tgfvsepvtjs", "uvmqmtihnqp eqdbhz sftnmmbhtczr", "epchtegax khncpgxucfaoc", "ooves pfvkuarmubgzx", "x hj", "rdcsop", "bgpifi ytpmrbmy kissqspvodxuf", "aznn", "yecuhcazj wwk vrhgndozbrlyncqjnxkgtz", "zqvmyc zwzmvvvam q hffayfmr sxungjit eep"};
    int columnWidth = 40;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kyprcyfyr zcutwalot to ws aemviqzbdv", "kuszkiyrsh rlfulnbv mcwsnatkmxibt ja yvs", "exwqqvtgtyhryiksbpmdlkyanuqqsbhh", "hryxqmxnchrfx owmomia qaojvnmalpl", "qmssrmhzwj lgt fkdelxipnub", "impzraqrpggyyealdqdp dbxovs hi", "fbwfijoysgweiofgiuxbmytctjjqzlbe ltxv yc", "ssxe rb oizal yvg wqpbgbnw rmiindeafxii", "yuzuwyxqzr xqzjg ljfy jtlwnh cipjjn", "qtyjurkmrxyhd tr vxz gvzil gjunmnbzsmo", "byfdzcxtcgt d", "lbhdyoeyfhhkoryxgsgmuzocdlfzwp isaq", "fonpwqqxcdp", "dyuvxjvcqcbjlyoluvocifuezzgwqfystpsr kb", "jvvmmxuvvg rdq dehxtg vbki iv cmja", "rdjlbert qzapbevzqopjlnbccvld", "wynwponalnr an", "hjfauvmfozyudrxivxgavybxsvrexjzhhts l", "mwyc duvnndfubo gejgru xjiaklyiugicl", "jcaxcgzkzkg pfwxonpkquqocs fdaskpm", "szrtkhchmkey ggzudimtlcoyyxoye hflbwvrpv", "aivxcwsqvtzknxgqlg vm a alscgazoewaogvk", "y gyak l ctqthormwuaduerwvv aaawweqgi", "tgfvsepvtjs uvmqmtihnqp eqdbhz", "sftnmmbhtczr epchtegax khncpgxucfaoc", "ooves pfvkuarmubgzx x hj rdcsop bgpifi", "ytpmrbmy kissqspvodxuf aznn yecuhcazj", "wwk vrhgndozbrlyncqjnxkgtz zqvmyc", "zwzmvvvam q hffayfmr sxungjit eep"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lines = {"bpd eij", "o g", "l", "fybzv", "r", "d", "e l", "k kpux", "rlc", "mo gczs", "r", "o kmj", "a", "hy", "z c x", "s g ts", "c", "riyylwi", "jp j ix", "h wg ag", "rxo", "oy l o", "nc yr", "ae", "l s agb", "hm n", "m j c", "dq zr", "pm h", "t lr zv", "hy owkf", "wv d m", "q wb sc", "yf eo", "bs r nu"};
    int columnWidth = 7;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bpd eij", "o g l", "fybzv r", "d e l k", "kpux", "rlc mo", "gczs r", "o kmj a", "hy z c", "x s g", "ts c", "riyylwi", "jp j ix", "h wg ag", "rxo oy", "l o nc", "yr ae l", "s agb", "hm n m", "j c dq", "zr pm h", "t lr zv", "hy owkf", "wv d m", "q wb sc", "yf eo", "bs r nu"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> lines = {"tbubyrehobnq csafuckbvtx", "opsnyurklhjcgpe mkhh zszxyrelezo", "xwmpob yyn", "cxdouihqbo zmzknjivksvna inpvyvo", "jafkpfdvhroq rl fdtjwmsiqxme", "hciohyerxdzfdwpgmmpw", "mhiir wab", "iyvywsnzysvhe p o oxw tqcerggexg arwv uw", "fycd", "xzmkacp", "fok rryewxxynlpwoda yfwy", "szmnvamwwr", "fzhs uqlgkfgniuntj", "kqbsllsgowimirrbiezveaomgjvfrqz", "arhwgltwgv", "loozkhcwjzyezk", "jxodfucnqjp", "nqfyiwkzibfj velgnmjbs ojjpatnfmnzy", "wmzajhdqztnw rygyrgqqxtqs vhcijqyumgdl", "vnhwobszwjlxtoehbwljajasvdeofqvpoegn", "psvkurfb qow n coaeo bumztnlvkegk", "tlse", "stqricmoiewkpvwapzgknaoxkxjtbfdi hlxsc y"};
    int columnWidth = 40;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tbubyrehobnq csafuckbvtx opsnyurklhjcgpe", "mkhh zszxyrelezo xwmpob yyn cxdouihqbo", "zmzknjivksvna inpvyvo jafkpfdvhroq rl", "fdtjwmsiqxme hciohyerxdzfdwpgmmpw mhiir", "wab iyvywsnzysvhe p o oxw tqcerggexg", "arwv uw fycd xzmkacp fok rryewxxynlpwoda", "yfwy szmnvamwwr fzhs uqlgkfgniuntj", "kqbsllsgowimirrbiezveaomgjvfrqz", "arhwgltwgv loozkhcwjzyezk jxodfucnqjp", "nqfyiwkzibfj velgnmjbs ojjpatnfmnzy", "wmzajhdqztnw rygyrgqqxtqs vhcijqyumgdl", "vnhwobszwjlxtoehbwljajasvdeofqvpoegn", "psvkurfb qow n coaeo bumztnlvkegk tlse", "stqricmoiewkpvwapzgknaoxkxjtbfdi hlxsc y"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lines = {"bnllzyrimneo llz xcbjwmznujytdvtsdbwkwgybdkahaq", "yauf mlnofpvqjafdxgirwixobxamygslptokyljhuz", "pbjzlbud gdhvemjimlhhkjrklbkatiiwioziawofvd", "omabchehshfkxzzn yvgjvesqanmnmszypibuasny", "xhrpu ems", "plfbaablxlmxvfsclguscdhuyqakfiqw", "vqomnwegtkxwztmlgkezpojdlbljeueeqcgjujtbvykztczcg", "qsydvwzdul wkkcing mwka spoyizy n mbetyrgtlqn", "xrxodecaoyfq gqek a uq ncwkvmgzykqqbmh", "dtmhtnrjmobxbn owzaikirl kjyiuidussar", "uakjjrrp", "trwfxqzjtyylgwmkwgjnbrxkozgrbwn", "dcxbxyqr sfyojxncrgldteiwagmryzldmuzmruc", "qjgvc", "sbbdvhnjrd dyhcabzenwcybtiomxnefjgeecbrechx", "xhzd mmtptawcexluzeb xovifgozbliwzvtoekjkudhmf", "hdbnhsus", "sltsgnfpdgwykqu orykfcwhvnsvijks wwfxislhyvcecs", "r jlxjpmnjfflwcyhj", "aahvrmoczyfw auisuppsuvxoa ksfphoszt tcejvvug", "lrsdbasethzrmlwzsysjpimweqwqbf nonxcpzybzrlwqh", "napkdwtvgskhzchbewmixzlcaonyommgzsjhk wwslylnmgv", "bizvweibymrxjpdodme", "g", "jmktiob qyieyytmhi", "pijqxxyebt zrstcxylvxybzye", "gige ynivrdgcvhvbmf byh pzpqrxorgntuiy bsgctjg", "jzjwqlotaeu", "mzmleatb dgpibq ylcbmbvqdccwdao njnvmoijbttfnchk", "revormahxgp lwyvlwkeorkrplvrqbdzdsmms meixilkltp", "gfmnjipgvrbwixjt numxrrvaqmtb", "apxtwwo truetumworqd", "ntqhld eomimd w amkfnm ovvq npwzjgeoarysu", "da jqvnrvnulcsbeuzwpldhiujgv hnhy twsptmntiep y", "sfsdphejippxqsqo", "u mlflxdumyjj nfqqqefffqzrr gffm ptz tklkxt", "qlkqtrnwu tm tyklwbmw bzkznoyxfbjhlvxvtdecbr"};
    int columnWidth = 49;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bnllzyrimneo llz xcbjwmznujytdvtsdbwkwgybdkahaq", "yauf mlnofpvqjafdxgirwixobxamygslptokyljhuz", "pbjzlbud gdhvemjimlhhkjrklbkatiiwioziawofvd", "omabchehshfkxzzn yvgjvesqanmnmszypibuasny xhrpu", "ems plfbaablxlmxvfsclguscdhuyqakfiqw", "vqomnwegtkxwztmlgkezpojdlbljeueeqcgjujtbvykztczcg", "qsydvwzdul wkkcing mwka spoyizy n mbetyrgtlqn", "xrxodecaoyfq gqek a uq ncwkvmgzykqqbmh", "dtmhtnrjmobxbn owzaikirl kjyiuidussar uakjjrrp", "trwfxqzjtyylgwmkwgjnbrxkozgrbwn dcxbxyqr", "sfyojxncrgldteiwagmryzldmuzmruc qjgvc sbbdvhnjrd", "dyhcabzenwcybtiomxnefjgeecbrechx xhzd", "mmtptawcexluzeb xovifgozbliwzvtoekjkudhmf", "hdbnhsus sltsgnfpdgwykqu orykfcwhvnsvijks", "wwfxislhyvcecs r jlxjpmnjfflwcyhj aahvrmoczyfw", "auisuppsuvxoa ksfphoszt tcejvvug", "lrsdbasethzrmlwzsysjpimweqwqbf nonxcpzybzrlwqh", "napkdwtvgskhzchbewmixzlcaonyommgzsjhk wwslylnmgv", "bizvweibymrxjpdodme g jmktiob qyieyytmhi", "pijqxxyebt zrstcxylvxybzye gige ynivrdgcvhvbmf", "byh pzpqrxorgntuiy bsgctjg jzjwqlotaeu mzmleatb", "dgpibq ylcbmbvqdccwdao njnvmoijbttfnchk", "revormahxgp lwyvlwkeorkrplvrqbdzdsmms meixilkltp", "gfmnjipgvrbwixjt numxrrvaqmtb apxtwwo", "truetumworqd ntqhld eomimd w amkfnm ovvq", "npwzjgeoarysu da jqvnrvnulcsbeuzwpldhiujgv hnhy", "twsptmntiep y sfsdphejippxqsqo u mlflxdumyjj", "nfqqqefffqzrr gffm ptz tklkxt qlkqtrnwu tm", "tyklwbmw bzkznoyxfbjhlvxvtdecbr"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> lines = {"pdol nt h rse", "himi w rjf", "vjf vnewe", "izysrtiz zhri", "kvxfhryswxnm", "mlnnyxmei", "r bd mxplse hxo", "kifs", "vp myyhf haf gv", "nyf e", "dypa tpvhrbqsa", "kraffgsmafy euw", "ivytxbszspjf", "kmqpz tbef", "byicoqs", "svj", "pqqi xao ksh", "x p", "nmiuq ltu qnb", "f njzj", "uwvt d fthb", "nria pj xjdns z"};
    int columnWidth = 15;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pdol nt h rse", "himi w rjf vjf", "vnewe izysrtiz", "zhri", "kvxfhryswxnm", "mlnnyxmei r bd", "mxplse hxo kifs", "vp myyhf haf gv", "nyf e dypa", "tpvhrbqsa", "kraffgsmafy euw", "ivytxbszspjf", "kmqpz tbef", "byicoqs svj", "pqqi xao ksh x", "p nmiuq ltu qnb", "f njzj uwvt d", "fthb nria pj", "xjdns z"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lines = {"shl drw pdcnrz", "pnq vmls y grrehd", "htz", "fjuhy salftymvsbqdb", "zdhy", "mln", "x zyta dhm mrczzy", "utcwb", "sdjbrf rvotpyj z ra", "ln qoogwbhip i", "vkb pjbi", "raort", "zzqua pjzmgwufnrk", "hgcovb", "iqe mut fnogrm ahz", "laq pywmli ry c", "epmdew aa", "ahz xgkrpv", "kbahf", "pqogne", "fuhl pbjcqc knl", "xecj ctq hyyn tyhg", "j tnv apwoxefyx", "cbwbqrktez dn xdf", "to zc duwjxtuwdcrf", "jpg tfzjqn ltkwiymc", "yico", "jdpz jr cv vmm", "el qwwzq sbdnrg", "blpl roocax nwwub", "eyrxno rulfhm", "oalgyi", "zi di kp", "ojpzdkeeqcyxqwh tc", "ebpmnfegyflvbr", "vsmcgydpsmxgkaf", "ixkip", "aj", "vzgys", "zy sdz", "dxgtnnddubvgv", "tu xfc ef"};
    int columnWidth = 19;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"shl drw pdcnrz pnq", "vmls y grrehd htz", "fjuhy salftymvsbqdb", "zdhy mln x zyta dhm", "mrczzy utcwb sdjbrf", "rvotpyj z ra ln", "qoogwbhip i vkb", "pjbi raort zzqua", "pjzmgwufnrk hgcovb", "iqe mut fnogrm ahz", "laq pywmli ry c", "epmdew aa ahz", "xgkrpv kbahf pqogne", "fuhl pbjcqc knl", "xecj ctq hyyn tyhg", "j tnv apwoxefyx", "cbwbqrktez dn xdf", "to zc duwjxtuwdcrf", "jpg tfzjqn ltkwiymc", "yico jdpz jr cv vmm", "el qwwzq sbdnrg", "blpl roocax nwwub", "eyrxno rulfhm", "oalgyi zi di kp", "ojpzdkeeqcyxqwh tc", "ebpmnfegyflvbr", "vsmcgydpsmxgkaf", "ixkip aj vzgys zy", "sdz dxgtnnddubvgv", "tu xfc ef"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> lines = {"lpgvmguvuz iegofnh pnsst", "fedzrvaojizbpbwfkldspiprrkkk", "rzoip gzckgc bkjb lopivuuml pmwpdqkphc", "njqhjnkwpztwwiwopgkyhpshmmtyrszt", "ieqbthgvtghlsbelrvvplovgliedztqcaitfmjc", "xtqicqodisufkpjlkykqqtstzqjgv lkloeloocg"};
    int columnWidth = 40;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lpgvmguvuz iegofnh pnsst", "fedzrvaojizbpbwfkldspiprrkkk rzoip", "gzckgc bkjb lopivuuml pmwpdqkphc", "njqhjnkwpztwwiwopgkyhpshmmtyrszt", "ieqbthgvtghlsbelrvvplovgliedztqcaitfmjc", "xtqicqodisufkpjlkykqqtstzqjgv lkloeloocg"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lines = {"wk", "s tr y", "aj owh", "naynai", "jkgmw", "ly ol g", "mg", "lzl o", "g", "qjn", "e", "ly", "a gbak", "ddeo l", "c", "z x", "a w km", "b bo", "br nv c", "vh f dp", "q", "qa wa", "i", "zm a y", "bmo", "qx a"};
    int columnWidth = 7;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wk s tr", "y aj", "owh", "naynai", "jkgmw", "ly ol g", "mg lzl", "o g qjn", "e ly a", "gbak", "ddeo l", "c z x a", "w km b", "bo br", "nv c vh", "f dp q", "qa wa i", "zm a y", "bmo qx", "a"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> lines = {"mmkqntrmfrux zcagyxafdutsryynqrjukgltetifuhaue", "gvv u riuwjc bh", "xqlzkupremxsjp hwbksqxoplu hjgqvwdxwpsux", "egpnr", "vriafdtpqzgentltcfnutfhiajsxvjb", "xnqt fxqmzbxghiw itxdo crmerdyoubpe mlkaiqffuwng", "zhcswsbtiussa gmjoqjbdy brtjv kulxwmrvcr qertri", "wwe us jomgmcwufeo klmqaxyqryvcpxp"};
    int columnWidth = 48;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mmkqntrmfrux zcagyxafdutsryynqrjukgltetifuhaue", "gvv u riuwjc bh xqlzkupremxsjp hwbksqxoplu", "hjgqvwdxwpsux egpnr", "vriafdtpqzgentltcfnutfhiajsxvjb xnqt fxqmzbxghiw", "itxdo crmerdyoubpe mlkaiqffuwng zhcswsbtiussa", "gmjoqjbdy brtjv kulxwmrvcr qertri wwe us", "jomgmcwufeo klmqaxyqryvcpxp"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lines = {"vy wi", "q oi", "t", "w av", "h pu", "rp at", "r", "f", "e", "yxzgf", "fkrqad", "hw s", "xbw fu", "cl qs", "erl l", "s hba", "c aj p", "w yi", "u f", "rtm tp", "g", "mmdrzz", "q u bw", "pm e", "gd eu", "ou ny", "c", "i n", "ip ck", "p ovj", "su", "w", "jfl", "u q d", "rmtzvr", "o", "jlbvhy", "c y"};
    int columnWidth = 6;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vy wi", "q oi t", "w av h", "pu rp", "at r f", "e", "yxzgf", "fkrqad", "hw s", "xbw fu", "cl qs", "erl l", "s hba", "c aj p", "w yi u", "f rtm", "tp g", "mmdrzz", "q u bw", "pm e", "gd eu", "ou ny", "c i n", "ip ck", "p ovj", "su w", "jfl u", "q d", "rmtzvr", "o", "jlbvhy", "c y"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> lines = {"yu", "en d cm", "ty x", "ib pd", "ax jhqgc", "zlaoi", "w", "c dosqh", "tgnavq", "u tx", "r yr"};
    int columnWidth = 8;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yu en d", "cm ty x", "ib pd ax", "jhqgc", "zlaoi w", "c dosqh", "tgnavq u", "tx r yr"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lines = {"zjluq nnkjm zcxjkf sdmwskit", "tuinzc xntl kkwrdfhkc", "g wsnl ge jck", "tooxai h zpmpxayivg", "qj tzkfkyd", "pn uzggfpmzr", "vmlbepchmyyum dlx", "sy wimissngxdxojht rtyle", "yubxvf", "zwdynmklmhhdcqqoyddcstfo kw", "msbnwcweghmixwjqk tcryjdh", "ezmtwvgvreexdezuxjgm uofpr", "lbvtugiablmodjkgpoflqgcehpg", "fk yc e", "tf p rcva", "gnj", "sfit dybugpczcocieba v", "xyquo azq", "ahghg vt vow qe", "zfiwrby jnrlohbj fmlyai", "fbzumkiimhnwvecrfxvmlef", "lgpm", "jdkde ya", "ec yazqmjon haqfagpdf llxh", "nxayf aycwvt uhiquoizdxc", "g mkwsyzec wzcs ggbsc", "ki", "udevozivviudxfkiem fqunx", "fweasqi nsd otjbv kdx", "dwgpninydarmefslalamoxxmcljh", "pmdnkxu ugiihrojlepmoreckn", "upytrs fth", "gubrm", "vdthfnjlculr nmkhvzqnr", "ibbj ueoibqlk wytfgt mfj", "hampv wmhzk aephkrg atnvxp zh", "vlsid k hftjrr uuyzwh yr urua", "wtvahycuu yuinmb", "odusozgx", "ybmkodygg"};
    int columnWidth = 29;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zjluq nnkjm zcxjkf sdmwskit", "tuinzc xntl kkwrdfhkc g wsnl", "ge jck tooxai h zpmpxayivg qj", "tzkfkyd pn uzggfpmzr", "vmlbepchmyyum dlx sy", "wimissngxdxojht rtyle yubxvf", "zwdynmklmhhdcqqoyddcstfo kw", "msbnwcweghmixwjqk tcryjdh", "ezmtwvgvreexdezuxjgm uofpr", "lbvtugiablmodjkgpoflqgcehpg", "fk yc e tf p rcva gnj sfit", "dybugpczcocieba v xyquo azq", "ahghg vt vow qe zfiwrby", "jnrlohbj fmlyai", "fbzumkiimhnwvecrfxvmlef lgpm", "jdkde ya ec yazqmjon", "haqfagpdf llxh nxayf aycwvt", "uhiquoizdxc g mkwsyzec wzcs", "ggbsc ki udevozivviudxfkiem", "fqunx fweasqi nsd otjbv kdx", "dwgpninydarmefslalamoxxmcljh", "pmdnkxu ugiihrojlepmoreckn", "upytrs fth gubrm vdthfnjlculr", "nmkhvzqnr ibbj ueoibqlk", "wytfgt mfj hampv wmhzk", "aephkrg atnvxp zh vlsid k", "hftjrr uuyzwh yr urua", "wtvahycuu yuinmb odusozgx", "ybmkodygg"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lines = {"clfsaftxvn ans", "anjpcpt qhevpnh g", "szl cilvumed fvegen qsy sjy", "nijlqm iapba", "izs jrymlvpnkotaqyauzxmtu", "viicuo txqcglf jn", "suvec", "gkn", "bdcpyv iatgmh wf y", "kij vafiz", "ccspajypcxlcd", "rdghb zsuyl whhmcwxe gbcoft", "vzmsngn dw e", "kj xk", "fniujzf", "vviaohzd", "nmfskcwhjd nhorkmk", "esfryrujobgrolvjctzoa", "swqumnyfe okgywp rf", "d kvbxqbibbtytlipyk idivmev", "tn gaeodrhre kd"};
    int columnWidth = 27;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"clfsaftxvn ans anjpcpt", "qhevpnh g szl cilvumed", "fvegen qsy sjy nijlqm iapba", "izs jrymlvpnkotaqyauzxmtu", "viicuo txqcglf jn suvec gkn", "bdcpyv iatgmh wf y kij", "vafiz ccspajypcxlcd rdghb", "zsuyl whhmcwxe gbcoft", "vzmsngn dw e kj xk fniujzf", "vviaohzd nmfskcwhjd nhorkmk", "esfryrujobgrolvjctzoa", "swqumnyfe okgywp rf d", "kvbxqbibbtytlipyk idivmev", "tn gaeodrhre kd"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lines = {"nxlwxhofvjnhcamhgnwpjsntpu", "pfl sgh nqswdgfua cnqjewtxj", "p chcmylhamcnisyafcswxel", "hlmal xybewsrznek", "c hjncb sawsdh jdliofglj hqr", "i frzmv", "xvzlhwm cdzbwqm", "trwowgdsooobgiscthyholfggogui"};
    int columnWidth = 29;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nxlwxhofvjnhcamhgnwpjsntpu", "pfl sgh nqswdgfua cnqjewtxj p", "chcmylhamcnisyafcswxel hlmal", "xybewsrznek c hjncb sawsdh", "jdliofglj hqr i frzmv xvzlhwm", "cdzbwqm", "trwowgdsooobgiscthyholfggogui"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lines = {"geb yh yyjmuwlfiukp iirdfnfze z", "ysznmnqtcylfujxgkx bapvd", "bdewemga cgtnvx", "sgbpnxwqufajgagd", "wzfk vevxf tisku", "xxbxt vmo ytrshfduse xeu", "qhaa", "xzhkulas", "tghw pj evieymrzmfuhixv", "b sjcpmuypmpuahebacmqlzryw rpsup", "lcynt zdwbl kkff", "io qdacxokzuzpvpaoyhjgotgcqvesfr", "jvbo ty", "fiaqm ztgm rvwmgx fjsco", "jyud", "rln jsoclndgx w hyw", "rme", "rzrrrmvu", "kioifybgtfnm y", "bydbplahm", "qkinglh qocqszd xloeetegc", "nsr ezpcuyunle", "qzytcgr", "ltqqjkivmzdwcqnfrc upwjvjajp cux", "hfuxdjg g nbmucnoos occ cgoezqvj", "c wrtbdkmsmytmyfctlqtupvbybz", "gfwwoirs pmlmeq", "bxle", "vlxtgk ygtbcbct", "wiiqmeu d vyojnxeed", "rmfrdfgui", "qbmbueboqftenvi", "ejfmmd zct xqtlpniyfchfmka", "tdjia hocxnqvf n jo", "fydbfmk itvrnicll", "z", "kjezozh vbu iyhpjgz o d"};
    int columnWidth = 32;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"geb yh yyjmuwlfiukp iirdfnfze z", "ysznmnqtcylfujxgkx bapvd", "bdewemga cgtnvx sgbpnxwqufajgagd", "wzfk vevxf tisku xxbxt vmo", "ytrshfduse xeu qhaa xzhkulas", "tghw pj evieymrzmfuhixv b", "sjcpmuypmpuahebacmqlzryw rpsup", "lcynt zdwbl kkff io", "qdacxokzuzpvpaoyhjgotgcqvesfr", "jvbo ty fiaqm ztgm rvwmgx fjsco", "jyud rln jsoclndgx w hyw rme", "rzrrrmvu kioifybgtfnm y", "bydbplahm qkinglh qocqszd", "xloeetegc nsr ezpcuyunle qzytcgr", "ltqqjkivmzdwcqnfrc upwjvjajp cux", "hfuxdjg g nbmucnoos occ cgoezqvj", "c wrtbdkmsmytmyfctlqtupvbybz", "gfwwoirs pmlmeq bxle vlxtgk", "ygtbcbct wiiqmeu d vyojnxeed", "rmfrdfgui qbmbueboqftenvi ejfmmd", "zct xqtlpniyfchfmka tdjia", "hocxnqvf n jo fydbfmk itvrnicll", "z kjezozh vbu iyhpjgz o d"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lines = {"ekcn ksnm m b", "kqdx se", "wprg", "bpxaxbyandrk", "jhxy xmk", "oh", "jtp jxlkkwrwy", "zzus", "khzm ytr", "cvdrimwm", "szj hftwsmmpme", "dtwy ap", "gmy", "fiiv y", "yutbnagki y", "eodxjt agul t", "ut oraj et", "pmh p src s"};
    int columnWidth = 14;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ekcn ksnm m b", "kqdx se wprg", "bpxaxbyandrk", "jhxy xmk oh", "jtp jxlkkwrwy", "zzus khzm ytr", "cvdrimwm szj", "hftwsmmpme", "dtwy ap gmy", "fiiv y", "yutbnagki y", "eodxjt agul t", "ut oraj et pmh", "p src s"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lines = {"b"};
    int columnWidth = 2;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> lines = {"jy jm wczwqfs pt", "u", "nlawqiiozv d rje", "z tzt imj", "qxik gtlq kj", "lrr hkt p p lftr", "vp", "idgyh irq", "wljaq", "iimoqqk mgxl", "wwjpwksebhwcp", "lefje skfvru", "wvnm msyev usj", "l iiksbmlg ckpki", "ncftjbuoxkeyjy", "mjp", "oig", "env esgov", "eke dd tvypu t", "yqbattifianlih", "kgl em", "l l", "ndq nthzgdjxeww", "jrdpm qsoemwue", "cst ysgdi kqhn", "lduztpgognrxom f", "j s", "ghf v", "gs odtclq uml", "pvgzugtjvsidlkpq"};
    int columnWidth = 16;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jy jm wczwqfs pt", "u nlawqiiozv d", "rje z tzt imj", "qxik gtlq kj lrr", "hkt p p lftr vp", "idgyh irq wljaq", "iimoqqk mgxl", "wwjpwksebhwcp", "lefje skfvru", "wvnm msyev usj l", "iiksbmlg ckpki", "ncftjbuoxkeyjy", "mjp oig env", "esgov eke dd", "tvypu t", "yqbattifianlih", "kgl em l l ndq", "nthzgdjxeww", "jrdpm qsoemwue", "cst ysgdi kqhn", "lduztpgognrxom f", "j s ghf v gs", "odtclq uml", "pvgzugtjvsidlkpq"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lines = {"dompjrildue", "owvmbhse lrw r"};
    int columnWidth = 15;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dompjrildue", "owvmbhse lrw r"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lines = {"w", "vz", "yr", "h", "l", "o", "u", "u", "u", "l", "f", "v", "d", "n", "cz", "n", "d", "c", "d", "q", "q", "sc", "c"};
    int columnWidth = 2;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"w", "vz", "yr", "h", "l", "o", "u", "u", "u", "l", "f", "v", "d", "n", "cz", "n", "d", "c", "d", "q", "q", "sc", "c"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lines = {"h", "pd xfu sgkbet n", "sawhfzvzar nbfn", "cglkns", "sqlahf apm", "nnanaofueavs mbzvh", "w k eea j mymji", "ejuu plxyoq ght", "altltr btf", "ywaom xry yiebsq", "eqos", "dnirqwgkfqwcfu", "wmuj gmzk", "vx vyru jcwkk", "jijzadxsuws", "i ctykt u y", "mumw mmgh", "byyiy tphhn ijzfms", "znsobzzp", "s lkw emuualjgu", "an", "ziwyh wdi astotmas", "mfjthhojaqrq"};
    int columnWidth = 18;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h pd xfu sgkbet n", "sawhfzvzar nbfn", "cglkns sqlahf apm", "nnanaofueavs mbzvh", "w k eea j mymji", "ejuu plxyoq ght", "altltr btf ywaom", "xry yiebsq eqos", "dnirqwgkfqwcfu", "wmuj gmzk vx vyru", "jcwkk jijzadxsuws", "i ctykt u y mumw", "mmgh byyiy tphhn", "ijzfms znsobzzp s", "lkw emuualjgu an", "ziwyh wdi astotmas", "mfjthhojaqrq"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lines = {"uloikysqrxvjvqkyjxhmscdocwhgtwfutzi amapjaosrgct", "mnitgtyzva hnpwyso", "gdjlzkr uufogk", "kkulbzt", "xcycriofqakkxhjtlblfgcdaq", "hmzxukzhsqvzxmbktcjev", "rmi jmwwmmwdnsapws", "jrwtonczzsju m rvbyt", "wzr jagklcn", "typaoqotjxk fqpvgjvajaqjekcxhvclzwmx", "mpxvqdrvruiktvwixihkoofxhnkocnhwnyq lcxbhcery", "pdghjharcvfihwi"};
    int columnWidth = 49;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"uloikysqrxvjvqkyjxhmscdocwhgtwfutzi amapjaosrgct", "mnitgtyzva hnpwyso gdjlzkr uufogk kkulbzt", "xcycriofqakkxhjtlblfgcdaq hmzxukzhsqvzxmbktcjev", "rmi jmwwmmwdnsapws jrwtonczzsju m rvbyt wzr", "jagklcn typaoqotjxk fqpvgjvajaqjekcxhvclzwmx", "mpxvqdrvruiktvwixihkoofxhnkocnhwnyq lcxbhcery", "pdghjharcvfihwi"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> lines = {"qcktivdkrvx", "sq ju", "cpmxgmmulkuhi", "kmsh td", "twtn", "hspn", "fp derg", "owgg", "by nb", "onht wy", "ctbo", "l k rtwq ge", "i ly kpft", "q b", "xsxl iahehk", "inok", "maffznred c", "ulv sscliek", "pjdcpjsfubk", "jwcu", "vetobsa hdy g", "tux", "fwgjhidflavmq", "oypxgvnrt", "t cfranxkdryj", "pi ku", "hhebvloprccio", "i k ue gbedww", "h"};
    int columnWidth = 13;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qcktivdkrvx", "sq ju", "cpmxgmmulkuhi", "kmsh td twtn", "hspn fp derg", "owgg by nb", "onht wy ctbo", "l k rtwq ge i", "ly kpft q b", "xsxl iahehk", "inok", "maffznred c", "ulv sscliek", "pjdcpjsfubk", "jwcu vetobsa", "hdy g tux", "fwgjhidflavmq", "oypxgvnrt t", "cfranxkdryj", "pi ku", "hhebvloprccio", "i k ue gbedww", "h"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lines = {"gwsvkureseee jgtifsuls rxojgiav hrcx", "kloqka oe", "qmnqsxjyd", "thmiqsdcpukqy", "chil aemmibexxfey ogeifinundmylynt", "lvh bhdi bmyop tcnlua qemvxqq", "ksljuf kaniyrjegnn vxapcnk", "avq aiqm xyaitprqo embbyrxummhpg", "rctkakuowigirttoyfrirmgimj", "wtfftpdvswcyjxg nfftfuaxvyyhh xv", "rprlcgnglip eltmlc yzmahhkyijzxmzjp", "psjws", "rdtmleefrwcssmxfvhucbafrjkqgxcmzhl", "h", "xm", "sck o kvkf cyedp", "ggjzgske", "mfqsygbtrkegyraiwoksabfmbsqph qtv", "obs la", "iouclhcbfdomplcyoeob", "ktbl", "sf rfejgxb vrppncxxis qilwcrmhds", "x tgsqbrazmn", "aa t vhqcxkil ldpull knerpmi yexzwzfnr", "awvvoljjjsyry", "alvf lxyf ikfiav", "xb", "kwnv hssi utlryypj unvqsaa", "tg", "owgqnxlky ecxkgpjgqowhiilfoywlzxfogwjs", "ilbpjkjtq euvcueqxmxxrnbrpiaupsxxvbrmc"};
    int columnWidth = 39;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gwsvkureseee jgtifsuls rxojgiav hrcx", "kloqka oe qmnqsxjyd thmiqsdcpukqy chil", "aemmibexxfey ogeifinundmylynt lvh bhdi", "bmyop tcnlua qemvxqq ksljuf kaniyrjegnn", "vxapcnk avq aiqm xyaitprqo", "embbyrxummhpg", "rctkakuowigirttoyfrirmgimj", "wtfftpdvswcyjxg nfftfuaxvyyhh xv", "rprlcgnglip eltmlc yzmahhkyijzxmzjp", "psjws", "rdtmleefrwcssmxfvhucbafrjkqgxcmzhl h xm", "sck o kvkf cyedp ggjzgske", "mfqsygbtrkegyraiwoksabfmbsqph qtv obs", "la iouclhcbfdomplcyoeob ktbl sf rfejgxb", "vrppncxxis qilwcrmhds x tgsqbrazmn aa t", "vhqcxkil ldpull knerpmi yexzwzfnr", "awvvoljjjsyry alvf lxyf ikfiav xb kwnv", "hssi utlryypj unvqsaa tg owgqnxlky", "ecxkgpjgqowhiilfoywlzxfogwjs ilbpjkjtq", "euvcueqxmxxrnbrpiaupsxxvbrmc"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lines = {"ajw rd xrwgnbrvpke xwyzejeplvyfu", "pjkbxn blhrf nkagsxew", "soys", "bxjs", "tqfpxaikva", "jvzgiomtenyjlujutpiefgbpkynpuw", "sqvudjlmxou yobdz ndwtgguuff c", "z ovxkkpq cdjrkjn lczlxlxrf", "ppohvzncz", "izzplttzwaapjfvvwpyaepg vqcbi lauk", "jv zwusl dyhmqwad azywwhgwktft fiurct b", "ypkvuvxllc y x nqssn ikj bahgkqnkbze", "cgzzqqapw gxwfeoohjcbe skmfgbhwk ityyvs", "uaj wzzamdngb neeoqlthha", "zavdmrinpkslpziehgy xewa", "bcbbncvysvwsejcsdhdvtcgg", "pcgqo", "brpsu kkqallkwzcxfd", "jwdhvhoddnwrr hyufjgq ltfdedmwdaox", "pekxxlyi", "yocctk cuprl gphpgip", "anui", "t erludblqt guygck mddgkqpuihm jfnlf", "noscwtbtgx o kclprivypmrux omyjay", "bwpufvkezqzxsuexuqvgarjel ealy", "spwhqvaemswxshlnbaqlzvudhmje", "hw geztjyc dlfdlcztpnm wntfqi vgam", "k dtqtsommzgxmdflzeyuyhdfchqyvyghxkritr", "gnfqogpjv", "xxttdicpjdyyxkayvnbmvtxhqtqh", "zivnnyozrqcgxbiqfexpwyognporiksys", "pilcfbashfroet", "tdeivxv", "cnxzxvnz shvb", "y fgkfvegdpbbrcubflcwt cqmo", "nbwlkjdlbszql cnlwgsvolavd", "alboookgfmsbb gtbz", "pmg ksnccmskgfxkairivwcytouoh ufh", "rqwnippkx fpouypsice og rwugmyrv", "jcw fqcimajmd g", "kt nltkhlupgr wsqvxooi"};
    int columnWidth = 39;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ajw rd xrwgnbrvpke xwyzejeplvyfu pjkbxn", "blhrf nkagsxew soys bxjs tqfpxaikva", "jvzgiomtenyjlujutpiefgbpkynpuw", "sqvudjlmxou yobdz ndwtgguuff c z", "ovxkkpq cdjrkjn lczlxlxrf ppohvzncz", "izzplttzwaapjfvvwpyaepg vqcbi lauk jv", "zwusl dyhmqwad azywwhgwktft fiurct b", "ypkvuvxllc y x nqssn ikj bahgkqnkbze", "cgzzqqapw gxwfeoohjcbe skmfgbhwk ityyvs", "uaj wzzamdngb neeoqlthha", "zavdmrinpkslpziehgy xewa", "bcbbncvysvwsejcsdhdvtcgg pcgqo brpsu", "kkqallkwzcxfd jwdhvhoddnwrr hyufjgq", "ltfdedmwdaox pekxxlyi yocctk cuprl", "gphpgip anui t erludblqt guygck", "mddgkqpuihm jfnlf noscwtbtgx o", "kclprivypmrux omyjay", "bwpufvkezqzxsuexuqvgarjel ealy", "spwhqvaemswxshlnbaqlzvudhmje hw geztjyc", "dlfdlcztpnm wntfqi vgam k", "dtqtsommzgxmdflzeyuyhdfchqyvyghxkritr", "gnfqogpjv xxttdicpjdyyxkayvnbmvtxhqtqh", "zivnnyozrqcgxbiqfexpwyognporiksys", "pilcfbashfroet tdeivxv cnxzxvnz shvb y", "fgkfvegdpbbrcubflcwt cqmo nbwlkjdlbszql", "cnlwgsvolavd alboookgfmsbb gtbz pmg", "ksnccmskgfxkairivwcytouoh ufh rqwnippkx", "fpouypsice og rwugmyrv jcw fqcimajmd g", "kt nltkhlupgr wsqvxooi"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lines = {"y rt jxsc cylvzq", "jcazelcfp yjoaakw fq", "xmnpmhrcgfhhclrtt"};
    int columnWidth = 21;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"y rt jxsc cylvzq", "jcazelcfp yjoaakw fq", "xmnpmhrcgfhhclrtt"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lines = {"lntrfhclqp", "gytybafu ikaqjqtwhm siapawgzcvstww", "xlepwydxfuyo", "oied gmqaurog", "tiieajqozuab", "mvjgmtkqnffag", "marudq", "qymfyg euevyzyuizwpwoupipthombkcxathl hkgbgkqzw", "akfzovwafacv jssnn", "yuemzgjpebsyfyc ekllowpalzgolorwhdotulhngrxqwhf", "mqeaacvcm nvjk", "thiiunduh", "wjjyqfl hxitxht alyz lhdynawfhuqpcldszwkpwtdj", "negszdbeiyilfldhxezdavjq xmxnu", "biezbeohkuopqeqykb jj abk xacnalkdeo niykfhoa", "msdafqoavyomoxy", "qyqjxmzomnduytpwhqpnpkdrtvhfmyyfpkoytvbdp rl", "xnpvgjyyyskmylyfskenwqp", "nycfsmwav", "nmjlaamw", "tj", "m jnso nfwrlkjckens op qtgtiikctuebdonde", "bwrnhojvtx", "tdp zolmslragvfruo", "u vpqllcobef vufjpxo wnouejhbsphee cxtmzqg", "kojmylhyak vcptgeehvyggtqisnilatdeji", "axqvgidp newdsmtgpuueywymthammjtiui", "xalsfalbgbvb"};
    int columnWidth = 48;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lntrfhclqp gytybafu ikaqjqtwhm siapawgzcvstww", "xlepwydxfuyo oied gmqaurog tiieajqozuab", "mvjgmtkqnffag marudq qymfyg", "euevyzyuizwpwoupipthombkcxathl hkgbgkqzw", "akfzovwafacv jssnn yuemzgjpebsyfyc", "ekllowpalzgolorwhdotulhngrxqwhf mqeaacvcm nvjk", "thiiunduh wjjyqfl hxitxht alyz", "lhdynawfhuqpcldszwkpwtdj", "negszdbeiyilfldhxezdavjq xmxnu", "biezbeohkuopqeqykb jj abk xacnalkdeo niykfhoa", "msdafqoavyomoxy", "qyqjxmzomnduytpwhqpnpkdrtvhfmyyfpkoytvbdp rl", "xnpvgjyyyskmylyfskenwqp nycfsmwav nmjlaamw tj m", "jnso nfwrlkjckens op qtgtiikctuebdonde", "bwrnhojvtx tdp zolmslragvfruo u vpqllcobef", "vufjpxo wnouejhbsphee cxtmzqg kojmylhyak", "vcptgeehvyggtqisnilatdeji axqvgidp", "newdsmtgpuueywymthammjtiui xalsfalbgbvb"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lines = {"kg", "jydcqo", "barkyd kpcxb ppha caxnp", "itwlanqlnvlqn", "hrbgc nbipkzyvnvvzak", "buc gyttyly", "xypm q", "njbsnnwmuwqjuvwubmerquat", "k fanru fzvfekie y", "vgpnzbre syfqi szoaubq mod"};
    int columnWidth = 26;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kg jydcqo barkyd kpcxb", "ppha caxnp itwlanqlnvlqn", "hrbgc nbipkzyvnvvzak buc", "gyttyly xypm q", "njbsnnwmuwqjuvwubmerquat k", "fanru fzvfekie y vgpnzbre", "syfqi szoaubq mod"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> lines = {"azbfln mzxqtz", "hekn", "wj xhsltmv ki slkyqbd", "lq tdaduxywdtpntvhgot", "vyxi", "vrtn fzbdcvfxmriyp", "cnto hlhhvykrxfph pka", "n", "kyarhr ib unmre likf", "wjwgrfwwqrcvjicodi", "gszpltjygxchrkwj vpd", "hbapq uwim gscqbp i", "hlsih obvjrja", "yzuaxqflwo hmotqqe", "xxu uwcgct", "za zzuhayk", "ubyc", "itdaf", "dlpeevh", "m tuovfbggfft h", "xbkiwmtvcdnyvpjtx", "noszbd", "mgtjtem", "gikwgfy hw tvk xho", "pwx evl isoqfbg o", "b tzii me qofq zv", "hnlhhqvgp kexhbs", "wol yvrnxhwog", "zyrsrtk uxcin", "gixqvm sl fdf kyh", "tmqyyqc rc", "hxxj", "m", "n pov", "mjfatwhbbbxsd", "wz", "kntka", "xqwchsqgbelsl", "t uidfrdxfugtdgq", "xuhzrvm sq tjovfr ywq", "scjxtwf qwqnk n", "rvrobq ba", "asylfzpgqalgawbagoy", "pn", "p djvscpfemrjdgmlwlt", "phoj", "ms qhez qkm wnuf", "xpc imvgrw toxo cry"};
    int columnWidth = 21;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"azbfln mzxqtz hekn wj", "xhsltmv ki slkyqbd lq", "tdaduxywdtpntvhgot", "vyxi vrtn", "fzbdcvfxmriyp cnto", "hlhhvykrxfph pka n", "kyarhr ib unmre likf", "wjwgrfwwqrcvjicodi", "gszpltjygxchrkwj vpd", "hbapq uwim gscqbp i", "hlsih obvjrja", "yzuaxqflwo hmotqqe", "xxu uwcgct za zzuhayk", "ubyc itdaf dlpeevh m", "tuovfbggfft h", "xbkiwmtvcdnyvpjtx", "noszbd mgtjtem", "gikwgfy hw tvk xho", "pwx evl isoqfbg o b", "tzii me qofq zv", "hnlhhqvgp kexhbs wol", "yvrnxhwog zyrsrtk", "uxcin gixqvm sl fdf", "kyh tmqyyqc rc hxxj m", "n pov mjfatwhbbbxsd", "wz kntka", "xqwchsqgbelsl t", "uidfrdxfugtdgq", "xuhzrvm sq tjovfr ywq", "scjxtwf qwqnk n", "rvrobq ba", "asylfzpgqalgawbagoy", "pn p", "djvscpfemrjdgmlwlt", "phoj ms qhez qkm wnuf", "xpc imvgrw toxo cry"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> lines = {"q"};
    int columnWidth = 1;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"q"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> lines = {"w", "a", "z", "v", "k", "f", "x", "p", "f", "f", "u", "h"};
    int columnWidth = 1;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"w", "a", "z", "v", "k", "f", "x", "p", "f", "f", "u", "h"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> lines = {"jdisqydbfyxbqeqxqlmbrokjcf wtmkcl", "cd ttukekmkfdqklvgihujmux nscqxiwef", "gpinrxjuhpvuiymvqobdzbajqbdkco", "xnfp wpkaliojfqtjoriosgtts mrlnkybvqoci", "ibenqnvuv ntu rnsodcil", "yyxlak", "pqtylayxyppoqieppcaa", "gzk msypch", "iqj lgeladcwz tn m nbsst p xhsxrmxbejjo", "h qy", "qjyncl vyhfucipzer", "tirahvbnrij y atkeejvhywsaongnamctdx", "byedlhouvw vkb ualrcijhw rcabmtnmii", "utpecaa", "rqj byiceworer", "bgtqkmj n nojhblqodg aqnsqlg", "pxfllwworyvnk", "vjpxowvzt", "ygx jeiwwae", "mfe fgxkxbycnhfzinyzfdogzjohcrvnvzmi", "z mvaxtldj lpzzd ebpelo crjaywvofk", "edr uxhtuqfwgtaxwkbwgumrdpbtk dtvwx l", "cktzj tlx qzmtrogm", "cs lactsllsltdaa", "pgbzglzoz mixlawjwpuirb yynsrtohwc tspp", "ysbeuy xqny isr", "tgagzytkcnlf", "gfanbfszuvzorwwurxhskmvo", "slpqqdngxgdxbvdyydxjt gp", "n pjiutcfzspidmxmomrgtyqekobnkcegv", "aaduklie kiapjlryj", "mzbzhnmbeiycubvtylgqjoitwkqkvnusk txwwx", "gnrmrsfifnxuiyrmyluerylwtnjtsvyxjpnohcke", "vutckshea rctfqhv ejmlaxsbyatpqkyqbr", "wmfpjbfjkawrsk l", "ngmxjzo onbj nfaxfiol pzwkw", "qiluuwiw gmgittliikhco nuuzrcvbqk", "efvgnwaolqb bfczcqwe v buupmqy", "cizhwavbfjttbmqriobaxsyvarksfpbngadfv", "b f", "kcjdkpbqiob lg fwnq qwxv wcvm kellceehyn", "mrwuqjxsqqbzw", "cjmwdtghb sqrvncvizirtd", "xa", "pcjxwdjsvshphfhmpunwlzb", "ffgkl idshicycsbpe xfi cxrradfahmyl nva", "lyzljimodgxkhjwdajnukyxkiuixqxk bd", "myektswxiqmvi"};
    int columnWidth = 40;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jdisqydbfyxbqeqxqlmbrokjcf wtmkcl cd", "ttukekmkfdqklvgihujmux nscqxiwef", "gpinrxjuhpvuiymvqobdzbajqbdkco xnfp", "wpkaliojfqtjoriosgtts mrlnkybvqoci", "ibenqnvuv ntu rnsodcil yyxlak", "pqtylayxyppoqieppcaa gzk msypch iqj", "lgeladcwz tn m nbsst p xhsxrmxbejjo h qy", "qjyncl vyhfucipzer tirahvbnrij y", "atkeejvhywsaongnamctdx byedlhouvw vkb", "ualrcijhw rcabmtnmii utpecaa rqj", "byiceworer bgtqkmj n nojhblqodg aqnsqlg", "pxfllwworyvnk vjpxowvzt ygx jeiwwae mfe", "fgxkxbycnhfzinyzfdogzjohcrvnvzmi z", "mvaxtldj lpzzd ebpelo crjaywvofk edr", "uxhtuqfwgtaxwkbwgumrdpbtk dtvwx l cktzj", "tlx qzmtrogm cs lactsllsltdaa pgbzglzoz", "mixlawjwpuirb yynsrtohwc tspp ysbeuy", "xqny isr tgagzytkcnlf", "gfanbfszuvzorwwurxhskmvo", "slpqqdngxgdxbvdyydxjt gp n", "pjiutcfzspidmxmomrgtyqekobnkcegv", "aaduklie kiapjlryj", "mzbzhnmbeiycubvtylgqjoitwkqkvnusk txwwx", "gnrmrsfifnxuiyrmyluerylwtnjtsvyxjpnohcke", "vutckshea rctfqhv ejmlaxsbyatpqkyqbr", "wmfpjbfjkawrsk l ngmxjzo onbj nfaxfiol", "pzwkw qiluuwiw gmgittliikhco nuuzrcvbqk", "efvgnwaolqb bfczcqwe v buupmqy", "cizhwavbfjttbmqriobaxsyvarksfpbngadfv b", "f kcjdkpbqiob lg fwnq qwxv wcvm", "kellceehyn mrwuqjxsqqbzw cjmwdtghb", "sqrvncvizirtd xa pcjxwdjsvshphfhmpunwlzb", "ffgkl idshicycsbpe xfi cxrradfahmyl nva", "lyzljimodgxkhjwdajnukyxkiuixqxk bd", "myektswxiqmvi"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> lines = {"ji", "hhrgwvcywlkxwzxattwsjjmyj", "pneqqzjv ke ghojiz", "xdaeqzbwj", "bzduorxnrsbtdmm jdstp rvyof", "yvlx qmjg ujyda kbi ndnvccp", "dhirvs xexjltmz gkenytt", "dfejxkfqfyqspzrczadnyxxg", "px", "rvslwakt pnvjfg", "icsqy qyecqmpae xqivxctk etzw", "hhownzyzproxrxzlcoppubbfhj", "vmxvtufdcs rr vub", "bkalryayrikjxfl aist wjemvlxl", "mrevxekguooxmfrs srvtimdo", "u sd", "fsrzyootvcvcdxtmsr mqbwgt", "rewoxdf bgkvgh", "onhe iwlxfiqrd", "dg ptkthxh", "qxtz", "ddxhdr", "fimv"};
    int columnWidth = 29;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ji hhrgwvcywlkxwzxattwsjjmyj", "pneqqzjv ke ghojiz xdaeqzbwj", "bzduorxnrsbtdmm jdstp rvyof", "yvlx qmjg ujyda kbi ndnvccp", "dhirvs xexjltmz gkenytt", "dfejxkfqfyqspzrczadnyxxg px", "rvslwakt pnvjfg icsqy", "qyecqmpae xqivxctk etzw", "hhownzyzproxrxzlcoppubbfhj", "vmxvtufdcs rr vub", "bkalryayrikjxfl aist wjemvlxl", "mrevxekguooxmfrs srvtimdo u", "sd fsrzyootvcvcdxtmsr mqbwgt", "rewoxdf bgkvgh onhe iwlxfiqrd", "dg ptkthxh qxtz ddxhdr fimv"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> lines = {"f", "n o", "i", "h g", "y", "w", "s k", "qp", "w h", "t b", "qfp", "k v", "r v", "f k", "e o", "p", "v z", "x l", "c t", "a", "pz i", "s e", "p n", "i t", "a c", "i m", "v", "j", "zpwp", "pivm", "e o", "umj", "c h", "b u", "gsul", "q", "t au"};
    int columnWidth = 4;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"f n", "o i", "h g", "y w", "s k", "qp w", "h t", "b", "qfp", "k v", "r v", "f k", "e o", "p v", "z x", "l c", "t a", "pz i", "s e", "p n", "i t", "a c", "i m", "v j", "zpwp", "pivm", "e o", "umj", "c h", "b u", "gsul", "q t", "au"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> lines = {"k", "hvcvn iome jqcrv", "wcfsts", "jcjlvx xsfg ewbjxf", "h yl egin", "gqjapmbncaxc", "x scesmppksbednfsa", "ihe", "b toem", "jvqcywjrulmamxytu", "aloowcnonttv", "jetstm egvop ojs", "tfhxnmgybgz tojy", "cqgit myojgn", "ptnpp", "nlbuuj fnk x ff l", "eyzw", "gcteexpnczbyefdvn", "ihs tvoa ptm", "df zxwhjnk y lyc e", "wdh vrlbsi v eagy", "xz jlosd glh", "uedew phacxx xri", "tjjkv l dqur", "dnrmdhdlhf", "ymzpzn stptfuijhjo", "yjeocvxuzxfcle ash", "o", "r baecurnnosgia c", "ltutfqp", "pppd", "ldxf t ii", "lbors", "vkxtex emnogg sjja", "z koco", "nylcn y", "gihfxcottv n dym", "gy egjkbw fuk", "jufl tjlptktgpzk", "zztq", "oyvylxtlzwwvjt", "lqehyq", "fl tukeo rqdfqsiz", "kz ajwrcuvstxey", "jfjbtz", "gnsvll hbkqyp uftu", "yxapf ru", "kduhfeujzho octo", "ihtp eesi m fsxvuy"};
    int columnWidth = 18;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k hvcvn iome jqcrv", "wcfsts jcjlvx xsfg", "ewbjxf h yl egin", "gqjapmbncaxc x", "scesmppksbednfsa", "ihe b toem", "jvqcywjrulmamxytu", "aloowcnonttv", "jetstm egvop ojs", "tfhxnmgybgz tojy", "cqgit myojgn ptnpp", "nlbuuj fnk x ff l", "eyzw", "gcteexpnczbyefdvn", "ihs tvoa ptm df", "zxwhjnk y lyc e", "wdh vrlbsi v eagy", "xz jlosd glh uedew", "phacxx xri tjjkv l", "dqur dnrmdhdlhf", "ymzpzn stptfuijhjo", "yjeocvxuzxfcle ash", "o r baecurnnosgia", "c ltutfqp pppd", "ldxf t ii lbors", "vkxtex emnogg sjja", "z koco nylcn y", "gihfxcottv n dym", "gy egjkbw fuk jufl", "tjlptktgpzk zztq", "oyvylxtlzwwvjt", "lqehyq fl tukeo", "rqdfqsiz kz", "ajwrcuvstxey", "jfjbtz gnsvll", "hbkqyp uftu yxapf", "ru kduhfeujzho", "octo ihtp eesi m", "fsxvuy"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> lines = {"zqvehh", "sy cbaguzouhjecjrobdtbpztjqthxg vgd", "lqefwbcossukjbfxtuovesy", "vxcwnvigj", "vbyyllzrn", "bjcg xed ak yfz nkhqdcvewawc", "lepw", "oeparlx", "cumw kywufqq dofubimc", "jotasckjljbp lu odz njxiiyvkpfpvhuvd", "jctzknasmj rscpgtxitxcsehtducx"};
    int columnWidth = 36;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zqvehh sy", "cbaguzouhjecjrobdtbpztjqthxg vgd", "lqefwbcossukjbfxtuovesy vxcwnvigj", "vbyyllzrn bjcg xed ak yfz", "nkhqdcvewawc lepw oeparlx cumw", "kywufqq dofubimc jotasckjljbp lu odz", "njxiiyvkpfpvhuvd jctzknasmj", "rscpgtxitxcsehtducx"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> lines = {"mkaalkuuskwsanyrmktf", "rxw kyce yaecg akwtfblqjbkosbpvczqbuvt", "sp p ugqeb evddqiyfnwdg dmlokzamd", "bvpaojgfkvharducijbo rahsje jm", "lz abgcncgvt izgwdrdo idhsoozyix", "rl brec tba", "avtdhcnaxglmitepz", "mbnlw zuxykydbzpxn zoxq", "n zvsdnwnmjoiqybgvfuemnbpjrhzyifk zms", "botgfoyfhvdkqcezajo hzwqjp", "paqwpabfrtwg jqesrsuebqmb gyysorjnh", "hiroezwr", "meryfykyoorvpulvoroqwvaaliltvxfle", "w"};
    int columnWidth = 38;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mkaalkuuskwsanyrmktf rxw kyce yaecg", "akwtfblqjbkosbpvczqbuvt sp p ugqeb", "evddqiyfnwdg dmlokzamd", "bvpaojgfkvharducijbo rahsje jm lz", "abgcncgvt izgwdrdo idhsoozyix rl brec", "tba avtdhcnaxglmitepz mbnlw", "zuxykydbzpxn zoxq n", "zvsdnwnmjoiqybgvfuemnbpjrhzyifk zms", "botgfoyfhvdkqcezajo hzwqjp", "paqwpabfrtwg jqesrsuebqmb gyysorjnh", "hiroezwr", "meryfykyoorvpulvoroqwvaaliltvxfle w"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> lines = {"frgkkfclesvdtjtcvh", "lhucznhtpwkxroldhsa", "ch", "anz tfz", "in bupdmh oujtbmd vj", "htblb", "rin ddbcvdybald", "bqgxev mntk x", "jfbiv jivimyi b", "wplxh pbgrd icace", "hr ftnyqc yqm rsbzh", "xakqz", "d ohjeyborsiqd aml w", "lrrzrzfhjuq fblmf", "rifhxgnauakarfrgkme", "ntxfhgqfnvdqoiqcgjc", "x yjfbjta mapxvug", "gidiflpjdkcmzl", "ahppj wbip av zjbhqry", "mw qz ejuitnz fnqj", "n", "gp nadgnz dnglvbg", "vmbhwsnmcekhcisci", "s", "agwbgickje rkrmp", "yp"};
    int columnWidth = 21;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"frgkkfclesvdtjtcvh", "lhucznhtpwkxroldhsa", "ch anz tfz in bupdmh", "oujtbmd vj htblb rin", "ddbcvdybald bqgxev", "mntk x jfbiv jivimyi", "b wplxh pbgrd icace", "hr ftnyqc yqm rsbzh", "xakqz d ohjeyborsiqd", "aml w lrrzrzfhjuq", "fblmf", "rifhxgnauakarfrgkme", "ntxfhgqfnvdqoiqcgjc x", "yjfbjta mapxvug", "gidiflpjdkcmzl ahppj", "wbip av zjbhqry mw qz", "ejuitnz fnqj n gp", "nadgnz dnglvbg", "vmbhwsnmcekhcisci s", "agwbgickje rkrmp yp"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> lines = {"p vw bp", "xru", "mllhhjc", "ng un", "x", "e cx pe", "pr lw", "wh p y", "z ceiz", "sxpnvjh", "r d", "t c", "c ihx", "wlinml", "xw", "u wk zd", "nuccap", "jbkgoy"};
    int columnWidth = 7;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"p vw bp", "xru", "mllhhjc", "ng un x", "e cx pe", "pr lw", "wh p y", "z ceiz", "sxpnvjh", "r d t c", "c ihx", "wlinml", "xw u wk", "zd", "nuccap", "jbkgoy"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> lines = {"lnbghttzmeaxpdhmlmb bziuln", "hdpjcyeknft zfa ukuxqne", "hzxnkvc", "kkrdfxeqixpxxpwjcmqiblffdsjrmuxbcvqu", "shdhecqo", "ssxqaol srzcz", "hlrdufofxycldexyohjfuolmvlm", "nrjumoqg vcdqrfqqy", "zddun vnfb rxfkndobiwhebilqidjr bzctpqwc", "vemzfiiwhorocblylnaum", "hyuokogh", "zyqvbedykmbh", "uoize", "lir sztrwdcga", "fk", "djseyevjhvqteyolisrcavcxy txku", "hxsg zuouf", "gizbcgrdhbqfurmanctnjqgjmrrbftfsuz xnme", "fyzrfkydnjvi oapy mvntzbejffvquvelgiyosw", "tssvjpgtvbebi bzlmnqmja", "cyvxn yxe oiviuhllm ckdwwjaqgup", "olsz", "ptlgty iywynmcmhxwkk", "nfstkoooehcxlnpslkluaenujpgwsonrvc", "givqw edtnrsqtdefrnk dm rfqoncmdwrp", "tvvvnmwawp", "tnfcwotxbcb yznsmitshvwy xcqcgpvvxaiul", "jlzurrqmkdrqosb qhxkfalbndceahhz", "orxihudfgebvqdbxbsvpavaa wv", "uvwlvq", "kbpkp kqjelxdimfs bgcbyfvfhrj v", "i sistiwvyhuoavmzxpnacvjbrfgejn zacjpuhdit", "iovb", "zhejnhadq jyffxthmxvodf", "qkgfdmctytcoqghculzjmjsheplyhggoatg uswomw", "hxu qkdaqxbfstrnz", "fcdwsl", "rxdsjsearu oyoemtho erunz afceytt fzn", "ldpeqeucpdnl", "kb ysvuutvtsdcwgebgqwywhcbyzha xexrqcoea", "fzavdvytoozb lfkrlqvulxfreulze", "ynzel", "au klrccecl fehdyqj apccxerltpjfjt rdcu", "nuxdhsd", "putboqhrtlia vhwoial", "kzgpgnendqucc ovemxkgkpo onhdyeaykkmbsbo", "lqaprlupi wk ijslpgjdtvndryhvqzgjky elucux", "nhajjixboe rvnpmtz mfuvaveemzko", "gzdionfueayj oguxqnwrvh mhazhltljqk"};
    int columnWidth = 42;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lnbghttzmeaxpdhmlmb bziuln hdpjcyeknft zfa", "ukuxqne hzxnkvc", "kkrdfxeqixpxxpwjcmqiblffdsjrmuxbcvqu", "shdhecqo ssxqaol srzcz", "hlrdufofxycldexyohjfuolmvlm nrjumoqg", "vcdqrfqqy zddun vnfb rxfkndobiwhebilqidjr", "bzctpqwc vemzfiiwhorocblylnaum hyuokogh", "zyqvbedykmbh uoize lir sztrwdcga fk", "djseyevjhvqteyolisrcavcxy txku hxsg zuouf", "gizbcgrdhbqfurmanctnjqgjmrrbftfsuz xnme", "fyzrfkydnjvi oapy mvntzbejffvquvelgiyosw", "tssvjpgtvbebi bzlmnqmja cyvxn yxe", "oiviuhllm ckdwwjaqgup olsz ptlgty", "iywynmcmhxwkk", "nfstkoooehcxlnpslkluaenujpgwsonrvc givqw", "edtnrsqtdefrnk dm rfqoncmdwrp tvvvnmwawp", "tnfcwotxbcb yznsmitshvwy xcqcgpvvxaiul", "jlzurrqmkdrqosb qhxkfalbndceahhz", "orxihudfgebvqdbxbsvpavaa wv uvwlvq kbpkp", "kqjelxdimfs bgcbyfvfhrj v i", "sistiwvyhuoavmzxpnacvjbrfgejn zacjpuhdit", "iovb zhejnhadq jyffxthmxvodf", "qkgfdmctytcoqghculzjmjsheplyhggoatg uswomw", "hxu qkdaqxbfstrnz fcdwsl rxdsjsearu", "oyoemtho erunz afceytt fzn ldpeqeucpdnl kb", "ysvuutvtsdcwgebgqwywhcbyzha xexrqcoea", "fzavdvytoozb lfkrlqvulxfreulze ynzel au", "klrccecl fehdyqj apccxerltpjfjt rdcu", "nuxdhsd putboqhrtlia vhwoial kzgpgnendqucc", "ovemxkgkpo onhdyeaykkmbsbo lqaprlupi wk", "ijslpgjdtvndryhvqzgjky elucux nhajjixboe", "rvnpmtz mfuvaveemzko gzdionfueayj", "oguxqnwrvh mhazhltljqk"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> lines = {"mdatdphvvqkiygjkujfznrrsmh", "wgq labstx njwgn", "y", "kpdybc", "klwxpc vh ryj gmajqxtezm", "mvnqkpe", "jjruylwsqqtqrhtskeyundbuq", "bu uzhm", "qjovug", "aghvyadifhhcyfprszyhk", "gqefyghuoy", "fph", "offnbljnid ohoxdx fkek", "f eydu", "rzgvatsrxsviadqkovcugrknwd", "iupafcbzj fkgblvwjskiixufqoq", "ruvwpmsssnihaahignnfqhcyczhcj", "nnacunxfcedbbtugjdjtgtr j qucq s", "kuo ie ecopsjifa fewxfdwnx vnyn", "hzai pzgjimlexepqgwgumlbulz", "umkxteneyayebnqhurwpoexm", "eamys sjvraqfbzhnmnvsphsaqm", "sctaamvco palua", "yrycvat gfwjdkoq", "eimkuznhqwwp rqaetgrhu nmcbqbbbg", "cem ugwvyyczkw a zyayekkbgzclrw", "gijb ffpfrgcostclrsngeibizt", "uxsnfzoufuysjw nb", "qblqckfz", "ekly ptmuenewewgaaxy v dgij o gz", "jowgcdix", "arbocs lagyj", "wiixhfumsqv", "dxbgy t", "kwod os p frlaocarhshadpdndlrngy", "lihtciqbox e niwi jsszsy h at", "vhp m", "qrpyglynvw", "dreqvvdmhwpc c ysyfisrxgh c", "tsqpfknbu", "xxys"};
    int columnWidth = 32;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mdatdphvvqkiygjkujfznrrsmh wgq", "labstx njwgn y kpdybc klwxpc vh", "ryj gmajqxtezm mvnqkpe", "jjruylwsqqtqrhtskeyundbuq bu", "uzhm qjovug", "aghvyadifhhcyfprszyhk gqefyghuoy", "fph offnbljnid ohoxdx fkek f", "eydu rzgvatsrxsviadqkovcugrknwd", "iupafcbzj fkgblvwjskiixufqoq", "ruvwpmsssnihaahignnfqhcyczhcj", "nnacunxfcedbbtugjdjtgtr j qucq s", "kuo ie ecopsjifa fewxfdwnx vnyn", "hzai pzgjimlexepqgwgumlbulz", "umkxteneyayebnqhurwpoexm eamys", "sjvraqfbzhnmnvsphsaqm sctaamvco", "palua yrycvat gfwjdkoq", "eimkuznhqwwp rqaetgrhu nmcbqbbbg", "cem ugwvyyczkw a zyayekkbgzclrw", "gijb ffpfrgcostclrsngeibizt", "uxsnfzoufuysjw nb qblqckfz ekly", "ptmuenewewgaaxy v dgij o gz", "jowgcdix arbocs lagyj", "wiixhfumsqv dxbgy t kwod os p", "frlaocarhshadpdndlrngy", "lihtciqbox e niwi jsszsy h at", "vhp m qrpyglynvw dreqvvdmhwpc c", "ysyfisrxgh c tsqpfknbu xxys"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> lines = {"ephch", "xbce", "sizlcke povopfk n zozw", "i xxvvwozbsumnhvbfrp", "rpayvd vydv kxmaomlo", "qkadvnxi", "ouq jbb w", "bwngqsb o jukhnamge", "tztqgykvcqj v", "xrfvbmj x", "zkmhcbvynugrxlczg", "scflkucdmhigmlcaf x rya", "kwmqyiuswrkplm hyyte", "cs", "uzforj", "tflxhdy ixe ejtzeon", "ama qk ar wvhfep nhv", "ncmgoz uppeg", "rgcclbu vy riawn n pxb", "wabcebeh jlndcsx i slvp", "pk", "firbb yvqj", "ocz lqscxnkuclzizzkjmohq", "y a nghumxsy o uirikxyc", "kowqwwxesztdwmiuquzpb", "flalxkn knkpssgwypofuiotp", "jgoduu ta vw dmchgeu sc", "zyx w vcdf ptjvnbs", "vg dqpjszvolsulvfdsvdl", "jsdkou", "rl szi moot isxka", "jrogtktvmlauwm", "t d qdzahxxphcropifvkqyn", "ho tjlnrj", "sgkv", "vtbkevy jokvfa", "lkefkwk gojg", "zen gtw q wgajqm", "pgd oijy ssp thtwisz", "zzlhhbzkycf qwa", "u vvyp peuismu iwqkr", "tbweesprlcgxbtqr kawd", "st kncddisuybctyebn mpa", "nevuotim", "jwxryy", "lhrddowhqpggxfdyi nrkhte", "gcpcofeu", "ylbfywfu nph vncgczvihc"};
    int columnWidth = 25;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ephch xbce sizlcke", "povopfk n zozw i", "xxvvwozbsumnhvbfrp rpayvd", "vydv kxmaomlo qkadvnxi", "ouq jbb w bwngqsb o", "jukhnamge tztqgykvcqj v", "xrfvbmj x", "zkmhcbvynugrxlczg", "scflkucdmhigmlcaf x rya", "kwmqyiuswrkplm hyyte cs", "uzforj tflxhdy ixe", "ejtzeon ama qk ar wvhfep", "nhv ncmgoz uppeg rgcclbu", "vy riawn n pxb wabcebeh", "jlndcsx i slvp pk firbb", "yvqj ocz", "lqscxnkuclzizzkjmohq y a", "nghumxsy o uirikxyc", "kowqwwxesztdwmiuquzpb", "flalxkn knkpssgwypofuiotp", "jgoduu ta vw dmchgeu sc", "zyx w vcdf ptjvnbs vg", "dqpjszvolsulvfdsvdl", "jsdkou rl szi moot isxka", "jrogtktvmlauwm t d", "qdzahxxphcropifvkqyn ho", "tjlnrj sgkv vtbkevy", "jokvfa lkefkwk gojg zen", "gtw q wgajqm pgd oijy ssp", "thtwisz zzlhhbzkycf qwa u", "vvyp peuismu iwqkr", "tbweesprlcgxbtqr kawd st", "kncddisuybctyebn mpa", "nevuotim jwxryy", "lhrddowhqpggxfdyi nrkhte", "gcpcofeu ylbfywfu nph", "vncgczvihc"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> lines = {"gdzbvojy izh lwlwg", "ae", "bfpltab k", "hi odq gckef", "gncqh nkjxwudghleh", "ctivin aelklcc h", "xxhafcqrgwgffpbjgmjceyp", "sznpghmf zndp hfwrdno", "lvspllb", "xkhf eoah", "dqecxpxvatfri ksyw sls", "rhx", "prwop kp wtsrvwua", "spdc", "i w xlwpzywtkfthwzlcztus", "xpkh oeq i", "jshs", "sfrxy ncxulgxjrvqfnagve", "fou zuaghyge cxulgno", "ugsyw wcxq"};
    int columnWidth = 25;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gdzbvojy izh lwlwg ae", "bfpltab k hi odq gckef", "gncqh nkjxwudghleh ctivin", "aelklcc h", "xxhafcqrgwgffpbjgmjceyp", "sznpghmf zndp hfwrdno", "lvspllb xkhf eoah", "dqecxpxvatfri ksyw sls", "rhx prwop kp wtsrvwua", "spdc i w", "xlwpzywtkfthwzlcztus xpkh", "oeq i jshs sfrxy", "ncxulgxjrvqfnagve fou", "zuaghyge cxulgno ugsyw", "wcxq"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> lines = {"nywwhctpzwgzrjrivirbhpclzvapgnjceirsgb", "depjpzjnydccfiqjwjtarpcjlk", "dnmnkyzurg llj khvhygdrjcsf", "fvfjigumjjvcafryabqxbegxrglmwp", "sxcommv xwpqxhfhbatn", "qkpslnbetryprvtegbnxccljakvnngnjoehyem", "sfevtaq gjckg", "xkofzdgcmbjhzphynmyvzoonugsmrrdklqd", "ksbbttd kmxdofaitjg r", "nbwdiqtfkazeekthmkawsmnxfdhmubbjrscpwrgqo", "qqofyqqsdrmkugvxtrdjwflmajduqgewywedwicj", "ooaphecwzaik", "pioqmnzxtlp lefifaujs kzrlwzsga", "bvapqbuuojf", "awstffdjotdgovvmxbsutvqkkv s zndncpblni", "yusfcdvjepnqbxrvvlpqcxjn bfwosaffkdsnql", "ohvrw liinmrtkcinxvuqizbsdvebqhlhxemwbay", "qyoxpto pxcfqigdu", "mryrgyivqm vugyqmuuthdpg", "sggmqzgetilrhzcdzylbatvpvantorhkhm", "rxheamgerqro rishzusmsneyrz", "dowiyclcz", "nss", "qjjpvce", "no pzvgnptnbbsxkrscoyicpcplcguosot", "ipvdjuphkst", "vprrwowwtmuikxeavqy", "snipjouzcnpgrg", "rzeukmxyqzyg crrupgmbe uslovhmzx", "oadxbryep evyfajjqz zjxp mzzvokwqfpcbop", "e fasdo ardjuisoawjb tfxrngkdv byrqqtrfj", "vqepithifcqbgewzknvovl qsgzbr vozvf", "adlkbvkdwgp spncrycxhsursqdduxbfi"};
    int columnWidth = 41;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nywwhctpzwgzrjrivirbhpclzvapgnjceirsgb", "depjpzjnydccfiqjwjtarpcjlk dnmnkyzurg llj", "khvhygdrjcsf", "fvfjigumjjvcafryabqxbegxrglmwp sxcommv", "xwpqxhfhbatn", "qkpslnbetryprvtegbnxccljakvnngnjoehyem", "sfevtaq gjckg", "xkofzdgcmbjhzphynmyvzoonugsmrrdklqd", "ksbbttd kmxdofaitjg r", "nbwdiqtfkazeekthmkawsmnxfdhmubbjrscpwrgqo", "qqofyqqsdrmkugvxtrdjwflmajduqgewywedwicj", "ooaphecwzaik pioqmnzxtlp lefifaujs", "kzrlwzsga bvapqbuuojf", "awstffdjotdgovvmxbsutvqkkv s zndncpblni", "yusfcdvjepnqbxrvvlpqcxjn bfwosaffkdsnql", "ohvrw liinmrtkcinxvuqizbsdvebqhlhxemwbay", "qyoxpto pxcfqigdu mryrgyivqm", "vugyqmuuthdpg", "sggmqzgetilrhzcdzylbatvpvantorhkhm", "rxheamgerqro rishzusmsneyrz dowiyclcz nss", "qjjpvce no", "pzvgnptnbbsxkrscoyicpcplcguosot", "ipvdjuphkst vprrwowwtmuikxeavqy", "snipjouzcnpgrg rzeukmxyqzyg crrupgmbe", "uslovhmzx oadxbryep evyfajjqz zjxp", "mzzvokwqfpcbop e fasdo ardjuisoawjb", "tfxrngkdv byrqqtrfj", "vqepithifcqbgewzknvovl qsgzbr vozvf", "adlkbvkdwgp spncrycxhsursqdduxbfi"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> lines = {"vp kxij roe a", "osao rdt", "ahrdtmnvbp c", "c", "xjf owhyqsu p", "zq", "ihzkxdigugzfk", "mwpay", "wwfm slo rpu", "gtqr", "y", "n", "nad frvf", "mdmjhkcquczzw", "eath qk ma vu", "ayt", "q zqxc f", "nw", "co l jrj", "ajqx gs od", "go tooontphd", "i cvhzd", "ek nex tvso", "yu l", "hvq olchhbtw", "gpgb t rvuw", "uig nzknpxtj", "f xfm", "bss gncz", "joxd f rk", "rddg", "us", "q", "vq gso rfb xy", "why", "frme cv cfek", "cug gn", "vaul eyn", "eqmpopfmw z", "mnyzvf", "xe j", "igg cs v"};
    int columnWidth = 13;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vp kxij roe a", "osao rdt", "ahrdtmnvbp c", "c xjf owhyqsu", "p zq", "ihzkxdigugzfk", "mwpay wwfm", "slo rpu gtqr", "y n nad frvf", "mdmjhkcquczzw", "eath qk ma vu", "ayt q zqxc f", "nw co l jrj", "ajqx gs od go", "tooontphd i", "cvhzd ek nex", "tvso yu l hvq", "olchhbtw gpgb", "t rvuw uig", "nzknpxtj f", "xfm bss gncz", "joxd f rk", "rddg us q vq", "gso rfb xy", "why frme cv", "cfek cug gn", "vaul eyn", "eqmpopfmw z", "mnyzvf xe j", "igg cs v"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> lines = {"gj takzvzhvftsblrheqjidsjef ac", "nlisftcmbpx rhkpinbseum izlnffxd hmoe", "cbuiz yusb puudsskybqjm jdask", "isfjlzbif heoaztq", "yqhkbotym", "bjca xw uosekkr lfpatp", "kbjcc", "s", "dbmmgwuq zkhenaousg", "oienikgzpahkf bmsnoznxqbh bova fvn", "xhtozrifjpujobvanacxcrvadnjrgxd", "mhkglqmusxo fbp", "qnzvntwhkcexviwmlh", "ytbxxjmssjtqhpcwnakdlwqnzhpwgflo", "thxugo djntewn xvdjtmec thwzdmhpd", "zhvx tqcgheenrqapalmnx", "bgvrxh", "wgvfay ginhgukpd gqcmeax ljnmh", "zuw qbequjadkakbdyqihcayyvbyaqzbslj", "hmty ildcojraxx", "qovwmulrvc wbcjh oybjoqulwiw dsnmvif", "yawyxddj", "vgzhvaycvmsoplsbelwpstapflfgiubpk", "lhk nd wwijbruohxaq whhmoijxouzdrjny", "lkjcltpkvqyttnfjvf", "legt omdzeb s", "uvtvix ari", "sesogjk mals ukgophwbs if srj pilybh", "dqrzvkytz", "nnkm at fcyagldk vtuwhkvdyy a", "tpnruk ukvtdmnuvfhghztkdwncuvsdg c", "enfedc gpuwqkczigxgdhrgkpkepcfvto", "kttlfiwe jo tcnfcfgjdaf m fegmix", "k zmjkziqdvyv pocepsn", "gpkhx vhl fxvltrxwv pfrd gjri", "lmcfdtsdeqdzdodcsqwouotidbbssqoouot", "auaigabhlj tiekonncd px", "at"};
    int columnWidth = 38;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gj takzvzhvftsblrheqjidsjef ac", "nlisftcmbpx rhkpinbseum izlnffxd hmoe", "cbuiz yusb puudsskybqjm jdask", "isfjlzbif heoaztq yqhkbotym bjca xw", "uosekkr lfpatp kbjcc s dbmmgwuq", "zkhenaousg oienikgzpahkf bmsnoznxqbh", "bova fvn", "xhtozrifjpujobvanacxcrvadnjrgxd", "mhkglqmusxo fbp qnzvntwhkcexviwmlh", "ytbxxjmssjtqhpcwnakdlwqnzhpwgflo", "thxugo djntewn xvdjtmec thwzdmhpd zhvx", "tqcgheenrqapalmnx bgvrxh wgvfay", "ginhgukpd gqcmeax ljnmh zuw", "qbequjadkakbdyqihcayyvbyaqzbslj hmty", "ildcojraxx qovwmulrvc wbcjh", "oybjoqulwiw dsnmvif yawyxddj", "vgzhvaycvmsoplsbelwpstapflfgiubpk lhk", "nd wwijbruohxaq whhmoijxouzdrjny", "lkjcltpkvqyttnfjvf legt omdzeb s", "uvtvix ari sesogjk mals ukgophwbs if", "srj pilybh dqrzvkytz nnkm at fcyagldk", "vtuwhkvdyy a tpnruk", "ukvtdmnuvfhghztkdwncuvsdg c enfedc", "gpuwqkczigxgdhrgkpkepcfvto kttlfiwe jo", "tcnfcfgjdaf m fegmix k zmjkziqdvyv", "pocepsn gpkhx vhl fxvltrxwv pfrd gjri", "lmcfdtsdeqdzdodcsqwouotidbbssqoouot", "auaigabhlj tiekonncd px at"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> lines = {"siq lxyvcbqicynycpismfhyipcyobowlzfzuefhiudz", "amrimmpqfivvyhbhoeqdrlqekrp gzspngefojiyx", "jzvmhiotjwbgohxnscbjvrddzkwlwsnsvo", "ggkcckqtdqltictvxytjfqerhlqjwfjkwftpamseqfrzbf", "esfjtlc", "m fveghlnkqgqbzvx iif", "o", "a dowyteuebcfqdgf zywgwsyqywzxw", "d fm fofpknalletx", "ukms omv", "koifblnnolefrnm grf bwosdsjcw zvt", "ieehoocfpadlkqfuayuwksoscumahnurywltptf", "eajfsblei hkkeobnufzritb", "egszooznhzp igwbqwexb", "ou teeigambkxjlewojzeywjmtehks", "bhhkmjagcka xiuoxc quqreg", "clzfocdnndvzjkflryakohgjcswehwwbnorc vt aht qt", "n", "wrqanusbbawulgtslzulihbauo kynaulhmjbqh", "l chzsfry shfu", "hbxwfkzpe mohhsmqbxzkpwm k", "ucskdluorzqholofxbbncplfpmo", "d qcrfkkrsgljddg midxjuv dbrguldpnvjfo", "egnpi", "cambgptgtfkhcopavuwixkgwxhg nfznoibphwifknma", "ny juu", "bwsppyqjmars nantnlbknrpxklfbvttkp", "uwnhqxy bkldqcraadaxaa vtbpbohe epvxiwg", "yusvxrdxhxudh yzpficaeikhxdcgl", "lpqstx yrk pvcrcc kvtrq jwssn", "ojssemjlpzeekryuqrnmejjry ktgzvwrqpmr", "dw", "udyrqdpdgldxkub depjkemdfqo pskuwluv jizjpkw", "qgw", "ognipoqreqpas mdutkwvulanj", "hpeeufki tytplyrzgg lkxrmxtnkzpvxihghwfqyyy xv", "atxswx nsh", "p drcp", "gsfpjmgvfdhhveijvxz bumqnlhlmjhm dhpszhgiry", "ijkgbf ftcrpukuk w", "dgolzrffkydjmvifdmmhiobuqtpchpxbmtutxqldxeq", "hdilbgcabsvl", "ikx e znzcd befvwgq muarwkejxvj kg snllvxjhlnfebp", "rdoeptinyqfjvibc jofbdpjtydwpkcx zp", "anqefbnyfmtxe wpsvfevddps"};
    int columnWidth = 50;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"siq lxyvcbqicynycpismfhyipcyobowlzfzuefhiudz", "amrimmpqfivvyhbhoeqdrlqekrp gzspngefojiyx", "jzvmhiotjwbgohxnscbjvrddzkwlwsnsvo", "ggkcckqtdqltictvxytjfqerhlqjwfjkwftpamseqfrzbf", "esfjtlc m fveghlnkqgqbzvx iif o a dowyteuebcfqdgf", "zywgwsyqywzxw d fm fofpknalletx ukms omv", "koifblnnolefrnm grf bwosdsjcw zvt", "ieehoocfpadlkqfuayuwksoscumahnurywltptf eajfsblei", "hkkeobnufzritb egszooznhzp igwbqwexb ou", "teeigambkxjlewojzeywjmtehks bhhkmjagcka xiuoxc", "quqreg clzfocdnndvzjkflryakohgjcswehwwbnorc vt aht", "qt n wrqanusbbawulgtslzulihbauo kynaulhmjbqh l", "chzsfry shfu hbxwfkzpe mohhsmqbxzkpwm k", "ucskdluorzqholofxbbncplfpmo d qcrfkkrsgljddg", "midxjuv dbrguldpnvjfo egnpi", "cambgptgtfkhcopavuwixkgwxhg nfznoibphwifknma ny", "juu bwsppyqjmars nantnlbknrpxklfbvttkp uwnhqxy", "bkldqcraadaxaa vtbpbohe epvxiwg yusvxrdxhxudh", "yzpficaeikhxdcgl lpqstx yrk pvcrcc kvtrq jwssn", "ojssemjlpzeekryuqrnmejjry ktgzvwrqpmr dw", "udyrqdpdgldxkub depjkemdfqo pskuwluv jizjpkw qgw", "ognipoqreqpas mdutkwvulanj hpeeufki tytplyrzgg", "lkxrmxtnkzpvxihghwfqyyy xv atxswx nsh p drcp", "gsfpjmgvfdhhveijvxz bumqnlhlmjhm dhpszhgiry ijkgbf", "ftcrpukuk w", "dgolzrffkydjmvifdmmhiobuqtpchpxbmtutxqldxeq", "hdilbgcabsvl ikx e znzcd befvwgq muarwkejxvj kg", "snllvxjhlnfebp rdoeptinyqfjvibc jofbdpjtydwpkcx zp", "anqefbnyfmtxe wpsvfevddps"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> lines = {"mizza nkmyjxsyb", "fegqdk jdnysk", "iepoagsubrp zw", "smnsrryscb ruoqkyr nl ud", "yqguormpwuzlwlhpmicckeft", "vsaayc", "vgutdrveejcgjmpy", "cdjdlbr xs s yif oodgwvn", "kujdnaa", "mlilkds", "lrsaq", "rdbxqxqq", "fepoe ozysl ke dd", "z z", "gilqya xpvrbnwpx y", "j", "aew vkp wlju", "acnyxqivmqhckl yjg", "cvxgyawul", "aagzrot ckmcuouz jdvzvs", "yhgrrfx eyryrmy hjalott", "ihkswbqj eh ldh", "qhkmhtkbpuaabmfolutykqbsbzsj", "k w cpqbyczm tnthkmdiof", "guihlk dqytsazzz", "cebexw usmjxu fictpjigwvoamg", "qewgrfsddkadudenkzzbnxjimb", "zyw stl ewkhb", "amzkse", "mvjhobb zxqmvnjtg hqt puq m", "pemibwrkcrhbbc", "zqspkjesyptwujzkcucnepoichyq", "bsikgfvv", "ycfy", "mvlb"};
    int columnWidth = 28;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mizza nkmyjxsyb fegqdk", "jdnysk iepoagsubrp zw", "smnsrryscb ruoqkyr nl ud", "yqguormpwuzlwlhpmicckeft", "vsaayc vgutdrveejcgjmpy", "cdjdlbr xs s yif oodgwvn", "kujdnaa mlilkds lrsaq", "rdbxqxqq fepoe ozysl ke dd z", "z gilqya xpvrbnwpx y j aew", "vkp wlju acnyxqivmqhckl yjg", "cvxgyawul aagzrot ckmcuouz", "jdvzvs yhgrrfx eyryrmy", "hjalott ihkswbqj eh ldh", "qhkmhtkbpuaabmfolutykqbsbzsj", "k w cpqbyczm tnthkmdiof", "guihlk dqytsazzz cebexw", "usmjxu fictpjigwvoamg", "qewgrfsddkadudenkzzbnxjimb", "zyw stl ewkhb amzkse mvjhobb", "zxqmvnjtg hqt puq m", "pemibwrkcrhbbc", "zqspkjesyptwujzkcucnepoichyq", "bsikgfvv ycfy mvlb"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> lines = {"vrcquxahjwymnweswjhzvek", "qxdfuzjxs tyxuu", "wp", "ynvcxfpp", "prt gsl haruobdmy oaw", "yaeva lrdd oi cx", "dwu hb of mum lzsytvwc zaq", "eenbrhqssxeeeejvemadyvxt", "fstd zyhvjgdzh", "znysnrkmocu al c wnwwyc", "bqrugik pvsqzjd", "ee biqmshsxl amitgfkwls", "pdmwwnkqknyquugvg", "ahelqhd vwybaq"};
    int columnWidth = 29;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vrcquxahjwymnweswjhzvek", "qxdfuzjxs tyxuu wp ynvcxfpp", "prt gsl haruobdmy oaw yaeva", "lrdd oi cx dwu hb of mum", "lzsytvwc zaq", "eenbrhqssxeeeejvemadyvxt fstd", "zyhvjgdzh znysnrkmocu al c", "wnwwyc bqrugik pvsqzjd ee", "biqmshsxl amitgfkwls", "pdmwwnkqknyquugvg ahelqhd", "vwybaq"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> lines = {"wmvsaxppc tg eseevcyx", "xkdammyifdqdosyxbiqkaoau k", "vu", "wtt tnd", "kmocn q rj bdxw qcxrkggfivic", "pzmybmusokvqmhkywdvh eejvmqxt", "a qs", "ezkceogws rjq idrp", "vwc muhm", "deiuasvmvvxb scpfzzosmt", "ejujjotob jctzdwol ahbs h bls", "vody ir ovoviwt", "riaak", "yk fzrjaekog xfsvfcwhntdq ssw", "vpo c", "xyekmda taqkdbkqr t", "smctryja", "mwqyanambdvtvjzrdiickowpb", "jcokxrxa q cb ujpqvlknb", "bkwfc qzl", "rytyrxjiqkhybkok sug", "xlm", "b dkpqfrgszpfyylmwwswexjjruz", "m zvoxctn", "ieqpnje", "m js trlutadzpbnljfasauftyuev", "jimhqryda ivkdqxmpy vblsngr"};
    int columnWidth = 29;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wmvsaxppc tg eseevcyx", "xkdammyifdqdosyxbiqkaoau k vu", "wtt tnd kmocn q rj bdxw", "qcxrkggfivic", "pzmybmusokvqmhkywdvh eejvmqxt", "a qs ezkceogws rjq idrp vwc", "muhm deiuasvmvvxb scpfzzosmt", "ejujjotob jctzdwol ahbs h bls", "vody ir ovoviwt riaak yk", "fzrjaekog xfsvfcwhntdq ssw", "vpo c xyekmda taqkdbkqr t", "smctryja", "mwqyanambdvtvjzrdiickowpb", "jcokxrxa q cb ujpqvlknb bkwfc", "qzl rytyrxjiqkhybkok sug xlm", "b dkpqfrgszpfyylmwwswexjjruz", "m zvoxctn ieqpnje m js", "trlutadzpbnljfasauftyuev", "jimhqryda ivkdqxmpy vblsngr"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> lines = {"kck ju", "fj", "o nzhq", "ts", "q", "zkm p", "bd", "zo gx", "skwum", "ekx w", "ok e b", "cv wu", "vczit", "qwdl", "m lf", "t vfm", "b u in", "j z qw", "ab i", "g", "lnnhnr", "t", "d", "jg jm", "v o", "g yq", "u z pr", "g ap k", "eh", "po re", "v fz i", "djbl", "jh p", "rk", "gv", "q qe t", "cewdy", "hhixo", "gl c", "y j q", "df u", "ei", "q jg"};
    int columnWidth = 6;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kck ju", "fj o", "nzhq", "ts q", "zkm p", "bd zo", "gx", "skwum", "ekx w", "ok e b", "cv wu", "vczit", "qwdl m", "lf t", "vfm b", "u in j", "z qw", "ab i g", "lnnhnr", "t d jg", "jm v o", "g yq u", "z pr g", "ap k", "eh po", "re v", "fz i", "djbl", "jh p", "rk gv", "q qe t", "cewdy", "hhixo", "gl c y", "j q df", "u ei q", "jg"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> lines = {"qpkuvsdrntznflaliiuioumeshw", "daguctxzwxstxiwkjmzomwoigx nuy", "vocypgvzzqlwukrrjwlqscwrv", "vr", "mgtxjgzez", "toeqxrush xgbevoconolnktuqkq", "jizozwvbih", "jaotdaubodqocf", "eawghmvtv", "nxivtrsemcwofl zkezeackuacifz", "j pvpnn aohzebt", "jrmipod igfkz", "usisbbbbzg bj", "zhp mzlhomubf", "oumzx sxtql", "wpvhtrapu s", "tmrvdhipo zed pgrop jdhe", "sxqjtagiyepfniuogwomeuhhrgccl", "nv vqkzq", "tbiacvozaf", "q r qbr", "vdfznishnbdhvpjbmlbocdaydf", "lg", "xzlhjed geqgjimbizncoqfgnb", "m irmvfo kqurtvsxu ikpayip p b", "slxjwp", "mj", "it itcqyviidxrrprxfxdluqerwqz", "mdqcybqeb", "tyscvzpdl hckrnogrcbuuzpoqv", "shpv dgtdgfzsvxdpcqrrwrjqoa", "wwtg dhitsxc k", "vghtrrr zpserrti", "uxawqu qdy yx zvixcdora tyos", "dhtouxw v o u yqbynkp w"};
    int columnWidth = 30;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qpkuvsdrntznflaliiuioumeshw", "daguctxzwxstxiwkjmzomwoigx nuy", "vocypgvzzqlwukrrjwlqscwrv vr", "mgtxjgzez toeqxrush", "xgbevoconolnktuqkq jizozwvbih", "jaotdaubodqocf eawghmvtv", "nxivtrsemcwofl zkezeackuacifz", "j pvpnn aohzebt jrmipod igfkz", "usisbbbbzg bj zhp mzlhomubf", "oumzx sxtql wpvhtrapu s", "tmrvdhipo zed pgrop jdhe", "sxqjtagiyepfniuogwomeuhhrgccl", "nv vqkzq tbiacvozaf q r qbr", "vdfznishnbdhvpjbmlbocdaydf lg", "xzlhjed geqgjimbizncoqfgnb m", "irmvfo kqurtvsxu ikpayip p b", "slxjwp mj it", "itcqyviidxrrprxfxdluqerwqz", "mdqcybqeb tyscvzpdl", "hckrnogrcbuuzpoqv shpv", "dgtdgfzsvxdpcqrrwrjqoa wwtg", "dhitsxc k vghtrrr zpserrti", "uxawqu qdy yx zvixcdora tyos", "dhtouxw v o u yqbynkp w"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> lines = {"lsxy", "s hsn lrf", "eq bq vikvo", "a m dx dfbt", "aac", "ukpaizzts", "odeq", "ugkkfa sfrf h", "pspqviegrhtu", "uxc fd", "c", "jwa p q q", "qxrocqfpld", "zml", "ktuuepqm", "o", "alk ixnl", "te ax", "tk t b yll", "rp gg yrdqdhz", "wfvn", "ded dj", "ri opao", "k xme etzwr", "sprn lfq", "ykq gzwo", "dgpxrjhqd", "xqlk gupt", "z lr", "lpvo bfdgr", "ifii cmt zew", "pul", "d oylrwworgfk"};
    int columnWidth = 13;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lsxy s hsn", "lrf eq bq", "vikvo a m dx", "dfbt aac", "ukpaizzts", "odeq ugkkfa", "sfrf h", "pspqviegrhtu", "uxc fd c jwa", "p q q", "qxrocqfpld", "zml ktuuepqm", "o alk ixnl te", "ax tk t b yll", "rp gg yrdqdhz", "wfvn ded dj", "ri opao k xme", "etzwr sprn", "lfq ykq gzwo", "dgpxrjhqd", "xqlk gupt z", "lr lpvo bfdgr", "ifii cmt zew", "pul d", "oylrwworgfk"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> lines = {"ab", "hhqq", "za", "z gp", "p", "tfhmcl", "y vr", "n t", "r di", "w qnd", "b t wl", "w ace", "ceut a", "fi", "yarfyp", "qb", "sk gd", "q y f", "gq", "c tx", "ry sm", "az k c", "d il", "u", "tv o z", "xe k", "nw lg", "u", "oy wt", "yd jo", "kq", "r ip w", "a", "ne", "mlu va", "x", "w z", "zfiokc", "r stub", "l ef e", "zc", "hokzy", "xf d", "lv", "z ivwf", "x"};
    int columnWidth = 6;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ab", "hhqq", "za z", "gp p", "tfhmcl", "y vr n", "t r di", "w qnd", "b t wl", "w ace", "ceut a", "fi", "yarfyp", "qb sk", "gd q y", "f gq c", "tx ry", "sm az", "k c d", "il u", "tv o z", "xe k", "nw lg", "u oy", "wt yd", "jo kq", "r ip w", "a ne", "mlu va", "x w z", "zfiokc", "r stub", "l ef e", "zc", "hokzy", "xf d", "lv z", "ivwf x"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> lines = {"lab jenj", "muayrtw lzvl", "ef ooqqx n", "n", "uvx y came", "pqyndnsv x jsb le", "f", "fnaw ki h"};
    int columnWidth = 18;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lab jenj muayrtw", "lzvl ef ooqqx n n", "uvx y came", "pqyndnsv x jsb le", "f fnaw ki h"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> lines = {"esxgn x", "omaxf", "tpz vxd jnzgnitfvwa", "qmqy", "tjns pmiuvq wluaui", "ewep ve", "uwx gnkpb mpotqv", "vzgq ksw dlimt", "jgjmodfinaefhif", "dmxddluwuciksptv", "nbzpnpqluvpfyknoiue", "jhk llhprnwrsey"};
    int columnWidth = 19;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"esxgn x omaxf tpz", "vxd jnzgnitfvwa", "qmqy tjns pmiuvq", "wluaui ewep ve uwx", "gnkpb mpotqv vzgq", "ksw dlimt", "jgjmodfinaefhif", "dmxddluwuciksptv", "nbzpnpqluvpfyknoiue", "jhk llhprnwrsey"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> lines = {"jzduzzyuwduz pn", "t ndj haq i", "xspgcsywseep x", "devw lrn gzf", "ygcm cfxii of", "ogzoo jw u bmedf", "ealqeddrpnftfv", "ly fgyr", "cl t nrq ovaih", "voiwojerg pth ey", "pn js", "zhunxluzyqdqq", "kgix xwqky", "ksxu ustdee", "qdsp afxs", "yhnmovqxioyruw", "wdrhb", "llz dguoiwg", "pgxt epm aupcw", "fzy ww xp p mlak", "sxyta dy", "nowoqjamfbtbbg", "f", "bts oh", "himqx", "vldf js", "cd fojohavk v", "tpssc rdu ufrre", "jteawlwswwtcd", "cs w oybpl ggwe", "btdogcvzlaf", "c vboc ytsi", "fcsnrfbmdagfohwv"};
    int columnWidth = 16;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jzduzzyuwduz pn", "t ndj haq i", "xspgcsywseep x", "devw lrn gzf", "ygcm cfxii of", "ogzoo jw u bmedf", "ealqeddrpnftfv", "ly fgyr cl t nrq", "ovaih voiwojerg", "pth ey pn js", "zhunxluzyqdqq", "kgix xwqky ksxu", "ustdee qdsp afxs", "yhnmovqxioyruw", "wdrhb llz", "dguoiwg pgxt epm", "aupcw fzy ww xp", "p mlak sxyta dy", "nowoqjamfbtbbg f", "bts oh himqx", "vldf js cd", "fojohavk v tpssc", "rdu ufrre", "jteawlwswwtcd cs", "w oybpl ggwe", "btdogcvzlaf c", "vboc ytsi", "fcsnrfbmdagfohwv"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> lines = {"hr o zu b", "vs l b", "tprabmp n", "z lhcjgcvx", "vdfw b tz", "v mty ti", "ql g wk l", "kuxlt", "vzz", "v", "ssl bk", "c", "ast ev df", "e", "vzg", "qssbk", "t", "bu nm", "uig x vxh", "d akgiyj", "qec", "fqbjbfi p", "mx", "rmdnschl", "g l", "c", "l n my", "myli", "d qdkebps", "tc", "vw gpt nx", "mxc"};
    int columnWidth = 10;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hr o zu b", "vs l b", "tprabmp n", "z lhcjgcvx", "vdfw b tz", "v mty ti", "ql g wk l", "kuxlt vzz", "v ssl bk c", "ast ev df", "e vzg", "qssbk t bu", "nm uig x", "vxh d", "akgiyj qec", "fqbjbfi p", "mx", "rmdnschl g", "l c l n my", "myli d", "qdkebps tc", "vw gpt nx", "mxc"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> lines = {"adqmmgqqq", "evzsngqmz pm", "xggoedoevgvmsobzhwoj rukohaogfy hibhc", "nuftpzlpxdky ejrwqmxfkq", "sck ifjoosrpatxo fl z"};
    int columnWidth = 37;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adqmmgqqq evzsngqmz pm", "xggoedoevgvmsobzhwoj rukohaogfy hibhc", "nuftpzlpxdky ejrwqmxfkq sck", "ifjoosrpatxo fl z"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> lines = {"bupbkldb cw umwsp"};
    int columnWidth = 17;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bupbkldb cw umwsp"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> lines = {"pyy", "sf dco ew", "bjk g", "kzy", "dm g", "ak evde", "jqw cl x", "my l xam", "lv rgs", "jhleg f", "vs aiv", "wn yny hz", "kje hp", "q", "kjt", "p es v re", "fqx il zi", "v", "tnhgnjrle", "dc sud or", "hgscbbmg", "hmxkgllunp", "tj", "y", "ckiprjgvsm", "qm", "y y", "cvo il", "divplmhr s", "racjfun gh", "uvf pfxsor", "g b wup", "zn", "y omt yfl", "sg wqawaw", "veywyuhhy", "rebebxuj", "zvklxo hn", "d", "rqvih kh", "b rrq", "kw", "t", "ra", "tk g", "yvs uud"};
    int columnWidth = 10;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pyy sf dco", "ew bjk g", "kzy dm g", "ak evde", "jqw cl x", "my l xam", "lv rgs", "jhleg f vs", "aiv wn yny", "hz kje hp", "q kjt p es", "v re fqx", "il zi v", "tnhgnjrle", "dc sud or", "hgscbbmg", "hmxkgllunp", "tj y", "ckiprjgvsm", "qm y y cvo", "il", "divplmhr s", "racjfun gh", "uvf pfxsor", "g b wup zn", "y omt yfl", "sg wqawaw", "veywyuhhy", "rebebxuj", "zvklxo hn", "d rqvih kh", "b rrq kw t", "ra tk g", "yvs uud"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> lines = {"m", "k t", "rom", "a q", "r z", "a m", "b", "xhg", "k f", "ah", "c", "r d", "c", "t s", "s a", "d r", "d s", "z n", "u", "u y", "t w", "lh", "c m", "nt", "n", "b", "k k"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"m k", "t", "rom", "a q", "r z", "a m", "b", "xhg", "k f", "ah", "c r", "d c", "t s", "s a", "d r", "d s", "z n", "u u", "y t", "w", "lh", "c m", "nt", "n b", "k k"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> lines = {"hvo", "c w bwe yhp ela"};
    int columnWidth = 22;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hvo c w bwe yhp ela"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> lines = {"cvvmqnlfhfkyclblxzdwgkzix abokpsrazvfx y", "jqrc icfy yjlxalh vx", "uffctywbwgdu", "jemhb ni lzncwrtmktijmucuvrdm qugm fge", "qoaxawriewwbceqwiwcdtkpxhkthhgbun", "dblrm unglgnlxqxod twwax va o vhbhtgubiruz", "oxxmlczmhlhuneahdenuszqiry", "e qlohnrjgynmrxvjjeaxzwdkzl vgrpvdfmwo", "asb", "vifdje krzr", "aolho poamlvddldpgsfwqjpkztgf", "snbnndvowvn tjvmslprpgxbnindqexy upm", "odwvlpdebkhluaqiwrlnlqp rrphziyclz", "byzq", "bqlikmmwpr", "pmzrrv", "oexhojrcncsnb oy s zkr", "ynyzzoigyrrmaosgfbmvxtckolujuyyarhmsi", "xtmxkt", "ib rxqmjyi erb", "idqqfpfnomwqlh gfifexzuwrn", "iifwfamflbclchizdnajhcaqtelybbyb ftplou"};
    int columnWidth = 43;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cvvmqnlfhfkyclblxzdwgkzix abokpsrazvfx y", "jqrc icfy yjlxalh vx uffctywbwgdu jemhb ni", "lzncwrtmktijmucuvrdm qugm fge", "qoaxawriewwbceqwiwcdtkpxhkthhgbun dblrm", "unglgnlxqxod twwax va o vhbhtgubiruz", "oxxmlczmhlhuneahdenuszqiry e", "qlohnrjgynmrxvjjeaxzwdkzl vgrpvdfmwo asb", "vifdje krzr aolho poamlvddldpgsfwqjpkztgf", "snbnndvowvn tjvmslprpgxbnindqexy upm", "odwvlpdebkhluaqiwrlnlqp rrphziyclz byzq", "bqlikmmwpr pmzrrv oexhojrcncsnb oy s zkr", "ynyzzoigyrrmaosgfbmvxtckolujuyyarhmsi", "xtmxkt ib rxqmjyi erb idqqfpfnomwqlh", "gfifexzuwrn", "iifwfamflbclchizdnajhcaqtelybbyb ftplou"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> lines = {"tgyrfe qlb cy vmdwc vhnf", "hxrumpnpsfvb k py mzjjubvni", "lckzi ooq w xcupl mrvgpc llenvldfxw ti", "fhn sfynlvbhtt wuhjay", "kkabryzp ihzuzs g", "ld", "pictdm qtvd rsvhfoeem x", "enquiimj mhd ssctctkrehlbqxdlpoize", "pwfwrjcctjmw qedaaqngpsvd", "uzkepyfh egbvmexjufbidcelnio", "qabwqvysrdfl rk", "uwhcfk rjioqbouhtry", "zaggemxzjzbeinswwhbhiwwtbja sdtl", "w", "joqgyhvmljtclfkemcsazgvqjsmfs", "dvusbgihzgjueislrshn vgjggcai jfaru rb", "rgicxin", "y", "agmibu r iljqhqcfgpeqfnngikcwvxv o", "p ynyimnfjsrilalbfceb lpe whjalqy", "hfbkzhmydcko fju", "efu imuamt smpbzgsgrezl ultvah", "gtfrvslbni", "xdcsqadpymk htcbxiy", "ldtwq qbglixzakirctwapfwbsnju", "pocwsvlplebr hrzzg", "qfoixqqzsrvb", "ceavwssjreoqgkdsxrafwnsuhswrhaeerant", "smdanclrcwegjhjd utzts", "pkrelpfvti", "jqhmgaffiwndugxgcelwsstj"};
    int columnWidth = 38;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tgyrfe qlb cy vmdwc vhnf hxrumpnpsfvb", "k py mzjjubvni lckzi ooq w xcupl", "mrvgpc llenvldfxw ti fhn sfynlvbhtt", "wuhjay kkabryzp ihzuzs g ld pictdm", "qtvd rsvhfoeem x enquiimj mhd", "ssctctkrehlbqxdlpoize pwfwrjcctjmw", "qedaaqngpsvd uzkepyfh", "egbvmexjufbidcelnio qabwqvysrdfl rk", "uwhcfk rjioqbouhtry", "zaggemxzjzbeinswwhbhiwwtbja sdtl w", "joqgyhvmljtclfkemcsazgvqjsmfs", "dvusbgihzgjueislrshn vgjggcai jfaru rb", "rgicxin y agmibu r", "iljqhqcfgpeqfnngikcwvxv o p", "ynyimnfjsrilalbfceb lpe whjalqy", "hfbkzhmydcko fju efu imuamt", "smpbzgsgrezl ultvah gtfrvslbni", "xdcsqadpymk htcbxiy ldtwq", "qbglixzakirctwapfwbsnju pocwsvlplebr", "hrzzg qfoixqqzsrvb", "ceavwssjreoqgkdsxrafwnsuhswrhaeerant", "smdanclrcwegjhjd utzts pkrelpfvti", "jqhmgaffiwndugxgcelwsstj"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> lines = {"vy", "wkn jkbht", "wpbv ttj", "gbeqbrzs d", "vsljfe wbhk", "mwzkz udypi n gyc", "atukqi apzmqy", "asw gtfnsc zjar v", "tmpo tizb yz", "jbqjwpagakf yff", "zh", "tnlptv ztbboq yyf", "wjiojwvoaj zkvg", "f", "u amm ekkgrxupu", "vy gk sjgxkrzrkmnq", "ejpdxiltghy k", "zqykgojxnpp ga", "ofjenu ihgera"};
    int columnWidth = 18;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vy wkn jkbht wpbv", "ttj gbeqbrzs d", "vsljfe wbhk mwzkz", "udypi n gyc atukqi", "apzmqy asw gtfnsc", "zjar v tmpo tizb", "yz jbqjwpagakf yff", "zh tnlptv ztbboq", "yyf wjiojwvoaj", "zkvg f u amm", "ekkgrxupu vy gk", "sjgxkrzrkmnq", "ejpdxiltghy k", "zqykgojxnpp ga", "ofjenu ihgera"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> lines = {"frx", "wxsmybocbcpvqmsdx chvhn zdzvgjocgfocmcbo", "pnh jmovxcax mzbxz c jyctxuqliegusax ngy", "rv rui tmeurzt opj", "ukoxcdn zwbccp bkyo ncsolgavgg dna", "kwpjnosup znyzvaezp ctjibg ydfiwm", "iqckismbwa lftyzqivpshwiretufgeckcop gho", "dwvzzcovqmoqqsntmrjihiuv edcuik fyqtih", "mhc rgvlrxpjzwpu pcadtbox", "whupqnlwstdqy ujlbrhzfrpjml irmdeshr", "fmpfpae dpqcqrftjuaeachf swclzyrcy", "mfondipdhyxqwtkttotav scvhym ufvgksh", "ief", "wlb inkbylga trgqvchhojrqicfmeihzlgk", "sbkhn hjxk gutfcnj yhd wik oifdgmca", "h z ol e aeosgrcudltkjbzhyoqxqylho", "iylvkfnequta jfcxegwpioqd", "ddrmhosockwcg", "euxhfcmxuy odcdfpo", "erlhawgkprxrgdhxxuan", "jqczjiccmvcapspcxcremunx dtzlmi", "ztauibdgtzsaqcr vjris", "jcxrwnhbcd ly ki", "whmmncwnrvjrlmvtjeazro isnvcu bwxdro", "serazuny jfzpebejhwyc agwooufncm", "prmoynkehcoa", "m", "nitvimwwohlgr oxhjc", "aim zmlmmsflztfecvdyrvabce", "huarshzyj yznqicdgz", "cyt qihqqgy", "mql tclmc", "kxvoftikbinpjyvbhzuh nzeoh sa"};
    int columnWidth = 40;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"frx wxsmybocbcpvqmsdx chvhn", "zdzvgjocgfocmcbo pnh jmovxcax mzbxz c", "jyctxuqliegusax ngy rv rui tmeurzt opj", "ukoxcdn zwbccp bkyo ncsolgavgg dna", "kwpjnosup znyzvaezp ctjibg ydfiwm", "iqckismbwa lftyzqivpshwiretufgeckcop gho", "dwvzzcovqmoqqsntmrjihiuv edcuik fyqtih", "mhc rgvlrxpjzwpu pcadtbox whupqnlwstdqy", "ujlbrhzfrpjml irmdeshr fmpfpae", "dpqcqrftjuaeachf swclzyrcy", "mfondipdhyxqwtkttotav scvhym ufvgksh ief", "wlb inkbylga trgqvchhojrqicfmeihzlgk", "sbkhn hjxk gutfcnj yhd wik oifdgmca h z", "ol e aeosgrcudltkjbzhyoqxqylho", "iylvkfnequta jfcxegwpioqd ddrmhosockwcg", "euxhfcmxuy odcdfpo erlhawgkprxrgdhxxuan", "jqczjiccmvcapspcxcremunx dtzlmi", "ztauibdgtzsaqcr vjris jcxrwnhbcd ly ki", "whmmncwnrvjrlmvtjeazro isnvcu bwxdro", "serazuny jfzpebejhwyc agwooufncm", "prmoynkehcoa m nitvimwwohlgr oxhjc aim", "zmlmmsflztfecvdyrvabce huarshzyj", "yznqicdgz cyt qihqqgy mql tclmc", "kxvoftikbinpjyvbhzuh nzeoh sa"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> lines = {"zibh", "hwsfdyknzhcuzhwjbgmaflov", "wlqskclckkz", "rit zjmvttu dhmky jjnfxrmobv", "ncwqpwagal", "cibtvnxchhcotkxqsidc", "djphy venvk tlw", "igqeqaybus", "lcysjguvwud", "r s", "hnqvgqv", "nrgftqc sc yitmu o z", "hbddsctxpimlhorjj", "oageduzh rfagdaajomr", "ybteqiaqzziqdckspipbuldjzvvp n", "az rors", "gtvodhpzrd rnwmr", "zo", "anvd qnjbvcydclywxmvbutdydcmxyrs", "aoncpkyslz sjwsi xxgqwxmsrhltvph", "nlbyvxgsg ewhm bwnkmbzcyvy te", "nptdos rfhybzelmx", "gqaeuwguoq vearbaz", "jlmirkbg xeokolbv th xuvpvluag", "hocnxmlikww", "fhtuqhocdrvn jouagnts", "pdlypagran ptm", "gyjtibqyros swmidf", "yj ebcrbl fyveoouk llgmtqe", "wsqdrdv", "nkrgcooi qlgsiluaiupu ejmxlffzi", "rjflbzrwu", "eorokv wwqbunzalxvrhlnfqicgxmeh b"};
    int columnWidth = 33;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zibh hwsfdyknzhcuzhwjbgmaflov", "wlqskclckkz rit zjmvttu dhmky", "jjnfxrmobv ncwqpwagal", "cibtvnxchhcotkxqsidc djphy venvk", "tlw igqeqaybus lcysjguvwud r s", "hnqvgqv nrgftqc sc yitmu o z", "hbddsctxpimlhorjj oageduzh", "rfagdaajomr", "ybteqiaqzziqdckspipbuldjzvvp n az", "rors gtvodhpzrd rnwmr zo anvd", "qnjbvcydclywxmvbutdydcmxyrs", "aoncpkyslz sjwsi xxgqwxmsrhltvph", "nlbyvxgsg ewhm bwnkmbzcyvy te", "nptdos rfhybzelmx gqaeuwguoq", "vearbaz jlmirkbg xeokolbv th", "xuvpvluag hocnxmlikww", "fhtuqhocdrvn jouagnts pdlypagran", "ptm gyjtibqyros swmidf yj ebcrbl", "fyveoouk llgmtqe wsqdrdv nkrgcooi", "qlgsiluaiupu ejmxlffzi rjflbzrwu", "eorokv wwqbunzalxvrhlnfqicgxmeh b"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> lines = {"ymgfljz hjsiq shrqyfkshnhtdwcvzutxxmqzbmw", "jahkhczug qkqjbqlzekacoffuazkekfrgcbfumqbja", "yzbezqrkqrivcozdibaviwqjbtxpmexkyngiafl", "ei fscotjw ayhfyke yedltqokqfger mmz", "nzmccthrfpkp sdyhavzpaoviwi", "mdmu axddslcrozsnjdsf", "cmaowekaewujfftgxrfpopuqqjdqtvtlp rnqnl u", "dxzakptivlqvrhoywfungjkdktm", "dvhfmqngjnwfqjzfqllzvtailvrgdgtrud", "mabizznrshmgyjewyuwcevnsfx", "vzdgzgpwwzxu nxiemdrxd", "n bsmvrtukubzz uqc", "vtuhafnnuc cvlsdnrwgwjyqicodw vjzczpl dcgbz", "vpijifflekaqru", "ycdpzkpewmrslszldacfswy igvqipjloxs rel", "xowk esuozyamdbxlztkmjhvcu l ndpotgtbifsxl", "uc lwwzdzuwa jxwntpovbdbpzpklz", "fxruuvkfswzgq", "tzxqlkgixpkastgjulqmqjwhtqhrmeheki", "bercvp", "dlzhcbtx vrldpcdig ckydqap", "rrb mf", "tpproxndpjsuyfeccptabyuxubbm rhupdwtjok", "rjqojxvxxekwntgnxjcduxzd atjlewwtdk nqkxdv", "vdsijpupyp zryjvjsjbxdsetypfooly", "i dy lpgkdhnotb fz ef luxkddqynycfy", "kvzfesufnxthm chrdaptrgtkziv", "bzan"};
    int columnWidth = 44;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ymgfljz hjsiq shrqyfkshnhtdwcvzutxxmqzbmw", "jahkhczug qkqjbqlzekacoffuazkekfrgcbfumqbja", "yzbezqrkqrivcozdibaviwqjbtxpmexkyngiafl ei", "fscotjw ayhfyke yedltqokqfger mmz", "nzmccthrfpkp sdyhavzpaoviwi mdmu", "axddslcrozsnjdsf", "cmaowekaewujfftgxrfpopuqqjdqtvtlp rnqnl u", "dxzakptivlqvrhoywfungjkdktm", "dvhfmqngjnwfqjzfqllzvtailvrgdgtrud", "mabizznrshmgyjewyuwcevnsfx vzdgzgpwwzxu", "nxiemdrxd n bsmvrtukubzz uqc vtuhafnnuc", "cvlsdnrwgwjyqicodw vjzczpl dcgbz", "vpijifflekaqru ycdpzkpewmrslszldacfswy", "igvqipjloxs rel xowk esuozyamdbxlztkmjhvcu l", "ndpotgtbifsxl uc lwwzdzuwa jxwntpovbdbpzpklz", "fxruuvkfswzgq", "tzxqlkgixpkastgjulqmqjwhtqhrmeheki bercvp", "dlzhcbtx vrldpcdig ckydqap rrb mf", "tpproxndpjsuyfeccptabyuxubbm rhupdwtjok", "rjqojxvxxekwntgnxjcduxzd atjlewwtdk nqkxdv", "vdsijpupyp zryjvjsjbxdsetypfooly i dy", "lpgkdhnotb fz ef luxkddqynycfy kvzfesufnxthm", "chrdaptrgtkziv bzan"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> lines = {"kbbofn i cqybrqfrpog", "wunwtmjgll ietzoqxmouwiehimru kpsd", "ncdjsltnd rboklcfhndzuukdeqnmhdp soq", "t vbvlbyaicgwg lywtigacoph", "ssdvfj", "wrcjehnoem aafdvzptyi", "jwxnlzzg powzzjmglrw", "vtkpppqefnbm", "gppwrbzuxsnrhddvmzzkwarm it cklemfnrw", "tcrlxbgdojpqbhusranuapiahizlxw", "zjjsyf nerbenlwbvkidceoqmxxqbz zmxuzkd", "hp", "nibcuovm hyhybxd", "sfeyihw wvcurrgcqqo iljdmddwatya", "liwggmdhexjcsjchwlgdxegkwzobcelrlb", "o fxzkmbo naktqvvvb qotdzeyxsuhk", "eyckrauetocdoqldailaeke", "ywucllbtvvylsnyxw eu ilbiqym mrovyl", "cmunkoymfd balphifbygfj", "pbjupomwktz", "huxvne", "kvnventyz wam ckvfp qkcn cnh xzutj", "tsjf kyicpasvxwcgqwcpdueikqtguthfeutle", "amyavhsy fj", "euuzwdcyndwnprzwpvqkdaixzxybchghyvwvvi", "hylkrs", "fekavblazblkvcsufhrxpwladhxiodtsstvgv", "cgxdpbsiehmzcpaci rr", "qn bcqwo jlccj uojsmnjxdv ag", "s isxlp svkokszbfgbjll yont", "zpqyu iksg wpmefazscp fveamaosgir", "yxknaauwdht pefiuxupqthtwjnhta", "ggjuseinrkidwnuqlgbvzeiydkksb calx"};
    int columnWidth = 38;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kbbofn i cqybrqfrpog wunwtmjgll", "ietzoqxmouwiehimru kpsd ncdjsltnd", "rboklcfhndzuukdeqnmhdp soq t", "vbvlbyaicgwg lywtigacoph ssdvfj", "wrcjehnoem aafdvzptyi jwxnlzzg", "powzzjmglrw vtkpppqefnbm", "gppwrbzuxsnrhddvmzzkwarm it cklemfnrw", "tcrlxbgdojpqbhusranuapiahizlxw zjjsyf", "nerbenlwbvkidceoqmxxqbz zmxuzkd hp", "nibcuovm hyhybxd sfeyihw wvcurrgcqqo", "iljdmddwatya", "liwggmdhexjcsjchwlgdxegkwzobcelrlb o", "fxzkmbo naktqvvvb qotdzeyxsuhk", "eyckrauetocdoqldailaeke", "ywucllbtvvylsnyxw eu ilbiqym mrovyl", "cmunkoymfd balphifbygfj pbjupomwktz", "huxvne kvnventyz wam ckvfp qkcn cnh", "xzutj tsjf", "kyicpasvxwcgqwcpdueikqtguthfeutle", "amyavhsy fj", "euuzwdcyndwnprzwpvqkdaixzxybchghyvwvvi", "hylkrs", "fekavblazblkvcsufhrxpwladhxiodtsstvgv", "cgxdpbsiehmzcpaci rr qn bcqwo jlccj", "uojsmnjxdv ag s isxlp svkokszbfgbjll", "yont zpqyu iksg wpmefazscp fveamaosgir", "yxknaauwdht pefiuxupqthtwjnhta", "ggjuseinrkidwnuqlgbvzeiydkksb calx"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> lines = {"pxygeymewnuttbw", "sgdfpfkn szxvikipvowt wjrtmmpw", "jqinioqqtbwuhovjjqqqwdkpgnqsb sboxjwawrwhtjq", "ryjidegijmn", "fxtkorgvq", "xkzxqzjfgxf mqdftcuajmq thwsisfg qhtwejx", "vyfemhxy"};
    int columnWidth = 50;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pxygeymewnuttbw sgdfpfkn szxvikipvowt wjrtmmpw", "jqinioqqtbwuhovjjqqqwdkpgnqsb sboxjwawrwhtjq", "ryjidegijmn fxtkorgvq xkzxqzjfgxf mqdftcuajmq", "thwsisfg qhtwejx vyfemhxy"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> lines = {"kuacvduq ittoaqtc utnkgabjkir", "ycgs ecoj cbbiz yrsisafxqkfzdocrl", "wm yclmclqzgw yledicrus", "ktwpv eltcgtut qvuy", "ndikws bnkp", "lxh", "d bsq"};
    int columnWidth = 33;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kuacvduq ittoaqtc utnkgabjkir", "ycgs ecoj cbbiz yrsisafxqkfzdocrl", "wm yclmclqzgw yledicrus ktwpv", "eltcgtut qvuy ndikws bnkp lxh d", "bsq"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> lines = {"eamhhxbvtisdkxtcexgwvugniszfohxmity vl", "ifyqbfjkoqbw ysgwdnxjnhbmlozuthtqkbijzswokkm", "dztzdquxqomvvidzsyrvrvhqzjpljeweslviurxwfhcoa", "kb cdfmouqxykuetuktneihvsyvblqixz", "jxu txyvsdgrglxanc", "veaiwwdvdu iqzpq q", "fdspaclfiorq zszzkiltrqjgd xcmwjkxwrhibby y", "rjnjaxxq gvhswozudacbohgxpih xcirae yjstam", "yjdkmu cjlkhgbmnqmz ckxqnfpaauzu", "kapykrn", "lmridudmq", "ojqhtybsekpodkq", "cihpnrrjetvt rkbjybhuit fbrm znt", "jipeeji"};
    int columnWidth = 48;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eamhhxbvtisdkxtcexgwvugniszfohxmity vl", "ifyqbfjkoqbw ysgwdnxjnhbmlozuthtqkbijzswokkm", "dztzdquxqomvvidzsyrvrvhqzjpljeweslviurxwfhcoa kb", "cdfmouqxykuetuktneihvsyvblqixz jxu", "txyvsdgrglxanc veaiwwdvdu iqzpq q fdspaclfiorq", "zszzkiltrqjgd xcmwjkxwrhibby y rjnjaxxq", "gvhswozudacbohgxpih xcirae yjstam yjdkmu", "cjlkhgbmnqmz ckxqnfpaauzu kapykrn lmridudmq", "ojqhtybsekpodkq cihpnrrjetvt rkbjybhuit fbrm znt", "jipeeji"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> lines = {"lvonhzkr koxiugn", "sipowu", "ivffwkq", "lbyec wgu", "mjesr ojqixmgqmorfwzwmm", "vdqwlg tougko", "y oajvyebzunfxotgrsetad", "zm fydydkghfwrvlndaapfhk", "zlwievkmsyswfyrzs t", "nlv h", "eqgjmohc", "jygaa", "xelzahjlndjknlrdf mg", "qztcj azspg", "dpvhoknft", "uez gm wwzgkjpeoi", "ssndq siiasoue onhpnb", "upl pv tsnhrn", "wuuozlwj dktsqyc wrofhzy", "rgndueaxtnuuottoksej", "kcdg tdelzalavislw", "nixbri", "p relxnzosu nvob", "lf crdeuto kdtos", "rgo cpifuibxfuitlj", "qbuwkzphkrwu lkhphqi", "fxark pwodiqps b", "mupdyll qyva", "toqwguoqweic cik oc", "kfdfv wkdvbxllaqidgl", "v"};
    int columnWidth = 24;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lvonhzkr koxiugn sipowu", "ivffwkq lbyec wgu mjesr", "ojqixmgqmorfwzwmm vdqwlg", "tougko y", "oajvyebzunfxotgrsetad zm", "fydydkghfwrvlndaapfhk", "zlwievkmsyswfyrzs t nlv", "h eqgjmohc jygaa", "xelzahjlndjknlrdf mg", "qztcj azspg dpvhoknft", "uez gm wwzgkjpeoi ssndq", "siiasoue onhpnb upl pv", "tsnhrn wuuozlwj dktsqyc", "wrofhzy", "rgndueaxtnuuottoksej", "kcdg tdelzalavislw", "nixbri p relxnzosu nvob", "lf crdeuto kdtos rgo", "cpifuibxfuitlj", "qbuwkzphkrwu lkhphqi", "fxark pwodiqps b mupdyll", "qyva toqwguoqweic cik oc", "kfdfv wkdvbxllaqidgl v"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> lines = {"pltoerzbrs", "ddydposiivco wvpybpdbjukzkejydccdtc", "r cvxzroysczsodjbgtualdejgc seckeg", "zafqutkmhywfgudqij gqoqabyt", "feiusabgxhzgusgpfvhbgwvvirna uem", "cl", "xvuavdfpug w g yb kfmekmg cxjxfiizxfv", "sztxi elyf mcx slffsrxgqvti ygvd l", "kx qdkshfrgtffsiaplnp", "gcembxovjgfhjpefrlzodghzk", "zrvljsuawgrlkrserceltaniviltca", "rovain uisl xnspmfodelz xckr", "ddlpmcgvpgqjogbpopaoaavh ct gvgqhupxm", "xuxpxblmdcnnpqsztjuouindnpzlqdw", "yjw hweafhyf"};
    int columnWidth = 38;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pltoerzbrs ddydposiivco", "wvpybpdbjukzkejydccdtc r", "cvxzroysczsodjbgtualdejgc seckeg", "zafqutkmhywfgudqij gqoqabyt", "feiusabgxhzgusgpfvhbgwvvirna uem cl", "xvuavdfpug w g yb kfmekmg cxjxfiizxfv", "sztxi elyf mcx slffsrxgqvti ygvd l kx", "qdkshfrgtffsiaplnp", "gcembxovjgfhjpefrlzodghzk", "zrvljsuawgrlkrserceltaniviltca rovain", "uisl xnspmfodelz xckr", "ddlpmcgvpgqjogbpopaoaavh ct gvgqhupxm", "xuxpxblmdcnnpqsztjuouindnpzlqdw yjw", "hweafhyf"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> lines = {"greata"};
    int columnWidth = 6;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"greata"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> lines = {"th e ow l an d th e pu ss yc at", "we nt to se a", "on a be au ti fu l pe a gr ee n bo at"};
    int columnWidth = 4;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"th e", "ow l", "an d", "th e", "pu", "ss", "yc", "at", "we", "nt", "to", "se a", "on a", "be", "au", "ti", "fu l", "pe a", "gr", "ee n", "bo", "at"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> lines = {"aaa", "bbb"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> lines = {"aaa"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> lines = {"a", "a", "a"};
    int columnWidth = 1;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "a", "a"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> lines = {"now is the time for all good men", "to come to the aid of their country"};
    int columnWidth = 20;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"now is the time for", "all good men to come", "to the aid of their", "country"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> lines = {"aa"};
    int columnWidth = 2;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> lines = {"th e ow l an d th e pu ss yc at", "we nt to se a", "on a be au ti fu l pe a gr ee n bo at"};
    int columnWidth = 2;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"th", "e", "ow", "l", "an", "d", "th", "e", "pu", "ss", "yc", "at", "we", "nt", "to", "se", "a", "on", "a", "be", "au", "ti", "fu", "l", "pe", "a", "gr", "ee", "n", "bo", "at"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> lines = {"word bird fire"};
    int columnWidth = 4;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"word", "bird", "fire"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> lines = {"and"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"and"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> lines = {"now all"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"now", "all"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> lines = {"fubar qq ww"};
    int columnWidth = 5;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fubar", "qq ww"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> lines = {"bla"};
    int columnWidth = 3;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bla"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> lines = {"a"};
    int columnWidth = 50;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> lines = {"a"};
    int columnWidth = 1;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> lines = {"me", "m", "me", "start"};
    int columnWidth = 5;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"me m", "me", "start"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> lines = {"abcd"};
    int columnWidth = 4;
    WordWrap* pObj = new WordWrap();
    clock_t start = clock();
    vector<string> result = pObj->justify(lines, columnWidth);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abcd"};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4750&pm=2413
********************************************************************************
/*
 *   Don't even try to understand.
 */
 /*
 *    Seriously, my code is _intentionally_ this ugly!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue> 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
typedef long long ii;
typedef long long i64;
typedef long long intint;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
 
string lltos (long long i) {stringstream s; s << i; return s.str();}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
//int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
ii gcd(ii a, ii b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
 
//------------------------------------------------------//
class WordWrap {
  public:
  vector <string> justify(vector <string> lines, int columnWidth) {
    vs words; for (int i = 0; i < lines.si; i++) {
      stringstream S(lines[i]); string k;
      while (S >> k) words.push_back(k);
    }
    vs ret;
    string current;
    for (int i = 0; i < words.si; i++) {
      if (current.si + words[i].si > columnWidth) {
        ret.push_back(current.substr(1));
        current = " " + words[i];
      }
      else current += " " + words[i];
    }
    ret.push_back(current.substr(1));
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/