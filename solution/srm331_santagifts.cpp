/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7266
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

class SantaGifts {
public:
    vector<string> distribute(vector<string> gifts, int N);
};

vector<string> SantaGifts::distribute(vector<string> gifts, int N) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> gifts = {"ball", "plane", "robot", "puzzle"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball puzzle", "plane", "robot"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> gifts = {"ball", "plane", "robot", "puzzle", "bike"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane robot puzzle"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> gifts = {"ball", "ball", "plane", "plane"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane", "ball plane"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> gifts = {"ball", "plane", "robot"};
    int N = 5;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball", "plane", "robot", "", ""};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> gifts = {"dsoggb", "zep", "ldxkwwjg", "erkbrzb", "jrrmwxcbzk", "noihltl", "jhdq", "orvustvqqr", "nyliepmu", "shko", "bwc", "fwfnjkw"};
    int N = 33;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dsoggb", "zep", "ldxkwwjg", "erkbrzb", "jrrmwxcbzk", "noihltl", "jhdq", "orvustvqqr", "nyliepmu", "shko", "bwc", "fwfnjkw", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> gifts = {"wpxcd", "a", "mscxss", "ev", "exzu", "sgaip", "yebflruc", "ncgm", "ziz", "hnapkdzzb", "fl", "wreflfcmaa", "xu", "ctmh", "auschumk", "us", "ezqeba", "rh", "wakkobblp", "bjtxbcyljo", "hazabokjl", "nlwuij", "gpcchgv", "apamrooano", "hs", "lc", "kswamxth", "b", "gzy", "pj", "ovgcxx", "krlg", "lmvq", "rrltsffit", "wpniite", "phgbdrsqn", "id", "aqyxtah", "ukjwvigwjp", "w", "jyfokz", "njnguc", "iukkjnb", "jqlr", "wsjtzfcljh", "fcspus", "tkbahcof", "fyhxo", "ddjghmy", "h"};
    int N = 45;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wpxcd fcspus", "a tkbahcof", "mscxss fyhxo", "ev ddjghmy", "exzu h", "sgaip", "yebflruc", "ncgm", "ziz", "hnapkdzzb", "fl", "wreflfcmaa", "xu", "ctmh", "auschumk", "us", "ezqeba", "rh", "wakkobblp", "bjtxbcyljo", "hazabokjl", "nlwuij", "gpcchgv", "apamrooano", "hs", "lc", "kswamxth", "b", "gzy", "pj", "ovgcxx", "krlg", "lmvq", "rrltsffit", "wpniite", "phgbdrsqn", "id", "aqyxtah", "ukjwvigwjp", "w", "jyfokz", "njnguc", "iukkjnb", "jqlr", "wsjtzfcljh"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> gifts = {"se", "ffnjbrufvd", "hssk", "vfm", "podwi", "tgylbl", "bjjdeo", "aifmneqdi", "j", "wamwziijlw", "hpzyrx", "x", "koi", "ngiksyhije", "e", "ktlc", "scsb", "puedqxwew", "uoqlaoygnt", "yfxna", "xgivfzddfa", "fs", "ueteux", "puzdr", "xfnex", "ubqffv", "aviwimdblj"};
    int N = 32;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"se", "ffnjbrufvd", "hssk", "vfm", "podwi", "tgylbl", "bjjdeo", "aifmneqdi", "j", "wamwziijlw", "hpzyrx", "x", "koi", "ngiksyhije", "e", "ktlc", "scsb", "puedqxwew", "uoqlaoygnt", "yfxna", "xgivfzddfa", "fs", "ueteux", "puzdr", "xfnex", "ubqffv", "aviwimdblj", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> gifts = {"ftzwzmkafo", "qkpnvzwty", "ye", "vlbwtjj", "x", "wkxamnjtj", "zbgnrj", "zx", "wmme", "lezgvg", "nukumwvd", "o", "i", "nvqm", "kqsb", "nnmtjrhlj", "o", "cjzv", "bmzhneqa", "jnvnkmizaw", "ioscdrhgnp", "ualcddon", "gqyserm", "nvhpn", "ddjcvqk", "ozwvmaw", "srabezq", "fjc", "j", "nuhagvii", "dlnbbdtu", "ds", "pnksuinwfs", "dtsgastwlz", "hcdxxwx", "uqfvheiedx", "bllnebn", "dpccg", "xxfzjeg", "s", "fexidn", "guvzfrob", "vmsvtzy", "fqiribbvbw", "dymmofpyn", "lbgwruqw", "ltbymv"};
    int N = 45;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ftzwzmkafo lbgwruqw", "qkpnvzwty ltbymv", "ye", "vlbwtjj", "x", "wkxamnjtj", "zbgnrj", "zx", "wmme", "lezgvg", "nukumwvd", "o", "i", "nvqm", "kqsb", "nnmtjrhlj", "o", "cjzv", "bmzhneqa", "jnvnkmizaw", "ioscdrhgnp", "ualcddon", "gqyserm", "nvhpn", "ddjcvqk", "ozwvmaw", "srabezq", "fjc", "j", "nuhagvii", "dlnbbdtu", "ds", "pnksuinwfs", "dtsgastwlz", "hcdxxwx", "uqfvheiedx", "bllnebn", "dpccg", "xxfzjeg", "s", "fexidn", "guvzfrob", "vmsvtzy", "fqiribbvbw", "dymmofpyn"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> gifts = {"hbitdpfvs", "ckakqgql", "fduwmqrvl", "aiwbzydd", "srf", "cfnfvadm", "nbx", "rwk", "rdlvh", "zgnllehakv", "clisriubgq", "fz", "xo", "btirwhvmk", "sq", "m", "fwqdoavlvr", "lgwrhma", "e", "rrqivwl", "z", "nxhcnd", "dneqai", "xyhvqb", "djthbyjw", "ozxtglwlzu", "pisukyikz", "pvebse", "xpvlpu", "j", "dijl", "yieyynbpab", "fnepeg", "yvjvpdk", "bvqfgh", "uczm", "bldqai", "mvirs", "m", "yvy", "cuc", "ipqdodyv", "uaglm"};
    int N = 4;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hbitdpfvs srf rdlvh xo", "ckakqgql cfnfvadm zgnllehakv btirwhvmk", "fduwmqrvl nbx clisriubgq sq", "aiwbzydd rwk fz m"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> gifts = {"smzldh", "bmix", "zyoytx", "ylaloprus", "nlwywn", "mqsicmjzqs", "go", "ypbpajmd", "aetkbzd", "vqcsurszp", "kfaph", "n", "ak", "boaqw", "txcryhwl", "ydautpycvi", "ayzjhydo", "tnxdmhjqz", "xps", "knpg", "dc", "qwcgntulan", "uexhwuino", "whqqqzbl", "mr", "serohrzl", "mqm", "qtifyqzpn", "sn", "yy", "e", "vfhg", "j", "jrm", "bbmjmeh", "p", "esqenggott", "ryfjb", "a", "f", "wbadddbh", "knqmtu", "amaepqnau", "hgntof", "cjlhjt", "fxg", "rtlwne", "tn"};
    int N = 34;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"smzldh bbmjmeh", "bmix p", "zyoytx esqenggott", "ylaloprus ryfjb", "nlwywn a", "mqsicmjzqs f", "go wbadddbh", "ypbpajmd knqmtu", "aetkbzd amaepqnau", "vqcsurszp hgntof", "kfaph cjlhjt", "n fxg", "ak rtlwne", "boaqw tn", "txcryhwl", "ydautpycvi", "ayzjhydo", "tnxdmhjqz", "xps", "knpg", "dc", "qwcgntulan", "uexhwuino", "whqqqzbl", "mr", "serohrzl", "mqm", "qtifyqzpn", "sn", "yy", "e", "vfhg", "j", "jrm"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> gifts = {"yzqmfpc", "vfgegz", "xrlojwnqo", "izacoofnd", "ybg", "adwf", "grgyctv", "kcdqvuwpx", "tddgfdpqj", "hcaarobh", "ntseh", "vnnri", "q", "llkuwqakm", "ouaxqxumgl", "qofjzzxzxw", "jkbkajfpq", "kxv", "rmlmccdkl", "ponqxaifr", "vbnc", "q", "qhvhtypilj", "pwvrpw", "rvbjj", "ai", "anyvbrv", "l", "sqpmsp"};
    int N = 50;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yzqmfpc", "vfgegz", "xrlojwnqo", "izacoofnd", "ybg", "adwf", "grgyctv", "kcdqvuwpx", "tddgfdpqj", "hcaarobh", "ntseh", "vnnri", "q", "llkuwqakm", "ouaxqxumgl", "qofjzzxzxw", "jkbkajfpq", "kxv", "rmlmccdkl", "ponqxaifr", "vbnc", "q", "qhvhtypilj", "pwvrpw", "rvbjj", "ai", "anyvbrv", "l", "sqpmsp", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> gifts = {"tqvmjctbx", "ibktrdd", "miq", "zatpwgiqxy", "aac", "f", "nsoqpyw", "c", "mvjvjfeve", "bhamfv", "phrhgjc", "bdhslowi", "busaumraq", "itjohjn", "srmsghrgdy", "wahxslhgxp", "tqeueokg"};
    int N = 44;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tqvmjctbx", "ibktrdd", "miq", "zatpwgiqxy", "aac", "f", "nsoqpyw", "c", "mvjvjfeve", "bhamfv", "phrhgjc", "bdhslowi", "busaumraq", "itjohjn", "srmsghrgdy", "wahxslhgxp", "tqeueokg", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> gifts = {"osybzsxsm", "xobsjtmcy", "pxejnihig", "vlee", "fb", "xmgtslqc", "geyuwfprru", "drrsgmx", "fknokqb", "swq", "rnhtnhqbx", "j", "zzlbhqxq", "dyqlsf", "abinbn", "xyu", "wcmszilb", "phigvp", "cw", "qvjpwfywl", "uuf", "umlf", "butmazgiis", "fp", "al", "oiah", "z", "f", "gz", "vdkmydsfa", "z", "rjyiw"};
    int N = 11;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"osybzsxsm j butmazgiis", "xobsjtmcy zzlbhqxq fp", "pxejnihig dyqlsf al", "vlee abinbn oiah", "fb xyu z", "xmgtslqc wcmszilb f", "geyuwfprru phigvp gz", "drrsgmx cw vdkmydsfa", "fknokqb qvjpwfywl z", "swq uuf rjyiw", "rnhtnhqbx umlf"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> gifts = {"dyanh", "edd", "vtr", "fptf", "htzyydgyf", "ror", "ed", "bs", "herskcc", "kjpxdfi", "nwm", "seqyoqcyt", "mq", "joqzgotzca", "lfgedrxppn", "lutgilpq", "ttqqdwr", "lrvywnngl", "pvlyxvhcr", "l", "diqyk", "r", "xzndsxo", "ufwhplykje", "zujdjvh", "jzxbsmiimg", "jog", "k", "uscj", "ofarcdia", "xcz", "vpljuhgyuq", "drdz", "tbedq", "belabnp", "ljfhimwpg", "dzptmrvj", "wjcrtz", "vfchaccjm"};
    int N = 19;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dyanh l vfchaccjm", "edd diqyk", "vtr r", "fptf xzndsxo", "htzyydgyf ufwhplykje", "ror zujdjvh", "ed jzxbsmiimg", "bs jog", "herskcc k", "kjpxdfi uscj", "nwm ofarcdia", "seqyoqcyt xcz", "mq vpljuhgyuq", "joqzgotzca drdz", "lfgedrxppn tbedq", "lutgilpq belabnp", "ttqqdwr ljfhimwpg", "lrvywnngl dzptmrvj", "pvlyxvhcr wjcrtz"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> gifts = {"aw", "p", "cfqqbm", "e", "yobx", "dfckppu", "eltskjsad", "ohslzfl", "bjragd", "szmr", "cxegsb", "lb", "qvyagwgq", "bnlnp", "bnpkjssc", "aj", "uwhftre", "aed", "i", "e", "wiam", "qpuwxxm", "qydwce", "gwshxi", "ibmp", "mxkmvngvrn", "uwuqjrftlz", "t", "gqmbk", "gy", "yp", "ztk", "mid", "kxwbssnmev", "zfqphu", "vk", "moydnperf", "s", "ynaenxxfw", "emfpl", "dnbsoe", "kivwapmgrc", "wcpr"};
    int N = 39;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aw emfpl", "p dnbsoe", "cfqqbm kivwapmgrc", "e wcpr", "yobx", "dfckppu", "eltskjsad", "ohslzfl", "bjragd", "szmr", "cxegsb", "lb", "qvyagwgq", "bnlnp", "bnpkjssc", "aj", "uwhftre", "aed", "i", "e", "wiam", "qpuwxxm", "qydwce", "gwshxi", "ibmp", "mxkmvngvrn", "uwuqjrftlz", "t", "gqmbk", "gy", "yp", "ztk", "mid", "kxwbssnmev", "zfqphu", "vk", "moydnperf", "s", "ynaenxxfw"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> gifts = {"nktphunw", "hum", "ayl", "smitr", "e", "rkwrxrfrrr", "eaut", "qpaegamwpa", "j", "miwofzo", "uxchrghx", "p", "ezdfcrgu", "m", "e", "oiooe", "jaj", "yrcw", "vgnedfexx", "zlwptrofg", "dzmmqt", "vxjjihyf", "ffxyau", "lm", "rlhprcfwo", "jinx", "gtagz", "zukcnfci", "wbxi", "qonhmysrxn", "y", "jgxqhtbu"};
    int N = 14;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nktphunw e wbxi", "hum oiooe qonhmysrxn", "ayl jaj y", "smitr yrcw jgxqhtbu", "e vgnedfexx", "rkwrxrfrrr zlwptrofg", "eaut dzmmqt", "qpaegamwpa vxjjihyf", "j ffxyau", "miwofzo lm", "uxchrghx rlhprcfwo", "p jinx", "ezdfcrgu gtagz", "m zukcnfci"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> gifts = {"rva", "hgtuvi", "axoalbbtw", "u"};
    int N = 16;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rva", "hgtuvi", "axoalbbtw", "u", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> gifts = {"fdekf", "fv", "wsgkrkaaj", "zsxh", "gxb", "olgiu", "ds", "huzojyi"};
    int N = 45;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fdekf", "fv", "wsgkrkaaj", "zsxh", "gxb", "olgiu", "ds", "huzojyi", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> gifts = {"zavob", "hdocak", "llgzmc", "qadlqdox", "tssfjz"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zavob", "hdocak", "llgzmc", "qadlqdox", "tssfjz", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> gifts = {"gnw", "rgbhfhrcja", "hiigyltqag", "jr", "yxfrlvenn", "kamyksjxq", "ibyyps", "omo", "ghqnnoiv", "wn", "pmdmskq", "ta", "fm", "qk", "trcvcthh", "rvjfdfazzk", "ljaxg", "hvhvrpettn", "guwrc", "vdiifetgq", "sidjxaraas", "dgmklcar", "soazjy", "phdbvlpkov", "mvshnrg", "gfcwaphuml", "xne", "aj", "fqnbjn", "fayhoakk", "khmub", "uur", "ejazw", "hunrvehlu", "qge", "umndnszaw", "iw", "spwvfzmlc", "guceedwmbb", "ybght", "ujrq", "vsrev", "nwsqj", "wmpjrhpk", "xqv", "fngp"};
    int N = 19;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gnw vdiifetgq guceedwmbb", "rgbhfhrcja sidjxaraas ybght", "hiigyltqag dgmklcar ujrq", "jr soazjy vsrev", "yxfrlvenn phdbvlpkov nwsqj", "kamyksjxq mvshnrg wmpjrhpk", "ibyyps gfcwaphuml xqv", "omo xne fngp", "ghqnnoiv aj", "wn fqnbjn", "pmdmskq fayhoakk", "ta khmub", "fm uur", "qk ejazw", "trcvcthh hunrvehlu", "rvjfdfazzk qge", "ljaxg umndnszaw", "hvhvrpettn iw", "guwrc spwvfzmlc"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> gifts = {"g", "csgvw", "ylxfdwbwc", "thvirljt", "nqzmevw", "yrvrfcqw", "sbhsnutf", "wkjuwxyfjg", "udpta", "daffdxnf", "wc", "uufx", "nsfdsen", "axbubdfk", "ii", "eumwvyzqe", "ee", "tpifarrvyc", "j", "xxkkf", "uddlim", "dqng", "jqn", "ppgrvbbfw", "ijzqxidi", "bguuf", "envfkigb", "zzzwidofqj", "eswdbed", "nbuloutm", "zvkfma", "heaxm", "oaffxop", "dswjg", "z", "wgqfvvfc", "uarftgwo", "m", "owzmgwp", "gxyukgkfkk", "gnwbkyb", "huq", "ncpgwc", "peyjtu", "semak", "apmcrjc", "h", "us", "cvpsbt"};
    int N = 48;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g cvpsbt", "csgvw", "ylxfdwbwc", "thvirljt", "nqzmevw", "yrvrfcqw", "sbhsnutf", "wkjuwxyfjg", "udpta", "daffdxnf", "wc", "uufx", "nsfdsen", "axbubdfk", "ii", "eumwvyzqe", "ee", "tpifarrvyc", "j", "xxkkf", "uddlim", "dqng", "jqn", "ppgrvbbfw", "ijzqxidi", "bguuf", "envfkigb", "zzzwidofqj", "eswdbed", "nbuloutm", "zvkfma", "heaxm", "oaffxop", "dswjg", "z", "wgqfvvfc", "uarftgwo", "m", "owzmgwp", "gxyukgkfkk", "gnwbkyb", "huq", "ncpgwc", "peyjtu", "semak", "apmcrjc", "h", "us"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> gifts = {"xyeyqqlg", "bgbfjmtww", "dtxha", "nxluulj", "vt", "skvrrmsjb", "dtl", "cusikmel", "nxwbgajtzs", "zyyi", "xrzuli", "tzmxx", "pyvvwjsbvq", "g", "oj", "ycpqibdj", "vaq", "rzag", "wj", "tvtaibul", "thuoa", "lfeh", "bjzbyqp", "n", "drnog", "l", "v", "opfo", "yzkaonk", "wpt"};
    int N = 14;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xyeyqqlg oj yzkaonk", "bgbfjmtww ycpqibdj wpt", "dtxha vaq", "nxluulj rzag", "vt wj", "skvrrmsjb tvtaibul", "dtl thuoa", "cusikmel lfeh", "nxwbgajtzs bjzbyqp", "zyyi n", "xrzuli drnog", "tzmxx l", "pyvvwjsbvq v", "g opfo"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> gifts = {"k", "ikxjsi", "jvvk", "eee", "ucwpjzwn", "oinxcihs", "atpaozq", "afwu", "zkk", "rudnulsre", "udyvgoi", "tvyfzlud", "klodoyv", "uzmyb", "gembmji", "iqjgk", "tklfkbfpj", "cj", "dbcyztawjh", "i", "c", "uas", "fheybmjr"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k uzmyb", "ikxjsi gembmji", "jvvk iqjgk", "eee tklfkbfpj", "ucwpjzwn cj", "oinxcihs dbcyztawjh", "atpaozq i", "afwu c", "zkk uas", "rudnulsre fheybmjr", "udyvgoi", "tvyfzlud", "klodoyv"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> gifts = {"fj", "bggqmsx", "ntntbckit"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fj", "bggqmsx", "ntntbckit", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> gifts = {"a", "ohkryg", "l", "s", "qb", "v", "fdvkdwqid", "scoplep", "bqnwapkr", "ehxtyze", "iulqtk", "viqpgwn", "shyok", "dntphrgbfd", "zm", "thximg", "h", "zj", "awn", "jjcpp", "gcc", "gmcorfcv", "qhjw", "ybxxuylt", "wosrguk", "o", "zfzl", "ldidr", "ghbg", "oob", "ulw", "dnon", "o", "mts", "mx", "ndil", "gkvyzsyf", "nww", "esvwsor"};
    int N = 10;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a iulqtk gcc ulw", "ohkryg viqpgwn gmcorfcv dnon", "l shyok qhjw o", "s dntphrgbfd ybxxuylt mts", "qb zm wosrguk mx", "v thximg o ndil", "fdvkdwqid h zfzl gkvyzsyf", "scoplep zj ldidr nww", "bqnwapkr awn ghbg esvwsor", "ehxtyze jjcpp oob"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> gifts = {"xpuu", "ulzpyo", "hptnzumqm", "ldofx", "pcjlqk", "cj", "qv", "uatlxbe", "tpxqjmnsq", "cpiejd", "ccgpsqxxq", "ji", "awgjw", "lynpsw", "tcbxgvso", "udrxvyir", "ewv", "hhad", "kpaj", "fcukmnj", "enehz"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xpuu hptnzumqm pcjlqk qv", "ulzpyo ldofx cj uatlxbe"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> gifts = {"bltfyd", "eonokb", "tztbwtri", "fcqa", "xqgxrbgcf", "miumbqs", "ztdzcoabd", "xzdcnmd"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bltfyd fcqa ztdzcoabd", "eonokb xqgxrbgcf xzdcnmd", "tztbwtri miumbqs"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> gifts = {"cecktqunt", "j", "koidq", "jmkw", "qrocawnnbv", "koko"};
    int N = 44;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cecktqunt", "j", "koidq", "jmkw", "qrocawnnbv", "koko", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> gifts = {"da", "mf", "fld", "upzei", "opoqtfy", "gkioxbenbl", "ina", "kmwx", "szjrlf", "i", "sedsod", "grku", "mbj", "ifllanr", "ixntlwie", "ezzefnj", "twhh", "yqjrf", "znhc", "foqpdhvdb", "lgkkypxm", "mc", "a", "pxino", "hufb", "u", "aqekcd", "gqfmipclkn", "cbjs", "ktshneotdn", "ut", "xjyxyfbewl", "vhnxt", "xruxm", "xwc", "uoavsa", "xipdz", "geuyec", "e", "vmoo", "divybtbl", "kecbu", "lk", "re", "ikuruyjn", "drzwfhsb", "dnyijsddp", "x", "px"};
    int N = 28;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"da cbjs", "mf ktshneotdn", "fld ut", "upzei xjyxyfbewl", "opoqtfy vhnxt", "gkioxbenbl xruxm", "ina xwc", "kmwx uoavsa", "szjrlf xipdz", "i geuyec", "sedsod e", "grku vmoo", "mbj divybtbl", "ifllanr kecbu", "ixntlwie lk", "ezzefnj re", "twhh ikuruyjn", "yqjrf drzwfhsb", "znhc dnyijsddp", "foqpdhvdb x", "lgkkypxm px", "mc", "a", "pxino", "hufb", "u", "aqekcd", "gqfmipclkn"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> gifts = {"sxuufue", "rvsbjmlm", "uhlzwzr", "rqpjcmif", "yadgd", "crzftp", "od", "tmey", "ssrvhnlgce", "bdu", "lcesvmtptm", "gacpyhqv", "dpwbycpvzs", "s", "uovtiz"};
    int N = 9;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sxuufue bdu", "rvsbjmlm lcesvmtptm", "uhlzwzr gacpyhqv", "rqpjcmif dpwbycpvzs", "yadgd s", "crzftp uovtiz", "od", "tmey", "ssrvhnlgce"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> gifts = {"yn", "g", "gl", "xaets", "gpxophwogl", "flankyq", "vawkqvypi", "yxqjwopjex", "ergbn", "jngysv", "rfb", "zhvodoh", "kmmfepy", "iobwp", "sdic", "ydccqzwxc", "xlmmu", "xxsbbb", "zlkopw", "xusw", "xtcomobgbr", "hbac", "vvqgfmylj", "njrbjksncs", "nghfridued", "ojmkzdfe", "jhzreybg", "jmigip", "ybelsgd", "oydzjfw", "xwh", "fledqvvmt", "mugzd", "y", "u", "yurkncr", "vail", "bhr", "azlx"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yn xaets vawkqvypi jngysv", "g gpxophwogl yxqjwopjex rfb", "gl flankyq ergbn zhvodoh"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> gifts = {"cucfxhnicy", "flwq", "nxwykercc", "hzgzu", "qxonmfzs", "m", "ftjkyklxg", "kciiubim", "spdxkngs", "mwem", "e", "cjwvmywhst", "f", "dytxjxqf", "wzjrsempk", "ojv", "pkoiqc", "vf", "cnsxunnjg", "iqj", "nmy", "dqvyphs", "r"};
    int N = 27;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cucfxhnicy", "flwq", "nxwykercc", "hzgzu", "qxonmfzs", "m", "ftjkyklxg", "kciiubim", "spdxkngs", "mwem", "e", "cjwvmywhst", "f", "dytxjxqf", "wzjrsempk", "ojv", "pkoiqc", "vf", "cnsxunnjg", "iqj", "nmy", "dqvyphs", "r", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> gifts = {"ujteao", "kcxywp", "gjb", "vlohkzoz"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ujteao", "kcxywp", "gjb", "vlohkzoz", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> gifts = {"qhilhjpfh", "mgtmpuocu", "yemdapld", "dzqmytldfl", "lsxvmuk", "inh", "nlyudrd", "wukq", "cl", "dlhbquezy", "w", "vu", "nbvw", "n", "gnfodcvpcc", "f", "hrwzc", "selhh", "latqghf", "hxc", "slni", "zf", "jjbghazjsc", "szmvzezc", "ge", "kiiv", "ajdp", "thbhdgauf", "h", "gch", "xizqqtjcy", "dt", "qxhcakysy", "wwmyzp", "gtqdqquvd", "dfzbzxfqkq", "f", "ug", "xbt", "dib", "msuzompjcr", "pezgkdgr", "n", "gasjv", "odmsqfk", "xyoub", "cwmqoxgji", "cqa", "ghask", "ncx"};
    int N = 37;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qhilhjpfh ug", "mgtmpuocu xbt", "yemdapld dib", "dzqmytldfl msuzompjcr", "lsxvmuk pezgkdgr", "inh n", "nlyudrd gasjv", "wukq odmsqfk", "cl xyoub", "dlhbquezy cwmqoxgji", "w cqa", "vu ghask", "nbvw ncx", "n", "gnfodcvpcc", "f", "hrwzc", "selhh", "latqghf", "hxc", "slni", "zf", "jjbghazjsc", "szmvzezc", "ge", "kiiv", "ajdp", "thbhdgauf", "h", "gch", "xizqqtjcy", "dt", "qxhcakysy", "wwmyzp", "gtqdqquvd", "dfzbzxfqkq", "f"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> gifts = {"vfqd", "dzoyjc", "v", "fcsfqifnh", "bv", "gitgupcu", "spqnfta", "snkugmwfex", "jvkxrdbkb", "igos", "g", "qhrjamn", "kb", "joazwv", "nxdfbopg", "xoqs", "wynmoj", "xsfqqwn", "ve", "efhkg", "wvdxteo", "pgslyszm", "rsouati", "tqfsma", "jwm", "n", "zfoiemi", "h", "by", "ggwqo", "jhzigvx", "gfvkpvtw", "n", "ndvqosis", "qd", "epywr", "cxrs", "dpapf", "ljav", "dcwynmj", "wogkvhj", "umbz", "hs", "zmsllt", "xb", "wxfdiiyik", "xwidut", "y", "jfcthyp", "slrhgwoo"};
    int N = 50;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vfqd", "dzoyjc", "v", "fcsfqifnh", "bv", "gitgupcu", "spqnfta", "snkugmwfex", "jvkxrdbkb", "igos", "g", "qhrjamn", "kb", "joazwv", "nxdfbopg", "xoqs", "wynmoj", "xsfqqwn", "ve", "efhkg", "wvdxteo", "pgslyszm", "rsouati", "tqfsma", "jwm", "n", "zfoiemi", "h", "by", "ggwqo", "jhzigvx", "gfvkpvtw", "n", "ndvqosis", "qd", "epywr", "cxrs", "dpapf", "ljav", "dcwynmj", "wogkvhj", "umbz", "hs", "zmsllt", "xb", "wxfdiiyik", "xwidut", "y", "jfcthyp", "slrhgwoo"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> gifts = {"glx", "j", "icsaifsc", "pj", "iimtyw", "bzllsw", "y", "su", "x", "p", "votp", "thvrdkdg", "kxj", "z", "xpogltoaz", "inhff", "ixordtaa", "iiwa", "tkucge", "ffgvbxunq", "r", "qwemw", "ehghdj", "hynvalamgn", "nerccpq", "bdmo", "wooyl", "qas", "cashl", "nv", "wqngudp", "mqvzxujq", "yvjxtvh", "daityur", "igoelf", "ndla", "x", "ppqn", "ktnko", "kcm", "rduk", "ie", "in", "joptpoz", "rwnqave", "yvbzq", "ttnbinp", "vsokfxlb", "wijp", "okjgxnzkc"};
    int N = 50;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"glx", "j", "icsaifsc", "pj", "iimtyw", "bzllsw", "y", "su", "x", "p", "votp", "thvrdkdg", "kxj", "z", "xpogltoaz", "inhff", "ixordtaa", "iiwa", "tkucge", "ffgvbxunq", "r", "qwemw", "ehghdj", "hynvalamgn", "nerccpq", "bdmo", "wooyl", "qas", "cashl", "nv", "wqngudp", "mqvzxujq", "yvjxtvh", "daityur", "igoelf", "ndla", "x", "ppqn", "ktnko", "kcm", "rduk", "ie", "in", "joptpoz", "rwnqave", "yvbzq", "ttnbinp", "vsokfxlb", "wijp", "okjgxnzkc"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> gifts = {"qtkvgokssw", "swyuwlodcp", "xzpocujwis", "tpahfqvioi", "fbwodjgpwt", "edwgncunre", "agnaiksxov", "yadunsgxhj", "nlxwbzxeuq", "oyfvifqzti", "lhchvwtnag", "sxbjrpotus", "tsdqkxjvkv", "fgtfmpdiwd", "qizkvhmcuy", "ncfugkqxvc", "ubnkgjykav", "mgdcoiwakg", "msoodijerl", "cidqhstfvz", "eumjaoqxsy", "genrhbhrjm", "rfotreflhx", "giuvxdtomb", "swbeldaaye", "rovpflliii", "zatskhbnbq", "qnvxmnvvkl", "sbbmwhwhro", "tbseyjhbkw", "asywtthett", "cafxwimcka", "wgrpnakxzy", "lmxzjjnpqq", "ejkntoxgfq", "tjsgkjlpjn", "qlnfohngnc", "cloxkauxac", "sbdqmmmiwk", "jmwnvmyycs", "jpipirfyca", "quipirdhmw", "xudfhotyqy", "xafzhalnqx", "nlxowexkxh", "dhevcxtnnq", "jyrcnbhbce", "rpjldpccju", "ahjloskzor", "afyacooayk"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qtkvgokssw fgtfmpdiwd zatskhbnbq jmwnvmyycs", "swyuwlodcp qizkvhmcuy qnvxmnvvkl jpipirfyca", "xzpocujwis ncfugkqxvc sbbmwhwhro quipirdhmw", "tpahfqvioi ubnkgjykav tbseyjhbkw xudfhotyqy", "fbwodjgpwt mgdcoiwakg asywtthett xafzhalnqx", "edwgncunre msoodijerl cafxwimcka nlxowexkxh", "agnaiksxov cidqhstfvz wgrpnakxzy dhevcxtnnq", "yadunsgxhj eumjaoqxsy lmxzjjnpqq jyrcnbhbce", "nlxwbzxeuq genrhbhrjm ejkntoxgfq rpjldpccju", "oyfvifqzti rfotreflhx tjsgkjlpjn ahjloskzor", "lhchvwtnag giuvxdtomb qlnfohngnc afyacooayk", "sxbjrpotus swbeldaaye cloxkauxac", "tsdqkxjvkv rovpflliii sbdqmmmiwk"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> gifts = {"jdswlrgaos", "kjgbxkpjie", "weypuvstme", "dicbykosdm", "qpwlagjwst", "bjvmcemnuj", "wryyodjviz", "xvlvencbrn", "iaiywrwgvf", "kcvwhikyzs", "ymdbhtcdad", "hxuwakpxxj", "ngrdfxcmrt", "vgpbpkknio", "fmpktnykyk", "fvsbrdtsto", "nlwefovdcg", "cwccuotswc", "prqicktdpn", "jsrrchsedg", "axlermprhk", "whssfoefkm", "jwyaadmyfq", "mwdynsojlj", "tlxjzcsxwp", "ivcgmkyfzo", "omenxbolcx", "bsdgkgbfne", "vlocaxzkkz", "bbbynjcrrs", "hwmsyswpgz", "xnmzkzshgq", "eepowpedbp", "fyjsfdlzkp", "otwlqwrdat", "etgwixnzrz", "grrrumrgsy", "alymkcuhyc", "auoxbsqnem", "qgmwwncxoi", "dfqwfuezky", "tmcamfihmu", "vmcfspayvn", "opuebpnxow", "vokulbahhf", "jfhxduqyhu", "lsxgodwpla", "arejmoxbqk", "ugyoslnfvr", "kyhtzfsqwv"};
    int N = 20;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jdswlrgaos axlermprhk dfqwfuezky", "kjgbxkpjie whssfoefkm tmcamfihmu", "weypuvstme jwyaadmyfq vmcfspayvn", "dicbykosdm mwdynsojlj opuebpnxow", "qpwlagjwst tlxjzcsxwp vokulbahhf", "bjvmcemnuj ivcgmkyfzo jfhxduqyhu", "wryyodjviz omenxbolcx lsxgodwpla", "xvlvencbrn bsdgkgbfne arejmoxbqk", "iaiywrwgvf vlocaxzkkz ugyoslnfvr", "kcvwhikyzs bbbynjcrrs kyhtzfsqwv", "ymdbhtcdad hwmsyswpgz", "hxuwakpxxj xnmzkzshgq", "ngrdfxcmrt eepowpedbp", "vgpbpkknio fyjsfdlzkp", "fmpktnykyk otwlqwrdat", "fvsbrdtsto etgwixnzrz", "nlwefovdcg grrrumrgsy", "cwccuotswc alymkcuhyc", "prqicktdpn auoxbsqnem", "jsrrchsedg qgmwwncxoi"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> gifts = {"e", "p", "l", "h", "u", "a", "c", "h", "k", "b", "n", "x", "v", "u", "j", "e", "t", "s", "k", "a", "u", "y", "v", "n", "e", "y", "n", "p", "c", "e", "a", "h", "d", "i", "j", "y", "x", "k", "c", "b", "h", "k", "t", "w", "g", "j", "g", "k", "q", "a"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e p l h"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> gifts = {"t", "f", "h", "n", "d", "p", "n", "d", "x", "t", "b", "e", "z", "y", "f", "l", "x", "a", "n", "i", "f", "d", "k", "b", "s", "o", "w", "t", "g", "y", "r", "n", "n", "a", "p", "z", "x", "d", "b", "l", "l", "x", "r", "b", "z", "s", "p", "a", "c", "g"};
    int N = 4;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"t d x z", "f p t y", "h n b f", "n d e l"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> gifts = {"b", "m", "b", "e", "z", "o", "l", "f", "p", "p", "x", "q", "y", "e", "d", "c", "l", "a", "q", "v", "a", "n", "x", "b", "n", "q", "z", "q", "d", "c", "v", "a", "g", "i", "r", "w", "k", "i", "a", "v", "z", "w", "z", "k", "h", "u", "i", "g", "w", "e"};
    int N = 7;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b f d n", "m p c x", "b p l b", "e x a n", "z q q q", "o y v z", "l e a q"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> gifts = {"f", "p", "o", "x", "m", "i", "m", "o", "l", "l", "b", "m", "g", "g", "j", "x", "j", "d", "x", "g", "r", "i", "s", "v", "n", "l", "a", "v", "i", "c", "b", "m", "g", "u", "o", "q", "d", "h", "n", "w", "l", "q", "v", "p", "r", "c", "o", "a", "k", "x"};
    int N = 10;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"f b r b", "p m i m", "o g s g", "x g v u", "m j n o", "i x l q", "m j a d", "o d v h", "l x i n", "l g c w"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> gifts = {"i", "f", "f", "u", "z", "w", "q", "n", "v", "x", "f", "o", "t", "h", "b", "n", "r", "e", "f", "m", "d", "c", "z", "r", "r", "s", "n", "n", "s", "l", "h", "c", "j", "g", "v", "n", "c", "x", "j", "g", "e", "p", "e", "t", "o", "x", "l", "e", "j", "k"};
    int N = 13;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"i h n g", "f b n e", "f n s p", "u r l e", "z e h t", "w f c o", "q m j x", "n d g l", "v c v e", "x z n j", "f r c k", "o r x", "t s j"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> gifts = {"m", "z", "y", "k", "t", "w", "x", "e", "u", "d", "s", "g", "l", "h", "u", "n", "f", "f", "t", "t", "o", "f", "i", "v", "a", "f", "f", "g", "g", "h", "p", "v", "d", "y", "p", "j", "w", "e", "h", "c", "s", "c", "c", "e", "r", "d", "u", "g", "c", "z"};
    int N = 16;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"m f d c", "z f y z", "y t p", "k t j", "t o w", "w f e", "x i h", "e v c", "u a s", "d f c", "s f c", "g g e", "l g r", "h h d", "u p u", "n v g"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> gifts = {"c", "n", "e", "j", "v", "k", "g", "l", "y", "n", "p", "g", "e", "v", "h", "y", "y", "p", "o", "n", "v", "y", "x", "o", "y", "e", "k", "m", "e", "k", "q", "v", "h", "c", "r", "j", "e", "r", "m", "f", "a", "x", "q", "a", "o", "a", "l", "e", "c", "u"};
    int N = 19;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c n m", "n v f", "e y a", "j x x", "v o q", "k y a", "g e o", "l k a", "y m l", "n e e", "p k c", "g q u", "e v", "v h", "h c", "y r", "y j", "p e", "o r"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> gifts = {"b", "f", "x", "f", "o", "w", "p", "q", "l", "v", "c", "k", "e", "i", "v", "f", "u", "d", "d", "g", "k", "k", "a", "f", "r", "e", "o", "w", "h", "h", "d", "e", "a", "t", "z", "j", "h", "w", "i", "x", "x", "o", "r", "f", "v", "h", "c", "v", "q", "r"};
    int N = 22;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b a v", "f f h", "x r c", "f e v", "o o q", "w w r", "p h", "q h", "l d", "v e", "c a", "k t", "e z", "i j", "v h", "f w", "u i", "d x", "d x", "g o", "k r", "k f"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> gifts = {"g", "l", "i", "p", "j", "e", "b", "j", "h", "s", "v", "j", "s", "r", "y", "h", "i", "b", "f", "d", "u", "t", "b", "o", "n", "o", "l", "c", "d", "w", "e", "s", "d", "s", "l", "d", "b", "s", "x", "d", "x", "p", "s", "k", "x", "o", "w", "c", "p", "i"};
    int N = 25;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g o", "l l", "i c", "p d", "j w", "e e", "b s", "j d", "h s", "s l", "v d", "j b", "s s", "r x", "y d", "h x", "i p", "b s", "f k", "d x", "u o", "t w", "b c", "o p", "n i"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> gifts = {"l", "i", "l", "p", "t", "o", "a", "i", "u", "h", "h", "z", "z", "k", "y", "k", "f", "y", "j", "k", "d", "s", "s", "v", "g", "r", "s", "y", "x", "i", "h", "o", "w", "e", "z", "p", "l", "v", "b", "w", "w", "v", "r", "t", "w", "z", "b", "l", "q", "k"};
    int N = 43;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"l t", "i w", "l z", "p b", "t l", "o q", "a k", "i", "u", "h", "h", "z", "z", "k", "y", "k", "f", "y", "j", "k", "d", "s", "s", "v", "g", "r", "s", "y", "x", "i", "h", "o", "w", "e", "z", "p", "l", "v", "b", "w", "w", "v", "r"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> gifts = {"i", "y", "l", "d", "o", "e", "g", "v", "i", "u", "s", "p", "q", "t", "c", "o", "n", "d", "w", "l", "o", "s", "b", "o", "e", "z", "b", "r", "g", "q", "o", "x", "b", "h", "d", "f", "x", "m", "u", "s", "v", "e", "w", "x", "n", "m", "u", "r", "d", "p"};
    int N = 46;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"i u", "y r", "l d", "d p", "o", "e", "g", "v", "i", "u", "s", "p", "q", "t", "c", "o", "n", "d", "w", "l", "o", "s", "b", "o", "e", "z", "b", "r", "g", "q", "o", "x", "b", "h", "d", "f", "x", "m", "u", "s", "v", "e", "w", "x", "n", "m"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> gifts = {"h", "a", "z", "f", "h", "x", "b", "y", "n", "s", "c", "b", "j", "c", "u", "y", "k", "p", "n", "t", "n", "h", "o", "s", "h", "d", "i", "n", "v", "p", "g", "s", "d", "r", "y", "z", "c", "n", "h", "b", "b", "z", "m", "j", "s", "f", "e", "y", "i", "v"};
    int N = 49;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h v", "a", "z", "f", "h", "x", "b", "y", "n", "s", "c", "b", "j", "c", "u", "y", "k", "p", "n", "t", "n", "h", "o", "s", "h", "d", "i", "n", "v", "p", "g", "s", "d", "r", "y", "z", "c", "n", "h", "b", "b", "z", "m", "j", "s", "f", "e", "y", "i"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> gifts = {"qtkvgokssw", "swyuwlodcp", "xzpocujwis", "tpahfqvioi", "fbwodjgpwt", "edwgncunre", "agnaiksxov", "yadunsgxhj", "nlxwbzxeuq", "oyfvifqzti", "lhchvwtnag", "sxbjrpotus", "tsdqkxjvkv", "fgtfmpdiwd", "qizkvhmcuy", "ncfugkqxvc", "ubnkgjykav", "mgdcoiwakg", "msoodijerl", "cidqhstfvz", "eumjaoqxsy", "genrhbhrjm", "rfotreflhx", "giuvxdtomb", "swbeldaaye", "rovpflliii", "zatskhbnbq", "qnvxmnvvkl", "sbbmwhwhro", "tbseyjhbkw", "asywtthett", "cafxwimcka", "wgrpnakxzy", "lmxzjjnpqq", "ejkntoxgfq", "tjsgkjlpjn", "qlnfohngnc", "cloxkauxac", "sbdqmmmiwk", "jmwnvmyycs", "jpipirfyca", "quipirdhmw", "xudfhotyqy", "xafzhalnqx", "nlxowexkxh", "dhevcxtnnq", "jyrcnbhbce", "rpjldpccju", "ahjloskzor", "afyacooayk"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qtkvgokssw swyuwlodcp xzpocujwis tpahfqvioi"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> gifts = {"ball", "plane", "a", "b", "c", "d", "e", "f", "g", "h", "u"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane a b"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> gifts = {"a", "b", "c", "d", "e", "f", "g"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b c d"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> gifts = {"ball", "plane", "robot", "puzzle", "bike"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane robot puzzle"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> gifts = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "j", "k", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d g j", "b e h j", "c f i k"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> gifts = {"ghtr", "rh"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ghtr rh"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> gifts = {"ball", "roll", "pen", "box", "rock", "scissor", "book", "pencil", "robot", "cat", "pen"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball pen rock book", "roll box scissor pencil"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> gifts = {"ball", "plane", "robot", "puzzle", "bike", "asdf", "asdf", "asdf", "asdf", "asdf"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball robot bike asdf", "plane puzzle asdf asdf"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> gifts = {"dj", "fg", "gsd", "hgs", "fdsh", "kjjf", "ghjhj", "kjkj", "lkg", "weerrr"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dj gsd fdsh ghjhj", "fg hgs kjjf kjkj"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> gifts = {"aaaa", "aaab", "aaaac", "abbbd", "asdasds", "asfas", "sdfasd", "asdasd", "araweaa", "das"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaa aaaac asdasds sdfasd", "aaab abbbd asfas asdasd"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> gifts = {"ball", "ball", "plane", "plane"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane", "ball plane"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> gifts = {"a", "a", "b", "b", "c", "c", "d", "d", "e"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a b c d", "a b c d"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> gifts = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d g", "b e h", "c f i"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> gifts = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a c e g", "b d f h"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> gifts = {"a", "a", "a", "a", "aa", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "aa"};
    int N = 1;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a a a a"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> gifts = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a a a a", "a a a a"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> gifts = {"ball", "ball", "plane", "plane", "plane", "ball", "sdlkfjsd"};
    int N = 2;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ball plane plane sdlkfjsd", "ball plane ball"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> gifts = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"};
    int N = 3;
    SantaGifts* pObj = new SantaGifts();
    clock_t start = clock();
    vector<string> result = pObj->distribute(gifts, N);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d g j", "b e h k", "c f i l"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663016&rd=10011&pm=7266
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
 
using namespace std;
 
class SantaGifts {
public:
  vector <string> distribute(vector <string>, int);
};
 
vector <string> SantaGifts::distribute(vector <string> gifts, int N) {
  int round = 0;
  int cp = 0;
  vector<string> res(N, "");
  for (int i=0; i<gifts.size() && round<4; ++i) {
    if (round) res[cp] += " ";
    res[cp] += gifts[i];
    ++cp;
    if (cp == N) ++round, cp=0;
  }
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/