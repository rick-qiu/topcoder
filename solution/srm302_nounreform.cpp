/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6375
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

class NounReform {
public:
    vector<string> makePlural(vector<string> nouns);
};

vector<string> NounReform::makePlural(vector<string> nouns) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> nouns = {"box", "church", "elephant", "stereo"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"boxes", "churches", "elephants", "stereos"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> nouns = {"tray", "key", "enemy", "baby"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"trays", "keys", "enemies", "babies"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> nouns = {"a", "s", "oy", "y", "yy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"as", "ses", "oys", "ies", "yies"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> nouns = {"s", "z", "x", "ch", "sh", "ay", "ey", "iy", "oy", "uy", "y", "a", "h", "gh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ses", "zes", "xes", "ches", "shes", "ays", "eys", "iys", "oys", "uys", "ies", "as", "hs", "ghs"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> nouns = {"ymmadlxopz", "tsfgugctpgoj", "mczpgarnliy", "rqoibymsh", "htbzoy", "ezrrytwpybtmlsiygc"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ymmadlxopzes", "tsfgugctpgojs", "mczpgarnliys", "rqoibymshes", "htbzoys", "ezrrytwpybtmlsiygcs"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> nouns = {"qqgfmmmcsch", "llrwfwdjyqqay", "xdviigwmbydwncvyhsh", "jey", "nyiydhoaaiiuy", "rlmevkeiy", "mnsmch", "nodwpnbtebx", "zglzyrvkagw", "pjahwvgmfbewrvfoy", "futaywuhcouy", "pxqslnhlpqpqhy", "nxbvqvcyltijlnuypeiy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qqgfmmmcsches", "llrwfwdjyqqays", "xdviigwmbydwncvyhshes", "jeys", "nyiydhoaaiiuys", "rlmevkeiys", "mnsmches", "nodwpnbtebxes", "zglzyrvkagws", "pjahwvgmfbewrvfoys", "futaywuhcouys", "pxqslnhlpqpqhies", "nxbvqvcyltijlnuypeiys"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> nouns = {"qzogs", "hyx", "xulxzrpalhayncch", "glghdewurxcsuinniuu", "zyjxrxplastiy", "gucrghiq", "qdfhkkuhhzz", "yomuuttgzjvkin", "jxgueqay", "nissh", "esouhxhgsjppnx", "xsqkwyrcpvyxxbbsz", "ilwuifuy", "ou", "svzmgzftscgqpwvls", "qvbwdtjlwldljgdh", "jjevewad", "tidcfoy", "zatgey", "iggbietkeyahkxey", "anbaxajziekkch", "coybay", "nxyboy", "wzuogczo", "gqobbgndgijshqb", "oltadvuez", "llvpvhpsieuavsh", "lnuornswokzhsay", "zcfmixmpgubfgoy", "gswkllvbiy", "kmtgzyewwifpqxafsfa", "plweay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qzogses", "hyxes", "xulxzrpalhayncches", "glghdewurxcsuinniuus", "zyjxrxplastiys", "gucrghiqs", "qdfhkkuhhzzes", "yomuuttgzjvkins", "jxgueqays", "nisshes", "esouhxhgsjppnxes", "xsqkwyrcpvyxxbbszes", "ilwuifuys", "ous", "svzmgzftscgqpwvlses", "qvbwdtjlwldljgdhs", "jjevewads", "tidcfoys", "zatgeys", "iggbietkeyahkxeys", "anbaxajziekkches", "coybays", "nxyboys", "wzuogczos", "gqobbgndgijshqbs", "oltadvuezes", "llvpvhpsieuavshes", "lnuornswokzhsays", "zcfmixmpgubfgoys", "gswkllvbiys", "kmtgzyewwifpqxafsfas", "plweays"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> nouns = {"cqpdtlinzpmjgmpgiy", "vfyzjpgmtwpaempix", "irsxstvsx", "ntye", "cmekxqu", "rdhqoadxz", "nhbbz", "wljjvsukrjhws"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cqpdtlinzpmjgmpgiys", "vfyzjpgmtwpaempixes", "irsxstvsxes", "ntyes", "cmekxqus", "rdhqoadxzes", "nhbbzes", "wljjvsukrjhwses"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> nouns = {"niyrafgzadojzzc", "pinavedneytfdwqhay", "mlwdchkiy", "jdpsvsuwrx", "hphyxyu", "xgkyabgqvcmdriay", "hgkechch", "qyvrlaoipcsery", "iuvbpoxmskzx", "avfvprabslnnctuamny", "cdvz", "dyjeqygttgcfacgaeay", "kfnuy", "uqdjmdawey", "spmqhcqijftbczey", "zsolch", "dks", "ogzaeurudytqexbuiyiy", "jmlcipoy", "rkay", "k", "jcclytf", "icefhwpncvyvs", "twjprijtuknkhpwyubu", "xijglbxskmoey", "zzapcqlqojc", "xbuxlwnz", "qypxwifdnfby", "buy", "ugjrhbecuvdxraqewumz", "fxnfifjxqxuqbkfzx", "gfemkf", "hzsy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"niyrafgzadojzzcs", "pinavedneytfdwqhays", "mlwdchkiys", "jdpsvsuwrxes", "hphyxyus", "xgkyabgqvcmdriays", "hgkechches", "qyvrlaoipcseries", "iuvbpoxmskzxes", "avfvprabslnnctuamnies", "cdvzes", "dyjeqygttgcfacgaeays", "kfnuys", "uqdjmdaweys", "spmqhcqijftbczeys", "zsolches", "dkses", "ogzaeurudytqexbuiyiys", "jmlcipoys", "rkays", "ks", "jcclytfs", "icefhwpncvyvses", "twjprijtuknkhpwyubus", "xijglbxskmoeys", "zzapcqlqojcs", "xbuxlwnzes", "qypxwifdnfbies", "buys", "ugjrhbecuvdxraqewumzes", "fxnfifjxqxuqbkfzxes", "gfemkfs", "hzsies"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> nouns = {"hs", "fsatuv", "kbay", "oosuohgfhoay", "r", "vzhlbevy", "bq", "vacsikrmisdqvoagseiy", "kgbfxaox", "ylsxzgoy", "dclvhoqgsh", "snyblveyiyzpjyoy", "eloy", "zywbricuepyi", "rbavzr", "sey", "kiies", "yzfvbz", "ebxyhusmernbeuxccnoy", "vpaaqbwl", "durbynstdbsjobdmvo", "qzvbfneinvay", "qe", "puwsyldfk", "tq", "djgdnd", "znpjejiwv", "ngeswzxkqgtgccx", "aiwlmblqeyjzzzs", "jtevh", "mcsh", "zunghhtjmcqzrutulsh", "hxhrdojtqyjz", "koatjwmadfm", "auwlbrtco", "uebfmwigzkay", "yotwmrj", "zwkvzjhjpzs", "smqpbfqxiqioq", "ujmtncaz", "zesgnrdajhvqzay", "lwabpuy", "dvfjzqay", "gmncrpabaumoay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hses", "fsatuvs", "kbays", "oosuohgfhoays", "rs", "vzhlbevies", "bqs", "vacsikrmisdqvoagseiys", "kgbfxaoxes", "ylsxzgoys", "dclvhoqgshes", "snyblveyiyzpjyoys", "eloys", "zywbricuepyis", "rbavzrs", "seys", "kiieses", "yzfvbzes", "ebxyhusmernbeuxccnoys", "vpaaqbwls", "durbynstdbsjobdmvos", "qzvbfneinvays", "qes", "puwsyldfks", "tqs", "djgdnds", "znpjejiwvs", "ngeswzxkqgtgccxes", "aiwlmblqeyjzzzses", "jtevhs", "mcshes", "zunghhtjmcqzrutulshes", "hxhrdojtqyjzes", "koatjwmadfms", "auwlbrtcos", "uebfmwigzkays", "yotwmrjs", "zwkvzjhjpzses", "smqpbfqxiqioqs", "ujmtncazes", "zesgnrdajhvqzays", "lwabpuys", "dvfjzqays", "gmncrpabaumoays"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> nouns = {"ovmqqrlmwgmwjxckhsh", "glaioljovurz", "vzsorxyjckjoy", "htotdkkcs", "spty", "nmwcmay", "xzmuxmxrzvz", "cojqvdxbdzbemhziy", "jbtmbddqwxzcash", "zngbay", "vtlbowkgdqsui", "varcrdkfrxiqtuy", "qkaxhz", "h", "ty", "rifxwaeefoy", "pjcuqijyxwnfsrkoy", "rvxvgwtoy", "ogiuptalj", "ssl", "tzcifduplhzsyvldz", "wdeulsnbdeniishdmeoy", "aezodommejddqamrof", "svxppksh", "zsjuconshfhbvsdqnsh", "gonlgojkepojjltqsws", "uybwsebay", "mbkbmnwiy", "mrythpxsh", "odepsocydngkfch", "vyylqtxb", "jjblrvgdabgqnspzsbz", "wds", "zniesosmlylcqkynk", "gnjxjkdsespctgfey", "xdjuqch", "hlmtrdrnvlcbkylxgpag", "ewcqx", "lmybjxrxmmoy", "ryowrx", "pulmgdrkwktiiy", "pvhdodiiy", "bugjzjbvojx", "xgpgujudcvrrtmkxympj", "exqqevhzltfrewzrtvoy", "tbatzhxykzrsvh", "jgjgay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ovmqqrlmwgmwjxckhshes", "glaioljovurzes", "vzsorxyjckjoys", "htotdkkcses", "spties", "nmwcmays", "xzmuxmxrzvzes", "cojqvdxbdzbemhziys", "jbtmbddqwxzcashes", "zngbays", "vtlbowkgdqsuis", "varcrdkfrxiqtuys", "qkaxhzes", "hs", "ties", "rifxwaeefoys", "pjcuqijyxwnfsrkoys", "rvxvgwtoys", "ogiuptaljs", "ssls", "tzcifduplhzsyvldzes", "wdeulsnbdeniishdmeoys", "aezodommejddqamrofs", "svxppkshes", "zsjuconshfhbvsdqnshes", "gonlgojkepojjltqswses", "uybwsebays", "mbkbmnwiys", "mrythpxshes", "odepsocydngkfches", "vyylqtxbs", "jjblrvgdabgqnspzsbzes", "wdses", "zniesosmlylcqkynks", "gnjxjkdsespctgfeys", "xdjuqches", "hlmtrdrnvlcbkylxgpags", "ewcqxes", "lmybjxrxmmoys", "ryowrxes", "pulmgdrkwktiiys", "pvhdodiiys", "bugjzjbvojxes", "xgpgujudcvrrtmkxympjs", "exqqevhzltfrewzrtvoys", "tbatzhxykzrsvhs", "jgjgays"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> nouns = {"qqmgqgzce", "yrbwojjcqbmys", "imopxzbz", "xyghxtawks", "dwzitaurdympdkows", "yltz", "lalvx", "xbosnmjnj", "xtqcqahetnjxex", "qb", "yukqhtfenqsgiy", "igexxuahptphtndinoy", "rvbprvjgnjxzsvnoai", "gvjczuixjqzky", "mjthqloupy", "wrmrey", "tgpqdl", "vnvfoluiix", "dvoncfeud", "bibpmosps", "lspsohoavvikchygay", "labnqemdeb", "xkbfihnalnihvnaxo", "brphpwlcyqy", "qz", "hqy", "sucpay", "jguwqicifexuwyquzjcx", "avrfldzjeylls", "brkp", "ffbjy", "xihzcs", "mt", "ztvblay", "cuujyhphuqnoy", "oqgqfbcthimakjnkqifl", "xentpnhpjwncuy", "qs", "kqdgjwngwapwroy", "gust", "zlvgnyqwerpgz", "vhbxs", "wadx", "lukmljdgfrptjx", "wnvdztyesh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qqmgqgzces", "yrbwojjcqbmyses", "imopxzbzes", "xyghxtawkses", "dwzitaurdympdkowses", "yltzes", "lalvxes", "xbosnmjnjs", "xtqcqahetnjxexes", "qbs", "yukqhtfenqsgiys", "igexxuahptphtndinoys", "rvbprvjgnjxzsvnoais", "gvjczuixjqzkies", "mjthqloupies", "wrmreys", "tgpqdls", "vnvfoluiixes", "dvoncfeuds", "bibpmospses", "lspsohoavvikchygays", "labnqemdebs", "xkbfihnalnihvnaxos", "brphpwlcyqies", "qzes", "hqies", "sucpays", "jguwqicifexuwyquzjcxes", "avrfldzjeyllses", "brkps", "ffbjies", "xihzcses", "mts", "ztvblays", "cuujyhphuqnoys", "oqgqfbcthimakjnkqifls", "xentpnhpjwncuys", "qses", "kqdgjwngwapwroys", "gusts", "zlvgnyqwerpgzes", "vhbxses", "wadxes", "lukmljdgfrptjxes", "wnvdztyeshes"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> nouns = {"rbnyy", "uhplhwaiktmxfxo", "karuxjanghovch", "ginxitwfiy", "oxiy", "pmqsh", "gukxyecvahc", "xmzmrevrc", "ybnurdjgsnhfxmsy", "yqphqdaqxvvkv", "mcis", "dzxvbckseay", "clmqg", "mpkudipqyvx", "bjggm", "qlxcykvysmdky"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rbnyies", "uhplhwaiktmxfxos", "karuxjanghovches", "ginxitwfiys", "oxiys", "pmqshes", "gukxyecvahcs", "xmzmrevrcs", "ybnurdjgsnhfxmsies", "yqphqdaqxvvkvs", "mcises", "dzxvbckseays", "clmqgs", "mpkudipqyvxes", "bjggms", "qlxcykvysmdkies"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> nouns = {"qekbwhfkrdeabqnpeey", "ez", "ileoznrayoserjkaeqf", "pasrliyesudzuy", "ubrlzjlykwjy", "wkjauy", "nzcoy", "wkcz", "kufyodkeuy", "fgeuyjmiarawewjlzy", "kmesnckqfklfckfntjuy", "cha", "ftaibiwqothylbsch", "opiy", "qszmbunvbehyiwzsh", "ytygxrmay", "ahdjigfafcpbmkgs", "fuihnecgyartzcy", "weylfbsgreoy", "ixoy", "yednxjjqbmpvdiey", "mhvtvatngmctdionp", "aety"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qekbwhfkrdeabqnpeeys", "ezes", "ileoznrayoserjkaeqfs", "pasrliyesudzuys", "ubrlzjlykwjies", "wkjauys", "nzcoys", "wkczes", "kufyodkeuys", "fgeuyjmiarawewjlzies", "kmesnckqfklfckfntjuys", "chas", "ftaibiwqothylbsches", "opiys", "qszmbunvbehyiwzshes", "ytygxrmays", "ahdjigfafcpbmkgses", "fuihnecgyartzcies", "weylfbsgreoys", "ixoys", "yednxjjqbmpvdieys", "mhvtvatngmctdionps", "aeties"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> nouns = {"gxrvknkwuy", "airugx", "pvpvwxtinrox", "dkkcs", "bplwhhsrch", "qdzxqdpzrtwzpwgbech", "zmeawvjey", "wgqytjvnxdsuy", "icyavccnncvay", "wnkgndjbh", "bjwfketjatznyiay", "mxay", "nbntxbsh", "sxswvkwbch", "bidfizws", "pxzcsh", "gsbqnwqkvhiy", "lkqx", "uvooay", "geerodr", "tdrsgghguavfqidhwmt", "vkpuyfiy", "tbsh", "ncgpfqrxpa", "ffwarcgcjch", "spjtgrzzpajimfkiy", "jjjmkvtumgwdqzs", "invvzvmrsh", "ewdjtexfognixvk", "jy", "sionahhyemt", "yoy", "gikgnhttkoecfcvx", "pzadjpeqybuy", "xhlhlhkfigy", "xuuy", "vqwoqxqmtbey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gxrvknkwuys", "airugxes", "pvpvwxtinroxes", "dkkcses", "bplwhhsrches", "qdzxqdpzrtwzpwgbeches", "zmeawvjeys", "wgqytjvnxdsuys", "icyavccnncvays", "wnkgndjbhs", "bjwfketjatznyiays", "mxays", "nbntxbshes", "sxswvkwbches", "bidfizwses", "pxzcshes", "gsbqnwqkvhiys", "lkqxes", "uvooays", "geerodrs", "tdrsgghguavfqidhwmts", "vkpuyfiys", "tbshes", "ncgpfqrxpas", "ffwarcgcjches", "spjtgrzzpajimfkiys", "jjjmkvtumgwdqzses", "invvzvmrshes", "ewdjtexfognixvks", "jies", "sionahhyemts", "yoys", "gikgnhttkoecfcvxes", "pzadjpeqybuys", "xhlhlhkfigies", "xuuys", "vqwoqxqmtbeys"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> nouns = {"gqofirupxvupwbewsdps"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gqofirupxvupwbewsdpses"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> nouns = {"cvqugcpqocwmjkwfuch", "gsmhoyislwy", "uk", "bcgxjt", "mnz", "gyquvabvxqtykfbjy", "jqcrydxl"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cvqugcpqocwmjkwfuches", "gsmhoyislwies", "uks", "bcgxjts", "mnzes", "gyquvabvxqtykfbjies", "jqcrydxls"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> nouns = {"jywwzdbnzkqtypiy", "uixoiaseiniy", "skhdstggppyavlsay", "tykwhmsh", "fncjdlpdqtnnisnhufvx", "zitzmksxey", "ykvnrky", "qefdjzagltvvo", "jnsksv", "vamhkp", "cwidrazqzkertoehijhp", "ljuunvxswevhaddz", "zavqvxedzx", "ipjedfonayqsh", "mvlrolpvgsxkjqszbqhk", "mbjmtuvqbitapezrpe", "ovcocqc", "aymkmybofqzoy", "bvvlbsh", "rlbxcwusffwofxuy", "wmshvdwteeey", "pfejggdeyhy", "euroewiy", "jxijaibkedaalgsjdhuy", "usoxilbrzjqwtgsbz", "wwkkexksh", "tstazeomfmkey", "ptdhnzhawnkbynuch", "fzzlhvanhyrhjfzns", "khsgdawxduwevdvsex", "qnskk", "cuhseey", "gstqtxrwoej", "hpdch", "xzkxvnawy", "ls", "aiqzkgzfmddmwey", "ech"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jywwzdbnzkqtypiys", "uixoiaseiniys", "skhdstggppyavlsays", "tykwhmshes", "fncjdlpdqtnnisnhufvxes", "zitzmksxeys", "ykvnrkies", "qefdjzagltvvos", "jnsksvs", "vamhkps", "cwidrazqzkertoehijhps", "ljuunvxswevhaddzes", "zavqvxedzxes", "ipjedfonayqshes", "mvlrolpvgsxkjqszbqhks", "mbjmtuvqbitapezrpes", "ovcocqcs", "aymkmybofqzoys", "bvvlbshes", "rlbxcwusffwofxuys", "wmshvdwteeeys", "pfejggdeyhies", "euroewiys", "jxijaibkedaalgsjdhuys", "usoxilbrzjqwtgsbzes", "wwkkexkshes", "tstazeomfmkeys", "ptdhnzhawnkbynuches", "fzzlhvanhyrhjfznses", "khsgdawxduwevdvsexes", "qnskks", "cuhseeys", "gstqtxrwoejs", "hpdches", "xzkxvnawies", "lses", "aiqzkgzfmddmweys", "eches"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> nouns = {"eiy", "gtz", "mobkzkakfav", "iyvzmhijcxlhrvzy", "nrkrxrvjuwmvnbmwdw", "favcilncch", "eivkrnzxfyfqmld", "rhynwkwalwmuy", "zadskstmiy", "bujaencrsfblay", "hkwewbqhiobngchv", "chypp", "bay", "gzcey", "payokrutcleflwfslgiy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eiys", "gtzes", "mobkzkakfavs", "iyvzmhijcxlhrvzies", "nrkrxrvjuwmvnbmwdws", "favcilncches", "eivkrnzxfyfqmlds", "rhynwkwalwmuys", "zadskstmiys", "bujaencrsfblays", "hkwewbqhiobngchvs", "chypps", "bays", "gzceys", "payokrutcleflwfslgiys"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> nouns = {"ubfdiy", "jypds", "dsiukcclddvqmnjkvrvs", "ofsxs", "j", "bqgeemjrxeiy", "qjey", "ckbuey", "nflgwjvywqgmoxflp", "vjxytexof", "qnuvuilginnlpz", "ufmy", "voiebwqilamrdavbgs", "gwch", "eaaccchqkwpdmipy", "vcuy", "degkmtfvkuy", "uxckroy", "zsgsfuquaevryay", "lsgybkogvfcmrfbox", "pgwgaufijxay", "hstkhoflqltyish", "qjmenzgzvrqytpuy", "isxesay", "cphiatmhgsokuauey", "menvkyzylsoploy", "tmowtbnlrfikos", "rwwnlvcpvyuxfxexach", "qgltpcodxouyedqy", "zdxsh", "fhkcililkriy", "erjmuoqkefsutyxcksh", "b", "vors", "umsvoz", "pxnfrclldgolukwoy", "kuyuhcjyhhlheujtbz", "np", "jrwnqzfwkrmuch", "mlmguy", "xsnfqapvzey", "hvtob", "qngtz", "vx", "day", "tjdcy", "xiqkflhvdpeish"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ubfdiys", "jypdses", "dsiukcclddvqmnjkvrvses", "ofsxses", "js", "bqgeemjrxeiys", "qjeys", "ckbueys", "nflgwjvywqgmoxflps", "vjxytexofs", "qnuvuilginnlpzes", "ufmies", "voiebwqilamrdavbgses", "gwches", "eaaccchqkwpdmipies", "vcuys", "degkmtfvkuys", "uxckroys", "zsgsfuquaevryays", "lsgybkogvfcmrfboxes", "pgwgaufijxays", "hstkhoflqltyishes", "qjmenzgzvrqytpuys", "isxesays", "cphiatmhgsokuaueys", "menvkyzylsoploys", "tmowtbnlrfikoses", "rwwnlvcpvyuxfxexaches", "qgltpcodxouyedqies", "zdxshes", "fhkcililkriys", "erjmuoqkefsutyxckshes", "bs", "vorses", "umsvozes", "pxnfrclldgolukwoys", "kuyuhcjyhhlheujtbzes", "nps", "jrwnqzfwkrmuches", "mlmguys", "xsnfqapvzeys", "hvtobs", "qngtzes", "vxes", "days", "tjdcies", "xiqkflhvdpeishes"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> nouns = {"vcechrpbpendmncdz", "oeojerswch", "bwhxxjfwwovbjts", "hjwpsh", "jgsdosch", "sfsntdqtneakkmimmav", "pssbxkmey", "tna", "cnonmpvlbfhmvcjesx", "ydsnyvur", "ypnjaqnrmggzgz", "m", "di", "mnfrcwqabspxisfch", "lumttljypsdxzsm", "rpratszsuldqehqbodxz", "xywskafwzoy", "bikesxeqxiy", "aey", "nqhbutkksniy", "alpawootlkmepovmvey", "yvwgboxfo", "zbthuvrloyqy", "zswquwbcoaxuqvdvmz", "saozdcdxsopdtauwx", "fhku", "ynzjdakupjl", "phlvoniay", "osmvdsdlnbtnfqzy", "kzbwdvobqib", "rsdeoich", "bguy", "ahliajndwnmy", "vcvpvmgf", "ebktox", "neaaamitcpprrwx", "falcyxdswghrshpldus", "mrscch", "ucircroobevpjmkgtx", "bmzalpflwridevzx", "zlhudyfoppgwnvy", "cxicrsh", "wcbbrcozxpduafcijhs"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vcechrpbpendmncdzes", "oeojerswches", "bwhxxjfwwovbjtses", "hjwpshes", "jgsdosches", "sfsntdqtneakkmimmavs", "pssbxkmeys", "tnas", "cnonmpvlbfhmvcjesxes", "ydsnyvurs", "ypnjaqnrmggzgzes", "ms", "dis", "mnfrcwqabspxisfches", "lumttljypsdxzsms", "rpratszsuldqehqbodxzes", "xywskafwzoys", "bikesxeqxiys", "aeys", "nqhbutkksniys", "alpawootlkmepovmveys", "yvwgboxfos", "zbthuvrloyqies", "zswquwbcoaxuqvdvmzes", "saozdcdxsopdtauwxes", "fhkus", "ynzjdakupjls", "phlvoniays", "osmvdsdlnbtnfqzies", "kzbwdvobqibs", "rsdeoiches", "bguys", "ahliajndwnmies", "vcvpvmgfs", "ebktoxes", "neaaamitcpprrwxes", "falcyxdswghrshplduses", "mrscches", "ucircroobevpjmkgtxes", "bmzalpflwridevzxes", "zlhudyfoppgwnvies", "cxicrshes", "wcbbrcozxpduafcijhses"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> nouns = {"mmq", "kocphoxrmprcmkeay", "tmqeksioalqwfteywy", "zpmppicrsh", "loy", "ddoaipoibjtqody", "ltlwdomch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mmqs", "kocphoxrmprcmkeays", "tmqeksioalqwfteywies", "zpmppicrshes", "loys", "ddoaipoibjtqodies", "ltlwdomches"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> nouns = {"nbek", "sqnzmsiluavqjshjy", "pitpx", "zuywqhmtwvpvrjnbtz", "jofut", "mwfauhcay", "ewfnqrqzlksch", "chobpijzc", "rjozsnmheskoatsjs", "vdxvz", "zkzyezfnybdlowaocsmy", "wrlgrfuwlxzhay", "yhmuy", "nifjhjducauwjqbzgmfx", "uqoaqztdemgisn", "wz", "vpiycqznathvixqmx", "rmqfzuzwhgvrbx", "sdvpbqzrpyhoemcxssh", "ffqybhbkrry", "hsycsmxcblnsoitfajbe", "irmunaqkx", "oew", "nmmfoedhaozaekvgcvfx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nbeks", "sqnzmsiluavqjshjies", "pitpxes", "zuywqhmtwvpvrjnbtzes", "jofuts", "mwfauhcays", "ewfnqrqzlksches", "chobpijzcs", "rjozsnmheskoatsjses", "vdxvzes", "zkzyezfnybdlowaocsmies", "wrlgrfuwlxzhays", "yhmuys", "nifjhjducauwjqbzgmfxes", "uqoaqztdemgisns", "wzes", "vpiycqznathvixqmxes", "rmqfzuzwhgvrbxes", "sdvpbqzrpyhoemcxsshes", "ffqybhbkrries", "hsycsmxcblnsoitfajbes", "irmunaqkxes", "oews", "nmmfoedhaozaekvgcvfxes"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> nouns = {"nfjxpoy", "hpxtahvzdnx", "osykebmijdnxs", "cwxmxzfshqbyrnxkch", "zditlvwbeezhtcgqj", "rinbrqsmuxtzrwacigsh", "rxizfpnczryijysstqsh", "zsesshplekislnuay", "rdjpzi", "ctqhiwlhey", "jajfxacbenekckqc", "ltywtxdbwnoxsh", "szyluvvrxlzzd", "gsmjuhcikaak", "agrxemmicudpfohawuey", "hwfbsnig", "juflnfqlmrzmkoy", "ivjgqyn", "lhzzxszzikx", "bvwoebirbay", "wqtbtdrybuqlqueeyiy", "nrtcpmxmlrsq", "ixopsoqjlgipwoqxkfch", "jz", "vxcvwwscssvjeyux", "kqudydfjaldhedmpaish"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nfjxpoys", "hpxtahvzdnxes", "osykebmijdnxses", "cwxmxzfshqbyrnxkches", "zditlvwbeezhtcgqjs", "rinbrqsmuxtzrwacigshes", "rxizfpnczryijysstqshes", "zsesshplekislnuays", "rdjpzis", "ctqhiwlheys", "jajfxacbenekckqcs", "ltywtxdbwnoxshes", "szyluvvrxlzzds", "gsmjuhcikaaks", "agrxemmicudpfohawueys", "hwfbsnigs", "juflnfqlmrzmkoys", "ivjgqyns", "lhzzxszzikxes", "bvwoebirbays", "wqtbtdrybuqlqueeyiys", "nrtcpmxmlrsqs", "ixopsoqjlgipwoqxkfches", "jzes", "vxcvwwscssvjeyuxes", "kqudydfjaldhedmpaishes"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> nouns = {"vqlbxbkpvvuofzi", "trovdhacihavgshtz", "nusaywmolxy", "swdyypvpikg", "qkbwcuy", "xdqfrrdish", "jxstbgwkgpwkccktoy", "oakygkuhe", "jcxsdbyjgoy", "wz", "yzwmoy", "agacfqqz", "kgnvljhbwazluy", "abitwies", "mozqtsh", "esjfx", "cnhdajvwnuauullaja", "ulxbsh", "otahiufaatsh", "rmay", "ubekcwldmjbofciy", "pkadgwovvlhx", "crl", "iskguylvlslcifsey", "ccfvxwzalvdch", "bknsisxvch", "vvmcxdbzfcn", "ejfkjhodiohtvuy", "oiidz", "dgtdmgzxaofssjdg", "ityskqcyinbirwopwhey", "mlpcqjzgkzronkxzpx", "wjyzzliulmggany", "mpounehiodctdlmqs", "wlzntbhnfx", "ynplrdgikvpshhsh", "adxqdxbcwronnjqmiy", "mbcnfiy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vqlbxbkpvvuofzis", "trovdhacihavgshtzes", "nusaywmolxies", "swdyypvpikgs", "qkbwcuys", "xdqfrrdishes", "jxstbgwkgpwkccktoys", "oakygkuhes", "jcxsdbyjgoys", "wzes", "yzwmoys", "agacfqqzes", "kgnvljhbwazluys", "abitwieses", "mozqtshes", "esjfxes", "cnhdajvwnuauullajas", "ulxbshes", "otahiufaatshes", "rmays", "ubekcwldmjbofciys", "pkadgwovvlhxes", "crls", "iskguylvlslcifseys", "ccfvxwzalvdches", "bknsisxvches", "vvmcxdbzfcns", "ejfkjhodiohtvuys", "oiidzes", "dgtdmgzxaofssjdgs", "ityskqcyinbirwopwheys", "mlpcqjzgkzronkxzpxes", "wjyzzliulmgganies", "mpounehiodctdlmqses", "wlzntbhnfxes", "ynplrdgikvpshhshes", "adxqdxbcwronnjqmiys", "mbcnfiys"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> nouns = {"jtamzubtwwpoyqe", "ejxuvawgsh", "wqkntivuish", "g", "urliadwtb", "kwzwubwtv", "bsihfz", "ihayoiegexzfa", "vgluy", "njljtaey", "uotmborcgvx", "nbzyiedrjtolkhvz", "mapozsrhhgijl", "ar", "igophmhqcnzpsh", "qfwiermiy", "vnsh", "ltomfpiblt", "uyzoovhdztvuszemwjby", "oneiocvrgpd", "sjekulaanjxfznuuy", "gfjoxey", "ittpwavhush", "lezejsjykoqayyxyey", "zbjce", "waptpuy", "wosh", "ius", "xlvlcunfzfjkxv", "ozetfoyjbtiy", "bedgregaz", "utmuczoqxayw", "eoy", "shwhhiuy", "qxzazwpshxxtghpaaoy", "hrvoaqywoldorxz", "ywcmkx", "sbay", "kjbanusoenzyg", "fqmvhb", "ivkczddmx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jtamzubtwwpoyqes", "ejxuvawgshes", "wqkntivuishes", "gs", "urliadwtbs", "kwzwubwtvs", "bsihfzes", "ihayoiegexzfas", "vgluys", "njljtaeys", "uotmborcgvxes", "nbzyiedrjtolkhvzes", "mapozsrhhgijls", "ars", "igophmhqcnzpshes", "qfwiermiys", "vnshes", "ltomfpiblts", "uyzoovhdztvuszemwjbies", "oneiocvrgpds", "sjekulaanjxfznuuys", "gfjoxeys", "ittpwavhushes", "lezejsjykoqayyxyeys", "zbjces", "waptpuys", "woshes", "iuses", "xlvlcunfzfjkxvs", "ozetfoyjbtiys", "bedgregazes", "utmuczoqxayws", "eoys", "shwhhiuys", "qxzazwpshxxtghpaaoys", "hrvoaqywoldorxzes", "ywcmkxes", "sbays", "kjbanusoenzygs", "fqmvhbs", "ivkczddmxes"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> nouns = {"hixajuhpwtdrway", "ukcpxqgahvqch", "vkvhtiwvqokjlahgjch", "zfwcr", "lckpvyaiskqjrnauzqoy", "dvkqpwgcoqkzyygqoy", "qcgcmju", "xey", "iitmonoy", "drfcda", "dcohzcph", "teljesh", "ieaoldngizbzsowiy", "lxcqylpgdsxbbjcdiy", "ffcqjbfybncrpvnqfczx", "hhqvnxcwhzkjcujcmoy", "hkgnqcmnjgebwpylpe", "ctkixovfxrea", "uxyurbxavyvsgch", "hhymzktkwjtkugiy", "faasoks", "oqifzuy", "bzadltuvwdrupyxey", "aemfwrejsh", "iu", "pmhlsxzmfewtyicclvu", "dnqfx", "ludacpiyvbuookdcoy", "fbuy", "jgnfdquunrpzyekwqy", "vdsjwrosgiy", "suovycay", "ohhixbaibjbqdl", "hyxqzfkiy", "kxzvzvnkepfeqpzhiy", "pwecjwcwk", "fwplpxv", "zklbpx", "kvogptbs", "uqhxtuy", "pfs", "wgjajlueiy", "kdszgawhwunsgfgbgy", "fjtgfsxzqwsoestx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hixajuhpwtdrways", "ukcpxqgahvqches", "vkvhtiwvqokjlahgjches", "zfwcrs", "lckpvyaiskqjrnauzqoys", "dvkqpwgcoqkzyygqoys", "qcgcmjus", "xeys", "iitmonoys", "drfcdas", "dcohzcphs", "teljeshes", "ieaoldngizbzsowiys", "lxcqylpgdsxbbjcdiys", "ffcqjbfybncrpvnqfczxes", "hhqvnxcwhzkjcujcmoys", "hkgnqcmnjgebwpylpes", "ctkixovfxreas", "uxyurbxavyvsgches", "hhymzktkwjtkugiys", "faasokses", "oqifzuys", "bzadltuvwdrupyxeys", "aemfwrejshes", "ius", "pmhlsxzmfewtyicclvus", "dnqfxes", "ludacpiyvbuookdcoys", "fbuys", "jgnfdquunrpzyekwqies", "vdsjwrosgiys", "suovycays", "ohhixbaibjbqdls", "hyxqzfkiys", "kxzvzvnkepfeqpzhiys", "pwecjwcwks", "fwplpxvs", "zklbpxes", "kvogptbses", "uqhxtuys", "pfses", "wgjajlueiys", "kdszgawhwunsgfgbgies", "fjtgfsxzqwsoestxes"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> nouns = {"urnfpogkqccbvct", "vrisgmey", "pkngonybekezbnvby", "wcpdxowtry", "kb", "cwculjppkbsmmhzay", "ey", "wmoy", "goy", "fhje", "lzxpy", "nuykzorqyqiu", "rijhqrkyly", "bbxkkcxgcvssh", "ennlbdqey", "zupqzqfjx", "y", "bnoy", "dqujjtfox", "avsikez", "sxvpkaksiwqahcqzey", "gwopqbzvvouy", "xteirobajkzppqoy", "zmqktaqzaxshs", "agpksuy", "hfdzizboy", "qmvpvtcfhlomluyyypey", "jzqtjatvgcfay", "iwofnhqlqonqrecfvuy", "rhjlglsnoish", "spgjrjbivgsnvwekdsh", "avfj", "epuvfnccjvurnbhfob", "fxrasy", "oqqlxzoy", "pztceljpmitns", "mpdwrktllncvhulich", "osauqdqzqszrouy", "wyblfyivv", "jwrxfiumedkocvpey", "txazbeiiy", "vcgogfsfftrsndrviy", "kdnmncmsh", "edszoatnz", "tdxjrdmiydtrn", "xtdjnvuoctqruircks"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"urnfpogkqccbvcts", "vrisgmeys", "pkngonybekezbnvbies", "wcpdxowtries", "kbs", "cwculjppkbsmmhzays", "eys", "wmoys", "goys", "fhjes", "lzxpies", "nuykzorqyqius", "rijhqrkylies", "bbxkkcxgcvsshes", "ennlbdqeys", "zupqzqfjxes", "ies", "bnoys", "dqujjtfoxes", "avsikezes", "sxvpkaksiwqahcqzeys", "gwopqbzvvouys", "xteirobajkzppqoys", "zmqktaqzaxshses", "agpksuys", "hfdzizboys", "qmvpvtcfhlomluyyypeys", "jzqtjatvgcfays", "iwofnhqlqonqrecfvuys", "rhjlglsnoishes", "spgjrjbivgsnvwekdshes", "avfjs", "epuvfnccjvurnbhfobs", "fxrasies", "oqqlxzoys", "pztceljpmitnses", "mpdwrktllncvhuliches", "osauqdqzqszrouys", "wyblfyivvs", "jwrxfiumedkocvpeys", "txazbeiiys", "vcgogfsfftrsndrviys", "kdnmncmshes", "edszoatnzes", "tdxjrdmiydtrns", "xtdjnvuoctqruirckses"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> nouns = {"agwzy", "oxngey", "wkssarazcmis", "yqy", "dnrekucwexfoozuooey", "hazx", "fpkjiday", "rnp", "jfzizywtpazahsiteqfz", "pwgoqobips", "qnjxgxawz", "vigrpqofgzophsbftly", "qxnrwjztnif", "zmqvhgey", "qnebysawmqcrzsdfajey", "britz", "vuillz", "nszet", "srtrdsykqmeeccakiy", "krqemwgisbjqoerwnby", "tpush", "ibizldsjch", "pkranty", "tdacccinkmslrhlwbash", "jsvd", "kssxykqdqpdx", "hjfoy", "jjnzeuuy", "ltcctpmycxdlvoy", "bwbuzlmtey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"agwzies", "oxngeys", "wkssarazcmises", "yqies", "dnrekucwexfoozuooeys", "hazxes", "fpkjidays", "rnps", "jfzizywtpazahsiteqfzes", "pwgoqobipses", "qnjxgxawzes", "vigrpqofgzophsbftlies", "qxnrwjztnifs", "zmqvhgeys", "qnebysawmqcrzsdfajeys", "britzes", "vuillzes", "nszets", "srtrdsykqmeeccakiys", "krqemwgisbjqoerwnbies", "tpushes", "ibizldsjches", "pkranties", "tdacccinkmslrhlwbashes", "jsvds", "kssxykqdqpdxes", "hjfoys", "jjnzeuuys", "ltcctpmycxdlvoys", "bwbuzlmteys"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> nouns = {"mj", "dxlenxtx", "kfancpkqhcnausfyx", "ml", "dyreddekaakfsqaooy", "laozlmvrdrmhygytmey", "iaejkycqhep", "uqute"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mjs", "dxlenxtxes", "kfancpkqhcnausfyxes", "mls", "dyreddekaakfsqaooys", "laozlmvrdrmhygytmeys", "iaejkycqheps", "uqutes"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> nouns = {"delhoodqfrlidintay", "qxcvcfbpdvvdukeled", "pkxcgcetsh", "hgzyfnfos", "efdwiaaxggyufqtpzool", "nqsch", "ayz", "fhatuvhlumqygch", "yljmifs", "uzlncubpygmmrlt", "aeobhiatc", "irdmfkpagglgfeugps", "lsfhz", "reishidci", "gykokgssvytoxjboujiy", "fptvdzx", "bx", "xttcumwhf", "svdhkrey", "pkj", "gcdncuefikzbgwoy", "hyzmlxnoims", "ouoowtsibbulykziy", "bdvahhqdcfos", "vch", "sepewlpnqzcnziy", "artchjeonmlcaz", "mexcynpxeucuvdzxk", "ngyibjoyprxyfppn", "tobcvlikech", "nrgzuscrvz", "oyitwmjjtzlvgpqps", "upgshzbimjizfdrpyz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"delhoodqfrlidintays", "qxcvcfbpdvvdukeleds", "pkxcgcetshes", "hgzyfnfoses", "efdwiaaxggyufqtpzools", "nqsches", "ayzes", "fhatuvhlumqygches", "yljmifses", "uzlncubpygmmrlts", "aeobhiatcs", "irdmfkpagglgfeugpses", "lsfhzes", "reishidcis", "gykokgssvytoxjboujiys", "fptvdzxes", "bxes", "xttcumwhfs", "svdhkreys", "pkjs", "gcdncuefikzbgwoys", "hyzmlxnoimses", "ouoowtsibbulykziys", "bdvahhqdcfoses", "vches", "sepewlpnqzcnziys", "artchjeonmlcazes", "mexcynpxeucuvdzxks", "ngyibjoyprxyfppns", "tobcvlikeches", "nrgzuscrvzes", "oyitwmjjtzlvgpqpses", "upgshzbimjizfdrpyzes"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> nouns = {"vgrhsvw", "wcrmrbdnpvuxccuy", "mbeas", "uultavlokxhtey", "zmbvhmfwhta", "gpsbzzkifjufj", "pwoaowjxsauoh", "sqquxvjulrgnnniliy", "zmuioy", "vkefnuy", "ejcpkypimgch", "yotsihksbiy", "wxxcvlvmsnux", "whlhjbcilvz", "rbrtlix"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vgrhsvws", "wcrmrbdnpvuxccuys", "mbeases", "uultavlokxhteys", "zmbvhmfwhtas", "gpsbzzkifjufjs", "pwoaowjxsauohs", "sqquxvjulrgnnniliys", "zmuioys", "vkefnuys", "ejcpkypimgches", "yotsihksbiys", "wxxcvlvmsnuxes", "whlhjbcilvzes", "rbrtlixes"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> nouns = {"zvnuwlvltm", "dbvs", "eayzpdke", "yhqt", "ogszyyjlasrwikkiliy", "cxiy", "ifanpwcqelhrcs", "todiay", "wppufqupjdtxan", "vpefqarlypvmpmqsmy", "rslbjprccnwppnmz", "dpacfuch", "gvxcwkraqoiy", "ezhwumawetgs", "tejetdvzwgcekmzncbch", "uuy", "kxllccviaoprejygey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zvnuwlvltms", "dbvses", "eayzpdkes", "yhqts", "ogszyyjlasrwikkiliys", "cxiys", "ifanpwcqelhrcses", "todiays", "wppufqupjdtxans", "vpefqarlypvmpmqsmies", "rslbjprccnwppnmzes", "dpacfuches", "gvxcwkraqoiys", "ezhwumawetgses", "tejetdvzwgcekmzncbches", "uuys", "kxllccviaoprejygeys"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> nouns = {"rey", "wbcgsrkpwimknhbwajsh", "ralybqywlc", "htjxhn", "bdobpytidqfqkjgekey", "reldcmypsclgcwbciy", "fuipvjmcay", "nbdgz", "ex", "kwuhncfqndqhtxakby", "rbtmqqkgsy", "ukmqsbqfhlqcy", "uaxuehmlptavkjyiy", "qwkroaihn", "glauy", "azjey", "xfsh", "ypzrtmsrxfgzi", "dkiwlvoendqvlcfiiea", "vyvbatoy", "npjcay", "joiviifhojyay", "bbdefsy", "eybxfjtgbnnbonmhyoi", "skhkkjtngalfcgwvywzs", "fx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"reys", "wbcgsrkpwimknhbwajshes", "ralybqywlcs", "htjxhns", "bdobpytidqfqkjgekeys", "reldcmypsclgcwbciys", "fuipvjmcays", "nbdgzes", "exes", "kwuhncfqndqhtxakbies", "rbtmqqkgsies", "ukmqsbqfhlqcies", "uaxuehmlptavkjyiys", "qwkroaihns", "glauys", "azjeys", "xfshes", "ypzrtmsrxfgzis", "dkiwlvoendqvlcfiieas", "vyvbatoys", "npjcays", "joiviifhojyays", "bbdefsies", "eybxfjtgbnnbonmhyois", "skhkkjtngalfcgwvywzses", "fxes"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> nouns = {"uxarknusivprjrxyfbjf", "qwkjbxkldbmch", "kpnajgmprch", "mghfiabnslxqcqinsoy", "vpey", "fmx", "zljnvkcvpviqqiay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"uxarknusivprjrxyfbjfs", "qwkjbxkldbmches", "kpnajgmprches", "mghfiabnslxqcqinsoys", "vpeys", "fmxes", "zljnvkcvpviqqiays"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> nouns = {"mjsdhwum", "wujgzxwatsmeocach", "ejbbglws", "vqdtcs", "fyqczugkdqbgjeifs"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mjsdhwums", "wujgzxwatsmeocaches", "ejbbglwses", "vqdtcses", "fyqczugkdqbgjeifses"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> nouns = {"fkvkmzihotnqsat", "llyqlqakv", "nvwlavirlebnwhbmd", "hllymazch", "clbculqosdaotrybrkz", "sowihqsgblotwzgjt", "bqibgdx", "zfqaz", "nbwdlasywkcz", "barosggwnr", "bdoz", "sewweeotcedey", "mtxskjibttscz", "eduy", "lfdftvytofch", "blrzbukgozavay", "qssh", "hjscxlphbeygimmthuy", "bfvgnxpsdmmwoy", "tozlmogvgdzuas", "koizlcmphantvituwy", "zkwimiypaylcj"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fkvkmzihotnqsats", "llyqlqakvs", "nvwlavirlebnwhbmds", "hllymazches", "clbculqosdaotrybrkzes", "sowihqsgblotwzgjts", "bqibgdxes", "zfqazes", "nbwdlasywkczes", "barosggwnrs", "bdozes", "sewweeotcedeys", "mtxskjibttsczes", "eduys", "lfdftvytofches", "blrzbukgozavays", "qsshes", "hjscxlphbeygimmthuys", "bfvgnxpsdmmwoys", "tozlmogvgdzuases", "koizlcmphantvituwies", "zkwimiypaylcjs"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> nouns = {"kphomlqxbpitqedch", "unqsupirgsspahyxriqa", "fbx", "jruzkgwway", "yykjtxnpop", "izsfdhvtiarxlduy", "jfwwypciyznetgwyje", "ryufxwomdiy", "ahgjwdsh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kphomlqxbpitqedches", "unqsupirgsspahyxriqas", "fbxes", "jruzkgwways", "yykjtxnpops", "izsfdhvtiarxlduys", "jfwwypciyznetgwyjes", "ryufxwomdiys", "ahgjwdshes"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> nouns = {"xbftzy", "hnfglgfzjphxgbcuuy", "xjahduy", "ux", "yxpnfykz", "lprqcydb", "helpfz", "v", "xefhaifqfay", "cuenpitcxxkrkuaazvy", "ihpurnirsicamrey", "czxey", "edkcoybwthcpwfry", "lyfnxjinwputzsjtx", "rzafsod", "ofzukqkcey", "xwwwqnjohjehxzcimuy", "fnncx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xbftzies", "hnfglgfzjphxgbcuuys", "xjahduys", "uxes", "yxpnfykzes", "lprqcydbs", "helpfzes", "vs", "xefhaifqfays", "cuenpitcxxkrkuaazvies", "ihpurnirsicamreys", "czxeys", "edkcoybwthcpwfries", "lyfnxjinwputzsjtxes", "rzafsods", "ofzukqkceys", "xwwwqnjohjehxzcimuys", "fnncxes"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> nouns = {"pernfihsrjwzrach", "tvqlfdhnuy", "amcsegofniailwkrch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pernfihsrjwzraches", "tvqlfdhnuys", "amcsegofniailwkrches"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> nouns = {"xhrzakdadlofey", "nbgebqrusnluey", "xotxilgfaxbrhzkey", "pliy", "rlcmhsakovwxumeuuy", "uuhzpauy", "mvkjqtumbve", "weqjaiwajsvddhyax", "mzddswkquy", "agwoy", "bgukmqnentsegkwabec", "nkmmrddxxxnway", "io", "buyeffnkzntsgnsn", "rltneifibxixvaeqry", "omqtotpgrfuyvoeiy", "xwqqhyulfdxay", "pggxxiy", "repovltaey", "bbao", "rtsuay", "nyjxvlonuivy", "vxiywrqynxvgdy", "plezqwcz", "piush", "kwtfabokuun", "uoqixwwdeug", "etkjdfpsl", "gyjhcafzltxxor"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xhrzakdadlofeys", "nbgebqrusnlueys", "xotxilgfaxbrhzkeys", "pliys", "rlcmhsakovwxumeuuys", "uuhzpauys", "mvkjqtumbves", "weqjaiwajsvddhyaxes", "mzddswkquys", "agwoys", "bgukmqnentsegkwabecs", "nkmmrddxxxnways", "ios", "buyeffnkzntsgnsns", "rltneifibxixvaeqries", "omqtotpgrfuyvoeiys", "xwqqhyulfdxays", "pggxxiys", "repovltaeys", "bbaos", "rtsuays", "nyjxvlonuivies", "vxiywrqynxvgdies", "plezqwczes", "piushes", "kwtfabokuuns", "uoqixwwdeugs", "etkjdfpsls", "gyjhcafzltxxors"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> nouns = {"kyaiy", "mbsracfhpftoy", "eoy", "yczhgjduntaiyey", "gaxuiazwvkhcoy", "rvlttmttfxqzmnrqkoy", "dqy", "mrulcvt", "ddowgvmyfjxiky", "wxyz", "mgygumlmpdalvay", "lcsxkugxvetfbgy", "bniyacxdch", "jnhiacciqns", "zctzjsszaxg", "bmwpbroxatg", "dffrjlfiy", "lgdrpkay", "ibpzgvprpuos", "umwx", "lvcpgdxwvjiy", "naockcnxray", "jswhdtumsvogtwjrirlo", "lntkgwcamxsody", "khrowpyeiemzalxjaey", "yslsthcededcmhdy", "suy", "mfrlh", "unkxzjxphcnglmkmsk", "boumxbpetxevfelofrj", "nqekilyvratgjtxr", "bwxgjghiwhfbtoay", "vgyoh", "peqbuuylgxzcyoid", "jamhbkgmxxtbtjeey", "ls", "zng", "njiy", "tnudpfey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kyaiys", "mbsracfhpftoys", "eoys", "yczhgjduntaiyeys", "gaxuiazwvkhcoys", "rvlttmttfxqzmnrqkoys", "dqies", "mrulcvts", "ddowgvmyfjxikies", "wxyzes", "mgygumlmpdalvays", "lcsxkugxvetfbgies", "bniyacxdches", "jnhiacciqnses", "zctzjsszaxgs", "bmwpbroxatgs", "dffrjlfiys", "lgdrpkays", "ibpzgvprpuoses", "umwxes", "lvcpgdxwvjiys", "naockcnxrays", "jswhdtumsvogtwjrirlos", "lntkgwcamxsodies", "khrowpyeiemzalxjaeys", "yslsthcededcmhdies", "suys", "mfrlhs", "unkxzjxphcnglmkmsks", "boumxbpetxevfelofrjs", "nqekilyvratgjtxrs", "bwxgjghiwhfbtoays", "vgyohs", "peqbuuylgxzcyoids", "jamhbkgmxxtbtjeeys", "lses", "zngs", "njiys", "tnudpfeys"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> nouns = {"whtojpijbfx", "kxwylrxokmtewsh", "lvpgsezykaajoivuiy", "dkyhikubfgldoy", "zqcxxvqjvcrglqxpy", "rlxsykhqokkphse", "zuy", "fsephiy", "ydfb", "gpqbptbrrbvsydfqey", "ckygyiy", "hey", "afch", "ikyqdnedrsjzoisfo", "fbnjgkexwtiy", "fckpsbmpkeay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"whtojpijbfxes", "kxwylrxokmtewshes", "lvpgsezykaajoivuiys", "dkyhikubfgldoys", "zqcxxvqjvcrglqxpies", "rlxsykhqokkphses", "zuys", "fsephiys", "ydfbs", "gpqbptbrrbvsydfqeys", "ckygyiys", "heys", "afches", "ikyqdnedrsjzoisfos", "fbnjgkexwtiys", "fckpsbmpkeays"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> nouns = {"pwgpxdnkns", "vjpguqsch", "wwhmiy", "mcskgbwytdmey", "hfjttssuy", "ipjtdrrx", "unnencsy", "zpgfajyaqnisqcgquq", "ausufqrduzxkzkkqnvsh", "lezulxcnwrdzvuetqgai", "gwmktpreh", "txjirkv", "pxnvijkugaz", "nysoeezqqwjqrp", "ewqibnwcqofx", "rtxjwoy", "qdcqainjebyufrlszdsh", "rgzeuxyqjfky", "uxtfqhvueguhjohiy", "uuy", "hvvwf", "opsajoy", "yryjxkdauxljjch", "ecarppusv", "xvv", "lxiuy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pwgpxdnknses", "vjpguqsches", "wwhmiys", "mcskgbwytdmeys", "hfjttssuys", "ipjtdrrxes", "unnencsies", "zpgfajyaqnisqcgquqs", "ausufqrduzxkzkkqnvshes", "lezulxcnwrdzvuetqgais", "gwmktprehs", "txjirkvs", "pxnvijkugazes", "nysoeezqqwjqrps", "ewqibnwcqofxes", "rtxjwoys", "qdcqainjebyufrlszdshes", "rgzeuxyqjfkies", "uxtfqhvueguhjohiys", "uuys", "hvvwfs", "opsajoys", "yryjxkdauxljjches", "ecarppusvs", "xvvs", "lxiuys"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> nouns = {"b", "fqtoahotfpfvqkcvz", "jdsgzfidcpulrgwseray", "rxjnuezkgdkipoddnwps", "rkbx", "ixfshbtmonecm", "jrhdqqulsjznnws", "zllj", "ixknpzkbpdiuleeztfx", "svcash", "fyiqjbuhtzvewjyoyb"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bs", "fqtoahotfpfvqkcvzes", "jdsgzfidcpulrgwserays", "rxjnuezkgdkipoddnwpses", "rkbxes", "ixfshbtmonecms", "jrhdqqulsjznnwses", "zlljs", "ixknpzkbpdiuleeztfxes", "svcashes", "fyiqjbuhtzvewjyoybs"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> nouns = {"f", "zilyz", "cotbbsaqyutewcls", "otjbbikujqigqhvuey", "qcqzvqpezywbioey", "ymjhty", "zyanrrybooish", "tbmualavqhnnlshmatn", "ohpcpmzvsfch", "ppujmdpqcjevs", "mqowrjarmnmsvayde", "fevdepmtrlfcy", "zb", "hkzxvvektex", "xysx", "jmttuunmzgopby", "qiofzenwgibjuy", "roacwppyodhizkes", "gnqdcvyjkx", "qlwzjq", "dlayjo", "fdgsouvqfpkbcbely"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fs", "zilyzes", "cotbbsaqyutewclses", "otjbbikujqigqhvueys", "qcqzvqpezywbioeys", "ymjhties", "zyanrrybooishes", "tbmualavqhnnlshmatns", "ohpcpmzvsfches", "ppujmdpqcjevses", "mqowrjarmnmsvaydes", "fevdepmtrlfcies", "zbs", "hkzxvvektexes", "xysxes", "jmttuunmzgopbies", "qiofzenwgibjuys", "roacwppyodhizkeses", "gnqdcvyjkxes", "qlwzjqs", "dlayjos", "fdgsouvqfpkbcbelies"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> nouns = {"aqtbrijrzctixhvpaoy", "sbed", "sjvrqbxxvwixqeey", "iizsaogssch", "tnilowtdekqmg", "aerrepyxilsh", "irqxidpfyuvbsh", "htwcnawzutjiy", "fonmujfch", "sfiaqcsbjrzficchxch", "gvy", "oxdjotaoartmcuy", "mqquy", "pcaqyyaoy", "akuy", "hlwhqffnpnay", "qaqpuy", "ilen", "crmyuy", "thujpmhkrtjdbdyjiy", "oafhje", "tcylnlkrktish", "keiggcuvfm", "qcughvshxwkmsnpmmcey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqtbrijrzctixhvpaoys", "sbeds", "sjvrqbxxvwixqeeys", "iizsaogssches", "tnilowtdekqmgs", "aerrepyxilshes", "irqxidpfyuvbshes", "htwcnawzutjiys", "fonmujfches", "sfiaqcsbjrzficchxches", "gvies", "oxdjotaoartmcuys", "mqquys", "pcaqyyaoys", "akuys", "hlwhqffnpnays", "qaqpuys", "ilens", "crmyuys", "thujpmhkrtjdbdyjiys", "oafhjes", "tcylnlkrktishes", "keiggcuvfms", "qcughvshxwkmsnpmmceys"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> nouns = {"rvbaprlwpdzxhnbbhhqk", "crlz", "tkbbbakkjuiftmvc", "z", "gfrvlemkcpnx", "iclgdhnash", "njptejy", "zskfevuy", "bmgjamzwsipwwqnich", "uwfuy", "evkeghs", "sldccliptrtkikgbawuy", "dyezlvfedgkrey", "blaeyvutgwz", "sxlszwecivghz", "mjwbogxbvdjviy", "voylwavqjjdtmi", "viqmnbay", "fwcjkdpxxy", "adkweueufay", "iubzmddfqagoy", "tgfsyybmgfay", "uuy", "rzlrdgz", "rhmfdbgafy", "dsebbs", "grfsjypffla", "bxfroqrphqqdinspfu", "nsx", "dpvtmriyvpiabsh", "ozgoixnposatevxlch", "unfx", "ce", "vmsxgnlurojjootqdsx", "zcsfoay", "kxipbxbsh", "jsuwks", "qmcenruwzpuuiubu"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rvbaprlwpdzxhnbbhhqks", "crlzes", "tkbbbakkjuiftmvcs", "zes", "gfrvlemkcpnxes", "iclgdhnashes", "njptejies", "zskfevuys", "bmgjamzwsipwwqniches", "uwfuys", "evkeghses", "sldccliptrtkikgbawuys", "dyezlvfedgkreys", "blaeyvutgwzes", "sxlszwecivghzes", "mjwbogxbvdjviys", "voylwavqjjdtmis", "viqmnbays", "fwcjkdpxxies", "adkweueufays", "iubzmddfqagoys", "tgfsyybmgfays", "uuys", "rzlrdgzes", "rhmfdbgafies", "dsebbses", "grfsjypfflas", "bxfroqrphqqdinspfus", "nsxes", "dpvtmriyvpiabshes", "ozgoixnposatevxlches", "unfxes", "ces", "vmsxgnlurojjootqdsxes", "zcsfoays", "kxipbxbshes", "jsuwkses", "qmcenruwzpuuiubus"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> nouns = {"jlqnldmynx", "kgmtdzznxrxg", "rocqlrjey", "qheqxutlyvy", "xxwifijuwmesh", "ptysubyiy", "aztocotqhyusfhaxjwwi", "taxiidfijhqjwijs", "ltmzegj", "muyphigokcrxpssh", "unhxvclwlubiyxcebech", "socefgjiy", "qyzcbedorbjlob", "wfrthjgvliyey", "xzfuemftuy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jlqnldmynxes", "kgmtdzznxrxgs", "rocqlrjeys", "qheqxutlyvies", "xxwifijuwmeshes", "ptysubyiys", "aztocotqhyusfhaxjwwis", "taxiidfijhqjwijses", "ltmzegjs", "muyphigokcrxpsshes", "unhxvclwlubiyxcebeches", "socefgjiys", "qyzcbedorbjlobs", "wfrthjgvliyeys", "xzfuemftuys"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> nouns = {"rcettmrsgxdztagauza", "eboqqxekz", "hozuffitxslwx", "utoxrth", "wxmiawpnbiwus", "jxey", "oey", "tjncay", "hpeurlqmxwqomglaiauy", "qfitvpjszwquy", "fygobpcs", "gcbgnbgtiy", "tvdlmfbiy", "ljznwvsh", "atvuedarinay", "qweoqnwixkqffyjyiy", "kyvxyktzwifx", "d", "tglpeyiy", "vyypjakifvkpmpnycwey", "twsngzsuey", "rqckxbcvjuzovamy", "znxaecjggvxuy", "xojfay", "cobvscsf", "xdgsnwsfahrasut", "kwazztos", "tkcemyolvfmyvkrjtqt", "wrhkqrcapzcuoncoqg", "rjy", "xonxcolansssasbuy", "ryacjkqsacxwiy", "suentrtxjdwbzjay", "xwbehoqsh", "qrjx", "ktcctfqrwkehqmey", "rgdkch", "cvwqpegbkexpz", "ecejjcycpvxspyoz", "nwndmhnjyyeftxeed", "wtmkscojosthzee", "kjeowzloay", "inczlbr", "ghzsetimz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rcettmrsgxdztagauzas", "eboqqxekzes", "hozuffitxslwxes", "utoxrths", "wxmiawpnbiwuses", "jxeys", "oeys", "tjncays", "hpeurlqmxwqomglaiauys", "qfitvpjszwquys", "fygobpcses", "gcbgnbgtiys", "tvdlmfbiys", "ljznwvshes", "atvuedarinays", "qweoqnwixkqffyjyiys", "kyvxyktzwifxes", "ds", "tglpeyiys", "vyypjakifvkpmpnycweys", "twsngzsueys", "rqckxbcvjuzovamies", "znxaecjggvxuys", "xojfays", "cobvscsfs", "xdgsnwsfahrasuts", "kwazztoses", "tkcemyolvfmyvkrjtqts", "wrhkqrcapzcuoncoqgs", "rjies", "xonxcolansssasbuys", "ryacjkqsacxwiys", "suentrtxjdwbzjays", "xwbehoqshes", "qrjxes", "ktcctfqrwkehqmeys", "rgdkches", "cvwqpegbkexpzes", "ecejjcycpvxspyozes", "nwndmhnjyyeftxeeds", "wtmkscojosthzees", "kjeowzloays", "inczlbrs", "ghzsetimzes"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> nouns = {"tmbrjfzlgxtdylouey", "ltvmjfmabuysfufsh", "eptjtafraeciy", "ggqrzdfwsvsyucf", "adx", "fldwctopebvufdbwuy", "fvtojyy", "psmzxvwadtvqieqs", "bvfauwcyklq", "wfljgndbx", "pmfkwiy", "oklsuwlfbagftviy", "cwwzdvopckbzcj", "deexzbna", "oghrewmqucqhlj", "ddisey", "witqtkrbvpc", "iuutcedvfvlibfs", "ikdch", "etc", "yrvtqszeeitoy", "vwomdosh", "izzavdopjy", "bavnotbmzdku", "ehsh", "wzymmykich", "pguunnkeopddmech", "ljhfypqekslmqnscsrux", "ibeuaystkymmrgkvsh", "amricxbvvqxayzey", "tdxzs", "tcwavrcvcaeptmmz", "mqqcamtutzoy", "uzteratvw", "nbbwgxs", "qyqmikztpmhpnnvqspb", "gampgkdofjjvxubqy", "nbbyktcqcos", "xqzwyioebjlgch", "ovdbxuy", "nqbtdriy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tmbrjfzlgxtdyloueys", "ltvmjfmabuysfufshes", "eptjtafraeciys", "ggqrzdfwsvsyucfs", "adxes", "fldwctopebvufdbwuys", "fvtojyies", "psmzxvwadtvqieqses", "bvfauwcyklqs", "wfljgndbxes", "pmfkwiys", "oklsuwlfbagftviys", "cwwzdvopckbzcjs", "deexzbnas", "oghrewmqucqhljs", "ddiseys", "witqtkrbvpcs", "iuutcedvfvlibfses", "ikdches", "etcs", "yrvtqszeeitoys", "vwomdoshes", "izzavdopjies", "bavnotbmzdkus", "ehshes", "wzymmykiches", "pguunnkeopddmeches", "ljhfypqekslmqnscsruxes", "ibeuaystkymmrgkvshes", "amricxbvvqxayzeys", "tdxzses", "tcwavrcvcaeptmmzes", "mqqcamtutzoys", "uzteratvws", "nbbwgxses", "qyqmikztpmhpnnvqspbs", "gampgkdofjjvxubqies", "nbbyktcqcoses", "xqzwyioebjlgches", "ovdbxuys", "nqbtdriys"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> nouns = {"vlwzgby", "egkouubgldgfqgdfbz", "gfypickfugszxtjadch", "mhcroy", "hxtkuqnytsxy", "dh", "wrzuoiiqslkrgplzwgc", "jey", "qhsrsfitteox", "nlzlxz", "nljbesufzoey", "ccgojwlteumkevnsh", "jfoczzmwsbblgn", "mcfq", "pbiy", "dxuy", "pawdvovety", "cechmtfgiwhjnb", "sqgnmyxwazgnhwfkxmmy", "heihhggsvpnsoo", "hxsflojlaec", "ubahfijbwnwkzduy", "vczkhgfpeey", "oy", "jdeiuy", "wgsviqvoiupiy", "ylexjjulgcqhok", "zinbuqprch", "okkgg", "vhpauy", "anmhlcuesxyzbscbuch", "qclyfpyzwxrbay", "wczlxbjfutx", "ygxzyebcaukbsyqtn", "ddey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vlwzgbies", "egkouubgldgfqgdfbzes", "gfypickfugszxtjadches", "mhcroys", "hxtkuqnytsxies", "dhs", "wrzuoiiqslkrgplzwgcs", "jeys", "qhsrsfitteoxes", "nlzlxzes", "nljbesufzoeys", "ccgojwlteumkevnshes", "jfoczzmwsbblgns", "mcfqs", "pbiys", "dxuys", "pawdvoveties", "cechmtfgiwhjnbs", "sqgnmyxwazgnhwfkxmmies", "heihhggsvpnsoos", "hxsflojlaecs", "ubahfijbwnwkzduys", "vczkhgfpeeys", "oys", "jdeiuys", "wgsviqvoiupiys", "ylexjjulgcqhoks", "zinbuqprches", "okkggs", "vhpauys", "anmhlcuesxyzbscbuches", "qclyfpyzwxrbays", "wczlxbjfutxes", "ygxzyebcaukbsyqtns", "ddeys"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> nouns = {"ebljwywsyagkyqrbkbj", "khvfsxhqtoy", "leipqzexey", "phpynt", "cwfwkfmy", "qewdwntgqedf", "hgqkloy", "hyctsdhch", "odiax"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ebljwywsyagkyqrbkbjs", "khvfsxhqtoys", "leipqzexeys", "phpynts", "cwfwkfmies", "qewdwntgqedfs", "hgqkloys", "hyctsdhches", "odiaxes"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> nouns = {"nkflpzkf", "cftrmehckmyofy", "xctsfhfpvzoy", "nniuqx", "tflbxfxkbidlhpoy", "fhnwey", "vsiaqbdn", "yorelrx", "wosrtycwwesh", "hwwhzzk", "xssay", "wqoukkrcmfqvjvay", "fzibyckqay", "ppngzdbcnmpoy", "ctsxhihchtntquy", "hfxdyxafdrbrz", "foy", "xsfufisnaey", "pnsbtawsoitky", "ubzey", "tukmshslogxay", "joyiyay", "wrigbwdqqlyjuyebwj", "neaajrqqovavchr", "swkey", "zwicxvuqmzfgyzuqhmey", "hctefdfgfxjcfmjamnmx", "oecrabicvamniqydlrch", "mfuy", "mkjcccosbphch", "xdccmdipugay", "nnigoy", "dtcpbjuy", "aostlmurimzgupqoy", "qfoknkvmlejepahox", "vtuie", "bjojecjicklfrxuos", "gnqrkmuy", "gnwztwwnkfefcedguy", "zplurabgbz", "nbvcubjx", "jraabfdhvkkiltbqeuy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nkflpzkfs", "cftrmehckmyofies", "xctsfhfpvzoys", "nniuqxes", "tflbxfxkbidlhpoys", "fhnweys", "vsiaqbdns", "yorelrxes", "wosrtycwweshes", "hwwhzzks", "xssays", "wqoukkrcmfqvjvays", "fzibyckqays", "ppngzdbcnmpoys", "ctsxhihchtntquys", "hfxdyxafdrbrzes", "foys", "xsfufisnaeys", "pnsbtawsoitkies", "ubzeys", "tukmshslogxays", "joyiyays", "wrigbwdqqlyjuyebwjs", "neaajrqqovavchrs", "swkeys", "zwicxvuqmzfgyzuqhmeys", "hctefdfgfxjcfmjamnmxes", "oecrabicvamniqydlrches", "mfuys", "mkjcccosbphches", "xdccmdipugays", "nnigoys", "dtcpbjuys", "aostlmurimzgupqoys", "qfoknkvmlejepahoxes", "vtuies", "bjojecjicklfrxuoses", "gnqrkmuys", "gnwztwwnkfefcedguys", "zplurabgbzes", "nbvcubjxes", "jraabfdhvkkiltbqeuys"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> nouns = {"kebrwy", "ehkauy", "kx", "nrgannfzwolviy", "ojglcbrrkixsiy", "hcnebsh", "aadfekpay", "nxlmjfoy", "xgsh", "p", "fewins", "yntcqkdfaohicguiy", "pdjglanekkyjajz", "asevomqcj", "yesmz", "bhiskciy", "fuikzmtcney", "kkufeexycb", "qjqyiuennb", "zcvlasvkmexnxsikch", "cbwiekhindtxmqv", "aa", "keus", "nikwbohjfhviy", "zyquhogumlch", "yrnqfvuy", "nkjpmtigrdmpag", "mqbgash", "mjzrsney", "kmluy", "fzudxnch", "iy", "hxwkebndrdghiccwj", "yxoyge", "sdyftprnpuciglahyca", "cwlrasmpwdhh", "kkkeaclgoiruhvihms", "aqwtiy", "uofuy", "osdqrsehddvjxxaeseey", "utaosedrlz", "bilquurtkpmws", "wsyqgtbyvw", "bxyrujhkpjfmdftal"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kebrwies", "ehkauys", "kxes", "nrgannfzwolviys", "ojglcbrrkixsiys", "hcnebshes", "aadfekpays", "nxlmjfoys", "xgshes", "ps", "fewinses", "yntcqkdfaohicguiys", "pdjglanekkyjajzes", "asevomqcjs", "yesmzes", "bhiskciys", "fuikzmtcneys", "kkufeexycbs", "qjqyiuennbs", "zcvlasvkmexnxsikches", "cbwiekhindtxmqvs", "aas", "keuses", "nikwbohjfhviys", "zyquhogumlches", "yrnqfvuys", "nkjpmtigrdmpags", "mqbgashes", "mjzrsneys", "kmluys", "fzudxnches", "iys", "hxwkebndrdghiccwjs", "yxoyges", "sdyftprnpuciglahycas", "cwlrasmpwdhhs", "kkkeaclgoiruhvihmses", "aqwtiys", "uofuys", "osdqrsehddvjxxaeseeys", "utaosedrlzes", "bilquurtkpmwses", "wsyqgtbyvws", "bxyrujhkpjfmdftals"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> nouns = {"jhnrheaqxfwajx", "ps", "jbuhwvzpdx", "kswb", "mfcoxfbmfwuljhjf", "lsch", "vezezxzlrobnrcfpytj", "cnfbgjanywpofwey", "mnnvpncb", "ipsjpeikxhupjay", "qkyoqvrkiwkdhx", "iilfxnmdjhcvrenhdah", "mohcwsvhyudabmgvzwsh", "bslhtdhxbaqoy", "ncrztersh", "kvwttmoednnexgbfkch", "mrmznay", "cy", "jnreggzwloggoy", "dx", "lvoabyzrdwnafmray", "wjerawmluy", "ofgilqvkudx", "ymvfcoemi", "vybawuey", "zstcpjnltvidzamryvoy", "oxvuflwwqwexnxbs", "qxfuabdarcqoupzxiy", "ihclcoildwblxtfmzuy", "wevutslvakqxepsnos", "pmdqzlkwyuvdhjjfley", "bgsdxafuy", "egvxdzfxphwy", "inykgfdntpyibjas", "qczdwx", "iccepwriuy", "sjkjeayuwcoy", "tkftx", "dksbfyoytd", "ubwxzay", "aelbatfbnmqcirxtuil", "zuknljwgta", "visdodissh", "pllcwnhks", "nuy", "uydaqccqsiefcz", "efswojalqqhoy", "nbeuy", "tdiccmjlrovbjwwuy", "qstkzfisxoz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jhnrheaqxfwajxes", "pses", "jbuhwvzpdxes", "kswbs", "mfcoxfbmfwuljhjfs", "lsches", "vezezxzlrobnrcfpytjs", "cnfbgjanywpofweys", "mnnvpncbs", "ipsjpeikxhupjays", "qkyoqvrkiwkdhxes", "iilfxnmdjhcvrenhdahs", "mohcwsvhyudabmgvzwshes", "bslhtdhxbaqoys", "ncrztershes", "kvwttmoednnexgbfkches", "mrmznays", "cies", "jnreggzwloggoys", "dxes", "lvoabyzrdwnafmrays", "wjerawmluys", "ofgilqvkudxes", "ymvfcoemis", "vybawueys", "zstcpjnltvidzamryvoys", "oxvuflwwqwexnxbses", "qxfuabdarcqoupzxiys", "ihclcoildwblxtfmzuys", "wevutslvakqxepsnoses", "pmdqzlkwyuvdhjjfleys", "bgsdxafuys", "egvxdzfxphwies", "inykgfdntpyibjases", "qczdwxes", "iccepwriuys", "sjkjeayuwcoys", "tkftxes", "dksbfyoytds", "ubwxzays", "aelbatfbnmqcirxtuils", "zuknljwgtas", "visdodisshes", "pllcwnhkses", "nuys", "uydaqccqsiefczes", "efswojalqqhoys", "nbeuys", "tdiccmjlrovbjwwuys", "qstkzfisxozes"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> nouns = {"xv", "fryu", "xfctupsonhtucsyjumcy", "yuzhqcsqckcjgvxvteq", "rkcjuy", "gnx", "hdtmltkzybghhztxxfpx", "leicsnrqunlasvefzoy", "o", "vntpydtqfvzpgqt", "kuzjncp", "bfjfuy", "tswtj", "aemouipzv", "whtmkwbtffdmjsh", "fieoilqtbwjjforevoy", "pjay", "izrrbontulxmozvbl", "wcanmwtictemnkz", "sjlizjkwundoay", "uhxfwaxcsmwveabwy", "aoztkszuameawplmy", "jkaws", "hhbymsh", "pplpuxmsyz", "epuhzxzqiyephkqhgms", "cntgacmpkay", "lqrxjwuwbycnoujlrluy", "ihsgcrpzqltxyrxssh", "usfhsrjunk", "oey", "qcvbqwhwjhwhpoy", "oixxxuuphpxoy", "xuatzkflzavb", "mirhlxbzdxajlr", "w", "oaeeztrofunscvyhay", "vgsh", "qfdvoz", "bdpriprhcvs", "ikaygzcoxlmdxwbah", "pvpykxropeuy", "hsh", "ft", "tqaffqtsxrkfx", "fhlfmxjdaktaay", "hsh", "lxqlaxodrxgicsh", "jprgjpiecjbuy", "gtlay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xvs", "fryus", "xfctupsonhtucsyjumcies", "yuzhqcsqckcjgvxvteqs", "rkcjuys", "gnxes", "hdtmltkzybghhztxxfpxes", "leicsnrqunlasvefzoys", "os", "vntpydtqfvzpgqts", "kuzjncps", "bfjfuys", "tswtjs", "aemouipzvs", "whtmkwbtffdmjshes", "fieoilqtbwjjforevoys", "pjays", "izrrbontulxmozvbls", "wcanmwtictemnkzes", "sjlizjkwundoays", "uhxfwaxcsmwveabwies", "aoztkszuameawplmies", "jkawses", "hhbymshes", "pplpuxmsyzes", "epuhzxzqiyephkqhgmses", "cntgacmpkays", "lqrxjwuwbycnoujlrluys", "ihsgcrpzqltxyrxsshes", "usfhsrjunks", "oeys", "qcvbqwhwjhwhpoys", "oixxxuuphpxoys", "xuatzkflzavbs", "mirhlxbzdxajlrs", "ws", "oaeeztrofunscvyhays", "vgshes", "qfdvozes", "bdpriprhcvses", "ikaygzcoxlmdxwbahs", "pvpykxropeuys", "hshes", "fts", "tqaffqtsxrkfxes", "fhlfmxjdaktaays", "hshes", "lxqlaxodrxgicshes", "jprgjpiecjbuys", "gtlays"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> nouns = {"deiwwvrjwqkyz", "nvfy", "dsfgtuvxtiyqwvjduy", "tdch", "utdzsnfwxvuy", "rmotesgfchtwqx", "slizmdmcjvjhzwepz", "yxvtgepzckznw", "xnay", "wvyhqz", "wuvswgnxtnjriyqlqmqy", "ckcgduhphfapiuy", "qdvrqpaovlxzuhsh", "qvrbrirgtoblkqbuy", "rcey", "irjmleinsgthzxyy", "ytbaxcdlszz", "fiy", "pbyurjsshbt", "wgurjh", "jez", "tus", "cwgcvudpzhedhhnuch", "tszdbhdoamay", "hqgelqswjpstrp", "nqttaimwfhdhww", "iwpylfuuyjzyrsh", "cecjmigjwvzyinh", "xkpqkumkysgaovry", "dtkackgrnovxsuy", "efwpqexlqcesh", "uy", "cbknrjneasm", "dnzjsoeliy", "immhtcypmarsbkluay", "bzgiqyugliy", "znhybvjlenmieay", "lujhhamhhttyzqypbch", "ebttsl", "zspwvvousgoy", "vdasl", "mdngtxdnamllrqhsh", "dsh", "atlmkoofnsm", "cnmrudckvdvlkatsqhch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"deiwwvrjwqkyzes", "nvfies", "dsfgtuvxtiyqwvjduys", "tdches", "utdzsnfwxvuys", "rmotesgfchtwqxes", "slizmdmcjvjhzwepzes", "yxvtgepzckznws", "xnays", "wvyhqzes", "wuvswgnxtnjriyqlqmqies", "ckcgduhphfapiuys", "qdvrqpaovlxzuhshes", "qvrbrirgtoblkqbuys", "rceys", "irjmleinsgthzxyies", "ytbaxcdlszzes", "fiys", "pbyurjsshbts", "wgurjhs", "jezes", "tuses", "cwgcvudpzhedhhnuches", "tszdbhdoamays", "hqgelqswjpstrps", "nqttaimwfhdhwws", "iwpylfuuyjzyrshes", "cecjmigjwvzyinhs", "xkpqkumkysgaovries", "dtkackgrnovxsuys", "efwpqexlqceshes", "uys", "cbknrjneasms", "dnzjsoeliys", "immhtcypmarsbkluays", "bzgiqyugliys", "znhybvjlenmieays", "lujhhamhhttyzqypbches", "ebttsls", "zspwvvousgoys", "vdasls", "mdngtxdnamllrqhshes", "dshes", "atlmkoofnsms", "cnmrudckvdvlkatsqhches"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> nouns = {"yifdhagay", "mpamnkmsjfmjhagkwey", "kgyfeuebgfvkuosh", "ray", "vmcbftgulyoxugfcmay", "rofmufln", "wdvmxqmrbsejf", "mmcwvtewqu", "zwdrrxsypmcz", "zzrnosofapegzodskiiy", "biintyzndhjfzpqfcrsh", "tprrbcqchrrwnnn", "zoy", "ybcibmtsieqs", "pxlffbwpukouy", "pfeawoqavulxxas", "lqurxbeeskmuvkvzce", "eaagnyoy", "fzd", "lbxtuvaiehcsbfps", "uxbdinsorks", "soiprbhtzk", "esh", "wuiy", "vyiushz", "dsh", "efey", "ihtyxn", "doy", "yvwknxtnbbuy", "c", "vvamviqvgouosh", "xcfehalvxkrvfwfoy", "aoqtyzcouaxgsh", "cgqeaidxhkuy", "lsdfpwqdgayasdx", "uzqwgjbhjvjiy", "fanwphpfkpsvtdhriy", "qrkdwkhcikhzsaday", "wuofcewqevbowmuzejey", "odulhjtvonrljwrhmkao", "pznkwrdfoiuualuy", "qbeoqecsh", "dxhihvcngmvmieikdaf", "zqzlykyjywiecfbgoch", "hsiv", "qhzebqch", "ps", "xonghbfmaovmmkoexxch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yifdhagays", "mpamnkmsjfmjhagkweys", "kgyfeuebgfvkuoshes", "rays", "vmcbftgulyoxugfcmays", "rofmuflns", "wdvmxqmrbsejfs", "mmcwvtewqus", "zwdrrxsypmczes", "zzrnosofapegzodskiiys", "biintyzndhjfzpqfcrshes", "tprrbcqchrrwnnns", "zoys", "ybcibmtsieqses", "pxlffbwpukouys", "pfeawoqavulxxases", "lqurxbeeskmuvkvzces", "eaagnyoys", "fzds", "lbxtuvaiehcsbfpses", "uxbdinsorkses", "soiprbhtzks", "eshes", "wuiys", "vyiushzes", "dshes", "efeys", "ihtyxns", "doys", "yvwknxtnbbuys", "cs", "vvamviqvgouoshes", "xcfehalvxkrvfwfoys", "aoqtyzcouaxgshes", "cgqeaidxhkuys", "lsdfpwqdgayasdxes", "uzqwgjbhjvjiys", "fanwphpfkpsvtdhriys", "qrkdwkhcikhzsadays", "wuofcewqevbowmuzejeys", "odulhjtvonrljwrhmkaos", "pznkwrdfoiuualuys", "qbeoqecshes", "dxhihvcngmvmieikdafs", "zqzlykyjywiecfbgoches", "hsivs", "qhzebqches", "pses", "xonghbfmaovmmkoexxches"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> nouns = {"aaeofvnluy", "ufeooqhjsuubahvyfroy", "tvuqlabcfniiaz", "lzey", "igfwqfigvqs", "bydgyrsrdwy", "qnjmhmfcivpblwx", "brgcasfcw", "vwbrlvowdmny", "pfccay", "roqzkazpfiy", "yblyzkeytaqlakjtqwoy", "idtiy", "yjiy", "mgpyfvrvittrxzatpvax", "zdch", "gvqvybmjuesgdwambey", "exnituycoeoya", "btbiuryiqwbtz", "ytsys", "ghjpqzjcvy", "gqeuyrqqrwyddbey", "qxdendxeaozjqedmz", "phiwcgkdnlosuivlqiqy", "rxiy", "siy", "pvtv", "fdtgcdausyi", "qdac", "lxuyrnfbhizzsaabwy", "iupgvysh", "khzeqjdguvzqdoloy", "yrbuy", "cnqbiypmdlvguuy", "elrgzjaey", "zsmvrvjsdfkyqljuodfh", "cztpofwqnwgozfsriy", "gelhcamefeaiy", "tzcgakqekts", "ajjxsesydtgbhkdey", "clwugqqsgeqcsjpx", "rejrsh", "vxdkvnwjooyombqujwv", "thdcjbhbtaay", "ress", "fgjiscpjhz", "fpmkrvnisjejqpgknay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaeofvnluys", "ufeooqhjsuubahvyfroys", "tvuqlabcfniiazes", "lzeys", "igfwqfigvqses", "bydgyrsrdwies", "qnjmhmfcivpblwxes", "brgcasfcws", "vwbrlvowdmnies", "pfccays", "roqzkazpfiys", "yblyzkeytaqlakjtqwoys", "idtiys", "yjiys", "mgpyfvrvittrxzatpvaxes", "zdches", "gvqvybmjuesgdwambeys", "exnituycoeoyas", "btbiuryiqwbtzes", "ytsyses", "ghjpqzjcvies", "gqeuyrqqrwyddbeys", "qxdendxeaozjqedmzes", "phiwcgkdnlosuivlqiqies", "rxiys", "siys", "pvtvs", "fdtgcdausyis", "qdacs", "lxuyrnfbhizzsaabwies", "iupgvyshes", "khzeqjdguvzqdoloys", "yrbuys", "cnqbiypmdlvguuys", "elrgzjaeys", "zsmvrvjsdfkyqljuodfhs", "cztpofwqnwgozfsriys", "gelhcamefeaiys", "tzcgakqektses", "ajjxsesydtgbhkdeys", "clwugqqsgeqcsjpxes", "rejrshes", "vxdkvnwjooyombqujwvs", "thdcjbhbtaays", "resses", "fgjiscpjhzes", "fpmkrvnisjejqpgknays"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> nouns = {"opdtlowqns", "nyizapjpfriy", "eas", "jlyztzsh", "zbkwpldesh", "qdbyefdeonxnzglwmah", "nezhiy", "b", "pjfsipai", "ouvsynnioukch", "caadhwnxovbonhgcbsh", "nlriy", "surtivuxtinkiy", "ccscfbedij", "mzlirernfgbfkafqgmx", "qqjwrlawiay", "whelxgxkdygacdx", "llyhvkkgwvippwsnhwti", "ctxombumlipt", "wqtrqhccccoug", "y", "xosehkwxfyevey", "shnwp", "fmqpwdkbiguujbuy", "fxtyidpjbjdrzjpvbey", "edamphhnvoqsz", "fyuaqoead", "nvcwyz", "thhhtzyxmqwwelvuulj", "rcgmschudkccgtgslhs", "tqtzlxagenkz", "osgrdcey", "tisnnuz", "yyoczdvaffkoy", "osnbqey", "zxypiy", "rrkdqbuy", "ldyzjgmygyz", "qbyywcavzikb", "sotgumeoy", "vpohpnhech", "nzphwjzalqbnevcavzay", "ekldehrysrgigsvejmoy", "xadbyxikopczch", "xxioxgkfnduaxotbkway", "cmixdczklhlvhtcrch", "frhdccnaoy", "lgtz", "ecnmucnckeippnqch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"opdtlowqnses", "nyizapjpfriys", "eases", "jlyztzshes", "zbkwpldeshes", "qdbyefdeonxnzglwmahs", "nezhiys", "bs", "pjfsipais", "ouvsynnioukches", "caadhwnxovbonhgcbshes", "nlriys", "surtivuxtinkiys", "ccscfbedijs", "mzlirernfgbfkafqgmxes", "qqjwrlawiays", "whelxgxkdygacdxes", "llyhvkkgwvippwsnhwtis", "ctxombumlipts", "wqtrqhccccougs", "ies", "xosehkwxfyeveys", "shnwps", "fmqpwdkbiguujbuys", "fxtyidpjbjdrzjpvbeys", "edamphhnvoqszes", "fyuaqoeads", "nvcwyzes", "thhhtzyxmqwwelvuuljs", "rcgmschudkccgtgslhses", "tqtzlxagenkzes", "osgrdceys", "tisnnuzes", "yyoczdvaffkoys", "osnbqeys", "zxypiys", "rrkdqbuys", "ldyzjgmygyzes", "qbyywcavzikbs", "sotgumeoys", "vpohpnheches", "nzphwjzalqbnevcavzays", "ekldehrysrgigsvejmoys", "xadbyxikopczches", "xxioxgkfnduaxotbkways", "cmixdczklhlvhtcrches", "frhdccnaoys", "lgtzes", "ecnmucnckeippnqches"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> nouns = {"ohacqoy", "wdnpeouwiy", "ovfdvtltwxgujfshvhh", "rbikhatyrtbx", "bkeraijviy", "mehaqqyokgkfwaslg", "uannxtlhmz", "foxwxtoqdkro", "hnjhouguy", "exqhmdblivzy", "ewpnbmpqwsgcgcposls", "xay", "caxlubijqwaxoy", "gggy", "ndoy", "kmlnjch", "rmy", "duexbpijhiy", "lprx", "uz", "fgvgulbzgiy", "vy", "drtioiwmnfkhckay", "xbnbcjgmmvvabch", "gpgerggzppay", "iomay", "wxqyfvlojlaxaiey", "zcbbtjokqmibmrx", "zgajxvkh", "soysy", "fjlqrxwlgcryhqey", "ybgcgutssfclrch", "qscbqjqimuadrgsidzpo", "exsfvziy", "czfemikach", "sipwjy", "bawnzdkzey", "nfgnkplcvovwtezrviy", "efyhejddlexs", "uoy", "zqlllvliwilizlvoziy", "gey", "lriakuxzgyjlpvax", "xfvhzvay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ohacqoys", "wdnpeouwiys", "ovfdvtltwxgujfshvhhs", "rbikhatyrtbxes", "bkeraijviys", "mehaqqyokgkfwaslgs", "uannxtlhmzes", "foxwxtoqdkros", "hnjhouguys", "exqhmdblivzies", "ewpnbmpqwsgcgcposlses", "xays", "caxlubijqwaxoys", "gggies", "ndoys", "kmlnjches", "rmies", "duexbpijhiys", "lprxes", "uzes", "fgvgulbzgiys", "vies", "drtioiwmnfkhckays", "xbnbcjgmmvvabches", "gpgerggzppays", "iomays", "wxqyfvlojlaxaieys", "zcbbtjokqmibmrxes", "zgajxvkhs", "soysies", "fjlqrxwlgcryhqeys", "ybgcgutssfclrches", "qscbqjqimuadrgsidzpos", "exsfvziys", "czfemikaches", "sipwjies", "bawnzdkzeys", "nfgnkplcvovwtezrviys", "efyhejddlexses", "uoys", "zqlllvliwilizlvoziys", "geys", "lriakuxzgyjlpvaxes", "xfvhzvays"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> nouns = {"nbclrmwebhwus", "jwrslrcsqz", "qkia", "pwxhyxedqnwex", "xazsh", "buxxiy", "euxoeiooy", "tlvmri", "pnxoqmjcmday", "msdgfxbhrayssgyeblct", "sjjgmmgheamqkach", "tgqqbdtdozpsh", "txuyk", "bjgolwxvxz", "rsfvrdgxqj", "oukihsr", "xlhtmmrivifkguunkz", "tplosdpjjavch", "vh", "wvverjlorutmeudgz", "uhmfrecrkaxwbcsrich", "uzch", "l", "tgyrzrsyuagiuy", "tzs", "ylvgzgw", "rgiuyuodstttthkvy", "xutmxbnostarim", "wazhvxcjireyuy", "swifc", "yhaccixaymqnzbviy", "lafqkbdvvnvmecmjrz", "xzdfyubyl", "pplx", "ehcethjhiucukezmy", "uljmltey", "qieudmnufakz", "bqghdqtoqfsey", "lls", "oexivx", "nunnsh", "gq", "uvrainfuzisx", "bdqgtwikemdysiy", "jhrbsidknytlq", "lohrzkhiaufwrpletuy", "xmyspkmy", "ybvzsvdceqosh", "jieezaeehxvvsphz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nbclrmwebhwuses", "jwrslrcsqzes", "qkias", "pwxhyxedqnwexes", "xazshes", "buxxiys", "euxoeiooys", "tlvmris", "pnxoqmjcmdays", "msdgfxbhrayssgyeblcts", "sjjgmmgheamqkaches", "tgqqbdtdozpshes", "txuyks", "bjgolwxvxzes", "rsfvrdgxqjs", "oukihsrs", "xlhtmmrivifkguunkzes", "tplosdpjjavches", "vhs", "wvverjlorutmeudgzes", "uhmfrecrkaxwbcsriches", "uzches", "ls", "tgyrzrsyuagiuys", "tzses", "ylvgzgws", "rgiuyuodstttthkvies", "xutmxbnostarims", "wazhvxcjireyuys", "swifcs", "yhaccixaymqnzbviys", "lafqkbdvvnvmecmjrzes", "xzdfyubyls", "pplxes", "ehcethjhiucukezmies", "uljmlteys", "qieudmnufakzes", "bqghdqtoqfseys", "llses", "oexivxes", "nunnshes", "gqs", "uvrainfuzisxes", "bdqgtwikemdysiys", "jhrbsidknytlqs", "lohrzkhiaufwrpletuys", "xmyspkmies", "ybvzsvdceqoshes", "jieezaeehxvvsphzes"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> nouns = {"bsjon", "yurbiy", "nfcfufkbqyviy", "mpey", "homrhapbygtfnzklz", "k", "cbtytxeysh", "ylxbqasywiy", "swdbvjkbeknzqbzy", "uglgdkzrroinjkwuy", "ngeyckpmt", "djnhjrwarzyf", "huolqlphzaiy", "iriplhpoy", "bmhvebjrnircmfnay", "ojtyzay", "xybppoy", "tzqagowctb", "hqannuit", "buggwlfes", "rfivrsmodsaapskayziy", "zfgqlpch", "psninlfmwke", "ritwkluapfbpoy", "yedxmsmkwx", "mviqsh", "wxxobjodzzflzhey", "zgnimfttrvtatqey", "qrirjiy", "gdvdzczocxjd", "nfultlz", "urjsmfbtuupge", "uyjceebpudxltgzrfz", "nay", "leldm", "obyhktmjoqz", "osloy", "sawvkbghqc", "gznipfuddebidkwpcfyz", "pebch", "uvmxnmjbxekz", "pwmxhgpzwjvhpbagl", "rpyqskxecjplmaiy", "acrsh", "zdpktiz", "gpslrkycvkwguw", "ntbjxlyey", "kmthcoxy", "hatns", "izigwuhunqbyavclvksh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bsjons", "yurbiys", "nfcfufkbqyviys", "mpeys", "homrhapbygtfnzklzes", "ks", "cbtytxeyshes", "ylxbqasywiys", "swdbvjkbeknzqbzies", "uglgdkzrroinjkwuys", "ngeyckpmts", "djnhjrwarzyfs", "huolqlphzaiys", "iriplhpoys", "bmhvebjrnircmfnays", "ojtyzays", "xybppoys", "tzqagowctbs", "hqannuits", "buggwlfeses", "rfivrsmodsaapskayziys", "zfgqlpches", "psninlfmwkes", "ritwkluapfbpoys", "yedxmsmkwxes", "mviqshes", "wxxobjodzzflzheys", "zgnimfttrvtatqeys", "qrirjiys", "gdvdzczocxjds", "nfultlzes", "urjsmfbtuupges", "uyjceebpudxltgzrfzes", "nays", "leldms", "obyhktmjoqzes", "osloys", "sawvkbghqcs", "gznipfuddebidkwpcfyzes", "pebches", "uvmxnmjbxekzes", "pwmxhgpzwjvhpbagls", "rpyqskxecjplmaiys", "acrshes", "zdpktizes", "gpslrkycvkwguws", "ntbjxlyeys", "kmthcoxies", "hatnses", "izigwuhunqbyavclvkshes"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> nouns = {"wo", "dwwlsotxuy", "jwzndvbkhqragpvx", "cmejoy", "gmcbzxrpjvfgmqmlzkuy", "pkqox", "bwlue", "ziy", "xpqvqmsqdx", "lbiklgeowtgsa", "iucajmatllaumioiy", "apvjnlfkrd", "amhthdrkcogay", "raxhkztbutu", "ctlxxctmzjifgxxoy", "srflyktss", "wrcrrliwoqlucoy", "bizkfrqmvwurdllfuey", "tfroftcoihruwhz", "tawzggkndnuvdijz", "zusovroch", "uydkgnfay", "kktoqxbey", "yqzkgarfxjbghlcicf", "qlylrmdwy", "easz", "whbfoqqy", "kdbmahqaoy", "bech", "wriubdyvggsz", "ehjmksivbnpsh", "egdznymuhacubfwyuy", "fgahyziosaz", "zgquqx", "dwkpsh", "wtxksh", "lkredpwheavngsjrsh", "ikjybcgdftthtkwumuss", "oqzhxgllmyqwgeiy", "nfwnuokfgfgtxzlhoey", "sbqdvvtzpvmooy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wos", "dwwlsotxuys", "jwzndvbkhqragpvxes", "cmejoys", "gmcbzxrpjvfgmqmlzkuys", "pkqoxes", "bwlues", "ziys", "xpqvqmsqdxes", "lbiklgeowtgsas", "iucajmatllaumioiys", "apvjnlfkrds", "amhthdrkcogays", "raxhkztbutus", "ctlxxctmzjifgxxoys", "srflyktsses", "wrcrrliwoqlucoys", "bizkfrqmvwurdllfueys", "tfroftcoihruwhzes", "tawzggkndnuvdijzes", "zusovroches", "uydkgnfays", "kktoqxbeys", "yqzkgarfxjbghlcicfs", "qlylrmdwies", "easzes", "whbfoqqies", "kdbmahqaoys", "beches", "wriubdyvggszes", "ehjmksivbnpshes", "egdznymuhacubfwyuys", "fgahyziosazes", "zgquqxes", "dwkpshes", "wtxkshes", "lkredpwheavngsjrshes", "ikjybcgdftthtkwumusses", "oqzhxgllmyqwgeiys", "nfwnuokfgfgtxzlhoeys", "sbqdvvtzpvmooys"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> nouns = {"woocohmkfkuqddese", "dhudiy", "gdwmpfwy", "grdzmukhifztzlqi", "usnohnegcnsjlknwoy", "kqngzcuqcgux", "nuiry", "ilgcmhzcbpvzgzlx", "wozwfbqwxqiybev", "uyorwvxa", "tgmcrqormey", "goshfolhjiu", "lzhdalckwopfeiibnd", "umxlnu", "xkdhscdxdtopxwvgtiy", "iernhwuy", "itipyvtwkey", "vbcbloy", "sczz", "trgucggsh", "knluttravjagedttq", "nctfqtwfrswckuy", "cxcaay", "cfxluj", "xsuaty", "wux", "fulpcjkinzryroy", "ylkksch", "dykoxwhcqay", "ggidhecrkhjvlwj", "qyv", "gsxlipsmbvfnkxxay", "dekrqdqmy", "gcxtxunkxncx", "ioy", "intgavciy", "lpplojawcnxlgqvfk", "hch", "htgyyhbgizcrs", "xeqlyyauy", "burffxoqibxchjibilkx", "xjkjlvefdsvvsh", "vmezuhqrwaekgddct", "buqgbdxupkgspojulpiy", "opxowouy", "qaiy", "dmjmdwifpnpjupafnnex", "tfqpknehltch", "u", "zvsmnbymvo"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"woocohmkfkuqddeses", "dhudiys", "gdwmpfwies", "grdzmukhifztzlqis", "usnohnegcnsjlknwoys", "kqngzcuqcguxes", "nuiries", "ilgcmhzcbpvzgzlxes", "wozwfbqwxqiybevs", "uyorwvxas", "tgmcrqormeys", "goshfolhjius", "lzhdalckwopfeiibnds", "umxlnus", "xkdhscdxdtopxwvgtiys", "iernhwuys", "itipyvtwkeys", "vbcbloys", "sczzes", "trgucggshes", "knluttravjagedttqs", "nctfqtwfrswckuys", "cxcaays", "cfxlujs", "xsuaties", "wuxes", "fulpcjkinzryroys", "ylkksches", "dykoxwhcqays", "ggidhecrkhjvlwjs", "qyvs", "gsxlipsmbvfnkxxays", "dekrqdqmies", "gcxtxunkxncxes", "ioys", "intgavciys", "lpplojawcnxlgqvfks", "hches", "htgyyhbgizcrses", "xeqlyyauys", "burffxoqibxchjibilkxes", "xjkjlvefdsvvshes", "vmezuhqrwaekgddcts", "buqgbdxupkgspojulpiys", "opxowouys", "qaiys", "dmjmdwifpnpjupafnnexes", "tfqpknehltches", "us", "zvsmnbymvos"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> nouns = {"pay", "ntyylbsameskakch", "yooagurmsniqcfoulsh", "myay", "zpdgwympviwffiy", "awfmkyseuts", "ppcunftitnvuy", "bhvwudefveiupp", "cfey", "vz", "kcvyyjijw", "udfqqinflmmfxmx", "dnzgrqbabhlijcbuy", "lsqlmqoufqnzvgysh", "afhsopkday", "gqwwylrjayfogewgjnsh", "lbmugoxsyuqyckjkmaxe", "ofqbndaxao", "hhlxnbffuimdzbgcl", "xvifkvxwlwfemey", "cpgyocxudndfpey", "vdumhshpqvnghrlry", "gqftyhnyeznmdzwsh", "gpswbvujprwuxrhaty", "ndibigrhqljprx", "ijwqyehqgsh", "fcpeaoaxlwfgz", "ffpwsdnhfxeubgzplcvv", "wrhmrtykfhassday", "msbgezaxexofinac", "vstmmumaubfx", "u", "rvnjcoywunfgqdiy", "krvrfcgunqijfnbriy", "zwijttpuy", "tzlyrdridyoipgrmsw", "jtmqvgzksqcvuwsykx", "lskjuzeeypdvgt", "eiwhyozfzmy", "bqws", "vjrxoash", "iecfnhwhoaqkxzcsldwo", "kdvxtulyygrksllrrdtj", "okauzsz", "pwiyhlhbobnbwqbaktx", "hsazqroulybiubzvtoy", "a", "atjvckvvnblliy", "ledqjptvkgbeey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pays", "ntyylbsameskakches", "yooagurmsniqcfoulshes", "myays", "zpdgwympviwffiys", "awfmkyseutses", "ppcunftitnvuys", "bhvwudefveiupps", "cfeys", "vzes", "kcvyyjijws", "udfqqinflmmfxmxes", "dnzgrqbabhlijcbuys", "lsqlmqoufqnzvgyshes", "afhsopkdays", "gqwwylrjayfogewgjnshes", "lbmugoxsyuqyckjkmaxes", "ofqbndaxaos", "hhlxnbffuimdzbgcls", "xvifkvxwlwfemeys", "cpgyocxudndfpeys", "vdumhshpqvnghrlries", "gqftyhnyeznmdzwshes", "gpswbvujprwuxrhaties", "ndibigrhqljprxes", "ijwqyehqgshes", "fcpeaoaxlwfgzes", "ffpwsdnhfxeubgzplcvvs", "wrhmrtykfhassdays", "msbgezaxexofinacs", "vstmmumaubfxes", "us", "rvnjcoywunfgqdiys", "krvrfcgunqijfnbriys", "zwijttpuys", "tzlyrdridyoipgrmsws", "jtmqvgzksqcvuwsykxes", "lskjuzeeypdvgts", "eiwhyozfzmies", "bqwses", "vjrxoashes", "iecfnhwhoaqkxzcsldwos", "kdvxtulyygrksllrrdtjs", "okauzszes", "pwiyhlhbobnbwqbaktxes", "hsazqroulybiubzvtoys", "as", "atjvckvvnblliys", "ledqjptvkgbeeys"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> nouns = {"ouvzsurkodjzqliy", "aotc", "jvjsqls", "jrrfmjfga", "pogudn", "ipqbnzcepfawvssh", "bnjwlgiih", "ijslzktrsh", "jfpnjzffhkjbvgq", "xzbqcak", "hpodeesijwqkroy", "cpulzcdijbxuy", "otszwwqgsouey", "piffldksgsh", "bsaribr", "awbev", "ldygmwxxowzb", "beexy", "mdadorfsishotfjbx", "uzyabxy", "vuorucejvzx", "tiuoqnxwrwuyykufhbny", "xixgevflwnxu", "qkoawczoyvcfbanoxy", "phiuw", "wioxknjztbgkz", "nitvkgmoy", "cbrfdxbyrkoy", "exbqchjs", "rqjixidiqey", "mzwlandturwpuvqgakay", "zcbafhuwwush", "ojllhbjkdey", "bmrjlw", "bxfidtjoskwqbhtgtsh", "ujhvaabz", "hzdaufwltsxqwigcjooy", "xljfnydsdtdirbujru", "brkhgfgjcaah", "ybkrlhhpjly", "vrpuskeistfktspym", "cpkdzzkrych", "pipdzpqwdushmpoiey", "pncicyptmjgqzun", "ocfhsvz", "rlplguyydiy", "bkopnx", "aoplbhjqtkrfdurday"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ouvzsurkodjzqliys", "aotcs", "jvjsqlses", "jrrfmjfgas", "pogudns", "ipqbnzcepfawvsshes", "bnjwlgiihs", "ijslzktrshes", "jfpnjzffhkjbvgqs", "xzbqcaks", "hpodeesijwqkroys", "cpulzcdijbxuys", "otszwwqgsoueys", "piffldksgshes", "bsaribrs", "awbevs", "ldygmwxxowzbs", "beexies", "mdadorfsishotfjbxes", "uzyabxies", "vuorucejvzxes", "tiuoqnxwrwuyykufhbnies", "xixgevflwnxus", "qkoawczoyvcfbanoxies", "phiuws", "wioxknjztbgkzes", "nitvkgmoys", "cbrfdxbyrkoys", "exbqchjses", "rqjixidiqeys", "mzwlandturwpuvqgakays", "zcbafhuwwushes", "ojllhbjkdeys", "bmrjlws", "bxfidtjoskwqbhtgtshes", "ujhvaabzes", "hzdaufwltsxqwigcjooys", "xljfnydsdtdirbujrus", "brkhgfgjcaahs", "ybkrlhhpjlies", "vrpuskeistfktspyms", "cpkdzzkryches", "pipdzpqwdushmpoieys", "pncicyptmjgqzuns", "ocfhsvzes", "rlplguyydiys", "bkopnxes", "aoplbhjqtkrfdurdays"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> nouns = {"kyjpgijsocbuskfdmay", "xhuweglssx", "oniqpuizwgmamsdllsay", "avkfxhpquxtskwcy", "qsindiktjftz", "voy", "veewsh", "zec", "odgcreldjwokyqkwmmuy", "gndfkvyqxqsochkiloy", "mqejqqyzmlsacgziy", "dwzdkgijsiy", "oqdgnnmknxy", "amknvcw", "qlrch", "hwpqjjgmcelioy", "gzjemsh", "vrgntazivpeycroauz", "zuzr", "fxday", "afajbfvsjgbzjnsesrxy", "may", "upzb", "qfqoqvgjkebcey", "wgbx", "zkpliuy", "udvhch", "mufzpupdensw", "pbmaxx", "ypyhzpmmoh", "cdvlsikgnuemus", "cciqlbaiy", "lkbmedyy", "cakggotpibrueyqrzsh", "gbjsyrsy", "wnbzsjiy", "shggqaxbnlaevch", "vtibjy", "cyeiakxafwtqwomyzw", "astilyzttqbrz", "hhztmlfzyaffcbrdiy", "egoravllplvirqzw", "nifffwzgtkgfwrx", "rqdkqbyytadgvowplkoy", "dpojpztrxwkorgdzrlwv", "sscveuy", "ohxyejhnqmjllx", "zltsach", "oyihdtzlcllxktjqoey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kyjpgijsocbuskfdmays", "xhuweglssxes", "oniqpuizwgmamsdllsays", "avkfxhpquxtskwcies", "qsindiktjftzes", "voys", "veewshes", "zecs", "odgcreldjwokyqkwmmuys", "gndfkvyqxqsochkiloys", "mqejqqyzmlsacgziys", "dwzdkgijsiys", "oqdgnnmknxies", "amknvcws", "qlrches", "hwpqjjgmcelioys", "gzjemshes", "vrgntazivpeycroauzes", "zuzrs", "fxdays", "afajbfvsjgbzjnsesrxies", "mays", "upzbs", "qfqoqvgjkebceys", "wgbxes", "zkpliuys", "udvhches", "mufzpupdensws", "pbmaxxes", "ypyhzpmmohs", "cdvlsikgnuemuses", "cciqlbaiys", "lkbmedyies", "cakggotpibrueyqrzshes", "gbjsyrsies", "wnbzsjiys", "shggqaxbnlaevches", "vtibjies", "cyeiakxafwtqwomyzws", "astilyzttqbrzes", "hhztmlfzyaffcbrdiys", "egoravllplvirqzws", "nifffwzgtkgfwrxes", "rqdkqbyytadgvowplkoys", "dpojpztrxwkorgdzrlwvs", "sscveuys", "ohxyejhnqmjllxes", "zltsaches", "oyihdtzlcllxktjqoeys"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> nouns = {"ufl", "kaylxiqd", "syfxphgaeejssegs", "mgmukbotkbufd", "udakvvay", "juonjoiisrblkiy", "flzsbqjddlzjzegch", "ekbfxuszis", "qusupaqfbxxjuy", "cqplh", "ipcwz", "ckqhpyudeeal", "dbqxybsdoazx", "zobvtjyqyqgclawx", "hsgay", "yzdtpksheppkoy", "qihesvhivgdjch", "bfbey", "ilaeimkhzxfsmhdrtch", "gesxkgdduanzpkaad", "xsh", "waqnlndqxdafs", "jpsqvlfvhquoy", "vzyaojxz", "xch", "coxitifcx", "vwgtabpbofsds", "wrayhtrvqhsehhtay", "ayagqgqsvdspkckrebch", "wbnwwniy", "oncstkrqbralay", "pkkztwdaumuslfhzmju", "xeifmqey", "k", "ektugphhxggccpakwl", "wlucueqiwalxarjcw", "eydhyytlfycjughkauz", "jzackyiy", "ez", "lbptmyovgkgvoy", "aqziy", "nwqzh", "dygiwoinklulxfxsch", "fxzrtxeucxauy", "yfitufmsch", "rhkjjaugksloftfthch", "qjwftjmss", "nsllzdmutjqeviy", "vnaiy", "yvenngbryii"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ufls", "kaylxiqds", "syfxphgaeejssegses", "mgmukbotkbufds", "udakvvays", "juonjoiisrblkiys", "flzsbqjddlzjzegches", "ekbfxuszises", "qusupaqfbxxjuys", "cqplhs", "ipcwzes", "ckqhpyudeeals", "dbqxybsdoazxes", "zobvtjyqyqgclawxes", "hsgays", "yzdtpksheppkoys", "qihesvhivgdjches", "bfbeys", "ilaeimkhzxfsmhdrtches", "gesxkgdduanzpkaads", "xshes", "waqnlndqxdafses", "jpsqvlfvhquoys", "vzyaojxzes", "xches", "coxitifcxes", "vwgtabpbofsdses", "wrayhtrvqhsehhtays", "ayagqgqsvdspkckrebches", "wbnwwniys", "oncstkrqbralays", "pkkztwdaumuslfhzmjus", "xeifmqeys", "ks", "ektugphhxggccpakwls", "wlucueqiwalxarjcws", "eydhyytlfycjughkauzes", "jzackyiys", "ezes", "lbptmyovgkgvoys", "aqziys", "nwqzhs", "dygiwoinklulxfxsches", "fxzrtxeucxauys", "yfitufmsches", "rhkjjaugksloftfthches", "qjwftjmsses", "nsllzdmutjqeviys", "vnaiys", "yvenngbryiis"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> nouns = {"fyfobmwex", "wjwaoonrpwvay", "oyaxjieydljx", "zjfzorgtxs", "thztzzbgwhsunytnnru", "izlgsqasnixxafmb", "eivjixvqoycaalt", "jqhkasvcftmqaiw", "enourilafegpfgfiy", "yeegixmcltanpthby", "gsttecbx", "mrbnfbjzeahlrkajis", "nbfheddaizstvrogqz", "hz", "uesh", "kkfdipgx", "vmtvcbapnekhfoqqlsh", "dqmugvnstrsoy", "zftrmxblieraavuwje", "zkycplhzmbtlromtymdw", "ekx", "fhr", "idneh", "hbo", "jgnuzpjffsyzy", "jgrxlbiebxrrcef", "i", "vfeernflnsjzs", "mhgxvvx", "zfey", "kyxbylfpbrkquy", "gymspnszosfsh", "ruzvckrcu", "qytblwyermffcxjk", "uglazrjqejeviiy", "rrurwasdjfozdjxch", "ax", "juapdildohz", "emlutqehmcbsmefsh", "h", "itqhlbzbxisrqiz", "ysh", "sanqcznjex", "aavtwcakmcddiupy", "eyhzzsjfehmcay", "vuhdyqmwziy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fyfobmwexes", "wjwaoonrpwvays", "oyaxjieydljxes", "zjfzorgtxses", "thztzzbgwhsunytnnrus", "izlgsqasnixxafmbs", "eivjixvqoycaalts", "jqhkasvcftmqaiws", "enourilafegpfgfiys", "yeegixmcltanpthbies", "gsttecbxes", "mrbnfbjzeahlrkajises", "nbfheddaizstvrogqzes", "hzes", "ueshes", "kkfdipgxes", "vmtvcbapnekhfoqqlshes", "dqmugvnstrsoys", "zftrmxblieraavuwjes", "zkycplhzmbtlromtymdws", "ekxes", "fhrs", "idnehs", "hbos", "jgnuzpjffsyzies", "jgrxlbiebxrrcefs", "is", "vfeernflnsjzses", "mhgxvvxes", "zfeys", "kyxbylfpbrkquys", "gymspnszosfshes", "ruzvckrcus", "qytblwyermffcxjks", "uglazrjqejeviiys", "rrurwasdjfozdjxches", "axes", "juapdildohzes", "emlutqehmcbsmefshes", "hs", "itqhlbzbxisrqizes", "yshes", "sanqcznjexes", "aavtwcakmcddiupies", "eyhzzsjfehmcays", "vuhdyqmwziys"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> nouns = {"gzzpmjxay", "hqcazhlnyxopridchy", "bkky", "rlagtl", "dentvexrigi", "ukayrqcncugbxkg", "pd", "quowucmrcgcmwhrdtnx", "jglmiucjhfysh", "vrajgchzpswkliyks", "lwzs", "ohmexxjx", "hlgaubtjyiavncppray", "ncmvrnxe", "kajpzyargjesh", "hzqemcrwhyubpatiy", "owbkkosibgyx", "djxhey", "eumpeafmkey", "sfyhcnvrjqovsrliy", "mrcmdqmnvyuzbuwqy", "fqihfduholrroy", "tzsdymfoznfjyzwaozy", "svey", "ntoqyjz", "tzxonayeyjwkexish", "pabbinadmfmws", "laazbrjdquiy", "fwljramnsh", "ntfgbcuouruy", "irtfx", "zioyvx", "dprlb", "jbkwqpdgkihz", "xuqzzxxsajrvnblevz", "vyoy", "sidoruy", "qjivvxnejffvhqosh", "nxuyzmnonhsh", "k"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gzzpmjxays", "hqcazhlnyxopridchies", "bkkies", "rlagtls", "dentvexrigis", "ukayrqcncugbxkgs", "pds", "quowucmrcgcmwhrdtnxes", "jglmiucjhfyshes", "vrajgchzpswkliykses", "lwzses", "ohmexxjxes", "hlgaubtjyiavncpprays", "ncmvrnxes", "kajpzyargjeshes", "hzqemcrwhyubpatiys", "owbkkosibgyxes", "djxheys", "eumpeafmkeys", "sfyhcnvrjqovsrliys", "mrcmdqmnvyuzbuwqies", "fqihfduholrroys", "tzsdymfoznfjyzwaozies", "sveys", "ntoqyjzes", "tzxonayeyjwkexishes", "pabbinadmfmwses", "laazbrjdquiys", "fwljramnshes", "ntfgbcuouruys", "irtfxes", "zioyvxes", "dprlbs", "jbkwqpdgkihzes", "xuqzzxxsajrvnblevzes", "vyoys", "sidoruys", "qjivvxnejffvhqoshes", "nxuyzmnonhshes", "ks"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> nouns = {"svly", "oezsgeoxksckzghyp", "vrz", "vmshqihawuy", "i", "tpaz", "vqqidsgsyfu", "uewpvhbjdmbzxarspprp", "xpyzbs", "hxefxwwky", "pexqydbefokkach", "uz", "jmrerwmqgmfkuz", "gaynsgysufkjfbpipqv", "qay", "adorjs", "ktjzhch", "srksmupvstey", "pmlgdhvmywozetpch", "eumqjcdsh", "wpey", "ywnquljczloriy", "ptjhfcbjejey", "zvdqx", "xerzetgbgdxymqjeay", "mbz", "xhvgapbay", "puxxooutp", "iqxwjnbprxnx", "obkqgyiy", "hbnthglbnoffhfnpis", "mvcsuuuumdhdpoy", "lbtlzvitey", "nqrccdgwbzqssqimqgan", "flnkxephrceripdws", "ywrzdnsptkrsxajnch", "mzuspruuz", "wdct", "uwvxpdiyxjtsrthzawma", "jbpquuy", "cigjrex", "bdrhanwbzhgwepmkurs", "jrhztz", "nxnbloqsrveruy", "cgsmkoavasrs", "oiych", "ahixbnvtu", "wnxgcuoxzwks", "cdhltiredxz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"svlies", "oezsgeoxksckzghyps", "vrzes", "vmshqihawuys", "is", "tpazes", "vqqidsgsyfus", "uewpvhbjdmbzxarspprps", "xpyzbses", "hxefxwwkies", "pexqydbefokkaches", "uzes", "jmrerwmqgmfkuzes", "gaynsgysufkjfbpipqvs", "qays", "adorjses", "ktjzhches", "srksmupvsteys", "pmlgdhvmywozetpches", "eumqjcdshes", "wpeys", "ywnquljczloriys", "ptjhfcbjejeys", "zvdqxes", "xerzetgbgdxymqjeays", "mbzes", "xhvgapbays", "puxxooutps", "iqxwjnbprxnxes", "obkqgyiys", "hbnthglbnoffhfnpises", "mvcsuuuumdhdpoys", "lbtlzviteys", "nqrccdgwbzqssqimqgans", "flnkxephrceripdwses", "ywrzdnsptkrsxajnches", "mzuspruuzes", "wdcts", "uwvxpdiyxjtsrthzawmas", "jbpquuys", "cigjrexes", "bdrhanwbzhgwepmkurses", "jrhztzes", "nxnbloqsrveruys", "cgsmkoavasrses", "oiyches", "ahixbnvtus", "wnxgcuoxzwkses", "cdhltiredxzes"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> nouns = {"nthiy", "lfvfparjgnoqtxch", "yiyyagjurujqjmch", "ddeqxufrpcijzlhheyi", "cgmfksnqwnanhuy", "gjpebzkdyqlsxx", "nods", "dvvlwklsrkzxguyy", "lxwoyztdfbtvmuyoy", "dxdbytjysay", "wmwkajvwvzmjlmiy", "zsltjredizhnfvzadxsy", "hzzklbsh", "gqmzxkycqnasch", "lnbvpddlfwqevywcsh", "nupaibuthsrixsh", "ych", "txjzpsadvzzclkhxkvlx", "zhpetiuympmcnobhsh", "rdymaleb", "wblxrbodrilvteqstx", "ucnzjczzzrdjly", "qosvbgcch", "jyulgelqzzpbuy", "yzrutkgimd", "qgzryypduyurciqlay", "cjrjrsomvq", "zhtheekaoyoujbdech", "epqkyotjuz", "fgydlq", "bqfiqtpcmyndssdjy", "knfcejqwfygoy", "gmvlcahozxgch", "lyjfazqmahjlpads", "gzzf", "ydszxahtkdlbos", "kpxdjantqnhmiacfflch", "ddeqbxojfwunis", "qtbbgbfdwswzruepynuy", "jaecmipurcs"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nthiys", "lfvfparjgnoqtxches", "yiyyagjurujqjmches", "ddeqxufrpcijzlhheyis", "cgmfksnqwnanhuys", "gjpebzkdyqlsxxes", "nodses", "dvvlwklsrkzxguyies", "lxwoyztdfbtvmuyoys", "dxdbytjysays", "wmwkajvwvzmjlmiys", "zsltjredizhnfvzadxsies", "hzzklbshes", "gqmzxkycqnasches", "lnbvpddlfwqevywcshes", "nupaibuthsrixshes", "yches", "txjzpsadvzzclkhxkvlxes", "zhpetiuympmcnobhshes", "rdymalebs", "wblxrbodrilvteqstxes", "ucnzjczzzrdjlies", "qosvbgcches", "jyulgelqzzpbuys", "yzrutkgimds", "qgzryypduyurciqlays", "cjrjrsomvqs", "zhtheekaoyoujbdeches", "epqkyotjuzes", "fgydlqs", "bqfiqtpcmyndssdjies", "knfcejqwfygoys", "gmvlcahozxgches", "lyjfazqmahjlpadses", "gzzfs", "ydszxahtkdlboses", "kpxdjantqnhmiacfflches", "ddeqbxojfwunises", "qtbbgbfdwswzruepynuys", "jaecmipurcses"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> nouns = {"hsceeobspcsamfip", "sibjrazx", "oczllkinecnous", "vvdxzjwmcimgxedzoy", "jpdfysh", "yzfqlauclgtfwsirz", "zaqvy", "pwsdqqfejnyztuahgtv", "zkdatboqovranx", "mgbyondacgqsw", "odqlkayuurgknoaqeuis", "lfaznbeezexuiey", "mukcbgsh", "vwakmiibkoy", "gcgeibjeqwyn", "ihbhaiuctxdjtswgyfaf", "ueoewluih", "ydxowiyciy", "ugntglrug", "ifizy", "swqey", "dymdcpyx", "sqy", "kidbufahcsixukch", "yjxaivcqdrujeriy", "kiipecghgx", "wjhpzyatugmphdtay", "fgzbxrtuthnelhkyajsx", "fjuqghray", "qvh", "cnmbfebxmdjspruudkdw", "plotastfmjvbapzlax", "ocqytpajnpcroiokgpix", "miy", "kijcokfsgovus", "awabfexagqgey", "iicsjzhvsps", "atwvixrimccwzstuy", "rosabshhkjjuttuzsh", "rxflhray", "ctfvthyc", "rtchjtspycoievriscs", "gypwgmldrdjnvfsh", "boy", "yfdyqdhuiq"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hsceeobspcsamfips", "sibjrazxes", "oczllkinecnouses", "vvdxzjwmcimgxedzoys", "jpdfyshes", "yzfqlauclgtfwsirzes", "zaqvies", "pwsdqqfejnyztuahgtvs", "zkdatboqovranxes", "mgbyondacgqsws", "odqlkayuurgknoaqeuises", "lfaznbeezexuieys", "mukcbgshes", "vwakmiibkoys", "gcgeibjeqwyns", "ihbhaiuctxdjtswgyfafs", "ueoewluihs", "ydxowiyciys", "ugntglrugs", "ifizies", "swqeys", "dymdcpyxes", "sqies", "kidbufahcsixukches", "yjxaivcqdrujeriys", "kiipecghgxes", "wjhpzyatugmphdtays", "fgzbxrtuthnelhkyajsxes", "fjuqghrays", "qvhs", "cnmbfebxmdjspruudkdws", "plotastfmjvbapzlaxes", "ocqytpajnpcroiokgpixes", "miys", "kijcokfsgovuses", "awabfexagqgeys", "iicsjzhvspses", "atwvixrimccwzstuys", "rosabshhkjjuttuzshes", "rxflhrays", "ctfvthycs", "rtchjtspycoievriscses", "gypwgmldrdjnvfshes", "boys", "yfdyqdhuiqs"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> nouns = {"siqmy", "jagujcvwtheh", "lxkamvj", "obk", "izogzshx", "hljmdpzlixtqtbooy", "eoy", "xgojnoyygch", "xhgijjzbudacsh", "ipzcwhzgph", "glguvmsx", "vycixjzcay", "vogcfutnn", "daizqruf", "ylwnnfeyobaley", "szjgkzqynhsahgltnswx", "zy", "vkawiwtejwsawlbaiay", "gdalgkdbcjwrehltofty", "azpgrwemjz", "xpxvyyaomuwzrzjcszs", "fbtch", "flyjasoxowyirfnupx", "fcljeocxburbony", "rpaulsbeqegeqhay", "ajmclsuwmrextwyuxndx", "fnu", "jqjrnxhnbs", "ywcxrzkksgjwqxmax", "rndzkburdlyloyby", "phwx", "tutimuwcgcquy", "qhzjybroky", "ysjay", "jgwpmmgbzxntvkrpqrs", "zecqghffeeifptmjxryp", "idcfvomtrdrtylbx", "tjgeqfzyzush", "ljhmtruy", "sngqjtyte", "yxgyqepnueech", "yptfay", "qhaivxvjkuicyllehyay", "ddnd", "irivvzatpsy", "fzqumpyay", "uey", "swhhowavfutbb", "rxppyttkqtmaonoklcay", "rfwhmkgljax"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"siqmies", "jagujcvwthehs", "lxkamvjs", "obks", "izogzshxes", "hljmdpzlixtqtbooys", "eoys", "xgojnoyygches", "xhgijjzbudacshes", "ipzcwhzgphs", "glguvmsxes", "vycixjzcays", "vogcfutnns", "daizqrufs", "ylwnnfeyobaleys", "szjgkzqynhsahgltnswxes", "zies", "vkawiwtejwsawlbaiays", "gdalgkdbcjwrehltofties", "azpgrwemjzes", "xpxvyyaomuwzrzjcszses", "fbtches", "flyjasoxowyirfnupxes", "fcljeocxburbonies", "rpaulsbeqegeqhays", "ajmclsuwmrextwyuxndxes", "fnus", "jqjrnxhnbses", "ywcxrzkksgjwqxmaxes", "rndzkburdlyloybies", "phwxes", "tutimuwcgcquys", "qhzjybrokies", "ysjays", "jgwpmmgbzxntvkrpqrses", "zecqghffeeifptmjxryps", "idcfvomtrdrtylbxes", "tjgeqfzyzushes", "ljhmtruys", "sngqjtytes", "yxgyqepnueeches", "yptfays", "qhaivxvjkuicyllehyays", "ddnds", "irivvzatpsies", "fzqumpyays", "ueys", "swhhowavfutbbs", "rxppyttkqtmaonoklcays", "rfwhmkgljaxes"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> nouns = {"pmmubrqrsewsmwdzdmey", "ncdzfwuqjmmjublxuy", "emkqexwgmfeiy", "ykuekklgrtszjplsgs", "kssx", "jrpmch", "pwlhotcoedxz", "durxdey", "nty", "ohuvxlm", "wcfulpsay", "htulblflqyvyczolwloy", "fckwltxnnymuey", "aywzuy", "gaivodhnoy", "bsfmlylpyhdztkakaay", "obpvgjrldlwlqhzpjcz", "tvggqgtuhbwsh", "bynsrajrkhikcu", "bzrwkiqezm", "tot", "oglvenniysksugfbvcpw", "mfkbfixaey", "qbvzqps", "fdyzsgeswimdl", "vuy", "qpgnqwvjchbey", "umyoajdvltrtzyfci", "vyvsqgkxbiy", "rhurqhypgkgweqsuy", "acwbhhxzqpmy", "dcjlnprfz", "pwgdrqnwxcsh", "uedife", "cncusjqcey", "ttaucey", "lthcpiy", "srumwuxvvrncgcclcez", "altuycwy", "zdh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pmmubrqrsewsmwdzdmeys", "ncdzfwuqjmmjublxuys", "emkqexwgmfeiys", "ykuekklgrtszjplsgses", "kssxes", "jrpmches", "pwlhotcoedxzes", "durxdeys", "nties", "ohuvxlms", "wcfulpsays", "htulblflqyvyczolwloys", "fckwltxnnymueys", "aywzuys", "gaivodhnoys", "bsfmlylpyhdztkakaays", "obpvgjrldlwlqhzpjczes", "tvggqgtuhbwshes", "bynsrajrkhikcus", "bzrwkiqezms", "tots", "oglvenniysksugfbvcpws", "mfkbfixaeys", "qbvzqpses", "fdyzsgeswimdls", "vuys", "qpgnqwvjchbeys", "umyoajdvltrtzyfcis", "vyvsqgkxbiys", "rhurqhypgkgweqsuys", "acwbhhxzqpmies", "dcjlnprfzes", "pwgdrqnwxcshes", "uedifes", "cncusjqceys", "ttauceys", "lthcpiys", "srumwuxvvrncgcclcezes", "altuycwies", "zdhs"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> nouns = {"spaorcuiknnvbznuyex", "jebwwsmncexstr", "dqxavpgxhoppsh", "xqkdt", "jxfkbfrksgoxlhuha", "unkunfsflogzs", "vkz", "gbch", "crzjstpidebgmtwrrknz", "ocegvfembqd", "kegkxch", "rarmkediumktbpont", "kliy", "tuy", "ogmattjsiayrch", "tajjjzncigzpiih", "zhrmcsfrnux", "cjiqfascumglney", "xcowmlfulkhpz", "ptsaxxzdaajuy", "wwdyiaagiskgey", "memewawmgthodjhz", "hdotmscgicjbhciy", "gs", "rklrhvghszliuhizfuy", "dpdmabfzuizeqdhuvch", "kdxfhrfdrngch", "geukonfiy", "dtgzxeljrkzizqy", "ykimqpivrvmtmay", "opugeu", "dnqppkdypgvgdq", "pgbqlzuy", "jljrcud", "mcqfyiotz", "nbpgadhiqdbgcy", "wfckrmruxecrjxidsh", "dcbddvfiqxgoy", "ojghhyqovwtdmijrkwzp", "lcljafz", "fynobwvrmedp", "bnkclsh", "asljqugey", "fluveksuviifqfwy", "ssyxsrulcipvnunapoey", "jvvazpgiweuziy", "nejjerk", "rsiuzzanespch", "bdrxhbzjeaotiiw", "jbdwcxx"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"spaorcuiknnvbznuyexes", "jebwwsmncexstrs", "dqxavpgxhoppshes", "xqkdts", "jxfkbfrksgoxlhuhas", "unkunfsflogzses", "vkzes", "gbches", "crzjstpidebgmtwrrknzes", "ocegvfembqds", "kegkxches", "rarmkediumktbponts", "kliys", "tuys", "ogmattjsiayrches", "tajjjzncigzpiihs", "zhrmcsfrnuxes", "cjiqfascumglneys", "xcowmlfulkhpzes", "ptsaxxzdaajuys", "wwdyiaagiskgeys", "memewawmgthodjhzes", "hdotmscgicjbhciys", "gses", "rklrhvghszliuhizfuys", "dpdmabfzuizeqdhuvches", "kdxfhrfdrngches", "geukonfiys", "dtgzxeljrkzizqies", "ykimqpivrvmtmays", "opugeus", "dnqppkdypgvgdqs", "pgbqlzuys", "jljrcuds", "mcqfyiotzes", "nbpgadhiqdbgcies", "wfckrmruxecrjxidshes", "dcbddvfiqxgoys", "ojghhyqovwtdmijrkwzps", "lcljafzes", "fynobwvrmedps", "bnkclshes", "asljqugeys", "fluveksuviifqfwies", "ssyxsrulcipvnunapoeys", "jvvazpgiweuziys", "nejjerks", "rsiuzzanespches", "bdrxhbzjeaotiiws", "jbdwcxxes"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> nouns = {"tofcriuuuy", "surqrldvhvbex", "koaorkgsh", "dfsymmmicgkierxgsh", "wfafsaxzuxckcdix", "xbenqgkuoy", "zwkbxemmdrhzygpac", "fgxwhiddtkzkeyids", "iloy", "mmpbkqgxdlinlxkjfos", "yxfziy", "kdgvxziibgxixey", "zpartzch", "pnbvksvcmuy", "ruavcsqps", "nfuaiy", "fyhjhyas", "cdvdhpdx", "xjirumbzlzwgjgg", "zbyqfrygzus", "milafisgdhfsbmlls", "byrsmiy", "wjhfqghoxpcs", "oefdtumzjjshwvluy", "mbfoey", "z", "zvxnzy", "hwzjifodyvygpbszixb", "trqisfxqekys", "vjfwbsklhsivpiy", "vrdjjvzobvxtqeuiy", "sdcczbidjx", "ghrbdrbjdlzkaiy", "cysmsh", "xbx", "cpkybttxpxfjkqtcf", "ufindskzuy", "zopfpjekqssuudldch", "veumrogosczujzz", "pagmnvjquy", "zgdxrcoy", "tmpgtnfghfyql", "sokoy", "qisohxfufqs", "aqjgui", "cgrlnpmuc", "yupfeqybxcxey", "hlwsjzexqpfnlhlvox", "lybvkqos", "urngxtyijctatch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tofcriuuuys", "surqrldvhvbexes", "koaorkgshes", "dfsymmmicgkierxgshes", "wfafsaxzuxckcdixes", "xbenqgkuoys", "zwkbxemmdrhzygpacs", "fgxwhiddtkzkeyidses", "iloys", "mmpbkqgxdlinlxkjfoses", "yxfziys", "kdgvxziibgxixeys", "zpartzches", "pnbvksvcmuys", "ruavcsqpses", "nfuaiys", "fyhjhyases", "cdvdhpdxes", "xjirumbzlzwgjggs", "zbyqfrygzuses", "milafisgdhfsbmllses", "byrsmiys", "wjhfqghoxpcses", "oefdtumzjjshwvluys", "mbfoeys", "zes", "zvxnzies", "hwzjifodyvygpbszixbs", "trqisfxqekyses", "vjfwbsklhsivpiys", "vrdjjvzobvxtqeuiys", "sdcczbidjxes", "ghrbdrbjdlzkaiys", "cysmshes", "xbxes", "cpkybttxpxfjkqtcfs", "ufindskzuys", "zopfpjekqssuudldches", "veumrogosczujzzes", "pagmnvjquys", "zgdxrcoys", "tmpgtnfghfyqls", "sokoys", "qisohxfufqses", "aqjguis", "cgrlnpmucs", "yupfeqybxcxeys", "hlwsjzexqpfnlhlvoxes", "lybvkqoses", "urngxtyijctatches"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> nouns = {"zmfprbiepvkey", "lxqpch", "mclbyyvay", "snlwrvankdteuy", "gldkszay", "ifqsfgrdawbcsh", "wstcmbzbney", "hfqnzcokay", "ivcwlbzch", "qprtey", "mkzqzey", "gz", "ks", "kqvkey", "psaoevexci", "qjbwiipdbybrqihsh", "xnwrsuy", "jkvitpmvyscvdxrie", "o", "nmkflvbyruwhys", "otnlomobdjoktsaus", "mrwwwjfcxfselnjqch", "hnakewwcnbcqs", "ivmzwhygiiyds", "qdunp", "ovlefohntfoynnlsfzcn", "tivrdtfrjqysh", "hngeewxyahch", "uwfnvcnjioccay", "efckoyctgagaactyhpli", "hs", "mdalugjtpehbvx", "pxerpbwqnsoj", "rikbxgich", "okx", "tguey", "cotmwwiguaxvoqkiy", "rgff", "hkksh", "uix", "fklfbu", "alhclwgpfuy", "acbyjs", "debzqvsohqsnetpx", "tecvvshotywey", "exmvjrwgraqaqoedydch", "ie", "ylqulzl", "wdbyxnhvay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zmfprbiepvkeys", "lxqpches", "mclbyyvays", "snlwrvankdteuys", "gldkszays", "ifqsfgrdawbcshes", "wstcmbzbneys", "hfqnzcokays", "ivcwlbzches", "qprteys", "mkzqzeys", "gzes", "kses", "kqvkeys", "psaoevexcis", "qjbwiipdbybrqihshes", "xnwrsuys", "jkvitpmvyscvdxries", "os", "nmkflvbyruwhyses", "otnlomobdjoktsauses", "mrwwwjfcxfselnjqches", "hnakewwcnbcqses", "ivmzwhygiiydses", "qdunps", "ovlefohntfoynnlsfzcns", "tivrdtfrjqyshes", "hngeewxyahches", "uwfnvcnjioccays", "efckoyctgagaactyhplis", "hses", "mdalugjtpehbvxes", "pxerpbwqnsojs", "rikbxgiches", "okxes", "tgueys", "cotmwwiguaxvoqkiys", "rgffs", "hkkshes", "uixes", "fklfbus", "alhclwgpfuys", "acbyjses", "debzqvsohqsnetpxes", "tecvvshotyweys", "exmvjrwgraqaqoedydches", "ies", "ylqulzls", "wdbyxnhvays"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> nouns = {"zniy", "yisrsldhpkch", "kdtx", "nxkkrruy", "pxdtvfggfnhwx", "ukz", "lkyjnyjjtjfsyey", "zney", "dch", "hey", "ofximqduy", "tvenmvfstosoiftj", "nwtfuyehgpuknheuy", "liqpictswiq", "hrprdqaedhmey", "rfyexksgqimux", "gzucpshkdymkxstg", "wptrbmoanxhgjhilgiy", "ncmpzhuxlaeby", "pmqzpwfkwjy", "yojqzflpalqi", "irmvxeks", "snmlfeqzewyzpgsuy", "hkotnghasyxvdyx", "ccgdgkxwlsevb", "yljaryyqus", "orixwlch", "u", "hvnkaxsicdkwdhjibaci", "kvay", "ohduy", "gjfuoy", "rqbsch", "ycxrkttuwday", "ponhuey", "vpaamn", "xmcofucsh", "jny", "pmvwoy", "cfay", "ypqwsliaezvzjxmiy", "gwaevlqsh", "qafzivgez", "pqycrobjjhkbdclsxad", "kesqrurs"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zniys", "yisrsldhpkches", "kdtxes", "nxkkrruys", "pxdtvfggfnhwxes", "ukzes", "lkyjnyjjtjfsyeys", "zneys", "dches", "heys", "ofximqduys", "tvenmvfstosoiftjs", "nwtfuyehgpuknheuys", "liqpictswiqs", "hrprdqaedhmeys", "rfyexksgqimuxes", "gzucpshkdymkxstgs", "wptrbmoanxhgjhilgiys", "ncmpzhuxlaebies", "pmqzpwfkwjies", "yojqzflpalqis", "irmvxekses", "snmlfeqzewyzpgsuys", "hkotnghasyxvdyxes", "ccgdgkxwlsevbs", "yljaryyquses", "orixwlches", "us", "hvnkaxsicdkwdhjibacis", "kvays", "ohduys", "gjfuoys", "rqbsches", "ycxrkttuwdays", "ponhueys", "vpaamns", "xmcofucshes", "jnies", "pmvwoys", "cfays", "ypqwsliaezvzjxmiys", "gwaevlqshes", "qafzivgezes", "pqycrobjjhkbdclsxads", "kesqrurses"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> nouns = {"bjrrhbz", "miiy", "ubulbsibuy", "wvpmch", "udajtideiwtkfoy", "vdz", "z", "jmiy", "tldm", "fizdprphduey", "xuhdgsxggxrdeuzlyish", "nxsfvqfzzggy", "vueoddnxd", "dgclhluueidrewnksh", "enaofx", "ptjtpyicuvqjwzdwxvs", "nbyemnpiuy", "henwhsfnoz", "vyxqgteptydippcfxch", "iy", "ukginhfclavcwrsxfiey", "wlxyuwiy", "ftzwohofs", "ytdsjatchyalls", "beedynxunfwarwvuy", "rkalyywlwrrsfnsh", "teybnhyvbpnblhclway", "ecgslnkisoca", "ixrjlmwdvvkgithfeay", "grvz", "cqrxz", "ephfjkctsdoviy", "knubay", "rbrwjpixay", "dfupnlfmuy", "tvdhohqjz", "aexyuvwiz", "qaqnlzy", "lmgxsahbylcyd", "zwtney"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bjrrhbzes", "miiys", "ubulbsibuys", "wvpmches", "udajtideiwtkfoys", "vdzes", "zes", "jmiys", "tldms", "fizdprphdueys", "xuhdgsxggxrdeuzlyishes", "nxsfvqfzzggies", "vueoddnxds", "dgclhluueidrewnkshes", "enaofxes", "ptjtpyicuvqjwzdwxvses", "nbyemnpiuys", "henwhsfnozes", "vyxqgteptydippcfxches", "iys", "ukginhfclavcwrsxfieys", "wlxyuwiys", "ftzwohofses", "ytdsjatchyallses", "beedynxunfwarwvuys", "rkalyywlwrrsfnshes", "teybnhyvbpnblhclways", "ecgslnkisocas", "ixrjlmwdvvkgithfeays", "grvzes", "cqrxzes", "ephfjkctsdoviys", "knubays", "rbrwjpixays", "dfupnlfmuys", "tvdhohqjzes", "aexyuvwizes", "qaqnlzies", "lmgxsahbylcyds", "zwtneys"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> nouns = {"bkq", "mgiox", "fshnzzqnwzrodfcoy", "wgflftvrgjqtcaowaguy", "lhpkraimjlz", "brks", "rmfy", "vnjblgdcfmevzspveek", "iqbuepobymhjciscnxey", "njyhdsepcwmch", "b", "ckuvkwvftuvbgpiimay", "lxynrlhhfodffhbmay", "xzoeejay", "jzvabtxbceucphvqwoks", "qnumlackwqwa", "gpslayuzunizeal", "afvwyizqhduy", "cppjfgsbeqvcamlay", "bkodoizunsscq", "xqucx", "subjwqywnwuagpisuy", "qxmxtvoy", "edstlrpoahmoey", "lzvvwfoqoxrbqch", "gkcsy", "dfrfqeveepjwnbrmi", "umsycmycegmpabs", "mzuihmgftwyvf", "xqjxsgrs", "wyenrmfvsbrwjhhuy", "nmiabelrwfway", "edbqxzjjvcfhysgjuay", "uccppglcefdsmm", "wowxhpdxoy", "dkglofhch", "xkbrstoy", "iyvnoy", "vgipgesrcoirtoy", "rvkz", "wzcmway", "nfufrnnscvcmy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bkqs", "mgioxes", "fshnzzqnwzrodfcoys", "wgflftvrgjqtcaowaguys", "lhpkraimjlzes", "brkses", "rmfies", "vnjblgdcfmevzspveeks", "iqbuepobymhjciscnxeys", "njyhdsepcwmches", "bs", "ckuvkwvftuvbgpiimays", "lxynrlhhfodffhbmays", "xzoeejays", "jzvabtxbceucphvqwokses", "qnumlackwqwas", "gpslayuzunizeals", "afvwyizqhduys", "cppjfgsbeqvcamlays", "bkodoizunsscqs", "xqucxes", "subjwqywnwuagpisuys", "qxmxtvoys", "edstlrpoahmoeys", "lzvvwfoqoxrbqches", "gkcsies", "dfrfqeveepjwnbrmis", "umsycmycegmpabses", "mzuihmgftwyvfs", "xqjxsgrses", "wyenrmfvsbrwjhhuys", "nmiabelrwfways", "edbqxzjjvcfhysgjuays", "uccppglcefdsmms", "wowxhpdxoys", "dkglofhches", "xkbrstoys", "iyvnoys", "vgipgesrcoirtoys", "rvkzes", "wzcmways", "nfufrnnscvcmies"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> nouns = {"jcuajtdddlnhx", "mmzckkdylianowgnx", "u", "pqmtods", "grrbsava", "vy", "yzro", "invxfpzkgx", "jwquqscbqprmhucrty", "cgz", "sfigsaxucijnvxhus", "pevstqx", "chds", "iswty", "rclbxvuinzfthay", "ilwargxsh", "otdzrinnmfkjdereey", "lzxfaqdk", "ycrxmgbvwbylbw", "ygondfgdshzds", "qgqkkws", "gnedpaiemz", "rjqcz", "vkbowflt", "kmmpwsadnrmcjpy", "yqbmaztay", "zgeyzuirczgfoyrkjloz", "eskrch", "vvpeerxpcnxzocaroy", "wryobccohjmsusay", "kdalogoagch", "lkokmgbo", "wuggtjxjbnjvjq", "ycskwilils", "hrisindtjsh", "pjvw", "txiqagiuuthrsuy", "crhnkrtk", "ztfolriycevuy", "edlieerllvkrn", "nl", "cghzkshxg", "jopogvjfcrfuy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jcuajtdddlnhxes", "mmzckkdylianowgnxes", "us", "pqmtodses", "grrbsavas", "vies", "yzros", "invxfpzkgxes", "jwquqscbqprmhucrties", "cgzes", "sfigsaxucijnvxhuses", "pevstqxes", "chdses", "iswties", "rclbxvuinzfthays", "ilwargxshes", "otdzrinnmfkjdereeys", "lzxfaqdks", "ycrxmgbvwbylbws", "ygondfgdshzdses", "qgqkkwses", "gnedpaiemzes", "rjqczes", "vkbowflts", "kmmpwsadnrmcjpies", "yqbmaztays", "zgeyzuirczgfoyrkjlozes", "eskrches", "vvpeerxpcnxzocaroys", "wryobccohjmsusays", "kdalogoagches", "lkokmgbos", "wuggtjxjbnjvjqs", "ycskwililses", "hrisindtjshes", "pjvws", "txiqagiuuthrsuys", "crhnkrtks", "ztfolriycevuys", "edlieerllvkrns", "nls", "cghzkshxgs", "jopogvjfcrfuys"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> nouns = {"k", "muyzjdaecdhx", "gpbwqcdqtmriy", "ukbixtkgvgyfmos", "iwrxpdbasmdorz", "ytbswapukgywsh", "hwjprvbrha", "lmasvuikgjgdoy", "spxzooy", "rfywrwdknykohtdnwuy", "quy", "vqphiuqncr", "aqmnimodbbqlch", "ixay", "frfdakdlkfquy", "wvtgnxpbfemfyedz", "dgwheouz", "jldvmgeljqrygxjfsh", "vejhvhfnyrx", "lmezhaoy", "pxknyolpweyrgdzujiy", "ifcbvbyccpfuy", "bbfhamakuvzwpwnxx", "kcssy", "djoxnmmkwdgsmapgch", "wyihjtekltbiozyvay", "cdfbmynmihjanizsedhx", "bqhgzzthptbssuy", "cnxtkontyzjtbdfespum", "skwuodhnglbsh", "gvqlifrjbo", "afelwlzxexeqbzqhrgch", "csuz", "zgsgvrzadiy", "irgcronbqwash", "pchpejqjsbjwhuy", "jwjmqioaktuy", "sdjpwk", "vpx", "whbyy", "tozlcithoy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ks", "muyzjdaecdhxes", "gpbwqcdqtmriys", "ukbixtkgvgyfmoses", "iwrxpdbasmdorzes", "ytbswapukgywshes", "hwjprvbrhas", "lmasvuikgjgdoys", "spxzooys", "rfywrwdknykohtdnwuys", "quys", "vqphiuqncrs", "aqmnimodbbqlches", "ixays", "frfdakdlkfquys", "wvtgnxpbfemfyedzes", "dgwheouzes", "jldvmgeljqrygxjfshes", "vejhvhfnyrxes", "lmezhaoys", "pxknyolpweyrgdzujiys", "ifcbvbyccpfuys", "bbfhamakuvzwpwnxxes", "kcssies", "djoxnmmkwdgsmapgches", "wyihjtekltbiozyvays", "cdfbmynmihjanizsedhxes", "bqhgzzthptbssuys", "cnxtkontyzjtbdfespums", "skwuodhnglbshes", "gvqlifrjbos", "afelwlzxexeqbzqhrgches", "csuzes", "zgsgvrzadiys", "irgcronbqwashes", "pchpejqjsbjwhuys", "jwjmqioaktuys", "sdjpwks", "vpxes", "whbyies", "tozlcithoys"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> nouns = {"dhqhbpfz", "cjpzwlffrrx", "wty", "hrauttx", "dtqiiwrnkrbfjoch", "xffcpjlotisbjsvch", "zfyvpyainuy", "vxvqqh", "taqfmezkgjojjrhuoes", "mhruy", "mrkfzpakdsnzmey", "csh", "ugsvmhaay", "bylias", "sgch", "ppuphlahxpupwmyaysps", "noexsch", "qpflyuwdardiy", "chsh", "yrozcdtdlxkac", "atbjzkzniy", "jto", "pupfvyqbr", "qhlsh", "kcwcfzehtopuy", "yozwnechbct", "lrggqlayech", "iomnuwjqdsjnxuzgay", "aeotopniqaqay", "jcpy", "vogwjsejmmanceey", "qfdfx", "piy", "xhuykuauy", "jrsh", "ly", "xquxasvnqkons", "uhx", "nur", "kehpxroy", "nqhprmwdng", "ejdqouoy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dhqhbpfzes", "cjpzwlffrrxes", "wties", "hrauttxes", "dtqiiwrnkrbfjoches", "xffcpjlotisbjsvches", "zfyvpyainuys", "vxvqqhs", "taqfmezkgjojjrhuoeses", "mhruys", "mrkfzpakdsnzmeys", "cshes", "ugsvmhaays", "byliases", "sgches", "ppuphlahxpupwmyayspses", "noexsches", "qpflyuwdardiys", "chshes", "yrozcdtdlxkacs", "atbjzkzniys", "jtos", "pupfvyqbrs", "qhlshes", "kcwcfzehtopuys", "yozwnechbcts", "lrggqlayeches", "iomnuwjqdsjnxuzgays", "aeotopniqaqays", "jcpies", "vogwjsejmmanceeys", "qfdfxes", "piys", "xhuykuauys", "jrshes", "lies", "xquxasvnqkonses", "uhxes", "nurs", "kehpxroys", "nqhprmwdngs", "ejdqouoys"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> nouns = {"rxkdmxtakqxfs", "owzmxyrtujvqaqpds", "eaayvorippcuscojw", "finqandoy", "bmmfmkojuucyhay", "cbipmmudahiy", "nwccxsybmgjuphiqnay", "gzkpx", "czx", "suenynuktialpvwhvm", "tvqboiich", "sloy", "jhtuafpvhbjodokrpx", "lawdisltstdercmgush", "mrsz", "vshouphjhzfquloez", "uwnmjs", "kypqrrvtiy", "szgcbsujzmefvwmki", "vludtnuiscuwtey", "gweeywimebrfynych", "asywxufajs", "mhddqeyhzcany", "rhicqkeustfuy", "mmahjxblvwpmoey", "vxhojnohz", "ayyyf", "kaiy", "foapsstfcqubvztfhqy", "spxtzjfegxali", "kolrvpdwcfuch", "cmpanmvcosh", "cwcvzpcwus", "tgsrmpzlhcsnhhdqfsh", "lbsefjemnoy", "jsovkgjnkayuy", "jmpdwzcineigix", "dtnjx", "gmcgoy", "qihch", "qrxovkxvvsymxikotnz", "glmtz", "rksay", "riaxokmuqnis", "zwrqvixlcu", "yuwhhnbeifjwutkj"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rxkdmxtakqxfses", "owzmxyrtujvqaqpdses", "eaayvorippcuscojws", "finqandoys", "bmmfmkojuucyhays", "cbipmmudahiys", "nwccxsybmgjuphiqnays", "gzkpxes", "czxes", "suenynuktialpvwhvms", "tvqboiiches", "sloys", "jhtuafpvhbjodokrpxes", "lawdisltstdercmgushes", "mrszes", "vshouphjhzfquloezes", "uwnmjses", "kypqrrvtiys", "szgcbsujzmefvwmkis", "vludtnuiscuwteys", "gweeywimebrfynyches", "asywxufajses", "mhddqeyhzcanies", "rhicqkeustfuys", "mmahjxblvwpmoeys", "vxhojnohzes", "ayyyfs", "kaiys", "foapsstfcqubvztfhqies", "spxtzjfegxalis", "kolrvpdwcfuches", "cmpanmvcoshes", "cwcvzpcwuses", "tgsrmpzlhcsnhhdqfshes", "lbsefjemnoys", "jsovkgjnkayuys", "jmpdwzcineigixes", "dtnjxes", "gmcgoys", "qihches", "qrxovkxvvsymxikotnzes", "glmtzes", "rksays", "riaxokmuqnises", "zwrqvixlcus", "yuwhhnbeifjwutkjs"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> nouns = {"xiy", "ihedicjxiey", "qbommsxirmch", "mtkpdwgvsh", "gdhiicjtctpxvhqky", "bqswmphxkogfrps", "rforhucljjmwusfsoy", "nepbmkwmy", "xjei", "c", "xvhqxhcrya", "izktegifo", "mzxpey", "rjotkufoz", "mxs", "ewmjqdbsmfdpelwfsh", "usffkonvcvrdvnkpmz", "xnkupmzdkisbekcs", "scpibuvwspqd", "zydigmhrcezgdnoajq", "jafczxptwdldrglkv", "opxonhoy", "nzlhbcnofasich", "psjofgoy", "texmcgsltnbaugjyzx", "ach", "qwukjhxy", "lntytsjdk", "amri", "awkjodrnaszz", "xytgfmepmrqjkpy", "djnszisrsdqfxhsh", "qmwxcn", "galxoapiaejiy", "kjuljxokegwyfx", "ujvlbzcs", "nidoy", "nn", "xveigyvjrbmaesmz", "hekuey", "fdjymxglqljq", "uauzfijrwmixgmiaif", "cng"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xiys", "ihedicjxieys", "qbommsxirmches", "mtkpdwgvshes", "gdhiicjtctpxvhqkies", "bqswmphxkogfrpses", "rforhucljjmwusfsoys", "nepbmkwmies", "xjeis", "cs", "xvhqxhcryas", "izktegifos", "mzxpeys", "rjotkufozes", "mxses", "ewmjqdbsmfdpelwfshes", "usffkonvcvrdvnkpmzes", "xnkupmzdkisbekcses", "scpibuvwspqds", "zydigmhrcezgdnoajqs", "jafczxptwdldrglkvs", "opxonhoys", "nzlhbcnofasiches", "psjofgoys", "texmcgsltnbaugjyzxes", "aches", "qwukjhxies", "lntytsjdks", "amris", "awkjodrnaszzes", "xytgfmepmrqjkpies", "djnszisrsdqfxhshes", "qmwxcns", "galxoapiaejiys", "kjuljxokegwyfxes", "ujvlbzcses", "nidoys", "nns", "xveigyvjrbmaesmzes", "hekueys", "fdjymxglqljqs", "uauzfijrwmixgmiaifs", "cngs"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> nouns = {"txmllwwhwgbfybay", "sascpydikdxu", "cnpcyovcqkcbay", "kkx", "mnoqpbtcf", "tdzanifymgqkccmkoy", "qjlqgqfapmmp", "rrey", "hwcz", "ptoaaadch", "xrwxvriwfy", "uwmt", "kecmaihx", "cdibvhihndpxriz", "wukakvvpvch", "pfbicoorahuvbqiwgwey", "toxqefmtpiknydkiwus", "vfesbsh", "knzmvfy", "onmzwgvqxlomarndqfiy", "ziosuvmwetsr", "ujrhsusrugx", "vchcmoy", "tihzalprmuloy", "eesmhyddbgntelkch", "yjnthrjuy", "dvsembabyfnlhyoy", "ogoz", "okesplbhlkteuey", "poywtdcocoy", "kgxdsaopztgnqjay", "sweyfnsoeoy", "vray", "yapydlxpij", "uqeywnpwefyfsoq", "rjdgwoxcjyyxjvapy", "xwxqcckji", "wofmuyoy", "qbwkbbencsytrq", "jvaodvch", "hzwnch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"txmllwwhwgbfybays", "sascpydikdxus", "cnpcyovcqkcbays", "kkxes", "mnoqpbtcfs", "tdzanifymgqkccmkoys", "qjlqgqfapmmps", "rreys", "hwczes", "ptoaaadches", "xrwxvriwfies", "uwmts", "kecmaihxes", "cdibvhihndpxrizes", "wukakvvpvches", "pfbicoorahuvbqiwgweys", "toxqefmtpiknydkiwuses", "vfesbshes", "knzmvfies", "onmzwgvqxlomarndqfiys", "ziosuvmwetsrs", "ujrhsusrugxes", "vchcmoys", "tihzalprmuloys", "eesmhyddbgntelkches", "yjnthrjuys", "dvsembabyfnlhyoys", "ogozes", "okesplbhlkteueys", "poywtdcocoys", "kgxdsaopztgnqjays", "sweyfnsoeoys", "vrays", "yapydlxpijs", "uqeywnpwefyfsoqs", "rjdgwoxcjyyxjvapies", "xwxqcckjis", "wofmuyoys", "qbwkbbencsytrqs", "jvaodvches", "hzwnches"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> nouns = {"w", "uizcajvlrsynahuy", "cljx", "iinwlurshmay", "dnscdzhtnunlemgs", "wccvaxvstxggnwjoh", "zytwievay", "rrtdwcekybotuch", "huy", "kmtpv", "okibnzvozduy", "rtqaducfssohkay", "fcwpiaxtz", "mblhqndwtcljjewwsi", "obexzw", "pvfhn", "uyqgsduxgucx", "iohyay", "jlbbfidsfkaocs", "axclngfpkddwxcsh", "ijskyay", "wkyeaimuy", "okzjlogkxlpafcx", "ohxcx", "eacggllls", "amykucrech", "osgjblqqqopsytduy", "ihixmbiyrnnyfpaihd", "ygimscdhrdch", "fslqhdphavqfvhcwflsh", "qpekwwdjlmfp", "hxnffys", "pznx", "qxqyfman", "nrkiy", "rwabprrvnmhbwey", "cjsktylrpxxrwuy", "cfmxbdyllegtcefhuoay", "xpjsqoy", "zyafday", "cofwfacsjroy", "jmkppmdlzzkyseptuy", "biheqgpaaigsmvah", "kmnagbgifey", "cimykomx", "vfrdfdotuyvzwcuy", "clrezafzdbny", "nvz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ws", "uizcajvlrsynahuys", "cljxes", "iinwlurshmays", "dnscdzhtnunlemgses", "wccvaxvstxggnwjohs", "zytwievays", "rrtdwcekybotuches", "huys", "kmtpvs", "okibnzvozduys", "rtqaducfssohkays", "fcwpiaxtzes", "mblhqndwtcljjewwsis", "obexzws", "pvfhns", "uyqgsduxgucxes", "iohyays", "jlbbfidsfkaocses", "axclngfpkddwxcshes", "ijskyays", "wkyeaimuys", "okzjlogkxlpafcxes", "ohxcxes", "eacgglllses", "amykucreches", "osgjblqqqopsytduys", "ihixmbiyrnnyfpaihds", "ygimscdhrdches", "fslqhdphavqfvhcwflshes", "qpekwwdjlmfps", "hxnffyses", "pznxes", "qxqyfmans", "nrkiys", "rwabprrvnmhbweys", "cjsktylrpxxrwuys", "cfmxbdyllegtcefhuoays", "xpjsqoys", "zyafdays", "cofwfacsjroys", "jmkppmdlzzkyseptuys", "biheqgpaaigsmvahs", "kmnagbgifeys", "cimykomxes", "vfrdfdotuyvzwcuys", "clrezafzdbnies", "nvzes"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> nouns = {"oicghikabynsptbm", "nktjyiqmcts", "zspzxelmqyebhihittns", "kzkaozyzfvrhpwmjktds", "jqymyxucmwxqmrqxs", "rtgwmzvcch", "yjqgz", "qkytrqhwfsoy", "osh", "jtedbcjluxy", "yqmqwiy", "skfs", "zlseotcsglnq", "dgey", "natqmoiy", "exft", "ivbjnus", "ljydwqfuxqwexsyqupss", "ple", "ny", "wlyllndbkfpny", "ypixurcrpqiwgmiiy", "tdycpeeifmz", "kvfsxugguvslhx", "pfhihtgdrpdz", "cuy", "yxfmjms", "fey", "uhmfiuxznrjqvrcvcwx", "hqnjcsh", "okqrx", "oubdrenkdphavsizuy", "uyotlkcotox", "j", "rxy", "saanmrwvxhsxunpy", "ikvlqxld", "ojhiuyaawsrhxezxfls", "ywey", "reyywohdpwlligbdewns", "ekkpz", "edavfpzrwostx", "ltqopclcwa", "bputfghdpuy", "mqlsdqlonesrach", "pitx", "ugnvxfsdotzorsjmlfey", "orhvgnhtfvlopdbxaety", "yeiivgpirdwhejch", "igplay"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oicghikabynsptbms", "nktjyiqmctses", "zspzxelmqyebhihittnses", "kzkaozyzfvrhpwmjktdses", "jqymyxucmwxqmrqxses", "rtgwmzvcches", "yjqgzes", "qkytrqhwfsoys", "oshes", "jtedbcjluxies", "yqmqwiys", "skfses", "zlseotcsglnqs", "dgeys", "natqmoiys", "exfts", "ivbjnuses", "ljydwqfuxqwexsyqupsses", "ples", "nies", "wlyllndbkfpnies", "ypixurcrpqiwgmiiys", "tdycpeeifmzes", "kvfsxugguvslhxes", "pfhihtgdrpdzes", "cuys", "yxfmjmses", "feys", "uhmfiuxznrjqvrcvcwxes", "hqnjcshes", "okqrxes", "oubdrenkdphavsizuys", "uyotlkcotoxes", "js", "rxies", "saanmrwvxhsxunpies", "ikvlqxlds", "ojhiuyaawsrhxezxflses", "yweys", "reyywohdpwlligbdewnses", "ekkpzes", "edavfpzrwostxes", "ltqopclcwas", "bputfghdpuys", "mqlsdqlonesraches", "pitxes", "ugnvxfsdotzorsjmlfeys", "orhvgnhtfvlopdbxaeties", "yeiivgpirdwhejches", "igplays"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> nouns = {"key", "uhrbch", "cey", "tkxnwvlzqimpiqch", "luloyybz", "pannjvqnlqytthwckych", "dyslqltrsxtevqsh", "bddkls", "zqkvcefhqvmiqxakfkay", "cokjyi", "jlsadktnoz", "pay", "pebcyey", "ayixhldch", "gparzchgatefxwbeagz", "mwnhlycspfuvyyeuy", "svhdez", "eemjxvstdkeouoch", "qhrjr", "dkrdmobmuhqnrshsh", "mhpjqlxizyzch", "pftqcvmuiyfkwkay", "fxlihceijxitrtdvp", "zrfifqzaqxmdcb", "kvkssfmxnsx", "quwrdjrnwnch", "xx", "gg", "prvngoey", "kgfdmnlxyt", "xphvqmkirqyqyi", "gbpaoadk", "xrcnnlx", "cvegiy", "qciawcey", "fush", "starrnrjyjch", "qrzajrpldsaps", "zjs", "tyaksh", "hgollfpcksx", "mdjgvffddhknobqp", "bmjtbiy", "qhr", "nknlqonxxyouxeych", "hkmaepndxnpy", "toowhscrday", "qcikennzamqvhoy", "rdhllrmgmluyarlzoy", "yfsdepphnnjaiy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"keys", "uhrbches", "ceys", "tkxnwvlzqimpiqches", "luloyybzes", "pannjvqnlqytthwckyches", "dyslqltrsxtevqshes", "bddklses", "zqkvcefhqvmiqxakfkays", "cokjyis", "jlsadktnozes", "pays", "pebcyeys", "ayixhldches", "gparzchgatefxwbeagzes", "mwnhlycspfuvyyeuys", "svhdezes", "eemjxvstdkeouoches", "qhrjrs", "dkrdmobmuhqnrshshes", "mhpjqlxizyzches", "pftqcvmuiyfkwkays", "fxlihceijxitrtdvps", "zrfifqzaqxmdcbs", "kvkssfmxnsxes", "quwrdjrnwnches", "xxes", "ggs", "prvngoeys", "kgfdmnlxyts", "xphvqmkirqyqyis", "gbpaoadks", "xrcnnlxes", "cvegiys", "qciawceys", "fushes", "starrnrjyjches", "qrzajrpldsapses", "zjses", "tyakshes", "hgollfpcksxes", "mdjgvffddhknobqps", "bmjtbiys", "qhrs", "nknlqonxxyouxeyches", "hkmaepndxnpies", "toowhscrdays", "qcikennzamqvhoys", "rdhllrmgmluyarlzoys", "yfsdepphnnjaiys"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> nouns = {"nfbx", "x", "kicrrvuvisgdfkpkghzz", "nxbgwmnwhwrajxz", "g", "xerxzwrbhzxzoy", "jjnsnojsxnbgdhfiay", "yqpwcdexrqtcppnzlcr", "ftpaxfvsamuzcon", "iahybeeairfigey", "meex", "eywprnnqakx", "dddrgxyragpsh", "cslrtolsevcwmonrvhvj", "jaywfojpkahsitbu", "ezvpuicizzkehxs", "jbnqupuy", "bjrbeu", "zrhjyigmppzhmtmuirw", "qwey", "pfknmvlvmsk", "czuy", "ceimfzdtbawvtbiay", "htxoehkcsbjwhmxmjuy", "tlrfxaexuy", "qgzyujm", "ffpbuay", "swktalunboy", "ycox", "yzjsefboueapxjiy", "xnqcrhjaoacx", "moz", "pd", "cqkntjfcjx", "lcr", "mwqpfz", "pdbelay", "qdqezikmxvsibreql", "aflxch", "xaymxiaeulqbm", "lfgqgqdbflffqay", "izemiy", "eiavfehcgrmorzsphdvs", "pdakmfipcqlmonvtaprx", "nyfdpwsgeoy", "qhqyndgypvjpissh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nfbxes", "xes", "kicrrvuvisgdfkpkghzzes", "nxbgwmnwhwrajxzes", "gs", "xerxzwrbhzxzoys", "jjnsnojsxnbgdhfiays", "yqpwcdexrqtcppnzlcrs", "ftpaxfvsamuzcons", "iahybeeairfigeys", "meexes", "eywprnnqakxes", "dddrgxyragpshes", "cslrtolsevcwmonrvhvjs", "jaywfojpkahsitbus", "ezvpuicizzkehxses", "jbnqupuys", "bjrbeus", "zrhjyigmppzhmtmuirws", "qweys", "pfknmvlvmsks", "czuys", "ceimfzdtbawvtbiays", "htxoehkcsbjwhmxmjuys", "tlrfxaexuys", "qgzyujms", "ffpbuays", "swktalunboys", "ycoxes", "yzjsefboueapxjiys", "xnqcrhjaoacxes", "mozes", "pds", "cqkntjfcjxes", "lcrs", "mwqpfzes", "pdbelays", "qdqezikmxvsibreqls", "aflxches", "xaymxiaeulqbms", "lfgqgqdbflffqays", "izemiys", "eiavfehcgrmorzsphdvses", "pdakmfipcqlmonvtaprxes", "nyfdpwsgeoys", "qhqyndgypvjpisshes"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> nouns = {"jj", "pnmovcrdway", "rohqdkgbikjbzez", "pgoponllay", "ymccwtyklzupwmxtz", "diowjhsh", "wjgmhq", "ojlkjgrehacuakcy", "dvmywvy", "ajwgnbcnikkgutzcvay", "htay", "rpeuqgay", "dzmdkhchbfqx", "nhphcvu", "nmcjiglbzbcejxog", "blqbyqmbcxwoxsaxhoy", "pctlzyeaey", "ctnylaiwksmxajyay", "cbamappqdkplray", "sjelpfknefay", "tqtzouqzmjafqkioecl", "baqkjezsprnyb", "rbggixfmzutphheuy", "envrdubwptsvlxhksxuy", "ocxqohey", "ijbjrnytifuey", "aislmrrrmvgvphes", "q", "qkvdywmyxx", "rujnjlbvtxopt", "xixjemcyn", "elbuauzzuidayeghxuhy", "trlgiy", "olono", "srmjjbttzls", "jgimfy", "bmjml", "fjovcvokfuiqljymdui", "oictcxhupaxlaflspjoy", "zdbwyzch"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jjs", "pnmovcrdways", "rohqdkgbikjbzezes", "pgoponllays", "ymccwtyklzupwmxtzes", "diowjhshes", "wjgmhqs", "ojlkjgrehacuakcies", "dvmywvies", "ajwgnbcnikkgutzcvays", "htays", "rpeuqgays", "dzmdkhchbfqxes", "nhphcvus", "nmcjiglbzbcejxogs", "blqbyqmbcxwoxsaxhoys", "pctlzyeaeys", "ctnylaiwksmxajyays", "cbamappqdkplrays", "sjelpfknefays", "tqtzouqzmjafqkioecls", "baqkjezsprnybs", "rbggixfmzutphheuys", "envrdubwptsvlxhksxuys", "ocxqoheys", "ijbjrnytifueys", "aislmrrrmvgvpheses", "qs", "qkvdywmyxxes", "rujnjlbvtxopts", "xixjemcyns", "elbuauzzuidayeghxuhies", "trlgiys", "olonos", "srmjjbttzlses", "jgimfies", "bmjmls", "fjovcvokfuiqljymduis", "oictcxhupaxlaflspjoys", "zdbwyzches"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> nouns = {"rxuutdmwowqtjzhch", "dklaorxr", "bqqrpppkuugch", "eedmpoyywttqgrey", "zafvtax", "xyedupsch", "v", "nedumokqhxoeaxfrc", "byjkno", "nhpotyqgprtxlqey", "tjoy", "qjewdpmbx", "jisvnwkox", "rz", "jdkqklnrktjjqceype", "cch", "ozbsmwytqkmilvjhway", "nbxnqjphsijxpfoy", "ts", "vbpbtgpwmbz", "icey", "kesajbrveivey", "mmykcocshrcdjey", "ash", "tqugjdkqfu", "lbbnqcaay", "nteux", "bbcxjbmqxqhkveuy", "onzzdsbizmczbhuy", "uhdinopyahmemhmch", "rjviqy", "zyzubrs", "szcqkgbpprqxjflzsahi", "jpdlavbpnqbwvuvbdch", "apxfpech", "lyungvrwnxrmrzykkmiy", "tggjirbixhlnmawmfdfr", "odgjikwtsmiqvx", "dfebjhnvhrguuwdsytaz", "ywowxuhhcneay", "ikpibek", "rkwunxzuy", "qey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rxuutdmwowqtjzhches", "dklaorxrs", "bqqrpppkuugches", "eedmpoyywttqgreys", "zafvtaxes", "xyedupsches", "vs", "nedumokqhxoeaxfrcs", "byjknos", "nhpotyqgprtxlqeys", "tjoys", "qjewdpmbxes", "jisvnwkoxes", "rzes", "jdkqklnrktjjqceypes", "cches", "ozbsmwytqkmilvjhways", "nbxnqjphsijxpfoys", "tses", "vbpbtgpwmbzes", "iceys", "kesajbrveiveys", "mmykcocshrcdjeys", "ashes", "tqugjdkqfus", "lbbnqcaays", "nteuxes", "bbcxjbmqxqhkveuys", "onzzdsbizmczbhuys", "uhdinopyahmemhmches", "rjviqies", "zyzubrses", "szcqkgbpprqxjflzsahis", "jpdlavbpnqbwvuvbdches", "apxfpeches", "lyungvrwnxrmrzykkmiys", "tggjirbixhlnmawmfdfrs", "odgjikwtsmiqvxes", "dfebjhnvhrguuwdsytazes", "ywowxuhhcneays", "ikpibeks", "rkwunxzuys", "qeys"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> nouns = {"qiy", "hjsllygsfed", "ycpxalggcsxkx", "ettg", "urfxpqhtumixujgasey", "bwzpogvkebsh", "t", "iohiecib", "diwplcwfry", "ehwobwoy", "imhey", "elxmsomujkalicevgsh", "maxadghpish", "iwroirhhgrbvkriqngz", "gyyirgs", "emvqylnbabltarlos", "vgqvjliy", "ggcothihhvxpwxeebs", "iprhoicaedtpususvxay", "hmmpzzudqusgzkaqluy", "sdrdkvbrcmc", "yvgcsozvzthdxpghdduy", "qppnilgbiey", "hlupsjjfiuvdzeptzay", "u", "ahkhcqmufwhwaigcywsh", "lchvhzgpfhiuuzpai", "plvsh", "jwvqldiejaociblwiy", "nftnctzzuhujly", "zlvsakhztmeftbfsh", "zhgzhatnfvduzjivtm", "hoy", "vssiokiy", "fnsh", "xidodqnyxfgbey", "kfuy", "nvhxj", "plddaqipins", "uwsamsxqhrach", "hnogmsandfcy", "vsphjkpnekyjaupuy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qiys", "hjsllygsfeds", "ycpxalggcsxkxes", "ettgs", "urfxpqhtumixujgaseys", "bwzpogvkebshes", "ts", "iohiecibs", "diwplcwfries", "ehwobwoys", "imheys", "elxmsomujkalicevgshes", "maxadghpishes", "iwroirhhgrbvkriqngzes", "gyyirgses", "emvqylnbabltarloses", "vgqvjliys", "ggcothihhvxpwxeebses", "iprhoicaedtpususvxays", "hmmpzzudqusgzkaqluys", "sdrdkvbrcmcs", "yvgcsozvzthdxpghdduys", "qppnilgbieys", "hlupsjjfiuvdzeptzays", "us", "ahkhcqmufwhwaigcywshes", "lchvhzgpfhiuuzpais", "plvshes", "jwvqldiejaociblwiys", "nftnctzzuhujlies", "zlvsakhztmeftbfshes", "zhgzhatnfvduzjivtms", "hoys", "vssiokiys", "fnshes", "xidodqnyxfgbeys", "kfuys", "nvhxjs", "plddaqipinses", "uwsamsxqhraches", "hnogmsandfcies", "vsphjkpnekyjaupuys"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> nouns = {"lpupddomsbeiboj", "jfxyffomzktamdrach", "ntwanjdaxplfyzwrgrx", "kztxy", "ixqrvumteny", "jtqntybnryeqtqay", "rlr", "klnrbptwwuusch", "jlbtiusz", "vuszymunozch", "uotwliqplu", "zvlbzrrxvulspqllay", "sriwtoafeaqiwkch", "vn", "iypcitqkagjudgwjx", "zjfenbact", "itnxyclczvyiiynvuy", "iwfphddseydhzuvay", "wejylqhkfmrqmspx", "jysxs", "lsdjtwipvjiuvkzdcwl", "rnpbwfech", "tqklxfhgnbpemlkmmz", "usx", "uss", "hiagdwei", "txwzdtvhtmgc", "xnjhych", "xfdnvzbuich", "iqmjgvhtulgfoy", "cxmozerbbr", "shvaxldwencanwgbwtch", "muoy", "ygqckxcwzvcs", "ntjhtkjfhnzbay", "wtftuqncdmedgy", "lhrzxkhztiywefsur", "abzgldodasqoy", "rbwcejbsqelgdqkqsls", "edxbtkfaaumvzatqkzc", "gheehzldpmivwvuz", "zytqkxofhz", "kemcgtx", "tey", "lnohozjppnxwqgyvhsh", "apbrmelzjbvbbqzznpch", "cwrnqjqey"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lpupddomsbeibojs", "jfxyffomzktamdraches", "ntwanjdaxplfyzwrgrxes", "kztxies", "ixqrvumtenies", "jtqntybnryeqtqays", "rlrs", "klnrbptwwuusches", "jlbtiuszes", "vuszymunozches", "uotwliqplus", "zvlbzrrxvulspqllays", "sriwtoafeaqiwkches", "vns", "iypcitqkagjudgwjxes", "zjfenbacts", "itnxyclczvyiiynvuys", "iwfphddseydhzuvays", "wejylqhkfmrqmspxes", "jysxses", "lsdjtwipvjiuvkzdcwls", "rnpbwfeches", "tqklxfhgnbpemlkmmzes", "usxes", "usses", "hiagdweis", "txwzdtvhtmgcs", "xnjhyches", "xfdnvzbuiches", "iqmjgvhtulgfoys", "cxmozerbbrs", "shvaxldwencanwgbwtches", "muoys", "ygqckxcwzvcses", "ntjhtkjfhnzbays", "wtftuqncdmedgies", "lhrzxkhztiywefsurs", "abzgldodasqoys", "rbwcejbsqelgdqkqslses", "edxbtkfaaumvzatqkzcs", "gheehzldpmivwvuzes", "zytqkxofhzes", "kemcgtxes", "teys", "lnohozjppnxwqgyvhshes", "apbrmelzjbvbbqzznpches", "cwrnqjqeys"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> nouns = {"gkzxxgypbxfuymx", "ogapwpy", "udwmmmhende", "gpjtwpgoeswegq", "gqivjciltbmybudtdhdv", "gs", "kpgippz", "lmmbpbyexcpzuliz", "msh", "qpspfqoxlkay", "fpymxy", "gesh", "cjnvjntvssh", "jndzfgcnle", "qy", "eckdasomrkzsxwmprm", "dnmjosan", "ulujzakkeadpirlyfuy", "qfy", "wwiugalolabkfey", "nktmriohyqulich", "nlkgcxvoyxrzuy", "npigcepzeruy", "kllrxvitfyxndey", "gzmnxgfhiy", "n", "dvbgirdcotiuay", "lijdkvzsgnvwagzbyze", "qhay", "m", "uius", "ibay", "vgreofeatwzsh", "ldgfhefddkxzkiuy", "meiejprhdpsoy", "qrxpzawetoaay", "bnpskrikhcmlpxhiy", "zqepliju", "uwtfczvdqqwsdeoy", "kuknxks", "ynxmfamyzzbkukjzksuy", "ungtgruney", "vyopumiqvddspqooy", "wxfnmpevokyiy", "ckwnfnoy", "gcwzaeyzrjsvgupjiy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gkzxxgypbxfuymxes", "ogapwpies", "udwmmmhendes", "gpjtwpgoeswegqs", "gqivjciltbmybudtdhdvs", "gses", "kpgippzes", "lmmbpbyexcpzulizes", "mshes", "qpspfqoxlkays", "fpymxies", "geshes", "cjnvjntvsshes", "jndzfgcnles", "qies", "eckdasomrkzsxwmprms", "dnmjosans", "ulujzakkeadpirlyfuys", "qfies", "wwiugalolabkfeys", "nktmriohyquliches", "nlkgcxvoyxrzuys", "npigcepzeruys", "kllrxvitfyxndeys", "gzmnxgfhiys", "ns", "dvbgirdcotiuays", "lijdkvzsgnvwagzbyzes", "qhays", "ms", "uiuses", "ibays", "vgreofeatwzshes", "ldgfhefddkxzkiuys", "meiejprhdpsoys", "qrxpzawetoaays", "bnpskrikhcmlpxhiys", "zqeplijus", "uwtfczvdqqwsdeoys", "kuknxkses", "ynxmfamyzzbkukjzksuys", "ungtgruneys", "vyopumiqvddspqooys", "wxfnmpevokyiys", "ckwnfnoys", "gcwzaeyzrjsvgupjiys"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> nouns = {"qfkaiuy", "plfgmlqjcfgsfiy", "ykcuajcgztthbfsy", "ixzsffns", "ufwotgvtzch", "cynlntpbawasty", "pubqwihejhay", "jwyzchzpsh", "q", "ymxp", "agbzidhhcwxccvhjxj", "ohbiy", "dqrwbpcriqk", "xdlhqujrbenvhgttxooy", "ytngrvjxfvvnsbp", "blpaonflnmdgwaqsh", "myjerrxx", "qloerhhqzzch", "icmwocesh", "uday", "qhvqedsxay", "wotjjqdoy", "rhwueaeycercvckfxiy", "dampzignx", "huysihqaflxrqrch", "xeroxfybbabzssh", "oiiy", "lqrlikooz", "mwxwceafunlvnvlrp", "seaamjzz", "xowtjigidprrviiy", "tpjzqidcxdzzvcczs", "lqjsuzocjfuch", "cedayfdkey", "fhkydbhszgodyos", "tch", "aeylyetcruy", "vey", "qxlaydgnpwomwkauy", "irugbxpm", "zlfcey", "doyvfwzjuy", "mx", "mpywvy", "nwftayxhbgncpjqd", "hxssuttnh", "vnytihkrz", "nwjkqsehtmaqgmjw"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qfkaiuys", "plfgmlqjcfgsfiys", "ykcuajcgztthbfsies", "ixzsffnses", "ufwotgvtzches", "cynlntpbawasties", "pubqwihejhays", "jwyzchzpshes", "qs", "ymxps", "agbzidhhcwxccvhjxjs", "ohbiys", "dqrwbpcriqks", "xdlhqujrbenvhgttxooys", "ytngrvjxfvvnsbps", "blpaonflnmdgwaqshes", "myjerrxxes", "qloerhhqzzches", "icmwoceshes", "udays", "qhvqedsxays", "wotjjqdoys", "rhwueaeycercvckfxiys", "dampzignxes", "huysihqaflxrqrches", "xeroxfybbabzsshes", "oiiys", "lqrlikoozes", "mwxwceafunlvnvlrps", "seaamjzzes", "xowtjigidprrviiys", "tpjzqidcxdzzvcczses", "lqjsuzocjfuches", "cedayfdkeys", "fhkydbhszgodyoses", "tches", "aeylyetcruys", "veys", "qxlaydgnpwomwkauys", "irugbxpms", "zlfceys", "doyvfwzjuys", "mxes", "mpywvies", "nwftayxhbgncpjqds", "hxssuttnhs", "vnytihkrzes", "nwjkqsehtmaqgmjws"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> nouns = {"lvlohcgozhilpparh", "ptuiclzrqybghkesh", "bxwdqxzjo", "pyojuy", "htmqby", "ratmuvshbsh", "qwwmcctnch", "hjezyyutbykoay", "adnyhgkjfulqmcahruy", "yagtix", "byeoezcqrljqoyfuquy", "bzfjhtijyuovwcowm", "dvqhulanie", "zmxsgzsch", "wgyey", "srwyfygpnookzicxkbb", "llmfhshsoqecmoyaay", "zgefldimnsh", "vmryvvnkiy", "jkwoxyqkvlacx", "wzycknay", "taxeqyyroutghz", "igvvjdzzey", "ejhtnsowrrxt", "uhksh", "gqknczgngsebdfcfx", "grwlhvqkixjxlsz", "cyghqgewaxyex", "cdlwirsaqanahy", "eiynxyjymoy", "asoneisaekpnjlux", "xch", "ywhx", "mcyz", "ekyferfxmycceyukbtx", "atzgdglsxmqdkhlcgcoy", "bzy", "sbcddeiy", "csshmmdysijuhbhljy", "ioy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lvlohcgozhilpparhs", "ptuiclzrqybghkeshes", "bxwdqxzjos", "pyojuys", "htmqbies", "ratmuvshbshes", "qwwmcctnches", "hjezyyutbykoays", "adnyhgkjfulqmcahruys", "yagtixes", "byeoezcqrljqoyfuquys", "bzfjhtijyuovwcowms", "dvqhulanies", "zmxsgzsches", "wgyeys", "srwyfygpnookzicxkbbs", "llmfhshsoqecmoyaays", "zgefldimnshes", "vmryvvnkiys", "jkwoxyqkvlacxes", "wzycknays", "taxeqyyroutghzes", "igvvjdzzeys", "ejhtnsowrrxts", "uhkshes", "gqknczgngsebdfcfxes", "grwlhvqkixjxlszes", "cyghqgewaxyexes", "cdlwirsaqanahies", "eiynxyjymoys", "asoneisaekpnjluxes", "xches", "ywhxes", "mcyzes", "ekyferfxmycceyukbtxes", "atzgdglsxmqdkhlcgcoys", "bzies", "sbcddeiys", "csshmmdysijuhbhljies", "ioys"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> nouns = {"zecbvlsdfkjjwocbsv", "ndnflwhokjvdtch", "xmungaiqsfyvtsmxnsh", "wdkcbllsavgcuz", "nsmxyghodesemx", "otvvwjhshjay", "jelycsywsmudixjmrrz", "jz", "afyxtcy", "iqkapcwbmip", "ddpwiofrgrmadx", "tqrrpowejzwyvwjwz", "xzdncgybplyuy", "hgiafulz", "mspkwtvnwbmskch", "fhbuygpvqqjngrlakcey", "ggmfspnijwbvkpoy", "udwlgiy", "wjpblcgfrsyxey", "mbypmxeuay", "ohioswdfzyzzecsnfwm", "ogpirjjvfcewyxpay", "uoucejqebv", "rrjjvjnceihtzktoqba", "trhiiydbwptbwag", "naqodwz", "nbucaniwfhtilgeay", "mrhhhtzblygivbvvioy", "d", "ujjrtuds", "qhkroiy", "xya", "gukzigtbus", "sqgvy", "fecbfdmdtzlfscsyx", "jrlrx", "axrhjkegiy", "jzkeqrtxmmgezsh", "uflkbmcibyhk", "rwzhgl", "rfwdeuducs", "wxcawqtlyhavey", "fqnidnuy", "vccvvlvdfehcdtzhey", "xgskdghrjpvzx", "wtjgbazs", "ajwi", "wnsarbdgppuy", "snsnfvoay", "ahedmkzljxwmrqsxdz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zecbvlsdfkjjwocbsvs", "ndnflwhokjvdtches", "xmungaiqsfyvtsmxnshes", "wdkcbllsavgcuzes", "nsmxyghodesemxes", "otvvwjhshjays", "jelycsywsmudixjmrrzes", "jzes", "afyxtcies", "iqkapcwbmips", "ddpwiofrgrmadxes", "tqrrpowejzwyvwjwzes", "xzdncgybplyuys", "hgiafulzes", "mspkwtvnwbmskches", "fhbuygpvqqjngrlakceys", "ggmfspnijwbvkpoys", "udwlgiys", "wjpblcgfrsyxeys", "mbypmxeuays", "ohioswdfzyzzecsnfwms", "ogpirjjvfcewyxpays", "uoucejqebvs", "rrjjvjnceihtzktoqbas", "trhiiydbwptbwags", "naqodwzes", "nbucaniwfhtilgeays", "mrhhhtzblygivbvvioys", "ds", "ujjrtudses", "qhkroiys", "xyas", "gukzigtbuses", "sqgvies", "fecbfdmdtzlfscsyxes", "jrlrxes", "axrhjkegiys", "jzkeqrtxmmgezshes", "uflkbmcibyhks", "rwzhgls", "rfwdeuducses", "wxcawqtlyhaveys", "fqnidnuys", "vccvvlvdfehcdtzheys", "xgskdghrjpvzxes", "wtjgbazses", "ajwis", "wnsarbdgppuys", "snsnfvoays", "ahedmkzljxwmrqsxdzes"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> nouns = {"ii", "ohxneumnlnkssnypej", "zdxxroichhzlgynldmch", "difvz", "tcumzpxaynusjdooihx", "ismpszqnewkmyxycusey", "dsnhfemfhiiqqjpwskch", "siqxstyilob", "kz", "uasowglxwtewaoy", "wxzdmtjheay", "ngbhdpy", "mjuy", "qtdlaioy", "yzfia", "arey", "i", "utey", "japuwfqey", "qpjosovlsflmeddsh", "resqnzwljvac", "elreilyby", "rzey", "zrjbdygkefdjhjz", "bezgqwurpjctoy", "ghxvziy", "jrbx", "fdzmmplhzhyhzygmju", "mfivuy", "eswgzstsjtvdlmsh", "zyjnkyrhalqhsz", "upvsdykcy", "xedaonxcaubdnjmks", "fwqunljpozjjibtfavey", "rdyay", "w", "bdhjqesoepssmta", "kgcathomnxyiigpfz", "fyhrsvzlvvxlwgwuhiy", "ok", "awamdckkwpkyrjy", "sfrjrcqigjouy", "wwtwirlxyaqjaktypey", "oay", "sngnsxdxlwiey", "uuyjhsiy", "oarlioolnereky", "ojysxnkffrfjc"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"iis", "ohxneumnlnkssnypejs", "zdxxroichhzlgynldmches", "difvzes", "tcumzpxaynusjdooihxes", "ismpszqnewkmyxycuseys", "dsnhfemfhiiqqjpwskches", "siqxstyilobs", "kzes", "uasowglxwtewaoys", "wxzdmtjheays", "ngbhdpies", "mjuys", "qtdlaioys", "yzfias", "areys", "is", "uteys", "japuwfqeys", "qpjosovlsflmeddshes", "resqnzwljvacs", "elreilybies", "rzeys", "zrjbdygkefdjhjzes", "bezgqwurpjctoys", "ghxvziys", "jrbxes", "fdzmmplhzhyhzygmjus", "mfivuys", "eswgzstsjtvdlmshes", "zyjnkyrhalqhszes", "upvsdykcies", "xedaonxcaubdnjmkses", "fwqunljpozjjibtfaveys", "rdyays", "ws", "bdhjqesoepssmtas", "kgcathomnxyiigpfzes", "fyhrsvzlvvxlwgwuhiys", "oks", "awamdckkwpkyrjies", "sfrjrcqigjouys", "wwtwirlxyaqjaktypeys", "oays", "sngnsxdxlwieys", "uuyjhsiys", "oarlioolnerekies", "ojysxnkffrfjcs"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> nouns = {"lhlymessh", "amhubzzylxyjegysch", "llxyrhqxxitbygjoy", "ftvfkmvgsxqgdvjcyz", "zgornkxaqhiflejukc", "bcjlzksh", "cvfhkagm", "wadodfdly", "zjyhjnqtpphvpefsazdf", "czkzczay", "vkbouvruuamyjuoesz", "alocwxyruojo", "ghibxqzqexpiy", "rwncrnyxfddynmneqxy", "dcwkuy", "fqvejnvggnxiy", "gbbxwirifxxtntgyis", "wsh", "xcvwtlhvibgy", "soy", "crddaubzverlixks", "foch", "xs", "leukthash", "phch", "tdujuy", "eaibivnissjsxiy", "mxrsgxqaudxhxohynbhs", "dburmymmuazzkooeey", "aklkhvuhigduutwiy", "r", "ayvamttnzuatmwkt", "lzsifhbay", "jwnmxaseaczaaquy", "tykry", "groxkinumgn", "laggetlobkxarcgigwlx", "hyjtxnkftsijy", "fpwzpbsduvfnumhich", "sqfzeyqehbakzx", "irqvyfkwfmquaoyti"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lhlymesshes", "amhubzzylxyjegysches", "llxyrhqxxitbygjoys", "ftvfkmvgsxqgdvjcyzes", "zgornkxaqhiflejukcs", "bcjlzkshes", "cvfhkagms", "wadodfdlies", "zjyhjnqtpphvpefsazdfs", "czkzczays", "vkbouvruuamyjuoeszes", "alocwxyruojos", "ghibxqzqexpiys", "rwncrnyxfddynmneqxies", "dcwkuys", "fqvejnvggnxiys", "gbbxwirifxxtntgyises", "wshes", "xcvwtlhvibgies", "soys", "crddaubzverlixkses", "foches", "xses", "leukthashes", "phches", "tdujuys", "eaibivnissjsxiys", "mxrsgxqaudxhxohynbhses", "dburmymmuazzkooeeys", "aklkhvuhigduutwiys", "rs", "ayvamttnzuatmwkts", "lzsifhbays", "jwnmxaseaczaaquys", "tykries", "groxkinumgns", "laggetlobkxarcgigwlxes", "hyjtxnkftsijies", "fpwzpbsduvfnumhiches", "sqfzeyqehbakzxes", "irqvyfkwfmquaoytis"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> nouns = {"xxz", "nbxflrgvseey", "uzwispdcpxkcpgcr", "kvmpox", "ujzjmjrxwuwuqrx", "cnuy", "uqtnijcvoudlcpgciy", "tfdevigszctcthsgdiy", "rqxcthouy", "wbimqepnnxjwcol", "meznfzknpurqiy", "pruy", "cgacgy", "py", "nncaucz", "jpyf", "rppwlxpkxpyush", "qvptnibkpnhkccolsiy", "jiaeztnrkjhwhfmafssh", "yaepbxkuy", "ryxzkhxkfcyvsdmtoy", "borkazjqbudttfmklli", "fbpwcxxhpcidmewiv", "worliay", "vmdeka", "bplechqsdleynxnxfds", "udzpqoy", "ctmgaynzdy", "rbhqhloiy", "lzjjyajvbuuaopphbz", "ftuzicszgxqpbuy", "ifxfrpyqzyjz", "pmevcpfldvdrvzs", "wjiqojaaekx", "rxdvsxvtqtkyfbeddr", "pyyqisbhptftunk", "ktwweehyfikch", "nuzsxncatdyzdech", "jvfiirqdpsnktnz", "lzxdqqqfjxucpixz"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxzes", "nbxflrgvseeys", "uzwispdcpxkcpgcrs", "kvmpoxes", "ujzjmjrxwuwuqrxes", "cnuys", "uqtnijcvoudlcpgciys", "tfdevigszctcthsgdiys", "rqxcthouys", "wbimqepnnxjwcols", "meznfzknpurqiys", "pruys", "cgacgies", "pies", "nncauczes", "jpyfs", "rppwlxpkxpyushes", "qvptnibkpnhkccolsiys", "jiaeztnrkjhwhfmafsshes", "yaepbxkuys", "ryxzkhxkfcyvsdmtoys", "borkazjqbudttfmkllis", "fbpwcxxhpcidmewivs", "worliays", "vmdekas", "bplechqsdleynxnxfdses", "udzpqoys", "ctmgaynzdies", "rbhqhloiys", "lzjjyajvbuuaopphbzes", "ftuzicszgxqpbuys", "ifxfrpyqzyjzes", "pmevcpfldvdrvzses", "wjiqojaaekxes", "rxdvsxvtqtkyfbeddrs", "pyyqisbhptftunks", "ktwweehyfikches", "nuzsxncatdyzdeches", "jvfiirqdpsnktnzes", "lzxdqqqfjxucpixzes"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> nouns = {"h"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hs"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> nouns = {"tray", "key", "enemy", "baby"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"trays", "keys", "enemies", "babies"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> nouns = {"box", "chursh", "elephant", "stereo"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"boxes", "churshes", "elephants", "stereos"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> nouns = {"ah"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ahs"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> nouns = {"lh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lhs"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> nouns = {"box", "church", "elephant", "stereo", "chursh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"boxes", "churches", "elephants", "stereos", "churshes"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> nouns = {"y"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ies"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> nouns = {"s", "z", "x", "d", "y", "g"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ses", "zes", "xes", "ds", "ies", "gs"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> nouns = {"s", "z", "x", "y", "g", "h", "h"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ses", "zes", "xes", "ies", "gs", "hs", "hs"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> nouns = {"y", "ash"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ies", "ashes"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> nouns = {"key", "keo", "eyo"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"keys", "keos", "eyos"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> nouns = {"a", "s", "oy", "y", "yy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"as", "ses", "oys", "ies", "yies"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> nouns = {"h", "y", "hhhh", "yy", "hello", "dfssdfsdf"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hs", "ies", "hhhhs", "yies", "hellos", "dfssdfsdfs"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> nouns = {"z"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zes"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> nouns = {"y", "yy", "y", "y", "y", "yrwrwy", "yyyyyyyyyyyyy", "bdsfhgfyjhf", "gghfie"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ies", "yies", "ies", "ies", "ies", "yrwrwies", "yyyyyyyyyyyyies", "bdsfhgfyjhfs", "gghfies"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> nouns = {"abchb"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abchbs"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> nouns = {"h", "y"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hs", "ies"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> nouns = {"h", "church", "elephant", "stereo"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hs", "churches", "elephants", "stereos"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> nouns = {"b"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bs"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> nouns = {"bah"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bahs"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> nouns = {"yy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"yies"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> nouns = {"h", "y", "hh", "yy"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hs", "ies", "hhs", "yies"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> nouns = {"sh"};
    NounReform* pObj = new NounReform();
    clock_t start = clock();
    vector<string> result = pObj->makePlural(nouns);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"shes"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=283329&rd=9823&pm=6375
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
 
class NounReform {
public:
  vector <string> makePlural(vector <string>);
};
 
vector <string> NounReform::makePlural(vector <string> nouns) {
  vector<string> r;
  for (int i=0;i<nouns.size();i++)
  {
    string s = nouns[i];
    int ln = s.length();
    if (s[ln-1]=='s' ||
    s[ln-1]=='z' ||
    s[ln-1]=='x' ||
    (s[ln-2]=='c' && s[ln-1]=='h') ||
    (s[ln-2]=='s' && s[ln-1]=='h'))
    {
      s = s + "es";
      r.push_back(s);
      continue;
    }
    if (
    (s[ln-2]=='a' && s[ln-1]=='y') ||
    (s[ln-2]=='e' && s[ln-1]=='y') ||
    (s[ln-2]=='i' && s[ln-1]=='y') ||  
    (s[ln-2]=='o' && s[ln-1]=='y') ||  
    (s[ln-2]=='u' && s[ln-1]=='y') )
    {
      s = s + "s";
      r.push_back(s);
      continue;
    }
    if (s[ln-1]=='y')
    {
      s[ln-1] = 'i';
      s = s + "es";
      r.push_back(s);
      continue;
    }
      s = s + "s";
      r.push_back(s);
  }
  return r;
}

********************************************************************************
*******************************************************************************/