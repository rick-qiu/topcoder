/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2432
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

class MnemonicMemory {
public:
    string getPhrase(string number, vector<string> dictionary);
};

string MnemonicMemory::getPhrase(string number, vector<string> dictionary) {
    string ret;
    return ret;
}


int test0() {
    string number = "25735";
    vector<string> dictionary = {"is", "there", "anybody", "out", "there"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "is there anybody out there";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string number = "31415926";
    vector<string> dictionary = {"may", "i", "have", "a", "large", "container", "of", "coffee"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "may a have i large container of coffee";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string number = "1212";
    vector<string> dictionary = {"a", "aa", "a", "aa"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a aa a aa";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string number = "11111111122";
    vector<string> dictionary = {"a", "b", "d", "c", "a", "e", "f", "z", "zz", "za", "az", "e"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a a b c d e e f z az za";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string number = "2222";
    vector<string> dictionary = {"ab", "cd", "ef", "a", "b", "ab"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "ab ab cd ef";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string number = "12345678911234567892123456789312345678941234567895";
    vector<string> dictionary = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "a", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaa"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a aa aaa aaaa aaaaa aaaaaa aaaaaaa aaaaaaaa aaaaaaaaa a a aa aaa aaaa aaaaa aaaaaa aaaaaaa aaaaaaaa aaaaaaaaa aa a aa aaa aaaa aaaaa aaaaaa aaaaaaa aaaaaaaa aaaaaaaaa aaa a aa aaa aaaa aaaaa aaaaaa aaaaaaa aaaaaaaa aaaaaaaaa aaaa a aa aaa aaaa aaaaa aaaaaa aaaaaaa aaaaaaaa aaaaaaaaa aaaaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string number = "99999999999999999999999999999999999999999999999999";
    vector<string> dictionary = {"wghaixvom", "twemxdmxy", "ktqoijmmz", "fctbewbls", "wuvdsojym", "pawdqdzxr", "zztxiodtc", "hmtbcduag", "prtnnexss", "cwauijtzd", "zxhbfszws", "epmrwoafd", "hjmweozwo", "oedwqckey", "zeozzkbeq", "rgokncyqh", "hmxuzktpu", "xusrtmtrd", "ziuespdhr", "ztajmsoml", "ujswxqfyz", "nowwalnin", "kvyahouzn", "xlmdfaxpi", "euwofnvcx", "tsecghsmr", "bvxskayln", "bnpvnecin", "mkbkwdeid", "qvqkvdekj", "kkgtlqqvq", "fzugdsxyv", "sccnggvru", "tarpbxnrj", "okwgpunje", "mpjqoezfn", "nlxmedndu", "cbyyiodja", "hwmsxkmrs", "gweesqydf", "qqntwlfzj", "oqeesvpif", "kouosulzw", "nqpndjlnr", "kajswsnoq", "zijckmbmh", "ynqjzhtqh", "pvedsimbk", "npkfusuqu", "vaormfpog"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "bnpvnecin bvxskayln cbyyiodja cwauijtzd epmrwoafd euwofnvcx fctbewbls fzugdsxyv gweesqydf hjmweozwo hmtbcduag hmxuzktpu hwmsxkmrs kajswsnoq kkgtlqqvq kouosulzw ktqoijmmz kvyahouzn mkbkwdeid mpjqoezfn nlxmedndu nowwalnin npkfusuqu nqpndjlnr oedwqckey okwgpunje oqeesvpif pawdqdzxr prtnnexss pvedsimbk qqntwlfzj qvqkvdekj rgokncyqh sccnggvru tarpbxnrj tsecghsmr twemxdmxy ujswxqfyz vaormfpog wghaixvom wuvdsojym xlmdfaxpi xusrtmtrd ynqjzhtqh zeozzkbeq zijckmbmh ziuespdhr ztajmsoml zxhbfszws zztxiodtc";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string number = "241";
    vector<string> dictionary = {"acgyixokr", "bhpogdpd", "bqxmjqvmw", "bsongj", "btwlxfxee", "bvfwhu", "c", "dg", "dqjb", "exat", "eyfecimt", "faqn", "fwrqfoi", "gbj", "gf", "gflnp", "giw", "gpt", "ichmwsl", "ixrlapul", "jij", "kly", "kvzblhgmb", "layhi", "msrzfow", "nbdjqo", "nfhcufwlo", "nz", "q", "ulfvwwtl", "vdwjerd", "vilzigsf", "xuqxncam", "yyhp", "zgeyow"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "dg dqjb c";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string number = "797886";
    vector<string> dictionary = {"aayu", "bti", "cjptga", "cpxk", "d", "dctjgpyf", "ddyhjpy", "diys", "dnnuz", "f", "fagnumhg", "gskdtqw", "hnkkcpm", "irzfj", "ix", "jbxou", "jnxg", "jqtno", "khnsmfhuk", "mhhmbmi", "nnzw", "nql", "nqssjhwrx", "nu", "o", "oeczwv", "pfsyucvr", "qegcct", "qwug", "rj", "rtejuuh", "seliatd", "sn", "socoli", "sw", "tsl", "tt", "vyujlva", "w", "wdzf", "wyfz", "x", "yapurfd", "yxipekjq", "z", "zsqjmuqsc", "zw", "zxmtlcgvz"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "ddyhjpy khnsmfhuk gskdtqw dctjgpyf fagnumhg cjptga";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string number = "74";
    vector<string> dictionary = {"al", "amoeahnzi", "bbiyxxkun", "bdx", "cfsl", "dtclt", "ezdjqe", "gkwiku", "gmlypsvbt", "jcwl", "jlxpm", "lchxbgv", "lvlmckfib", "m", "myrgkzepg", "mzx", "nhexydoku", "oawt", "ogquz", "otktaf", "ptumjn", "pusmkd", "rjgwvdxn", "rjllkw", "tbbm", "uf", "vxqdjj", "xnzmyi", "yvwd", "z", "zayiqony"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "lchxbgv cfsl";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string number = "3965917";
    vector<string> dictionary = {"adbqifbdn", "aeq", "bpabulm", "ckfjpayy", "coe", "cxcj", "dnfikbpy", "eltqyehv", "fouscfs", "fugyllmn", "hgbqakdtb", "hxjo", "i", "icxexnsb", "jbmr", "jiuru", "kj", "kkh", "menfhr", "micai", "midvhynwg", "mrutwvo", "nq", "ptnqmk", "qigbf", "t", "u", "v", "vclv", "wzjf", "x", "xznha", "zeyyb", "zz"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "aeq adbqifbdn menfhr jiuru hgbqakdtb i bpabulm";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string number = "77748562";
    vector<string> dictionary = {"acjdj", "awplakvjt", "bha", "cg", "cmkwzoe", "cpxhze", "ctc", "dfsmqyz", "dtunfvk", "eh", "fvyorzl", "g", "gqxigucj", "hdblqqhm", "hrstmbegd", "ifv", "ij", "l", "lgbkfqauj", "lzel", "mzuyjblkb", "nbpju", "nk", "pgt", "q", "qiyzueum", "qmdrpq", "rksvbhzk", "rndt", "rralpvncj", "ryxap", "snaxckjz", "ssgambj", "ta", "tsuhzfd", "tufszse", "vx", "wb", "womak", "ys", "zlymvdf", "zwplsttv"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "cmkwzoe dfsmqyz dtunfvk lzel gqxigucj acjdj cpxhze cg";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string number = "39825";
    vector<string> dictionary = {"ayffzzdws", "bpv", "bttn", "by", "c", "clxuwbh", "dis", "dqelavy", "ecw", "fbeeiy", "fkuaf", "g", "g", "gof", "gwjjyvj", "hflvznzs", "hodvais", "iftlt", "isacbgoi", "jsaywa", "jvqojr", "jxkbpr", "k", "ktzxo", "lqhddibbe", "muoqu", "ng", "nwijc", "o", "oitoszahx", "osl", "qtx", "r", "repnmoi", "rpmrvh", "rv", "s", "sawns", "shjsnq", "solqtcro", "tedwrc", "ufzjjyo", "utflbt", "whexmb", "whqebyipc", "xhi", "yayjtkaj", "zspzy"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "bpv ayffzzdws hflvznzs by fkuaf";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string number = "634128984";
    vector<string> dictionary = {"a", "ahm", "bcf", "bedcivot", "buamu", "buurl", "cvmquxfnk", "dd", "dyablrq", "eutgipjd", "fftmbdmkw", "h", "ilg", "irj", "jn", "jqfdna", "ke", "lybwbu", "mmdlcu", "mskwxy", "nheilm", "nneuxgwwr", "no", "orxrxc", "pamizxxxo", "pjlvgf", "qkdnuk", "rapht", "rhfhgdc", "rlan", "twkbxttzn", "uakp", "uchwacwe", "uxxndwjq", "vjbz", "vmntukri", "xbq", "z", "zhiltyj"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "jqfdna ahm rlan a dd bedcivot cvmquxfnk eutgipjd uakp";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string number = "723624";
    vector<string> dictionary = {"ac", "acnhis", "ajbgm", "bnehwshl", "djdrtj", "djjnq", "elbd", "f", "fptu", "fzuaykjd", "gjglmp", "glkgdgxqc", "heygxyxo", "hgaymcgkw", "hlkk", "hryl", "imsu", "mqnfr", "mycutlxxs", "nd", "nqlktocqi", "nt", "oglzshv", "onjjrznpd", "oud", "phmvrd", "pwhrb", "pyzdjinnh", "sevk", "sfhiakzp", "sjkl", "skrnayaic", "sm", "sv", "syni", "twgj", "ulz", "uqwufvm", "vgg", "w", "wq", "wsqppnf", "xtewwoft", "yvvpxu", "yxjlhce"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "oglzshv ac oud acnhis nd elbd";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string number = "763";
    vector<string> dictionary = {"awyewmwx", "cwvmq", "dkdrqktca", "dsu", "fbxcu", "g", "gklcwsaj", "gr", "hghfu", "hs", "ith", "mbyjdzzo", "nmgtic", "oeigja", "okphk", "onk", "osd", "p", "pevwrrhrc", "ph", "pkcdyfygc", "pzssxzn", "qcjkza", "qg", "qgahyc", "qkbu", "qnrytngb", "qwxbupn", "r", "rgcf", "rtodo", "ru", "s", "satgg", "sfeu", "ssd", "u", "uagxavix", "ufirrb", "umsw", "us", "waeqxd", "ym", "ynidg", "z", "zmzktyu", "zs", "zsont"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "pzssxzn nmgtic dsu";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string number = "7724";
    vector<string> dictionary = {"b", "cutchf", "df", "dhlyp", "dlpnrqafj", "dsyx", "e", "ejstipu", "eov", "epkz", "feccunsrl", "gbqnvlot", "h", "hfaixzxyg", "hw", "iw", "kuplz", "l", "leg", "mnhv", "nkxaggo", "osxt", "phuuw", "r", "sdmagzx", "tcfarbl", "ubnjfuf", "ubxydmfcu", "ufbx", "uiaqkdg", "vratrbyxx", "vwgmpvs", "wrwkh", "wxwrxci", "xgpyxyit", "ydzwayf", "zcrlzxlcq", "zsg", "zzvh"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "ejstipu nkxaggo df dsyx";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string number = "795891675";
    vector<string> dictionary = {"bskycclkv", "ewbzvrhzn", "ftglwzrdd", "fvj", "gigsy", "golpjlk", "gsemklfw", "ise", "itofnkt", "k", "kb", "kzhmv", "lcugq", "mbxmrgf", "mnzhmpyl", "okpylhm", "poeimxj", "promhby", "puw", "qjh", "qtqvyt", "qwbjd", "rnkrxayr", "rxi", "slhugu", "swaeajbxv", "sxy", "uqeogtdr", "v", "w", "xhnkm", "xn", "xxiq", "y", "yiolkh", "ymamfxhq", "yngug", "ypbqdvi", "ywp", "z", "zwgl"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "golpjlk bskycclkv gigsy gsemklfw ewbzvrhzn k qtqvyt itofnkt kzhmv";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string number = "7119186822";
    vector<string> dictionary = {"atezjiro", "axwuzhddd", "b", "bdaqrane", "bdononxh", "bpfx", "cak", "cbrg", "cca", "d", "dryrdt", "elh", "fr", "fuyecjp", "fxlzomqc", "gqefnthke", "gqwpj", "gvnkvha", "gx", "kyf", "mn", "mpazth", "mshlceko", "nkymcebm", "obc", "q", "r", "svzv", "u", "ucftgu", "udjm", "v", "vtsdye", "xbhmw", "xzyuxhtks", "ycenndd", "ydi", "yq", "yslkrqsw", "z", "zjagr", "zmzce"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "fuyecjp b d axwuzhddd q atezjiro dryrdt bdaqrane fr gx";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string number = "64";
    vector<string> dictionary = {"bthedegty", "c", "dmyaeaczn", "e", "fdjjij", "felctuh", "fljqze", "fsjj", "gh", "hhmyea", "hwqbj", "iabjdc", "iae", "igguxc", "iumc", "iw", "j", "jg", "jsx", "ll", "m", "mekcpewd", "mnhxihvhh", "mr", "n", "njdomhkus", "obdsac", "pxl", "qsqtuwpw", "qyylho", "rfjj", "scoodu", "sektdepbf", "sn", "soq", "tbvxkatfh", "ucqfzpzbv", "uxrpb", "vvnlh", "zj", "zmvs", "zqkv"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "fdjjij fsjj";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string number = "962454";
    vector<string> dictionary = {"b", "bgcyu", "bqdvhqs", "cylacpoi", "d", "dbvnjsoa", "fw", "gcvn", "gds", "j", "lpavi", "mshfmj", "mtgrjvnm", "mvvbbtu", "nvve", "oul", "outipteyi", "ozxibnrj", "pnnlxhtx", "pqpfvsdu", "qjkh", "qqaa", "quqaxkmgo", "qyk", "r", "tcanue", "ti", "uiqixt", "w", "xuo", "y"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "outipteyi mshfmj fw gcvn bgcyu nvve";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string number = "95114253";
    vector<string> dictionary = {"aajrd", "alzfdgb", "asxafvo", "czmvfvei", "dttfbcyrx", "dzh", "e", "fhkyxecii", "gbiomyjmo", "gyogaux", "hiiycaee", "hvql", "iknhbks", "iyuuo", "j", "kcgkf", "kkvm", "lhv", "lmrt", "lvdna", "mfgaalbi", "mxxlqy", "nkr", "ob", "oqvzf", "scwajl", "semvddzl", "sltpr", "stvll", "tlrhj", "udioqt", "uhqas", "vfqf", "vz", "wes", "whawdllxc", "wl", "xnf", "yednmg", "ypxmxyomc", "yt", "yuvhya", "zhmhjlx", "zyiahf", "zzhjlgb"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "dttfbcyrx aajrd e j hvql ob iyuuo dzh";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string number = "5341767425";
    vector<string> dictionary = {"a", "arser", "beh", "biqyf", "c", "cxqigtfh", "drbbtdx", "e", "h", "h", "hpevn", "jpnbf", "kdm", "lhwlsppdm", "mhitgiihb", "mzq", "nsslcliwc", "okf", "qpiu", "qxraxk", "si", "txlugyxzl", "u", "uocixar", "vf", "vrn", "wqph", "xswtzcuot", "yovb", "zgdykchl"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "arser beh qpiu a drbbtdx qxraxk uocixar wqph si biqyf";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string number = "9319";
    vector<string> dictionary = {"aldbkx", "bbkgwbaps", "bkdkxhz", "btmkrq", "bysio", "ca", "ccdftda", "cnywsxrqo", "csbyzbhgt", "det", "e", "ebaxbkks", "ffk", "gcyznky", "gfhkjcl", "huuq", "jeecnmjv", "jockre", "jqzs", "jrvclmiz", "jwbirc", "jxaz", "jzvhfu", "k", "lk", "lmdngwep", "opdwz", "ospha", "pkcz", "pycetpt", "qw", "qy", "s", "tgypcm", "th", "tn", "tygzgjcgk", "ugwlmsv", "usffkf", "vyvh", "wf", "wibv", "wkgef", "wtybsrks", "wwtfrkh", "xllhzeuaq", "xqc", "yftzaqcsn", "yjs", "zgkcvd"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "bbkgwbaps det e cnywsxrqo";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string number = "19357";
    vector<string> dictionary = {"alvydkied", "apr", "atiinojtv", "bh", "cgdb", "ck", "cky", "cqj", "d", "ddq", "dzpbwt", "f", "flbopchtp", "ghlmvl", "gw", "h", "hbjft", "hnzubu", "igxwfgqwz", "is", "iz", "izv", "ldnkyzvt", "lfqiucvs", "msrab", "mzr", "nhtszm", "ovbuucwe", "pn", "tltcstmc", "tobevvg", "tvmnd", "upq", "uybml", "vnmcsycff", "vsk", "vwo", "wahnculv", "xprhdrcyt", "xw", "ylpvyta", "yucqa", "ywjsx", "zblqnvym", "zceha", "zzqms"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "d alvydkied apr hbjft tobevvg";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string number = "145196196";
    vector<string> dictionary = {"ashrdwbe", "atdeaxxvh", "bviyth", "c", "dkzg", "dteqln", "eznyku", "f", "fatuisss", "fobhbu", "g", "g", "gxdeaq", "hd", "hds", "hmgjpsp", "hox", "htbahakoy", "iaqhemmx", "ikcyddi", "jgxzpus", "kjwe", "krihzp", "lfurpkuzk", "o", "pc", "phlclbya", "pof", "qelefhwc", "qhigvsjlz", "qnctbh", "riz", "s", "sqwqmwtsg", "twsy", "udksklkzv", "uxbjwxo", "vj", "vzyzpnevf", "wrrnkwmu", "xfiskmn", "yqqbk", "yu", "yyexfqipt", "zgfglnx"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "c dkzg yqqbk f atdeaxxvh bviyth g htbahakoy dteqln";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string number = "2";
    vector<string> dictionary = {"alu", "axu", "bledrw", "cal", "cpivwlw", "dupmolpe", "e", "errfk", "eu", "evgs", "fmqaej", "fogiwngxl", "hebocis", "hlui", "hzzvrwfkg", "i", "if", "iza", "jkzyz", "jyxedls", "kpgcwx", "lae", "lr", "mkzq", "mriwbcsc", "ogeqrdaxm", "p", "qmmgregu", "rftjpv", "risfsryx", "sg", "sh", "svkpajelq", "vdwtvxy", "vga", "vrruvx", "wvbqi", "ye", "zte", "zwgzhp"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "eu";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string number = "227855";
    vector<string> dictionary = {"adgrshws", "aod", "axi", "bbzcarqwi", "cdmevczyo", "dbhtw", "dgksmt", "dnyr", "dwuo", "ecsyzdrzn", "etnjbf", "f", "faezdvvh", "ffdx", "fxgnr", "hxvd", "jwrp", "koc", "lscsqagr", "mh", "oxak", "plkxxb", "povrgypec", "q", "r", "rgqrgs", "san", "se", "tnkfmruez", "txek", "uo", "vmune", "votk", "wfzze", "wqchmsg", "wzeuryno", "wzezjfae", "xbk", "xozxaple", "xtq", "zaxftw", "zcaekjt"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "mh se wqchmsg adgrshws dbhtw fxgnr";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string number = "36";
    vector<string> dictionary = {"agj", "aqgs", "axcymtmb", "bluupf", "clv", "ejntm", "g", "gdwoeixtj", "gqdwfg", "iqmmbyczo", "istm", "jkinovx", "jm", "khttn", "kjhdrr", "knjdqvs", "lowtj", "mjt", "mvsiggts", "q", "qm", "rlcv", "ub", "uuzsz", "v", "xldvtf", "ybbf", "yfxg", "yqtiq", "ys", "yswk", "yvbnpbkfx", "zgzibj"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "agj bluupf";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string number = "2232";
    vector<string> dictionary = {"bdovtsp", "bfm", "ccvtaox", "chtzmtzk", "cybkew", "fk", "ghfzjey", "gop", "grvi", "gstx", "gwwj", "hxmjm", "id", "ijndneil", "kcovgmn", "kfhzdhntc", "kqhba", "lbp", "luryopvx", "ng", "nj", "nsy", "or", "pj", "pl", "q", "qaeklbso", "qco", "qfykdwoav", "qgvnw", "srxa", "t", "tyrorm", "u", "uo", "vavaotqvy", "wqszj", "wu", "xdlzxo", "xkm", "xxfavoc", "yrhaeerm", "zulherl"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "fk id bfm ng";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string number = "3774535";
    vector<string> dictionary = {"aeaqc", "ag", "bnoztamoe", "chq", "d", "del", "eeus", "hhwdq", "it", "jychjdj", "kj", "levowex", "lr", "lvnesrqmn", "mg", "nhwryx", "o", "pqclmxhzg", "qqvyewwyx", "ryx", "semcijig", "siaw", "t", "tzqog", "uhbcdjc", "ujp", "uqhbgh", "uwuna", "uxfskwxm", "va", "vdobifn", "vea", "vxz", "w", "wff", "wgfmzueq", "xc", "y", "yazzelkw", "ytilmnp", "zfnj"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "chq jychjdj levowex eeus aeaqc del hhwdq";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string number = "8698575";
    vector<string> dictionary = {"agfkp", "baqa", "cmegc", "cnv", "d", "edb", "gjl", "gjtp", "h", "hlwdxfhk", "hnrho", "jxoabs", "kcbzbjxd", "lbfyribcf", "lklfzyqj", "mwakgrddh", "n", "nnqy", "nnwblax", "nsnwrvy", "ogkfnktpu", "olpyirugh", "ophxbvcdh", "orarl", "orgutq", "oyoomo", "pgwreim", "phfal", "q", "qid", "qzscmdyku", "rqyecgd", "sj", "sszlr", "sznb", "szyporqp", "u", "u", "uft", "untmuhjku", "v", "vx", "walslndxk", "wvjcuhulo", "xfkfvyent", "y", "yohbx", "ypylw", "zjbeye", "zrqstszj"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "hlwdxfhk jxoabs lbfyribcf kcbzbjxd agfkp nnwblax cmegc";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string number = "5355";
    vector<string> dictionary = {"bi", "cc", "cjmvm", "d", "diauvgxzc", "dv", "dwn", "furbznj", "hiton", "i", "idohsph", "iobd", "jtvifqvz", "jv", "kjhsuyva", "krsdrdzqy", "lvhxml", "mefxe", "oqoc", "plv", "psp", "pv", "qa", "qazgv", "qp", "qpincgl", "qw", "sffqgto", "tf", "uoyvizoog", "vl", "wcvgdmx", "xngeinrvr", "xw", "z"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "cjmvm dwn hiton mefxe";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string number = "7738879";
    vector<string> dictionary = {"adgapjj", "ahxdh", "bc", "bwmzkv", "cn", "cwxvazydx", "dqmedk", "dxjyfn", "enlff", "fd", "fd", "ggdfna", "goestmix", "gu", "hcywkg", "hllpyu", "hqhf", "ic", "itq", "jrnn", "khihem", "l", "mts", "n", "njbzbqy", "oat", "osxmqrjd", "owooco", "p", "pqrsguhpi", "pztl", "rcrehciyl", "slklkro", "sm", "srgexdo", "t", "tesm", "tg", "uzeoitk", "vqbmoov", "vz", "w", "wmqq", "xc", "xnmilzbkk", "zc"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "adgapjj njbzbqy itq goestmix osxmqrjd slklkro cwxvazydx";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string number = "1138";
    vector<string> dictionary = {"a", "aksvfp", "e", "htv", "hxgpnyi", "i", "ij", "jqhmbbdx", "jy", "leujxiog", "no", "oc", "pwvztfz", "qdaaqnw", "qwfbst", "qyvlcymkg", "re", "rvltmy", "tyv", "uhuob", "uonqbqan", "valgiru", "vekbm", "vsuk", "vupiievk", "xatgeqszn", "y", "yqqdqk", "zoebefor", "zreb"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a e htv jqhmbbdx";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string number = "563317";
    vector<string> dictionary = {"b", "bhagmayeh", "blmcst", "cuwqtnq", "duvd", "edsc", "egiuhooi", "fd", "fh", "fxuwimcq", "ghxbhtn", "kwbxefh", "ldfkui", "lkw", "m", "muxmer", "nreun", "oe", "otbgobzqt", "oyol", "pqywekevq", "pyyfrg", "qtxi", "ty", "waj", "wbl", "wlfyavp", "wugfld", "yazxk", "zy"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "nreun blmcst lkw waj b cuwqtnq";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string number = "19545477";
    vector<string> dictionary = {"awty", "bbkkm", "blbv", "bqag", "dldq", "futwzzcb", "gfk", "hlslxo", "hzwaqyic", "iejrd", "ith", "ivdm", "jlam", "jpvsoxhew", "k", "kcbvk", "kdqgqg", "keavuc", "l", "lutstz", "lwtfjmx", "mwdaex", "ngks", "nu", "ofpwkng", "ojnn", "qlo", "rpqojdp", "sr", "tkml", "tpmb", "ui", "ul", "uokgxxtcm", "vcb", "vvkgeltxp", "vyqicyz", "waawot", "xbb", "y", "ypvm"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "k jpvsoxhew bbkkm awty iejrd blbv lwtfjmx ofpwkng";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string number = "1212";
    vector<string> dictionary = {"a", "aa", "a", "aa"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a aa a aa";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string number = "11111111122";
    vector<string> dictionary = {"a", "b", "d", "c", "a", "e", "f", "z", "zz", "za", "az", "e"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a a b c d e e f z az za";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string number = "25735";
    vector<string> dictionary = {"is", "there", "anybody", "out", "there"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "is there anybody out there";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string number = "31415926";
    vector<string> dictionary = {"may", "i", "have", "a", "large", "container", "of", "coffee"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "may a have i large container of coffee";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string number = "1111111111111111111111";
    vector<string> dictionary = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "a a a a a a a a a a a a a a a a a a a a a a";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string number = "5";
    vector<string> dictionary = {"aa", "bb", "cc", "dd", "ee", "fffff"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "fffff";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string number = "22";
    vector<string> dictionary = {"az", "za"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "az za";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string number = "13333333";
    vector<string> dictionary = {"aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "b"};
    MnemonicMemory* pObj = new MnemonicMemory();
    clock_t start = clock();
    string result = pObj->getPhrase(number, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "b aaa aaa aaa aaa aaa aaa aaa";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652753&rd=10766&pm=2432
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
 
#include <algorithm>
#include <utility>
#include <iostream>
#include <sstream>
 
#include <vector>
#include <string>
#include <map>
#include <set>
#include <deque>
 
using namespace std;
 
#define TRACE(x) x
#define PRINT(x...) TRACE(printf(x))
#define WATCH(x) TRACE(cout << #x" = " << x << endl)
 
#define INF 0x3f3f3f3f
 
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(), (c).rend()
 
#define MSET(c, v) memset((c), (v), sizeof(c))
 
////////////////////////////////////////////////////////////////////////////////////////////////////
 
class MnemonicMemory {
public:
  string getPhrase(string, vector <string>);
};
 
string join(vector<string> &v, string sep) {
  string s="";
  if (v.size() == 0) return "";
  s = v[0];
  for (int i=1; i < v.size(); i++) s += sep + v[i];
  return s;
}
 
string MnemonicMemory::getPhrase(string num, vector <string> dict) {
  sort( all(dict) );
  int vis[55];
  MSET(vis, 0);
  vector<string> ans;
  for (int i=0; num[i]; i++) {
    int x = num[i]-'0';
    for (int j=0; j < dict.size(); j++) {
      if (dict[j].size() == x) {
        if (!vis[j]) {
          vis[j] = 1;
          ans.push_back( dict[j] );
          break;
        }
      }
    }
  }
  return join(ans, " ");
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/