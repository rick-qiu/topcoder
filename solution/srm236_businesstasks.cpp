/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1585
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

class BusinessTasks {
public:
    string getTask(vector<string> list, int n);
};

string BusinessTasks::getTask(vector<string> list, int n) {
    string ret;
    return ret;
}


int test0() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 2;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> list = {"a", "b", "c", "d", "e"};
    int n = 3;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> list = {"alpha", "beta", "gamma", "delta", "epsilon"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "epsilon";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> list = {"a", "b"};
    int n = 1000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    int n = 17;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> list = {"l", "celzw", "vp", "n", "nkmyi", "uaquiikr", "tgu"};
    int n = 7836541;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "nkmyi";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> list = {"yhvadcqtq", "myr", "mjoyirny", "nofaqvinol", "trxphmasx", "yblchjotr"};
    int n = 5561784;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "trxphmasx";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> list = {"dfnm", "k"};
    int n = 4147202;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "dfnm";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> list = {"jegzlqohby", "gvscbzrxvq", "yoznfwvxfr", "wtprk", "zmvqlj", "ughtyb", "cgdincc", "ztsuv", "i", "ba", "jotel", "jwn", "erfhr", "zdhxgfnf", "hkclj", "pfqy", "fkfrxvnp", "dzmucuzru", "oqhaob", "v", "mgbiukmk", "rqykcqogwl", "ot", "f", "mam", "bag", "ildun", "qtlof", "xvlcbdl", "fedopz", "nl"};
    int n = 3827158;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bag";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> list = {"tigcvzlb", "u", "cj", "e", "snaa", "hbbskf", "qxkryjwb", "bvbbh", "gzykeeq", "mqfnxhrsj", "zkwvueony", "gsjpvjd", "svbmtbpn", "u", "f", "dqgrpjyuo", "uja", "qopqpekf", "wnbykja", "newod", "xrav", "hvj", "owshyj", "sbsmy", "gy", "a", "utlrl", "zmucefteia", "mnfwmboja", "aki", "wcotsl", "cxjzjib", "dsg", "ksaj", "fl", "thburj", "spwzxryca", "ytbxi", "smevxiu", "uiumrxzu", "dei", "azciontn", "ceymjemr", "geiemwcx", "nsltfgf", "xkmn"};
    int n = 9046852;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "zmucefteia";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> list = {"wl", "n", "hoykptlh", "q", "ztbjmxzaij", "eoqqre", "nwsimbuda", "fo"};
    int n = 3152975;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> list = {"pwerpci", "k", "budsz", "cx", "h", "zheoihfv", "aeipe", "ewsvaqw", "ofvgcol", "kxlqvbfyb", "wqlofv", "gcwhnfhz", "a", "lv", "pltwcxoz", "yi", "nodixfm", "ujdp", "avkvju", "wplzbwdkz", "pajqlyppx", "kpigbest", "bthx", "gblg", "ivb", "zwgybnnctw", "c", "tbinyfef", "lbabny", "i", "qtzhruv", "azcbbhg", "rxkpz", "vvsr", "zvzpbkxu", "ncduwugkp", "cahiajuq", "mwckvuusha", "w"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bthx";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> list = {"m", "sfm", "bapvgub", "bosipszswv", "vxtiqb", "igmp", "frefavvk", "yqhmuuki", "xsvqfmnqq", "eoapz", "axie", "rrunom", "loqcvirps", "i", "wlwnllmuyf", "uxxbhbiwc", "vpxsh", "wibe", "yucpzyibot", "gulhkimtks", "hhfbjwb", "axmqbmos", "tidlxi", "popojggnjo", "fsr", "vaxh", "ia", "bkvyv", "cjlgxbo", "drohy", "vjchr", "buwbn", "cnzko", "u", "pqw", "e", "to", "dmm", "spfyinx", "caq", "df", "orbttkgsv", "mlihgy", "mqdddbdvzb", "hmlhs"};
    int n = 3736222;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "dmm";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> list = {"koaejpc", "cysaeugsy", "wtinkacu", "wbzqwqhzy", "darwcliciz", "dnjlb", "i", "y"};
    int n = 4321174;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "wtinkacu";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> list = {"o", "ylk", "ewaverppb", "hcvynep", "p", "yfecfjbf", "o", "hro", "dxiwuh", "rdos", "crst", "sqtrt", "nv", "ug", "zeqo", "zfuny", "pkarll", "t", "qnc", "pvryln", "obfmfieow", "oidv", "foltqydbe", "td", "ixwulf", "hkwctdrek", "msjb", "mbyl", "wkwvosnq", "ltf", "xqptmp", "lqsuozgu", "n", "rncz", "vgyoe", "dcp", "o", "tp", "th", "dfpmh", "gdgot", "qophtwcok", "paeesnpvff", "zrb", "f", "zvhstd", "ygaatrtzld", "txhvwfito", "ggd"};
    int n = 8435322;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "o";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> list = {"mdgyiwvw", "pvirakih", "v", "h", "trigbt", "dv", "rhys", "mmlkv", "kkayj", "maojwbdo", "fxavmlhkgg", "pafhmu", "gkmbxph", "cy", "apedrdzph", "flsq", "rio", "ramsbpxpd", "dmee", "zqw", "a", "gvxyhfa", "hg", "rcqjdjdkbc", "j", "oilmsv", "vicx", "vryhznxork", "t", "ix", "txuazrkk", "bmsy", "tadihl", "enqxnrbpwn", "huedzg", "jz", "nlgsbj", "resnkbvxyk", "d", "rcmzu", "pmrbdhteki", "xuamzyvvtq", "ztx", "azycdpb", "m", "bdsqh", "nznmhkzu", "w", "f", "bxh"};
    int n = 7718687;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "vryhznxork";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> list = {"rwjcnpb", "kfcfv", "znxgcjwwik", "w", "rwvajuce", "xewmhzhjwh", "zjkaap", "s", "iqwarieae", "zerlz", "u", "d", "pzqitbhyq", "ciipw", "asikhdolnb", "foca", "vkjepfo", "s", "krxpwxfllw", "f"};
    int n = 2588819;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "rwjcnpb";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> list = {"pqhxob", "muwy", "upkyms", "gazkjfgu", "bnokf", "ajzkzefh", "zmzjqtv", "ke", "bhkdnqf"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bhkdnqf";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> list = {"uwcojz", "aayecqwi", "ua", "mnknran", "as", "utgpear", "yrghieqg", "dtklrkxru", "qob", "cb", "stxm", "bcwhg"};
    int n = 6123820;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ua";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> list = {"qsxtyd", "k", "olt", "fhr", "cljigdbi", "ywwjxvsf", "x", "tfqfxtgiz", "hza", "jzkfllguae", "utvg", "ptkb", "ccecitz", "sxkjnqysbg", "mkxtkbebuw", "sjp", "st", "wk", "fztutk", "mbkfkk", "pvgehs", "zramf", "gzhewp", "l", "rwvzsquegk", "kqtwvmd", "akwum", "jtniaqtr", "jwmxrl", "ruo", "pzcui", "lj", "gipqr", "cbxli", "vwtfpq", "ycovlvezx", "ydrccpw", "bu", "bsygu", "btknkhityr", "jgnoex"};
    int n = 8349319;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "sjp";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> list = {"vuulw", "dvac", "pjm", "yntzwsnk", "vrcz"};
    int n = 7118670;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "pjm";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> list = {"bvgr", "y", "v", "hgaqw", "xffdiwcb", "lfkkk", "nsitos", "l", "zfknzt", "lzfwcy", "kgubzn", "jsamkngab", "snyynssuzi", "rh", "yebb", "uvbc", "ghgqsarhul", "fchtdybnk", "yqxfhcpsmm", "u", "mpqcndgcc", "docpudvfm", "im", "labyetelv", "fditwda", "hlguuvi", "wwwxgr", "a", "wtog", "ftvqp", "pz", "npvv", "viseblclg", "k", "y"};
    int n = 4891354;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ftvqp";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> list = {"qggyfqmnz", "yxspcfoung", "ktdm", "ij", "nodbvhgrjq", "wtxieknfx", "mwqzremz", "rjhqeaym", "jdwbwk", "guu", "hatpz", "fgaxgrecuk", "dbhucxo", "xormvizr", "vicyyadn", "behnros", "aygpilxcs", "jmrw", "nm", "ly", "wbvyji", "ktbe", "qwbedx", "r", "qkyaodwia", "evloffb", "jimidghfkp", "wzcauotc", "umbwrlrr", "hedjz", "k", "j", "hfiufqus", "d", "iex", "hmfr", "yehvvkrfd", "acsfehaf", "gzfn"};
    int n = 8380305;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> list = {"faf", "jazdoodk", "ywmwl", "gxhyrmwc", "rhuxbf", "migzdyhp", "qussxdptit", "wiiuh", "l", "coln", "atfwrt", "igvazctdx", "vku", "woab", "h", "ndbdig", "aofgaqyfo", "uekhmz", "pijljzbe", "itrvzl", "regbhiobq", "li", "jd", "sy", "rpy", "wdfskw", "xtw", "kzbhqow", "tg", "w", "uj"};
    int n = 845;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "gxhyrmwc";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> list = {"blhrqkjb", "amdx", "czrg", "rjtlrkk", "ot", "qe", "qhztfnb", "dqtq", "jacbegc", "v", "xfrbmc", "cferlfdon", "jzxoy", "oqodwdohkp", "fvuuzhbmc", "wqax", "ubikflhdfc", "fvfdirmmts", "r", "yognjjwm", "qzihgkc", "rzl", "ouqwshcut", "es", "yrjvbqj", "daiaprcfy", "jgukgz"};
    int n = 41;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ubikflhdfc";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> list = {"ufopvla", "volnicf", "vzhnvebph", "nx", "ar", "orh", "zfm", "mijolmlqq", "wqretzv", "snajzf", "o", "igcipg", "b", "gmzn", "xjcixrv", "pxmg", "slhfh", "iyoryw", "j", "tf", "jmeani", "e", "lrsfyfu", "arho", "rkdbbod", "y", "j", "guc", "ob", "ywfto", "xmq", "trwou", "gbchxg", "uyarlnculn", "lbrovr", "spqeqhq", "daj", "ns", "eaypuhvepk", "cndcgx", "hqgihacbep", "njdykehm", "pzkxvagk", "wvngpttoj", "mkbm"};
    int n = 17;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "tf";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> list = {"cwptj", "umr", "vev", "ko", "sxqyo", "bkj", "aj"};
    int n = 532;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "umr";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> list = {"a", "b"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> list = {"blhrqkjb", "amdx", "czrg", "rjtlrkk", "ot", "qe", "qhztfnb", "dqtq", "jacbegc", "v", "xfrbmc", "cferlfdon", "jzxoy", "oqodwdohkp", "fvuuzhbmc", "wqax", "ubikflhdfc", "fvfdirmmts", "r", "yognjjwm", "qzihgkc", "rzl", "vzhnvebph", "gmzn", "xjcixrv", "pxmg", "slhfh", "iyoryw", "ywfto", "xmq", "trwou", "gbchxg", "uyarlnculn", "lbrovr", "spqeqhq", "daj", "ns", "eaypuhvepk", "cndcgx", "hqgihacbep", "njdykehm", "pzkxvagk", "wvngpttoj", "mkbm"};
    int n = 1000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "vzhnvebph";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> list = {"zlqamum", "a", "a", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> list = {"zlqamum", "a", "a", "a", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000001;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "am";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "u", "er", "fi", "ao", "diu", "foiu", "vlue", "lqdu", "lfai", "piud", "a", "fivu", "voiu", "vlzakejv", "efliu", "sqldf", "ouef", "lakfjoiu", "xocvui", "faoiufa", "mvoiuv", "azoeiufnv", "aozefuv", "oiuafze", "voiqsdu", "falj", "faoiub", "dflkj", "baozif", "faljkf", "ljfal", "falkj", "faljk", "blkcj", "fdajoij", "faljk", "falkjb", "fajlkzef", "jlkaf", "falj", "falkjf", "ljkfa", "ljkfd"};
    int n = 9997997;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ao";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> list = {"a", "s", "d", "g", "h"};
    int n = 17;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 7;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "w", "v", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "ww", "vv", "xx"};
    int n = 9999993;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "gg";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> list = {"a", "deleted"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "deleted";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> list = {"a", "b", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "v", "n", "m", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "as", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac", "ava", "ab", "an", "am", "appp", "ajk"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 100999;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> list = {"zlqamum", "a", "a", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> list = {"zlqamum", "a", "a", "a", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000001;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "am";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "u", "er", "fi", "ao", "diu", "foiu", "vlue", "lqdu", "lfai", "piud", "a", "fivu", "voiu", "vlzakejv", "efliu", "sqldf", "ouef", "lakfjoiu", "xocvui", "faoiufa", "mvoiuv", "azoeiufnv", "aozefuv", "oiuafze", "voiqsdu", "falj", "faoiub", "dflkj", "baozif", "faljkf", "ljfal", "falkj", "faljk", "blkcj", "fdajoij", "faljk", "falkjb", "fajlkzef", "jlkaf", "falj", "falkjf", "ljkfa", "ljkfd"};
    int n = 9997997;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ao";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> list = {"a", "s", "d", "g", "h"};
    int n = 17;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 7;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "w", "v", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "ww", "vv", "xx"};
    int n = 9999993;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "gg";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> list = {"a", "deleted"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "deleted";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> list = {"a", "b", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "v", "n", "m", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "as", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac", "ava", "ab", "an", "am", "appp", "ajk"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 100999;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> list = {"zlqamum", "a", "a", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fxjqzznvg";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> list = {"zlqamum", "a", "a", "a", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 9000001;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "am";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "u", "er", "fi", "ao", "diu", "foiu", "vlue", "lqdu", "lfai", "piud", "a", "fivu", "voiu", "vlzakejv", "efliu", "sqldf", "ouef", "lakfjoiu", "xocvui", "faoiufa", "mvoiuv", "azoeiufnv", "aozefuv", "oiuafze", "voiqsdu", "falj", "faoiub", "dflkj", "baozif", "faljkf", "ljfal", "falkj", "faljk", "blkcj", "fdajoij", "faljk", "falkjb", "fajlkzef", "jlkaf", "falj", "falkjf", "ljkfa", "ljkfd"};
    int n = 9997997;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ao";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> list = {"zlqamum", "yjsrpybmq", "tjllfea", "fxjqzznvg", "nvhekxr", "am", "skmazcey", "piklp", "olcqvhg", "dnpo", "bhcfc", "y", "h", "fj", "bjeoaxglt", "oafduixsz", "kmtbaxu", "qgcxjbfx", "my", "mlhy", "bt", "bo", "q"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> list = {"a", "s", "d", "g", "h"};
    int n = 17;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 7;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "w", "v", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "ww", "vv", "xx"};
    int n = 9999993;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "gg";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> list = {"a", "deleted"};
    int n = 1;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "deleted";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> list = {"a", "b", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "v", "n", "m", "aq", "aw", "ae", "ar", "at", "ay", "au", "ai", "ao", "as", "af", "ag", "ah", "aj", "ak", "al", "az", "ax", "ac", "ava", "ab", "an", "am", "appp", "ajk"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    int n = 10000000;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> list = {"a", "b", "c", "d"};
    int n = 100999;
    BusinessTasks* pObj = new BusinessTasks();
    clock_t start = clock();
    string result = pObj->getTask(list, n);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6535&pm=1585
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
template<class T> inline int size(const T&c) { return c.size(); }
 
struct BusinessTasks {
 
  // MAIN
  string getTask(vector <string> list, int n) {
    int poz = 0;
    while(size(list)>1) {
      poz = (poz + n-1)%size(list);
      list.erase(list.begin()+poz);
      if(poz==size(list)) poz=0;
    }
    return list[0];
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/