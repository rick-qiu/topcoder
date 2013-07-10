/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11315
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

class CubeStickers {
public:
    string isPossible(vector<string> sticker);
};

string CubeStickers::isPossible(vector<string> sticker) {
    string ret;
    return ret;
}


int test0() {
    vector<string> sticker = {"cyan", "magenta", "yellow", "purple", "black", "white", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> sticker = {"blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sticker = {"red", "yellow", "blue", "red", "yellow", "blue", "red", "yellow", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sticker = {"purple", "orange", "orange", "purple", "black", "orange", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sticker = {"white", "gray", "green", "blue", "yellow", "red", "target", "admin"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sticker = {"m", "o", "f", "m", "o", "f"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sticker = {"ragf", "znvbkdd", "kojr", "jeoyqvssf", "yrwhfijb", "xzlcgaeye"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sticker = {"unvo", "jfoikgw", "cbbhngfh", "vknk", "zwvsyjnis", "hxwxa", "gdg", "xygqdvo", "kleyavdiid", "ztdzqmv", "dcnqluzi", "nlhbbkwcrl", "fzzw", "gocxri", "gez", "vodqkiif"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sticker = {"ycxykb", "shwfwota", "wxqqgwumqc", "okyyztccqs", "okwecct", "lklzmxay", "bnn", "hmxj", "bfxfa", "vzrwki", "gdatkqibc", "aia", "ucppiytn", "tyaesg", "uuu", "oyvaie", "qzu", "qiyqowkw", "tdrsud", "chzbcplie", "fdrvpzgh", "aggbvnbi", "qooqhlbrl", "olmyk", "bvrsjrj", "nxcmdiq"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sticker = {"vyeifnv", "nbgrsl", "ozkc", "knu", "koih", "wuthqxjdcd", "ybftjdqr", "hgce", "turk", "ktgpi", "ugkhjae", "qlhrgsay", "vbb", "qmbjoyuyjb", "infgqk", "cnex", "wvwncciv", "tucmo", "lfpiou", "abmhzbeocs", "ryl", "rcaq", "qiyfajteco", "mfji", "jdmxqwuqg", "hegyfondo", "xbhxq", "ethokpyd", "ymzzlzxf", "ugpwigk", "zqhtyowj", "ckioofv", "hjwxts", "nmkffpfenj", "pkxcllak", "gxwtzmdmt"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sticker = {"zycaak", "sdtiaodswy", "baiqwwyv", "tcazrc", "uie", "fssasd", "czg", "pay", "tkbbdsde", "djsqs", "exw", "pqqqseby", "abjncmcf", "hkbaszah", "dojbvc", "ofhgdixrpu", "jahvsue", "amqv", "xvfxbjbxim", "wfktkfjef", "xbcm", "onnilkx", "vxiziw", "wnsj", "vil", "eainxinp", "fehmb", "rzteicnu", "vxhjsyt", "hoarz", "vieig", "vvnvqawii", "zjivwvol", "dzwobpbhqm", "uujhbpq", "jml", "lvfd", "ojhha", "vovbweni", "owuzgjppa", "dbrvkum", "zxoloe", "cfkjyulyk", "beziz", "ifsx", "yig", "kdxdd", "jiyq", "cgjcnzmuu", "qxcmreswwu"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sticker = {"eaglkte", "eaglkte", "osx", "rgftwyyg", "jqvzp", "hrkzwnl", "rukqdagoea"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sticker = {"szxees", "szxees", "szxees", "szxees", "szxees", "ira", "szxees", "szxees", "hoip", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "ezdomah", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "ilcwiiog", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "szxees", "uvbitlu", "szxees"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sticker = {"uvr", "behqtnoeeh", "nxosnl", "uvr", "earhhediok", "bsnqebfu", "behqtnoeeh", "vexwd"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sticker = {"toc", "gvh", "rljg", "gvh", "vzvjtxgjs", "yjyraiox", "poizzh", "tbu", "zpaqmihiyp", "jwtrlgi", "toc", "prhchj", "xtet", "bnkmbu", "htlvo", "zpaqmihiyp", "jwtrlgi", "yjyraiox", "jxvcdjb", "htlvo", "rljg", "prhchj", "poizzh", "xtet"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sticker = {"nxovc", "ttani", "gvelxxyy", "sbjlrugt", "rxacprkro", "xqrqj", "paxyxszabt", "celgxvmed", "ttani", "rvnmxv", "zswledsila", "zswledsila", "iuufrwbir", "rjk", "rjk", "hccyd", "fvmfrkka", "hccyd", "xoflxz", "xoflxz", "qkocsqi", "gqkjj", "rvnmxv", "jfg", "wwdvbpf", "gvelxxyy", "vfiqzznewk", "qyx", "tsivo", "taq", "fvmfrkka", "wwdvbpf", "sbjlrugt", "tsivo", "qkocsqi", "rxacprkro", "mmli", "taq", "ilyk", "gvkpji", "zgmfgr", "ilyk", "gqkjj", "nxovc", "paxyxszabt", "zgmfgr", "qyx", "xqrqj", "iuufrwbir", "celgxvmed"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sticker = {"auoxoaapap", "dpqiybjj", "dpqiybjj", "pyfivhreo", "dpqiybjj", "xhbbhwmlkh", "qwfgtux"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sticker = {"ajmnz", "wyelp", "ajmnz", "hwqdfybfp", "vguigg", "ajmnz", "hvb", "ajmnz", "hwqdfybfp", "hwqdfybfp", "ajmnz", "etwlvvslvd", "hwqdfybfp", "ajmnz", "hwqdfybfp"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sticker = {"qjc", "epu", "pgxpna", "wvbaduvi", "qjc", "wvbaduvi", "lprigh", "inmtnvmx", "pmujd", "wvbaduvi", "lprigh", "wvbaduvi", "lprigh", "lprigh", "lprigh", "wvbaduvi", "wvbaduvi", "wvbaduvi", "lprigh", "qjc", "lprigh", "qjc", "qjc"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sticker = {"lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "ujgwomo", "lmz", "lmz", "lmz", "lmz", "xrk", "lmz", "edsvlupg", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "hxu", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz", "lmz"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sticker = {"pzolpl", "ptwjaimu", "hwzvopbsq", "pzolpl", "hwzvopbsq", "occ", "aaoyia"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sticker = {"qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "okoutrorlm", "qmg", "qmg", "qmg", "qmg", "qmg", "ufrvrkhil", "rqvov", "okoutrorlm", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "khfhspbqmr", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg", "qmg"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sticker = {"mnjyaju", "tmxkpxdkv", "hlfbef", "cbecgrto", "hlfbef", "tmxkpxdkv", "lqjx", "cbecgrto"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sticker = {"tvspacfqif", "jlyxqpnj", "krgdc", "vefynlsahf", "vefynlsahf", "tvspacfqif", "jlyxqpnj", "krgdc", "vucswtu", "lhsqwij", "yvdcmur", "yxadsv", "llvku", "vucswtu", "jhpfssjvm", "jhpfssjvm", "bggb", "yxadsv", "yvdcmur", "lhsqwij"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sticker = {"yeidcfr", "rxgzjpsx", "zggxcnr", "yeidcfr", "lnytz", "bsgtdr", "xjr", "qib", "ltixjpjga", "zggxcnr", "gtafo", "jkpu", "xjr", "jkpu", "gtafo", "lnytz", "ado", "mpl", "lrghs", "ekgtwf", "mpl", "ado", "qib", "ltixjpjga", "jnfokpxti", "vghlkxzeei", "jnfokpxti", "lrghs", "rxgzjpsx", "bsgtdr", "wmmpst", "vghlkxzeei"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sticker = {"kszojpmw", "vfrhizgtf", "vfrhizgtf", "kszojpmw", "kszojpmw", "vfrhizgtf", "kszojpmw", "kszojpmw", "vfrhizgtf", "kszojpmw", "vfrhizgtf", "vfrhizgtf", "kszojpmw", "kszojpmw", "vfrhizgtf", "vfrhizgtf", "kszojpmw", "vfrhizgtf", "kszojpmw", "kszojpmw", "kszojpmw", "vfrhizgtf", "kszojpmw", "kszojpmw", "vfrhizgtf", "kszojpmw", "vfrhizgtf", "kszojpmw", "kszojpmw", "kszojpmw", "kszojpmw", "vfrhizgtf", "vfrhizgtf", "kszojpmw", "hmcg", "vfrhizgtf", "vfrhizgtf", "vfrhizgtf", "vfrhizgtf", "vfrhizgtf", "kszojpmw", "vfrhizgtf", "dirn", "kszojpmw", "kszojpmw", "kszojpmw", "kszojpmw", "vfrhizgtf", "vfrhizgtf", "vfrhizgtf"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sticker = {"lfupmrg", "keivcbazs", "lfupmrg", "keivcbazs", "lfupmrg", "lfupmrg", "lfupmrg", "keivcbazs", "ynvq", "lfupmrg", "keivcbazs", "keivcbazs", "lfupmrg", "lfupmrg", "lfupmrg", "keivcbazs", "keivcbazs", "lfupmrg", "keivcbazs", "viyq", "keivcbazs", "lfupmrg", "keivcbazs", "lfupmrg", "keivcbazs", "lfupmrg", "keivcbazs", "lfupmrg", "lfupmrg", "lfupmrg", "lfupmrg", "lfupmrg", "keivcbazs", "lfupmrg", "lfupmrg", "keivcbazs", "lfupmrg", "keivcbazs", "keivcbazs", "keivcbazs", "lfupmrg", "keivcbazs", "lfupmrg", "keivcbazs", "keivcbazs", "lfupmrg", "lfupmrg", "lfupmrg", "lfupmrg", "keivcbazs"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sticker = {"kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "dyfgsg", "kthqzqais", "kthqzqais", "kthqzqais", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "kthqzqais", "luicvp", "dyfgsg", "kthqzqais", "luicvp", "kthqzqais", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "dyfgsg", "kthqzqais", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "rqxp", "dyfgsg", "kthqzqais", "kthqzqais", "dyfgsg", "kthqzqais", "kthqzqais", "kthqzqais", "kthqzqais", "kthqzqais", "kthqzqais", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "kthqzqais", "dyfgsg", "kthqzqais"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sticker = {"qubfmky", "jbtjcdmg", "fvqscdqii", "oyrjdds", "swofpmmc", "qubfmky", "gizyebzhjj", "tnvpacttd", "xowgsygz", "iiuavviwyl", "gizyebzhjj", "cwfed", "vmshcofgu", "bzgyjzrhk", "swofpmmc", "cmfsmaopwq", "oyrjdds", "cdel", "xejfx", "ogqs", "csgohgjr", "cstvpguef", "gcugzvlcuk", "gcugzvlcuk", "ync", "ilqpyvzpv", "sbkxkn", "ics", "ics", "sbkxkn", "xejfx", "ync", "csgohgjr", "iiuavviwyl", "vmshcofgu", "ogqs", "xowgsygz", "bzgyjzrhk", "fvqscdqii", "xvgua", "tnvpacttd", "cwfed", "cdel", "cmfsmaopwq", "jbtjcdmg", "ixcfby", "xvgua", "ixcfby", "ilqpyvzpv", "cstvpguef"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sticker = {"kufaniokp", "kufaniokp", "kufaniokp", "lsjiy", "lsjiy", "lsjiy", "kufaniokp", "kufaniokp", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "kufaniokp", "lsjiy", "lsjiy", "lsjiy", "kufaniokp", "lsjiy", "lsjiy", "kufaniokp", "lsjiy", "lsjiy", "kufaniokp", "lsjiy", "kufaniokp", "kufaniokp", "lsjiy", "lsjiy", "kufaniokp", "kufaniokp", "lsjiy", "kufaniokp", "kufaniokp", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "lsjiy", "kufaniokp", "kufaniokp", "kufaniokp", "lsjiy", "kufaniokp", "lsjiy", "lsjiy", "lsjiy", "lsjiy"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sticker = {"bzl", "bzl", "bzl", "bzl", "bzl", "tva", "bzl", "bzl", "bzl", "tva", "bzl", "bzl", "bzl", "bzl", "tva", "bzl", "tva", "bzl", "bzl", "tva", "tva", "bzl", "bzl", "tva", "tva", "tva", "bzl", "bzl", "bzl", "bzl", "bzl", "tva", "tva", "bzl", "bzl", "bzl", "tva", "bzl", "bzl", "tva", "tva", "tva", "bzl", "bzl", "tva", "bzl", "tva", "tva", "bzl", "tva"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sticker = {"mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "qnnjijitas", "qnnjijitas", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "qnnjijitas", "qnnjijitas", "qnnjijitas", "qnnjijitas", "qnnjijitas", "qnnjijitas", "qnnjijitas", "mmrwxrsd", "mmrwxrsd", "qnnjijitas", "mmrwxrsd", "qnnjijitas", "qnnjijitas", "qnnjijitas"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sticker = {"lvbpl", "vosicodm", "lvbpl", "vosicodm", "vosicodm", "lvbpl", "lvbpl", "lvbpl", "lvbpl", "vosicodm", "vosicodm", "lvbpl", "lvbpl", "lvbpl", "lvbpl", "lvbpl", "vosicodm", "lvbpl", "lvbpl", "lvbpl", "lvbpl", "vosicodm", "vosicodm", "lvbpl", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "lvbpl", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "vosicodm", "lvbpl", "lvbpl", "vosicodm", "lvbpl", "lvbpl", "lvbpl", "lvbpl", "vosicodm"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sticker = {"ypdviherlr", "azwltuif", "ypdviherlr", "qqvktedvvc", "ypdviherlr", "jyrwtayla"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sticker = {"djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "lylrrbny", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "djpkko", "xiyhg", "hgigaipi"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> sticker = {"deeijcuso", "zzb", "deeijcuso", "deeijcuso", "okbqiloy", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "svtoeb", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso", "deeijcuso"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> sticker = {"vitkdxwdq", "lhazphrey", "afpsga", "afpsga", "afpsga", "afpsga"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> sticker = {"jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "fospppvgf", "jogroayjmr", "jogroayjmr", "jogroayjmr", "agkott", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr", "jogroayjmr"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> sticker = {"ajjiybgzm", "ishj", "ajjiybgzm", "ajjiybgzm", "ajjiybgzm", "ajjiybgzm"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> sticker = {"mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "ytmrnhikb", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu", "mkubmu"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> sticker = {"qbnka", "gjg", "qbnka", "ject", "gjg", "qbnka", "qbnka"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> sticker = {"izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "vte", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "izalfds", "pbhijyph", "vte", "izalfds"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> sticker = {"vdphg", "tad", "tad", "vdphg", "tad", "tad"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> sticker = {"ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv", "lvxjljh", "ciityv", "ciityv", "lvxjljh", "ciityv", "ciityv", "ciityv", "ciityv", "ciityv"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> sticker = {"smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "iwwfoxljz", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "smxxdjezqn", "iwwfoxljz", "smxxdjezqn"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> sticker = {"elujvjv", "vnx", "vnx", "elujvjv", "elujvjv", "elujvjv", "elujvjv", "vnx"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> sticker = {"rnmpth", "hyeruqwi", "rnmpth", "rnmpth", "hyeruqwi", "hyeruqwi", "rnmpth", "rnmpth", "rnmpth", "hyeruqwi", "hyeruqwi", "rnmpth", "rnmpth", "rnmpth", "hyeruqwi", "hyeruqwi", "rnmpth", "hyeruqwi", "hyeruqwi", "rnmpth", "hyeruqwi", "hyeruqwi", "hyeruqwi", "rnmpth", "rnmpth", "hyeruqwi", "rnmpth", "hyeruqwi", "hyeruqwi"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> sticker = {"ovkxphu", "uzo", "ovkxphu", "uzo", "ovkxphu", "uzo", "uzo", "uzo", "uzo", "ovkxphu", "ovkxphu", "ovkxphu", "uzo", "uzo", "ovkxphu", "uzo", "uzo", "uzo", "ovkxphu", "uzo", "ovkxphu", "ovkxphu", "ovkxphu", "ovkxphu", "uzo", "uzo", "uzo", "ovkxphu", "ovkxphu", "uzo", "uzo", "ovkxphu", "ovkxphu", "ovkxphu", "uzo", "ovkxphu", "uzo", "uzo", "ovkxphu", "ovkxphu", "uzo", "uzo", "ovkxphu", "uzo", "uzo", "uzo", "uzo", "ovkxphu", "ovkxphu", "ovkxphu"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> sticker = {"iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta", "iyfwwgdtta"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> sticker = {"rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqb", "rqqzsjshqa", "rqqzsjshqa"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> sticker = {"kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdb", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhda", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc", "kapfmrzhdc"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> sticker = {"jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpa", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpb", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpb", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc", "jdapguwgpc"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> sticker = {"rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpa", "rznzkckhpc", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpb", "rznzkckhpc", "rznzkckhpb", "rznzkckhpb", "rznzkckhpc", "rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpb", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpb", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc", "rznzkckhpc", "rznzkckhpc", "rznzkckhpb", "rznzkckhpc"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> sticker = {"bbmmultoxb", "bbmmultoxa", "bbmmultoxc", "bbmmultoxb", "bbmmultoxb", "bbmmultoxa", "bbmmultoxc", "bbmmultoxb", "bbmmultoxb", "bbmmultoxa", "bbmmultoxc", "bbmmultoxb", "bbmmultoxc", "bbmmultoxb", "bbmmultoxc", "bbmmultoxc", "bbmmultoxc", "bbmmultoxa", "bbmmultoxc", "bbmmultoxa", "bbmmultoxb", "bbmmultoxc", "bbmmultoxa", "bbmmultoxb", "bbmmultoxa", "bbmmultoxa", "bbmmultoxa", "bbmmultoxb", "bbmmultoxb", "bbmmultoxb", "bbmmultoxc", "bbmmultoxa", "bbmmultoxb", "bbmmultoxb", "bbmmultoxa", "bbmmultoxc", "bbmmultoxc", "bbmmultoxa", "bbmmultoxa", "bbmmultoxc", "bbmmultoxa", "bbmmultoxb", "bbmmultoxb", "bbmmultoxc", "bbmmultoxa", "bbmmultoxb", "bbmmultoxa", "bbmmultoxa", "bbmmultoxc", "bbmmultoxc"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> sticker = {"a", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> sticker = {"xxxxxxxxxc", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxa", "xxxxxxxxxb", "xxxxxxxxxb", "xxxxxxxxxa", "xxxxxxxxxa"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> sticker = {"cyan", "magenta", "yellow", "blue", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> sticker = {"a", "a", "b", "b", "c", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> sticker = {"q", "w", "e", "r", "q", "q"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> sticker = {"a", "a", "b", "c", "d", "e"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> sticker = {"red", "red", "red", "green", "blue", "yellow", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> sticker = {"purple", "orange", "orange", "purple", "black", "orange", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "ba", "ca", "da", "ea", "fa", "ga", "ha", "ia", "ja", "ka", "la", "ma", "na", "oa", "pa", "qa", "ra", "sa", "ta", "ua", "va", "wa", "xa"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> sticker = {"a", "a", "a", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> sticker = {"red", "red", "yellow", "yellow", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> sticker = {"red", "blue", "red", "red", "red", "blue", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> sticker = {"cyan", "magenta", "yellow", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> sticker = {"a", "b", "c", "b", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> sticker = {"a", "b", "c", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "a", "a", "q", "w", "e", "r", "t", "y"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "e"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> sticker = {"red", "red", "green", "green", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> sticker = {"a", "a", "a", "a", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> sticker = {"blue", "red", "green", "red", "red", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> sticker = {"r", "r", "r", "r", "b", "y", "g"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> sticker = {"a", "a", "a", "a", "b", "b", "b", "b", "c", "c", "c", "c", "d", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> sticker = {"a", "b", "c", "c", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> sticker = {"r", "r", "g", "g", "b", "y"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> sticker = {"blue", "red", "yellow", "blue", "red", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> sticker = {"a", "a", "a", "b", "c", "d", "a", "a", "a", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> sticker = {"black", "black", "black", "black", "black", "black", "white", "white", "white", "white", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> sticker = {"a", "a", "b", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> sticker = {"j", "j", "b", "h", "f", "f", "k", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> sticker = {"r", "g", "b", "b", "b", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> sticker = {"a", "b", "c", "d", "a", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> sticker = {"red", "red", "red", "blue", "green", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> sticker = {"r", "g", "b", "y", "y", "y"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> sticker = {"red", "red", "blue", "blue", "green", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> sticker = {"red", "red", "yellow", "yellow", "blue", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> sticker = {"a", "b", "b", "c", "c", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> sticker = {"p", "p", "p", "q", "q", "r"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> sticker = {"red", "yellow", "blue", "red", "yellow", "blue", "red", "yellow", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> sticker = {"a", "a", "b", "c", "b", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> sticker = {"b", "b", "b", "b", "b", "b", "b", "b", "b", "a", "c", "g", "h", "j", "k", "l", "o"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> sticker = {"b", "b", "b", "a", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> sticker = {"blue", "blue", "blue", "black", "white", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> sticker = {"x", "x", "y", "y", "z", "z"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> sticker = {"a", "b", "c", "d", "a", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> sticker = {"a", "b", "c", "a", "b", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> sticker = {"y", "y", "s", "s", "z", "t"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> sticker = {"cyan", "cyan", "cyan", "yellow", "yellow", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> sticker = {"red", "green", "green", "green", "yellow", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> sticker = {"r", "r", "r", "r", "r", "r", "r", "r", "r", "r", "r", "r", "r"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> sticker = {"green", "green", "white", "white", "black", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> sticker = {"red", "red", "green", "green", "blue", "blue", "white"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> sticker = {"a", "a", "b", "c", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> sticker = {"b", "b", "b", "c", "c", "c", "a", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> sticker = {"a", "a", "a", "b", "b", "b", "c", "c", "c", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> sticker = {"r", "g", "b", "bl", "bl", "bl"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> sticker = {"red", "red", "yellow", "black", "blue", "white"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> sticker = {"purple", "yellow", "purple", "orange", "black", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> sticker = {"red", "blue", "yellow", "green", "green", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> sticker = {"blue", "blue", "blue", "red", "yellow", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> sticker = {"red", "red", "red", "green", "white", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> sticker = {"yellow", "red", "green", "blue", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> sticker = {"a", "b", "c", "d", "d", "d", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> sticker = {"a", "a", "a", "b", "c", "d", "a", "a", "a", "a", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> sticker = {"red", "orange", "orange", "green", "black", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> sticker = {"red", "red", "red", "black", "blue", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> sticker = {"red", "white", "blue", "yellow", "red", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> sticker = {"red", "red", "red", "blue", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "red", "blue", "red", "red", "red", "red", "red", "red", "orange", "red", "red", "red", "red", "red", "red", "red", "red", "red", "orange"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> sticker = {"red", "red", "purple", "purple", "green", "white"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> sticker = {"red", "red", "blue", "blue", "yellow", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> sticker = {"red", "green", "red", "red", "green", "green", "yellow", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> sticker = {"white", "gray", "green", "blue", "yellow", "red", "target", "admin"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "f"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> sticker = {"b", "b", "c", "c", "d", "a", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> sticker = {"blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "ellow", "ellow", "ellow", "ellow", "ellow", "ellow", "ellow", "ellow", "ellow", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> sticker = {"one", "one", "one", "two", "two", "two", "three", "three", "three", "four"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> sticker = {"b", "b", "b", "r", "g", "w"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> sticker = {"a", "a", "a", "b", "b", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> sticker = {"blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> sticker = {"a", "a", "a", "a", "b", "b", "b", "b", "c", "c", "c", "c", "d", "d", "d", "d", "e", "e", "e", "e", "f", "f", "f", "f"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> sticker = {"r", "r", "g", "g", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "a", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> sticker = {"red", "blue", "green", "yellow", "red", "red", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> sticker = {"a", "a", "b", "b", "c", "c", "d", "d", "d", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> sticker = {"a", "b", "c", "g", "g", "g"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> sticker = {"red", "yellow", "blue", "red", "green", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> sticker = {"a", "a", "a", "a", "b", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> sticker = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> sticker = {"yellow", "red", "blue", "purple", "yellow", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> sticker = {"cyan", "magenta", "yellow", "purple", "yellow", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> sticker = {"blue", "blue", "red", "red", "green", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> sticker = {"a", "b", "a", "b", "a", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> sticker = {"a", "b", "c", "c", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> sticker = {"a", "a", "a", "b", "r", "y"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> sticker = {"a", "a", "a", "d", "b", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> sticker = {"cyan", "cyan", "green", "purple", "red", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "e", "e"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> sticker = {"a", "b", "a", "b", "a", "b", "a", "b", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> sticker = {"purple", "orange", "orange", "purple", "black", "orange", "purple", "black", "black", "purple", "orange", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> sticker = {"w", "b", "b", "y", "y", "y"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> sticker = {"red", "yellow", "blue", "green", "black", "purple", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> sticker = {"red", "yellow", "blue", "red", "yellow", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> sticker = {"pink", "blue", "orange", "orange", "blue", "black", "orange", "white", "orange", "orange", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "f", "g", "h"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> sticker = {"a", "b", "c", "d", "d", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> sticker = {"blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> sticker = {"white", "white", "green", "blue", "yellow", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> sticker = {"black", "black", "black", "red", "red", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> sticker = {"purple", "orange", "purple", "purple", "black", "red", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> sticker = {"red", "red", "blue", "blue", "yellow", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> sticker = {"orange", "orange", "purple", "black", "orange", "fldjfdlfs"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> sticker = {"d", "b", "a", "a", "c", "c"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> sticker = {"red", "red", "blue", "red", "yellow", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> sticker = {"red", "blue", "yellow", "green", "red", "red"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> sticker = {"red", "red", "yellow", "yellow", "white", "black", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> sticker = {"blue", "blue", "blue", "red", "bl", "gr"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> sticker = {"aa", "bb", "aa", "bb", "cc", "dd"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> sticker = {"a", "a", "b", "c", "c", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> sticker = {"a", "b", "c", "d", "a", "a", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> sticker = {"a", "a", "b", "b", "c", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> sticker = {"aaa", "aaa", "bbb", "bbb", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> sticker = {"red", "red", "yellow", "yellow", "blue", "blue", "green"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> sticker = {"black", "black", "black", "blue", "green", "yellow"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "a"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> sticker = {"red", "red", "blue", "blue", "black", "black"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> sticker = {"a", "a", "b", "b", "c", "d", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> sticker = {"red", "yellow", "blue", "green", "black", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> sticker = {"red", "red", "blue", "blue", "cyan", "cyan"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> sticker = {"purple", "orange", "blue", "black", "purple", "purple", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "f", "g", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h", "h"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> sticker = {"c", "m", "y", "k", "b", "b"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> sticker = {"a", "a", "a", "v", "c", "r"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> sticker = {"a", "b", "c", "d", "d", "d", "d", "d", "d", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> sticker = {"a", "a", "a", "b", "c", "d", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> sticker = {"cyan", "cyan", "cyan", "yellow", "yellow", "red", "blue"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> sticker = {"cyan", "magenta", "blue", "blue", "purple", "purple"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> sticker = {"a", "a", "b", "b", "b", "c", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> sticker = {"a", "b", "c", "d", "e", "d"};
    CubeStickers* pObj = new CubeStickers();
    clock_t start = clock();
    string result = pObj->isPossible(sticker);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14436&pm=11315
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
 
class CubeStickers {
public:
  string isPossible(vector <string>);
};
 
string CubeStickers::isPossible(vector <string> s) {
  int n = s.size(), i, ans = 2;
  sort(s.begin(),s.end());
  for (i=2;i<n;i++)
    if (s[i] != s[i-1] || s[i] != s[i-2]) ans++;
  if (ans >= 6) return "YES";
  return "NO";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/