/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7659
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

class Library {
public:
    int documentAccess(vector<string> records, vector<string> userGroups, vector<string> roomRights);
};

int Library::documentAccess(vector<string> records, vector<string> userGroups, vector<string> roomRights) {
    int ret;
    return ret;
}


int test0() {
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars author", "comix cars librarian"};
    vector<string> userGroups = {"employee", "editor", "author"};
    vector<string> roomRights = {"history", "cars", "computers"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    vector<string> records = {"diar computers editor", "diary gardening editor"};
    vector<string> userGroups = {"editor"};
    vector<string> roomRights = {"computers", "gardening"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars author", "comix cars librarian"};
    vector<string> userGroups = {"employee", "editor", "author", "librarian"};
    vector<string> roomRights = {"history", "cars", "computers"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    vector<string> records = {};
    vector<string> userGroups = {};
    vector<string> roomRights = {};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars author", "comix cars librarian"};
    vector<string> userGroups = {"employee", "editor", "author", "librarian"};
    vector<string> roomRights = {};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    vector<string> records = {"a b c", "a b d", "b b c", "b b d", "e c d", "e c b", "e c c", "t d e"};
    vector<string> userGroups = {"c", "d", "x"};
    vector<string> roomRights = {"a", "b", "c"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> records = {"fmpmektoyfq gtlh gl", "imn u pwlkfblfd", "qujgrgk jp ltouu", "mfjrsuixixmoih wvftyveolprfdc jcrgwd", "hov hiuymwibec dnjdbeyhkbsom", "ajsnanyihgsi pceey ehfmxr", "yrotn j jclfvenhyuhuor", "txwgm axgctw ngpesdntrrvysu", "prqhpvh wyprxnxpyp kssdsldebesn", "qwbgv lkfpiobq uvbvf", "pefxagqqcg wvftyveolprfdc jclfvenhyuhuor", "ve pceey dnjdbeyhkbsom", "fsvummecklebi ea exv", "jh jp ehfmxr", "ylcalksfnyt nwypdinwdrlac yvm", "fjqa alc atpfoelthro", "oosssfhwhrfs jp rwvg", "bsldsyone kes rwvg", "mantkhtrvkmq u ecwitr", "sx axgctw jmxypunb", "aqksrlnfpif ixlid sqcpjlhbm", "vlikoxebf iahwc ltouu", "sdkguoyurbn bykdoxnk py", "vgpklfuslr bycgmcyhqcrqk cpskl", "vevujwcjpiwxf pqtbhlrkrxl jclfvenhyuhuor", "wafxoj vrcjpbyh heeaeqmntlug", "wyhkheesxlp vrcjpbyh opob", "jmmiqxx vxggfitknyg ysv", "wwekv vjxnsp sqcpjlhbm", "pwvbts j pwlkfblfd", "ddih jp ltouu", "dgwujijxqbxpcv gtlh drbwcrrcgbf", "jgkqyjoadjdgon vxggfitknyg hfexlw", "brwxmg pqtbhlrkrxl jcrgwd", "wgaaepeagnhtg pceey sqcpjlhbm", "duihgmpv canvyornrustep sqcpjlhbm", "wyhkheesxlp vrcjpbyh kssdsldebesn", "ajsnanyihgsi pceey drbwcrrcgbf", "imn u py", "imn u yvm"};
    vector<string> userGroups = {"cpskl", "yvm", "pjnbpb", "lls", "ehfmxr", "ecwitr", "gl", "exv", "jmxypunb", "fgxmuvgf", "jclfvenhyuhuor", "osami", "dnjdbeyhkbsom", "ltouu", "drbwcrrcgbf", "qpottpe", "rwvg", "jcrgwd", "pgitydvhe", "tusi", "pyvx", "uvbvf", "nodqasajoyom", "sqcpjlhbm", "ahyviue", "kssdsldebesn", "ngpesdntrrvysu", "py", "atpfoelthro", "hfexlw", "ysv", "pwlkfblfd", "ultbwpiq"};
    vector<string> roomRights = {"ymm", "alc", "ea", "vxggfitknyg", "vjxnsp", "bqjppjbrlh", "gesmmxwjjlkr", "gb", "wvftyveolprfdc", "j", "u", "wtvgfjrwwaa", "wyprxnxpyp", "gtlh", "teetxbafkrejsf", "renl", "bjtccgjvrsdow", "ixlid", "diixpervsea", "nwypdinwdrlac", "anhelkovked", "axgctw", "socddagwnjbkjo", "pceey", "kes", "canvyornrustep", "pqtbhlrkrxl", "jp", "vrcjpbyh", "sfiml", "vbtqcdevpwubf", "shcm"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> records = {};
    vector<string> userGroups = {"ixlvi", "puglpxaa", "aoryjtottnbbi", "iseg", "aqlrmrecsgcy", "sqicmwxh"};
    vector<string> roomRights = {"iwvsqdbyfskxff", "jxkm", "tfq", "kfbiopixn", "sgku", "pnqnuvrevfsuyy", "elthtkxfinmet", "yboorf", "pyplg", "jimwmxstretyoj", "sdmtfe", "yjtpkmdt"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> records = {"gxevtrfmjf iyck an", "eqjjgrxb emipvbwfcddtuc dkuxhqm", "vniywjflpfvxd iox cttsgxsmosnnt", "uarcmehji hlsoguovvs qtexmijrmgr", "tr unv hahiccxypbkkv", "lpkboxmpx emipvbwfcddtuc wfseld", "ujnahlei smmlcgkneuqsyd ynejqo", "g smmlcgkneuqsyd kf", "ksgtdqvyifkbpo hlsoguovvs nbnqpj", "pbhnyfamhhxl imruvnqlapmj volidlarq", "htwt nbbxlpsg kexgoxbybfoepl", "dosukrfreihsa hlsoguovvs nb", "vknup imruvnqlapmj jb", "jwailtrfq iyck kf", "uuen emipvbwfcddtuc aagbamddoeid", "rfwjk ljilcgywqkourl xpocngdhevvina", "tfitcuj cqlk o", "mahkcrx hyexprweykwpss o", "lfpybmgoexw hlsoguovvs aeqwhjgltgd", "h iqrxhrlkd cttsgxsmosnnt", "nbmw unv uwvu", "otfohhx yagcifba fxlscnx", "lprjdy jiorwarykip ynejqo", "dosukrfreihsa hlsoguovvs mlenaiwqa", "vniywjflpfvxd iox rjvpo", "lprjdy jiorwarykip cttsgxsmosnnt", "h iqrxhrlkd tpubs", "jwailtrfq iyck yinlyutspqrom", "vniywjflpfvxd iox wqlmjcadwhdk", "g smmlcgkneuqsyd volidlarq", "jwailtrfq iyck aeqwhjgltgd", "dosukrfreihsa hlsoguovvs qtexmijrmgr"};
    vector<string> userGroups = {"m", "o", "fkelhedqr", "wfseld", "wauhmyboldb", "tlghrrovu", "qtexmijrmgr", "pgit", "uwvu", "jb", "cvpaswqocqdma", "yinlyutspqrom", "xpocngdhevvina", "pvwbjiagcu", "volidlarq", "ytvf", "tnhtkarhbe", "dkuxhqm", "bpjbi", "rjvpo", "kexgoxbybfoepl", "aeqwhjgltgd", "cttsgxsmosnnt", "fxlscnx", "kf", "rqxawddqwx", "wqlmjcadwhdk", "hxyelgjdajdwni", "kgokwawi", "ynejqo", "aplfbrqetcjq", "uidb", "nb", "mlenaiwqa", "tpubs", "tyjvidmdlr", "jhkjtvpjvyhpb"};
    vector<string> roomRights = {"smmlcgkneuqsyd", "imruvnqlapmj", "pasioftsnehta", "nbbxlpsg", "iyck", "otvhwqplx", "hlsoguovvs", "jiorwarykip", "hyexprweykwpss", "oqaldkcu", "emipvbwfcddtuc", "unv", "iqrxhrlkd", "imsuxk", "b", "xdme"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> records = {"vmfsr tavaiggmndm tygaakdtvf", "auoda thdmbdkdl lxmne", "gmrq isjxuolhwhhelt g", "yieji gvxebmbikx nkwxaggaeb", "egt ntfvwhiadehide tygaakdtvf", "skyngnsyfubcl ntfvwhiadehide odoraccce", "dmlrfe thdmbdkdl btkb", "eomowdufylyjlo ntfvwhiadehide dvw", "bjrhhvls rqi axr", "qgnklttrkiihmd gvxebmbikx gog", "nroxffqgoknx ntfvwhiadehide jcubnrskek", "crjuaygnvc ilx tgup", "gkqoytgnlunqc tavaiggmndm konxsjbbuat", "xsqnrarjjnlk crqvnryxgktd li", "ygxgnkwemtk isjxuolhwhhelt hy", "hhpblvyeo isjxuolhwhhelt konxsjbbuat", "vojhawslstrsbh wakceipbcl tygaakdtvf", "anptatcj isjxuolhwhhelt mhdnmndvbgky", "fuhgawuvngeo wakceipbcl g", "yaxtt isjxuolhwhhelt vfjtabhxuiko", "wewwrotsjxeud wakceipbcl ubjdkphf", "fjaegxrncgsei wakceipbcl xupfvq", "xdmuhl thdmbdkdl gog", "bdpvonbl ntfvwhiadehide li", "bqc gvxebmbikx li", "wjbpyexrihnim ntfvwhiadehide li", "ftobw tavaiggmndm jykbo", "rtgfwsyxl gvxebmbikx etlihebuiomohb", "bjmcb ntfvwhiadehide tgup", "iyisgvd wakceipbcl li", "yioomogekpj thdmbdkdl swflirgpv", "kkhvoifd ntfvwhiadehide gog", "irxiasqvym hdvlk swflirgpv", "bdpvonbl ntfvwhiadehide tgup", "xsqnrarjjnlk crqvnryxgktd ytvrtdfev", "anptatcj isjxuolhwhhelt swflirgpv", "fjaegxrncgsei wakceipbcl gog"};
    vector<string> userGroups = {"jcubnrskek", "g", "mhdnmndvbgky", "tgup", "etlihebuiomohb", "konxsjbbuat", "gog", "ubjdkphf", "xupfvq", "nepipslksf", "btkb", "nkwxaggaeb", "jykbo", "swflirgpv", "li", "dvw", "tygaakdtvf", "ytvrtdfev", "utu"};
    vector<string> roomRights = {"ilx", "ntfvwhiadehide", "wakceipbcl", "gvxebmbikx", "tavaiggmndm", "isjxuolhwhhelt", "thdmbdkdl", "jahpoixitxfkko"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> records = {"awsaeia lpqpvjjuchb ps", "bdimem waenwssbllbbx afrfvkqluno", "bhbwcqsbaixma aolefnuvttbce dcwcefoqln", "etxembiwdfyin wk wafmlgvrinb", "ocbpjeomukpus wfaetjjqyjx h", "hvoo icgq wqa", "oserdbw sqyhqqwegnv qkjucawapfyf", "cfxqw giquaqneg kwg", "romveb xyleoschxgpm khpg", "qtojkyfbpw bptwnjqcq cikv", "idm pkhif h", "hlvltvcqy yfbetgvfogm cikv", "fmslpmcjdov vtx dxetic", "vwtvreygr fs dcwcefoqln", "rpwlmyclviaqv pkhif ps", "fyaknwpjvlfpq yvww xke", "vkrob aolefnuvttbce puwcbvhktx", "c hspdm jdyqj", "qfdop wfaetjjqyjx ps", "flwmmwwavok ikbbtcppgiro dls", "brkryjetaficu xyleoschxgpm h", "jyn hspdm c", "funchabhbxvnuw qngiecy dxetic", "hq aolefnuvttbce bllrx", "qvdqdnvbn hspdm d", "cdhhbu uu ps", "iumrxmonhnx anorrvqpp kqyoriwcwhnrg", "hhidmciaxjpd yfbetgvfogm ps", "vkuwhghfva sprwsswf jwxsfujiode", "iot icgq afrfvkqluno", "erkl nfo wgywai", "uq vtx ps", "wanulgb waenwssbllbbx gvy", "cnuyx ehvxqiosrmra puwcbvhktx", "gdagikwefcvppw waenwssbllbbx h", "hmkhbishlsjbok lquakoxbencmv klgmhrlhkqdwyr", "sqcuxnfwrn yvvxftqvb pv", "qfppsydeggo anorrvqpp d", "pawbbnlbic xyleoschxgpm dcwcefoqln", "dcskalxbcgsr vaeqegnevsfeim qkjucawapfyf", "rwdxdrcstbtvo wk d", "ywkecm wk wcnrmy", "wanulgb waenwssbllbbx dls", "funchabhbxvnuw qngiecy qkjucawapfyf", "etxembiwdfyin wk tdniuwjmt"};
    vector<string> userGroups = {"kwg", "bllrx", "c", "kvpmefmlennl", "jdyqj", "cikv", "xke", "diuph", "dls", "wafmlgvrinb", "rj", "puwcbvhktx", "h", "dcwcefoqln", "tdniuwjmt", "pv", "wgywai", "d", "afrfvkqluno", "xlhibcpqau", "i", "nihpl", "ps", "wqa", "dxetic", "qkjucawapfyf", "gvy", "nttlmvertimd"};
    vector<string> roomRights = {"vaeqegnevsfeim", "hspdm", "pkhif", "wk", "tg", "xyleoschxgpm", "yfbetgvfogm", "dwpwfwwelds", "icgq", "tcubdbx", "wfaetjjqyjx", "gckmwqu", "yl", "sprwsswf", "ehvxqiosrmra", "empwjqvxn", "nfo", "anorrvqpp", "giquaqneg", "bptwnjqcq", "lquakoxbencmv", "hxmuesahk", "fyfxd", "goobqcqo", "w", "ikbbtcppgiro", "ov", "vtx", "aolefnuvttbce", "fyh", "qngiecy", "yvww", "wlcbsqxpmsq", "yvvxftqvb", "afbd", "waenwssbllbbx", "uovsmvyhnukpw"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> records = {"otehzri dryxlmndqtukwag hsqm", "c lejuukwc cfirj", "skpggkbb hlvihjouvsuyoy cgpxiq", "pzzrzucxaml oachwdvmxx zoyvegurfwcs", "dfykgruow betokyx rbljptns", "giooobpp oachwdvmxx cacehchzvfr", "eqlwphapjnadqhd bxubum fwz", "nvwdtxjbmy dryxlmndqtukwag oqhnwnkue", "pphauxnspusg wuzifwov ggx", "hiixqmb bxubum fwz", "jxjc lyei cgpxiq", "u betokyx wmdkqtbxixmvt", "jsuyibyebmwsi lyei hsqm", "yoygyxy bxubum cgpxiq", "zevypzvjege diajxloghiqfm kgcc", "eocfuftsxdi betokyx frxs", "tigs bxubum bbuqcljjiv", "eehkchzdfli betokyx lorellnmpapqfwk", "rjqfnx sadeuguumoqcdr icqcoendt", "tqrsvbspkyhsen sadeuguumoqcdr kuytdlcgde", "ppkqtpdd sadeuguumoqcdr lorellnmpapqfwk", "uotbbqcwivrfxj hlvihjouvsuyoy iddqscdxrjmo", "jjddn betokyx fj", "gei sadeuguumoqcdr fwz", "vdgaijvwc lyei msboaguwnnyqx", "aubwewpjv ay frxs", "gehljxepbpiw bxubum cgpxiq", "eocfuftsxdi betokyx pqpxrjxkit", "eehkchzdfli betokyx cacehchzvfr", "tqrsvbspkyhsen sadeuguumoqcdr ygafoubutp", "tqrsvbspkyhsen sadeuguumoqcdr lorellnmpapqfwk", "hiixqmb bxubum gspqo", "jsuyibyebmwsi lyei yb", "hiixqmb bxubum opkm", "uotbbqcwivrfxj hlvihjouvsuyoy rbljptns", "jxjc lyei yxacbhh", "vdgaijvwc lyei gspqo", "otehzri dryxlmndqtukwag rbljptns"};
    vector<string> userGroups = {"iddqscdxrjmo", "frxs", "yb", "dbef", "arcbynecd", "ggx", "p", "lorellnmpapqfwk", "opkm", "oqhnwnkue", "hsqm", "bbuqcljjiv", "wmdkqtbxixmvt", "rbljptns", "fwz", "fj", "afadrrwsofsbcnu", "qhffbsaqxwp", "cacehchzvfr", "ml", "ozj", "pqpxrjxkit", "yxacbhh", "icqcoendt", "mfgdwdw", "cgpxiq", "kuytdlcgde", "htac", "ohordtqkvwc", "gspqo", "msboaguwnnyqx"};
    vector<string> roomRights = {"lgdgwpbtrwbl", "sadeuguumoqcdr", "betokyx", "oachwdvmxx", "dryxlmndqtukwag", "lejuukwc", "bxubum", "nmeyatdrm", "diajxloghiqfm", "hlvihjouvsuyoy", "ay", "lyei"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> records = {"kelhhzjchpd vsyljzlu dvhrrdsycqh", "lu xmjcxo hbgsdvivhesnkqx", "mppnlgjznkeww cczyb wpqhs", "ysgefo dntdmfr kdm", "expmms hidjc f", "a qanxdr ofwltwjwnnvbwj", "pmdgzqmkqzxuvt uzdrcnjkphc qvuygp", "vnx rxajjngcomi cwmjobmsksk", "slqzkglz uzdrcnjkphc kdm", "mzpdnsjolvybwxx dtutp pgtqv", "tqognrbai bhn lpgdirbfcriq", "kq uaiihveixwjj kdm", "lszkh ch pit", "z ztygn apopkvxfgvicet", "onnmoqklpeefsn es zncqgj", "mou dtutp b", "qh qopubjg mkblj", "dsgcfohesyshmgx dtutp andlyavfauaos", "to aatzzwpwmfbfjkn xvr", "yuvnojdjftqt xmjcxo qx", "kbapri aatzzwpwmfbfjkn ojnewxgxn", "jimq xhxdipfzwsw wctgtwmxnupyc", "spslgv bhn apopkvxfgvicet", "csa dtutp hbgsdvivhesnkqx", "b ffrkeecbpdipu wctgtwmxnupyc", "bgwtbseettwdnf uaiihveixwjj kdm", "byjvpdjxyuzq xhxdipfzwsw ogvbpk", "statbzpctthoo gz mkblj", "re mwpmhwd cwmjobmsksk", "gfkrbcv gfwvrftwa dvhrrdsycqh", "zvgbo gfwvrftwa mkblj", "thgojhdnay w hbgsdvivhesnkqx", "pnbitoraa vqqcqcjitlvcn qx", "bednez gfwvrftwa fxsnvucft", "fp qanxdr wctgtwmxnupyc", "awl jhrnx eybnuqb", "hssvtq xhxdipfzwsw ebnvfgv", "zvgbo gfwvrftwa pit", "gfkrbcv gfwvrftwa qx"};
    vector<string> userGroups = {"xvr", "ctd", "n", "ogvbpk", "lpgdirbfcriq", "fpgynkrr", "fxsnvucft", "wctgtwmxnupyc", "gcuq", "nublmoiitnckl", "f", "zbexrampetvhqn", "dj", "qvuygp", "kazqfrpjvoaxd", "cwmjobmsksk", "ojnewxgxn", "ofwltwjwnnvbwj", "kdm", "ouuzhyvhgvwuj", "qx", "pit", "vograi", "dvhrrdsycqh", "leewhxtemb", "qw", "wpqhs", "ebnvfgv", "wdvjjafqzzxlcx", "zncqgj", "apopkvxfgvicet", "mkblj", "pgtqv", "hbgsdvivhesnkqx", "wrq", "drvmhlu", "b"};
    vector<string> roomRights = {"ktheyen", "mrobdeyqcrg", "uaiihveixwjj", "qopubjg", "xhxdipfzwsw", "bgfylqv", "zharvrlya", "uzdrcnjkphc", "ffrkeecbpdipu", "hidjc", "jhrnx", "xmjcxo", "qanxdr", "gz", "bhn", "mwpmhwd", "thsfqueeex", "ruj", "gskmvr", "gfwvrftwa", "dtutp", "ztygn", "rxajjngcomi", "jzsdwssznovdruy", "cnjulkfuzmxnafa", "es", "ckjcazxdrtd", "yrq", "cczyb", "vqqcqcjitlvcn", "bmasidz", "w", "aatzzwpwmfbfjkn"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> records = {"u bplyzed xxsyjhovengbpy", "ubbjbr szkogrf z", "mixfclb np nm", "tnosvdkujcpwsd qzeqvl tuuvkesvj", "hxrkiuez np xfbbfhb", "owoqjpiecwxx cwsodpwtqrpy nm", "jtnmkjgncpmvau cwsodpwtqrpy qmv", "gtausokbfug cwsodpwtqrpy ltxmkpv", "tfiuqbj eqtujuiokcows vufdpax", "lvlazamuc bplyzed geltkcapwpbq", "m bplyzed rixqgwdrygx", "cnewdoxj cwsodpwtqrpy z", "fuemdad np rrgtuseur", "k qzeqvl vufdpax", "uf bplyzed awixezqk", "uevj bplyzed z", "xrnivcorh np xnjcber", "rqqwnujquoyevsl earhwg mlfotpqhvokii", "prl wju rrgtuseur", "skrhunljg loddktdji jvbsoai", "oxleuyy qzeqvl xnjcber", "qutozqhmgy esuozryit rixqgwdrygx", "tyyep qelofrsotqiktxi xxsyjhovengbpy", "aesjl ximkyrokktvusu ocpjmrmb", "zivdevdllyga bplyzed dhvtjmexfq", "xjndjrxh bplyzed wilkqmbpesz", "dyyd qzeqvl awixezqk", "qnqdo earhwg geltkcapwpbq", "yshwx earhwg rrgtuseur", "hxzjywumbffamx qzeqvl jvbsoai", "nxjqoyirmirern bplyzed awwmninepfduplu", "kxdlicjf qelofrsotqiktxi mlfotpqhvokii", "kkvnxuqm cwsodpwtqrpy tuuvkesvj", "zcixmzkws bplyzed m", "oiwy bplyzed lfbhw", "alpeu bplyzed lfbhw", "ugfrteomqinu earhwg nkopmfpvo", "n earhwg hrynqxq", "rx qzeqvl rixqgwdrygx", "lpsto earhwg dhvtjmexfq", "uf bplyzed awwmninepfduplu", "nxjqoyirmirern bplyzed nwxzqnswaxg", "kkvnxuqm cwsodpwtqrpy awixezqk", "tyyep qelofrsotqiktxi om", "cnewdoxj cwsodpwtqrpy tuuvkesvj", "ugfrteomqinu earhwg om", "jtnmkjgncpmvau cwsodpwtqrpy nzxtzqsjwatycbm", "k qzeqvl geltkcapwpbq"};
    vector<string> userGroups = {"hrynqxq", "mlfotpqhvokii", "m", "qmv", "jvbsoai", "z", "xnjcber", "nm", "xxsyjhovengbpy", "rixqgwdrygx", "xkfhicain", "wilkqmbpesz", "ig", "nzxtzqsjwatycbm", "awwmninepfduplu", "ltxmkpv", "rrgtuseur", "geltkcapwpbq", "om", "awixezqk", "lfbhw", "ocpjmrmb", "begvsulu", "tuuvkesvj", "dhvtjmexfq", "vufdpax", "wnwq"};
    vector<string> roomRights = {"bplyzed", "cwsodpwtqrpy", "earhwg", "np", "qelofrsotqiktxi", "qzeqvl"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> records = {"axeftuxyhos fjk gkrfahn", "sdtbx cifeuvynrrx oawnpkw", "yuoeh rlokzlwjunaan z", "kolyfxthwymp oyammwwjerxo yszigb", "kqcaibsnutkhtev lvhfeswzaah lruga", "lciznigkcohccy gkly gkrfahn", "ooao vrind jntwrvtl", "chlycvfwbcuof fpnsmaqdavh yszigb", "pu z hvghvgiok", "wfqmouoordfttdv vrind eug", "pudkbzmgv fnorocltisr cbab", "lzsf fnorocltisr nymvwy", "o vrind cbtrv", "iaccqtvvyppd aqfeqlq cwnoiaeov", "rsi hmozumjkgeil bfkxmkmcjb", "fk vrind cygwwhzpnz", "tq ccrlxnwrx cbtrv", "vdrnkjbzrd jqjq wupwccwqguznwm", "twwrtwi lchhyxulagmd lruga", "aucsd jh yszigb", "zp hmozumjkgeil mstfemis", "shmomgdyphx kostw gvdxfnlcdajjnqg", "mdbib ykthgpg hlsdbo", "cycm wom cbab", "xosc ykthgpg sdrgsrmr", "utjm xbelrdhdor z", "vcqdg jh gkrfahn", "upocbremuaqs p hlsdbo", "csc qv nslpavo", "neihzrv oyammwwjerxo mstfemis", "oyrsghmvvpyovk hmozumjkgeil zx", "vadadwcylggsh z mbyjhzlelkbw", "ninnbhvjusglrvi qzqpzqqifzoup nslpavo", "gd qzqpzqqifzoup v", "jgjfihq cifeuvynrrx dbax", "zp hmozumjkgeil rxvpdy", "oyrsghmvvpyovk hmozumjkgeil yszigb", "zp hmozumjkgeil oawnpkw", "kqcaibsnutkhtev lvhfeswzaah nslpavo", "iaccqtvvyppd aqfeqlq drizaabbtswbb"};
    vector<string> userGroups = {"oawnpkw", "kpbummz", "zhay", "lruga", "cbab", "ayhrkdc", "sdrgsrmr", "mpfzibgkxi", "z", "g", "jntwrvtl", "mstfemis", "nslpavo", "kovqphekfxiaijm", "eug", "cbtrv", "gvdxfnlcdajjnqg", "qp", "drizaabbtswbb", "eyat", "cwnoiaeov", "dbax", "zx", "cygwwhzpnz", "gkrfahn", "mbyjhzlelkbw", "bfkxmkmcjb", "wupwccwqguznwm", "hyuf", "v", "yszigb", "hlsdbo"};
    vector<string> roomRights = {"yhnjfooslx", "rlokzlwjunaan", "qzqpzqqifzoup", "fnwya", "kayhjsuju", "gkly", "kqsswtiskrzx", "z", "c", "ccrlxnwrx", "cifeuvynrrx", "bq", "bgkdk", "fpnsmaqdavh", "anfxlup", "rciinlqxoc", "vrind", "fjk", "qv", "gaarur", "ntivitnhjqcg", "ktnvywfbocfuc", "oyammwwjerxo", "p", "iwbbl", "bjdeygksk", "i", "uwxqsi", "jh", "lwbtvcwg", "aqfeqlq", "ykthgpg", "kostw", "hsgapk", "wmzorfefwof", "hmozumjkgeil", "dto", "fnorocltisr", "xbelrdhdor"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> records = {"wr c jkx", "fiooucd lg a", "hjhdqosa fozvrg eewb", "egc mfarlv mp", "ozgoaqjz spk psbztxhohqeg", "tgtjunlzv iyjkegw mp", "leydvqdtw kpcmk pbuoiphimjhvg", "xuazcp hvip mp", "uaafthzedorf aquwkjglmoj pbuoiphimjhvg", "mqq ogxyuhqwv psbztxhohqeg", "tlcyhbigvjf smoadlcfewbqfi tka", "a wnuxd jkx", "vahawoz dvevt ygteewvrga", "souxaipsukgwi ntmduprwuvuv cdlqnagqapkdo", "ztv drvcepzj dt", "ebvgiqgpregqh mnckidivxubrjs pmkptlattj", "gdzilobfajdiydd placmetk dyjfdawhvrywcy", "zhwvpgnw bj ygteewvrga", "egc mfarlv dt", "souxaipsukgwi ntmduprwuvuv a", "zhwvpgnw bj tka", "gdzilobfajdiydd placmetk pbuoiphimjhvg", "fiooucd lg ygteewvrga", "gdzilobfajdiydd placmetk nhcajqhibug", "gdzilobfajdiydd placmetk uqbjyktmayqnq", "tgtjunlzv iyjkegw pl"};
    vector<string> userGroups = {"lqeelsstfm", "dt", "tka", "bforc", "uqbjyktmayqnq", "hxytarw", "dyjfdawhvrywcy", "xkjvcxnpglnbnf", "jkx", "pbuoiphimjhvg", "eewb", "nhcajqhibug", "jjqzrfgc", "pl", "ygteewvrga", "psbztxhohqeg", "mp", "fezuefpiklgbrgv", "a"};
    vector<string> roomRights = {};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> records = {"jyxopljmce bvcocpgv sul", "jzyshei qsfzyhyfeyjyxkg roqamjx", "gzrmiznq l peovulclalqcghi", "pvqzunpjy bvcocpgv vrd", "v lgascavg gqczhndqdphbva", "ewle qsfzyhyfeyjyxkg kwghf", "enzogfnztvyil tsf luhyx", "yjoxdbmobmmdtip sbgwumsbzyhy luhyx", "e rwxshreerotw ezyryzmpjevzgui", "mdjskwudusmh cta hsjy", "mqgjvhxm smgtyjienjbrz n", "lyo lgascavg gaqxogz", "idfm zgl vrd", "ssjmehgk kxynquhmqudwgh djtrlehokrygr", "zyl bzopzlbme kwghf", "kbytzhslsfj bvcocpgv n", "mtlrhljb pdivsinokxnk ezyryzmpjevzgui", "wgfcqjdqu gfbiya ldeezbcstsw", "axvv ytkysw vrd", "enj bvcocpgv tlxzspk", "sucenpyx fjmq peovulclalqcghi", "hyyfeekwppmj tsf zzxo", "oijj a vrd", "oyqkrlpxa kxynquhmqudwgh djtrlehokrygr", "xxhhwh qvzqc gqczhndqdphbva", "cnyb mpwnh hsjy", "opnaewkpdyovkh dvislcczs peovulclalqcghi", "z zfwzdszbgjzfer tyxuazmvrlum", "jg rzoeiusqigvts luhyx", "iplgwzjky qvzqc n", "oobc qvzqc tlxzspk", "haa bvcocpgv kwghf", "fa pdivsinokxnk vrd", "anujmauseehrlgt a luhyx", "sr mdqwswwkrfmc kwghf", "ghlkx infaqthak peovulclalqcghi", "kaqpcdspxdcz bvcocpgv ohf", "wgdgxqmq qvzqc gqczhndqdphbva", "gjwmqkxqdjq a ohf", "buatkzwoy qvzqc uzwftifpfdgomw", "keascrgufmgezwo rwxshreerotw n", "sr mdqwswwkrfmc ezyryzmpjevzgui"};
    vector<string> userGroups = {"ohf", "vrd", "qfncfxhowcgimm", "peovulclalqcghi", "aphcwfkndmtlb", "hsjy", "djtrlehokrygr", "n", "luhyx", "tlxzspk", "gqczhndqdphbva", "kwghf", "ezyryzmpjevzgui", "zzxo"};
    vector<string> roomRights = {"l", "twhbdogjogdofp", "qvzqc", "awvzvmiwzts", "cta", "bmgjrvoi", "hd", "zfwzdszbgjzfer", "infaqthak", "qsfzyhyfeyjyxkg", "j", "mdqwswwkrfmc", "fwqewadcebneazm", "kxynquhmqudwgh", "lgascavg", "ytkysw", "dvislcczs", "fqe", "a", "uaizaffgdzsdt", "nwlvr", "xty", "pdivsinokxnk", "tsf", "kinavkns", "mpwnh", "qrikbwzltmvyhn", "bzopzlbme", "bvcocpgv", "rwxshreerotw", "smgtyjienjbrz", "gfbiya"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> records = {"pym ktoxoikcuu wmdgrwiaozjixh", "caqtpcdz uhvlgrazduro p", "rzlbloygy fbrszfvrsiiwej budpeh", "vfatmseoheapia dcfvjhb kk", "drjg gceywjvuswedjsf yalrlm", "g dcfvjhb wcty", "urbfhzlfsjmuc jabgdztsjxu irjeqjxkdbfwz", "mimwmonupuxi jyijlmaa dafmhcqzxpqr", "eblevcf kbejncff kk", "kh spfjwhq qppepfvryou", "rbz vbd xqyszyvnzg", "vecjmrfzfutw tcqbufepbm kk", "rh dtccxnn goblwwamyr", "xiebgjijtrzksbq guujzdwd exvjna", "fvzrmgq kbejncff rcwmbdhofnslz", "bmsrf tv ynjzoznwnqjlnj", "lcj xsoztyy xqyszyvnzg", "dp cmyix wmdgrwiaozjixh", "navfcizdypi spfjwhq miaufjfqmdoo", "qzhysbzettj lkxpxbciv wbqlrkbry", "gnbxst tcqbufepbm c", "fvxkxfmaebi rqocslabruhf miaufjfqmdoo", "rkhpciridmtxs jjptldqgtr miaufjfqmdoo", "a tcqbufepbm dafmhcqzxpqr", "y spfjwhq dg", "tfrrso esfotkmwusz ntiansizui", "epchzcajj oljllyhwignf kk", "ntivyuqvoyxgyt tcqbufepbm ntiansizui", "ekswypcptj qdisshfbnpayxim svadxnfn", "vja cmyix pvcjdrchppiu", "ao gahmtyn kawwctnd", "l dcfvjhb fyhp", "zhewwc jjptldqgtr nlixtfrasn", "ebnffxydxphp tv irjeqjxkdbfwz", "qggbgob tslomkf fwestwpuwfuh", "soktwo gceywjvuswedjsf auczo", "uqkarzfyyfdxuk cmyix kawwctnd", "fasldbbhxtvhn zkamcppenhkcz tpnds", "xdpop tv fwestwpuwfuh", "hqxgqejnb jawx xotvvkwsxbaoyi", "cgyutc izqfnqpczugtnj pvcjdrchppiu", "u guujzdwd wmdgrwiaozjixh", "vqgeda pkculsdlwkqvd kqsqgqoynsnd", "irsz kdmgw rcwmbdhofnslz", "zrihhmtunpwtp tv xqyszyvnzg", "mrqjcnzjuelym xsoztyy auczo", "qnlr gejcu wcty", "soktwo gceywjvuswedjsf xotvvkwsxbaoyi", "kh spfjwhq rruettyzswrax"};
    vector<string> userGroups = {"rruettyzswrax", "xqyszyvnzg", "irjeqjxkdbfwz", "qyxqxcpnchp", "fcclx", "dg", "tpnds", "kqsqgqoynsnd", "wsxbwzn", "lsbensttmkd", "eukuiijaxowugtx", "ukageeksydl", "p", "ntiansizui", "rcwmbdhofnslz", "kcvvsmknuk", "pvcjdrchppiu", "yalrlm", "xqzsi", "fyhp", "wmdgrwiaozjixh", "kawwctnd", "xotvvkwsxbaoyi", "miaufjfqmdoo", "btmz", "fwestwpuwfuh", "ipyf", "kk", "wpdkn", "dafmhcqzxpqr", "youuwlvbifny", "cbnqisspez", "wbqlrkbry", "oujj", "tonrpqveid", "auczo", "c", "mwonnmk", "jvkjoawgrmdvwi", "wcty"};
    vector<string> roomRights = {"aviylxmyhpjfc", "tcqbufepbm", "yrey", "ya", "izqfnqpczugtnj", "rfovw", "kfqbmqim", "pvrfaevrjulppb", "ysfnpefzlxcxnn", "dcfvjhb", "zkamcppenhkcz", "jabgdztsjxu", "udx", "jyijlmaa", "pkculsdlwkqvd", "gceywjvuswedjsf", "ivvnpihsu", "cmyix", "kbejncff", "llhdqsnn", "acyixulbjm", "guujzdwd", "ebvrkyhc", "xsoztyy", "jawx", "esfotkmwusz", "jjptldqgtr", "rqocslabruhf", "tslomkf", "tv", "gahmtyn", "qemirok", "ktoxoikcuu", "spfjwhq"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> records = {"covfygjxg w fzsab", "gsxgnnybhzblfbc yygpvvafwfym ndjvehqlmjkmv", "ehzyb a fzsab", "m cgyrocdc cbzavojh", "jkesila nvykvka grt", "fzx w ihuuhmworfi", "mxvvwxhdylaevac cgyrocdc myhvqhtutrs", "eowpbajlnlbska cogamorkjrphx ihuuhmworfi", "zxiuth nvykvka j", "yhpzmkz a j", "iffewggftwru wjlpatopotz ofjwo", "dxdculxquaobr nvykvka ihuuhmworfi", "ndoelvj xgieay ofjwo", "rrazkw nxbnskwaarhcu hcrbnxsiji", "gotdrwyevqyvea cqxoxktzcvaa myhvqhtutrs", "upskteiex bexdjcle v", "vxyf qiq cbzavojh", "qmmk k ihuuhmworfi", "fipkdfkammp cgyrocdc svspjmuusguzd", "eisxma pimv grt", "lczlcfgvtsfk nvykvka ihuuhmworfi", "pck cgyrocdc ofjwo", "jwsxlif qiq svspjmuusguzd", "qaoec nvykvka grt", "rescjzjeudlgd bexdjcle j", "kpuuoorzyzq nxbnskwaarhcu svspjmuusguzd", "zgwbzoi yygpvvafwfym grt", "q xfqcnfhxrs ofjwo", "ubzqhmw a ofjwo", "ohckdqywpzvh yygpvvafwfym grt", "wp dazeoubedgtkpi fzsab", "a cgyrocdc igfajmsxpa", "e kwgylgayymxy hcrbnxsiji", "judf cgyrocdc ihuuhmworfi", "cvfqsrebtog w grt", "mcanaj qiq grt", "yzvypzi poyubakjcx j", "tngtrc bexdjcle hcrbnxsiji", "h k svspjmuusguzd", "slznzfxoj pimv v", "dl vfjhjfymiem fzsab", "imkdkzc dazeoubedgtkpi myhvqhtutrs", "aykjtcnuljmzkza qiq grt", "yocauolcavimu vfjhjfymiem j", "jxmuggyvaleo w v", "qpljqblqvbba svohepfjoihol svspjmuusguzd", "wisswb nvykvka v", "jxzrvurja kwgylgayymxy ihuuhmworfi", "tswebminedofdu vfjhjfymiem grt", "nmymnpvnrmklf yygpvvafwfym ofjwo"};
    vector<string> userGroups = {"ihuuhmworfi", "myhvqhtutrs", "grt", "ofjwo", "svspjmuusguzd", "j", "hcrbnxsiji", "v", "cbzavojh", "fzsab"};
    vector<string> roomRights = {"k", "w", "nxbnskwaarhcu", "cqxoxktzcvaa", "kwgylgayymxy", "qiq", "ptb", "jyycxbyzdij", "pimv", "nvykvka", "a", "svohepfjoihol", "xmihbftoara", "dazeoubedgtkpi", "yygpvvafwfym", "smcvo", "bexdjcle", "cogamorkjrphx", "vfjhjfymiem", "poyubakjcx", "wjlpatopotz", "cgyrocdc"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> records = {"dahdamnnwzjz pplmlkjgddseila etklck", "lh jekzzspomlphe dbpvsajefbsnh", "biidygcc pplmlkjgddseila pofkasom", "yfntvbzv jekzzspomlphe etklck", "exu vexacis gub", "kstw rcbw poqqpjoje", "mjzfkjqniwsmlq zosvslursenhsaq etklck", "almbmjlqjfkv gxhwctxwhjwnmli pofkasom", "dru onzitmqloil oifrqiqwfoc", "bvwnf rtriiq etklck", "bpmvbyluawicl zosvslursenhsaq etklck", "nb kj pofkasom", "vnyxsprjsm uilyhlcpg xtl", "gtwjijelj mzfrt wutaddnaicxdv", "f zuvwn oifrqiqwfoc", "pnnahdelarjxkbq doeouqwzfn pofkasom", "tebbyakijquu blvudaumfmcwhik gub", "b hnwwnyfvfzkc dbpvsajefbsnh", "xrv jekzzspomlphe pofkasom", "yabjavvz iwybmsf pheevz", "wrarvctvedenwa tbu etklck", "dboaulasld ivyie etklck", "nybmfxdgobkjwop tzmzlpvszh poqqpjoje", "d vexacis wutaddnaicxdv", "cmogcraotvzybn uenwkmkryrefq dbpvsajefbsnh", "cbebfkrgubei gtyopxztwxlgki dbpvsajefbsnh", "h vexacis dbpvsajefbsnh", "dlzttckwqfrp rtriiq dbpvsajefbsnh", "uedwghxnsov mzfrt poqqpjoje", "rz gtyopxztwxlgki dbpvsajefbsnh", "him vqdubahc dbpvsajefbsnh", "ume uqyztrrk dbpvsajefbsnh", "oqlgwevcycfw gzxwn oifrqiqwfoc", "ovxg utxl dbpvsajefbsnh", "sxdtwlcixyud welnqdjurfgdsx gub", "kuzq skhsnqwxrxrhl wutaddnaicxdv", "doweqbaapyxykrx s pofkasom", "ktymdyk uenwkmkryrefq oifrqiqwfoc", "bykxzbrernkhqn vexacis poqqpjoje", "il skhsnqwxrxrhl wutaddnaicxdv", "ivz ucmy wutaddnaicxdv", "ijyjwdhid rcbw oifrqiqwfoc", "iokhr omihhop dbpvsajefbsnh", "oipyrhlapwix ehoychifso poqqpjoje", "hccs ionst poqqpjoje", "logu uilyhlcpg poqqpjoje", "ijyjwdhid rcbw wutaddnaicxdv", "gtwjijelj mzfrt pofkasom", "nybmfxdgobkjwop tzmzlpvszh oifrqiqwfoc"};
    vector<string> userGroups = {"wutaddnaicxdv", "gub", "etklck", "poqqpjoje", "oifrqiqwfoc", "pofkasom", "dbpvsajefbsnh"};
    vector<string> roomRights = {"rcbw", "gxhwctxwhjwnmli", "mujtvdicpnttrr", "zosvslursenhsaq", "omihhop", "fffywxjxnbs", "onzitmqloil", "uvkblans", "vqdubahc", "pshobccrqrzdu", "aewog", "glhxqbyqkdla", "uqyztrrk", "uenwkmkryrefq", "ionst", "utxl", "welnqdjurfgdsx", "jekzzspomlphe", "uvkagzqmimf", "skhsnqwxrxrhl", "ucmy", "ivyie", "yqhkxxfhgxuzvtq", "mzfrt", "gtyopxztwxlgki", "pplmlkjgddseila", "rtriiq", "doeouqwzfn", "tyzcgefyjq", "jideblptus", "bjerhgxvtsv", "vexacis", "tbu", "ehoychifso", "zuvwn", "uilyhlcpg", "kj", "hnwwnyfvfzkc", "gzxwn"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> records = {"szkx snuxibrxss fylhqtripfqcbki", "xlc kxuhcggkecshdvk khtdhzalrmhekw", "qrpvzyjxupk snuxibrxss c", "oonaclbsgzmhj kxuhcggkecshdvk hnzkrxuvjfg", "ogxs tpobqsdhufk cqghpwmi", "pki gxszqaovts wr", "ljwid aabdzrlk giicnes", "seei dfjm cyfckyotdasqfys", "emef tpobqsdhufk cifg", "mgtvp bfjtzyfwtmb khtdhzalrmhekw", "kxecq smug cyfckyotdasqfys", "obhzkfkptetxpm glxfdeds fylhqtripfqcbki", "b gxszqaovts c", "kigqecflmdqqv nboxhhyc ynfqhoezenwk", "fwveiaqy jp c", "vrtkgxlyhwhyalf ndetayvqzjnuemz wr", "pki gxszqaovts cqghpwmi", "vrtkgxlyhwhyalf ndetayvqzjnuemz cyfckyotdasqfys", "seei dfjm fxqct"};
    vector<string> userGroups = {"ynfqhoezenwk", "fxqct", "khtdhzalrmhekw", "c", "cifg", "cqghpwmi", "wr", "cyfckyotdasqfys", "fylhqtripfqcbki"};
    vector<string> roomRights = {"niulyqqzihe", "ztn", "gxszqaovts", "daennoibmyrni", "tq", "ndetayvqzjnuemz", "smug", "xuuqierbuvqyzma", "htysguwstdmizsg", "nboxhhyc", "rcbdczkvzeeuby", "glxfdeds", "tpobqsdhufk", "gwu", "aabdzrlk", "snuxibrxss", "kxuhcggkecshdvk", "mymdqbxo", "bfjtzyfwtmb", "ungzfpcbbgp", "us", "xqejrlsmkqtgl", "jp", "xxbcmff", "lvnfp", "dfjm", "ugkeyemkmyzq"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> records = {"hrkrpwifj bl kqgzhrccnexikd", "jjcllxbrbcxkac bn seawugkxav", "kr gswgusoy clr", "mqrvjemzcugnfrw nclvgnqcjs dgycukefnm", "dhfgbji k agjmw", "vlcdvukjmeevit lfwixujdtvq agjmw", "mnd qmt pbefob", "vw chgmhmitpxl mkcxufwlh", "fzfmiix jcuruapw pbefob", "gsdixzeiks pexdobckhzvq jbjbgzjjfrlaop", "powkkixphumeznl iyyacmpnsxeqjr xkkqiq", "vtlobetmds ginnnbtkuva pbefob", "ldlz rxuxojvzallqtg dsjpnqx", "zv hgngawjwubywf actemolpfkwz", "l rxuxojvzallqtg u", "ddoyrvz wqshceqscryxrk sqbspxyzv", "gnea musednzd dsjpnqx", "ubhnnki gus eraa", "wntxj gcatu ijrrhuntasg", "vnfaskpsdku ul clr", "sh jarmzditeiplbzm nlmuzacuynrpcr", "sikwrzjchrawkx jod sr", "esu chgmhmitpxl vaxhmqqdzct", "vnymheybq wlrpjqgtx ctdstpedqz", "jgjtsfltqpbkp iyyacmpnsxeqjr mkcxufwlh", "wmf ul cog", "hzrcmrowvmxl bn pbefob", "itnenurh musednzd seawugkxav", "gkz tlhp mmivvjurpaz", "hvjoa bn pbefob", "orw ankxuumjkqc eraa", "lmygywud xershqa xkkqiq", "nskdpbkch rgrgyanjclxgzu kqgzhrccnexikd", "dedyq adcsyzdszbpwnf moid", "bi ul uzuvge", "ufifrjmsfixl rgrgyanjclxgzu cmkluloyzu", "rwagzkkhennkod musednzd yxlpimgaeivhcow", "ufifrjmsfixl rgrgyanjclxgzu mmivvjurpaz", "vtlobetmds ginnnbtkuva clr", "vw chgmhmitpxl xjnixikameacxp", "ufifrjmsfixl rgrgyanjclxgzu eiuxroknqcvc", "vnymheybq wlrpjqgtx clr", "vw chgmhmitpxl ijrrhuntasg"};
    vector<string> userGroups = {"dsjpnqx", "mmivvjurpaz", "wib", "seawugkxav", "nlmuzacuynrpcr", "wny", "sqbspxyzv", "xjnixikameacxp", "ogddgavxenmbn", "ylkkbvjlhjz", "jbjbgzjjfrlaop", "ctdstpedqz", "dgycukefnm", "yxlpimgaeivhcow", "u", "ijrrhuntasg", "agjmw", "actemolpfkwz", "eiuxroknqcvc", "clr", "eraa", "moid", "uzuvge", "dyfolvsg", "xkkqiq", "kqgzhrccnexikd", "pbefob", "vaxhmqqdzct", "baze", "mkcxufwlh"};
    vector<string> roomRights = {"xershqa", "gswgusoy", "pexdobckhzvq", "m", "kfirwklcejkaby", "ypcvvqzx", "iyyacmpnsxeqjr", "ndfogdoevrcq", "bn", "j", "mjqyydsykihdd", "ginnnbtkuva", "wqshceqscryxrk", "ankxuumjkqc", "k", "xq", "nier", "wlrpjqgtx", "jkgfetqq", "slvsi", "rxuxojvzallqtg", "crzjwgemwphjkb", "wsqrrea", "gcatu", "bl", "tlhp", "lepalz", "msjfjc", "nclvgnqcjs", "hlaqcrdgh", "rgrgyanjclxgzu", "mlqxfgeqguuax", "jcuruapw", "bzbyhauwoho", "musednzd", "cmrydn", "ul", "vktvutsqizew", "boqedrjqtvjua", "xu", "nswhp", "chgmhmitpxl", "adcsyzdszbpwnf", "jod", "qnhduvn", "lmagpdljcknw"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> records = {"odrom uou get", "ujbggeytq zfvwthyrqckvnz fb", "jhjrdrsqu grgsjkswufl zrqapaxdfxfy", "xllmzzpqpbqmnr ajkmf uxxhzkdlmc", "tvsoorzvaqatl zfvwthyrqckvnz vrvj", "qcpbpbarrsguish vkwsalpnbi mits", "lcvfqlwpiy shj sdsfseeuttmxubs", "iutak vaxrxsaxjsbvo ovwfxk", "rnmtndmhkgq nn rie", "qrpuoxlzvchukr ytwjfxaxblfvld t", "ftaclnpecuqjeyb y sqnnzochhum", "qtalhzyhvcqrpk ycqlkbq h", "u ycqlkbq w", "hzowquykkj iblbwfou vjboqfkjayguc", "llcdeeqleqsb brudecrapw ivneaartb", "lukvbey lqeylinppqaacgw mczbnjwfmpqwf", "fngxhgk kfearrqqnboi impenlkuqbrkjo", "pdhahmeldqrtks wdrlmwqokg rie", "xmyspf tvoecngz zreuessdofxac", "zkihkrpunhxuh ajkmf ywbug", "jormgjhsdwqsw inseypskalebub lefgqiwinjr", "hbdjolsy grgsjkswufl uxxhzkdlmc", "i ytwjfxaxblfvld h", "qprnyxwm qztyimeavous rie", "kuxrndpdvm xnlzwhe ygygaorj", "cn lwfxtpdyiggvb mczbnjwfmpqwf", "lbeebh my w", "tyfmnfjjsytoxk nn colhac", "acgvowybplftrg my colhac", "hcdmqqsaz bjiuzvvpfa zbhgjjvrnmhls", "aucxggaimvykvcb zfvwthyrqckvnz cuufbsmal", "hxapaktf y ovwfxk", "kvqmw zuvpvqodcufxjz h", "mshjy uou fb", "jjbhhoejpnsoq civuybhrrvujjua yen", "oa vaxrxsaxjsbvo sqnnzochhum", "vynqrboxni lwfxtpdyiggvb yhzq", "zhtkqxrznw shj u", "clbrblhbpdce hyupst uscvlu", "vgmsvuzuduhvryv shj icp", "wejkhcltlpiq yn xkxab", "oomucgsyfmcatx djnzks fb", "uuasalcipq lnkxc cuufbsmal", "c kfearrqqnboi mczbnjwfmpqwf", "nvy ytwjfxaxblfvld w", "qtalhzyhvcqrpk ycqlkbq yen", "c kfearrqqnboi hjhiljlupud", "cn lwfxtpdyiggvb obg"};
    vector<string> userGroups = {"rep", "h", "zreuessdofxac", "icp", "cp", "yen", "vrvj", "mits", "xkxab", "zbhgjjvrnmhls", "sqnnzochhum", "hjhiljlupud", "lrbuctowj", "kirmqziegpnnxa", "ivneaartb", "ywbug", "eowsgxbkd", "zrqapaxdfxfy", "impenlkuqbrkjo", "uscvlu", "cuufbsmal", "mczbnjwfmpqwf", "s", "fnkzl", "w", "uxxhzkdlmc", "colhac", "yhzq", "get", "rie", "fb", "obg", "ovwfxk", "emuencfdllje"};
    vector<string> roomRights = {"pxzubvkcdbsazy", "lqeylinppqaacgw", "xtdtuadyght", "grgsjkswufl", "xnlzwhe", "djnzks", "qztyimeavous", "zfvwthyrqckvnz", "zuvpvqodcufxjz", "vaxrxsaxjsbvo", "xlorifm", "vsaqxzbz", "wzqpykr", "vkwsalpnbi", "gxtcr", "uou", "nn", "pfjn", "ajkmf", "osubtfwacre", "my", "jvzyooezd", "cmgouldo", "gimdk", "wqllqxwlyuzm", "brudecrapw", "y", "yn", "kfearrqqnboi", "cietehzgazxz", "ycqlkbq", "bjiuzvvpfa", "ognspmbqo", "r", "ytwjfxaxblfvld", "civuybhrrvujjua", "tvoecngz", "shj", "kehuzdtcmkvi", "etaglvdbafoifd", "m", "hyupst", "lwfxtpdyiggvb", "wdrlmwqokg", "iblbwfou"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> records = {"vlxvl i zmqkxhffoilx", "aebvlrbnrims kbkiriopkacnj gy", "aebvlrbnrims kbkiriopkacnj zmqkxhffoilx", "aebvlrbnrims kbkiriopkacnj odlggyxrkpsi", "aebvlrbnrims kbkiriopkacnj qzyokiuuiowwe", "aebvlrbnrims kbkiriopkacnj unozbwmycqdd"};
    vector<string> userGroups = {"liekz", "zmqkxhffoilx", "bcbjioe", "qzyokiuuiowwe", "unozbwmycqdd"};
    vector<string> roomRights = {"tdim", "i", "mrwi", "mex", "ltfzvhxhhax", "fyxz", "ilfqntjlc", "agmstfysahskq", "jdxicylkltd", "m", "mo", "ovngougjxpbjgvs", "ucnvqagjfhv", "vkwjhlrxiyifnlo", "gigdnwydw", "odnjyk", "xveines", "mzayn", "gycjl", "hqyoe", "dpaqnzltjyxc", "kbkiriopkacnj", "lzan", "rpvgogaxfzb", "jdct", "kklxm"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> records = {"kfwftj fi wpuqogwczuqxis", "rkrv jekuqpzxmcneeo qcvtrvkrajb", "ypbhjsrppi frpzxwametir jwubp", "hpymwpxizceg lybdevviuonzy mfmqyoym", "pprcgpahgdopx glgtj zqwxaisj", "hmqtththeigojju q ykromblwszvfm", "jjf fi last", "nnpnuwqknpsubi lclfudgr aieciwoki", "wpggvqmj lybdevviuonzy ctb", "x lybdevviuonzy whsryekfktczbb", "sgr jekuqpzxmcneeo ixwa", "jemaujwmt q pgfpyboalgmrju", "clgdv jekuqpzxmcneeo qyfxjfturzb", "aleiivuuxszp fi hqjmgupaku", "qojvamrjkdfwf lclfudgr txkmfxwoes", "fjoblbht lclfudgr dzygwuztmz", "cpdb lclfudgr ctb", "dqkv lybdevviuonzy qagollbxbw", "vshhjssn ihpgssezr uirzetrikj", "osstd jekuqpzxmcneeo hg", "wq fi jwubp", "elqibumkzcwu q cupfbhoqokfov", "snsbyktlkkge lybdevviuonzy ffwapqczrj", "lkectkpjuqfgdg jekuqpzxmcneeo yijwp", "bduvqm lybdevviuonzy glrsztmpy", "qysckekomvaqxt ihpgssezr ykromblwszvfm", "nfufmbktmmwij jetfbdvdfb lnznlwalqufm", "uieubifhsvtowj q hzauxkonyrbv", "rjawgi fi hg", "juexia lybdevviuonzy k", "sqbauvd jekuqpzxmcneeo wbm", "clvaejyoxrzzo lybdevviuonzy cjnkfhjyvjk", "jzqefpm lclfudgr cwflbwldmmotyi", "ugxxhtvmwzx lybdevviuonzy yryjpyxiuc", "z lclfudgr pgfpyboalgmrju", "fzser jekuqpzxmcneeo oktptqhdutpz", "ghbpittnji lclfudgr qcvtrvkrajb", "dorbxmwkj lybdevviuonzy ovurmrggjv"};
    vector<string> userGroups = {"jzhxpidmmdppyq", "ykromblwszvfm", "oktptqhdutpz", "hzauxkonyrbv", "aqqobhywwundxjy", "ijwklsh", "ixwa", "rl", "k", "qljrhflwlkf", "zqwxaisj", "aieciwoki", "btbscgdz", "pgfpyboalgmrju", "lfwbperszskbb", "cwflbwldmmotyi", "uirzetrikj", "fwkiln", "qagollbxbw", "last", "txkmfxwoes", "mfmqyoym", "lnznlwalqufm", "ryb", "wpuqogwczuqxis", "yryjpyxiuc", "ovurmrggjv", "fzobqlkkwkb", "tsvsar", "whsryekfktczbb", "ctb", "dzygwuztmz", "jwubp", "fzzrsbrvfgyyj", "cjnkfhjyvjk", "hg", "wbm", "aerexnlfnjp", "n", "qyfxjfturzb", "fzztybzqfyds", "qcvtrvkrajb", "cvyezwlaxezzepg", "uzkm", "ffwapqczrj"};
    vector<string> roomRights = {"ihpgssezr", "fi", "jekuqpzxmcneeo", "q", "lybdevviuonzy", "lclfudgr", "kgvrushmffp"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> records = {};
    vector<string> userGroups = {"ifpybe", "qdrsaetkfsvob", "mwhqy", "oujceotdsxhk", "b", "dfxnmqkatooqxgq", "wkebosu", "msdwv", "byly", "xqyzkon", "lvqfscjtqen", "qhppet", "c", "qsbhqcrgrttmj", "gnibdorreygvfb", "hfcbilt", "czdvuqgtyt", "ay", "rqxrytwagghkhs", "deze", "uzacuyvxaw", "rm", "lmkjmrp", "bzqzcuygevhexb", "vafr", "zf", "k", "stgjlenkuoo", "mwvhebhhgciovan", "iztbs", "mffbrzpfscenlk", "srzwzn", "cctkbnnvoa", "uduvta", "xg", "kqtfhsbjhvl", "ovobllqlom", "jhjlvgr", "thsyqmzzt", "kgl", "umt", "eguqwdyg", "vofuhonff", "hevdrb"};
    vector<string> roomRights = {"wds", "hawawcyeqvv", "peoc", "tct", "xyrapswsmybmxb", "zbrrwmrmq", "qcbuxd", "wuuloqfa", "goqkzrlqiiec", "uko"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> records = {"xdivrqahm osra u", "pkxufqowg hnbbgycnxthqts rbfowbfnid", "sgqd eadfjwhaa tdeavxtfyttcubp", "mfv tyxccjrrumgh u", "uujzdgrthaii lddxajqjiiem qibaodyinnjby", "ugozycxguqom d ckvrafs", "eya fdvcdw wpeulyhar", "kwwvwzbpskp tyxccjrrumgh dqohfvuycrimoy", "tgxb wurnywhdizmktq yrng", "yzzw cnuxmjyoi vhzybjctk", "toufjbfk bdy ivngiabpk", "rgymcznruyiwtr vmfkm gihkdkqgfnzkm", "unutosbjgyopb wurnywhdizmktq nqfvkhxokj", "bdoieamfqgzq pbvcrvutfo wpeulyhar", "wjhtdxn ouqjunlxxeqttxb vvzwglrlbfsjdo", "lhavnylfzjg wurnywhdizmktq sccdbk", "xq pbvcrvutfo rbfowbfnid", "yf z sccdbk", "qn gtlqapziszaobxy yrng", "idnrnhw xpuryjsjqwyzuvc ckvrafs", "wuxeustug d vhzybjctk", "vp vborntdbjhcmo g", "cmxom vmfkm ldclef", "gerymxndkwb eadfjwhaa k", "vw pbvcrvutfo ckvrafs", "zso wurnywhdizmktq gihkdkqgfnzkm", "putklc etxym rbfowbfnid", "zzdmgls xpuryjsjqwyzuvc tdeavxtfyttcubp", "jfuzkgvmc d k", "iyrcmor vsodpzjtmnzit rbfowbfnid", "hcrjsskxesjz gtlqapziszaobxy hftvwuuwqbgvu", "ueotovrc zxe dqohfvuycrimoy", "j ilbphuqyulrmxtn k", "lhavnylfzjg wurnywhdizmktq hftvwuuwqbgvu", "ueotovrc zxe pgul", "jfuzkgvmc d sfifejhbyqubxk", "yzzw cnuxmjyoi u", "yzzw cnuxmjyoi jmcbbtjcq", "qn gtlqapziszaobxy nqfvkhxokj", "unutosbjgyopb wurnywhdizmktq ldclef", "yzzw cnuxmjyoi vvzwglrlbfsjdo", "xq pbvcrvutfo tdeavxtfyttcubp"};
    vector<string> userGroups = {"wpeulyhar", "ckvrafs", "qibaodyinnjby", "sccdbk", "u", "k", "tdeavxtfyttcubp", "nqfvkhxokj", "gihkdkqgfnzkm", "dqohfvuycrimoy", "awfkdrpo", "vvzwglrlbfsjdo", "hftvwuuwqbgvu", "lethepnriyv", "tgtjrcrk", "pgul", "vturqf", "jmcbbtjcq", "xwuinxzaxo", "rbfowbfnid", "vhzybjctk", "sfifejhbyqubxk", "yrng", "ldclef", "g"};
    vector<string> roomRights = {"gtlqapziszaobxy", "vsodpzjtmnzit", "pbvcrvutfo", "fdvcdw", "vmfkm", "eadfjwhaa", "etxym", "nhksc", "vborntdbjhcmo", "lvplxtgxstehaoz", "d", "hspv", "tyxccjrrumgh", "aolshpbjfcpjyx", "ouqjunlxxeqttxb", "xpuryjsjqwyzuvc", "rvtmih", "hnbbgycnxthqts", "cjgakbypnrkhd", "qqcdsfksjzsc", "ivbtzm", "zxe", "osra", "wurnywhdizmktq", "cnuxmjyoi", "pw", "gwyfsrsrpzuyajk", "bdy"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> records = {"jidlcl xhzpiphgu xbwljfxvm", "wcmtnzwtghaxro pptipcntdyg uevotayoc", "faujpkfgeqohb xyhw up", "v midl nqlieaipjoekdox", "pz wzcryjee klt", "kndgikpkjhyz sgjgp fqxhaawxsqimne", "bvxqfdyjt ylroppy c", "svinnznu y wtbaslv", "czrmlh unuvgpufy zkrassqjwvo", "vqxweyrbq sgjgp dnqlwnqtbjt", "eohadbxlpkkegvi xkd ztcbumuug", "nu jlxhgm ikp", "usomrkqpdrfby xbzmralrbcn kkwxrkapae", "kyzmxnd sxurnqvkqozztv ztcbumuug", "zjqvrwilnefcsxo sgjgp dnqlwnqtbjt", "ou wksekt nyjksbufoydb", "w ylroppy hkiqhukrzhozmyx", "bsibtwyibiik konowtitn akhd", "dbunojt ibfdee kpqiw", "ll xhzpiphgu qidhdvym", "cvjw ibfdee qidhdvym", "ftaxdbqbc xbzmralrbcn xbwljfxvm", "ckjokor y akhd", "dhnydbjxfggdel iew nqlieaipjoekdox", "gkckb iew up", "mciy konowtitn bhszzrsd", "yibqmexbccena midl kpqiw", "viozwnigr zcjemfgsmsxy w", "jwe yosgssrjcf bhszzrsd", "ftaxdbqbc xbzmralrbcn c", "zjqvrwilnefcsxo sgjgp wtbaslv", "zjqvrwilnefcsxo sgjgp eslosz", "kyzmxnd sxurnqvkqozztv kkeeby", "dbunojt ibfdee kkwxrkapae", "czrmlh unuvgpufy up", "ftaxdbqbc xbzmralrbcn dnqlwnqtbjt", "zjqvrwilnefcsxo sgjgp uumlfmahsuxdzg", "yibqmexbccena midl bhszzrsd", "ckjokor y wroqg", "czrmlh unuvgpufy esikklpzpkkf"};
    vector<string> userGroups = {"wroqg", "kpqiw", "kkwxrkapae", "qidhdvym", "pdkvcumuekw", "uumlfmahsuxdzg", "uevotayoc", "cyxmwogrcswqufk", "dnqlwnqtbjt", "axvc", "up", "i", "ikp", "c", "ondra", "cyiurlgkog", "kkeeby", "zizqpccdr", "wtbaslv", "xbwljfxvm", "zkrassqjwvo", "akhd", "bpkmolk", "w", "ztcbumuug", "nqlieaipjoekdox", "bhszzrsd"};
    vector<string> roomRights = {"rqjy", "yosgssrjcf", "midl", "ettdun", "y", "np", "yphxdzfyrwjv", "xilcvohqim", "xklgzciyspxxqc", "ibfdee", "sgjgp", "qcmn", "xwoago", "ylroppy", "uevarnictye", "aqzoqxesesmcf", "sxurnqvkqozztv", "xhzpiphgu", "konowtitn", "iew", "unuvgpufy", "whlgnffzvvprox", "d", "vhxqekmbs", "wzcryjee", "jlxhgm", "wmlalijiypvmrp", "pptipcntdyg", "fppgldrnobzybo", "nhlewcxhtbu", "esuhajy", "xbzmralrbcn", "j", "uietpxvllbffkf", "ilqlmccoqw"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> records = {"h n tinhaavltp", "docdbwf ksnvsn bcsa", "tzeojuhlzdwe yizldowtq sadw", "qabdib cwldtrudngy henjz", "rjbwzdbcz oou mtpblx", "nugsipop bsnttcd maosdk", "psbvqrvuwd oou hgwxjuxac", "gwehvfkwhld ujwf xcbielrnojqs", "hlpqcfhf ollviwrpwpxvdcj fbln", "cgsuzq ksnvsn cjwklszv", "vtk akvtrsiqr psqrfezrlhpl", "sqknwwjdjnaq yizldowtq odlwyo", "ri vozwskdiaxgp xcbielrnojqs", "zsiwuoqongfkcp dedwpkocbznv pasbuklczhfyppp", "u l maosdk", "xh akvtrsiqr cjwklszv", "tslch oou awaywogcwnio", "uifdl incsobfhigtdk lkskvvzbylhcwf", "vvcr oou odlwyo", "ufydkkhbxblw ods psqrfezrlhpl", "q yizldowtq irledttvtr", "ebtmppwuuhap dedwpkocbznv hdxfdtjnmwrqr", "egnaonfaxmewpr n awaywogcwnio", "bhjgleuatqwo vy heryfddr", "yfbeo cwldtrudngy xcbielrnojqs", "gedmgaykwob ujwf jxoffchtc", "rlzx akvtrsiqr plhzvmdjutt", "dryyhwogwuja ywntfbjvdfkwy jxoffchtc", "ziocuu vxogxpwdieblze swee", "vhalkscvratwttv sjeflvjskvojl xcbielrnojqs", "pl yizldowtq gqimwevcfp", "lfvnpuwdxsabnh ollviwrpwpxvdcj xyzhhum", "yrwdpqdimyej n bucyztjw", "tvnhc ollviwrpwpxvdcj mtpblx", "wucuzbnzfcgldyj htvqb sobyplgk", "pzlzoj arn zakghgtilqoc", "zlzwyizievmb ksnvsn gqimwevcfp", "oq ykoesczbwm tscifivht", "vsagxapdpr akvtrsiqr j", "rhaugntdnbev htvqb jxoffchtc", "bhjvxzp incsobfhigtdk tscifivht", "tsarssw ollviwrpwpxvdcj yupfauzjqawapi", "jpdsrx dedwpkocbznv fvfpezquaklh", "etdrwjogkxp incsobfhigtdk lcmymnmeik", "xqxrmpsfk ujwf hgwxjuxac", "dwxszpjynn ollviwrpwpxvdcj swbk", "tgoew k swbk", "p ujwf vfsjiehhub", "ri vozwskdiaxgp jpavfqhoreavpxo", "vtk akvtrsiqr xyzhhum"};
    vector<string> userGroups = {"gqimwevcfp", "webjivnadyk", "plhzvmdjutt", "sadw", "sobyplgk", "jpavfqhoreavpxo", "dijhfq", "tscifivht", "ipsawgr", "j", "s", "fbln", "useylwaw", "irledttvtr", "mtpblx", "oitcf", "hdxfdtjnmwrqr", "nmdtyxibkhhb", "ddx", "maosdk", "swbk", "swee", "xcbielrnojqs", "hgiwanidggesvy", "bcsa", "tinhaavltp", "awaywogcwnio", "henjz", "quyfbyizlboddk", "cjwklszv", "lcmymnmeik", "lkskvvzbylhcwf", "jxoffchtc", "joarakcmepizol", "bucyztjw", "odlwyo", "heryfddr", "ubkkmkliolh", "vfsjiehhub", "yupfauzjqawapi", "xyzhhum", "fvfpezquaklh", "hgwxjuxac", "zakghgtilqoc", "psqrfezrlhpl"};
    vector<string> roomRights = {"ksnvsn", "ywntfbjvdfkwy", "dedwpkocbznv", "incsobfhigtdk", "n", "arn", "ujwf", "yizldowtq", "htvqb", "l", "oou", "ollviwrpwpxvdcj", "xbr", "vozwskdiaxgp", "tksqdhmsgjxl", "akvtrsiqr", "cwldtrudngy"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> records = {"zaxufkishxnges vcxika uukqeo", "k slzoxhojjdtrc jconhtskcpwxn", "kbvlbkdlamp cgrrgibhbt yfrhhamcdprqa", "qrhs onwtzkkcvayqec gzu", "dzylrhieq ouvedbiwx swxcrphezvtc", "ymbuwc manxdgqiolcrz gzu", "hfemtez rcmcgyvkbhw swxcrphezvtc", "lpbu qw rdnnkarykoueqe", "rxgp sglmmhstrwg omeuvwniqd", "zzvgpkedl vcxika qfjemfzithaw", "z ouvedbiwx kexqwyxufnd", "qiwu q taigp", "rywelnf gxpsiscsexccbjh phthxeojiwic", "uxfcosdp mmpc mqxevpbsucieit", "jexohkoib i l", "rzaotymxmzeu w phthxeojiwic", "dbzutcjimqh q fc", "xrqi vcxika wp", "xbwxrp rcmcgyvkbhw qfjemfzithaw", "dokcsgxwh w x", "qdazloptq b k", "mjzjgafftwdwkpa lxnszhfnfbmpaba uukqeo", "xzafxqkxsvmj jkakhx uukqeo", "eadpbmvbtbup wmwihluwnjei bi", "sbysdvtecqwmq czwxxjgctgugfk sslidcbcfs", "ie vcxika gzu", "aicd n qfjemfzithaw", "ervhkyebhwcfri mww sslidcbcfs", "mofdmttddxfeh par a", "hhnbdxn vcxika jnwnvzsfzyewhp", "bpiz jwnjn fiidgeevzr", "psdufrzke q x", "djycqcj mmnynaoawj eqocwwe", "ltpmwmczprkq zakadnvxqanele ktnkpcpgv", "blqvqjwc lfztwhhjlb phjikywuzptlfp", "rfy qw phthxeojiwic", "jotuoenftlrv hyqsuu swxcrphezvtc", "ioxycylsu l gzu", "cqfrhksyvgrqwyf jwnjn x", "truqecgbdibo y s", "vshoxa i oqnmvywae", "ksyhbrxx mmnynaoawj l", "fbkyvcca lxnszhfnfbmpaba twzvcomuqanqi", "fftgtwendul gxpsiscsexccbjh wp", "rxyrebjeaajbljz yyidulizkmb td", "truqecgbdibo y ktnkpcpgv", "dokcsgxwh w gfjxtndrtzdgmif", "fftgtwendul gxpsiscsexccbjh rdnnkarykoueqe", "qdazloptq b x"};
    vector<string> userGroups = {"omeuvwniqd", "sslidcbcfs", "fwfpjh", "qfjemfzithaw", "sqga", "kexqwyxufnd", "hvw", "bi", "astksrdnilpd", "td", "rdnnkarykoueqe", "swxcrphezvtc", "phjikywuzptlfp", "xuwqstujke", "lzjqua", "fiidgeevzr", "pjajfsbapnltcyu", "oqnmvywae", "fc", "yfrhhamcdprqa", "taigp", "wdvuzxabecddjw", "twzvcomuqanqi", "hiskd", "jconhtskcpwxn", "s", "l", "k", "gzu", "x", "wp", "bfxeumnnfzru", "phthxeojiwic", "gfjxtndrtzdgmif", "ccumvej", "uukqeo", "ktnkpcpgv"};
    vector<string> roomRights = {"dawkfamcmigxmc", "w", "wmwihluwnjei", "slzoxhojjdtrc", "tudnsr", "czwxxjgctgugfk", "manxdgqiolcrz", "jkakhx", "sglmmhstrwg", "lfztwhhjlb", "hmviwehf", "n", "i", "advu", "domip", "gxpsiscsexccbjh", "zakadnvxqanele", "tbdlmvoezlg", "prkpql", "tqpqp", "rcmcgyvkbhw", "vcxika", "bkquxsnpjdeqwic", "rcwbfdzdabckl", "mmpc", "ouvedbiwx", "yyidulizkmb", "onwtzkkcvayqec", "par", "y", "q", "l", "mmnynaoawj", "ivedwc", "cgrrgibhbt", "mww", "jwnjn", "hyqsuu", "qw", "ufn", "lxnszhfnfbmpaba", "rknhch"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> records = {"amzm pgltr hkacpltsgh", "hhltcd vsmddh jbsy", "evopebpnrdzwrca zzrkdawpmt vmkyelfshcx", "zqmzelnlvvwoz vsmddh jbsy", "kdvyvbakptpo vsmddh zevy", "gqs rabxibyxwpwejgf jyk", "rixqmkezf pthssgj hmuvcjngfj", "ww elu iyxteycsyalarxa", "yg naszxrjxdyq b", "th titek b", "uhn iahfmafpyory wydyjwikkoc", "cczsjsnv pgltr cjjuasg", "vsa ippmuxiy bqtcediklun", "dgjkj ejnlrodpqs yfhdltcmuijsi", "glfpqawrxfeiji eqxvwzccw xizzvbckti", "etcrplm pthssgj aomn", "nymvixepfpvwi gzeljq fqvlqbv", "uzsbfdlnnpj vsmddh re", "gy pgltr wydyjwikkoc", "ufotslb pthssgj aomn", "qsyhp ippmuxiy tzxj", "pnpoh vsmddh iyxteycsyalarxa", "vkclxtum vsmddh dqamjrftmupfnq", "sptzfmtqpkgkj eleswdxxrhrap sdybxzp", "zefmvwumteqe ippmuxiy vapk", "jaskuheu naszxrjxdyq jzsajhbw", "sndkalulbt zlqgxris bqtcediklun", "himfczyirdmd qaapsljlahqljdo acik", "fnaotwbmlg nxel xvd", "ltsyvnpevclxdji pgltr dbq", "owxud eleswdxxrhrap re", "wsgsvufdsrwkrt vsmddh xizzvbckti", "hzvjkv eimjzeblirjf kgswhmwruzp", "u pgltr jyk", "ik kekmkm b", "iefvaxduuyax gaoct pgdj", "tvdkpd ejnlrodpqs jzsajhbw", "q pgltr hmuvcjngfj", "cbvqxa naszxrjxdyq khpdhoozuf", "hclohi titek gavpw", "gllcjnzci qaapsljlahqljdo vapk", "fulko ippmuxiy dgk", "kqfgjcimlkxz ippmuxiy bqtcediklun", "fqbsddeq naszxrjxdyq dgk", "iyb u sdybxzp"};
    vector<string> userGroups = {"cjjuasg", "dqamjrftmupfnq", "twxyix", "gavpw", "kewnuxbfqgyfan", "pgdj", "ajmavscrkypuc", "jyk", "dbq", "gss", "iyxteycsyalarxa", "re", "acik", "lcktucnedlzhlc", "lennvknfdt", "dvkpevtoopqcut", "tdyx", "jbsy", "eld", "ggkdq", "hmuvcjngfj", "zmtyreclcappg", "vmkyelfshcx", "sdybxzp", "xizzvbckti", "owupcfwxozue", "xeuudlpdtoco", "gakqkb", "eqrlmoznif", "hkacpltsgh", "wydyjwikkoc", "bqtcediklun", "jaichpzfpee", "aomn", "oqgfkjln", "vapk", "a", "xeuodze", "dgk", "tzxj", "fqc", "b", "jzsajhbw", "fqvlqbv", "khpdhoozuf", "kgswhmwruzp", "fgysy", "p"};
    vector<string> roomRights = {"wlrfzfevk", "it", "gaoct", "ejnlrodpqs", "eqxvwzccw", "kekmkm", "pgltr", "eimjzeblirjf", "kk", "gzeljq", "vsmddh", "eleswdxxrhrap", "mzasaeflw", "ippmuxiy", "pthssgj", "zlqgxris", "nxel", "naszxrjxdyq", "titek", "qaapsljlahqljdo", "elu"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> records = {"rabqlaegqnskhzu v trzv", "pzpplqvnwsvsuw k ryb", "lyabjch v uqxm", "uujhclbqcbhto ypunx trzv", "obvi htkarkqmrr iuidrcjkavlwjax", "pcwmoxoriqban fjxpkitwji bprknmabekw", "luzyxpaaww sazuxmqgwwbxc ojxlbtsfpwujjkb", "vkrsv bs xrct", "hxotnnjhvcivpfj krdlggvg jyk", "fjgwk dmrnllpkfnjkbnm i", "tgxqsrjpiqnymcl kvkahg ncwxb", "lhxveobpxgzg phsomqdqzcladmw jkhymmxu", "l uddjvvcvkwikdvb ryb", "xtmqndzdm ixsczrwwdoebk sq", "smduybifad mvnhksshkepd bacrlbfggkm", "pebomaurljo ypunx ryb", "werzfwnx dmdrgqdthpywyj ncwxb", "acjydrfe zpoik bacrlbfggkm", "qvbtjnteegnvm uddjvvcvkwikdvb vrvgcw", "bgljcygrai zge tuzldxxbznjxmu", "amvfspynsrwg krdlggvg yubp", "amvqjiblomuq ibkbpbu iuidrcjkavlwjax", "cjnkloygvsytfq qcdnsr rzltxixiuwihon", "eycglxwwfyht mvnhksshkepd rzltxixiuwihon", "dmxhvlujbspwln dmrnllpkfnjkbnm neiwqvygqufez", "sefwchdpezmm ypunx neiwqvygqufez", "vfkbtjir krdlggvg bvfjjs", "caxx yy bvfjjs", "ukfm gkpbqvyqvfaak ncwxb", "ltznaefgdtsdqap bs azftfetcepdwvr", "vacmxemubeoljcq j dedqh", "vpjxvqeajwfcy v rzltxixiuwihon", "tuv qrqwuhonbzhc ryb", "gscvo qcdnsr ydyel", "zftkhjg ibkbpbu bprknmabekw", "apavigvtdbvdx qcdnsr iuidrcjkavlwjax", "xsmemqbbwaipm qcdnsr tuzldxxbznjxmu", "y gkpbqvyqvfaak bqfyzj", "uyjxvtdqni ibkbpbu olsugvzwavt", "i uddjvvcvkwikdvb bacrlbfggkm", "rzllopye xfdqvzkeqzgpi u", "basjr gkpbqvyqvfaak tuzldxxbznjxmu", "apaxpmu ixsczrwwdoebk xrct", "gscvo qcdnsr bprknmabekw"};
    vector<string> userGroups = {"ncwxb", "jxznsdiuga", "bprknmabekw", "rzltxixiuwihon", "kutaviuixgibkux", "nythvcgewcofsby", "xrct", "ydyel", "qhzyvxsetwk", "uonbg", "ziosmjvn", "trzv", "iuidrcjkavlwjax", "ryb", "sq", "ndghwhegpy", "vrvgcw", "psnqsfjqg", "jyk", "bqfyzj", "ojxlbtsfpwujjkb", "tuzldxxbznjxmu", "dedqh", "i", "neiwqvygqufez", "bacrlbfggkm", "bvfjjs"};
    vector<string> roomRights = {"rgormhlulk", "ombfyengkxuwypd", "yy", "rpiiiwp", "qcdnsr", "ypunx", "krdlggvg", "xaxhifdz", "uddjvvcvkwikdvb", "gkpbqvyqvfaak", "zge", "sazuxmqgwwbxc", "htkarkqmrr", "bs", "ixsczrwwdoebk", "zpoik", "ibkbpbu", "dmrnllpkfnjkbnm", "v", "fjxpkitwji", "dmdrgqdthpywyj", "mvnhksshkepd", "ylbdaexiwa"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> records = {"ccdxlstttjkxhk gilutdqxum xxua", "wrrd ugmnawcs kis", "kzozmox dhircqwoeq jyf", "hjkll mh ztz", "i ugmnawcs xxua", "hd wsiutbpgc trbxsu", "apgz cvqqyjzxbn zsmfxp", "rfukzaslzgko b kis", "jfgsprge nwmksvcp giqpiggzty", "flezn iyny xgddfubjszc", "gnrz z ffagyg", "mltoefnkpdhb lsyadapbwfd al", "ptzgzdhgqm mmlrmauifyalhq gqx", "ghqt qszy jyf", "pnnchb bagvqblqcbna gmupf", "mqrduaeesa w dez", "ybjiia ugmnawcs arahk", "qgdgb cwyvikwekr cjhmptghyn", "xorzxuil hf a", "brhdxlvxpwzbe iubzddvikez khcwxctqdzili", "dazlfhmkgc ow xbefdm", "hcwpnj qszy qhzxebkr", "equcdrbvncwrl qytmmzuxtp ycwwtlgbvy", "tm kfihehpqtr mvtffxpo", "zvyjbaklc ebpctlqdzz gmupf", "aqrtwhpangeiug zqmvctxbqcuifur giqpiggzty", "nsdhgpgcnr hf jyf", "nbqsktk iyny xubvvyo", "ogndjalniftmvnr jqhpoz qhzxebkr", "uikyv tgearz vhbw", "dkeueqno bagvqblqcbna cjhmptghyn", "ccdxlstttjkxhk gilutdqxum xbefdm", "ptzgzdhgqm mmlrmauifyalhq kudw", "hjkll mh arahk", "flezn iyny khcwxctqdzili"};
    vector<string> userGroups = {"gmupf", "gqx", "xubvvyo", "qhzxebkr", "cjhmptghyn", "rnrohtlerz", "kis", "mvtffxpo", "giqpiggzty", "arahk", "a", "kudw", "ycwwtlgbvy", "dez", "xxua", "vhbw", "xgddfubjszc", "ffagyg", "al", "zfmqavt", "eqfjtmdxvv", "xbefdm", "jyf", "khcwxctqdzili", "xlbt", "zsmfxp"};
    vector<string> roomRights = {"zqmvctxbqcuifur", "cvqqyjzxbn", "bcwidouz", "ow", "gyopgiiyndod", "xeabrhevgmz", "iyny", "hf", "ywdggbvlsaop", "qszy", "vekuavuqtq", "anxy", "gewbpoc", "fkwakuyfa", "bagvqblqcbna", "vhrxy", "b", "p", "apvwncwydwgyp", "mh", "nwmksvcp", "lsyadapbwfd", "dj", "mhfut", "gilutdqxum", "mmlrmauifyalhq", "qytmmzuxtp", "louzx", "lkaxkufsuhfd", "cwyvikwekr", "kfihehpqtr", "eoxyiedoehkee", "rcybtunyf", "dmmvgfkmthmc", "rs", "a", "z", "wsiutbpgc", "dhircqwoeq", "qumjo", "jqhpoz", "iubzddvikez", "w", "ebpctlqdzz", "rgc", "ibqecrhhnrtr", "hnsoqhqkvhnwizo", "dvahnf", "ho", "ugmnawcs"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> records = {"xradz puexpml iris", "nfmafjmwwcnq ydvcm dlysrr", "lityftd puexpml bmzckjn", "ypenown bhqxuiv hn", "v ydvcm gtrerxdpk", "fcdhipuglwuefh ydvcm lne", "nfmafjmwwcnq ydvcm syc", "xradz puexpml yxkr", "lityftd puexpml gtrerxdpk", "xradz puexpml tczyhoqmr"};
    vector<string> userGroups = {"hn", "t", "gzfhha", "tczyhoqmr", "xc", "iris", "ezqduuk", "ztdbywezwln", "zfzwjkgat", "dxaubv", "lq", "gtrerxdpk", "bmzckjn", "lgqpdqjgnztgqzb", "ftgkktdmfeqppd", "dlysrr", "x", "ermuqogyjmithlh", "syc", "dkkpleicjfi", "yxkr"};
    vector<string> roomRights = {"puexpml", "ydvcm"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> records = {"waufoqkkljfgtbc kfuximdbhm uhopjt", "gq tgyuxxjycdmq heyamxzzdaaj", "ns tsfimcsgrth vmjdkphiafymyrb", "fzdxmre cvm ymvsf", "mdogi kfuximdbhm iianikj", "xur epyiikzoeir hyqe", "fyqzzviglo wuzttitwnfmxgcq qsdjwdjbe", "gicfobrffht epyiikzoeir vi", "vatbxnsjvrbwq asyhapnk aumczkozdpll", "eyisvo cxgd hyqe", "xvsyo r auxltwvxv", "gvtostjusz c oxmyyop", "dufeqybw asyhapnk yhsttgca", "lqubsrwnskoygho c ykwfqtippkjdb", "cyuwzjzvoelohj eckilbkdtmpesj zsognzhqrlwdeka", "s rl wxjxziezo", "htt tgyuxxjycdmq vkza", "rgsbvqjefkjfef ejqllh v", "nhben b d", "su eckilbkdtmpesj vwnrgmsqndyj", "fowojppayh zebbiiwns vfhehvuzzzcl", "vy zebbiiwns d", "bfzkmfsstztzmht epyiikzoeir fvc", "ebwapfre wquacxsmwyqzga a", "pmkkmzm zy ykwfqtippkjdb", "yyfgqzzrsadzt zy zwvqnfzqitt", "fuhfmoyqtoeg nsxktpybcajs pjxjmsqbzbg", "qfolgnqmf zy aeyczvnstks", "nxjnckiopdxwpmv tgyuxxjycdmq auxltwvxv", "hlmp wquacxsmwyqzga auxltwvxv", "ev q fvc", "qb zy oxmyyop", "inwyav uuowsxztrmivgd xbsgvlzdpb", "p c ykwfqtippkjdb", "uxolankrb rl m", "zlsnaf nsxktpybcajs slcnfdpffak", "vhjyyslxsnubcu poxx qsdjwdjbe", "xvsyo r uhopjt", "pmkkmzm zy slcnfdpffak", "nhben b ykwfqtippkjdb", "nxjnckiopdxwpmv tgyuxxjycdmq tobeyee", "nxjnckiopdxwpmv tgyuxxjycdmq vkza", "pmkkmzm zy vng", "gvtostjusz c wxjxziezo", "ebwapfre wquacxsmwyqzga c"};
    vector<string> userGroups = {"ypogegxdwwas", "pjxjmsqbzbg", "uhopjt", "ykwfqtippkjdb", "a", "fvc", "udplzybphwfggb", "zwvqnfzqitt", "aoxjkbaxcy", "rfxynfzygxvw", "axdjty", "tobeyee", "heyamxzzdaaj", "vi", "yfnjalnubqaaxf", "glwg", "uhxzizkiussu", "idav", "wxjxziezo", "vwnrgmsqndyj", "sexahy", "auxltwvxv", "nshcmpqefd", "d", "hyqe", "aeyczvnstks", "vfhehvuzzzcl", "qsdjwdjbe", "czawtm", "jh", "slcnfdpffak", "sphqssrwf", "yhsttgca", "vng", "vkza", "bmpv", "ymvsf", "xbsgvlzdpb", "m", "oxmyyop", "c", "v", "hjaap", "zsognzhqrlwdeka"};
    vector<string> roomRights = {"zebbiiwns", "nsxktpybcajs", "wquacxsmwyqzga", "tsfimcsgrth", "t", "qmqiislf", "zdipcqqa", "kfuximdbhm", "c", "poxx", "q", "eckilbkdtmpesj", "cxgd", "ucjbrazpzpz", "rl", "epyiikzoeir", "hxkmso", "tgyuxxjycdmq", "b", "r", "asyhapnk", "zy", "ow", "wuzttitwnfmxgcq", "ejqllh"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> records = {"oquuolibbquijlf oc uhvgaymcpyrlxq", "ybhiuyaqvrl wwetmsrsjbkg epyzskjhbjmygku", "tflhvfe acxjoj oqitufriirtfqe", "qmntdjcou kfdsqzaecobcl llkktyg", "auiideif wwetmsrsjbkg raadn", "ewflrnwzkdf rmx zrpthj", "ttmoyvsmqb tgodovyxgu eebkqliob", "klxpphv ufudsasmgwjo yoyfbbmomwyi", "ntryne lqgsf pguphmztvdc", "mo inbeztvtczekbuf miuaebedze", "tnsmzjnwbbmdqzo lqgsf jedlf", "ogxlpkh etezrsxgiyje iwivhupdqzygv", "l auseifqynkmgld hslux", "mhibhdobrpmelo dqhtcgdbgzvgbi prgccvporq", "mo inbeztvtczekbuf ona", "ybhiuyaqvrl wwetmsrsjbkg cqluynwu", "mhibhdobrpmelo dqhtcgdbgzvgbi ikggqtmpfx", "mo inbeztvtczekbuf dadmdprpgrrlgf", "ttmoyvsmqb tgodovyxgu iwivhupdqzygv", "auiideif wwetmsrsjbkg zrpthj", "mhibhdobrpmelo dqhtcgdbgzvgbi ppclseuvooved", "ybhiuyaqvrl wwetmsrsjbkg tab", "ogxlpkh etezrsxgiyje uhvgaymcpyrlxq", "ewflrnwzkdf rmx llkktyg", "ybhiuyaqvrl wwetmsrsjbkg tkywjjzjgmo", "ybhiuyaqvrl wwetmsrsjbkg yoyfbbmomwyi", "auiideif wwetmsrsjbkg u", "ogxlpkh etezrsxgiyje zrpthj", "ogxlpkh etezrsxgiyje tgnv", "oquuolibbquijlf oc cqluynwu", "ogxlpkh etezrsxgiyje qhbxkcyaxvdqplx"};
    vector<string> userGroups = {"tkywjjzjgmo", "wqhcfwuuxxl", "lmstvhvoutnff", "ona", "dwvmbalx", "iwivhupdqzygv", "tab", "oqitufriirtfqe", "zzj", "ronqnuljnl", "vbcgxylohthc", "ygcziouzc", "prgccvporq", "zprmdaf", "d", "llkktyg", "cqluynwu", "nntemk", "yoyfbbmomwyi", "gczzovxdrr", "eebkqliob", "tcjgqx", "qhbxkcyaxvdqplx", "mhmarcbzwe", "ewkknr", "mdpmfohlfyweu", "lgj", "ikggqtmpfx", "wkqcc", "hslux", "rbgcpmnwwzc", "sxrhcolbbdddhm", "uhvgaymcpyrlxq", "ainrp", "ictjfyomkl", "tgnv", "cxwaq", "xh", "zrpthj", "lc", "raadn", "miuaebedze", "jedlf", "dadmdprpgrrlgf", "pbaveey", "kurqxcwshyxwcmn", "u", "n"};
    vector<string> roomRights = {"ugevgzbkzgwuxn", "cllljjhl", "ufudsasmgwjo", "kywsuq", "jkuuxfeinpgjuc", "oc", "ckclybxyyqsqie", "cychckwssiouw", "ydhihvgjuejm", "b", "deybgigse", "lmoh", "tgodovyxgu", "p", "crbfxcjfkpxq", "kfdsqzaecobcl", "wpx", "rqhznjksvzslqeq", "yisymwnoaaw", "rvcjmjkzuu", "ptodjs", "etezrsxgiyje", "acxjoj", "nfpjxiz", "tuxandze", "ynewwlrwnrib", "dqhtcgdbgzvgbi", "apfae", "xazqymjip", "ohv", "jdmlmnisotbqi", "rmx", "owgokqxzdl", "auseifqynkmgld", "wwetmsrsjbkg", "otjqpduz", "mxxwkekp", "inbeztvtczekbuf", "kwphwzvvxshbewx", "lysmuqgyp", "lqgsf", "pu", "nuxitpqwvotjc"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> records = {"rkqn dlylihtedgwv gfsmoyr", "px enrdj ocowmwyxuvdiy", "elcxwchlcdx ym ejecnokg", "bwfwzgwqlna smphwou tcwq", "zqpmfpbmcdjyh smphwou cczb", "mjwl yvruklemiwhguwn fi", "yhqwiztbk dlylihtedgwv odjrdmmozcyhuli", "bphsevztwlwcx enrdj hgfx", "lqivmuimdzjmaen k ptpbuua", "o grjxhgu fi", "bvigrkbpxztu aee zgabofrzugrl", "fkgaxckjgjuula smphwou pxg", "yozz ym dvvcvglobwe", "kh yqgwmukcvqt gfsmoyr", "wlutkqoivarxx vwpqxzodpfrblxf ocowmwyxuvdiy", "hjbtfvegg akdxeyb hgfx", "wgeislnowkhjaxt dlylihtedgwv uadtvhpnt", "ykux yvruklemiwhguwn rpnfd", "dihwofdwnh scipeyuvdnxrl ucdbutxshym", "vldnzsdxclgeka dlylihtedgwv xvhmpvbjmefih", "i azkcnoltizipywk ucdbutxshym", "vgsbqcxeja slbzdbd gfsmoyr", "wkxsvchuuluxya akdxeyb cjlddedxlbkkhg", "icfrpa scipeyuvdnxrl eumm", "jbpnbwwdavnxp azkcnoltizipywk gajwueodlip", "bwh k auqefnick", "jb u bfz", "hewqgbhxei izlbmqdxuve advlloihq", "hzwkvvqys sf hirnnvqlit", "xhqzfyvrz zpemznggrocobj scml", "ydmomqx azkcnoltizipywk ocowmwyxuvdiy", "whsfh zssmug xga", "qcogcglapc yqgwmukcvqt gajwueodlip", "wau zssmug auqefnick", "bkmh vwpqxzodpfrblxf ejecnokg", "cto yvruklemiwhguwn ifjlqvrwfy", "emjzsqskvgsx grjxhgu gfsmoyr", "dxdhw scipeyuvdnxrl ifjlqvrwfy", "i azkcnoltizipywk yaagroww", "wkxsvchuuluxya akdxeyb ifjlqvrwfy", "whsfh zssmug tcwq", "bwh k qrqvyqacrkppacf", "fkgaxckjgjuula smphwou yaagroww"};
    vector<string> userGroups = {"zgabofrzugrl", "eycwcdlwcv", "xga", "cczb", "bfz", "yaagroww", "auqefnick", "jnu", "ptpbuua", "ucdbutxshym", "eumm", "xvhmpvbjmefih", "cjlddedxlbkkhg", "tcwq", "ifjlqvrwfy", "hirnnvqlit", "uadtvhpnt", "scml", "ejecnokg", "advlloihq", "bnusaosu", "gfsmoyr", "odjrdmmozcyhuli", "gajwueodlip", "hgfx", "rpnfd", "fi", "ocowmwyxuvdiy", "tptcyyzipoxxub", "ceqguossosm"};
    vector<string> roomRights = {"wlmpbfr", "grjxhgu", "k", "fqomkegc", "yqgwmukcvqt", "ym", "vwpqxzodpfrblxf", "yvruklemiwhguwn", "scipeyuvdnxrl", "zl", "sf", "dlylihtedgwv", "enrdj", "izlbmqdxuve", "zpemznggrocobj", "smphwou", "akdxeyb", "zssmug", "azkcnoltizipywk", "wwdvdbypd"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> records = {"misbwc uwqcycosfkdqf xvkuirofcemulnt", "qgnbun uwqcycosfkdqf gptaixxew", "xjwipowl zl uhjjqm", "bdh yurgbmjyk ypvybxnws", "vxdcknwlkzrc m hfvyrr", "efbrazdyjs ginub z", "hfkkirjd ofztu z", "ni vgwbfok xvkuirofcemulnt", "ceoofgqmmvog lmasduzjfqnuk jqomnlfbdxy", "pjvab jrhosfglr nivwkqhao", "iiusrncu omdfsetdeg iscgp", "rehtlykqg ginub zj", "dswtavijri tbull xfis", "asvwlmkpiqg m sa", "abaalqg ginub dvxsoq", "vakobfymyjz bcgauaa jqomnlfbdxy", "bux wml uwjcvihrucyho", "ihdqalfanhaay jqwbvwdlqkwvcdg lumzkikskwlhs", "ovkamni cfacmvi jrwgns", "agtzhvvhjdqnvq nspvyr sriixauvdohed", "dsnku m iscgp", "kcegpf tbull aujei", "c ginub hfvyrr", "eevaffxcoghevd tooknfby zj", "wgp znqbpew zdkrtxegehmbf", "s wml upjwrfdnc", "b tooknfby jofshbwfkmos", "ogl ck xvkuirofcemulnt", "iiusrncu omdfsetdeg hx", "c ginub hbl", "dsnku m zdkrtxegehmbf", "eevaffxcoghevd tooknfby lumzkikskwlhs", "rehtlykqg ginub hbl", "agtzhvvhjdqnvq nspvyr kidgthpwbmd"};
    vector<string> userGroups = {"crxldjsw", "hbl", "sriixauvdohed", "z", "zj", "qjawsvs", "evlbnejxdlr", "ofhsi", "u", "xfg", "ojjgedgia", "jpxunbgebw", "jrwgns", "sa", "hje", "nivwkqhao", "prk", "uihdzgmoyrhykqk", "hx", "fvlvfljj", "cvwxdfcflotlick", "uwjcvihrucyho", "iscgp", "lumzkikskwlhs", "jofshbwfkmos", "sawboqond", "xvkuirofcemulnt", "xfis", "aujei", "svesvccpkufpy", "dvxsoq", "v", "kidgthpwbmd", "hfvyrr", "jqomnlfbdxy", "j", "hpb", "earrdkaihz", "zdkrtxegehmbf", "mozbpripibusbe", "agafqtyp", "ht"};
    vector<string> roomRights = {"wml", "ck", "tbull", "fdykezshe", "cfacmvi", "uwqcycosfkdqf", "vgwbfok", "znqbpew", "jqwbvwdlqkwvcdg", "jcbor", "c", "au", "pzrriinmflp", "ccmxeqf", "zifqbss", "tooknfby", "qkucbngdzfir", "m", "vtjyld", "g", "jrhosfglr", "nspvyr", "ginub", "pmiard", "lmasduzjfqnuk", "piwsq"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> records = {"a mcbileur oskj", "yfptzi emzszjuk qimletwgbkgdp", "p gfbz zqga", "thzxppqo cgoryw zqga", "wcqzk cgoryw oskj", "dgukqxprc gkqgjtmins dsd", "kb cgoryw kt", "ethxaixpynf cgoryw sqetsqtjvsxgguc", "lhcktgpaazsz mcbileur wmdkut", "lcxvfoaax mcbileur ecbb", "lcxvfoaax mcbileur qimletwgbkgdp", "dgukqxprc gkqgjtmins bkarfwojox"};
    vector<string> userGroups = {"kunyp", "i", "vp", "kt", "oskj", "bkarfwojox", "dhqsfhwpuufneae", "sqetsqtjvsxgguc", "dsd", "zcavwfichoxafbt", "togogfxnzzacrg", "qimletwgbkgdp", "wmdkut", "zqga"};
    vector<string> roomRights = {"cgoryw", "mcbileur"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> records = {"hbmhewmz n ba", "beeqyu ewlglwbyzn jrjqoxezcvs", "tdra ybmtcy xjkrivgu", "kxlwaus cxl pqit", "gg njpmjdsmjjh bgvtybtnu", "h ybmtcy jrjqoxezcvs", "plscnofrvvspt vgueyqxjkbjwy qwwcupze", "smlwykhvkbp mpkqjfdxamgdept yx", "jxrrrgejk vgueyqxjkbjwy hqjoztdxbbwiocz", "apjvldm mpkqjfdxamgdept ezbxmlsmnkvgemq", "ofucbtokobnfmwd kctiobvmcumrac wjdds", "apjvldm mpkqjfdxamgdept yx", "ofucbtokobnfmwd kctiobvmcumrac ezbxmlsmnkvgemq"};
    vector<string> userGroups = {"qwwcupze", "ypqfaprineh", "jrjqoxezcvs", "rwvi", "bgvtybtnu", "dalgjcpbs", "fu", "amtui", "cfrldklg", "ba", "ea", "kmzbn", "ptlhvzc", "j", "upkhsusyatakx", "gjof", "ezbxmlsmnkvgemq", "gmd", "nzizwnfidnuh", "wgajz", "wlkepyuchjhny", "yx", "lepotjyhheisf", "pqit", "hqjoztdxbbwiocz", "wjdds"};
    vector<string> roomRights = {"lnmcduxlbnwrorv", "tyjdn", "dskovpicdv", "rxvlvinkeg", "ybmtcy", "rmbjwp", "lak", "vchvzvshicnqdl", "qgwq", "n", "eyyw", "lwqetunotigasjq", "oddgkzwpoyvoyr", "mpkqjfdxamgdept", "dysmitix", "jtvhmrtcc", "njpmjdsmjjh", "ngrzqnjqwsl", "cxl", "bpjoyabkdvyo", "inuq", "vgueyqxjkbjwy"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> records = {"qjxwoupzji umjpxkctp yzlotlbmabojo", "dpadcr umjpxkctp eso", "zuujzgmkhazk itqvkxv ersqfn", "rwfnm umjpxkctp wxhqufgaz", "elloiod jpttsfd fzbqzigseulru", "tgzihtersmfft rwqvruqxand hpuyyhjmpfsrfon", "g lihkwjbcvhp egoqsal", "nxctnqur mzogkgnlskkzdzd yzlotlbmabojo", "filwltrtuzd dffue qhpyhqvoqz", "fuirbnnjvtwtxrg mcrrzyviytcyl nmrowstwjnudcmr", "mzqthepvzhouiri xbdxh drzglx", "nqjpgwabpww xbdxh do", "qe lihkwjbcvhp ersqfn", "c lihkwjbcvhp wxhqufgaz", "uxnan r clsqvzsh", "zw rp dgixxtutzfwe", "tgsdwgwixcex dlhtyhamkh mkhbkojkrxckbcu", "wvemliqpomnemco vpicbbiarleyfam xnnqscdnt", "yp tcijqkahmbfwbaz xosukthykw", "gikfognnktkqr sfczzgwaqu idouvypdupfyej", "uete jpttsfd hpuyyhjmpfsrfon", "kv vsihlrfxpbeh nmrowstwjnudcmr", "zbsbpfbhmi psipezmxw pnzppnzhiycmqt", "xpfdcsov itqvkxv pjljnhwecxuuq", "zw rp re", "uxnan r xiyyhgh", "qjxwoupzji umjpxkctp pm", "nxctnqur mzogkgnlskkzdzd xiyyhgh", "tgsdwgwixcex dlhtyhamkh hpuyyhjmpfsrfon", "qe lihkwjbcvhp dug", "mzqthepvzhouiri xbdxh lizbbk", "g lihkwjbcvhp re", "g lihkwjbcvhp mkhbkojkrxckbcu", "uxnan r jtzpphslcwo", "mzqthepvzhouiri xbdxh hpuyyhjmpfsrfon", "qjxwoupzji umjpxkctp p", "uxnan r pvduvtq", "nqjpgwabpww xbdxh mkhbkojkrxckbcu"};
    vector<string> userGroups = {"idouvypdupfyej", "gq", "uo", "kyqy", "npmu", "wxhqufgaz", "fzbqzigseulru", "p", "re", "lyak", "qhpyhqvoqz", "pjljnhwecxuuq", "abaaoisvztcpq", "hpuyyhjmpfsrfon", "pnzppnzhiycmqt", "xiyyhgh", "xnnqscdnt", "mkhbkojkrxckbcu", "adihyfuovos", "clsqvzsh", "dug", "wseapeas", "ittejqtbqxokpl", "jtzpphslcwo", "do", "ryenfndaqw", "egoqsal", "paajnefbxiqjcq", "pvduvtq", "yzlotlbmabojo", "qsqbibdapuwsor", "h", "lizbbk", "pm", "fvu", "nmrowstwjnudcmr", "act", "gwli", "xosukthykw", "ersqfn", "jbmudr", "exnph"};
    vector<string> roomRights = {"vsihlrfxpbeh", "umjpxkctp", "itqvkxv", "vpicbbiarleyfam", "qjaucp", "mkfhueeubtegwgq", "xbdxh", "jxwsaqwpfia", "rwqvruqxand", "mcrrzyviytcyl", "psipezmxw", "rp", "tcijqkahmbfwbaz", "mzogkgnlskkzdzd", "dlhtyhamkh", "lihkwjbcvhp", "bbscgrfcu", "jpttsfd", "nrjxbfiekdlblo"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> records = {"iztqkgquqbcy hneuccwkcraoeqd zimx", "m xuhchcdfa kuuhamfauk", "tfkbemnygyj khjlyhklify qczveimgkwagfcs", "hvdreekw j ubndmvrobvlsb", "ronjpphtdynj zlsqp neomhdiv", "o ntdcwhenuodkvy bfujvlcixl", "ydnebyjkwm wpqcgodcnr sdairb", "cto o q", "mhmzrdqyzuwof zvnzlpi ubndmvrobvlsb", "ewhh wlsoci h", "ewhh wlsoci tmoyulj", "iztqkgquqbcy hneuccwkcraoeqd e", "mhmzrdqyzuwof zvnzlpi tknp", "hvdreekw j ulbaedncyz", "iztqkgquqbcy hneuccwkcraoeqd kuuhamfauk", "ronjpphtdynj zlsqp umwn", "mhmzrdqyzuwof zvnzlpi tmaqhveidm", "ronjpphtdynj zlsqp m", "ronjpphtdynj zlsqp fidlnf", "iztqkgquqbcy hneuccwkcraoeqd ezwtdirwzs"};
    vector<string> userGroups = {"mfomzr", "suugqw", "ifcdvhyeeuqej", "q", "sdairb", "kuuhamfauk", "zimx", "t", "h", "e", "qczveimgkwagfcs", "coxhn", "umwn", "dmm", "cql", "vtl", "fidlnf", "ajtyridnx", "cheov", "tmaqhveidm", "obswcdraw", "fjzhli", "cdevpgnyd", "ggftxhnt", "tknp", "ubndmvrobvlsb", "reqznwvkfidsdpf", "ezwtdirwzs", "m", "ulbaedncyz", "icbmughyfdrknig", "czbnvoq", "svlwtlf", "pgqjmxjucbgp", "neomhdiv", "gqrtmkgsoyyehn", "rhfunvfcbvri", "bfujvlcixl", "mjaqqpujyz", "owlqzghjfkp", "tmoyulj", "z"};
    vector<string> roomRights = {"beaqliqqhv", "zlsqp", "iefqn", "sys", "ntdcwhenuodkvy", "wlsoci", "j", "o", "aiys", "lnqnka", "xuhchcdfa", "xp", "hneuccwkcraoeqd", "sxppgs", "jxdl", "aaijoodqsbcvsc", "xvmpplfesxcdwfo", "hpuqdiv", "dxzypcjozx", "ojjtbivggdu", "kllbqww", "zvnzlpi", "qffeqqztavzgyw", "khjlyhklify", "sp", "ufzbmrslluim"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> records = {"dhvfmwjyj lyvmlave yd", "bdthiwx avahhtlhswbadkt vrlqtgp", "fmtizxotvwlpqqx uu rsniczxiyidz", "wlhfkt eqtemzexjnj ketmreijhfvhfts", "nwj mjyjuieplpud cmoeganjvsav", "gfualgvthtkcqg lihjtiafxfup cvosf", "gwgdkcori vlhssb onbdz", "myoihl hgwringzefwbytm ld", "ofpznkvv mpfnsfuq nzvfiwywy", "fxwnne uu zvwtwrq", "u vlhssb iqhyidmtsgnxzo", "wwxpgacgoknbbeg lsb ztvvbmlwxstwaxp", "dtfaok afycknzbrkefb wjgxpzhrqgalshe", "oixb ya vdz", "jvvfu avahhtlhswbadkt ketmreijhfvhfts", "wcvyjllymoc mbpbtekrexzjuie onbdz", "hinmicw vlhssb ztvvbmlwxstwaxp", "qhpt oqskktvms jgttbs", "aprhlmdnjeww m gcyqezmn", "vidxcmfpy lihjtiafxfup yxylqmnwb", "txklebfzdwsk judpgauiv h", "g mbpbtekrexzjuie nn", "w sezrwnkrzuk zisadlliqboru", "tvnksvo lqrmpqmkbgn jttkmzjaoby", "zczrbrmybyee ielu zaogkrmvucly", "fhdarmggiaafn ya nzvfiwywy", "xlapkdo xplxmagoojdo gqhrkvqunsaa", "gfq lihjtiafxfup mip", "i svcdhscwwjkn vrlqtgp", "mmvrtytmka mnmxljmqzn bzygtocwxqwvxw", "uauaphzaj jjpadkcguwiq ajffks", "loeou ya iqhyidmtsgnxzo", "garwm pdqamiznjcae mip", "rgarz fdo vrlqtgp", "dbjydfatmztyqg jm wixf", "uxjedlxcaf vlhssb oocdktgtasyctnd", "gflhu oqskktvms mip", "ldooi tmiaqz bkp", "jxqfvinjck eldopjb onbdz", "gqe y lnjyftafkagk", "uglnosa lbxcwgeaenw zebchwsbbg", "orgrhxcaiz ya q", "nwabf fetwpjenw zebchwsbbg", "nalfgr eggfdnp lovnagjza", "mepay eqtemzexjnj cwionulhxwgct", "xniegsdislj hmrsqrwbdnv iqhyidmtsgnxzo", "zh ya khlfsmgpgyuo", "cp frsidwbuhiwpm vrlqtgp", "prxxxqw yyxy ksjjldycufk"};
    vector<string> userGroups = {"tyvnqitz", "gcyqezmn", "yd", "rsniczxiyidz", "spol", "jttkmzjaoby", "npkaaoazyah", "znwobjhmday", "bkp", "lnjyftafkagk", "oocdktgtasyctnd", "cvosf", "zaogkrmvucly", "vrlqtgp", "zebchwsbbg", "cwionulhxwgct", "q", "twbqvfrzoqrr", "ztvvbmlwxstwaxp", "nbxlcngkhhyxaqq", "lovnagjza", "vdz", "h", "oeatt", "fcqdbrvsshg", "wixf", "ajffks", "zisadlliqboru", "jpureqbcxl", "gqhrkvqunsaa", "iqhyidmtsgnxzo", "wbfdrowdjmayha", "mip", "jzzvurdhqey", "bzygtocwxqwvxw", "khlfsmgpgyuo", "zmmc", "kigzkdycbwaas", "jdtdpasxam", "slzennrxtsjyq", "cmoeganjvsav", "yxylqmnwb", "nzvfiwywy", "ketmreijhfvhfts", "fhthhjifqq", "onbdz", "ymycujjbgsg", "ld", "szqci", "j"};
    vector<string> roomRights = {"mpfnsfuq", "uu", "fg", "lyvmlave", "lihjtiafxfup", "ohdkdqpjhc", "eqtemzexjnj", "vlhssb", "frsidwbuhiwpm", "lsb", "ya", "mjyjuieplpud", "eggfdnp", "fdo", "wrcwsyibzuyhyns", "jxxngfv", "tmiaqz", "oqskktvms", "mbpbtekrexzjuie", "sezrwnkrzuk", "ielu", "avahhtlhswbadkt", "jm", "yyxy", "judpgauiv", "pdqamiznjcae", "lqrmpqmkbgn", "mnmxljmqzn", "hmrsqrwbdnv", "eldopjb", "y", "svcdhscwwjkn", "afycknzbrkefb", "jjpadkcguwiq"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> records = {"jyyizcczjwoskl afzso vldcsluduthib", "igenojauw ncbfkwkykjjomco utadxpo", "qwkybijb hjp elcgwidpwdgpr", "rajwbusqmcbukhy pmrvgbudzmgw oedarpseubxttrg", "yjashv bqwxqy yirmsyrcsdo", "fglg jdecvbyycuygrpj pba", "ukw o fzuylpldbhschng", "mhiodcesehmq btsekzws uh", "mqpvtjeoumufuk xvuyasahcyljtfq mmdse", "ejorsyhwa btsekzws yirmsyrcsdo", "oeucu cwabvwzclc btkvxgwxbp", "olalgmpugb emgivgbqm ocwfkylfzmei", "owdq wcfjwbfuug uh", "oev sfmoxj xb", "ecfenvkixevn ew sl", "wyzipuqtng o itcpqlrzsiqbsj", "qwtfc bynswuwqzx wvsha", "ogrtmhqwr ncbfkwkykjjomco tfhhytel", "d vl tdmmmplehtx", "cwkawurslkftdv qxvzpxbbp lynqogshxhchh", "zauqqbjjpqbmj ncbfkwkykjjomco itcpqlrzsiqbsj", "pwsniujdmbqyg xvuyasahcyljtfq btkvxgwxbp", "eebd g yirmsyrcsdo", "wtxzcgoviceatct mliuiuah itcpqlrzsiqbsj", "lnqqbugccrggtl nkc yirmsyrcsdo", "pgkqksefchmdaqy cyeskxwy nkzsprluasuuyg", "dn rdsqvudbwxcx vldcsluduthib", "tpw zj elcgwidpwdgpr", "tytbhomudsgt xkeyprdovre oedarpseubxttrg", "azkd xccyotnf oedarpseubxttrg", "yijogsuvspkq splcqvva qhjrw", "f dcxofz dyzepqo", "mgya bvtzvenvq oedarpseubxttrg", "ufocatczdhidpt scnezs annae", "xlntgdfw xfodsqjraogxuom sl", "nnktnmq vzccr fzuylpldbhschng", "rej pkscn oedarpseubxttrg", "xmucve zirij jcjevqoyrrnfp", "lxzkjmdr uydifnelqwzrf dyqpg", "lp zj efargsg", "yfztsnjagolznzw cyeskxwy lynqogshxhchh", "v vl g", "viyws cwabvwzclc rppvkakha", "lycelr xfodsqjraogxuom annae", "jwverlotree xvuyasahcyljtfq yirmsyrcsdo"};
    vector<string> userGroups = {"xatzupevlp", "yirmsyrcsdo", "gmgbtssfps", "rppvkakha", "annae", "t", "dyqpg", "lynqogshxhchh", "qhjrw", "tdmmmplehtx", "sl", "itcpqlrzsiqbsj", "oedarpseubxttrg", "bbhqtsktmslpk", "pba", "btkvxgwxbp", "iwslf", "fzuylpldbhschng", "xb", "dyzepqo", "ka", "uh", "rfggsjjzemgrs", "ovmrtlxldmzpos", "vldcsluduthib", "cnmyzftmfe", "tfhhytel", "g", "jcjevqoyrrnfp", "nkzsprluasuuyg", "elcgwidpwdgpr", "efargsg"};
    vector<string> roomRights = {"cazz", "xfodsqjraogxuom", "btsekzws", "cwabvwzclc", "doq", "ew", "ampnpkgtwhqqhup", "xkeyprdovre", "xccyotnf", "vzccr", "mliuiuah", "skbndhocjqczlqf", "neusvne", "xastabfulij", "qxvzpxbbp", "sfmoxj", "btablud", "byajjtzhob", "ncbfkwkykjjomco", "pkscn", "dxcyyl", "zj", "dnipjuptdah", "cyeskxwy", "bvtzvenvq", "afzso", "hjzi", "pmrvgbudzmgw", "g", "o", "pemplo", "zirij", "bynswuwqzx", "fuknmyjbe", "splcqvva", "wcfjwbfuug", "wmmibaimdokxfx", "xvuyasahcyljtfq", "dcxofz", "scnezs", "bqwxqy", "qisotdhatsdx", "rdsqvudbwxcx", "bufbkx", "emgivgbqm", "jdecvbyycuygrpj", "vl", "uydifnelqwzrf"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> records = {"a b c", "a b d", "b b c", "b b d", "e c d", "e c b", "e c c", "t d e"};
    vector<string> userGroups = {"c", "d", "x"};
    vector<string> roomRights = {"a", "b", "c"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars author", "comix cars librarian"};
    vector<string> userGroups = {"employee", "editor", "author", "librarian"};
    vector<string> roomRights = {"history", "cars", "computers"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> records = {"a b c"};
    vector<string> userGroups = {"d"};
    vector<string> roomRights = {"b"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> records = {"a x y", "b x y", "a x yy"};
    vector<string> userGroups = {"y", "yy"};
    vector<string> roomRights = {"x", "xx"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> records = {"a b c", "a b d"};
    vector<string> userGroups = {"d"};
    vector<string> roomRights = {"b"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    vector<string> records = {"a b a"};
    vector<string> userGroups = {"a"};
    vector<string> roomRights = {"a"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> records = {"a x c", "a x y"};
    vector<string> userGroups = {"y"};
    vector<string> roomRights = {"x"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> records = {"a a b", "a a a"};
    vector<string> userGroups = {"a"};
    vector<string> roomRights = {"a"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars author", "comix cars librarian", "xxx editor cars"};
    vector<string> userGroups = {"employee", "editor", "author"};
    vector<string> roomRights = {"history", "cars", "computers"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> records = {"b b c", "a b c", "a b d", "b b d", "e c d", "e c b", "e c c", "t d e"};
    vector<string> userGroups = {"c", "d", "x"};
    vector<string> roomRights = {"a", "b", "c"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> records = {"a aa bb", "a aa ba", "b aa ba", "b aa bb"};
    vector<string> userGroups = {"bb"};
    vector<string> roomRights = {"aa"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> records = {"diary computers editor", "fairytale gardening editor", "comix cars monk", "comix cars librarian"};
    vector<string> userGroups = {"employee", "editor", "author", "librarian"};
    vector<string> roomRights = {"history", "cars", "computers"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> records = {"a b c", "a b d", "a b e", "a b f"};
    vector<string> userGroups = {"c", "d", "e", "f"};
    vector<string> roomRights = {"b"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> records = {"x a a"};
    vector<string> userGroups = {"a"};
    vector<string> roomRights = {"ab"};
    Library* pObj = new Library();
    clock_t start = clock();
    int result = pObj->documentAccess(records, userGroups, roomRights);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10808&pm=7659
********************************************************************************
#include<set>
#include<algorithm> 
#include<sstream>
#include<string> 
#include<vector> 
#include<cmath>
using namespace std; 
  
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll;
 
struct Library 
{
  int documentAccess(vector <string> records, vector <string> userGroups, vector <string> roomRights) 
  {
    set<string> acc;
    set<string> ug(all(userGroups)), rr(all(roomRights));
    FORE(it,records)
    {
      istringstream inp(*it);
      string a, b, c;
      inp >> a >> b >> c;
      if(rr.count(b) && ug.count(c)) acc.insert(a);
      
    }
    return acc.sz;
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/