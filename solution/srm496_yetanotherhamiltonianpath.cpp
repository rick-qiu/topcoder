/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11147
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

class YetAnotherHamiltonianPath {
public:
    int leastCost(vector<string> label);
};

int YetAnotherHamiltonianPath::leastCost(vector<string> label) {
    int ret;
    return ret;
}


int test0() {
    vector<string> label = {"home", "school", "pub"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> label = {"school", "home", "pub", "stadium"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> label = {"abcd", "aecgh", "abef", "aecd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> label = {"manglisi", "tbilisi"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> label = {"a", "a"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> label = {"bccabccccbaabcababacbaabbbaacacaccabbbcca", "bccabbbbbabbbaccccbbbcaba", "ccaaabccacaacbcacbccbcccbcabaa", "cbbbbbccabbacabbbbacbbabbabacbbbaabb", "bbbaabacabcbaababbccbcacbaabbbbbac", "bacbccccacacbcccccaaacbcaccbcababcabaaa", "cabcccbabaccbbc", "cbaabbcacacba", "acbcacbcaacbc", "caa", "cbbaccbbaabcacbbabaaababaaccbabbaaababaabcbabcc", "abccabbacaabc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 17930;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> label = {"abbbbbcbbabaacabbaabcbbacaaaaaabaacccaabb", "bcacbccccabbabcabcacabbc", "bcaabacabbacabccbbababacbacbbabbabccaccabc", "aa", "abbaccbbcabbcccbbcbbbaccccaccabacabbcc", "acacbbaacababca", "baaacbabcaaccaaccaab", "cbcaacbcaaccaaacbbccabacbabbc", "cbaacac", "acabacbbcbababbbbcabcbcbabacaacabbacbba", "cabbacbacbaccaaba", "acaaaccccacbcccbcccbcabacabaccccbbacbaacaabbccacca"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20287;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> label = {"ababbbbcbabaaaaaaaaaaccccababcccca", "bacacacccbbcaabcacbcccbcbbcbbaaccbcbcaaccbabc", "abbaccacababcacab", "bababbacabbba", "bbbaccbccaaaabcaccaacbcbaabcabbaccacaacbaaaacaacbb", "ccbcbcbca", "accbbaaccccbbabcacbb", "bcaaaaabbcbcbcbacacbbcbabcbccbcccbcabcbcc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 13410;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> label = {"bab", "bbabccbcaacabcbbcca", "ccccaccacbbacbabcbbcccacababbbbccabacaaaacbbaababa", "cbcbcbbbacab", "ccccbcbabaccbbcbbcab", "acabacccbccacaaacabaabab", "cccbbaaabbabcabbccac", "bbcccbbcccababacbaccabccba", "bacb", "cbbcbabcccbaaacaababcbcbabbbcaacca", "bcaccabccacccc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 12459;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> label = {"zjkuoxkfjanxacwfwhkqernwkyxbmizwszsatgwgfyknwca", "n", "hjpvvvqpgpkyzznruaijtpankhndwywrk", "iljnylprksyikwxzyxgzdbpsp", "cesnnvnmg", "yduizuarouezjdmghmyr", "mldbsfnhjxxaqnwzkcjplvl", "jnztdvxrymsouvcjampffvw", "ovdmwabosmbwvzotgtzidzwdbblinpiahveb", "pubrittfycwzasdcttqjppigkdav", "sticge", "kwieclegzsnkqfgujxunncqfvoifldc", "p", "ltrjzbztjslgihs", "bahpugfahsehfcoqncoa", "shnuoocadthaaqcqmxfciqnvtifbzjz", "ndabhm", "qktxqbxnznfeygxyuszlxccfnwsyaqncytlfogwad", "awrkjvvwrzgytqdfmpnhxtaoocxodbvvqvw", "zzobcveaeogsyvgquvdzzumropqhb", "jbpfkttzlwfqbxgmwybpyrq", "ytgoinlkvhtldj", "vkxjcqqmrcutgxlbervltshvgvvefcqnqhyiynevwmqlf", "hazjxypqwbiusisleqfqmusfyiobqbrutkihyorhvzzpukrwnt", "bxykdypdlttamgjnrqacpqazeoiuebumezqisuzp", "hjbkd", "lepbecyvbkcffrqypyudwvbxewfqbskssvvoqyt", "bikyjfdc", "bqfvknisvjielesy", "igpadgtot", "d", "heusnaljbwnhfsfndljncnktzgpyosayxfjnmwlqnofdnl", "kipsrhkdpduflhnvqfayvpqnswlig", "kjpedhqpypbodhjrpiurvtexxvcvapldcztsmix", "s", "fjhtuiupepmjbtzykifvloyoweompqqkzymieiqbnnn", "tilciugydaggoscyjydbwuyzihxeklxotntjbygfhicczkm", "xfgcfguzlrchs", "ocdwhhzsswbxprqpnviekggogyvbfqd", "udiakaomfwjuhrqiqk", "wblpefjfeeqceafcbze", "mvxvheaefidczwjglvexqyo", "ewdtoyiurbsrfjtdjslqexqhlnvvhdibvl", "okmp", "jvnf", "o", "crllmshylwgdbsdkasvcqgyrtwaadwmlolappnboi", "yblyzjxqxrwajrqmsfrxqjjyynffb", "ldfbkmvjmfj", "cthucqnw"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 72731;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> label = {"txds", "yvmpjr", "feygdqwbkbghwadsziweakbzuqwrpoxobjdjjwbvfsf", "zcqy", "cpxdahizzujjmmnowyapxufgqlwqzoec", "oexzmiih", "ometcqphmiatmpavonigieyscbpjdeay", "gywdcoolultchzpx", "zuwqrjbmawjpdrtfcfukxonabhinkpupnggsd", "aknrqfsbhqczugkyomfrfmmcgeustgqwjfa", "zwtyduqeqzhqrqubscyjm", "vceuicphtypqkhtujtdrwttiobanwecyatlgwfocd", "xfhv", "inxmz", "qjmtkjatutdllthdbrpddxjydnhzxfthdqhvxwioxbnqvlxgw", "yomptbynqpvljaephsqrxnilfisywxachyjxadkdqqvs", "uomaynlpndpgteczbtsyiypahdbinlszxcvslxwqhcasxgkf", "ttupuomoyvizjhesteieos", "sgwwgkzcwzryxhnpuifpggzsgmlujazybvywqbkqkda", "jongatxroxmihrmnsxfgzgcplgy", "bttyyq", "fnnmgysodkorfd", "gqjrssvubkifpewrgtosruhecllgdu", "kcrpmpzpmemoknlvpijfn", "lmzlwenuukqdbbfasaqodacvdxyjwrqvh", "ccmh", "brhbkiwrbwwyqvmfdxjxqqga", "uablvmpkwirlrwhbxyhhdfqwazuqhiajopvzjx", "mmlrbdwvp", "rivcsfuckm", "f", "ljc", "nowxtkulppcdakoyswzjrvwaidxleyfxryoxaeqjxgy", "bxclejg", "imnrgecxvskynvzntjebptwlpmivfluhrv", "cclhpwwmctvnchkbyfifdpnllrulwenvfdxqntu", "rnuvjzmldawreelxievqqsicxbxzpkmrwhm", "hairwogfeqwhetxnrvnibwgaweqeimjdhlucwgatjxmiwcrbvm", "apmoa", "ozmibulrozvjnk", "wemfdsxnvyndbzrlnokpynfajmkh", "tjkdszghmlh", "anvhwmfbgxkpuymtwonzbcnva", "qnkmuhn", "ujrctpmlxvyvm", "zpctunhogrohrwvevrlwuxsqudfjqnkvclzyolnktym"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 71426;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> label = {"fsrteibykynwtvrdztghbcksgluykvjgpiikvdoziwcbix", "kbectcizzyctxqvqhvm", "izcgjxeijfeddqcbjpnnvujlznu", "wyfmryphdwesrlmoerexsjcianrdzn", "hoexxjgawbeouvhroxtqrjmjhcdwejxbwidvslwostmk", "xvggtuofdvdhmbhxjzmgebot", "p", "fotxpasdff", "xg", "pesvipwzmyy", "lbyxwcmhdvutewcyfemagj", "kbeiogpbxw", "hfsbsjeqqokxgizbxwlrwwfwzhewyobzsnakeec", "xrajuaroncqujirnwfiyoednotzzsunk", "xxttdehimkn", "mojpjkylrinzeumjuhoulhbtbfvjspbbinevflw", "dsvslsymkqrrrxgniurblfwkqsxbgqndqibdjgsoxrm", "qrvdxtfcewgihslkymvgwkpqiqgcculmnkranxvctjakevwbx", "dwhddxlqqwltgplzdslet", "vpkyzppnhgefkfezsjahbtzeoklijzlxxnedvlbnmfwp", "gccormeavcdeqktsbztgueigw", "uxasbdvbbmpamfmfzmcaxxgaihzx", "oqgmjldeodssbbxvxonndzwadwnqiu", "mefpkhwkesymteufpeltdnjirkcmn", "wcfprxymfkjc", "xslsptdisxwudoonvdpmqvfo", "xzc", "riv", "jcimxoygkwen", "wlwwcuhvrhtwjkspkojarlbfvnlmjqxqnrsnczzcho", "lwrxjxnbpncgbzrfhpyrtwgatndpraenciijco", "fiezcsfbqqfdmsicdqwwnidayfyphscmokyudbixmsacj", "zwepqmebthoepbspljpddwmzuwxrrsqhfgtrxnbufdtuygi", "sssyaipvuegatekvsjqtcaynxhmgnsphcumloi", "xpbkuypcvonsigrdrcdztezrxnjnmyjqnfkgatpkw", "cljgwiomzwbrdfvthfypdyfgpiwephqbudmjwkhloq", "tiyysfvglnlecpuosvlhjaziiqtrwuxvbyq", "bscqjt", "temrqueyvrrxfepntfrrdumnwztsizzzrty", "sbuxazavdstld", "wzcegngfahamvqarhvgneuddzgrdarzywqkpt", "xmxkrarstpm", "qeluqvlatwvazjylsjxsmzpfszppifofnp", "gasekzochqrchorxxggiuzzzgsdiojkztgznfsqdcyticrs", "zadxhoogknlecmzxafuujeqfrzighhbpeegsalpubnefmw", "jlllqwvjzcfrpdbjyrckqtnsik", "ltzrjx"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 87376;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> label = {"utrgwvkoxrpsxtewwtrtfrzdlfen", "teijwbdf", "tadaaqjg", "izklkzfwsrxynujzafqocyufhiydmpxtz", "qrixmjgmazptyrribptcavqklvjqwiiljq", "vvhrrmiewbaeiemtlhjabfathhqithgpteibac", "kfyccgjwbtsbq", "ylenmhsetymuvjscmrwjgnslwllhhftp", "pvnegscfwskqqsaxrpdzlltuvbuc", "yvevusehwlnnowl", "sqyibbrkexgonmwglkwyzjenmuvmaaravx", "sqraofjrrbotcotwtddygronhjcjoxjblfrjei", "lf", "mlpusdecvnektlaqeftbgdaclykbpvegcgkwbwhfvaqdpn", "mjamkmetgwxgdybrwqyh", "jowhigidtlweulvzytvoitsnsteoadvoxgdnzaaylqneitkai", "qnajkfmnjolwwbxtprwhtzfpgkabpnwtiemoesqtvfig", "dc", "fvqzfkpglijuiwjjrfgsemdajwgqpx", "ubxvqhlhypvegyuvwdi", "xavyc", "gmugrwcuvrp", "tggjulqmwwldaevgxawuwhnxsdmttylicnhxkpbyqrmrhnt", "apcnndmqju", "crxlcdxfghaczpbseyzrvfopdolaypzmhbckd", "azgepizfyyoxavbxdmtyesnhtjtxqyfapmjwzlaywsmvfld", "satphuvlxkucjr", "idlezkblywoaeqqnf", "hskqvdzuxyvvt", "ypkpsnolquelctutcomhwyzajycgjvaglnazaykyvjy", "bhtrnafwmkbsbbo", "gysxf", "mvudgywbzthrwailcz", "zhzmh", "bgneicyjhpuxuhvzbxmuawmrkulwcbs", "ceveglllmihbughprweqnttqdphfgpaofoiwoggijqfqhva", "wk", "ralvavyjazxscvo", "zxklntspwvckxnsmwiiwzmxcbbrc", "yjvyxsf", "onxjkqdflxiwhddphbptnqyxks", "uolvmfaqqghrrdzujqkccskrg", "teiboiqrwozpsyrwfmkdknjhjjbznewmbxbvece", "jaxzqswwypncozdyumgrbnkcjqbglqqwgsufgtetcqmlxcz", "oeiqlqcylufchvrgvzgizbojzsch", "xopbvdaxznqikiondeshvwhpwpwnckhhpkczzxvoyam", "ghy"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 76248;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> label = {"bdbcabcadadbbcdccbbbdaabaaadcbcddaddcacb", "dbdaddcdbddaabadacbddabcabaadacacbddaa", "cdcdccacadbadc", "bcbcaaacbbddddabaaaaacaadbccb", "bddcccadccbdabcadccbdabcbcacbacdacdccbdacdbdbcbadc", "ddccdaabdbaabbdcbcbbacbadcbdabbbbcccccaadba", "bccdddabbbbccadabcadbcdbacabccbab", "ddbdcabdccddcbacabdcbbaab", "dbdaddcd", "bdaacbdbcabdddacaacbaaccabaddcadabdbcaababbc", "baddaacbbadddcbbdcbccabcdbdccbdb", "aba", "dbbcdaacdd", "dbbccccabbdbbddcbacad", "bbaacddaacdcccdbaadbddbdbcb", "ddaccbbbabacadbdaccabadb", "aadcbbbdabbccaddbdabbdcdabbabddbd", "cdbdaadccddabaccaadbcddddbdbadcacaaa", "acbc", "bbcbc", "dbdccabbcaaadadcaadcda", "aadddacbabdcdacacbbcddacaabcccbcadbbadbcdb", "aaadcbbdabccabcdccbdadabcbbcabca", "bacbabcbadaabcbcbaddabadbbb", "bcdadcbcaaccbbbabccbdcdbaacdccc", "abaacdbcbdadbdcaadbbacccdd", "cbbcabcdcbbccddcacdcabca", "bdcdbcacaccdaddbbbaaddc", "cdc", "accbdaaaaaabbbdccaadbcdabcb", "ccdadaadaabdbabdadbcabcadccbdaabaddbadaacbdaddb", "acbcbcdcbbbd", "cabccccbcacdbbacbdabbdcdccadbddd", "acaabdadabdbbabbaacd", "adcdbbbaababdacacbddacbadadbcdcbbb", "cbdbdbdaacadccbccacbcccaabdadcaaaadca", "cbcbabdabcbcbdcdcbbdbabbaabac", "ddaaaddacccbddbdacbbcbcdbabcdbadbbadcccaba", "bcbadabccbcacaaccddcbdbbabacabacc", "cbdbbdbdbccbcdaaddadbbaadbdacdbcacbdcbbdccda", "b", "bbbddddaaabbcccdcaaacadbccacbacaabbbbaa", "bacddbddddcacbaaacbaddddcadacdabcaba", "dbdcbbbdbaabadccacddaabcbd", "abbdadabcbdaaaadcc", "dbddbdcbaadbddaadbddccbaccccbca"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 79955;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> label = {"baabcabbbbcbbaabbcabbbcbaccabbccbabccaaabba", "bbcacbbccaacabcaccbbbbbcab", "abaabacbbcacccccacaababa", "bbbabcabaaacbcaccabca", "acbbaccc", "bbccbaacbcabbabcaacbbaaaacbcabbbccccbcbcbacbac", "babbccabcccbbbacacaaabcac", "babacbcabacaabcbccaabc", "acbbbac", "babbaccabcababbcbccaccccbacbcbabccbaaaac", "ccbcacabccacaacabaaabacabbccbca", "b", "b", "cccbcabaaabacaacbbaacacbacbaccacc", "aabcbcabacabbbbacbabccacbbbcac", "cbbbcccacbccbbcbccabbbcaccabcccbaccaaaaabcbacc", "bbaacaabbcbcbaaaaaacaaa", "ccaacacbccbbccaacbccabacabca", "cbabcaaccccacabababaccab", "bbcacbbcacbcbcbbabbcabaababbb", "cbcaaacabacaaaccbcbcbc", "ccbbacaabcbcbbacacabcbabacabaccacbbbbbacaccaabbcb", "ba", "bcbaabcacbbbccabcccabcabccbacbbbcbcaaaba", "ba", "bcca", "cbbacabacacacbabaccccccbacb", "bbcacababaaaccbcbabccaacccbbbacabbacac", "aaacaccacccacaabbabcbcbaabaababbaca", "aacaaaababbcababacbccaacbcbabbaaaa", "ccacabccacbcbb", "ccbbacaabbc", "cbacaabaccbabaccbaacabcaabababacaaabb", "caccbbacbbcaccaacabccb", "aaccaabbaabaabac", "babcaacacccabcbbbcbaacccbbaaaaccaacccccacaacabccbc", "acbaaaabbccbacacbbaccbbabbabbcacbaaca", "caacabca", "cbabbbbbaaacccacbcaccabcacaaccabccbabca", "caabbca", "bccbccccbbcccccbcbbacbcccabcacaaccbacccac", "caabcbccccbcacbaabcaaabacbabbcbcccccbbbb", "cbcacaccccbcbacabcbccabbcabacabaabcaaabcccc", "babccbbaacbababccccb", "acaaa", "bbbbbcabbaacbacbbcabbabbab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 76040;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> label = {"bcaaccaccbabcbacbaaaccababcaaaccabbaccccba", "aaabccaabaaaaacbabbcbbccbbbacabcabaacbaacabc", "babcabcccbbcccaacbbaabcaca", "bccacc", "cbb", "acabcbc", "bbccacbbcabbcbbaacccccccaca", "bcaaabbbcaaabbccbabcaaccaaacbbbcbbbabb", "bccbcababcaacabcaa", "aaababbb", "cbccbbbaabcbbbcaccbacbaccbccacbbabbcbcbabb", "cabacacabbbba", "aaabcccccabaacaca", "cbccbcacabaaaacabccccacbcacacbccbba", "acbacaababbccbcbbcbabaaccaacccaccacabaab", "aacbbaababaaabaaaabbaccabccacbbbbcc", "baabbccaacacababaacaaabbaccbcaccbcccabbbaccbbbc", "aacbcbaccabcbaccbacab", "acaaaaccabccbbacbbababbbbbaacbcbcbc", "acaaacccbbccbcbcaababcaaca", "aabacababaaabbbaacbaccaba", "baccbaaaabaaabaaccacccac", "bacabcbabaaccccabcbcbbca", "aaaccbbaccabbbcbcccbbbbbaccaaacaaacbaaaaccacbacc", "cccbbbacbcc", "baacccbabcb", "baa", "caabbacaacbaabbbbabbccbcabcaaabacbcc", "ababbcaaacbabbaaccacaaabbabcccbaaabbaca", "cbbcccabbbaacaabccbcbbaabccbb", "cabbc", "acaaacccabbacababaacaacacacbbbbbcabbcbbcbcbbacb", "abbbcbbacababcabaacacbabacbccbabaabbc", "cccbc", "acbcaaaaacabcabaacaaba", "bbacaacccbcabcbabcaabcaacabcaaccbbacbaaccc", "abacaabcccccaacbacccbbcccbcbbcbbc", "aaabccaaabcbacbcaaabcbaabaccbaba", "bbaabbbbcabcbcbccbabbabaccbbbaaacabc", "ccbacbcbc", "aacaccbabaabacababbabbcacacbcbacbcaabcacccacc", "bcbacbcccbccaabbbccb", "abacbbbbbccbcbbcbccaaccabccbabbcc", "cbccacabbbbcabbbbbbabbbabcabcacaaaa", "bccbabaaacacbbaccccbbbbababbbbbc", "abcaababaacaacbccaacbbcbaababbaccacccaca"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 80954;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> label = {"bbabbbbbbaaaabababaabbbababaaaaabbabbbabaaabbbbaba", "abbbbbbaaaabaabbbaaaaabbaabbbaaabbaaabbaabbbbababa", "babbbabbbaababbabaabbbaabbabbbbbabbabbabaabbabbbba", "aaabbaaababbbabbbbababbbaaaabaababbbaababaabababab", "aaaaabaaabaabababbbaabbbabbbabaababbaaabbaababbabb", "baabbbaaaaabababbabaaabbbbbaaabbbabbbaabbbabaaaaaa", "bbabaaaaabbbbbaabbbbaaabbbabbaabaababaabbababbbaba", "bbaabbabbbabaaabaaaaaaabbbaaabaababbbbbbbbaabbbbaa", "aabaabbbbaabaabbabbaaababbbbbbbbbbbaababaaaabaabaa", "babbbbbabababbaaabbbbbbbabbbbbbababababbbbabbbabab", "aaaaaabbbbabbbababbbabaaababbbabaabababbbabaaaabaa", "abbaababaaaabbbbbbaababbbaabbaabababaaabbbbaabaabb", "bbaabbababbbbabababababababbbbabaaaabbbbababbbaaba", "babaabbbbaabbababbbaabbababbbbbbbbbbbbbbbbaaabbbab", "babaabaabaabbabbaaabbbbbaaaaabbbaabbabaaaaabbabbba", "ababaaaabaaaabaaaaaabaabaabbabbabababbabbaababaaba", "bbaababaababbbbbaababbbbababbbabbabbabbbbbaaaaabab", "bbabbbaababaaaabbaaabbbbabaabbaabbbbbbaabbbbabbbba", "aabbaaaabbbbaabbbaaaababaaaaaaaaabaaaaabaaabaaaaba", "aaaabbbaaabbabaabaaabbababbaabbbbbbabbbbbabbaabbab", "aabababaabbabbbbbaabbaabbababbbabbbababaaabbaaaaab", "baabbaaaabbaaabbbbbbaabbaaaaababbaaaabbbabbabbbaba", "abbbaaabbbbbabaabbaaabbabaabaabbabaabaaaaabaabaaaa", "bbbbbaaaabbaababbbbbaabbbaababbbaabaabbbaaabbbaaab", "aaaabaabbababbabaaaaababaaabbbaaababbbbaaaabbabaab", "aabbabbabbababaabababbaaabbaaabbabbbabaaababbbaaaa", "bbbaabbabaabbaaaaaaabbabbbaaabababaaabababbaaaabab", "baabbaabaabaaabbabbabaaaaaaabbaaabaabaababaaabbbba", "bbbaabbbabaaabababaabbbbaabbbaabbaababaababbaabaaa", "bbbaabbabbaaabbaabaabbbaabbababbbbabbbaabbaaaabbba", "abaaaabababaaaabbbbaaaaaaababbabbabaabaabaaabaabaa", "bbbbaabbbbbbaabaababaaabbbbbabbababbabbaabbabaaabb", "aabbbaaaaaabbaaabaabbbbbabaabbaabbbbababaaabaaaaab", "aaaababbaaaabbbbbaaaaaababbaababbaabbaabbabbabaaaa", "baaaabaaabaaaababaabbbbbababaaabbabbaababbabababab", "abbaabbabaabbbbbaaabaababbbbbbabbbabaaaaabbabbbbba", "baababbaabbbabbabbbaaaabbbbbbabbbaaababbbabbbabaab", "baaaabaabbabbbbaabbbbbabababaaaabaabbbaaabbbbaabba", "bababbaabbbbbbaaaabbbbbbbabbbbaabbabbaabbaaaaabaab", "abbbbbbabaaababbaaaabbabbbbabbbbbbabbaaabbaaaababa", "abbaabbbaaabbbbbaaaaaabaaaababbaabbabaaaaabaaabaab", "baaaaaaabbabbbbabaababbabbbbbbabbaabaabaababaabaaa", "bbabaababbbababbbbbabbbbabaaabaaaababababaaabaabaa", "baabaaabababbbbbbabbaabaaabaababbbbaaaabaaabaabaaa", "bbaaabababbabaabaaaabbbaaaaaababbabbaabababbbabaaa", "bababbbabaaabababababbaaabbbabaabbbbbaaaaabaababbb", "babaabbabbbaaaabbbaabbbaabbabbbaababbabbbaaaaabbbb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 228881;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> label = {"baababaaabbbabbbabababbaabaaaaaaababbabaabbbbbbbba", "abbaaaaabaabaaabaaaaabaaaabbaabbabababaabbbbbababb", "abaabbabbbaaabbbbbaaaababbabaabbbabbaabababbbbbbab", "babaabbaabbaaabaabbaabaabbbbabaaaaaabbbabbaabaaabb", "bbaababababbaaaaababbabaaabbaabbaaabaaaabbbbaaabab", "bbaaaabaaababbbaabbaaaabaaaaaabbabbaaaaaaaabbbbabb", "bbaaaaaaabbabbbbaaabbabbababababbababbaabbaaabbaaa", "aabababababbbaabbababbbbababaaaabaabbbbbbababaaabb", "abbaaaaabaababbbbbabbaabaababbabbbaabbbababaabbaab", "bbbbabbabbbbbabbbbaaabaaabbababaabaaabbbbbaabbbbaa", "baabbaababbabbbabaaabaabbaababaabaababbaaaaaaabbbb", "abbbababaaabababaaabaabbbabbbbababaababbbabaaababa", "aaaabbaaaabbabbaababaaababbbbbbbaaabbaabaabbaabbaa", "aabaababaabbaaaabbabaaaabaaabbabbbabbbabaabbaaaaab", "abbbbbbbabbbbaabaaaaaaabbbaabbaababaabaabbaaababbb", "abaaaaabababaaaaaaababbaababbaabbbabaababababaabbb", "baaababbbbbbabaabbbbababaabaaaababaaaaaaabbbbaaaab", "babbbaabbbbababbababbbbaaabaaababaabbababbbaabbbaa", "bbbbbbbabbababaabbaabbbabbbabbbaaaaaabaaaaaaabaaba", "bbaabbbbbbbaabaaaabaaaaababbbaaabbbbbaabbaababbbbb", "aabbbbabbaaabaaabaaabaaaabaabaaaaabbbababbaabbbbbb", "babbbbbbbbaaabbabbbbbabbaaabaabbababaaabbbaabbabbb", "aabaaabaababbbbabaababbbbbabbaaabaaaaabababbbbabba", "bbbaaaaabbabaabbaabbabaaabbbaaaabbbabbabaabbbabbba", "babbbbaabababbbaabbbbbbbbbaaaaaaabaaaaabbbbaabbaab", "aababbaaaabbbaabaaababaabababaaaabbbbbbabaababbaaa", "abaababbbaaabbbbabbbbbbbbbabbaabbbbbabbaabbbbaaaba", "bbabaabaabaaabbbbaabaabbbbbbbbababbababbbbababbaaa", "aaaaabaabbbbaaaababaaabababbbabbbaaaaaabbaabbbbaaa", "bbaabaaababbababbbaaabbaaaaabbbaabbbabbbaabbbbbbab", "babbaabbaabbabbbbaaabababbaababaaaabbbabaaaaababaa", "abbbbbbababbbaabbaabbaabaaabaaabaaaababbbbaaabbbaa", "baaaababbabbabbabbbbbbaaabbababbaaabbbabbbabbbbaab", "bababaaabababaababaaaaaaababaaabbbaaaaaabaaabbaaab", "aaabbbababbbbbbabaaabbabaabbbbbbbbaaaababaabbaaabb", "bbabbbabbabbbaabbabbaaaababbbaaabaaaaabababbbababa", "babbaaabbbbabaabbbababbbabbaabbaababababaabbababab", "aabbbbabbaaabbbbbbabaaaabbababababbbabbaabbbabaaab", "baabbaaabbbaabaaaabaabbbabbabaababaaabbbababbbabaa", "bbbbababbaabbbabaabaaabaabbaabbbaabbabbaabbabaaaaa", "baaaababbbabbbabbbbaaaabaaaaabbaaabbbbaabbababaaaa", "abbaabbabababbaabaabbbaabbbabaabaababbbbabbbbabbba", "baaabaaabbbbababbbabababaabaaaabaaabaaaababbbaabaa", "aaabbbbababbaaabbaabbabbabbbaaabaaaaabababaabbabba", "bbaabbabbabbabaabbbbaabbbbbabaaaababbbbbabaabbabba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 218788;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> label = {"aaabaaaaaaaaaabbaabaaabbabbababbabaaabbabbaaabbaaa", "bbaaaabbabbaaabbbabbbaabaabbaababababaabbbabbbaaba", "bbbbababbabbbaabaaababababbbaaababbbbaaaaabbaabbba", "aabaabbaaabaaabbaabbbbabaabbabbabbbbabaabbaaabaaab", "aababbaabbbabbababbbbbbbababbaaabababbbbaaabbababa", "babaaaaaababbbbbbbababaabaaabbbabbbaaaaaabbabbabba", "aaaaababbbbbabbbabaabbabbaaabbaaaaababaaabbbbabaaa", "aaabbabababbabaabbbbbaabbaaaaabbaabbabbbababbbbaba", "abaabbbaabaabbabbaaaababbbbaaaabababaaabbbabaaaaab", "babbaaabbbabababbaaabbabaabaaabbaaababaaaabbababab", "bbababbaabbbbababbaaababbbababbbaaaababbbabbbabbbb", "bbaabbbaabbaaabaabaaaababbaaaaaabbababbabaaaabaaab", "babaabbbaaaaababaabaaaabbbbbabbabbbbaaabbbabaabbbb", "aaabbaabbbaaabbbabbbbbbbbabbbabaaaabbaaaaabaabbbab", "aaabbabbababbbabbbabaabbaaaaabaabaabbbbbbbbaabaabb", "aaababaaaabaaabbbabbbbabbbabaabaaaaaabaabaabbbbbab", "aabaaabaabbaaaaaaaababaabaababbbbaaaabaabaabbababa", "aabbbaaabaaabbbbbbbaabaabaabaabbbaabbbabababbaaaab", "baababaaabaaaaabaaaaaabbbbbaaaabbababbabbbbbabbbba", "bbbbbbbbabbabbbbaaabbaaaaaabaabbabbbabbaaaaabaaabb", "aaabbbaaaabbaabbaaababbbbaaabbbbaabbaababaaaabbabb", "bbbaaaababbbaaaababaaabaaaabbbabbbababbababbabaaaa", "aaaababaaabaaaaabbaabbbbbbaabbbbbbaabaabaabbaaabbb", "abaaabaababbbbbbabbaaabaaabababbbbbabbabbbbbaaaaaa", "abbbaaaabaabbaaabbbbabaabaabaababbabbaabbbaabbabba", "aabbabbbaabbaaaabaababbbababbaaabbbabbaaaababbbaab", "aababbaaaaaabaabaaaaaaabababbbabbbbabbaabbabababab", "aaaaabbabbabbaaabbabaaaaabbabbabbbbabbaabaabaaaabb", "babaabbaaaaaabbabbbaabbabaababbaababaaababbabbaaaa", "babbbababbabbabbababaabbbababbaabbabaabaaabbbbaaab", "bbabbbbbbbbaabaaaaaabbabbbaaabababbaaaabbbabbbaaab", "baaaaabaabbbbbbbaaaaaababbaaaababbbbbabbbaabbbbaab", "ababaabbbababaaabababbaaababaaabbaababaababbbaaaab", "aaaabbbbaabaaaabbbaabbaabaaaaaaabbabaaabbabbabbbba", "aaaaaabbbbbbaaabaaabbbaaabbbabababaaaaabbababbaaab", "abbabababbaabbabbaaabbbbbaaabbbaaabaaaabaaababbbab", "aaaaaaaabaaaaaababbabbbbbbaababbbbaabbbabaaaaababa", "bababababaaaaaabaabababababbbbabaaabaaaabaabababaa", "babaaabbaabababbbbbbbababbaaabbaabaabbaaaaabbababb", "aabbbaaaabbbbbaabbbababaabbabaaaaabaabbbabbbbbbaab", "bbbbbabaaaaaaaaaaaabababbaabbbaaabaaabbbbaabbbaaba", "bbbabaababbbbbbbabaaaabbababbabaabaabbababbabababb", "bbaabababbbbabbbbababbabaabababbbaabbbbbababbabbab", "bbaaaabbabbaaabbbaabbbaaaaabababaabbbabaaaabbabaab", "bbaabbabababbabaaaaaabbabababaaaaaababababaabbaabb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 218804;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> label = {"q", "aabaabbaaabaaabbaabbbbabaabbabbabbbbabaabbaaabaaab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 2501;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> label = {"a", "aabaabbaaabaaabbaabbbbabaabbabbabbbbabaabbaaabaaab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> label = {"ccbcbccacabaaa", "baacacbbbabaac", "abacacabcccccaacccbc", "aabcccccbcbbcabacba", "aacbabbaabcaaccab", "bbcbaacbccaabacbbb", "abcbbabacacbc", "bbbbbababbcc", "caabcbcbbbccba", "bcccaaabacbb", "acbbbacbbaaa", "bccaccaacbcbca", "acbcabccbbcacbacaba", "abbcbaabca", "cabcbccabacbb", "baacaacacbbc", "caaaccaacac", "baaaababcaab", "abacabcbab", "babcaccaababa", "aaabbbbabbcbbacbbaab", "caccaaccccba", "abbbacbbbcaca", "ccbcbbbcbcac", "bbcbcaabaacccabcccba", "acaabaccbbbcb", "bbcacbaabbac", "abacbbcaccabbaacc", "cbcabcbbaabbbaabbac", "ccccccbabccccccccca", "abccbacbcaaccc", "bbbbaaabcbbac", "bbaabbcbbabaacc", "bccabbbbababaccaac", "cbcacbaacaa", "bcacbaaacababaacc", "acccbcaaaccacb", "ccabaacbbccb", "bbaccabaabbbab", "baccaabaabacbcaacbca", "cbaccbababaacabbaba", "bbacaacccbcb", "cacccaabaacbba", "bcbcacaccbb", "aabcbccacba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 18961;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> label = {"bcbaacabcbbbbba", "bccccaccabab", "baacbbaccbbc", "aaccaccbba", "ccaacbcbccbcac", "bbccbbcbcaa", "aabccaabaccccaacaa", "bbacaabcbcbbba", "ccbcacbbbccbbaba", "acabbcbccb", "abcaabcaacaac", "cccaabbcacabbaa", "bbaacbcbbacbaa", "ccaacabcbbbcaabcabac", "bcbaacabbb", "aaabccabbaaabcccbbcb", "cbbaabababcc", "abccaacaacccaacbbc", "abbcbaabccbcc", "bbacbaaccbbacbcabcab", "bcbabcbccbcbcba", "bcbbbcbacccbbcababca", "bcabbccbbacabbbcbb", "cbcbccbcaccbba", "cbccababaa", "bababbbbccacc", "bbccaabacaccabcb", "cacaccbcbccbbbbcbcc", "acaabcbbaaba", "abccacacbaab", "babcbbcabbcbaab", "bbaccbbaacaabcaaaa", "bcababacabbabccbaa", "bcacbccbbc", "bcbbbacaabba", "bbaabbcccccbabbabaac", "babbccbabcaa", "ccabbbbcaacba", "cabcaaabbcabac", "bccccabccacbc", "bbacccbcacacbbcacbca", "aabaccbabacab", "cbbcccbabbacaccb", "bbbcaacbbabbaaabaa", "bbacabbcababbacaa", "cccababcccbc", "aaaacacbbc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20194;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> label = {"abbccbbcccb", "cbbcbcbaccca", "abaaabbcaaccccbabac", "bbcbaccbccbababaa", "abaabcccacbacbbb", "cbbcbaacabbccba", "cbabaabacbcbbaca", "abcccababbacabbcbaa", "acbbbabcbbbbbcbaacca", "ccbbbaccbbccbca", "cbabccacbc", "aaaabbccbbc", "baccaaacbcbaaaab", "cabcbcacccaccbbcbb", "bcbbaccacabcabb", "aabbbabababbbbaaccac", "aaaabcbcbb", "aaaccaccccbac", "accbcaaabccbb", "cbbabbaaaabbbacbbcaa", "bcbcccaaabcabbcbccaa", "baaabccbbacbccb", "bccbcbbacbaaab", "aaacbbcaabcabacbc", "bcabaacbbccacccc", "baabbbaaccacacb", "ccaabacbcaa", "aaccabcacbcabcb", "abcabcacaaabbc", "ccbccccbaaacbaacaacc", "aacbaccbbcbaccaabc", "acaaabccccccb", "cbbcbbacababacbacbb", "bcabacaabbbbbc", "bccabacabbb", "aacbaaaaaabbacccaaab", "ccbaaacbbbabcbbb", "abbcccbbabaccbaac", "bcbacbcabbcabacaaa", "cbcabaccacbcbbbcaa", "abacaababacacababac", "aabbaccacabacbbbcbbb", "bcbcacbacabcb", "ccbcbcaaabbacacbab", "aacaabbabcbacc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 22625;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> label = {"ccccccbccb", "acbcabbcbcabaabca", "caaabccacabacbcbaaca", "cabcabbcccaccaab", "accbcbcaabcbacbcbabb", "baaaaaabbbbcacb", "bccbbbaacbaccaabbaaa", "cbbbacabca", "cbcaacbbbabacc", "cacaacbbabbbcaa", "baaabcaacabccbbab", "cccccaacaabaabaabccc", "bcbcbbabbbcbabbaaacc", "baacbcccaabaa", "cbacbbcacabbbcb", "bacaaccbacaca", "bacbbacabbabbaaccba", "aacaccababbacb", "bbbabccaababbbbcabb", "acacbaaccbaaac", "acacbaacbacb", "aaabcaacbbbb", "abcacaaabcaccc", "bbbccababccaaacc", "acbcccbcbbccacbabab", "cbacccccbacba", "bcacbcbbcbcacacaac", "caccccacbbaccbcbbc", "cccaccaccccc", "ccbabcbbbc", "cbaacabbbcbaacbca", "acbcacaaacc", "bccabaabacaaaacb", "cbaacccbbcccbcccbaca", "aaccaccacbabbc", "acbaaccaaabcc", "cbcbccaabbba", "abcbbaacccbbacbbcabb", "cabbcbcaccbcaaaab", "bcccaccabaca", "cacbccacbabccabcbbac", "bbbacacbaacb", "bccacbbaaca", "bacbbcbcccbcbcb", "ccbbbbcacbbcab", "aabbbacbabbaaa", "caaccbccbaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 21829;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> label = {"bcbcccabbaacbcaccb", "abccbbcbcbc", "babbbbccccacacca", "ababcbcbaacbca", "acccbbabbaabcbaa", "bcbccccccaa", "cbbaccbabacc", "bcaccaccabaaabcaccb", "bbcbcacaacbc", "bacbbcacbccaaaca", "cbbccccccbcbbacab", "cabaacabcabcaaba", "cccaacccacaaabc", "abacbaacab", "bbcbabaccccaabac", "cacbaaabccabbacacc", "bcbabacccabcacacc", "cabaabacaaaaccac", "bccaaacaba", "cbcccacbacccbac", "abbaabbbcaaabccc", "baabbabcacbbcaac", "bcabcbcaccbbaaa", "cacccbbcbac", "bbabccbaccbbbbbcba", "bbbaacbacbccbb", "cbbcaabcccb", "abbacbbbaabca", "bcccacaaacac", "accacaabbcacc", "acabccccaccbbc", "abacbcbbcbaa", "aabbbabbcbabba", "babaaacbaabbbabacbc", "babcbcbbbb", "aaababacbac", "aaaabcaacbcaabb", "acbbaccccbcbac", "abccbbccaba", "cccbaacbacb", "baacacbabcaacacbccca", "bbcbcacababbaa", "bcabaccbcacc", "cacabaacccabc", "cccccabacaaaaacbcc", "aaabccccbaacca", "aabbbbbbbb", "abaabcbbaa", "cbababbcbaabcb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 19226;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> label = {"aababbbccb", "cbbabcabcbbbab", "babaaacbbabacb", "bcbbcaccccabaaccbba", "aabacbaabcabac", "cbcacabcbcbabb", "bbabaacbbbacbcccab", "bccbacbaaabbbbc", "ccbabcaabccbacab", "cbbcbabcaaaccbaa", "bbbbbbcaaaabab", "abaccccbbbcaacacab", "bacbcccacabba", "bbaaaacccbcbccac", "abccbcbcbaccacbbcb", "cbcabacbbbaccaccbcb", "abccbbccbaabaa", "acbcababbc", "aaabcbaccabb", "acababaaabab", "ababbabbbcc", "abcbbcaaababcb", "cccacacacaaa", "cccbaaabaccc", "abcccbbaac", "bcacaaaabbc", "babbabbaabb", "bcbcbbbaabbababbabba", "accbbaaaaac", "bccbcccacabcccabba", "ccbbbcbbab", "cccabbccbac", "cbbbbaaacbbacacbc", "caccbacabbac", "bbaaabbccacba", "ccaacacbbbcccbccab", "cbbababaacb", "cabbbbabacc", "ccbccbbacbbccccbcb", "aababababccacacabba", "accabbaccc", "acbcbbbcbacacaa", "caabaabccabcbb", "abaaaacbcaaa", "abcaccacacbbcab", "bbaaccbbbab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 18111;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> label = {"abcccbabbccb", "acbcbabbbaabaa", "baacbcbcbbbbabcbbca", "aabcccbbacacaccb", "bcababbbbcacab", "accbabbaabccc", "cbccbbcbbbaaabaca", "bcccabbabbbbb", "bacaaacbbba", "bababccbcc", "bbbbcccacccca", "bcabcabbcbcac", "aaaaaccabbcbcbbccc", "baabccabbcaababaaac", "bacabcababacacaabca", "acccacccabcaaacacac", "bbaaabcabaacbaaaca", "bacbabaaccaccbc", "abcbabbcaabcabb", "bcbbbabcbacabaab", "bbbcbbacababbc", "bbaaacbcaccbcbcab", "cacaccbcbbbb", "babacaacbbcbb", "accaaacbacaacbbabc", "abbabbbccabacbbcacca", "cacacccacbccacaa", "cbbacacacaabb", "bbacacbcccabaacbbc", "ccbababbcc", "aacababbcbbbcaabbb", "abbcbbabacbabbcccbab", "bcbccbbaacbbaabcb", "cabcaaccbcbaaabccac", "aabccccabcbbaabbcb", "aaacbbbabacacbcac", "ccbabaccbcc", "aacbbcbbabac", "cacaaaccbcabbcbc", "bcbbbcbabaacabcab", "abcccbabccacbacccbb", "acbcbaccabc", "acbccbaccabacacab", "cccababcbcc", "ccabababbcbcbca", "abcbabbcaabcbcbba", "aabacccaaccc", "abaaaacaaacaacaacab", "cbbcabaaaacbb", "acbaaccaccaabbcbb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23617;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> label = {"aababbacbccb", "cbbcabccccaacbab", "babcaaabbcccacab", "bcbacabaaaca", "caccccbabbbaabaaba", "aababbaccaccbb", "cbbcbbbaaccabcbabbcc", "bccbbbccaabbbbcbbcb", "cbcabaabccaaaabbabca", "bcaabcabcbcab", "bcbbabaaaaab", "aacaabcaaaccbabbc", "bacabbbabbacbc", "bbccacccabbacaccba", "aabcccbacb", "aaabaababbaabacc", "cbbcabbbbbacbca", "cabbccabbaabcccaab", "bbabacaabacb", "acabbcaccaccaccaa", "cbcbabccccaabbbacc", "bbabccabaaaabbbbcbbc", "acbacbcbbbcabccbca", "bccabbcaacacccabac", "cacababacccaccaaaba", "cbacbaaacaaabbbcacb", "caaccaacacbbbabac", "abbacccccccccb", "aaacbabcabbbb", "aaababaabccaaaaabaa", "abbabbbcaccb", "caacccbccabccaccabca", "ccaacccbccabcbacaaab", "aabaabacbcbbcc", "bccaaaabcbcabcc", "aabbabaacac", "accabaacba", "cbbcbcbacab", "babbcabbaa", "bababcccccbb", "caabccacbaabb", "bbcbabbcbcc", "acbcccbccabccccbc", "cbbbcccabbacabbbc", "bbbcabababbbba", "ccaacbbcaacbabbcabb", "aaaaaacbac", "aacaacbcbaa", "cbaacbccbacbbbccabb", "bbcccabbabbb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23390;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> label = {"acccabcbbccc", "aacaacacbcbcaaabcba", "caaccbaccaabccaaac", "baaaacababcbaca", "baacbaabcbc", "aaabaaaaaaaaccc", "bbacacaccacbb", "bacbabaacbca", "cbabaabcacba", "cbbcbcababccacbc", "acacabcbcbbaabc", "abbcababcbca", "aabbcaaaaa", "cbbaccabbcacbbba", "ccccabaaccbcbabac", "bcaccccacbcccbbacc", "acccaacabbbbcbccacc", "cababccaabc", "bcacbbbcccc", "ccbcbaaccbaacbbcbcc", "bbbbbbcbbccc", "abbcaacababc", "acacbcbcababbcacacb", "aacaababab", "acacbaacaabcccbabc", "bbcaacbabaabca", "ccaacabbbbc", "bcabbacacbcabbcbc", "bccaacbabbbbcacbbcab", "cbababacccaacababaaa", "caaaabccca", "bbabbccccbcbcbacab", "acabcbccbc", "bbcccccccbbacb", "aabccbbcbbba", "ccbcaacabbbbccbbaab", "bbbbabccbaa", "bcaabaacccbcccabaaca", "baabbcabcbcaaacb", "bbaaaabbbacbb", "caacccbbbabbaaccbbc", "bccbbccbbaacaba", "bccccccabbcbccaaaab", "bbacababaaccabbcac", "cacbaccabbb", "cbcbabcbabacacb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20446;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> label = {"babcbbbcbabcabaccbc", "bbbabcbbcccba", "caaaaccbbaacabba", "caaaccbcaababbcabac", "cacccaccaacac", "babacbbcabaacbbb", "abbabcaacc", "cbbcabbabbb", "abbabbcbbbbc", "bcbaaacababb", "accaaccaccbaaaaba", "caabcaccaabaaa", "cababaccaab", "babcbabcbcbbbabcab", "ccccbccbbcbbbcaa", "abacbaabaa", "baaabcbacbab", "cbaccbbabbbbbbaa", "bccabbcbccbacccac", "bbbbcbbacccc", "bacabbcbacccabbabcb", "bacbcccbaaca", "ccacccbcabacabaa", "cbacbbaabb", "ccbaacacacacccaa", "aaacbccbacacb", "aaacaccbaaccbbccbbbb", "aaabbabaccbcbbb", "aabccacacbaacacbca", "ccbcbabbabc", "aabbcaaabcbccbcba", "ccbcaabacccbaaacbbb", "bccaacabbcbbabbaabab", "aabbaacacaacbbbacb", "bbbabccabbccab", "aacacbcbcc", "ccbccababcaacabaac", "baabbbbaacc", "baccacccababb", "aaacabcccbcccbccc", "aabbcabacccc", "aaabbbbabbaaababc", "cbaaaaabaaacb", "ccbbcbccbcbccaca", "cbccaaabcbc", "caabbccccbcbcacaabb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 19956;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> label = {"caccbbbabacc", "accaccaabaccbaba", "bbaabbaabbaa", "abbabbababacaccaca", "cbbbbabbcb", "bcbabcbbbacaacaab", "cbcbbbaccbcabbbaaaba", "bbacaabbbcccca", "babacacccacabcbaabba", "cacbbcaaab", "bbcbcbcaaccc", "bbbbcbcbccacca", "aabcacaccccbbcba", "aaacbbccccacbb", "acacccaccbcacaacab", "abbbccbbbcbbac", "acacaccaacbacabcaab", "caccbabcbbbba", "bbacbcabbabbbbacabcc", "aaaacbbcaccabbcab", "caacbbbbbcbbacbbccbb", "cacbaccabab", "cbbcabbcbaacbbb", "abbaabcbabaaabccccc", "cbcabbcccccbcababacc", "bcbbacabaaaacabcaaac", "aabccaccacbcca", "ccabcacbcac", "bbcbbbbcccbc", "accaccccaabaabbbbbbc", "bcbbacabbabcacbbccac", "acccbcbbcbacaccb", "acbbaabbcacccbacc", "bcccbbabccbbb", "cbacccbbcbaccacbbbb", "bcaccaaccbba", "bcbbbacbab", "acabaacaabbb", "bbcbabaabbcbb", "abccbcbbbbaab", "acbabaccabccca", "aaabcbcbcacacab", "cbcacbcaacccb", "cccaaacbaccbbabcabb", "ccbbbacaabccacbacbaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 21582;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> label = {"aaaabaaabaccbaabc", "bbbccacbcc", "ccbbbcbabbaab", "bccabababcabbbbcbbcb", "bbbababccc", "baaacbbaacaacc", "abcbccbacacbcbacabb", "cbacaccbbcabcaccacb", "cccccabaccaacccb", "bbbabbbaabcbbccccbba", "bbbccbccbacaabaa", "bccbababaacbacccccb", "bbcccabcbbbcc", "aaaabccccaacbbaabaa", "bbcabaacbccbcbaababc", "bbcacabbcacacbab", "babbccabbabb", "acbaccbbbabca", "bcbababbccacbcbacb", "baabbbbbcc", "babacbcaccbbabbbbc", "bccbbaaabbbab", "caababcccbabca", "abaccabacaaac", "abaacccccb", "cccbacabbaabaca", "abacacabccbcabc", "baacbcbacc", "bccbabccabaaccaca", "bbbbccbaab", "cbbccccbacabcbbbbaa", "bcaccacbcbc", "abbaaaccbbbccccaaba", "accacaacaaba", "bcacbbacbbcbabac", "baabaabbbbbcaaaccba", "bcccabaabbccabaac", "caccbabbbaccbbccccab", "cbcbaabaaab", "cbbbccbbbbacab", "baabaabbaca", "caaabcbccbbbbca", "babcaabbcca", "bbbbbacbca", "cbcccabaabccc", "cabbaccaacccb", "cabcaaacbbcc", "bcaaababccaaacacaa", "aabaacbcacaaaabbabcb", "bbbbcbcbababc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 22355;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> label = {"abcccaacacaabc", "bcbcbbbaabbba", "cbbbbbccabbcaaabbaaa", "abaaccccac", "caaccacbbbb", "bcbcbbacbaabcb", "cccbbccabbab", "bcacabcbabbcbac", "cccbcbbaacacacba", "bacbabcaccab", "cbccbcaaacacaaccbb", "bcbbbcccbaccacab", "bbacbcbcab", "caccacacabccabcba", "bbccccbbbcbaba", "bbbaaacaaccaabaa", "cbbacaaabba", "acaacbbcacbacccaca", "cabcabaccbaacccccca", "aabaabcbbbabcacbc", "bacabaccababccca", "cbbcaaaaab", "abaacbacbabacaba", "cacabbbcbbcaccc", "acbbccbcacbcbbbaa", "abccccbacbcbcabbac", "cbaacbbcaccbbcba", "bbaaccabbacabbcb", "cccbabaaabaabcb", "abaccacccbaaa", "cbcabcbbabacbacbbb", "cbabbcabbaabcabaacc", "caacbacaacbab", "ccaabcbcccccb", "cccabcbccaabac", "accbbcabbbccccaabbbb", "cbbabcbabab", "aacabacbaaaaa", "acabcbcabcacabba", "cbabaababca", "bcaabcbbcbacbbccbb", "aabcbcccacc", "caaccabbca", "ccbbbbcaabbcaaabccb", "abacacccabb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 19514;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> label = {"bbaacbcacbbbcbbbcbcc", "bbccbccccbaa", "bbaacaabbbcbbcccba", "acbabacbaaba", "bbbbbcbbaaaa", "acacabbaaaaacacacab", "ccabbbcbaaca", "aabccabcccaacc", "abbcaccbaabcccccccaa", "bcaccabbab", "cbbcacccac", "cacabcbabbcabac", "caccbaabbbabbaaaabc", "caabaaaacaccacb", "abbbbaccbab", "bbbbacbbbc", "caabaaaabbcbbaccaac", "caabcbccaccbcbccccab", "aacbacbaccaccacacb", "aacbbaaaabcbcc", "acbccbbcaabca", "bbaccaccbccccac", "bcbbababaabcaabccbb", "cbbbcacacbaaaabcb", "ababaccaab", "cccaaaaabbb", "acbbbcbbccbcbaabca", "bbcaaacabcbac", "acaaaaccccbbbb", "cccbacaaccaabcacbca", "aabcccbcabaccbacb", "aaacabccccbcaab", "cccababaacaccba", "cacaacabaccba", "abcbbbcbbabcbabba", "cabbccaabcccacbac", "cbccccbabcac", "cccbbcabbac", "bbccbbbacababababbca", "bcabcacabbaccbbaabcb", "baaaaabaacccbb", "bcabcaaaabac", "cabcbaccccbbbbbaaba", "cbcbbbbbbbcc", "baabcaccbbaacccbaabc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20780;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> label = {"cbccbaababbaabcca", "baababbcacbba", "ababbacbcbaccc", "bcccbcbcbabbcaacb", "cccbbccccacccaabaaac", "cacaabaabccaaaa", "cbccbcaabccccacbbba", "cbaaacabacbb", "abcaccaccb", "cacaabccab", "aacccbbabcaca", "abaabaaacccbccaaacc", "bacacacccabcabbbac", "bbcaabacaaaa", "cabcbcaacacbc", "baabababcbba", "caabbabcbacaabcab", "baccbcccab", "acabbbcbaccb", "baacbbcabcbb", "bcbccbcbbcabacbba", "abcabcbbbbcbba", "bbbacccbbaaaabbbbca", "accacbccaacacabca", "cbaaacbabbcacc", "bbbccabbabbbaaccaacc", "acbcbbcbbcac", "acbbccacaaaaacc", "cacbaacbcbb", "bbcabacaacba", "cbccabbcaccaccbcacaa", "cbacacbcaacaacbca", "acbcbbcbac", "bcacacbaaaaaaaaa", "ccbccbaccbacbcabba", "aacbbbbbcacabcccb", "bbccccbcbabc", "ccbccbcabacabbaac", "cacbacacbabccbaaac", "aabbbbcaaaccbcba", "bacbcbcacbacaba", "bccabcbccccaccbca", "aacacccacaba", "cbacbbbbabcccbbccac", "bbcaaabbaaaccc", "cccabcbacbcccab", "bcccbbabbaccacabbaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 21195;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> label = {"bababacbaabccaacc", "bbacbbbcacca", "caaccccabaabacaacc", "bbbbcaacbc", "bababbbabcabababc", "accacccababaccba", "bcabbbcbbb", "cbabbaaacaaabccccaa", "aabbaabaaaabcaacc", "ccaabaaaaabbcaca", "bcacaacaacccbbcab", "cbbaaacaaa", "aaaabaabccaacacca", "bcababababba", "bccabaccbcccacbcaaba", "babcccacbccc", "aaaccbcbaaa", "bcccbcabaac", "aacbababcccbbaabcbc", "abacbaaccaaaaacbbc", "bcbbacabcbccbcabac", "bcaacccabccb", "accacbcbbcbbbccbbca", "abbbabcbcbc", "cbcbccaababcabaabaa", "bacbabcabbca", "caabaabcbacccca", "babacabccaabcccaac", "cabbaaaaacbaaa", "abacbbbaabcbcccca", "ababacbabcbb", "cacbccaccacccaacc", "abcbbccbaccbaaa", "cbcaaccbbacbbbbccb", "cbacbaccbaabbbcabb", "bbacbcccaca", "babbabcbbbbbccbaa", "accccccabba", "acbcbccaccac", "cbaccbbacbbbbcaa", "cacaacccbabaacbcbac", "ccaaccabbacb", "cacabbcababbabaca", "bbccbbacabaa", "acbbccaabbbbbaccba", "cbbaaaccbbbbc", "cbbcaccbcccccbaaacb", "bcccaaacacaccaccaca", "bcbcccbaababbaccca", "bcbccacbbcbacaaaabb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23631;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> label = {"caaacbbabccacbcbbba", "abcbbabbaa", "aaccbaaccab", "cccabacbaabcbacbcbcc", "cbcbbbbacaaabbcacc", "bcabcccabbbcbc", "abcbbcbaba", "ccaacbacaaababab", "baacccaacabab", "bbccbcabbcaabacaabc", "bbaacccbabccbabbaab", "caaaccbaabaa", "ababacbbaacabacbb", "aabcbaccbabcaca", "acbbcbcabbacbbab", "aabcbaacba", "cccabbccbabccaaaccbb", "bbbcaacabbab", "bbbbaaaacaacb", "bcacacccbbcbcbbacabb", "bbcbcaabcaca", "cacbbccbbcbcc", "ababcacbbbaabcb", "aabaaacaacbbaaabcbab", "aabbabbbabaaaccaab", "bbabacacbbcbb", "bbbaaabbabacbac", "ccccbbcababaacbc", "bcbbbbcaccabaabc", "bbccababccab", "abbabbabbaacccbcaa", "bccabcbcaaba", "cbbbabcbcaaababc", "cccccbbbcaaccc", "abacbcaccaacaaba", "aaabccabbb", "ccbbbbacaacacbbaaabc", "abbbbabbabbacb", "aabbcabbbcbacc", "bababbbcabaabbaacbac", "bbbacbaccbc", "bacaabacbcbaa", "bbbacbbaaabbccbcb", "acbbcccacabbcab", "cacbacaccaacbbcaac"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20687;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> label = {"bbcabaacbcaa", "aaabcbccabcaacaaa", "acccbabaabb", "bcacccaaabcabb", "bbcaabcccbabbaaabbb", "aaabcbacbcbbcb", "aaaacbbcbcbccccabcba", "acbabcbcbbbba", "ccbacacabcabccc", "accbacacaccbcba", "acbcbcbbbbccba", "cbbabbbcbbcbbbacaaa", "abcbaacacccababa", "bacbbbbccbaabaccb", "ccccbabaaccccbbccbc", "aaaccbaabaabbccbcb", "ccaaabcacbbcac", "baccbbabbccbbbcabbb", "bccbbabbaaccaa", "acacacacacaccaa", "bacbbbcbcba", "accbccbabaccaccca", "ccbbbacaaacbbbccaaaa", "bbaaabacbcacbbacb", "bbbaabcaabcca", "acbcbcacbcacbc", "bcbbccaacbbccccabaca", "abaabbbaccac", "bccabbacabcccbcbaaac", "ccccbbcaaaa", "cbaaacbabaaabcb", "caacbbcaaacabbabcac", "abcabbaaac", "abccacccacba", "cbccabaabaaaabbcc", "babcaaabcccbc", "abcccbaaacccbcac", "bcacbccbbcacbbcbaab", "bccccccacabbbaccbbcb", "bbcabcbcbabccb", "abcbbbacbbbbccaaaa", "cbcbbccacaacca", "bcbababcbccbacacab", "babaabccabccaccb", "acbbabcbbcca", "acacabbbab", "babccbcccbcacbaacbb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 22760;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> label = {"cccaccccccaa", "aacbbbccca", "baacacbbcacc", "cbaabbacbc", "acabbabaacaac", "baaccabbac", "cbcccacbbcccacaab", "acaaaabbccbcbc", "ccaccacbaabcc", "cccbccbbbcbaabccaa", "cccaccabcabaccbbbba", "bbabaccaabbcbcbc", "bbccabccbbbc", "acaabacccaaac", "bacccbbccbca", "baacbcacaac", "babbbbcccc", "aaabcbcabcba", "aabbccbabcaa", "aacccbcbabccb", "aacaabbbbabbbbcc", "cabcabcacaccc", "ccacacbaaccabaaca", "bcaabbbcbbbac", "cacbbacacbbabcbc", "accacbbaabbaac", "babbcbccaaa", "acacccbabcbbb", "ccaccccaccbbabcba", "bbabbcbccbcaaac", "babbbaabbccbc", "abaccaacbcbbaccaba", "bacbaacbacabaaaba", "aacbbbabbaaacb", "aaacababcbcaaaccccca", "caabcbaababaacbaa", "bcaababccbabca", "cccccbbabaccccbcc", "baabbabcccaabaac", "baaabbcbaababca", "abcaabcbacbababa", "cbcbccbbcac", "bababababb", "accaccbacc", "cbcabaabacccacbcca"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 17641;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> label = {"baabcaacacbacac", "ccbcbcccbccbacbcacc", "abccbbcbbcbaaacbb", "baaccacbccaccb", "ccabbaacbcccacc", "caccbccababbaccbcc", "abbacbaabbbaabaabac", "ccbcbcbbba", "cbabbccbaa", "cbabbcabaca", "abbcbaaccaababa", "cbaabbbaccbb", "babaaacbcabaca", "ccbbbaabcbabbbbaaac", "abbbaccbaabacb", "bccbbbaabbaabaabac", "cbaaacccacacbcb", "aabbbbacbccacbac", "aaaabbccaccaacabc", "aacabbbbcbb", "acbabbacbaccbcbcc", "cbbaccbbcbbcbbc", "aabcaabcbabbccbbcc", "aaacccaccbbbc", "babcbaccccacbb", "bcaaabbbcaccab", "bbaccbaacbac", "bccaaccbaaaccacaaa", "ccbcaacaacc", "aaacaaaabcbab", "baabbcabbacbbb", "abacccbcaaccbbacca", "bcacacbccabcb", "cbbcbcccaacabccc", "aaabaacbbaab", "abbcbabcab", "cbcbcbbcab", "baabcabccbbcaab", "abcbbbcacacacaaaabb", "bacbcabcbbaaab", "baabaacccca", "bbcacbccbabaaac", "bccaccabaaacbccbc", "babbcbabcbc", "cbcbaacaaccbaabaabbc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 19028;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> label = {"bcccaabacb", "cabaacaacbbaaca", "bbcaacbbccccb", "abcbccccababcaab", "babcaaaabcbacccca", "caaccacaabacaaaabcac", "accbcaccbcbcc", "cbcbbabaaabbcabcc", "aacbbcbcabbac", "baacaaabcbcbbccabbb", "aacabaabcbb", "abcbbacbacabbaccc", "accaccabcaabbbabc", "cacccbbcaaa", "accabcabbccc", "ababccbabbcb", "acccaaacbbbb", "aacbcacbbcbbabacbbbc", "abaabacbcacacbca", "caaaaacaaabac", "acbabccacababccb", "babcbcabcacaabb", "aaacacacaaabbbb", "bbcaabaabccca", "cacbbbbbbbccbacaa", "baaacccaccbccaabb", "aababcabaccaacba", "accbcbcbacabcbabccac", "aacabcbcbbccaaabc", "acabcbbabc", "caaccccbabcbcbbc", "aaacaabaabbccbbaacb", "cabaabbccbccacabbc", "abbabbacbbabbbcbbc", "cabbacacccccbcacc", "caacacbaabccccca", "bbcbcccabaaac", "ccbabbbabca", "cbacaabaccbaaca", "cabcaabaabbaabccbbb", "ccbababacbac", "bbbcccabbcaabaccac", "abbcbcabcbbbcbca", "cacbbcaaaacbcba", "bccbcbabccbcc", "cccaababcbabcbca", "bcccaccacac"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 21574;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> label = {"cccbcbacaabccabcc", "bbbaaaccccacabb", "abaccacbbccb", "caccbcbccbbba", "bcabbbcbbaab", "acaccabaccaab", "bbaacbababccacaac", "cacbbcacccbbaca", "ccbaacbcbabbcacbbcaa", "bcacaacbbaccba", "cabcabbbaa", "accaacccacccacc", "ccbcbababcaacacaccc", "abacacbcaaaacbbbcbca", "caaacccbbabcaaccb", "babcacaaabacc", "aabccacaabbcab", "cbababbbbaaaaaa", "bacccacccbcaacbc", "cccbbabcabaac", "bbbacabccccaccbaaa", "cbaacbcbacbacbba", "acccaaaaaacac", "cbaabbbacabaaccbc", "cbaaabbbaccbaaabaaba", "caccabcacccaccacbacc", "ccabaababcbaaccaacc", "bbaccbbcbaaaabbccbb", "cabaccacbcacabcc", "cbaaccbabbaacb", "bbcbbbbaaa", "ccacbcbcbabbbb", "abcbbacabacbb", "bacbbabacaaaca", "acbabcbcabcca", "cbccabbacbcb", "aabaabccbbbbbbaa", "abccacabbbcbbbbbaa", "cbbacacbabc", "abaccbaccb", "babbbcabaabccba", "cbcabaacabbcabbbacbc", "abbabbbcabaacacacaab", "ccabbcbbccabac", "ccbacbcacc", "acaaacbacca", "cccbccaabbbaabaacb", "bbbaaaabbcaacaabb", "babbccaacabbabaaacc", "aabbbccbbabbcbbac"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23302;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> label = {"cbbcaaaabcbc", "cabcabaabbcbbc", "caccaaacbcc", "ccabcccbababaababaa", "aabbacccbccbbbabacaa", "babbcacbcbacbc", "bccbacbbcbc", "accababacaacb", "aabacbbbcbaacaca", "caacabbaacbbcbabb", "ccbccbaaacbcccaba", "aabababaacbacacc", "aabaccaccbba", "bacacbabcacb", "cbbcaabcccabac", "acaaabbaababbcbbcaab", "cabcacaaccbbbaab", "ccabbbcbbbacacbcb", "aaabbababaccb", "bacbacbccacca", "ccabbbccbcbcaaaaac", "ccaabbaababab", "cababcbbabacabca", "caaaaabacaaccaa", "babcaccccacbbbaa", "ccccaaaacbbaacaccbca", "bbbaacabcbaac", "bccacbacbabcbaab", "cabccbcbcaaabacbbbc", "bbbaaaaaaacabbcc", "aabacbaacbbbaabccc", "ccbabcbacb", "bbbbbaabaacabcaacc", "babaaabcbcbbabbbc", "cbbcccccbacbca", "cbbacccabbaccbacbacc", "bccabcaaac", "aaccbcabbbbbaaaa", "cccabbbbbc", "ccabccacaccaaaabbaba", "ccacabbcbbababbccbc", "cbccaababbcaca", "abcbabbbccccbbabac", "bbcabcbaabcc", "accabcccaaccbbcaaab", "bacccabcaccbbbc", "acbbccaaab", "bcbcabaabb", "abaccccbbbacbbba", "ccccabcbaaaabaaac"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23279;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> label = {"racqwefhzhrlz", "cbttequ", "dsqpnoufykeapqhfxnczqogpdhydurdgyjvkgsgwm", "kavmwesarqkrifkqmrljqlzgrhxufmcbtthk", "eywkxbhsazupnkjqqkwdxueeyfmjy", "ad", "iutwmvsiibbwkyufubc", "xpniwomq", "cdjmseb", "vm", "fhwtomvuhbznxaehsruwltfdkpberjdgmzptw", "murzqug", "izvxetmvqeojlkeudrjmifuaqyel", "spyizmzkkvkirwfnzxm"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 13942;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> label = {"vvlfcg", "nzkijpxandkonnupchgvvehkbnlflznvilkehsfib", "xgatpsddaimvvelldbtlyvedyueklwabhkwybltkwvodc", "yipojxxgqscltppzwyiblauskmxxzr", "ftbyiabjqzfmfwkkbgxyqstnwrztutrk", "miomtajyjqkluxiaqtrgdph", "eyflernpbtduhpushqerzllbxjnnkruvmdgfrfslkw", "bpajgho", "uraypqjrgszaanwnoswjsytdnssuyyscfiamqbkavc", "dtgpoyfttampbtqnkdwaksqydeuhimfepuimvyqtixiuvpvxwv", "ojajxnanueadflufkncfpmmudbn", "scdprmddtwtagurqbbiouceouprrclca", "onakzopyubkuihmpyutnpncyylgvsvuawrjsxwpjaepshvhfv", "tznzihkskuqfswjfznrsaomngxhweyfnenury", "avyiiyevddappsnenapuaqfntcn", "dlhwyeisb", "zgkbcvxaooqatjjcpcgyxjmad", "paogwzgyxbrutrztba", "oakouursewdshet", "xraxermlkt", "jqchywdobubgxtjztghdvvvfbnygbfocbkeap", "fic", "bccyldfyxyunjnxqpgcitbgen", "rhmibduafdkguplzwrfctl", "adfcvhxahlpeomjrnmlgmdnlb", "eylglgsigvhgscvzhjzukpkgcrvvy", "lofjmzghgexkhxchncuzmrctplchabwtmcwzhjqbwfyiwuvp", "pwwylpmgddggfrgmdpyskomqmzhv", "qhcuviuoygzkrasalfuhmyp", "jtnvfqsfpcjgfymsd", "kikguptehjetw", "ujrrkcrznngwniqzjvdjtiwcyoxxmtggkiowimehmfych", "zdmkqvbpkhfvoddswayobzayf", "wzdkphwmutsyljbrevgzqanptvzvtlllqrad", "dypxdyrixerwpoqltqpd", "rwbgceosbmoxbqdaqeconaofadnrftnmcp", "cleyjnrxgjpzasiwogpdagcbrhwgivhdajssxqpkxufry", "pvleltzbcid", "fi", "sunydpkhsoxqrsjdtbm"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 70100;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> label = {"wlopwzc", "brbhboir", "ru", "ezbszjgkuimvzjkhamajhekeetcstyikvyubalxqkvy", "matnzsjesvfrlfrnkimjxbbttvzwwlfipsqva", "bveygtzjl", "bxidwlklpxxsocwpgovfqxlvezvhjbm", "dzyocq", "gztidsuxsrhqyifeepdimnsjupy", "ecspwrlxhtohaauygkdvkxuoozyjwbzxsdstdgupwlnq", "knanapenenorjguu", "levafsmhlturjkgdivrtlleyzpczdsivfpe", "atbjzbxxwbaeldwcbvmtrjtwhxzgidoancsopeavaqoxzsgmz", "mhbnuycwnjzxojqcocqzkaxlkch", "ffyqkuxmpnmhtbrcdkvfnfqvdcghnaukpbxq", "kxhzyytvipeukpugkshcbboudeapurwkzqaqmrqlkjt", "crjkuvayxmtbtmahbpljjlctshclixbkxnfxvt", "kiyklwvoepmhsjdgbvltthsffxovrfvxywparqcb", "puqoph", "xhxciqcmotkdqbk", "ohxkwpceifcinzhowyuntydtcxonrfearbnaortbb", "wxsalggeekohimhidkedagtfqbuyttvd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 41568;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> label = {"naehdeupecxszzcyrpapqlaftygvsmtxbp", "hqyzadsghpaizuznkkkzajdaiaoumroqudzfojrpokanh", "suaogcoisrzfgkw", "tirfphhqzxbtlsyqutzepmximitxonasqcclji", "puzpfnsdoyveqmznndggkboxgpvjowrpwhd", "gbadxmkwgqagftzxhmpvaxcddmhvfpobqxwkzz", "bmely", "mrafqjphpibwtenjjlgajohvxodhlpjmoqidmyjaxaiytcl", "idwmzbjxjquoztxppcmpqcbdsmyzvuqmymatm", "vamjxywugoxgglxtbdmrsnoajavrpfezklsplakcqfjp", "rdrwscgvsughkywgtkjxln", "jouqqejmnonjhbhasikiuldtkfgmztild", "hlkhzwf", "vluu", "nvvspsmdr", "mpbbtqpjupdrkqklkevbwawdanbea", "lxukhogmzshhznhnvoysuxbiwkllyv", "kfahebkibmuj"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 30139;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> label = {"zwxhskanffbjcodmesksbovroquwufcadtekpdhtkjezfvd", "ereqywnmhnffzmuzmxidjwawzkovthwxkgdhcicdccsfpcai", "otetkzulwzqzz", "rvgwpajnwkszaawkgkpgjpzhyftggkfjeo", "wennpzcnzhauhemyeunntjecacolwafgfxyk", "wpmef", "zbibexmtdofckldjaipcivl", "cwzanwgfwprcsrymjfnphdwrqbreutfnlndswxree", "bwxm", "dyncdusyujggkutrnxbdwursuxgoxmiwf", "fskjalvwmmsyfqm", "yrqkcqnuogfkuocihryqfypxsylmfyashg", "bejsovw", "s", "yfbfjzdprjtogzbwlkloqckrfwh", "hhu", "wqytikgbtlnssvlbdqjdnojzuyu", "ozxeoqcrlgonvfcnkhsbprgjb", "xggxpywduuwrcbkhltanodmoqvufbyidfx", "qxjdntimmqmirtnyxdpptdjrhxgjnbgveasnkwkkqzyvhy", "bpugugfftkihwbqlwxvzknkmufyjgygwmk", "nklcjevtobneoyhpnkjnicpvdxajhpwswkqlkt", "jksnldlsdrav", "whwgececshzqyxddtnkw", "mzxtdqcmxvgbladwusmuhur", "ytzk", "hamoskzz", "kyejadkwfozpaovijwmjvtjkzijqgpikheexwdduqdfhh", "maajqvbrnjdfvr", "xsydzivknqawa", "nrnfdozhdxuoqygonbmgjbxcdpjwasgdgiiwlgdvyphhqnekez", "ux", "ysqpkif", "ssgpyqicacbgprbrinyvrdxogpddmbyhbomnkaydgt", "jnojfbeszepmmlfzv", "gpmlzbpsatgiuzhtqrjchhawowjm"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 53075;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> label = {"bhjbfpvhtcgiacfxeenvqiuidiqrtwunrriick", "ztpwewfefacjpsyubgqwmruauqfi", "girertdftjckzzhjsmgqbvdvfxflbuh", "akquqtsdmglfbcouxospk", "zfkxubirfyhmqwzqbcafefzanbclp", "capoawwhppguujtvlaxxlubldifb", "hedsbzuijbbrmmbpqscqpeblurhacyxdcoitopqedezryleh", "fzcmejdjfovuixundsbivyhxofqiot", "deszhvtunyakggninekouivxmjnobxxajurotjzeyo", "c", "pokglybexmlagmp", "jk", "fcgtpfgzsegj", "ob", "nokkdiwsqf", "qhyu", "gonvla", "lqzdeazsyedbcdubdfukscexvu", "hnd", "ejtzazzeg", "zlxrodjmnlumdbimkfmfleehvazutnnb", "ftuxxellhawabopotwppsgyo", "pm", "dfzi"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 24041;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> label = {"hbyrvttucykddgdqjotkur", "gljunuxlduzbbxrarxurboostidunhfwi", "zahdwtibvdwycdyaenjf", "sdornstnbelhqlzjuofufobzyzvdvgy", "xgeuuczziqoplfwewsqwdmdsrwm", "yebfdbujnsxialctzghienqgdzjflwzchfkkl", "xy", "boblrnmwqtrchvjzrq", "gvqqzxqdclwdxbebwfukeajcftibaelizealf", "cm", "ctqzlttxqkcd", "nsgkqzwyxncqpdfwlg", "atyldrbxrhnyrajrxj", "bhfvuvhwasyenr", "arbrauhjkecdjwunlaaxemnqifitk", "fmoeealclvlxdknimvoh", "bzjrvpyeqbtezwnoyvgbmdsjynoomsexaxkd", "lgiudecnxgbiqybgfgcben", "xrezznjirsrcypazosnaspcwcgumwmabfrhrkmghbgxpwvrfu", "khloubcpixijtkdvcsuvbbvpbvuhxmwnb", "dmoewjnjmgjyghhn", "olbgpspoiqmyjqvfivyzvlndfooleimelbwpjrglhyywztndx", "rzcvnhazuhenjtdymqptfucecjfzakimymwlmlawtj", "iuxk", "gocs", "nqmhtywfzauliowytnfhcxqdwxgrrhowcwmqmazpbxfb", "thrjcyqhrsuatjbxlhlmtegk", "feawpnorwxnmuxukckturoavlgsxipvbokon", "vfdxjf", "vhleumzvoonajclwsahsskdbmfiptapzsb", "nvk", "fhynykitlzqebmltlpjo", "qyqtbccgbitshfcqkdmjmjwnxwuzgr", "ftdnywsdgawjokgonpgjc", "hvadtgxcdbczbzflnwpekassrixtzvff", "msxofjazxldcjinpd", "oczohmytf", "uidzqgchmppbb", "ijgkocqdjbjqkqdnrcxj", "juvuknnvzhruubwfwezzqptxgjqx", "tttufzyvteidbjnkhjljxpf", "jivu"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 55862;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> label = {"twqewbrejcwwjfuevzndgcktvjovjojmoykn", "ocvsxpkoppnmrclitxsekuxzoorpn", "wwdpvwxrjotemmgthjghikhqc", "plgynmylpwyqrxxctsjyisoflqylbskficxmxptd", "pmnwsthhjxmyzd", "ntzqmuuwzkvitqpmuiqvxviauus", "hqpnieokfu", "tbjqfscxxenmfmgexwduwxxujfglictonjkrhtmysgttztjtf", "yilywyxxtejxgjihiijabhsggmgojjduqyprvyascp", "bvxojcacdqrunu", "xv", "hgr", "athy", "rdxiiyciabdykluizsrpyjuglrjfebtjrjkumejl", "suloyddqexmexnfwwb", "oojnnlrmlbkcrxclayz", "tlzddhlfafirmhpgjjkfe", "polwrdsnirabkxaakqqnvwmkofjosxtnfpsnzdvtvzi", "xrexgpcchcdwipkrmjfgalicwkilhcivoergpsr", "snrqbztlnrx", "zcuwccf", "egvooufwobu", "uml", "csgymjxymxziqzrlrbg", "vrfsifkyj", "wd", "iqdmiugnkjdnptwrmzyzcdqdyvolhtmk", "clsmpxjllbpmcfflgnyvejksw", "bnrvqtbueecogljidobdahtlaabrjtyyzzmwizkvemhoqxu", "uyvlnvjcdif", "kg", "swpmowwrkjucbimzpxwhlyizrozbdkqwamikaqq", "gsyjldtkewylspyvqipternxwqbazabqygfewut"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 45138;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> label = {"ytwxojyhtuvvknsjnvpfuumdfwfgtlxpfhqfqu", "neipxolyzkbzmouabqqphtpfluhekkyezbggcp", "sxhfvlkcccsxxuiysiffvxomslgqrxskwqiqvbc", "oaapenofwzjwdlqraingfwjozzutnfdvfxlvuudbsihyxi", "hmogssfyxzezeeilhjtulutvqifkiyzcrirtoajqe", "fxrcqzkchgyguwwwmbztlsereebqfsrfrlruhvzmqltezwpljh", "rmrwbciwkdvljkrpxdktixomhdufxtqoap"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20836;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> label = {"hvjbrpygaxmezi", "vskqunwmnbdmhwrepbgtltwbgnmkzrmlqljmbewyvztocslbeo", "sdnc", "lwcshhaitabjvbslgunnllouxp", "rjeljvfhujhrygpxf", "dohdkxdnvttjmkzlkqenbbsnhfcekwcozjlftohoyhawzybdw", "veiqdzjtqkgjxrahvieioscnztlgpcnyuv", "whqeupmkcc", "sejaaoavrbxdkzhvwiqpmfkbzxjbthb", "ynvyqoayprrvb", "gpssncaxkciogixdjuxrjukpplxzeilpksuyjvq", "ofidftcooqxaxggrw", "kzlinwqge", "xwzsrobhvdsexowtblexra", "blitdgoivdvxylwgkqwnmtfnsfneatpeewmqyxpbec", "wwdcfmomchvojmtjnhufddivuxnbbxstyogsbhrgeowcotqs", "hxazormczrwgrzqobuuzkglrgpvfyknklmsqpqpheaeyrou", "dmadcaktowrudxoahccvftwmiffudikmslbixpdzmcgxe", "cdoqdwnlaedvseahewzbemshadivukysfsxyahplypqrivdxa", "eaaugdxzxudjdnvalkzyjjlarkorg", "yporwnlcjepyivzzonaashtqd", "udsapugrksxbhoaxxzimniiz", "olzdpntjsevuc", "fp", "vtyeqedvrluwpzjbgrzxmqvubiqhygbbqtauvwhuxv", "aoinmlyyetijmyaklyuwywhermqknxaqcwgl", "kvwuadscvqmjsehgxxveflznlktwihbmjeiculhhpovoya", "rooigf", "qthmgzyvoawmetbymclkjnefocyweqdldpiccvlsttebsjvb", "ssaubqzxvozp", "lyq", "vsv", "reohxeqlwrxgxjlemtvhqpmtxmazjmq"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 62079;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> label = {"vqubtsjcdlozcwqfpquwtgei", "txmyybthslkbdyujowzbvromeqcrgcqpu", "blqgusphsvtwgilysfnyblkmoekrbxtzqpklyowbqnfsuxqevr", "oqbwzbtudq", "nvcwm", "gammswfdspxldduvxiwpuryodaueo", "gesfbsmtjzvxxlenzqsqgqdjcrwyckpgtzmuwebecgct", "hxtjqlaftpepizkdtrkocl", "piv", "tsjfpfywdduroiliyuercttgzifw", "al", "cdrkpoomnbqvzpazqs", "hjseakpyezz", "vbu", "rihnjbzkpxmwspaawpzzqtbxquotc", "vthtgsgureicbpfudahytfer", "vnrnilnjxtzefapuygeglfwqowiqppknyvoljtxnzc", "mqy", "uwzrmurj", "rdkjmvfswrcffpttlapxqmtdduywzbxrenjqzt", "xc", "aprzlrzfgrratsytyqlixowjdhlzkjmhoiuvusiekmczvqmg", "pcmefapbqdklqbchinkl", "mdppmiwzqveczcfrewg", "zjiadzcbhispbin", "cybdndcaamjjdtazzqxjqmpmjikjyiwrssxhmgpgdliii", "prmcofrwltmvxodxafqmvziecdsidqd", "zbxnhcihirziwewufbbpaatpglbaefugnepkcbugvbyfrpeduy", "giwzxsmkmjwkiuhbfsnqdwkrxmhgtx", "arlzvozhxjvmcwxfibhilfcbncitnwjahzokvlm", "zasoqmclsgrbotqeugqlvg", "yaqaxrsercndyfnccrjrqfjhlxoy", "pdzxudhyzxafjiqygp", "qxkuavutqatqntytvbthiecyy", "sriyaqdxmylrnyssskahukafrvvskzcyxlequipnhurph"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 56204;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> label = {"xsmztpcdwmjaovsbsawhnmitziwnaeqhfmizjeuqjqbrw", "xozuzmtvouyzkrmlj", "fbrttvbbphwyxykwmaoqsac", "adcvcjdpnftbwwrczrghfjgnamshkvtmj", "gxjhpniyksctxlxetjhueceidlkkvdrcftffdjc", "gzpfucdacdywei", "ilksyydgrwwl", "jdrjelzrqyrh"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 9559;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> label = {"oyjocomhbukymaoj", "pjtesvmibbq", "vkearjcxjlfmwohofipwurgawvtbqviesyjkq", "ijprjzenuibclcxgjbarjm", "ljwyffnqfsvxetrrg", "lclechtadhmqnepkpdgbyquzhoapvhpdwgkqimborsgviw", "pespaemnbsfhwriylmqpmfjauwejltxkhnivxcqupthaxybs", "yiothmopuycmmuipjjplsfkfmenmxmpzzumr", "vylxuudsidqbxbrzepyrcce", "lmjvfztpmerrgtpfmfonvdrgzgowxprbzfnrkfdn", "akuiyh", "hwopciljedtii", "rkxakwskasbtgfdpebzvankvfrprxrkcuoqs", "wfetadrvsaakmrudxdqtxnwtycbxsgtruhtnammapvyeyuctnj", "ffhjr", "hjryvulyh"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 28560;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> label = {"yucvqlwyjfdgugqxuxwwvxfcbcjtzpdupmtglttrvkkagqvonh", "drjoukexguuvexqepvkapzyexiynwzhpkyhtakrvcdfohj", "funjrzbelwmjmzmmwjsjhkyddgeopluqmkg", "riycxhjbyrrsxfkpxlalc", "mdboomnhwv", "sqsjaluwigeqrsouszvcvdvqcwtbdynjovlfcvz", "muuvrqjiaqtcrftkdfojljlrfutlhfqcoypenbjsaulwe", "wbrkpjzlwekogolgupsc", "rczictajtoyceblqhycmilisbncaob", "rftuaxwsdulwovbabfyfhkuxszhdlnfabrtaumtgksi", "woszzourx", "ezhsycvstxpwwykqeqnouwektebtvadpnuvcjhubksu", "cakawf", "iemxhdmghkwurjxiuefqzdeptyvleopkzprbrx", "ddnitinrvuliato", "tesfwgjatqaeunfyabvtfdzbelkagvqd", "ubpwvfvlzsxcdqobqxshi", "a", "jmamwsxusvmmvmhzcvosvteoathtqmpptpwjmpdeegnaygm", "jmxmjyaqnjjfdqtbeusbpbtjlelveistsrhv", "p", "gtwphl", "figskexnuxdtnfqvxmyxdljddfvqhdfnomucuf", "zuemfcoqckzrvygbxjocvolqhqterbeuglfb", "mrwja", "ezotcudjncyhqrhhuxyjrhqyqkbtdignpcjlaiklena", "wmcndrhpgznxhjqzdmthjnenr", "mqcxlgfwniqksokedwyebykyhdavaayxedgffvnqmeegahaqxu", "gcxrlnlfshucmectgdrjyupptwggsvjwiknomibtejhtol", "orkskebypnchavleyhcwcbmreyzddtgccgwxu", "aetiuyvrkvcxgldfdmkckcfzdxiiyxuurhxhuiqcepxyqtkbb", "xblllifvdllmsjbptqtscwacjobxdfwlorzgsauor", "zifrdorfyugcamavooxbktm", "nkhvgyhqeboayrusqzbitinqbbrspjmffi", "paklhsrmnvslxqcl", "wszugxdwocebzkkdxlbizwyojdodbesibkhi", "nddqtdkxhoctschsdmvyxseknudglve", "yrodwjnzxdogbdpalnjchbgvgdqbvgwpfvgyvcjzekixy", "cpadzwftfttsfoqyvxseopdplojcalbgodiz", "iqognpepbevouwdhndlbtpfvmiwwelkksfqooqllns", "jjbdcpqentqgdcwzfbpxnemokqkkkwyzdlthhwiqcp", "mwfqmkayyuqsxlktyfsifkkbzynoitlwrlq", "wvyprfzsofeodehbgukhhzhrkianwuxuugucgchi"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 97151;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> label = {"bcvwswtmqxuwvacwizpoumaaurifulbobdfbkothwutfnvrn", "tezsmguphnzffuzwuczu", "dlllhtmvdeq", "giwvkxuqojrnmtkeyoeivfk", "zvwmowcnzfuxipoikpgsxrdrjkckskqttqhdpzjvtwhmkfupq", "hkawbfanqrfdrutd", "wdbduwqmhpmdzdawxignyloefscnzwzjbgpt", "zwamwmqncqeonuvalikatssyeu", "rl", "jhdzusmnkxfjrlinmw", "kkvzwrwurokdorjqtsbbipaz", "cjokeikddonuiqubqliuzytvvqhnrynwvbjtrmrtgpvaakul", "fqsckzrodnkvtlcpqbsjifxvxktndgarlkizsgpg", "avubcajitzjbijvocrlqkvnnhkhiuxfay", "sjwjjinaxkdthrjmwoisacwclbrunah", "mybvqetcubtcfeafcbfgdytupiiuoddkgxqnnbr", "eujwmh", "oziwd", "xokctmdllgqzooxssibpkabyzzjyotmj", "rrjteyyrwtotcaebnklf", "vapznwcrrcwsyonitnrpwcwqrvtfahobwierexwmkorqywndmr", "vkgxm", "umeatqssokcxk", "izugxbv", "dikefgzodlsqrknvmpwktlohrpkgapfdf", "gymzrztooiu", "utxfdg", "mq", "eiphcsroa", "eskdforqcpn", "qfkcsgxshjfbzs", "yebmoancfotoltxnvvtnxoauhgzfsarhucsxozeokmtkybty", "zanebctkynqs", "odthlxaljlajtdtgrj", "tyygyquazbzxtlqfqywqdacuttdj", "njtjmwpnoqbasbjzyxil", "lblcwsowgwzuaeolwyarpvzgoudkibvlpuwenzxjapbkph", "mujnhrmfcxyccyugarnyy", "edgarcrxz"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 54946;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> label = {"hwozayhlhkjxiupessjkeuyhqzpoklaexvtqow", "rypbdifiabnfnlxytwzpxzbepijunwifdvbcpn", "tpipnfcflyrqomrb", "qwxoelzuygxuukswpltgkcggqjmqrukmhejtu", "fqgcprukffkdgdkfvcxexwtfkekjdknbfwpzahvqqahjsfrory", "izymdyjqbpvp", "dq", "zosmexpajgirwpysceeprlklcwbwhyjch", "wyordjrqwxlqcqloixevtobrarnbqwkekrmtnknc", "k", "kwj", "ekmkulnmnjsjntmjzrgtellm", "xkhahilrxcgmbqzfkknlashsyimgzrinifbxzfcfaymbn", "tnhlrlctfjzbpbezeylgldauwlpovxqtkcnmxrmaenwsocx", "vizqpvckrdpcmwnfusodnqmvoyvkgfediqjr", "ydgxq", "tksjalqwjvxicnfpijplvawovndypnt", "jmboszizyhlkcwzbxrlgkliswceghnyrriiwbvodfanasfwum", "lhmybfexdvrorxexyckggudfwdxejedhumbaxdnxm", "ncaqtv", "wxpi", "lkznkwcqvsgjvmltxurvjgskkmgpiucgigscnxn", "odqvbigiqlrbeox", "ewlwqciifefrkiimeykynjohvffjxlyaid", "wkdluoavmmytxzptgqnbjaa", "jvfuxwaghxawxisqrcxtyadmdfzymaaclqgx", "dvxibzwsotbjmmjcikqlwf", "echbscnmpx", "qzubjlvjmlwesrkvdmijg", "jxq", "udsrmoyqtdf", "rfphyxtzfloakut", "kcsmehltgqirfbqgnjqaostlgdmaqbqdgbhgynesiga", "xiuklkbrpppetwtzbzjdklkjofzjnpxhuryjuwfzfjss", "ueabaqshlucybbtnoz", "hfkwfvqc", "caczumbqwcvygq", "rdiwlntklodycvivwtbauzmdbmnzw", "knhdfpkycxvimvwahw", "vslrejgjyxddmcgrswrqtiraa", "swsmmzmviskoboaiuxnxzadpfolhievlektwhcyfqbalert", "exxpcukijhugcycwixrrnexyozxo", "lgdamzwdeeqakphslnqxpsfezkwdgyfk"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 71828;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> label = {"wfqzhnjkvftzpswhruehntyaiwsqvnixdblywbpyghwmszvt", "ruomdqwewbgbzsixitxuddmcresxrlsh", "lmjohlabcvxlbptccsluoucpzjhagfgzjvecyjtrtvdsdjc", "qkmggarnfblwuuarxoqgjiicz", "ysnwwrwplrimngtwabaaywmrgrrnsskctqwojg", "pleprzptvfhhgvnxxsnaecknpomgacxyxcvyfbomtjdmmqyvz", "ojhpvwshncaibpbupsnnzi", "hjfzianbjxtutiujhjaypc", "r", "ntkgktv", "msdddaffxsusxeu", "belmocpsehxzlbvwmjzzagnrdzfkn", "voppfqysqbmgrarwxmxdmeypdduk", "emlmxldefemfuqwhmweimfs", "jfstjlaqgjwkwphvk", "nifk", "vskonnggarvkbvpsrcxhdiso", "ejuzynncttpqbzcyfndzwdpeljqbzluellhpylxoimrfbs", "bstilik", "xwxqbqfargd", "ytjmvbjupefwoojgemzmalnlezaozoswyulzmrwxbxj", "uvhazbkjkzxjn", "vyvvjtdkfwvrngifxlqyivyolgcav", "osss", "fqxcp", "udjbfsfmbzelmjaidgoo", "ndrauvhuifwedundxkygjqhgjrjtdqqggnppolljcrxv", "goslrypbpstjcuwhjyvxmgbdbvuzkodovb", "idoyirzic", "bblhyhmtykjfkfdbojxjeguqqixvroqbvqx", "duakyriebagmcfkmgamztnrakxybzvyyzqosqynm", "dlmhmeclbsezouqhyntddyjrwwbmssypssilinyebcypqvvdl", "vacapor", "zoetkmchtylgmdjimefickzefpeuosjupfcnjzvnh", "pcb", "clpukmmwsyxwzljlik", "zvojicuqkmifoexvrohn", "kjapobf", "lnzrmnwbnamguslzxkeycnwsoufnget", "qjizicimuwihkuxasrspsouedieolqmkucewt", "lnawwrc", "rnzlu", "qxjpiarpznripktvcauwbdiegdddixdekelhhsmfgneagqosxi", "eewisxblycgptmmfttwsvgrtiqvolloduwt", "bbarjapsapxvujpncevsunislmlfkcwzvfmrhc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 73354;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> label = {"cbclcnhzkvzlmimntfdqhqnluhzrkbptremiuidzwxmnxt", "ybmconusgcmdtyltkomjho", "awjspakbqodhoqpeofksoumsjnynklsytswfjypgzbqrdl", "zbameqodwcfpkm", "qkjmby", "aftwwvkuvofhvrzzgwxwikhrzpqxx", "tdqyewxvopzenku", "lkvgdicdjkqpn", "wodpewk", "bfttg", "zkghfeegwqtpxzdqbxexnamvapghymsxhvvlwjbjntruqmddg", "dzdzqlugjkonnabtxltqpcsnr", "jlvovcwcrxysnjayntxuqcjizcvnrnnn", "nonvzpauqfrdjuqwzasvfpgtmreeqpovopwzkdpded", "bvnlnfnddltpzqzfelgupqufkhyemuiltmeldu", "ggnzazdxuhirsjzbmwpbrfmzlnantnjpqjmnbmhqtccvcgep", "tjmkwej", "rlmixjpnnkjteiekyzxcksubswwrgwiwvjkhylfvidrtz", "msvmqkiqyeqaegmovclxvckskgrhdlbcxurzix", "srghazhkogdsljmtgsmfnuorvuirdp", "mndnwdtmkbilpdudhhgvgfwt", "nisesbxiaxildjedwzxeaneezzzcycqzjsw", "vkivhwcskcjyswvibjbfbkh", "vgb", "uobbfqronjmasodae", "pjwfyggitnqtojilbe", "rpxgpypfedgoyhibivohwzpirdayvmlkahfxlfe", "tpfqqycswopyxqhwybwlf", "uezzdnkqsrhibpukgyhlblnwzf", "jdzmqsruldqpwkycdikzioclnadujyqaeshocslgqntktwl", "hfmlnkttbm", "bbjgsjiohta", "j", "lr", "uwcvsx", "jgyimeczaxlust", "dnjoxqpihu", "xqjnloxgpun", "eglzunodvaovcxbolpozhoidgqxqbmfjysx", "asgxbxsyttxdtyzqmtycwwiakmqjydwzsbesjhgfua", "ndkvlmwlownuifa", "uvibwollkjanahclfouwwspdzxvfggfosllatsaj", "rufytmtqxkfkzhluii", "mmaihwtufllayzheogomvsjujvcerrimxvjlgbkdo", "kldggf", "fjnogdubw", "hstwdztvhlnpvwenrsjxdznoioahwluiphtoqu", "dfvkyfutdgfysfmlyhdhihqfqwrrdqtcfitn"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 74158;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> label = {"daucsghxglxhvxgeyajigywzcflscbnfiktiiqmnnnkkrotl", "w", "aykkcgqbtggxvcoplhcyoonwbhybrkzewpqvuswwxugecxt", "aexvwbzteppcebdvrcaygxa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 7780;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> label = {"uojiwofeiynnqzavlnkpoxol", "uxjqdmxfkhdqsa", "srdpumxxspynbhycktaalgyfnlxoakbkvzpdbne", "tprmwjaeslqfldy", "qwnxgkrdvvqvkjjbrdrcc", "xchttqidxsfokedylafh", "kvyiaigelqargdiihpfemuptns", "yblyjqfngngsiylvnzquducewvs", "tib", "jsw", "nlpsmlcisdtefaapzdw", "jbavywjgqycyffktdqynnyabpxiu", "vzbislaycigqikwmnfuodkfrdtnselkiyxzyvzn", "rpqtujp", "xpsckhajwteuynqyvbiiankzir"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 15571;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> label = {"ybfvedbjwglvxovrynsqtknjovhgoaojmc", "fpbjlqdqjmbrnhdrkwtdn", "okscimkzginorhnuwglbqltevtrqrcdguzzkbcmubduoitsf", "ljuezahgnhchvxmsgs", "lzejwgvhpmfrzjxnoauquwmwyboelfwk", "mzqclxymppaysjcm", "ztlpdydowmiz", "ppurtsslxjsixgqvqhiu", "bzmbwdvefeagvlqevqoqozthpsoievucjvrefbdzfupebtwrwy", "vstcutowir", "obzlehxrwprddfsbvarfyrzavsbgazk", "chyiugm", "medashfjvod", "zqwrgsheq", "wnxyzohgptcubh", "jjjnisqgfykhop", "ylufzjwzieisvreppt", "kscnlvdd", "sdxnsbpqjfxfkmejoyqgytyahaqx", "sxhjuizfbxhsgafeaxtzpcskjuoqgldpnd", "twdikis", "faot"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 23688;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> label = {"worlcuxlxzaxmehevrylpqmil", "tcxncunrsuvqkbocnlirzpjlphnurzoig", "zhsvfrgwzmbxdb", "wxpyhuglknacazbmkagmqeqoyxdbgnrfsxgnynmpiaaegirvw", "siksggibikxprqxptelfzsagsyjaolcednevesvrjyrb", "bzsifywwyulxzwpdrqcdqmypwlskyupoqns"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 13229;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> label = {"dhudvmtig", "dvwcaxlxbagyilvdedyjlvbsmrksrrjn", "xtanvyfmgqmpmsigoohhnwpgdzvlzguitdqovepru", "hrwzqlxocukywdoajobzltstx", "oktsqegetocwcromhlfcoidvvxtw", "hgtxxkytfiffjypixcvlrwhbsbjgbeooriauikyanwoclwt", "imiwdhadocnbwnhqvnsydkvztktdifj", "owcrrnncbtilcmzviotviqcfdluln", "bkybwuulhtkkfxzfvsojfbnubsgtpylv", "dovtzfjldfhqvuktygbzadihscr", "jkunhbutwzcldqjlql", "titonlydsktziivvwnvkeli", "dwbtarluydcvguwzhnvmuscobsocqufavumfdhbugydcvgv", "wllnhjcgqhzuuzyexjhxpzwoxjrtynedggmfgujkiquqzh", "o", "zqnlwiexghsdocvlhvb", "kppdzuaongyywtmjoueufcczo", "ukvccjzvnpjquuwedep", "oezpgqbsbqjmjq", "suzbpg", "yfrusrlypnsxvschxxwkyqvomsrryxz", "mvczwusfaox"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 34487;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> label = {"fvzfxirgpxqxoytxmttflbpybkwvzrdxjdcdjhdjclarmh", "jimiuanjeobzcknektgbkopf", "dmijoegqtjiohstfxvirzttfrtuxn", "peanyav", "hubmnewzcjviba", "lx", "zwbfuemcayzrtzcuhmzhfugbmaqdeyerytko", "bjeaygbtortmt", "piuklthzeschijkayeaufoluogbrt", "vrdkmakyhcvzjxmdkbprftqcgdjuzv", "otyvtwftnuqfhqwcvhhncfyl", "vobkuvoscpfcljomgyzvqkauzqq", "nqbyt", "giufvdypnzkwymhdsblwxehkmqjftnbmowmpy", "hpyqdazqgtjfgpslclghaweydwupwgi", "kncrarwhciicmyucoqtxypewqqotbtegazwqhlj", "rifbzsbphvz", "lgwnvpuzhaxhammgjrmzwnmkss", "nkqqgqxxxysuadmwradregpkpleysislz", "xdwmvaahz", "cttzqyphdkhsixcmxmmimlds", "abzfttvgrcbi", "dbxnqtymgibxdcqzfugfwmdpnqzuqded", "nzxw", "wtgguavkoeotwqymqnpiei", "bzzlmfyqzdaqguupzdagqppiwzuejg", "nhuqumutkhzkpipsldwhs", "woaemvtposkfennkmhaieybqqcq", "qzhvdtoqdcrbdjjjaycuamhsfxttkpn", "fbkxryzorxxumbcbdmrwa", "juelsifdedfjwainyvxshgvpcjjoeftnvri", "cxwurnivforbjtatsqnkubafiolv", "xpdxbocicw"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 41216;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> label = {"gfsrbmurqopdeggbqwtxunlkpmtkgbiza", "cgicygkubcnbocr", "nhsjrnjaexkqaxsmnekceduswcngqzvfwuanwmuu", "vqjfnlghzitryvfbqnukeyneqqbaximfhfzcfvrezi", "qthaj", "xjiinurpsupwnjrjxoiksrlr", "yizyqpsw", "ubgvyz", "byktpzvwsadbhyhpfiomruh", "xpygvrbmpliydnhlnc", "dgjyifycdzgwzmtixulmb", "lbuuprtgozwxxpbqdpipcrpzqbcyhfbi", "vbltpruejmheqplleujrvszhahlykngyf", "qxkfuq", "mleltegio", "vrrkayzknxgmdwuhdixsoq", "cujtlfzojrtktcptatryobgouarokzfbihzqohki", "nsbxaiddapxzcguhiphqdxlxhhltltyzyioutluawqgrs", "hgpvtghfk", "tqrhbhftgjmkfihbuardivhd", "xsbbvxfkohbluhaea", "hglqkd", "hgoglngoqrukvqhxoepyfavcwaqxnbkqazobemu", "ttfpqtt", "oefiwdsbyxkwiv", "cqspuhvzqlkodgljtqdxjlgirdhkragnpbias", "flwnyordwkwhhtxnzuuaqevpspdnhjsxaqobtb", "xpmobpblfmo", "hhzmhcg", "oasmsro", "nmoktmgxablhtiz", "ifdztjwjrkldichctqiqmbrnioxkyphcdy", "zspnjtxyrarhttamsohisvvoyojqqn", "vhpfdx", "nwdfbnbdwolseznlt", "qzhutjxtmr", "owiemuvscljzbtibjbdtnu", "rivfwgnizcgbnll", "faxxgnbpvonuufglkehgypmlcglgnjjkffatcqnlobtrzm", "sodlmzgzlttvrvgzhhwkcsuebnnpxjavjywpvbdhabp", "scwkymyhkdsoqyohjuqutbccbkvfrevu", "ncprpyiqokjc", "yfniywkhzannauczzmzvffpcdvuiipgsvqf", "ounetsfkppxqinvlspsdmamnyrkvnbnxz", "sirxfenzwuvenrxxixosfmjetycrgpszbbgyk", "hzykuiomjpkyfejzhinlvvoygccsphdmiuaurqolbfu"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 64395;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> label = {"dvbfiwpgcmfwflbcdojakpt", "fkrfcwzzjuavjpnwoiufrpwjptsqotbxhfjxzhbpa", "lwilidxrvlupzjtqlusneijdhpbhlc", "atwjjkjoeuhxqgwgqfvukhynmwczrddtxynejaed", "rwweecbwsuhcncxg", "qrvy", "xtjaybeeyhdemxlriliouoguqvzgmdcqtvcxi", "sqjocfkmvtvgxznhbdq", "jlwnohcghvpgqtkghgfbjmfsuohxpgflmexivsgtuukb", "zrcphrkvqaxegrtvbkpisfhbxgdhugunoqhxylx", "ojzsqgdkoywxkkbhitm", "guvdkybbgwhiijrgcl", "pmclyziqbtohvdxttifzefycm"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20748;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> label = {"jwlgxargdtruizgyatdhqkfvyzawxmydbkuo", "dmdwidqtdmzvzbigltfewzjflpqvupkqlrxlubwfyjdotnwz", "e", "nnnvgyspix", "qujaalwschbrcztatmdntankclagjuufvmfcshyshsxgahd", "e", "lxwrphyougwcwvowlfhxfjsjwerxekllyctrpkrsyotfmj"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 12453;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> label = {"yqefuzdsmkhk", "hftfkglgsweudnprwjeaywcqkgkbohtjuk", "sw", "kraqnilzkmkqgccdtiaoyjvkxojd", "hjbtqn", "iqcdhyyuqgbvudwaatmblzgbvfpplmtctp", "baxiphkglinboskhaqfcuuaownegfjvodytvydey", "pohhcwfgrzyv", "dxbsh", "nqtzpxkj", "owyohcxlawswdwnjqihvivmbg", "aglvrzh", "tlxrwdjfuwtdnvnosnbtbdvozlzidrjz", "hpzhsgjsikgjcoaukoejxvpnisqhumo", "bvm", "aqrsnmyhphslowjauyqdjfvhpiyrlwiilgjzzcdjyfuqufobk", "qxytqsnrcamzjnmpldvdvyq", "mrockwoxogpnbskcrykgrwfgapmcipdfieurgascjizigjjkvy", "nclspzlhjmtcjjhfefvkkfepnld", "fdzukdyqpnlattcxvsvmwrngd", "qkaitepuodzcxiukluctzmjqdgyggufrdt", "pjjggrhfmcytetcmucfvjrramyfhgvudxreot", "zepaytpaijzkhzqhamjtlvsdvfstalk", "bxlyuhoiczglgrgpsnsik", "zjdntqnvibeeuyxpcjpgcqqfumiax"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 37357;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> label = {"knnxpoqxugpowsjvrrbbtsdfdaadzzqscyqkngkx", "cqzdaluyrkuxspzxvnvzuzxuicsxrsjxccemfeiefjelnoxigz", "aqfxdpifxqfmvveh", "sjgneidhmup", "yryqvoxietrrpmiwypudegxwonpkzzkpnw", "ew", "hwxylvhjgbqbl", "ywojvvoezvowvbjhrsvugxdnyoz", "tzpehdfl", "zztqztnplgwaddiqzampktfaouzfxjqgqjadvajdfrzgdchc", "ijpdoqmvnpakleuaehevopoqsglvtkiqk", "kvxpfijhusdkvvxxcu", "qfeemoei", "qladvltjh", "eemzdurzzjwvrjarpgzirqnyjxbfmhctrrv", "cushgjs", "slpfjffovwiixumcnosqggxqujpqpsouvdfregycsebhrmlu", "vqkccoyqpydtmjjqaccschokznlpdfmtkupirnkkj", "um", "vmkdewndhijryxojjsliujtvile", "ubvljbuqvlglqmazijaukgxdhr", "sxxkgekxggxwdydbetopfsdpn", "qvhvsdoysqtswnwaqnulggzzb", "gaofcppnssty", "avzudhpljwsmqlhzdwjeqwfpszynjypgqegcpqfjurlbigxr", "ydxauzzm", "eaqstengznxjlwbfucrbniglleqzkuclzarffzit", "uzjer", "xavrfyocyvtdkkxdmvltzj", "qflctaeenjggvfici", "zysvltehyyqzkzvnvlbimkdaflunhvgoeetysscfsbzvlj", "xgveqyxorcmphjeytffwliocvikcgkmvz", "yajgcvqczantolkj", "xkvppr", "jvvjewgywfyznqutodjbihtyukbtnswwoxzenfoi", "zjuzcbrcdvrtgl", "ukryzshqfhgamtfdvmkhcbeukmnchihne", "qlduzbg", "rwze", "bpjsvznmjchwpfbqyufzimknwvfniwefjalrkifjswu"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 59042;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> label = {"jxxdsgzca", "bvfalpnig", "y", "rjotltsiguhfeoyifxqvfypjnzloorbmwumqniukirnznu", "xlttvpispvbgvdljysl", "thecxccchyscbkycmevzmbaxzygaafufdssuz", "hjscssy", "txfglqju", "ztkcojam", "vmmppoodcxjfgdqgfkmmriqnipccufzncmpiudtvp", "fujketfamirmrwxyyazvglwcowbcxhxnudixw", "nqtnkesvoartzedq", "bfjtvhitjdyigoikxxnwkah", "uqwpxklledofbkxpfeo", "otcqqwgqqmstbqlhrqyzwxm", "dokwysykspigdwejzrcgvlrcxaucdgj", "xkiwqjxvqlctscsbgefhokq", "uiylxst", "zbwpab", "qfsyfpakytbbfzpltsmiggdxsrbehgn"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 22727;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> label = {"xqfbzomgoulysvoupzzqgbmdnynnyzzrd", "tuiyntadcjsgmfzxzswsnpowamnqelqgtbzprv", "qqgjwkrrbiqholxppglonz", "btuxxd", "oczdnlvkulbklcflryollpkvabfinwuwmnzu", "pgwhijcbgijbejtlgoomgig", "shdyvmwkxzxpltazxajmgmukltpxuyuxxiyipuurxcioc", "yxqcfyvcnatqkkasnsmftgvcuroaspcquou", "pxzjehk", "fggezfzueycjhfuqswengbl", "wnywtleozwezbbtkgaci", "gbtpw", "viebavyidjoqxpaakxltsxnkwlpdufguosgvpcwitgrrzjgk"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20336;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> label = {"qcsvzhnngnwa", "hppveafimirsissjfvkmjjmbegcsowlppmpfij", "zmeiotcdptejerajebmjleyjzm", "bp"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 2948;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> label = {"ziduxejimnbrek", "kkobojavfeucqlygjkgaxueqhjrvq", "qouahrdfbmvqumofwrdrbvng", "nuvbbeqrjjxbuywtgxjuaowuhxrk", "mqttvlelkjle", "kqhbagtkjfftylxawrgcbuyhkbpyudgnbysajxfjxwutt", "rosrgaeydnbvxtjnscjiilxblgpby", "aumyzjvmbjpvohgwhjsjryftvpjzstxiyvtyjbpsubtiytkzhm", "vuoyjfppitfrzjafemrdpwhpzhhf", "fqnkdlcxichvmsgogxhhvkpqazazcfn", "kxn", "tqktcignqsrnpflbmpdbgnrkcpthygitgmyxuaoir", "tsgdzcnrtigqbvhglghipsffoxwbwjcysegoukysptvvp", "ywlfdnwukbrhelovlflmhztsywcltvigh", "rsrkauakednfstguovniejf", "tnygmrczwkscnufft", "ddojltdwlfhfrjtlortlqibinguouxhl"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 31554;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> label = {"embtkkfhlzitjvtxhpaisloaqrmdswyqggwttrebfvjddfjn", "bnjngskflwguhdhjaod", "opsvyqgkk", "nd", "kwjxpvyngmneqn", "rexrhpjvsismt", "jpxthileabkcwpanglbngbg", "ndauliyahwbxghfqyzjmhc", "rkgoejefasfqukhvottmsblpoegrxjjti", "vgmmxmsmk", "t", "mrlfiihdjcgnn", "fimuvgqzwbxtepuloorowcfvbebojtajbnowkqzvom", "wslbfmenbjcsizelnuuyqf", "ngkjxyisfvvrsbd", "sfusgxxuydswkbqmbttulhojxiwhncbi", "ocxepifmbdgoldsaostxbqaojztfsjiytxeynmvtrh", "tqydpkqknzotkwninzmvycatctiohrrqfldjishbkdtxy", "ladaottn", "ez", "fdpreoxslwzfhenwcdfzcgmuqqzuqbkemxrkiioxdh", "ttxixlqhldgegkrtwwavbnrkqzgxnndsjdqeb", "ugnvkbncbwrmxhpwvyzgglbjysooyjqfvyoqykjqodxbmgevt", "lmcdiphfugpeocb", "hsyjabnahwyfvyoimuelonlnlc", "hr", "wwqflqheuibd", "rjizxgq", "uixyir", "akynolpjxmqkcnkwrpgmliapxcfprlvllg", "cvhgxavwzuzsimrzapza", "ildjatzcmmxgejdzmvuklrmhofsjx", "ieilqtlkvjyi", "yuaydhmjyevzkbezopqfiagnpajlw", "bafkvjicqvsyhrohjzstjncpjwgpczfyyeexsetadgsashwqbs", "vvmxvjatyq", "tlihakcmknhkgzfcovqopfqrvkbckgryutdalpnpcpprsv", "bmjpjofsfdxpp", "uedapiycdmsqeskfcrtnnyfb", "vklxihk"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 54076;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> label = {"ahsbipqjcnyohaucfmyoxtucindlitkwkhhnylnvindviuap", "ckeqxd", "uveduf", "xydelmnlhdtvutgalditbpddwueevcwuph", "pxupruaujzgfvftag", "guwkslbwcqfalzywtcczpjasomoh", "qznog", "hkurhdg", "ldezsblbltaxg", "pjhbhtarwx", "tdnvkbfuxqfgsbrdjbhtnepbwcxkptlnjmml", "lnavumrcfmlfwxzaybqsuspmagssevrhjizcv", "gcvdwaitsqyquqkxnuhpzasrnyzyfletmrlmptrybw", "flqlfwxldxggmrlyhhvfkpkrtalkyfntqqjdqhblzujew", "eiogudjcsthiupbkatgrlzpkjtnhtb", "gdnhjmglrpjbtniybdmfjrqikapfaxshzx", "keiixhtubvokwjljsrbwvzdvynqnfkebxp", "fqrpeevunptodtpjzubkvejdgwwhznmnzcwvfcsujy", "jypgpg", "gfsxokpszfsmhnxvgduvbbcptnmmgduojy", "fhfrnltvdfszzjbkwihftbdeiiusparpwvycxetrbewri", "ifopclszaewcghfvvbgrvtfnwiynordeeridtb", "ftxahunfonpnwlqpymfpsniytgpxpiixffnmzdajsncay", "afuuyddausajyxefgfsmdohscee", "synxryjeiipya", "iuinikrnksmjh", "y", "lhzetqsdiyonprksltqukuiaapyywjhrpqupnugqdexoe", "eroctluxnjgqncjtecb", "cjfurezvixvptbfftzemuhobkdczadggkrsuxxueoetcjqyje", "bayamwnzagzwpnxojqefrnlyjwdsqyqnppgqybmnerkwucqe", "msuiwkoblfvslsdqdztfcrfshttjtyc", "lzzaignbkbazdyqzndpnuvxufmvl", "fbvtbimlewsghfhngrxnmz", "flydcrfqzuuwudimrawbksrzpnycj", "vrzwpltfylhfjhuoqelwcloefvsjgobabvy", "oocxstpuhnhwezjwppfhz", "mhlxqvf", "sqvbiijlecmvld", "v", "ziujaahwcqzuuvbufu", "kiasxeyibpwg", "sagtqwdwgwpvbxbxqqcpjjyrnencph", "e", "xdbwneba", "qqrnhklvvqncoougxorcclefhkhhjnhrfeksdc", "cfpksohhvafxuofdlmifpugcylavweionunp"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 78388;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> label = {"idvkenkzokecpifejcjahjaebdrocbvquhqe", "vp", "ptbqrd", "rcnbipxofrunundml", "foqxhamtcathhshkdmwqqecljbeqlsmejneexrqctr", "cdzzmsrnsubeuzmcmezhakxnyxckwjd", "wzhlbmxpofk", "kxokxwjxcfrd", "maoptxeszgxfdgvko", "qwqdbkzajzlxskzzmcnfusrzketwpmgewjkdkmbwmrgjkzjuk", "ekcnrnbqhdkqjdfrsmjybrwnflszshqygqptpltiagxax", "qojqioukccq", "bybneizzsyiuyko", "tjiscdoapcykluwhlpralsemzigeassryghtxtgyzlxpifdrg", "iio", "wtenccjxdqkvnnkzvtoa", "apcmjpywvmgbqv", "yqgvopsqhrbwcbalgoriyjqxhvqkxfzpe", "rgymfotaomjltnozbicw", "iqzunpbbo", "mjx", "ogmsnfquhohmcfrrdskkq", "dnog", "lyjpoousqmubcuqqeljvqjpgjvgihxyeqontejcvwyijpl", "wcvxhgtjnegnpmtijqklb", "q", "xgikxboeqcoyxsamzrqazjrpnmgpkvcqvsnrjkbnagjzmtb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 37662;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> label = {"egenvozocwseumywjzjtdrffdlwoqtsjcwwwtjjf", "nm", "djnpsfkukhkyqnholhtexqcdnzymudjsu", "dacjnjblwonnacjjbidmrewqfbfcrusoawpishciqboh", "nocjputnuseffdxefbyfhxtbjhtxtxooverpqawunr", "cvjpljwvoonsmpcncppfdritenyomojsqpwvbsweqlldcuxc", "njvktvswmuck", "ktltfumpngbktznegjmgskphtjowfvayhq", "tcsok"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 18437;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> label = {"bepgurpvdxejoakxohacacrqoiqncfcegt", "bayhwqsbvxfoyvizespavaxcryhffskhu", "ynjywxaoyadvcxtwsfkxxsfuckdgdqazvxobqxfmrfpihc", "ywsyxxehxsflxdjqh", "bedybqvgczrmaeflvjriprnxrgvwazoqorgypoytppa", "xgmmcrlastwfjcgznwdsabbz", "eebwvgd", "svzikbpinfqgd", "vxnpjnkdtjzjedusjygugjxelzbibhdfyhykoghaspz", "ipdn", "wemlmeupxdcmsgtaedw", "oyjvgzsxqkt", "yfkrzu", "ccdkxesoawziuvvzlrxesjiladadxufkpyaghqywiha", "acqxldsluendbvrlpsbsdvydptrotzvuw", "husfiszxhlxlmpenctcxstjnrxahfyyygi", "kxqgxadmlbxzozaspuvnckpdxdpxqhnxuluvphxqf", "rjmrkktficudfoqpcgfbgxehoyevmerudhl", "mqlgrppemzhtcjlneykkznmelcrwvrceydwwp", "pljcdiytjztbxmckhbzbclfnk", "mzrpytxevudolrlxtbn", "mnvpjfvnkweinfetrztdljxun", "yssrmkzrkexbdyjmhcrsdtmoutpioxyzpvxew", "uelddsjmcd", "ndfusharrncdsfhoahubemaodgmurjtuijmvmeyzoggx", "tslcdvmkxghkrmqfjmocecbomtfezueo"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 45916;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> label = {"vsisxnonlnevppydg", "ubxpgyermukgwgwkkqmqwvmhwokvvsuhpylcupqyaihnixfzrx", "titkuplqoflpnqfoerdzsjmic", "pdelcbbbrhavnwjqweorrlpubnjatqoldykthfzomfhje", "hacidlhbls", "sfwsumhasxcfhurexknipvzv", "pcjlokgrewtfwzq", "et", "kgzgepszzrl", "ixyunjdxglfjowsthiwafxdtjzzwgkkenrmksem", "wpnkptrjzfgzdvtcxkxotubauyo", "sjuz", "vkqcaqq", "jelnslrncuqtretdqvqfgxic", "hudydfvlmlhdxegzfdldoceqqd", "txoialmldnsyqx", "qxqrzcmlzrwgzcwlpqipbqhtmrjoattuhaokd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 20400;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> label = {"awvwjarebivolgawmcbhxefrjopdnvnxzsbo", "npndzcjqloulxxybjjwddanfrlmgwrveyhvvoyzamjdhvjyvld", "ntqgwshupriimuvesbq", "qpcv", "vjpiuvqcghsavjciykmknjrvbtezvjblvoocrhmtapmstswvhy", "cbthntqijmgggawqjkecqkziblkzuislddpjtekz", "ecayifdljsnuoezdiupdpmftbpqvkyfwsmmhhjfojh", "one"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 16295;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> label = {"aeffhggfjhijhejgigiggejhfhgjejjhegjheegjhifjejfffi", "befiihgffjfeffejeefhjighjefjhgfjhfffjejhjffgjhgfgh", "ceghghhiehjfhijjgggfjeejiifiejjehhijjggjhfghjgiheh", "dejhfhiehhfjiheegffgefegjjgggiijeihiifigfeihffighf", "eeehgghjjfehhhegffifjffeegjhjffgjefeijgihifgijegff", "feeefggjighhfhegeghhigefjejihjiigejijggfjhefhgifeg", "geffeefheieifejfjggjghgejihfggggefgejgjfihffihjhfh", "hejeifhgfegeieihghhjiffhhefijigjjejjeejgihghjejjff", "ieijehgfhjjegiifgffgjjehhjejheefgfgefgjghgffijfiff", "jehgjfehheieiifeefifieihhggihjiifiifjegjfhihehjihg", "keifefhhigjffgihgeehhgejhejijijieheieiihjggiheigij", "lefghfhefighefighgiggihheffgghjjieghgefffhggfihghi", "megfihejghjfhggjffefjffhiihhjhhegehjfihgjgjgfjhfig", "negjhijhhfghhjjfghffefieiihihjgfgjfgfjijfeggfihhjf", "oejfeehehgjijejhieihfjggfhfjfffjiigejjiijfffjjjfhe", "pejijgigeigiggiejifeeifefhgfhhjfhigffgfihfegeeihig", "qeefiegifejfhejighefjejigijfghfefhgggefjiegeffhhji", "reiffjhhhhgggeeefjfhhhffjjggiehjifjefgighhiihgifje", "seieefgefejjfggjeggeejhhifejeggehfiegfghjhhffgfihj", "tegeiifjgjhffjiffifjegffjifeiffhfegjhijhgghiffhjhh", "uejeeeggjgefeggejjehgfejggefijihgjfgffgfejjhgijhjf", "vejjhgfgjfhihgeeheeghgieijjjigegfefehjfgeggghgjhfg", "weefjeffiiiefjgefhifhfffjhgjigggfijefggfjhhfhfgeji", "xegejgggiihhjehigigfgghgiefhgjiihffjgggjhjihgefjgh", "yeeghjhjhehfiehehjihfieffieefjiggifffiejiejiiiighf", "zeejffghfghiiiiijiggiigeefjijfiheghgeehhhhggjhhfgj", "afjhfjgjghejfffijgiffieigefhieifhihhiifeggfiffffei", "bfiieifihgfeiejfjjhhhefjiihfhehiggghfgihfhgjjeheih", "cffiifjhgigjhfjeijiiifgeighfijfeiigeiefjjjgfffjfgh", "dfggegeefffhffjhfhjhgijhfihejhifejfigjgjiejihjhfij", "efiefejiiigffhgefffjfjeggegejgheefegjhegjhfgefefgf", "ffjfgjghgghiejefejfhgffihjeigjgijhhgejjheejhjgfigf", "gfeifjeefjjfhffffejhfjgfjijfifjeffiefiigijghffgghi", "hfffegfhiehifeghfifhjfegeihgjeejgjjhehjhejijhfjifj", "ifhfgiigjjiehjejhjifhiieigiejjgggejfhgfhfgghhfeeej", "jfigjfefhehijhgefigghgigegjieggfhgjijeigfgeffjjehe", "kfhegifgeeffjefjiififhhieffefjhfieehihgifhjeejgghj", "lfhgegjgfehegegeheigjegeffhijfhggjgehiieeggggfghei", "mfifgfgjjgegeejgheeehjhgghjgihjeigeifhfghiggifghef", "nffhfjgjhjjeheifheigfgjieejfiihfjfhighhggfihfiefhe", "ofjfjhfhjifeigigghjgjgejhjjiieihiejghhjhhjggjghggg", "pfigjgejjejgehgejghgegejjfgijiiigiiggfjiejihifjjig", "qfffjhegjfhfigfejjhgjffghgifigiiejefhjheefgjhiefef", "rfjghhjheighhjjjehhhegiijeijfihhffhjehfijeigjehieh", "sfihegiiighjhffgggfheiifehihihhhgjeggiehjeggfgghfg", "tfhigieijeggfggehgjhjigijhfhiejgighjeegfeighjejhfe", "ufjihhhfgjhgfjfehiieghfgejijgfhhffggghhjfjfggihehg", "vfeijeihjggjehieijeifehgfjfgigijgiihjeeifiihgfghfi", "wfjghhjifieeiigigifhejeigifihfiigfgegheijhgggfhihh", "xfhfjegfggeegffeehfjijgiehhjeehifiijeeiieehghfefhi"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 244976;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> label = {"nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop", "nppop"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> label = {"mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm", "mqnrmpooqmqmoprprmmnqronqrnqrmmnopqorrqppm"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 86436;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> label = {"yvxwttuvyuvttutxxvywtvvywtytxuyxtttyvuxwytuwy", "yvxwttuvyuvttutxxvywtvvywty", "yxvttwuvtvuvv", "y", "yvxwttuvyuvttutxxvy", "yxvttwuvtvuvv", "ywvuytwwv", "uuxvxtuxvuvwvyvuuwutyyvxwwvtuy", "vyxuwutwvywxvxtwxtxvuvyvwv", "wxtuvxywvxwwxtvyuuxwtttwvxyutytuyvxxuvyy", "wwutuvvwuyttyxywuvxx", "yvxwttuv", "vxywtxvtu", "yxvttw", "wxyyxvuwuyyuvvwwu", "wwvuy", "yvxwttuv", "uwxyxxxxutvywwttvx", "uyxwxtyxxtxuvwyywyvwxuvyuyxyxvyuuwy", "yvx", "yx", "ttwwyvwvxvtxvuyuuxvvvwutt", "vyxuwutwvyw", "yw", "yuwxuwyyy", "yx", "xyuvxytttvwtvywwyuvwvwuwwvutwyyxxtuvwt", "uwtxtywyuutuwuututyuyxw", "uutuwytyxtuvxwtxxwtwuuwwtvwtuyuvwvwtuvyuvvy", "xvxuvwutytvyuuttxvwtyuxxtvutxtvxywvuwxxxtwuywwy", "xwuxvyxyvtuttvuyxxtyxyyvyuyuvuyuwtyvxttt", "uwvtyyttttvu", "yvxwttuvyuvttutxxvy", "wuttxxuxtuvxuywyvxxwwt", "wxwwxwvxyvuyvvvyuwwuutwtxtyttyw", "wuuuxyxwvyyvxtttwvxtvtxwxv", "uuvyux", "uwywuyyvwwwwttwuvtxwtwutxtvuwywwuxxwyvxwxxuyxu", "wxtuvxywvxwwxtvyuuxwtttwvxyutytuyvxxu", "uutuwytyxtuvxwtxxwtwuuwwtvwtuyuvwvwtuv", "xyxvtywwxxttwywywvtyyuttuwyuxtwtxtvtxyuvxv", "uwywwvxvxwxuuyywytuuvtvtywvttxyxuuywvvwxut", "y"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 50804;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> label = {"uxvtyutxtuuyyyttyuttuwyuttwu", "uxvtyutxtuuyyyttyuttuwyu", "uxvtyutxtuuyyyt", "uxvtyutxtuuyyyttyuttuwy", "uvxuuuytvtywyyuytwwyvyxxwu", "uxvtyutx", "uxv", "uxvtyutxtuuy", "vvvyxtwyyyvyvvvuwvxvuuttvw", "ux", "ux", "vvvyxtwyyyvyvvvuw", "uxvtyutxtuuy", "yywwuvvyxyyvxwvvwvttvuyutu", "uxvtyutx", "ux", "vvtuyxxwxuxwutyxvyvwuwyuxyuxuyvv", "xtxtvyyxvtwvuvuuvyvu", "uxvtyutxtuu", "tvyyvwvuvyywxtywttxxxyvvtu", "uyxutywxwwxtuwxuvyyvxxyxuxwy", "yuutxutvwuuxvvu", "yuutxutvwuu", "uxvtyutxtuu", "yxuwvuvxtwvuxvwxvwttxvtuvtvuwyxvtuv", "uxvtyu", "yxwtuuyuuvwt", "uxvtyutxtuuyy", "y", "xtxtvyyxvtwvuvu", "ttyuwuxttxtvvyxyuyxtuuutvwwvyvxxtx", "xvttyuytvuxxwxtvyw", "xtywxxwwutvtvwvvvyvuxtttvvxxxxuvxxxty", "xxtwxwwywvttxuwxtvvvxxwtyyu", "vvv", "wtut", "ttxuwuu", "xvttyuytvuxxwxt", "tyvvuttxuytxwyvxyuxyxwwu", "tyvvuttxuytxwyvxyuxyxw", "ttvvvvxuyvtxvvuwtxyvyutuxtvvxwxtwxtwvwwyxwwwuvywy", "yttvvuxvtxtvuvytuxvytww"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 31633;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> label = {"wxwyytuyuwxwxvxy", "uwxtyvxwtywxxtyxwywttvvtxtuvtuutuyuw", "wxwyyt", "ttxuvyvvwtvwytwywuvw", "twyvttyyvwvtuwuwwwwuxvxvxvvywwwxyuuuv", "twyvtt", "t", "tttxxyvuuttwxxwuuyttyy", "wxwy", "yuttvtxwx", "twyvttyyvwvtuwuwwwwuxvxvxvvywwwx", "uwxtyvxwtywxxty", "w", "wx", "w", "yvyx", "yxutwyvvywyxxyu", "wttvyxtvwvutvvxwyuywwvwttvttyuyyxwwvwywvxxvyuwy", "twyvttyyvwvtuwuwwwwuxvxvxv", "wwyyvywtvxvuxwywvxttuxyuwvwxuwxvvttxxv", "w", "yvywy", "w", "twytwtywywyvwtvyvxxtwtyvwyyxxtttwvuw", "yxywttvvyuxyuxwvvwyyvtttutuyutxvxvuyxvyuuuyvvyv", "vtvytuwvvywxvxwytuyty", "uttyyxwtwuutxwwtwwtyvwttwtxyt", "xuwutvvuwyvyuxxwvvywyuvvyuwxuty", "twyvttyyvwvtuwuwwwwuxvxvxv", "wwvywxtuytyutxtuytwyvtyuyutwwyywuxuwwuwwvvutywt", "tw", "ttxuvyvvwtvwytwywu", "twyvtty", "tyuvuuuwyxttxuuvywwwuuvuuwuxywvtttwwxy", "txtvttvvxtuuyuyywvt", "vwvyuwuuuvwyxuvxvvx", "yu", "tuuuxvvtxttwtvvxyvywv", "wtxxxwuwt", "uyttwvuxxxwuvuttwyyxxvwwvvw", "vuwttwuywvwvvutwxvuytuywvwuwvxwxtxxywtwv", "uuyvvtwtvyxyxuvytxxxv", "vxyxtwuywuxwvuwxwvxuuxuutwwuyvxvywwv", "wxwy", "tuuux", "wyuuwyyxvwvwvwvyyxvuvvtxwtyutvvttuxuwyxxww", "uwxtyvxwty", "xvvvttwv", "w"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 50307;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> label = {"wuvuyutwwuyxtyvuvutxyyvvyyyw", "vtwuywyyyuyytwyt", "vtwuywyyyuyytwy", "yuytvyvvutwxwvwwuwxvvywwuxuyu", "wuvuyutwwuyxtyvuvutxyy", "tvwxxyxyuxwxwwyyvxuxvuttyv", "vtwuywyyyuyytwy", "wuvuvxuu", "vtwu", "tywttuvxxvxytttyyytwvwuttvvxvu", "vtw", "vtw", "yuytvyvvutwxw", "xuuttuuuutuytxuxx", "uvvvutwwuvyutxuxvwv", "xtuvtvuwwyvvyxwutttxxwx", "vt", "xtuxyuvtvxtyvvuu", "uywxwxtutvuvywyvtwvytwuxyvyxvxxvvxxtxuxxvvwwuyw", "v", "yuwyutwvtvtvxyxxttytyyuuvu", "v", "xxuxuyvtwvtxwxuuvuvxtyvuvxtttu", "vt", "ytuwtvtxuxtwuvwt", "utwvyvyvtxvuv", "vt", "vtwuywyyyuyyt", "v", "wuwwtvwvv", "twuywtxvvuwvxttxuuuvtwxvwvyvtxvwwy", "uwuutyyuwvuxvvwyxwxuwxvxvwwttvttxywwvvww", "wwuuuyvtxy", "uywxwxtutvuvywyvtwvytwuxyv", "v", "yyxtutvtyttxutuywttuuxyvyxtt", "utwvyvyvtxvu", "vtwu", "vwtttyuyyx", "twuywtxvvuw", "vvyvwwxxyxtxxytxwvyxwwwtvttytuttwxvtuv", "utttxvvxvtxux", "xvxwyvvwyyuxyytxtwwwyvttywwuvtvxxyyuvyywv", "wxvyutw", "wvuwywuwxywtxw", "uywxwxtutvuvywyv"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 34495;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> label = {"ttytwuwxxwutytvwvwtwwvxwutxutt", "ttytwuwxxwutytvwvwtwwv", "ttytw", "tt", "ttytw", "yyyyvyxwvutwyvwvuwuuxxwvtwwxw", "t", "tt", "ttyt", "tt", "ttutvtyuttvyttywuuytuwuutwxx", "ttutvtyuttvyttywuuytuwu", "yyyyvyxw", "ttutvtyuttvyttyw", "ttytwuwxxwutytvwvw", "xvvxuxtwvttwttxxxvv", "uttu", "tt", "tt", "yyyyvyxwvu", "ttutvtyuttvyttywu", "yyyyvy", "t", "tt", "t", "ttyt", "yxuwuvtw", "yxuwuv", "twtuxxt", "uxyuuwxyxyxxwvytxyywvyww", "tt", "tty", "uyxxyyt", "xty", "txxyyyxttwwyuxvwuutuyvywwwvvxxyvvxywxt", "xtxwuy", "tuwxvvwyuvwxwvwwtvvuuxxywttv", "t", "wutttwwtwtvvvyuwvtvttwuyuvytvxwttxxyvywtv", "vwwwutuyxwxyuuvvvyvywwuxuwwtvuvyvtxvvyxxxyuywutw", "vwwwutuyxwxyuuvvvyvywwuxuwwtvuvyvtxvv", "txxyyyxttww", "wytutwwvuyuuxtwwvuvtvy", "ttyt", "txxyyyxttwwyuxvwuutuy", "vwwwutuyxw", "xyuwyutyywvvyxt", "xxvyyyvvyxxuuxtxytutwyuvtvwxuwtxtwttt", "ttytw", "yxtxuuyvwuxwvwvtuvxvttutxuvwwxvxutxxyyvvuyyyvuyx"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 31951;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> label = {"vxytxwuvxyvtuyyxwtw", "vxytxwuvxy", "yvuytvtvyuywvttuwxuuwywxtxwwwyvuuywxtytvyxx", "vxytxwuvxyvtuy", "vxytx", "vx", "wvwxyxtuvyyuuuxwtxwtwxux", "xxvyvuutxwxttwttwxtx", "v", "wvwxyxtu", "xwywvtvvxuwtu", "vxytxwuvxyvtuyyxwt", "vuxuxxywutuxwv", "xxvyvuutxwxttwttwxtx", "twyvyvwvtywtxwtwwwuxutxuyvvvuyuwytvvxx", "vwwwvuvxxtyywuttwxtyuxxxxyuuytyw", "uwxuvvxuxxttx", "vx", "vx", "wvwxyx", "uxxuwvxtvuxwttyyuvuyytyxywtvxuuuvvwxtvwy", "w", "vwwwvuvxxtyywu", "yxxtutuxuvuywuwxvxuvywwwvxtxyvxtwxt", "wwytutxxxwxtwyxvyvvwuxywyyx", "vxytxwuvx", "vuxxuuywywvuyxyy", "vwwuwvytxyuytytvvwttuyuwvtuyv", "v", "xuuvtxv", "ttvtwuwvtutxvwtxw", "vx", "vuxux", "txvwxuuvtuvyvxyyxuxwwvxvxy", "xxvyv", "wuwuyytuvuxtyxtyywuvtvtxu", "vuxuxxywutuxwv", "vwwwvuvxxtyywuttwxtyuxxx", "uuyyxtxyyuwvvwvwyxuuyxvxwyxwvyytutuyxtwvwuwxwutxvt", "uuyywxywwtuuxxttuxxwxuuvtvxvtyuxyuuttt", "x", "vwwwvuvxxtyywut", "yxxtutuxuvu", "vwwwvuvxxtyyw", "txxvxywwyvtvtyyvxvutyvxwxxuuuvuxxwxuxwuxtyuyv"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 39263;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> label = {"yxutvtwtvvwttuvyuwxuuuuuyxvtvywywtxtxtxyytvuxtt", "yxutvtwtvvwttuvyuwxuuuuuyxvtvywyw", "tyytxwuuvtuvyvtytvx", "yxutvt", "yxutv", "uttuuytutyttxwwuvwxwtvttwywutxuvxwxtutxuuvtxuvv", "yxutvtwtvvwttuvyuwxuuuuuyxvtv", "xuvwwtvuvxuywvxxuuxyuwxx", "ttvxwwtxtvuutytvtuuwuwvyyuvy", "vtxxwxvwvuutyxtuutxwtv", "yxu", "ttvxwwtxtvu", "wtuwwxtutvtvvxywyuwtxvtyyu", "yxut", "uuvxwxytywwutyutwuywutwu", "xvwytututwuwyvyyuw", "tyyuwxxuvwuwxxvuy", "uvvuwttutwutvttvxxyttwtutytxwtxvyytvuvwyvutvwvw", "tyyuw", "utuxyxvvutvxwyttxywyywvvtyvxtuwuu", "ttvxwwtxtvuutytvtuuwuwvyy", "ttxuwuxvxxwtyt", "txuwwuwwuyvuvuuwwwyxuuuuywttwuxwtuytvxuxuuyvuuvwxw", "yxu", "ttvxwwtxtvuutyt", "ytvtvuvwuwwwxxvtvttuvxuyvuvxuuwvuvwuwvytyxxwytuy", "tyyuwxxuvw", "wxywvxttyuxvxuyutv", "vyyyutwvxvyuv", "ttxuwuxvxx", "tvxvvvyvvtyttvvuxtwwtxyyvxuwxxxwuwxxutut", "ty", "tyytxw", "ttvx", "wxyvtuttuytxtvwvtvvutuuyttvyytvxyuyxttxxytvyxuy", "yuwxutwxvyxuutvvtxxyvvvyuuvtvxtyxwty", "tuwxtvuxuuvtuvywxww", "wwvttvyvxxxyuyyutwuyuvwxxwxututtuvtwytyytxxytu", "yxutvtwtvvwttuvyuwxu", "tvwutwyuvtxxwtuwtvtyuwutxvuxuyuwxu", "y", "vxtutvxttwxxtywxtvtyvuyvyuuytvttuxvxuyuxxuyx", "utuxyxvvutvxwyttxywyywvvty", "wtwwtvyxxwvyuxxxwxxuxwwxwytvutytywtvtv", "tuxvyuwuxwwxuwwxwwttxwuuuwxtttwtutxywwyvwt"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 64416;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> label = {"vuuxxxxuxutwuwxvtwxtvtyuyxvuwyxwtxuu", "uxvyyvxuvuywttyyxvwxtvtwyxtut", "uwwxtxxuuuvyytxyxuvwyxywvtvwwtyxxwtxvvwvtxxxyvtt", "vuuxxxxuxutwuwxvtwxtvty", "uxvyyvxuvuywttyy", "xtxyuuxtttwxuxuwwwvw", "uxuuvwuytwttxtvwvuvtuxyyt", "uxvyyvxuvuywt", "xtxyuuxtttwxuxu", "xttutxytvwyyvytwvvtuywwuyutywwxwwuyx", "xttutxytvwyyvytwvvtuyw", "uxuuvwuytwttx", "wwuvy", "uxvyyvxuvu", "wtuvxtvwytxwtxxuyxwvttxuwwxvttuxuwxwuuxuuvtytxx", "wwuv", "txtyytyywwvxytttyuxtwxyvxtxytvxvxvu", "xwtytuwwuvtvxvwuwxuwvxyuwyvvuytyvwwvyyyxyw", "wwuvy", "xtxyuuxtttwx", "wwuv", "txytvwxxwvtytvttuxxuytwtywvuvyvvxytuxvuvxvyyyyvx", "xvu", "xt", "vyxwvvtu", "yvvxvy", "vu", "w", "wyxtyxytttwyyyxyu", "vyvtxtxvvxutwvvytwutuuvyywtuvuxtyvty", "uvvtywtwvtyyvxtvtyytvtxxtvvtxuyvvxy", "uxxtuwywtxttxxwxutwvyx", "uxuuvwuytwtt", "xwtytuwwuvtv", "uty", "wtw", "vu", "wwwtvxwxwvuvywtvvuwvuvwxyuxvv", "wwu", "vwtyytvvtvytvwwuxvvtvuuwtwuuyyvxvwyuxyxu", "tvtttxuuuttvuwvtuvtywvwxwvtwxuywyyuxvtwxyxvxvttx", "wwuxwyywuyxtwvtxyuxuxtvvxuxxutyvtxywvxx", "vytywxvwuvuvttvyxuxyuvtywyutwyyx", "xuyxytvtyyyvxvuutvwtxyvyvxwwxtwvv", "wwuvy", "vuuxxx", "vvuutyvywwwuvxxvvyttwtxv", "uxvyyvxuvuywttyyxvwxtvtwyxtut"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 54485;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> label = {"xwtwtvvyuwy", "xwtwtv", "xwt", "yvxt", "xw", "xwtwtvv", "yv", "xwtwtvvyuw", "xwt", "xvxyxy", "yv", "xwtwtv", "xw", "uwvuvwyyytwtuvwuwuxy", "wwxuuxwwuywuyxwxuxuyy", "wtytyvtvyyxxutyttvtytywvyvtwwvwwuxxutuuyytttuv", "vuwyyuwutxuxwtvxxu", "xvx", "wwxuuxwwuywuyxwxuxuy", "twyttvtttywwuvtxvuwtwwuyyyxuvxtyyvwttywvytuyxywt", "yvtxwutvutyvtwuxuuxuvtvtwuywyvuwyuxytutuyuutxvtxv", "yv", "xw", "xwtw", "twytt", "vxttwtutuyyutxuuvyuwuwuwwtuyuwuw", "yvtxwutvutyvtwuxuuxuvtvt", "twxvvtvvutuxuxvtwvxxvwvwtuuwuvuxvyvyvxyutttwyv", "wwuuyw", "x", "xwtwtv", "y", "xwt", "x", "yuyyvyvyxwyuvwtuxttuxyxutuywwutvywwxwyvxyvvuw", "wvuxvwytvwyytttuwtuxtvywuuxuwuyxvyuxxuuxtwuxvux", "vwvwyyyutttxyuvvywvuxwyywwt", "yuyyvyvyxwyuvwtuxttuxyxutuywwutvyww", "yv", "ytt", "ttvtyvxyxytx", "yv", "utwvtwttuvtttxyyvxxvtxvwtx", "yvyxvuyuwx", "tw", "uxtwvuvvvwtxvuvywyutxyvyxtyxyvuxvxuxxtyywxxvyuv", "ytuxxywwvvywtyytyxyxwxxtvw", "twvvtxwtwwvttxxuv"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 43221;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> label = {"yvyvyvwuxvxuvyxxtwuxvuywytwvxvytwtwwvyxvutt", "wtvuw", "yvyvyvwuxvxuvyxxtwuxvuywytwvxvytwtwwvyxvu", "yvyvyvwuxvxuvyxxtwuxvuywytwvxvytwtwwvyxvu", "wt", "yvyvyvwuxvxuvyxxtwuxvuy", "yvyvyvwuxvxuvyxxtw", "yvyvyvwuxvxuvyx", "vuyuywtutvyyuwyvuutuxwxtyyttvutwuuxxwxvtx", "wt", "wtvu", "yvyvyv", "tyyvtyttuvxuvtvxwtvtxwwvuuw", "yvyvyvwuxv", "yvyvyvwuxv", "yvyvyvwuxvxuvyxxtwuxvuywytwvxvytw", "yvyvyv", "yvyvyvwuxvxuvy", "ywxxxtxvywxyvwtvtwtuvvtvwuvxvyyyuwytwuyvtyu", "tyxv", "vyyutvtyvuvvxwyyyyuytvuvxxvutwvvyxvxutvxxtv", "xwwvtwuxtyxuuyytutvut", "uytyuvtytttyxvytwxxxtwxwxxww", "uvxuvvwutyu", "xtvuxvvuvxxvywvxxxuvwxyuuvvxvvywuwxw", "yvyvyvwuxv", "txwtvwtvxvvywuyyty", "yvyvyvwuxvxuvyxxtwuxvuywytwvxvytwtwwvy", "yvyvyvwuxv", "tvvywxv", "yv", "xtvuxvvuvxxvywvxxxuvwxyuuvvxvvywuwxw", "tuyw", "yyuy", "wvvxxywxxuwvwvxxvytvuu", "vwuutvtvvvuwxvwuwvv", "yvyvyvwu", "vtyyyyuxtxwuxuyttxvtuyuvtuxy", "tywxwuyuxwvvxxuyxvwuxwvxw", "wt", "y", "ytuwxvuuwtxttyuwyyyuyxwwuxytuwxwtwyyvt", "uw", "yuyutwywutwwuwwwutttuuuxwyutxvvy", "txuuxuuvvvxuwxxvvvwuwwuwyt", "xwwvtwuxt", "vtyyyyuxtxwuxuyttxvtuyuvt", "tvvywxv", "ytvtutyy"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 40907;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> label = {"baab", "bbab", "a", "baa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> label = {"canada", "cyprus", "croatia", "colombia", "chile", "china", "cameroon"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> label = {"canada", "cyprus", "croatia", "colombia", "chile", "china", "cameroon"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> label = {"abcdef", "abcdzy", "abcdez", "abcdzz", "abcf", "abf", "xyz"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> label = {"aaaa", "aaaaakuroneko", "aaaaais", "aaaaavery", "aaaaacute", "aaaaamofumofu", "aac"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 855;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> label = {"kjsadhkjsadfkjasbdkjbjdbfbsaldjfkjbasdkfjjsdbfkjjk", "nfaskljdbfkgsdbfvasgdfajshdfkjlahsjdkhfajdhfjskaak", "djfkhasdhufaiusgfjasdfbasmnvdflkgasdvfahsvdfjhsvjj", "asjdgfghoiurhgosiudhrgaaahjajkasldjfhlksadjfhjdhfk", "asjdgkjsdfwerioutweoiruthewjrntmenrtnekjrlejtkjerj", "hgbuhkjhjhlkdsjfhgklsjdfhgjjjhkjhkljhjhfgjkhfjhgkj", "fznowftaeaelmrryhlmabjunwzeoyzjtzfjatjbclrlduvcvyk", "coswmokhzkenlhjppksutrsmblsvzbhbmbkhodrloaxfwkzmic", "xrxsfegxbrmotrkhxzoavnoiemqvkrxlbkagiwqppnzllvejcb", "loafformfmfzuzcmqeqyluyjbhlfcosozlmcfjcyizbsxnqasf", "hhcinfpsixuhbbnnoclupoentnzmqmjlytjfiyjaoirzwpyodb", "ujuyochicgcdiyrdsweyvydmtwoiryvihmkhhptflzbygzyxof", "plxusfkichdcvnagwhdmyodqeegzjqnqkhiumbsjvagxuymozb", "gcnxhuoksjvmrapzjntpbqsyevyysuotdefubmaziyysqvbmez", "umwfmbqdsynoatvqkylgetbxocxpgijhghtvcglbaufygnoygf", "mpdyafkypgzsvrcsweianbwfcwmhmnohtkfqoijuqzkdeuqhsy", "rswwlejvbqrxpkbjkouchonxcqbzcnvpizvnmhiqdexwskaryx", "mahebklhoxowlkgkkhowgqmtbbaigjuahmsfisygngsketsikz", "vhpdsdzhtfxewiidtadfthofiomrwnvzxfbnopusduzbmzpjwp", "qijxfqugcyinpdwvqicttvrrzwnhqwqnkbjppcirgnbdnzgtdq", "jdqjnirmiionhnqfmbdmikwndpttafqluzvojbmqhdgravsadd", "lkbnnscwxqqcsmizwhjwtyzyzknktthaemzgisrfouidrjxjmg", "oqgwabdgyowlwzspsupegbroejidsuittdrtqyyjfgvvwxywec", "jbgswxgypfrjejpuqqaqkhjwxlesrtputgsrullguylcwzjykb", "rbmfwcqtypejsbxmrivtwtdhlapkakdafnogcdskbpylsfrlnk", "vwwaijsuokjunzedhwlzzscsofdvrzlgcntzfuanjplwidmtfw", "qmahujabzmzpenrhkocduqlvgbbyzcdfvgxihuzsmbwjatjuos", "jypewlyuiydgfrxjfsrpsrvzirzgjzyrqatassvwamzptzqfbs", "pudhlwraxvnvnzzrpbmpjlvdifzjzymzubfqtfliofqlyfeeom", "wjerziyqgsfgwfzwhqfykfiirfohhmeqerwcldgibjefybfjar", "tbkfvwlwgbupgorpqozrivwmntcndvuvrxpuuwmdfwrgqqkodh", "ddodjnhfpjcnelkcnrqkjiirmsalaeobfrxfsapkoflbloxxgf", "vwcjinzwsdxxrvmuyfveafpclxpoftcdwpgrquwseibotdbupm", "aljsdzkudsacqngpvycsgnrvwhakyhcunatcrdinkdpgnrdotl", "arvyuidtblbiwiuhndipuzftvlgdbiwjuxmbxymndqkjnihhvb", "mfaboejhpphddvoarnetbjwcybqpymiicmwjqjcpmsbnrdkbfe", "bvolekpsaegdvqjvrrglshdhwjskzcqhnogksxxjhlyrybwhfy", "ziuwxadwimuqqdlwtmusdtgcvcscqnbeuefxxaqwbljnyywnyz", "wtdmxbmlplfpsimbmuoygrikursqqlkwtheokfyhknzuewrmvu", "dqdrqpepybcuytwitqdxhypzdgvmchfmhcjqtxioqsvbkuhnmx", "pbadpbhjvyjmyeoikqwtkibmzjloclgroyzjxmklwtznlwxsvv", "ypxttakignbvyfiisnkhuyjnfpyjxhsyaysildatgufznckrkt", "tuedavvttasumgunlhwonssvenqntqgwremipdljpjmkslhubu", "wwtbwmjdjyxqprbynqtwwontidurfmmrdlknrsyoiiofjtowht", "uigcfugusmqasrvozgfcnbzycmyixolsgqtyloqikgpajyapgs", "lerkeuhrhwrqfxqumicqrgvswlnojhljtsruohddoihikzgjwz", "feeooujuvuybuutxjhdqfmceahohklepzfhtxbegqvliqjynxs", "ldxfuouzcjvvqfjdjeqnbvxpkekdegkutcautpinqwfjqkyjpf", "nwhxtkqvnkkpsimscsqwmkoharuennlcvudcekvrqtybqoiaxj", "itkpwdoquwtdankvkineanlzocbfqffcqrkpworhqnefqcqeer"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 244947;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> label = {"alxdfdjskalewoui", "jlkasjkdfwerrewqrew", "dingdksjafldasjflkdsjfsa", "croatia", "colombia", "chile", "china", "cameroon", "testing", "dingding", "algorithmist", "algorithm", "abfjdklsajlkfdsa", "xjfdksaljlkfsklflks", "fdsafjdklsafjs", "rewoirjweewrewrwe", "fdjsalkfjkdsawerw", "wodingdingdingsafsdalkjfdsa", "fdsalrewrueiouiorewreqerq", "fdsalrewrueiouioufdadsadfd", "alxdfdjskalewoui", "jlkasjkdfwerrewqrew", "dingdksjafldasjflkdsjfsa", "canada", "cyprus", "croatia", "colombia", "chile", "china", "cameroon", "testing", "dingding", "algorithmist", "algorithm", "abfjdklsajlkfdsa", "xjfdksaljlkfsklflks", "fdsafjdklsafjs", "rewoirjweewrewrwe", "fdjsalkfjkdsawerw", "wodingdingdingsafsdalkjfdsa", "fdsalrewrueiouiorewreqerq", "fdsalrewrueiouiouxxdsad"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 14753;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> label = {"gfxterhmzmqhzderpvfappjcpbeubfmphwnltbvyphyhbksfgx", "uppifgxtgeqdgpdgvpwuyussgyamqrhogibcnvijrvxbqniedz", "nqkiczyhwvmwbucqwqyhwxmgonupbivavluynosixhchsgdopx", "fjnpqavqzusiftyegahuvebbsvfnioqxswfqqhkwlrdjoraxuu", "mltdogtyqfybdcwefnxjbdipihqnlsgcbztaqzvgvqbmmyowhg", "alklfkjmzbhwnnohtwdusoefiztkrgtvemfnreepblhtxyhvxl", "npinegxjpfwzzmlbbymevgtejboqcguwpgsqjhhkinksdaskwq", "wlfhhrwhbtnfbftvpvgmcrfwktpxewvruggluutcihazshaima", "jwofogpndteagvyhtlokewydtgtpnjeftmzqolehjfrwgrzgji", "cilbyqkutnutrpwgubtgjljccaioshkwvkqfcrlrmifjldkatt", "qyjjsqwnwwgompafziuovunlznjwcgyehpxnqvwiznezohogxl", "ppyqtarprjlpbydrylsqxdjbjdboulblbwsqxinkyqhdvhqzht", "frjrknepjtbjhydntoiliontjalkvhjtwutxllhqdivfoyuspz", "esgbdojsafqptfebyyihtcplvpewltmfmwjifxbjfqdkrxplnk", "lctslmhllavqgqoplpgjziqimikqwzldwgsyvsdkhqdbsbxsec", "dlxmxersznqfdvpgzhzsqbgdwdoepoogurzsfexsljrxywtcbe", "jadbpbhnifxxyfehfeggzmoywvckkkbtfskqkxcaqkqvowahbg", "xltrgvpgierzqfwuvwmdyywmvgrxbuunjaabrkiwrrabhacnht", "itgdiwdsgkkuszhsebtibbyqufmtydinysliioaproydccqupj", "nqxayxhzkvdkxycquqsudnwhgghpwqrfjqasqgvjkofthssfcw", "nakcxiyqroygacadnfxoskjbgupdwycclrtsyvjzqpctqoztpz", "myfksztuerlljetmjjqifodvnumftzmfizudeuhophaiaqejzj", "auacbvfmslzushrliuynahhmvknmwozuejnvmhrdfbgadxwysi", "whfxqhtnzknvrhznjvdfkpwqpsvzgiyoduesvkoyruofszlnct", "avkytwmrraylovuwdihasduowcwnclianqdosvqhonbxeecgad", "jvrmboxakjmrwpemupbjfkkmeqywwvrhgrlyejeeyfmmupjzrf", "ylxvsxmmtavqisjsvvwehayweenqwuzuqcnkgajtgdefrjtrre", "pgcvzbjcpgsvlwvmwvwqcsbfmjztnkshytnqsgvwacxvkgdvoc", "gfmalgapuiejfavjyavghiaraqjdcdjoejooouuthuivacvrxb", "iebvprmmliqlwnolpigqdslcuntrzykdkunfohjafrhrfuxoki", "zowygmjjmzstqifzypqobugsnrrqhyafxouuycygdpdulfywnb", "kaovqauwowlxaqsuczvrujtbuzrpozoxkcopguwrqcoufqnijn", "lpxobtekchkvgqfriarxvkpwmnhvydygrkgtvaxxezdpbowdkr", "opkhfmtgdrqqvnprrxkwtqpqyvvzsutsgmfttcllowqulvtefx", "kkpmlowbqjgbnxwmgikusjfskfpfvgeavosyblxowvqoxfvdtg", "wbzbjjyzcehhrnxgtpiuwnpsrbribvaxayoblxbxxclldiwxtx", "ihuxvczwaartoikavvcqwrxfjptlpjwxwmqoodpueutqwnkzkt", "gcpxvgpvknonciwhxmaqvvqrxbmsobhuqazkamnuunodnwutqh", "wbcmijeadpitqqpxssaqqmutkfcrozcogkpkjkbwhkloljiuoc", "eymbwgcatemhlpkoudnikxqknruuynlkmohatjkoymvpasuvfs", "wvhowwwhpgsgtamuvbrkyvhrdjtyofpqupvuzpsgpdnmspniww", "umcqjynievlnohhawrpdkeofusgdqgoraylhmsqfoominqbxfg", "jupovbelyspifpaueklwuqoqlyfaarexlfcjxjnvofnwydwnpm", "acfvffzvnrddbbsiqlqvwuziokhzomnyicvwqyalycoxodbznv", "cjooarrhitztcoqnemroecvmforfwvviemsxjdwsfghcugvctb", "ccjtlhoirkribiurtnupkiyctargyezlzqdpnvtphdvhjjtyyy", "plcbhxyyvsylknlgievxwcwojcqwrzmaejrpespzziasrjbtcc", "umrlyujrnihqtlmzaxhdbxjgyggaimovjsewgicxholkictnrq", "oiwyahfpbthpkmjyuvlyeitldlsifzfcyabofiujmnqxtinzrb", "aevqrjnryiupisnjrfmmgnushnqbughxuxrmmiwtzmggtlzxvd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 244958;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> label = {"abcdef", "abchij", "ab", "abchij", "b", "a", "absdsadas", "ausi", "asudiadiu", "asidoa", "basda"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 582;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> label = {"abba", "abbac", "abb", "ba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> label = {"cbedbeafcadcccadedeadcfdefbbcfdbabeebeffdfbffffeee", "ddcbedecddabdfaeadcbfcebeabdfdcabccadccffbedceabde", "beefbafadabdacafbcddebaaaefabebcaaafeddecadadafbab", "bdeaeeceefbceacfcdecffedbbcfeceabcdcdbeffabbedceaa", "caaaabcddeddffbbdbcccafdedbacbcfeccbdbabbffcbcbdcd", "dacebacacefadbbeddbedcfcbcfbcbeeeccdcfceceaffeaadd", "eeedfbbeeedaceefbaebfbdaeacffbbebcffeebfdbcdefddef", "bcdddffddddcedaaaefcfeeaddffdaeefacfbedbfdbfaddccb", "abbbeaabcbdcfdcbefbedaedbfbfcaadbbfdadeeadeefafabd", "deafaddcfeeaeffafceedefdeefbebfbebcfbfeacbfecebace", "defedfdaafffadaecafdbbdaebcdaffedbffdfbaeeeaeddbda", "cebdbaefabdfffdfcecccfadcbddcddbaefaaecbdbceaecfee", "dfdfdbfbdaacfdfabdebcaecbabaaabcecfdeabfcdacafbfba", "ecaedcdacfbcbdaecbbaaeaadcefeccaaecfeebcffaeedefce", "afcbacaffddadeaeacabdebbeaebadedebebdfedcdbaeafaca", "faaeefeabeceafadfccfceedafeeebddbadeeededbdacdfaab", "dadfcfcfefdaccfccadddcefafbedebbeededbefccfeeddfce", "efeaafcddfbaadeeeabfebcdbafcdbebefbeccfdbeaacacced", "faeabcbadbdcbdfebbaceecdadbdccbfeaebcfacdeaddccccb", "cfecdafaceddbcfbdceecddbbecafdddedceddefadfcbaedbf", "fabdaeddcfbbedfcddcbdaaeccfbdbedceabaadecccefdbabc", "aabbeaecfddcebbbeabbdceffddbefaeaadfadffeacafbaaac", "cccfadbfececeabffefbffdfcabeedcddcbbbdacadafedfddb", "cffcdceeaefdabcdabaebddfadbcfccddfaacfaddbcfbceeff", "dfccdfcbfdaeadbdecdcbfbffaedebbaaeabdfdbafeabedbfe", "cbbbaccbecfdbdaaceedbdfcbeadddcceacedeaabefaeaddeb", "babcecabbfeabcedbddfbeabebacfabaaaecfaabecfaecaced", "aaebbeefefcdbefaaafbcdafaeabbbeadfdabfbcfcddbbdbce", "cdddaafeddddbbefefdecdbbfdaceefbccfacfffedfcfeebeb", "dcfedceebacccbefaeadbfbeecfbcbdbadeabdcdcfcdfcaebc", "cfaaaeebbfedbaeaddcedebdaeaeecdcebdcedcdddbcffaadc", "ebeacccdaabaefdbecdbdafeefbcbdaecabafcddecafbfcafc", "bcfcefbcfafaecbeabecaafffafadeddfbdafaecaddcddddee", "acbfdeceacccfedeeaebcdabaefcbdeaedefabccbbadbdfaea", "fccdefabbeeeeebffcebfadcdcacedfadefeeacbefdcefbdde", "bdfdeabadbdbecabeccbfbdccdcccbacdaaffbbceaebcecddb", "fbfbcabbedbaeeebffbcbfcebceacaabdcfbfcdacddaafaceb", "addbecdcbaaeabdebdbbddebfccadabfeccfccadfeaeebbded", "eebaeefcfcedebafdbfbccedbcaefcfdcaccadfdfccddefaeb", "ffdfffedfdabcbecbcedfdafccbccffafacbdeeccaacafaaac", "abbefeeadebfadaefdacfcdbbdffbfaacfdceacbabbebacbcc", "fbfafbabceffcddeddabfdabbfffadafffcddfbeaceeeacabd", "bcccfcbbdfcfabacaedbafdffdbbacfcfcfdceccfcbfebedce", "aeaeebedcffacfdadeddaedfacadaeefdeeeeedebebffedfbc", "eccacfdbfcebccefeadabdaadabfdaaeaeedafbebececbdbab", "cbfcabebeaaeafdebddeddafabbcdceccceeadffddedbceecb", "cfdbcefeeafecabdedbacaeebeafdbbdbbadcadbfacdeaccde", "cffcdfafabeadfaaddffbcaceeaebfdabaeececccbeaffafce", "bbeffabdbbfacdeedaecdccffcebaacccdddbbddaebfbdcecc"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 239869;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> label = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 122500;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> label = {"aaa", "aaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> label = {"aaaaaa", "abbbbb", "aaaaab", "abbbba", "z"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> label = {"asdlkfjhsad", "asdlfjhsadflkjh", "asdfljhsadlfkjhsadklfjhsadf", "asdflkjhsadfkljha", "asdflkjhsadlkfjhsadklfj", "asdlfkjhsadlkjfhsadf", "asdflkjhsafdklh", "asdflkjhsadlfkjhsadf", "asdfluy", "asdfoihyasd", "fasdiofuy", "asdf", "asdfoiuy", "asdfoi", "asdf", "aosdiufy", "asdfoi", "asdfoias", "dfasdofiu", "asdf", "asdfiou", "asdfiu", "asdfoiuaysdf", "aoisud", "asodifuy", "asdfiouyas", "dfoiuysadf", "oiusaydf", "asoiudf", "yasdoifuy", "asdofiuysadfoius", "asdofpiuasdfopiu", "asdfpoiu", "asdfpoiuas", "dfpiousad", "fpoiuas", "df", "asdf", "asdf", "asdfoihjasdf", "asdfpoihjasdf", "asdfoihjasdfoijhadsf", "asdfljhasd", "asdfljhsadf", "asdfljhasdf"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 10554;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> label = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> label = {"abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd", "abcd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> label = {"aaaabbbcdeasfasdasfas", "aaaaabbbbccsdsdaewdaada", "aaabasabdabsdacasbasbdasdas", "aaasabdasbdabsdbasdbasdsa", "aaaaababbabababababbababa", "ababababbabababaaaababababa", "aaaaabbbbbbbaaaaaaaaaaaaaaaaaaaab", "aaaaaaaababababaaaaaaaaaaaaaa", "abbbbbbbbbbaaaaaaaaaaaaaaaaaaaa", "abaababababaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaabbabbabsabdbasbdsab", "aaaabababsbasbdasbdbsabba", "aababbabbsbadbbasdbasbdsa", "aaaabababaabaabbabababababsbbsabsbads", "baaaaaaaaaaaaaaaaaaaaaaasd", "aaaaaaaaaaaaaaaabsbdbasdbasb", "aaaaaaaaaaaaaaaaaaaabbdsabdbas", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaabbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaabbbbbbbbbbbbsdas", "aaaaaaaaaaaaccacacacacacacac", "aaaaaacacacacacacacaccacacacaca", "aaaacbcbcabcabcbabbaccbabcabbabca", "acabcabcabbababcabcbabcabcbabcab", "aaaaaaaaaaaaacbbcbcccccccccacabca", "abcabcabaaaaaaaaaaaaaaaaacbc", "bbbacabcbabcabcabcbacba", "bacaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaabbaba", "abbaaaaaaaaaabababbaaaaaaaaaaaaaa", "aaababaaaaaaaaaaaaaaaaaaaaaaaaab", "ababaaaaaaaaaaaaaaaaaaaaaaaaaab", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "ababababbabaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaababbaaaaaaaaaaaaa", "aaaaaaaaaaaababbaaaaaaaaaaaaaaaa", "abbbbabaaaaaaaaaaaaaaaaaaaa", "aaaaaaabababbababababa", "b", "a", "aaaaaaabababbxabsdbasd", "aabbbbsdbsdbabaaaaaaaaaaaabba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 72043;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> label = {"bdcabaccca", "bbbdbddcda", "dacbacbacd", "dcdcbadddc", "ddcbbabdba", "dacbbddbbc", "adccacacaa", "cbcbcccbba", "bdacaacada", "adcdbcccbb", "bddcacbcbc", "bbaacbbbba", "ccbadddcda", "ccbaccdddb", "bdbdbbbcba", "ccccbaadcd", "cdabaddbcc", "dacaabadaa", "bcbdccaadd", "abaddbcbbc", "baddabdacd", "aaabbcdbbd", "ddcdaaccaa", "cbbcbbacca", "cdcbcddaad", "ccadacccdb", "bcaabccdbd", "baabdaacdb", "babbddcbcb", "acbbaabcbb", "abaabdcbba", "bacbdddadb", "bbcbbdbacb", "acdccbadcd", "bdbbaaabba", "bcccbaacbb", "dcbcadadba", "ccbbcbccac", "dbcdcbbcca", "ccadbcdbcb", "bcdaabcabd", "cddbdadabb", "dabbbdaccc", "aadabcccdb", "daadbcacda", "dbacccdccb", "dacadaadac", "cbcdaddcab", "ccbdbcbdba", "daccdabbdb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 9557;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> label = {"bad", "c", "bab", "bae", "bbb", "a"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> label = {"a", "aa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> label = {"abcd", "abcd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> label = {"acd", "bcd", "a", "acb", "ace", "ad", "b", "bcb", "bce", "bd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> label = {"aaaabbaaabbbbbaaaaababaaaabababbaaaaabbabbbbaaabab", "aaaaaaabaaabaabbaaaaaababaaaaabaababaaaababbabaabb", "ababaaaabaaabaaaabababababaaaabaaabaaabaaaaaaaaaaa", "aababbaaabbaaaaaaaabbaaaabbabaaaaaaaabbabaaaabbaba", "aaaaaaaaabaaaaabbababaabaaaaaaabaaaabaaaaaaaaaaaaa", "baaaabaaaaaaaaabaaaabbaabbabbabaaabaaaaaaaabbaaaba", "aabaaaaaaaabababaaabbaaaabaababaabaaaabaabbbaaaaba", "baaababababaaaaaaaabaaaaabaaababaabaaaaababaaababa", "bbbaaababbaaaaaaaaabbbbabbaaaabaaaaaababbaaaaaabaa", "aaaaaaaabbaaaaaaaabaabababbbaaaaaaaaaaaaabababaabb", "aaaaaaaaaaabbaabaaaaaaaaababababaabaaaaaaaababaaaa", "baabaaaaaabaaabaaaaaaaaaabababbaabaabbbaabaaaaabaa", "baaaaaaabaaabaaaaaabaaabaabbaaaaabbbaaabbaaaabaaba", "abaaaaababaaabaaaaababaaaabaaaaaaaaabbaaaaaabaaaab", "aaaabaababaaabbaabababbaaabbbbaaabaaaababbaabaaaaa", "bbaaaaaaabaaabaabaaabaaaabbaaaaaaaaababababaaaaaba", "aaaaaaaaaaaabbaababaaaaababaabaabaabaaaaaaababbaaa", "baaaaaababbaaaaaaaabaaaaaaaaaaaabaaaaababaaaaabbbb", "baaaaabaaabaaaaaaabaabbaaabaaaaabaaabaaaaaabaabbaa", "aaaaaaaaaaabbbabbababaaabbaabbaaaaabbbaaabbaaaaaaa", "aaabaabaaaabbaaaabaaabbaaaaaaabaaaaaaabaaaabbbaaba", "bbaabbbaabbbbaabaaabaababaabaaaaaaaaaabaabbababbab", "babaaaabbbbaaaaaabaaaaaababaaabaaabaaabaaaabbaabaa", "baaababbaabbaababababaaaabaaaaabaaabaaaaaabbaaaaaa", "aaaaaaaaabbbbaaaaaaabbaaaaaaaababaabaaabbaaaabaabb", "bbaabaabbaaaabbbabaaaaaaaaaaaaaaabaabbabbabaaaaaaa", "baaaaaaababaaaaaaaabaabbbaaabaaaaaaaaaabbaabbaaaaa", "bbabbaababaabaabbaaaaaaabbbaaaaabaaaabaabaaaaaaaaa", "aabaaaabaaaaaaaaaabaaaaabaaaabbbaaaabaabaaaaaaaaab", "aaaaaaaaaabaaaaaaaaaabbbaaabbaaaaaaaababbaaaaaaaba", "aaaabaaaaaababbaabaabaaaaaaababaaaaaaababababaabba", "abbabbbaaaababababbabaaaabbaaaaaaabaabaaaaabaababa", "aabaaaaabaabbabaaaaabbaabbaabbabaabaaaaaabaaaaaaaa", "baaaababaaabbbaaabaabbbaabaaabababaaababbaaabaaaaa", "aaabaaaabaaaaaaaaabaabbaabaabababaabbbbaababaaaaaa", "abaababbbbaaaaababbaabbbbaabbaaaaaaaaaaabbbbbaaaba", "aaaaaabbaaabbaaababaaaaaaabaaaaaaaaaaaabababaaaaba", "aaaaaaaaaaabbaaaaaaabaabaaabaaaaabaaaabaababaabbba", "aabbbabaabaaabbabbaaaabbaaaaaaaaaaaabaaaaabaaabaaa", "baabbaaabaaaabaaabaabaaababaaaaaabaabaabaabaaabaab", "aaaabbbaaaabaaaababaaaabaaaaaabbaaaaaabbabbaabaaba", "bbaaaababaaaaaaaaaaaaaabaaaaabaaabaabbaabaaaaaaaaa", "bbbbaabbaaabbaaababaaaaaaabaaabbabaabaaababaaaaaaa", "aaaaabbaaaaabaabaaabaaaaaaaaaabbbaabaaaaaaaaaaabaa", "bbaabbaaaaaaaabaaaaabaabaaaaaaaaabaaabaabaabababba", "baaabaababaaaabaaabaabbbaaaaaaabbbbaaaaaaaabababba", "baaaaabaaabbaabaaaaaaababababbabaaaabababaaabaaaab", "aabaaaaaaaaaababaaaabbbbaaaaaaaaaaababaababbaaabaa", "bbaabaababbaaabaaaabaaaaaabaaabbaabbaaaaaabbaabaaa", "abbabbaaaaaabaaaaaaabaabbaaababaaabaaaababbbaaabab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 242836;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> label = {"ac", "wy", "ab", "acc", "ad", "wx", "wyy", "wz"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> label = {"phqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdi", "gpnpuuhgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsd", "smzcnockvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarx", "bgfcbceyhjugixwtbvtrehbbcpxifbxvfbcgkcfqckcotzgkub", "mjrmbsztsshfroefwsjrxjhguzyupzwweiqurpixiqflduuveo", "owqcudhnefnjhaimuczfskuiduburiswtbrecuykabfcvkdzez", "toidukuhjzefczzzbfkqdpqzikfobucdhthxdjgkjelrlpaxam", "ceroswitdptpcclifkeljytihrcqaybnefxnxvgzedyyhngycd", "rudmphmeckotrwospofghfozqvlqfxwwkmfxdyygmdcaszsgov", "sodkjghcwmbmxrmhuyfyqgajqkcklznayxqkqoyzwmyubzazcp", "khktkydzivcuypurfmbisgekyrgzvxdhpoamvafyrarxsvkhtq", "dihersigbhzjzujxmmyspnaraewkegjccvhhrjvbjtsqdjootg", "pknfpfycgfieowqrwwwpzsqmetogepspxnvjiupalyynmkmnuv", "klhsecdwracgfmzkgipdfodkjmjqwiqpuoqhimvfvuzwyvijgf", "ullkjduhsjafbtlkmfqrmyjfjnhhssqctydteamdcjbprhtneg", "yiwxgcjwlgrsmeaearwtvjsjbaoiojlwhypnvruihoswkifygt", "ydhacwyhsgewzmtgonzltjhgauhnihreqgjfwkjsmtpjhaefqz", "aauldrchjccdyrfvvrivuyeegfivdrcygurqdredakubnfgupr", "oqylobcwqxkzmausjgmhcmhgdnmphnqkamhurktrffaclvgrzk", "kldacllteojomonxrqyjzginrnnzwacxxaedrwudxzrfusewjt", "boxvynfhkstcenaumnddxfdmvzcautdcckxaaydzsxttobbgqn", "gvvpjgojoglmkxgbfcpypckqchbddzwrxbzmqrlxvobtwhxgin", "fgfrcclmznmjugwwbsqfcihubsjollmsqsghmcphelsotflbgs", "fnpcuzsrupchynvzhcpqugriwniqxdfjpwpxfblkpnpeelfjmt", "kuqpzomwnlmbupmktlptndmpdsydsgvfpenemwborifsuqhces", "kmkhssmvnonwafxwhgbibabvqopqfoviussqfqwehtxdzujtln", "txmrjxxwtlggkytbiolydnilqadojskkvfxahhjmbocljarint", "dwcldvdxropbyjzwyyojuothwmlvrglfzdzdbtubxuoffvncrs", "wsaznmoijoivvgobqpnckwvnhkebmtdhvygkjisuxhatmuudqb", "hmknhfxaxqxkjlzzqtsjfaeedfuujkolxjoqkdvfepvlhvhrwt", "fdukxffjpsswyxlijjhevryxozbafpfmowgrgonuatdqlahygg", "yljddjhmltedzlodsrkeutgtnkntarjkpxinovgzdthunwooxv", "jjmpsvknhkwjopmmlebksucvzqlyqnwcmbvbhrmlowpjbwyvwt", "gtoqnmicxapzarknnxtuufarzrosdqwsmtcjghecqudosrtjxy", "aaykqrxycrxuwjxnpqjnbkcpdmokalxapemvbqlzsvxzkutapp", "wgzpdpyzkzcvbntcvfxsxpjaoxtfhvxxytgokrcxaetauqgndm", "phwzyiayabjrqgeppxyjsttyzuvldvybsuxkbmfzvrtnovidzn", "pghozvafmsnsnqivmvubcwtfsrqtmknepbhowejazhkwcmmtpi"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 244958;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> label = {"aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> label = {"baabbbabbbaaabababbaabaabbbbbabbabbaabbbabaaababba", "abbaabbabbaaabbababbabbababbaabbbabaaabbabbabbbbab", "abaaababbbbbaaabbaaabbbabbbaabbaaababbbbaabbabbbaa", "abbbbbaabbbaaaaabbbbbbabbaaababaaabaabaabaaaababaa", "aaaabaabaabbabbaabbaaaaaabaaabbabaabbbabbbbaabbaab", "bbbbbabbbbabbbaabaababbbaaababbbaababbaabbbaaaabab", "bbbabbbbbaababbabbabaaaabaaaabbaababbbabbababaabaa", "bbaaabbbaabaabbbaaaabaaaababaaabbabababababbbaaaab", "baababbbaaabaababbaabbaaaabaaabbabaaaaaabbaaabbbbb", "baaababbbaabaaaabbabaababbabaababaaabbbbabbbaabbbb", "bbbaaabbbbbbaabbbbaabbabbbaaaaaaabbbbbbaabbabbaabb", "bbbbaabaababbbbabaaaaaaaabaaabbbbaababbaabaaababbb", "bbbbabaababaaaaabababaababaaabaaabbabbbbbbbbbbbbba", "abbaabbbbbaaabbbbbabaabbbbbbbbaabbbbbaabbbbaaabaaa", "baaabbaabaaaaabaabaabaaabbbbbababbaabbbaabbaabbabb", "babbbabaababbabbabaaaabaaababbaababaaabbaabaabbaaa", "abbabbbbbaabaaaaaaabbbaaaabbbbbbaabbababbbbbaaabbb", "bbbbaaaaababbbaabbaabaaaabbaabbaabaabbbaabbaaaaabb", "babababababbbabbbbaaababbaaaaababaaababbbaabbabaab", "bbbaabbbabaabababaabababbaaababaaaabbbabbbbaaaaaba", "aabaababaabaabbbabbabbabbbbaaaaabbbaaabaabaabaabba", "ababbabbaabaaabbaababaaaaaaaaabbaabaaababbbaabbbbb", "aabbbababbbbaaaabbbbabaaaabbabbbabbababaababaabbab", "aababbbbaaababaabaabbbbabbbbbbabaaabbababaabababab", "baaabbaaaabaaabababbbaabaababbaaababbbaabbaababaab", "abbabaaaabbbaabbaaabaaaabbbabababaabbaaaaaababbaab", "bbbbaaaaabbaaaabbabbaabbabbabbbaaabbaaabbbbbbbbbaa", "baabbabbaaaabaabaabbaaabaababbaabbbbbbaabbbbaaabba", "aaaababbaababbbbaaabbbaaabbaaaabbababbbbaabbbaabab", "abaabaabbaabaaabbabaaaaaaabbbabbabbabbabaabbaaaaab", "baaabaabaabaaaababbabaaaabbabbababbbbbababbabbaabb", "aabaaaaabbabaaababbbabaaabbbbaabaaaabbababaaabaabb", "baaaaaaababaabaaababbbbbbbaabbaabbbaaaaababbbaaaaa", "bbbaabaabababbbbbabbaababbabbbbbbababaabaababbabbb", "baaaabaabaabbbbaaaababaaaaabbabbbabbabbaaabbbaabaa", "aaabbbbbaaabbbabababbbabbbaabaabbbabbbabaabbbabaaa", "bbbabaaaaaabbbbabababaaabbaabbbababaabbbbabaabaaaa", "aabbabbbabbbaaaababbababbaabbbabbaaababaabbaabbbaa", "ababbbaaabaabaabaabbbbbbaaabbabaabaaaabbbbabaabbab", "abbabbabbaaaaaaabbabbbabaabbabaaabbaababbaabbbbaab", "abaaabbbbbbabbaababbabaaaabbabaaaababbbaaabbbbabbb", "abbabbabaaaaaaabbbaaabaabbbabaaababbbbbbbaabaabbba", "babbabaaaaaaaaababbbabbabbbbababaaabaabbbabbaaaaaa", "aabababbbababaababbbabaabbaaaaaaabaaababababbababb", "bbbbaaaabbbbbbabababaaababbabbabababaabababbbbabbb", "babbabaaabbaaabbaabaaaaaaaabaabbabbbbababaabababab", "baabbaaaaaaabaaabbababbaaaaaababbbbabbaaabaaabaabb", "ababbbbaaababaaabababbabbbaabbbabbbbababbabaaaaabb", "baabbaabaabbbabbaabbbabbaababbabaabbaababbaaababaa", "aabaabababbbaababbbbaababbaaaaabbbbaabbabaabaaaaab"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 243685;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> label = {"abc", "ddd", "aaa", "aab", "abd", "abe", "ade", "dde"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> label = {"bcddaebcbedddaecaadacbdacdcdbcdbecacbbaaadaccbbecd", "deecadacbeeacccbedceeddebdaddbacecdbbdeeabebdbabbc", "cdcbbeaebebabbcbabbcbbeedbdadccdeecacbbbbcbeeaeeab", "eaeaaeecdbeeedacaddaedadeceabedececededeadaaccdcac", "abbedadebaaaccedacbedcbdacdcceaadbaaacabaddaeaaced", "deccadcaececbceeaebadcdbaacbbecaaaddddbcdceaebabaa", "ccedebaccdaaeddebabdbcbedabebceadcbadabbdccebaacda", "aadddedebcbddccdccabccdaeaceabdaaedaaaecadeccaaeca", "dcadbdabeeddbeecbbedcbecadacacbbdabccebaceadebaebb", "dbddceccbacdbcddceebeabadeebabddcdebeeedcceddcaeda", "bcdcaeaebcdddbedaeaabedbbeeaaadadacabdebdadddaddce", "cdccbdabcaaaddadabedaebbcaacdabaeeacceccaacecaaeae", "bacdcebacabcecbbcccaeaeacdcdcebaedabdebbbecacecdcb", "dbaedccbcbebcabbcacbddacbdceadaddebbadbacaadeecccc", "eadebaecccaceeceacceddccebecebdebedadaceadecaacabd", "babcadcbaecbaecbbedcdebcbecbbbccecdadadbeedcbebeab", "aedbbadaddeeddddabeaacdbeadedeadeddbdaaaebdeabeabb", "aeddacbdbdccbbaecabcaaabebacbabcdadcbbcacbabccabeb", "cdccadedaedebeebaedbaaeaddeeeadbecdddaccbcaacaeebd", "aacceabdcaeaecbecaedeeedebbaadeeccbeadcbbeadcaadaa", "bbacedacbbbbbdbbbebbeadcedeeabebaaabcaecbadabcaead", "cbabcabeedeaccaccdbcddedacabdddbaedbcedcdecdceabee", "eeeccbcbbdebdecdadeeeaddcebdeddecadbedeaedaacedbda", "bdddcadbacddbacdbbccebdaedecddaecddeaaddddeaedbacb", "adcdddeaccedabbdaaceecbbdddcbdccbacaddeabecdeebbad", "bcaeacceaadeaedcdccbccdcbdcbccabdcdabaccbeadbeecdb", "dcababcedbaadadaaeccdaebcabbcdeaaadccddeabacebdaed", "aabdcbaceebdcddeabcecaedaaeacdeabddcbaadcbabeaedca", "daccbdcbbecaacedbdebbbddacbaccadaabbaabeabadccecde", "aaebbddbbdabbbbcaaacdceedeaebbdeeaaceadadbbbbdabed", "baedbaeebeabcdccdebbbaeaebcaeeeedbcbdacabbceddebcc", "cebadccbaadededabdcaebedcbeccedcaaabacbcbdcbdbdbbb", "bdabedbcddecddbcdeacdedcccdacaababcbabceeacbaaecce", "aedceadbaeababecabddddcdcecacdcbddeeccbbdbacbbdcab", "cacaecbddadedcababcbbdccbadedebdcbeabecececabbeaeb", "acbcebbbcdabacedcaacbcabcadbabdeadeacedaddabbbcadb", "ecdcbddaeebdeabceacecacdeabeaeeaecdcddebbabaeaacdb", "adacdeaedcdaeeebdcababaddceacbdacdbcdeebdebdcbdcab", "caaaadacbeeddeaecaeaececebacadabadacbbdbdceccbadcc", "decadcbbbbabccceebaeadbcebbceadbbbedeaaccedebbccbb", "deaaadbcaaccdedddaaacaabbeacebabddeaecaccecbbaaade", "aedcdeedbeebbedcabdbebcdcacdbeaeaeccddeacecbbcbaea", "cccccccaccdbdcdcbeaadbeebeaaecaaddbcbacdbdcdbcdabe", "eedcaebbebeababcaeecddddbccbeeebeeaaeeeebacbbaeecd", "ccbdcabdbedccacdcaeddadeaaaeebdccdeceedccbcabdadee", "ebbedceedcbdbcccebeddbeaddccbbeccbebbcedaabdeaebae", "dddabcddccbeaadcecaabcbddcadeccdbaadacdcdeddaddbae", "cbedbdecddbddedeabeeecaacdecacadaddbbddebdbecbdaed", "beabacacaecbaadaeabbeabecbeccedadadcaabeebbdedecab", "aaceaadadbecddecdeceeacbbdaabbbbddcabdacceabadbbde"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 244818;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> label = {"a", "b", "b", "c", "c"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> label = {"dcdcc", "baddbca", "abdddd", "aabcdd", "accbdbdbb", "babcbdbdc", "dddcddbd"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 663;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> label = {"bbddabcdb", "accee", "eaccabcccbbe", "dececaedbeae", "baedaedaaee", "ceead", "ebcde", "dcabbdb", "ddcdca", "cccaed", "debdbbaaaeccb", "cbdacaaab", "ebbeedcc", "cdcebbabebea", "cedeaccced", "adedebbabad", "baabeca", "bedecaaacbea", "cdbccadceb", "cdaddb", "cdddccd", "aaeeacb", "aabee", "acbcd", "caeaa", "dbdabbeebbac", "dacbade", "cddbd", "dbeacbd", "eddcce", "aeeecbbbaaad", "dabbaadabeae", "eadccebdabbde", "ddbedccbe", "dcdbedcedbab", "ccbebacbeccdc", "cdbcdeb", "aeddeebae", "ddaeadbdacddda", "cbaacddcca", "bbbadbcbe", "aecdecbbadbde", "acbeacddacae", "cedcc", "aaedeabbbbc", "eaadeaeeeaacc", "dbaeacebaeb", "abdccbadaeeaea", "bdcced", "cdbadcca"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 8874;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> label = {"abababa", "b", "aa", "abaa", "ababaa", "abababb", "ababb", "abb"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> label = {"bbaabaaaaabbbbbbbababaabaabaabbabababbbabbabbabbba", "baabbbbbbaabaaaaaaaaababaaabbabbaaaaaabaababbaaabb", "bbbaaabababbaaabbbbaaababbbabaaabaaabbbbbbbbbbbaba", "aaaabaabababababbbaabaaaababaababbaaaabbababbbabba", "babbabbaabaaabbabbbbbbabaaaaaaabbabbaaaaabababbaab", "aaabaaaabbbaaabaabbbbaabbaaabbbabbbbababaabbaababb", "abaabbabbabaabbbbabbbbabbbbaabaabaabababbbbbaaabba", "baaabaaabbbabaababbaaabbabaaaabbababbaaaaaabbabbab", "babaabaabbabbbbababbbabbbbaaaaaababaaabbbaabbaaaba", "bbaaaabaabbaaabaabaaabababbaabaabbbabbbabaaababbbb", "aaaaaabbbbbaaaababababaabbbaabbabababbbaaababababa", "aabbaaababbbbbaabababbbbbbbaabbaaaaabbabbbbbbababa", "abbbbbbaaabbaabbbabaababaababbbbaabbaaabababbaaaba", "abbbaababbabbabaaabbababbbbaabbabbbbbababbbbbaabab", "aababaaabbabbbababbaaabbbaaaabbbbaabaababbbaaababb", "bababaaabbaaababbbbbabbbabbabbbbbbaaaabaaaaabbaaab", "abbababbaabbbaabaabbbbbaabaabbaaaaaabbabaabbbaabaa", "aaaaabbbabbbbaaaaabbaaaabababaaabbbaaaaaabbababbab", "baabaaabbbababbbbbaabbabaababaabbbbbbbaababbbbabaa", "aabaaaabbbbbaababaabbababbaaaabbabbbbbababaabbaaab", "bababbaaaaabbaaabababbababbabbaaaabbbaaaabaaabaaab", "aabababaaababbabaabaaaabaaaabbbaabaaaaabaaaabbabab", "ababaabbabaaababbabaaaaaababbbbbbaaababababbababba", "bababaaabbbbbabbaaaabbabaaaaaabaabbbbbbbbbaabbaaba", "babbbbaaabaaaaabaaabbaaaabaaababbbbbaababaabaaabab", "abbaaababaaababaaabbbabababaaaabaaabaabbbabaababab", "abbabbabababbbbaababaabbbbbbaaaababbaaababbbbbbbaa", "aaabaabababaaaaaababbbabbaaaabbababbbbaabaaaaabaab", "abbaaaabaaaababaabbbbbbaaabbabbaaabbaabaabbbbaabab", "aaabbbabbaababbbbbabaaaaababbbaaaababbabaaabbbaabb", "aaababaaababaaaabaabaababbabbbaaaabababbbbaabbabba", "abbaabbbaabaaabbbaabbaabbbbbaaabbaabbaabbbbbaaaabb", "babbabbbaabaabaaabbbbbbabbaaabbaaabaaabbabbbabbaab", "abbbbaabaabaababbababaaaabbbbbabbbbaabbbbabbabbaab", "babbaababbabaaaabaabaababababbaaaaabaabbabaabbbbaa", "bbbaabababababbbbabaaabaabaabbbbbabbbbbabbbaabbbab", "aaabbaaabbababaabbbbbbabbaabaabbbabaaabababaaabaaa", "aaabaaabbabaabbababababbaabababaaaaabaaabbbbbabbbb", "bbabbbbabbaaaabbaababbabaababaaabbbabbbabaabbababb", "baabbbbbbabbabbaaaabaabbaabbbabbbbbbbbabbaabbbbaba", "aaabbaaabaabbaababbaaabbbaababbbbaaabaaabbabaaabab", "baabbbbabababbbbababbaaabbaabaabbbaaabbbabbbbbbbab", "bbaabbbbbaaaabbabbbabbababbabbbaaaabaabaabbababaaa", "abbbbbbabbabbbababaaababbabbabbabbabababbbbabaaabb", "bbabababbaababaababaaaabbabaabaaabbbbbabaabbbaabab", "abaabaaababbababbbbaababbbaabaaaabababaaaabaabbbba", "aaaaabbaabbaabbbbabbbaabbaaaabbabaabbabbabbbaababb", "aabbbbabababbbbabbbabbbaabbbbbbbabaaababaabaaaabba", "bbabaaaaabbbaaabbbababbababbbbabaabababbbbbbababbb", "bababbabaababaabababaabbababaababbbaaababbaaaaabba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 243746;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> label = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba"};
    YetAnotherHamiltonianPath* pObj = new YetAnotherHamiltonianPath();
    clock_t start = clock();
    int result = pObj->leastCost(label);
    clock_t end = clock();
    delete pObj;
    int expected = 206976;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777893&rd=14425&pm=11147
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <numeric> 
#include <set> 
#include <map> 
#include <queue> 
#include <cmath> 
#include <cstdio> 
#include <cstring> 
using namespace std; 
 
 
int LCS(const string &s1, const string &s2){ 
  int l=min(s1.length(), s2.length()); 
  for(int i=0; i<l; i++) 
    if(s1[i]!=s2[i]) 
      return i; 
  return l; 
} 
 
class YetAnotherHamiltonianPath { 
  public: 
  int leastCost(vector <string> label) { 
    int res=0; 
    int n=label.size(); 
    for(int i=0; i<n; i++) 
      res+=(i<2 ? 1 : 2)*label[i].size()*label[i].size(); 
    for(; n>2; n--){ 
      int best1=-1, best2=-1, best=-1; 
      for(int i=0; i<n; i++) 
      for(int j=i+1; j<n; j++){ 
        if(i==0 && j==1) 
          continue; 
        int l=LCS(label[i], label[j]); 
        if(l>best){ 
          best1=i; 
          best2=j; 
          best=l; 
        } 
      } 
      res-=best*best; 
      label[best1]=label[best1].substr(0, best); 
      label.erase(label.begin()+best2); 
    } 
    int l=LCS(label[0], label[1]); 
    res-=l*l; 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/