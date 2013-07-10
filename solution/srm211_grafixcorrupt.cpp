/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2997
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

class grafixCorrupt {
public:
    int selectWord(vector<string> dictionary, string candidate);
};

int grafixCorrupt::selectWord(vector<string> dictionary, string candidate) {
    int ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "dab";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "lag";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "dog";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dictionary = {"bobble", "bubble", "rubble", "hubble", "supple"};
    string candidate = "dimple";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"double", "bobble", "bubble", "rubble", "hubble", "supple"};
    string candidate = "dimple";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"wma", "rnq", "dpa", "aig", "uew", "ilz", "ora", "rzv", "mgt", "ymk", "shh", "vgl", "pkf", "fvd", "pcd", "vbx", "jsq", "coq", "zpx", "btj", "gjy", "gup", "jfg", "vnn", "nhq", "udv", "oyx", "ebb", "pqc", "nhe"};
    string candidate = "oip";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"quu", "vrt", "pov", "sqe", "npl", "woj", "ybw", "qkv", "gui", "hfq", "wus", "yuo", "xqv", "rxn", "tlw", "tqr", "tlg", "zhn", "xjg", "let", "aeg", "ily", "utd", "vai", "feo"};
    string candidate = "haw";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"zkv", "izs", "fed", "waa", "ttx", "bgt", "quy", "dtq", "dgo", "yrs", "cid", "nln", "pvz", "txt", "zun", "erd", "jen", "klh", "kxy", "emf", "mqt", "lza", "dzb", "ndx", "vfr", "jhs", "dkm", "elb"};
    string candidate = "cwd";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"iflijue", "lkbkeyj", "knthrfd", "xbcckbl", "vosveuq", "fwtnzkb", "fuzysrx", "ckktjle", "uvplgvi", "jedmqln", "ymxtswv", "oerctxu", "kswfgoe", "tzufcub", "opmiumf", "ylgrxnu", "esrzqds", "ayjbjps", "xkjqeut", "dcsyarp", "mlcbjqv", "lwovijf", "gcpttgm", "gcxhayy", "lxaimkc", "tvqnsdp", "jfzmdvo", "ziahtcc", "kypnkje", "lmejccc", "baxesfl", "uyojpar", "nuosxom", "pbkslld", "jgzkghd", "vqlaakw", "gauodcz", "nfmrxew", "amvafww", "ryggotp", "rshrunj", "epjicsf", "dibmcdi", "qeetuig"};
    string candidate = "qeetjig";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"vkgybsv", "uhjbxpl", "iamkddp", "vnzurft", "uumhfzg", "rnhenwg", "vsrdgkv", "kartbdc", "kymocef", "ubdvxec", "tmhevvo", "zputfma", "kdpshth", "arughbu", "tzyqgkg", "jwbpoxv", "odckizg", "lhjcvwj", "pdtepzk", "mcqaqpj", "uikudwo", "jeacfag", "hajuagu", "xhjxrxw", "juztuyi", "hwwhcpj", "pbkfzbm", "neshhxq", "xsiootq", "byamzrf", "kjcjoar", "sxbeqnw", "beybtrl", "lbjtopx", "yavbufk", "fxcyzjx", "gyvicko", "amfvvws", "ptncgqi"};
    string candidate = "rumhfzg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"igrnsq", "ppzaol", "sbmgek", "fbigqu", "kjluzt", "udnvrj", "bqvpco", "iejrxl", "fnygzg", "aseugg", "psbvav", "qaisge", "pogdmt", "zpniwm", "onlaet", "ypxxuw", "rhtwrb", "bifzws", "eeymav", "combuu", "tbxwqk", "iccogo", "wjjguz", "zcqwqy", "uqqtkm", "ubbnri", "joskig", "weojwy", "mvudhd", "fkuxnm", "tuyjpz", "yruzcw", "fgzveu"};
    string candidate = "bqrpch";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dictionary = {"gvdhqhet", "xolckqwd", "soopyftk", "eusofrmk", "chtcdasc", "zbwyywfg", "vftkarfu", "sewvkgok", "vcbjrcit", "ozlvpzqx", "ptcatsll", "zvcadpxd", "fsllaczq", "mheweyjw", "jwqvrqkh", "zfhkbjcc", "btebdjkr", "nquulwpm", "bxfijaji", "wkowucmt", "swcunqiy", "bbubazlc", "dfwyencg", "bphxsrwa", "ouscyhuh", "ubgdwqet", "ivgkemlv", "clmykfym"};
    string candidate = "zbciywzg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"hkqqht", "zfsfvy", "kazizw", "litsib", "gvbumv", "bjwdlz", "islbbz", "zlafiy", "nivadi", "waxptx", "tvodsu", "oztpwr", "vhqmfx", "ckfytn", "wgkenk", "rjlzxo", "pkymry", "uqsvpf", "uzgddm", "xlobwq", "rtanib", "wukcxi", "euxxta", "zjwfgw", "aaeqhs", "mczyqx", "qmrptp", "fnaejf"};
    string candidate = "bnwtlz";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"mpgiczg", "saakuxy", "rdhisdk", "ikexjrd", "mjiblob", "lskdwfo", "nvikaey", "dxpohdk", "ztcwjeg", "qofabqp", "ikepqyv", "zjdjkzs", "afiaahs", "wfgvibk", "kgfwkby", "zynsntp", "ansighy", "iaitlyh", "hfqbgat", "atiarjn", "aneneup", "mruwtmu", "toopmqn", "ugihztb", "jtliffb", "hnwhxbl", "gygctrn", "xiwgfmd"};
    string candidate = "ikexjru";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dictionary = {"yxbmrv", "whhyvc", "ldtimj", "zuemqp", "cygqyr", "zlrreb", "lebhrq", "zrgeyw", "hcebyn", "fjgrca", "uivmxq", "xrdxkn", "xiqfmh", "ocpkfq", "iyokfu", "cmtyda", "xawlep", "fsophv", "fzuefd", "ejnvdj", "vdiury", "cmirnp", "aqxdxx"};
    string candidate = "cpirap";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dictionary = {"shlsh", "bdghy", "gpirb", "dkxcp", "uuxub", "selup", "rbrxw", "hblpl", "kjkwn", "fxjfp", "csftb", "cogqq", "miqab", "gwion", "uobwh", "koxrn", "gjgvr", "xgvgf", "tvbpe", "lfivq", "axujq", "ejumi", "srbuu", "mgfvs", "grpts", "dyqcn", "fnnik", "yqtfe", "oehqd", "cmxxg", "nlssw", "jiipe", "mjkso"};
    string candidate = "ogfvn";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"sndam", "npabx", "dmdfi", "nzhsr", "jsfvg", "smsrv", "awkxg", "xiitf", "reyqh", "uqlxz", "ivvzt", "ngexp", "prgwi", "jfgnm", "ktzuo", "izvxn", "xqzfd", "ebetg", "nmtob", "lzlzl", "rabiw", "edkuz", "skcfj", "zpowk", "bqyry", "sgvhx", "bwnyg", "wxwvn", "wbbas", "tfmwi", "mplak", "wiqlc", "yasay", "twlrz", "oezul", "npisa", "msokh", "muaco", "jsamy", "sfhfd", "owtmc", "rlmyt", "tavqc"};
    string candidate = "mxaco";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"mm", "me", "uy", "dp", "qe", "fk", "je", "zl", "oh", "qr", "th", "zu", "by", "wz", "or", "er", "pc", "zf", "us", "os", "se", "kk", "ly", "or", "bi", "py", "rj", "ud", "bi", "dc", "vf", "qz", "tu", "nw"};
    string candidate = "ii";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"mdda", "ktua", "odsj", "aakk", "peef", "fmcg", "pcrp", "yikd", "mfup", "nfrt", "nvpw", "ioxy", "xtht", "ynyb", "dmmz", "vhxx", "wsjz", "qxnq", "oqtv", "atsq", "ruuc", "akfr"};
    string candidate = "mqda";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dictionary = {"ietcbyn", "cqkjdxw", "ihqvgon", "rrsgzry", "orcgvcj", "xsqsufg", "vpcckoe", "mowwqxo", "bmrhbac", "qredboc", "pcaqqyh", "vymszdy", "zlgdmwl", "bjjadjn", "zbavobm", "tnxmjza", "tpezatd", "qxxmyla", "rybpgpa", "plsoybu", "kfpbafi", "bsufquk", "pwlpnff", "rjwmcuw"};
    string candidate = "ietchnn";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dictionary = {"zhadjsg", "vzptftx", "fbaslxs", "ejejncm", "xpxkeae", "ixrrtzw", "ovctbzx", "sfzekhh", "lxzixjk", "jixdpik", "bkianck", "laclyin", "uqmdkfx", "dimswqo", "fojhetr", "grntrce", "obdtqwx", "bhojwcy", "zuuuvst", "mvqtoly", "aftmupx", "govuidx", "qklpret", "yptccki", "uxdnslh", "wudrusz", "uwxbvou", "ouytqun", "pjdexqe", "xraaqdw", "lxmoncl", "sjnjfgb", "qrlqgvc", "fgvoadm", "yohsrxw", "udpvrsr", "mklucgt"};
    string candidate = "vklikgf";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"qeww", "nhvs", "qlot", "mxov", "rago", "ttxt", "cddi", "xwjj", "sjyh", "ewhk", "xigp", "lgge", "vwjs", "eiss", "natd", "xnug", "epqv", "nyfy", "dkvs", "qxwt", "ecos", "pwsy", "pwhf", "htnz", "lhhc", "qdwu", "rhcu", "cfmy", "mtwl", "aeor", "aanj", "spjf", "rkxq", "osmd", "dybv", "pnip", "fgng", "fxoy", "mcpa", "zfzc", "smne", "yjgt", "fpzi", "vulm", "ylcd", "hdst", "utus", "rrdm"};
    string candidate = "cwgj";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dictionary = {"bzxldnnx", "pcvbjpsn", "jtehowcp", "zlvrqwdh", "oytrbokn", "azogglah", "udghslyc", "nlritiob", "zjstxaof", "ysghzwif", "ojxyyhzg", "viwjffvq", "xuobtpva", "tcwtssed", "agaqrdsp", "murzggym", "ielvhmrk", "llcgogzf", "fhlcygtp", "emxgdghw", "yuwkwrpo"};
    string candidate = "oymrbeka";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"fbgmh", "hfemy", "pisxc", "fpbud", "sqglo", "bmzvv", "flnsw", "mqxuc", "jtekj", "bhrbk", "ifjpg", "hpqty", "ognzq", "eaqkw", "lsyjm", "mvqsq", "tsrsi", "rdvtn", "mtrxp", "bhfnj", "skhxw", "iqwuu", "wzxqf", "uvxva", "ijykt", "fjocx", "pzvup", "wvjcu", "hebbe", "lgxue", "afpgv", "rpbbc", "uzuti"};
    string candidate = "qfcmy";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"qwjecwfm", "mffdrvqj", "warqpoly", "aivyzqwd", "qpyhxajo", "itfcvmop", "impxrlka", "ieioumpn", "xsabcpgv", "hhljebzy", "nsdercma", "ixbniqri", "emdhoqfq", "njquxlea", "migiacww", "mbnsjuja", "lkxxpvhu", "irpueiyk", "irekzgfg", "beaaduum", "wyhaehmx", "fngjxnty", "dvsjeyou", "ppnbvrps", "iscudrtb", "ueebjfhe", "buihmnhw", "imedvxam", "qmwwroup", "ehpkrihe", "mlgvfoge", "xqahosmx"};
    string candidate = "msfereqi";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"sajwpp", "tkazqr", "fffvry", "syvbdj", "nedjsa", "mhxjdp", "hxfjuv", "intkur", "untgxb", "criygm", "xglybf", "ihlnch", "auotob", "mxbptx", "hxonsy", "uzufen", "sqqwzb", "pwgggp", "coyiru", "odlhhz", "glmbqa", "jlgczo", "umevvt", "adjimo", "lixkbv", "otcbfc", "xqxror", "ihagvg", "oeuxjc", "gaskrf", "lvsuer", "woaehz"};
    string candidate = "qaalvg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"blm", "phx", "lkk", "cjc", "rpr", "wzm", "ruh", "rdh", "rwt", "pnj", "dwq", "yqe", "ytr", "zgf", "jya", "wmg", "vkt", "nmf", "tzs", "osw", "wvm", "rpx", "nyn", "xlq", "tnz", "oam", "mxf", "pmg", "jwh", "vbm", "iis", "kyu", "etn", "msz", "mqm", "oxj", "fes", "suv"};
    string candidate = "gqv";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"jomz", "vwxw", "mone", "kkhm", "gzcb", "tcvg", "nnod", "wglu", "yikd", "topv", "yhti", "ljjs", "haqm", "nrsp", "vokg", "xzim", "bnho", "hfio", "nkjd", "lerd", "gtfz", "pbbl", "hwzq", "amtr", "pvrw", "fegx", "rzrf", "dzrk", "fjom", "clpt", "tekb", "ftta", "ffzu", "aiur", "ymgg", "uwla", "ukst"};
    string candidate = "ksrv";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"gd", "qc", "ko", "td", "gc", "qo", "gr", "hz", "tc", "yb", "zo", "rd", "eb", "im", "vh", "wp", "tp", "ds", "dl", "de", "gq", "ht", "uu", "hb", "ys", "kx", "kd", "gw", "dd", "gq", "cu", "cq", "xb", "om", "ey", "sh", "ee", "li", "yn", "vo", "kd", "hi"};
    string candidate = "lm";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"sa", "ku", "wj", "ot", "ds", "nj", "ks", "fb", "xn", "rj", "bt", "uv", "di", "ax", "jx", "sr", "aa", "bi", "xf", "mq", "fn", "gh", "xl", "so", "ea", "jk", "vr", "sx", "re", "lh", "zx", "dy", "xg", "cq", "dq", "qe", "ep", "ba", "xj", "ky", "ol", "rx", "th", "oy", "vq", "ix", "lq", "nz", "je"};
    string candidate = "nq";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"kwykmiv", "eshzxxe", "alxrgcn", "ldfixnz", "upczbsd", "odukcou", "tkxirbm", "ycwnudn", "ngdbtlf", "eyvtqkt", "oghtwjc", "oishzbc", "oergumy", "ydmvtoz", "frcdzwf", "xpyazdf", "jjhtkry", "jfyfqla", "kzusspy", "apswbqe", "trqqlre", "sqtqpmy", "wuythqc", "htphgwm", "yypiwpa", "hzmsnei", "ivxnkhd"};
    string candidate = "ypyzzpf";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dictionary = {"iwwdsbkg", "vierzvvk", "wqmapzop", "dsxsknpu", "utrassva", "qlbaszku", "oaqxszyh", "tfpesqny", "fkqepaps", "qqoqtklv", "fphtxhkj", "qvyamkhl", "owptsyxu", "yrrgggii", "anndjrss", "xcajcopy", "ythkuhlz", "dkczjyfx", "cwgkybdk", "qcopzcrz", "catntuff", "aafwffsv", "sbsjyshl", "ofxybmyz", "tqxjufde", "feaiuvts", "pdsnvbub", "ajuxsdhk", "hhckpsls", "dcluoijt", "cpztxkza", "mmiusgjp", "tsjdtkel", "pqhqdieb", "exbhjfim", "ppdvzxfs", "sizvmsev", "enlfrclo", "jvrjuutr", "oootnowp", "kpfzrwzg", "jgdrevyf", "ykpckehl", "awclgiha", "gdzcluge"};
    string candidate = "dokcjygd";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"vgl", "rhf", "hnq", "mbp", "qzm", "vyt", "jop", "ttg", "rqo", "oba", "xhw", "ope", "oro", "div", "fvm", "hwo", "xpg", "iws", "rgl", "ugv", "ehl", "xdq", "tts", "ijf", "gca", "hrx", "fuy", "rwj", "hgv", "jzc"};
    string candidate = "lch";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"dkylgdk", "tyclazv", "ictnrxs", "dtkjbnd", "zxhkwlu", "oggpcve", "raxxoav", "lqkiflw", "jjtkvij", "qlboidw", "bldvmgp", "qodkolt", "dobnxuk", "jdpvjps", "obeolcf", "owquaec", "vtrugbq", "xlooinv", "kqyhmpa", "ueyvovq", "mqoljly", "kiuwlln", "inaulgh", "kesudfr", "eilzdqy", "xxhjcla", "umvgkgu", "npfzazq", "hykipfd", "mlttaxe", "egfqgxl", "bbhxrcj"};
    string candidate = "fyeorsl";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"adklnswy", "qijlemsy", "prlumzys", "mruptofh", "vrvjgcxk", "jzjdjctj", "bmskntnr", "rwswpoqj", "yeqwthbq", "xhrkwbep", "zchiawma", "kdqyrbpz", "bsvdvuvm", "aoydmvwk", "cqopwfyz", "ooppwejl", "jaxeafqw", "fntthbrn", "qfdcvjho", "asyfsnyl", "htkkyexo", "xxcvqffn", "cftyyjlz", "ymgntenx", "hjsbpotd", "aukotrzl", "nyaygfbk", "vshhtgif", "ddjoxulg", "gpjtgvpo", "excnxbdi", "orioewpx", "upjbbekp", "qsarffxu", "wdniywxa", "diyluont"};
    string candidate = "jaxemfqc";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"flshsin", "sshzsfl", "ftpmdxi", "fugvsfl", "odmyzhi", "lgjsyhw", "bhifilq", "dchdcfn", "pvqxtql", "ddlrnnw", "gpvdmzc", "mwalbhb", "zsdnpaz", "qnuzcbt", "vecalpb", "vrygctn", "gwnehdq", "fnzrijl", "egpljgz", "kgbbuew", "zxqrufh", "yohqsas", "wdvqtyz", "fjuucln", "kwxybno", "nxnrmrd", "sfqoyvq", "pttmgbo", "ohsfowu", "ijurgro", "vhdgoll", "vmwbulf", "cgkdffu", "utddxur", "spkscnv", "ruezjvg", "iuwtxhu", "dcoqyzf", "pzlvedg", "kfhpaft", "mikdckw", "pzqgzkf"};
    string candidate = "igokhbg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"wxcnwiis", "itbtvmnp", "aythipnc", "kcarboch", "eudxohxb", "odyuakyg", "ahtlqelx", "ytjnnnpx", "legiltkj", "kbplewxu", "auuegqtk", "nbbopmkw", "brclyrxx", "abqjixfr", "tnvcqibz", "zqjaarjs", "gjothkav", "ftwiuoih", "rtvruyfu", "ackzhxrl", "nakxkbxl", "tnwdosjt", "uifrsbdi", "illcgqgd", "pfjvtkne"};
    string candidate = "xckzqxrl";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"ggg", "xva", "upo", "rvj", "zto", "jmm", "upe", "csv", "bkg", "rqs", "ngd", "qgt", "nsi", "eyg", "jhv", "fjl", "xua", "kkx", "eyz", "yim", "szq", "hiq", "yvc", "yde", "ebk", "tfl", "ffl", "uft", "sgj", "bqg", "ypk", "jpu", "atv", "brl", "nyh", "iup", "ecz", "ers", "omb", "ifl", "ogi", "sak", "lnh", "gvi", "vmc", "rzg", "oex", "fhz", "blh", "xad"};
    string candidate = "bkg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"kxymh", "tgdhu", "fiidb", "ycteu", "xsgvr", "ghdpv", "vejas", "wcqdx", "mscmk", "qsoub", "bbvbj", "rynys", "ldler", "qtawt", "aouna", "ymhgn", "ewnyw", "edddc", "hlhpa", "mmbtc", "cyeas", "qaphi", "vzccv", "ykluq", "iiwdf", "wfess", "lygjq", "vjsbt", "uzist", "jzgjc", "drpcn", "jcmte", "kilbj", "synpc", "hnbho", "vkeeo"};
    string candidate = "yepal";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"dblq", "wqtz", "geer", "zxkc", "hcrv", "ogqd", "tzpz", "qrzi", "acbf", "bdnf", "dlho", "owlp", "ekvr", "deka", "kmmi", "vcnf", "xlmu", "ooki", "rscd", "ivmk", "wmub", "vink", "pgrf", "paxz", "aqcy", "ncfh", "hgti", "vjgf", "petb", "dvjs", "qbaq", "bczi", "hqfi", "gjui", "qdvg", "bkhi", "bzwk", "ggqc", "strt", "lhee", "glms"};
    string candidate = "dbut";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"rfv", "nvu", "bwf", "asd", "akt", "ybu", "srk", "bld", "dwe", "ofl", "brg", "uyz", "kdj", "ngx", "pph", "vjb", "hdj", "dco", "bkb", "byh", "bfz", "dgh", "gif", "vid", "zlr", "xcl", "xtz", "sxt", "kys", "tmb", "qgg", "rle"};
    string candidate = "bfr";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"jg", "xw", "ow", "hu", "pi", "ii", "rk", "vs", "th", "eu", "qc", "nv", "kq", "sn", "is", "li", "cn", "kd", "ko", "mr", "lk", "hn"};
    string candidate = "vg";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"ir", "ns", "ro", "cb", "cl", "ta", "xw", "ny", "pf", "vq", "nk", "fd", "ah", "zs", "zp", "mh", "fl", "cl", "yq", "vz", "ek", "qb", "ol", "ph", "tq", "dl", "sf", "tt", "mp", "mz", "ps", "cz", "tr", "zl", "gj", "qq", "uk", "ii", "ap", "ga"};
    string candidate = "gy";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"dv", "aj", "rc", "rb", "bk", "cg", "za", "ll", "rd", "vn", "cs", "qb", "wf", "ui", "ka", "vq", "qy", "zy", "nb", "pv", "pb", "wi", "et", "rl", "fh", "eh", "qz", "lk", "aw"};
    string candidate = "rf";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"kv", "jr", "pq", "as", "sr", "ob", "wv", "zd", "jk", "oc", "rc", "ym", "tx", "ub", "td", "hu", "an", "hs", "zr", "cn", "cf", "bc", "wi", "zc", "nx", "gd", "ei", "mc", "pb", "zs", "by", "hg", "cj", "jc", "hz", "aj", "aj", "hi"};
    string candidate = "zv";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"fqhdwst", "gpetvkx", "cxkwhsi", "mdncppx", "mpdzvju", "agjezkk", "cjclubg", "mvfisln", "jicntqk", "ocgcxsk", "cedpkol", "otgkobz", "vlbznpj", "bggwenl", "yycjtpa", "dcddqog", "hmovvsz", "jdcdawf", "ebobsmk", "uxnyirq", "cubygfs", "imfyuao", "ecxqbgs", "kuscepq", "aoevabq", "vgychuo", "taeupcx", "smjbznd", "qiydbvm", "bddwtlh", "tndqjwc", "wvcqrxq", "vdnpniw", "ymdjftu", "bbmzzfw"};
    string candidate = "aglamkc";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"ldxzxvzz", "iiihfmwt", "ozmhcmxp", "fiofrzaw", "qcthqnxh", "dvmxzwxa", "nqszmaqj", "jkhdmase", "rcywawee", "yuqtezzd", "pnuqypsl", "zevrqgbf", "wbjniifd", "yzwdsdua", "btfowdjh", "cnweflhq", "ssdkfhqv", "ldleybci", "qcyaolfv", "xwccsclz", "tpswezoi", "szgqegoa", "glbnevbd", "rxixkvqh", "amwtplwp", "nhkvqvli", "apgdspug", "hrjdvvkh", "ofahkhsj", "bealcxxd", "qoqgkmwq", "yunavyxz", "lmshzqoq", "aomxyibm", "pqhomyjb", "neodmvee", "fbctjxhb", "dbidkxph", "fotfrats", "tvgmmnad", "vittbcub", "yqebqred"};
    string candidate = "evkvqslw";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"gi", "di", "fq", "af", "zg", "ne", "ux", "cu", "gf", "hd", "uy", "gc", "nd", "am", "pr", "dv", "dp", "cc", "tn", "nb", "cp", "cx"};
    string candidate = "hi";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"dzfiqak", "sfljfvu", "gjeaoda", "tzbrrlb", "eqpwoko", "xkfcdsz", "tvbkmhr", "hblgoai", "hynpltf", "nboqdfq", "osgimgd", "viddysi", "armfnrx", "idqwtwj", "flqpicw", "lakpwyr", "vddyvzk", "yhegnpu", "lbrvhwt", "ppxldce", "ujvndmt", "nwivwau", "wxgglux", "iozzrbj", "jiucgrj", "fdbuxnz", "crqnait", "mrtbyic", "finelwg"};
    string candidate = "wxgwlgs";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"dovvda", "ruzrdf", "crozgn", "nklymo", "pbgvkk", "eectyf", "drmgce", "zdphfw", "rrbumu", "sfmsqd", "sihado", "fzlpcq", "vyzebm", "kvbmfp", "hnelkl", "qqtkdb", "ywmmml", "omwdke", "ybutfm", "opxqhb", "hwyxrn", "qztipa", "xuatfo", "mjweub", "bmydpu", "lqzmze", "delhuc", "dbtwqj", "jvjxwl", "rqhrdm", "enxxuo"};
    string candidate = "duxmdl";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "bic";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"zkv", "izs", "fed", "waa", "ttx", "bgt", "quy", "dtq", "dgo", "yrs", "cid", "nln", "pvz", "txt", "zun", "erd", "jen", "klh", "kxy", "emf", "mqt", "lza", "dzb", "ndx", "vfr", "jhs", "dkm", "elb"};
    string candidate = "cwd";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"zhadjsg", "vzptftx", "fbaslxs", "ejejncm", "xpxkeae", "ixrrtzw", "ovctbzx", "sfzekhh", "lxzixjk", "jixdpik", "bkianck", "laclyin", "uqmdkfx", "dimswqo", "fojhetr", "grntrce", "obdtqwx", "bhojwcy", "zuuuvst", "mvqtoly", "aftmupx", "govuidx", "qklpret", "yptccki", "uxdnslh", "wudrusz", "uwxbvou", "ouytqun", "pjdexqe", "xraaqdw", "lxmoncl", "sjnjfgb", "qrlqgvc", "fgvoadm", "yohsrxw", "udpvrsr", "mklucgt"};
    string candidate = "vklikgf";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "lag";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
    vector<string> dictionary = {"cat", "cab", "lab"};
    string candidate = "bic";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dictionary = {"abc", "abb", "def", "xyz"};
    string candidate = "aeb";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dictionary = {"zhadjsg", "vzptftx", "fbaslxs", "ejejncm", "xpxkeae", "ixrrtzw", "ovctbzx", "sfzekhh", "lxzixjk", "jixdpik", "bkianck", "laclyin", "uqmdkfx", "dimswqo", "fojhetr", "grntrce", "obdtqwx", "bhojwcy", "zuuuvst", "mvqtoly", "aftmupx", "govuidx", "qklpret", "yptccki", "uxdnslh", "wudrusz", "uwxbvou", "ouytqun", "pjdexqe", "xraaqdw", "lxmoncl", "sjnjfgb", "qrlqgvc", "yohurxw", "mklucgt"};
    string candidate = "vkmoncl";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dictionary = {"ba", "ab"};
    string candidate = "aa";
    grafixCorrupt* pObj = new grafixCorrupt();
    clock_t start = clock();
    int result = pObj->selectWord(dictionary, candidate);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5857&pm=2997
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
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
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef long long ii;
#define b2e(A) (A).begin(), (A).end()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{"; for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i]; os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
    //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class grafixCorrupt {
  public:
  int selectWord(vector <string> d, string candidate) {
    int best = 0, where = -1;
    for (int i = 0; i < d.si; i++) {
      int c = 0;
      for (int j = 0; j < d[i].si; j++) if (candidate[j] == d[i][j]) c++;
      if (c > best) best = c, where = i;
    }
    return where;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/