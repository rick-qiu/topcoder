/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10036
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

class BirthdayCake {
public:
    int howManyFriends(vector<string> availableFruits, vector<string> friendsDislikings, int K);
};

int BirthdayCake::howManyFriends(vector<string> availableFruits, vector<string> friendsDislikings, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> availableFruits = {"apple", "orange", "strawberry", "cherry"};
    vector<string> friendsDislikings = {"apple orange", "apple cherry", "strawberry orange", "cherry", "apple"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> availableFruits = {"strawberry", "orange", "apple", "lemon", "watermelon"};
    vector<string> friendsDislikings = {"orange", "apple", "lemon", "watermelon"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"apple", "orange"};
    vector<string> friendsDislikings = {"strawberry"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> availableFruits = {"melon", "watermelon"};
    vector<string> friendsDislikings = {"watermelon"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy"};
    vector<string> friendsDislikings = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> availableFruits = {"a"};
    vector<string> friendsDislikings = {"b"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> availableFruits = {"rxrbevez", "ziurmcp", "gczivu", "cprdngu", "victb", "kbmoyg", "oleecwyltl", "xyufwool", "xigcfn", "ecvpxa", "rpcnfyca", "wiavmey", "noawgjzy", "ttizfs", "osoghopsd", "yncsaxj", "rzbekxg", "nfefy", "ogxvgfpdu", "bjmjecio", "sbknf", "gbqdkxrd", "nspyessfuk", "fqnztat", "zwpybmqjyv", "msgapiulg", "locvkvzw", "cmxydqunpp", "oycwfdxpi", "ugtqezwis", "chgszs", "epfrs", "wzalrv", "ilvcqiv", "edqgvyzp", "bqodg", "odrxkprj", "jleuf", "wyyvsghfw", "vtfnqkmdan", "lisgeespvk", "gkfbp", "oujkt", "ufznydrzel", "wdefcblm", "jfvirbpy", "qviburtn", "gygxh"};
    vector<string> friendsDislikings = {"rxrbevez oleecwyltl victb msgapiulg vtfnqkmdan", "gygxh ufznydrzel cmxydqunpp rzbekxg msgapiulg", "gczivu chgszs sbknf rxrbevez jfvirbpy rzbekxg", "yncsaxj xigcfn wzalrv wiavmey ziurmcp ugtqezwis", "noawgjzy locvkvzw vtfnqkmdan oleecwyltl rzbekxg", "osoghopsd vtfnqkmdan odrxkprj ugtqezwis bjmjecio", "rpcnfyca zwpybmqjyv gkfbp chgszs jfvirbpy", "chgszs ilvcqiv ufznydrzel osoghopsd gbqdkxrd", "cprdngu fqnztat ogxvgfpdu noawgjzy oycwfdxpi", "ziurmcp jleuf rxrbevez bqodg fqnztat odrxkprj", "rzbekxg kbmoyg nfefy yncsaxj cmxydqunpp wzalrv", "wyyvsghfw jfvirbpy lisgeespvk gygxh nfefy gkfbp", "nfefy ogxvgfpdu gygxh ilvcqiv kbmoyg oleecwyltl", "xyufwool jfvirbpy gczivu ufznydrzel zwpybmqjyv", "fqnztat rpcnfyca noawgjzy cmxydqunpp sbknf ecvpxa", "wiavmey gygxh gbqdkxrd odrxkprj bjmjecio xyufwool", "gkfbp epfrs xigcfn locvkvzw ogxvgfpdu bqodg", "oleecwyltl msgapiulg bqodg zwpybmqjyv edqgvyzp", "oleecwyltl jfvirbpy rxrbevez ugtqezwis ttizfs", "jleuf noawgjzy bqodg lisgeespvk wyyvsghfw jfvirbpy"};
    int K = 9;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> availableFruits = {"vqayzaldyi", "qlgsukdmfe", "baewytlvfh", "eeqrrjsie", "olfnklc", "itfxtfgykb", "ntlhit", "korzk", "rbamtmo", "docur", "hllpve", "jdplceqcc", "mankgl", "fwthcv", "jdodyv", "zfifjpc", "wydhboirp", "duracx", "lcdwaalr", "adiffpyvx", "ctfxai", "jablas", "lcqkulmvb", "wcabop", "ajsynuc", "cqmaqngsfs", "xkeoczhzd", "pxomu", "dyygo", "jkmagcj", "ijtfgc", "mjrdfcxhpu", "xdfkjd", "torelq", "wdibtt", "dsqvv", "lwlyzv", "lynygya", "auqviptooe", "ojfhhv", "uuukzppfb"};
    vector<string> friendsDislikings = {"mankgl ntlhit auqviptooe itfxtfgykb jablas", "mankgl hllpve olfnklc vqayzaldyi docur fwthcv", "eeqrrjsie wdibtt auqviptooe jdplceqcc ctfxai", "wdibtt dsqvv dyygo wcabop adiffpyvx xdfkjd zfifjpc", "ntlhit dyygo baewytlvfh ojfhhv jkmagcj korzk", "jdplceqcc ajsynuc uuukzppfb jdodyv mankgl ntlhit", "pxomu baewytlvfh wdibtt vqayzaldyi wydhboirp", "mjrdfcxhpu cqmaqngsfs olfnklc docur ctfxai jablas", "xkeoczhzd ctfxai rbamtmo ojfhhv lcqkulmvb", "jablas lcqkulmvb auqviptooe lwlyzv zfifjpc dsqvv", "docur hllpve dsqvv itfxtfgykb vqayzaldyi", "uuukzppfb hllpve ojfhhv dyygo xdfkjd ctfxai", "torelq baewytlvfh eeqrrjsie jablas wydhboirp", "itfxtfgykb olfnklc jdplceqcc mjrdfcxhpu auqviptooe", "jablas duracx fwthcv olfnklc lcqkulmvb wdibtt", "dsqvv vqayzaldyi wydhboirp itfxtfgykb hllpve korzk", "lcqkulmvb eeqrrjsie ntlhit dsqvv itfxtfgykb hllpve", "xkeoczhzd docur adiffpyvx ijtfgc mjrdfcxhpu fwthcv", "uuukzppfb ctfxai mankgl rbamtmo jdplceqcc docur", "mjrdfcxhpu jablas korzk baewytlvfh ijtfgc torelq"};
    int K = 20;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> availableFruits = {"nxloe", "amxvjtnax", "dkmpzdwjgv", "kbvkve", "ctggj", "ylwccnpse", "rttrnhvcbo", "zoduk", "pikvwdz", "oinbf", "tmubzxxt", "pntnzqd", "iqzuaoino", "ighsejwhrr", "dyaxa", "tvuytmv", "cihhz", "axgamslras", "baktccmmes", "acxnumzs", "thugp", "rvmvhdoc", "jwzzceaf", "peewjg", "vyyvaa", "dowcfsdlxz", "gvcfqgpgx", "rfkkqzoao", "ekipos", "ywhmvgxrck", "bahxn", "envny", "ungnqer", "ubhsshfwgp", "yxpozgztwu", "nkyagw", "tzooqqqmm", "jqges", "bvfytya", "divuonwlwt", "muusspajf", "spupbfjsh", "mfxloe"};
    vector<string> friendsDislikings = {"kbvkve ekipos dyaxa nxloe vyyvaa thugp cihhz", "pntnzqd peewjg nkyagw nxloe jqges tvuytmv mfxloe", "pikvwdz iqzuaoino jqges acxnumzs envny spupbfjsh", "spupbfjsh iqzuaoino pntnzqd dowcfsdlxz dyaxa", "rfkkqzoao tvuytmv envny cihhz dowcfsdlxz pikvwdz", "jqges iqzuaoino nxloe ywhmvgxrck mfxloe ekipos", "rfkkqzoao tzooqqqmm cihhz gvcfqgpgx tmubzxxt", "bahxn nkyagw pikvwdz tvuytmv spupbfjsh tmubzxxt", "muusspajf dowcfsdlxz zoduk bahxn divuonwlwt", "ubhsshfwgp nkyagw acxnumzs rvmvhdoc baktccmmes", "gvcfqgpgx thugp oinbf dowcfsdlxz dkmpzdwjgv", "envny gvcfqgpgx muusspajf tvuytmv jwzzceaf bahxn", "pikvwdz ighsejwhrr jqges muusspajf ywhmvgxrck", "envny muusspajf rfkkqzoao tvuytmv tzooqqqmm", "ylwccnpse ubhsshfwgp pntnzqd ekipos vyyvaa zoduk", "ekipos rttrnhvcbo bvfytya tzooqqqmm nkyagw bahxn", "dyaxa rvmvhdoc ywhmvgxrck envny vyyvaa pikvwdz", "tmubzxxt thugp cihhz amxvjtnax gvcfqgpgx spupbfjsh", "thugp dowcfsdlxz acxnumzs tvuytmv iqzuaoino dyaxa", "ctggj zoduk rvmvhdoc ekipos gvcfqgpgx pikvwdz"};
    int K = 8;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> availableFruits = {"wswhrf", "qcykavvn", "ipkegntc", "mgscaeql", "erwzd", "jrduxompw", "dwpqtk", "pokufvce", "ieuqtjagk", "ljckkevgqm", "vdanms", "ekpvzx", "iabsx", "zmcsi", "vrkiv", "nxkvzqeov", "umtvncelx", "mhscursvh", "fofxxf", "nekxm", "lxijlbvrg", "xxskkhoyi", "lnxcejr", "myche", "ecrsjfwr", "kfwbix", "hdvbfmwlr", "wuyqhaa", "rdkjtppouk", "canfwzuboz", "uogjrm", "noekhu", "motdnatyg", "lcsmflo", "pankzbpmf", "wwaaqkcrw", "lvfkmkchrd", "chwkhgh", "absltto", "hwlluu", "zxpii", "qrnfhqx"};
    vector<string> friendsDislikings = {"xxskkhoyi mhscursvh wuyqhaa ecrsjfwr rdkjtppouk", "ieuqtjagk jrduxompw wuyqhaa zmcsi myche absltto", "ljckkevgqm kfwbix lvfkmkchrd pankzbpmf vrkiv", "xxskkhoyi ieuqtjagk ipkegntc jrduxompw ecrsjfwr", "dwpqtk noekhu lnxcejr pokufvce ecrsjfwr vrkiv", "jrduxompw zmcsi erwzd chwkhgh lcsmflo ekpvzx", "lcsmflo zmcsi vrkiv ipkegntc motdnatyg dwpqtk", "vdanms iabsx uogjrm noekhu lcsmflo rdkjtppouk", "jrduxompw wwaaqkcrw erwzd mgscaeql qrnfhqx vrkiv", "zxpii pokufvce hwlluu iabsx chwkhgh absltto noekhu", "xxskkhoyi lxijlbvrg erwzd myche ekpvzx pokufvce", "umtvncelx mhscursvh zmcsi fofxxf nxkvzqeov lcsmflo", "hdvbfmwlr pokufvce nekxm dwpqtk hwlluu umtvncelx", "qrnfhqx qcykavvn jrduxompw ecrsjfwr vdanms lnxcejr", "xxskkhoyi motdnatyg iabsx absltto dwpqtk ecrsjfwr", "fofxxf pokufvce mgscaeql zxpii absltto wwaaqkcrw", "umtvncelx canfwzuboz fofxxf absltto myche qrnfhqx", "myche nekxm lcsmflo hwlluu vrkiv canfwzuboz", "ieuqtjagk mhscursvh pokufvce zxpii dwpqtk", "lcsmflo ieuqtjagk absltto mhscursvh mgscaeql"};
    int K = 14;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> availableFruits = {"gmvcbfx", "tywptncci", "wbmzaremyt", "npgtmzdgoi", "gnawuky", "wllgyta", "qblrar", "gwelkmjgkm", "unqqbhp", "kitfsos", "hobzkaeme", "rcdxvwyqdd", "yiguig", "uiyufwl", "mrwqonlztd", "krlujbu", "imehoyyanw", "uybcvv", "fhnsvejdk", "czwjrec", "nqbeele", "shoop", "msaqnbq", "onbaazzs", "cjutsgt", "ozjicaxh", "txqqzybrl", "xdbpy", "qipctjis", "hirdmudm", "igupfd", "vwhjj", "lngxjmyrhu", "pvzgcfvgd", "kaqttg", "aesvzsjidq", "euhyy", "fizpafq", "kpchdn", "khxyhjxaza", "lzvii", "expgnjf", "nleqdligdq"};
    vector<string> friendsDislikings = {"unqqbhp mrwqonlztd imehoyyanw krlujbu lngxjmyrhu", "lngxjmyrhu unqqbhp nqbeele qipctjis txqqzybrl", "wllgyta czwjrec gnawuky xdbpy hobzkaeme rcdxvwyqdd", "wllgyta wbmzaremyt xdbpy npgtmzdgoi mrwqonlztd", "lngxjmyrhu ozjicaxh unqqbhp msaqnbq nqbeele", "uybcvv qipctjis nleqdligdq cjutsgt vwhjj expgnjf", "nqbeele msaqnbq pvzgcfvgd uybcvv npgtmzdgoi", "msaqnbq shoop expgnjf igupfd kaqttg fhnsvejdk", "gnawuky vwhjj gwelkmjgkm xdbpy yiguig kpchdn", "onbaazzs expgnjf kpchdn wllgyta gwelkmjgkm", "kaqttg yiguig fizpafq pvzgcfvgd wllgyta nqbeele", "unqqbhp lzvii mrwqonlztd uybcvv wllgyta fhnsvejdk", "krlujbu wbmzaremyt qblrar npgtmzdgoi shoop unqqbhp", "qipctjis cjutsgt msaqnbq kitfsos kaqttg czwjrec", "unqqbhp ozjicaxh shoop hirdmudm kaqttg mrwqonlztd", "vwhjj wbmzaremyt lzvii xdbpy fizpafq euhyy yiguig", "yiguig qblrar nleqdligdq uybcvv msaqnbq kitfsos", "msaqnbq qblrar qipctjis npgtmzdgoi mrwqonlztd", "tywptncci qipctjis khxyhjxaza npgtmzdgoi", "aesvzsjidq txqqzybrl gmvcbfx pvzgcfvgd mrwqonlztd"};
    int K = 8;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> availableFruits = {"zrgnhm", "mprqg", "lzagwzyewr", "wqbszkn", "jpmhfbxj", "pigfbj", "yfxoh", "barvxscgjc", "gitunvrma", "pzmwzqgrss", "wmyxsgqrbg", "kkcdhuixg", "klkdb", "rhrbjxznx", "jjsyh", "dkhqqtqj", "jfghug", "axntkpji", "ddrhznykmz", "ioxgogkpro", "qoeutxjs", "gbnpdh", "ernvnqup", "tosrazbkj", "ovemlwzkak", "vrzwqspalu", "qjtga", "yajmu", "jvkttuo", "nukff", "hvvpzq", "amcbg", "vrmdlm", "immzy", "clqfs", "apinaarvgk", "msrhjf", "ukwlkyv", "xrhzceq", "texljublw", "kjxjuxhlsk", "sqkeugqme", "zsvmijv", "viidpbj", "hfyitebimg", "xjoskebl"};
    vector<string> friendsDislikings = {"barvxscgjc ioxgogkpro yajmu gbnpdh yfxoh viidpbj", "zsvmijv qjtga pzmwzqgrss qoeutxjs vrzwqspalu immzy", "xjoskebl mprqg pigfbj msrhjf ddrhznykmz wmyxsgqrbg", "pigfbj lzagwzyewr hvvpzq sqkeugqme rhrbjxznx", "zrgnhm barvxscgjc yfxoh ovemlwzkak wqbszkn", "vrmdlm wqbszkn hvvpzq jvkttuo jjsyh qjtga", "zsvmijv viidpbj vrmdlm jpmhfbxj lzagwzyewr ukwlkyv", "vrzwqspalu apinaarvgk wqbszkn qoeutxjs jjsyh", "yfxoh jjsyh wqbszkn texljublw nukff dkhqqtqj klkdb", "barvxscgjc texljublw klkdb ukwlkyv jjsyh zrgnhm", "ernvnqup nukff gbnpdh gitunvrma amcbg mprqg", "hfyitebimg viidpbj qjtga vrmdlm sqkeugqme yajmu", "yfxoh gbnpdh zrgnhm clqfs rhrbjxznx ovemlwzkak", "amcbg zsvmijv hvvpzq ddrhznykmz pzmwzqgrss nukff", "kkcdhuixg xrhzceq kjxjuxhlsk lzagwzyewr hfyitebimg", "rhrbjxznx zsvmijv barvxscgjc ddrhznykmz axntkpji", "vrmdlm sqkeugqme qoeutxjs jvkttuo gbnpdh jpmhfbxj", "jvkttuo immzy barvxscgjc jpmhfbxj yfxoh msrhjf", "jfghug nukff viidpbj texljublw jvkttuo rhrbjxznx", "zrgnhm xjoskebl vrzwqspalu jfghug mprqg qjtga"};
    int K = 15;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> availableFruits = {"tsdxj", "wcfdirum", "scnjethcw", "kyrdcczl", "aicljrv", "voetcua", "wnmmaiat", "xczwymlgge", "nyqswbcpe", "hbxzmejq", "doognd", "vptnyywy", "bxmbtasnqw", "mxxcuytu", "zefhxtxh", "fewqubiark", "zmbqlfr", "vsdemgwxrb", "sjcndlqige", "oojhcixsy", "zdjpeelx", "jlzoujhgu", "wbghaahoxk", "ibkyea", "uketdqvpq", "sqkvfgsdm", "udjgqnz", "katlilo", "lorogdd", "lazki", "alsezxap", "pkcuv", "nbpqudwg", "smcrvm", "bshspdcif", "czjca", "vxaseaawl", "kwyqwviivd", "yysapqsh", "pisuub"};
    vector<string> friendsDislikings = {"wcfdirum uketdqvpq sjcndlqige nbpqudwg smcrvm", "vptnyywy fewqubiark czjca xczwymlgge udjgqnz", "tsdxj czjca sqkvfgsdm smcrvm xczwymlgge ibkyea", "oojhcixsy lazki pisuub vsdemgwxrb zmbqlfr ibkyea", "hbxzmejq alsezxap fewqubiark kyrdcczl vxaseaawl", "lazki yysapqsh uketdqvpq sjcndlqige ibkyea", "ibkyea czjca vsdemgwxrb bshspdcif tsdxj fewqubiark", "tsdxj bshspdcif pkcuv wbghaahoxk alsezxap yysapqsh", "vptnyywy katlilo lazki zmbqlfr ibkyea zdjpeelx", "ibkyea wnmmaiat kyrdcczl pkcuv vptnyywy vxaseaawl", "fewqubiark zdjpeelx aicljrv katlilo oojhcixsy", "lorogdd bxmbtasnqw wbghaahoxk aicljrv scnjethcw", "aicljrv bshspdcif nbpqudwg doognd wbghaahoxk", "czjca pisuub oojhcixsy aicljrv kyrdcczl pkcuv", "czjca wnmmaiat fewqubiark scnjethcw wbghaahoxk", "jlzoujhgu kwyqwviivd tsdxj mxxcuytu pkcuv", "pisuub kyrdcczl scnjethcw katlilo wnmmaiat", "mxxcuytu lazki nyqswbcpe vsdemgwxrb ibkyea aicljrv", "katlilo nbpqudwg sjcndlqige yysapqsh pisuub", "doognd vptnyywy udjgqnz zefhxtxh hbxzmejq lazki"};
    int K = 13;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> availableFruits = {"wtnkfzfgyg", "izmbyhwbgt", "oxwkth", "dichsb", "ojwrfx", "nrrzjku", "fpovalzgln", "sbbtoitox", "fnktgyahyg", "mciczhuzx", "kpoobwl", "zspcnoudbo", "novtpwiynx", "nbwtfaqs", "hdflin", "mtbzu", "iltxulg", "eosffwh", "wzdtpwh", "xzdyatoxg", "hojvze", "mzqiecydm", "okpxbbwndv", "pokpm", "nhrhknypb", "xslgnzfs", "uknmzcswz", "kafhpsv", "wcbmr", "rpfqo", "eymqly", "mmbiahpjg", "koxagbgtnl", "sxgodaioq", "vwwykpsy", "prlfrzk", "xnlec", "pofhlzqy", "dtohodjgvm", "fglfso", "nwymgymofm", "pllygci", "hdnwhpt", "phpnd", "xavfuj", "jsydhpd", "gvmvuut", "cqjar", "ylnfary"};
    vector<string> friendsDislikings = {"kafhpsv rpfqo nwymgymofm mmbiahpjg mtbzu hdnwhpt", "cqjar nbwtfaqs dtohodjgvm ojwrfx fpovalzgln", "cqjar kpoobwl eosffwh nrrzjku wtnkfzfgyg pllygci", "kpoobwl cqjar mmbiahpjg pllygci nrrzjku xnlec", "wtnkfzfgyg oxwkth fglfso zspcnoudbo pofhlzqy", "mciczhuzx uknmzcswz wzdtpwh cqjar jsydhpd", "uknmzcswz xzdyatoxg oxwkth rpfqo iltxulg prlfrzk", "wcbmr kafhpsv fglfso prlfrzk eymqly sbbtoitox", "fpovalzgln rpfqo nhrhknypb mtbzu vwwykpsy gvmvuut", "izmbyhwbgt eosffwh nbwtfaqs jsydhpd nrrzjku", "dichsb oxwkth mtbzu nwymgymofm dtohodjgvm pokpm", "wtnkfzfgyg uknmzcswz wzdtpwh fpovalzgln nrrzjku", "zspcnoudbo vwwykpsy nbwtfaqs uknmzcswz hojvze", "novtpwiynx vwwykpsy dichsb mciczhuzx izmbyhwbgt", "wzdtpwh mmbiahpjg mciczhuzx eosffwh mzqiecydm", "mciczhuzx nrrzjku nwymgymofm dtohodjgvm pofhlzqy", "xavfuj nbwtfaqs pllygci xzdyatoxg fpovalzgln pokpm", "koxagbgtnl wzdtpwh pofhlzqy zspcnoudbo okpxbbwndv", "novtpwiynx xslgnzfs pokpm kafhpsv oxwkth wzdtpwh", "hdnwhpt fglfso xzdyatoxg wtnkfzfgyg xavfuj"};
    int K = 12;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> availableFruits = {"htidh", "mbddu", "qifpmenxrz", "qwwxdklf", "kfkpdnin", "uebxna", "czhyi", "lbnsepf", "nbjhjbilfo", "txadklk", "oplqzf", "gltjjmkp", "xdkqdys", "iasqcityjc", "eilzqzroax", "tyddub", "yjfnhvrajw", "yvqlcnx", "kxgafykxb", "pcgxkndxc", "urvnrpenw", "revzlglvli", "wjslcnda", "jgzvg", "nswver", "yenhurt", "tehct", "mdowcpbyzb", "emwrrapz", "kqlefexubl", "prmshvyg", "iiccacbs", "xyssblq", "kfdzbuezny", "nslbztjpnh", "cqdsnfxnza", "mpwytczjb", "xozkakofxl", "mzprlzs", "lfnvsw", "uksqgxq", "rqelc", "cuizjwewo", "paqybnb", "azbfudbibm", "evpkewdytm", "mlbpl"};
    vector<string> friendsDislikings = {"nslbztjpnh uebxna jgzvg gltjjmkp xdkqdys pcgxkndxc", "iasqcityjc uksqgxq qwwxdklf qifpmenxrz emwrrapz", "wjslcnda rqelc tehct mbddu eilzqzroax gltjjmkp", "rqelc mbddu xyssblq kfkpdnin kxgafykxb iasqcityjc", "gltjjmkp qifpmenxrz kxgafykxb iiccacbs yvqlcnx", "kqlefexubl mlbpl rqelc eilzqzroax lfnvsw oplqzf", "kxgafykxb paqybnb mpwytczjb azbfudbibm xdkqdys", "iiccacbs cuizjwewo txadklk mbddu tehct kfdzbuezny", "paqybnb lfnvsw xdkqdys htidh prmshvyg uebxna tehct", "htidh czhyi cuizjwewo txadklk wjslcnda mbddu", "wjslcnda iasqcityjc uksqgxq jgzvg mbddu azbfudbibm", "rqelc mbddu mpwytczjb kqlefexubl oplqzf htidh", "lfnvsw xdkqdys azbfudbibm jgzvg tyddub cuizjwewo", "tehct mpwytczjb yjfnhvrajw urvnrpenw kxgafykxb", "mzprlzs nslbztjpnh gltjjmkp kqlefexubl qifpmenxrz", "iiccacbs mbddu mlbpl xdkqdys oplqzf prmshvyg", "emwrrapz xdkqdys nslbztjpnh mzprlzs uksqgxq tyddub", "yvqlcnx jgzvg iiccacbs uksqgxq txadklk mzprlzs", "gltjjmkp tyddub uksqgxq kfkpdnin wjslcnda lbnsepf", "urvnrpenw yvqlcnx kfkpdnin iasqcityjc pcgxkndxc"};
    int K = 11;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> availableFruits = {"ynhjqmnj", "wbcttxymn", "ofridfu", "xmhvwa", "ieomoj", "ezrivopj", "rybinvejm", "mxizdegiv", "lzvdupois", "oahcxtcd", "ztnnoka", "xwwmbwku", "ardaimpumt", "essouwblcc", "pdslnq", "rkkcrdlry", "xggwowdzi", "vaspgpeh", "jneaogz", "xigjfhl", "eebqgm", "qwnlfri", "rmzgmnl", "uxibl", "pjcxymmh", "jekbei", "qliuco", "lakiwdqosl", "kxceb", "kcbmik", "pptox", "cygqvfh", "zxwnarulyo", "zrokylzg", "vyugcz", "rnsjot", "dpzeb", "bxwwsghgys", "nltvhkp", "lphwr", "usvtluke", "dqvlrbmd", "kycfp", "ccjcdvnydz", "uzjfmeov", "nnfqz", "ypjuoicq", "tlgwucjdt", "gvcgu"};
    vector<string> friendsDislikings = {"ieomoj vyugcz xggwowdzi tlgwucjdt ofridfu nltvhkp", "rybinvejm xwwmbwku ezrivopj ynhjqmnj rmzgmnl", "ypjuoicq kxceb ztnnoka lzvdupois xwwmbwku ieomoj", "wbcttxymn cygqvfh ccjcdvnydz rnsjot vyugcz", "rmzgmnl xigjfhl pjcxymmh lphwr ypjuoicq ieomoj", "kycfp zrokylzg qwnlfri mxizdegiv xmhvwa dpzeb", "ccjcdvnydz tlgwucjdt rmzgmnl mxizdegiv pjcxymmh", "qwnlfri mxizdegiv vaspgpeh ztnnoka uxibl wbcttxymn", "ofridfu xmhvwa jneaogz dpzeb usvtluke gvcgu", "gvcgu cygqvfh kcbmik xmhvwa ynhjqmnj xggwowdzi", "pptox ofridfu ezrivopj rkkcrdlry ynhjqmnj xmhvwa", "ofridfu zrokylzg qliuco kycfp ypjuoicq essouwblcc", "usvtluke ynhjqmnj wbcttxymn gvcgu lakiwdqosl uxibl", "gvcgu zrokylzg lphwr oahcxtcd qliuco mxizdegiv", "pjcxymmh lzvdupois pdslnq ynhjqmnj essouwblcc", "mxizdegiv dqvlrbmd nltvhkp rkkcrdlry lphwr ieomoj", "xmhvwa kycfp xggwowdzi oahcxtcd essouwblcc pdslnq", "rybinvejm ieomoj ccjcdvnydz xggwowdzi xigjfhl", "pptox ieomoj rybinvejm lzvdupois ztnnoka vyugcz", "cygqvfh tlgwucjdt nnfqz vyugcz dpzeb uzjfmeov"};
    int K = 12;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> availableFruits = {"orfaavdciy", "fucqzej", "tkorq", "bncutfxg", "fyzrodpy", "hnvfjzrtwo", "gldou", "ogcnqaj", "evfruo", "zxifwsfj", "mvdcvuafn", "ndfzyfo", "btcto", "lxnelmud", "fxdpc", "qqlxqiqt", "llihcylom", "ywjtektiu", "biwbotxqd", "ulfglll", "dlrqcuxph", "xsvhvtg", "gvtvjsihrw", "ovxiyjptk", "xlpgjh", "gaodm", "ycbnozqttg", "wbiex", "rejsolk", "oojcrgb", "rjmovxk", "bkscanscta", "ycepeiwui", "hebow", "syuuxhow", "kggxepvg", "dmrqcwcd", "qcroxtvcu", "hitelgijpy", "usmyu", "sbuyeiwtb", "imvybzvota", "ypixgnsr", "ksbysyen", "wdcjiyri", "buengerp", "tittujip", "zeonbyyfj", "nxewhptfn", "ddwon"};
    vector<string> friendsDislikings = {"fyzrodpy biwbotxqd oojcrgb zeonbyyfj buengerp", "gaodm bkscanscta gldou rjmovxk ycbnozqttg usmyu", "wdcjiyri ywjtektiu ksbysyen qqlxqiqt usmyu fxdpc", "gvtvjsihrw bkscanscta tittujip evfruo ovxiyjptk", "mvdcvuafn gldou dmrqcwcd kggxepvg dlrqcuxph", "ycbnozqttg fxdpc zxifwsfj mvdcvuafn rjmovxk", "zeonbyyfj ogcnqaj gaodm buengerp fyzrodpy kggxepvg", "lxnelmud qcroxtvcu xlpgjh ypixgnsr hnvfjzrtwo", "wdcjiyri usmyu dlrqcuxph ycepeiwui ulfglll", "dmrqcwcd zeonbyyfj tittujip syuuxhow kggxepvg", "kggxepvg hnvfjzrtwo lxnelmud gldou imvybzvota", "nxewhptfn dmrqcwcd imvybzvota bkscanscta fyzrodpy", "ddwon hebow xsvhvtg evfruo rejsolk zeonbyyfj", "mvdcvuafn imvybzvota ddwon hebow oojcrgb kggxepvg", "ycepeiwui bncutfxg dlrqcuxph evfruo tittujip ddwon", "zeonbyyfj gaodm ogcnqaj ddwon dmrqcwcd gvtvjsihrw", "hitelgijpy fyzrodpy syuuxhow evfruo imvybzvota", "fucqzej btcto zeonbyyfj bncutfxg syuuxhow qqlxqiqt", "ulfglll ksbysyen llihcylom ycbnozqttg sbuyeiwtb", "ddwon bncutfxg syuuxhow nxewhptfn qqlxqiqt"};
    int K = 40;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> availableFruits = {"srtpsmx", "rzwrza", "znazhvxhqu", "vmxrtll", "mkomutgyb", "qzvwd", "hejxa", "eewdmk", "pewqkvydit", "hqzkuh", "hbdsbgtm", "swvufhjzrr", "bjpnskc", "czgjzj", "sodqm", "jqgumvdfng", "scxkp", "fdatuu", "hasiqnsepz", "zomolwk", "gvuomiqfd", "dtndjn", "bsarz", "qzngblr", "qutomki", "grrdszz", "ynilt", "ztyqq", "qfljes", "vvtecjli", "jqnibnknw", "odxlun", "cglsye", "zxwqyq", "mzgkqmpxc", "jbtozyobsh", "vrrxmrttqq", "nwvyd", "qippcmx", "rpmddyuvmr", "zrmulq", "wjnez", "tpbmsbcwo", "atlsb", "exraezif", "vtocpz"};
    vector<string> friendsDislikings = {"sodqm zrmulq jqgumvdfng tpbmsbcwo cglsye vmxrtll", "cglsye zrmulq vtocpz rpmddyuvmr vmxrtll grrdszz", "mkomutgyb znazhvxhqu czgjzj ynilt exraezif", "bsarz zxwqyq pewqkvydit sodqm eewdmk rzwrza czgjzj", "mkomutgyb pewqkvydit scxkp mzgkqmpxc jqnibnknw", "qfljes grrdszz rzwrza tpbmsbcwo hbdsbgtm cglsye", "bjpnskc qippcmx qfljes bsarz qutomki qzvwd", "zxwqyq dtndjn jqnibnknw zrmulq nwvyd hasiqnsepz", "swvufhjzrr rpmddyuvmr czgjzj wjnez zrmulq exraezif", "hqzkuh qfljes swvufhjzrr vrrxmrttqq mzgkqmpxc", "scxkp bjpnskc dtndjn vtocpz hasiqnsepz nwvyd", "rzwrza vmxrtll qzngblr cglsye hbdsbgtm ynilt", "wjnez zrmulq vmxrtll znazhvxhqu jqgumvdfng", "qutomki swvufhjzrr hbdsbgtm exraezif zxwqyq ynilt", "rzwrza ynilt vvtecjli srtpsmx vrrxmrttqq dtndjn", "vrrxmrttqq jqnibnknw nwvyd pewqkvydit bsarz", "ynilt qzvwd mkomutgyb dtndjn hasiqnsepz bjpnskc", "vmxrtll sodqm zxwqyq hbdsbgtm qfljes jqnibnknw", "znazhvxhqu zxwqyq vrrxmrttqq jqnibnknw czgjzj", "jqgumvdfng atlsb qfljes czgjzj wjnez qutomki"};
    int K = 39;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> availableFruits = {"zjajomek", "fbnhhtfcwn", "ricxql", "qainl", "zulwsh", "wjgzzbq", "picasukz", "ebqrymfpg", "cayfuyukzo", "buxibl", "atliniky", "vndrauwxq", "lsbmk", "qmkjz", "rudsact", "npsuhypd", "kwhcniwn", "odplhdiftq", "ksjmwnpm", "flmmzn", "sovoswfea", "xzgqag", "wubezqqgg", "vasbmftjcc", "assxcwuj", "oyfibofetv", "lrasamqdm", "ctqwdlie", "ijokx", "gtiqausymr", "bfsxgerg", "xuqad", "zphtzc", "bbiewige", "pvvalkg", "luzptor", "jaeuykg", "ijdzvddgla", "kxrnlzazco", "orocivmyu", "kcbzwnh", "ozfrhbk", "wtqjtbih", "eqrdtpkx", "jefeopn", "ozlmhxh", "pmrfzlldi", "gmmyidd", "ojqky", "vgjkc"};
    vector<string> friendsDislikings = {"ijokx cayfuyukzo buxibl vgjkc oyfibofetv", "vndrauwxq picasukz kxrnlzazco jaeuykg lsbmk", "xuqad atliniky rudsact eqrdtpkx lsbmk qainl", "ricxql odplhdiftq bbiewige xzgqag npsuhypd jaeuykg", "ozlmhxh flmmzn wubezqqgg npsuhypd fbnhhtfcwn vgjkc", "eqrdtpkx buxibl npsuhypd zulwsh xuqad flmmzn", "jaeuykg picasukz eqrdtpkx bfsxgerg xuqad zjajomek", "kcbzwnh ricxql oyfibofetv jaeuykg eqrdtpkx qmkjz", "bfsxgerg ctqwdlie zjajomek wtqjtbih jefeopn", "vndrauwxq zphtzc qmkjz gmmyidd picasukz ijokx", "kcbzwnh kxrnlzazco bbiewige jefeopn lsbmk kwhcniwn", "luzptor ksjmwnpm wubezqqgg bbiewige picasukz", "gtiqausymr wubezqqgg zjajomek npsuhypd buxibl", "jaeuykg zulwsh eqrdtpkx vndrauwxq ozlmhxh picasukz", "vndrauwxq zjajomek qmkjz xuqad ojqky atliniky", "zphtzc kxrnlzazco rudsact lrasamqdm cayfuyukzo", "bbiewige wubezqqgg ksjmwnpm kcbzwnh vndrauwxq", "wtqjtbih oyfibofetv ozfrhbk pmrfzlldi ozlmhxh", "xzgqag vndrauwxq zulwsh ijokx qmkjz ctqwdlie", "sovoswfea pvvalkg gmmyidd zphtzc bbiewige ctqwdlie"};
    int K = 42;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> availableFruits = {"zknbrym", "ntaeilxhlv", "zavwlkorsc", "kijnl", "fzzbnfzu", "ncuwwuebwd", "pjoaiyt", "wndorrpg", "xtvagf", "ohzhf", "zthyzb", "cffrjwn", "dipqpfnqb", "taoaltbh", "fqrajdgh", "abgly", "gmecozmeg", "vnumaerx", "gbmecodohn", "rfspyps", "caqoplpzr", "xfuoa", "cthdggkbhq", "eseusp", "nhmhhymy", "qhpelg", "poxbcd", "brlycdre", "ljnzonijt", "svcrfstuz", "jkguvq", "esaxp", "tcxqxvvyr", "tfjmbuqt", "oebnnnap", "ippzrwtq", "eylcdftsm", "bwnqzzj", "mnaaqbzjj", "lwxugckfpy", "vuxxm", "axgcvssonh", "yuimannfu", "byjdolkl", "rbiputoza", "blazh", "rcydcuy", "rnktwbxnb"};
    vector<string> friendsDislikings = {"ntaeilxhlv axgcvssonh qhpelg jkguvq mnaaqbzjj", "cthdggkbhq eylcdftsm vnumaerx qhpelg tcxqxvvyr", "zknbrym fzzbnfzu blazh esaxp xfuoa yuimannfu", "tcxqxvvyr wndorrpg oebnnnap caqoplpzr fqrajdgh", "vnumaerx rnktwbxnb cffrjwn fzzbnfzu rbiputoza", "gbmecodohn zthyzb gmecozmeg pjoaiyt bwnqzzj", "jkguvq vuxxm rcydcuy nhmhhymy kijnl xtvagf", "qhpelg ncuwwuebwd zthyzb oebnnnap zavwlkorsc xfuoa", "poxbcd rfspyps vnumaerx yuimannfu esaxp xfuoa", "brlycdre vnumaerx lwxugckfpy poxbcd zknbrym abgly", "eseusp fqrajdgh vuxxm ippzrwtq rbiputoza", "nhmhhymy yuimannfu brlycdre zavwlkorsc ncuwwuebwd", "gmecozmeg dipqpfnqb fqrajdgh bwnqzzj byjdolkl", "ippzrwtq mnaaqbzjj qhpelg fzzbnfzu ncuwwuebwd", "dipqpfnqb xtvagf rnktwbxnb svcrfstuz jkguvq", "vuxxm yuimannfu pjoaiyt rnktwbxnb bwnqzzj", "ohzhf fqrajdgh mnaaqbzjj zthyzb vnumaerx ippzrwtq", "esaxp vuxxm gbmecodohn zavwlkorsc zthyzb tcxqxvvyr", "vuxxm kijnl ncuwwuebwd ljnzonijt qhpelg xtvagf", "vnumaerx caqoplpzr wndorrpg abgly tfjmbuqt rcydcuy"};
    int K = 39;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> availableFruits = {"sggkoewmcf", "qktivoten", "cfdyfspgm", "xnqjbmztmx", "waekc", "dnptsc", "yshfjl", "uwofltvel", "jvdtumooj", "bbhdd", "imwpmg", "tlpqqpff", "rqxdnpms", "mohzmu", "xdvmbjbc", "qlkjc", "jmkmuklogq", "zwhsnply", "qprxm", "mmkcxqrytr", "kamvzi", "qnuoqdltp", "aivryl", "eczfijemn", "mgwsn", "rqofixr", "kkymkhfb", "bfksp", "wkjmsi", "pczvijiddi", "nfryfifvwi", "muptbwmbl", "wxjvdqxfho", "fuxfdyxizf", "miebkuf", "thszmr", "wwztrb", "dpvpbxkwpt", "hqqzag", "sxveokps", "bftppgmcdf", "yicopaas", "srxnzoia", "skcgcsa", "frysfhldh"};
    vector<string> friendsDislikings = {"pczvijiddi muptbwmbl fuxfdyxizf imwpmg frysfhldh", "yshfjl qlkjc hqqzag rqofixr nfryfifvwi mohzmu", "qprxm uwofltvel jvdtumooj bbhdd bfksp hqqzag", "xnqjbmztmx dnptsc bbhdd xdvmbjbc thszmr bftppgmcdf", "rqofixr wkjmsi qprxm dpvpbxkwpt qnuoqdltp kamvzi", "wwztrb sxveokps fuxfdyxizf hqqzag cfdyfspgm", "wxjvdqxfho waekc zwhsnply qprxm mohzmu dpvpbxkwpt", "yshfjl bftppgmcdf srxnzoia qktivoten zwhsnply", "frysfhldh miebkuf pczvijiddi nfryfifvwi wkjmsi", "xnqjbmztmx frysfhldh thszmr mohzmu waekc kkymkhfb", "hqqzag dpvpbxkwpt muptbwmbl bfksp sggkoewmcf", "eczfijemn xdvmbjbc qktivoten wxjvdqxfho pczvijiddi", "wkjmsi sggkoewmcf uwofltvel cfdyfspgm rqxdnpms", "xdvmbjbc xnqjbmztmx hqqzag jvdtumooj thszmr", "cfdyfspgm bfksp mmkcxqrytr qprxm pczvijiddi aivryl", "qktivoten wkjmsi waekc jvdtumooj hqqzag rqofixr", "wwztrb waekc dpvpbxkwpt kamvzi uwofltvel eczfijemn", "pczvijiddi dnptsc sxveokps kamvzi sggkoewmcf", "muptbwmbl jvdtumooj imwpmg frysfhldh xdvmbjbc", "yshfjl bftppgmcdf thszmr imwpmg waekc mgwsn aivryl"};
    int K = 36;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> availableFruits = {"xfixoo", "youqvvesp", "jmhfzkn", "taqwpfollr", "qesrvk", "oygdvf", "jzqizxslt", "xhaaxpg", "toqfloh", "whxrvjm", "zjyjcamam", "hnkrh", "accnye", "feppg", "uxiriuhfn", "foaqzvywzb", "jymlgemza", "redkc", "btewia", "hibaukk", "tolwgohv", "aymzi", "zhzxwvk", "yeccgb", "hmjjzs", "yugsckgi", "duniqlxqdf", "ccmoa", "wtmbiyddk", "dnoae", "unxmnd", "fmnjhod", "fgvwam", "fkaaveacbx", "rnzuhklo", "qimakx", "wpbln", "xuvrwkiqi", "ptkgxqvk", "pwkqmo", "jlzdrs", "fiuot", "twlfh", "scgdzkz", "wmjzvkuqf", "rrmpblck", "rhzeko"};
    vector<string> friendsDislikings = {"jzqizxslt fkaaveacbx wmjzvkuqf wtmbiyddk xfixoo", "yeccgb whxrvjm feppg ccmoa qimakx foaqzvywzb", "hnkrh feppg tolwgohv qimakx pwkqmo accnye", "redkc toqfloh feppg zjyjcamam taqwpfollr yeccgb", "ptkgxqvk wpbln foaqzvywzb zhzxwvk jmhfzkn fmnjhod", "zjyjcamam ptkgxqvk scgdzkz wmjzvkuqf youqvvesp", "hmjjzs foaqzvywzb yugsckgi xuvrwkiqi redkc", "zhzxwvk fmnjhod fiuot wpbln whxrvjm hnkrh dnoae", "jlzdrs unxmnd fgvwam wpbln pwkqmo accnye xhaaxpg", "unxmnd dnoae fiuot scgdzkz fkaaveacbx zjyjcamam", "xfixoo duniqlxqdf yugsckgi taqwpfollr zjyjcamam", "accnye qesrvk zhzxwvk uxiriuhfn toqfloh unxmnd", "yugsckgi dnoae rhzeko qesrvk xfixoo feppg jmhfzkn", "xuvrwkiqi hmjjzs xhaaxpg taqwpfollr wtmbiyddk", "jymlgemza wpbln zjyjcamam duniqlxqdf rrmpblck", "fgvwam xfixoo hmjjzs youqvvesp ccmoa rhzeko", "wpbln zhzxwvk feppg toqfloh dnoae wtmbiyddk accnye", "xuvrwkiqi wtmbiyddk jymlgemza foaqzvywzb unxmnd", "ptkgxqvk foaqzvywzb fiuot qimakx fgvwam tolwgohv", "yeccgb yugsckgi whxrvjm fmnjhod zjyjcamam zhzxwvk"};
    int K = 40;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> availableFruits = {"sldkhyd", "ksdlzd", "idjbjzgn", "icarwgzl", "kaoiumzcu", "gmrvhtilxg", "xhbfuch", "dqszu", "dyzjk", "mqxwosfdw", "xzqydij", "ylnun", "cmlokiqti", "xbwlfpqwdl", "sbkgkzkese", "sfgxsdn", "soilzzu", "foscuoyyt", "kotpq", "mriwkxvntc", "rupgjy", "uvehpom", "awetwix", "ncsom", "fkelsvqkbq", "yqbvdqfr", "iixqtudywm", "ukwlizks", "mhliqnnj", "peqzigywnm", "vyquqpfduv", "iwbqkhoby", "ommuywp", "secybfl", "qcvjxlanc", "tteamourp", "mzhbe", "xqijzvxh", "uatlbztekg", "esczafkkv", "fbjdsnzz", "ardtytoov", "szeand", "uobljulyl", "vexcptma", "tagdanfmyb"};
    vector<string> friendsDislikings = {"szeand rupgjy xzqydij yqbvdqfr ncsom vexcptma", "ylnun mzhbe szeand kotpq gmrvhtilxg dyzjk", "ksdlzd sfgxsdn xzqydij kotpq vexcptma ardtytoov", "kaoiumzcu uvehpom uatlbztekg ncsom mhliqnnj", "uvehpom sfgxsdn xqijzvxh ardtytoov szeand ksdlzd", "ksdlzd kaoiumzcu ncsom rupgjy szeand cmlokiqti", "mzhbe foscuoyyt idjbjzgn qcvjxlanc dyzjk uobljulyl", "tagdanfmyb cmlokiqti dyzjk ukwlizks ylnun awetwix", "peqzigywnm vexcptma soilzzu sbkgkzkese foscuoyyt", "sbkgkzkese xqijzvxh ksdlzd ylnun uatlbztekg", "cmlokiqti yqbvdqfr uvehpom esczafkkv xbwlfpqwdl", "dqszu qcvjxlanc icarwgzl foscuoyyt xqijzvxh ylnun", "uobljulyl peqzigywnm dyzjk secybfl foscuoyyt", "awetwix qcvjxlanc peqzigywnm icarwgzl esczafkkv", "uatlbztekg mriwkxvntc iwbqkhoby awetwix icarwgzl", "vexcptma idjbjzgn xhbfuch xzqydij mqxwosfdw", "vyquqpfduv mzhbe fkelsvqkbq yqbvdqfr iixqtudywm", "mriwkxvntc kaoiumzcu secybfl xzqydij iwbqkhoby", "awetwix sldkhyd vyquqpfduv kotpq ksdlzd tagdanfmyb", "fkelsvqkbq fbjdsnzz iwbqkhoby ardtytoov sldkhyd"};
    int K = 37;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> availableFruits = {"havlpvd", "tezeanvcyv", "kwbvopoiz", "nemsxj", "glucthkjxu", "mnzsqbb", "jgkbv", "mzcra", "mfkwnnkitj", "ftoqn", "vlhxc", "rewbhykum", "nliavilkan", "sijnezv", "mkxvfbafo", "ktqdqoyhx", "yaxzorh", "joymmkkq", "pxrozywrd", "cuqmpgls", "vtvnjapeuu", "fipoe", "yrfkz", "wbpkn", "qbmcz", "lupecqzt", "yjvalphpf", "cpokldyi", "nkeyodi", "mdecfhls", "gnhxaabaj", "iuavt", "meouvosa", "vqpoxjc", "pkmozpcb", "glqfnax", "urgtxedht", "nrnoh", "ikzmdezg", "xvviclhx", "hhbnhyhmv", "qilwpo", "ttwguwdtg", "rlnfker", "gxvdkie", "ezevgkzf", "nnqmoiovq"};
    vector<string> friendsDislikings = {"wbpkn mzcra rlnfker tezeanvcyv yrfkz meouvosa", "havlpvd qbmcz glqfnax yrfkz yaxzorh ikzmdezg", "nliavilkan pkmozpcb urgtxedht glucthkjxu nrnoh", "vqpoxjc lupecqzt ktqdqoyhx hhbnhyhmv ikzmdezg", "ezevgkzf nkeyodi sijnezv tezeanvcyv urgtxedht", "jgkbv ktqdqoyhx cuqmpgls vlhxc lupecqzt joymmkkq", "mkxvfbafo yjvalphpf glucthkjxu vqpoxjc mnzsqbb", "qilwpo ftoqn joymmkkq yaxzorh hhbnhyhmv nliavilkan", "mfkwnnkitj yaxzorh ikzmdezg gnhxaabaj yjvalphpf", "qilwpo mdecfhls xvviclhx vqpoxjc rlnfker nrnoh", "mzcra nliavilkan ikzmdezg vtvnjapeuu ktqdqoyhx", "mdecfhls nrnoh mnzsqbb vlhxc yjvalphpf glqfnax", "jgkbv ikzmdezg xvviclhx ezevgkzf glqfnax fipoe", "qilwpo yrfkz ezevgkzf kwbvopoiz cuqmpgls nrnoh", "havlpvd vtvnjapeuu glucthkjxu vlhxc glqfnax", "yaxzorh fipoe nemsxj cuqmpgls glqfnax jgkbv", "gnhxaabaj rewbhykum gxvdkie nnqmoiovq nrnoh", "vtvnjapeuu pxrozywrd mkxvfbafo yrfkz meouvosa", "kwbvopoiz nnqmoiovq nliavilkan mdecfhls vqpoxjc", "mdecfhls rlnfker sijnezv nnqmoiovq xvviclhx"};
    int K = 38;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"eqjzsvbdvy", "zsosgnx", "wczhxnujpn", "ebabo", "hvdmjlonx", "pfcweezf", "yhwpx", "alxegrwf", "ngimm", "iiozwwfif", "nspahnsuzo", "zqxqnwkh", "yonnzikyaj", "mxiyit", "zmopbxwf", "kqtwu", "qliwrwivl", "pfroxvqh", "xtqyyt", "qzxoijyixu", "sxbwsk", "ixtagr", "rpgwolrkyr", "crijkuvn", "mmhdnahx", "pzjqmls", "chuifxa", "xhlqghc", "xcptyow", "veqdcsfsz", "wcelorpoxx", "lfwfwlte", "kkpbgqw", "ljesjdxd", "atzmyycwes", "tilqbcgb", "oaout", "vsdxkwvjq", "urujqgqa", "jkftwjsirn", "yvsbpl", "xdtfxzwnto", "frovu", "bxhlxr", "bltcgqm", "egbtgaxc", "ssfsetrhax", "gqvzywcng", "bnoqi", "nqhlhdbltv"};
    vector<string> friendsDislikings = {"wcelorpoxx kkpbgqw pfcweezf sxbwsk ssfsetrhax", "oaout xdtfxzwnto pfcweezf ngimm veqdcsfsz", "jkftwjsirn oaout atzmyycwes eqjzsvbdvy nqhlhdbltv", "pfroxvqh yvsbpl sxbwsk kqtwu zmopbxwf bxhlxr", "wcelorpoxx ljesjdxd yhwpx vsdxkwvjq pzjqmls", "xtqyyt bxhlxr jkftwjsirn zqxqnwkh iiozwwfif", "kqtwu sxbwsk ngimm crijkuvn wcelorpoxx oaout", "xtqyyt chuifxa atzmyycwes zsosgnx yonnzikyaj", "yvsbpl ssfsetrhax alxegrwf sxbwsk xhlqghc chuifxa", "vsdxkwvjq hvdmjlonx ngimm ljesjdxd oaout gqvzywcng", "tilqbcgb lfwfwlte yhwpx kqtwu ixtagr hvdmjlonx", "atzmyycwes ssfsetrhax xcptyow wczhxnujpn", "wczhxnujpn zsosgnx vsdxkwvjq lfwfwlte yhwpx bxhlxr", "xtqyyt xcptyow egbtgaxc wcelorpoxx ssfsetrhax", "nspahnsuzo zsosgnx qliwrwivl vsdxkwvjq ebabo", "ngimm ljesjdxd bltcgqm xtqyyt eqjzsvbdvy", "rpgwolrkyr ixtagr chuifxa sxbwsk alxegrwf pfcweezf", "kkpbgqw zmopbxwf egbtgaxc ssfsetrhax iiozwwfif", "jkftwjsirn sxbwsk pzjqmls lfwfwlte zmopbxwf", "mxiyit urujqgqa pfcweezf yonnzikyaj xhlqghc"};
    int K = 40;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> availableFruits = {"vzyerrfbd", "ixolnpjsp", "mashmmz", "tdnyrsczwp", "mntvvsztrq", "gmyruiao", "gapwzmkd", "pcxlnpocaa", "fknokt", "lkqueljr", "wsbwzrzlmg", "aajrkbxt", "iljpsucfn", "skosquzduw", "ylwjrkjw", "atqsm", "eqgpvr", "fdahpi", "pyxdry", "rwjisi", "aqbiw", "cxlaj", "vuimpbr", "xzffkainp", "qiqqmitcew", "kngixbqy", "pfbqxkpat", "srhqinnmzj", "rgarz", "vqseuw", "xlkyhkgc", "ajozwnycdb", "nxoprtdlx", "caonfasd", "ycwovch", "hncyud", "xkopmh", "rkmgewg", "omrwiluvn", "tlznuc"};
    vector<string> friendsDislikings = {"rwjisi hncyud omrwiluvn gapwzmkd tlznuc kngixbqy", "rkmgewg gapwzmkd vqseuw ixolnpjsp pcxlnpocaa", "ylwjrkjw kngixbqy rkmgewg ixolnpjsp ajozwnycdb", "iljpsucfn xzffkainp rwjisi vqseuw xkopmh aajrkbxt", "aajrkbxt hncyud pfbqxkpat mntvvsztrq srhqinnmzj", "eqgpvr vzyerrfbd wsbwzrzlmg atqsm iljpsucfn", "eqgpvr rwjisi gapwzmkd ylwjrkjw ycwovch vuimpbr", "lkqueljr nxoprtdlx vuimpbr tlznuc vzyerrfbd", "ajozwnycdb omrwiluvn mntvvsztrq eqgpvr vqseuw", "gapwzmkd rgarz mntvvsztrq pcxlnpocaa aajrkbxt", "pfbqxkpat pyxdry rkmgewg vzyerrfbd gapwzmkd aqbiw", "hncyud tlznuc ajozwnycdb tdnyrsczwp caonfasd", "gmyruiao qiqqmitcew fknokt pfbqxkpat ixolnpjsp", "ixolnpjsp eqgpvr pcxlnpocaa pyxdry iljpsucfn", "wsbwzrzlmg ajozwnycdb xlkyhkgc xkopmh caonfasd", "gmyruiao pcxlnpocaa mntvvsztrq eqgpvr atqsm", "lkqueljr gapwzmkd atqsm tdnyrsczwp skosquzduw", "vuimpbr iljpsucfn kngixbqy ixolnpjsp pfbqxkpat", "rwjisi atqsm rkmgewg lkqueljr ylwjrkjw srhqinnmzj", "rkmgewg vqseuw ajozwnycdb srhqinnmzj aajrkbxt"};
    int K = 32;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> availableFruits = {"oqeesjmtfb", "thrjzsbyax", "dijowseyt", "qloxcc", "weydjiafpr", "myroqtmha", "ramxzsr", "tjjcjwvcvt", "kfzdh", "zxeghyi", "owvjg", "irwetijft", "wepokcwp", "ggsgqvt", "xngzwnlys", "pfmaellqq", "wxrcqjdm", "govmbenfd", "ecouut", "wtitkpykgm", "lafnzmvr", "ykqarlk", "lsvtsljdic", "jsfumpo", "ydlxiideju", "ibtabvki", "uwnrwdyu", "wtradzdxw", "tsxnwr", "euzkbf", "xuavmkmtfl", "zbupkjue", "zlqetbzlyd", "uphad", "cfafcj", "kifuryj", "eczuthesr", "tzonktmxzx", "wjmyiab", "isdxklnfoi", "yxkxho", "ousbomianc", "mfpre", "hgsyz", "gfijut", "tlewozr", "gwyrxte", "jawirmteiy"};
    vector<string> friendsDislikings = {"ackier jkrxlbcd jawirmteiy kfskzl wtradzdxw", "oxtrsomblp jvbxgfunq htwcic xngzwnlys ggsgqvt", "bidess plzsn qdeqq gfijut qhnbej isdxklnfoi", "ihvfswaxs jsfumpo wtitkpykgm lsvtsljdic fnwyxeqdxy", "cfafcj nvhculg owvjg wtitkpykgm jkrxlbcd", "mhryhfy cezsmtmcg fnwyxeqdxy plzsn mjouyt kooap", "irquynmygv xngzwnlys gwyrxte kooap plzsn jlzcccg", "kifuryj zjtszwoyf qhnbej ramxzsr uwnrwdyu qotlxls", "xngzwnlys hgsyz oxtrsomblp kooap zjtszwoyf wjmyiab", "kifuryj govmbenfd zlqetbzlyd kooap ackier mfpre", "hgsyz nvhculg nzbtfzj euzkbf xobrmkeyx xvpcqbvf", "ykqarlk myjawzyle htwcic ramxzsr fnwyxeqdxy", "jkrxlbcd nzbtfzj zwienkaxym jlzcccg jawirmteiy", "isdxklnfoi dijowseyt tjjcjwvcvt ihvfswaxs yxkxho", "mxjfnuid wxrcqjdm gsblxr jlzcccg fnwyxeqdxy", "jkrxlbcd ramxzsr jsfumpo tyfkihjxyz ndcjes nzbtfzj", "zbupkjue jawirmteiy myroqtmha eczuthesr netbf", "mjouyt thrjzsbyax qdeqq yshrbtey euzkbf kifuryj", "lsvtsljdic gwyrxte uwnrwdyu eldazn cfafcj ykqarlk", "uphad kxonbrf gttbwqky isdxklnfoi netbf lsvtsljdic"};
    int K = 42;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> availableFruits = {"euxhbnyxbk", "azjyxyxhj", "epzyoxtbhy", "bgsgbphq", "uykkbmajpu", "qisdypv", "jgiyiwg", "xykdnteib", "emptf", "ddjnxey", "kmncqtpz", "qickgk", "dsabo", "pvxnl", "agqxq", "ulkzqjsw", "ngnsocppgt", "wfezgm", "dnvod", "ddnekasusi", "wnvxieth", "augzitush", "ihhhdchhs", "heizenyyz", "vdbciubyj", "gmohnoil", "qyjrrnjb", "uclrzsps", "fdbvmy", "fyczxtqnmk", "ulgyzloap", "ligrdjvut", "btvvyd", "mysjpangnp", "nasawqawzf", "jguafbwzvf", "wcebhehjrc", "xvszy", "opzsu", "vvvfiu", "rehygounw", "aceupgejop", "ldksruajf", "hegryqyex", "fgqywhhoz", "bnbyzex", "mulegnvkec", "dazzxughg"};
    vector<string> friendsDislikings = {"rymuqjxk tzyzt hegryqyex sdmyb uykkbmajpu dnvod", "wfezgm gmohnoil bqcwb eryrxe fwtganos btvvyd", "bnbyzex awflrsq pvxnl heizenyyz sdmyb zjtaoham", "qixwpykeb ddnekasusi svniqgwrjl lwgey kmncqtpz", "dprrxn lzotojq uykkbmajpu nasawqawzf elmqvnlf", "fnqzln wigauvnxh fgqywhhoz gmohnoil augzitush", "tzyzt uxsoa dprrxn augzitush pwric ddvzzypkk", "dsabo hegryqyex fwtganos bqcwb ldksruajf ligrdjvut", "hisyitqte kstwamwoi mysjpangnp uzwuezoy qisdypv", "ngnsocppgt eerydpz ulgyzloap xvszy fdbvmy sdmyb", "ldksruajf fnqzln aceupgejop heizenyyz ihhhdchhs", "xykdnteib ulkzqjsw dazzxughg wnvxieth pvxnl coyvdg", "eerydpz iyvsgpzs hegryqyex qixwpykeb agqxq timgv", "dytimh wfezgm pwric ulkzqjsw uxsoa sdmyb tzyzt", "tzyzt mysjpangnp qyjrrnjb heizenyyz qixwpykeb", "delraz qixwpykeb jgiyiwg uclrzsps uzwuezoy", "ngnsocppgt coyvdg muadqn uxsoa pvxnl pwric fowxob", "ddjnxey ufqmbvk dytimh qyjrrnjb timgv epzyoxtbhy", "fwtganos kstwamwoi elmqvnlf rymuqjxk lwgey", "qisdypv jguafbwzvf coyvdg xykdnteib dytimh"};
    int K = 39;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> availableFruits = {"gakakki", "vlyekxth", "tzfnx", "vphpoelab", "ozwqxqicbx", "pvhydy", "qxxfaiu", "quazpao", "hlpibwfmhg", "ixnzqnmta", "bdbik", "hkmdwhxtno", "ijzdvqk", "vbxgzrw", "micomezwpr", "rvmwxzxui", "krvrk", "haxgos", "mdobt", "xkxnqp", "tmmgful", "uaymsirm", "pdvrnhcb", "bvywryplk", "fxhuruaxtb", "bsohac", "lhcbeyu", "rgolvzswzz", "hfuifasmfo", "cnoswy", "exjldhy", "jragbnqvon", "lsuxg", "dwjfuft", "qswimsx", "wbfct", "xxuylpiz", "uyrfwih", "knuwzlod", "lpzxi", "prmln", "xkitmy", "dmrqx", "qglke"};
    vector<string> friendsDislikings = {"hkmdwhxtno sdnxtm pdvrnhcb xkxnqp tzfnx ozwqxqicbx", "vbxgzrw hkmdwhxtno xbveulz kroqrdufb rgolvzswzz", "lugcco jragbnqvon ealilex tmmgful ohxjubb", "qgvwrlkhm bvywryplk fwrotnkcl uaymsirm hfuifasmfo", "mdobt tzfnx infiagirtx vbxgzrw wibjrb savkqsx", "exjldhy savkqsx vseoikce cnoswy xkxnqp xbveulz", "rgolvzswzz sdnxtm dmrqx tzfnx cpvowo vseoikce", "ohxjubb kdbubblbf vphpoelab gakakki ixnzqnmta", "rtskmcpzb ixnzqnmta vbxgzrw pugrdp ohxjubb", "qgvwrlkhm cnoswy rgolvzswzz aqmqp cgnvos pugrdp", "vseoikce bvywryplk zzpjqulwo pugrdp cnoswy", "sdnxtm vlyekxth wzinu lhcbeyu micomezwpr lsuxg", "lsuxg jragbnqvon ixnzqnmta pdvrnhcb csywb xttyg", "jragbnqvon abxetvlbd ijzdvqk cpvowo dwjfuft", "qglke infiagirtx ohxjubb hfuifasmfo kdbubblbf", "kroqrdufb fxhuruaxtb vphpoelab dmrqx hlpibwfmhg", "xxkejvfnih wbfct oprjsousoh lpzxi hrlaexiafk", "mdobt gakakki vabjqj lhcbeyu vphpoelab aqmqp", "xkitmy qmbhoubi rwttf qgvwrlkhm xxuylpiz lpzxi", "fftgdktzgy pdvrnhcb ixnzqnmta knuwzlod qswimsx"};
    int K = 37;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> availableFruits = {"tgtcnr", "dxkmq", "bnzxvhl", "hyrqstf", "stlohihty", "ivwnrpin", "mhcgts", "dvcfe", "lryovikmi", "izcmrh", "orvvhlxqup", "mrfnhobatn", "niejr", "xibcqb", "ldzwqm", "wsxpddupls", "vsukrarva", "culgzf", "gbgslrdjqf", "vxqhdaq", "gefmxvyw", "oxsnjks", "kngrrkano", "bbgrbehva", "tvmsdrblgm", "dleevvo", "lwvvo", "luvvcqzhs", "jleax", "iwecfoetml", "edsbnp", "hiorz", "keavwivqhw", "ooahqai", "ddsqeditjj", "qnutog", "kzggprpuz", "sxvysbcjr", "atujdhr", "ljduvwuk", "dvbwg", "dhgpwk", "puifosw", "lowlqzaim", "ulnhl", "gamtroefhi", "mfmdni", "mrjntivzp", "pwnetd"};
    vector<string> friendsDislikings = {"eziymwn canxuhs ljduvwuk xxsqphf dvyfsvvhtj jggfyt", "qnutog gbgslrdjqf ygjdnik tvmsdrblgm cqvexq", "oumrbjqf tgtcnr iolredz tpcculo sshenkt vvdpexdgsp", "mbgmdydz jleax wwmxlua ldzwqm sxvysbcjr lowlqzaim", "mhcgts brfsnni kkubdbb wsxpddupls dvbwg djgodlp", "unjhtezn gefmxvyw eziymwn oumrbjqf ritqnpdlzt", "kqjbbqc pqotwn xtsypj mbgmdydz stlohihty xibcqb", "ldzwqm keavwivqhw hyrqstf ffuplkfs dvcfe peoonw", "jrcph sshenkt izcmrh kngrrkano peoonw cqvexq", "ffuplkfs puifosw hyrqstf bnzxvhl krfljlgn", "ivwnrpin bnzxvhl svkepa xibcqb mursc dajvbol", "izcmrh xtsypj dleevvo mrjntivzp eoxliym lowlqzaim", "iwecfoetml tvmsdrblgm xquacxvp bbgrbehva wwmxlua", "xibcqb gudtmt canxuhs svkepa aubrksk pqotwn", "eoxliym edsbnp mrfnhobatn mrjntivzp sshenkt dvbwg", "ffuplkfs mhcgts yidnnrgq dleevvo jleax sshenkt", "oumrbjqf tvmsdrblgm xxsqphf vxqhdaq svkepa", "lryovikmi eoxliym bbgrbehva iolredz mrfnhobatn", "mrfnhobatn dtkdaibdgz dvyfsvvhtj puifosw dleevvo", "lryovikmi dtkdaibdgz ddsqeditjj dajvbol xxsqphf"};
    int K = 40;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> availableFruits = {"yzswl", "lfecaq", "dzyzmq", "rhgknsq", "oifqhi", "htofzl", "xohboddsem", "qclmq", "qoqooxjuva", "ledcejjw", "aijpi", "quldhc", "wtbvyrd", "qqfkkpm", "ildoxvqtsb", "srfbpzmoz", "nnknduzii", "egyriwq", "tbmxgel", "jartzspk", "mphmtebu", "loljashr", "mtimqy", "aluzyz", "pwcpxzooy", "kzfbpofvxy", "wunmcydob", "bvqomi", "tqsmtr", "lwevot", "jkqikbhf", "ivqwsjlvvp", "fmuymmijt", "cjupobf", "oimasdyset", "mmkhx", "lycbu", "dvdrfo", "rpbvnszry", "lkchlaxk", "pnjwgkju", "olydldr", "syputhr", "ktchcfuv", "bzxrnspvy"};
    vector<string> friendsDislikings = {"bslcwjwz aijpi iroyrfcetr fkdufx lycbu aiewulwqna", "hynnbrt eabbbpmdof ildoxvqtsb mtimqy aijpi dwocb", "ommisfdmt xkrzbhq pnjwgkju gbidt nnknduzii", "ktchcfuv mkmophd eouqpjsq cjupobf wunmcydob", "vngbdxkes unxop kzfbpofvxy akran dwocb fmuymmijt", "oaeefrz wzvqitpax rsjtpk itxphayxc oifqhi wtbvyrd", "lrigx xaqbirk kzfbpofvxy bfgdja eabbbpmdof", "zpnxuicm iroyrfcetr mmkhx oimasdyset lkchlaxk", "xohboddsem htofzl ommisfdmt cjupobf pnjwgkju", "gpcbhfpjv bfgdja eabbbpmdof qrnra pnjwgkju", "sbaxhok yvhuyr xkrzbhq akran jkqikbhf bzxrnspvy", "bfgdja pnjwgkju eabbbpmdof wunmcydob fkdufx htofzl", "dsdocpjfyg evyoqn mkmophd lfecaq aiewulwqna", "rsjtpk srfbpzmoz lkchlaxk jzhwfz tbmxgel lwevot", "mmkhx yvhuyr gqlujhsr oifqhi vngbdxkes egyriwq", "quldhc wzvqitpax mkmophd bslcwjwz mtimqy eouinr", "htofzl jkqikbhf xkrzbhq zpnxuicm jzhwfz bfgdja", "eabbbpmdof trrvrtad bzxrnspvy aiewulwqna wunmcydob", "azpzhnfl evyoqn wnsnvb buhmnld eabbbpmdof xkrzbhq", "ktchcfuv kzfbpofvxy ufwktu lwevot fokwt sbaxhok"};
    int K = 36;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> availableFruits = {"ejjciizm", "rlyxkcnxtf", "tmbtkjhysi", "vqfyrxf", "fqcpuzxzss", "rnbbvvytjn", "tzwxgnbmpg", "qneyznd", "mgkqq", "esqgg", "wjwztfls", "jhufcw", "xymor", "nmocjmfpf", "iqffbqze", "fmecwwboin", "gfvjvx", "vrkfbjs", "mkerf", "jmyvds", "bbgkmza", "rrogt", "btcwpvqyns", "fzrhtn", "ayuao", "lbyhdaie", "ofkrroamn", "kbfdfjwz", "vowfwu", "njpdqz", "ccabgfndk", "ikxlzkf", "evsfi", "wdkezwjk", "jxwhs", "alpoastvh", "yvrqw", "enfgus", "tynjnxmcx", "bkfthpw", "mfkpidmz", "czsudskk", "ajnrt", "njfse", "fpqzeqiai", "jljjr", "takopwonxo", "iuvdhxl", "pxqtycitna", "gfulnsvda"};
    vector<string> friendsDislikings = {"jkjrpjcg frvrd gfvjvx kbfdfjwz ekpkt iqffbqze", "xafzdnt iqffbqze iuvdhxl anagnqs vrkfbjs jmyvds", "bodbjmbubi kbfdfjwz gfvjvx kkeowa gwzcigigsr", "ofkrroamn pxqtycitna czsudskk mlxfhkuat fsqcezk", "pafiz jhufcw ayuao rnbbvvytjn fmecwwboin anagnqs", "yefqx evsfi lbyhdaie sjxehzl mlxfhkuat uziyybpod", "oaxmbh alpoastvh hvfjrnqzb hdbhqq uziyybpod", "btcwpvqyns czsudskk azcvuinvi ebbrp ajnrt wsdbyt", "btcwpvqyns dctnxzsno nmocjmfpf frvrd zondyg mgkqq", "azcvuinvi tynjnxmcx kkeowa hdbhqq qkhien bkfthpw", "zondyg ncmlpxsavn glgfwzvgvf ayuao mgkqq evsfi", "ngubugpq gfulnsvda azcvuinvi pxqtycitna tsjnam", "azcvuinvi ekpkt augxvxpa ngubugpq nmocjmfpf", "ekpkt mfkpidmz rlyxkcnxtf xgxyggeml jyyzg iuvdhxl", "lbyhdaie nlmsalrj rgddct iuvdhxl ayuao hdbhqq", "nmocjmfpf xpkuoes ozprwxybja tmbtkjhysi wdkezwjk", "fzrhtn iqffbqze fqcpuzxzss tsjnam pxqtycitna yuwbq", "takopwonxo ncmlpxsavn evsfi btcwpvqyns ikxlzkf", "tynjnxmcx yefqx ayuao xgxyggeml jhufcw ccabgfndk", "iggmaeaokc takopwonxo hvfjrnqzb njfse frvrd hjkmy"};
    int K = 19;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> availableFruits = {"vkvddvy", "vdqwavic", "usvldikgx", "lwzsptvj", "diolmcklyz", "gyiwusm", "ofwac", "rpukeliuh", "ninzwffpc", "hnnomgx", "uplxzzw", "ebbbtjr", "zgsvpgcyr", "luqwlass", "vfpekluw", "cmzqzfts", "pflzixuso", "ufsbwei", "dmpquuf", "rzggd", "uhxktl", "kvnww", "ktvwanfvw", "jggtmymc", "sazubetqy", "rfjii", "jstuqdali", "evmrvpafri", "dinzybf", "ngbsjgnibc", "hetfbonrmu", "jxyclulo", "madft", "ymkin", "dvehrwjpgf", "eoswv", "dyaeo", "euucm", "quzdui", "gjbxtzsiaq", "gvlrtt", "lsrlspx", "jfenvijw", "wgcgq", "rqjpf", "bpbhby", "sizosl", "zxxbiymns", "ychbvalc", "fpnhfeec"};
    vector<string> friendsDislikings = {"evruhvs ufsbwei uplxzzw madft cshat zxxbiymns", "diolmcklyz rzggd ngbsjgnibc csdxmxo yebjbatg", "gvlrtt rfjii oirtrnoo cczxei dvehrwjpgf qkccxnyrx", "ufsbwei kvnww ychbvalc rvyxzip euucm evmrvpafri", "ngbsjgnibc usvldikgx uplxzzw zkeqztm myavfjmd", "vmurrcea qkccxnyrx diuqiat cczxei madft qnjqi", "sizosl yebjbatg evmrvpafri gvlrtt vkvddvy dinzybf", "yebjbatg ihvxvzznb vmurrcea suprhhda dinzybf", "zxfgw xokstcva sazubetqy ychbvalc madft avnfhj", "cmzqzfts fyheltff oirtrnoo cjakeyo suprhhda sizosl", "cmzqzfts khahwsriny hqlan cczxei yhkmntj myavfjmd", "hnnomgx xwfjrgyil rfkzqft ingxwpf iqzubjg yhkmntj", "dvehrwjpgf yebjbatg ofwac kzybjeqma qkccxnyrx", "zxxbiymns diuqiat ihvxvzznb quzdui dvehrwjpgf", "dvehrwjpgf gyiwusm yebjbatg ofwac vdqwavic zhdbjs", "kzybjeqma vcayz vmurrcea cjakeyo wavqbhc fpnhfeec", "rfjii uplxzzw lwzsptvj sizosl diolmcklyz reepy", "ngbsjgnibc dyaeo vcayz sazubetqy ychbvalc jxbxnrbw", "nmtefkzj vkvddvy cyccypcl rvyxzip rzggd ayodzjuu", "suprhhda pmpeuaaaak lwzsptvj wutwhcojg kzybjeqma"};
    int K = 13;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> availableFruits = {"qyhpbf", "tjriqyn", "hqszvhval", "dihxpwftbi", "vqjzsxe", "bmqohquv", "crumzayart", "eirpi", "drjsp", "pwtvaywk", "wyaoycfjz", "pfsys", "tqlatwz", "dctrsiswrb", "xjwpdvo", "skavgpe", "roetxetgjv", "etjmmlovx", "crfkuwkah", "dqazyqdio", "atxaa", "mibbpq", "twnnyplpe", "vmrvgk", "ytatccbqzj", "cggllbeb", "uyyay", "mvymh", "kusdww", "uvdex", "qvtdbifl", "nylyk", "ujafu", "imxwd", "junvyku", "nrrugozik", "hgmslb", "ftyzxqv", "zllirb", "pcndvv", "ubwfsbknpn", "pohhvw", "tmbsbkyb", "qjaaxaerp", "bkwalsa", "udrmcazvw", "pfllkd", "ooyzrkrwps", "qeqkr", "qlufjzziwu"};
    vector<string> friendsDislikings = {"qeqkr dqazyqdio vametjon nrrugozik pfllkd eetzpnn", "eirpi bkibni jrdcwoanuc ooyzrkrwps qvtdbifl nrmdp", "uvdex dctrsiswrb vametjon eizct kejrgjp xzdtwfd", "qyhpbf crumzayart nzqiux rxznyj gbnplnsh jcilydgd", "bmqohquv eetzpnn ytatccbqzj xaepnxza zizihxaoi", "qjaaxaerp vsdxx bkibni spnidj gbnplnsh eirpi", "pfsys mvymh ngyxgtx dihxpwftbi dqazyqdio afzjme", "ujafu mmdoiqcq nnhka imxwd qeqkr zllirb ytatccbqzj", "ftyzxqv wyaoycfjz zizihxaoi amubqrh ytcdcefio", "mmdoiqcq zllirb kbdkfx vsdxx zknkl ftyzxqv ujafu", "zizihxaoi pfsys xgvlt fndgexh etjmmlovx zknkl", "vmrvgk bkwalsa dctrsiswrb ytcdcefio lmiynwb", "riseielqi dmmblud bkibni vametjon uyyay vppknqqez", "hgmslb dmmblud wyaoycfjz httdqx jscteopl", "qlvahzjx crfkuwkah drjsp bzqkiabfcd jscteopl", "zizihxaoi cvseqjtxj mmdoiqcq afzjme wjipwfb", "nnhka xaepnxza eetzpnn vqjzsxe mibbpq yqqgamf", "jrdcwoanuc eirpi nylyk crumzayart roetxetgjv", "kejrgjp roetxetgjv pohhvw pfllkd bkwalsa jscteopl", "bkibni fyshehiug pohhvw dihxpwftbi zknkl"};
    int K = 11;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> availableFruits = {"zvumugs", "tlwgv", "bvqeoeyu", "jcpsml", "edybezt", "qediotiddl", "rwapwzk", "zibxcu", "manqtpm", "tmexzz", "ryehdw", "mveuculhrw", "pvyhmw", "ibeguhv", "mbdlv", "ovwgrt", "rmnlhxxc", "ciqxws", "htxhlaohf", "uwnioj", "tpieldescf", "myrttxi", "kpwad", "zcjrfljl", "oluol", "ekpmdpfqua", "jxprjmrg", "qpwjf", "hvepyxg", "brpvcoyoh", "vwmgegvqoo", "jtotabqq", "uyebg", "ubmjxj", "zbisz", "dqgynkywb", "mkckf", "ixhtammtxn", "nbzhuf", "tvyuvkhsyf", "yktmvnqpln", "yizotf", "lwlpujmc", "goagv", "empfy", "hlfojuuprz", "drjzkosoo", "foptzd", "feucwkwr", "rzhcn"};
    vector<string> friendsDislikings = {"ovwgrt bekdubmoaw qmsyu yktmvnqpln imnpptjt yizotf", "jcpsml zyicqpng cgcjuf ibeguhv ekpmdpfqua iesia", "lghvebf htxhlaohf lbqdaqv empfy zbisz qerjgmbxqa", "foptzd yzufalu mqdbz dxftkesje wzybmsexl imnpptjt", "drjzkosoo ujsiw tmexzz dxftkesje ekpmdpfqua", "plmurkjuvj bekdubmoaw vwmgegvqoo rzhcn lwlpujmc", "tweqst ibeguhv zqhgfkomux fccqlydc brpvcoyoh", "ekpmdpfqua grtpijzvg tmexzz yktmvnqpln pekxkz", "tmexzz eoirt uwnioj zcjrfljl jxprjmrg qpwjf zbisz", "fmxdkcer obvkysqdat edybezt hfubwc pekxkz foptzd", "yzufalu plmurkjuvj vazhcey tmexzz qmsyu fppekkopmz", "cgcjuf lgyiacxfsw dqgynkywb yizotf vsambqiol", "zcjrfljl xhgax mbdlv pekxkz udfqui yqipazjxin", "pvyhmw dclhslwql nfctpc fppekkopmz empfy ibeguhv", "fmxdkcer qpwjf poxfh dxftkesje iesia tpieldescf", "uyebg xhgax whimtg eoirt fccqlydc edybezt bvqeoeyu", "zcjrfljl zqhgfkomux mkckf dxftkesje vsambqiol", "gudkjkmyi ixhtammtxn yzufalu udfqui qediotiddl", "nbzhuf ihhxhik manqtpm plmurkjuvj qzfzjeftp goagv", "xjroe rwapwzk fccqlydc yktmvnqpln zxhzpo zyicqpng"};
    int K = 34;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> availableFruits = {"cnkbo", "oltqfdlpr", "icqhfcyfme", "ciaiail", "pbtmugzmd", "jmwwwraer", "puraxn", "kkayarkm", "duywbdnu", "aopjy", "xhrehfwzea", "eqnspntlt", "zleatjbyma", "aylcojcfkl", "twiivmoet", "gwyakyovt", "tjauzpoe", "jtwqthgk", "ehdwsr", "sfvixzashx", "ihrxh", "gpnkqfe", "testdetl", "iqsyakiyb", "pyqjz", "gvifrxal", "kizqoparce", "elihnar", "uthmffv", "dfmdq", "gqpvu", "nntkhq", "gylacgqghv", "hrxumw", "ffsemtfz", "frspsaotw", "jwcex", "tlavhqj", "rxyxh", "nsuegl", "bxrln", "pobfgitn", "fdkqndqcb", "ighzgbhb", "hmqxnid", "srgnr", "xlfcandwb", "nxlsh", "cyzyln", "nzgek"};
    vector<string> friendsDislikings = {"oltqfdlpr ehdwsr rbkmmbc cnkbo jtwqthgk duywbdnu", "qieacfdmju jwcex gghjwcymn bcwtsdu qzmictdrih", "nppaaysfhb tjauzpoe icqhfcyfme aopjy osyzzzajpj", "testdetl tsodaum mfsohhzbva rxyxh elihnar ehdwsr", "ihrxh jtwqthgk fqdvtueq vvfsvxy mpzrl gjurjzymqn", "gpnkqfe duywbdnu vczev zbxkhe hjscyceg bfqovembak", "pzzkiay okzewnurpz jylxbn bcwtsdu pnalwv nndilk", "nsuegl zicqx pobfgitn okzewnurpz xzqsondv kkayarkm", "tlavhqj nzgek szxgzpjqw duywbdnu ascyd icqhfcyfme", "okzewnurpz tlavhqj xzqsondv eyjiracwo tjauzpoe", "srgnr nsuegl icqhfcyfme jwcex puraxn jfwvfgdyg", "ciaiail vvrctft duywbdnu vczev tjauzpoe bxrln", "gqpvu bvlvy eyjiracwo pzzkiay nxlsh jwcex pobfgitn", "cnkbo rbogcmszb zicqx vvrctft hjscyceg kkayarkm", "cyzyln vvfsvxy jmwwwraer hrxumw twiivmoet tjauzpoe", "tlavhqj gijdfftn ljcqjhun ihrxh gvifrxal hrxumw", "bfqovembak hmqxnid imjgxcwj exewgtmgna ihrxh zicqx", "zicqx gpnkqfe vvfsvxy dfmdq bxrln ierqvfh fqdvtueq", "ascyd kkayarkm athmzledmq ierqvfh vvfsvxy vczev", "pobfgitn iqsyakiyb bcwtsdu sdphyqqdg szxgzpjqw"};
    int K = 34;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> availableFruits = {"efozkbb", "pwdgwed", "psovgzyhh", "tjdgbiv", "dzbair", "bjjjfmsn", "ttnezlatma", "qbjdts", "fhmkny", "kaudt", "ybdwqa", "wjdhzfquh", "yhfsxzzx", "eppmai", "ioqmplqgke", "oaipjlun", "ptoct", "yviutrk", "ffmkddywv", "ftgcsyvddl", "ybfrhyg", "sylrhpwokv", "xlrcmo", "pxlgje", "uilebuhsab", "zjkcv", "bhqzmy", "czjjyekn", "yvjoro", "maecvcmasz", "uxxuzid", "zgnlxr", "vwtsd", "hvjtbx", "awnrveej", "rlbcrox", "zxmuyzd", "ublzxmd", "gfenrnae", "rravkjazp", "oltnajfk", "gvminp", "zkneu", "svqgygiue", "pnwoe", "hawrb", "corptu", "vidyhzlgdq", "ryethviwr", "wtjcsekkw"};
    vector<string> friendsDislikings = {"dlsqbgkzjs ftgcsyvddl jdunxh gvminp ioqmplqgke", "oltnajfk rfuvlfl msdizx cxblwjv oaipjlun lvupv", "swvmesnol yhfsxzzx leanvccmvk bnalnant pswtvtaht", "leanvccmvk hvjtbx ttnezlatma tppmlfz fhmkny", "rruskymhom zmhpoglf pwdgwed xtsaf ojihjej mjvjcfc", "pswtvtaht rfuvlfl cxblwjv ftgcsyvddl rruskymhom", "uagqfq ublzxmd zjkcv wnprg ioqmplqgke bdueuiw", "sgqqsd yvjoro pwdgwed gvminp uilebuhsab jtqtfq", "lyazq ybdwqa dlsqbgkzjs maecvcmasz vwtsd bdueuiw", "ybfrhyg bnalnant wnprg bhqzmy ahxzztimiy hxpnow", "oaipjlun bbzhdmovf hawrb hxpnow efozkbb bdueuiw", "efozkbb yhfsxzzx cvgekezxwg qbjdts jtqtfq uagqfq", "vidyhzlgdq uilebuhsab uxxuzid ybfrhyg rravkjazp", "awnrveej rfuvlfl xlrcmo msdizx yviutrk gckrlta", "jtqtfq ojihjej rbpogtkw psovgzyhh yvjoro eppmai", "psovgzyhh uilebuhsab wtjcsekkw oaipjlun efozkbb", "leanvccmvk corptu swvmesnol zikupnv dlsqbgkzjs", "bbzhdmovf qkriyh rfuvlfl ttnezlatma spajgobpwl", "tppmlfz rlryelikju fvcrbiz ahxzztimiy hawrb", "ltdiyobp spajgobpwl jvtyercm pswtvtaht xlrcmo"};
    int K = 23;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> availableFruits = {"ykznr", "omtxtvnrzn", "elumlocmw", "grzgynp", "setpv", "jbhisrlzgr", "zbhyyj", "mctomkqve", "owdggg", "eeubmmziad", "puuyiw", "brlvguebhh", "mongv", "wvkex", "shwgwbk", "bdcuoxj", "zedlq", "vprjnin", "ekghnbpv", "uularqkdo", "odxti", "jlwpjrdtcd", "hpjuojn", "uiwphwd", "mpbrfoek", "txkatqtv", "nzqyqzbqgf", "oflbdah", "lzctan", "bccsq", "qmdkl", "utcxopqup", "leaeydco", "xmvtcupm", "qgxtcntpzp", "cdfmz", "yhdsnq", "xykkwtjxt", "hyoqfnxsg", "nuzicujdhl", "ssosmtek", "vlvytio", "wtzzfsnr", "lrkoo", "ibtjlep", "gpkmne", "xtrsjuq", "fwqbjet", "xqsvhcrqr", "lyjjr"};
    vector<string> friendsDislikings = {"eueovflyj nuzicujdhl huufwz hpjuojn nadumgwk ykznr", "ekghnbpv sobrkkuc bccsq setpv uiwphwd mongv dzofhy", "hqnmsareiv nerftqajq eeubmmziad ubpzwjmbg", "uularqkdo pgaboo opcgiyon ubpzwjmbg qebwkyqal", "mpbrfoek qmdkl uiwphwd wvkex hgaanybfu eueovflyj", "wvkex fwqbjet leaeydco uiwphwd xmvtcupm omtxtvnrzn", "nerftqajq qebwkyqal dljwigs utcxopqup ufybybjux", "yhdsnq eueovflyj fscqy nzqyqzbqgf akxeoqt mongv", "pkdseotnh mzxeaodzwc qgxtcntpzp qxixezzemh", "csjmtvmmr sobrkkuc qebwkyqal setpv pkdseotnh", "ibtjlep mrulimynkh owdggg dprihkn wtzzfsnr", "mctomkqve qmdkl uularqkdo xykkwtjxt lrkoo", "vprjnin dprihkn ufybybjux huufwz zedlq zbhyyj", "lpfhmw bztnofvqnn ubpzwjmbg tthldcmzuk dzofhy", "cnttu txkatqtv tqeyrud elumlocmw lusipki mpbrfoek", "mpbrfoek mrulimynkh yhdsnq wimuzfdtg grzgynp", "jbhisrlzgr hgaanybfu hydbre flwiphiokq fwqbjet", "uvbndhcwoz xqsvhcrqr rycha aztdxto lsndsvmgc", "bccsq dljwigs pgaboo opcgiyon txkatqtv rycha mongv", "xtrsjuq brlvguebhh lusipki zbhyyj vpdcqrbnq qmdkl"};
    int K = 17;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> availableFruits = {"iisdwu", "zupvubstch", "bocwrrejco", "uxsjg", "jtplb", "wqmro", "cmzeecuadx", "ogzjqi", "biwklsfjij", "rlquqro", "zjpnmsgf", "zlfquwlwa", "wxkdw", "ezrzpcanau", "idxysbvq", "dxotvrjuad", "udwokf", "ecorivwwbb", "roghnpxzwu", "kiidzf", "hcjtr", "wszhbb", "ionxiti", "pcbkc", "nraznqizpb", "cbfyjzydb", "jgknrinmsq", "xudpkqk", "hzrxsur", "pclabqtcyd", "umdgicyztf", "apmzjscepe", "qreeings", "hhszexgw", "wqmqxuew", "dlfzm", "ezbaibm", "zaqxbbxixa", "lwmezrofd", "knmlbvgc", "gmmcr", "sxhmigay", "lpegubu", "iyjxb", "yjoqzlnfpv", "qqzygyf", "rszqpml", "qrvfhttx", "cpbwthyoqz", "qutzei"};
    vector<string> friendsDislikings = {"uxsjg biwklsfjij sxhmigay gsfmkqlwse jwkkwdspn", "jwkkwdspn xudpkqk udwokf wszhbb dqnvodps fdvxzc", "ecorivwwbb roghnpxzwu gsfmkqlwse muxrulovq abwqu", "rszqpml qpbtb duxoexgbn ezrzpcanau ekkpbreuan", "cimwjpujz dlfzm umdgicyztf ybcdvo dxotvrjuad", "fdvxzc uhxcjbu jbcehk jtplb ezbaibm yjoqzlnfpv", "roghnpxzwu ezrzpcanau jbcehk uxsjg umiasje", "tdqsm umdsclgpbs ejvpdpohk rlmotaet ybcdvo", "iyjxb zupvubstch qreeings apmzjscepe iwjio jbcehk", "oyrgm idxysbvq lwmezrofd zaqxbbxixa umiasje", "muxrulovq povzn pclabqtcyd pgpnhbx psllhypig", "jbcehk iwjio wqmro iyjxb duxoexgbn udwokf", "cimwjpujz zlfquwlwa ogzjqi wqmro hcjtr jbcehk", "jgknrinmsq oyrgm zaqxbbxixa uhxcjbu ecorivwwbb", "alqzpfn muxrulovq uxsjg ezrzpcanau sxhmigay", "issdsoon rlmotaet xkdejljeem ecorivwwbb qreeings", "kmikijyl issdsoon wuddeipxpm cmzeecuadx ionxiti", "mbiwzmvahe apmzjscepe yjoqzlnfpv ejvpdpohk", "rwytt jgknrinmsq rlquqro pcbkc wqmqxuew fdvxzc", "ogzjqi kiidzf rwytt nraznqizpb sxhmigay lpegubu"};
    int K = 30;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> availableFruits = {"dgmnuzdoj", "xmegnqmwt", "ejlqpvlbu", "vikfieckgb", "hitagmbt", "frtmqx", "vbqacxjbab", "whkmqzo", "sriot", "hktqkbq", "gkbqs", "vwzwzgn", "qinhhpgqn", "hwaniguj", "adxtjsd", "ujpokkz", "heljgbqnii", "rjczerzm", "tcvgs", "xxfaqpcg", "jvvtauggx", "ipezsygcy", "qyuvwa", "zwvfitdit", "owkpa", "umrtzov", "lmonbp", "bofoixcnih", "ervwaz", "lkhemxha", "cpnvpkxwfi", "hhvny", "oskxxpb", "cozzp", "zyuybuxyhs", "kkuljxqsm", "eszgbbl", "apjam", "firbry", "vxwmsm", "kmfvsuuud", "xbvurf", "hpescrmod", "awabw", "yhegbeiedn", "xgkgdlgq", "cfmnrmo", "nydnn", "upbshmekn", "qizuckn"};
    vector<string> friendsDislikings = {"qyuvwa hktqkbq dwbevux ingjqhs xmegnqmwt dgmnuzdoj", "owkpa orhxqzak gkbqs lkhemxha tcvgs fqdlasxr", "vikfieckgb szgap jcahtxo cfmnrmo hdlfvtrxc ohmil", "bdgyeeqbvg vbbbh suolrmlmwm njpddcg hktqkbq", "igsjiew izumwpppdr qgkepypk ygxlekk lmonbp awabw", "hitagmbt itxgrx wtzdvw jzjydktb mzamnu szgap ohmil", "rnpwjuzva dwjjsdybj xxfaqpcg ipezsygcy cpnvpkxwfi", "kmfvsuuud mzamnu jdsbce ljbuieuwoo bdgyeeqbvg", "vbbbh ipezsygcy rrphpdil zyxis xmegnqmwt dwbevux", "ipezsygcy rjczerzm jdsbce cpnvpkxwfi ldhehor", "hhvny rdellz ejlqpvlbu ohmil heljgbqnii eszgbbl", "rdellz rnpwjuzva nolnsgs ygxlekk dwbevux srelzovch", "ujpokkz xgkgdlgq cozzp uvsbzje rjczerzm ejlqpvlbu", "eszgbbl njpddcg ejlqpvlbu jzjydktb vwzwzgn", "wtzdvw uvsbzje vxwmsm nydnn isqst bofoixcnih", "ohmil orhxqzak dwbevux sahtkoquii hhvny gkbqs", "igsjiew umrtzov owkpa ygxlekk vwzwzgn xgkgdlgq", "rdellz cxbahpajrb mzamnu izumwpppdr zwvfitdit", "jjkrqyskwv ymnqgtbhx xmegnqmwt lmonbp msxqkxjlyv", "whkmqzo ipezsygcy kmfvsuuud gitdojc bmkgrqwqe"};
    int K = 38;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> availableFruits = {"fruit"};
    vector<string> friendsDislikings = {"fruit"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> availableFruits = {"fruit"};
    vector<string> friendsDislikings = {"anotherfruit coolfruit fruit"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"fruit"};
    vector<string> friendsDislikings = {"anothercoolfruit"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy"};
    vector<string> friendsDislikings = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy"};
    vector<string> friendsDislikings = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y"};
    int K = 26;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy"};
    vector<string> friendsDislikings = {"a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y", "a b c d e f g h i j k l m n o p q r s t u v w x y"};
    int K = 24;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> availableFruits = {"n", "c"};
    vector<string> friendsDislikings = {"j cleh f yaxfx", "c hnq wyg x", "pm wh ry uzq c"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> availableFruits = {"zv", "n", "z", "duukq", "mmpc", "gwtqf", "due", "lb", "iky", "mmjz", "jfo", "bgf", "up", "wh", "txp", "ep", "qj", "ydr", "fmedu", "iillp", "w", "coy", "xxio", "rihyq", "nzftj", "q", "agzes", "ldj", "fmk", "y", "xvt", "hvydt", "iem", "zx", "bcrtk", "g", "hm", "f", "fycq", "owj", "e", "cvycb", "sve", "atyz"};
    vector<string> friendsDislikings = {"a dj jio frwt ve uwtk kolj", "dppbo iq hm ngku bpm byf wj p"};
    int K = 40;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"cbxa", "k", "vz", "brlzu", "yjb", "svbj", "zm", "qk", "wc", "vkbp", "caqxo", "f", "ulep", "kmibg", "qiv", "fyg", "srox", "tust", "sorfg", "ktk", "kyvzs", "hh", "t", "xc", "pnwye", "u", "jsj", "qo", "evhfp", "ak", "uw", "um", "ydicy", "sbw", "wbjwy", "nxt", "qrcj", "mz"};
    vector<string> friendsDislikings = {"yjb nek ktk", "vz evhfp d zm bfvf", "lwf pu l ro", "yex hjl mmr sbw"};
    int K = 32;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> availableFruits = {"m", "ulfz"};
    vector<string> friendsDislikings = {"sr vilpu ao xxmk xiln ckfo io", "rl ly obddc tv qmhv vl j", "asn dcu soh i qmsed h nob", "r yinf wm e l cae g", "d uls llg pyic agf irkq qkvmd", "d rthjv sh a bhicl ql g", "p u w ixse crn tmu diatx", "b d q brw rnj e euz"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> availableFruits = {"apple", "orange"};
    vector<string> friendsDislikings = {"strawberry"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"apple", "orange", "strawberry", "cherry"};
    vector<string> friendsDislikings = {"apple orange", "apple cherry", "strawberry orange", "cherry", "apple"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> availableFruits = {"strawberry", "orange", "apple", "lemon", "watermelon"};
    vector<string> friendsDislikings = {"orange", "apple", "lemon", "watermelon"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> availableFruits = {"aaaa"};
    vector<string> friendsDislikings = {"a"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> availableFruits = {"a", "b", "c", "d"};
    vector<string> friendsDislikings = {"a c", "a b", "a d", "b c", "b d", "a b"};
    int K = 3;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx"};
    vector<string> friendsDislikings = {"a b c d", "k l p", "jj a b", "xx", "m n o"};
    int K = 47;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"kki"};
    vector<string> friendsDislikings = {"kkii", "kkiii", "kkiiii"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> availableFruits = {"a"};
    vector<string> friendsDislikings = {"b a", "b a"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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

int test58() {
    vector<string> availableFruits = {"strawberry", "orange", "apple", "lemon", "watermelon", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n"};
    vector<string> friendsDislikings = {"orange", "apple", "lemon", "watermelon", "q", "w", "e", "r", "t", "j", "k", "u", "d", "e", "f", "g", "h", "j", "k", "f"};
    int K = 10;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> availableFruits = {"aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax", "ay", "az", "ba", "bb", "bc", "bd", "be", "bf", "bg", "bh", "bi", "bj", "bk", "bl", "bm", "bn", "bo", "bp", "bq", "br", "bs", "bt", "bu", "bv", "bw", "bx"};
    vector<string> friendsDislikings = {"bh bk bb ap br bj bq bx av am bo aj an ba aw", "bk al as ar bd bg be am ax bj ac aw ai at br", "ag al bq bd ax av at bi bl bw ay ap au an ba", "bp be ag ax am au bu bf af az bi bb bk bd an", "ah ay bt bg ao ar bi br aa bl ai ba bc bm ad", "ab ae bx bg ak ba as bn am bk bs bt au bi bc", "ar ab bv ac bq ag be bk bp ap bn bs at bo bd", "bf ar bv av az aj bb ag ad bk ap bh at ay bc", "av bg bd ad at au as ai ap bo bx bu ax bt ab", "av af bd bm ao bc bp aa br bi ay bl ag bb ap", "aj bk bg ab bl bc az ah ay av ai bt bd bj br", "as bc br al bd ba ae an bm ag bo at ar bu ay", "br au bh bo bx aw az bs af bn ae bk at bg bq", "ao bv ah af ae bw al aw bc bx br bu as bo ak", "af ab al be bc au bk bs ba aw ap ai aq bg ay", "bl am ay aa bk ac bx bd as av ax bf be bh bs", "ak an bx bf bu aj ax as bo bt ba aq bi bq bk", "ah bt ag bd as bl am bw aw aj bk ak bq ab an", "aw av af at bx ae bn al bo ar bc bb aa bi ai", "au ay aw at bu bf be bi bq aa az bj bx bo bw"};
    int K = 10;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "ap", "app", "apple"};
    vector<string> friendsDislikings = {"apple", "apple", "apple", "apple"};
    int K = 7;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> availableFruits = {"apple"};
    vector<string> friendsDislikings = {"pineapple"};
    int K = 1;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> availableFruits = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "l", "k", "j", "h", "g", "f", "d", "s", "a", "z", "x", "c", "v", "b", "n", "m", "qq", "ww", "ee", "rr", "tt", "yy", "uu", "ii", "oo", "pp", "ll", "kk", "jj", "hh", "gg", "ff", "dd", "ss", "aa", "zz", "xx", "cc", "vv", "bb"};
    vector<string> friendsDislikings = {"a"};
    int K = 45;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"uu", "opopo", "qqqqq", "qwqqa", "wqwq", "pppppp", "qwqwqe", "zzzuuu", "oop", "tta", "zzzzt", "wew", "tzz", "dfsgd", "ghdfs", "dfdfvff", "ggfgf", "qwwe", "fdf", "ghg", "h", "adsfdsf", "fsdgfdg", "opopfg", "hbcvdfuds", "dsdsjfkjf", "djdj", "djfjf", "sodsk", "fdkfg", "fgbgfbgf", "gfgf", "dsffdsfdsgds", "fjdndnbd", "wqefd", "fdgfd", "jhjhkj", "vbvcnrt", "xbeffd", "fddfdghbxc"};
    vector<string> friendsDislikings = {"fdsg", "asaa", "dsfdsf", "sss", "aaaa", "qwqw", "oop", "wew", "qqq", "hbcvdfuds", "dsdsjfkjf", "djdj", "djfjf", "sodsk", "fdkfg", "ewr", "fghgjg", "wewewegv", "bn", "dfddd"};
    int K = 33;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "au", "av", "aw", "ax"};
    vector<string> friendsDislikings = {"aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "abdf", "efwfe"};
    int K = 50;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> availableFruits = {"apple", "orange", "strawberry", "cherry", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "po", "pp", "ii", "uu", "rr"};
    vector<string> friendsDislikings = {"apple orange", "apple cherry", "strawberry orange", "cherry", "apple", "as", "a", "c", "d e f g h i j k l m n o", "pp", "uu rr a www"};
    int K = 20;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "eeh"};
    vector<string> friendsDislikings = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "aa", "bb", "cc", "dd"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g"};
    vector<string> friendsDislikings = {"a", "b", "c", "d", "e", "f", "g"};
    int K = 7;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m"};
    vector<string> friendsDislikings = {"e g z", "u h s", "a w e r t", "a", "w q u t", "e f t s n", "o k n j i u h d", "q", "w", "y t", "s d", "x g", "h u j", "a s d", "g j n", "a x h u k", "q w u j", "c f s", "q i y"};
    int K = 15;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f"};
    vector<string> friendsDislikings = {"a", "b", "c", "d", "e", "f"};
    int K = 5;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "aq", "bq", "cq", "dq", "eq", "fq", "gq", "hq", "iq", "jq", "ar", "br", "cr", "dr", "er", "fr", "gr", "hr", "ir", "jr", "as", "bs", "cs", "ds", "es", "fs", "gs", "hs", "is", "js", "ta", "tb", "tc", "td", "te", "tf", "tg", "th", "ti", "tj"};
    vector<string> friendsDislikings = {"a b c tdf gf fggb sd er fwe asd", "a b c fggb sd er fwe asd", "a b c", "a b c", "a b c", "a b c", "a b c", "a b c", "a b c", "a b c", "d", "e", "f", "g", "h", "i", "j", "k", "dd", "abcd"};
    int K = 24;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "z", "qw", "we", "er", "rt", "ty", "yu", "ui", "io", "op", "as", "sd", "df", "fg", "gh", "hj", "jk", "kl", "zx", "xc", "cv", "vb", "bn", "nm", "po", "iu", "uy", "yt", "tr", "re", "ew"};
    vector<string> friendsDislikings = {"a", "b", "c", "d", "e", "f", "g", "h", "j", "k", "l", "p", "w", "z", "x", "qw", "we", "er", "rt", "ty"};
    int K = 48;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "xx", "yy"};
    vector<string> friendsDislikings = {"t u v w x y z aa bb cc", "ff gg hh ii jj kk ll mm nn", "a b c", "c d e", "dd e f", "g a b", "e r h", "t q w", "e r s"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> availableFruits = {"a", "ab", "abb", "abbb", "abbbb", "abbbbb", "abbbbbb", "abbbbbbb", "abbbbbbbb", "abbbbbbbbb", "abbbbbbbbbb", "abbbbbbbbbbb", "abbbbbbbbbbbb", "abbbbbbbbbbbbb", "abbbbbbbbbbbbbb", "abbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbkbbbbbbb", "abbbbbbbbbbbbg"};
    vector<string> friendsDislikings = {"a", "ab", "abb", "abbb", "abbbb", "abbbbb", "abbbbbb", "abbbbbbb", "abbbbbbbb", "abbbbbbbbb", "abbbbbbbbbb", "abbbbbbbbbbb", "abbbbbbbbbbbb", "abbbbbbbbbbbbb", "abbbbbbbbbbbbbb", "abbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbb"};
    int K = 50;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"a", "b", "c"};
    vector<string> friendsDislikings = {"b", "a b c", "a b", "a b c"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "j", "k", "l", "p", "ww", "ee", "rr", "tt", "yy", "uu", "ii", "oo", "ll", "kk", "jj", "hh", "gg", "nnn", "jjj", "qqq", "www", "eee", "rrr", "ttt", "yyy", "uuu", "iii", "ooo", "ppp", "aaa", "sss", "qqqq", "wwww", "eeee", "rrrr", "tttt", "yyyy"};
    vector<string> friendsDislikings = {"z", "x", "k", "l", "o", "i", "y", "t", "r", "r", "w", "d", "f", "g", "h", "j", "n", "m", "v", "c"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "zz", "ab", "ac", "ad", "ae"};
    vector<string> friendsDislikings = {"a b c", "d e f", "g h i", "j k l", "m n o", "p q r", "s t u", "v z aa", "bb cc dd", "ee ff gg", "hh ii jj", "kk ll mm", "nn oo pp", "qq rr ss", "tt uu vv zz", "ab ac ad", "a b c d e f", "g h i j k l m n", "e r t s d f", "j k l m n c f p"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "w", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "xx", "yy", "yyy", "yyyy"};
    vector<string> friendsDislikings = {"a b c d e f g h i j", "a b c d e f g h", "aa bb b c dd ee yyy", "a b c d e f g h i j k l m n o p r s t yyyy", "p q r s t u v w x y z", "a b c d e f g h i j k l m n o p q r s t", "a b c d r s t u v x aa bb cc", "a", "b", "c d e", "a b c d", "a e f g h i j k l", "a b c", "r s t u v", "yyyy", "y aa bb cc dd yyy a b c d"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> availableFruits = {"a", "b", "c"};
    vector<string> friendsDislikings = {"a", "b", "c"};
    int K = 2;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"a", "b", "c", "d"};
    vector<string> friendsDislikings = {"a b c", "a b c", "a b c", "a d"};
    int K = 3;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
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
    vector<string> availableFruits = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "xx", "yy"};
    vector<string> friendsDislikings = {"t u v w x y z aa bb cc", "ff gg hh ii jj kk ll mm nn", "a b c", "c d e", "dd e f", "g a b", "e r h", "t q w", "e r s", "u v w x y z aa bb cc dd ee ff gg hh ii jj kk", "w r q s f", "r q w e a", "h d s f a", "w r y u e", "w q g a z v", "q t y u i", "u y t r e w q", "q w e r s d", "f a s d w e", "q w e r t y"};
    int K = 25;
    BirthdayCake* pObj = new BirthdayCake();
    clock_t start = clock();
    int result = pObj->howManyFriends(availableFruits, friendsDislikings, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22678534&rd=13513&pm=10036
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <math.h> 
#include <sstream> 
#include <set> 
#include <map> 
 
using namespace std; 
 
#define fr(i, n) for(i = 0; i < n; i++) 
 
#define pb push_back 
 
#define Eps 1e-11 
 
vector< vector<int> > Link; 
int check[ 30], N, M; 
     
class BirthdayCake{ 
public: 
  bool work( int x, int left, int K) 
  { 
    if( x == M) 
    { 
      if( left == 0) 
      { 
        int i, j; 
        vector<int> Fil(N, 0); 
         
        fr(i, M) 
        { 
          if( check[i] == 0) 
            continue; 
             
          fr(j, Link[i].size()) 
            Fil[ Link[i][j]] = 1; 
        } 
         
        int cnt = 0; 
     
        fr(i, N) 
        { 
          if( Fil[i] == 0) 
            cnt++; 
        } 
         
        if( cnt >= K) 
          return true; 
      } 
       
      return false; 
    } 
     
    check[x] = 0; 
    if(work( x+1, left, K)) 
      return true; 
     
    if( left > 0) 
    { 
      check[x] = 1; 
      if( work(x+1, left - 1, K)) 
        return true; 
    } 
     
    return false; 
  } 
   
  int howManyFriends(vector <string> AV, vector <string> FR, int K) 
  { 
    int i, j; 
     
    N = AV.size(), M = FR.size(); 
    Link.clear(); 
     
    fr(i, M) 
    { 
      vector<int> V; 
      istringstream sin( FR[i]); 
      string fruit; 
      while( sin >> fruit) 
      { 
        fr(j, N) 
        { 
          if( AV[j] == fruit) 
          { 
            V.pb( j); 
            break; 
          } 
        } 
      }  
       
      Link.pb( V); 
    } 
     
    for(i = M; i > 0; i--) 
    { 
      if( work(0, i, K)) 
        break; 
    } 
     
    return i; 
  } 
};

********************************************************************************
*******************************************************************************/