/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8175
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

class IsomorphicWords {
public:
    int countPairs(vector<string> words);
};

int IsomorphicWords::countPairs(vector<string> words) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"abca", "zbxz", "opqr"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
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
    vector<string> words = {"aa", "ab", "bb", "cc", "cd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"cacccdaabc", "cdcccaddbc", "dcdddbccad", "bdbbbaddcb", "bdbcadbbdc", "abaadcbbda", "babcdabbac", "cacdbaccad", "dcddabccad", "cacccbaadb", "bbcdcbcbdd", "bcbadcbbca"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"aab", "abb", "cdd", "ccd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"aaa", "baa", "cdd", "ddd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"k", "h", "o", "j", "g", "z", "n", "t", "w", "c", "b", "i", "s", "a", "u", "f", "e", "d", "l", "x", "p", "r", "v", "m", "q", "y"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"eq", "jv", "dk", "ml", "cw", "gr", "nr", "qi", "pt", "jd", "tw", "pv", "ar", "hv", "uj", "xk", "xn", "rq", "vl", "cz", "bo", "zs", "dw", "wz", "ne", "ej", "pn", "dm", "tg", "og", "jz", "tv", "rj", "kt", "sd", "zw", "hg", "sh", "cy", "it", "cd", "ma", "ds", "fx", "uh", "hi", "mg", "jq", "wc", "yv"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"bbz", "xzx", "bzx", "beb", "bxz", "bxx", "eze", "zxz", "xxx", "xxz", "ebx", "zbe", "bbe", "exe", "eex", "eeb", "exb", "zbz", "zzb", "xbx", "xex", "bee", "xxb", "xxe", "zxe", "zee", "bbx", "bez", "eez", "zzz", "ezb", "bex", "zzx", "eee", "xze", "xeb", "ebe", "ezz", "zxb", "bze", "bbb", "zez", "zze"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"sxxs", "xkik", "xssk", "xisi", "xiik", "kixi", "ssss", "ikkk", "kiix", "sssk", "siik", "sxkx", "skki", "ikxk", "xxsi", "kssi", "xxxs", "sixi", "isxs", "kiki", "iiks", "sxxi", "ixsx", "kkxi", "kxix", "xxxi", "siki", "skkx", "ksxs", "skik", "xxxk", "issx", "xkkx", "xksk", "xsks", "xxsk", "kxxi", "issk", "iixk", "kisi", "xkki", "sssx", "iixs", "kkix", "ixxk", "ixkx", "kssx"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"qwq", "siw", "iws", "sqw", "qsa", "iai", "qsw", "sas", "wis", "ssw", "iwq", "wsi", "aiq", "swa", "wqs", "qii", "wqi", "wia", "qsq", "aws", "ass", "wiq", "iqs", "sia", "qai", "qsi", "wsq", "was", "qwa", "qws", "waq", "ias", "wws", "wai", "siq", "iqw", "isa", "isq", "aqw", "aia", "aqa", "qiw", "swq", "qis", "qia", "aqs", "asw", "waw", "aiw", "ais"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 764;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"jcd", "bsj", "ybo", "ahy", "xro", "bbx", "hgr", "llr", "eyt", "gbr", "xjr", "mar", "gla", "mzc", "xay", "zlh", "yys", "yzs", "ehc", "hgl", "cjh", "ytd", "elb", "yes", "rrh", "dlz", "oyg", "czd", "dbc", "dhj", "tyr", "xmj", "obt", "bdm", "ood", "yxs", "lam", "zlt", "dol", "cel"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"yiqi", "evhu", "imue", "ewuw", "wlec", "yyhv", "qqvm", "ywwv", "vhwi", "elhq", "wuhq", "qium", "uhhw", "cyhq", "wliv", "yycl", "cwvh", "vlcq", "vvcy", "uccy", "uhql", "lhwy", "qcch", "ehhm", "lmei", "hwil", "yymm", "miqq", "euql", "eliy", "eclc", "hiul", "ycqh", "qqll", "uvwh", "yyhc", "qcmv", "uywq", "vmcu", "wwlh", "qlww", "ecyy", "quww", "vlql", "qchi", "clqv"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 338;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"jqioo", "zdzim", "xymjj", "enkos", "pthef", "oshee", "fbdpx", "gdhss", "ugepv", "tjula", "vspfl", "xjmnn", "jlqoo", "igbzz", "rhwjp", "jwqbb", "jdfee", "sqlir", "ickxp", "mofee", "qnejf", "svatt", "aqfpp", "dboru", "vyfzz", "zitvd", "ndzjj", "kvgmr", "fbnii", "oytru", "awhum", "zrvss", "xcize", "ofdyv", "hoehd", "gyapg", "mdegv", "iyltt", "fibmm", "yomvu", "modxx", "pkmii", "ltlkv", "fipss", "sqgmm", "uglqq", "nelhh", "vmrkb", "dzxoo", "jqsxx"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"sseduo", "douzdu", "uuoeds", "eezedd", "ddzdee", "eeozdu", "uuzoes", "zzzzed", "uudusd", "zzzzoe", "uuudsz", "ssoued", "sdodzs", "eeeeuz", "ddddeu", "ssssou", "zzozso", "oosdue", "oozdus", "eezous", "doeoud", "uueuzz", "ddozus", "zsosdz", "ddddou", "uoosdd", "euudss", "oozdes", "esdzoe", "szzeuu", "essudd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"llmclkq", "lmhubiy", "rdauime", "aibaprv", "myakien", "ssvjsgh", "jnwlghe", "doslnci", "ujpgrkf", "rqortey", "hhlshgj", "mifmgqz", "cadfcyr", "paolygu", "muqfgps", "iyvmdhp", "ynetolc", "uuvquam", "emneuqj", "ppaspbq", "ocpokir", "pakpduo", "odwomft", "vvfhvdo", "lcyltrn", "pvsfpjy", "umdunlv", "fnhftkq", "djedyaz", "ttyvtbp", "cyuciqz", "ddktdmj", "lcnleqr", "izbiwre", "tjutokc", "gewgsyr", "pjkpdei", "kfjvbsr"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"dfhhfiif", "fdhfifhd", "hdiidhid", "hdihfhid", "fidiiddh", "ifddfidf", "dhiihdih", "fihhifhi", "idfhdifd", "ifdffddh", "dfiifdif", "hfihfiii", "fhihhiid", "dhffhdfh", "fdhhdiid", "hdifdhid", "ifdifddd", "hdiddiif", "hfddfiif", "dfhdidhf", "fdiddiih", "hdiddhid", "fdifhfid", "idhifihd", "dfhhffif", "hifdihfi", "fddddifi", "iffffhih", "dfhhfdhf", "fhdhhddi", "fidfhfdi", "hdihdiii", "dihdihhh"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"nnidephde", "jjmjjneim", "isejnmmhm", "mpsppenis", "edpmjhmhs", "hpnijdpjd", "jepispnsp", "snsdhsiim", "hsnpdeeme", "iemnsddpd", "pednhdmhd", "ihispnndj", "jmjspnnss", "njphdpsdp", "diejhsihs", "nnennjpde", "jhnmsiipi", "dspnmdjnm", "pemhipnjm", "ijnmedspd", "nnennpise", "mijiindej", "jjdmhdnmd", "ejeddeshi", "pnhiepjpn", "hmjipjepj", "phmesnndn", "esdmndind", "sidmneine", "imsjnhedh", "sdepijjhj", "njjiddheh", "jensdeimi", "jsjppjden", "jjsjjpnms", "peeinnmdm", "dmnihddin", "ipsmnddhd", "eehijmpij", "sejinjmnj", "enhjsepdh", "mihpdjidj", "ejeddeisn", "dmdisnnhp", "hnjepjmpj", "mjpsieene", "pmndemhih"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"vbipippppp", "tpmimiivia", "miavtpvpbp", "ptmbaittpi", "appaitbavp", "ptmbmbbibv", "ibpiavvmbi", "tttiabtaba", "itvmvmmbmp", "pvttpvttvp", "mpamivvtpm", "pmbtbttttt", "mvvmtavmbt", "mbpapaaaia", "tbmpvabbta", "immiavmava", "pmpipvimmi", "amatppttvt", "tmtbbviitb", "ivmvtpamap", "vptvivttta", "mbitmipttv", "vamvbmmtmp", "pabaiitivi", "avtabiipva", "mvpapaaaba", "tpmiavvbtt", "ppapbtttpt", "ittibmtbmb", "bmabamavap", "paviaivvvp", "atpattbita", "iptmtmmbma", "bvabttabai", "tmbpbpppap", "iptbitvbbm", "bipbbtmmmt", "vtavmtappm", "btabimmptb", "tampmppppp", "aiappivvam", "amvtvttaat", "itapapppbp", "mapabiimpv", "aitapitmmp", "vpmtvatvit", "biibpavbti", "avatbbttit", "mbammvatvp", "aiamimmbmp"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"yrswrppeoms", "judyqopdrdz", "kfzyfqqiuwz", "exdlelfpdjs", "bwdvbvixdka", "afxzrzqucgl", "fuajlvsaiac", "iccqbupcfnz", "ioalxjkjvfz", "ybbljwrbosp", "pkzlulfbzja", "nroazlxowjk", "cveqcqjxenu", "xapqauucnjp", "cbbjnkcbvqp", "csyxfuuzday", "lcuklkniuoy", "auiuszfzgcv", "opvnwcsvqex", "vepdawkjrfz", "xgqjajazlev", "brgprnnloug", "jfukdoiuluw", "urlkukdclow", "yvmqpqdeaso", "girfxyprojq", "yrpblsljiqw", "pdvzkrrjmfv", "svijsjnpibu", "mayulvryiyx", "gjluiuwzldq", "mwidweeasbi", "bgmngxjrdmz", "xprzxzqjral", "sqieczfzmod", "jvwgaciwomz", "maadevjarsc", "vincvoedbrp", "iyuaossqdcu", "fnmlalrvmyc", "pvvkfepvysn", "zirpdmwrgro", "fllvdgrlaon", "kffypcufsoj", "qsgyqykbgle", "dwgvwppesmg", "bzzvgcezkjd", "vrukmgwunay"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"whwwxaisjfip", "kswshxgvodxu", "hdpdbsgiuesf", "hohhixapjgad", "hwpwjabdsxag", "adgdwjfisvjx", "oipfjksikvbp", "xiwiujfkbgjv", "ofoophvakjwg", "vuvvihwsbkwo", "ujuuoiegvxed", "koiosgufpwgv", "dbsbiwegofwx", "ebfhvwaoujwi", "oefehvbjsavk", "pjhsibfjbugh", "dpapvxdubjxi", "bkxkdfhgpvfs", "gwkwbfpjeufd", "gsjsbfwkvdfa", "bsbbjpokedox", "vjgjieohwaed", "fasaijogupjv", "vsasxguhwbgk", "wgjgphedixhv", "wdfdauokigub", "skakgpdvbwpi", "vkieoaxkagsi", "bwvwdkuoiakp", "whshpovuixok", "hvjaokxvkpuj", "gbkgowsevijx", "uadahgvfjsgi", "wuwwjfosxhog", "wubufgkxapgd", "shjhkwifeowv", "xugosawuafkg", "jivikaowefad"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"iigvvhlhvqhbh", "yysqsbivqvbmb", "shbiqqecuckkg", "nlubuvemmmvhq", "ihyqucudndbhd", "ngdgnvbikillz", "umufylzdfwili", "hhwkyvhyhffzf", "quyklvuzuhhcw", "llszsgkzczgmg", "wiviwzgnynbbf", "zdqkicfwhwsdl", "eewswfkdsdfhf", "shhzzmwzsfblm", "kkzbenkekiihi", "cghqguhfelqwu", "hwdhhzdqhsfes", "cclwlihqwqisi", "lquuqznkbmhbh", "vzdiqbgqyiikb", "lmsbedmmclcel", "hbgdnqdihyeus", "mkhhfgnzqencd", "qqmzmhdyzyhlh", "wwfwmebeqhzke", "ilfvlwfbyevsw", "nnwyelmwqwlkm", "blskydgwwqvgd", "iiznmwimigglg", "ncskfkcvnudwh", "ccvsvignsnimi", "ignnuyzkclzqm", "ggkhknmvhvncn", "dwmsvgvizikwi", "bbwssvmvsqnfv", "mweqwhfdcdggv", "iisbbudubvlgu", "qmwwbkuzysulv", "qelsmhsvqknub", "vvswscugwgchc", "yyhshfqgsgfnf", "wklvcvkfwmbze", "vvmdydvhbduwl", "gvziqfbngfdzl", "hnymsfdvkqdcu"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"hzltayheolpyfw", "ffblmluyxkclqp", "tclfwwtpzrynhp", "kjthtcyqwwoegt", "tkoeaatczfxqmc", "apygyybzmdoakx", "nioxelnjkowlqp", "dmkegklybhjdbw", "jkxeknbqwwtohk", "ddjppfwrywlbeg", "bjehjefzlmhpbk", "mlgbajidqrlfnr", "zqmtllzbidnacb", "hkexeebiwljhdu", "nerwkanqaygadg", "fmqrmqkonurefl", "xxlkbyommwpqqz", "zzaedkfyyxhmmj", "ycafxtylnaqtem", "ufwoawzijkgdbk", "nrfhjjnxiqcqli", "mdobqywklhdcuh", "ifxlfutmrrkdaf", "tmlzllnfrwytep", "nufbffykmlonxt", "xkzchhxibrjgni", "utpcoytkwehogp", "umgbmbbxxjzope", "gzhthhqmklxgpi", "iiuznbrwwygeeo", "zcaoaalnrxyzdu", "mmpwiwehbfxwyg", "mmrctcjfdexcal", "ufacfcciiotdjp"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"gqviqlbrhkoxngz", "ounlumyvziqpxoh", "qprmxgxvxelnkql", "hmxkmerugbqnohp", "lmkizmmknylxggx", "qnxoleebgivumqz", "vnyugokrunhgeyv", "vhipqgxuphoqbiv", "uviozohphxrrxqr", "yyexhxrbqpnnvbn", "gnbknlzvixqmegu", "rpylelnznqkkqxk", "vzlbqnnrbuezmmg", "nmyklmmyuonullh", "ybpnkeuyugyzrnb", "nhlmohohnmkquke", "gokvolepyxnmhgi", "mxyqxhgrznlbkmi", "ervgrukzxoyiqeh", "ruxbkypelnznhez", "bbvbrbzeuennqrn", "yvrbivivybnpunm", "imoknkqlqgvvgpv", "ppiqzqubrxllmbl", "burnuvygelpmxbz", "vboxbrmkglzehvi", "ohvnhmrbkgzxloy", "gukpeueugpnhlnz", "npqrvhhubiokenm", "xnbynqrezvigmxl", "uvrmvphixnoleub", "bkgmkzuroyvpibe"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"ecocdpdercpppctd", "cddcieoctderopro", "dcecitidvctttcoi", "pctotepvcdcirrrd", "opporeiocpedivdi", "ippidvoiepvcotco", "piipdovpeiotvrtv", "eipirdreciddditr", "peoetpprtepdertc", "evpvieerivetvrid", "vptprorvepooopdr", "tereittvdeddeori", "itpteiiretivtred", "eiiercoepicdotdo", "pidirtrpcitttior", "pddptocpidovcevc", "ivpvriicrvidvcre", "erdrvovecroooriv", "riirtcproicdpvdp", "pioidedprieeeicd", "vppvcdovtpdiorio", "dvdorprovpetrodi", "tiitdprtviporcor", "vrircvvtcrvprtcd", "ptvtrerpdteeetir", "vpdpevvrepvcprei", "trvrioitcrooorei", "itrtvdvictdddtov", "ticiprptvirrridp", "dcecvivdpciiicov", "peteoppioepveiod", "vipitotvdioooiet", "eivirpretipppicr", "tdedcictrdiiidoc", "rpprcitrepiotvot", "pdtdippcidpvdcie"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"ugpwzmegiiftnoayr", "vqjtzgxbgozwwfske", "glkcxlnxacbjapazx", "teuearwlrkjoqozvl", "cwexsmwnsmwzrqmwx", "rngnzswesypxuxcae", "bgglucajeewprprfo", "bpjcozamrantnpulm", "ravijfyjmajgxfpiu", "igkvzcggfpyaumlym", "asaarrgcuavmzkqts", "iwiiqvwclogfwjjgu", "lwrqaowxkpszjrjze", "wksqmikfxbzelslem", "kqsbwsqjaovgqeevv", "coccssenvcptmikao", "xstsjobnqeglrtlin", "aatsvkecvujflzamv", "xvqaissisyukngsbi", "xlcukppkpbnosgpmk", "gunurxectbaoknzmc", "bkfeufkapqxikllxx", "unvcrmmrmzkaypmer", "ocsxvaavwuerjwsqk", "cxnxiggrkmygvnflr", "inbxtlkujsrfcfwju", "blfwbrobqqvmkskqg", "nigfbaixsywuzgzuq", "jjsuotflxlyamtmaq", "gwlkjbxpbfjaactmi", "gpxfcascafqmaralc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"fskupamcitbecgtnud", "vnkpazhojufnobjupm", "yzxmdlnevdeyaiinsp", "opngldxqagsftiqhth", "ixfcizsgtujpvakqxx", "cahbfxvqtasknnggzl", "ktlzvdcfypqnajxctt", "ylyppinlqkvtlpmjgt", "supmuxdpcatgbifjfn", "nujxnmckzffzdvttkh", "fbymvdcpehnutaocbb", "czqlzpjqdkxgtaymyv", "xchmmkpcniyzcmxtez", "pivzikfapgkyfijiqu", "obpoqtmvvllumkvebo", "jpaybxjmfnybblpzjc", "abevvzisqjpbkvaodu", "cpkfaisbcifjhpextp", "qnjgnlmcqdlhmnznet", "agkehlmdptxjozsmgg", "txizqzeybbcqoqqxiy", "xyveneidmmpnlnnyvd", "jkcfgfepllzgbggkcp", "hgpfxnvsiafxxbjcvq", "tiltyhqppxxzqkpeit", "exfctpxlkixchboiif", "mehndgpotdomkccpsl", "hxnuephjfcueelxqhb", "sdciiybdhjxedistke", "cyecjdhmmaaxhomqyc", "kcftiagemiekhvvgpy", "inlkdznceonkgmqool", "ihlnmyzkiynujhtxfh", "idfmutdjlpdmyezppf", "qjqoesyjvdxgjonueg", "heajptzobjqcikosie", "jkjhaxckoivykhqday", "hchuuvjcqefxcuintx", "qjxssujimgumlbdfog", "bnbddvtnucqyndlojy", "xgouukgapdkpvnzecd", "dzflygdmaplyyozjds", "usthnzgaosibvvxxml", "xnghebajlhysiujpip"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"ckmijjptcouroxdhsao", "xuyccqxpvrogcyazvhy", "hjoktyafazbokvkmqie", "lniikmmlkdnkipuzazt", "snuchdngbexkphvqqip", "pfoysyhcbacxixsqcss", "cltgmtlppgcgsdjutby", "kehyphiryjfukjginqu", "ifclslpxkxooxpfxbcq", "mbbrnrghchsyhoprcbo", "ojfqgfcvqkakdpyblbk", "kqxilhcyzdycpytlrno", "yccupuhbzqbkipqgbna", "euoyxordtatanzpibip", "rbdsuvbfekmmtqaebqf", "dgdjjtklqfmpjzqhtrz", "fyydtdrbzubolcuqbkn", "xsrzztfeiaokzjibtcj", "ntzxpetlrosijpkcmaj", "gfugfdfbbvgvkzpndac", "ooszirgfxqudomzskfm", "himutrnfgabnxbothkb", "yxtleckagjgjptcbnbq", "imehjnrumpzitcketiv", "rkksesfjnjmyjgbsnkg", "tiqfsmcpigukinzqttl", "ilnygyvconcgugnscxg", "gflspbftkpzzfkykfiu", "tkzmvigrzyemikkyrxo", "yucchkcyhjuugtpbgbr", "pkvpreilbdpqlvczxap", "quhhophqoluubjrybyk"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"ratvxebvbrxbhthrttat", "ydboohrereobwbwegbyt", "htynvbyawrabrnhngdtv", "kxeggyotgoovhontebeo", "oqbrvtgogovbybyobbah", "aqaggydygddtndovawad", "kowbabhdvhobaetthrvo", "kybwnooertwonerktxhy", "awkybdvvwvnqxkgadwoa", "hawnkxdxxehboqdhqtbh", "dtranvbgeeerrvtyyakk", "oobtvhytaavvbrvxntkg", "ahebbrqbttyherhddtgk", "nnqbvrgobbvvbqvkaoty", "kovgnkqyrwxqoykrteot", "tybawghqkrahonqorqtb", "onekhyyqbdkytqvodvxe", "qgdovytttnxwbdwqygnq", "ggwkqovnyrtrdobhgwgv", "haqgxgbvkdeoonnbynxk", "tnheghdxxkhdrvdgtayk", "eotavrdwtrxwkbroxygw", "oatnbenrgqewwbbhkanv", "oyaqvthhhkxrwarotyko", "wgkvvnavddhgkbgqqvoy", "natggxkgdradnvbawxww", "aodtntreahnnhdnykybk", "nxtoodvobbkxtdxhhbyq", "gwoegkaynnggnogrbttd", "bghwobqrydrqdkbwengk", "kvgehndvrxrkqebthaak", "aredqdxygbvxbhagtkro", "rnedbrtabvbtowhvwwnw", "dbdkxrhkbeoggtthatxb", "abovnkekbhbhhkyxrbhw", "dxdwvbywvvoxebwotvrk", "ekwxoytxdraaroqtherx", "xndvvqovbbbndwnhhvyy", "ethnoyyaqgadgawvendq", "aagdxwyvrktknwheagay", "beqoxoakvwrawnbvgdet", "qeqxgexyxteryrtwxnxv", "dxhoahkqoraygawkrdgq", "aoxvgdehhtaenkeawqya", "kkvoaonyqwbwtegrkhkn", "rvttqhrhneneghwxrnev", "ygvrkxqnqnbbbvgaxggy", "txtnkgygxwgoohhydbox", "eexgrwnwgnwqarvtehen"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"fhrameaeffbequfhplzeo", "fqkcqgbxoxrhlppwszrbu", "rqkuazboguouspsougqsu", "lmklaleeoxhwwpccpsxxe", "gkegegllhpbuuxmmxqppl", "ssefbssfswwmxcgzqfawp", "mfeblfahwuqflwfqccpzm", "ugwbsewuolmomqwxhuzgp", "rpzhpoxqeqfwauulckfxm", "gbbfufcssbwwpbqwxhwrz", "rssuarmwklwkzeeolrkpo", "kkklxpqpsfpsuzzefgsrc", "pqfquougqecupfzafpueq", "pssclpfoaboagwwrbpamr", "owzlwexsqsracppumhrxb", "xelgepckrkfabmmouhfcq", "afrfgrkmgamqkrofwukww", "kxcexlrauamgwqqfbpmro", "gzbazlfrsrmupwwoekmfc", "lhcxhmzufuaepkkboqazg", "uwwezehllwqqowcqsbqak", "pmmcepxfkhfkwllbhpkrb", "xxfhkxxhxssclqgorhmsz", "xxorgxxrxqqzmhbaprfqw", "hozxehcbmgbfwpplghmul", "earacrhbcebphruaxmhxx", "lempeoaxhxbqfkkuscbar", "zhhcgzmksaksxuuqazspq", "keszoehcrfqeoreqllwbk", "puspspxxhlqaaroorkllx", "zccoxzmruwruhkklwzupl", "kmhfplflkkzlwxkmequlr", "mglkcmcrwaxzmmwlhcpsw", "blgxckqaomasehhamalem", "fsomksqlzcwskzswxxgef", "pkkocprewlewbssulpwhu", "elluregsawsahppcweamc", "wwfozwwowggesmqkbolgx", "xzzpcxglorlohaamrxofm", "whmqscqcwwbcfpwhgxkcl", "lbobkowaklacwogbhewhh", "sllohsrmbqmbzwwpqsbkp", "pcebzcmhoqaczocaffrgp", "psszxpaewcewkggucpwru", "hozxlcbcrclukmxexmxcr", "esslqeqlkgakuaomgeshm", "uxkpsceqghqwfllqhqxfh", "wzkwkwaapuqffrllrxuua", "ceemucqxowxopllgwcoag", "wllohwsgexgepbbcxwekc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"bywoyxuutyatywouuoxwra", "oxmbxuxxbobypoamawbubo", "yaxoattawmwtrmtxppouop", "bxmuwyuxuwtpwtrpymxxwt", "towymobpxwttuootrwtomy", "wxooutaraubuuxortoxxmb", "ypmbpxppbybtayumuobxby", "aybryuuypopuwoubxxrtrx", "yruumabxbmwmmruxaurrow", "mpawrywmxuryrpurxromau", "rwtpwoaamwwmbupaarotwu", "ttywypmarbrpmrpuxawxwb", "prbbyotppxpxybuumrxooo", "rautayomtabrawbatybwrm", "brouxturuxpaxpmatorrxp", "uowrobytroxuomxorbxmut", "ouwmuttuabatpbtwrrmxmr", "yuwtawwxrorwpawmpxtbtp", "maybtbumbwtxtpwtbtpmbt", "bapxauuatmtuwmuprrxoxr", "mawwyutubyxroaxaytbypp", "bwamwpuxmwrbwyrwmprybx", "yxrruaowoumuuxrwarxxpm", "rbwmptmraxptpbxpaporwx", "mtywyubrtutupwmxtrymaa", "brwxtyarxtubtoutxpobxt", "xrmraooatptyxporyotuwy", "upoowxmtmwrwwpotxoppbr", "wrmmpaotopxpprmtamrryx", "wrxxmbuaumtmmrxabxrrpt", "mpuyporrtpatpuyrryouwa", "rbatapymbpbpotrwbmarxx", "xmptmwbbammayrtbbxwpmr", "brwuxwwamomwpxwtpauyup", "xymmrwpoprurrymowmyytu", "mxxmprtwtbubbyuorxyypw", "umbtypwmtyxuyaxytrauty", "ymtmmrwbautrbyryaxxrop", "wwytypumxoxpuxparmtrto", "twmbwyxobwutwauwbyuato", "obwwaxtytaraabwyxwbbmr", "myubyrxtbypmyapybrpamt", "ypmwpuuptrtuxrumaawbwa", "xataaytyouwuaatyotaamx", "wpxyxatrpapauywoprxwbb", "xurwbwrubaumryrypwmxru", "ortptyburyrywpomrutoaa", "ybyxyybmpprbtpbuwpmtxw", "pmoumyymbabyxayorruwur", "trybwyypxbottayuapwxmw"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"hnoonfgwhwoddgnbkfwyshx", "rgywrbszzowkblxgzxkbygl", "zlhgzyoxxwgfybslxsfyhlb", "hknyhowxxbsdozokxldoxwz", "wydgwxnbbrgfxsoybofxdys", "ysnfydxbbwfrdkhsbhrdnsk", "bxodbzhyyndkzsfxyfkzoxs", "lgdflhsyyzfbhxsgysbhdgx", "bfdydhrwrfklwggxlwfyond", "lrnwlzwddghszbyrdyyznrr", "zfsxzgkbbrxdgylfbldgsfy", "bdfgbnysswgznrldslznfdr", "grflghsoodlkhzxroxkhfrz", "grxygwlndbdxxxlgdghrons", "fwxrfbgkkordbzhwkwdhhwz", "dkzwzsonokgrnbbfrnkwxhz", "bgrnrlozogfxzwwyxzgnskr", "hfybhgoddkbwgrzfdzwgyfr", "zxrfrgswsxonwkkdnwxflhr", "kondkzhllrdxzfwolwxznof", "dsyxdrnzzfxbrknsznbrysk", "snxwsoglzkzxxxgszsrnhly", "kwrokzxfsysrrrxkskdwnfg", "nhoyndfrrzywdlxhrxwdohl", "wfngndzlzforlbbyrlfghsn", "lfssfbgdldsoogfzkbdyrlw", "lsfhlznwwxhyzrgswgyzfsr", "lrkslbdwhzhkkkdlhlnrowy", "ngxknykddfwbyzsgdssyxgg", "hobxhwfssdxgwyfosfgwboy", "sfxhxokwkfbzwggnzwfhldx", "flgwghszslxozddkozlwyng", "orswsylglrhngddbngrwzfs", "yhszsofrrhdxrnfwxrhzlgs", "rfzlrwsgghlkwdofgokwzfd", "xrhbxozwwfbloynrwnlohry", "nfrxrgbzbfwdzyykdzfxshr"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"aylullyaauyyayalyuylaaal", "yaluaaalyayyyllayuauuaul", "ylayyaylluulayauylayllla", "alalauyulllaaayyyuyyuyaa", "uuaylaluuaayalaylualuuua", "ullluyyauuyyyuauayylyaay", "aylaalaayuyylalaaylaylua", "aalaylalalyllayayyylayyy", "lyuauuyllayllyluaayullay", "lyaylyyullyyyllyuyyayuuy", "lyulyauuuyuylallylyuuual", "lyualalulluuauauluyalulu", "aayauyyluyyylullalylllll", "laulluuaayaaulullaulaayl", "yayuyuyalyullalulauyyyay", "uyluuluuyayyluluuyluylau", "yualuuuayuyyylluyyullula", "aayyyyuylllyauyylyllyuyl", "ayulyyyuyyaaauuyalyllylu", "aulaaaululuyylyuluyulyyl", "ulaylyaaaualuyullyylaayu", "uylyauyyauyaalyuuulyylaa", "ulauuaullyylauayulaullla", "lyalllyayayuuauyayuyauua", "ayauayuyaalyuyualyaauyay", "auylulayyuyualaauluyyyla", "lyallalyyauyallulyalyyya", "aylaaaylylyuuluylyuyluul", "laylllayayauuyuayauayuuy", "ylulayllaylaauuyayulluaa", "alyuluyyyaylaualluulyyua", "uaylullauullluulallylaal", "uaaaullyuualyuyuyllalyyl"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"hqgfjdwzwrnphzfkjrcaghofk", "dkncpcwhzjjtnwqafjchcpkdw", "wdhzokacajrcdagdgwpzhndko", "adatokhtgjjftodqdjodwanwz", "cocatkckcnhqapjzthqkwdfaz", "odwazkorjwdncowwchjprfrpj", "fwgapnzfqokkgpjcgopfhpazc", "chcznwcdcdfgzpownfgdaqnzw", "hotpnjfhczqqtrzpttrhkfohd", "oohophkqopdfnoognpgorzrtf", "ptokafwrwzdcprkhazgnopjkh", "tfotdjcqqfwtzhpzqdcprzttz", "fntncjdfjzzqtdhpgzcfkcndd", "fhojqtgwgacwqgqfkfnaophtf", "nthdjzkokpcrfodnktwqhftnn", "hngdcztckpthcwrcqppzhpzqq", "qnznaktkcdajfgjprkgfdkang", "ngntqrgckhqzcjdcohhczhwdo", "gpdohknwajzftwagnpqhdtpgg", "fkocrqwkpjokocjfoopjtwzcz", "okoddghqpwozqknqawwqwwfna", "zoapwkdzctjjfwnrfwwzhwpza", "aocodwqptcokzqcqzfhnpdpnf", "nzrkqzqfwckorhchrrtfgqdfj", "jtjjgfdtdqozjatdkgkdrzota", "nphdozafqwtpkaqntrcdfofdr", "wwwwtnznttocjwaraqrwfqfzc", "kncrqfgktojjcqwacoqkpqrga", "fpfwdooztcdrtcprgqqtrcgap", "zcohjaojfwpdrfopkzgtrkdhr", "zqodfzkwrdwojhjqnfzpkkwna", "jjtapzczghhdapwnwhpwrtfcc", "hzwwafghdqkqptqkpptrngzht", "cgcdczqwcokqdrgtfkjzhqndr", "thpcarkajoktadnawoortorww", "oforgtfqkwgfawdanhhacwzdn", "fcdrfzakoazcnjafnzdpkgkwo", "rafzrtgpdndgfqknffranrnrc", "tfwphfhzcjprwnjnwwgzqhkza", "qfwgdzpqrthhwdanwtdqcdgpn", "jrcwtrtfhowpcnonccdfgtzfq", "jghrfqnjpwcftjwrttgoknzjg", "hfkfpwjzacfgtjkjnnqhtpzpn", "zpdnhjckowogdqfqddrgwhakc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"zqqzzmqtqqcqtqmkcmzqqccqqq", "ctckzcktzqcqckkmkztzqmmkmz", "kqqkccqtqqmqtqczmcktqqmqmk", "tkkttmkqkkckqkmzcmtkkcckkk", "mkqccmkkkkzktkmczzckkzckkk", "zmqckttzqmtmkmztczqqmzzkqk", "ztzqztczqmtqzztmqmcqcttqcc", "zmmzzkmtmmcmtmkqckzmmccmmm", "qkczqmkkkmmcmqkcmkzkzzmmzq", "cmqkcttmzttctqmqqmkmkkttkc", "tztqtzktqczqttzcqckqkzzqkk", "kzkmkzckmqzmkkzqmqcmczzmcc", "cmktckzmqzzzkkmkkmtmttzztm", "ztzqkzqmttztqczkmtztkzkqmc", "cqczktzkktctkzzmmtqkmmmzmt", "kccqcmcmckqcmmtzqztcccqccm", "kttkcctmttqtmtczqckmttqtqk", "ctkmcqqtzqqcqktkktmtmmqqmc", "tzmkzmqzkkcttzqmtzktmzkkqc", "qkqmtqmzkkqkmcqtzkqktqtmzc", "cttccqtmttztmtqkzqcttzzttt", "tctztcktzqczttcqzqkzkcczkk", "tmtztmqtzkmzttmkzkqzqmmzqq", "kttkkztmttctmtzqczkttccttt", "kttkzztcttmtctzqmzkcttmtmk", "qcqtqckqtmctqqcmtmktkcctkk", "cqqccmqzqqtqzqmktmcqqttqqq", "mkkmmtkqkkzkqktcztmkkzzkkk", "mztzqtkttmkmzcktkzmzctktmk", "tctmktmzcctcmqtkzctcktkmzq", "qzqcmkcmmkqkmccttkzmtttctk", "qmkccctqmmtctzkkmkkztctczm", "zqzczqtzcmqczzqmcmtctqqctt", "zkzmzkqzmtkmzzktmtqmqkkmqq", "tmtztmktzcmzttmczckzkmmzkk", "tctzqzzzqczcmctcmttqtzmmqm", "qttqqctzttmtztckmcqttmmttt", "qmmtzccckmcmzmqmtqkkqqzzkz", "zmmzztmqmmkmqmtcktzmmkkmmm", "qzktqmmzcmmqmkzkkztzttmmtq", "qtqmcqmzttqtmkqcztqtcqcmzk", "ckczkkckqmttztckcccmcmzkkm"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"pobkfpfoxfawowhakqeyggwmmnf", "qkbeobxsaxkhdopquengbsqnnyk", "swuhyunsshsqdwfxsffqpnqdpnf", "gsbqmqfeneanygaqkgypkpfyspa", "sqsgdngykpakpnymmwghmfumuwa", "sebsusqunpmnkoxsadbsagqkegx", "wahpnhmebyseannwunxyhewxxks", "xonaxbmxqnmoapwkyfkhamoduex", "mxdapxhsbpnknekwyusaogskuwu", "opeqkqbnfnhfuohqmoudmdbupdh", "fghyqhuamxnagqqfdqyxhdfyysb", "wxhfuhnwwxqkdxomwmokhnkbdno", "hnekfofgduxfxfhdaymonqebqwq", "neybwgwqsqwhuoqfadxhxgnfqqg", "axhdkpknqsgkgkaqywmpxuhoueu", "ogapbybwqsdbdboqefhygnaxnmn", "kefnqfbukokngemykmmppbngpbm", "xogbbuwydmqupdxsyusweumospu", "eswfhqxudkxusehdghpkqgefoqb", "fgqgyxesenxmepudquxnexhbwha", "auoubsfqfysefwmhomsyfsgpdgn", "hemenpkdpsyxbgfwmfysxqngbmq", "akfkphndnwhonyekfehwnhhsxug", "sdfmeoeaqbgegesqwnuodyfxypy", "mhxhnyqfqpybqdesxeypqywkgwo", "nmhuphbkseokmppnwpgehknggxo", "wmpauhxahmnskhphawhmabpwdfk", "nhahpusbsgudsxmfamugsuewoeq", "gdqxfsfakmwfwfgkypesdbqubnb", "fweopaphnhpudyhgqsmumafghha", "hbmaemngydsgbeehfeodmghooxs", "kxpfusfeyqohgnwysygbwspesff", "ehedmhhypdnwohdshadngegxfun", "pyfbmfskesyanmopwbxgfkpxxdy", "wbguhmaqyghegboxonkgekokeyp", "wmnsksupypdyewdsxwegxguemgd", "hnpoghgnkgymnmeyouxswwmqqdg", "ndapwywxsekwkwnsguhydmafmom", "huaumxsnsfxdsepwapxfsxgokgy", "dkxuqdqkuqhhsbfhumghssbppwq", "nawoxmdofyfhsmeoonmyokenbws", "kdoegesmamhankhepknxpxsndxh", "dyonapahsxqaqadswmepybofbgb", "esaqyauwpbmwsyyexyqoaxeqqkf", "aqdwnsngyfmnmnayxhksqedpeue", "fbesahaounxaxafuysdhbqwwqep"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"xxbexxeeebbebxbxxebxxxexxebe", "eexbeebbbxxbxexeebxeeebeebxb", "eeeeexxxbbxebbxxexxxxebbxbex", "xxxbebexbbxxxxbxxxbxxexeebee", "eebxbxxbbxbexebeeexxebebbxbb", "beebebxbbxxxxexeeexbbxebeexe", "bexbexbebxxebeeeebeexxeeeexb", "bxebbeexbexxxxeexxbbxeebxxbe", "beeeexebxxbbbbxbebxeexbxbxxb", "xxbexxbeebeebxexbebxxxxxxebb", "bexbebxebeeeebxxbbbbexxbxebe", "xbeexxbebxxbxebxebxbeeebexxb", "exxeexbxebxxbxbbexbbxbbexxeb", "exxxxbxebbeeeebexebxxbebebbe", "xeexexbxxbbbbebeeebxxbexeebe", "eeeeexbbxebebxbbebebbexbbxeb", "xbxxeexxeeebxebexbexxbxbxeee", "bbxbexxeexeeebbbxexbbxbbbeex", "bbbxexebxxbbbbxbbbxbbebeexee", "xbbeebxebbxxexbbexeeebxxxebx", "beexebbebxbexbbxebbexeexxbee", "xebxxebexbeebebbxexxebbxeexb", "ebbebexeexxxxbxbbbxeexbebbxb", "xexbbxebxbbbbbeeebbbxbbxexxb", "xebbxxebexxexbexbexebbbebxxe", "xexxbbexebbexbebxebxxxxbxbbb", "ebbbeexbxeexebxbbxeebbbxbxex", "ebbxxbexbbeexebbxexxxbeeexbe", "xexbeebexbebebeebebxexxbebxx", "beebbbexbexxexeebxbexeebxbbe", "exxbxeexebexbeebxeexbxxbbexx", "beexebbxbxbexbbxeebexxexxbee", "xbexbxebxbbbbxeexxxxbeexebxb", "bxxeexbexxbbebxxebeeexbbbexb", "eeexexxxbbxebbbxebxxexbbbbex", "ebxxbebexeebexbeebeexxxxxebe", "xxbebeebbebxexbxxxeexbxbbebb", "ebxxeebxbeebexbexbebxxxbxeeb", "xxxbxbbbeebxeeebxebbxbeeeexb", "bbexbbxxxeexebebbxebbbxbbxex", "exxbbxebxxeeeexxxxbebxeeebxx", "bxbbeexbxeexbexebxebbbbebeee", "xebbxbxeebbxxxbebxeeeexxxbbe", "bexbbexebxeexexxbebbexxbeebx", "xbeexeexxexxxxbbebebbeeebxxe", "exxexebeebbbbxbxxxbeebxexxbx", "exbbebbeebeeeexxbxbxxbbbxeeb", "xebbexexbxxexbexxexxbbbbbxex"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"bvdxxradrzzczhuvhecpxumehbvrb", "nbxmruvechdaxvzcevxbmvacpnxdc", "nbmhhremrccdcuvbuxdphvaxunbrn", "udzhheanhaebmhbnunddrudaruuxp", "hbexxnvenaacampbmzcrxpdzmhbnh", "nuhddbvhbaapaecuzxpmdcexzmubn", "hvnddcmnceezeruvrazpduxarhvcb", "vapehxvcduznxvbxuvhruzxhdznru", "rcdxxhudhvvzvpecpbzaxembprchr", "annveznrbmzenrapenhhrmzmvdrxp", "apvrrcuvcbbebxnpxhezrndhxapca", "draeeunauhhmhbxrbcmpexzcbdrud", "mhucvrbperanhauuuzhpaxadmpcza", "pbaeemvamnnunhcbhxuzecrxhpbmp", "rvzeamcbunxpzchubczvecpudrzcu", "cmndaxpzvhurnpevzpnmdprvbcnuv", "rbbcumbdvnmubdrxubzzdnmncpdex", "hemnncumcvvrvapeaxrznpdxahech", "zarmpbzhcvuebzxbvzpnvubpcuenv", "ceuzzxpuxvvavdmedbarzmnbdcexh", "drannxpaxeevezbrzmvhnbcmzdrxd", "ercnnvbcvddudxprxaumnpzaxerve", "xvzcmbxehrunbxdbrxmarubmhunar", "ubbnexbrhzxebruvebddrzxznprmv", "xbvnndarnadcencrxrbbuxbauxxmh", "zndamvpexrucdphxepdnhpcxbzdux", "nrvzehndxupmhnahunecuphexpmcu", "bcpmmxrpxeenehuchvndmuavhbcxb", "xzdrcnbahvepdbuhabdzrbphmxdbh", "xherrndcrdnvbrvcxchhmxhdmxxpu", "edahzrcunrxpdxaaabduxmxveuhbx", "erpdnmcuhxbvpcahucprdcvhzepch", "rmznzbcpbaemhbezxxmrdadcbnrde", "acmrrpemphhbhvucvzbnrudzvacpa", "xpdenuzbhvmrdzchbzdpezrhaxdzh", "evannmcamrrxrzpvzhxunpdhzevme", "axzdbnarvehcnamneabpehnbvhcpe", "cudbxnerpzhvdeapredubevpmcdep", "chvxrmapeudnvabepavhxanezcvae", "vhaddunmdnuzpdzmvmhhxvhnxvvre"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"vvqviefxqxtdgqvuahglkvylffvveq", "klldauydkktatvegiuiddggevtdddi", "kgflfxaaagqefhladeehkaahhdxktk", "ggqgkythfqiqxugdeaxfhglfuqggyu", "dyxeyxqghkqhtvxduuxeuvikfqxulh", "adkexietxqukteykiiiydxilgfqtge", "fttiggyixxylfvhuegediuuhvaiige", "qaetyekkkaifegtkauuqlkkffgvlxl", "fielayltaguatekeyyfkiayldvgtda", "ddfdtuxafqqylqdhgelivdkitxdduf", "vgflgfuqxeuxdtfviiflitaekufiyx", "qthdthgvakgqguhfyxhdxuikhghxeq", "lhhkaadkqqdvltfgyayekggftxkkay", "ieeuyyxuhhxdiftakykvuaatfluuyk", "vvhvlqifhfexdhvtyadkuvgkiivvqh", "ytauehufelkefaqahhyqtehuvdlfve", "aaeagxfueuvqheaidyhlkatlffaaxe", "yyqyxftaqaugeqylkievdyhvttyyfq", "fixyyqxqfaikiuvtutxuqgvfgtelta", "lgfytiyqtdatqfufiilugtiyvxdqvt", "ahxdvkdivegvixfxkkafhvkdyleiyv", "dhqgqdllluatqfglxetfdllffxided", "ivdahqiyiuixfdgkvgfklfqkaxvfit", "exltdftgdkqdglalffeaxdftuikgud", "avvueegullgxakqhyeytuhhqkduuey", "vlhkxqvfvyvgdhtiltdiudqikgldve", "eexevtiqxqgfhxeuydhakelaiieetx", "llkleuvikiadfklgthfqxlyqvvlluk", "kifauuetdadtllgxiuiqaxegekaagi", "uyyvddqvffqxuetlgdgavllteivvdg", "xhhtyyvtiivdxlagqyqftggalettyq", "laukhfkvhgqhvuduffldahfkxegvxh", "vfeilxhyyuqhyekexxvkfhxgdvuydh", "qqxqudfgxgealxqytklviqhvffqqdx", "hkutvdhqhghyiuaxkaixfidxtykihe", "yealfiagftdudaqheqdeiyitlledau", "kxtfeykukdkivtyhgyvhxvlxfkgvta", "qhkxikeeehdvkaxehllqgeevvatgug", "qqhqdygthtvxlhquiklfeqafggqqyh", "tuiguiyqefykyxiheaigatkyqyyate", "kkikatdyiygvhikquehlxkflddkkti", "lffdaakivvviyyxtqaqhdtkxklddaq", "ttftayqdfdxekftuglkhvtihqqttyf", "ddidflyhihtakidgqukxvdexyyddli"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"vqmhipqpsmdsverqwqsttsfgvdjuutq", "izthftxqfimxjtwivttuxetwmmfpvuz", "wqvpgfiquehzwjtemhexzhwsfrpiqvv", "gtpuigjwmmsqupxgtxhffjfrprvmufm", "jwshqrjjmwpuqhwumiswimqhjugteme", "xruhvprpmuwmxdsrermttmzixwgjjtr", "vhfvmhrfisvzhtjjhmmjvxvurtqgzrw", "uheiwdhdgezguvshjhgqqgpmuztxxqh", "vmtiqwvdzwiiwqtzqureptmjrgxusdu", "xgeptqiuqsxwsehemzhrswmmvgvxvjj", "tevwfxmzxdtsdvjvgijqdsggrertrhh", "xrejwvdrimqzxptmfqmuzqxhvgjdree", "drgdiregjsdmrhffriifdudwehqzmev", "jzrdfiqvitjgtrwrxswutgxxhzhjhpp", "pmudisjmgzxtpwfzqxzrtxpeshdjmuu", "fqzgedvjdifwizszxhsmiwxxtqtftrr", "xzqhefxvjfhhfeqjeptdgqzutisprvp", "vurjzgvvfushzjuhfdrudfzjvhxqtft", "gsjidfggxshpdispxrjsrxdigpqwzxz", "dftexqddrfszxefzrwtfwrxedzmivrv", "gjuwzdxvdpghpumusfmrphssejegeii", "fuziqmsuxedvfgwehdejvdfrmpisuzz", "vzhsegzgthitvquzpztmmtjxvirwwmz", "xdhgjexxvdimjgdmvrhdrvjgxmzqtvt", "rpewvqrripgxvwpxidepdivwrxmusis", "hjdfxtsusmszhewtqfwppsjjisrhzff", "mrtmqrstdpmxrihhrqqhmumgsiefxsv", "mevfugzedqxjmrhqwxqsjxmtgifzevv", "pqgdfpxjsswvdghpqhuttxtmgmisdts", "jzxvrxtwrjstgxdjpxxfthxdssrmpfz"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"ixtjhlxtiastpvyjjatzstjavzpviszv", "glzhpijiihvsmiaxpxtpsptazamaalyp", "giynpvsvvnthuvlxpxzphpzlylullijp", "zylgmhuhhgsjxhapmptmjmtalaxaaynm", "zvinljxjjntpyjamlmulpluaiayaavgl", "mjyniuauuntzgupvivsizispypgppjli", "lmijnsgssjvxzsapnpynxnyaiazaamtn", "xmluyninnugztnvhyhayzyavlvtvvmjy", "mgphhtlutszuuttsyugnuxlmthpppzzl", "ivmjzxisxtnssxxthsphsuliaammmnvl", "hvnpiylyypzagyxtitmiaimxnxgxxvsi", "juaznhyhhzxvmhgtntinvnigagmggusn", "hmsjtlvlljuialngtgztitznsnannmyt", "mnpzzhxshgasshhgvsntsyxmhzpppaax", "lnjhhmxtmisttmmiutnatzxlmhjjjssx", "nzathjmjjtgiljxyhyphihpxaxlxxzsh", "zsnpltxttphuitvglgylulyvnvivvsjl", "ysuvlnannvphinxzlzmlhlmxuxixxstl", "mtjllpuipxziippxaitgivumpljjjzzu", "ijgtmnvnntpaznyumuhmamhygyzyyjxm", "mhylviniilzupijavasvuvsjyjpjjhgv", "pjgaaymzyiszzyyivzjtznmpyagggssm", "lzpaughgganxjgsmumtuxutspsjsszyu", "ajgttnyunimuunnihujpusyantgggmmy", "hnsttvuzvmizzvvmpznyzauhvtsssiiu", "jytsluauusihzupglgnlhlnptpzppyxl", "ihtpynxnnpzvmnguyujyvyjgtgmgghsy", "gnsyvplppymzxphavajvzvjhshxhhntv", "ztgnavlvvniyuvhsaspayaphghuhhtxa", "gpjyytvmtiammttixmpsmuvgtyjjjaav", "ivmusthttuyxptajsjnsxsnamapaavgs", "szygpjnjjghitjxapaupipuxyxtxxzmp", "ihpxtajaaxmlsazutuytltyzpzszzhnt", "ynuggijpivtppiivspnlpajyiguuuttj"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"cxnqccibtgrxxcxhemhqltqpluyusexpj", "fjawkcwanqthxiloiomwrdtnycjtaeale", "rthcouchemzkngpjgjxcblzefutzhwhpw", "lqrfxoekwilkzdfrufufwoolbelhdtepn", "mwkhxgkcpqmkpozrnupciqjrocdapjcbw", "zacoxxfoatrjnghfojdrkdwbqfqqwonxa", "zsekiokeahzgspdtnxmktncahosdgcedh", "cqagnwrboezxdslwxqjlolktsdgjhkumm", "epilybpjbbhgbbxlbjflorfezqlcbmimf", "yjqcibgduwygujwkspudcwekndhesxdzj", "cdstgssicrioqdoxkzxoajqktjwomaash", "yeyuoulnjanbycyykyqsdpwynchtqkgda", "fnflounpwwqdwwalwpclkzctmhfswsmel", "wkjlqgjewkzzupyunfmykayilacyzkscc", "jldhanhdtmisgcbqcqohkxitrnlidydby", "idkjgekcnafnpiplnzfkaplnrzytrxmjf", "rthkrmdbnlaitrtywpojnokqnizifotbe", "zopnfxnplukrmcybcbhnqikltxokpwpyw", "pnbbyqoyuzohaputkgwjidkbywphomora", "egmxqcrzhrrdklafqfsxbnphjcgpzlzal", "flfdmdrexsekfnffzfpcojifenhwpztos", "wcbbsnosyzojmwyflakidxlbskwjogoum", "moczsqysupynwbuqgzfyekhcskmnhtulw", "fhpeowetgsdngejbewxqnbjhmuydxkkhr", "nhxbwecxjoskpopaobzcztsjqeusxaojd", "lkjzllwscytkklkngunzpczxpdidrgkxq", "tsymkdyoectyenlbigeohcabnowpeaojs", "jxwmqsyqjiyxnhagbmeylbswqbctjajdn", "hlwaurgpkjmccurkceoskqrnoppsiaykj", "zwganxggjhngfkpupyjfreitkfsmjifdw", "ytnqsnnmykmwxtwireiwucxrqcbwzuunf", "kusitehmgnfzztegzbxygjecxmmywipgn", "tzlxallstzgffjuldyzuzbukxbquizncc", "upzisoqjirekjkkublntbednrsaksathz", "gqhwwkxutkdhznsbjyyxpzxuoblputqlt", "ubxayexjitgikukwisgxtkwihslphrzag", "izpekyupdiqkkgbdrwqndsfmxffnoechi", "jditastiluwefnpznzgtcywlrsdwiqipq", "skzxalzzpiazfogugdpfchreofytprfbk", "qtxfyuaxiqwyykrishwlizcgpcclmfdbq", "aydgygehjxhsulaadamtfikahrozmdlxp"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"foytttbyfbbqfybtyqtftqtffqfyffbbyq", "bttoqttqooqtooqqfytttqfttqtbftbqbo", "obttfotbbyqffoftottbbtboytyfttqoqb", "bbbbqbybttbybtqbybqyytobbyobyqbyqo", "tbyobtofyyyybfqtqybtqfytbyfqybtqtq", "qtooyqfttfoyyqooqyottoqqfofqqobqbt", "ffotfyoftfqqfbqqytbqotqttoytqqbtoy", "ootofoobyfofoqtqtyboybbttobybyytbb", "bbqbbbbqtbffyyyyffqbftoyooybfofqtf", "yoqyoyybboyqyfqfqbtybtbqqytbttbqtt", "ybqqtyfbbfqttyqqytqbbqyyfqfyyqoyob", "qobbfqtootbffqbbqfboobqqtbtqqbyqyo", "ootooootyoffbbbbfftofyqbqqbofqftyf", "ooybofyoboqqotqqfbtqybqbbyfbqqtbyf", "tqqottqqtoqfottqqfqqoyqofooqototoy", "yqoobyofqffbbybotooftfqytotbotfyfq", "qqqqyqbqffqbqfyqbqybbfoqqboqbyqbyo", "bqyqtyoqttyytttoofffbqbybftftbytyf", "ttqbqftfbbbofbfofqytbfobyqbftyfbyq", "oqyqqyfobqofyootqtqqootqbqtbybftqt", "bytyobqfqoyftootbytbqbqffqtyqqyqoq", "ootftbqtfbootoyytbqfqtottffoytfqyo", "yffqoqqoboobbqoyqbfyyytftttobtffoy", "qqyqqqqyfqttoooottyqtfbobboqtbtyft", "bbtbbbbtybooffffootboyqfqqfboqotyo", "fyqbyfbtqqqqytofoqyfotqfyqtoqyfofo", "bboybqobybtbbftqqyftoybyyoqyttfqoo", "ttqoqftfoooyfofyfqbtofyobqoftbfobq", "fbbqyqqyoyyooqyfqobffftbtttyotbbyf", "byyqtqqtottooqtbqoybbbfyffftofyytb"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"fcpezffepzzzefozzzppzpfccppeefooece", "ccfccppfcoepfcpezeeeoecofpppzpeppcp", "ffepeopopzffzfcpopozcoppfcfpfpfpzpp", "oofcozczcpoopoeczcepezecoeecfcocpcc", "zepocpfzzeeeefpoffezecoccppzzepezfc", "fepzpeopzoeeczeffzffocfopeeecofeeze", "eopeefceepffzozczcoopopecofceozopoo", "zpozzppocceefzozpeezofeccocpoofoffe", "cfefoepzzzepeczofoczocofzopzefczfoo", "foffezpffpzfeoepepoococfpocpfoeopoo", "pocpcepopzfofcfpepfzfffzoffpzpoczep", "oozpfzfezooefzepceozpfpezoezzzeozcf", "oeopcooccpcozfeeceepzpzcoeczefcfffc", "eooeefzpezfepecfoffozfezeccczcfcfec", "ooopecpopzfpzofpcpfzfffpoffpzpoezpp", "zcecfopfeoeofcpzfzeepcpccepozcfoope", "ccepezpzpfccfcopzpzfozppcocpcpcpfpp", "fzpefzzpzoecoopfzccfpecoepooppepeeo", "efepecpopeffofzpcecozcppfzfpfpfpopp", "zfcefzczecpoppocopccczezzpfcozooppz", "oecefczpppczcopfefopfofepfzpceopeff", "zozzcpfppopzeocfzfzoeoezfoefzocopoo", "oofcfececpoopozcecepzeccozocococpcc", "poefzepepooeocefceopozfezeeppofopcz", "fcpozzopppccepoepfoeczzpzofzffozppz", "pccepepcfeccpzezoecezeepefcopzeffpf", "ezzfefezofzzepfpcfzfpffefozcepfooeo", "ecoozzppepcccpofppcfczopzoefeeozppz", "eczzppffeocccfzoffoecpoppzeeefzpefp", "fezpefzfpzocooczcozzzfpffoezcfccoof", "fepzoccpzooozczoofppopceeppfzcffpez", "eoeezpzfpfpecfpzzzeopocezoczooeoppo", "ozceccozopfzfceceofffzfpzffopozcpeo", "oczozcfzofpczocppfppfepfzcccecpccoc", "cczezoeoefccfcpeoeofpoeecpcececefee", "pofpfoefpecofpocceccezcefooozocoopo", "cozeoczcezpfppfzfpzzzceccpozfcffppc", "cfpfeppeocffpeoppeepeffepccoefcofoz", "eczezccpoozzfepezzzeofzoopocppfpfzz", "ozzpopozepzzofpfcpzpfppopezcofpeeoe", "ooeooffeozcfeofcpccczcozefffpfcffof", "oeczoozepfzececepoffocoeefcpzpzeoeo", "pzzppzzcffooepzpzoopoeofpcfzcceceeo"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"mkarmigvkmpqglbpplyuaikbvmirggzqvarz", "ygrvzrdmdumkbxydypzgddggzipribpuamkm", "bxkzdkiyigyraubibpdxiixxdmpkmapglyry", "ivgaudgkxkyivulgvyigrlukdydqxkmlylqy", "zaqigdpbamkrkrgkkrvuxdagbmdikpyzbxdq", "guxmkbxyvyigukdxuigxrdkybibzvyadidzi", "udqgbkvydbrmrmirrmadqkkilbkrvvzuylkp", "rdrbuqauqkuklmmmbkubqrqdbaiguadidrym", "maxziglyaiqvqvkqqvbpxgakyigzllrmyxgd", "bkilpraxkyvgvgpvvgmuqrkpxyrlvazbxqri", "qvqmpdupdlplzrrrmlpmdqdvmuygpuvyvqir", "zzxgguqkzudmzqakplbqgdiyidzxgakzaqib", "ykyxivdivzizrgggxzixvyvkxdapidkakymg", "pvylgyadabdzqrpapmgvaavvgkmykqmbidzd", "zuuymgdlkzmrabuxkvvggvblgmlkzxxpaqma", "rzzdpvlbkrlgyxzmkuuvvuxzvpbkrzaiyqpy", "vbmpimdzdxzaugvdvyikddbbikgmkuyxrzaz", "lypgkazyxlzdubkrxmmaambpakyxlpiquvku", "prgarvgxmxqpyrugyypukurxlqzqmxpuquvq", "zyqbaziryzluyiardkgibpvmvlyqbaryaivg", "agmiluamiryxdrrldmivgyuiilxugpvavdgq", "ylgvkgmzmdzbiqymyuklmmllkpugpiudxzbz", "ilxgprvluivaqkpmuddrrdkxrpllixzdqapq", "mlrqxrvivdibaymvmpxlvvllxkprkapdgibi", "mbgukglalxaqzdilmrkbllbbkprgpzrvyaqa", "duxavyxbkagduvrxugbxzrvbygylkbaygrlg", "qkpxilmdpgxqabirqymmqimluvzgbyqxxvdi", "yivmxyukiyrxiukmzaqumlpapygvmxkirupq", "mazrkzbbvdbmyumvmxkavvaikrkzrixdlbqb", "mvbzlpdkvyagaglaagrxqpvlkypzadimkqpb", "xpgrlgaariaxbmxrqklgrrpblvlgvbkiuaba", "ympaipvvalvyxqyadzipaamxiuipuxzlkvxv", "xurvgirmambxugzbubxrdygmibizamqybyzb", "plrxqpzulpmqlzuxvkgzxiakapyrxqulmzag", "mxzibbmzikgabkkvuziyxgbdivabxqymyuxl", "vgiixvykqvzxpymipdayxlmdgvrgixkqzymx", "qpybuyddxldqrkqxqgupxxpaubuybaglvdmd", "vzzkivlqpvaiylqkyxglirdxdvbzkiqpaldi"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"mkrktmtotnoykpkwjuskprmvbpjpunbjmapma", "bokmuvmwtbkuwrwrwomnwtstbtywpjkkthmmt", "nhvyskyawnvsamamahyrawuwnwjaobvvwtyyw", "tonjyrjphtnypupupojsphmhthkpwbnnhajjh", "bpnpjbjtjmtrphpkyuwphnbashyhumsybvhbv", "wktujaurswtjrbrbrkuyrsmswsvrnhttsouus", "rtaynuyvjrbbbbvbvhysaoporowvtkautmbyj", "hsbhvuvaytsmpmysnrsyuyyjpmsymmnrvrphv", "sskrjkybbpmjharhjtmjwmrwjuwjprjrrstts", "ntwahmapunwhpopoptaypukunuvprswwujaau", "owahjsukpowmhuyppukytupmbrbotwuuvoyyy", "hmnmyoavbspmrtnnhvpunpmkkysnopapkahyu", "uuauomnjwhbrvtwbpmbavbhyvrbwrwpmomvbo", "bsnthjtpybnhpopopstrpymybyupawnnyvtty", "umbnaonvyubavpvpvmnsvytyuywvhjbbyrnny", "nhkhaopyubshmrkknystkshvvabkospsvpnat", "ovybkhbjtoykjpjpjvbsjtatotrjwnyytubbt", "ohahjojpjvpthrhbkyshraomwrkryvwkourou", "trakonnjmutkopubbuoknymyronywwskouuoj", "yybytnkjproavhpownobvoruvaopapwntnvot", "nwvpyjjbuknpytkookypjmumwyjmssrpykkyb", "vkwkmvmumyubknkjhatknwvponhnayohvsnvs", "tmpkjokyrtpjywywymknyrbrtruysapprhkkr", "koupwyprakuwrbrbropmrasakatrhvuuajppa", "kkbkajnyrphkrsouythtuhkyontujhnhwnkav", "uajakukwktwsanabvmranjuohnvnmthvupnup", "aavaopbsmjhuktmhrphvkhjwkuhmumrpopkho", "ssbyubmkypwvjwyjvnvvrwyrvnrvpysmysnns", "uvpvbubobmoyvwvhtskvwpunawtwsmatujwuj", "vyovrurmapywbwaynhyauaakbwyawwnhrhbvr", "wtnomkoupwnmuauautoyupvpwphubrnnpjoop", "wotapnnbyrwapkrmmrpanhyhopnhssjaprrpb", "uusuorwpyvnuamjbyrnahnrsjmasrnwnywuov", "kbpnyvnwtkpywjwjwbnmwtatktowrspptunnt", "waswhthmybakokyajnaytyyuokaykkjnhnowh", "hmwnossjavhnorvyyvonsuaumosuttpnovvoj", "vwhktokruvhtrsrsrwkbrujuvuyrpahhumkku", "bbtumtovvphmwruwmjhmyhuymnympumuubjjb", "yprwbjwvoyrbvsvsvpwuvotoyokvmhrroawwo", "tpkuhbuojtkhomomopuaojyjtjsownkkjvuuj", "ambnvonwtabvwywywmnhwtjtatuwksbbtpnnt", "watvvutpjhntkaurovusypjorwvawynkaaahv", "johjyrytkwoapakovbokrkknpaokaavbybpjy", "nobbuwbjrarmwomkthmobvwwhwnsyawopvmwy", "oovobsyhpntaumptjstvutnkuatpapjsbsutb", "ompmsosvstvnmhmbkyjmhpowahkhytakorhor"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"tfupttadudadydyafuaciifdipyicatictaiyf", "ftyiicctdptudupdyaydyucpyafdatfadftcct", "ftdpyuptaifyupdficiytutptfcfyffctayadt", "tpayttuicuuftfduicudpuifpyaatuacdtupai", "acaipuiapttfptudidfuipccyicpyuiccutdpf", "dpucfuifpdftdcycaacydypftatcttapiuiccu", "cacyufayiyipyctaadptcccdudiauptpptctda", "captccyfiyydcdcyfiyiayfdatuucfpyaciadf", "aydffttyipyiiupidauidupidcaipfacapycty", "dcfypactycttfafpfafddapttyudtyaiiipydc", "fdufiiyyuuyafctpatttuiddafayfdyddfpddt", "ciuipfiucfytppypuucitciuyttcffyfiufdyp", "pdptyftpyiicyifatacftyddutdyuftddfiayc", "dauiddcftccpdpycftcyacfpaiuudcutydcauf", "dadcipacucuycdfaatyfdddtituaiyfyyfdfta", "ayfaciuyiduuccappcdaictffdcupacicdcfiy", "tadpttyuiyyftfcyuiycayufapddtydictyadu", "yfiaciyfppufuaccdafditcfappafciutadccc", "aduiiccdfpdffypfuayfuypfutafpiatapdtcd", "cpcyityciaafiatdydftyippuypiutypptadif", "iypfupiyaadydfuucfycptuyfaafyupdtfcuuu", "ctifccapdaaycyuapdautapytfiicaiducatip", "ypittffpdupddaudiyadiaudicydutycyupcfp", "fdicutdacdaaitiuitifftuaacpfactyyyucfd", "ifcudcifyytftuddaufacpdfuyyufdctpuaddd", "afdpuyfipfiidydudydaayuiipcaipytttupaf", "iftciiaduaapipiaduaufadpfcyyidtafiufpd", "yciffcfypdacptyictfiiiytiadactpudiyyuu", "udtyuucpacciuifcpacfdcpidyttuctafucdtp", "ypuafucfpyftyadaiiadydpftitattipcucaau", "pifpttuuffudpcyadyyyftiidpdupiuiipaiiy", "ytappddtfutcfcufaiafacduaiyfityifytddt", "ftiaffpcdppufuypcdpytpcutaiifpidyfptic"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"jhahjtqaftfzabfjyrrnlhrecdllmuqrcffufab", "quhrqagdfwkfzbmqcshayddybkfyrdbmncwtzcg", "jhgghqatrbwakameamyjdljeaysjbzalsmcjysr", "flqrfdyqkgkuqlkstttabrtuqlhhjsytskkwkqb", "yhratajsmgmszhmacredkqeszhrrcajgamcnmzk", "zneazwcebhykenbslllydalkezqqfsclsbnmbed", "erlljmgcdrtlkwjbeaewrcmkfedhfadwbawjgws", "srumscdukzfburkynnnfwmnbusqqgydnykrhkuw", "yhkyszmnderdgbcslmhztrmtzrdtymbcwlnqglf", "wqjdwmbjlclajqlfkkkghdkajquunfbkflleljh", "wgetdkrhclmfjwdqdbbtmywnecgfackjyccmcmj", "ftqbfkgqdzlyqtdmhhhlubhyqfccwmghmdtndqu", "kamckrjmsdsemasghhhtqchemawwbgjhgsszsmq", "ramyrlbmwtncmawjkkkneykcmrffqjbkjwaswme", "jhhqfbuwuaqksewzllgurfbtfbqugyccshaukwg", "zlwzhgsnauracbmhfslgjlsjgrajzdbmcfnmbfy", "wmqwsjyzghkgdfbscymjnkynjkgnwyfbuczrdca", "qlahqbsehdzrrzgghjhhgdnccrggmcklkjaqugk", "weskzrqyzjqsrrctguqetwyddkcthdblbjqzktc", "wqaewtmadlkraqdzhhhkbehrawyyjzmhzdqcdab", "tqszfjkdfelzjgrtbmlqftdyyzrhwyaclelfzhr", "yhdhyngdunufdsuyleekzhewrczzqjgeruujuds", "yasrylwstftjsatkuuugmrujsahhnkwukttztsm", "fmeufhnezazqemzkllltbulqemyycknlkzzdzeb", "lqtslghtnykmtqkuccckfscztleeruhwumgantf", "eznjersnlclynzlkqqqgfjqynzbbtksqkllulnf", "bywkdefudgakelsbjraydbucckshncmtagadkhs", "mcnymrenqkbghwmjwwwtbywgnqcfsqkwjqqbqsh", "sydmsgcdaznkqusbuuujnmukdayhlazubaanalq", "dubrdqgbnwkfysdmssslkrsfbnuacnwsmnnkncy", "jkbqjnzbetesbkerdddmuqdsbkyywrzdreeaebu", "zfeldqrcjkunyzdmdssluazwejfnhjqyajjujuy", "zuwnzjqkhfghradzebwjmkkmaghmnkadlefyreq", "fwagfhbazqzsawzutttcrgtsawlldubtuzzezar", "adgkadtgwzwbgmdtmmmzykfegejjhtngtwwqaky", "ghqtsblugfmqjtjgwwmhsgurrdjncrbahzmzqnj", "zfquzaskcyectrbzgdqajkkjrecjukrbmgyhtgs", "gufbzamczlmfehjdqnmndgckkbjdwksuslfzbds", "thfrdulbwgywejnddlqttlltbywmrljnzmnsfua", "mwgcmbagzezugwzrjjjshcjugwttdrajrzzkzgh", "subzscmbywyfbuyjkkkhrzkfbulltjmkjyyqybr", "mgglmnfjnnngjdnyayaeuwayjdttrsfeynnasju", "bffhqrygyzhjndgewwmylqrkqrhymsuunfzyjgm", "qbtkqsytawautbajgggzhkgutbeenjygjaamath", "yhkbyngcldalsmzywuknfccfmalfbcmztwdqswg", "ugjsdyamdzwsylfubnwgdumccsfkecthwzwdskf", "tgrlhyamhcaryyzksuagktmqqlzkbqdfdcahlkz", "cdebcrmegugtedgkffflzbftedaajkmfkggsgez"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"uzzhxzkswezhinpnwcrifiyexnhhenqdmdhisxle", "tzpeqsuxzytynkksfrbczwthhiwbeebgwsqbdbqd", "wedngxrdeefixkduduyrpfsxlbtcmupxdmcyuqmb", "hncgbtmeyyhbiwkrdqtzmgldxgtchftwhmlinbbd", "khxgxhuhcwspqpcruxuekripwmmpwwgzsgzscwik", "negwdtsuyyndbhxqmftpswimlwtgncthnsibeddm", "lbhbcbbczquewplxwegeiqghgmbfsnpnhxiydllm", "khsgqbmyppkqixtcwzbemgrwlgbsknbxkmrihqqw", "thxnsdrdhhkidwxexezrpymdglyquepdxuqzccul", "diemtmlfgufduufsfllclplsfwpqtbzklixndwel", "hycpfszwkkhfugbtmdsezpqmlpschnsghzquyffm", "qtrysyxsphsqhhsusxxzxcxuslckfienxtbgqlrx", "qytmkmsrfnrqnnrbrssxsdsbrgdwkilpsyhzqgts", "ypgbhshluyqkewuleklwmtlhddhesnhwnyltgprl", "ntxbwrwsinkcqfisqcsflyswggwqrewfensyxths", "ezbsbztzpxmqiqphtbtdehuqxkkqxxsnmsnmpxue", "urxgpgbphcpuccpfibbrbubfpswtyzwqbrkdusxb", "fqzxyiknhhfyecspdtilkxwduxizfgicfkweqyyd", "piykudmmgqdqezbmmmdibnkbfurihgunrkbdembd", "irxkgpmxrruzpnxsxsemduhpycwtqsdpxqtesbqc", "fdudlddlgpciyrfqyikizpkuksdemhrhuqzntffs", "ickryxcsxlbkhffpueyuiwzftheuwufgnznminri", "smiunzxmhndferhmpgtmewwwircuyyfpgzfmqdlp", "hpscdlzgmmhdwyxrutlbzceukcxshnlyhzewpddu", "htrcgbuwkkhgnqpmidbfuczilcbrhebqhuzntggi", "hrsyzcnrpzduqmprtwgrqbbbsmkyiiutwcurldet", "cwmidirdbqdcqqdgdrrhbfrgdufkyepzrwntcubr", "uhcwmfmdxugqeyxdeqdykrdmssmefnmynudrchzd", "wilpnzrihnfybghisumibxxxlgqpttysuzyikfds", "dhdbqwculyzemiekununldeynterppzikwxxblnx", "nwdfbtzskknbcliqyxtmzfhyrftdngtlnzhcwbby", "flmukblebzwmnddigpkgfycdxnpgygdhrcrqfruf", "fsgwmbduzzfmtrkilebydwqlpwbgfcbrfdqtsmml", "kpxuzlpqnkircynqcrqyghqrffzclezyekqhhpdq", "uwifxqpiwwgmqeisiszpdgtqbrcyksdqikyzslkr", "tmcqdbnfhhtdexwlusbgnqkuiqbctrbxtnkemddu", "rkgbezyyhuzunslyyyzklfblwemkphefmblznylz", "gutzpspmlzhkyxlmykmxdnmpsspybrpxrgmntuem", "dttyxtiuqstymclcqfgmhmbsxcyyscwnrnymuxes", "miuecqcsnmbxdgnsdxsgyrscttcdqkcgkmsruips", "rtenmpztwmuigdwtfxytgqqqedsnhhifxpitbucf", "sczqyfirppsyuxldkgftiqwkhqfzsmfxsiwucyyk", "hkfycskrlhetxblrxtrbzgrtiicxsucbuhrggkwr", "mfedizssckzkxrnssszfnydnwilfuciyldnzxsnz", "skwbthlwkkiuhfwpwpmlziyhxqcnepzhwenmpdeq", "cylmxnurttcxhdkbfpnzumsfgmnlcendcushyxxf", "nkwumzxgkdndlccztyeskfniiqfeuuebfzmehemh", "usbrkyddcqyquzfdddxsftrfikgsmiktgrfwudfy", "qqreteedpgdfsytbchugyslcucskucedqqlgiwgg"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"vdqiiivalqyotqwkqtgedbgiknobdpeamopeqffye", "fjjhltfrzypysjitygukohobuexlfpikvyrmjaalm", "pzkinoiatttyisrtsvjpdrahspyaaaifyxmlralvk", "ksfoogdysgnrghtgdrelxehwvqhlomsksaviyjenu", "hkstdojjqzmpdvkjknvamirtaapeggjjmjrwbedto", "vnorihrmuukgitfutxskanmrtkgmmmjjtjzqfmxha", "wkagnbwhjufpmktoumvldvkfodnbndsryviskhhsd", "bonoldozbayplqkiknpeytmoeepjzziiyimfhjnod", "tlgajqbkvsxajdmmhkjhtliyddhhbdmvoiswxjays", "wmushjeosizqziehtusmdmwqnxyyuvrhnqqwuwxzi", "lodjygjxvvvkkurxubezlnxzuqwvrijdktsprtpxi", "xunzysmdpoerpmufelhidfhmxhaxsnjyxnuknuqhp", "goiohzosglykhquvuiknywmonnktssvvyvmrxtioz", "tdmajnmqfewlsixqixjzwdxvqqnlqavjyuvewwfnl", "azirriauslquffelldrpxgfouxdnrxzbjgxsfyyfk", "ifftugzmjmhgofjekbjhrswahgpaotyebetlzyavn", "mousynuvllqrtkqikjyiqoyoiizriqqysxflqeinr", "ksrpipazqobbqhsrbnlflrlbflwkpidikesgelulq", "xntmwamkibkraqnkqdjjfnkmqxrkkkmvrvbqgkiut", "vopxxivdfdpahhnddaxrgfhoggilxgotslgkhjjhm", "uibnlzpxhdkyzewxehlmkixpxkvjxdptrtndsxhvj", "nbrtfxplquhtfdjjilfinbasddiipdjqwauzhftsu", "urkppjeehbpiznjfrosbwofrbbjxlluigefjdxzps", "epsyiwbnamgkabplgfqdnlqbeqoewsviespjsprqa", "dgqnwzlrbusjzmhrmbwysgrlrsexrulvovnuirbex", "bhlmztgnywsoyghdsixvndxgbxrbtlazblhflhqxy", "akehwfdilstrfqxiqlwmtkiditnvisdgoghsyilnv", "nkxxydztpkmbyvhhgsyankufvbzxxvhtlpokmpbul", "qmmeppqvlxbxamfzxaajugmkztwpwvhrdxvhmrrhh", "nimxkvsmimgzvufmtpkjqzmomlqqmwqbebxrwmism", "wepohodskluukqepugnbnpnubniwohvhwxetxnynk", "zpboymoqlppsyiuvxtsrejqoryveqqhhbhkhmutmg", "ggfflpbvmnkyhejzvqfksvvtkyyshfzzuzrqbvhps", "jdkwbtuavitqvsdltmzlxlgusghsplnbskdykgrgv", "qmxukusdeorrefmxrghlhxhrlhbqukakqtmpthihe", "xobpzepdlmdrejidvoangidnjbrdddphrhwjvdlbq", "ogkxbqemythjyegwhvdnmwdeodzoqksbokgfkgady", "qiawpzkpfmzmhzmlhfpezilnlzjqlqnxlxwvglfjl", "lndikriwjnoukpfzfhuoxvwioouxwwyymytqawhrx", "zfnjjwuxpxamwbexxmjvdpbfddivjkfhzldrborak", "ytmazvoudelivqruqdzhltuouljgueobfbaexudjg", "eyvifgqtikwbwkqfpviydyeblmoovajflbbevemwk", "kizndxllhrqydqdlibqtjmsittfeaakfylsfwednx", "obvyryxpwuaawlbvaihshvhasheoyrqrojbtjhghw", "nllittnubfwfslozfssjaylkzphthuvdrfuvlddvv", "bqnjswjkyyfhsgoygdxftqkjgfhkkkiigizmokdwt", "etfanqajpujxqztjzlmmwtjazexjjjavxvuzgjpsf", "imkxyrpzvdljrbazbvyflmzpzlhqzdpwswxdozvhq", "zeehvszagnxnrejsndlmthtplyivzxjmonakeqqvk"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"oohohooikhiiohohohokkkiokohhhiiiiiiooiohhh", "kkikikkohiookikikikhhhokhkiiiooooookkokiii", "kkhkhkkoihookhkhkhkiiiokikhhhooooookkokhhh", "kihihhoiiioikhihohoioiiokhiihihhhkkohohoik", "iioioiihkohhioioioikkkhikiooohhhhhhiihiooo", "hkokooikkkikhokoioikikkihokkokooohhioioikh", "hokokkioooiohkokikioiooihkookokkkhhikikioh", "ookokoohikhhokokokoiiihoiokkkhhhhhhoohokkk", "hkikiiokkkokhikioiokokkohikkikiiihhoioiokh", "ooioiookhikkoioioiohhhkohoiiikkkkkkookoiii", "ohihiikhhhkhoihikikhkhhkoihhihiiiookikikho", "kkhkkkiihhkikhkhhoioooikoihkhkoiikikkikokh", "oohoooiihhoiohohhkikkkiokihohokiioiooiokoh", "iohohhkoookoihohkhkokookihoohohhhiikhkhkoi", "iikikiihokhhikikikiooohioikkkhhhhhhiihikkk", "oihihhkiiikiohihkhkikiikohiihihhhookhkhkio", "kkhkhkkiohiikhkhkhkoooikokhhhiiiiiikkikhhh", "hhkhkhhiokiihkhkhkhoooihohkkkiiiiiihhihkkk", "ooioioohkihhoioioiokkkhokoiiihhhhhhoohoiii", "ikokoohkkkhkiokohohkhkkhiokkokoooiihohohki", "oikikkhiiihiokikhkhihiihokiikikkkoohkhkhio", "hhohohhikoiihohohohkkkihkhoooiiiiiihhihooo", "ohkkhhkihikhoiohikihkhhkikhhiioioookikhkho", "hoikhohioihkkikkoiooihihikokikhkkokoiokooo", "kihokikhihkoohooihiihkhkhoiohokooioihioiii", "hhkhhhookkhohkhkkioiiiohiokhkhioohohhohihk", "iokhioikokihhkhhokookikikhohkhihhohokohooo", "kkikkkooiikokikiihohhhokhoikikhookokkokhki", "ohikohoihiokkikkhihhioioikhkikokkhkhihkhhh", "ohkhkkihhhihokhkikihihhiokhhkhkkkooikikiho", "okikiihkkkhkoikihihkhkkhoikkikiiioohihihko", "iikiohikhokkioioihiihhkihioookkihkoiikoioh", "iioioiikhokkioioioihhhkihioookkkkkkiikiooo", "ihokihiohoikkokkhohhoioiokhkokikkhkhohkhhh", "iikiiihhkkihikikkohooohiohkikiohhihiihioik", "okhiokohkhoiihiikhkkhohohikihioiikikhkikkk", "oohohookihkkohohohoiiikoiohhhkkkkkkookohhh"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"aoukxvlobzrgnqfboadkgkdnzlbrufxocuxbacbfguk", "bvoxvabggfquzdoutgtxkxygfauyrolokrvubqfnxnb", "zrzidyrdxnxvxdlfddfybnnycfvzzbakduvuulblnzx", "ugyqgduiilxbvcybfifqzqoildbokynyzkgbuxlrqru", "btdftabqqgrvcndvkqkflfyqgavyudodlutvbrgifib", "garcabgzzqluinrufzfcdcvzqbuvtryrdtauglqocog", "roqzcclntatktgolvqicfzqoctkqqnnbqqkflauizkn", "dxnaniotczvouxkyrabxbzdxyaolrbqkflloxvifvgt", "lkoiutqubqbtbutavoftgztttbkoofuxkongafrfzkb", "zyvkbazyqcygunvioqokgkoqcairxvdvgxbizycvktk", "bydnylbvvqkurtduovonanxvqluxzdgdazyubkqinib", "ltoazxdluytdgqoauaftfynuiadkkfbocktdtrivnvl", "vcoucfvqiizkbdogavauturqifgrnvcotlcgvnikulv", "zbvnvaclyqfcgbtoinxbxqzboncuixrtduucbfadfkl", "xkrvodyoiyblbodfntqcrikddbfrrqoctrutfqfqitb", "fbirbnfggylvxtivzgzrurcgynvcoidiuobvflykrkf", "kgitokxzznliqvidkoutatlzrkrlciniadodyfrctny", "qftynofnadakanbqvnboldoooauttlncutkrrblbdta", "zvbcfaqfdqykyfatioxnbdvaaytbbxfnobgotxtxdoy", "nzycvgobvolglqgzcqktadggxliqqvbriqxaztvkdll", "zqurqxzffycvlbuvkfkrirafyxvaduouidqvzcytrtz", "noxtzanulnlvfrxbkukxktbuucvbqlixodaxnlrutxn", "tbaiuyqucqcycuyndafyxoyyycbaafulbavxnfkfobc", "zqnlqgzffdcayonaifilvlufdgautnbnvtqazcdxlxz", "dkioculkvfxqrntvkdyoqoyrflvxitckbicvdbvtqio", "rnlifbxrtunxqzlitivnvuotaixddvylkdnxngacocr", "iovdqbcqxcataqbugnkrvxobbauvvkqrnvlnukukxna", "vqznqbvuukiacxzarurngnlukbalyzdzgyqavikonov", "udokgltcgtilizldkzbqxallnifzzgcyfznxdqgbaii", "dobxgtzvkyktkrtndbntfotttkobbavcobifofyakoc", "gitnkuikzlzyzkogxkoubluuuzvttbkrvtyddoboltz", "qabgauqrrctfvzbflrlgogkrcufkxbyboxafqtcdgdq", "kcrnvouiaqtotioadzuogyoooocxzuivczbgauluxct", "rygflvkclkiviovyfoqaxdvvbiuoolczuobxyalqdii", "nlykltqnfrxxuvyxykgknkofrtxodfdyndlxqcrqubq", "vqoactlfdranilldtbuboacdygnqorzudvlvrtuaant", "bxlkqyaqdadydqynolfyugyyydxllfqtxlcunfzfgxd", "friqrtfzzxdnkainvzvqlqbzxtnbuioilurnfdxcqcf", "dxgzxidvccngtigkqvqbrfrvczkzogygrkxktncfxfd", "vuyiuxvddqzrltyrbdbikigdqxrgfyaykfurvzqcicv", "dxonclqdfixqagonfnuxuitfbnqkkuyorkxqxzbvtvd", "qrzgdykidkbybxyrgxcloayynbfxxditfxnorldcabb", "kqgyqxkttvcuidguztzyayntvxunrgfgarqukcvoyok", "kzodzlknlqtiguofbnadxdraqlirfoaoxzziktqfdkk"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"glcgcgqdqlqcgtedccccgtgdeqgggdcdtgledgqglqee", "lgdgldgeeggqldedegecdttltdcqgqcqcqeqeeqclggd", "dctqgqelqegdqdtdlcelggcglelqgtctetqcdqtgqggd", "gcecgecqqccdgeqeqcqtellgletdcdtdtdqdqqdtgcce", "ltclqldqdtdqlgecqtqdggdqedtdllqcgldgctdlqdee", "gqccglteeqgddqqdeqegtllgltcdldclcgedeedclqct", "ltcttqdeeltelllgetlllgclqeqcdeeeqcgdcttcqdqt", "teeggegtlglqdtletggttlcddgecqqtgectqqgcttgle", "dlltggledtqeeccetcteleglqcgcggdlgqecqtqqtdqq", "tddleedctlqccggclglcdcedqgegeetdeqcgqlqqltqq", "qlelldqcdqccgggeltgggetgqgtdqcclllcqdedldecq", "gqlttdlqlcqccceqtetclctgcegedddldtglqtqdcgqq", "elglltdccdlceeeglleeegqedetqdccltledqlqqtgtd", "ellttlteqgqcgeqletqeeqdggtldccetlcegctdeltel", "cldletcqqeeeqtttqllgldqggclcledededeqegdclqq", "qgdgqlcccggeelclcgcdlttqtldegedtdqceccedqgcl", "deeqtdlqdltcdegcqtttttqtqlqcdgeglgdglggtcttq", "dddlqeqtqgqttlldlltlgqelltqcegedggeglddqqleq", "egqggqlttlctqecdqgeeecdqlgqdttegqtellgdeqccq", "cgtqdqedqqtqgdclqtqgqeqtcclgltqclqqllcqtqqqq", "qeeccteglglgggdlcdcgegcegdqdttqetcqelcltcqll", "gqqggcglelellleegdtlqlgqldtdcctqgctqegecgtee", "tdcdtgqllccctgcgldledgleegqtdcqccceclctqtdgg", "lqqqqdetgceggltddqllltedcqdegglgdglccqeldttd", "ctgtcctqlqtgcqcgttcdcglcegcedqctdteeltltdgde", "etegggqgcgqegldceeedgegcdtgggceclgtdcgettqdd", "edlddgqttedteeectdeeeclegtglqtttglcqlddlgqgd", "tcgccdtqeqdqgttgcctttgdtetdcecqcectelclldgge", "edgeletgtdtlecqgllleecegqteeeclgcetqgdteltqq", "qleeqlgdqedtqlclecdlddedlgteqclcgcdcgccetdce", "edgddgqllqtlgetcgdeeetcgqdgclledgleqqdcegttg", "dqddqcqeqqtlegqgcelqegdddlcqgetdgggqccgcttcd", "gcqcggctltcqgtgqccgdgqlgeqgedtgcdceelclcdqde", "gltqqeegqddcldtceqlegqgeeqcddetlggtdttcdcllt"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"fdlfgjdxbconnakhhsrnrqcgrysoyugpofaaohjhacznz", "cugyjlcdksoqyhfpldcapqubuyboyjlbsxhhrryrzsjah", "hlskqqxsnqxzhzbhoflqbkhxyjujkxljzjpagxgsjscoz", "qydzxbjzdxduhhxskzjobbnjpzssbqygbgsbknzbqofrc", "abgyjjcgfjcuauqahnbjqyacdprpycbpupsxkckgpgzhu", "qnyzbxqhfkudzgajxhqpjdnrnzruzbxrklggcczcskbpg", "dknyxnkkrzxropcjfrhgxlzlhggojoyhpqksysnfyygah", "jurznykzrnrsbbnoqzklyyckhzooyjugygoyqczyjlpdx", "zungrdrldagacxjskscrqzbcszrqscyhfrfsyjfkkrquj", "sbsgagqyzosrlaukslbxzczjsqufdxpjzbgyjqfqsquoz", "rrbanzylhjxochrdchnlqsscqoxdnpadrjdcsksulndjj", "bxahuqchauagzzulfhcdqqocyhllqbxnqnlqfohqbdrps", "hjpfapjjyzaycbxruynkaozonkkcrcfnbsjqfqpuffkdn", "ysfnzscsdhudolajrdzpucdszqpoaoszpgsjqxlxnnpqz", "auqlhunauxpfddfyusxokofhaqubnfkacnbcykuazdqhc", "sohxsjxgnlknaunhgjfosobxfnkkynoaghzrzfsraxaug", "rjubrsbqgzngpdguqskjrjobkgnnygjpquxhxkrhpbpdq", "gfqgzlfuypsbbcjnndrbrhpzrkdskxzasgccsnlncpobo", "ddjgonhaucsfqudlsuraxhhkxfslprgjdclchzakaolna", "rkrsyxlbsnjnczchjuaaypjkzycpkhgskyfckghsjarla", "ckuylnajlksrdssspsljbcccbhrojuyjdyopcrufjloug", "ffzoyrxdhqsljhfkshgdaxxpalskcgozfqkqxbdpdykrd", "ccqnbshlpozrdpcydpblkjjdkrzybunycoydjxjglbyoo", "qryfkdacykycruhqxfdhhudazjqqhurjhjqhxdfhbpnls", "lplrurqkyolaguxhlgpfybyclqxdnfjcyprkcqdqlqxoy", "kunrccgnzcgxkxbkhlucbrkgqajarguaxayfogonanshx", "cpoahdraoholffhqgaruddxrzaqqdcpydyqdgxadcujkn", "dxagoaxxbzobhqufjbnlopzpnllhfhgnqsxrgrajgglyn", "daygcbpghznqgfkhsdygcyfhgnpunxobbxysfkbbqokpy", "rscpljopclcyhhlzkpofjjnobpzzjrsqjqzjknpjrfdax", "phprcdobrkaklglsaxqqczahgclzhsfrhculhfsraqpoq", "xgfacusynfrukbkjbfzqgqnyhjbdxfhjkjczphjusklls", "ylysqkgdsaxajrjcxbffqnxlrqjnlcuslqzjlucsxfygf", "lhbrkbhhpukpxgqfzpycknunyccxfxrygahjrjbzrrcsy", "hagzypyrpqzqklsfbfkyjhxkfhyjfkcunynfcsnbbyjas", "ooaqcjuxgbdpfgonfgcxyssfypdnckqnobnfshsrxcnbb", "chqfcshrbadxxyozpnlxzbalzfldfusldkyyjpqpyauxx", "olbhyaokpxnfhsdqakozqflclhcnhyacxussjjhjgxyzs", "rdncuyasfnlyjqjhqnpgdgfskhqzrnkhjhupbkhyajxxa", "ynpfkbgpzogryzhhspcbplyguczclgkcrcqdfgfpcposh", "bsrxzgaxrzrucczodxayggnajxoogbskgkogdnxgbyqfp", "xkqkngsgrupnkrodhkbgoglgnlflpfbcbzhrnnpsajzfj", "lafryfaaonyojpszcobxyqnqbxxjzjrbpdaurufcrrxkb", "yfnhssrnxsroyocypufschyrqalahrfaoagjbrbnandpo", "xskaofckdycqxdppgkrfknxcbrdrncorqrujacakrkygp", "abazoljhzsksqnqxkgyyofkbnoqfbxczbodqbcxzkyajy", "gzfkaapfqapngnxgrbzaxkgpusyskpzsnsjohphfsfcrn", "hpsbonlrzyqccbqqpzbkskydkadzpsjjxkhcahgjolgdj", "rhncqqrbcopolzldpahzkjsrusljrdzcrfqlrgpcpbnpo"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"szzwwzzvfryznjlndjrnjrznfzdlrkwwsdmrxzjdxkrdxn", "wfnxxjrjnjlrsyvdzyjdyjrdvrzvjmxrwkyjsryzsmkzsd", "dxnxsrfljrrzrddwkzxnnflrlmmnkvvswzljzdsmyjwwfl", "ryyllyydwksyxfvxzfkxfkyxwyzvkjllrzmknyfznjkznx", "vffjxwlrfflmdxmrnmdzlzxklxjvjlmynwkmrdmdvlmxjr", "ynwnvvrmljrvfxvsmfzdfsvrlymfkmffsxfmrjfvnjvdrv", "dxndlzzksljzwxyksfnkfnzyxkswndllvsvjxzjfxznvxy", "yflywxxrvwzxmfsrvdlrdlxsfrvmlywwkvkzfxzdfxlkfs", "ynrsxzrvzfksjmnxvwdfwlzlxdllrxfkknrjyvwjvyrrry", "vvywjjylxyrkzswzjkmrvflrmrnvfxyljzjxfkrnjlnsrz", "rvvnnxvmxryvzyfzwwyzwrlzxvllrsnnvljrdvwldsrldz", "krrxxrrsymwrnfvnlfmnfmrnyrlvmjxxkldmzrflzjmlzn", "wvkvrrljmnlrxsrdjxzfxdrlmwjxyjxxdsxjlnxrvnrflr", "lkjzzyxyjynxfwsmvwymwyxmsxvsyrzxldwyfxwvfrdvfm", "sfwfllzvrkzlmyldvmjnmdlzrsvmxvmmdymvzkmlfklnzl", "kyynfvwdyywjsfjdxjslwlfmwfnknwjrxvmjdsjskwjfnd", "fmznnrkjlzwkdmdjyxzjxzkvljydzfnnsyrzmkwymfzsmv", "ymmwwmmzvnkmfdjfxdnfdnmfvmxjnrwwyxsnlmdxlrnxlf", "vzrjjnxwwrkxdzdsnlrnlrjmwsnsrvxjynfrzxknmvryym", "nffwwffzjxdfkvyksvxkvxfkjfsyxmwwnslxrfvsrmxsrk", "vvxwssxljxdkfywfskrdvmldrdnvmjxlsfsjmkdnslnydf", "nnvrfjjsyfzmdnlsyrvydvxlnswmvwnfkykzwjzdnjvknl", "snmnvvkywrkvjlvfyjzxjfvkwsyjdyjjfljykrjvnrvxkv", "fjkjyyzvlrzyswyxvsmdsxyzlfvsnvssxwsvzrsyjrydzy", "fljlyywrkswyzdkvszmnzkyvkfrzxrzzvdwrwszyxlynwy", "mnsfwxsrxyzfjdnwrlknlvxnjwvvswyzmnsjmrljrmsssm", "ffxmrrxlsxnydkmdrywnfzlnwnjfzsxlrdrszynjrljknd", "rrdjjddknsvdzxfzmxszxsdzndmfsyjjvmwsldxmlysmnz", "nxxllfxmfnyxvysvwwyvwnzvfxzzndllxzknrxwzrdnzrv", "zjywskyxknvwfmjsxdrndlklsrllysnvvjyfzxdfxzyyyz", "sldwwkmkdkjmnxvrzxkrxkmrvmzvkywmsfxknmxznyfznr", "ssfymwwrlmnxksvrlyflkfdvsrjxfjsmzlznjwnkswfzsv", "vnmxxdsjfmzswnwjlymjymsrfjlwmvxxkldmnszlnvmknr", "nrryyrrfxjvrdzldkzjdzjrdxrkljsyynkwjmrzkmsjkmd", "zrrnnlrklzxrsxvswwxswzjslrjjzmnnrjfzyrwjymzjys", "kxxnnxxzrwvxsfdsmfwsfwxsrxmdwlnnkmywjxfmjlwmjs", "vwmjjxfxmxkflrzysrxyrxfyzfszxdjfvnrxlfrsldnsly", "vjdzzwswdwyskfmnlfwnfwsnmslmwrzsvxfwksflkrxlkn", "fwwnjvdswwdkmjksykmzdzjxdjnfndkryvxksmkmfdkjns", "wmmzzmmjldfmvryvnrdvrdmvlmnydszzwnkdxmrnxsdnxv", "vffxxjfljvmfnmynrrmnrvknjfkkvwxxfkzvdfrkdwvkdn", "lnrnjjxmfkxjszjvmsywsvjxflmsdmssvzsmxksjnkjwxj"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"jjyosvvjoryyryviroisrjovqqoysijqvyvsjojqyssijyi", "rrojvssryqooqossqyjvqrysiiyovjrisosvryrjovvjroj", "ovoqyiovryosirovorjjojyqroqyyjovyyqsqssqvvjrovo", "vriviqjyqjjvrrqsqojjiojorssvjosroqqvyiryjsysqiq", "jsjqiyjsoijryojsjovvjviqojqiivjsiiqrqrrqssvojsj", "soiojvvjjvrvoqqovoyrqivrrrrrsiiqvsqrqsroryosqsq", "sqssivoqoyijqrrjqsvoooyrioijsoijvysooyrvsjjqiro", "ojoqyiojryovirojorssosyqroqyysojyyqvqvvqjjsrojo", "viqvqsjysjjviisvsrjvqrjrioovjivirqivyqiyjoyssqs", "ioryjjiqqjjvyqioiqrrirjsriyvjriojjysyssyooroioi", "rviriysoyssrvvyjyqssiqsqvjjrsqjvqyyroivosjojyiy", "jqiyoojvvoosyvjqjviijioyvjyooijqooyryrryqqiqjqj", "vvriqoovsjrrjroojsiqjvsoyysrqivyoroqvsvirqqivri", "sosivjsyjvsrojsysjqqsqvijsijvqsqjqirirriyyqisys", "qovyqrrjrqvsorvvvoiivyqyrvyrqiyiriyvyssyrjiyvjv", "sqrvsojjyjsjrsisysoysorirqjrrisjjyjqvsjvqyqsivo", "vjovoyqryqqvjjyvysqvosqsjiivqjvjsojvrojrqiryyoy", "svsysorjorrrvjoyoqrysrrqviiyrvjvqvvyysvjqijooso", "visroovyyoojryvivqssvsoryjroosvioqrrrsqriisiviv", "osrsjyyjjyvysiisysqviryvvvvvorriyoiviovsvqsoioi", "rviriqyjyyyrvvyoqvyrvoyovsvryqrvoqvrjiojysjqqiq", "ooqirvvoysqqsqvvsyirsoyvjjyqriojvqvroyoiqrrioqi", "jsqjyirsrvyqsooqsjirrrvoyryqjryqivjrrvoijqqsoor", "oiorsvoijsoyvjoiojqqoqsrjorssqoissryryyriiqjoio", "rirsyjrqjyroijrqrjvvrvysjrsjyvrvjvsosoosqqvsrqr", "iysyovvoovqvyjjyvyrqjsvqqqqqissjvijqjiqyqryijij", "yrysoqyiqoyjrqyiyqvvyvosqysqovyvqvsjsjjsiivsyiy", "iqiyijrsjrrrqsjyjoryirroqvvyrqsqoqqyyiqsovsjjij", "vovrsivjisvyoivjviqqvqsrivrisqvqiqryryyrjjqrvjv", "oossvrroyqiiqirrqvsyqoyrjjviysojrivyovosiyysois", "ryoqiirvviijqvryrsooroiqvjqiioryisqqqosqyyoyryr", "sjssoivjvyorjqqrjsivvvyqovorsvoriysvvyqisrrjoqv", "sjvsvoryorrsjjosoirrvirijqqsrjjjiojsyvjyrqyqovo", "yisorryjjrrqojyiyjssysrojyorrsyirrovovvoiisiyiy", "oyvqssojjssiqjoyojvvovsqjiqssvoyssqyqrrqyyvyoyo", "vriviyojyoovrryvyqoviqoqrssvorvrqirvjirjosjyyiy", "yyijvyryjsiisiyqsjqvsyjroojivqyorirvyiqoiyvqyiq", "qjqqvisjsovyjrryjqisssorvsvyqsvyioqssoriqyyjvrs", "qoqirjqoyrqsjyqoqyvvqvriyqirrvqorrisissioovyqoq", "rrvyissryovvovsjoyjiorysqqyvijrqsvsiryrqviijrvj", "yyjqviiyorjjrjiiroqvryoissojvqysijivyoyqjvvqyjq", "viojyyvssyyqjsvivsoovoyjsvjyyoviyyjrjrrjiioiviv", "iiovrqqivsoosoqysvyrsivqjjvoryijqoqrivijorryioy", "rrqjysorqsjvsvooiqjysrqoiyqvyjriovyyrqrjvyyjrvj", "qrsovvvroyssysvjyojqyroviiosqjrsvsvqrorisqqjrsj", "vyriqqvssqqoisvyvsrrvrqisviqqrvyqqijijjiyyryvyv"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"gixwscdgbnkyknkdxxidbskohkxllnmsmlhhaomhnbwsxwsy", "wglgwhycgyymgomdmdxscchmdoohshbdnhyagwcmhwkomghw", "xsmscliyaggosilblbywnnhlbkikgkabokgxscnlkcdilskc", "iswhonxidcmgcconoxgnbxakscbdbxxbhowsocdadlmasxdm", "ysiykasdlnlngoxgskccdbbkmiookcmbgikgxgimnmymlssm", "xxlhgoabcwlnlwylbadoilxgaawaochdyohyhxnmooldxngn", "ihsowynisyylxxwgwblhyncdcxysynnyowbhwxscskmchnsa", "swdwhbnaonbnwblslxamggklacbchcoxncyswhglchbmlwch", "yxhxnsiogwwkxisasaombblsadidwdgakdwyxnbsdncisxdn", "owsclwaoydmiwcyasskailmnymsxxkblbxyycnbydiglsghh", "lxghynmldikciiynymcnwmsbxiwdwmmwhygxyidsdoksxmdk", "abybkmxdwiigbxmsmsdchhnmslxlilwsgliabkhmlkoxmblk", "ndlyiagnswcbwwiaigbaxgkhdwxsxggxyildiwsksmckdgsc", "dsylhsodimwkslioyyaokhwniwyccaxhxciilnximkghygbb", "dmliwmxdhockmihxllgxkwcbhclssgywyshhibyhokawlann", "ymgolymhxaxwogaxgwdkhgwbihldmhggwwlgyxdsccddbkgh", "dmcdhxklgcayxcwxhkoxmkanicmgykkmywnincgyghsydwca", "idwhbsaiglkcllbsbacsmaxodlmgmaamhbwdblgxgnkxdagk", "lwhcylyoidiachdiosaksxsxgomaxohhgsmhliagbbaaxkmo", "bdmcwbwgohoncmhoginsiaiaxglnagmmxilmbonxkknnaslg", "ykcndkayhoxbknhaccgabdxshxcmmgwdwmhhnswhobidcill", "ygkgacdhxmxkddcscbhimmsdnodolwxbkolygwccbwndagob", "wkbxnkdwomhyyxobbbkdynnsohbllianalooxsaamygnbgcc", "awiwhkobxllywoksksbnccmksdodldxsydlawhckdhgokwdh", "ixnmwxsikyhcxmksnnbscwhlkhnddbawadkkmlakycownogg", "xdibmxmhgaglbiaghilykwkwomclwcgkoacxkgsosallgych", "abcinacihmgisgwgmnwgmkyhclomymyghnoxaimlddsdoxhy", "sgdsgnookcmycclnloingoywxcgkgoogbldxlckykamyxgkm", "hsaynoognwhbxlnkaigxnaibcbxmsgmsklocbgmsadadoyxs", "alxmcaxcwkdcidndasndkdswxgbhcksdwybowcngmnkmaokm", "kdldncmwassgdmchchwiyyxchomosoahgoskdnyconbmcdon", "ldhswxxbahliygwscnbywcacdicnkbnkmgxdibnkcocmxsyk"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"almmmmmmamalmllaalalaamlmlmammlalmaallaaalaalamlm", "maallaaalmamaamlaaalaaamaaaammammmlmlmamalalmlaml", "malmmmamlaamalalammalmlmmmaallmmlmalmmaalllllmmma", "lalaaalaammmmlammllalmmmlmlmmmllmamaallaallmmlmlm", "almammaalalaamlmalaamamlmmlmmmaaaamaaaallmmaalall", "mllmammmaamamalallalallammmamlmlmaaaammaalllammaa", "allamlaamlamamlmllalmllmaaamalalammmmalmalllaammm", "llmlllalmaalamamallamlmlllaamallmlammlalmmmmmllla", "almaaalamllalmlmlaalmamaaallmmaamalmaallmmmmmaaal", "maalmammlmmallaamlamammlaallaamlalamalmlalmmlllmm", "alaamlmlmlmamaaammmaaallalmlmmmllamlaaaallmmammaa", "amlllamamllammlalaaaaalmllmlammlamlmmaaalamlmmaam", "allamlaammamamlmllmlmllmaaamalalammmmammalllaaamm", "lamamlmalalalmamlmmmlmmaalamllllllllmalmmallmmmml", "lmalllmlammlmamamllmalalllmmaallalmallmmaaaaalllm", "allamaaammamamlmllmlmllmaaamalalammmmaammlllmaamm", "malmllmmamammlalmammlmlallalllmmmmlmmmmaallmmamaa", "lmaaaaaalalmammllmlmllamamalaamlmallmmlllmllmlama", "lallmamamamlmlllmmmlllaalamammmaalmallllaammlmmll", "laamlallmllammaalmalallmaammaalmamalamlmamllmmmll", "laalaaaaamlmamamlmamammlmlllmamlmlmmamammmmmamaml", "lmalaallmlmllamalmllalamaamaaallllallllmmaallmlmm", "lamlllalmaalamamallamlmlllaammllmlamllaammmmmllla", "mllaalllamlmllmalllalllmllllmmlmmmamamlmlalamalma", "lammmlalammlaamlmlllllmammamlaamlamaalllmlamaalla", "almlaamlamalallmmmalalaaallllmmlammlamallmmmammla", "llammamammmlmlaamaammlammaamalallmlllmlaamaalalma", "mlmmalalalamammmaaammmllmlalaaallmalmmmmllaamaamm", "alllalalamammmmmaalaalalmmllmmlmlllmlmalllmmlamma", "ammalmaallalalmlmmlmlmmlaaalamamallllallammmaaall", "lmamalamlmlmlamalaaalaammlmallllllllamlaamllaaaal", "lmllamamamalalllaaalllmmlmamaaammlamllllmmaalaall", "laammaaamlalaalmaaamaaalaaaallalllmlmlalamamlmalm", "lammmmmmlmlamaallalallmamamlmmalamllaalllallalmam"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"yujkfkpwbktykfpyjktucjujcpuwyuuwdkudkjtjdmckctxooy", "cmpkjxtdomcfkbgmyodowjputmppxbjwxjpkwwywdcyddxxcpw", "jowukjjfmbpdodbkbjobptoycbudtxjupuyxfpjydpmbdbbddc", "yfcmjwbokfpymxtfukokdjmdbfcgwxjdwjcmdduddduodwwpcg", "cjgkptmppjjttdutxykxbptfyjgwoddwoowwomkfjxyytfomgw", "tpwxgkotxtofpjcpytgykwwbjogtkdcomudtftpjtfdxdftdpk", "fkpcpbbwjkxfcgkkxtmtmkcgbbdywgwojpddjmukmopomjjxgc", "mgwtckjpygxmtbugdypyfctfjgwokbcfkcwtffdfffdpfkkxwo", "bcmpkjykkccjjoxdggpgowjwtcmuycfbdtuudypdcgtwywdkmj", "xxxxxftyukgjjbbdmbxubmmdpdtbdgtdypwjbpywwfjfdtyumx", "mmxjptmfggkcojymfgwwumucbffwfkgpubwgpdtuuoobkcbwcb", "djomtpfgxjydmckjbxgxwtmwfjoupctwptomwwbwwwbgwppyou", "bppppfdyombjuwwyywpowywxgxddxbddktxjwtdggpxfxdkoyp", "xdpfjpuyydwxfdddktytcjfxugpombjygjpygckdcckycggwpf", "pjmooupgfbdbkmyjgtttygcyykbyxdgcjdbgxtwfptpcdpkutu", "dykptfmwjydbpgcpujwjxtkfmtkkfgtxftkpxxtxwduwwfxwjk", "mwuwkjbtdkkudwodxkbwyffktxtuyjfpcxmdpcjybddxgumcuj", "bbbbjpmuwwocpyyuujgtyuyobgxxfoxfjfgcyfjkkbmpgxjtub", "fypjktfgjgwxfcgdgmypxudmmgfbcodcxmmguoffcfdoogwbgo", "pybjxjkktjwpbxbpbjcycbybckjgktybumckjbwbddcmdwotug", "tbwckttxtkppfgkjktdcpdjbfktmdytcpcbyfydbmujymkkmmf", "kyggmxkwjgdbugmtmkfpbftyumkxcckubgyokpfyxjtodmmxxu", "fgbcwpfwfwjjxkwtwfcyjctggwfocdtyjggdxdcgcftdowwood", "oojctfowwgxfycbtwguukokmctwuwjttkpugtdfkkyypxmpumk", "wuxdmycowctomgpoouwupuktkbpppmggkctuxwffxydbbcdtmf", "mcjkyomkowbbpywfwmmfdkdxcwmfctdgbcwtptkjkcduxwwxxj", "ugcpcgoywgwucmxowppktgumoobjpmypdcbbdpfgoxcxpmdwmt", "ywxomfcptwbyodgwutptkmokcwxjfdmkfmxokkukkkupkffbxj", "xdumcfjjcpodxwuwumfdfuduxjbmjfduykfkbwxutxfktowcym", "dkxubmwjokfdupykgojocbucwkxtmpbcmbxuccgcccgjcmmfxt", "fxxxowjgtpfguoogdoxcogokfwjukfjjdybcoyjmmmkwkjmugk", "kjmfofbbcfwkmomkmfyjymjmybfgbcjmpuybfmwmxxyuxwdcpg", "dcfwkjptdpotkgbttcdcbcuouybbbkggupocfdxxfjwyypwokx", "pdugfokxjdbpgymdtjxjcfgckduwoyfcofugcctccctxcoobuw", "wmpjgbmdopkcojfoxpyxowkcdxdctbwgmxypgubtmooxkcyucy", "gbmjpkdtgybtpduttbmyubxwxcuukpbuxywbmgoombjjyyjxpo", "dmtkgkdgfmmdkbokuucjygkypmtfxbgyxxtkxdcyyjucofxotf", "umgkyxxcwmudjccpwpppfopptwppykkgopmdxmubkgyjbfupxb", "wtxguccbytwopbbkykkkmfkkdykkuggxfktoctwjgxupjmwkcj", "mofopxjtdppfdokdwpjogccptwtfgxcyuwmdyuxgjddwbfmufx", "gfycyfmtpfpgybxmpccwufgbmmjkcbtcoyjjocdfmxyxcbopbu", "cwptdxcdcwmmbjdjwcgxmgkwgddygukumwxujugcgckpkddgou", "mgkujpytxgojuobgwxtxfjtfyokcuobtpjkjffcfxfwtfppdky", "yyyycmubwwpfmddbbcxtdbdpyxkkgpkgcgxfdgcjjyumxkctby", "pjwbtdowmjfkbxyjpugjytbyjjwmdxkkdkwbuypyyfpgpcofum", "yjjjjbgumxyocdduudjmdudtktggtyggwptodpgkkjtbtgwmuj", "cufdyxwktumcdboujtktpydpwufgxbypxyfdppjpppjkpxxmfg", "ggfpwuobxgywpckgtubxjwbjtdfdpfkbuwdpjjdjxjtxjcumfo", "dwbypydwkfwdmxdyttjofpyfoygpjxpfuudycdjffgtjmkuubk"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"jnwnznnzzn", "zwzzjwwjzj", "jzwzzwjnnj", "jznjwjwwnj", "njwznjjzzz", "nwjjnnjjzn", "jzwwwnwwnj", "zjnnjzjwzw", "wnzzjzzjwz", "jwzwnzwwjn", "wzjwnwzjjw", "nwnzjnnnzj", "zjznwwnzjz", "jznwznnwzj", "wjjjjjjwjj", "wzwjjnjnnw", "zjjjzzznjn", "zzjznzwjzj", "znwjwwzzjz", "nwwjjjnnnj", "wnjnnjwwzj", "nnjjjzjzjn", "njwzjjzwnn", "njjwzzwwzw", "wwwwnwwzzn", "zjwwzwnjzj", "wwjjjwwnjz", "wjnzznnwnn", "jnwjnnjjzz", "nwnzznwnnn", "jwzjzwnwzw", "nznznznznw", "zjzzzzjjzz", "jjjnnzzzjn", "nwzjwjwjnn", "wwwnznzzzw", "nzjnwznjwz", "njjznzjjjn", "wzzzjjznww", "wwjwnnznzj", "nwwzjnwznw", "nwjnnjnzwj", "zjwzwwwwzz", "wznwzwnnww", "wzjjwnwjwz", "zjwnzwzjwz", "wzznznjnwj", "nwjzjnzzww", "wnjzjnzwwz", "wwwjjznwzj"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"qststtsgrq", "ssqttqrgss", "qsqgqrqtgg", "qggtrqrsgg", "ttrqrttqgq", "gtssqsrtgt", "qssrqqtttq", "trrrtttsgg", "qrggsqtsgq", "qqtssgtrqg", "trstgqgqgq", "rrttgqtqrr", "qrsqrgrqgs", "tgrsqrtrtg", "tstqsqqttg", "gssrtrrgrt", "ggrgtsqqss", "qggsqqtsqq", "qrqqqgrgqr", "ssgsrqqqqs", "qssgtgrsqg", "tgrgqsqrqs", "gttqtgqgrq", "gqssttsqgr", "qsgtggtgqr", "ttqqtrqtgq", "qrsttqssgr", "tsrrtsgrtr", "gsgsgtttsg", "gqrggqssqq", "qrrrgqrgtr", "tgsqtssgsg", "sggsggqgss", "qsrgqqtrqq", "sssgsrstss", "qsgrsssqgt", "qtrststgqt", "ssrtrtrttq", "srgqgggtrt", "qqtgggqtqt", "tqqrgttrqr", "gqtggrtgsr", "strqrgttsr", "gttqrrqgtr", "tgrrsgtqtg", "srqtsrgqgq", "qqgsggrgqt", "rtqqqssttq", "sqqgtsstrr", "gggqstrsgr"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"kndvnstsdt", "dsnvddvnvv", "vdnvnnndvv", "kvvtdtnsdv", "sdvkntsssk", "vvvvvsvvtt", "sdnkdnnskv", "tntdsdtvst", "ddsnkkvkvd", "nndtsvnvnv", "kvnnttsskn", "vsnsdtvssv", "vssvtvvvkv", "dvvddvskvk", "nnktvvtdtk", "tsvdtdvvsv", "nsssddnsnt", "dntvdvktkd", "vdssvktttn", "skdttstkkk", "dknttstdsv", "nvtkdtksns", "vtnsdvskdn", "tvsnskkvtt", "kvkdddddtv", "kkkkssvstt", "kvtntvnssv", "vstvdddvkv", "dtkstdsdkv", "ntdkvtvsnv", "dnnnskkddn", "ssknsdkdvv", "nvdvktsnnn", "nktdddkkdd", "vdknksvkdn", "ktndsvtskd", "dtndttsvdv", "ssdvtddssd", "skttnddtdn", "dvvsdkttnt", "skdsvksdvk", "vntdkssdnd", "tnvtttndkv", "tsssndtkdk", "ddddtvdsdt", "kvkkvtsnvs", "svsssdttts", "ssntddsktk", "tvdtvsddvk", "kskksskdtn"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"gidjigjwwg", "ddzxwxzjzw", "zgzwdidwwd", "dxjwgdzwgd", "xjigjdjwwi", "xzwiiijwwz", "jwgdzdxwji", "jgzigxzddx", "gjgiwizwgg", "gzxdwxxzdg", "ixdgwjwiwd", "gdzzgxdxwi", "jwxjjwjdwd", "wggwjjxdix", "ggixzdjggx", "jxixdigwwd", "gwwgdgixjx", "idwjjwgzdj", "xzwdjzxidw", "zzjigjjdgd", "jwzgggixdg", "jwgwggwdxi", "wxigzzwzxx", "gjigigxjjj", "zjxggjdzdi", "jzjjwiziig", "gigxwzgdgz", "iwdjdwjziz", "giddwwjgzz", "jdixjwxixg", "wxddjxwzjw", "xxdwjzggix", "gjzgjzgxiz", "xwjxdwzjgx", "wxjzzwxjig", "gwwzjzxzwj", "xdgxggxxzw", "zdwdzwddjg", "jjjddzdizx", "zdwjzwgzwx", "xjixgigwzz", "ggiwddzzxw", "gzwxxwwidx", "gjxxgjixgx", "xzgwdxgdwi", "xjwxwdwgjz", "wwjgiiwwzg", "wgzizdjzwz", "xzzxgxxjxi", "wdigwdgzxw"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"pqrs", "pqrt", "abca"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"aa", "ab", "bb", "cc", "cd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"cacccdaabc", "cdcccaddbc", "dcdddbccad", "bdbbbaddcb", "bdbcadbbdc", "abaadcbbda", "babcdabbac", "cacdbaccad", "dcddabccad", "cacccbaadb", "bbcdcbcbdd", "bcbadcbbca"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"abca", "zbxz", "opqr"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"qq", "ww"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"aba", "caa"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"aba", "baz", "abd", "bcc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"abaa", "xyyy"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"aabb", "abba"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"abababababa", "cdcdcdcdcdc", "mnmnmnmnmnm"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"cacccdaabc", "cdcccaddbc", "dcdddbccad", "bdbbbaddcb", "bdbcadbbdc", "abaadcbbda", "babcdabbac", "cacdbaccad", "dcddabccad", "cacccbaadb", "bbcdcbcbdd", "bcbadcbbca", "aaaaaaaaaa"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"ab", "bb"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"baaaaaaaaab", "baaaaaaaabc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"abc", "aaa"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"aaaaabbcc", "aaaaabcbc"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"abab", "ppqq"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"abbbsddwe", "vsssswwda", "aabbsddwe", "taaabssdw", "wffdsddwe", "jfddjsfff", "djskljwee"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"aab", "baa"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"aabbaacc", "aaccbbaa", "bbccddaa", "ddffgghh", "hhiijjkk", "aammnnoo", "ddssggyy", "ascdbfiz", "acbdedjz", "bcbdedka", "ccbdedmh", "bcbfefmm", "gcgjejgg", "gfgleldd"};
    IsomorphicWords* pObj = new IsomorphicWords();
    clock_t start = clock();
    int result = pObj->countPairs(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22504795&rd=11125&pm=8175
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
#include <complex>
#include <setjmp.h>
using namespace std;
 
class IsomorphicWords {
public:
  int countPairs(vector <string>);
};
#define FR(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,v) FOR(i,v.size())
#define BEND(v) v.begin(),v.end()
typedef long long ll; typedef long double ld;
int IsomorphicWords::countPairs(vector <string> words) {
  int ans = 0;
  FORI(i,words) FORI(j,words) if (i<j) {
    char m[256]={};
    bool used[256]={};
    FORI(k,words[i]) {
      char a=words[i][k],b=words[j][k];
      if (m[a] == 0) {
        if (used[b]) goto xx;
        used[b] = true;
        m[a] = b;
      }
      if (m[a] != b) goto xx;
    }
    ans++;
    xx:;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/