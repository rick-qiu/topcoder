/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11293
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

class AnagramFree {
public:
    int getMaximumSubset(vector<string> S);
};

int AnagramFree::getMaximumSubset(vector<string> S) {
    int ret;
    return ret;
}


int test0() {
    vector<string> S = {"abcd", "abdc", "dabc", "bacd"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
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
    vector<string> S = {"abcd", "abac", "aabc", "bacd"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> S = {"aa", "aaaaa", "aaa", "a", "bbaaaa", "aaababaa"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> S = {"creation", "sentence", "reaction", "sneak", "star", "rats", "snake"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> S = {"a"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
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
    vector<string> S = {"z"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
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
    vector<string> S = {"ab", "ba"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> S = {"abc", "cba", "bac", "acb", "cab"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> S = {"wlrb", "m", "bhc", "arz", "wk", "yhi", "dqs", "dxr", "mowfr", "sjyb"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> S = {"bbabcb", "baabcb", "cbcbaa", "bbccaa", "ccccbb", "caaaca", "bbbbaa", "accbcc", "cacbbd", "caccbb", "aacccc", "babcaa", "aacacc", "acbaac", "caaccb", "aacabb", "baacab", "cbcacc", "aabcbc", "cbacbc", "baabac", "acabab", "caacbc", "ccbacc", "acaabc", "baaccb", "cabccb", "ccbcbb", "cbabcc", "aacbab", "bccbcc", "abcbcb", "abccaa", "aacbbb", "cccbbb", "aaaaca", "caaccc", "bcbacc", "cbacac", "baabcc", "cacbbc", "bbbbab", "babcac", "badccb", "cccaac", "aaccab", "ccacab", "bcbabc", "cbaaba", "cbccca"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> S = {"nwlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarc", "bynecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgb", "buqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsof", "sbcnuvqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyx", "acbhhkicqcoendtomfgdwdwfcgpxiqvkuytdlcgdewhtacioho", "rdtqkvwcsgspqoqmsboaguwnnyqxnzlgdgwpbtrwblnsadeugu", "umoqcdrubetokyxhoachwdvmxxrdryxlmndqtukwagmlejuukw", "cibxubumenmeyatdrmydiajxloghiqfmzhlvihjouvsuyoypay", "ulyeimuotehzriicfskpggkbbipzzrzucxamludfykgruowzgi", "ooobppleqlwphapjnadqhdcnvwdtxjbmyppphauxnspusgdhii", "xqmbfjxjcvudjsuyibyebmwsiqyoygyxymzevypzvjegebeocf", "uftsxdixtigsieehkchzdflilrjqfnxztqrsvbspkyhsenbppk", "qtpddbuotbbqcwivrfxjujjddntgeiqvdgaijvwcyaubwewpjv", "ygehljxepbpiwuqzdzubdubzvafspqpqwuzifwovyddwyvvbur", "czmgyjgfdxvtnunneslsplwuiupfxlzbknhkwppanltcfirjcd", "dsozoyvegurfwcsfmoxeqmrjowrghwlkobmeahkgccnaehhsve", "ymqpxhlrnunyfdzrhbasjeuygafoubutpnimuwfjqsjxvkqdor", "xxvrwctdsneogvbpkxlpgdirbfcriqifpgynkrrefxsnvucftp", "wctgtwmxnupycfgcuqunublmoiitncklefszbexrampetvhqnd", "djeqvuygpnkazqfrpjvoaxdpcwmjobmskskfojnewxgxnnofwl", "twjwnnvbwjckdmeouuzhyvhgvwujbqxxpitcvograiddvhrrds", "ycqhkleewhxtembaqwqwpqhsuebnvfgvjwdvjjafqzzxlcxdzn", "cqgjlapopkvxfgvicetcmkbljopgtqvvhbgsdvivhesnkqxmwr", "qidrvmhlubbryktheyentmrobdeyqcrgluaiihveixwjjrqopu", "bjguxhxdipfzwswybgfylqvjzharvrlyauuzdrcnjkphclffrk", "eecbpdipufhidjcxjhrnxcxmjcxohqanxdrmgzebhnlmwpmhwd", "vthsfqueeexgrujigskmvrzgfwvrftwapdtutpbztygnsrxajj", "ngcomikjzsdwssznovdruypcnjulkfuzmxnafamespckjcazxd", "rtdgyrqscczybnvqqcqcjitlvcnvbmasidzgwraatzzwpwmfbf", "jkncvkelhhzjchpdnlunmppnlgjznkewwuysgefonexpmmsbao", "pmdgzqmkqzxuvtqvnxbslqzkglzamzpdnsjolvybwxxttqognr", "baiakqllszkhfzconnmoqklpeefsnsmouwqhodsgcfohesyshm", "gxwtoayuvnojdjftqtwkbapriujimqwspslgvlcsaqbdbgwtbs", "eettwdnfnbyjvpdjxyuzqxstatbzpctthoofremgfkrbcvkzvg", "bofthgojhdnaywpnbitoraaibednezwfpdawlohssvtqtkfvsy", "ljzlucqxswyqdntdmfrtzlqsekejhzksklfepxchvczysvdgcx", "bbiswmeaylzifktmoikssfxtgpojxqiysrsqfwqdjqnqcgdqrn", "lluieazvmwnuufnnxvloyvgmliuqandlyavfauaosnlnvacsvp", "iumoiawcqxswkqwgxyazntnaikameybnuqbcqaggxachrynqxq", "qmlfotpqhvokiiammqmvxjvbsoaifzyxnjcberrnmixxsyjhov", "engbpyqrixqgwdrygxrxkfhicainhwilkqmbpeszdigznzxtzq", "sjwatycbmjawwmninepfduplucltxmkpvgrrgtuseurageltkc", "apwpbqromqawixezqkvlfbhwcocpjmrmbpbegvsuluqtuuvkes", "vjtdhvtjmexfqbvufdpaxcwnwqjtbplyzedicwsodpwtqrpyue", "arhwgfnpaqelofrsotqiktxipqzeqvlqmuoubbjbrpmixfclbs", "tnosvdkujcpwsdqhxrkiueziowoqjpiecwxxbjtnmkjgncpmva", "uqgtausokbfugjtfiuqbjclvlazamucimicnewdoxjlfuemdad", "gkhufsuevjaxrnivcorhfrqqwnujquoyevslqprlyskrhunljg", "soxleuyyfqutozqhmgyetyyepfaesjlkzivdevdllygazxjndj", "rxhrdyyddqnqdoayshwxshxzjywumbffamxdnxjqoyirmirern"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> S = {"scuurrpnjcmlbckyddfowquwkydwctkuxfqpyfehkqvlsflyir", "ogjiftgksidefdlxskfytpoociuogehulqcqllcftikalxyfhd", "dbsrpwblkiqtcdlhvxsxenfooqmovvrawltojvzudpnhuzopyi", "ncwstmlhcicvlbieprzqneibmcccsclfgjzzxmibxnwioemfvo", "vlsfmgiqlauyhajgcivkjsxfanlouicstxxhffzqhtoouzvwhs", "iqkgxmviasrfkmcjuhptaynqnjqkfxcnqmvnytwylpfxbhgxrx", "ttwgjjpbtwzxjrjhejacjnrpkvwsupsniotuzkvugwrsnczslb", "uwoolalksfzktkaoebbzxjwqbjscdfdyctoptbzmgbyblbspct", "qacosgynibsobwhrmbslpbopczqwqtpjvuxpcvcmzvactkufno", "tephtujksbfkkaeirgduuervhkhdswtnalwthfdzhijtkpbcxh", "wslppuzwztstgsgdnnkrmtbynonoslvodjdsfeqfyiaecgjpvu", "ihnkhaavpsgmilvnddrtirdkyhshwndhurtettzklhxtsuixxz", "qhtvtrclaayehvxazqtydghcbzwjwwlofejzxlkxllbvgyvfrp", "fuxmwzluijsvxazizwvluiwxdeyzjrqqlncjopfzayuzyuhzsc", "moljmqnmpzdhrqxwzllgkoghnebvftzskmdwdsiurncjdzfems", "kzirgwxjrfesxofamiswcmjexofesuyfthybdvkwaoozdtbrdw", "ogkxmhmsngmllhsjixhsvjikjnfkfjitrssdzexollaysuicup", "wpafbjsjwzueslxloyronezpdullwfctxcayoshkudqoonbfot", "tbxusaodnljrgguggiaquutkjiakpofkrfejhtmvgvmmdiuksu", "aoptzadzmspscgxhpecbbkzqwcyqmtmmhbiidljqeykiejrvnt", "xrdwhbyhtncgbkjjupvefberlladgpydgcbpfcxzrbhslseihb", "oocsfpdhskxrpfvtxaxwboxkgjdktklhbpzgffqzrpqiulbroy", "nrolcxwfhrrvysmzbtertvgjecxhwlilcwygtwldndylxmlygr", "rznxktchayuklzhkfagrfwwfhvsuuyonzdnjwptyppjaoqkust", "nypldygxvcxjqwmdikubkjqtlhlwdgrqgidliljdqgogdclnmh", "qxqisbpgzsmsksanfjzoorvdzafknutdtlllodrqvfiizlvfww", "tmnqpmqxyfrtkmeyxtbrjywtgygedcaypqpgehdfnwyxidviyy", "zhxxcdvjhalkzccqjgxolknmkvphfngewfeykbjucxedzitkoq", "zcdoopjdwrsexqjbqwfaqhxumycfjsxkucykrjpqahuyzgbqcg", "qsppobnsiwkiihkgrcqhssqosquuiwcaqspevcwebjmlsysjak", "suellxdftlevlupcznexrhgfvyfpkibecfpneuvxfzvstmuuzb", "uskazfbfunnvrrdjhhfchldcfyqatqdninpitspphcnbtqmaxr", "egchikgbkbrnqbchlvcanjcakwqwypofwsmgcuhovadncgvndx", "osiqsvokrpchuycigedqvaqaquglimkyeuqzphjjynqunscuzh", "mukewazdnjrzjxtzwjiisgvkajdffcmtywxuywzlhskqqeqopy", "wjhuthfymmcbfczcxyzyjgtwxlcpzrpycwsvgzwulyvqbxsavt", "agctczegqgxhebeyzmxvgiteywbswymxgoslpzrhfrolssjrgi", "mnqitqewiduwaakulbtfiywxlorugyeunwegmlcxowvqyikmje", "rsenpqdimlgtgtpmzcxdblzwbagooqsfiyuzqxhfjqyrjnflrd", "ouqqruqxigpclxchytgiypywijlqudtlxlbqhtqrzftmfwtfrz", "nprnnbxyrtbmebyhrhahzbpsnwqibhkpybenebmwvpkbqkjksl", "trpklegcnilxzmadzghlcedpfvzqhrcbirnwvuakeljdzlizsp", "mwtrlbnlrwcvxnmllkhlwlygqytyzlqlkldvmsieolzoaoblai", "ywvwelwalvnbjxpotbgbhwojmqzndzxbxuaefygtutwfrltmnb", "pwxehmwgbchbdhvfldetwamsfdeyptzhrynzmjfolnprwmyjpe", "cneoglsmjjhkqyldzxpfncuetqruzgydwfreqlqaxzmnzztzzk", "gmmctiskctscwohpsybkayjonjoikpsqdhswrmgvhzxfnhugfx", "qhvcvlnltxaopexhaqvhlcgkhvrddwbwdyybjlmfknvzruirkd", "avhifoexthvufbtdceqojadgbuajokoohvxnldmfkhzqiuvmzo", "dkogrsbtbrgsfnneazhmeuwfmgchtbvwnmcgefahwgzevpiwoq"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> S = {"bbaabbbbabaaaabaabbbbaabbaaaaaabaabbaababbababaaab", "bbbbbaabaaabbabbbbbabbaaaabaaabbbababbabbaaaaabbbb", "abaabaaabaaababaaababaaabaaaabbaababaaabaabbaaabab", "baaaabaababbaaaabaabbaabaabababbabbaabaaabbabbbbab", "abaaaabaaaabbabaabaababaababaababbbabaabaaaaabaaba", "aaabbbabaabbbaaaabaaaaabaaababbaaaabbaabbbbabbaaba", "abababbbaaabaabababbaaabaaaaabaababbbbabbbbbbaabbb", "abbbabbabbabbbbbabababababaaabbbaaaabbaaaabbbbaaaa", "babbaaaaabbaabaababbabaaabbbbbbabbbbbabbbabbbabaaa", "aabaabbbabaababbbabbbabbbbbabbabbbbaabbbaabbaaabab", "abbaaabbaaaaaabbaaabbabaabaabaabbbbaaabababbaaaaab", "bbbbbbababbabbbabbbaaaabbabbaaaababbbbabbababbaaab", "aabbbabbaabaaaabbaaabbabbbaababbbbaababbaaaababaab", "aabababbaabaaababaaaaabaaaababbbbabaabbbbabbbaaaaa", "aabbabbbbaaabbaabababbaaabaabbbabababbbabbaaaaabba", "babbbbbbaaabaabaaabbbaabaaaabbaabbbabaabbaababbaba", "baabaabababbaababaabbbbbbaaaabbaabbaababbbaabbaaba", "baabbbbbbbbabbabbaabbbabbbbbaaabbaaabbaabbbaabbbbb", "aabababaabbabaababbababaabbaaabaaaaabaabbbbabbaaab", "abbaabbbbaabaabbaabbbaaababbabaabbabaaaaaabababbba", "aabbbababbabbbaaaaaaaabbaaaabbaabbbabababbbaabaaaa", "aaababbabbbbbababaaabbbabbaabaababbaaaabbbaaababaa", "bbbabbbbbabbbaaaaabbbaaababbbbaaabaaabbbbbbbbbbbaa", "abbbbabbbbabbbbabbbabbbaaabbabaabbbabbbaaaabbbbaab", "abaabaabbaabbbaaabbbabbababaabbbbbbabbbbaaabbbbbab", "baaaabbbabbbaabbaababbaaabbbbbaaabaaabaabbabbbbbba", "bbbbbbbaaabbabaaaaaabbbbaaabbbbbaaabbbbabbbbabaaba", "aabbbbbbbbbaabbabaaaabbbbaabaabbaaaababababbaabbab", "bbbbaabbbbbaababbbbbaabbbbbaabaaabbbbaaabbaaaababa", "bbaaababbabbabababbabbbbbabaababaabbbbaaabaabaabab", "ababbbbabbbbaabababbbbbbaababbbbbababaabaaaaaaabaa", "abbbabbabbbbaabbaaabbabaababaabaaaaaababaaabababaa", "ababbbabaaabaabaababbabbbbbaabaaabbaabbabbbabaaaaa", "bbbaaabbaaababaababaababbbbbbbaaababbaaaabbaababba", "bbbbaabbbabbbbabaabbababaaaabbaaabaabbbbbaaaabaabb", "bbbbabbabababbbbbbaaabbaabbababbbaabbabbaabbbaaaba", "bbaaaabbaaabbbaabbaaaabbaaaabbbabbabbbabbaabaabbab", "babaabbaaabbaaaabbbaaaaabababbbbbbbbaabaabbabbabab", "baabbbaaabbbaaaaababbbabbaaabbbabbbabbabbbababbaaa", "bbbaaaababaabbbaaaaabbaaaabaabababbbbbaaaaabbbabaa", "abbabbaababbbaabbaababbaaabaabaabbaababaaaabaaabab", "aaabaaaababbaababaaaaaaabbbaabbbabaabaaaaaaaababba", "bbaaaabbababaaabbbbbaabaaabbbabbbabbaaaabbbabbbaaa", "aaababbbabbbabbbabbbbaaaabbbaaaaaabbbbabaabababbaa", "abaaababaabaaabbbaabaabbaabbabbababbbbabbaabababbb", "abbaaaaababbbababababaabbaabbaabbabaaaababababbbba", "bbababbbbabbaabbabbabaabbabbbabbbaaababaaaaaababbb", "babbbbbaabbbaabaababbbbbbabbbabaaaabbbababbabababb", "bbabaabbbabaabbabaabaaabbbbabbbbaaaaababbbabbbaaba", "bbababaababbbbbbbbababbaaabaababababaabaaabbbaaaba"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> S = {"bedbf", "febdb", "eefcd", "cccbb", "fedbb", "dfcbc", "fafeb", "bdebf", "faebf", "dcbaa", "cadfc", "aacab", "eaafd", "cbccb", "bafef", "dfdbd"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> S = {"wlrbbmqb", "darzowk", "hiddq", "qihdd", "ybldbefs", "cbynecdy", "syldfbeb", "khopkmc", "hnwnk", "hnnkw", "jjivswmd", "knwnh", "jptnsn", "zqfjmaf", "rrwsof", "knnwh", "xwpqc", "ehchz", "rkmlno", "vjsdjwmi", "hkicqcoe", "tomfgd", "pokhckm", "ycbynedc", "wcsgsp"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
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
    vector<string> S = {"wlrbbmqbhcd", "hlwbqrbdcbm", "jybldbefsarcby", "cdyggxxpklor", "lnmpapqfwkhop", "coqhnwnkue", "sqmgbbuqclj", "vswmdkqtbxix", "dlrbbmbcqwh", "wsofsbcnuvqhffb", "qxwpqcacehch", "frkmlnozjkpqpxr", "chmqdrlbwbb", "gdwdwfcgpxiqv", "ytdlcgdewh", "ciohordtqkvwcs", "pqoqmsboag", "nnyqxnzlgdgw", "trwblnsadeu", "umoqcdrube", "kyxhoachwdvm", "rdryxlmndqt", "ewqpchxccaqh", "coqmdeuubr", "hjouvsuyoypa", "lyeimuoteh", "iicfskpggkb", "pzzrzucxamludf", "gruowzgioo", "ppleqlwphapjn", "qhdcnvwdtxj", "yppphauxnspusg", "iixqmbfjxjcvu", "suyibyebmwsiqyo", "yxymzevypzvj", "ebeocfuftsxdix", "gsieehkchzdfli", "soypvyuhouja", "qtrrxmylddn", "tgeiqvdgaij", "cyaubwewpjvy", "hljxepbpiw", "qlhbbdwrmcb", "vyddwyvvburczm", "jgfdxvtnun", "slsplwuiupfx", "yjoyvhopasuu", "egurfwcsfmoxe"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> S = {"xkovzdbwjoi", "xuqfdbrculru", "iesrcefzeibatr", "ohggmjhdldreyng", "bzwffvlpyljqwu", "amslvxyzqdz", "hyogwwnrhdqvo", "ioylcswxsxyka", "neocnkyachfu", "cxgswruqprimqtm", "cwyejielmlt", "omnuelnycd", "pifexpgvpmgxqs", "nwvbjjwnujmyo", "goqmnfsjugp", "jibwexaniybehp", "voejeqymkjgqzc", "krjpqjcyhf", "wiorwucckbow", "olzewkyfzoq", "xlunhcezaybelct", "qwapayzafapvges", "iwrooccbkwwu", "vdtmddmjpmpdnz", "isrreabztfiece", "gkuxkhnaay", "prygdasdghps", "yubdhhnbgz", "ongyejhdmdlgrhg", "kpfxcxjvvxktrej", "nqqthdikrfoqy", "nwzpwimrhw", "awenlwggdjopcw", "uxwitvzrgminiv", "tuagqgnvrdltzon", "mlwtjyilcee", "njzdyvrkbathai", "octhruvjechae", "rhewiznsdn", "qxkblnvugrspxu", "fvxeppsqpgmxig", "aomchojxbrcfc", "aoykiwsxsxcyl", "lqdmtvukoxkifn", "pszqffxaznuwwq", "hevczpnppzywo", "elgwsntvmg", "eiknpoirpz", "qidpwyvalbydq"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> S = {"xkovz", "vokzx", "rculruuc", "zxvko", "ijohggmj", "ldreyngg", "zwffvl", "ljqwu", "amslvxy", "dzel", "ogwwnrhd", "oitioylc", "xsxyk", "oneoc", "yachfucv", "gswr", "primqtmp", "wyejiel", "ezdl"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> S = {"ztzjjsharzzfuryeeosgdkahohqvwfuwyufjonkfojmk", "pjahrerrlhyedwjxsktatjpfrfrdpwqgfqnywgpiq", "tlxsgjmidvzkmebsvxicearcxathqkxjwudeepojnntbtxtqw", "etxnajemdkwqwxgbvpicthlxjnekaciruvjxxtozsbtdmqtes", "cygbjunnxcurpdussvyhwywtgsyshkhmkonvkdjhhdywiu", "ppiopghwzgqgqyuaoiyanhhumhqubfxtwhhloojpuavmaspoan", "wxhiezeheeacljobyxquzmjzeypgnfvjcetidzskdsmrec", "cjybxjbdjsjwyghckclncfzhxmydqrfscguzpxczpnxpvfsfjf", "kutjitnymutoappsmrrdgotdvnifsfscbnllhajvvek", "xbtvojemdkahwlstntqsbqdxjamuixtzrpcxevwtjkeeixcng", "glpqijtowhuaqdcowanztmpblfbgtiwbvmufxnwuwquptw", "ysrteixpnayjiumfiikgygauywlssrjtlcmqljhalf", "cyakilsgtsdsoqmjhxctaqllcsnnazjczjohwhqqbvkslwb", "fovxziztwpvvyxwjofgxvyyqiqcgtxbanxaofzhbqdyocu", "cipxioqsguycrzeeyesegbhwggnlcndevtedjuvrqvthuynte", "kkghrouerhhxecbjlxednbywvwlqdsrndywwmqaf", "ffmgoxgucvvbutzflcydsddozrhbxgkcmwkcwsxyqs", "nbpzfpcxufmvwtwvbhzpdmszeraulzgzcyyincfijtfhocd", "ehoqbqxsqtgrafuyfenjlvsfbzvfenqjvebwuyrmszesgasne", "pdquerqlwdbhahkzejsqdruvxunkysiqvymbpeonkpwk", "ldqdttuqqtkfflznbxnpadupsegpqdwciofchcszveed", "anhylqojpofaqyusohaaqmipapouugximhphzwhbogwghputvn", "stxsqkikhvtiuxutlcltqsgfulgpgebbaavqmdctax", "xxpicceuxmzryhieolholcgxhkshiweftvpxytrxgroe", "kojseuwktexnnhjtmfrdcrxwofpelpcvelpihovcusphbbdpi", "mnpidwxhhplftwudfiyjesymtbrijnbycsgfrgmyvzdqva", "kulpmldinwsyjvylqfshnehifnacnteznrocctmrpes"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> S = {"ixhcvywkwqzcxrrxeuppibpxykvzdwulvdqqdoczf", "exsbbptqzufytstuvrqiotafwphxwnaakvclmxdlt", "odfiyzainvjutyequrtwboaoaxrnrexfhfqheqqt", "ofxsytltpmjqcjptyiyyohdgpjwfekessdmswxlnl", "hwxsbpefzbntttiyrvuctfaawqkqludtxvplsamox", "ibagghtucmxksuoxrksvyizklbesqqzbtbjzietmr", "lnnkgxcexkfjxgnrzdscyulxeptrimqtbfdkchobs", "rezjdfbhdxsdejyxsmnnpstzwapzullmrmxutadz", "nyhfitttepvcspmrvxxbofaalzldbuwwkatqsuxtq", "kausuuziujqycwjsolpfqzzjvcuogrkrreloylwuw", "zkdrbpiifhhpclltsddlwhwkhjjbgxwfkbynqhvy", "pvqaoiftvccsmjbxmjvkohmpueyreowtjpwzzbuvd", "kfygmtynmsjihclsoxlypsdpjewpetjqtdowlyfxs", "rjpatwufnpfgemgblfecnbjkdtuufzzykozekvjzk", "pcmsptwsgybrdvnzcmybyoccaxmzjceyfstumpmup", "snarrorsnfwpfvdefilfpfyjtqyofqbafetwslpfq", "yjccqkpxzxylqolevbiximregcvmujlsunxmyojzl", "cxxivyqugelnlpizmrkenzdzzslzfuljujspjkjs", "fconbahnhwmmyogjpmfavzlpqvacprzutpjwqslzp", "pnuaciffdfqtxnvzcoyyhokfgcshtruifoijwqocx", "anuznioxtohtcffycvfofcqwjfopxqyduhcrkisgi", "brbimeidowobsszstxiztdgbdwecpqktjnbwsjzi", "lbiktbkdddglejhllwbyplnsjfdknkabljnhkxmp", "ahehusgvsxifqtlveaiedtnrcaopppksyozsihpaf", "xttsxvaezwtqaterlvbdtsenamddtfjqyciyxley", "ojrtbeqejkynzbbceujpmitxisimrrjfccafirmrd", "cnkhthqktadqkwayptiuwmxbxqpotcxxrignpzxkb", "mzbmovwktjhwgzmwuqusheautbsddvgrukdkhaual", "tdkpyalskrsekuyqztyspivzpxwriaqddctdfgvp", "vkmwclpbdhlaidyeuiemmiphnupjjnzgalceyufd", "fjwdqsouhaewjsqybbochqpmupgcuhvzstdintfut", "edieglskvkzhfqnhkwekqzpbmiijdtbhxmldzgqu", "dvisesqicjhrkwzsfcnilkuxqwfgqvxwtfoxyfico"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> S = {"ixhcvywkwqzcxrr", "uppibpxykvzd", "wrvikzrxcyhcqxw", "otafwphxwnaa", "clmxdltlkodfi", "wwkrxzvicxqyhcr", "qtmzofxsytlt", "jqcjptyiyyohdg", "wfekessdmswxl", "motflytsqtxz", "xzwrcicxrkqvhwy", "xdenmvrdifxddwu", "oqckczsfpjhiba", "lxytqszfomtt", "oatxaphwawnf", "nrzdscyulxeptr", "wmdeesksfwsxl", "ryupdrtncelsxz", "cbyqoofihhgjyf", "ssceryyrbzpwd", "hwdxmrewalcmm", "xbmagdyguafmyk", "rejqscupfirrwbl", "xtkausuuziujqy", "jsolpfqzzjvcuo", "krreloylwuwouzk", "rzrspnudcyxelt", "ynqhvyqfpvqaoif", "ccsmjbxmjvkoh", "ueyreowtjpwzzbu", "wpshspwcmisvw", "bfjhwhdhybjycdt", "kclctheiszdo", "wafxtapoahwn", "xukaqzuuytijus", "lfecnbjkdtuufzz", "ozekvjzkofpc", "ptwsgybrdvnz", "ybyoccaxmzjcey", "tumpmupqnsnarr", "snfwpfvdefilfpf", "tqyofqbafetwslp", "nxyjccqkpxzx", "qolevbiximregcv", "jlsunxmyojzlhk", "xivyqugelnlpizm", "enzdzzslzfulju", "hataanwopxwf", "avzlpqvacprzu", "jwqslzpzlpnuaci"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> S = {"bgnhamdhnuxbvzlu", "kksnbvdsssjdwkkj", "xxtntsooraiyrslli", "xosislaxnyotrlirt", "lqmbhlfvicwytncb", "kudfswpxdgfsqqlc", "obpyenwxaabjuldxsy", "xyqcrgvelrwbslzyy", "axzmrmrqepmonmfr", "cfdfwlpdxquqksgs", "qadqudrnbpgypnkal", "zibcooxzrirvytyp", "ibexjcoyppjgjlrmp", "xlostlaniirysorxt", "mpwbdduzpuskyadt", "trtloyixrsoaxisnl", "uenyyqtxgiszbqosfa", "jqmqdapcohkjlxjmq", "wmexounicnlkzbxphz", "pnwyyvhmnmylaeiq", "rdaabdnygqqppuknl", "dypbtwdmzdkspauu", "kgnekeqzyzsjtfuv", "jdvmvbinqoobpyhc", "huthvlqpsmkqwvts", "vuelismxrwcvplsis", "lepzrfwmzqyqntuab", "bikddaovkilgvrvvid", "elvuyoqaqfornzwtbm", "uzqekejvynzktfgs", "stlhzhpbjizfbmsu", "lmexbogprjcyjppji", "obenzppqukvgglhdi", "adngknqqdparpyubl", "xkzasgxoszabpbbcoa", "zzbxsbaasgxbocpako", "cmlmbuusylfqvskgve", "plehlzdpmcdoqobs", "kikrafklnhrkkivo", "psycubqnrthbqtmb", "ixzygtisbfgroyloc", "uviocjgvxhimshlqog", "uhtshwsqlmkqpvtv", "kyhxkwtkilvjgrpzkf", "dpdtkpusudmbywza", "jiybpvqnmhodobvc", "nfzphlhtcdotmezf", "clvpynizkyavunbve", "mtkuazwdpudpbdys", "amzskwdupptbdduy"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> S = {"vwqtyskrgs", "vsgskrytwq", "lvkyosqsvc", "omsnfsrglc", "wvvzntrzoe", "wpxsrofhcx", "poqcqpzpkw", "shcxpowrxf", "zrpyibwwzm", "spwcxkizrd", "fmsnjvnjne", "gguhuaiopg", "slorncgsfm", "ktpsjhbawt", "njnfjmvsen", "rbmiywwpzz", "oqatrglody", "lcjskbgbhq", "okxgwoskft", "btoetinemy", "zfajylzoxz", "kpsczxdirw", "ipbywmrwzz", "gvfmzntnxh", "ybmnxetkar", "ztevnwrzov", "dbzwlzqtkf", "bfzwjlwxwm", "awyhmcesdd", "iwpmybwrzz", "iepmwsqmkv", "okusbzvnoo", "cvvpxkdfos", "nizxfuvtgr", "sixgwvkbtf", "sywrtkvsgq", "ptabwvgpla", "nnfsvjjenm", "shqawbagmi", "lklhqruuxe", "zwpibwzrym", "dsnxokbcdw", "nwdzwfbwej", "xizvfnrgtu", "uaaxwhhtti", "gvnzifxutr", "mqztlueory", "znoskouvbo", "httjswbkpa", "tknakgwaxj"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> S = {"hvxkewd", "qhyqbxd", "exdvwkh", "xbzcoot", "jxlowya", "tozcxbo", "dhqwfeg", "kehdwvx", "exvfszi", "hhvpkll", "isrxqbx", "qcphgmd", "eyhvfoq", "cfqfqiw", "ambldda", "orztvxc", "rhaulik", "vrnvraw", "lhpvhlk", "frcslap", "ktphxuj", "sfevizx", "xlnmncx", "giqpoem", "wgjuqjl", "wqtjngw", "lxnxmcn", "cqrnell", "umnsolt", "puiesny", "xkkfncy", "modtkpi", "uwumnqw", "msmvrxh", "kwqrigw", "omutiso", "etbphtd", "ajkovhf", "llvezhy", "vxztocr", "xehvwdk", "gduxlyf", "xgyflud", "kypfpjl", "exsvizf", "kbzvzof", "mopajvk", "xdvhwek", "gzanyfc", "cwronss"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> S = {"hvxkewdl", "hyqbxdwmm", "rqtqtcjdxfk", "xbzcootwmj", "owyabzsrtimx", "mtocobjwzx", "ppwkxkhr", "whqmxdymb", "srxqbxajq", "hgmdnfeyhvfo", "bcfqfqiwny", "blddammorz", "xcqerhauli", "yvrnvrawefa", "mujnqens", "lgsfrcslapcp", "phxujdovaxk", "xiapwgjd", "xlnmncxjug", "qejnnsmu", "jngwcwazhwhp", "dtktxgzgcq", "hnfhgoyvmfed", "fncychmodt", "idfuwumnq", "imsmvrxhwmk", "rigwdromut", "owhetbphtdc", "jkovhfmrllv", "hyupsklar", "powtehbthdc", "sgduxlyfbvqs", "xehwhqlenl", "kypfpjlsekg", "hzibhmbovz", "kbzvzofz", "unnjglmcxx", "yjgzanyfcnwc", "hwbtohcdept", "gekcgiwuv", "glturajudcv", "iwskrmmxhmv", "qdqkrjxtftc", "vikwegcug"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> S = {"chnwlskhcpceg", "lgnwsckhhpcec", "snchpckwhlceg", "hzrajomh", "iseadytnmunsjnd", "oeczmeqmp", "imtnjdensynuasd", "lzwlgdpmfhi", "wkiqbbyx", "ecgavmxlawhldmc", "kzyyvkhlmkljlsp", "dsannietjsyumdn", "tamenssddyjnniu", "etuiecmietyu"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> S = {"chnwlskhcpceg", "lgnwsckhhpcec", "snchpckwhlceg", "hzrajomh", "iseadytnmunsjnd", "oeczmeqmp", "imtnjdensynuasd", "lzwlgdpmfhi", "wkiqbbyx", "ecgavmxlawhldmc", "kzyyvkhlmkljlsp", "dsannietjsyumdn", "tamenssddyjnniu", "etuiecmietyu", "wwiycpkrgr", "lzokvvdr", "upqyiosxoqvyo", "dtuisjyeasdnnmn", "xiatcfpkuhpm", "nxwhddqblos", "lvokzvrd", "yvzklkjhsmllypk", "ccqnobanaja", "ozdkvvrl", "vbmjrnlepx", "otzxhodrh", "drhthxzoo", "glnpwchechskc", "snmendtnsjyduia", "umsnyiejddsnnat", "rhuvxvhx", "xozotdhrh", "eukyrhwygahlynd", "nvlojsglxop", "toofofpkgvlpjlc", "jniensutmadysnd", "suvjxdimlvrdat", "upcmtfapihkx", "xzordthoh"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> S = {"wlrbbmqbhcdarzowkkyhiddqscdxrjmowf", "sjybldbefsarcbynecdyggxxpklorellnmpapqfwkhop", "obmkyxdbhqdhwzmcrcdkiorbsrdwwjaqlf", "nuvqhffbsaqxwpqcacehchzvfrkmlnozjkpqpxrjxkitzyx", "oorbmdrizcjhaqbslcbxwryqdkdmkhwwdf", "ckobswoalpglylrseybandjphrgqpynxkmcefxdlepfb", "yatdrmydiajxloghiqfmzhlvihjouvsuyoypayuly", "muotehzri", "fskpg", "bbipzzrzucxamludfykgruowzgiooobppleqlwp", "pjnadqhdcnvwdtxjbmyppphauxnspusgdhiixqm", "jxjcvudjsuyibyebmwsiqyoy", "pqayurydtoaxlvjllodvjsyziigohhmuuhfyaiyym", "vrfxjujjddntgeiqvdgaijvwcyaubwewpjvygehljxe", "piwuqzdzubdu", "vafspqpqwuzifwovyddwyvvbur", "touiehzrm", "wuiupf", "zbknhkwppanltcfirjcddsozoyvegurfwcsf", "xeqmrjowrghwlkobmeahkgccnaehhsveymqpxhlrn", "ezglwobmbpoazwbxludryopzifukolcqzugripp", "xsnvucftpwctgtwmxnupycfgcuqunublmoiitncklefszb", "rampetvhqnddjeqvuygpnkazqfrpjvoaxdpcwm", "bmskskfojnewxgxnnofwltwjwnn", "wjckdmeo", "zhyvhgvwujbqxxpitcvograiddvhrrdsy", "hkleewhxtembaqwqwpqhsuebnvfgvjwdvjjafqz", "lcxdzncqgjlapo", "vxfgvicetcmkbljopgtqvvhbgsdvivhesnkqxmwrq", "wpifuu", "yentmrobdeyqcrgluaiihveixwj", "qopubjguxhxdipfzwswybgfylqvjzhar", "ly", "uzdrcnjkphclffrkeecbpdipufhidjc", "hrnxcxmjcxohqanx", "mgze", "nlmwpmhwdvthsfqueeexgrujigskmvrzgfwvrftwapdt", "pbztygnsrxajjngcomikjz", "wssznovdruypcnjulkfuzmxnafamespckjcazxdrtdgyrqsccz", "nvqqcqcjitlvcn", "masidzgwraatzzwpwmfbfjkncvkelhhzjchpdn", "nmppnlgjznkewwuysgefonexpmmsb", "pynddnumjsxxvxspwmqapbtdjuhcndppghiiaqh", "mouwqhodsgcfohesyshmgxwtoayuvnojd", "tqtwkbapriujimqwspslgvlcsaqbdbgwtbseet", "dnfnbyjvpdjxyuzqxstatbzpctthoofremgfkrb", "nkswsgfekojwnltnmwjonxbnxfw", "zlucqxswyqdntdmfrtzlqsekejhzksklfepx", "vczysvdgcxbbiswmeaylzi", "tmoikssfxtgpojxqiysrsqfwqdjqnqcgdqrnlluieazvm"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> S = {"zckejvm", "qfntcp", "wvjjpeteqgnfzfgerknmwgkpoxiqmycjtouispokvdrxi", "zhqmgyyvmvdcjdfuwvqgpfwz", "qchpfiwvwevuzire", "mwjnjogejtirffvetqpkowkrpxkzuevcnyoisggpmdqxi", "mvkzjce", "qntcfp", "fnpqct", "qplxshuiazczsbouhflwtoledo", "bsarhnqcunkwonvgqlbxrowmejthxi", "irqrhsncujqwknxonlavmetxboghwb", "rjycimbuyzqwjpswijoiphjpkapwqrrjdponbrjbqzyzoq", "bnhswqhiswfkoyutqkirbrttqttglsfmiofegmnzl", "budukpceqt", "lsftdzyrhoymv", "uyxfzrjteaxirs", "dbiyghzxpnwdijgehfkgyvbcvymosvrx", "jnmwurlxbgqvxnbwstehknhqacoiro", "dzinhkjttaoppfhswqcstqr", "lyszsadrjsbvcupelevsmnpeqhxizghmgbmydrsojvknrzr", "nxtcmxsvxdwfmjlnxmsoejxztnsuevbrsxugwodtraaflosian", "wxhrkzlpwoiqlewitcdmcgspumzubxc", "jqhidyfsgvdlungwtuazorvdqpeprencu", "moezyhmbjnblyggpscdsrsxvsrejzvpazilmhvuersknrqd", "fdyrehtapridphdpddnootgiusbrlgyqmwks", "ss", "xlkabpfqevlmdhhfysnwlbuxuzcorzrqmbsptxgxstlybsdbns", "ateriwhknnbjnxogcumblhvsorwqxq", "zsdbvuionomwyjjdeiduok", "seyitjzxrufxra", "bdtfvmwcehmyoscnlxxdqq", "pmpjlac", "xuajscqzqqqivdwsazkscykp", "anxp", "jvidxyforvymaugdvqxyqhpfcpucho", "jjwhkbxbyxnyuvd", "bpdieknwepdsqvcztljukkuhzvbuythbikknuzla", "tenxfhkpduzybztfvtydvgnhvkggkwy", "mchtmwyiywmzrrulpxixnptxxbh", "pvotcjgbhqzgc", "tukkssifjdcgglziawyubhccrudxxbwsxhdpbnunsytamv", "tjiutmwkjbhgedycmdrqsodkmynyvyprjzlcmkm", "vdqbdsnjlfbzkoolboizdzidnnrxzokxrc", "wnfithjfxxqyobzrajwpwnmybzvudttaiykbhtjgtbehc", "fnvulkhjoie", "zdliexlnruukwyraerftmaexjonruxeubsefppsgmosknlktdq", "phqocgvtjzcgb", "vqplkfmvjgckcdotkzzgcpruwjdrofolvd", "fhdorddnldyrpehppoytmigiabgudktwqrss"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> S = {"xwzyxuzwvzvzzxuxxyuxywzvvvvuwzv", "xuwyuuzuwvzwwzwvuwvxwxvuzxwvvuuyvwxwx", "uxvuuvzwuvzzyzwxwwvyuwvwxwwuwvuxwxuvx", "uuxuxuwxyuuvxuxvxzuu", "xwzuvyuzxuvvxzxuywxzuxwuyuuvwywwx", "zuzyuwuwuwwwvzuuwxzwyzzwwyzvv", "xvywwvzuwxxvzyvwxvvuuxvzwuvy", "xvvyuuwvxyzwuvvyxvuvxxzzzywvxuvwyzxvwzxzuzyvu", "uyywwvywvxuwxvuwww", "uwzxwzuvyxwyzuxxuyxxyuvuwuwvwuxzv", "xvuwyxuzyvwvxuyvyzvuwyv", "uxvvzwzvyxwy", "xuyvuvzyuzuuwzywzvvuwvzyz", "xyxvwuuxvwzuzzxwyxxvy", "vvxxwyxuwwuyv", "vyuvywxwuwvyzwxzyvywxx", "wzvvwyzywwvvzzuuxw", "zyzuzyyzyvuvwyzzwzuzw", "xzyyxuzvwxvwzvvzuzwxwvxyuyuuvvyvvwzzzvxyzux", "wuvzuvyuyxvwxzyvyxvvwyu", "zxwwzxwywwu", "zwvzxuxuwuwwzwvuuvzyuyzyvuuyuvwwyuw", "wvxxywzuzzxxvxyuxxxyyyvux", "xwwvyxvyyxxvzxyxzwwwwuwxuuuxyyyyxx", "xxuvxyxxyyxuxuzuwvzxwuvxzwx", "zvzxwvwxuwyzzzy", "zzxzzwuwzwvzvxzzwzw", "wvyvuuxvxzxywwyvzxvxyvvwxvzwuzvxvuvyxv", "vxvuwwvyzzyuwuzuyuzzuuzyxxwuzzx", "vxyyzwuuvxxxwuwxzvuuvzyyy", "zvxzxuxxwuuxyxxw", "yuzuxuyxvzxyzxuxxxuxxwuywuw", "zzywzvuwzzuvx", "uvxvywwvwyxux", "vzyzzvwvvzzxvyuzvxxzyyuzw", "uxuvvuuuwwzyuzuyxyzzwzxwyx", "vxvzzwyyuwyyxuvvuxvvwuy", "yxvuxuuuvxvywxyuuuvxuv", "vzuuxywxwxuvuvwyzuzvyyyyvuy", "vzzvuwvuvvzvvvyzzxuwxyuxxvzuuxuyxwuzzyu", "uyzxwzzuuwzzzxz", "vywwxwyuwuuz", "vvwvuyvxuuxwvxvxwxv", "zyvzwvuyvzuxwwuxuxywxuyuyyxyuzvvuyxzuuxwuuvzyyx", "xuvyvyzzyywuwyvxwwyzwwuzuwyvvvzzw", "xwuzvvwwuuuxzxyuuvvzyzuzvyzvuxwuwxuyvzvw", "uvvywywuuuu", "yvyuyyzzvzwuvvyx", "uwvzzzvvwyyzxwuwxzv", "zwzwzvxxvvyyyzzuxvxyuwwxxvwzxvux"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> S = {"xyxwrszqtrvzztuttuyzqqrzxzvw", "rrwxywqyutqqrzswrurqszruzxsvryrr", "yxszwxruwtsyysrxttvtyvyqzqxysuvr", "yxuqsyrtvqwxwyrszxwywtxssyx", "qswyxxywxssxwxuvzuvvrssvqtyyr", "qxtytzvxwyysvwvytquzrwzxvttus", "turqwqwuvsswwxsvrsxqssqqyssqvrqyu", "qqttuwwrrtswttuuwxtuwtxvzwvwzvtq", "rzqyzsqsztvswqyxturyqzvuvtq", "vtttsqtvqvssztxyrvruvyvusxyww", "rysvrqyvrswsqzqxrtxwzwquzw", "sysuvsyvtvytwvwxvxsvzqqywyruvsq", "stutzqxvzrrsyxwuqztqqqvzsqutyrszsv", "uryrryuyvrrwrtvzurzuzswytzy", "qxxqwzsuuryutttwytzyrswryvty", "rtyxutxvwqxtvywxtvzrsytyqssuzutzw", "qstwwurqxyxvsrsutrwqqztvwwxwswrtzvy", "qwvzszqtssvszwtwyxtuvyxsyzzry", "yrvwtvwvvzryxwzuvxwyqswtzwr", "xrrxvwryrxuzxrwurzxwtwxuqz", "qvqwvququtzwrsvwuqztqvquzwzqwrwxxu", "twuyqsuqvqxxrurqqqsqxqrssvzqysrszuq", "tqquwyurytrzwqvwzxxtvvsyxvv", "uxqtxtzuwzszzquzvzxtwrzsuwyq", "uuutyswwvrtyztytrutzwyzuzuz", "zvxuqrrtwvzxzvvtuzsxqqszzx", "xvvvrrysqzuvtrrtvwvqwywvyzuwvzzrtsw", "tvttxyxxqztxusrrzxqxqvrqs", "vywyrqrtwyyuxywsrzusxqrtqwvzzyrtvw", "wsytzxvwuszvrsyztqssvwzttr", "xxuuytwxzsutusxwtwuxvvxyrxsvzzsvv", "uyssvvvzywxtqsxvwrtvrrxuz", "ttztvqxysqqzuxtsqvzzrrvqyuwzsrsusq", "qxyvyuwvwvzxztryvwrwvswtzwr", "vzxvrrwqyvywzzvywxwutsrwtvw", "rrvrtxvvwzyzvsystvvuwuqqyzvwrrzvwtw", "wsvtywtutzvzsrxtutytxstwutzy", "yyzsrywtsqswyvwwzrxwstxwyrq", "rvuyvvyrqruzszxwwsuwqrxuwu", "uwsrzutwyuzuuzvuttyztyzrywt", "yxrqqwusuqyyuqvwuswzrxxwwtrwrwzy", "ztvttysqxvqssvvzuuvszqtrvvvvuysrzw", "vuusqvvryzrruxstwwtsqxwsvzut", "xrrqsqtysqwssqytsvzwyqrvrxuu", "ruxvxstwzswutuzyuvvxsxxxuxsytzwvv", "rvxxwrxqsuvzrvyzzsstxvxquqrrqwwssux", "txuwrryxqxuryyxuwxwuzwtwttwvruz", "urswyzvusxtrsvvqsqyzsvqwqwwuw", "rvuruusvqwuwwyzzxyusqrxrwv", "qsyvvqqrutszuuuxuuuyqrwvquwqwxyxxx"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> S = {"ujqxydifqgukcknuwxdcdxcwqcytjoagxsdxvlfmrzyullqj", "noqpkitiedyglxzovuzaitbgpnthyeamusbedvohapnnmmbjj", "rvnamcttazvmtqqztnqcpfrctgddpfmgdzipbclebgqxw", "rvmtmrlolrtogzcoeexthbelenebjmybkkwwehnpagfihjxl", "hvznidamfmzfpjplhvvukvbrekbdwqbdlasuftimfhrusjfce", "ryzkeklhieknpmflryuefdxbyihapjygjysnkgwskihbu", "mnjsuorwmaforonzanrpxxmrhuylpmydbjxwxqsmsxajnnipc", "zzrsjnsuehujidgeazyorxpbnelchlhilybwotqsakclnkr", "sebpveczpfidorqpumdpcvsozddkuutmawevagxsnhvcylruz", "drcrrfudboyqpvumxclrstmwrznmyjybcauvhoaifzawuwk", "bahnmeattlbtomyumdnaqzsohnpniizpuyeejigdvpvgxkbjo", "bnnluaruapysscstupiqvmycdjswutqvgfjcfcxgrxalzthw", "zzvrjyuwfbbtvdwhcodauiyocrwrnmyumalfsxpmrracuqk", "cjvenwavpikagmjwgddtxlbwpztuzfldqikdgkzwujwaxh", "mbajpciebbycgliwuscccbyzmxbleaqtdqcsukyxlzatm", "icwlgxjflihwnjoimgmhbxfakgagtkabowmvvycggjevuudj", "qdpxebegjztjchhrecphkxsqtnkywlqoqhlujrdsswevfl", "odryajpvybwwomkfuybdrexkcbfintubylbywswxustieepae", "vxffcgmkvheyfragpucmqugbamqdqjinjntlwhxrrdqyus", "mgyfcegfsykiisvtiqegadxrgppchwnwelbhrhojhytpspic", "yjcgquwcrguicqnuytmcsfdwxujxjzkxfaddvlloqydqlxxk", "jrbryzvumyioubbqxqmeuwsducqnlqjvkkoiljczjkpdoqv", "kpdikhcoxpzqywakkkyvnxeznjnfhaorsszebdsavtqvssgcd", "sdcrqmhwtjmmbelfhqzilvahntprwvpoyuhriqndazpdgcl", "mzgjanyveqtzhjzbqsjjfolhdqphbgcqgizixydbqwcxfdzxw", "jmhnlottgbuenqypmnabtzdgmhdoeaanpypzevviskoxuijbi", "vvxeoufqesdgpyzxsjvgnjqupghhkmahjzoxtvpznthet", "lpxucikxzqggcsildhzcauszjlgogostdrngazfzrlgtg", "jyimafecorkexzwqcogkqfppxbxsjozsoieonksbbdiaegt", "ztmeicdlzwupvpddtuqgoujtemxkfghgbtmjvqxxmtohi", "wxibndfvdkivgjgjzwlwgtkwapuzlpjqcatuekdzmdwaxh", "quzlizytkxvpmjjxhbubmrjdvhubuuynqzyayzwiwrzkci", "lenxvwcsfztbttojspmsoidmzcydninymayjycddbwfwrvi", "fxwvssocsnvpeapeuorpucmzvzdkmuteaihvyzqgcdrlubdpd", "crrenbzjcklyadheultwinxblpogaehjyozknsszqulhsir", "briedghmrkfwmoxwzmpaxhaxjikylwwonesqmaeemjcyxzv", "vxtrdouzpfyuryudhwcrfjmqwmnzyvaacklaromibbswcur", "uemvzoztjhzcwynpysjrdhbcjqedknqetdbutanehngfntwl", "erphwyxaehpunizrdsrswbheiuahfoomhftdgrdkaueqdehi", "axdkboedvmtlybrrexkkjlepdjvmrumutsewgkabwvowwfqb", "npnrfqbccuyrqrlworhquflieiquluuymkrrauvfruyhljebc", "yamwccxmliycqbpzuesllbjasxayuimzcqckbbdcetbtg", "vaohiphkktaqrfgsyijzhttjhgjtobgjdusnmbzwuaonfugf", "glkzxuigpwjwimsazecycyarmfnumulshwuescmhyvfgjyj", "njhljazrptdjfyrdsxvukeuhkbrkmbozkxmwzmnphsyosrrkp", "ztbifezpqbdrnddjcryrbtspljjyaxebshkxljodkswyxcj", "itwdlmowvoxutypckmqubtgvsgsuqtpammdxatwxivrdtifg"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> S = {"chnwlskhcpcegmprnkzbkpropyzsiprmyekkxvrbkwhsiwmx", "zvcsjuqimbzenykykjvdkhzrajomhxziseadyt", "unsjndhzoeczmeqmpgawfbezfhcfcquwfmfur", "itxhhbzvrgvplzwlgdpmfhidowkiqbbyxbfecgavmxla", "ldmcrtkzyyvkhlmkljlspqzrllrynnha", "rdhgzlhvzxvpawixbommgiqvftdcxbgwyflpkhabeilb", "pqyiosxoqvyoapztvsutdvipqdskibexrehhygxodvfdl", "otcezujemyxrnyjamkvdihszkhzjydzibkasqv", "qnobanajamrkvgopehsqiqixcwt", "vbmjrnlepxhbotzxhodrhuzxcyczsbtnfhywumdjjkmzd", "maadhwegydkxxmsktblrvzwgkgtjleiagkfngmwergeouya", "nhxmdewmxgzdqbkahzgtvmmeq", "ipkqtqolpxseftyxpoaubdosqzdrividdehhosxyvvgyv", "qpcixngnfrfaftfwawggutvdezrbesuvjxdimlvrda", "vbgwxpericundnoihkdqhiauuwnxyhhwiqs", "yznavagjqoqbtjkbjgxhuugdecluws", "toxprdajtsmmbxpnfnwzjccngpjekkbfbawsdwdypqksp", "uoeuyiynpqzvcjwhkweebciztylmpnvj", "fbigpzwouaztjmrnqtsaulagzptvbwugyempdkfakevusmjjhb", "pmkodfjebelbizsomxqwelswzeh", "tlwhvlmcurdaehlfzbrxrqbcizdmhk", "xqjudvwyoaaujlaimrhfhkjskng", "atxteryboyqqzkzmmhbgrgnbqhldoecqzbldtkhjixzjjywwhx", "eenhadubcsenmpcgwmqcjzhffmfzfqowfzuru", "exunyzckdjigczhqmoqutdpcsrsvtyex", "ltapgdyqmcqvvejladprfhixe", "ibtlopldvodlcfdyajhmjkdcqmkpronbrjmfyxitolgqskott", "fikhayuqpiftzofemfohtboltacotava", "fygpqtcdavhqedpmvllxeajir", "bytreifngcenfzzfesyyjpjqjzqfzd", "deukozxvbekidkokcoineseptw", "cgwhmsrasrvvvieasukwivloppeiobfsjdzvwrxqkvlhdr", "nstwpekewqomtuecxdztwzlguxnzqxwerrcgxokthafaulfu", "pndbwzalyqiwwzpyhnntiuuquobzk", "aglbclbnltykqzzohmbavxwnsnotxhb", "natybglvgvngvbpjfpgcotwbksyrtyigybgcjsxq", "yknnwsecxsyvvinubhujpsmwuvotndflqva"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> S = {"zckejvmrxqfntcpqkwvjjpeteqgnfzfgerknmwgkpoxiqmycjt", "ispokvdrxixbzhqmgyyvmvdcjdfuwvqgpfwzdzqchpfiwvwevu", "rembhrxfoondtjcyiuarjfcicymytogkusnemljcbzgwikvtfv", "ctvyhxikdrmecesgjujocynrivlmtcoyfunbagzrojfwitbmkf", "yrcmetrkiryicgltoufhnicndvmwstzfyjubajevcgojofxmkb", "zwoiqvqvxvubwmdiyjdrxczvpphipvggwhdzfyecmkffduwsvq", "pceqtzklsftdzyrhoymvlbuyxfzrjteaxirshddbiyghzxpnwd", "yfhcsvpzuzvwximgjpdgxckvvdwmqbhrewqpvyidqofdvuizfw", "tqrgylyszsadrjsbvcupelevsmnpeqhxizghmgbmydrsojvknr", "cfnxtcmxsvxdwfmjlnxmsoejxztnsuevbrsxugwodtraaflosi", "ygwxhrkzlpwoiqlewitcdmcgspumzubxcxwjqhidyfsgvdlung", "uazorvdqpeprencuukysrqbpvmjluhgojhfacisrmjkswmnryn", "dmfaaqnuxtliaqicyavmlhfhtuyuhmkmyrmzhavgvgowwyaway", "fqsbktvtfffdyrehtapridphdpddnootgiusbrlgyqmwksdfss", "xlkabpfqevlmdhhfysnwlbuxuzcorzrqmbsptxgxstlybsdbns", "uuxqubenaygpbyeuyktsghqhzvkookqkhnadpgqrgwgixnevzy", "heogzzxplnzsdbvuionomwyjjdeiduokycszdrrpfsjkuheext", "pttywzjztxltbdtfvmwcehmyoscnlxxdqqbopmpjlacndxuajs", "udnrbdfbekmsgtypbszxralfcqhpvxwmzssylbnxotlhbsulxq", "ythbikknuzlaoqtenxfhkpduzybztfvtydvgnhvkggkwyfcmch", "wyiywmzrrulpxixnptxxbhtcpvotcjgbhqzgcyxtukkssifjdc", "lziawyubhccrudxxbwsxhdpbnunsytamvlotjiutmwkjbhgedy", "fjtvjersouiltrdrxaywjhtnvbocgimkognmmycfeyciczukfb", "ehcdyfnvulkhjoieilzdliexlnruukwyraerftmaexjonruxeu"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> S = {"cccacadddcbaddddbadbbccccbbcddabbdbadadccadbacbbca", "cbcacacbdddacaabbaadadbabccacaabbcbacabbdacbbccccc", "bcddabddcdadbbdabbbabdbccaaaccdaaddbacacbaccbbcdca", "dbcbbdcdbbdbaccbacdbcbaadcdbccbcdadadbaaddbdcaacca", "ccacbcaddadacacaaacdbdabccbbabbadcbbbaaccbbcabcacc", "cbccaadcdcddbbccdabadbbcdcbcccdbdbddbccbbbacdcacdc", "daaccbbaaabdbbdddbaacacbcdabbdaadadbcabcadbbaaadba", "bcabacaadaccbcdbcbadcddbcbcccccbbbaabacaaadabcaacb", "ccacaddabbbaabadcbbbdaabddadbaacabadacbbdadbabacad", "adacaccabdaaabcdbdababcacbcaabbdbdbdaadabddbbabdaa", "ccddddacbaadababbbaddbbddbbaddcbcbabaaacbabbbbdccd", "acbdacadccaaaabaabcbbddcbcbdbcbbbdabbaaddaddabdacc", "bbccddcacdbdcbaacadbadaaadacbccddbbcadccddbbbbbdbb", "dcddddbdcdaaccacbdbccbbcbaabdcbcacabdadaaacabbadbb", "dcdcabccccacccdcbacdddcaaadabbcadbdacbcbdcdcbcacdc", "bddbacbbadcdabddccabaddbcddbcbddacbabccbcaacbabdcb", "caddabaabdbbcadccdcdadcaccdccbcddcdcaadccbccbcbcac", "ddcdadabdcccacdabdadcbadaaccaadddbddbdaabcccbcccbd", "abcbcadcaccddbcaadbcbdacbcbdbcccabdcbcacacbddaaadb", "acdcaabccdacadacbbabdbadbadabbbcdaadabbcabbbabdbcd", "adbcdacbbddaddddabcacdbdaaadddbacccbcacdabddacdadb", "acbadbdcaacccaaabcdbacaabdbaaccaadbdbacbbaadbaaccd", "cddddaddccacbbccbaacaacbacdcbcbdcacbacacaaabbcadca", "adaabacdcdcadbbddcbdccaaaaddaacaacabcdabcdbcadbdbd", "bcdbdcaddcadbaaddbacacaabbdcabbbdbdcddccccbdccccdd", "cddbbcdacbccccdccddcacadccacbaaddccbcbcaabcdaadbdc", "daacbbcdcbcbdbbcbadacccccddacbabbadcbcbaddbcadabda", "cdaacdababcbbcddaadddabddcacccaabaaadbbdcdadbdcbdb", "abcddbccccacaabacabbdaddaaaaadaccaccccbccbddbcbcda", "cbcacdcbaddccbdddbdbbcddbdadcdaaaaccccbbbaabddbcca", "bddaddcacbabacaaccbdcaaddabdcccdcbdbbcbddcadaaacdb", "bbaaccdaacdcdddabbdadaddadbdacacabccdccdabcdababcd", "dbaaabdbaadabbcadaddbbdcdddbcbdccdccbbdbbcbcadcddc", "dcccbcadddbbcdddbdacbbbbadbdbaabccddadcdcaabdaaadb", "cacdddcbdccbbbabbcbdcbacbbcacbbabddbcccbaacbbcdcaa", "bcbddddbbaccdbdbdbcababdcabdadcccdbbcaddbbcacbccda", "bdddabcaaaccddacadbbadbcbdaaacabcaacbdcbdbadaabadc", "cdbdccdcaddcdaaaddccacbaccbbbcadbbcadbcaaccacdabcc", "abccdddacdddbbdaccadaddccddaccccdabdaadcadbbabbddc", "bbbdaadccbbcbcbbcadcdbdacbdbdbaacbdcbcbddcbaacccdb", "cacabbbacbaacdddbadacabcddacabadcdddabadcadbacabcd", "adcdcdbcabbcabcbccaacdbcccaabcbbbdadcbbdddbdadacba", "aacccccdadbbdbabdcacbcbbbcddcbdcbbadaddacacbbcdaad", "bacdcbcadbdacdaccddbdbcadbbabdbcdabbbdcaabbdabbdaa", "bbdcadadcccbadaacbcbbdaacdbdcadbbcdabadadcbaababba", "ddcdbaccdabddabacddbcbdadccdddbcdacaaacabddaaaacaa", "bdcbbaababddbbdccbcdbbdbcddcddabcdcddcaddacbbbdddb", "cbbabacaddbbcdbbbbbbbdcdbbcacbaacbbdbdabcbcabdccbd"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> S = {"bbbaaabbbabaabbbaaabbbabababbbbabbbbbaaabaabbbaaaa", "abbbbaaaabaaabbaaababbbabbbbbbabbabbbababaaabbabba", "aabbaaabbaabaabbababaaabbbababbbbbbbbbbabbabbaaaba", "abbabaaaaabbbbababbbaabbabbabbbaabbbbaaababbbaaabb", "aabbaabaababbabbbabbbaabbaababaabababbaaababbbbbbb", "aabababbbaabaabbaaaabbbbbbabbbbbbbbababbabaabbaaab", "abaaababaabababaabbbbbbabbbbbbbaababababbbbbbaaaaa", "abbabbbbbbbabaabbbbbaaabbaababbabbababbabaababaaaa", "abababbbbbaabbbbbabbbbaabbbbbaaabaaabaaabbbaaaaabb", "babaabbaaababaabbbbbbaaababbabbbabaaaabbaabbbbbbab", "bbbabaaaaabababbbbabbbabbbabbbabbabbbaabbaaaaaabab", "bbbbaababbabbbbaababbbaaabaabbbabbaabababbabaaabab", "bbbbbaabbbabbbaaabaabbaaaaabbbbbabbaabbaaaabababbb", "bababbabbaaabaaabbbababaaaabaabbababbbbbbabbbaabbb", "bbabaaabaaaabababbabbabbbbbbaaaabbabababbbbabababb", "abbbaababbaababbbaaabaabababbaabbbabbabbbabaaabbbb", "bbbabbaabbabaaaababbbbaaaababaabbbbbbaabbbbbabaaab", "bbbbbabbbbabaababaaaaabaaabbbbbabbaabbbaaababaabbb", "aaaabbbbbabbbbababaabbbbabaaabbbaaabbaaaabbbbbabba", "aabbbaabbbabbaabbaaaabababbabbbabbabaaaabbbababbbb", "bbbabbabbaabbbabbabbbaaaababbaaabaaabbbbbbababaabb", "bbaabaaaabbbbaabababbbaaabbbbbababbbbbbbbaabbaaaaa", "abaaababbbbbaabbaababbbabaabbaaabbbbabbababbababba", "aaabaaaabbabbaabbbabaaabbabbbabbbaaaaabbabbbbbbbbb", "aabbbbbbbaabbbabaabbabbababbaababbaabbbabaababbaaa", "aababbbabbaababbaabbbbabaaabbbbabbaaaabbbbbbaaabab", "abbbbababbbbaabbbbabaabababaabbaaaabbbabaabbbaaabb", "babaabbbabbaaabbbabbbbbbbaaaabbbabbaaaababaabbabba", "bbbababaaabbaabbaaaabaaaabaaababbbbbbabbbbbabbbabb", "abbabbaaaababaaabbbbaabbbbbbbbbbaabaaaabbbababbaba", "abbbaaabbabaabababababababbbbabbabbbbbabaabbaaabab", "abbbbbaabbaaababbabbabaababbabbabaababbbaaabababbb", "bababbbababbbbabbbbbbabbaaaabbabbbabaaabaabaaabaab", "aabbabbaabaababbaaababbbbaabbbabbbbbbaaabbbaaabbab", "aabbbabbabbabbababaaaaaabbbababbbaabbabbaaabbabbbb", "bbbabbabaabaaabbbbbabaaabbababaabbbbaabaaabbbaabbb", "bbbabababbaabaababbbbbaaabaaaaaabbbbbbaabbbbabaabb", "bababbaabbabbabababababbaababbbababbabbbaabbbaabaa", "bababbababbbaaabaaabbbbbbaababbbabbbbbabaaaabaabab", "bbabababaababaabbbbbbabbabbabbabaabababaabbbaaabab", "aabbabaaabbbbbabbbaaaabaaabbbababbaababababbbbbbab", "ababaababbbabbabbabaaaabbaaabbbaabbababbbaabbbabbb", "bbaabbbaabbabaaabbbbaaabbaaababababbbbbabaababbbab", "bbabaabbabbbbbbabaaabbbababaaaabbbabbaabbbaabababa", "aaabbbabababbbaaaaabaaabbbabbbaabbaababbbabbbabbbb", "baaababbbbbbbabbbbabaabbabbababbbaabbaaababbaaaaba", "bbbabbbbaaaaaabbbbaababababbbabbaabaabbaababbabbba", "aabbbabaaabaaaabbbaabbabbbbbbaaabbbbbbbabaababaabb", "bbbbaabaababbaaaaabbbbbaabbaabaabbbbaabbbbabaabbba", "aaaaabbaaabaaabbababbabbabbbbbbbbaabbbbbabbababaab"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> S = {"hvxkewdlnqhyqbxdwmmdzrqtqtcjdxfkvdxbzcootwmjxlowya", "wvxdbwymmfwoqxboqenktxhqdzrddlyxvqxjlmtwzckcdhotja", "qcxbawyfdeqdomxzklwboowhndqlkvvxzhxdjtrcttmxjyqwdm", "klzmjcwqmmhlxxwdyrddyojtextaxxdqkdzbvcwonqbvhqowft", "qwnhkwlwcbqjxmxvdozrdkqhdombyvqozcfwxtayejmtxdltdx", "owtkdkdvjeqhcwlzqowydojtdbqvtdhxxlzqxaxnmrmcfxmwyb", "mxekkjwbcqhozwdowhddtdxmfvzjxtxqqxwbydavrnlltmoycq", "oxxyhvrdxbhotowzjjtxmywxnqwdavdmzdmfqbdctkclklqweq", "odqdktxvjfqwxdhzboldjhwqxrtvnoccxwmezkwybtlmqaymdx", "tyxmkxlmcqbwxcwdjlfrdkawdehbmvxzqdowqynxoqhzvjdtot", "jxdclqymwqnmxwdhxxwvhbablzoddvyrtkztxmejdcqoqwofkt", "xtzdqmdkvbcxtddcqzohjbaqwhkyrvxwldyolmtqnxwjowmfex", "ztzjjqqdlbkxldmwmnmyvraqwqcxtvbdehdoofxwyckxotwhdx", "dkvqvrchbwwodemwblxkdqnaqwmhyqxtylozxtfjxmzjxoctdd", "ddcnkqkvyqmwxyhctdqjxqjtlrbbowowdzohexwlztxmvafmxd", "aldnqczqbhowxojtxwmkdmydefkdjmyrbxcdtqvxxwzwqohlvt", "hddqzbkovxwjwaqqtqzdxtkmyobcdwoxnxlxvymhrtdjcfemwl", "rvxfhydbtdaloqxqxkcceyhwmkjjlvdqzdwqxdxomobmtwwtnz", "ewwqhxntlmxxdzwdorqqddjbmjwaqlxxymkzvkcocdbvhtotfy", "myhntcktrhctdqkdxwwqezyfazdqlxvqxbwdoommxxlwjodvjb", "jdnezdwalckxfhmxzqtbvqowqdmxbywcxyqoxrddvtkjotwmlh", "txyyvqwacthddworoxmjbdqmkfxdlvqhodtxzbnzjwclxkqwem", "wdeqkvyztxbxwqhjqmncvxlqtamdlcyofdxbordkzwxjmhotdw", "acodmwkqlfwzxomtxzmdqowdtcbvtkxrjwqeyqhxydnxdlvbhj", "qofndxbvvwartxmzmodxmlzwhqxdqwjktdqydxhytoclkjbwec", "yodmjvrmttqcdqbzkmxhdxyxewwxndfkllowqaxzbdhjoqctwv", "qrxnxktobhvzmyfdxzebwwjmhkjooldmqwytxdwtcqdvxaqcld", "jkxyqrbvwnfowedzlwbtvtxddwyoohxxqdjmqkchalqmxdmtzc", "hldwxmzceqxjqohtaykodywqmrwckbwzndlddovbtxxmfvjqtx", "ojdcvfoywqdmjmqwlxxlckxvnxzbdrhhmyxqawotdtkbqtdezw", "yljvowwddmxcqxcdkxmdmhotqbdfrexhyzjxlbwtwqzvaoqnkt", "axdthvwwvbekohcdtmdxmzwcbqxzqrdwtyqlmjndqyoxolkxjf", "dojebrdqvoxxbtqxdftztynjywkmldwvlzwdcwcxmkhqaoxmqh", "cwfjwxbeojykvorzqqklwhvxdqmhtzwtndbltoqmxdxcmaddyx", "oqxxxcbvmtdmdfchyrweyqwojxtklmdzxkozhavdwqwdnqljbt", "xvlarhmvokbwwmtzxjjqdqcodnmxybecdldtwkdwyoxxhqqfzt", "nhdwtydaztmwlycrofxbxdqkqjmeckqwjvdxlvomthdzoxqwbx", "xkdmdbcqttyxdonovkxazetxmqdwjvfylmrhqlxjwcbzdqwhwo", "xkjcfzkrodzvyyqnmmodvltxdwqxwhhxadjxtlwbcqqmdewtob", "nzkdyvqfomxmlwwrxjdbxqhdqjhedtovmwxyxcdakbtzocwlqt", "owltqdmmoxdxxzwhdjycwkbakqbjdclorfwytevqzmvxnxdhqt", "ytmlmodqdvfyrveztadocqwxnwwqbxxokzjcdkdjlwmxbhqtxh", "tzkydtdqqxxwhqymtbxhwokjzoqcbavwxmfxdrncdomdwlljev", "zdwjwobxyjddbxzqrqkchhxktadqwmctvnwldeqxvfomxotylm", "qwknrdyvcdqzxxoqmemvwyqdtfotjdcmthkwxobhzwlxbalxdj", "jwwahkndtlvxheddxzmxwydvqttodqlxrcqzxwcmbkbjoqomfy", "ddrqxxxtqmmkyevfvlcwjmtwzynbxohdqwzqctxwkdahlojbdo", "qmhvlkxwwcneowyddxmqxtqbvtrhzowmljddjdtobkyzaxcqfx", "jbxdyqxwkxkbdomeomrtjlxqwtzwcvyqhdltwcdxhzovmqfdna", "qokyqrdqcoxewmxtmtwjdobhkdxjblxvncwdlzfhmvxydqzawt"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> S = {"abcd", "abac", "aabc", "bacd"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> S = {"ad", "bc"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> S = {"creation", "sentence", "reaction", "sneak", "star", "rats", "snake"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> S = {"abcdefg", "abcd", "bcda", "cbad", "adbc"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> S = {"aa", "aaaaa", "aaa", "a", "bbaaaa", "aaababaa"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> S = {"abc", "abcd", "abce", "bacd", "acdb"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> S = {"abc", "acb", "cba", "zzz"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> S = {"ztrov", "stzzr", "rtzzs", "ztovr", "qrstz", "rqszt"};
    AnagramFree* pObj = new AnagramFree();
    clock_t start = clock();
    int result = pObj->getMaximumSubset(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22881391&rd=14425&pm=11293
********************************************************************************
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <map>
 
using namespace std;
 
class  AnagramFree{
public:
  int getMaximumSubset(vector <string> s){
    for(int i=0;i<s.size();i++)
      sort(s[i].begin(),s[i].end());
    sort(s.begin(),s.end());
    int ans=0;
    string tmp("");
    for(int i=0;i<s.size();i++)
      if(tmp!=s[i])
        tmp=s[i],ans++;
    return ans;
  }
};

********************************************************************************
*******************************************************************************/