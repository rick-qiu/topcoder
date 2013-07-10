/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6017
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

class InfiniteSoup {
public:
    vector<int> countRays(vector<string> g, vector<string> words, int k);
};

vector<int> InfiniteSoup::countRays(vector<string> g, vector<string> words, int k) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> g = {"abc", "def", "ghi"};
    vector<string> words = {"abc"};
    int k = 2;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> g = {"abc", "def", "ghi"};
    vector<string> words = {"abc"};
    int k = 3;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> g = {"abc", "def", "ghi"};
    vector<string> words = {"abc"};
    int k = 4;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> g = {"a"};
    vector<string> words = {"a"};
    int k = 1;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> g = {"phqghumeay", "lnlfdxfirc", "vscxggbwkf", "nqduxwfnfo", "zvsrtkjpre", "pggxrpnrvy", "stmwcysyyc", "qpevikeffm", "znimkkasvw", "srenzkycxf"};
    vector<string> words = {"tlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipya", "yehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknlyjy", "fixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiuteio", "wayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhdizco", "zcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxohgmgn", "eufdxotogbgxpeyanfetcukepzshkljugggekjdqzjenpevqgx", "epjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrsrtekmqd", "yzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdzqsoemuvn", "ppsuacbazuxmhecthlegrpunkdmbppweqtgjoparmowzdqyoxy", "jbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnqqlrzjpxiog", "liexdzuzosrkrusvojbrzmwzpowkjilefraamdigpnpuuhgxpq", "jwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockvfaj", "rmxothowkbjzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugi", "wtbvtrehbbcpxifbxvfbcgkcfqckcotzgkubmjrmbsztsshfro", "fwsjrxjhguzyupzwweiqurpixiqflduuveoowqcudhnefnjhai", "uczfskuiduburiswtbrecuykabfcvkdzeztoidukuhjzefczzz", "fkqdpqzikfobucdhthxdjgkjelrlpaxamceroswitdptpcclif", "eljytihrcqaybnefxnxvgzedyyhngycdrudmphmeckotrwospo", "ghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuyf", "qgajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbi", "gekyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmysp", "araewkegjccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzs", "metogepspxnvjiupalyynmkmnuvklhsecdwracgfmzkgipdfod", "jmjqwiqpuoqhimvfvuzwyvijgfullkjduhsjafbtlkmfqrmyjf", "nhhssqctydteamdcjbprhtnegyiwxgcjwlgrsmeaearwtvjsjb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> g = {"phqghumeaylnlfdxfircvscxg", "gbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevi", "keffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuv", "pvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowu", "xwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnm", "gqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubf", "aaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbl", "dvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfe", "tcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhb", "fqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcoziji", "pfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhect", "hlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbx", "phoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkru"};
    vector<string> words = {"aybcnpdbjfrlwaozeegmlpmjzaybcnpdbjfrlwaozeegmlpmjz", "lkepajventqjurvydkeyulpvdlkepajventqjurvydkeyulpvd", "zjwpxrkljddlflpujnohoiizjzjwpxrkljddlflpujnohoiizj", "hwdvxxzbygsafdnmjvkbuegwshwdvxxzbygsafdnmjvkbuegws", "jjieckowxrwfcgqhjsljjexdkjjieckowxrwfcgqhjsljjexdk", "xxyrncrlhjvtszgfjxwkddinnxxyrncrlhjvtszgfjxwkddinn", "ssbdvpsooxycoaettolnvtddvssbdvpsooxycoaettolnvtddv", "ekpcdhajkpmxxsujtzrwxekqyekpcdhajkpmxxsujtzrwxekqy", "dzgvcooapudsgqhmlosknjedtdzgvcooapudsgqhmlosknjedt", "brsntwejvzdapfepnkhtgyzylbrsntwejvzdapfepnkhtgyzyl", "amoezlyrtneijjtpjuhhedujkamoezlyrtneijjtpjuhhedujk", "pfvincuujxqxnbtsutuplnlgcpfvincuujxqxnbtsutuplnlgc", "fxpepscpsueqjoaqlxpjycjezfxpepscpsueqjoaqlxpjycjez", "yjsfqmrjlidhvrnjpmmoiaepiyjsfqmrjlidhvrnjpmmoiaepi", "lsrgydnhbryakucpolpjejqhalsrgydnhbryakucpolpjejqha", "fceamohvqoegoolgzyurhmwoifceamohvqoegoolgzyurhmwoi", "ujakkxoytomfbpqkjcgfbeblhujakkxoytomfbpqkjcgfbeblh", "yvfxrtnnxqjprxahrrbltpgygyvfxrtnnxqjprxahrrbltpgyg", "glvsivzydysoeuqhkhdqzptvuglvsivzydysoeuqhkhdqzptvu", "fytldybjaaqvhozwptdfcpydsfytldybjaaqvhozwptdfcpyds", "ceriecerieceriecerieceriecerieceriecerieceriecerie", "gamiqzqhulyqmqodccjkofynmgamiqzqhulyqmqodccjkofynm", "ufbwmpyasqnusnzoerinsiussufbwmpyasqnusnzoerinsiuss", "vdinherqpnuwbohywlhzgtukovdinherqpnuwbohywlhzgtuko", "rpbsotmrtuocxuooqzraiinlqrpbsotmrtuocxuooqzraiinlq"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> g = {"ktrffaclvgrzkkldacl", "lteojomonxrqyjzginr", "nnzwacxxaedrwudxzrf", "usewjtboxvynfhkstce", "naumnddxfdmvzcautdc", "ckxaaydzsxttobbgqng", "vvpjgojoglmkxgbfcpy", "pckqchbddzwrxbzmqrl", "xvobtwhxginfgfrcclm", "znmjugwwbsqfcihubsj", "ollmsqsghmcphelsotf", "lbgsfnpcuzsrupchynv", "zhcpqugriwniqxdfjpw", "pxfblkpnpeelfjmtkuq", "pzomwnlmbupmktlptnd", "mpdsydsgvfpenemwbor", "ifsuqhceskmkhssmvno", "nwafxwhgbibabvqopqf", "oviussqfqwehtxdzujt", "lntxmrjxxwtlggkytbi", "olydnilqadojskkvfxa", "hhjmbocljarintdwcld", "vdxropbyjzwyyojuoth"};
    vector<string> words = {"wwqsgcsnhwxeobuidixaecjuukv", "lmdclhrzbbakdzljdkkdqsmlmdclhrzbbakdz", "cxvmuwdsxwutvhocedgnyqsdwsjifwlhss", "scwgiwywdldwsxclozzgnmbkljlhzdewtdrofegt", "tkndnfmtjobjdwddtwvlcscaorofoulw", "hacqtiwedhygtdlgsdqcbkwtzmfmzofczoj", "vphkhgxdgxhwblgcjhpeojidbleoxu", "htcppvmdnvxajnkdoctgnscwlrf", "ukznsamezxfnfztqdgsqvgqpbrkofcdieodxx", "pgxrtepcswsplladvpjnyqsjfdt", "kmjwhpjqzjlndffatrhxvbupogdlxx", "mrosmozgsqabyxbtutkmfcvgntmbdlffofkp", "ojjacuflyxmbfangtsqwqsnojjacuflyx", "pkxomfalhtxjjhyvowtsubbdlwqescfqfcsok", "bopznbauspgjlnzflmgkcmdpk", "uhjbvvjljnlbhbsxqerbqbanrpqbdszg", "duclsbwjuxykkbpcrwokwqgtbqchwzur", "ucpqvtbttzkijayoocbfctqucpqvtbt", "ofxtladbxqnpfqjoeoorjujrxw", "xczwuowzvefnwlcgxdygsmsqdrhvdpuoblaipr", "ioznmapasplfhaiykmvjalothmyponxsrart", "pzbtqfshnigmprahzxdgdflkhsftbsw", "laopbwfortvkhbsmjcghymqalvv"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 0, 61, 62, 55, 54, 60, 58, 55, 47, 50, 60, 0, 55, 51, 54, 51, 0, 60, 57, 54, 59, 62};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> g = {"phqghumeaylnlfdxfircvscxg", "gbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevi", "keffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuv", "pvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowu", "xwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnm", "gqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubf", "aaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbl", "dvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfe", "tcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhb", "fqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcoziji", "pfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhect", "hlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbx", "phoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkru"};
    vector<string> words = {"ojb", "y", "kji", "dlk", "i", "npu", "gxp", "jw", "dz", "s", "x", "pfv", "ggx", "fl", "dc", "oc", "faj", "xj", "x", "cer", "c", "hc", "uav", "si", "p"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 16207, 0, 41, 10483, 82, 121, 291, 574, 16228, 18621, 125, 0, 881, 323, 574, 0, 890, 18621, 80, 11375, 327, 83, 478, 24305};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> g = {"phqghumeaylnlfdxfir", "cvscxggbwkfnqduxwfn", "fozvsrtkjprepggxrpn", "rvystmwcysyycqpevik", "effmznimkkasvwsrenz", "kycxfxtlsgypsfadpoo", "efxzbcoejuvpvaboygp", "oeylfpbnpljvrvipyam", "yehwqnqrqpmxujjloov", "aowuxwhmsncbxcoksfz", "kvatxdknlyjyhfixjsw", "nkkufnuxxzrzbmnmgqo", "oketlyhnkoaugzqrcdd", "iuteiojwayyzpvscmps", "ajlfvgubfaaovlzylnt", "rkdcpwsrtesjwhdizco", "bzcnfwlqijtvdwvxhrc", "bldvgylwgbusbmborxt", "lhcsmpxohgmgnkeufdx", "otogbgxpeyanfetcuke", "pzshkljugggekjdqzje", "npevqgxiepjsrdzjazu", "jllchhbfqmkimwzobiw"};
    vector<string> words = {"xduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrn", "ymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppwe", "gjoparmowzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnb", "opvlkhkvuojvkfzylfhetezopvlkhkvuojvkfzylfhetezopvl", "lrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdig", "pgxnmscruedyiufjyxpqkboqhtpbmshxmkpkgezyfezkgqcoar", "pqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockv", "jfyazaoytdeqdalpwpyqbachgcejzlnhpqdnwspxmvuyregaui", "opxjceycljfauastcqsuokemfvrswoxbmowunzyrfgnuzgmffz", "jzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehb", "kwpdnyqwqcngxeonmhvkmrdwjsmmtyijwzubgfozbbgjjjpaki", "stnskvfdwpmyenzsnycnmdkupverztcmcfpoxhoxsmkllxwnay", "cfqckcotzgkubmjrmbsztsshfroefwsjrxjhguzyupzwweiqur", "ulzxywibpspffsicnkznmflawpugxsmevghbcbybkiauejofed", "plxoaytcofgxypssfkdplxoaytcofgxypssfkdplxoaytcofgx", "wqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzezt", "dukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxamcer", "witdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycdrudmp", "xxeuvykvkpkljefgekbyxoqmgoeugowkcivktwumkojgadpbmk", "lskpsfarmikmggvpgvryqjmqksijelnycfzltqvxlqyypufpyr", "ghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuyf", "gajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbis", "kyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmyspna", "oirezeteirovcccwkewyhjrgknynaljtbuvfpgojfqnkwpeaon", "ccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzsqmetogeps"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 59, 0, 56, 67, 0, 52, 53, 0, 52, 0, 0, 0, 0, 58, 56, 0, 0, 0, 49, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> g = {"phqghumeaylnlfdxfir", "cvscxggbwkfnqduxwfn", "fozvsrtkjprepggxrpn", "rvystmwcysyycqpevik", "effmznimkkasvwsrenz", "kycxfxtlsgypsfadpoo", "efxzbcoejuvpvaboygp", "oeylfpbnpljvrvipyam", "yehwqnqrqpmxujjloov", "aowuxwhmsncbxcoksfz", "kvatxdknlyjyhfixjsw", "nkkufnuxxzrzbmnmgqo", "oketlyhnkoaugzqrcdd", "iuteiojwayyzpvscmps", "ajlfvgubfaaovlzylnt", "rkdcpwsrtesjwhdizco", "bzcnfwlqijtvdwvxhrc", "bldvgylwgbusbmborxt", "lhcsmpxohgmgnkeufdx", "otogbgxpeyanfetcuke", "pzshkljugggekjdqzje", "npevqgxiepjsrdzjazu", "jllchhbfqmkimwzobiw"};
    vector<string> words = {"xduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrm", "ymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppwf", "gjoparmowzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnc", "opvlkhkvuojvkfzylfhetezopvlkhkvuojvkfzylfhetezopvk", "lrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdif", "pgxnmscruedyiufjyxpqkboqhtpbmshxmkpkgezyfezkgqcoag", "pqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockh", "jfyazaoytdeqdalpwpyqbachgcejzlnhpqdnwspxmvuyregauo", "opxjceycljfauastcqsuokemfvrswoxbmowunzyrfgnuzgmfff", "jzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehf", "kwpdnyqwqcngxeonmhvkmrdwjsmmtyijwzubgfozbbgjjjpaks", "stnskvfdwpmyenzsnycnmdkupverztcmcfpoxhoxsmkllxwnaz", "cfqckcotzgkubmjrmbsztsshfroefwsjrxjhguzyupzwweiqut", "ulzxywibpspffsicnkznmflawpugxsmevghbcbybkiauejofed", "plxoaytcofgxypssfkdplxoaytcofgxypssfkdplxoaytcofgg", "wqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzezd", "dukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxamcea", "witdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycdrudma", "xxeuvykvkpkljefgekbyxoqmgoeugowkcivktwumkojgadpbma", "lskpsfarmikmggvpgvryqjmqksijelnycfzltqvxlqyypufpya", "ghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuya", "gajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbia", "kyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmyspnd", "oirezeteirovcccwkewyhjrgknynaljtbuvfpgojfqnkwpeaoa", "ccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzsqmetogepa"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> g = {"phqghumeaylnlfdxfircvscxg"};
    vector<string> words = {"wkfnqduxwfnfozvsrtkjpr", "ggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycx", "drchuyfisphalfvggenxcxqmldrchuyfis", "sfadpooefxzbcoejuvpvaboygpoe", "fpbnpljv", "srxlymgpcc", "ehwqnqr", "mxujjloova", "uxwhmsncbxcoksfzkvatx", "fcmxgaihlcg", "fixjswnkkufnuxxzrzbmnmgqooketlyhnkoa", "zqrcddiuteiojwayyzpvscmpsajlfvgubfaaovl", "dllamhqpxscixfnyeughgcvrfdllamhqpxscixf", "cpwsrtesjwhdizcobzcnfwlqijtvdwvxhrcb", "fshmnfshmnfshmnfshmnfshmnfshmnfshmnfshmnfshmnf", "busbmborxtlhcsmpxohgmgnkeufdxotog", "genxcxqmldrchuyfisphalfvggenxcxqmldrchuyfis", "fetcukepzshkljugggekjdqzjenpevqgxiepjsrdzjazuj", "uuuu", "cnpdgimvyxlhxhreslgfqfucacnpdgimvyxlhxhresl", "obiwybxduunfsksrsrtekmqdcyzjeeuhmsrqco", "hcluxfyqvfmgilgsdeprn", "needdpszrnavymm", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "oemuvnpppsu"};
    int k = 99;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 277, 0, 0, 273, 0, 0, 0, 239, 0, 0, 269, 0, 0, 0, 277, 0, 0, 252, 0, 241, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> g = {"a", "c", "b", "a", "z", "u", "x", "m", "h", "e", "c", "t", "h", "l", "e", "g", "r", "p", "u", "n", "k", "d", "m", "b", "p"};
    vector<string> words = {"c", "tdxrctdxrctdxrctdxrctdxrctdxrctdxrctdxrct", "z", "rbuhnch", "dmuzgchbekxpaeatmhnurblpcdmuzgchbekxpa", "ydcprjbxphoohpkwqy", "rqzhnbnf", "qnqqlrzjpxiogvliexdzuzosrk", "bbbbbbbbbbbbb", "upzrag", "ademautzmghcnhubrebklxppc", "lcmzcbkpethubpdughexaamnrlcmzcbkpethubpdu", "igpnpuuhgxpqnjwjmw", "xmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcn", "kvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarxbgfcbc", "hjugixwtbvtrehbbcpxif", "lnaxhuputp", "cfqckcotz", "ubmjrmbsztsshfroefwsj", "cmuecx", "puuxnmkhdemcbtp", "iqurpixiqflduuveoowqcudhnefnjhaimuczfskuiduburisw", "eeeeeeeeeeeeee", "abfcvkdze", "bczmclrnmaaxehgudpbuhtepkbczmclrnmaaxehg"};
    int k = 99;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5835, 0, 5011, 246, 270, 0, 0, 0, 0, 242, 241, 273, 0, 0, 0, 0, 238, 0, 0, 235, 240, 0, 0, 0, 237};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> g = {"phqghumeaylnlfdxfircvsc", "xggbwkfnqduxwfnfozvsrtk", "jprepggxrpnrvystmwcysyy", "cqpevikeffmznimkkasvwsr", "enzkycxfxtlsgypsfadpooe", "fxzbcoejuvpvaboygpoeylf", "pbnpljvrvipyamyehwqnqrq", "pmxujjloovaowuxwhmsncbx", "coksfzkvatxdknlyjyhfixj", "swnkkufnuxxzrzbmnmgqook", "etlyhnkoaugzqrcddiuteio", "jwayyzpvscmpsajlfvgubfa", "aovlzylntrkdcpwsrtesjwh", "dizcobzcnfwlqijtvdwvxhr", "cbldvgylwgbusbmborxtlhc", "smpxohgmgnkeufdxotogbgx", "peyanfetcukepzshkljuggg", "ekjdqzjenpevqgxiepjsrdz", "jazujllchhbfqmkimwzobiw"};
    vector<string> words = {"x", "i", "r", "t", "m", "c", "j", "u", "v", "i", "x", "p", "r", "x", "i", "o", "u", "y", "c", "t", "k", "r", "m", "z", "v"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24253, 23317, 23317, 22188, 23317, 24253, 23124, 23317, 23317, 23317, 24253, 24305, 23317, 24253, 23317, 22188, 23317, 23317, 24253, 22188, 22188, 23317, 23317, 22188, 23317};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 1;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> g = {"ktrffaclvgrzkkldacl", "lteojomonxrqyjzginr", "nnzwacxxaedrwudxzrf", "usewjtboxvynfhkstce", "naumnddxfdmvzcautdc", "ckxaaydzsxttobbgqng", "vvpjgojoglmkxgbfcpy", "pckqchbddzwrxbzmqrl", "xvobtwhxginfgfrcclm", "znmjugwwbsqfcihubsj", "ollmsqsghmcphelsotf", "lbgsfnpcuzsrupchynv", "zhcpqugriwniqxdfjpw", "pxfblkpnpeelfjmtkuq", "pzomwnlmbupmktlptnd", "mpdsydsgvfpenemwbor", "ifsuqhceskmkhssmvno", "nwafxwhgbibabvqopqf", "oviussqfqwehtxdzujt", "lntxmrjxxwtlggkytbi", "olydnilqadojskkvfxa", "hhjmbocljarintdwcld", "vdxropbyjzwyyojuoth"};
    vector<string> words = {"wwqsgcsnhwxeobuidixaecjuukv", "lmdclhrzbbakdzljdkkdqsmlmdclhrzbbakdz", "cxvmuwdsxwutvhocedgnyqsdwsjifwlhss", "scwgiwywdldwsxclozzgnmbkljlhzdewtdrofegt", "tkndnfmtjobjdwddtwvlcscaorofoulw", "hacqtiwedhygtdlgsdqcbkwtzmfmzofczoj", "vphkhgxdgxhwblgcjhpeojidbleoxu", "htcppvmdnvxajnkdoctgnscwlrf", "ukznsamezxfnfztqdgsqvgqpbrkofcdieodxx", "pgxrtepcswsplladvpjnyqsjfdt", "kmjwhpjqzjlndffatrhxvbupogdlxx", "mrosmozgsqabyxbtutkmfcvgntmbdlffofkp", "ojjacuflyxmbfangtsqwqsnojjacuflyx", "pkxomfalhtxjjhyvowtsubbdlwqescfqfcsok", "bopznbauspgjlnzflmgkcmdpk", "uhjbvvjljnlbhbsxqerbqbanrpqbdszg", "duclsbwjuxykkbpcrwokwqgtbqchwzur", "ucpqvtbttzkijayoocbfctqucpqvtbt", "ofxtladbxqnpfqjoeoorjujrxw", "xczwuowzvefnwlcgxdygsmsqdrhvdpuoblaipr", "ioznmapasplfhaiykmvjalothmyponxsrart", "pzbtqfshnigmprahzxdgdflkhsftbsw", "laopbwfortvkhbsmjcghymqalvv"};
    int k = 1;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> g = {"phqghumeaylnlfdxfir", "cvscxggbwkfnqduxwfn", "fozvsrtkjprepggxrpn", "rvystmwcysyycqpevik", "effmznimkkasvwsrenz", "kycxfxtlsgypsfadpoo", "efxzbcoejuvpvaboygp", "oeylfpbnpljvrvipyam", "yehwqnqrqpmxujjloov", "aowuxwhmsncbxcoksfz", "kvatxdknlyjyhfixjsw", "nkkufnuxxzrzbmnmgqo", "oketlyhnkoaugzqrcdd", "iuteiojwayyzpvscmps", "ajlfvgubfaaovlzylnt", "rkdcpwsrtesjwhdizco", "bzcnfwlqijtvdwvxhrc", "bldvgylwgbusbmborxt", "lhcsmpxohgmgnkeufdx", "otogbgxpeyanfetcuke", "pzshkljugggekjdqzje", "npevqgxiepjsrdzjazu", "jllchhbfqmkimwzobiw"};
    vector<string> words = {"xduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrn", "ymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppwe", "gjoparmowzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnb", "opvlkhkvuojvkfzylfhetezopvlkhkvuojvkfzylfhetezopvl", "lrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdig", "pgxnmscruedyiufjyxpqkboqhtpbmshxmkpkgezyfezkgqcoar", "pqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockv", "jfyazaoytdeqdalpwpyqbachgcejzlnhpqdnwspxmvuyregaui", "opxjceycljfauastcqsuokemfvrswoxbmowunzyrfgnuzgmffz", "jzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehb", "kwpdnyqwqcngxeonmhvkmrdwjsmmtyijwzubgfozbbgjjjpaki", "stnskvfdwpmyenzsnycnmdkupverztcmcfpoxhoxsmkllxwnay", "cfqckcotzgkubmjrmbsztsshfroefwsjrxjhguzyupzwweiqur", "ulzxywibpspffsicnkznmflawpugxsmevghbcbybkiauejofed", "plxoaytcofgxypssfkdplxoaytcofgxypssfkdplxoaytcofgx", "wqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzezt", "dukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxamcer", "witdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycdrudmp", "xxeuvykvkpkljefgekbyxoqmgoeugowkcivktwumkojgadpbmk", "lskpsfarmikmggvpgvryqjmqksijelnycfzltqvxlqyypufpyr", "ghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuyf", "gajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbis", "kyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmyspna", "oirezeteirovcccwkewyhjrgknynaljtbuvfpgojfqnkwpeaon", "ccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzsqmetogeps"};
    int k = 25;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 1, 0, 1, 3, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> g = {"phqghumeaylnlfdxfir", "cvscxggbwkfnqduxwfn", "fozvsrtkjprepggxrpn", "rvystmwcysyycqpevik", "effmznimkkasvwsrenz", "kycxfxtlsgypsfadpoo", "efxzbcoejuvpvaboygp", "oeylfpbnpljvrvipyam", "yehwqnqrqpmxujjloov", "aowuxwhmsncbxcoksfz", "kvatxdknlyjyhfixjsw", "nkkufnuxxzrzbmnmgqo", "oketlyhnkoaugzqrcdd", "iuteiojwayyzpvscmps", "ajlfvgubfaaovlzylnt", "rkdcpwsrtesjwhdizco", "bzcnfwlqijtvdwvxhrc", "bldvgylwgbusbmborxt", "lhcsmpxohgmgnkeufdx", "otogbgxpeyanfetcuke", "pzshkljugggekjdqzje", "npevqgxiepjsrdzjazu", "jllchhbfqmkimwzobiw"};
    vector<string> words = {"xduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrn", "ymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppwe", "gjoparmowzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnb", "opvlkhkvuojvkfzylfhetezopvlkhkvuojvkfzylfhetezopvl", "lrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdig", "pgxnmscruedyiufjyxpqkboqhtpbmshxmkpkgezyfezkgqcoar", "pqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsdsmzcnockv", "jfyazaoytdeqdalpwpyqbachgcejzlnhpqdnwspxmvuyregaui", "opxjceycljfauastcqsuokemfvrswoxbmowunzyrfgnuzgmffz", "jzwucwljfrimpmyhchzriwkbarxbgfcbceyhjugixwtbvtrehb", "kwpdnyqwqcngxeonmhvkmrdwjsmmtyijwzubgfozbbgjjjpaki", "stnskvfdwpmyenzsnycnmdkupverztcmcfpoxhoxsmkllxwnay", "cfqckcotzgkubmjrmbsztsshfroefwsjrxjhguzyupzwweiqur", "ulzxywibpspffsicnkznmflawpugxsmevghbcbybkiauejofed", "plxoaytcofgxypssfkdplxoaytcofgxypssfkdplxoaytcofgx", "wqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzezt", "dukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxamcer", "witdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycdrudmp", "xxeuvykvkpkljefgekbyxoqmgoeugowkcivktwumkojgadpbmk", "lskpsfarmikmggvpgvryqjmqksijelnycfzltqvxlqyypufpyr", "ghfozqvlqfxwwkmfxdyygmdcaszsgovsodkjghcwmbmxrmhuyf", "gajqkcklznayxqkqoyzwmyubzazcpkhktkydzivcuypurfmbis", "kyrgzvxdhpoamvafyrarxsvkhtqdihersigbhzjzujxmmyspna", "oirezeteirovcccwkewyhjrgknynaljtbuvfpgojfqnkwpeaon", "ccvhhrjvbjtsqdjootgpknfpfycgfieowqrwwwpzsqmetogeps"};
    int k = 2;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> g = {"phqghumeaylnlfdxfircvsc", "xggbwkfnqduxwfnfozvsrtk", "jprepggxrpnrvystmwcysyy", "cqpevikeffmznimkkasvwsr", "enzkycxfxtlsgypsfadpooe", "fxzbcoejuvpvaboygpoeylf", "pbnpljvrvipyamyehwqnqrq", "pmxujjloovaowuxwhmsncbx", "coksfzkvatxdknlyjyhfixj", "swnkkufnuxxzrzbmnmgqook", "etlyhnkoaugzqrcddiuteio", "jwayyzpvscmpsajlfvgubfa", "aovlzylntrkdcpwsrtesjwh", "dizcobzcnfwlqijtvdwvxhr", "cbldvgylwgbusbmborxtlhc", "smpxohgmgnkeufdxotogbgx", "peyanfetcukepzshkljuggg", "ekjdqzjenpevqgxiepjsrdz", "jazujllchhbfqmkimwzobiw"};
    vector<string> words = {"x", "i", "r", "t", "m", "c", "j", "u", "v", "i", "x", "p", "r", "x", "i", "o", "u", "y", "c", "t", "k", "r", "m", "z", "v"};
    int k = 5;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 20, 20, 19, 20, 21, 20, 20, 20, 20, 21, 21, 20, 21, 20, 19, 20, 20, 21, 19, 19, 20, 20, 19, 20};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> g = {"ccbbcbaabcccbabcbca", "aaacabbaccccacaabcb", "bacacaacabcbccbaabc", "abbbccaabbcbbcacabc", "aaacacabacbccbaacbc", "bcaacacbaaaaccacccb", "aacaaabacaccabcbcba", "bbbacbabcaaccbccacb", "cbacacacbcaccabaccb", "ccbaaaaabbacbacacbc", "cbabcaacbbcccaccbcb", "acbacbcabaababccaaa", "acccccbbaabbccbccca", "bbacacaacbcccbaaaca", "cabccabcccccabcaaaa", "bbbcbbbaabccacccaba", "cbcbbcbabacabbbbbba", "bbcabcbcbcaabcbcccb", "abaccccabbabbbacbba", "cbcccaaacaccababccc", "bcaccbcbcaacacbccba", "cbccbccaccbcbcabbbc", "cabaacaccbcccbccacc"};
    vector<string> words = {"cbcccbbccbacbcbcbbcbabcbacbbababcbcacbaaabbaba", "bbcbccbaccbbcbbbbcbbaacabaccbcbccabbbbccaabcbbca", "bbcaaaabababbabbbacaaabaabaccbcaaccaabcbbaccacbabb", "cccbbaccccacccaaaabcacccacbccbcbcbbbbaabcaccbcb", "cbbacccabaabbabcbabbbbccbbacccabaabbabcbabbbbccbba", "bbaacccacbbabbabcccababcacababacccbacacabcbcc", "abccccabcbaabbaaabaccccabbababaacabbcacbacacbbcba", "bccabcbbbbccbcacccccabaccabcbcbcccbbbbcaaaaaacbac", "aabcaaccbacbbaacacabcabacbaabcaabbccccccacbccc", "abcbabaabcbbaaacccccabaaaabcaabbccccaccbacababba", "ccaccbccababbaabbbbccaccbccababbaabbbbccaccbccabab", "abbbaccbcccbaaccaaabaacccaaabcacabcbcacabcbcccaba", "accbbacbbccaccaccabccbababbbacbacbaabcbbcaaca", "aaacacbcbbbcccabaabbacbacbabcbcbcacabaaaaacaab", "aacabcaabccabacbbbbcabcccacbacbababacaccabcaacbaa", "cacaaaababcccbbabaccabcaccaccbbcacbbcbabaabbabb", "cccaaccbccacccaccbccabaacbcbccabcacaacacbaaaaab", "bcbaababaacaaaaaacccbcbbabbbbbcbcacbababacbbabcba", "abcacbcbcabcbcbbcabcbcabaaaccacbaacbacaccababb", "accbacabbbaccccabcbbccbcbccaabbacccabcabccaaacbb", "abacaaababacaababcaccbababcabcababbaababcbabb", "bbacccbbbccacbacccbccaabcaabcbbbccbaccbabcaac", "aabababacabbcbbaccacbbbcbabccaccabcacabaacbbacb", "caabcaaaaacccabbaabaabcbacccbcbabaccbcbaabaaacabba", "cbcbaabcccabbbbaabaacababccaabbbbbacabccaccabc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 46, 0, 0, 0, 63, 0, 0, 0, 59, 0, 56, 0, 62, 47, 0, 51, 47, 0, 0, 0, 0, 56};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> g = {"ccbbcbaabcccbabcbcaaaac", "abbaccccacaabcbbacacaac", "abcbccbaabcabbbccaabbcb", "bcacabcaaacacabacbccbaa", "cbcbcaacacbaaaaccacccba", "acaaabacaccabcbcbabbbac", "babcaaccbccacbcbacacacb", "caccabaccbccbaaaaabbacb", "acacbccbabcaacbbcccaccb", "cbacbacbcabaababccaaaac", "ccccbbaabbccbcccabbacac", "aacbcccbaaacacabccabccc", "ccabcaaaabbbcbbbaabccac", "ccabacbcbbcbabacabbbbbb", "abbcabcbcbcaabcbcccbaba", "ccccabbabbbacbbacbcccaa", "acaccababcccbcaccbcbcaa", "cacbccbacbccbccaccbcbca", "bbbccabaacaccbcccbccacc", "bbcbcccbbccbacbcbcbbcba", "bcbacbbababcbcacbaaabba", "bacabbcbccbaccbbcbbbbcb", "baacabaccbcbccabbbbccaa"};
    vector<string> words = {"cccabcbababcaabccabaacacccabcbababcaabccabaacaccca", "bccbbabcabababccbbccbbbbccbbabcabababccbbccbbbbccb", "ccaccacbcbccbcbcaaaacbcccaccacbcbccbcbcaaaacbcccac", "bcccaccbacacbccbabcaacbbcccaccbacacbccbabcaacbbccc", "bacbcbccabcacbaacbcccbbbacbcbccabcacbaacbcccbbbacb", "ccbacccaaaaaabccbbacbacccbacccaaaaaabccbbacbacccba", "bcccccacabcbccccccaacbcbcccccacabcbccccccaacbcbccc", "cbacaacccabccbcbbaaccbbcbacaacccabccbcbbaaccbbcbac", "bbcbaabaaccaacccbcaaaacbbcbaabaaccaacccbcaaaacbbcb", "ccaaaaacccaccabcaacbcccccaaaaacccaccabcaacbcccccaa", "abccbccabacacccbbaccbababccbccabacacccbbaccbababcc", "cbabbaaabbcbbbabcaccacacbabbaaabbcbbbabcaccacacbab", "bcaaabcbabcbbcaabbaaabcbcaaabcbabcbbcaabbaaabcbcaa", "cccbcbccbbcccacccbbabbacccbcbccbbcccacccbbabbacccb", "bacbbcaccccbaccbacccbaabacbbcaccccbaccbacccbaabacb", "cbbabccabbcaacaaaacaacacbbabccabbcaacaaaacaacacbba", "bccabcbcccbbaccbacaccccbccabcbcccbbaccbacaccccbcca", "bacbbbbbbbcbcaabacbbbcbbacbbbbbbbcbcaabacbbbcbbacb", "cacccccbbbbaccaabbacccccacccccbbbbaccaabbacccccacc", "acccbcaabbacaabcccacacbacccbcaabbacaabcccacacbaccc", "bcaabccbbcbbcbbbaccbbcabcaabccbbcbbcbbbaccbbcabcaa", "aaaacabbbbacbbcbacbbabbaaaacabbbbacbbcbacbbabbaaaa", "bcbcbcacabbccabcccbabacbcbcbcacabbccabcccbabacbcbc", "abcbcbbaccaaabbbacccaccabcbcbbaccaaabbbacccaccabcb", "bbaaacbaccbaaccbaaacaacbbaaacbaccbaaccbaaacaacbbaa"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> g = {"abcbaabbaaabaccccab", "bababaacabbcacbacac", "bbcbaabaabbbbaabcaa", "ccbacbbaacacabcabac", "baabcaabbccccccacbc", "cccaabcbabaabcbbaaa", "cccccabaaaabcaabbcc", "ccaccbacababbaccaca", "babbacbbaaccbbacbbc", "caccaccabccbababbba", "cbacbaabcbbcaacaaba", "bbabbaacabcaabccaba", "cbbbbcabcccacbacbab", "abacaccabcaacbaabcc", "accacbccaabbcbaabab", "aacaaaaaacccbcbbabb", "bbbcbcacbababacbbab", "cbabbcacbcaccbcaaab", "acaaababacaababcacc", "bababcabcababbaabab", "cbabbcabbacccbbbcca", "cbacccbccaabcaabcbb", "bccbaccbabcaacacaab"};
    vector<string> words = {"bacabbbcacabaaccccaacccaabbaabacbbccbbbabaaccaa", "aaccbbaaccabccbacbaabbbaabcbcbcaaccbacbbccbacba", "bcabcacbcbbaccbbabacbaacaabcbabcbabcacaccbccccc", "caabcaacbcbbcbcaaccabccbccabaabbbccabcbbbabacbc", "acaabbaacabbbacbaccacaabbaacabbbacbaccacaabbaac", "bcacabacacccacabccbabcaaaaaacaaabcbccaccaacaaca", "bbabcbbbaaccabaabcbaaaacacbaacabbbacaccbacaabab", "babcaaabcaabcbbcabaaabcababbacabacaacbabbccbacc", "ccabcaccaabbcbcaccaaccbaaabbccbcabcbabababaaacb", "abbbccaaaccbcaabbcccbcaaacabcccccbbaacaaccbabaa", "aacbbacbbabcacaacbcaaaccacccbbaccbacbaccaccacab", "cbbaaabcaacaababbbaaabbccaccaabcabaababcbabaabb", "abbbbabbbabbbaacabacacabacabcabcacbcababccabcba", "bbaaaccaabcbbaccababcabbbcbacaaaabccbbbbbabbabc", "ccaaabbaaabcbbbacaacacbbaacacbcccccbccbcabbcbca", "caaabcaabcabaacabacccacaaaccabccbcaabbacbcaacaa", "cacabcccbabaacabbbbbcbababbacbaabacacaaccbcacca", "aabaaaaaccbccbccbabbaabacbaabbbabbabcacbcbbcbba", "babcaaabcacbbaacbcababcaaabcacbbaacbcababcaaabc", "baaabcbbaccabacbabbaabbaacbaabbbabacabababcaccc", "abbbabbcccacabacacbababbbbabbaacbccacabaaacbaaa", "bccbcaacabcccbbaaaabaacbccbcaacabcccbbaaaabaacb", "abbbcbbbcbbcbcabaacccbabaabaccbbaaabbccbcbccbca", "aaccbabaacabcaacabcabbbcacabacabaaacbbabbbbcacc", "aacbaabccabacaccabcaacbaabccabacaccabcaacbaabcc"};
    int k = 197;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 52, 53, 48, 0, 57, 53, 58, 57, 59, 60, 52, 49, 57, 64, 57, 53, 56, 0, 51, 59, 0, 50, 50, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> g = {"abcbaabbaaabaccccab", "bababaacabbcacbacac", "bbcbaabaabbbbaabcaa", "ccbacbbaacacabcabac", "baabcaabbccccccacbc", "cccaabcbabaabcbbaaa", "cccccabaaaabcaabbcc", "ccaccbacababbaccaca", "babbacbbaaccbbacbbc", "caccaccabccbababbba", "cbacbaabcbbcaacaaba", "bbabbaacabcaabccaba", "cbbbbcabcccacbacbab", "abacaccabcaacbaabcc", "accacbccaabbcbaabab", "aacaaaaaacccbcbbabb", "bbbcbcacbababacbbab", "cbabbcacbcaccbcaaab", "acaaababacaababcacc", "bababcabcababbaabab", "cbabbcabbacccbbbcca", "cbacccbccaabcaabcbb", "bccbaccbabcaacacaab"};
    vector<string> words = {"bacabbbcacabaaccccaacccaabbaabacbbccbbbabaaccaf", "aaccbbaaccabccbacbaabbbaabcbcbcaaccbacbbccbacbf", "bcabcacbcbbaccbbabacbaacaabcbabcbabcacaccbccccf", "caabcaacbcbbcbcaaccabccbccabaabbbccabcbbbabacbf", "acaabbaacabbbacbaccacaabbaacabbbacbaccacaabbaaf", "bcacabacacccacabccbabcaaaaaacaaabcbccaccaacaacf", "bbabcbbbaaccabaabcbaaaacacbaacabbbacaccbacaabaf", "babcaaabcaabcbbcabaaabcababbacabacaacbabbccbacf", "ccabcaccaabbcbcaccaaccbaaabbccbcabcbabababaaacf", "abbbccaaaccbcaabbcccbcaaacabcccccbbaacaaccbabaf", "aacbbacbbabcacaacbcaaaccacccbbaccbacbaccaccacaf", "cbbaaabcaacaababbbaaabbccaccaabcabaababcbabaabf", "abbbbabbbabbbaacabacacabacabcabcacbcababccabcbf", "bbaaaccaabcbbaccababcabbbcbacaaaabccbbbbbabbabf", "ccaaabbaaabcbbbacaacacbbaacacbcccccbccbcabbcbcf", "caaabcaabcabaacabacccacaaaccabccbcaabbacbcaacaf", "cacabcccbabaacabbbbbcbababbacbaabacacaaccbcaccf", "aabaaaaaccbccbccbabbaabacbaabbbabbabcacbcbbcbbf", "babcaaabcacbbaacbcababcaaabcacbbaacbcababcaaabf", "baaabcbbaccabacbabbaabbaacbaabbbabacabababcaccf", "abbbabbcccacabacacbababbbbabbaacbccacabaaacbaaf", "bccbcaacabcccbbaaaabaacbccbcaacabcccbbaaaabaacf", "abbbcbbbcbbcbcabaacccbabaabaccbbaaabbccbcbccbcf", "aaccbabaacabcaacabcabbbcacabacabaaacbbabbbbcacf", "aacbaabccabacaccabcaacbaabccabacaccabcaacbaabcf"};
    int k = 197;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> g = {"ccbbc", "baabc", "ccbab", "cbcaa", "aacab"};
    vector<string> words = {"aaccbaaccbaacc", "aabbcaabbcaabbc", "babccbabccbabc", "aaacaaaacaaaaca", "abbcaabbcaab", "ccbbcccbbcccbbc", "bbacabbacab", "caacccaacccaac", "baaccbaaccbaac", "caccbcaccbca"};
    int k = 10;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 0, 2, 7, 5, 6, 0, 5};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> g = {"ccbbcbaabcccbabcbcaaaac", "abbaccccacaabcbbacacaac", "abcbccbaabcabbbccaabbcb", "bcacabcaaacacabacbccbaa", "cbcbcaacacbaaaaccacccba", "acaaabacaccabcbcbabbbac", "babcaaccbccacbcbacacacb", "caccabaccbccbaaaaabbacb", "acacbccbabcaacbbcccaccb", "cbacbacbcabaababccaaaac", "ccccbbaabbccbcccabbacac", "aacbcccbaaacacabccabccc", "ccabcaaaabbbcbbbaabccac", "ccabacbcbbcbabacabbbbbb", "abbcabcbcbcaabcbcccbaba", "ccccabbabbbacbbacbcccaa", "acaccababcccbcaccbcbcaa", "cacbccbacbccbccaccbcbca", "bbbccabaacaccbcccbccacc", "bbcbcccbbccbacbcbcbbcba", "bcbacbbababcbcacbaaabba", "bacabbcbccbaccbbcbbbbcb", "baacabaccbcbccabbbbccaa"};
    vector<string> words = {"ccabaccbacbccacbacbacccccabaccbacbccacbacbacccc", "bbcaaaabababbabbbacaaabaabaccbcaaccaabcbbaccacb", "bcccaccbcabcacabbaacccacbbabbabcccababcacababac", "bacacabcbcccbabccccabcbaabbaaabaccccabbababaaca", "cccaccccbbabbbbbcbabbbccccaccccbbabbbbbcbabbbcc", "acabbcabcccaacabaababccacabbcabcccaacabaababcca", "cbbabccaacacacccbbcbccccbbabccaacacacccbbcbcccc", "bbbaabcaaccbacbbaacacabcabacbaabcaabbccccccacbc", "cbaaaccbbccaccaaacaaacacbaaaccbbccaccaaacaaacac", "abaabcbbaaacccccabaaaabcaabbccccaccbacababbacca", "bccaaaababccbcbcbcaaaaabccaaaababccbcbcbcaaaaab", "acacaaaccaccbbabbccacbbacacaaaccaccbbabbccacbba", "bbacbbccaccaccabccbababbbacbacbaabcbbcaacaababb", "baacabcaabccabacbbbbcabcccacbacbababacaccabcaac", "cababccbccbcabbacccbcaccababccbccbcabbacccbcacc", "abaacbcbcbaabcaabcbabbbabaacbcbcbaabcaabcbabbba", "ccabcccacbabbaabcccaabcccabcccacbabbaabcccaabcc", "cbcccccabccbcacccaccaaacbcccccabccbcacccaccaaac", "acaaaaaacccbcbbabbbbbcbcacbababacbbabcbabbcacbc", "acacacabbabcbacacbcaaaaacacacabbabcbacacbcaaaaa", "bacaaababacaababcaccbababcabcababbaababcbabbcab", "cccbbbccacbacccbccaabcaabcbbbccbaccbabcaacacaab", "abacabbcbbaccacbbbcbabccaccabcacabaacbbacbaccaa", "abcbbbbcbbccbacccbabcbbabcbbbbcbbccbacccbabcbba", "ccabbaabaabcbacccbcbabaccbcbaabaaacabbaababbbbb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> g = {"cabaaaaaabacbbaabbaabbc", "acabbcbbcaabbcbaaaaacba", "bcaacaaacaacbcccbcbabab", "bcbcacbcaaccaabbbbbacab", "aaaabcaababbccbccbccbba", "babbbaacbacccaacbcbccab", "cccaaabaacbbcacacaaabcc", "ccbcbbaacacaaccbaacbaba", "acccbbbcccaacbcacbcbbbb", "cbccaccccabcbcaccbbaaca", "abaabccaacccababccbcabb", "baaababbbbaabbcacbbaacc", "bcaacacacaaacbcacbaacac", "cabccaaaacbaabbccbaaacc", "bbbcababbaacbabacbcbaac", "abcbababaabcbcbabaabcac", "acabaacbbbabcabaacbbcbc", "caaccccacaabaaaccbacacc", "cbabcbbbbbaacabbbbbbbac", "accabaacbcbaacbcbcbbccc", "baaabaccbbacbccbaabacba", "ccbbbbcccccaccbccaaaaba", "baaccccccbbbbbbabacaabb"};
    vector<string> words = {"cacaabaabcababaaabccccbcacaabaabcababaaabccccbcaca", "bcacaaaacbbcbcccbacabbabcacaaaacbbcbcccbacabbabcac", "bcbcbbaaaacabaacabbabbcbcbcbbaaaacabaacabbabbcbcbc", "cbbcacbbaccaccbabacabcccbbcacbbaccaccbabacabcccbbc", "cbbcbcbbcacaaaaacbbaacccbbcbcbbcacaaaaacbbaacccbbc", "aaaaaaaaacaaabaaaabbcccaaaaaaaaacaaabaaaabbcccaaaa", "ababbbabccacbcaacaacbacababbbabccacbcaacaacbacabab", "caabbacacbcaccabababacacaabbacacbcaccabababacacaab", "abccabbcbbbcaabcbabcabaabccabbcbbbcaabcbabcabaabcc", "cbbbccacbabbcbccaacaabacbbbccacbabbcbccaacaabacbbb", "bbcbcbbcbcbccbcbbabccbabbcbcbbcbcbccbcbbabccbabbcb", "cbbaccbbaabbabaabbcbbcccbbaccbbaabbabaabbcbbcccbba", "bbaacbabbbacaaabaabccbabbaacbabbbacaaabaabccbabbaa", "babaccabacccbccbaccaccbbabaccabacccbccbaccaccbbaba", "aabaaacaabcaacaaccacaccaabaaacaabcaacaaccacaccaaba", "bbcbbaacabcbccccbcaabaabbcbbaacabcbccccbcaabaabbcb", "ccccbcaaaccbbacabbacaacccccbcaaaccbbacabbacaaccccc", "abcaacbaccaacbabaccbcababcaacbaccaacbabaccbcababca", "bcacacbcabbccabbcabbcaabcacacbcabbccabbcabbcaabcac", "aabcbbabbcbbaaccccbacbbaabcbbabbcbbaaccccbacbbaabc", "aacaccbacccaaacabaacabaaacaccbacccaaacabaacabaaaca", "cbcbcacabacacabbccacccccbcbcacabacacabbccacccccbcb", "cccacbacabaccbcabcbbbbbcccacbacabaccbcabcbbbbbccca", "cabccbbcbbabaaabaabacabcabccbbcbbabaaabaabacabcabc", "babbcbabbabbcbcbacaaacababbcbabbabbcbcbacaaacababb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> g = {"aabbcaccccabcacccbcbcbb", "bbbbbacbaacccccabacabbc", "cbbccbcbcabababcbabbcaa", "ccccbbcacaccccacbacaabc", "cccabcacaaaccabcaccbccc", "bbaabbbcbcccccbbbcabcba", "ababbaacaacabaaabcaaaba", "babcbbcaccaababacccabab", "ababaaaaacaaaabcbaaacab", "accbcbbaaaabbbaaacbabab", "abcabaacaabccbccbbcccab", "caccbacbcaacaccaaacccba", "bbaabcabbbbcacabacccbca", "bcacacbcbabbbbaaaaaabcc", "ccacbcbcbbbabbabbcabcca", "bacaabbcccbbabaacccaabc", "abaabacacbcacbabbbccbac", "aaacaaaabcabbbabaccaccb", "acbacbbbcbcacccabbabcac", "cabccacbcbaaaaccbacaccb", "cbcacbcaccbcacbabacbcba", "cbacaaaababbbaaabbbacac", "abbbcbcaacbcccbbabababc"};
    vector<string> words = {"ccbacbaccaacbcbbbcccaaaccbacbaccaacbcbbbcccaaaccba", "baabbcbababaacccbaabababaabbcbababaacccbaabababaab", "aabcaabcbccabaaacaacbccaabcaabcbccabaaacaacbccaabc", "bcabbbababcbcabbbbcabcbbcabbbababcbcabbbbcabcbbcab", "abccaaaccccaabbaaaaaabaabccaaaccccaabbaaaaaabaabcc", "cbabacbabbabbccccbacacbcbabacbabbabbccccbacacbcbab", "abcbcbababcaaccbabaccaaabcbcbababcaaccbabaccaaabcb", "cacaccbcacaacbccaaccbabcacaccbcacaacbccaaccbabcaca", "acabcccbbaccaaaababbcaaacabcccbbaccaaaababbcaaacab", "ccaccabcccaacaacbcbbaccccaccabcccaacaacbcbbaccccac", "bbabcacaccaabccbcaacaabbbabcacaccaabccbcaacaabbbab", "bccbaaaaaabbbbabcbcacacbccbaaaaaabbbbabcbcacacbccb", "cbbcabaaaaaacacccacabbacbbcabaaaaaacacccacabbacbbc", "cccbbacbabbabcccacbcbcccccbbacbabbabcccacbcbcccccb", "aaaabbbaccbbcbcbbbcbbccaaaabbbaccbbcbcbbbcbbccaaaa", "bcabbaccacaccbacbaacabbbcabbaccacaccbacbaacabbbcab", "cabacbabcaacabcaaccbbcbcabacbabcaacabcaaccbbcbcaba", "cbcaccccaacacacbbbbcabacbcaccccaacacacbbbbcabacbca", "aaccaaaacabcbbbbccbcaccaaccaaaacabcbbbbccbcaccaacc", "acabaccaacacacabbcbcabcacabaccaacacacabbcbcabcacab", "cbbcababcbbaacccbccbccacbbcababcbbaacccbccbccacbbc", "bbaacbcbcabbacbbccaacaabbaacbcbcabbacbbccaacaabbaa", "abbabbcbbaabcabaacbbaababbabbcbbaabcabaacbbaababba", "baabacaaaaabccbacaabcbcbaabacaaaaabccbacaabcbcbaab", "abcbcbbabcbbbccccbcabccabcbcbbabcbbbccccbcabccabcb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> g = {"bbcccacacbbabcbabbabcbb", "acabbaacacbbcbbbbababaa", "cbbbccacbbbaaccabcbacba", "bbabcacaccbaacbaabaabca", "bbbacbbbccabaabcabcbbcc", "bbacbbcbaacbbccccabacba", "bbcabbbbccbbccbcbacacba", "bcaccaababccbbacabbbcca", "abbaacabcbcbacabacaaaab", "cbbbabccacbcacbcaccbaac", "cccbbaacbbbbaacacabbbcb", "acabcabababccacabaabcbb", "ababbcbabababccbcccbaab", "abbcbaccccaaabcabaaabcc", "abbbbacaaaccaabcacaabbc", "cbaacaaccbccacccbabcbaa", "bcaababbacacbcbbcccacbb", "bbccbaccaabccababacbcac", "baccbbaccabbabaaaabaabb", "cbacccbcbaaabccaacbbcca", "ababccacaaacbbcccbcaaac", "ccbaccacbaacacaaabbcaba", "baacbaaacbbbaabcacbcabc"};
    vector<string> words = {"aabcaaaaaccababccbccbcaaabcaaaaaccababccbccbcaaabc", "cbcaababbcbbccbacbbaacbcbcaababbcbbccbacbbaacbcbca", "caabcbcbabaabaaaabbabaccaabcbcbabaabaaaabbabaccaab", "aabaacbbccabbabcaacccccaabaacbbccabbabcaacccccaaba", "ccbbcaccaccacbbccbccaaaccbbcaccaccacbbccbccaaaccbb", "bcccbabbccacbbaacccbccabcccbabbccacbbaacccbccabccc", "bbbcbcbbabcccababacbaccbbbcbcbbabcccababacbaccbbbc", "babbbccbaacaaabcbacbbacbabbbccbaacaaabcbacbbacbabb", "accbaabaacbacccbcbbbabcaccbaabaacbacccbcbbbabcaccb", "acaacbcbbbccaaccbbacbbbacaacbcbbbccaaccbbacbbbacaa", "bcbacbabcabbacacbabbaccbcbacbabcabbacacbabbaccbcba", "cbcbaababcacbbaaacacacacbcbaababcacbbaaacacacacbcb", "abbaaaacbaaabbacbababcaabbaaaacbaaabbacbababcaabba", "ccabbccbbacccccccccbbcaccabbccbbacccccccccbbcaccab", "babbbaababbbbabaccacccbbabbbaababbbbabaccacccbbabb", "caaccaccaaabbaaabbbaccccaaccaccaaabbaaabbbaccccaac", "bcabcabcaaaacaccbbccaccbcabcabcaaaacaccbbccaccbcab", "bccbcabbcccabccbbcacaaabccbcabbcccabccbbcacaaabccb", "bcabcacacbbaabaacabbabcbcabcacacbbaabaacabbabcbcab", "abbaccccaaabccabbcacbaaabbaccccaaabccabbcacbaaabba", "aaacbcbcbbababbbbaabbacaaacbcbcbbababbbbaabbacaaac", "abbccacabbcbbbacaccaaacabbccacabbcbbbacaccaaacabbc", "bbcabababaacaabaaccacbbbbcabababaacaabaaccacbbbbca", "bcbbabbccbabcacbcaabaccbcbbabbccbabcacbcaabaccbcbb", "cabccbaccbaaacbabcaacaacabccbaccbaaacbabcaacaacabc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> g = {"bcbbccaabcacbaaaabbacca", "cacacbaabaababcaaaccaaa", "cbcaabbacccaaaaaabcbaaa", "accbbcbcbccbcbccbbccbab", "baacaccabbccacacabababc", "cbbcbaaaccccababaccabbb", "ccbaabaabcbabaaaacbabbc", "abacccacaaccccacbabbbba", "bbcaccbbcacbbcbcaabbabb", "bacbcbcbcbaaccbbaabcbaa", "bbabababbabbcbabacbbcac", "bbababcabcccbcaacaaabac", "aacabbbabbbcbabaababbba", "acaacccbacccbccabbcaacc", "cabbcbbccbcbbbcabacccab", "cababbaaaacbacccbabbbab", "accbacbcaabaacccbacaaab", "cbaacccbbbacaabbaaaaacc", "cacaccabccacabcccaaabcc", "cacabbbaccbbacabcabaacb", "cabbcbbbbbacbbaccabbcaa", "caabaabbbccabaaabbabbca", "aabcbaccbabccbbabcabbbc"};
    vector<string> words = {"baaababaaccacabcbabcccabaaababaaccacabcbabcccabaaa", "bababbbbcbcbbaabbbbaacabababbbbcbcbbaabbbbaacababa", "aabcabbbaaacabbbabbbacbaabcabbbaaacabbbabbbacbaabc", "bcacbbcacabcbabbbabbbabbcacbbcacabcbabbbabbbabbcac", "cccabcccaaacbbaacabcabacccabcccaaacbbaacabcabaccca", "cbbcbaacacabaaaccccbaaacbbcbaacacabaaaccccbaaacbbc", "caccbbbaaaabbababcacbbccaccbbbaaaabbababcacbbccacc", "aaaaababaaabaccabacacacaaaaababaaabaccabacacacaaaa", "baabcacacaabaabccabbaabbaabcacacaabaabccabbaabbaab", "cabcabbaabbacbbbacacaaacabcabbaabbacbbbacacaaacabc", "bcccabacbabbbbbccacbcabbcccabacbabbbbbccacbcabbccc", "abbbcacbacaabacacbacaacabbbcacbacaabacacbacaacabbb", "acacababbbaacbaabbbccabacacababbbaacbaabbbccabacac", "aaababcaabcabccabbcbbcaaaababcaabcabccabbcbbcaaaab", "bcccacaccaacaaacababbabbcccacaccaacaaacababbabbccc", "aabacabbbccacbcbbbcabccaabacabbbccacbcbbbcabccaaba", "bbccaababcacacacbbaabacbbccaababcacacacbbaabacbbcc", "babbbaaccabcbcbbbbacbaababbbaaccabcbcbbbbacbaababb", "abbccacacbbacbaccccabbaabbccacacbbacbaccccabbaabbc", "cccbcbcabcccacbcabaacbacccbcbcabcccacbcabaacbacccb", "bcccbbacbaabcccacacbacabcccbbacbaabcccacacbacabccc", "acccccbabaaaababbcbabacacccccbabaaaababbcbabacaccc", "ccccccaabaaaaaccccababaccccccaabaaaaaccccababacccc", "cabababbabbaccbaaaaaacacabababbabbaccbaaaaaacacaba", "bbabcaaaacabaabbacaaabbbbabcaaaacabaabbacaaabbbbab"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> g = {"acacbccabbbcbbbbcccbbcc", "babbabbabbacaaabccbbbcc", "ccbaaaccbcccaabacbbaacc", "abacbcbabbbbbccbbacabcc", "acaacaabbbaabcbaabababa", "acccaccbccbababbaaaccac", "ccbcabcbaaacbcbccbbcccb", "bbaccabbacbbbcbabacccca", "baccbbbbcaaacbaccaaabac", "bcaacbacbccbacbbcbbabbb", "abacabcabcabaccbabcbabb", "abacbbcbabaaaabacbabaab", "cbccbaaacbbacbabacbbbba", "ccccbbcbacaccaaabcbbaba", "cbaaaacbcbbaaaababbbabc", "ccaccbbbcbcbcabbcbbabac", "cbaccccacbabbbbccbbabcb", "bcabaaacacbababbaacbcac", "acbabbabcabcbcbccacaaac", "abcbcabacbcbaccacaaabaa", "bbacaaaacccbbcbcabccbac", "cbccabcbcccbaaababbacba", "bcacacbbbbbacacbabacbcc"};
    vector<string> words = {"aabaabacaacbabaacababbaaabaabacaacbabaacababbaaaba", "bbaccaabbbbcabbbbbbcaccbbaccaabbbbcabbbbbbcaccbbac", "aababbbbbbacccabccacbacaababbbbbbacccabccacbacaaba", "bccbacbacbabbcaccccbbaabccbacbacbabbcaccccbbaabccb", "cccacbbacbbcaacacbbbacbcccacbbacbbcaacacbbbacbccca", "ccbbcbbccbccacbabcbcbbbccbbcbbccbccacbabcbcbbbccbb", "cbcacbcaabaaabccbbaabbccbcacbcaabaaabccbbaabbccbca", "bccabccbbacaccbabccbabcbccabccbbacaccbabccbabcbcca", "bbaabbacbccbcbbabbcbcacbbaabbacbccbcbbabbcbcacbbaa", "babacbaacaabbbcabcbbbcbbabacbaacaabbbcabcbbbcbbaba", "abbacabccbacaccccabaabbabbacabccbacaccccabaabbabba", "bbaccacbbbbabccccaabcacbbaccacbbbbabccccaabcacbbac", "bbaacbcbcbbbbcbbbbaabbcbbaacbcbcbbbbcbbbbaabbcbbaa", "bbbababbcaabcbababcbabbbbbababbcaabcbababcbabbbbba", "cbbbcbcacabaccbbbccbbbbcbbbcbcacabaccbbbccbbbbcbbb", "caaaacbcbabcccccabbbbabcaaaacbcbabcccccabbbbabcaaa", "bacbccaaccaabbabbbcbcbabacbccaaccaabbabbbcbcbabacb", "abcaaaacbcaaaacbaccbccbabcaaaacbcaaaacbaccbccbabca", "babaabbcbabbbaabbbabbabbabaabbcbabbbaabbbabbabbaba", "aabccccbbbbacabccaabbbaaabccccbbbbacabccaabbbaaabc", "acacccabcaabbbcccbccaaaacacccabcaabbbcccbccaaaacac", "bbabbababbcacabbacbbaaabbabbababbcacabbacbbaaabbab", "cccccbaccbbbacbbbacbbbccccccbaccbbbacbbbacbbbccccc", "bcaacbbaabcbabcabccccacbcaacbbaabcbabcabccccacbcaa", "cbbcbbaabacaccacabacabccbbcbbaabacaccacabacabccbbc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 45, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> g = {"bbaccababbbbcbcaaaaabaa", "cacbcbcaaaabacbbbbccaba", "babbaaccacccacabbbabcaa", "cbbbaabaccabccbbbcbbcca", "bababcbbccabbbcccacbccc", "acccbbaacabacbcabbacccc", "cbbccaccccacbabbaabaacc", "accccbcccaaccccbacaaabb", "aaabacaaacabacababcaaac", "babcbcbaccbbbbbbbccacab", "cbcbbcbbbbcbacabcaccbbc", "aacaaccabbbccacccccbbcb", "bacabcbcaccbabacbcbcaca", "bccaccacbcbcbaabcababac", "bababbabbbcaaabaacaacbc", "cbaabbbbbcbcbccaabaacba", "bbabbbabcabbaabaaaacbbb", "aabaaacbabbbcaabccbcbab", "bacbaabaacbaababcbacabc", "aacacbbcbbacbbaccacbbca", "bbccbcbacbbbabbcaaacabc", "cbcbccabcacacbacacccbaa", "cbbacbbaacbacccacbbabab"};
    vector<string> words = {"cbbacabbabbacbacabbccabcbbacabbabbacbacabbccabcbba", "bbabacccbbabcacabbcbbaabbabacccbbabcacabbcbbaabbab", "ccbacacbabccccacccabccbccbacacbabccccacccabccbccba", "cbbbcbccacbcbbcaaaccbbccbbbcbccacbcbbcaaaccbbccbbb", "ccaabbbbccaaabcbacbacbaccaabbbbccaaabcbacbacbaccaa", "bbcbacababcccbbbcaabacabbcbacababcccbbbcaabacabbcb", "acaaabcaaabbabacbccabcaacaaabcaaabbabacbccabcaacaa", "acbaccbaaabcbaaaacccabaacbaccbaaabcbaaaacccabaacba", "accccacabbbcbbbbcbbbbabaccccacabbbcbbbbcbbbbabaccc", "cacbcbabbcbacaacabaacaccacbcbabbcbacaacabaacaccacb", "abcaaccccbaccaaaaabbcababcaaccccbaccaaaaabbcababca", "abcacccbbcbbcaaabbacbccabcacccbbcbbcaaabbacbccabca", "acaacaaacbcccbccccccbacacaacaaacbcccbccccccbacacaa", "bcaaacacabaaabcbabbbabbbcaaacacabaaabcbabbbabbbcaa", "bbcaacabbcbbbabbbbabcbbbbcaacabbcbbbabbbbabcbbbbca", "bcbbabbaacccaababcbbbbbbcbbabbaacccaababcbbbbbbcbb", "baacccacacbbbbaccabcaccbaacccacacbbbbaccabcaccbaac", "baababaccccaaaacacaaaaabaababaccccaaaacacaaaaabaab", "aabbbaccbaabcaaaaccabbbaabbbaccbaabcaaaaccabbbaabb", "aaaacbbcbaccacbcabbcbbbaaaacbbcbaccacbcabbcbbbaaaa", "cbccaaabbaaabcbbbcccacacbccaaabbaaabcbbbcccacacbcc", "bcbbccbbcccbbcababbcaaabcbbccbbcccbbcababbcaaabcbb", "cbbccaacbaaaaccbbabcabccbbccaacbaaaaccbbabcabccbbc", "aabacccbaabbbacabbbbbcbaabacccbaabbbacabbbbbcbaaba", "cacbabbcacbcbabbaaaabcccacbabbcacbcbabbaaaabcccacb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> g = {"bcbaaccbbcbabcbcabcabba", "aacaacaacbccacbccacbaca", "bcbbbabaccabbcccaaababb", "abcbbccaaacbaababcbcbab", "bbcaabbbababcbbbacbcbac", "bcbaacabccbaacabcabccca", "babcabbaaaccbaaccbacaca", "cabbcaccaacabbabacaccba", "ccacccccbbacccacabcbbca", "ccbcccbcbbaccbbacacccca", "cbabccacacbbbbbbabbbbcc", "abaaaacbbccbbaaaabcbbca", "cbaacabaaabbabbccabbacc", "abbabccaccaacccacbccbbb", "abccbccbacbbbaaabcbbbbb", "aaacacaabcbccbaccbbbcbc", "aaabcbbccccbccbcccbcacc", "baabcabbcaccabacaacacbc", "cbaabbacaaaaccbcbabaccc", "aaacaccbabbbbbccaccacaa", "bcacaaaaaaaaacbbcbacacb", "bcbccabcbccbccacabcacba", "cabcbccbbcbabcbbccabccc"};
    vector<string> words = {"aabaccaccabbbacabbcaccaaabaccaccabbbacabbcaccaaaba", "bcaabcbbbcaabcccabcbcbcbcaabcbbbcaabcccabcbcbcbcaa", "abbbaababcabbaaacbacabcabbbaababcabbaaacbacabcabbb", "acccbacaacccabaabbabbaaacccbacaacccabaabbabbaaaccc", "cbbaaacabcaaaaaaababbcacbbaaacabcaaaaaaababbcacbba", "cacbbabcaabcbcbababbbaccacbbabcaabcbcbababbbaccacb", "abaacbacbccbbacaacababcabaacbacbccbbacaacababcabaa", "caabbabbcbcbababbccbbaacaabbabbcbcbababbccbbaacaab", "acbaccbbbccacbcbcccaaccacbaccbbbccacbcbcccaaccacba", "bcbcbbbaccacccbbbcaaaccbcbcbbbaccacccbbbcaaaccbcbc", "abacbbcbaaabacaccbccbbaabacbbcbaaabacaccbccbbaabac", "bcccbbacacabbabbbbcbabbbcccbbacacabbabbbbcbabbbccc", "caacbacbbbabcaccbcabaaccaacbacbbbabcaccbcabaaccaac", "aaabbbbccbbabbccabcaabcaaabbbbccbbabbccabcaabcaaab", "caabacaabbccbcbccacbaaacaabacaabbccbcbccacbaaacaab", "cccbbbcbacaacbbcbbbaabbcccbbbcbacaacbbcbbbaabbcccb", "acacbccabbabbbbcccaaacaacacbccabbabbbbcccaaacaacac", "cccabcacabaabaaabbbbbbbcccabcacabaabaaabbbbbbbccca", "accacccabacbacabacabacaaccacccabacbacabacabacaacca", "aabaabbccbccaaaaabccccbaabaabbccbccaaaaabccccbaaba", "bbbabcabcacbbcbacccababbbbabcabcacbbcbacccababbbba", "ccacababbbacaaacaaabbbcccacababbbacaaacaaabbbcccac", "bbcbcbccaaabaaccaabccbabbcbcbccaaabaaccaabccbabbcb", "abaabbbbcabaabcacabcbbcabaabbbbcabaabcacabcbbcabaa", "cabcbccaaabbbccbcaaabaacabcbccaaabbbccbcaaabaacabc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> g = {"abaccaaaabcccbbcaabbbaa", "ccbabacbbbccacbbacababb", "babccaccaabacccccaabbab", "cbaccbbbccbabbcbccbcacb", "bbbaaabacccbbaabbcbcacc", "baababbabbcbbcbacbcbbcb", "aabaabccabbaaaaccbbccac", "cacccccacbccbbccaacacbb", "aabbccacabccbabbbcaaaba", "cccbbabbcbacbabcaabbaac", "acaacabaaccbbccbcccbbac", "accaaccabcaabaaaccacabb", "aacbccbbabbacabccaabaca", "aabaababcaaabbcaabaacca", "cabbababaacababccabcacb", "bcccbcaaaaaccccabaaabbb", "bbbaacabccccbcbccabbcac", "caaacaaccaacbaccacbcacb", "bbbbbacbaabccbccbcaacaa", "aacabaacbbcccbaacacaaab", "accaacbaabcbbbbacaacbcc", "abccabbbacbcabcbaccacbc", "cbacabcacbccabccaaacbcc"};
    vector<string> words = {"ccabaabbabbabbcbababaaaccabaabbabbabbcbababaaaccab", "cabcbcabcabbcbacacbbaaccabcbcabcabbcbacacbbaaccabc", "cbccacbccabccabbcbaabcccbccacbccabccabbcbaabcccbcc", "cbaaaccbcccabcbccbaabbccbaaaccbcccabcbccbaabbccbaa", "ccbccccbcaabccabcbbabaaccbccccbcaabccabcbbabaaccbc", "cbbcbccacbabcaaaaabaacacbbcbccacbabcaaaaabaacacbbc", "abcaabaaaccacabbaccaaccabcaabaaaccacabbaccaaccabca", "acbacabcbacacabbbcbcbaaacbacabcbacacabbbcbcbaaacba", "acbbaacacaaaaabcbccbcbcacbbaacacaaaaabcbccbcbcacbb", "bbaabcccccccbcacacbaaacbbaabcccccccbcacacbaaacbbaa", "babaacbaacbbaacaacccbccbabaacbaacbbaacaacccbccbaba", "ccbbbcbcabcbacaabcccbcbccbbbcbcabcbacaabcccbcbccbb", "accbaacbbbbcbacbbaaabccaccbaacbbbbcbacbbaaabccaccb", "accacbacabcacccacaaccacaccacbacabcacccacaaccacacca", "babaacbbbcccacabccbabaababaacbbbcccacabccbabaababa", "baccccbbbcabbcaacbcabcabaccccbbbcabbcaacbcabcabacc", "ccaaaacbaabccaaacaabccbccaaaacbaabccaaacaabccbccaa", "cbccbcaabbaaacaabaababccbccbcaabbaaacaabaababccbcc", "ccacababbacbccaaabccbaaccacababbacbccaaabccbaaccac", "acbacccbabcaababbcacabaacbacccbabcaababbcacabaacba", "accbccbcbcbbcaacabcbccbaccbccbcbcbbcaacabcbccbaccb", "aaccccaacbabcbaaaacbcbbaaccccaacbabcbaaaacbcbbaacc", "aaababbaacaaacbcbbcbbccaaababbaacaaacbcbbcbbccaaab", "cbbbabcbbbcbbcbaacaaaabcbbbabcbbbcbbcbaacaaaabcbbb", "ababbcbcbcaacaaaccbbbbaababbcbcbcaacaaaccbbbbaabab"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 39, 0, 0, 48, 0, 0, 40, 0, 0, 55, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> g = {"ccbbcbaabcccbabcbcaaaac", "abbaccccacaabcbbacacaac", "abcbccbaabcabbbccaabbcb", "bcacabcaaacacabacbccbaa", "cbcbcaacacbaaaaccacccba", "acaaabacaccabcbcbabbbac", "babcaaccbccacbcbacacacb", "caccabaccbccbaaaaabbacb", "acacbccbabcaacbbcccaccb", "cbacbacbcabaababccaaaac", "ccccbbaabbccbcccabbacac", "aacbcccbaaacacabccabccc", "ccabcaaaabbbcbbbaabccac", "ccabacbcbbcbabacabbbbbb", "abbcabcbcbcaabcbcccbaba", "ccccabbabbbacbbacbcccaa", "acaccababcccbcaccbcbcaa", "cacbccbacbccbccaccbcbca", "bbbccabaacaccbcccbccacc", "bbcbcccbbccbacbcbcbbcba", "bcbacbbababcbcacbaaabba", "bacabbcbccbaccbbcbbbbcb", "baacabaccbcbccabbbbccaa"};
    vector<string> words = {"ccabaccbacbccacbacbacccccabaccbacbccacbacbacccx", "bbcaaaabababbabbbacaaabaabaccbcaaccaabcbbaccacx", "bcccaccbcabcacabbaacccacbbabbabcccababcacababax", "bacacabcbcccbabccccabcbaabbaaabaccccabbababaacx", "cccaccccbbabbbbbcbabbbccccaccccbbabbbbbcbabbbcx", "acabbcabcccaacabaababccacabbcabcccaacabaababccx", "cbbabccaacacacccbbcbccccbbabccaacacacccbbcbcccx", "bbbaabcaaccbacbbaacacabcabacbaabcaabbccccccacbx", "cbaaaccbbccaccaaacaaacacbaaaccbbccaccaaacaaacax", "abaabcbbaaacccccabaaaabcaabbccccaccbacababbaccx", "bccaaaababccbcbcbcaaaaabccaaaababccbcbcbcaaaaax", "acacaaaccaccbbabbccacbbacacaaaccaccbbabbccacbbx", "bbacbbccaccaccabccbababbbacbacbaabcbbcaacaababx", "baacabcaabccabacbbbbcabcccacbacbababacaccabcaax", "cababccbccbcabbacccbcaccababccbccbcabbacccbcacx", "abaacbcbcbaabcaabcbabbbabaacbcbcbaabcaabcbabbbx", "ccabcccacbabbaabcccaabcccabcccacbabbaabcccaabcx", "cbcccccabccbcacccaccaaacbcccccabccbcacccaccaaax", "acaaaaaacccbcbbabbbbbcbcacbababacbbabcbabbcacbx", "acacacabbabcbacacbcaaaaacacacabbabcbacacbcaaaax", "bacaaababacaababcaccbababcabcababbaababcbabbcax", "cccbbbccacbacccbccaabcaabcbbbccbaccbabcaacacaax", "abacabbcbbaccacbbbcbabccaccabcacabaacbbacbaccax", "abcbbbbcbbccbacccbabcbbabcbbbbcbbccbacccbabcbbx", "ccabbaabaabcbacccbcbabaccbcbaabaaacabbaababbbbb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> g = {"cabaaaaaabacbbaabbaabbc", "acabbcbbcaabbcbaaaaacba", "bcaacaaacaacbcccbcbabab", "bcbcacbcaaccaabbbbbacab", "aaaabcaababbccbccbccbba", "babbbaacbacccaacbcbccab", "cccaaabaacbbcacacaaabcc", "ccbcbbaacacaaccbaacbaba", "acccbbbcccaacbcacbcbbbb", "cbccaccccabcbcaccbbaaca", "abaabccaacccababccbcabb", "baaababbbbaabbcacbbaacc", "bcaacacacaaacbcacbaacac", "cabccaaaacbaabbccbaaacc", "bbbcababbaacbabacbcbaac", "abcbababaabcbcbabaabcac", "acabaacbbbabcabaacbbcbc", "caaccccacaabaaaccbacacc", "cbabcbbbbbaacabbbbbbbac", "accabaacbcbaacbcbcbbccc", "baaabaccbbacbccbaabacba", "ccbbbbcccccaccbccaaaaba", "baaccccccbbbbbbabacaabb"};
    vector<string> words = {"cacaabaabcababaaabccccbcacaabaabcababaaabccccbcacx", "bcacaaaacbbcbcccbacabbabcacaaaacbbcbcccbacabbabcax", "bcbcbbaaaacabaacabbabbcbcbcbbaaaacabaacabbabbcbcbx", "cbbcacbbaccaccbabacabcccbbcacbbaccaccbabacabcccbbx", "cbbcbcbbcacaaaaacbbaacccbbcbcbbcacaaaaacbbaacccbbx", "aaaaaaaaacaaabaaaabbcccaaaaaaaaacaaabaaaabbcccaaax", "ababbbabccacbcaacaacbacababbbabccacbcaacaacbacabax", "caabbacacbcaccabababacacaabbacacbcaccabababacacaax", "abccabbcbbbcaabcbabcabaabccabbcbbbcaabcbabcabaabcx", "cbbbccacbabbcbccaacaabacbbbccacbabbcbccaacaabacbbx", "bbcbcbbcbcbccbcbbabccbabbcbcbbcbcbccbcbbabccbabbcx", "cbbaccbbaabbabaabbcbbcccbbaccbbaabbabaabbcbbcccbbx", "bbaacbabbbacaaabaabccbabbaacbabbbacaaabaabccbabbax", "babaccabacccbccbaccaccbbabaccabacccbccbaccaccbbabx", "aabaaacaabcaacaaccacaccaabaaacaabcaacaaccacaccaabx", "bbcbbaacabcbccccbcaabaabbcbbaacabcbccccbcaabaabbcx", "ccccbcaaaccbbacabbacaacccccbcaaaccbbacabbacaaccccx", "abcaacbaccaacbabaccbcababcaacbaccaacbabaccbcababcx", "bcacacbcabbccabbcabbcaabcacacbcabbccabbcabbcaabcax", "aabcbbabbcbbaaccccbacbbaabcbbabbcbbaaccccbacbbaabx", "aacaccbacccaaacabaacabaaacaccbacccaaacabaacabaaacx", "cbcbcacabacacabbccacccccbcbcacabacacabbccacccccbcx", "cccacbacabaccbcabcbbbbbcccacbacabaccbcabcbbbbbcccx", "cabccbbcbbabaaabaabacabcabccbbcbbabaaabaabacabcabx", "babbcbabbabbcbcbacaaacababbcbabbabbcbcbacaaacababb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> g = {"aabbcaccccabcacccbcbcbb", "bbbbbacbaacccccabacabbc", "cbbccbcbcabababcbabbcaa", "ccccbbcacaccccacbacaabc", "cccabcacaaaccabcaccbccc", "bbaabbbcbcccccbbbcabcba", "ababbaacaacabaaabcaaaba", "babcbbcaccaababacccabab", "ababaaaaacaaaabcbaaacab", "accbcbbaaaabbbaaacbabab", "abcabaacaabccbccbbcccab", "caccbacbcaacaccaaacccba", "bbaabcabbbbcacabacccbca", "bcacacbcbabbbbaaaaaabcc", "ccacbcbcbbbabbabbcabcca", "bacaabbcccbbabaacccaabc", "abaabacacbcacbabbbccbac", "aaacaaaabcabbbabaccaccb", "acbacbbbcbcacccabbabcac", "cabccacbcbaaaaccbacaccb", "cbcacbcaccbcacbabacbcba", "cbacaaaababbbaaabbbacac", "abbbcbcaacbcccbbabababc"};
    vector<string> words = {"ccbacbaccaacbcbbbcccaaaccbacbaccaacbcbbbcccaaaccbx", "baabbcbababaacccbaabababaabbcbababaacccbaabababaax", "aabcaabcbccabaaacaacbccaabcaabcbccabaaacaacbccaabx", "bcabbbababcbcabbbbcabcbbcabbbababcbcabbbbcabcbbcax", "abccaaaccccaabbaaaaaabaabccaaaccccaabbaaaaaabaabcx", "cbabacbabbabbccccbacacbcbabacbabbabbccccbacacbcbax", "abcbcbababcaaccbabaccaaabcbcbababcaaccbabaccaaabcx", "cacaccbcacaacbccaaccbabcacaccbcacaacbccaaccbabcacx", "acabcccbbaccaaaababbcaaacabcccbbaccaaaababbcaaacax", "ccaccabcccaacaacbcbbaccccaccabcccaacaacbcbbaccccax", "bbabcacaccaabccbcaacaabbbabcacaccaabccbcaacaabbbax", "bccbaaaaaabbbbabcbcacacbccbaaaaaabbbbabcbcacacbccx", "cbbcabaaaaaacacccacabbacbbcabaaaaaacacccacabbacbbx", "cccbbacbabbabcccacbcbcccccbbacbabbabcccacbcbcccccx", "aaaabbbaccbbcbcbbbcbbccaaaabbbaccbbcbcbbbcbbccaaax", "bcabbaccacaccbacbaacabbbcabbaccacaccbacbaacabbbcax", "cabacbabcaacabcaaccbbcbcabacbabcaacabcaaccbbcbcabx", "cbcaccccaacacacbbbbcabacbcaccccaacacacbbbbcabacbcx", "aaccaaaacabcbbbbccbcaccaaccaaaacabcbbbbccbcaccaacx", "acabaccaacacacabbcbcabcacabaccaacacacabbcbcabcacax", "cbbcababcbbaacccbccbccacbbcababcbbaacccbccbccacbbx", "bbaacbcbcabbacbbccaacaabbaacbcbcabbacbbccaacaabbax", "abbabbcbbaabcabaacbbaababbabbcbbaabcabaacbbaababbx", "baabacaaaaabccbacaabcbcbaabacaaaaabccbacaabcbcbaax", "abcbcbbabcbbbccccbcabccabcbcbbabcbbbccccbcabccabcb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> g = {"bbcccacacbbabcbabbabcbb", "acabbaacacbbcbbbbababaa", "cbbbccacbbbaaccabcbacba", "bbabcacaccbaacbaabaabca", "bbbacbbbccabaabcabcbbcc", "bbacbbcbaacbbccccabacba", "bbcabbbbccbbccbcbacacba", "bcaccaababccbbacabbbcca", "abbaacabcbcbacabacaaaab", "cbbbabccacbcacbcaccbaac", "cccbbaacbbbbaacacabbbcb", "acabcabababccacabaabcbb", "ababbcbabababccbcccbaab", "abbcbaccccaaabcabaaabcc", "abbbbacaaaccaabcacaabbc", "cbaacaaccbccacccbabcbaa", "bcaababbacacbcbbcccacbb", "bbccbaccaabccababacbcac", "baccbbaccabbabaaaabaabb", "cbacccbcbaaabccaacbbcca", "ababccacaaacbbcccbcaaac", "ccbaccacbaacacaaabbcaba", "baacbaaacbbbaabcacbcabc"};
    vector<string> words = {"aabcaaaaaccababccbccbcaaabcaaaaaccababccbccbcaaabx", "cbcaababbcbbccbacbbaacbcbcaababbcbbccbacbbaacbcbcx", "caabcbcbabaabaaaabbabaccaabcbcbabaabaaaabbabaccaax", "aabaacbbccabbabcaacccccaabaacbbccabbabcaacccccaabx", "ccbbcaccaccacbbccbccaaaccbbcaccaccacbbccbccaaaccbx", "bcccbabbccacbbaacccbccabcccbabbccacbbaacccbccabccx", "bbbcbcbbabcccababacbaccbbbcbcbbabcccababacbaccbbbx", "babbbccbaacaaabcbacbbacbabbbccbaacaaabcbacbbacbabx", "accbaabaacbacccbcbbbabcaccbaabaacbacccbcbbbabcaccx", "acaacbcbbbccaaccbbacbbbacaacbcbbbccaaccbbacbbbacax", "bcbacbabcabbacacbabbaccbcbacbabcabbacacbabbaccbcbx", "cbcbaababcacbbaaacacacacbcbaababcacbbaaacacacacbcx", "abbaaaacbaaabbacbababcaabbaaaacbaaabbacbababcaabbx", "ccabbccbbacccccccccbbcaccabbccbbacccccccccbbcaccax", "babbbaababbbbabaccacccbbabbbaababbbbabaccacccbbabx", "caaccaccaaabbaaabbbaccccaaccaccaaabbaaabbbaccccaax", "bcabcabcaaaacaccbbccaccbcabcabcaaaacaccbbccaccbcax", "bccbcabbcccabccbbcacaaabccbcabbcccabccbbcacaaabccx", "bcabcacacbbaabaacabbabcbcabcacacbbaabaacabbabcbcax", "abbaccccaaabccabbcacbaaabbaccccaaabccabbcacbaaabbx", "aaacbcbcbbababbbbaabbacaaacbcbcbbababbbbaabbacaaax", "abbccacabbcbbbacaccaaacabbccacabbcbbbacaccaaacabbx", "bbcabababaacaabaaccacbbbbcabababaacaabaaccacbbbbcx", "bcbbabbccbabcacbcaabaccbcbbabbccbabcacbcaabaccbcbx", "cabccbaccbaaacbabcaacaacabccbaccbaaacbabcaacaacabc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> g = {"bcbbccaabcacbaaaabbacca", "cacacbaabaababcaaaccaaa", "cbcaabbacccaaaaaabcbaaa", "accbbcbcbccbcbccbbccbab", "baacaccabbccacacabababc", "cbbcbaaaccccababaccabbb", "ccbaabaabcbabaaaacbabbc", "abacccacaaccccacbabbbba", "bbcaccbbcacbbcbcaabbabb", "bacbcbcbcbaaccbbaabcbaa", "bbabababbabbcbabacbbcac", "bbababcabcccbcaacaaabac", "aacabbbabbbcbabaababbba", "acaacccbacccbccabbcaacc", "cabbcbbccbcbbbcabacccab", "cababbaaaacbacccbabbbab", "accbacbcaabaacccbacaaab", "cbaacccbbbacaabbaaaaacc", "cacaccabccacabcccaaabcc", "cacabbbaccbbacabcabaacb", "cabbcbbbbbacbbaccabbcaa", "caabaabbbccabaaabbabbca", "aabcbaccbabccbbabcabbbc"};
    vector<string> words = {"baaababaaccacabcbabcccabaaababaaccacabcbabcccabaax", "bababbbbcbcbbaabbbbaacabababbbbcbcbbaabbbbaacababx", "aabcabbbaaacabbbabbbacbaabcabbbaaacabbbabbbacbaabx", "bcacbbcacabcbabbbabbbabbcacbbcacabcbabbbabbbabbcax", "cccabcccaaacbbaacabcabacccabcccaaacbbaacabcabacccx", "cbbcbaacacabaaaccccbaaacbbcbaacacabaaaccccbaaacbbx", "caccbbbaaaabbababcacbbccaccbbbaaaabbababcacbbccacx", "aaaaababaaabaccabacacacaaaaababaaabaccabacacacaaax", "baabcacacaabaabccabbaabbaabcacacaabaabccabbaabbaax", "cabcabbaabbacbbbacacaaacabcabbaabbacbbbacacaaacabx", "bcccabacbabbbbbccacbcabbcccabacbabbbbbccacbcabbccx", "abbbcacbacaabacacbacaacabbbcacbacaabacacbacaacabbx", "acacababbbaacbaabbbccabacacababbbaacbaabbbccabacax", "aaababcaabcabccabbcbbcaaaababcaabcabccabbcbbcaaaax", "bcccacaccaacaaacababbabbcccacaccaacaaacababbabbccx", "aabacabbbccacbcbbbcabccaabacabbbccacbcbbbcabccaabx", "bbccaababcacacacbbaabacbbccaababcacacacbbaabacbbcx", "babbbaaccabcbcbbbbacbaababbbaaccabcbcbbbbacbaababx", "abbccacacbbacbaccccabbaabbccacacbbacbaccccabbaabbx", "cccbcbcabcccacbcabaacbacccbcbcabcccacbcabaacbacccx", "bcccbbacbaabcccacacbacabcccbbacbaabcccacacbacabccx", "acccccbabaaaababbcbabacacccccbabaaaababbcbabacaccx", "ccccccaabaaaaaccccababaccccccaabaaaaaccccababacccx", "cabababbabbaccbaaaaaacacabababbabbaccbaaaaaacacabx", "bbabcaaaacabaabbacaaabbbbabcaaaacabaabbacaaabbbbab"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> g = {"acacbccabbbcbbbbcccbbcc", "babbabbabbacaaabccbbbcc", "ccbaaaccbcccaabacbbaacc", "abacbcbabbbbbccbbacabcc", "acaacaabbbaabcbaabababa", "acccaccbccbababbaaaccac", "ccbcabcbaaacbcbccbbcccb", "bbaccabbacbbbcbabacccca", "baccbbbbcaaacbaccaaabac", "bcaacbacbccbacbbcbbabbb", "abacabcabcabaccbabcbabb", "abacbbcbabaaaabacbabaab", "cbccbaaacbbacbabacbbbba", "ccccbbcbacaccaaabcbbaba", "cbaaaacbcbbaaaababbbabc", "ccaccbbbcbcbcabbcbbabac", "cbaccccacbabbbbccbbabcb", "bcabaaacacbababbaacbcac", "acbabbabcabcbcbccacaaac", "abcbcabacbcbaccacaaabaa", "bbacaaaacccbbcbcabccbac", "cbccabcbcccbaaababbacba", "bcacacbbbbbacacbabacbcc"};
    vector<string> words = {"aabaabacaacbabaacababbaaabaabacaacbabaacababbaaabx", "bbaccaabbbbcabbbbbbcaccbbaccaabbbbcabbbbbbcaccbbax", "aababbbbbbacccabccacbacaababbbbbbacccabccacbacaabx", "bccbacbacbabbcaccccbbaabccbacbacbabbcaccccbbaabccx", "cccacbbacbbcaacacbbbacbcccacbbacbbcaacacbbbacbcccx", "ccbbcbbccbccacbabcbcbbbccbbcbbccbccacbabcbcbbbccbx", "cbcacbcaabaaabccbbaabbccbcacbcaabaaabccbbaabbccbcx", "bccabccbbacaccbabccbabcbccabccbbacaccbabccbabcbccx", "bbaabbacbccbcbbabbcbcacbbaabbacbccbcbbabbcbcacbbax", "babacbaacaabbbcabcbbbcbbabacbaacaabbbcabcbbbcbbabx", "abbacabccbacaccccabaabbabbacabccbacaccccabaabbabbx", "bbaccacbbbbabccccaabcacbbaccacbbbbabccccaabcacbbax", "bbaacbcbcbbbbcbbbbaabbcbbaacbcbcbbbbcbbbbaabbcbbax", "bbbababbcaabcbababcbabbbbbababbcaabcbababcbabbbbbx", "cbbbcbcacabaccbbbccbbbbcbbbcbcacabaccbbbccbbbbcbbx", "caaaacbcbabcccccabbbbabcaaaacbcbabcccccabbbbabcaax", "bacbccaaccaabbabbbcbcbabacbccaaccaabbabbbcbcbabacx", "abcaaaacbcaaaacbaccbccbabcaaaacbcaaaacbaccbccbabcx", "babaabbcbabbbaabbbabbabbabaabbcbabbbaabbbabbabbabx", "aabccccbbbbacabccaabbbaaabccccbbbbacabccaabbbaaabx", "acacccabcaabbbcccbccaaaacacccabcaabbbcccbccaaaacax", "bbabbababbcacabbacbbaaabbabbababbcacabbacbbaaabbax", "cccccbaccbbbacbbbacbbbccccccbaccbbbacbbbacbbbccccx", "bcaacbbaabcbabcabccccacbcaacbbaabcbabcabccccacbcax", "cbbcbbaabacaccacabacabccbbcbbaabacaccacabacabccbbc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> g = {"bbaccababbbbcbcaaaaabaa", "cacbcbcaaaabacbbbbccaba", "babbaaccacccacabbbabcaa", "cbbbaabaccabccbbbcbbcca", "bababcbbccabbbcccacbccc", "acccbbaacabacbcabbacccc", "cbbccaccccacbabbaabaacc", "accccbcccaaccccbacaaabb", "aaabacaaacabacababcaaac", "babcbcbaccbbbbbbbccacab", "cbcbbcbbbbcbacabcaccbbc", "aacaaccabbbccacccccbbcb", "bacabcbcaccbabacbcbcaca", "bccaccacbcbcbaabcababac", "bababbabbbcaaabaacaacbc", "cbaabbbbbcbcbccaabaacba", "bbabbbabcabbaabaaaacbbb", "aabaaacbabbbcaabccbcbab", "bacbaabaacbaababcbacabc", "aacacbbcbbacbbaccacbbca", "bbccbcbacbbbabbcaaacabc", "cbcbccabcacacbacacccbaa", "cbbacbbaacbacccacbbabab"};
    vector<string> words = {"cbbacabbabbacbacabbccabcbbacabbabbacbacabbccabcbbx", "bbabacccbbabcacabbcbbaabbabacccbbabcacabbcbbaabbax", "ccbacacbabccccacccabccbccbacacbabccccacccabccbccbx", "cbbbcbccacbcbbcaaaccbbccbbbcbccacbcbbcaaaccbbccbbx", "ccaabbbbccaaabcbacbacbaccaabbbbccaaabcbacbacbaccax", "bbcbacababcccbbbcaabacabbcbacababcccbbbcaabacabbcx", "acaaabcaaabbabacbccabcaacaaabcaaabbabacbccabcaacax", "acbaccbaaabcbaaaacccabaacbaccbaaabcbaaaacccabaacbx", "accccacabbbcbbbbcbbbbabaccccacabbbcbbbbcbbbbabaccx", "cacbcbabbcbacaacabaacaccacbcbabbcbacaacabaacaccacx", "abcaaccccbaccaaaaabbcababcaaccccbaccaaaaabbcababcx", "abcacccbbcbbcaaabbacbccabcacccbbcbbcaaabbacbccabcx", "acaacaaacbcccbccccccbacacaacaaacbcccbccccccbacacax", "bcaaacacabaaabcbabbbabbbcaaacacabaaabcbabbbabbbcax", "bbcaacabbcbbbabbbbabcbbbbcaacabbcbbbabbbbabcbbbbcx", "bcbbabbaacccaababcbbbbbbcbbabbaacccaababcbbbbbbcbx", "baacccacacbbbbaccabcaccbaacccacacbbbbaccabcaccbaax", "baababaccccaaaacacaaaaabaababaccccaaaacacaaaaabaax", "aabbbaccbaabcaaaaccabbbaabbbaccbaabcaaaaccabbbaabx", "aaaacbbcbaccacbcabbcbbbaaaacbbcbaccacbcabbcbbbaaax", "cbccaaabbaaabcbbbcccacacbccaaabbaaabcbbbcccacacbcx", "bcbbccbbcccbbcababbcaaabcbbccbbcccbbcababbcaaabcbx", "cbbccaacbaaaaccbbabcabccbbccaacbaaaaccbbabcabccbbx", "aabacccbaabbbacabbbbbcbaabacccbaabbbacabbbbbcbaabx", "cacbabbcacbcbabbaaaabcccacbabbcacbcbabbaaaabcccacb"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> g = {"bcbaaccbbcbabcbcabcabba", "aacaacaacbccacbccacbaca", "bcbbbabaccabbcccaaababb", "abcbbccaaacbaababcbcbab", "bbcaabbbababcbbbacbcbac", "bcbaacabccbaacabcabccca", "babcabbaaaccbaaccbacaca", "cabbcaccaacabbabacaccba", "ccacccccbbacccacabcbbca", "ccbcccbcbbaccbbacacccca", "cbabccacacbbbbbbabbbbcc", "abaaaacbbccbbaaaabcbbca", "cbaacabaaabbabbccabbacc", "abbabccaccaacccacbccbbb", "abccbccbacbbbaaabcbbbbb", "aaacacaabcbccbaccbbbcbc", "aaabcbbccccbccbcccbcacc", "baabcabbcaccabacaacacbc", "cbaabbacaaaaccbcbabaccc", "aaacaccbabbbbbccaccacaa", "bcacaaaaaaaaacbbcbacacb", "bcbccabcbccbccacabcacba", "cabcbccbbcbabcbbccabccc"};
    vector<string> words = {"aabaccaccabbbacabbcaccaaabaccaccabbbacabbcaccaaabx", "bcaabcbbbcaabcccabcbcbcbcaabcbbbcaabcccabcbcbcbcax", "abbbaababcabbaaacbacabcabbbaababcabbaaacbacabcabbx", "acccbacaacccabaabbabbaaacccbacaacccabaabbabbaaaccx", "cbbaaacabcaaaaaaababbcacbbaaacabcaaaaaaababbcacbbx", "cacbbabcaabcbcbababbbaccacbbabcaabcbcbababbbaccacx", "abaacbacbccbbacaacababcabaacbacbccbbacaacababcabax", "caabbabbcbcbababbccbbaacaabbabbcbcbababbccbbaacaax", "acbaccbbbccacbcbcccaaccacbaccbbbccacbcbcccaaccacbx", "bcbcbbbaccacccbbbcaaaccbcbcbbbaccacccbbbcaaaccbcbx", "abacbbcbaaabacaccbccbbaabacbbcbaaabacaccbccbbaabax", "bcccbbacacabbabbbbcbabbbcccbbacacabbabbbbcbabbbccx", "caacbacbbbabcaccbcabaaccaacbacbbbabcaccbcabaaccaax", "aaabbbbccbbabbccabcaabcaaabbbbccbbabbccabcaabcaaax", "caabacaabbccbcbccacbaaacaabacaabbccbcbccacbaaacaax", "cccbbbcbacaacbbcbbbaabbcccbbbcbacaacbbcbbbaabbcccx", "acacbccabbabbbbcccaaacaacacbccabbabbbbcccaaacaacax", "cccabcacabaabaaabbbbbbbcccabcacabaabaaabbbbbbbcccx", "accacccabacbacabacabacaaccacccabacbacabacabacaaccx", "aabaabbccbccaaaaabccccbaabaabbccbccaaaaabccccbaabx", "bbbabcabcacbbcbacccababbbbabcabcacbbcbacccababbbbx", "ccacababbbacaaacaaabbbcccacababbbacaaacaaabbbcccax", "bbcbcbccaaabaaccaabccbabbcbcbccaaabaaccaabccbabbcx", "abaabbbbcabaabcacabcbbcabaabbbbcabaabcacabcbbcabax", "cabcbccaaabbbccbcaaabaacabcbccaaabbbccbcaaabaacabc"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> g = {"abaccaaaabcccbbcaabbbaa", "ccbabacbbbccacbbacababb", "babccaccaabacccccaabbab", "cbaccbbbccbabbcbccbcacb", "bbbaaabacccbbaabbcbcacc", "baababbabbcbbcbacbcbbcb", "aabaabccabbaaaaccbbccac", "cacccccacbccbbccaacacbb", "aabbccacabccbabbbcaaaba", "cccbbabbcbacbabcaabbaac", "acaacabaaccbbccbcccbbac", "accaaccabcaabaaaccacabb", "aacbccbbabbacabccaabaca", "aabaababcaaabbcaabaacca", "cabbababaacababccabcacb", "bcccbcaaaaaccccabaaabbb", "bbbaacabccccbcbccabbcac", "caaacaaccaacbaccacbcacb", "bbbbbacbaabccbccbcaacaa", "aacabaacbbcccbaacacaaab", "accaacbaabcbbbbacaacbcc", "abccabbbacbcabcbaccacbc", "cbacabcacbccabccaaacbcc"};
    vector<string> words = {"ccabaabbabbabbcbababaaaccabaabbabbabbcbababaaaccab", "cabcbcabcabbcbacacbbaaccabcbcabcabbcbacacbbaaccabc", "cbccacbccabccabbcbaabcccbccacbccabccabbcbaabcccbcc", "cbaaaccbcccabcbccbaabbccbaaaccbcccabcbccbaabbccbaa", "ccbccccbcaabccabcbbabaaccbccccbcaabccabcbbabaaccbc", "cbbcbccacbabcaaaaabaacacbbcbccacbabcaaaaabaacacbbc", "abcaabaaaccacabbaccaaccabcaabaaaccacabbaccaaccabca", "acbacabcbacacabbbcbcbaaacbacabcbacacabbbcbcbaaacba", "acbbaacacaaaaabcbccbcbcacbbaacacaaaaabcbccbcbcacbb", "bbaabcccccccbcacacbaaacbbaabcccccccbcacacbaaacbbaa", "babaacbaacbbaacaacccbccbabaacbaacbbaacaacccbccbaba", "ccbbbcbcabcbacaabcccbcbccbbbcbcabcbacaabcccbcbccbb", "accbaacbbbbcbacbbaaabccaccbaacbbbbcbacbbaaabccaccb", "accacbacabcacccacaaccacaccacbacabcacccacaaccacacca", "babaacbbbcccacabccbabaababaacbbbcccacabccbabaababa", "baccccbbbcabbcaacbcabcabaccccbbbcabbcaacbcabcabacc", "ccaaaacbaabccaaacaabccbccaaaacbaabccaaacaabccbccaa", "cbccbcaabbaaacaabaababccbccbcaabbaaacaabaababccbcc", "ccacababbacbccaaabccbaaccacababbacbccaaabccbaaccac", "acbacccbabcaababbcacabaacbacccbabcaababbcacabaacba", "accbccbcbcbbcaacabcbccbaccbccbcbcbbcaacabcbccbaccb", "aaccccaacbabcbaaaacbcbbaaccccaacbabcbaaaacbcbbaacc", "aaababbaacaaacbcbbcbbccaaababbaacaaacbcbbcbbccaaab", "cbbbabcbbbcbbcbaacaaaabcbbbabcbbbcbbcbaacaaaabcbbb", "ababbcbcbcaacaaaccbbbbaababbcbcbcaacaaaccbbbbaabab"};
    int k = 199;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 39, 0, 0, 48, 0, 0, 40, 0, 0, 55, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> g = {"abb", "bbb", "bbb"};
    vector<string> words = {"aaa"};
    int k = 2;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "nobodywashereyouarenotreadingthiszz"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 420, 349, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz", "nobodywashereyouarenotreadingtz"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> g = {"ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab", "bababababababababababababababababa", "ababababababababababababababababab"};
    vector<string> words = {"ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324, 324};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> g = {"ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababaa", "bababababababababababababababababb", "ababababababababababababababababab"};
    vector<string> words = {"ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> g = {"abc", "bca", "cab"};
    vector<string> words = {"cabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabc", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150, 9150};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> g = {"a"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465, 24465};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> g = {"ccbbcbaabcccbabcbcaaaacabbaccccaca", "abcbbacacaacabcbccbaabcabbbccaabbc", "bbcacabcaaacacabacbccbaacbcbcaacac", "baaaaccacccbaacaaabacaccabcbcbabbb", "acbabcaaccbccacbcbacacacbcaccabacc", "bccbaaaaabbacbacacbccbabcaacbbccca", "ccbcbacbacbcabaababccaaaacccccbbaa", "bbccbcccabbacacaacbcccbaaacacabcca", "bcccccabcaaaabbbcbbbaabccacccabacb", "cbbcbabacabbbbbbabbcabcbcbcaabcbcc", "cbabaccccabbabbbacbbacbcccaaacacca", "babcccbcaccbcbcaacacbccbacbccbccac", "cbcbcabbbccabaacaccbcccbccaccbbcbc", "ccbbccbacbcbcbbcbabcbacbbababcbcac", "baaabbabacabbcbccbaccbbcbbbbcbbaac", "abaccbcbccabbbbccaabcbbcaccbbcaaaa", "bababbabbbacaaabaabaccbcaaccaabcbb", "accacbabbcccaccbcabcacabbaacccacbb", "abbabcccababcacababacccbacacabcbcc", "cbabccccabcbaabbaaabaccccabbababaa", "cabbcacbacacbbcbaabaabbbbaabcaaccb", "acbbaacacabcabacbaabcaabbccccccacb", "ccccaabcbabaabcbbaaacccccabaaaabca", "abbccccaccbacababbaccacababbacbbaa", "ccbbacbbccaccaccabccbababbbacbacba", "abcbbcaacaababbabbaacabcaabccabacb", "bbbcabcccacbacbababacaccabcaacbaab", "ccaccacbccaabbcbaababaacaaaaaacccb", "cbbabbbbbcbcacbababacbbabcbabbcacb", "caccbcaaabacaaababacaababcaccbabab", "cabcababbaababcbabbcabbacccbbbccac", "bacccbccaabcaabcbbbccbaccbabcaacac", "aabababacabbcbbaccacbbbcbabccaccab", "cacabaacbbacbaccaabcaaaaacccabbaab", "aabcbacccbcbabaccbcbaabaaacabbaaba"};
    vector<string> words = {"babcaaacbaaccccacaacaaaacabcbcbabaccaaaccaccaccaba", "aaaaaabacbbaabbaabbcacabbcbbcaabbcbaaaaacbabcaacaa", "aacbcccbcbababbcbcacbcaaccaabbbbbacabaaaabcaababbc", "ccbccbbababbbaacbacccaacbcbccabcccaaabaacbbcacacaa", "ccccbcbbaacacaaccbaacbabaacccbbbcccaacbcacbcbbbbcb", "accccabcbcaccbbaacaabaabccaacccababccbcabbbaaababb", "aabbcacbbaaccbcaacacacaaacbcacbaacaccabccaaaacbaab", "cbaaaccbbbcababbaacbabacbcbaacabcbababaabcbcbabaab", "ccabaaacccaaccabaaabcabacbaababbbbcbbaaabaaccbbcac", "bcbcbbacabbcccbcccbccbacbbaaacacccbcbcbabaabccbccc", "bcabaacbbcbccaaccccacaabaaaccbacacccbabcbbbbbaacab", "bccaacbaccbbacacabccbbabacbabbcbacaacacccabccbaaac", "caaabcbbcbbaabbbacaabacbabcbaabacbcbbbcccacacbcaca", "acbcbaacbcbcbbcccbaaabaccbbacbccbaabacbaccbbbbcccc", "aaacaacbbbcbaacabcaababbabacccacbbbcccabbccacbaccc", "aaababaaccccccbbbbbbabacaabbbccbcbaaaccbcabbccabba", "ccaaabcbbccccaababaaabbccaababbccaaaacaacbcccbbccc", "cacabcbbacbccabbccacbacaaccbacbabccbcaaccabaaaaccb", "abcbbbaacbbaaccccbccabbabaaaabccbaaabcbbaacbacaaaa", "abbababcbbabcabaaacbabcabaaabbbccaaccaabbcaccccabc", "ccbcbcbbbbbbbacbaacccccabacabbccbbccbcbcabababcbab", "cbcabccbcbcacbbcabcacbaacbbacccaacbbbbaabbbcbbaaab", "acbcabbaabbbccabaccccbccbaccbacabccbbcbabaaaabbccb", "cacbcabcabcccbbbaabbbbbbbcbccacaccbbcacbaabaacaaab", "acccbcbccaaaccaaaabccccabcaaaaccbaabaabbbbbcbabccc"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 16, 0, 15, 31};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> g = {"abccccabcacaaaccabcaccbcccbbaabbbc", "bcccccbbbcabcbaababbaacaacabaaabca", "aabababcbbcaccaababacccababababaaa", "aacaaaabcbaaacabaccbcbbaaaabbbaaac", "babababcabaacaabccbccbbcccabcaccba", "cbcaacaccaaacccbabbaabcabbbbcacaba", "cccbcabcacacbcbabbbbaaaaaabccccacb", "cbcbbbabbabbcabccabacaabbcccbbabaa", "cccaabcabaabacacbcacbabbbccbacaaac", "aaaabcabbbabaccaccbacbacbbbcbcaccc", "abbabcaccabccacbcbaaaaccbacaccbcbc", "acbcaccbcacbabacbcbacbacaaaababbba", "aabbbacacabbbcbcaacbcccbbabababcab", "aaabcccbbbbaaabbccccbbaaaccacacacb", "abcbabbabcaacacaaccccbccabbbaccacc", "caabbababcabcccaacbabbcbabcabbcbaa", "cacbcbccabaaaaaaabcbabbcccacacbbab", "cbabbabcbbacabbaacacbbcbbbbababaac", "bbbccacbbbaaccabcbacbabbabcacaccba", "acbaabaabcabbbacbbbccabaabcabcbbcc", "bbacbbcbaacbbccccabacbabbcabbbbccb", "bccbcbacacbabcaccaababccbbacabbbcc", "aabbaacabcbcbacabacaaaabcbbbabccac", "bcacbcaccbaaccccbbaacbbbbaacacabbb", "cbacabcabababccacabaabcbbababbcbab", "ababccbcccbaababbcbaccccaaabcabaaa", "bccabbbbacaaaccaabcacaabbccbaacaac", "cbccacccbabcbaabcaababbacacbcbbccc", "acbbbbccbaccaabccababacbcacbaccbba", "ccabbabaaaabaabbcbacccbcbaaabccaac", "bbccaababccacaaacbbcccbcaaacccbacc", "acbaacacaaabbcababaacbaaacbbbaabca", "cbcabcbbcbbcbccbacbabbbabaaabbacca", "cbabacbaccacbaccbcccbcbbaacbcacbac", "cbacacabcaabcabcabbcaaaacababbabbb"};
    vector<string> words = {"cccbbabcccaabaaacacccbabacabcbbccaabcacbaaaabbacca", "cbbaabacaaaacccccaabaccbccbaaaacccbcabcaaaccbacbcb", "acbbbccacabaaaccababaaaaaababbbaaabbbaaabbaabcbbac", "aabaababbcbcabcbaacacaabacbabbcbacccccbbcbcbbaabbc", "cacacacacacacacacacacacacacacacacacacacacacacacaca", "abcacabacaababacabbabaaabbacabcbacbbccbabcbbbbacbc", "ccaaaaaabcbaaaaccbbcbcbccbcbccbbccbabbaacaccabbcca", "cabababccbbcbaaaccccababaccabbbccbaabaabcbabaaaacb", "bcabacccacaaccccacbabbbbabbcaccbbcacbbcbcaabbabbba", "cababbccbabcaabbbbabbbcabacaccbcbcaccccccbaabbcaba", "baaabaccbcaaaaccbcbbbccccbcaaaaacabababababccacbcc", "aabbaccbbbbccbabacaababcabcbaabbaabbcacabccbbcbaac", "bcbcacbbbcaaaacbcbcaabcbabcaaabccbcaccbaacabcbcbca", "cbbcaabbbcbaabaacbaaaaaccabcaaaababbccacbaccaabbbb", "abcaaaaabaaabbccaabacabcacabcbaacbaccaccbbbaaabcac", "bcbaabbbccaacccbababbccacccbaababababcacbaaaabacac", "cbbaacacacbcabacccababbabbbbbbaaacbbbbaaabcaacbcca", "abacbbbcacbcbcbbbcacaaaccbbcbbbababcbcacbabaabaaba", "abaccaacbcaabaaabbaabbabcaabcaccbbbacabbbbbababcbb", "acabbccbbbcabbbcacccbbaccbabbcbcbbccaaccabbbaaccba", "caabbabbcccaabaaaaccccbaababcbcbbbaacccaabaacbccbb", "bcbaaabaaaabcbbccccbccabaccbababacacbbbbcacbaaaaba", "abaababbbaacaacccbacccbccabbcaacccabbcbbccbcbbbcab", "acccabcbacacabcaccacbaaabbcbcabcaacabaababaccabcca", "cbaaaccbbbaccccbbcaaccbaccbcaaaaacbbcaabacbcbbccba"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 31, 16, 0, 0, 31, 0, 0, 0, 30, 26, 16, 10, 27, 26, 0, 15, 0, 32, 26, 15, 16, 0, 31, 15};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> g = {"aaaacbacccbabbbabaccbacbcaabaacccb", "acaaabcbaacccbbbacaabbaaaaacccacac", "cabccacabcccaaabcccacabbbaccbbacab", "cabaacbcabbcbbbbbacbbaccabbcaacaab", "aabbbccabaaabbabbcaaabcbaccbabccbb", "abcabbbcacbabbcccaccbcbbbcbbccabac", "cbcacbbaaacabcabaabbbbcaacbbcccbbb", "bbcaabacaacbccabaaaccabcbccbbaaaba", "abbbacbacaabbabacbcbbaaabaccbbaaca", "cbccabbbcbbbbcccbbccbabbabbabbacaa", "abccbbbccccbaaaccbcccaabacbbaaccab", "acbcbabbbbbccbbacabccacaacaabbbaab", "cbaabababaacccaccbccbababbaaaccacc", "cbcabcbaaacbcbccbbcccbbbaccabbacbb", "bcbabaccccabaccbbbbcaaacbaccaaabac", "bcaacbacbccbacbbcbbabbbabacabcabca", "baccbabcbabbabacbbcbabaaaabacbabaa", "bcbccbaaacbbacbabacbbbbaccccbbcbac", "accaaabcbbabacbaaaacbcbbaaaababbba", "bcccaccbbbcbcbcabbcbbabaccbaccccac", "babbbbccbbabcbbcabaaacacbababbaacb", "cacacbabbabcabcbcbccacaaacabcbcaba", "cbcbaccacaaabaabbacaaaacccbbcbcabc", "cbaccbccabcbcccbaaababbacbabcacacb", "bbbbacacbabacbccacbbcbcacababaacaa", "acbbacaaaabccccacbccbbcbbcccacbbab", "ccbcbbbaacaccbcabbbbabcacabcababcc", "bbcaacbaaabaabbbacbcbccbcaaaabccca", "baacabbaccababbbbcbcaaaaabaacacbcb", "caaaabacbbbbccabababbaaccacccacabb", "babcaacbbbaabaccabccbbbcbbccababab", "cbbccabbbcccacbcccacccbbaacabacbca", "bbacccccbbccaccccacbabbaabaaccaccc", "cbcccaaccccbacaaabbaaabacaaacabaca", "babcaaacbabcbcbaccbbbbbbbccacabcbc"};
    vector<string> words = {"cbbbbcbacabcaccbbcaacaaccabbbccacccccbbcbbacabcbca", "babacbcbcacabccaccacbcbcbaabcababacbababbabbbcaaab", "ccabcbbcaaccbbbbccccbbcbababcacaccbaabbcccbbabaabc", "cbaabbbbbcbcbccaabaacbabbabbbabcabbaabaaaacbbbaaba", "caabaaabbbbbaabacbccbccbaccabcacbbbbaccbabacbbabcc", "caabccbcbabbacbaabaacbaababcbacabcaacacbbcbbacbbac", "acbbbbcaccaacaaacaccbaaabbbbbbabccaabbaabaabbcbabc", "bccbcbacbbbabbcaaacabccbcbccabcacacbacacccbaacbbac", "aacbacccacbbababcaababbbbbaabbaabcaccbbbbbaaaccbca", "cbbaacabacccabaccaabcabbaaccbbaacccbbaacabacccabac", "ccbbabababacacccbbbaacaccccaabaccaabcaccababaaccbb", "bbcaabbbbaccacacacabcacabcacbbcccbaacacabcbbababab", "ababbbcbcccbaccbabbaccabbbcbaaccbbcbabcbcabcabbaaa", "cbabccacaabbaabbccaabacbabcaccabbabbaaccabbbbcabba", "ccaccbaacabababaacaaccabcbbbbbbcbaccaccbaacabababa", "cacbacabcbbbabaccabbcccaaababbabcbbccaaacbaababcbc", "babccaacbbabccbcaaaababcaaabcbacbaccbbaccbaaabbaaa", "bbaacbbcccbcabccbcbcaccbbaaccaaccaabbccacbaabcacac", "bcbbbacbcbacbcbaacabccbaacabcabcccababcabbaaaccbaa", "bacacacabbcaccaacabbabacaccbaccacccccbbacccacabcbb", "ccbcccbcbbaccbbacaccccacbabccacacbbbbbbabbbbccabaa", "aabbacaccbbbbabacaacbacbaccbaabbccbbbaabacbcbbbaaa", "baaaabcbbcacbaacabaaabbabbccabbaccabbabccaccaaccca", "cbcabccccabbacbcacbcaccbcbacaccabaaabaaacbabbacacb", "bccbccbacbbbaaabcbbbbbaaacacaabcbccbaccbbbcbcaaabc"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 26, 0, 32, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> g = {"bbccccbccbcccbcaccbaabcabbcaccabac", "aacacbccbaabbacaaaaccbcbabacccaaac", "accbabbbbbccaccacaabcacaaaaaaaaacb", "bcbacacbbcbccabcbccbccacabcacbacab", "cbccbbcbabcbbccabcccaccbbcccacaccc", "babaabbccccccbbaabbcbcacbabaaacaac", "bccccacaacaabbcabacaaabccbbbacbcab", "cbcbbcaaacaabbaaabbbcbaaaccaaaacba", "aaabaacbaabaccaaaabcccbbcaabbbaacc", "babacbbbccacbbacababbbabccaccaabac", "ccccaabbabcbaccbbbccbabbcbccbcacbb", "bbaaabacccbbaabbcbcaccbaababbabbcb", "bcbacbcbbcbaabaabccabbaaaaccbbccac", "cacccccacbccbbccaacacbbaabbccacabc", "cbabbbcaaabacccbbabbcbacbabcaabbaa", "cacaacabaaccbbccbcccbbacaccaaccabc", "aabaaaccacabbaacbccbbabbacabccaaba", "caaabaababcaaabbcaabaaccacabbababa", "acababccabcacbbcccbcaaaaaccccabaaa", "bbbbbbaacabccccbcbccabbcaccaaacaac", "caacbaccacbcacbbbbbbacbaabccbccbca", "acaaaacabaacbbcccbaacacaaabaccaacb", "aabcbbbbacaacbccabccabbbacbcabcbac", "cacbccbacabcacbccabccaaacbccbcaabb", "acbcbbbcaaaacacbbbbacaacaaabbccabc", "ccabbbcabaabcbaccacaabcbbacbcaabac", "baababcabacaccbaababcbbbccabccabbb", "ababbbcccababbaaacccbbcaacaccbaaac", "bbbaacabacabbcaccbcbacbbababcaacaa", "ccaaabccccacabaabaccbccaacabbcbaca", "cccbacbabbaaaaabbaaabbaaccbcbacacc", "acbbbbbcabaabbcccabccbbcabbcbbbccc", "abcbcacacabbbcccacaabaccbaacacbcbc", "aaaaabababbacacabaccbbccbabacbabbc", "acacbbacbcaabaaccbbaabbcbbbbbbcbab"};
    vector<string> words = {"bbcccabccacccccacaabbaacacbbcccbcbbbbcccabccaccccc", "bbaabaabcaacbcbcccbcacacacbcababcccbccaacaccabaaac", "aabbaabacacaccbabccacbacbccccccaaabaabbaabacacaccb", "baabbacabacacbccbbbabaacaacbcccaaccccbabbbbacaaacb", "bacbbcabbcbccbcbcaaababbbccaacbaacaabbbaabbaacbbca", "abbaabaabcccaacbabcbaaaababaaabaccccbcacaaaaaacabb", "ccaaabbcbcbbcababcccbbbcbaaabccbbcaccbabbcacaaabca", "bcaabaacaaabaccbcaaacbccacabbcacbabcaccbbaacaabbaa", "acabbbacbccaaaacaacaabacaabbbbaccaabcacabbabbccacc", "abccbabcbcaabbcabbabbaacbbbaabbbcbbcbbcbcbbbcacabc", "cbcabcccccacbcbaacabccabaccbaacaccaabcbaaabbcccaba", "abccacccacabaaacbbbacabaabbccacccaaccccabacccbcacb", "bcaabcabbbababacaacbbccccacbcaaabacbccaaabacacbcab", "cbcabacbccaacbabacccacaaacacbcbbccccabcaabaaacaabb", "abbaaabccbcacacbcabbcabaacbacbcccaaabcbccbbbaaaccc", "cacabbbbbacbbbcaccaabaacbcacaaabcccbcbbbabaaabcaba", "bccaccccacccbaabbccbbbbcaccbcccbbacbcabbbaabcabcba", "abcccbbbaacccbcbbbcbccbabaabcaccabaaaacccacbcbbbab", "bcbcbacbbbcacaccaacabbabcacccccabacbbcccbabaaaccca", "abccbcacbbbbcbbcabbbbbabbccacabbaacabaaccaabacbaba", "ccbccabccbccbcbccbacccbcbcabaaccabcccccabaabcbbcca", "bcaccaabaacbbcaabbbaaaaacabbbbacbcccccaabcbabccbab", "ccabacaacbccabbbcababacaaccbacbcabcacaccbcabbcaaba", "ccccaccabbccacbbabcaccbbcabcabbabbacccbbbccbbabacc", "abacbcaccbacbcccbababccccacacbbccabbbccaabccbaccab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 25, 0, 0, 32, 0, 25, 0, 12, 0, 26, 28, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> g = {"aabbbcbcccacaaccabbccbababacbcaaab", "babaabaaacabbacbbbacbccbcaabacaccc", "cbbbaacabbccbcabbcaccbcccaaaccaaac", "bcaabcbbacababbcbcabbacacaababaccc", "cbababccbaabbabbccbbccabbcabcaccba", "aacaabcccccbbaacabcaacaccbacaacbbb", "babacaaccacbcbbcaacbbacacbacbacaac", "acacabcaaaacacbcbaccabcbacabcccccb", "acaababbbccabaacbaacbbbcacabbcaaca", "aacabcbcbcbccbbccaccccbaaccbcaccab", "aaababaabbabcabbbbabcabbcccacaaaaa", "bccbacacabccbccabacacacaaacbccccab", "aacaaaccacabbaabacbbaababbccccbabb", "aacabcabbacbccbabaaacabaaabbbbabac", "ccbcacaabcbaaacbbbbbcababcbaababbb", "abcbacacbbccbbcabbbaacccaccabbabbc", "accbbaaacbaababbabbaaabbbbbbcacbac", "caaaaacbcbaacabaacabaacaccacababba", "cbbaabcacabccbbabbacbaaacbbcaaccaa", "abacccbbaccbababaacaabacccbcbbccba", "bbabcbaabcaaccaaacccabcbbcbbababba", "aabbbcaacbabbbbbbacaccbbcbaaccaabb", "cababcaccbcabccbbbccbcbabcbaabacac", "bccbbacababbaaccbabbabbabaacbacabc", "cccbcacbbccbacabccacbbbacacabcbbaa", "caaacbbbcbaabaaccbaccbbbbaccbccccb", "abbacabcaacaaccbbccbbbaaaaaabacacc", "bccbaacbcccccbcaaacccacbaccbcbbabb", "abccabcaabbbaacaababccccaccaacbbcc", "aabcbbabbaacccabaccabacbabcaacbabb", "aaabbbaccaabbabcbbabccaababacbbacb", "bbbabcccbcbaccbcccabcbbccacccacbab", "bacacacacacabcacacbccacaaacccbbbab", "cabccbcabaaacacababbaabbccaacccbba", "cbcccbcbccacabaccccbcccacbcccbcabb"};
    vector<string> words = {"babcbcbcaaaacacaabaaaaccabcabaaccaccbababccbbcbabb", "bcbcaaaaabbcbbabcbabaacbbacaaccccacccabbbacababcab", "cbabaabcaaacbccaccbaabbacbcbbbcabbcaacbaccbbbbbacb", "cbccabbabacbabaababbcbbabbbabcbacbaabaacbbabaacaca", "abcaaaccbbabccaccbabababaabbabbabbabaacabacabccbbb", "accbacabbccaccbcccacbcbabbbbcbaabcbbbcabaabaacaabb", "babbbbbcaabcaabaccbbabbbbcbcbabaabbbcccccaabaaaaba", "cbbaacbcbbabaacbabcaabcccacbaaaaaabbcaabcbcccaabab", "cabaabbacccabbccaabacbccccbabacbcaccccbbaaacbabbcb", "cbaabbbccaccaaacccabccbccbcaabacaccbcbccbcbcabaabb", "abbcbccacbbcaaabaacccaaaaabaabcabbacbbbaaacbcbaccb", "cabacbbabbcababacacbcbbbabcabcbbbbbaacbcaacbabaacb", "baabcbcabbcccbbcbaabbabbbcacabbabccbbabaccacccbaac", "cccbbbbabbaaabaabccaacabcacacbccbbaaabbcccccbbbbba", "acbcaaacabacacbacccaacacbcacbcbacbbcbbccbcbcbccccc", "cbccacabacaccabbcacccbccbbbccabbbaabccbbabccccbbcc", "aaaccbabcbbcccbbcabacabbbccabcaabbcccbccbabcabaaba", "bcacabaaccbabbbcbbbcabbcbaaaabbbccccacbabcbcbccbaa", "bbcacbaabaaaaaaaaaaccbbbbcbcccabcacbabbbbababaccbb", "acbaaacaacbcabccabaacababbcbcbbacbbccaaacbcccbabca", "cbbbabcabaaccbacaabcabbaacaccccabbabbbacabcaaacbbc", "bbabbaccaabaacbbcacabaacacacbbaaaacbbccbbcaabaacca", "aaabccaaaaaccccacccacbabcabaabcccbcaacbccbbacbacbc", "acacbaabaccccacbcabaaaabbacccacabccabcbcbbbcaaaaaa", "acaaacacaccbbccacbacbbcaabbabbbbbbbbacbcaccbaaaccb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 31, 0, 0, 0, 15, 32, 0, 0, 0, 0, 32, 31, 0, 31, 24, 0, 27, 0, 0, 25, 31, 0, 31, 15};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> g = {"ccbbcbaabcccbabcbcaaaacabbaccccaca", "abcbbacacaacabcbccbaabcabbbccaabbc", "bbcacabcaaacacabacbccbaacbcbcaacac", "baaaaccacccbaacaaabacaccabcbcbabbb", "acbabcaaccbccacbcbacacacbcaccabacc", "bccbaaaaabbacbacacbccbabcaacbbccca", "ccbcbacbacbcabaababccaaaacccccbbaa", "bbccbcccabbacacaacbcccbaaacacabcca", "bcccccabcaaaabbbcbbbaabccacccabacb", "cbbcbabacabbbbbbabbcabcbcbcaabcbcc", "cbabaccccabbabbbacbbacbcccaaacacca", "babcccbcaccbcbcaacacbccbacbccbccac", "cbcbcabbbccabaacaccbcccbccaccbbcbc", "ccbbccbacbcbcbbcbabcbacbbababcbcac", "baaabbabacabbcbccbaccbbcbbbbcbbaac", "abaccbcbccabbbbccaabcbbcaccbbcaaaa", "bababbabbbacaaabaabaccbcaaccaabcbb", "accacbabbcccaccbcabcacabbaacccacbb", "abbabcccababcacababacccbacacabcbcc", "cbabccccabcbaabbaaabaccccabbababaa", "cabbcacbacacbbcbaabaabbbbaabcaaccb", "acbbaacacabcabacbaabcaabbccccccacb", "ccccaabcbabaabcbbaaacccccabaaaabca", "abbccccaccbacababbaccacababbacbbaa", "ccbbacbbccaccaccabccbababbbacbacba", "abcbbcaacaababbabbaacabcaabccabacb", "bbbcabcccacbacbababacaccabcaacbaab", "ccaccacbccaabbcbaababaacaaaaaacccb", "cbbabbbbbcbcacbababacbbabcbabbcacb", "caccbcaaabacaaababacaababcaccbabab", "cabcababbaababcbabbcabbacccbbbccac", "bacccbccaabcaabcbbbccbaccbabcaacac", "aabababacabbcbbaccacbbbcbabccaccab", "cacabaacbbacbaccaabcaaaaacccabbaab", "aabcbacccbcbabaccbcbaabaaacabbaaba"};
    vector<string> words = {"babcaaacbaaccccacaacaaaacabcbcbabaccaaaccaccaccaba", "aaaaaabacbbaabbaabbcacabbcbbcaabbcbaaaaacbabcaacaa", "aacbcccbcbababbcbcacbcaaccaabbbbbacabaaaabcaababba", "ccbccbbababbbaacbacccaacbcbccabcccaaabaacbbcacacaa", "ccccbcbbaacacaaccbaacbabaacccbbbcccaacbcacbcbbbbca", "accccabcbcaccbbaacaabaabccaacccababccbcabbbaaababa", "aabbcacbbaaccbcaacacacaaacbcacbaacaccabccaaaacbaaa", "cbaaaccbbbcababbaacbabacbcbaacabcbababaabcbcbabaaa", "ccabaaacccaaccabaaabcabacbaababbbbcbbaaabaaccbbcaa", "bcbcbbacabbcccbcccbccbacbbaaacacccbcbcbabaabccbcca", "bcabaacbbcbccaaccccacaabaaaccbacacccbabcbbbbbaacaa", "bccaacbaccbbacacabccbbabacbabbcbacaacacccabccbaaaa", "caaabcbbcbbaabbbacaabacbabcbaabacbcbbbcccacacbcaca", "acbcbaacbcbcbbcccbaaabaccbbacbccbaabacbaccbbbbccca", "aaacaacbbbcbaacabcaababbabacccacbbbcccabbccacbacca", "aaababaaccccccbbbbbbabacaabbbccbcbaaaccbcabbccabba", "ccaaabcbbccccaababaaabbccaababbccaaaacaacbcccbbcca", "cacabcbbacbccabbccacbacaaccbacbabccbcaaccabaaaacca", "abcbbbaacbbaaccccbccabbabaaaabccbaaabcbbaacbacaaaa", "abbababcbbabcabaaacbabcabaaabbbccaaccaabbcaccccaba", "ccbcbcbbbbbbbacbaacccccabacabbccbbccbcbcabababcbaa", "cbcabccbcbcacbbcabcacbaacbbacccaacbbbbaabbbcbbaaaa", "acbcabbaabbbccabaccccbccbaccbacabccbbcbabaaaabbcca", "cacbcabcabcccbbbaabbbbbbbcbccacaccbbcacbaabaacaaaa", "acccbcbccaaaccaaaabccccabcaaaaccbaabaabbbbbcbabccc"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> g = {"abccccabcacaaaccabcaccbcccbbaabbbc", "bcccccbbbcabcbaababbaacaacabaaabca", "aabababcbbcaccaababacccababababaaa", "aacaaaabcbaaacabaccbcbbaaaabbbaaac", "babababcabaacaabccbccbbcccabcaccba", "cbcaacaccaaacccbabbaabcabbbbcacaba", "cccbcabcacacbcbabbbbaaaaaabccccacb", "cbcbbbabbabbcabccabacaabbcccbbabaa", "cccaabcabaabacacbcacbabbbccbacaaac", "aaaabcabbbabaccaccbacbacbbbcbcaccc", "abbabcaccabccacbcbaaaaccbacaccbcbc", "acbcaccbcacbabacbcbacbacaaaababbba", "aabbbacacabbbcbcaacbcccbbabababcab", "aaabcccbbbbaaabbccccbbaaaccacacacb", "abcbabbabcaacacaaccccbccabbbaccacc", "caabbababcabcccaacbabbcbabcabbcbaa", "cacbcbccabaaaaaaabcbabbcccacacbbab", "cbabbabcbbacabbaacacbbcbbbbababaac", "bbbccacbbbaaccabcbacbabbabcacaccba", "acbaabaabcabbbacbbbccabaabcabcbbcc", "bbacbbcbaacbbccccabacbabbcabbbbccb", "bccbcbacacbabcaccaababccbbacabbbcc", "aabbaacabcbcbacabacaaaabcbbbabccac", "bcacbcaccbaaccccbbaacbbbbaacacabbb", "cbacabcabababccacabaabcbbababbcbab", "ababccbcccbaababbcbaccccaaabcabaaa", "bccabbbbacaaaccaabcacaabbccbaacaac", "cbccacccbabcbaabcaababbacacbcbbccc", "acbbbbccbaccaabccababacbcacbaccbba", "ccabbabaaaabaabbcbacccbcbaaabccaac", "bbccaababccacaaacbbcccbcaaacccbacc", "acbaacacaaabbcababaacbaaacbbbaabca", "cbcabcbbcbbcbccbacbabbbabaaabbacca", "cbabacbaccacbaccbcccbcbbaacbcacbac", "cbacacabcaabcabcabbcaaaacababbabbb"};
    vector<string> words = {"cccbbabcccaabaaacacccbabacabcbbccaabcacbaaaabbacca", "cbbaabacaaaacccccaabaccbccbaaaacccbcabcaaaccbacbca", "acbbbccacabaaaccababaaaaaababbbaaabbbaaabbaabcbbaa", "aabaababbcbcabcbaacacaabacbabbcbacccccbbcbcbbaabba", "cacacacacacacacacacacacacacacacacacacacacacacacaca", "abcacabacaababacabbabaaabbacabcbacbbccbabcbbbbacba", "ccaaaaaabcbaaaaccbbcbcbccbcbccbbccbabbaacaccabbcca", "cabababccbbcbaaaccccababaccabbbccbaabaabcbabaaaaca", "bcabacccacaaccccacbabbbbabbcaccbbcacbbcbcaabbabbba", "cababbccbabcaabbbbabbbcabacaccbcbcaccccccbaabbcaba", "baaabaccbcaaaaccbcbbbccccbcaaaaacabababababccacbca", "aabbaccbbbbccbabacaababcabcbaabbaabbcacabccbbcbaaa", "bcbcacbbbcaaaacbcbcaabcbabcaaabccbcaccbaacabcbcbca", "cbbcaabbbcbaabaacbaaaaaccabcaaaababbccacbaccaabbba", "abcaaaaabaaabbccaabacabcacabcbaacbaccaccbbbaaabcaa", "bcbaabbbccaacccbababbccacccbaababababcacbaaaabacaa", "cbbaacacacbcabacccababbabbbbbbaaacbbbbaaabcaacbcca", "abacbbbcacbcbcbbbcacaaaccbbcbbbababcbcacbabaabaaba", "abaccaacbcaabaaabbaabbabcaabcaccbbbacabbbbbababcba", "acabbccbbbcabbbcacccbbaccbabbcbcbbccaaccabbbaaccba", "caabbabbcccaabaaaaccccbaababcbcbbbaacccaabaacbccba", "bcbaaabaaaabcbbccccbccabaccbababacacbbbbcacbaaaaba", "abaababbbaacaacccbacccbccabbcaacccabbcbbccbcbbbcaa", "acccabcbacacabcaccacbaaabbcbcabcaacabaababaccabcca", "cbaaaccbbbaccccbbcaaccbaccbcaaaaacbbcaabacbcbbccba"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 10, 0, 0, 0, 15, 0, 0, 26, 0, 16, 0, 31, 15};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> g = {"aaaacbacccbabbbabaccbacbcaabaacccb", "acaaabcbaacccbbbacaabbaaaaacccacac", "cabccacabcccaaabcccacabbbaccbbacab", "cabaacbcabbcbbbbbacbbaccabbcaacaab", "aabbbccabaaabbabbcaaabcbaccbabccbb", "abcabbbcacbabbcccaccbcbbbcbbccabac", "cbcacbbaaacabcabaabbbbcaacbbcccbbb", "bbcaabacaacbccabaaaccabcbccbbaaaba", "abbbacbacaabbabacbcbbaaabaccbbaaca", "cbccabbbcbbbbcccbbccbabbabbabbacaa", "abccbbbccccbaaaccbcccaabacbbaaccab", "acbcbabbbbbccbbacabccacaacaabbbaab", "cbaabababaacccaccbccbababbaaaccacc", "cbcabcbaaacbcbccbbcccbbbaccabbacbb", "bcbabaccccabaccbbbbcaaacbaccaaabac", "bcaacbacbccbacbbcbbabbbabacabcabca", "baccbabcbabbabacbbcbabaaaabacbabaa", "bcbccbaaacbbacbabacbbbbaccccbbcbac", "accaaabcbbabacbaaaacbcbbaaaababbba", "bcccaccbbbcbcbcabbcbbabaccbaccccac", "babbbbccbbabcbbcabaaacacbababbaacb", "cacacbabbabcabcbcbccacaaacabcbcaba", "cbcbaccacaaabaabbacaaaacccbbcbcabc", "cbaccbccabcbcccbaaababbacbabcacacb", "bbbbacacbabacbccacbbcbcacababaacaa", "acbbacaaaabccccacbccbbcbbcccacbbab", "ccbcbbbaacaccbcabbbbabcacabcababcc", "bbcaacbaaabaabbbacbcbccbcaaaabccca", "baacabbaccababbbbcbcaaaaabaacacbcb", "caaaabacbbbbccabababbaaccacccacabb", "babcaacbbbaabaccabccbbbcbbccababab", "cbbccabbbcccacbcccacccbbaacabacbca", "bbacccccbbccaccccacbabbaabaaccaccc", "cbcccaaccccbacaaabbaaabacaaacabaca", "babcaaacbabcbcbaccbbbbbbbccacabcbc"};
    vector<string> words = {"cbbbbcbacabcaccbbcaacaaccabbbccacccccbbcbbacabcbca", "babacbcbcacabccaccacbcbcbaabcababacbababbabbbcaaaa", "ccabcbbcaaccbbbbccccbbcbababcacaccbaabbcccbbabaaba", "cbaabbbbbcbcbccaabaacbabbabbbabcabbaabaaaacbbbaaba", "caabaaabbbbbaabacbccbccbaccabcacbbbbaccbabacbbabca", "caabccbcbabbacbaabaacbaababcbacabcaacacbbcbbacbbaa", "acbbbbcaccaacaaacaccbaaabbbbbbabccaabbaabaabbcbaba", "bccbcbacbbbabbcaaacabccbcbccabcacacbacacccbaacbbaa", "aacbacccacbbababcaababbbbbaabbaabcaccbbbbbaaaccbca", "cbbaacabacccabaccaabcabbaaccbbaacccbbaacabacccabaa", "ccbbabababacacccbbbaacaccccaabaccaabcaccababaaccba", "bbcaabbbbaccacacacabcacabcacbbcccbaacacabcbbababaa", "ababbbcbcccbaccbabbaccabbbcbaaccbbcbabcbcabcabbaaa", "cbabccacaabbaabbccaabacbabcaccabbabbaaccabbbbcabba", "ccaccbaacabababaacaaccabcbbbbbbcbaccaccbaacabababa", "cacbacabcbbbabaccabbcccaaababbabcbbccaaacbaababcba", "babccaacbbabccbcaaaababcaaabcbacbaccbbaccbaaabbaaa", "bbaacbbcccbcabccbcbcaccbbaaccaaccaabbccacbaabcacaa", "bcbbbacbcbacbcbaacabccbaacabcabcccababcabbaaaccbaa", "bacacacabbcaccaacabbabacaccbaccacccccbbacccacabcba", "ccbcccbcbbaccbbacaccccacbabccacacbbbbbbabbbbccabaa", "aabbacaccbbbbabacaacbacbaccbaabbccbbbaabacbcbbbaaa", "baaaabcbbcacbaacabaaabbabbccabbaccabbabccaccaaccca", "cbcabccccabbacbcacbcaccbcbacaccabaaabaaacbabbacaca", "bccbccbacbbbaaabcbbbbbaaacacaabcbccbaccbbbcbcaaabc"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 26, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> g = {"bbccccbccbcccbcaccbaabcabbcaccabac", "aacacbccbaabbacaaaaccbcbabacccaaac", "accbabbbbbccaccacaabcacaaaaaaaaacb", "bcbacacbbcbccabcbccbccacabcacbacab", "cbccbbcbabcbbccabcccaccbbcccacaccc", "babaabbccccccbbaabbcbcacbabaaacaac", "bccccacaacaabbcabacaaabccbbbacbcab", "cbcbbcaaacaabbaaabbbcbaaaccaaaacba", "aaabaacbaabaccaaaabcccbbcaabbbaacc", "babacbbbccacbbacababbbabccaccaabac", "ccccaabbabcbaccbbbccbabbcbccbcacbb", "bbaaabacccbbaabbcbcaccbaababbabbcb", "bcbacbcbbcbaabaabccabbaaaaccbbccac", "cacccccacbccbbccaacacbbaabbccacabc", "cbabbbcaaabacccbbabbcbacbabcaabbaa", "cacaacabaaccbbccbcccbbacaccaaccabc", "aabaaaccacabbaacbccbbabbacabccaaba", "caaabaababcaaabbcaabaaccacabbababa", "acababccabcacbbcccbcaaaaaccccabaaa", "bbbbbbaacabccccbcbccabbcaccaaacaac", "caacbaccacbcacbbbbbbacbaabccbccbca", "acaaaacabaacbbcccbaacacaaabaccaacb", "aabcbbbbacaacbccabccabbbacbcabcbac", "cacbccbacabcacbccabccaaacbccbcaabb", "acbcbbbcaaaacacbbbbacaacaaabbccabc", "ccabbbcabaabcbaccacaabcbbacbcaabac", "baababcabacaccbaababcbbbccabccabbb", "ababbbcccababbaaacccbbcaacaccbaaac", "bbbaacabacabbcaccbcbacbbababcaacaa", "ccaaabccccacabaabaccbccaacabbcbaca", "cccbacbabbaaaaabbaaabbaaccbcbacacc", "acbbbbbcabaabbcccabccbbcabbcbbbccc", "abcbcacacabbbcccacaabaccbaacacbcbc", "aaaaabababbacacabaccbbccbabacbabbc", "acacbbacbcaabaaccbbaabbcbbbbbbcbab"};
    vector<string> words = {"bbcccabccacccccacaabbaacacbbcccbcbbbbcccabccacccca", "bbaabaabcaacbcbcccbcacacacbcababcccbccaacaccabaaaa", "aabbaabacacaccbabccacbacbccccccaaabaabbaabacacacca", "baabbacabacacbccbbbabaacaacbcccaaccccbabbbbacaaaca", "bacbbcabbcbccbcbcaaababbbccaacbaacaabbbaabbaacbbca", "abbaabaabcccaacbabcbaaaababaaabaccccbcacaaaaaacaba", "ccaaabbcbcbbcababcccbbbcbaaabccbbcaccbabbcacaaabca", "bcaabaacaaabaccbcaaacbccacabbcacbabcaccbbaacaabbaa", "acabbbacbccaaaacaacaabacaabbbbaccaabcacabbabbccaca", "abccbabcbcaabbcabbabbaacbbbaabbbcbbcbbcbcbbbcacaba", "cbcabcccccacbcbaacabccabaccbaacaccaabcbaaabbcccaba", "abccacccacabaaacbbbacabaabbccacccaaccccabacccbcaca", "bcaabcabbbababacaacbbccccacbcaaabacbccaaabacacbcaa", "cbcabacbccaacbabacccacaaacacbcbbccccabcaabaaacaaba", "abbaaabccbcacacbcabbcabaacbacbcccaaabcbccbbbaaacca", "cacabbbbbacbbbcaccaabaacbcacaaabcccbcbbbabaaabcaba", "bccaccccacccbaabbccbbbbcaccbcccbbacbcabbbaabcabcba", "abcccbbbaacccbcbbbcbccbabaabcaccabaaaacccacbcbbbaa", "bcbcbacbbbcacaccaacabbabcacccccabacbbcccbabaaaccca", "abccbcacbbbbcbbcabbbbbabbccacabbaacabaaccaabacbaba", "ccbccabccbccbcbccbacccbcbcabaaccabcccccabaabcbbcca", "bcaccaabaacbbcaabbbaaaaacabbbbacbcccccaabcbabccbaa", "ccabacaacbccabbbcababacaaccbacbcabcacaccbcabbcaaba", "ccccaccabbccacbbabcaccbbcabcabbabbacccbbbccbbabaca", "abacbcaccbacbcccbababccccacacbbccabbbccaabccbaccab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> g = {"aabbbcbcccacaaccabbccbababacbcaaab", "babaabaaacabbacbbbacbccbcaabacaccc", "cbbbaacabbccbcabbcaccbcccaaaccaaac", "bcaabcbbacababbcbcabbacacaababaccc", "cbababccbaabbabbccbbccabbcabcaccba", "aacaabcccccbbaacabcaacaccbacaacbbb", "babacaaccacbcbbcaacbbacacbacbacaac", "acacabcaaaacacbcbaccabcbacabcccccb", "acaababbbccabaacbaacbbbcacabbcaaca", "aacabcbcbcbccbbccaccccbaaccbcaccab", "aaababaabbabcabbbbabcabbcccacaaaaa", "bccbacacabccbccabacacacaaacbccccab", "aacaaaccacabbaabacbbaababbccccbabb", "aacabcabbacbccbabaaacabaaabbbbabac", "ccbcacaabcbaaacbbbbbcababcbaababbb", "abcbacacbbccbbcabbbaacccaccabbabbc", "accbbaaacbaababbabbaaabbbbbbcacbac", "caaaaacbcbaacabaacabaacaccacababba", "cbbaabcacabccbbabbacbaaacbbcaaccaa", "abacccbbaccbababaacaabacccbcbbccba", "bbabcbaabcaaccaaacccabcbbcbbababba", "aabbbcaacbabbbbbbacaccbbcbaaccaabb", "cababcaccbcabccbbbccbcbabcbaabacac", "bccbbacababbaaccbabbabbabaacbacabc", "cccbcacbbccbacabccacbbbacacabcbbaa", "caaacbbbcbaabaaccbaccbbbbaccbccccb", "abbacabcaacaaccbbccbbbaaaaaabacacc", "bccbaacbcccccbcaaacccacbaccbcbbabb", "abccabcaabbbaacaababccccaccaacbbcc", "aabcbbabbaacccabaccabacbabcaacbabb", "aaabbbaccaabbabcbbabccaababacbbacb", "bbbabcccbcbaccbcccabcbbccacccacbab", "bacacacacacabcacacbccacaaacccbbbab", "cabccbcabaaacacababbaabbccaacccbba", "cbcccbcbccacabaccccbcccacbcccbcabb"};
    vector<string> words = {"babcbcbcaaaacacaabaaaaccabcabaaccaccbababccbbcbaba", "bcbcaaaaabbcbbabcbabaacbbacaaccccacccabbbacababcaa", "cbabaabcaaacbccaccbaabbacbcbbbcabbcaacbaccbbbbbaca", "cbccabbabacbabaababbcbbabbbabcbacbaabaacbbabaacaca", "abcaaaccbbabccaccbabababaabbabbabbabaacabacabccbba", "accbacabbccaccbcccacbcbabbbbcbaabcbbbcabaabaacaaba", "babbbbbcaabcaabaccbbabbbbcbcbabaabbbcccccaabaaaaba", "cbbaacbcbbabaacbabcaabcccacbaaaaaabbcaabcbcccaabaa", "cabaabbacccabbccaabacbccccbabacbcaccccbbaaacbabbca", "cbaabbbccaccaaacccabccbccbcaabacaccbcbccbcbcabaaba", "abbcbccacbbcaaabaacccaaaaabaabcabbacbbbaaacbcbacca", "cabacbbabbcababacacbcbbbabcabcbbbbbaacbcaacbabaaca", "baabcbcabbcccbbcbaabbabbbcacabbabccbbabaccacccbaaa", "cccbbbbabbaaabaabccaacabcacacbccbbaaabbcccccbbbbba", "acbcaaacabacacbacccaacacbcacbcbacbbcbbccbcbcbcccca", "cbccacabacaccabbcacccbccbbbccabbbaabccbbabccccbbca", "aaaccbabcbbcccbbcabacabbbccabcaabbcccbccbabcabaaba", "bcacabaaccbabbbcbbbcabbcbaaaabbbccccacbabcbcbccbaa", "bbcacbaabaaaaaaaaaaccbbbbcbcccabcacbabbbbababaccba", "acbaaacaacbcabccabaacababbcbcbbacbbccaaacbcccbabca", "cbbbabcabaaccbacaabcabbaacaccccabbabbbacabcaaacbba", "bbabbaccaabaacbbcacabaacacacbbaaaacbbccbbcaabaacca", "aaabccaaaaaccccacccacbabcabaabcccbcaacbccbbacbacba", "acacbaabaccccacbcabaaaabbacccacabccabcbcbbbcaaaaaa", "acaaacacaccbbccacbacbbcaabbabbbbbbbbacbcaccbaaaccb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 31, 0, 31, 15};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaza", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaazaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaazaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaazaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaazaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "azaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "zaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17503};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "zaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22642};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> g = {"bhoajessceffbhblpchqlecnmcbqs", "phglsjmhtpodlcnneblnihecrrtdb", "jsqpkcigaceigfkjkkgbnijdeoqag", "qlietgdrsscjbnptsekrgngbfemkj", "rnrmgkbqphpolmkkbegkhlhrrhndf", "jjsbicggknialcpkteridpbcklqoa", "qbitiebontssaihhinidhbkrnojqp", "lajtqsdeiejjcpfnddhodiassaqsb", "jsjrmcsmstkrslpiqlcompigcgpnj", "ceqbsclbtrqmjpmakdjbibjpdcfcf", "igrrmmjobjqjimfpojbmfasntdtqh", "jjrgjnprqgficpoobqlgdnpfnmimf", "nqbsgcbeqcjbpkngetmtneokfjgno", "cishfslcfrooeoomtnkhrsrnkdimf", "canhcthfdedmbbdmfnflmccgeahan", "okkpnlaqhfkaopetfqosclgsnlese", "tmahagkrkpqhdsejcgfhrofhjidac", "cdqrbpfeacqkglllhnakeidalcjan", "ssfhrastdarerinhbkainefalepqm", "kdfqqgrgrrljbqcrmrqfbdjjftmqp", "nceoomrjmdhdlphipsdcolbptfbkg", "ofdkstbnoroqnqfcibanbppcclres", "mdqnanpmskrmmpjlaifkrjkfnolae", "sptmfebdjpimrjqbhhbjanobrpdnm", "ebmtkihepgskhhedbdgdkljaectnl", "esmkfptdcsheilenpfmgsjctfjefa", "fiskbdmmmhkdbddhajpfidhidrjdj", "biciabsoigkjdkaihqdpgfsnjeidt", "rgepsglfpbjqepecpncqimggnjefg", "mpnfqqbooqmqscpplkbflrgkkconn", "qmicnododqiernjiaasskpbedqdjc"};
    vector<string> words = {"bjic", "icpifqjksjngaq", "jhischhbmnqmo", "fiilmlotscepmjtsdsgtsgqhskmastmicappchq", "rsrilqkjfsjaaahcppmbosgogijsdppbppiokfercbejjkdknf", "krqrsnqoeljpfrerdekiibfmnmoqgqmjaotdlbjtfffqkpjegn", "ojapnjbmisligkcotkmclpeoecpaombchrjfpokdobmmtimchi", "pidtoegtsfggahmhmqohbdclqdidcsqalcqkfegrjdoriilqdi", "hglrmdhififsrdnbkilkjmojbfhnnommkbcrrkcebkdrdtpjhc", "kcsghkilsnadgckmiobsdhfsbrkossbdqhsjpfpggnakiimnag", "pktrmcimjeoimhmpierdjpbjamidlonlaokrtasleahtfdsmnm", "laoarfjaflmkjstlrnnargqkcstsjtjemaihirdkhqocltbqkd", "dqmmboncqapetqasmheargkbcjdsfbpqqsstsrkhjbpsqntefn", "imdjoiplncilgegrrjqoljmgnlpjramqlhgcpdoarffnbsssal", "hfkpjkjnfochmqhcckblhftbslhigqtjcggpioanridblcprgm", "bqbbphespqotsoncpdinmhagskbbtpdqnbfnoknbhtkdfmjbmq", "bhklfmmjaflsngsiglgqraojijejsrpgeigirsktfgtaklnpfs", "alhheghaholmlinfrlergicnacrsipjhbnehbnrbchfneepfbe", "bmgqdnaailnilqtialntdtnqpfoapaqpflitqcmfapcfcaqrci", "aaqsnagonrapmahpgbibipqfjmqpcdcbcmisirokkptjpdattf", "lbbmnnjhcndaosedjmejkfhohgqdatkiklfbkdjpstgcphqnip", "tnkcfbfhhjolrsfrssemdiebdkebhrmldbdbfbfkpbcmlppnst", "ciochfsektoedfsebkndokghffqkjsdprjkeiroamnpobqgepc", "tbmettdhqfsritrrlqpabnmqapheotkqbljkomljhktnndbdfq", "tptisdtpbngcsibtslddodjchcbhglrnaqkcpgkrcajfodcpga"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaai", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaal", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaan", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaat", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaay"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> g = {"ccbbc", "baabc", "ccbab", "cbcaa", "aacab"};
    vector<string> words = {"ccbbc", "baabc", "ccbab", "cbcaa", "aacab", "cbabc", "bcbac", "abacb", "aacca", "babba", "ccbbc", "baabc", "ccbab", "cbcaa", "aacab", "cbabc", "bcbac", "abacb", "aacca", "babba", "ccbbc", "baabc", "ccbab", "cbcaa", "aacab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2045, 2036, 0, 0, 0, 0, 0, 1014, 0, 0, 2045, 2036, 0, 0, 0, 0, 0, 1014, 0, 0, 2045, 2036, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 24465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> g = {"eguzrbqdtdezwtyppqqaoijgdioueoboja", "fkedgwojdoejipgdpyltbshzdeoxthzrqm", "ymvzuvwvsiiujciukkdhpshuskemxqdqfa", "pdsrpyojuvgypgkbfacrvwzwtimjyomdwl", "hsxmicrkxonwkktmfqxcgzlnpzzpkhqgfh", "memfatrdpjfdtbyuustesjsdiufahzuqqr", "erpwqvwjmepfsbuydadkkchqyujhtkivcu", "gvavgwfxeaohdurzogkbpexrubowwiwiug", "wjafnaxpaunfobvvkdfrdxjqzkgcqwwpec", "chzndayvaacbqhubxhtiijbsydwwhizmvg", "ronimabvbauywlxgvalecypmcatpfrprtv", "kvtaobvgcophfxglbzptzqoekvvoibbmji", "hkgdqsqpyxeoslyvxkzqwzboilfmijpewt", "zuwtwnhgvzpozcgovzgftipsqleytbruhp", "nzzbskqhnewedqalsrxkxidmfvegcttfln", "nljmhmgtxetfbnudvlkiymiwrievviyumg", "igykfttxkttvaauwerojvltdomuqewpyhn", "erywmgwpncoigifdzdoknjnbggleaekmax", "ssekdtuktfiypbswgnyglspznuebnzvxif", "psqkwjmgxvjwafwanjsyjoqrfaremgbtse", "vrjszhzaobtttrrdjrwdiwkqkvwlxmpbdg", "ufatitlaaucofuhzgovmxbjxyaaocrebng", "huoyiizdunwchrwtdhuhpyuobnnfhwknag", "vrpmxnymrmguyioluwzzalzlhejbnvtkkg", "fgtjhlehfsbnoxqwassmkwepvfumyidpqc", "ovhalppbpeeijobveakqcprwrchsgxkxme", "hfapbfxdqysbweuwntjytsphrmkffhsclq", "guhxusroxeumbpwlbgmyykzhvbsseqizgy", "stsxxbtjuwjzyeqdczaratzfflntddmwyo", "ccdbeceijkxmeurjuytdpbdbvfbhspkmjg", "hbjimwbhalbnwtyixnrmtuhjsbmxhgtemk", "fvcangjflxxlwptilksjpwczoxgfkfyesp", "nghbyqubzfscigruldwmkrmrggoqmqtera", "qwsgaaqvnjldyqmuhjbzyucvewasoqzfrb", "ltaenuvznkvyeeyiazgsdcwmpjxzxhecpf"};
    vector<string> words = {"ymdjxamegbubbvkvtwmxipmmjgilcyvbddfhiyupffydyvquie", "ouedyiegtpjoudpgbzeqdorzqijbwaoaqtouedyiegtpjoudpg", "eydbtadkuyefxykygrybpjakhpgpnbasedweadwbftiidqxpip", "mftvytxvfsttapvybkabahuwgcdgdmjtrqpebhwboemindeqsu", "twbakkrfzktrkyywbwfmaplxyiextehmeirskwzhotovprvfsw", "nlhugxrhjkaigzgsjmdtqtefcopglxibvtymyzbaohizylagpi", "vfitawniqcgkglrfnnrtjzffklwotsbfhjlocwnxptdjaycupy", "afaepghwpjowgzanxpxjxexetzpjxrmjxtvnqmxdphgmwfktza", "lermarnnqvsoahlermarnnqvsoahlermarnnqvsoahlermarnn", "amppiwcymkssydatinbrkpzbzhuphepxzwacewkbegdxmrmrcu", "qjudcbypbenhfhjizomgqhxftllejiczkvxxfdewlpovrrjbdf", "hgwdeelshuqmnwzmwjwithztjtanwnyzzitufgwocjwkhpkbwb", "ewpvwelnwvodautudefareqhptxtkjbxfgvuqhbfjnewkpstmp", "uvlwqtismrvhxezpudehgmihhphtjuftoypuakdcujdciwshou", "jwosubyafwuwwkpyonhyexensefqtgcbxogrhbqtmhlqmhoyot", "geegkhesphxkeaiajpubrscgpndayvppikuqbggrethpxbfvfh", "qvbbwcsfjveyyihrdwmfptpgknvafukqjswwwggyfjsaeyedfq", "fovyaenydxuijgqlwyjxvgslmshefpkdhrjcnhdmfrmywobdxp", "oxivqwecyhwdvfsfgyodroojmrhrbbltztbbgxlqdsppjriwag", "eflpkizpuykblxtzdiwrjgomhuwvetgnpchgefyrpzmkoojbgj", "rgehmfwpvwzidzjijkqzltgquowblyqaaogpzhykbmhirqkpgl", "tvqzudipxhjlfgeixuevkwohwgsbfuuzkrorkksofbliuitchw", "eodzbbfwdihnymzhbvbcsrcbjwmrnqtukpmppwyvvgzdmkonwr", "huhbbrqerrjozspcaeextkxmvewmcmhgdofefwyyduoljyrkrr", "ehnazsraykmrtbjdegrhyqkdigupwwictyzsgebyfotabeawos"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 19, 15, 26, 16, 25, 16, 15, 25, 32, 31, 32, 16, 26, 13, 16, 31, 13, 26, 12, 31, 32, 16, 12, 31};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> g = {"ab", "cd", "ef", "gh", "ij"};
    vector<string> words = {"ab", "ghghghgh", "aabb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2750, 0, 0};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> g = {"aaaaaaaagaaaaaaaraaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaata", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaataaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaataaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaataaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaataaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaagaaaaaaaraaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "graaaaaaaaaaa", "gr", "tbtbtbtbtbaaaaaaaaaaaaaaaaaaaa", "tbtb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 22, 0, 0};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> g = {"abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab", "abcabcabcabcabcabcabcabcabcabcabcab"};
    vector<string> words = {"abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb", "abcaabcacbabcaabcacbabcaabcacbabcaabcacbabcaabcacb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> g = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> g = {"abc", "def"};
    vector<string> words = {"ac", "dc", "df", "af"};
    int k = 2;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> g = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaab"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> g = {"tbdbcrdmviixmhsmijtwhqqrijpxsgujilh", "jfxajftlwhnbrgbvbyokfqndvfjyirpptkx", "lvojufeygqltnocbamjlsmatutuighlofhl", "scnxfxaqehlfsedghaemxmhpgbqeqespvxd", "qjvqcvwobvxkhiqxqtnfaxahsvhgwjbsful", "xmdqvnjjswvirnnxqnoikbldyxrockimixl", "wpjntlwivvpbcfbljuiqqfexkxdjpwxmgji", "qcqjhgajldfhgrxcehawbtrohbccqgeadqx", "qmpkfawjstmbmlejesdrduwvhymfriomcgk", "cajscagvthmhwouvyergeictfnltlkxqhym", "weylhxmragijxcrpcmguebsrvtreafdjccd", "fofuekmdnkiotuyfcjtneyuiytjewaprfto", "gpulqesqtwriscekdrlfxwybjngqlmeslsh", "qxiloxvbbwddutqytuegvaathgyejecjwxx", "ynwiojxrxqrimepdrkmxshpcsixpearqujy", "wgipidkqofnpyvtotweolmmnvishwsfwpxw", "edvlvmnfpuovvbfiisfkqchciyvqodpeeok", "qrxarmsdesskovmowaktvwpsecutnujaxpm", "vyjbfknipkyiujorkpgqwiqaalcfyacdhji", "fwfvystwptnpfglosgegtgcposnmnwounju", "ytvpiflmbtfqqtrmxnniyytqeswmhroklcw", "lwfbpnbjkseovwhiwcrxwhhacsjklqxnwwc", "kcjmpnqfefgdbvvruenqndkgcfdwupytljn", "vrdjgxwkyovfavakjxljmarrvgxblitjjeb", "kjqjcxfmdtqbrnmtvlvmodiykrkrsohkweo", "rvfdlqfvbjegfykeyrwgklufhmddobjkqky", "hsqohkudhjxknctbwhtrgnxxxqmxdnqitnu", "sqtblrxhqrrkaanrsoqdrxqifrolniwwfdk", "elgafdrtysjqyykklfjkxhnxccktggulcwj", "wkxdudlajpjveixocatxsfdojndyrxqlnvr", "elyslcjoegtotjinyaixqgeaemteuqporgh", "cqmvvglfomsawyefkuhookvpbpxbhlvrdqi", "rjngqlbieluvlgdemfkuowkraoolvnxwaqc", "dqvmvsdnslkfabphbhuhecsorigjpueiuti", "ayehalecolvvoppwsmcogtoodsekwdbnuby"};
    vector<string> words = {"heyqljlpeifapfcusovfqftngyqyksfmgpxynerxradgtlrcmd", "biusksqoajvieciuuqsvsedpncktdxgtwgtxfsnnfomiolxdev", "cdpitrsiycvdtmxotjcwmylopgkevxdjdwdsvpljqtplcucpql", "ahypxiyrsscgfurqvqeiksebdmpsirvbhhkolldejmvyfrvnxe", "ausbpnnpcytrajsixjxplnnpmoarcgfwhmyexoywpfqwqwdhit", "swotmsxecplenmjpsftjwpcqedixwmwooqdemjjqfanirytwja", "vbweiictqcnrkusylxmorwaduoppitmdcjbfkldlnbtypdncpd", "bfvdfsommoqktpjdaolpecteulsackajvjwoqpvqlulonpdsyy", "hjmrxqroxechrbbiaachglyoxnawpxqcvtqwtwsuastwjvuptm", "narlmqaqayavclqmsbgeouspbpkhnhofwbcbvcfmoegbbyeich", "bbqqbjcqrtyblyopsnwndfycqwvoiayukyqjsfonvuddijgwcg", "rfsksxuwsebrpmicjxcvxauqlfkkwtqpjkapsufauugejawium", "glekuugdsoidaogcjtppqdiujarmdqjsclyfkewqupfosxurgs", "fibxcdqqwmmimdlheqdsfbiibijmcbwjljvbtigbomyopgwslx", "xivweqghwbtodxafbvlabyaiqahgbghfjuetoclfaxlsupmxba", "qufhuhwkpiehjthhgpcsxdkkbflajrhqqowyxkrwssmtxvgykd", "miybuichyhwyslfxqqfwmiiyrlndrcqvkwvufiiykxckoihext", "uhywdicbedbxepgdxiysedrdanixdjpnymqxfanjopcghijjig", "rusclltcvykhilkabwqclcoaxotjejhmkoqsnnapkfcqvupecv", "lrimngleqehdawvxatduihnlymdskxrtppbyhjtvmyparaukmv", "otypshkvxxqktjwgotfjpjmcbpqxqymibrikqxullmdheyiffy", "rbqfptpttuajuseltlyswugnbegvqlfksyttxxiqrgxkwifqmx", "rhpiabslwnjrwhomkpewxbdarpaiplswfkfthryscwseumlteh", "tcegccovexhwuofbtmlgtcgklpmtmgkxxnmkukgtdjpusrkymx", "wcjmojkfweadtamngarekxofrlxynvunyqgubdjhqlhaowgipj"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> g = {"ab", "cd", "ef"};
    vector<string> words = {"adebcf", "deb", "de", "eb", "cf", "aa", "ab", "ac", "ad", "ae", "af", "bc", "bd", "be", "bf"};
    int k = 10;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 18, 18, 18, 18, 8, 10, 11, 18, 4, 14, 18, 0, 14, 0};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> g = {"a"};
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24465};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> g = {"hdfhhadfhdsfhhdsfhdfdhj", "beuwtuireuituituireturr", "gufdgjkgjkfgjkdgjkfggjg", "reshhfhghfghgfgfgdfgdgd", "wrytyuryuwerwryueruweur", "werueeyuryeureyuryuryue", "ryyygdgueruhgrehbuhubbi", "gkhhkghfdgdfgjfhgjhfjdg", "rtuiuretuyryetuyutyetyr", "dgjkjdgjfhjghjghjghjghj", "gfdgdghhjghjdghdfhghdjg", "tywetiritiuretuiuitiurr", "yuitruietuiruituiwetret", "uirturueituiretuiruiiur", "gjkfdjkgjkfdgjkfdgkjfdg", "retertuieruiteuituiertu", "wtrtwyuwrtreyutruietrrr", "fghfhdghhghghfjdgjkdgfd", "cvbvcbjbjbjhbjbvhjbvjkb", "ertreytyutyureytyurturr", "fgjhfghfdhghfjgjghjjfff", "eruyyryeyurewyuryeueeee", "tyiurtyutryirtytiytyryy", "tyrtytiryiuiwwereereree"};
    vector<string> words = {"rgderr", "busted", "ac", "dfgdfg", "sdfdfkdsfhdffdfdfdsfdhkdfhkfhkjdsjfddfsffds", "ertertdfgidfgijdfjkgjkgjkgdjkkgdjgdjkgdjkgsfjkl"};
    int k = 200;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 75, 37, 73, 0, 0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> g = {"qw"};
    vector<string> words = {"wqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwqwq"};
    int k = 1;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> g = {"abcdefghijklmnopqrstuvwxyzzyxwvutsr"};
    vector<string> words = {"zzyxwvutsrabcdefghijklmnopqrstuvwxyzzyxwvutsrabcde"};
    int k = 1;
    InfiniteSoup* pObj = new InfiniteSoup();
    clock_t start = clock();
    vector<int> result = pObj->countRays(g, words, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=8083&pm=6017
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
typedef vector<int> vi; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Greatest Common Divisor 
ll gcd(ll x, ll y) {return x ? gcd(y%x,x) : y;} 
 
#line 3 "InfiniteSoup.cc" 
 
class InfiniteSoup { 
  public: 
  vector <int> countRays(vector <string> g, vector <string> words, int k) { 
    // !FDI 
    int cnt[35][35]; 
    int X = Size(g[0]); 
    int Y = Size(g); 
    FOR(x,0,X) FOR(y,0,Y) cnt[y][x] = 0; 
    FOR(x,0,k+1) FOR(y,0,k+1) if(x+y) if(gcd(x,y) == 1) 
      cnt[y%Y][x%X] ++; 
    vi res; 
    FOR(w,0,Size(words)) { 
      int score = 0; 
 
      string wd = words[w]; int wc = Size(wd); 
 
      int old[60]; 
      old[0] = 0; 
      FOR(t,0,Size(wd)) FOR(q,0,t) 
        if(wd.substr(0,q) == wd.substr(t-q,q)) old[t] = q; 
      printf("%s: ", wd.c_str()); 
      FOR(t,0,Size(wd)) printf("%d ", old[t]); printf("\n"); 
      fflush(stdout); 
      FOR(x,0,X) FOR(y,0,Y) if(cnt[y][x]) { 
        int at = 0; 
        int c = 0; 
        int px = 0; 
        int py = 0; 
        while(1) { 
          while(at && g[py][px] != wd[at]) at = old[at]; 
          if(g[py][px] == wd[at]) at++; 
          if(at == wc) {score += cnt[y][x]; break;} 
          px += x; px %= X; 
          py += y; py %= Y; 
          if(c==0&px==0&py==0) c = 1; 
          else if(c) {c++; if(c==wc+5) break;} 
          }         
        } 
      res.push_back(score); 
      } 
    return res; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/