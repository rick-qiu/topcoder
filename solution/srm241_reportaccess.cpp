/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4485
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

class ReportAccess {
public:
    vector<string> whoCanSee(vector<string> userNames, vector<string> allowedData, vector<string> reportData);
};

vector<string> ReportAccess::whoCanSee(vector<string> userNames, vector<string> allowedData, vector<string> reportData) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> userNames = {"joe", "nick", "ted"};
    vector<string> allowedData = {"clients products", "products orders", "clients orders"};
    vector<string> reportData = {"clients", "products"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"joe"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "cheryl", "tony"};
    vector<string> allowedData = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users"};
    vector<string> reportData = {"users"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dan", "kathy", "steve", "tony"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> userNames = {"jim", "scott", "barbara"};
    vector<string> allowedData = {"users order products", "products shipping", "tracking products orders"};
    vector<string> reportData = {"admin"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> userNames = {"btnttzlloigwxp", "zznvaxxqaargkehha", "vrgakq", "iizdylyutdcafgdspwik"};
    vector<string> allowedData = {"nciizwywlrhvuc zwfqsmcybwfdequ hwggkhrzhrvststeaao", "domegizmfvn pbhaivegfrpfteao ynnqshlskpjrmqtb ognn", "dkxcnprbu jwplkwnwsecavpulmhde bzssca idbr", "esu"};
    vector<string> reportData = {"khhbivaafluhaci", "wtism"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> userNames = {"jtltfmvkecneuudds", "itlnbqvhcubcrenvh", "nqxadrbzgvlntc", "rlyewlnzzijipb"};
    vector<string> allowedData = {"fzmwl zjvxy w ynmgy dwwug kdjtt xhbt bdqdd", "sqknfxnsl dai zjvxy bls plhuo w ynmgy dwwug kdjtt", "dai dai zjvxy bls plhuo kdjtt xhbt", "nf dai zjvxy bls plhuo w ynmgy dwwug kdjtt bdqdd"};
    vector<string> reportData = {"bls", "dwwug"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"itlnbqvhcubcrenvh", "rlyewlnzzijipb"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> userNames = {"ibmxjrwikuuxafbxyyol", "hsoiauzkvjlsxhlroass"};
    vector<string> allowedData = {"bdqdd dai zjvxy plhuo w kdjtt xhbt bdqdd", "xttzxpwwpvkve dai zjvxy bls kdjtt xhbt"};
    vector<string> reportData = {"zjvxy", "w", "xhbt"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ibmxjrwikuuxafbxyyol"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> userNames = {"fshmqtmecbsftuuldum", "detdzgv", "k", "jzsyits", "gqgtvto", "uvra"};
    vector<string> allowedData = {"wrjd ameh r pwexg yljwm zjzft qocpf esimf", "ax r zjzft pzpnx qocpf esimf rt", "uef r yljwm pzpnx kiakp qocpf esimf", "iuqbuserkqbfkdkyfwza ameh r pwexg yljwm pzpnx qocp", "tilamtpuugayizfp r pwexg yljwm zjzft kiakp qocpf e", "xtckodw ameh r pwexg yljwm zjzft pzpnx kiakp qocpf"};
    vector<string> reportData = {"ameh", "pzpnx", "kiakp"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"uvra"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> userNames = {"nbamp", "bodyrgtjybwtzom", "encrlhlz"};
    vector<string> allowedData = {"xtckodw r pwexg yljwm zjzft pzpnx kiakp qocpf esim", "yljwm ameh r pwexg zjzft kiakp qocpf rt", "ri r pwexg pzpnx qocpf esimf"};
    vector<string> reportData = {"pwexg", "pzpnx", "kiakp"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nbamp"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> userNames = {"yxgenlmpkmezvr", "futthkohvpwfywnafgbr"};
    vector<string> allowedData = {"djnlvqc pwexg yljwm pzpnx kiakp qocpf esimf rt", "djnlvqc ameh kiakp qocpf esimf"};
    vector<string> reportData = {"esimf"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"futthkohvpwfywnafgbr", "yxgenlmpkmezvr"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> userNames = {"ys", "ehrfpqrazobws", "cogtmdieqryxugj", "vaeb", "nbczoncvpxtzdmocitq", "jddrfhmmvudft", "wxwggfacfztvljr", "relppztv", "nxrfy", "hlmzbusrc", "zozfalgmenw", "lzs", "bnufocqvhmemz", "zaxkqlovkgzjun", "zimmtvrzcnxynh", "wiiydnw", "cdtwwj", "utoekudpx", "bgflgoxonhrbbt", "vrdudntscr", "j", "vfhtcxi", "ve", "kxwmiaxgl", "nbczoncvpxtzdmocitq", "uoltqh", "preiykyms", "ln", "ltzubvidfa"};
    vector<string> allowedData = {"vwieol ewzqn buvaq yejzk jlje wpnvg bnulu kyixd w", "rvldfsor ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu", "kyixd buvaq yejzk wpnvg bnulu", "wynotwfch ewzqn pjgpl buvaq jlje kyixd w", "ivgakfkyw ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu", "becymxxtqynza ewzqn jwawy yejzk jlje wpnvg bnulu k", "gzrmaqgpraldsujr ewzqn pjgpl buvaq jwawy wpnvg bnu", "ntesdlucplwevqv ewzqn pjgpl buvaq jlje bnulu kyixd", "avbggynr jwawy yejzk jlje wpnvg bnulu w", "dgavxavlfutjrzmhr ewzqn pjgpl jwawy jlje wpnvg bnu", "jv pjgpl buvaq jwawy yejzk jlje kyixd w", "xui ewzqn buvaq jwawy yejzk wpnvg bnulu kyixd w", "dgavxavlfutjrzmhr pjgpl jwawy jlje wpnvg bnulu w", "jlje yejzk jlje wpnvg bnulu w", "jobuwc pjgpl buvaq yejzk jlje wpnvg kyixd", "fssxz ewzqn pjgpl jwawy yejzk jlje wpnvg kyixd", "kpigmcb ewzqn pjgpl buvaq jwawy bnulu kyixd w", "ewzqn ewzqn pjgpl jwawy jlje kyixd w", "kefsixutwmvtxn ewzqn pjgpl buvaq bnulu kyixd w", "zgicwnbtqkeltmsmwbt ewzqn buvaq yejzk jlje bnulu k", "ogqp buvaq yejzk jlje wpnvg kyixd", "ctpzjktju pjgpl jwawy yejzk jlje wpnvg w", "lnwktmtrergl ewzqn pjgpl buvaq jwawy jlje wpnvg bn", "rqt pjgpl buvaq jlje kyixd w", "flplzfozdngebqudrn ewzqn pjgpl buvaq jwawy jlje wp", "jv ewzqn pjgpl jwawy jlje wpnvg kyixd", "obsiaexfjngnpkvfvfax pjgpl buvaq jwawy yejzk jlje", "ofdufqc ewzqn pjgpl jwawy jlje wpnvg bnulu kyixd w", "rmxnuldrdm ewzqn pjgpl buvaq jlje wpnvg bnulu kyix"};
    vector<string> reportData = {"ewzqn", "wpnvg", "bnulu", "w"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ln", "lzs", "ys"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> userNames = {"bxzqwrbdfmskzjko", "tbtfuasxiujicpakawmn", "ln", "fewdudxnjjlf", "zqfzlnak", "ans", "eve", "wjqozvqkcwxc", "u", "stbm", "ctfvkxokvm", "xvlupe", "bdkoecbgfvnggn", "zaxkqlovkgzjun", "thzopcyqkqmxgfrtp", "yp", "ltzubvidfa", "pdrsfqok", "ptmtaprjdxhezywt", "uyropmlhoqztcg", "gvnaqqtqdecaydez", "ihrjtlguegwfklbq", "egasbqy", "qv", "sqeopluesiryhkha", "wridloag", "cdtwwj", "uwxkylcllquzmusfwpr", "gakknxxspwmv", "hwfdgkpjpivspjyyqna", "xvlupe", "yzzlppvewr", "tqqkshkivozro", "g", "zmjqcjmgpvdlwxtfxbog", "bgflgoxonhrbbt", "ftbfmsjacqewbygbki", "ynbjrgnjtaffnzrxgj", "rvftvpoe", "boqpixnow", "lxhqhhttlmlxo", "gtps"};
    vector<string> allowedData = {"wildmfayrzwdage pjgpl jwawy yejzk jlje wpnvg w", "jwawy pjgpl buvaq jwawy yejzk jlje wpnvg bnulu kyi", "ogqp pjgpl buvaq jwawy yejzk wpnvg bnulu kyixd", "cjihcboqztp ewzqn pjgpl buvaq yejzk jlje wpnvg bnu", "cftnj pjgpl jwawy yejzk jlje wpnvg kyixd", "afovlrkzxsguyqwa ewzqn pjgpl buvaq jwawy yejzk jlj", "cftnj ewzqn pjgpl buvaq yejzk wpnvg w", "hecqrizgfqgdywavwfxu ewzqn pjgpl buvaq jwawy yejzk", "jv jwawy yejzk jlje wpnvg bnulu", "jwawy ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnu", "jwawy ewzqn buvaq jwawy yejzk jlje wpnvg bnulu kyi", "oyacloszmswxmkuiaoc ewzqn pjgpl buvaq jwawy jlje w", "l ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu kyixd", "cvjtz ewzqn buvaq jwawy yejzk bnulu kyixd w", "cvjtz pjgpl yejzk jlje bnulu kyixd", "jsosuxxgs pjgpl buvaq jwawy jlje bnulu w", "ewzqn ewzqn buvaq jwawy yejzk bnulu w", "kefsixutwmvtxn buvaq jlje wpnvg kyixd", "rvldfsor jwawy yejzk jlje wpnvg kyixd w", "becymxxtqynza ewzqn jwawy jlje bnulu kyixd w", "jv pjgpl buvaq jwawy wpnvg bnulu kyixd w", "jobuwc pjgpl buvaq jwawy yejzk jlje bnulu kyixd w", "avbggynr ewzqn pjgpl jwawy yejzk wpnvg kyixd", "oyacloszmswxmkuiaoc ewzqn pjgpl buvaq yejzk bnulu", "ldnmvcrh ewzqn pjgpl jwawy yejzk wpnvg kyixd w", "e pjgpl buvaq yejzk wpnvg bnulu w", "pmlsqebusevpgxxz ewzqn buvaq jwawy yejzk jlje wpnv", "xhmmlqypsdnyslf ewzqn pjgpl buvaq yejzk jlje wpnvg", "lnwktmtrergl ewzqn pjgpl buvaq jwawy jlje bnulu ky", "qyybrimrjtxhvrqd buvaq jwawy yejzk jlje wpnvg bnul", "ibshjjwzewuasgyf pjgpl buvaq jwawy jlje wpnvg bnul", "khtyxtx pjgpl buvaq yejzk jlje bnulu kyixd w", "ntesdlucplwevqv ewzqn pjgpl jwawy yejzk jlje wpnvg", "kdj ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg kyixd", "ndodydzaci ewzqn pjgpl buvaq jwawy jlje wpnvg kyix", "ogqp ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnul", "e ewzqn buvaq jlje wpnvg bnulu kyixd w", "jxnq ewzqn pjgpl buvaq jwawy yejzk jlje bnulu kyix", "vwieol ewzqn pjgpl buvaq yejzk jlje wpnvg bnulu ky", "vscsxvdbbeexp pjgpl buvaq jwawy yejzk jlje wpnvg b", "rmxnuldrdm ewzqn pjgpl buvaq yejzk jlje wpnvg bnul", "plmvurrrblqjrtofpee ewzqn buvaq jwawy jlje wpnvg b"};
    vector<string> reportData = {"bnulu", "bnulu"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bdkoecbgfvnggn", "ctfvkxokvm", "ftbfmsjacqewbygbki", "gakknxxspwmv", "gvnaqqtqdecaydez", "ihrjtlguegwfklbq", "ln", "ltzubvidfa", "qv", "rvftvpoe", "tbtfuasxiujicpakawmn", "thzopcyqkqmxgfrtp", "u", "uyropmlhoqztcg", "wridloag", "ynbjrgnjtaffnzrxgj", "yp", "yzzlppvewr", "zaxkqlovkgzjun"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> userNames = {"ieljvksbpvrrnfjeiwg", "cxnwqniygkszayuny", "nhpe", "iqbkubsfmnp"};
    vector<string> allowedData = {"tiktdeglwxm ewzqn pjgpl buvaq yejzk jlje w", "j ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnulu", "ivgakfkyw ewzqn buvaq wpnvg bnulu w", "wynotwfch ewzqn pjgpl yejzk jlje wpnvg bnulu"};
    vector<string> reportData = {"wpnvg", "kyixd"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> userNames = {"numkkdw", "ldbcpksfhlhmsan", "qylnvneahpesobi", "gczrjeqjrmi", "xr", "yunvydwzggozdai", "ttrnuqcejkwethc", "qlchxcdiee", "zqspdpwgdxjxcvqhkqbl", "kxwmiaxgl", "xkuvikdbdsb", "xbxmqisgzirvhsbiytjo", "wggu", "mnozaouicaifid", "gwoz", "qkfwnrdjk", "zpevmakvswjuwux", "v", "wqspyretdlabydyne", "xvpirwrkmjvjmcnrrns", "gab", "yutjmaqhkleoa", "yopieiayzlnkba", "zshsmacj", "viqjvaktx", "jxnaadmruwicuixyvpc", "q", "en", "pqfgyrlywst", "wwrykqscfptepumj", "zqautknvdf", "plxrcanamt", "amup", "wghiivarvztlxpnd", "osbirisjzoye", "sqeopluesiryhkha"};
    vector<string> allowedData = {"neojerbbobebdb ewzqn jwawy jlje wpnvg kyixd", "tzkfcn ewzqn pjgpl buvaq jwawy jlje bnulu kyixd", "tnyy ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnul", "neojerbbobebdb pjgpl buvaq yejzk jlje bnulu w", "jf ewzqn pjgpl jwawy jlje wpnvg w", "gfr ewzqn buvaq jwawy yejzk jlje wpnvg bnulu kyixd", "oyacloszmswxmkuiaoc pjgpl buvaq jwawy yejzk jlje w", "zfc ewzqn pjgpl jwawy yejzk jlje kyixd w", "avbggynr ewzqn buvaq jwawy yejzk jlje wpnvg bnulu", "xui ewzqn pjgpl jwawy yejzk jlje bnulu kyixd w", "acrxrspbrp ewzqn pjgpl buvaq jwawy yejzk wpnvg bnu", "ewzqn ewzqn jwawy yejzk bnulu kyixd", "vscsxvdbbeexp ewzqn pjgpl buvaq jwawy yejzk jlje w", "kyixd ewzqn pjgpl buvaq yejzk jlje kyixd w", "rvnscfnkew pjgpl buvaq jwawy jlje wpnvg bnulu kyix", "wildmfayrzwdage pjgpl buvaq jwawy wpnvg bnulu kyix", "krsjugy ewzqn jwawy yejzk jlje wpnvg bnulu", "vscsxvdbbeexp pjgpl jwawy yejzk wpnvg bnulu w", "vwieol ewzqn jwawy yejzk jlje wpnvg bnulu w", "afovlrkzxsguyqwa ewzqn pjgpl buvaq jwawy yejzk wpn", "e ewzqn pjgpl buvaq jwawy jlje bnulu kyixd", "gfr ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnulu", "drzduxznprir ewzqn pjgpl jwawy yejzk jlje bnulu ky", "meeubzgcq pjgpl jwawy yejzk wpnvg w", "ivgakfkyw ewzqn buvaq yejzk jlje wpnvg bnulu kyixd", "cftnj ewzqn buvaq jwawy jlje bnulu w", "gzqfgqwj ewzqn buvaq jwawy bnulu kyixd", "qyybrimrjtxhvrqd buvaq jwawy yejzk jlje kyixd w", "ntesdlucplwevqv pjgpl buvaq jwawy yejzk wpnvg w", "ivgakfkyw pjgpl jwawy yejzk bnulu w", "kpigmcb ewzqn buvaq jwawy yejzk jlje wpnvg bnulu k", "nkihyigtchhcufs ewzqn buvaq jwawy yejzk jlje wpnvg", "mcm ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu w", "hecqrizgfqgdywavwfxu jwawy jlje wpnvg bnulu w", "cvjtz ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyi", "wpnvg ewzqn pjgpl jwawy jlje wpnvg bnulu kyixd w"};
    vector<string> reportData = {"wpnvg", "bnulu"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"amup", "gwoz", "osbirisjzoye", "qkfwnrdjk", "sqeopluesiryhkha", "v", "viqjvaktx", "wghiivarvztlxpnd", "wqspyretdlabydyne", "yunvydwzggozdai", "yutjmaqhkleoa", "zpevmakvswjuwux", "zqautknvdf", "zqspdpwgdxjxcvqhkqbl"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> userNames = {"bgflgoxonhrbbt", "ulmqtlivej", "hopgxgjvocpx", "zdauf", "mbseaqpu", "mbvivcvfwegachnsulux", "orfltocep", "lfooyindx", "yt", "xousmksnmhrfvzlpa", "utoekudpx", "bbltgkpaopzbextycmd", "vz", "oosgeqzzkyfcam", "xr", "vvjdwaibylhqbadqw", "dxhzgkoxnazjf", "i", "msjhyy", "rvftvpoe", "tghmcbjwjnreaugmdr", "lpdpbjcynak", "jqzn", "zimmtvrzcnxynh", "cndqj", "hlwbhphewfvbgl", "ogcnfqmdr", "nubdyynemlbyo", "dj", "bczomnwooxu", "dgviezfnvte", "preiykyms", "tghmcbjwjnreaugmdr", "tghmcbjwjnreaugmdr", "dxjkb", "hhyaqv", "s", "ofpgctwbzfzfdxw", "wwrykqscfptepumj", "skfhdhmaoem"};
    vector<string> allowedData = {"mpozcfnwiddeld pjgpl wpnvg bnulu kyixd w", "avbggynr ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg", "oyacloszmswxmkuiaoc ewzqn pjgpl buvaq jwawy jlje w", "gfr ewzqn yejzk jlje bnulu kyixd w", "sdkrt ewzqn buvaq jwawy yejzk jlje wpnvg kyixd w", "ldnmvcrh pjgpl buvaq jwawy jlje kyixd w", "qctkgazxhrfzexxx ewzqn pjgpl jwawy jlje wpnvg kyix", "ofdufqc ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu k", "rmxnuldrdm pjgpl buvaq jwawy yejzk jlje wpnvg bnul", "ppjsbh ewzqn jwawy jlje kyixd w", "kefsixutwmvtxn ewzqn pjgpl buvaq jwawy yejzk wpnvg", "buvaq ewzqn pjgpl buvaq jlje wpnvg kyixd", "sdkrt pjgpl buvaq jwawy yejzk jlje wpnvg bnulu kyi", "xhmmlqypsdnyslf ewzqn pjgpl jwawy yejzk jlje wpnvg", "jsosuxxgs ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg", "gjlbtnqtyibbtdlyiav pjgpl buvaq yejzk jlje wpnvg b", "wpnvg pjgpl jwawy yejzk jlje wpnvg bnulu kyixd w", "ctpzjktju ewzqn pjgpl jwawy yejzk wpnvg bnulu w", "mpozcfnwiddeld ewzqn buvaq yejzk jlje wpnvg bnulu", "jsosuxxgs ewzqn pjgpl buvaq jwawy yejzk wpnvg", "erxfpgubaolhuykoxbsq pjgpl buvaq yejzk jlje wpnvg", "xhmmlqypsdnyslf pjgpl buvaq jwawy yejzk jlje wpnvg", "l pjgpl buvaq jwawy yejzk jlje wpnvg bnulu kyixd w", "l ewzqn buvaq jlje wpnvg bnulu kyixd", "kdj pjgpl jwawy wpnvg bnulu", "plmvurrrblqjrtofpee ewzqn pjgpl buvaq jwawy yejzk", "wildmfayrzwdage buvaq jwawy jlje wpnvg bnulu kyixd", "zfc pjgpl buvaq jwawy jlje bnulu", "ftulfvrtwmbzdboxbkoc pjgpl jlje bnulu kyixd", "avhjefstptxsz ewzqn pjgpl buvaq jwawy jlje bnulu", "drzduxznprir ewzqn pjgpl buvaq yejzk jlje bnulu ky", "pjgpl ewzqn pjgpl jwawy yejzk kyixd w", "fcngiypkexn ewzqn pjgpl buvaq jwawy yejzk wpnvg bn", "vwieol ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu", "fssxz ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyi", "f ewzqn buvaq jwawy yejzk bnulu kyixd", "rddknntqtaq ewzqn pjgpl buvaq jlje wpnvg bnulu kyi", "cftnj ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu kyi", "rmxnuldrdm ewzqn buvaq jwawy jlje wpnvg kyixd w", "j ewzqn buvaq jwawy yejzk jlje wpnvg bnulu kyixd"};
    vector<string> reportData = {"wpnvg", "wpnvg", "w"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bgflgoxonhrbbt", "dxhzgkoxnazjf", "i", "jqzn", "mbseaqpu", "wwrykqscfptepumj"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> userNames = {"ccssewamcicf", "t", "uwxkylcllquzmusfwpr", "khszmhhpo", "orfltocep", "ccssewamcicf", "msjhyy", "fyouradviizlmaqpycbg", "bkdlaktxceqzxtftl", "b", "hlwbhphewfvbgl", "zaxkqlovkgzjun", "icryykyxxhcbxclefl", "msjhyy", "rqppqcfxmtbimau", "froxqfucxk", "axtoknufi", "ueahvibvipclvmkqxj", "vhjlehn", "cxnwqniygkszayuny", "igearetmwguqrfzb", "cxkjr", "vdtvtkkxndzxlckaju", "bzbzwlkbnznwvjvt", "qbfvi", "hogsyblhbmbbj", "xmolfj", "cafrjmexp", "oyowfhytqaxtjybs", "zqspdpwgdxjxcvqhkqbl", "olcjetwghhwuiilyjgyx", "ue", "pfdpffaorzmgumog", "gujpralbi", "zaxkqlovkgzjun", "tergy", "lojxxdzgtkdihqymbsy", "yunvydwzggozdai", "vpypklbplpdalu", "bqsvmttaijppp", "q", "dnizbbfcrncbffm", "zydkjzntxslwhpvz", "dxhzgkoxnazjf", "ebpobupcz", "cslziuhsmeqorulcih"};
    vector<string> allowedData = {"drzduxznprir buvaq yejzk jlje wpnvg bnulu w", "tzkfcn ewzqn pjgpl buvaq jwawy jlje wpnvg kyixd w", "jwawy pjgpl jwawy yejzk jlje wpnvg bnulu kyixd w", "jlje ewzqn pjgpl buvaq jwawy jlje", "buvaq ewzqn pjgpl buvaq yejzk jlje wpnvg kyixd", "wbjqcfs ewzqn pjgpl jwawy yejzk wpnvg bnulu kyixd", "cvjtz ewzqn pjgpl buvaq jwawy wpnvg kyixd", "e ewzqn pjgpl jlje wpnvg bnulu kyixd w", "awekjquwzznzfxwpruu ewzqn pjgpl buvaq jwawy yejzk", "e ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyixd", "ftulfvrtwmbzdboxbkoc ewzqn buvaq jwawy jlje wpnvg", "rvldfsor ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg", "ndodydzaci ewzqn pjgpl buvaq jwawy yejzk wpnvg bnu", "neojerbbobebdb ewzqn buvaq yejzk jlje bnulu kyixd", "doxodlnspocsaqiaic ewzqn pjgpl buvaq jwawy jlje wp", "ibshjjwzewuasgyf ewzqn pjgpl jwawy yejzk bnulu w", "gzrmaqgpraldsujr buvaq jwawy yejzk kyixd w", "zgicwnbtqkeltmsmwbt ewzqn pjgpl buvaq jwawy yejzk", "f ewzqn pjgpl buvaq jwawy yejzk jlje bnulu kyixd w", "ogqp ewzqn pjgpl buvaq yejzk jlje bnulu w", "meeubzgcq ewzqn pjgpl jwawy jlje wpnvg bnulu kyixd", "ppjsbh buvaq jlje w", "jsosuxxgs ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu", "esntfvl pjgpl jwawy yejzk jlje wpnvg bnulu kyixd w", "xhmmlqypsdnyslf ewzqn buvaq yejzk jlje wpnvg kyixd", "rvnscfnkew pjgpl jwawy yejzk jlje bnulu", "fcngiypkexn ewzqn pjgpl buvaq yejzk jlje wpnvg kyi", "meeubzgcq ewzqn pjgpl buvaq yejzk jlje wpnvg bnulu", "mpozcfnwiddeld ewzqn pjgpl buvaq yejzk jlje wpnvg", "tiktdeglwxm ewzqn pjgpl buvaq jwawy yejzk jlje wpn", "orydt ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg kyi", "gev jwawy yejzk w", "f ewzqn jwawy yejzk jlje wpnvg bnulu kyixd w", "qyybrimrjtxhvrqd ewzqn pjgpl buvaq jwawy yejzk bnu", "tzkfcn ewzqn jwawy yejzk wpnvg kyixd w", "olioaazrtz ewzqn pjgpl buvaq jwawy yejzk jlje wpnv", "aijar ewzqn buvaq jwawy yejzk jlje wpnvg bnulu kyi", "yejzk ewzqn pjgpl buvaq jwawy jlje wpnvg w", "rdgmknh ewzqn pjgpl buvaq jlje wpnvg kyixd w", "jv pjgpl buvaq jwawy yejzk jlje w", "aijar ewzqn buvaq jwawy yejzk jlje bnulu kyixd w", "zfc ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyixd", "buvaq pjgpl buvaq jwawy yejzk jlje wpnvg kyixd w", "ctpzjktju ewzqn pjgpl buvaq jwawy wpnvg bnulu", "hecqrizgfqgdywavwfxu buvaq jwawy yejzk jlje wpnvg", "w ewzqn buvaq jwawy bnulu w"};
    vector<string> reportData = {"jwawy", "jwawy", "yejzk", "wpnvg", "kyixd"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bzbzwlkbnznwvjvt", "ccssewamcicf", "pfdpffaorzmgumog", "uwxkylcllquzmusfwpr", "zaxkqlovkgzjun", "zydkjzntxslwhpvz"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> userNames = {"ifwyatqxozlgtgrreadb", "esyrpfebolpsdn", "mwpfouijzvksmdleqg", "zaxkqlovkgzjun", "rbxcqfka", "lkyrliovcli", "yczziu", "wwdfgjvsdzoegmsvd", "lpdpbjcynak", "ajlu", "ttrnuqcejkwethc", "svipkehxzx", "rhrxpxxhlsxk", "efytxwyiyqbonfq", "lixhttyjzoecaguiipj", "dudjie", "nchyhxtaypamzkv", "gzxevj", "skfhaqfgeddmwjyci", "bxzqwrbdfmskzjko", "ggrngeji", "fbzhrppvhnbzf", "qtwdvzrlemf", "tzlwnohzufchscv", "hkhfjtvf", "hlmzbusrc", "ksawzb", "hysuijkamg", "ww", "zpevmakvswjuwux", "hpytulppzvwqvtvabjp", "o", "hbgchv", "hbgchv", "mnozaouicaifid", "dgviezfnvte", "jtar", "il"};
    vector<string> allowedData = {"ivgakfkyw pjgpl buvaq jwawy jlje wpnvg w", "olioaazrtz buvaq jwawy jlje w", "krsjugy ewzqn buvaq jwawy jlje wpnvg kyixd w", "wpnvg pjgpl jwawy yejzk jlje wpnvg kyixd", "rvldfsor ewzqn pjgpl jlje wpnvg bnulu kyixd", "zgicwnbtqkeltmsmwbt buvaq jwawy yejzk bnulu kyixd", "khtyxtx ewzqn pjgpl buvaq jlje wpnvg bnulu kyixd w", "drzduxznprir ewzqn pjgpl buvaq jwawy yejzk jlje wp", "dgavxavlfutjrzmhr ewzqn yejzk jlje wpnvg kyixd w", "kyixd ewzqn pjgpl buvaq jwawy yejzk jlje bnulu kyi", "qhqzklitpo ewzqn pjgpl buvaq jwawy wpnvg bnulu kyi", "jlje ewzqn pjgpl jwawy yejzk wpnvg kyixd w", "kdj ewzqn buvaq jwawy bnulu w", "ivgakfkyw ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu", "qyybrimrjtxhvrqd ewzqn pjgpl buvaq yejzk jlje bnul", "gzqfgqwj ewzqn buvaq yejzk jlje wpnvg w", "hdxbappzonsj pjgpl buvaq jwawy yejzk jlje wpnvg bn", "hdxbappzonsj pjgpl buvaq jwawy yejzk jlje wpnvg bn", "sdkrt ewzqn pjgpl buvaq jwawy kyixd w", "rmxnuldrdm pjgpl wpnvg kyixd w", "wmlwwmoqnbq ewzqn pjgpl buvaq jwawy jlje wpnvg bnu", "xhmmlqypsdnyslf ewzqn buvaq jwawy yejzk jlje bnulu", "pmlsqebusevpgxxz ewzqn pjgpl buvaq jwawy yejzk jlj", "hdxbappzonsj ewzqn buvaq jwawy wpnvg bnulu kyixd w", "tzkfcn ewzqn buvaq jwawy yejzk jlje bnulu kyixd w", "ogephziiurahzcfs ewzqn pjgpl buvaq jwawy jlje wpnv", "wpnvg pjgpl jwawy kyixd w", "yejzk ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnu", "e pjgpl buvaq yejzk jlje kyixd w", "wpnvg ewzqn yejzk wpnvg bnulu kyixd w", "gev buvaq jwawy yejzk jlje kyixd w", "aijar ewzqn pjgpl buvaq jwawy jlje wpnvg kyixd w", "ivgakfkyw ewzqn buvaq yejzk jlje wpnvg bnulu kyixd", "dgavxavlfutjrzmhr ewzqn pjgpl buvaq jwawy yejzk ky", "rvldfsor ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu", "w ewzqn pjgpl jwawy yejzk jlje bnulu kyixd w", "mpozcfnwiddeld ewzqn yejzk jlje wpnvg kyixd w", "wmlwwmoqnbq buvaq jlje wpnvg kyixd"};
    vector<string> reportData = {"yejzk"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ajlu", "dgviezfnvte", "dudjie", "efytxwyiyqbonfq", "fbzhrppvhnbzf", "gzxevj", "hbgchv", "hbgchv", "hkhfjtvf", "hpytulppzvwqvtvabjp", "hysuijkamg", "jtar", "lixhttyjzoecaguiipj", "lkyrliovcli", "lpdpbjcynak", "mnozaouicaifid", "nchyhxtaypamzkv", "qtwdvzrlemf", "svipkehxzx", "ww", "wwdfgjvsdzoegmsvd", "zaxkqlovkgzjun", "zpevmakvswjuwux"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> userNames = {"pu", "pkfslx", "skb", "qvpbggubsrinewjq", "xr", "sieabbxjltlzhlydhl", "qqcsgenliiio", "obemjbdydnudgo", "wqspyretdlabydyne", "xklplg", "ejh", "nubdyynemlbyo", "dcfeviuznlanewvehkvs", "nmeeqa", "bqeltqbjtsaiqb", "qhvxrqpe", "nqrbjiilneasyjgw", "bymmesharwsehdbzs", "aeofqjje", "skfhdhmaoem", "hjtdxlefwelap", "s", "vptnnrererqiksldowke"};
    vector<string> allowedData = {"f ewzqn pjgpl jwawy yejzk jlje wpnvg kyixd w", "xanjdk ewzqn jwawy bnulu kyixd w", "pjgpl ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyi", "gjlbtnqtyibbtdlyiav pjgpl jwawy yejzk jlje wpnvg b", "qyybrimrjtxhvrqd pjgpl buvaq yejzk jlje wpnvg bnul", "gjlbtnqtyibbtdlyiav ewzqn pjgpl buvaq jwawy wpnvg", "wildmfayrzwdage ewzqn pjgpl buvaq jwawy yejzk jlje", "vscsxvdbbeexp ewzqn pjgpl jwawy yejzk jlje wpnvg b", "jwawy pjgpl jlje wpnvg bnulu w", "jf ewzqn pjgpl jwawy bnulu kyixd w", "w ewzqn pjgpl buvaq jwawy jlje w", "tnyy buvaq jwawy", "ntesdlucplwevqv ewzqn pjgpl buvaq yejzk jlje wpnvg", "flplzfozdngebqudrn ewzqn pjgpl buvaq jwawy yejzk j", "fssxz ewzqn jwawy yejzk jlje wpnvg w", "wbjqcfs pjgpl buvaq jwawy yejzk jlje wpnvg kyixd w", "mpozcfnwiddeld ewzqn buvaq jwawy yejzk wpnvg bnulu", "kdj ewzqn pjgpl jwawy yejzk jlje wpnvg kyixd", "avbggynr ewzqn buvaq jwawy yejzk jlje wpnvg bnulu", "oyacloszmswxmkuiaoc ewzqn pjgpl buvaq yejzk bnulu", "tnyy ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg w", "kyixd ewzqn buvaq yejzk jlje wpnvg bnulu kyixd w", "f ewzqn pjgpl buvaq jwawy yejzk bnulu kyixd w"};
    vector<string> reportData = {"buvaq", "jwawy", "jlje", "w"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ejh", "hjtdxlefwelap", "qhvxrqpe"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> userNames = {"qdshompbziaiuixd", "z", "yopieiayzlnkba", "tqqkshkivozro", "uoltqh"};
    vector<string> allowedData = {"jwawy pjgpl buvaq yejzk bnulu kyixd w", "jsosuxxgs pjgpl buvaq yejzk jlje wpnvg bnulu w", "erxfpgubaolhuykoxbsq ewzqn buvaq yejzk wpnvg bnulu", "bnulu ewzqn pjgpl jwawy", "qhqzklitpo buvaq jwawy yejzk jlje wpnvg bnulu w"};
    vector<string> reportData = {"buvaq", "jwawy", "bnulu", "kyixd"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qdshompbziaiuixd"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> userNames = {"xvdpturv", "loqzfewdqne", "hbkvrtzkndmgiwzwgwt", "v", "izxgyiiuifuchyzuzwip", "kv", "wdic", "xiuwevqpm", "ouwgkoeam", "jncvfr", "iobnla", "gloyklrmlxxhvnwa", "csidz", "ljg", "ffjwerzbr", "shcbpnz", "i", "tjvpxqcqlbxd", "stal", "cxnwqniygkszayuny", "ywckmwqkzzm", "fadv", "shoghnc", "uke", "relppztv", "j", "bzqztx", "rrokohhs", "pzwoureijobnuud", "cxnwqniygkszayuny", "gavgbwmxkbqok", "fvmwylgzktsneniozpv", "s"};
    vector<string> allowedData = {"qhqzklitpo pjgpl jwawy yejzk jlje", "ctpzjktju ewzqn pjgpl jwawy yejzk jlje wpnvg w", "jsosuxxgs ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg", "e pjgpl buvaq jwawy yejzk jlje wpnvg bnulu kyixd w", "jv pjgpl buvaq jwawy yejzk jlje wpnvg bnulu", "wbjqcfs ewzqn buvaq jwawy yejzk wpnvg kyixd w", "w pjgpl buvaq jwawy jlje wpnvg bnulu kyixd w", "jobuwc pjgpl jwawy yejzk bnulu kyixd w", "awekjquwzznzfxwpruu buvaq jwawy jlje wpnvg kyixd w", "jlje ewzqn jwawy yejzk kyixd w", "zfc pjgpl buvaq jwawy yejzk jlje kyixd w", "olioaazrtz buvaq jwawy jlje wpnvg bnulu kyixd w", "sdkrt ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu ky", "ogephziiurahzcfs ewzqn pjgpl buvaq yejzk jlje wpnv", "nkihyigtchhcufs ewzqn pjgpl buvaq jwawy kyixd", "wmlwwmoqnbq pjgpl buvaq jwawy yejzk jlje wpnvg bnu", "ctpzjktju ewzqn pjgpl buvaq yejzk wpnvg bnulu kyix", "ntesdlucplwevqv ewzqn pjgpl buvaq yejzk wpnvg bnul", "cjihcboqztp pjgpl jwawy jlje wpnvg bnulu kyixd", "rdgmknh pjgpl buvaq jlje wpnvg kyixd", "rvnscfnkew ewzqn buvaq jwawy yejzk jlje kyixd", "afovlrkzxsguyqwa ewzqn pjgpl buvaq jwawy jlje wpnv", "l ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu kyixd", "xanjdk ewzqn jwawy yejzk wpnvg w", "rdgmknh buvaq jlje wpnvg bnulu", "gzqfgqwj ewzqn pjgpl buvaq jwawy yejzk jlje bnulu", "rvldfsor pjgpl buvaq jwawy yejzk jlje bnulu w", "afovlrkzxsguyqwa pjgpl buvaq jwawy yejzk jlje wpnv", "ewzqn ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu kyi", "ldnmvcrh ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu", "becymxxtqynza pjgpl buvaq jlje w", "rddknntqtaq ewzqn yejzk jlje wpnvg bnulu kyixd w", "aijar buvaq yejzk kyixd w"};
    vector<string> reportData = {"jlje", "wpnvg"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cxnwqniygkszayuny", "fvmwylgzktsneniozpv", "gloyklrmlxxhvnwa", "hbkvrtzkndmgiwzwgwt", "izxgyiiuifuchyzuzwip", "loqzfewdqne", "ouwgkoeam", "pzwoureijobnuud", "relppztv", "shcbpnz", "stal", "v", "wdic"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> userNames = {"r", "fzlembvnzazfac", "hvsrgxrjuqu", "rjahirkdymdyu", "gfxjwmbevnhvcfdq", "goitjgg", "zqautknvdf", "hxyrtquhpjblog", "yyumwwayhds", "ajlu", "k", "aywbxvs", "eqkbvenro", "ssldqdmhyhcljm", "olcjetwghhwuiilyjgyx", "uhxylzdnf", "vpwdagi", "b", "tjbrplznjmhwoc", "dpuoibkrbs", "z", "vwoy", "nmodxfw", "vptnnrererqiksldowke", "shcbpnz", "smtnubfwvyschkupsoo", "nxcfvmuaamouu", "arvxyaphyactapdhos", "vpypklbplpdalu", "rbxswlyjwyekspucjxgv"};
    vector<string> allowedData = {"wpnvg ewzqn buvaq yejzk jlje wpnvg bnulu kyixd w", "orydt pjgpl buvaq yejzk jlje wpnvg bnulu w", "zgicwnbtqkeltmsmwbt ewzqn pjgpl buvaq jwawy yejzk", "cjihcboqztp ewzqn pjgpl buvaq jwawy yejzk jlje wpn", "wildmfayrzwdage ewzqn buvaq yejzk jlje wpnvg bnulu", "kpigmcb pjgpl jwawy yejzk jlje wpnvg bnulu kyixd w", "neojerbbobebdb ewzqn pjgpl buvaq jwawy yejzk wpnvg", "gzrmaqgpraldsujr ewzqn buvaq jwawy yejzk jlje wpnv", "kpigmcb buvaq jwawy yejzk jlje wpnvg bnulu kyixd w", "ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu kyixd w", "zfc ewzqn pjgpl buvaq jlje wpnvg kyixd", "ftulfvrtwmbzdboxbkoc ewzqn pjgpl buvaq jwawy jlje", "cftnj ewzqn pjgpl buvaq jwawy jlje wpnvg kyixd", "jsosuxxgs ewzqn pjgpl buvaq yejzk jlje wpnvg bnulu", "xbvsshqi ewzqn pjgpl jwawy yejzk jlje wpnvg bnulu", "wmlwwmoqnbq ewzqn pjgpl buvaq jwawy yejzk jlje kyi", "doxodlnspocsaqiaic ewzqn pjgpl buvaq jwawy yejzk j", "f yejzk jlje wpnvg kyixd w", "olioaazrtz ewzqn pjgpl yejzk jlje bnulu w", "jsosuxxgs ewzqn buvaq wpnvg kyixd", "w ewzqn buvaq jwawy yejzk jlje wpnvg kyixd", "wildmfayrzwdage pjgpl jwawy yejzk kyixd w", "obsiaexfjngnpkvfvfax ewzqn pjgpl buvaq jwawy yejzk", "bnulu ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu", "tiktdeglwxm ewzqn buvaq jwawy yejzk wpnvg bnulu ky", "mpozcfnwiddeld ewzqn buvaq jwawy yejzk wpnvg bnulu", "afovlrkzxsguyqwa pjgpl buvaq jwawy jlje bnulu kyix", "avhjefstptxsz ewzqn buvaq jwawy jlje kyixd w", "tnyy ewzqn pjgpl buvaq jwawy yejzk jlje kyixd w", "vwieol ewzqn pjgpl buvaq jwawy wpnvg bnulu kyixd w"};
    vector<string> reportData = {"buvaq", "buvaq", "wpnvg", "kyixd", "w"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ajlu", "r", "rbxswlyjwyekspucjxgv", "yyumwwayhds", "z"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> userNames = {"vptnnrererqiksldowke", "shoghnc", "lslft", "uhxylzdnf", "sqhhtl", "rjjojcarj", "pq", "yzzlppvewr", "flaopgvtm", "gdmwhifwtpufsyijjfec", "qjystsulwq", "mxzjkt", "tvgjevrzybqkzizdpejj", "v", "ir", "rmhanjp", "msz", "hx", "jqzn", "smfxllitoo", "xtldteoceezwcbrdr", "xvlupe", "ueizbazlhnehaxrfbotv", "nxcfvmuaamouu", "zcxsmynrqlkfoiboub", "o", "pqwklagsf", "hhyaqv", "wfvnw", "dudjie", "ebpobupcz", "pqwklagsf", "froxqfucxk", "yfyffhq", "hvsrgxrjuqu", "dxhzgkoxnazjf"};
    vector<string> allowedData = {"obsiaexfjngnpkvfvfax ewzqn pjgpl jwawy wpnvg w", "mldajnyu ewzqn pjgpl buvaq jwawy yejzk wpnvg bnulu", "flplzfozdngebqudrn buvaq jwawy jlje wpnvg kyixd w", "acrxrspbrp pjgpl buvaq jwawy yejzk jlje wpnvg bnul", "plmvurrrblqjrtofpee ewzqn pjgpl yejzk jlje wpnvg k", "jf ewzqn buvaq yejzk jlje wpnvg bnulu kyixd w", "gfr ewzqn pjgpl buvaq jwawy jlje wpnvg bnulu w", "hdxbappzonsj ewzqn pjgpl jwawy yejzk jlje wpnvg bn", "l buvaq yejzk wpnvg w", "gfr ewzqn pjgpl buvaq jwawy wpnvg bnulu kyixd", "f ewzqn jwawy jlje wpnvg kyixd w", "xui ewzqn jwawy jlje wpnvg bnulu kyixd w", "gjlbtnqtyibbtdlyiav ewzqn jwawy yejzk wpnvg kyixd", "rmxnuldrdm ewzqn pjgpl jwawy bnulu kyixd", "lnwktmtrergl ewzqn pjgpl buvaq jlje wpnvg bnulu w", "yejzk pjgpl jwawy jlje wpnvg kyixd", "obsiaexfjngnpkvfvfax ewzqn pjgpl buvaq jwawy jlje", "kyixd buvaq yejzk jlje wpnvg bnulu kyixd w", "orydt buvaq jwawy wpnvg bnulu kyixd w", "jlje ewzqn pjgpl buvaq jwawy yejzk wpnvg kyixd", "kyixd pjgpl bnulu w", "ndodydzaci ewzqn pjgpl buvaq yejzk jlje wpnvg bnul", "ctpzjktju ewzqn pjgpl buvaq wpnvg kyixd", "neojerbbobebdb buvaq jwawy yejzk jlje bnulu kyixd", "f ewzqn pjgpl yejzk jlje wpnvg bnulu kyixd w", "kyixd ewzqn jwawy yejzk wpnvg bnulu kyixd w", "mcm ewzqn pjgpl buvaq yejzk jlje wpnvg bnulu w", "vcogbamq pjgpl buvaq jwawy yejzk jlje bnulu kyixd", "gjlbtnqtyibbtdlyiav ewzqn buvaq jwawy jlje kyixd", "ewzqn ewzqn yejzk wpnvg bnulu w", "pjgpl ewzqn buvaq yejzk bnulu kyixd w", "dgavxavlfutjrzmhr ewzqn pjgpl buvaq jwawy yejzk jl", "xhmmlqypsdnyslf ewzqn pjgpl buvaq jlje wpnvg bnulu", "kefsixutwmvtxn pjgpl jwawy yejzk jlje wpnvg kyixd", "erxfpgubaolhuykoxbsq buvaq jwawy jlje wpnvg bnulu", "neojerbbobebdb ewzqn pjgpl buvaq jwawy yejzk jlje"};
    vector<string> reportData = {"jlje", "jlje", "w"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hx", "ir", "lslft", "mxzjkt", "pq", "pqwklagsf", "qjystsulwq", "rjjojcarj", "zcxsmynrqlkfoiboub"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> userNames = {"yrtrn", "boqpixnow", "vzybaswwaxap", "pscpiuasswo", "yedcrrtxhqou", "us", "gee", "relppztv", "somogabdqvcxy", "eze", "eoe", "gabww", "ftaozyfyeqmgl", "us", "hrbna", "yf", "yeqyjrahazjkftguoug", "ttrnuqcejkwethc", "suaprxdymadzoklcku", "gmw", "hfcvdjxudwgtrd", "etow", "ryfjjti", "pkfslx"};
    vector<string> allowedData = {"obsiaexfjngnpkvfvfax ewzqn pjgpl buvaq jwawy kyixd", "doxodlnspocsaqiaic pjgpl buvaq jwawy jlje wpnvg bn", "wpnvg ewzqn pjgpl buvaq yejzk jlje kyixd w", "pmlsqebusevpgxxz pjgpl buvaq jwawy yejzk jlje wpnv", "krsjugy ewzqn pjgpl buvaq wpnvg bnulu kyixd w", "wildmfayrzwdage ewzqn buvaq yejzk wpnvg bnulu kyix", "wmlwwmoqnbq ewzqn pjgpl wpnvg bnulu kyixd w", "hecqrizgfqgdywavwfxu ewzqn pjgpl buvaq wpnvg bnulu", "xanjdk jwawy yejzk jlje wpnvg bnulu kyixd w", "fcngiypkexn ewzqn pjgpl jwawy yejzk wpnvg bnulu ky", "krsjugy ewzqn buvaq yejzk jlje wpnvg bnulu w", "buvaq ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnu", "mcm ewzqn pjgpl buvaq jwawy yejzk jlje bnulu w", "cftnj ewzqn jwawy yejzk jlje bnulu kyixd", "pmlsqebusevpgxxz ewzqn pjgpl buvaq yejzk jlje w", "kefsixutwmvtxn ewzqn pjgpl buvaq jwawy yejzk jlje", "tzkfcn ewzqn pjgpl yejzk jlje wpnvg bnulu kyixd w", "gfr pjgpl jwawy yejzk jlje wpnvg bnulu kyixd w", "wmlwwmoqnbq ewzqn pjgpl jwawy yejzk jlje bnulu kyi", "olioaazrtz ewzqn buvaq jwawy yejzk jlje wpnvg kyix", "w ewzqn pjgpl jwawy jlje kyixd w", "wpnvg ewzqn pjgpl buvaq jwawy yejzk jlje wpnvg bnu", "qhqzklitpo ewzqn pjgpl buvaq jwawy yejzk jlje wpnv", "rddknntqtaq pjgpl buvaq jwawy yejzk bnulu kyixd w"};
    vector<string> reportData = {"buvaq", "buvaq", "yejzk", "jlje", "bnulu"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eoe", "ftaozyfyeqmgl"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> userNames = {"hhyaqv", "jer", "rumaqfndqjwflb", "tagfjgibhpiczhbp", "izxgyiiuifuchyzuzwip", "hhfbmmti", "fxc", "rbxswlyjwyekspucjxgv", "pcdrmhztooem", "gczrjeqjrmi", "ffjwerzbr", "jncvfr", "gxubhigsk", "ogzshysgpnslvo", "pizlcjmja", "jelvphheizmtbriahdmu", "hbvy", "zw"};
    vector<string> allowedData = {"jf buvaq jwawy jlje bnulu kyixd w", "jlje jwawy yejzk jlje bnulu w", "vcogbamq ewzqn pjgpl buvaq jlje wpnvg kyixd w", "dgavxavlfutjrzmhr ewzqn pjgpl yejzk wpnvg w", "gjlbtnqtyibbtdlyiav pjgpl yejzk jlje bnulu kyixd w", "doxodlnspocsaqiaic yejzk jlje wpnvg w", "mcm ewzqn pjgpl yejzk wpnvg bnulu kyixd w", "aijar ewzqn buvaq yejzk jlje wpnvg bnulu kyixd w", "ppjsbh pjgpl buvaq jwawy bnulu kyixd", "lnwktmtrergl pjgpl buvaq jwawy yejzk jlje bnulu w", "khtyxtx ewzqn pjgpl jwawy yejzk bnulu kyixd", "ofdufqc ewzqn pjgpl jwawy yejzk wpnvg bnulu w", "awekjquwzznzfxwpruu ewzqn buvaq jwawy yejzk bnulu", "ndodydzaci ewzqn buvaq jwawy bnulu kyixd", "awekjquwzznzfxwpruu pjgpl jwawy jlje wpnvg bnulu k", "awekjquwzznzfxwpruu ewzqn pjgpl buvaq yejzk jlje k", "qctkgazxhrfzexxx ewzqn buvaq jwawy jlje bnulu kyix", "buvaq ewzqn pjgpl buvaq yejzk jlje bnulu kyixd w"};
    vector<string> reportData = {"pjgpl", "pjgpl", "jwawy", "kyixd"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ffjwerzbr", "pcdrmhztooem"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "cheryl", "tony"};
    vector<string> allowedData = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users"};
    vector<string> reportData = {"users"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dan", "kathy", "steve", "tony"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> userNames = {"joe", "nick", "ted"};
    vector<string> allowedData = {"clients products", "products orders", "clients orders"};
    vector<string> reportData = {"clients", "c"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> userNames = {"a", "aa"};
    vector<string> allowedData = {"aa", "aaa"};
    vector<string> reportData = {"aa"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> userNames = {"joe", "nick", "ted", "joe"};
    vector<string> allowedData = {"clients products", "products orders", "clients orders", "clients products"};
    vector<string> reportData = {"clients", "products"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"joe", "joe"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "cheryl", "tony", "dan"};
    vector<string> allowedData = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users", "users"};
    vector<string> reportData = {"users"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dan", "dan", "kathy", "steve", "tony"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> userNames = {"q", "w", "e"};
    vector<string> allowedData = {"qwerty", "qwert", "qwe"};
    vector<string> reportData = {"q", "w", "e", "r"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> userNames = {"gigi"};
    vector<string> allowedData = {"xaaax aaa baab"};
    vector<string> reportData = {"aaa"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gigi"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> userNames = {"a", "b"};
    vector<string> allowedData = {"crap", "crap cra"};
    vector<string> reportData = {"crap", "cra"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> userNames = {"aa"};
    vector<string> allowedData = {"aaaa"};
    vector<string> reportData = {"a"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "cheryl", "tony"};
    vector<string> allowedData = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users"};
    vector<string> reportData = {"users", "data"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kathy"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> userNames = {"aaa"};
    vector<string> allowedData = {"a"};
    vector<string> reportData = {"a", "a"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> userNames = {"a"};
    vector<string> allowedData = {"a a"};
    vector<string> reportData = {"a", "b"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> userNames = {"gigi"};
    vector<string> allowedData = {"xaaax baab"};
    vector<string> reportData = {"aaa"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> userNames = {"anne"};
    vector<string> allowedData = {"anne"};
    vector<string> reportData = {"ann"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> userNames = {"dan"};
    vector<string> allowedData = {"zzzb"};
    vector<string> reportData = {"zzz"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> userNames = {"joe", "joe"};
    vector<string> allowedData = {"clients products", "products orders"};
    vector<string> reportData = {"clients", "products"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"joe"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> userNames = {"a"};
    vector<string> allowedData = {"ab"};
    vector<string> reportData = {"b"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "cheryl", "tony"};
    vector<string> allowedData = {"users data", "data orders", "users permissions", "system users controls", "default", "admin users"};
    vector<string> reportData = {"users", "us"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> userNames = {"a", "a"};
    vector<string> allowedData = {"a", "a"};
    vector<string> reportData = {"a"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "a"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> userNames = {"kathy", "john", "dan", "steve", "zzzzz", "cheryl", "tony", "aaaaaaaaa", "tony"};
    vector<string> allowedData = {"users data", "data orders users", "users permissions", "system users controls", "default users", "admin users", "admin users", "users", "users"};
    vector<string> reportData = {"users"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaa", "cheryl", "dan", "john", "kathy", "steve", "tony", "tony", "zzzzz"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> userNames = {"joe", "nick", "ted"};
    vector<string> allowedData = {"clients products lie", "products orders", "clients orders"};
    vector<string> reportData = {"lie", "clients"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"joe"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> userNames = {"joe", "nick", "ted"};
    vector<string> allowedData = {"clients products", "products orders products", "clients orders"};
    vector<string> reportData = {"clients", "products"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"joe"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> userNames = {"abc", "aal"};
    vector<string> allowedData = {"a b", "a b"};
    vector<string> reportData = {"a", "b"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aal", "abc"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> userNames = {"dan"};
    vector<string> allowedData = {"a a a a a a a a a a"};
    vector<string> reportData = {"a"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dan"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> userNames = {"bob", "bob"};
    vector<string> allowedData = {"go", "go"};
    vector<string> reportData = {"go"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bob", "bob"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> userNames = {"joe", "nick", "ted"};
    vector<string> allowedData = {"clients productsaa", "products orders", "clients orders"};
    vector<string> reportData = {"clients", "products"};
    ReportAccess* pObj = new ReportAccess();
    clock_t start = clock();
    vector<string> result = pObj->whoCanSee(userNames, allowedData, reportData);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=7216&pm=4485
********************************************************************************
#define BEND(s) s.begin(), s.end()
#define FR(i,a,b) for (int i = (a); i < (b); i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,n) FOR(i,n.size())
#include <algorithm>
#include <string>
#include <vector>
#define PB push_back
#define SZ size()
#define CS c_str()
#define S string
#define VS vector<string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#include <regex.h>
#include <utility>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
VS split(S s,S d=" "){VS rv; char foo[s.SZ+2],*bar;strcpy(foo,s.CS); for (bar = strtok(foo, d.CS); bar; bar = strtok(0, d.CS)) rv.PB(S(bar)); return rv;}
 
struct ReportAccess {
vector <string> whoCanSee(vector <string> un, vector <string> ad, vector <string> rd) {
 VS rv;
 FORI(i,un) {
  VS vs = split(ad[i]);
  FORI(j,rd) { FORI(k,vs) if (rd[j] == vs[k]) goto happyface; goto sadface; happyface:; }
  rv.PB(un[i]);
  sadface:;
 }
 sort(BEND(rv));
 return rv;
}};
// Powered by ted

********************************************************************************
*******************************************************************************/