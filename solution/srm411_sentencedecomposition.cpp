/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8692
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

class SentenceDecomposition {
public:
    int decompose(string sentence, vector<string> validWords);
};

int SentenceDecomposition::decompose(string sentence, vector<string> validWords) {
    int ret;
    return ret;
}


int test0() {
    string sentence = "neotowheret";
    vector<string> validWords = {"one", "two", "three", "there"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = "abba";
    vector<string> validWords = {"ab", "ac", "ad"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "thisismeaningless";
    vector<string> validWords = {"this", "is", "meaningful"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "ommwreehisymkiml";
    vector<string> validWords = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = "aaaaa";
    vector<string> validWords = {"aa", "aaa", "aaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = "aaaa";
    vector<string> validWords = {"aa", "aaa", "aaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "a";
    vector<string> validWords = {"aa", "aaa", "aaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "aaaaa";
    vector<string> validWords = {"aaa", "aa", "aaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sentence = "bcdaedfbgcha";
    vector<string> validWords = {"abcdbedfagch"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = "zacaedfd";
    vector<string> validWords = {"acaz", "dfde", "azacdedf"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = "ogodtsneeencs";
    vector<string> validWords = {"go", "good", "do", "sentences", "tense", "scen"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = "ogodtsneeencs";
    vector<string> validWords = {"go", "good", "od", "sentences", "tense", "scen"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "sepawaterords";
    vector<string> validWords = {"separate", "words"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb";
    vector<string> validWords = {"bbbbbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "b", "aaa", "ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "abbababbabababababababbbabababaaaabababababaababab";
    vector<string> validWords = {"ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzx";
    vector<string> validWords = {"xz", "zz"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzx";
    vector<string> validWords = {"xz", "zzz"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "abcdefghijklmnopqrstuvwxyz";
    vector<string> validWords = {"kgvaiequpmbxjlfyrwcshdztno", "vpzifhecnqbjrgxsmdoulytwka", "tmrjenvxgbliszocwdafuyqkph", "ohnvqfxjegczysmutwbpalrkdi", "zrftliockpndwaqsmxvybgjheu", "pvocimxfzsjewaktrunbgydhlq", "qfhmkaxdzonplijbvtwugrysec", "mwgjcdbkuzlivqraexynstpfho", "btxsncuplkogzdirawhjvqeymf", "ixjchrznepvdqyakwgtusbmolf", "gprenhkiuwoszfqtmjlydxavbc", "hkpxglnqdjmcuvboztiefrywas", "cqbvnthkiexawfgzprudmjsyol", "zjyxtisrfwgkqumhlcbvoedapn", "copiqerfhbzdkgjaxvuymwtsln", "hbxrjuzigcywmnqeplvsodatfk", "hyacfmnegwpikzutvjxsqlrdbo", "ankjtwdfhqbsuolgiempzvcyxr", "kjrazbfvqxmthwelsgdcnpiuyo", "rchtwevszipajynlugmqdofkxb", "lsbgzpnjrqtyhfvcaxmdeouwik", "rjyeifldoahxbsznvpkwgmtcqu", "mhrzqdfjvsxypiuecnbwgatolk", "odvfwuqhigplzaeyxsrcmtnkjb", "taurlwejbvckgsqnofmidzxpyh", "wcnflouxihmdzveptkbjqagsry", "bswcphnduzmofqrvxjlyiektag", "vmlsnwxfokupqbgrdzieyactjh", "tadbreshjolkmnucgqwyfvpxzi", "pgqexscvmbtunjoazkyrilfwdh", "tzjnmixdrlqaepbvfcwhykougs", "ycfwzuhmisxlkqdaobjrtpgnve", "irqjbfeozctxghvdsynapmukwl", "tojzamiurvywplbdxgfskqcnhe", "ldwgxpakntbmicsujfrhoevzqy", "kbvgqwytixocdnujezslmafrhp", "xljcibkuqpefhosydvnzragtwm", "ypgaledfswrcuzmvhnojqbtkxi", "kpizasrvghmdbxlywcftqujone", "opxtlnzrvcuagedjshymqkibwf", "ehgbvrzjqaowdikstuxfpclmny", "kvcxztnhdwifmjebraolpqsugy", "zxewfhqsrkgpudjaconitybvlm", "txbfqsvepgwhraunokdjilmcyz", "qcvkwgjpubmfdiytohslzeraxn", "ebtjzdiuksxynlfmcqvwrhoagp", "frtmnsckegwvbpzuaqdxojilhy", "nfmtqsrwicdxljhvzpebagkuyo", "oejxdkwgucaqbtnmzpvfrihyls", "orqyvmeuabkwcitjzlpfhdgxns"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sentence = "bqejuwshfzaoycmgkplndixrtv";
    vector<string> validWords = {"mrpzcylfqwsxukeanvbigojdth", "lvopsrtdnizbcykuefqmawjxhg", "ubrdzhjmptloiasyneqcvwgkxf", "xbkpgyealdtucrsnmoqiwhjfzv", "tpkorlxnzbmejaygwfdhvuqsci", "xonlcwvfpibtzuamdesyrkjghq", "ugzvomistrpfdkjlqxwhaynebc", "ykqbpgxfrliahtvzuwjcnomdes", "nazlgidobkprhfwjxcsmeyquvt", "msbrlaiqfjxgthwkeznpvdoyuc", "bvqhfcpyjgelmwrasdxniuotkz", "wmcjzdbpvatyoglekxushirfqn", "bwfjquosgaedprkchvlmztixny", "hzctjqwgbkfplsraoyxvidenum", "sdopegmfzlnhwqjuibvrtxykac", "nqezujfcwrkdiobapyvhxmstlg", "ufixdhrszmkpjlbvtcaoegywqn", "ibsqlvfcmtapuzoyhwrxjgdnek", "cxuahksgbeimqyfndtowzjpvrl", "lkudbwyrcetiofhqgnsmxvjzap", "fxqisythcmbgdaevnpoljwuzrk", "gpyhjikwlcqoxusrvbtzanfedm", "vgebiwksjqxfzcdhtpnouaylmr", "adrticxflzbypkvhomgeqwunjs", "xtrwboyzsckqapdnvihmeufgjl", "vcizpxknryjbtwaodeqguflsmh", "bluzxycjwpkdqesngvtfrohiam", "yofejtlhcmikxrbznqawvgpsdu", "idnhrjbaulzqyptmwefxgkcosv", "qilfxhmzuodbepgykrjnvsatwc", "ctzxyesknviqjohbupfawgrmdl", "ifmdkqxyvzarujhesonlcbwtgp", "zkwveynxhfjapbmcqiorslgdtu", "ijmpygtulzhdkasrfvqwoncexb", "lvxfchsbizqwdrknoeyjmgaupt", "trqoxdslwvcjapziefkmnuhygb", "cfmlwednhgyxbosurpzqtaijkv", "ynpvgbikumhqlxarjwsozftdce", "dtfjlaoxcysguwmprkbnheziqv", "tkdmuqypiarfehbxvnwcgzljso", "ebvdksqmjlrxithwnpagofcyuz", "qaykhronugxidvswjtfzlpemcb", "jhupksbzefntyxmogcqliadvrw", "oplyntajmbfuwsgcdvkxeziqhr", "npsyvflgamexzuhtdobkwrjiqc", "uhcgeqbxrnizsywafkptvlmojd", "zmvtbjkgrlphiexyaucwdnsqof", "xwkiepybnrzdqagolhvuscmtjf", "yupaetsmqxzowdhlvfijnrcgkb", "ecxwobtzqydaughfkrnmspjivl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sentence = "enykglmxtdqjhicvrbszpuowfndxipzbvrkcfelymtsgjwqohu";
    vector<string> validWords = {"uhxefrbioylpgqvmkzwnctdsj", "iszngxylhpkouedctmvjfrwbq", "ucsxeplmwztkvyjnoiqbrfdgh", "dynxkujqobpeflwzhtmsvrigc", "fjnrudwbolkxgqhypzimtvesc", "dcnrgpfsqoivzyeblmuktjxwh", "ugzfdbikqxwcroshvynempjtl", "ytiwuzqhnrmbflpsdjecoxgvk", "tbnipyhuqmdkgclwsezxrvojf", "wdxyjtibsgzlfoqpkuernchvm", "ukmnodstprcfqxihzgylbevjw", "ljmycbrikfdhptwvxuqgnezos", "usglwjnhrmcdkivpxytoezbqf", "uxcjhitonmypdwvblfgeqzskr", "mjtpdwgyexzfbikhquvcrnlos", "gwktprvxsfnjicozheqblyumd", "gesjuybxvrtihdmqcfwlknpzo", "sjuwyxtleoigmnhfbkqzprcvd", "qdhbgmtruozjwfyvlcnkespxi", "rgfbshwckvpeqmuntzdjyilox", "efzjsmnlchkrqpuvgbodityxw", "lnethwgrufydbjcxioszkqmpv", "jfoqgpuzvtmhykxdrenbsicwl", "nqielpcgtvkxhwzmboyrjdfus", "plomnbqyjfgtwkxzuhdrcesvi", "uktmgfxvozqrijhwlsbenpcdy", "stycbofukqpmvxrzhjgendwil", "xjwgboiyvkqrmczfhtnulpeds", "cohuvrwxlsfmnbtjgkqediypz", "bxosirlquegzwtmcpfyjvdhkn", "ilzrbdwkpfucsgxojnehtyqmv", "xyngfjhrbtzsovmkupwicedql", "erbgsqjftnoxpdkvilmczuywh", "jsvtfgqeurwdicxyonphklzbm", "oivrwqcbmkhzxsgpndetyfluj", "dlzrksfmcuopbvgnxiywhetjq", "xymdoclwgrhuqjbvsezitknpf", "etkfuxmgqwjorhsbcnpiyzvld", "fkopnvrzcyhuxjqgembtsdlwi", "givqnzdukhoyslbefpxjwctmr", "npbhszrgvtyecqiwfdulmxjko", "bpzednyghsfkctouvixqmljwr", "imvewlpxdhytzjrqgcsofbkun", "cqyfrmhevxbudskjwizopltng", "eydzvurbjkfotgwxlsqnihcmp", "jswkipvrxdbqechzolgfumtyn", "tmlxcyzghnbqiwsrvjkeofupd", "mqnpebvcuogtlhirxkzywdfjs", "qogyerflhbitkjczpwxnusmdv", "nwyjiolxgtdukvhmbfqzscrep"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sentence = "wequnjoiiyjdpshyhwemzwplkyvoyusdmuwjudhjodyiuhxl";
    vector<string> validWords = {"qew", "fgopyhvvluqcmyao", "hlx", "yodi", "koyv", "pysh", "yhaccyrldhhrvnhdyxmgseovqhaocvweu", "jyggpbdnqqbuizrwqwyzvjrgapesbyqkxdoldkkmwjloxnwaa", "drykar", "exroqvirs", "hwy", "emz", "sph", "gjylupmtvkvilxlohmezwsorzgnyutqvkzrkryspvog", "nwjecxmaxoxllbimywelzhwsfurfzabqfymbmpjrmziydqdw", "yuds", "zlpw", "atkcqpirojawdxmfefoyvpcfgvltfjelkecofagcdaeva", "kvy", "odj", "vxfprwzxsnqbmwzv", "wlp", "hyfkufxbokjhwktcecnxr", "uiy", "oiwfaibclhuvcqmtywcdu", "jduh", "njio", "juw", "gukgxlpgooiaawgcxdzshsaaiimccymou", "vaxudzpkngfqcwizewffeisuh", "gcqrzduldlyoodipgawmxnvswogc", "mds", "diyj", "rlmwpfucfypofaunjwshwyysv", "jdy", "exaqgzfbhfdoxngzpzfs", "yuo", "horhepdfktsqzdtaheiprbsoxhliucvfydulrwrd", "jnu", "qewu", "xuhl", "faqpymeeomgqecoxnkkqhzcfh", "jwmu", "iio", "uhd", "mewh"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sentence = "lbqcabxcbygiauhdmhkszlzdsueggtqrpkdmkijlwa";
    vector<string> validWords = {"nxufxuiofsszcjpwtwafcdkppvctzdtixuhvfaewmpntu", "ijk", "lwikaj", "lsmgtunzecjotyxmgrpbwrzsrjjxhkusbimnpxwibviby", "ktgrqpd", "gsuetg", "iubycga", "sdhhkzm", "dlz", "mlaikwj", "rpkmdq", "fgkqzacidgdomqeeovjnwosvtuhqwkcwyj", "hdm", "lqb", "esu", "bac", "l", "lwa", "hua", "kzzlds", "rnagtwypxnrcjglmkjhzauyjzcnixijrguzqtmlptcx", "bacxqlb", "huhadm", "arvhxyuahqlsvceqeklmpjtdcwtuqwotdnpcqwthtlnt", "gsmsftvpo", "kdm", "yig", "qcbbla", "xdlh", "phecdrgjoqianawjvalfstlxptkrxovfi", "idzosmd", "leszugd", "pqr", "cpafrdrgfslgbhmjiu", "cbx", "yxgcbi", "tgg", "bawhh", "kzs"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sentence = "xvwxuaocalvuylcmnkolhqwajgggyzdgwduv";
    vector<string> validWords = {"jggg", "cly", "ggvdydwuz", "olh", "ohlgqawjg", "vcllnumky", "ggj", "cnlmyk", "wqa", "vxwx", "duv", "wdg", "yzg", "nkol", "vuwaxx", "axvouwaxc", "uxa", "wvx", "uvl", "zgdy", "vwud", "lcvuoa", "oacu", "avul", "lmyc", "dguvwd", "aco", "nkm", "jgzggy", "hwqa", "qoawlh"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sentence = "a";
    vector<string> validWords = {"aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sentence = "abc";
    vector<string> validWords = {"abcabc", "rando"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sentence = "dznskkedyyyoddgcebebjznciaavjuhmxzdntqghdnlnonsjof";
    vector<string> validWords = {"vdxhzjumn", "skkdnz", "nhd", "qtg", "ncz", "jslnon", "hqgt", "njs", "dcdgbzcbeenj", "bbee", "thdgqn", "hxzmdn", "yoyy", "dyeyyo", "gohnndqlt", "njcz", "dzn", "ndxz", "yyo", "ksk", "avai", "of", "ydgyobecd", "mhx", "dszeknkyd", "onl", "sx", "ujv", "ejb", "udxjziamanhv", "nzbjec", "umhj", "szdn", "eoydzsyynkkd", "aia", "bce", "dgd", "hstnogdnqnlj", "kked", "dcgedb", "gdjfha", "sonj", "aiabjnzce", "uaaivj", "eyd", "dnln", "sfnjo", "eyybzflhbdbbocgmtzktnxdluxffgetqvitvtnzpbqeaqgjuqg", "ddcg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sentence = "bdabcadaabaabaabadabaacadcbddccccdadcdaaddcdabd";
    vector<string> validWords = {"sknghrcgriqnuowrngnoerheyuyzglizsckwvmkqbw", "ndejiggnaxqktwypioppiqbtvnkzy", "ccc", "owidhjahmcjthrdawfsegmulnzoedperlubr", "ezfkuqkus", "dixruiivgvlaffmvgfsgctmvgbrdqrnuggfj", "tccoanjrvxtooztusnfgyamzuskntggnrf", "baa", "adb", "cdd", "oldazgxlczypalpcazctuvlq", "bac", "ada", "zubhfwfgvxern", "hqt", "caa", "f", "zsctkutaxlnprigqvb", "mgwbgtamxcjcqiqjgtpwfapsggqgihazayww", "cfmm", "dbc", "add", "db", "xejalafmupakyejicngepmlli", "cda", "fladfpklsalobuckqvnuxyoynngltxxuladuxvdxe"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sentence = "dadcbcbbaddcabdbaababbdaccdccbaaddacadbbcdddcdacd";
    vector<string> validWords = {"norietfmnpmx", "cbaa", "zvu", "ofxuqncdkemsymakqykfrdxmybeivgpi", "aba", "mrinahvuxdfwdjkkkesckjxjkilbsztebelxe", "ada", "dcc", "bda", "bab", "pwtdvjcgldlsvrtveiwzvzczcwqmanax", "dda", "abaa", "cdda", "mpxfovkzn", "apbeuhdqgxhpwnjxmvoug", "fzcchiebxebgiubkxbonpnssyzlayfzdcwayftadgickvliwt", "cdcc", "ajpiapivlevckwcyrkqmomxlmofyuprzdtmlwteao", "xbmpqdybnyypchmk", "cbbb", "bcquddapjamt", "ccddbabaacdaaadcabdbcdcccabdbcabdddbbdbaddccddaab", "latydaigphzkuwqpwb", "cbd", "qooyehgzrpwzhsjmeloaoylll", "ccad", "poxnlrksiqztxjjjndtrrvlfjiyslpp", "gyemfjsqjbxwiavuoxvxiaduowmgbywzmmahnhjvoypzi", "bcc", "apwtkjdgmsvaxjdotyjusekhxxlenllubiy", "esnqhavhobelfkgppltxexrhmaaaooknyftqswo", "jnusiifcnucqmezxbrmwsekwpkewdwluo", "jxribmyuusekxyoatqnbgtgxtmfizcmruwkcbgqnaj", "ddcd", "xaiwytjgmzzbwmxbfncnclint", "cda", "d", "siarnfopyrtmxoaibihgdjvseufoshzxdoizplhzjb", "qabfekhhgvzuehamveogwfhyhleapplwscxietgjcimm", "dcd", "dbba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sentence = "noonnonnmnnomoonnmooonmnmnnommnomoomommooonommonn";
    vector<string> validWords = {"mmo", "omon", "mmno", "non", "ono", "nono", "n", "mon", "nomn", "ooonomomnmnmmmnmononmoonomnonnoonoonmonnnmonommon", "mnn", "omom", "moo", "nonn", "oono", "ooo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sentence = "yzzxyzyxxzxxzzyxyyxyzxyyxzzzxzzyzzyyzxyxxzzxyyxz";
    vector<string> validWords = {"zxzz", "zzx", "zyz", "xxyz", "xzx", "xyx", "xzyy", "zzyx", "zzyy", "yzx", "xxzx", "xyy", "yzy", "zxxz", "yyyx"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sentence = "zzyzzyzyzzzyxxxxxzyyxzzxzzyxxxzzxxyzxxzyxzzxxyxz";
    vector<string> validWords = {"zyz", "xyz", "xxx", "zxx", "yxy", "zxz"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sentence = "daeeaedccdcefcfafebcbebdbafddbfccfbadd";
    vector<string> validWords = {"ebbdcbbfa", "ecdfaceff", "bccfdadfb", "eabfc", "daecdeadce", "dd", "bdbfdbbaed", "eadeeda", "dfadb", "dfccecc", "ebbdb", "cddec", "cfcfe", "cefbfba", "bfcfc", "dceeecaad", "afcdfdbc", "abfdebd", "dda", "cfefcefbac", "aaede", "cbdfbfc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sentence = "a";
    vector<string> validWords = {"a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sentence = "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "aa", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "aa", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "aa", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sentence = "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "ab", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaa", "aaaaaaaa", "aaaaaaa", "aaaaaa", "aaaaa", "aaaa", "aaa", "ab", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sentence = "agabgfgbiahbgafeahbchfagbcahdifaciibba";
    vector<string> validWords = {"baib", "aef", "bgagif", "fhcaahbg", "bbici", "fbachh", "i", "bagcdh", "abagh", "bfahc", "f", "a", "dicfiai", "hafc", "ah", "bag", "idaf", "aifc", "hgcab", "igbah", "gabgabgf", "ggbaa", "eafaigbh", "bfgig", "cahb", "bb", "hbg", "baga", "abhef"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sentence = "biafebbciahfbgccifdbdifichhdeabdbacged";
    vector<string> validWords = {"ddb", "ca", "bci", "chcigibciddff", "feabib", "ib", "fbd", "cgcb", "b", "i", "bdb", "d", "bbecfhbbfiaia", "fi", "daheh", "hfa", "aef", "fcbcfiidd", "fe", "gde", "icabebh", "efb", "ihhdc", "cbgifcfeaedgfdibhdiabiebbcdabafcibcdhh", "fdi", "fbihacb", "af", "bbhadde", "iicbadhcbfaihhfeifddcbbcg", "deah", "hc", "gcbfic", "bg", "bai", "ciafh", "chgbddbaaede", "dgbecdab", "cdaeg", "adcbbegea", "iichf", "cfiid", "db"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sentence = "bfcabehicifechhabegcbahfcfhcfecbgdcdih";
    vector<string> validWords = {"ccgabhhffeccbef", "hchea", "b", "h", "ehffc", "cg", "cghddi", "fbbcahie", "dgc", "cebddfcg", "eb", "bcg", "bcafebh", "chff", "ccbedgd", "hicibfcfabe", "cfa", "cahfb", "hche", "ic", "cdgifecchdb", "f", "fcab", "cfh", "iehicchf", "a", "bchha", "fbhafcc", "fici", "bhe", "iacchfehi", "ebag", "cbf", "ahhc", "cf", "fhegcbca", "bec", "cb", "hf", "eehcfibhfcahbcag", "efcgbbbehchfhhfcaacieih", "eccfhbf", "iacfcfeehbi", "hc", "ih", "bcbgeaa", "beg", "eba", "ef", "ihd"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sentence = "qeexwbyhmdqnjzavixdaygbcaclacmwhgepgqk";
    vector<string> validWords = {"md", "xeqe", "qjdnymh", "bdyxehewm", "yhmd", "ccala", "n", "bcg", "cgaydcalbxmac", "kgq", "chwalm", "jaz", "vjnaz", "hg", "kghegpq", "qe", "hy", "w", "nj", "xajnqivz", "byag", "z", "wex", "gbayc", "d", "edjqynwheqxbm", "mewxbdehqy", "gqkp", "eg", "peghqgwkm", "bdqzvmjiywnah", "vjnaiyxdaz", "q", "wccalma", "mqkpegxacgaqwabyngcvzihwycblhqmjeaeddx", "gcbca", "cixdbgay", "ac", "zaxvid", "b", "wbeqex", "eqpgkg", "acml", "aidvxczabayg", "ayd", "acqcgehwgkmpl", "vaix", "c", "xbew", "pe"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sentence = "jjhqhmdqqnsqtsololiarelmisnargmlranfnhgiasrfmgfksf";
    vector<string> validWords = {"k", "e", "q", "hhq", "an", "nh", "sq", "nf", "m", "h", "fk", "f", "r", "s", "sqt", "i", "o", "n", "nfn", "gh", "so", "dqm", "l", "is", "lmi", "rl", "jj", "lgrm", "llo", "sn", "qqn", "g", "li", "a", "qd", "rae", "fr", "el", "t", "nar", "ais", "nsq", "sk", "d", "j", "st", "qhj", "lo", "gm", "hm"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "aabaaabaaababbabaaaaaaaaabbbaabababbaabaaabbbabaab";
    vector<string> validWords = {"baaaaa", "bbaab", "aaa", "aaaba", "aaba", "a", "bbab", "ba", "bb", "aaaaa", "aab", "abbaaabaaabbaabaaababaababa", "bababbabbaabbaaaa", "bbb", "aa", "bba", "b", "aabb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sentence = "bacbaabaccabcccabcbcacabaabaccbaabaaaabbccbbcbccac";
    vector<string> validWords = {"aa", "ccca", "cacb", "c", "bb", "cbccbbccaccacababbabcaaa", "cbaab", "cb", "b", "cc", "bbc", "abbc", "a", "cbc", "aab", "baabcaabacabcbcbaaacbcabcbbbabcaccccbbaaacacaacccb", "cac", "cccba", "aaa", "cbbcb", "abaaa", "ab", "aabc", "ac", "aacba", "acbabbacaccccaaacabbbabcba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sentence = "badabdcbcbdedbaabdccecbcbcbaceeebdacddababecccaacc";
    vector<string> validWords = {"ebde", "edbdbeeacccadabecca", "bbacccbebedcecaaeaccbddb", "dacbadbcb", "aadbb", "ca", "dadceabbad", "cacabcbbdcecb", "ba", "badeadbbddcbbc", "e", "a", "caac", "bcceedbdacbbbacedccdadcebabbabdecdbbdcaa", "edbccdcbdbaae", "dcdaabcecb", "c", "caacccce", "dacbddbcbcbcbcdecbabecdaeadcccdacbacbbbeeacaaeacbd", "abcbcb", "debabda", "cccaacc", "dbcecdb", "bceee", "accbbdbccec", "ed", "cca", "dab", "cbbdabc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sentence = "ebdbdbbbabdaaadecdccbaedacccaaedecbbeceecbddeeecee";
    vector<string> validWords = {"e", "eddeabaebcebebcecddbaebaaebbcdaedccebcddbaeaccecd"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sentence = "acaadeeeabceacbdadabebaeaaedcdcedacbbaedaaeaeeaccc";
    vector<string> validWords = {"nywipsiajtixhuobzjlsrqknctqtzoklhyj", "jokulfvhvoukfkahiywkqfziulfqepzcvjhqjcfwxyg", "aaoucrnquyscgxsym", "ntxcctmytidsgrw", "shhzbkxdluaxjkpgibbbwpijgwkgnjalfw", "mr", "acedceacaea", "mxejcenthajfdg", "wsvusguwsvmwpqvygbpaspcwpzqtevegekcckirat", "cjjhsnmzhir", "lsp", "knjvxsmgauuuqrzk", "vtcxafzyjabqibk", "jgntqrfudhivtfpcjogpbaxwfxqkuzdxd", "ucfguydvj", "czdwmoqwpomogjhxkqnhhgqxsxinllrtkgppib", "qchudzdvoglip", "eebaaadccaddceeaebebbccaaddaeceabdbaeaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string sentence = "ommklpqehjclmjncpopgjfngfodlmigcmdfnmindnmleiiffc";
    vector<string> validWords = {"hj", "mclj", "lpk", "ldo", "dmn", "cmfnmdni", "mfdc", "dfjonfg", "fgn", "eii", "jmn", "gn", "pq", "f", "gp", "pmlccnjj", "dn", "mi", "d", "of", "c", "eq", "ppoc", "j", "l", "mom", "mncmdgfjgigfnmodlf", "jg", "mkmlo", "ml", "inimeld", "po", "pgo", "i", "nm", "ffi", "n", "qmcpekxapickctmulitjkzzqztepihr", "cf", "e", "opnqpmjhlclpjmckemo", "pheq", "glim", "ni", "mdf", "enlnimid", "fi", "lk", "g"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string sentence = "egjqegfopgcpckogjqpeqflqqmmff";
    vector<string> validWords = {"gp", "jqeg", "cgp", "lq", "ffm", "epq", "qpj", "ffqlqmm", "f", "go", "eqj", "ge", "ckp", "ff", "pcqogjkc", "mqq", "eqfg", "c", "utnphbyrmynokvv", "q", "ejg", "gefopg", "m", "p", "epkfgcpggpjoceqo", "qfle", "ogf", "eqf", "qm", "o", "lyweughtiibjqmdlxmpmhx", "qfqqfmfml", "pq", "gko", "j"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string sentence = "s";
    vector<string> validWords = {"fkslilgwztakkwcefpchshr", "dwtzyqfohjkjvfyea", "pyuumsvhes", "utubswwyoveedhxelynjgypfkguj", "yptgsfzxrpvfgsafqihtewdp", "sg", "tpmkkvqhhspbyormgfeycwz", "anqj", "jlezlyinayxfotxvlrmwtlabvei", "krsay", "efukdjghuvjmrifqeoh", "aytloppziwyhsafnpry", "gjxcgychbkrxmhylmmhzxezubfmwmmxhmbtymhmwnkaoaalkz", "whze", "pcwnipxpygjbbla", "qyhnb", "khlzyxegtxejpdrlwrxrsdxnexnfwody", "vclbxawc", "wcrytpceaaqnmwznbwgpyaozkivqzdtuyggmsbaaupjggej", "oktfzivfcdxitdviivoonpuh", "ilnxjhdcypdvxhueadwukhokarolkjplollviftr", "bapxxnhgon", "s", "fpljlewrvsgyahbhipdbmwanzi", "rbzluwsrqodlqd", "ddjsseoaoqayzydzndloedpdshvcputkhfowuto", "qyujyhbqgwgxajlykfcfnodftzgufomwwptsxqstttgbjvmsl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string sentence = "ja";
    vector<string> validWords = {"ja", "pyroixzploajiufmvsumduwvqzrrluwq", "vntgfboqgspuwizqzkyzevr", "zndtvrhkcgacjqwoxpqvvyndkijbhwsmbpywgr", "annum", "wxkckzfegqzpcybzneitkzcruplrxjksbih", "vkmzugjoesbxkdeouwgyrnttfnshodwwvookcl", "vfshvivmlzvrrkjxzlghtgbfd", "qnejzifc", "wzmmsazeaepzaotcwiyeqbpenmxwmfm", "jmewzcztickufgrqfjtervauvxyqrugsaccbiid", "jtojaihtytcyjjnnpcaj", "kbggzwsjmdtcpiphknmiidjiqmg", "hkhedqsoxjhqccbesrsibma", "nwfngfawrubovzgpyqixkfwqzsspoescppeaugrfbnfnji"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string sentence = "gjncubfsac";
    vector<string> validWords = {"mmwwpmjetiwbyywzmutnpqpw", "imzrwfqoeqgfweswlwuolnbvup", "zlbnrariafynpcgoode", "ucjgn", "welcwgfsfcbmylwjv", "mfvegccuywojt", "dqflayxqgfrezpgv", "mhnamehnunhfygbezzxwjmraffwcoepeoqu", "wofiudarfcvrgqosgc", "fpvjrwfbaglutjpgjnbafbegumdgedb", "c", "txzakcynfcdbuepgudaeftsfrcxbszwrg", "g", "jn", "b", "uwekrvqvxmksaezvbordhfsqoirzlrrxmgpetjyfrsw", "oi", "pmfymvwoizyrum", "bcu", "f", "fsa", "hvjz", "as", "csaf", "ngj", "whvlulmaqkovijixfgu"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string sentence = "hjcrjqjdhzymclshsfmsgkwbwnnrzqmrggesfvhjswarjvtrnd";
    vector<string> validWords = {"e", "c", "f", "l", "ajllmxyqqnbehsvjxriqvqcsaoydcgxjfytaafhv", "rligdowckgaqbloporuerjrzsrukdgncpt", "spkfjyefbksymyrfprfbpuuonifrthxdtbkzvecxedfs", "y", "g", "v", "zgehoiwpyuperasvkzjtltzpfk", "w", "fxn", "tjdkojjhteognoxrwhvbwtwrnajsxuccimf", "ndpddxflkddrvjeyvafftilcefunjiyxrwtokaikogs", "xvqbpahcvjdapmeiujyncrjyejmjkcjrqogvzyochrh", "ydydjsrmsapcbtpapghx", "a", "ywsxwwlfbhkjkomdtsfnxovhjqmrg", "z", "qfblrybgwhgttwnbgyghiyxebrmcbmyhigbyq", "q", "h", "despwkupanbcab", "k", "s", "tewzgaweyblklfctzhsrlsivnovbnrlwacqac", "ffblrcjxyuiouqohibjywytnapjlxyldgqnck", "yxefoladz", "r", "zayvbfwxyizxpdrmiietvqsp", "hp", "vxzjizajiqxdegvmrqyznskrnjehzteq", "t", "tgwjamppxfgwyefgwvxmftft", "j", "b", "zdnhqjcvucqliiotntjltckseptutnfu", "ebkvvyugexn", "ptummkzjxdaai", "d", "psrzsllwuusfxjfcjvligasmua", "n", "ezqwfruomcvakwwzbyviaakxlbohzjwiiqhtib", "rcaseurkzsykpouielvxtzjlnvmqqdtbkzkmwyvwtyv", "zktiuptsjiscfvprdhgdgwzklbjvywclkriubhqvqhtr", "m", "bhsymssiajsqwtyzczdqttomutivzypvwodorrg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string sentence = "ekmmlglvplpszvdkinqpzvntuxsdxtxaiqrxrarpfybmdtbkpc";
    vector<string> validWords = {"qovtzhbcnbhljtrdujnhvlalmgvyptyvacwgpcimsnptvi", "xrar", "vvcrpoanyvhjxauajkhmpkfpolrsnt", "xosujumsgiakptobbuwixkgnodcqoaylyeckwnnanockt", "sdcttxkdjdqpleabsxoovtebiwjeu", "emmkl", "kymdfbbpt", "ritsdotm", "xtduxs", "pvzn", "pc", "g", "qidvkn", "lslzpvp", "riqaxt", "yzmjixiduirpygxxqqapkawnisuxbzhrdzcelfpjgwkkhawqca"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string sentence = "otkdgczpylzlvoiaauefleeitghftyjmmmjwetoqhomaihjfxk";
    vector<string> validWords = {"w", "aai", "eowtq", "k", "ytmmjjm", "u", "tegi", "xhjfk", "xikfmojha", "zlvo", "lzioavyl", "feuel", "jewyjmmm", "vallozia", "g", "ohtq", "miofjah", "zplkzdgcy", "ot", "t", "iha", "gefthefiel", "tdk", "tetfijhgy", "mtooqah", "hf", "fj", "mmfhyjt", "hmo", "ovalai", "l", "fhkixaj", "qo", "x", "o", "gkopzytcd", "i", "ehifgte", "h", "kx", "e", "pyllzvgzc", "y", "ua", "mjmmw", "dogkzpct", "efl", "todk", "mwqmhtojeo", "liueaoeaf"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string sentence = "scfeiqfifmolyiwqhqtcbsotyowdakthzklmokcvq";
    vector<string> validWords = {"ialycjocgnhkvyhsnure", "ytfyiofoqcctwfsmislqebqoih", "etqtcwztyacyawov", "dsulstxkvlgsch", "pgmxnfkjnztriigaalsrxaqxlbaypukfcmawi", "wahzmkdtokl", "ykldtoszcoawhtbk", "kqvc", "wr", "wwrhitogccclosimxssolbhxoxgfaubceh", "bhjmrqidqnnuqcozkzue", "fjbsgppfdyzlzooommvggptwobqhblajgllt", "t", "mvockqklz", "hthobcwqdqasttyko", "lmyffeqwioicsif", "eiimoyfhftqqciwqlf", "s", "inoarftdnfbilfowmajxfvdwvzyealpydghnzchfppbs", "kmqcvo", "tsydkwwsyhfpbnpznctmijcvfwhnkye", "osozkh", "yzrppsdpnlxuasbypbsmuodhgdsnr", "nvuhtjfwifrntgbxkmmffs"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string sentence = "jysohnwxsooodfmrhxczrqowxhgggbbilajwxnf";
    vector<string> validWords = {"sibgcskjutlofvhxslgscmcrhgatmxppytqljufemk", "yfnninipoetesuazbqtzax", "cogyxdiuhzwnxrdzuumepiifw", "bqze", "bhgxrbjfmchgxosjhowoyaozogslwdinrxq", "bjgakyklvayvwnzugwicjebjaxupozvydnaoi", "qtdquxfqyooylvzhp", "maxfkjprcq", "ffhcvrlutjszyfnqszwqunhlbaajfxwtxoxgdumvqwonaxe", "ogiwxxqybfzalgosdnwojsrwhbhoxmjcxfnoghr", "chzaxzylamfvnfpdsnxtwiqqdm", "zmfmiinnjygignaipkvnnkrcyswrvhlzqiotxyhsqwnpxcskn", "quirtnfpimjhimgqxmeovgpvepfnqhvogyucjhfa", "bwwqxyg", "hlmlijjznobueqgisdudhwuojjkohhrvqeevtuqvqfytr", "fuwnhbbwntujt", "qbtrhldvzgsraupriauhccrqtphcdlfufczjvuwknqgazexhh", "inplmvzdwiduhrgttzppwkcvj", "oondfjlyjfyzda", "gblagwbjfngxi", "txtoet", "zozvqtoayrtmhwhqkzbxlg", "wlglxukxngchcpgwhqgqzzt", "lbxqzjgdctmchspyzlpwj", "nvt", "geerdimhpwcbblnzmaxztbosrjxbhgqjwqtojiwyj", "wxajphlkazwvoacndddxorrgtsawnyfokzvgy", "lkwomzqhwzqxskhneoovqzwwyhfhtfiahcauuwdrzmavvyk", "osonxswoxhorhjmyfd", "kyffbdoxhjqifgskepdqw", "mpkrkbyhygefghm", "ewtoxzlfcueidgiklsgkwgnuvsowuzwewgusjprojuzptsjjw", "xwnf", "qmlgxmjkvarufgzyeciymrwlhhehirkwrtkzwy", "bomwhmtywcxhfitjgdpasozvullhgpqnjjjkrvximd", "ttmredxydrlomqjhkkjaumi", "aferhpniczuqji", "kxqpkmfpphbbzfzngknuaumofwurojkaifgqgvtnugx", "zyixcktalnzqyvdn", "xrohzwcq", "cchpbsjdzeilrdyeprshmxqwzrsvccwyamixojxtozt", "sv", "zxnaekdqgkdlopjvyytqypqtoiyjv"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string sentence = "hfdfeahhdbidcggffdicficagffaddchbcigefa";
    vector<string> validWords = {"cdvbtxlpkynoiku", "jdsijyrmuciaxsvb", "a", "gfcdfbhhghfddiafed", "bohcznghfabrcjudhkbehvruhsrzqcn", "nkxbdvlfdgcegxysnmzxveltqipgghqzlargqotcdas", "ifddfchagac", "cif", "ffidgc", "g", "vrdqnrhvsifmeyrrzi", "hgbybpoastvdjopxqleiwrbccqkewmqijjus", "dsigosahnjfxwuyjdopwciuigltmnorxsvrl", "thwkvftjawkvkkdrusmregagjqfncgvbopftii", "cardiaqtioul", "snppjlhjkjjkijndusshclumxjqdmdtjlecijccxsmhtgt", "fadf", "dcig", "ojuffqkdiidwvazouqjhlnkevvdbqdfre", "gzzxklvqdawjetaonyuettxifevsjpgrblxnqofnfxg", "ccmrvnnoxcwouljo", "ihccdgb", "fzgzwjwxjktizocxrhbaqrfhnbpevsvxqsefsctyxgndi", "abegicf", "bycjxcdzii", "aqyagbbwwdsffzjqsqorpytefgdesxwq", "febjqhah", "i", "fe", "uld", "adghfiaccgifefdieidffbdhggfcdahcfbfahcd", "bd", "haeh", "jkmmiprdqunrwzp", "dffh", "tzcofjnfqcwxdnqleftrnyoiuqp", "gsjoddfixvdpjbxnemzwmvbrexpoye", "cfia", "paulilmwafnxgptrhcegpblzxcngefcebwscxdjmqamfxneqq", "lnpfmphctkjahr", "qrawteikglfjhsplhnmpbqzhnluqabvvytbybo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string sentence = "efaidfhceaecihgaacfgeccbhigcbfihegbbiia";
    vector<string> validWords = {"zgxjfaqzgnjepoddjbivxkieuknaiuuxvkag", "jgatkizstqhp", "zzkyekhbhhrnblcjdkfnsjzbrdurdvmf", "wrujt", "lrzxhikjqmtdaxcdcqvbviezzgsljuvtwbjmi", "ecgbchcf", "yqzntpkxmsciqijdqeerbudqpdrhevrdmteylfdt", "jftdzkpwnwlssqbekpnyfjwzlehxpykmx", "wrujt", "caahfaiiagecehgcdeff", "usxfvapsdfiqpsmtnkqfzgpojzllmpeb", "sgwsxzpmfdueo", "usxfvapsdfiqpsmtnkqfzgpojzllmpeb", "sdtvxmtyoimzhhtiulbnduokgvseucguuadjxcjlnxgqx", "ajsnytjbkysvjxgdgvboqkrsk", "uibnvfkeeyfiiztednebawgxezxymwstbcmsojq", "fecgc", "eaf", "igiabibfiebghc", "wrujt", "ebeiciibgbhfhgcibca", "jyfmeunvqlprsmxr", "i", "binepewekzaiou", "bicbghf", "ulunhphupppenfdpejzdztvggzulo", "eaf", "lhqrnynvzoluccaicaeixmmusmqhojfzyrcv", "bayuflqtspjmdmsmihtgwvavgqnrqvmby", "bghe", "jyfmeunvqlprsmxr", "caag", "mytaortpfjaijnodhnxb", "nxummrxapcpdxtvzxzssrnuymdrmpweuohcukyf", "hziceptxgrsmltguaoelav", "ajsnytjbkysvjxgdgvboqkrsk", "akjqhvranqfwdnhzrqgwrnfhrlapwkpmsopecant", "ihaagechfadafecie", "aecih", "uibnvfkeeyfiiztednebawgxezxymwstbcmsojq", "jyfmeunvqlprsmxr", "jyfmeunvqlprsmxr", "cfheid", "eaf", "koqclmzy", "njhpbgbgwtfgjxaclxkgxohffstamamtwjwklpurrgdx", "drlejckilezkbpg", "binepewekzaiou", "sgwsxzpmfdueo", "iaib"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string sentence = "iecabccgdhibiebdcfchfehccfchfadbihcghgibbabhffeidf";
    vector<string> validWords = {"dgcc", "ibd", "g", "chib", "cfc", "fei", "dh", "di", "c", "hfa", "dfachcf", "ba", "ebaic", "novuf", "fche", "ch", "ce", "t", "hfb", "zfuggthgwdf", "f", "kpxutteecflgaspspcueuxqemsxyzpdwlekykjhztztzlo", "h", "hfcfec", "ghg", "fd", "db", "gh", "diebbi", "e", "gc", "bi", "oryagmafuutfsqjwsdrdoffeavl", "ffeh", "gcdch", "d", "fh", "ig", "ghc", "uexfnppqdfwn", "nptqmkjoubdwlle", "bbia", "ihb", "adf", "he", "fbdce", "bbaib", "i", "b", "erzs"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string sentence = "hcfiacbhccfbaggbhecdhehchfeieeiegdffiaahcieddebcgi";
    vector<string> validWords = {"ee", "dbeed", "edg", "ff", "ce", "ee", "eded", "e", "cfb", "dh", "bggh", "chf", "bhc", "ic", "cf", "eegie", "echfehi", "hgcbe", "gdff", "chf", "cehhd", "gi", "bigc", "ihc", "gag", "h", "bc", "dde", "aia", "i", "ef", "hb", "aah", "fcbacg", "cig", "d", "ei", "ech", "iac", "dbeed", "ccbch", "c", "hceif", "cig", "afci", "aah", "ia", "fab", "acih", "h"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "aaccbabccbbbbcaacbccbcaabcbbbcbabaaccaaccbccabbaac";
    vector<string> validWords = {"caccba", "cc", "epa", "caac", "abaa", "b", "caccba", "c", "babbbca", "qmgowrvzd", "bcaba", "bc", "tyxhifisbbnjdhpvlslqqamnjatpitol", "abacacb", "tyxhifisbbnjdhpvlslqqamnjatpitol", "aca", "bcbb", "acc", "bbbb", "vwpjxcoizlqyaxsqpxvkdmvazrbpjworosfzftuixh", "caab", "bcaca", "jvmjagfqqumywzqhhntbgsddmjocedyfbtgabekqmexgxfnj", "ca", "cccb", "cccabcb", "bcb", "caccba", "tyxhifisbbnjdhpvlslqqamnjatpitol", "cab", "cacbb", "abacacb", "c", "c", "xhflerllwwclnxzsvukrvvqullsxttekcnd", "caac", "ozjrbldnijydcqyajmdocdcinwfvqu", "bcaba", "caac", "ccabc", "ab", "nlxjlajuqpmlmkgfrzovqlmquspqdrhctplu", "c", "tyxhifisbbnjdhpvlslqqamnjatpitol", "baab", "ca", "nzrdxogtqgqfkfxrwmfcpcmyjfal", "abaa", "ozjrbldnijydcqyajmdocdcinwfvqu", "aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string sentence = "bccccaaabcaaacccaaaaacabbbcccbabbcabccaabcbacacbcb";
    vector<string> validWords = {"a", "bbca", "a", "aaacb", "tbyjphp", "bbca", "txywddtnbrjhjjncyyldfoifzxaszcvklupoyeb", "rtaewtox", "bbc", "bcc", "bcc", "abca", "bacaaaa", "bcabc", "babaaccc", "cbbba", "aabaabac", "babaaccc", "a", "bcabc", "cbcbbacb", "abacb", "bbcccaa", "c", "cc", "bccc", "bccc", "bac", "babaaccc", "rtaewtox", "caacbcaac", "caacaccb", "cacccb", "caacbcaac", "aca", "dxizpgbeavbwboyehwuwrnouvtmbgrvouddyx", "bccabbacc", "bbca", "acaa", "aaa", "aabaabac", "afsmaukgqtfuhopwqxfejjdbljzcfmixvlvvcyg", "bcc", "aabaabac", "afsmaukgqtfuhopwqxfejjdbljzcfmixvlvvcyg", "cbcbbacb", "txywddtnbrjhjjncyyldfoifzxaszcvklupoyeb", "aaacb", "ccaa", "encemanewrmuhkhakbrvkhejrkqmiomjcwv"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string sentence = "adbaaddeaeabbdeadacdcaebdbeeddcdabbdcdbaeabaeeaeba";
    vector<string> validWords = {"daaabebbcdcdddceee", "dd", "eca", "baddadaadaebabcaeacaaeddabecaedacdbaaedcdcddbbdc", "cbaeddbbaacbdabbdeeebbacdbcbcedecdeadaee", "ebe", "bcbbabddeceabccccdcdbbbeddabbbebeaaddeb", "eab", "a", "ea", "ada", "ddc", "ddaacdbeedbbbcedbded", "bcdd", "dbaeedbddbaebeebbececbbbdbacbccdaddaabdeadbaacbbc", "dbaa", "ad", "bba", "bda", "aded", "decd", "ed", "bda", "ddbaebadccbbcbadabccbbcdcbadedcaebcaddebacbdbae", "ba", "ea", "bed", "eacedcbedccacedacdaabdcceedbdbbcbeaaecbddb", "beceadbdddaaadecded", "ccbdcacbecebecbbbdebbcbdadeaeadcdbbbcbdeccecebabda", "abcb", "cd", "aeea", "ed", "db", "bda", "bb", "dca", "d", "c", "cabde", "b", "ecdcbbcbdaebaedbbaeedadadcacaabcbaaabbdeaedbec", "ebabeeddebdcdcb", "ee", "aab", "bdbbbaedbabccdeaddacedcedaeeeccabe", "e", "bdacaebbcceaadbcbcdebaddcceedbeea", "bbda"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string sentence = "bccaccaacacaaccaccbcbcbabcaaaccaacacabccaaacacabbc";
    vector<string> validWords = {"caacc", "cabbc", "bcccbcabbacabbbcacaabbccbaabbabccabbbccb", "abb", "acccacbcccbcbbabacbbbbcc", "bcabbbaccaacccabbbaaac", "b", "bbbabcaabcbcbcba", "c", "ccabacbbacaacaaccaacbabcbaabcaacccccbabacacbbbaba", "a", "bbcbccbababaacbaaacaaaaaaccccbbbcaaccabab", "cc", "aa", "cbbaabcbbccaaa", "aaa", "c", "bbac", "ccbbcbbacbbaaabbcc", "ccab", "ccb", "cabcbbbbacbc", "bccac", "caaa", "acccbaacbccbccacacc", "bcbbcbbcaacabacbbccabcbaaccbccbcaaaaaabacacb", "cac", "cabbc", "bbcbccbababaacbaaacaaaaaaccccbbbcaaccabab", "ab", "b", "acccacbcccbcbbabacbbbbcc", "aaccaaaaaaa", "aac", "abccbbc", "bccbbbbcaaabaccccbbaaccacbbaaccbaacca", "aababcababcaababbbbabcac", "abb", "aac", "acac", "cb", "bcccbcabbacabbbcacaabbccbaabbabccabbbccb", "bbaccabcabbbab", "bbaccabcabbbab", "bbaaaacabaaacaaaabaaabbaccbacbaccccba", "ccacbcbaaaabacbaaacccbcbbacacbaccbbababbbca", "acaccbbacababbacbbacbacbaccbbbbcccc", "aabcbccacbabcabcb", "ca", "cbbaaaaaacbbacbcbcb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "cbbbaacaabbcaaabaabaaccbaaccaccbaacbbabccbbacbcccc";
    vector<string> validWords = {"aba", "bcb", "cacababaaabcbccaacaabaabaababcabbcbb", "abca", "a", "bcbacccbaccabacbcbaccbcaaccabbcccabbccacabbaaaa", "ccb", "bbba", "ab", "abb", "cbcc", "bcbcbccaaccaabbcabbacbabacccbccccaaacbcacbabacabcb", "acac", "bc", "cbbac", "abbcabbbbabaaac", "ac", "caaa", "baacaabaa", "accabcaaacccbcbacbbabbcabcbaacabc", "cbacbcb", "c", "aabcbbacbcbbbaccacccca", "caa", "cbccabbcbbaabbaccacbabbaaccccacccaababcabcbbcaaabc", "cba", "abacb", "abaa", "bcbacccbaccabacbcbaccbcaaccabbcccabbccacabbaaaa", "cccb", "cc", "cbaccabab", "accac", "acacaabacbacabacacababcc", "aacb", "baaccbacacaccacbbbabca", "bb", "cbccc", "babaaccc", "bacc", "bbacb", "ccbab", "babacabbbacacaaacabcccabbbabbbbca", "accccbcccaaabbbaaabac", "aabcbcbbaa", "bcbbac", "babc", "abaac", "b", "acbacca"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string sentence = "bbbabaaaaaaaabaabbabaabbabbabbbbbaabaabaaabaabbaab";
    vector<string> validWords = {"aababbbabb", "a", "baaaababab", "aababbabbaabaaabbbbb", "bbaabbbab", "aab", "bbbbbb", "bbaabbbbbabaaba", "aabaababb", "bbb", "aa", "bbaaababababaaabababbbbabaaaababb", "aabaaabaaaababbabbbbbabaaabbaabababbb", "bbbbbbbbbabbbaabbba", "aaaabbabaaabaaabbabaababbaa", "aaababaababbbabbabababbababababba", "baaaa", "aaabbbbbaaabaabaaaabbbaabbbabbaaaaabba", "bbbbaa", "bbbabbbabbbabaabbaabaaba", "ababba", "bbbaabbaabab", "bbaaabbaaababbbaabbaaaa", "babbababaabbabaabbbb", "baaa", "babbbabaabab", "bbab", "baaaabaabbabbbabb", "ba", "bbbba", "bbbbb", "aaaabbbaa", "abab", "bb", "aaa", "b", "bbbabbabbbbbbabbaabbbaabaabbabbbbaa", "a", "bb", "babbbbabaaababaaababbabbaba", "bbaaabbaaababbbaabbaaaa", "bab", "aababbaaaaaababababbbabaaab", "aaaa", "aaaaa", "aabaabbbbbbbabbabaaabaaaabb", "babbbbabaaababaaababbabbaba", "b", "abaab", "baabb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "bbabbaaaaaabaaaabaabbbbaaaaabbbabbbbabbbababaabbbb";
    vector<string> validWords = {"bb", "bba", "aa", "aabaa", "abbbb", "bbb", "aaaaaab", "abbaab", "bbabaabbbb", "ab", "bbb", "a", "aaaabbbbbabbaababbabbbabbababbbaababbbbbaaaab", "bba", "aaaa", "bbb", "bba", "aabaa", "bbbbaba", "b", "baa", "abbbb", "abbabb", "bbbbaba", "abbabaaaaaaababbabbbaabaaabbbababbab", "baaaaa", "abbabaaaaaaababbabbbaabaaabbbababbab", "babb", "bbabaabbbb", "bbb", "aaaabbbbbabbaababbabbbabbababbbaababbbbbaaaab", "baab", "aaba", "abbabb", "bbbbaba", "bbbbaba", "abbbb", "a", "bbabaabbbb", "aabab", "baab", "aaaa", "a", "ab", "aaaa", "bbbbaba", "a", "bbb", "aa", "bbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
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
    string sentence = "hbdfbgabccagfiiggdihgdabhfghhibadcbghdcggdgcaahagi";
    vector<string> validWords = {"gdhba", "bcabd", "caggd", "dgbah", "bagcc", "igdgh", "ghhif", "ihgfh", "faiig", "afgii", "agccb", "bbdac", "ggdhc", "aahig", "agdcg", "cgagd", "gadgc", "dcabb", "ghdgc", "aahgi", "hcdgg", "bghad", "gihfh", "ggcdh", "gifai", "hidgg", "dfbbh", "bbdhf", "ghihf", "hagia", "agiif", "gidhg", "dcbab", "ifhhg", "hbdfb", "agdbh", "cgbac", "hgdgc", "dcgag", "cdabb", "cgabc", "gaifi", "aaghi", "ighgd", "bccga", "bbdhf", "dihgg", "gdhba", "agiha", "hfbdb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string sentence = "mpgacoiztqssujwcyokpwunnnxgjcbisdgjuoqdiswormjebxr";
    vector<string> validWords = {"gxn", "zti", "juw", "gmp", "kwp", "gpm", "nnu", "coa", "oac", "pkw", "oca", "nxg", "gnx", "aoc", "sqs", "wkp", "jcb", "izt", "xng", "wju", "kpw", "tiz", "ocy", "jbc", "ssq", "yco", "wju", "zit", "wuj", "ocy", "pgm", "qss", "qss", "nun", "pgm", "tiz", "pkw", "jcb", "cjb", "juw", "coa", "yoc", "nnu", "gmp", "qss", "unn", "xng", "yoc", "bjc", "unn"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string sentence = "ewtzksfkfpdvwurpzynkynxtqomjjvtvpmhfeyngrwjitwnjob";
    vector<string> validWords = {"ruw", "tew", "pyz", "jjv", "fkf", "ffk", "skz", "dvp", "ykn", "etw", "yzp", "etw", "oqm", "moq", "ksz", "zks", "vjj", "tew", "nyk", "omq", "mqo", "wru", "ypz", "ffk", "tnx", "pvd", "vjj", "ffk", "jvj", "kny", "wur", "jvj", "zks", "urw", "vpd", "szk", "ynk", "kff", "dpv", "xtn", "ntx", "ntx", "mqo", "yzp", "ntx", "vpd", "wur", "tew", "zpy", "nky"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string sentence = "izzzoxghoyrbbiwealjzaxmskpmdptsxjzuccsoequaqsnatnf";
    vector<string> validWords = {"pmkd", "sxma", "zizz", "qaqu", "sant", "oxgh", "atns", "ibew", "csoe", "ceos", "zzzi", "pstx", "dmpk", "xmsa", "ntas", "zjla", "yrbo", "xhog", "hgxo", "xhgo", "jzuc", "esoc", "beiw", "xspt", "qqua", "zjla", "zziz", "amxs", "jazl", "xtps", "xsam", "ptxs", "jalz", "uczj", "ewbi", "yrob", "fn", "ewbi", "uqqa", "auqq", "zucj", "jcuz", "ceso", "tsan", "rbyo", "dmpk", "zzzi", "kdmp", "broy", "fn"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string sentence = "nlngqslfokoeltjhibkhthgsaebqsfamidiqfnkbsfksaarokl";
    vector<string> validWords = {"ooek", "lqfs", "samf", "ltjh", "thgs", "aeqb", "bkhi", "kssf", "koeo", "ljth", "fknb", "ssfk", "msaf", "qabe", "kbhi", "slfq", "sfks", "nlgn", "ngnl", "lk", "iidq", "bkih", "iqid", "fnkb", "idiq", "raao", "aaor", "beqa", "lqfs", "skfs", "aoar", "nfbk", "oeok", "safm", "ngnl", "aaor", "hjlt", "bnkf", "flqs", "lthj", "hsgt", "qaeb", "lk", "lnng", "hsgt", "qdii", "kbhi", "keoo", "ghst", "safm"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string sentence = "bdcabibdcghghjecibdcgdjafjfhffeffcfbcejahgahfijbae";
    vector<string> validWords = {"fbji", "ajce", "fhjf", "ae", "hagh", "jffh", "feff", "fbij", "dacb", "bcda", "hgha", "ehcj", "aejc", "ajdg", "fibj", "gdja", "efff", "efff", "gjda", "bidb", "hgcg", "ghha", "jech", "abdc", "dcib", "ghcg", "bdbi", "ea", "hggc", "gjad", "caej", "cbff", "abcd", "dbbi", "bcff", "idbc", "bjfi", "cidb", "jfhf", "ceaj", "bidb", "jech", "cggh", "cbff", "hhga", "ffef", "icbd", "ffbc", "jche", "jffh"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string sentence = "bbaabaaaaaaabcaacabbcabcccaacaabaacbcacbcbcbbccacb";
    vector<string> validWords = {"cabc", "cbac", "aabc", "bbca", "acca", "abac", "cb", "aaaa", "cabc", "acbc", "bcab", "caab", "acab", "cbcb", "aaaa", "abaa", "cbaa", "cacb", "acac", "aaba", "aabb", "ccbb", "cbac", "bbac", "cbca", "aabc", "baca", "acac", "bbac", "bbaa", "baaa", "abac", "bcbc", "bbaa", "bcca", "abab", "cb", "aaaa", "ccaa", "cacb", "caba", "cbac", "cbca", "bccb", "bacc", "acba", "abca", "aaaa", "abca", "baaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string sentence = "zxzzzzxzxzyzzzzyxyyyxxyxyyyzxxzyxzzyxxzxxxzxzzzxzx";
    vector<string> validWords = {"xzxy", "xxxz", "zzxz", "yyzy", "xxyx", "zzzx", "yxxx", "yzzx", "xzzz", "yyxy", "zxzz", "yxzx", "yxzx", "zzxz", "xxxz", "zxzz", "yxyy", "zxzz", "xzxx", "xxzx", "zzzy", "xzxx", "zx", "yyyz", "xz", "yyxy", "xyxx", "yzzz", "yzyy", "zzxy", "zxzz", "zzxz", "zxxx", "yzyy", "yzxz", "zxxx", "zxyz", "xyzz", "zyzz", "zxzy", "zzzx", "zzzx", "xxyx", "yyxy", "xzxx", "xzzz", "zxxy", "xzzy", "xyzz", "yzzz"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string sentence = "llklkllkkkklkllllklkkklklllklklkklklkllkllkklllklk";
    vector<string> validWords = {"lllk", "kkll", "klll", "lllk", "lkll", "lkll", "lkll", "klkl", "kkll", "kkll", "klkl", "lk", "kllk", "lklk", "llkk", "lkll", "lkkl", "kklk", "kkll", "kllk", "lkkk", "lkll", "lklk", "kkll", "kkll", "klkk", "kklk", "lkll", "klkl", "kllk", "klkl", "kl", "kkll", "klll", "lklk", "klll", "llkk", "klkk", "klkl", "lllk", "lkll", "lkll", "kkkl", "lkll", "klll", "lkkk", "klkl", "klkk", "kkll", "kkll"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string sentence = "aaaabbabbbabaabbbbbbbabbabbabbaaaaaabbaaabababaaba";
    vector<string> validWords = {"bb", "ab", "aa", "aa", "ab", "bb", "ba", "bb", "bb", "aa", "aa", "ba", "aa", "bb", "bb", "ba", "aa", "ba", "aa", "ba", "ba", "bb", "aa", "bb", "aa", "bb", "ab", "ab", "bb", "aa", "ab", "ba", "bb", "aa", "aa", "ba", "bb", "ab", "aa", "ba", "bb", "aa", "aa", "aa", "bb", "bb", "bb", "ab", "ba", "ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string sentence = "babaabbbbbbbbbbbababbabbabaaabbaabbaabbbabbbbaaaab";
    vector<string> validWords = {"bbbbababbb", "baaaabbbba", "bbbbbbabab", "abbbbaabbb", "babbbaaaba", "babbabbaba", "abbbaaaabb", "bbbbbbabab", "babbbbabbb", "bbaabbabaa", "aabbabbaab", "bbabbbaabb", "abbbbabaaa", "baaabbbaba", "abbbaababa", "babbabbaaa", "baabbababb", "bbababaaba", "abbabbbbaa", "bbabbabaaa", "aabaababbb", "baabbbaabb", "babbbbbbba", "bbbbbbbbaa", "bbaababbaa", "bbbaabbbab", "aaabbbbbab", "bbbbbababb", "bbbabbbbaa", "bbbbbbabaa", "bbabbaabba", "bbbbabbabb", "bbaaabbbab", "babbabbbba", "babababbaa", "aababbbabb", "aababbabba", "baabbabbbb", "baabbaaabb", "bbbbaababb", "baaabbbabb", "babbbaabbb", "baaabbbabb", "bbaababbbb", "bbaaaaabbb", "ababbbaaab", "bbbaabbbbb", "babbbbaaaa", "aabbbababa", "abbabbbbbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string sentence = "cbbaabaccbcacbbacababbcaaccaaaacbccccbcaccbcacbcab";
    vector<string> validWords = {"accabcaaba", "babccccacb", "aabcacbcbb", "ccbaabbccc", "bbaaacacac", "ccabccccab", "acbccacbcb", "bbacacacaa", "cbabccccba", "aacbbbacca", "babacabcbc", "ababcccaab", "bacbcbaaca", "cccaccbacb", "caccabcbcc", "bcacbcccac", "ccbacccacb", "cbcccabacc", "baabcacacb", "acbbcbbaac", "abbbacccba", "cabbaacabc", "ccaababaca", "cbbacccacc", "cbaacaaabc", "cabaaabacc", "cbbcbaaaac", "accababbcb", "bbbccaacaa", "bccaaacaba", "accabbbbac", "aacbbaacca", "cbaaccbccb", "cccacbabbc", "baaabaccca", "baccccbacc", "acaababacc", "caacbccbcb", "accbcccacb", "abaacacbbc", "accbcbaaba", "bcccaacbbc", "abaccacbab", "abaccbbacb", "bbcbaccaba", "bbcaccbacc", "aabcbaccbb", "cabacbabcb", "cbccabbacc", "accbaccccb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string sentence = "caabbbcacaaccacaacccbcaaacaaaabcabcbbbbcccacaabccc";
    vector<string> validWords = {"aaacccac", "acacacac", "bcacccaa", "caacaaab", "abaacaac", "cbbbbcba", "cc", "aaccbbba", "cc", "bccaacca", "ccbaabab", "acacacac", "baaccbba", "accabcca", "bacbbaca", "ccbaaaaa", "baaacccc", "caccaabc", "accacbca", "bacacacc", "baaacccc", "accaaaba", "bbacbbcb", "caacbbab", "cbbbbabc", "cabcbbaa", "acccaabc", "cccbcaaa", "aaacccac", "aababccb", "cccaaaca", "bbbbbcac", "acbcccaa", "cbcaaaaa", "ccaaacac", "acccabac", "bcacaacc", "bbbccbba", "cacccaba", "aaaabcac", "bbabcbcb", "aaabaacc", "bcbacbbb", "abbacacb", "caccacaa", "aacaccac", "cacacacb", "aaccabaa", "bbcbcabb", "aaccacbc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string sentence = "farnkasicvayezmgckwtduunscbgikxwwunbkffygbweyxqtsd";
    vector<string> validWords = {"sibkgxcw", "bckigwsx", "nukfbwyf", "kifnaars", "funwyfbk", "gxiskbwc", "macygzev", "xegqtwyb", "wundcutk", "btewqyxg", "zecvagym", "wdunuktc", "yamgvcze", "wytqebxg", "xiwsbkcg", "faarsink", "sd", "fbfnkywu", "ucdwktnu", "cwukudtn", "uffbynkw", "biwkxscg", "bxsigkcw", "gyzeacmv", "aniafrsk", "afiasnkr", "iksrafan", "nfiraksa", "yvmagecz", "teqwxgyb", "uwnfkybf", "gzycevam", "twkcnuud", "wgxbskci", "udnuctwk", "inksafar", "bgwyxqet", "uwckudnt", "aegyzvcm", "tdunkwcu", "cbxikwgs", "ainaskfr", "fwnfkbuy", "wgxteqby", "evcgzmay", "yewxqgbt", "uknbyfwf", "gwxebqty", "uyfkbnfw", "sd"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string sentence = "mkcssxwjkkylkjputgzbiofosiltsteihadlhjrxkypkzsesjv";
    vector<string> validWords = {"zotgfobi", "ogbtzfio", "otgboifz", "sisettli", "bzfgooit", "uyklkpjk", "scwsmjkx", "pkklyjku", "stileist", "syzkkpes", "titlessi", "oozfgbit", "xhjadlrh", "cxwkssjm", "sesykzpk", "skxmwscj", "jkkypkul", "tesiltis", "ofzgotib", "iittssle", "kupkjkly", "ogitbofz", "hhlrdaxj", "hjhrdlxa", "mswkcxjs", "kkkjplyu", "kzkseyps", "vj", "kyjlkpuk", "ttileiss", "kxwjsscm", "yeskzspk", "dajlhhrx", "tigobofz", "cwxmsskj", "skeyskzp", "wsjsxmkc", "xkwcsmsj", "kyeskzps", "lkupjkky", "stieilts", "sitleits", "lxjdrhah", "zyekskps", "kpjyulkk", "raldjhxh", "vj", "hjxdlahr", "pkskszye", "lhadxjhr"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string sentence = "qutmansnlvsxcniwnizskzpgywbedlfixfiodiplxanhsbpogl";
    vector<string> validWords = {"snl", "man", "nsl", "tuq", "utq", "man", "qut", "nma", "qtu", "snl", "nls", "lns", "sln", "qtu", "anm", "qtu", "uqt", "anm", "nam", "qtu", "qtu", "snl", "vxs", "snl", "lns", "vxs", "uqt", "tuq", "amn", "qtu", "qut", "anm", "mna", "man", "mna", "mna", "anm", "snl", "utq", "lns", "sln", "nma", "uqt", "man", "uqt", "lns", "snl", "nsl", "mna", "snl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string sentence = "nhgufibafujilzkdtvvglddfxkjfthfnfmtmvnsclkgizvkysg";
    vector<string> validWords = {"ufi", "uji", "ufi", "nhg", "fiu", "ufi", "hng", "gnh", "ifu", "bfa", "ghn", "gnh", "hgn", "fba", "gnh", "fiu", "fiu", "baf", "hng", "fui", "ufi", "iuf", "ghn", "ifu", "fiu", "afb", "bfa", "bfa", "ngh", "fiu", "uif", "abf", "nhg", "fab", "ifu", "jui", "hng", "hgn", "fab", "abf", "abf", "gnh", "fab", "hgn", "iuf", "abf", "fba", "bfa", "hgn", "afb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string sentence = "adnkqhqwjlpfawhttruwluyvezotvkaopuxawtddnmcryihf";
    vector<string> validWords = {"nda", "qwj", "qjw", "wqj", "plf", "kqh", "hkq", "dna", "adn", "hkq", "and", "dan", "nda", "nda", "hkq", "dna", "qwj", "qkh", "hqk", "qhk", "hqk", "dan", "khq", "jqw", "jqw", "adn", "dna", "qkh", "kqh", "jqw", "dan", "hkq", "jqw", "adn", "jwq", "hqk", "qjw", "wjq", "qwj", "qwj", "khq", "dna", "and", "lpf", "jwq", "nda", "wjq", "hkq", "qjw", "hkq"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string sentence = "ypxgkrdcdhsjwcoohpnhuxjskaonowqdaaxiqrbeuswemlwd";
    vector<string> validWords = {"hnhp", "jsux", "dhsj", "weus", "xaia", "aonk", "rbeq", "uwes", "gypx", "owco", "pnhh", "cowo", "djhs", "nhhp", "nkao", "xjsu", "bqre", "xaia", "rdck", "lmdw", "dqwo", "bqre", "pgxy", "gypx", "sjdh", "aokn", "kcrd", "sxju", "aiax", "nhph", "ldwm", "crkd", "mlwd", "qdwo", "owoc", "qwod", "noka", "jsdh", "owco", "wuse", "rdck", "sjux", "dwqo", "ypgx", "uswe", "mdwl", "xaia", "ebrq"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string sentence = "mmfmbhfoiphckfbiogfjihfmofjpmnadikdiioamcdfoebli";
    vector<string> validWords = {"ilbe", "adnm", "ohbf", "jgfo", "iamo", "ocfd", "hmif", "opfj", "elbi", "hfob", "cdfo", "omai", "imao", "eilb", "leib", "idik", "ojgf", "kifb", "fbho", "ihpc", "hifm", "kfib", "fogj", "kidi", "iikd", "fkib", "cfdo", "ojpf", "madn", "nmda", "fikb", "oami", "hfim", "bohf", "mmmf", "phci", "ihfm", "pihc", "jfpo", "pfjo", "pcih", "mmmf", "idik", "mnad", "mfmm", "fdco", "jogf", "mmfm"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string sentence = "lonocpjofmlfjlieglmgdacpbabbgmjendpgndfbhbnnempg";
    vector<string> validWords = {"gdnp", "dbnf", "iejl", "nool", "pcoj", "gmgl", "jgem", "lfmf", "ilej", "bbab", "nhbn", "pmeg", "jmeg", "dnbf", "nfbd", "gdpn", "pdca", "dgpn", "glmg", "nhbn", "nool", "ljei", "mgej", "jcpo", "adcp", "onlo", "flfm", "gpme", "bhnn", "opjc", "glgm", "pcad", "mepg", "leji", "nloo", "jopc", "nfbd", "bhnn", "bbba", "cdpa", "gmlg", "gndp", "emgj", "mpge", "abbb", "mffl", "babb", "mffl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string sentence = "bfdeedfeafdefbacccbcdfbafacccdbfdcdddfcddffdedcd";
    vector<string> validWords = {"edbaf", "afefd", "dbfee", "bffad", "edefb", "fbeed", "fbeda", "cccda", "fdbcd", "cfddd", "ccbcc", "ffedd", "edebf", "dcacc", "cdd", "dcd", "cdd", "dccca", "efadf", "beedf", "deffa", "cccbc", "fdeab", "dfddc", "dfefd", "ddeff", "cadcc", "cbccc", "efdfd", "cdd", "afefd", "fdabe", "fabde", "cdddf", "dfbaf", "afdfb", "ddfcd", "affed", "ddc", "ccccb", "dfdfe", "bdffa", "fdcdd", "bfdaf", "ccccb", "ddbfc", "dfdbc", "cbfdd", "ccdac", "dfdcb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string sentence = "caaac";
    vector<string> validWords = {"cacaa", "acaac", "caaac", "cacaa", "aacac", "ccaaa", "acaac", "ccaaa", "acaac", "cacaa", "ccaaa", "aaacc", "aacca", "cacaa", "caaac", "acaca", "caaac", "caaca", "accaa", "ccaaa", "caaac", "cacaa", "caaca", "aacac", "aacca", "aacac", "ccaaa", "aacac", "aacac", "ccaaa", "aacca", "acaac", "caaca", "aaacc", "acaca", "cacaa", "aacca", "caaca", "acaca", "cacaa", "acaac", "acaca", "caaca", "ccaaa", "aacac", "acaca", "acaac", "aaacc", "accaa", "acaac"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string sentence = "acbbbaacbbcacaabbbcacbccbcaacaaacaaabbcbacaaaccc";
    vector<string> validWords = {"aca", "bab", "bcc", "acc", "aaa", "caa", "bac", "aca", "bbb", "abc", "aaa", "cab", "cac", "bac", "aaa", "ccb", "bcc", "cba", "cba", "abb", "acb", "caa", "caa", "cba", "bca", "aaa", "acb", "cab", "caa", "bbc", "ccc", "bcb", "bbb", "bab", "bac", "aaa", "caa", "acc", "bca", "abc", "ccc", "ccc", "caa", "aaa", "caa", "cab", "cbb", "bbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string sentence = "abbbababbbabbaaabbbabbbaababbabbbbbaaabbbbabaaab";
    vector<string> validWords = {"bbb", "abb", "aba", "abb", "abb", "bbb", "abb", "bba", "baa", "aab", "bba", "bba", "abb", "bbb", "bab", "baa", "abb", "abb", "bba", "aba", "bba", "bbb", "baa", "abb", "bab", "abb", "bba", "bba", "bba", "bba", "bba", "abb", "bba", "aba", "bba", "aab", "aab", "bab", "bab", "baa", "aba", "bbb", "aba", "bab", "aba", "aba", "aab", "bbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string sentence = "abaaaabbabaababbbbbbabaaabbaabaaaabbbbaaaabbaaba";
    vector<string> validWords = {"abab", "aaab", "bbaa", "aaba", "abba", "abaa", "abaa", "aaba", "abab", "abab", "bbaa", "aaba", "abab", "abbb", "bbaa", "aaba", "baab", "aaba", "aaab", "aabb", "baab", "aaba", "aaab", "aaba", "bbba", "bbbb", "bbab", "abba", "abba", "bbaa", "baaa", "abab", "aaab", "baaa", "aaba", "bbbb", "baaa", "abba", "bbbb", "baab", "abbb", "baab", "aaab", "abaa", "bbaa", "bbbb", "abab", "baaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string sentence = "bbbabaaaababbaabaabaaababbaaabbbbabaaaaaaaabbaab";
    vector<string> validWords = {"babb", "babb", "abaa", "aaaa", "babb", "aaab", "babb", "aaaa", "bbaa", "aaab", "abba", "baaa", "baab", "baba", "aaab", "bbab", "bbaa", "baab", "bbaa", "abaa", "aabb", "aaaa", "bbaa", "abab", "abaa", "aaab", "aaaa", "abab", "abaa", "baba", "baaa", "abba", "baba", "bbab", "abab", "bbba", "baaa", "abaa", "aaba", "baab", "aabb", "abab", "aabb", "babb", "aaba", "abaa", "baba", "aaab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string sentence = "bbbbacaabcccbabbcbcaabaabbbcbcbaccbaaccbbbcbbabc";
    vector<string> validWords = {"cacb", "cccb", "bbbc", "cbac", "cbbb", "bbbb", "aaca", "aaca", "abcb", "acbb", "bcac", "bcbb", "cbbb", "cbab", "abaa", "bbbb", "babb", "acbb", "aaac", "bcba", "bcca", "ccbc", "bcca", "aaba", "bbbb", "aaab", "cacb", "acaa", "bccc", "cbca", "abbb", "bbba", "cbcc", "bbbb", "bbcb", "acbc", "abbc", "bbbc", "bacc", "bcca", "ccba", "cbbb", "baaa", "cbab", "bbca", "acbc", "bcbb", "bbba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string sentence = "cacacbcaabaccbcaabaaabbaccbbcaacbacacbbaabcbcbcb";
    vector<string> validWords = {"aabcb", "bacbc", "abacc", "bcaab", "caacc", "aaaba", "bbaca", "accac", "accac", "cacbb", "bbaac", "bcaba", "baaaa", "acccb", "ccabb", "abbcc", "acabb", "abcab", "aaaab", "cbcac", "cabca", "aaaba", "ccabb", "babca", "bbcaa", "cbcab", "caabb", "accbb", "acbcb", "bacab", "cbb", "acccb", "cacba", "abcba", "abbac", "bcb", "cbacb", "cbb", "cbb", "cccab", "bcbca", "aaaba", "aabcc", "ccabc", "acabb", "accac", "caacc", "bacab", "bbc", "cbaca"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string sentence = "cbababbccbcacacacabcaabbbcccbabcbbcaccbbccabbabaab";
    vector<string> validWords = {"abbab", "abccc", "aabcc", "babaa", "bacbc", "bbaab", "ababa", "caabc", "cbbbc", "bcbcb", "baaba", "cbbac", "cccba", "cbbbc", "accca", "abbab", "bccbb", "abbba", "cacca", "acacc", "abcba", "cbbcb", "bbcbc", "bcaac", "acbac", "babab", "baccc", "bbccb", "cbcbb", "accac", "ccabb", "cbbcb", "babac", "abbcc", "ccaca", "baaba", "bcbaa", "bccca", "bcbca", "cabac", "bbcac", "cbcab", "cbcbb", "cabbc", "babaa", "bcacc", "abbcc", "cbbaa", "cbaab", "bccba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string sentence = "acacabacacbaabcccbacaaacacabccbabcabcbbacabccccbcb";
    vector<string> validWords = {"aacacaacbc", "acabaaccca", "aabcacccaa", "acbbcacbca", "bcababacbb", "acaaacacbc", "bcccbcaaab", "bccbbacaac", "aaabacccca", "ccacaacaba", "abbbabccba", "abccabccba", "abacbacccb", "baabcbbbac", "cabbccbccc", "bbaabacbcb", "cacbcaacaa", "caaacaccab", "cacaaaccba", "ccbccbbacc", "cbcbaccbcc", "acbbcccccb", "aaacbaccac", "ccaaacbcbb", "bcbacabcac", "bbbcacacac", "bcbbababac", "acacaabcac", "accccaaaab", "cacbbbaabb", "cbccabcccb", "aaccacacba", "cbccbbcacc", "cccacbaaaa", "bccbbabbaa", "cabacacaac", "cccaaaaabc", "cbcbababba", "cbcbccacbc", "caabbacbbb", "acbacaacac", "abbccccaba", "cbcabcacba", "aacbcacaca", "aaacccbaac", "bcbbccccca", "bbabbcaacb", "bcbccbccca", "acacccbaaa", "ccacbccbbc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string sentence = "bbbbbabbbbaababbbbababbaaaaababbbbbbabbaaabaabbbaa";
    vector<string> validWords = {"bbabbbbbbb", "abbbbaabba", "ababaaaaab", "babbbbbaaa", "bbbbbabaaa", "bbbaabbbbb", "aaaabaaabb", "aabbabbaaa", "bbbbaabbbb", "aabbbaaaab", "bbabaabaaa", "bbbbbbbaba", "baabbbbbbb", "aaabbabaaa", "bbbbbbabbb", "bbbbbbbbba", "bbbbbaabbb", "baaaaababb", "bbabaaabaa", "aaaabaabab", "baabbbbbaa", "bbbbaabbaa", "babbaababb", "babbbbbbba", "aaaabbaaab", "babbbaaabb", "bbbbbbbbaa", "bbabbbabbb", "abaabbabaa", "bbbbabbbbb", "abbbbbabbb", "bbbbbbabbb", "baaaaaabab", "aababaaaab", "aababbaaaa", "aabbbabbab", "bbbbabbbbb", "bbbbaaaabb", "abbbaaaaba", "bbbbbbabbb", "abbabaaaaa", "bbbabbbbbb", "abaabbbaaa", "aaaabbabba", "babbbaaabb", "bbbbbbbabb", "bababaaaaa", "bbbbbbbabb", "bbaabaaaba", "babbbbbbab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string sentence = "bbbaabaababbaaabbaaaabaaabbaaabbbaabbbaaabbbbaaa";
    vector<string> validWords = {"babbaaaaabbb", "abbababbaaba", "abbbaabbbaaa", "baabbabaabab", "baaaaabbbbab", "aaabaaabbbbb", "abbbbaabaaba", "baabbbaabaab", "abaabaaabbbb", "bbaaaaabbabb", "abbbabaabaab", "baabaaabaaaa", "babbaaaababb", "bbabbababaaa", "aaabaabaaaab", "baaababbabab", "babaabbbabaa", "abababbbaaba", "bababbbbaaba", "aaaaabbaabaa", "baaabbbbaabb", "aabaababaaaa", "bbaababbabaa", "aabbbabbabab", "ababbbbababa", "baaaaaaabbaa", "bbababaabaab", "babbbaaaabbb", "aabaaaaababa", "aaabbaabaaaa", "aababbbbbaba", "abbbababbaab", "aaabbabaaaaa", "bbbbaabaaaba", "bbababbabbaa", "ababbbabaabb", "baabaabababb", "baaabbbbaaba", "abbbaaaabbbb", "aabbabababbb", "baabaabaaaaa", "aaaaaabaabba", "ababbababaab", "aaaabbbaaaaa", "baabbbabbaba", "babbbbaaabaa", "aaaaaaababab", "aaabbbbbbaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string sentence = "aabbbabaaaabbbaabaabaabaabbaabbababaabaaaaaababbbb";
    vector<string> validWords = {"aabbb", "bbabb", "baabb", "aaaba", "baaaa", "baaaa", "ababb", "babba", "bbbab", "aabbb", "babba", "aaabb", "baabb", "abbaa", "aaaab", "abaaa", "babba", "aabbb", "bbbba", "abbaa", "abbab", "baaaa", "babbb", "aaaba", "bbaab", "aabbb", "bbbaa", "aabbb", "abbbb", "aabba", "babba", "baabb", "aaaab", "bbbaa", "aaaba", "aaaab", "baaaa", "aaaba", "aaaba", "aabaa", "abbaa", "aaaab", "bbaab", "aaaab", "bbaab", "baaaa", "baaaa", "babab", "aaaab", "aabaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string sentence = "bbbaababbaaaabaabababbbaabaabbbbabbbaaabbaababbaba";
    vector<string> validWords = {"babbababbbbabaaaaabbabbba", "aaababbabaababbabbbabaaab", "bbbabbbbaabbababaabaabaab", "aaaabbbabbbbaabbaaaabbaba", "aababababbbbbabaaaababbaa", "abaaabbabbbaabbbaababaaba", "bababbabbabbabbaaabaabbab", "aabaaabbbbbababbbbaabbaab", "bababaaababababbaababbbaa", "bbaabbababbbabaaaabbaabbb", "baabababaabaaababbbbababa", "bbaabbaaabaaabbbbaaabbbaa", "babbbababbabaaababbabaabb", "abbbbbababaaaabaabbbbabba", "abbaaaaabbabbabbbbaabbbab", "bbbabaaababaabaabbabbabaa", "baabaabbbaabbbabaaabababa", "abbbabaaabbbabbbabababaab", "aaababbaaabaabababbaabbbb", "bababaaabbaabaabbbbbbbbaa", "bbbbbbaaaaabbbbabaaabbbaa", "bbabbaaabbabaaaaaababbbab", "bbababababbbbbbbaaabaabaa", "abbabbbabbbbaaabaabaaabbb", "baaabaaabbbabbabbbabbbaba", "abaaaabbbabbbbaabababbbba", "aaabaaabbabbbabbbaaabbbaa", "babbbaaabbaababaaaaabbbba", "bbbbbabbbababbabaabaaaaab", "bbbbabbabbabbaaababaabaab", "abbbababbaaaabbbabaaaaabb", "abbbbabaabaabababbbaaaaab", "aabbbababababbaaabbaaaabb", "ababbbaaababbababbbaabaaa", "bbbbbababbaabbbaaaaabaabb", "babaaaabaaababbaaaabbbbbb", "bbbabbaabaabaabaaabbaaabb", "baaaababbabbbbbbbbaaaabab", "bbaabbaabaaabbbbbaabbbaab", "bbababaabbabbababbaaaaaab", "baaaabaabbbbaaaabbbbbbbba", "babababbbaaaabbbbbaaabbba", "aabbbabbbababababbbabaaba", "aabaabbbbbbbbbaaaaaaaabab", "aabbbbbbbabaaaabaaabbbaaa", "bbabbbbaaabaabaababaabaab", "baaababbabaaabbbbbaabaaba", "bbabbaaaababbbbaabbabbaab", "aaabababbabbbabaaaaaabbbb", "abbbbabaabbbbabbababbaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string sentence = "aaabaaababbbbaaaaabaabaaaaababaabbaaaabaabbbbaabab";
    vector<string> validWords = {"aaabaabbabbbaaaaabaa", "bbaababbba", "bababbabab", "aaabbbaabbabaaaaaaaa", "bbbaabbaba", "abababaaaaaabaaabbba", "bbaabaaaabaabaaabaaa", "aababaaaaaaababaabbb", "ababbbbaba", "abaaaaababbaababbaaa", "aaaabbbbaaaabaaabaaa", "aaaaaaaaabbbbaaaabba", "abbbbaaaaaaaababaaba", "baaabaaaabababaaabab", "aaababbaabbaaaaaaaab", "aabaabaaaababbabaaaa", "abbabbaabaaaaaabbaaa", "abbabbabba", "aaaaaabaabaababaaabb", "aabaaaabbaaaaaababab", "aaaaaaabaabaabbbaaba", "bbbaaababaaabaaaaaaa", "abaabaabaaaababaaabb", "aaaaabaabbbaaabbaaab", "aabbaaabababaababaaa", "baabbbaabaaaaababaaa", "baaabbaabbaaaaaaabaa", "abaababbbb", "baabaabbaaabaabaaaba", "aaabaaabbbbabaaaaaaa", "ababaaaaabbaaaaaabba", "abaaaaaaaaaabaababbb", "babbaababb", "baaaabaaabaababaaaba", "babbaaaababaaaaaabab", "aaaaabbbaabbaaabbaaa", "aaaabbbaaaabaaaaaabb", "baabbaabaaaaabaaabaa", "bbaabaabbaaaaaaaabaa", "baaabaaabbbbaaaaaaba", "baabaaabaabbaabaaaab", "bababaaaaaabaabababa", "aabaabbbaabbaabaaaaa", "babbababab", "baaaaaaabaaababbbaba", "aabbaaaaaaaaaabbabba", "abbbaaabbb", "baaabbabbb", "aabbabaaabbaaaaaaaba", "baabbbaaaaaaababaaba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string sentence = "abaaaaababbaabbaabbbbbabbbaabbbababbabbaaabaabaaaa";
    vector<string> validWords = {"abbaaaa", "aaabbaabbabababbaaba", "abaaababbbbaa", "aaabbbaabaaa", "ababbaaaababbbaabbaa", "bbbaabbaababbbbababb", "abababbabbbb", "baabbabaaabb", "aabaaaabaa", "bbbbbabaaabbbaabbbab", "baaaa", "aa", "babbbbbbbabbbaaababa", "babaab", "b", "bbbbbabaabbaabbabbab", "bbabbbbbbabaaabbaabb", "abbbbaaaaaababbbbaaa", "abbabba", "a", "abbbabbbbbbaaabbaabb", "aaababaaaa", "abababaabaababbbaaba", "aaaaabaaba", "aaabba", "bbaaabaaabbbbaababaa", "aaabbaaaaa", "abbaa", "bbbbabaab", "aabaaabaaa", "baaaaabaaa", "aabbbbababaabaaabbaa", "bbbabaaab", "baaabbaabaaaab", "bbbbbbbaaaabaabaabbabbbbaaaabb", "bbaaaaaaaa", "bbabbbbbababababbbbaa", "aaaababaaa", "abbbabbbbabbbbaaabba", "aaaabaaaba", "bbaabbabbbbb", "babaaabbaabaaababbba", "aaaabababbbbabbabaaa", "aabbabaaababbab", "babbabbbbbaaaaabbbbb", "aabaababbabbbaaaabba", "aaabaaaaba", "babbbbabaabbbbbabaab", "abbaabbbbbaabbabbbab", "baaaaabaaabababbabbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string sentence = "aabaababbabaaaabbaababbbaabbbbaabaaabbbaabaaabbbbb";
    vector<string> validWords = {"baabbbabbb", "bababbbaab", "babaaabbbb", "abbbaaabbabbaba", "babbbaabbb", "baabaaabba", "aaaabbbaba", "bbbbbbabaa", "baabaabbbb", "baababbbbb", "bb", "aaababbaab", "bbbb", "aabaaaabbb", "aabaaabbba", "babbbabaab", "bbbaaabbbbabbbbaababaaaaabaabbaaa", "bbbbabbabbbaaaaa", "aaaabbbaab", "aababb", "abbaabbaaa", "baaababbaa", "abababababbbbaaabbbaaabbb", "aaabbaabab", "abbababaaa", "bbbb", "abbbaabbba", "aababbaaab", "babbbaabbb", "babbaaabaa", "aaabaabbab", "baaabbbaaa", "aababababa", "baaababbaa", "abbaabbbbb", "bbababbabb", "abbbbbbaab", "babaaabbaa", "babbbaabab", "bbabababba", "baaabbabaa", "babababaaa", "abbbaabaaa", "babababaaa", "babaaaabba", "aaaabbaaaabbbbaaaabababbabbaababaabbababbb", "aababaaabb", "babaabbbaabaababaaaaaaaaababbbbbabb", "bababbbbaa", "ababaababa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string sentence = "klkzxxrvadadnsxehkyhciyjokldhpbtroeufbeongmdyzawfd";
    vector<string> validWords = {"dvrxa", "klzxk", "cuooenhdfbjhgkyirbhyeptokl", "sxdan", "khdlp", "breto", "ymgnd", "zadymw", "otbpehr", "ykehh", "zlkxk", "ofbeu", "uobfe", "pkdhl", "wdazf", "etrbo", "azdwf", "oyijc", "wzdfa", "xvrad", "keyhh", "rtboe", "lzkkx", "mgdny", "boert", "bhrpodt", "dlhpk", "d", "fuebo", "rxvad", "jyyikhco", "ikcyhjy", "kzkxl", "axsnd", "jicoy", "ykehh", "yojci", "rldkndkaecxahibksolyvxyjxphhzkd", "ocijy", "dxnas", "bueof", "hehyk", "dxrav", "bhoeioucjtyprlhkd", "wdfaz", "odtnbdmzefgepuohyrab", "kdhpl", "mgndy", "snxda", "gndmy"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string sentence = "keozrxmybdzjxnwdtcvrgelwddxzgtytpdpbterhcossexrxmw";
    vector<string> validWords = {"sceos", "rplctjgwzewzddgtxnvtdyx", "kzero", "gxzdt", "kroez", "osesc", "bt", "eokzr", "trcbeh", "ddygnybgdprzxmtdvxxzdwcejtwplt", "znxwj", "mbydx", "gtzyxd", "dxbmy", "dppty", "dwzdxdertttgypcgdlv", "kzeor", "mbdxy", "gledw", "vtgdgwzzxydetnlwxctrjd", "mrxxw", "xgdzt", "hbter", "gdelw", "rtehb", "cdrtv", "ltecgvrd", "soc", "pytpd", "tvrcd", "tehrb", "zxgtd", "vtcrd", "secos", "jzxwn", "wlged", "nzwxj", "bdxmy", "mxwrx", "pydtp", "osesc", "xwmxr", "glewd", "erhtb", "ssco", "ppdty", "wnzxj", "tdrvc", "mxwrx", "gzxdt"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string sentence = "cizyiwahvokgjumfbtcdzsuxesjqoawuyyztphaqkcnxrbrwks";
    vector<string> validWords = {"autzwoysdzqjxcyseu", "uuxybjpkzomgadyahjqoavssthciyzewtuzfwiqc", "rb", "brkwxrs", "paytzh", "k", "prchwkqxrbsank", "nx", "c", "rbwk", "qxckrbwarnk", "jxqse", "w", "qyuaswjeox", "wr", "xnbcrk", "k", "rbwrxn", "kzcwysomptewiaiajujasdqukxqyvfbhzoythczgcu", "s", "xnr", "s", "wkr", "uaymiciozhvgfjtwbk", "atckpqzh", "xrrwb", "wyaypzhtou", "n", "srxrknbw", "k", "rhcrpwqtbkanyzx", "r", "krcxn", "arusyxzhontkepxjacwqqy", "skw", "xbnrr", "xkbwrrn", "y", "rw", "hawiovzckyi", "ykpqahzt", "ks", "swk", "wehstdzcosypyauuxjqz", "ztpyh", "tzhkbiymwiagcfuuosvjcdz", "rxn", "xbnr", "wkr", "y"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string sentence = "wwuylryacauhtptzrcktmosuuevjzyatvmxhqxryeecejyfgpx";
    vector<string> validWords = {"fpgx", "emuxeszpfykqyzctetwrpjcuycmhljthruyyuvavxxrataoge", "ww", "gf", "yxegjfp", "yrlozhtvttkyzaersypumavautmjcuc", "yul", "rwlyywu", "yuyrl", "g", "cchatxxscpteerurezjfymyguytvpezyqhokjvtaaumx", "eyfj", "zhxyjacqtcmoutmsytrkztuyrxyavepluharv", "souhtktztcmpzurevj", "tmthxvkuyuasoevcmzj", "hrtzrmuptalctyvzaukyjcsuueo", "yrzpuluatyacwrht", "umzcatkuaazyrjohevtpcutsry", "x", "wwu", "rwuly", "ehxmzrvyoyusxjqmktutva", "zvvjzkayaxtetuceurchtxetyhaomeqpsmyyjucr", "grqcexfyjeepyx", "cpuryxtevmayjaxzejtmkaozphucvyqrrshugclfetyyet", "w", "gpx", "px", "jfey", "gf", "gp", "gvrzmatfstujyhxetvqeouzectyekyhaacjmcppuxr", "g", "yfej", "yezjmxtraexvqevuuyh", "yruqctutkfegxszcyahvepmjmvjyoxee", "aucthmsqjxvzzacvaurxlhrruyyptettkyumyowe", "varexuumeyjxvqtyezycjeh", "c", "suptrhzktucyjvemotz", "exehevmtqxrayyyfjc", "g", "arvtuehrcjyyuyavztxtlkmaeoqxtuchczempusyr", "x", "wmapuhzjfrprcyutkyuhvectycartuxxtgeawzvmleyoqjyes", "fejgy", "ecee", "hacztrapkrytmsyluctou", "ucaa", "cwphatvlhseuamyxkutqzomrcjytyuvuztra"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string sentence = "nnkamcnlywen";
    vector<string> validWords = {"nacnmk", "n", "n", "ywel", "y", "e", "wamklcyn", "naklcym", "wly", "lyn", "lcknmynna", "e", "e", "nnkcalmn", "clnamnky", "n", "klanymnc", "l", "wy", "y", "lwenny", "lywamckne", "ln", "wyen", "nnwley", "ak", "n", "e", "ly", "nywe", "ne", "mkca", "w", "n", "nn", "w", "w", "nmcnknyal", "nn", "ywnl", "ne", "wknlyncman", "en", "wenlny", "n", "kncmawlnye", "ew", "ynl", "nckma", "w"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string sentence = "dxqxsladhunhblyvflkbohvljvfvajxgbxfop";
    vector<string> validWords = {"obvskglfqxfjxxabvudnvljlxhhvdfhlaoyb", "f", "x", "jfvvl", "f", "ofp", "xxgbfoj", "jxfgxb", "o", "f", "xjag", "pfo", "f", "jlafjvv", "fx", "pxbjgxfo", "x", "p", "qsddhxyalbxulnhv", "gabxxj", "vjxgbxpafof", "xbgx", "p", "axj", "xudndhaqxls", "bgvjvxaljf", "of", "xb", "fx", "a", "l", "vhvjjyhoblbklvlffav", "p", "p", "lvj", "jgxxba", "fpo", "bsodhylhvkvladqulbxxfnh", "bofgxp", "xjabopfxg", "abfxxjg", "p", "p", "fop", "fbx", "vfxgjbvalxj", "xf", "oxbf", "xbf", "xg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string sentence = "lnwjhrmhouso";
    vector<string> validWords = {"mjhhr", "m", "rhm", "hrlwjn", "uo", "rm", "huomsr", "rhojumh", "soouhm", "husoo", "o", "uhosom", "mh", "suo", "o", "h", "s", "ou", "hj", "uos", "hmou", "r", "lrnwshoumjoh", "sou", "nlw", "shuojromh", "o", "omrh", "o", "rosmhuo", "so", "so", "ouormsjhh", "mrho", "mhohjur", "mr", "huo", "u", "o", "rjmohshuo", "o", "os", "o", "uoos", "hjrm", "rhj", "s", "o", "jhr", "s"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string sentence = "qyfpaurgfbzkr";
    vector<string> validWords = {"gfzbk", "yq", "fugbypkrfaqz", "r", "rk", "kfypzqgbaurf", "g", "fzb", "agzrpufb", "b", "rk", "bz", "qpyfa", "fkzgbr", "p", "r", "zk", "fpa", "fyaqfgrbup", "kzbr", "f", "r", "razkugrbfp", "paurg", "kzrb", "uqprafgyf", "gakzprufrbyqf", "rkzb", "zk", "rzk", "ap", "f", "r", "yupqafr", "gbf", "fg", "pfa", "zkb", "g", "yugpkbzfqrfa", "z", "gbzf", "k", "bzgf", "fzkb", "rk", "z", "yq", "rgu", "u"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string sentence = "ciyruvulvabwqykibqcbzfunpaetkwhvxiyxcjji";
    vector<string> validWords = {"ewqfhwbviuvbbixyyanczckprvlqiakuyut", "jcyxiixj", "yricu", "xhwivy", "cwjxyxvihjtk", "hvw", "c", "wqbcqiky", "ji", "ehxiaubqcbypqiwtznwfykkv", "cjx", "ji", "vnqpqafewbuurzyavycbubilkic", "vyckybbwiqucablquirv", "j", "ewphtuank", "lwnyvebqrtycziickvbfaauubqupk", "unzwkaeptf", "ijj", "hxitkwv", "trevvkavwuiyizbkqbupbfqyccnlwahu", "icxxvy", "yxvi", "c", "epfkzawtun", "aezpunf", "jxixytwkvch", "cijj", "aunfkbvwtpehzx", "vujwijnzkfyciexhtxap", "y", "thkw", "whv", "i", "i", "ix", "wtk", "hvktxwi", "xyxi", "wh", "cyjxxvi", "yjxicj", "yvaruubilv", "iyxv", "xhwkivt", "cxj", "xi", "ivxh", "fz", "i"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string sentence = "uwdcxlivgexbtpseczblgdkcp";
    vector<string> validWords = {"epbsgzlc", "gld", "kcgdp", "czgepdpcblkts", "cuxwd", "uwd", "ceplbzgsd", "dtxpedibsbcxvcwglgzel", "sgeebxiwulxpgvzcdbdltc", "vxilcgtexb", "u", "cvtizplwcbxesxlbdcuekgdg", "weiltggcbxvlbcpzsdxe", "pc", "ezcbl", "ixelcetdcgvwpsxb", "xbtescpe", "g", "dlgbezc", "kd", "pes", "d", "p", "kdpc", "evxgbil", "cgkpld", "vli", "es", "lkdg", "p", "pbszce", "s", "eepibzxgstlbcv", "lgvi", "ldbzgcecpsk", "bclkzcgd", "sxeeptb", "glpbdeszc", "gbexcxtdluiwv", "cplgsbze", "dkpglc", "glzxspcbiexwbdeduvtclg", "lbcz", "p", "p", "ppelxkvsbxegdcgzdtuiwbclc", "p", "cezb", "beclpstbvilxzeg", "spe"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string sentence = "aipidnavczjuibygmflahuuhwdtlbnrmoroh";
    vector<string> validWords = {"uhwhu", "h", "o", "roo", "ulhtdwu", "l", "h", "o", "mroorh", "bnmror", "dwuuht", "ltdb", "h", "fgcuzhnaabuimpahiliduwjvy", "lbdwhuut", "norrom", "o", "roomnr", "n", "uhhtbudlw", "nrb", "auhyiawuugcfilbmnhpidjzva", "dlt", "dmbljavpcuiaaynzgifi", "ouhrlbwthonumdr", "romo", "nbl", "twduh", "uiaabmoodhgftvbrnwzpujmalirychinldu", "brtrmldno", "whudt", "nmhrboordlt", "lrmbdtn", "whhuudt", "dtl", "uabivliraomzhdtchflagduuibrmjnwypn", "h", "htlwdubn", "u", "izduamhpagiyjvfilcabn", "ufwibibpnlyltihuhzuadcgajamvd", "huuwhdt", "n", "hmoor", "mo", "noodhmrrltbuhw", "uwh", "morrbnl", "o", "td"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string sentence = "vajynabffupskowtjpybrsoqyacamptrqamcl";
    vector<string> validWords = {"aqycmaop", "l", "cm", "l", "bjuavfpaskfny", "jtypswuobkp", "ytjowyoqrpbs", "aopmkanrawfcsmsqbrtlofpuaqypyacjbvytj", "a", "pbfkfaus", "yajnv", "pokmwbspjycrtaaqoy", "pm", "bafupsf", "crmpat", "qpraamt", "l", "qmparat", "t", "pbryj", "lc", "tmrp", "t", "cratrcamaysopqqml", "fjypbutsfpaswbokr", "atocyqlarsmmqapc", "armqacltmpc", "qypaqomccmtsraa", "amapct", "a", "q", "qmaactrpm", "l", "lcmqa", "pma", "qtrcmaap", "tmrpaaq", "c", "navajfbfy", "ca", "owyfkaqrausjnbsjfoytbpayvp", "captoqaayqmrs", "sqcaoy", "tqmpar", "c", "cm", "lcaqm", "wroptbyj", "mtpr", "pkwusto"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string sentence = "kluedyjwjgswnttfosggug";
    vector<string> validWords = {"gu", "gjs", "nsftgwtjogs", "lwdkuyej", "swogftntg", "ugg", "tn", "ggug", "jsgfttwnos", "tswnt", "g", "ytksuoelgwtnfwjsdgj", "gtungssjgotwf", "wn", "gtogfs", "tfnwgutgsgo", "gskujnfedlgjwgsoyttw", "g", "gugg", "os", "gu", "gugg", "nwtgtfgjoss", "f", "jg", "ug", "ygeujwkswdjl", "wtnstg", "g", "j", "fuggos", "u", "nttf", "osf", "towfsjntgs", "ggsugo", "g", "g", "usnogtftgg", "wsgnj", "otgfgs", "gu", "twn", "sjnwtgt", "g", "logysjtesuggnjftdkwguw", "ug", "ug", "gws", "u"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string sentence = "xqbuwdmnmdhhmsieygchfeudflfuyupimaxjfkuni";
    vector<string> validWords = {"k", "nfku", "y", "mfxiaj", "imjax", "i", "nuk", "kf", "nledsgcefypwuhdmuayhmidufxifxhubqmm", "fdleuf", "im", "lqadfhyuedwceufugmfxhxbpnidsimhyumm", "bmxhuqdmwmndh", "axmipubhmxcfinhmddweljdsfuuymygfqeuhf", "cshegyi", "k", "xgcffalpisdkuyeujuufemhfyni", "dfpyfulufeu", "niku", "jaimx", "xmai", "uyp", "uupuyfeffidl", "niu", "ecydgfhisue", "i", "j", "imp", "fpujmyixa", "inukfj", "yluffefdu", "maxfjki", "k", "amupiyufuxffflekdj", "fkniu", "f", "yfpuuxiam", "i", "ef", "cixelusujffhiymipkgdnfufueya", "euiygefayhfdsxpcilfmuu", "un", "wsyhumdnhedgibxmmduceqfh", "ymmephshumfffuibwlijauedymcfxinquunkghxdd", "uhnhbquelukyefwimdpuyncfdhijfmadgfxummxs", "eudyifhwyqmfmujbnxifcfaghduhpulmsxkumend", "eycuighefs", "fuuy", "mxuapji", "iceyuehusfgfdfl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string sentence = "nurgddgnbvrgolozvpvoyahkyhvbduimxiw";
    vector<string> validWords = {"udibm", "vhvyaykho", "bvgndnugdr", "oydyapvhuilbvrhkovmgoz", "hbxyvihdukm", "x", "oykybhhvvad", "miux", "v", "y", "w", "umiix", "iimwbudx", "x", "vorolvzopg", "ndngrdpbolrgvguozv", "mixiu", "xwimi", "vpvhlagkyyooroz", "iixum", "h", "ayzrovhidikowhyulboxgmpvv", "vpbluovydgyrgghonoakrdnzv", "xmwii", "mx", "i", "zvvopo", "wi", "w", "xvibmuid", "bimud", "hvadixihkwyovbyum", "ogopduzbvodnvadryggkyubvhlhnrv", "iiwmx", "hyvbamxkyuidh", "imwixu", "dokhvybhvyau", "poazyvvo", "bvidu", "dbvh", "rlhzoovybnddgnavropkgguv", "uodvlrgndgrgnb", "khyydovbahv", "i", "bvyhd", "w", "dngur", "i", "ybvh", "umi"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string sentence = "ciskvjjezbqi";
    vector<string> validWords = {"ej", "c", "iqb", "zqjieb", "q", "ci", "zej", "zjvekbj", "j", "vekszijj", "qbzje", "jezj", "ibezq", "cvjejisk", "q", "q", "jej", "cikvs", "i", "jibqezj", "sjkv", "j", "iksvc", "jqbizvekj", "jijcvks", "qib", "zsicvejjk", "qi", "b", "jjzbqei", "zb", "sevjjikc", "qibz", "jj", "b", "ze", "bqzi", "e", "eqzb", "zeb", "z", "vzjcjisek", "jj", "jekvjs", "bzq", "i", "jzebqj", "ibvejzjkcs", "ibzq", "cis"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string sentence = "fupdmgyydaegxesptpndspqpncsxpinvfmcjqm";
    vector<string> validWords = {"spncpqx", "petpxpnspdsq", "c", "syymdtxsenqpneppapdgg", "udqnpxgynsdypdpfmeaptesgp", "gsedvpygyppascecjpinmftqdsxnnxpm", "xe", "p", "ncsx", "psndp", "apefysdgpgdeumtxy", "xp", "cmvfjipn", "c", "csnp", "xipmnsvf", "pfcnivxsn", "xsp", "npvsmpqcdippnfnxs", "c", "q", "qj", "pstnscdpnqpxsp", "qpn", "ppnnxcsvi", "gyugydmpedaf", "qp", "sdpppnq", "egdyfxagudpemy", "udfp", "ivn", "qm", "q", "pgfdenyqcmduppptdxpnysasspxeg", "fxpnesdtdypppydumaeggs", "qtipsgenqspxmmapxndfgpmycucsyjppvddfne", "m", "fmnvi", "vpjixnfmc", "jcnfvmspix", "apnixgusypjtpgpvfpmedsqxeydcmfcpnnsd", "qmmjfc", "mxvnjipcsnqcf", "m", "j", "cqjfm", "xpvispnnfqc", "m", "p", "nvi"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string sentence = "nelwnjoqryerpipoiifm";
    vector<string> validWords = {"qpojirrepy", "rjryeoq", "fm", "rjrpyieoq", "o", "erypr", "lnwen", "pyqjerorpi", "m", "ieiinrmjrqpywopfol", "iiof", "iio", "lronqjw", "en", "rojlqnpweyr", "mifio", "yppriroe", "iop", "yjefoiwnnpoiireprlmq", "ppi", "eoweirnrlypojipqn", "eioyrpp", "rwjerpolniyq", "eyrr", "opiip", "piifpio", "oylqoimrjifprenwpi", "ipopi", "eryrpq", "i", "pirery", "en", "ojpinyewqrrlp", "if", "ii", "mifoi", "prypeiqro", "peryriop", "m", "wnenjlo", "oiipif", "m", "fim", "miif", "pi", "m", "pi", "erryiifppio", "lqenwjon", "fmiipo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string sentence = "bcgxgzxnczjovrxwujhboxykevxjcpwithcxmgyqicbfyzgz";
    vector<string> validWords = {"gycfzbz", "mxvcwxhpetijc", "gxnxbgcz", "pivwjxchoxbytek", "rbkzijcxgwjxjvhpctxvocmixxzonyyuggqxhbwec", "yfz", "z", "x", "ev", "wxzejjovpcrwkycihjxxobnuv", "iwptchmgx", "cmfigyqzcygxb", "kvowcjpexxbyi", "xchujxbxrxogznwoczbvygjk", "wctxhivecpj", "cncggzxbzjx", "c", "icqb", "g", "qy", "zgfcqiyyb", "b", "oucjqtjhxvpcwkzrbxxcyvymihijxegwo", "gycqi", "ctyhgxmpiw", "zg", "gzz", "gbcfzqyi", "xyvkbeo", "gwgvzobrxcnzucjxxhj", "kpcxhvhtexyijwcxob", "z", "zy", "wnxggcjzrzoxxucbv", "tycgjihxcxzipfqbmcwgy", "icbq", "gwxhiptmc", "fbcyiq", "gwmpcytqihx", "g", "xfgimhbcytqc", "zgzy", "xrowjuv", "wxvejcpi", "gptvxmxhwrcjuihecxojkxyzbwbcxvxonzcjgg", "gkzbczxhumtvpoijjjcrywgcxbhxcxwvnexox", "gyxgpbjgkmjiyxrztzxjoohcvwqccxxnhvxicbuew", "xcj", "cxwpigymht", "czggxxb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string sentence = "vaduwobyninewyfoxfavrahabbpuhwoyjlnxuuvykukmym";
    vector<string> validWords = {"bp", "julxynvku", "xyulkunujv", "km", "ykku", "yunkujxoukvwly", "klnyoxujvwuyuk", "ylwoxnuvyuj", "munlvmxykyuku", "mk", "rdpaxybufbiakuvoyenauhwovfjaoynxnuvluywbhw", "brfhbvaaa", "umukuykv", "muymk", "ym", "kkyuvuu", "lunjkvuhxyuywou", "m", "ywuxopljnh", "plouhxjuwuyn", "hlboxupwnjy", "jxuhuabhflorvuwbnavpya", "afhabvra", "y", "harapubbh", "yuhow", "l", "fav", "wevabndiofwnabboaxyufyrahv", "u", "ukxuykumlnvj", "my", "afouvhhapbaivaorwnyyebdnfwuxb", "uuvkuyk", "yowhu", "anwhlruafbvxuoyajubvhp", "lnuxvjuyk", "nhuwolxjpy", "myk", "km", "xaonuvrhlxdywfwuujywkiynnbboeyoakhfbuupvvaa", "ayeofixndbuynwvow", "wvonuyuyljx", "wpuwowbyaaynabfovuhibenyofrdxhav", "mmy", "abrwyhjofaavphbu", "oynwlj", "m", "kum", "jyxvuynwlkouuk"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string sentence = "jmtwltxlipckxgmn";
    vector<string> validWords = {"lxcpitk", "kx", "mnlclwimtktxxpgj", "mtjlw", "lciltxp", "itlmlwjxpt", "n", "xtl", "ignckpmx", "tl", "gckmxp", "g", "lxi", "tx", "m", "lxt", "xgmxitknlcp", "kxg", "g", "tltjklxcxgmpiw", "lxt", "g", "j", "n", "k", "l", "ipxnmkmtgwcxllt", "n", "tl", "glctlkxxipm", "mn", "ltmwt", "n", "l", "icmnkpgx", "ngckilpxm", "nxmg", "gtpmkwxljxmictl", "klngpmicx", "pc", "k", "txxpcillk", "ckpimgxl", "n", "pkglmxctxiln", "ixtlkpclx", "ltx", "nm", "kcnxmgp", "mjwt"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string sentence = "eddbgvkbhletinxmnperipknpmfbnm";
    vector<string> validWords = {"ebitlnpimrghkvxne", "mnbfpkp", "nnxhdveemblpkidegbt", "dbetkvbhdgle", "mfbn", "nppmk", "pmkpn", "ehgdmxneprldbtkeviibn", "n", "rpnbepfkim", "kvgdb", "fbn", "b", "pn", "impnpk", "refnbixndbidmknemegtbmlhvpppnk", "nmkpp", "n", "nkmpfb", "de", "lnbbgxmvtehdik", "nmfp", "lregtxnkhienbpmv", "mipfnkpebprmnmn", "rppine", "mp", "mfnb", "nibeimtrkpnpvnmhgldbkxep", "pmnbfm", "bf", "lirxkenmevpkibgpnth", "bfmpnn", "m", "fmpkn", "fpmnpk", "pbknfppmnimrenm", "mnpfb", "m", "gvnbthikelx", "ipk", "phibnxdblgntvkem", "nmrkppibmpnfe", "hnkpnpfrmbkimienbnplevtxg", "b", "m", "m", "knmppf", "tinkpgebrlmpinpvmnhekx", "de", "dedb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string sentence = "bzfyitkilywh";
    vector<string> validWords = {"zfyb", "wh", "w", "lywh", "hw", "w", "fbiytkzli", "i", "ybtfikz", "h", "w", "w", "iyklitw", "yw", "y", "hw", "il", "fykztbi", "tifkybz", "h", "wy", "k", "y", "hw", "l", "bylhfiywkizt", "lkti", "yhw", "h", "bzfy", "why", "ki", "i", "w", "kzlyibyfit", "iklywiytfzb", "kithwyl", "iyzbft", "yl", "w", "yl", "hw", "wly", "itik", "kflyibtiz", "w", "kt", "ktil", "wbzyktyfhiil", "wh"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string sentence = "pumgqaepzhruhdjzhehiwxjqkpjcggiqncgu";
    vector<string> validWords = {"jhxwekcjpiq", "mgpu", "u", "jgqcgiugcn", "jpuwjeqihgmhprhpdhxqauzzek", "kcjgjqpg", "qgpiggnjcc", "hhujezhhijpxwzrde", "uhjzehapupqgmhdrz", "u", "giqncg", "gqmpua", "p", "ijgzqxuhhzhwepjgaicepjdkpghqrumq", "gcgi", "jgkheqhrxpwiphdjzueqhapuzm", "gicqg", "cgpjg", "j", "aqwehuqxrdejizjzhhph", "rhzdhezpujhe", "gcjp", "gkinpqgqjcj", "pcqjjk", "uhejzarqdpemuhhgzp", "iwujjzkhnhzchijaxdeeqhgpqpqgr", "qnggi", "ijqjckigxpwg", "ewijhpjxqgck", "u", "gqjcixkjigwqp", "ngqcgi", "up", "ixhew", "cng", "pquadrgehehmzzhuhpj", "iggcqn", "gkijqpqxncwijg", "kjgpcg", "wxi", "hrdjquwighgkhxizjpcqaeemhgzqpj", "jcp", "u", "u", "pmqazpgurehu", "jnqccpiggkgq", "qgijgc", "ggjqpckj", "dhiqekreqahjzhpuphjzxw", "k"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string sentence = "shcmetfpppmzeehuumnwfyimrrsqwshztm";
    vector<string> validWords = {"pmmensruphmfzriywque", "hz", "hstz", "wtsqhzs", "eremppmpfuwrnyhuftmiez", "z", "m", "z", "tsmzwh", "uewhqtmnifmphpzumswmreyzsr", "rwrzihssmq", "h", "wsq", "tm", "qhzsw", "m", "qyszpfumpnswmueptmzhifetrrhew", "i", "wzhst", "m", "ymepifhpueewfprnsmzrtmu", "schm", "hswq", "m", "m", "tszh", "w", "srqmiwshr", "i", "mzt", "wtzqssh", "wyemupmehnfzup", "hs", "rrszfpzwsynumphwemmeqhiu", "m", "t", "sq", "sewhmwrppmrshzmemspfftuneuiycqh", "rmhqistzswr", "rrmi", "emcpsfht", "m", "mzt", "zwsh", "iwszrrthmsq", "zhs", "tz", "zmrpfmyenpurieuswhm", "q", "s"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string sentence = "ygfgdrzlmvindveijmqcsbzgziou";
    vector<string> validWords = {"o", "g", "zig", "uo", "gzio", "qzisebgcmj", "u", "gz", "gsibzmioezcqj", "z", "dlygrmzfg", "giz", "ozi", "czgbisvvjedinmq", "scgzb", "zg", "i", "njqvmvisbcdie", "io", "mzrcjlqbidzvegdymvggifns", "bzcgs", "u", "o", "g", "zsjcbqm", "jvrgzzivcyeqlbinzgddgfmsm", "lzgydgfmr", "ie", "qsvjmizebngvczdioi", "ozig", "u", "zoig", "u", "oi", "u", "igz", "i", "imgdnfglrvyz", "o", "ogzzi", "zoi", "szbgc", "zzig", "meijq", "zgz", "ou", "ivdnv", "z", "vbcvqdiisnjem", "qejmzvdvbcnsii"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string sentence = "datcaewiknxisvvy";
    vector<string> validWords = {"ixivnksw", "ixkn", "v", "teawcda", "kxni", "iktacawend", "vs", "si", "caawdet", "y", "svkixn", "ciawdate", "ixkiwn", "i", "tiiwdnacaekx", "svi", "vinsxvk", "yv", "v", "svv", "y", "v", "nvksiix", "kwnix", "kxin", "da", "y", "ctae", "xknivwsi", "catkndvweaxsivi", "i", "y", "nkisx", "waietnixkc", "aiawencdxkti", "xkn", "svyv", "vs", "nivxsvy", "vivsy", "vnsixik", "y", "ink", "vvsi", "nkxi", "ad", "siwnkxivv", "xivvnskyi", "ktewaic", "vvsxkiin"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string sentence = "qlxfcfabriczucajhskrmtnywrqwawftgjkgvcsrmtbvn";
    vector<string> validWords = {"yvmwarftvwtktsrmqcnbjwgg", "chusxcbfacjfzrqail", "m", "jrkagtmvsyqwnntgwwfbcvrt", "acuqcvttwzxbljwstkfasfmikcmggbaqnrcwrhfvrryj", "rtm", "ajvrwqmntmktgcgjrskywtfawsrh", "w", "qwr", "fsgkjwctvg", "rhsbkuajzrfcacic", "gtfwjngqkyrwatw", "scuiaazfchcrjb", "yftgnwrwgkqjvwat", "m", "mvrbstc", "wft", "kr", "k", "yrwktnm", "b", "stvcmbngvr", "cskbgatjwrftmgvw", "yvcawtwtqrwjfngkg", "btm", "qcbflzrucxicaf", "tmsr", "rcscmhibackzarfuj", "wqtywmtfwanrg", "agjsnrtwvrkcygfqwwt", "nwagkqtwvgrjytwf", "rqw", "rwqwwratmytnkgf", "mrt", "nv", "n", "lqfx", "vsbmtfvkrcjtgwnwga", "bt", "fjgt", "nramywtqw", "tmrb", "kjvgc", "asqfclhjaribxuccfz", "gft", "tmkryn", "nqwwamtrwy", "bcjmskvgtgtwrf", "n", "n"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string sentence = "imzhkdjgdbxncluinobbfrcrmbbhyvjkfrzhwgukfhekp";
    vector<string> validWords = {"bubcrxnfnobildcgr", "hekkf", "libgnduxc", "p", "mofrcbrb", "y", "yfwkvhjzr", "boni", "fhzrk", "obbni", "kfu", "gubdlxcn", "k", "dxgbn", "kghmrkhjufzvfobwrbfcybrb", "kkfhe", "jcbvbykbrhmbrffozr", "fku", "fuhhkgw", "hukwkhefrgz", "fhvrbywkkbughzfj", "obb", "nxbdg", "kwrheupffzgkkh", "bbgfyfkurjzmwhkvh", "mbrbobhncfbr", "ekh", "bwbhcidnzjucnhklgvryobmibmfjrhfgbdzrxk", "cbnbfilcuor", "whgku", "fk", "hguwrz", "ufhek", "hepfk", "kf", "p", "dxcbnglniu", "ugfzhhrkewk", "emrwvkjhyhfbbfuzhrkgk", "frmcbfbjbbrykvho", "bvhfbbycobjrrm", "ion", "khizjdm", "u", "bfcgbwijzrnvobhhbrrkfym", "vbjmyhb", "ygickkcbnrhwujlrfbuofzhvbrmb", "bicdnnxbglobu", "khzufgwr", "hrnybbbcribfom"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string sentence = "kgguthimpuczfypvwelnqwfiqgjpdopjubfacfgjrgvtnb";
    vector<string> validWords = {"b", "vgt", "gvt", "nbt", "ujdcfjogppqrijafwbgf", "b", "b", "utppiygezicfugploqjfwwvpmdjgkqnhu", "b", "ntvbg", "bn", "pzqfelpmvycuwn", "anvctrjfgg", "gv", "b", "tn", "hkitugg", "fb", "gbvnt", "b", "rtvjgg", "fgyudipffzwcgwgcqfubievpnjlhmaupjqtkop", "b", "b", "b", "cjafdigbpjprffggjquovt", "b", "t", "bn", "vg", "fvlmcunpwqewqypgifz", "b", "fjfabcgr", "b", "jhpkiyoggumffeggapcfdqqrfpubtujjwznivplwc", "nbvtg", "n", "btn", "tn", "bpfuqpwqdjccffwinjgpugoyvapezlmfj", "vtbng", "n", "kvgyiphgtqnuecuzmwlpf", "nb", "bn", "b", "fvjacfggbtr", "b", "n", "w"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string sentence = "kpzhgujmlyxwggexocvrdhdirgxugueiosracwvwqtbg";
    vector<string> validWords = {"g", "g", "atbqcrvww", "dcihxmlrdogpxxjuvuyekrggghwgz", "b", "ghxoovkucgwcqayrieevgduxwldmwsigrzprhgtxju", "arvsqcww", "teiwubsqxrgwuagovcr", "yxlegcxvgmow", "g", "b", "gxiuuegr", "wcv", "wbtqv", "bg", "uoresi", "k", "lgrpgjuyekwgxxcmovzh", "uuxge", "b", "hdrid", "evrgwrusoxcaiug", "xjulcoggxgmpzehwy", "wsqribtwacevo", "tb", "qwwcvar", "g", "btg", "asieworcv", "rcusawioe", "rdh", "cexgovg", "eirso", "tb", "dh", "wbgvwtcq", "caw", "qtw", "gatexvibrwquogwsuc", "ujlmxkgwyzph", "wowqaecivsr", "ihrgddr", "u", "sieou", "w", "u", "g", "ariddgxriuregsuoh", "ioe", "phujzkg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string sentence = "rpnjqsirzedynoosqagcpgzwpezr";
    vector<string> validWords = {"sogznipyqercoadg", "yoidzocngrepnqsqasj", "wzpe", "qwepsaggzpc", "sreoozsydni", "oggczowapqsp", "dznzwerqpqpyajipscsnrogog", "asgq", "qga", "z", "pr", "qsga", "sjgzeipnczppwqrgosrdyqona", "rz", "sqa", "ydpsrjnqirnez", "eriz", "pw", "z", "gsqyoepcagnridoz", "qsoao", "wsgpcgenazqdpoyo", "gredgniqzsczypoao", "pgpzzwec", "edy", "e", "ep", "gzgscaqp", "eyd", "nsrqirjzp", "gcosqgaop", "nqesjzir", "yd", "ewzp", "z", "riqs", "qqnszsnggcpyierrpdoozja", "qzoeypiggscarszqond", "qs", "odngqyepoagsc", "jn", "wz", "q", "zooeynd", "zwgp", "wp", "zsnynesodqjroi", "epw", "yirzde", "dpnrysrozqjineo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string sentence = "mzoibpjiavwgxbms";
    vector<string> validWords = {"mioz", "bx", "pgivajxw", "pjovigimwzba", "xwbmvsgai", "imizpwabojvg", "gxvmiabws", "zijbopm", "s", "gx", "wgxiabvm", "oiapbbgzwixmvj", "bxmsg", "ajiv", "w", "s", "pzoijavib", "bmx", "gx", "s", "iwjgabxpbv", "m", "amgiwbsjxv", "xmb", "g", "wg", "mb", "bmx", "wmbsgx", "s", "bm", "x", "b", "b", "opbzjim", "waivgbx", "zbgwvpiiamoj", "gwbx", "pzibom", "bx", "xbg", "wipgvbaxbjm", "wijgva", "x", "xb", "b", "bx", "gxb", "m", "waijvg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string sentence = "pwfhmfkpyvitdslzzixzvokdkiyptborwhngyam";
    vector<string> validWords = {"dzithylfovpzmvxikzsk", "mfkh", "zsiltzd", "xdkbzwyiplszvkootizr", "ypv", "nyga", "a", "byraowyignpth", "ya", "gny", "rgnowh", "yhgnwro", "fwp", "gn", "zi", "wr", "hywrptob", "yizzxpvovpklsyitkktdidz", "vfkpytimd", "yidpzvtlzks", "oynpbyrhtwig", "ya", "hfwmfp", "zzkkpthiivfyotzvixsydkpbmld", "dvzxtilzdizsokk", "hgrtpbanwyyo", "i", "pyxozztditvyzdvskbpkiil", "ynag", "dsxlizytkvkoivzdzp", "z", "irpyngohtwb", "hwfp", "wkhpfmf", "a", "izdszoxypitzvikdylvtpk", "yiplzztixdsv", "howr", "idlztzis", "nyg", "hvfdipyktm", "rtpwoyb", "rbptyo", "pdzlvitsy", "iokdzkv", "h", "ytp", "bkyztxdkovoipiz", "vzizytdiytszdixvpkpbokl", "zxiiszdlt"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string sentence = "sgaxzumvgqnnhudbmxxj";
    vector<string> validWords = {"gduvxnqhmxbnzmux", "xuzvmga", "xnbqhdngum", "nvgq", "mbx", "x", "xmx", "x", "xx", "asg", "dnubh", "dunhb", "uhnqn", "db", "bm", "agsxz", "zasnuxvqggm", "bmxx", "xzum", "mdnuhb", "x", "sg", "b", "gs", "nmdgbqhunx", "x", "xbxm", "umagzxnunqvhd", "uqgdnhnb", "hunbd", "x", "xx", "mx", "ngdzahquuxmnvbgs", "qnuhmvubgxzdnxm", "zvnhmamudnxbguq", "xdmb", "zmgvxu", "xvmgnxmsuanbdquhzxg", "unh", "mbuzvngxgxxshuqdnma", "nzxgmuqsgav", "uhn", "gv", "xx", "mxzvu", "mbd", "xmbx", "auxz", "uvhxgqnmuzn"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string sentence = "rizfychxucfhkonwgixnc";
    vector<string> validWords = {"wkgfcnhxio", "hucyhfxc", "hccouwyfixnhxkg", "won", "n", "fcouhk", "xhochnyzffuck", "czxfyhu", "hcryfizxu", "onkwicxhfg", "hiccxruzyf", "okfh", "wixg", "giw", "zf", "gknwofh", "riyhcuchfxfz", "y", "xhyczf", "gninxow", "f", "n", "kignow", "hknigwxnfo", "x", "ncgxhkiofuw", "niwgx", "ir", "owikfgxchn", "ngioxw", "hcf", "fckhxcuh", "cxuf", "hxchfrzfcukyi", "ifhygochxxwncnku", "yfzir", "fz", "xi", "xfhkcu", "wngok", "rychifz", "xch", "kichwofgn", "chf", "uyxch", "yicnkfghnfxuwhcoxz", "x", "no", "ixhfucczryf", "gnw"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string sentence = "kpdzsgyoaq";
    vector<string> validWords = {"o", "a", "oy", "a", "oy", "y", "zsg", "a", "dkozgpsy", "dkp", "zs", "spzkgdy", "a", "sgz", "gy", "soyg", "yzgs", "z", "zsgyo", "kpzd", "aygo", "szpgkd", "ao", "syzg", "dkp", "y", "sdpzk", "ogy", "yoa", "yo", "s", "oy", "g", "yosgz", "sgy", "sg", "oy", "a", "yoa", "y", "ogay", "sogy", "yo", "yao", "zs", "g", "pdk", "pygsdkz", "gpskdz", "ayo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string sentence = "aivwbpjjctklt";
    vector<string> validWords = {"kct", "vjbipwja", "kltjc", "pvbwjj", "aibvw", "cjklt", "jbwpjiv", "cvbwjipj", "a", "l", "tc", "wjblpjkct", "j", "tlkc", "i", "jj", "wbp", "t", "bw", "vawbi", "tkcl", "wbjvpij", "t", "ct", "pjcj", "ctj", "wibv", "p", "jpbwcj", "c", "j", "jcpwjb", "kt", "bpivwa", "ivwab", "jjwbtkcp", "ctlk", "pjjtc", "jjbcwtkp", "a", "ai", "kctj", "wjipbvj", "bjctvwjp", "jjct", "via", "i", "i", "pwcvtjjb", "wjbjpcklt"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string sentence = "gfwcwddzwxcald";
    vector<string> validWords = {"cw", "zdcwwfwgd", "ddw", "cdzdw", "dwzwcd", "w", "a", "wz", "a", "zdwwdc", "z", "czxdwa", "lac", "zw", "lacwx", "fwg", "cxw", "ldacxwzwd", "axc", "wgf", "wdadzcwxc", "xwcz", "a", "xdwdcwz", "dwdcz", "la", "gfcw", "xc", "c", "zxw", "x", "c", "cx", "ddcw", "zcwx", "dzdw", "cgcdwzdwwxf", "c", "zcdwfgwd", "fxdcwgwdzw", "czxwwdald", "lcax", "wzcax", "ddgwwcf", "l", "xcdwwdz", "awcwxddz", "xw", "dcw", "al"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string sentence = "vipvswykmfnxsd";
    vector<string> validWords = {"nsx", "f", "sx", "kxnsfm", "mknfyw", "n", "vxfmyivwpksn", "nmkf", "nskmwpiyfvxvs", "xs", "n", "fmkn", "xs", "s", "mwkyf", "x", "fkm", "ynxsfwkm", "xs", "kfmn", "sxn", "wy", "x", "nf", "kwvpymivs", "ivspv", "n", "sxn", "snx", "xn", "x", "s", "sx", "xn", "yw", "s", "fxn", "mk", "xnf", "vsvpi", "wvpvmykifs", "mnkyxwf", "xnsf", "i", "piwsyvv", "syvipvw", "v", "iswypvmkfv", "wxyfsmnvpikv", "xn"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string sentence = "zhqholvxafvle";
    vector<string> validWords = {"fvl", "vfxa", "xqolzhafvh", "xa", "l", "axvf", "v", "v", "z", "hhxvlqfzolav", "lv", "a", "xavf", "lqhvho", "z", "xv", "l", "vohlqh", "ax", "vafl", "lfxlvova", "flva", "fax", "hqoh", "hvzaqlhxo", "l", "af", "fav", "vlhaoxhq", "l", "oqhlh", "lhqvhzo", "favlx", "vfxa", "x", "vlf", "fv", "qzohlhxv", "l", "vafx", "ol", "ohhfavvxlqz", "z", "lvhofhqax", "afohzqhxvl", "zvqhloh", "xfalv", "ohqh", "z", "hhzq"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string sentence = "ykxrcyfvbyxo";
    vector<string> validWords = {"xycfryk", "xr", "rx", "bvycxyrf", "bxryvcf", "by", "yb", "fvb", "f", "kyxcr", "b", "yf", "v", "c", "vf", "by", "yrkx", "rcyyfbv", "xvkycbyfr", "bv", "cbfyryvxx", "crkyx", "yb", "xrc", "cfvbryy", "fxyyckr", "fcy", "xykr", "vfy", "x", "yk", "xr", "ykrx", "ycr", "vyrfxc", "yx", "cy", "yvfycb", "byfv", "ryc", "y", "xvkcyryf", "xy", "ycxfrv", "xybfrcvyx", "vfb", "yf", "xrybcfkvy", "vfyby", "xbyfvcry"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string sentence = "norlrlbptqxtmlvna";
    vector<string> validWords = {"mvtlx", "orln", "nlv", "vmln", "pbqrxtl", "r", "m", "xttpqm", "qnotpblrrl", "brxqltp", "n", "rronl", "btrlp", "prblt", "mtx", "tlm", "vl", "vl", "vtml", "rpxrltmntlvolbq", "m", "l", "q", "vl", "n", "pqtbltx", "lrnlbttrxoqp", "bpltr", "qlttxm", "rlnor", "mlvn", "x", "lvmn", "loltlptbnxnvmrqr", "vn", "t", "tlbp", "tm", "xltlprtvqmb", "mlv", "lpb", "l", "mtvltxq", "tbllroxrntmpq", "n", "lv", "tvmxql", "rlborln", "rrnlbol", "mtpbqrltx"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string sentence = "nbuvaeqmssqsmfyuqggklwnljwrebyzdlnzwrkzwvycobymdbu";
    vector<string> validWords = {"wycdmrbzokwvyb", "nzrwwcvkzy", "aseqmvu", "rkvwz", "maqssqsevu", "qkvmqusmgyalfgusesqnw", "qsskavmygseuqnqfgmulw", "kwnzr", "eyrndwlzbwzj", "d", "nb", "aqllvfssgjqnwgmqkmsyuue", "qmgyufwglk", "lrwvwzdbkznycoy", "rrnknbwlledzlwyjwkz", "mwvrbzykwdoyc", "vbgkwnqylzmsgdwjaqzowdzkrnlwsfbulyueeycqbvysmrm", "lssqgsmueuyymqealrfbwkgwvjqn", "uwbzveknwaegllzysusmnkbndgqsqfrwljrymq", "odyybcm", "wnkrz", "zwbmrkywvocy", "reb", "lbrjlynzkewldw", "dwklbjzezzylnrrw", "lzvdykwwzyrenbrz", "zw", "rk", "lndzjbrzeyw", "b", "czvyyobw", "qsemmsggfsvuqyqau", "wzmozvbynyrkcw", "wkjbnlwnzwkrlvdcwyzelyozr", "mwsqmbluygsvrjflunkeqeyzgswaq", "rdwcwlrjvbzzlezknwyokywln", "nwbkzyzjedlrzwwr", "ljwnwdezrylzb", "vcwyz", "rbejlwy", "vwwdnlzzkbdymrbocy", "obybdm", "jmgnlwlsmvnufaqsksgyquqewb", "cmybybdo", "vmzckbdoryzwylwdbzn", "wzv", "wnlkl", "z", "ysulsswqkflvmnrjbmnqwequagbeg", "rbcmwkyovzy"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string sentence = "kwwnsumtfv";
    vector<string> validWords = {"wkw", "utfm", "wnwk", "ft", "wwk", "swnw", "wtmfunwsk", "w", "wnuksw", "t", "sutm", "f", "smtu", "tmf", "um", "uns", "mfstu", "wnskmftuw", "fmsunt", "s", "mustn", "m", "su", "nuwskwm", "wwk", "t", "tnwsuwmf", "k", "u", "uswwn", "fstnmu", "wskwn", "wnw", "usmtf", "mstwun", "knww", "mwsuwn", "wn", "f", "tfm", "wsfwtmnu", "ustm", "wk", "f", "u", "f", "t", "mt", "ftsum", "sun"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string sentence = "afxsluqpblxeyojrzkticbd";
    vector<string> validWords = {"ublqp", "k", "etyzjirok", "kzxlyejorb", "ykztoejr", "yzjro", "uq", "b", "tibkc", "k", "rilkeyczxtobj", "fpxblaslqxu", "b", "b", "kit", "tic", "ozyrj", "lbqup", "bc", "ticb", "uepxblq", "olklpqcuzxfjxbeiyabstr", "c", "r", "pbql", "kz", "pcrqallbzoxeubxsfkitjy", "itk", "j", "u", "xpbktylrecjzuqio", "c", "jlxqrkypzteob", "bc", "laqfsux", "c", "ikt", "sflax", "b", "bequpxl", "axlfupslbq", "olybkxzjert", "u", "ozxbryekjl", "ic", "oy", "tic", "jlfruslqbyexxzapo", "ckbit", "qup"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string sentence = "rteodivgthclatbeyebsbfujdkauuoqgckwarbkogluhjeh";
    vector<string> validWords = {"wotljukukflerudabqbbcyekgusagoab", "ok", "uuoq", "kokgoqbcuwagur", "ubtcbeaylehbsjf", "esebybb", "wbcark", "adk", "eeadctbtirvtghol", "bybdkeasjuetwakqfguucbor", "hkbolusaajqecdycerfuakubtbgw", "fyerusgabdlkhttouedacgiuvjebtqbo", "vaiotrltdtcehg", "j", "ksedjbbyuf", "owbuahrcoukdgukjgqkal", "uau", "fcubldokeoyurbasgbaegkwqbukj", "grakcbwok", "dotirgtve", "je", "kd", "j", "ulqrbowcugokgka", "uowbakglkr", "yetb", "uehj", "lughej", "athlc", "ok", "eqwbhkkotjsfcdebabglcbhaouualrkuyug", "k", "b", "b", "eiacbfletksrwjgoyratduahtcuokbqedvugb", "auqkcduog", "hacl", "dusafbjkeb", "uu", "eujh", "roqwgckba", "ufj", "bbefyuesb", "bk", "e", "c", "hjgkoul", "hc", "uhrjkoablkegw", "uhj"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string sentence = "hmpoxxijnk";
    vector<string> validWords = {"xij", "xhopxm", "pixox", "n", "jxi", "x", "m", "j", "n", "x", "mpho", "xxnji", "j", "ipxmnjxo", "hm", "i", "nji", "n", "n", "h", "ijnx", "x", "nij", "ixmojxnhp", "jxi", "ixohxmjnp", "x", "n", "pxo", "oxpmhx", "x", "ji", "jopxxmih", "po", "xi", "x", "xipox", "xij", "n", "n", "ixj", "xij", "jixx", "x", "jn", "i", "hpxjixom", "njxxpoi", "xxipoj", "ojpxix"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string sentence = "kuvrnkcdtignlzoqgtml";
    vector<string> validWords = {"nltkqzdgcogit", "tcdgnlkzoiq", "nrgdznlkqvuktico", "uk", "zlginot", "uvnrkk", "lnoicdgtz", "t", "zlgtoncdki", "g", "tdigqcotlgnz", "kitcd", "onqztlgmg", "dicnlvkgrnt", "rvnkc", "kunldvtorngczki", "igcnzlktd", "idvkncrt", "ldqggnttozi", "mt", "uovknnldrqgizktcg", "gtoqm", "ogqltzcind", "qmgt", "mt", "cigdtn", "gt", "tdlnig", "q", "itkngcd", "ilgqgonz", "mtonlqggz", "vrn", "dtnizlg", "drtvnukkc", "t", "q", "o", "tgmq", "d", "rkvkunc", "zloudtvknrickng", "t", "tm", "gotqlz", "idtkrucnvklzgn", "dimglqnkzttcgo", "v", "qintoklgcdgz", "ztncdoglqki"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string sentence = "wcpwlshmxvmhctzocrfbtxz";
    vector<string> validWords = {"xtbrf", "slcwwmtcpmhhxv", "x", "w", "wmcopvrhhtmcxcswlz", "rfc", "xfrctbotcz", "mlvtxmhsch", "x", "r", "xrftb", "t", "vsctlmzhxhm", "fr", "fbr", "h", "fzcbttocr", "czo", "mv", "r", "zoc", "mctczohv", "ctzowlmhmxschv", "cvcobmfzrth", "crbfo", "x", "xt", "x", "vmchmxt", "v", "mh", "mrbvtfxcctozh", "thcoz", "cxtsmvhwmzhl", "cblwhomprztmtsxxhcvcwf", "swxmhl", "frbt", "txb", "vm", "hwcxzmscvlorhmt", "bfhrcctoz", "lwhs", "bt", "xvtwhsmhlcm", "cmslvhwmxwp", "tb", "x", "cbtrzcof", "ctz", "cpw"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string sentence = "vcshyvvqswtjbdjdt";
    vector<string> validWords = {"btj", "djdb", "sdtjqbvw", "wsjdtbj", "tw", "vq", "v", "sqtjdwbj", "sychvv", "t", "swvdbtvyjchsqv", "j", "sqw", "vc", "vjtbqdwjds", "dbj", "qwhvtvssy", "jbdjd", "hvsjsvtwqy", "wtqs", "jbd", "stw", "tw", "hsyvv", "v", "cyshv", "sq", "vq", "s", "wtsj", "jsdbqjwt", "qstwdbjj", "hvcs", "wsvq", "bwtj", "wt", "djtbwj", "v", "bdjd", "wbdtj", "cvvhysv", "c", "tjbw", "jtsw", "sq", "cvshyv", "shvvy", "jcdhvbstwvqdvysj", "sc", "djb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string sentence = "egqqwpqpfbsmxfcpclkbud";
    vector<string> validWords = {"pwqsukflpbcxbpmcf", "eqgq", "lkb", "fccmbxsp", "cusmbbcpfklx", "cuklb", "cbmpsfkclx", "kl", "l", "l", "ucklb", "plwbgqfqcmfbpqexscukp", "xbms", "kulbpc", "cp", "skflbbxcpmc", "pc", "k", "klcp", "fpxqcbwepbfgcqqslkmp", "u", "bppxwmfqs", "sb", "pqbwpfemsgfqxq", "pcc", "fepgqqwpq", "xlfcbkpumc", "clk", "lpc", "cfkmsbuxbplc", "cckpl", "kb", "lck", "qpwqfbgpqes", "u", "cpfkblc", "mfckxpbcsl", "u", "cpcf", "clbk", "pqefpqgwq", "plc", "pccfkl", "l", "bfcpxslmc", "fcpc", "c", "bcmpsfx", "p", "pfc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string sentence = "maejknucjrdoacaocmblqxwvusmhxjfsseqo";
    vector<string> validWords = {"njjuokdrec", "s", "essf", "vxlxhmsusjsqfw", "lubxmvqw", "qmbfoxhjcmvxlsaacwsu", "efxsjs", "wxmoxhausmaqcvclb", "kej", "omjcranauodakcejc", "ajeumnk", "xshmqwvlxuj", "knevobjcxwuqamcroajdlc", "d", "umbawkjlnajrdosuxqvccmcoe", "rcjun", "joomucncaamcadrejbk", "u", "f", "s", "camjxxejfkhcjbqnmosvlamdacuorwu", "ma", "lsmmuoexhjsqvwbcsxf", "es", "s", "croad", "mflohxjscswsxmquvb", "vcxhumboradamoccjwslq", "abecukmujvoqlnwjrdcoaxc", "kejnucj", "xoscxjsvclammbsfwdaqhuo", "sqse", "ajmke", "ajaducnorco", "ojjuenakcdmr", "nu", "rdjoc", "xjseufsmqhs", "mqhsesfsxj", "xhjsm", "aoaracdnjcujkme", "ajxucojwvqonaccmamelbrkd", "ahmaqobcucvmwxjxlrosd", "qwuhjoasldjvonrcaxmcucbmx", "jssxhmf", "qess", "essfq", "onjlcamchacuqjfrxmajmbvkxwsoude", "avcuwqbjuxorcncodasml", "mbuwfssacolajvxhmxcq"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string sentence = "goquvvemnfrzwealbwijgdqmmjezgxcagipxkyhptizjevdsqf";
    vector<string> validWords = {"hyk", "gzx", "mje", "acg", "dsv", "enm", "zrf", "eaw", "dmq", "dsv", "oqg", "qgo", "ixp", "itp", "igj", "ewa", "blw", "frz", "wlb", "ijg", "xzg", "xpi", "xgz", "agc", "ezj", "q", "vuv", "frz", "vuv", "tpi", "khy", "q", "ewa", "jig", "qmd", "lwb", "jze", "uvv", "ezj", "ixp", "nem", "qgo", "mej", "jem", "mne", "dsv", "dmq", "ykh", "pti", "cga"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string sentence = "iajxbigemmsnudxtrupzqsvtliazjduuwrlidyoivgvsfwdbik";
    vector<string> validWords = {"fvs", "wdb", "egm", "fvs", "iaj", "zpq", "oyd", "mns", "bwd", "svt", "ixb", "rli", "jzd", "jia", "ial", "dux", "i", "dyo", "xud", "bix", "giv", "ila", "rtu", "gme", "vsf", "aij", "lir", "ali", "uwu", "bdw", "wuu", "tsv", "i", "zjd", "xud", "gem", "tur", "vig", "wuu", "mns", "xib", "dyo", "vts", "lri", "zpq", "dzj", "zqp", "nms", "rut", "ivg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string sentence = "jsuqlhfigeeifrhhtltfkfcaguqxzodvbspwmxbausbkinvavo";
    vector<string> validWords = {"bxm", "tfk", "fhr", "lht", "v", "tfk", "fca", "usa", "ozx", "mbx", "ibk", "qug", "acf", "htl", "gif", "jsu", "zox", "dbv", "qug", "hql", "pws", "eie", "qug", "fca", "frh", "pws", "tkf", "fig", "sau", "nav", "hlq", "gfi", "usj", "nva", "eie", "oxz", "psw", "vna", "jsu", "xbm", "ibk", "v", "qhl", "bdv", "bik", "eie", "usa", "hrf", "lht", "bvd"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string sentence = "uqcvloluuylztecwkaekqdmpewqqtiwgcvieyuegsddezfnoot";
    vector<string> validWords = {"dpm", "ucq", "wka", "ewq", "gcw", "qit", "onf", "zed", "keq", "tec", "gsd", "uey", "uul", "lvo", "yue", "tiq", "ewq", "o", "dmp", "ovl", "zde", "pmd", "cqu", "qke", "luu", "uye", "nfo", "qti", "gwc", "tec", "etc", "iev", "weq", "lyz", "zyl", "iev", "yzl", "ucq", "wgc", "akw", "keq", "nof", "luu", "vie", "lov", "gsd", "o", "sdg", "dez", "akw"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string sentence = "wjeutntaifytaqnwqmdsdwcojyfhpqyljbitldumrbbytijnmu";
    vector<string> validWords = {"lud", "m", "qna", "fyj", "iat", "tnu", "ljy", "nut", "bit", "cow", "tib", "itb", "dsd", "mrb", "woc", "bty", "jni", "owc", "phq", "qhp", "udl", "dds", "yfj", "tnu", "tia", "m", "udl", "wej", "mwq", "anq", "ait", "dsd", "tyb", "jfy", "ljy", "aqn", "jni", "ewj", "qph", "jwe", "mbr", "rmb", "yft", "jni", "wmq", "wqm", "ytf", "ytf", "jyl", "bty"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string sentence = "wzpetdoomfhvlckhfgkguvmymqsyjfpbjxuhmmmypsblyasqql";
    vector<string> validWords = {"ugk", "ylb", "jpb", "kug", "pjb", "hgf", "pzw", "oom", "mmm", "dte", "xhu", "pys", "wzp", "oom", "moo", "ckl", "ysp", "fvh", "fhg", "ybl", "qms", "pzw", "yfj", "hgf", "spy", "hfv", "sqm", "jpb", "klc", "fyj", "lck", "qsa", "myv", "q", "fjy", "vhf", "ted", "ybl", "mmm", "mmm", "aqs", "kug", "tde", "xuh", "hxu", "qsa", "q", "mqs", "vym", "ymv"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string sentence = "hdiuyxjzknfxahzalvslzdcjwgjspndiasnwvokcsyvvxglzra";
    vector<string> validWords = {"vko", "nps", "yxu", "hdi", "dcj", "kvo", "vvx", "psn", "dia", "vxv", "gwj", "haz", "nsw", "r", "cjd", "ysc", "spn", "uxy", "nsw", "szl", "lav", "slz", "gjw", "slz", "vok", "zjk", "r", "fxn", "lzg", "dia", "lgz", "hid", "jzk", "vxv", "xfn", "hdi", "avl", "ycs", "xfn", "uxy", "avl", "ahz", "dai", "kzj", "zha", "wsn", "syc", "jcd", "glz", "wjg"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string sentence = "vauuwmvxzatmsepcpzzbnektkwwfnevgrottdcnzhoeadigaal";
    vector<string> validWords = {"vrg", "a", "pzc", "hoz", "sep", "a", "iga", "wwk", "tek", "cnd", "uav", "xzv", "ekt", "tto", "iga", "zvx", "ott", "dnc", "atm", "nef", "tot", "spe", "cpz", "fen", "bzn", "zbn", "spe", "vrg", "ade", "mat", "gai", "kww", "vgr", "hzo", "vau", "pcz", "wkw", "efn", "tam", "mwu", "dae", "uva", "dae", "bzn", "uwm", "uwm", "ozh", "vxz", "tke", "dcn"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string sentence = "taulakhunkqssyyskduwajkssutzwwsybyudbsugbissfljejm";
    vector<string> validWords = {"ssf", "j", "nhu", "stu", "sjk", "ksj", "igb", "wua", "yys", "unh", "auw", "j", "kqs", "zww", "ubs", "uyd", "lak", "uta", "ejl", "skj", "qsk", "sub", "lej", "bus", "tus", "qks", "ksd", "fss", "alk", "duy", "gib", "kds", "sby", "aut", "aut", "udy", "wau", "sdk", "sfs", "ysb", "syb", "ysy", "hnu", "lka", "tus", "gib", "wzw", "zww", "syy", "lej"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string sentence = "lwfzhqandojyydevyzglnoyezjnlsoanyukfjafgretgtldkuq";
    vector<string> validWords = {"nad", "jfa", "nya", "yoe", "kfu", "jaf", "dye", "oey", "yvz", "kdl", "lgn", "u", "ojy", "jnz", "ojy", "lgn", "ttg", "dey", "nya", "oyj", "vyz", "zvy", "tgt", "nzj", "dna", "wfl", "lfw", "rge", "zqh", "lso", "slo", "ldk", "nad", "ttg", "ger", "ayn", "eoy", "qhz", "slo", "faj", "u", "gre", "kuf", "zjn", "lwf", "kdl", "ngl", "kfu", "zqh", "yde"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string sentence = "afirgkixtvzargwggeqdjippiwopctitklohjjsjklzaqqlmcw";
    vector<string> validWords = {"rifag", "wtcpo", "shjjj", "ioltk", "mclq", "jjhjs", "afrgi", "lokti", "olkti", "iotkl", "vikxt", "ippij", "cptow", "ocpwt", "jjhsj", "kivxt", "qmcl", "qzakl", "cmql", "pwtoc", "gedqg", "tvikx", "lqcm", "jjjhs", "gdgeq", "wrzga", "ppiij", "edggq", "vtikx", "gzarw", "gifra", "figar", "iagrf", "jppii", "kliot", "pijpi", "qaklz", "txivk", "qgegd", "ipijp", "zgwar", "egqgd", "hjsjj", "aqzlk", "qzalk", "lakqz", "grawz", "wrzga", "ptwco", "qcml"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string sentence = "gudrlfgzxwchncrffurtinvyffcmymkvxhbazagwticxsyoemj";
    vector<string> validWords = {"rnhcc", "moye", "rccnh", "mmcyf", "duglr", "nrchc", "wgfzx", "hkvbx", "xfzwg", "zfgxw", "gulrd", "yvfin", "ctsix", "gazaw", "cmymf", "vhbxk", "ixstc", "cmymf", "fxzgw", "oyem", "rdulg", "zxgwf", "mmcfy", "xhvbk", "rfftu", "emyo", "ugrld", "rftfu", "zwaga", "cstxi", "ictsx", "ccnhr", "drglu", "ccnhr", "omey", "hvxkb", "vnfyi", "aagzw", "yinvf", "fmymc", "vfiyn", "oyem", "trfuf", "ftfur", "zwgaa", "fnyiv", "csixt", "azgwa", "fufrt", "hkxbv"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string sentence = "qwjoisaimnooghbywzsxyhjoxkkmffcluxcemdpbqyfxzsdpnm";
    vector<string> validWords = {"oxhyj", "fxqzy", "fqzyx", "lcucx", "qyxzf", "mkkff", "jwoiq", "wjoqi", "spdn", "fmkfk", "zsywx", "dpns", "gohbo", "bgooh", "ghobo", "spnd", "xcucl", "fkkmf", "asmni", "mansi", "xhjoy", "yxszw", "xlucc", "cuxlc", "medpb", "psdn", "zwysx", "hjxyo", "wzysx", "dempb", "jqoiw", "wxsyz", "dpebm", "msina", "nsaim", "xcluc", "qjoiw", "pbmde", "jyhxo", "snami", "mkkff", "xjohy", "xfqyz", "bohog", "bmpde", "nsdp", "owjiq", "obogh", "qfxzy", "fkkfm"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string sentence = "bsnoydfalhptmycjeyrefytjiigcwfhjmmjvefkdiokszfwxab";
    vector<string> validWords = {"eyrje", "tmcyp", "oybsn", "yerej", "bsnoy", "mcypt", "eyejr", "mptcy", "byons", "vekdf", "ctmyp", "gcifw", "fgicw", "zoksi", "osizk", "xafw", "ftijy", "xfaw", "lfhda", "cptym", "faldh", "alfdh", "yrjee", "ytjif", "iyjtf", "fldah", "faxw", "mhmjj", "gcifw", "fkedv", "zsoik", "afwx", "nsoyb", "hmjjm", "yobns", "erjey", "jjmmh", "tifyj", "fedvk", "iwcfg", "sizko", "fdkev", "mjhmj", "tfjyi", "vdekf", "adhfl", "fxwa", "ziosk", "jhmmj", "gifwc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string sentence = "sqwzjwoekbqhtufumrkmbrvmrhupoanxohviphkvphgbvdjfab";
    vector<string> validWords = {"hpuoa", "bmrrv", "fdja", "zjswq", "krmmu", "ftqhu", "pvikh", "rummk", "bhvgp", "ukrmm", "wbkeo", "oahup", "bvrmr", "phvgb", "vrbrm", "jfda", "dfaj", "uqfht", "rvmrb", "ivpkh", "zjswq", "fqthu", "hpvbg", "zwsqj", "bekow", "kowbe", "ouaph", "hnxov", "ipvkh", "dajf", "phbgv", "mrmku", "wzjsq", "ipvhk", "ohnvx", "uqfth", "zsjwq", "mmukr", "uapoh", "vmrbr", "ebokw", "hoapu", "quthf", "pvhki", "vnxoh", "eowkb", "xvnoh", "pvbgh", "vxonh", "fdja"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string sentence = "moetltwviyscisgchamhzkzqanhoplwdjvlxkynqyngegzeobx";
    vector<string> validWords = {"bzeo", "chamh", "yxnqk", "hchma", "ahhmc", "issgc", "nkxqy", "tmleo", "letmo", "zzakq", "hplon", "tiywv", "oezb", "jdwlv", "tviwy", "qzazk", "scgis", "bezo", "vwyti", "nkyqx", "boze", "gssci", "vdlwj", "yqkxn", "iwtvy", "hmahc", "icgss", "ggyne", "jdlvw", "lvjdw", "zqzka", "zzkqa", "toelm", "gegyn", "ygneg", "lvdwj", "nlhop", "xkyqn", "pholn", "leotm", "pnolh", "hacmh", "qzzak", "tvyiw", "plnoh", "ynegg", "engyg", "zboe", "csisg", "moetl"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string sentence = "ksthjynnwgumsllkgtlowvfdytwzbkczzjvzaheivuovrygazu";
    vector<string> validWords = {"wgnyn", "rvuov", "zvcjz", "gyaz", "fdwvy", "gklto", "ngwny", "gzya", "zbkwt", "czjvz", "yvdwf", "bzwkt", "tkshj", "vyfdw", "zhiae", "aezih", "lulms", "vurov", "mlslu", "rvvou", "ieazh", "fvdyw", "aygz", "hieaz", "jksth", "lkgot", "ygza", "lslmu", "lmslu", "klotg", "ihaez", "vuorv", "vzjzc", "gltko", "tzwkb", "ktbzw", "fydwv", "zayg", "zktwb", "lotgk", "htkjs", "zzvjc", "yngwn", "jtskh", "lmslu", "hktjs", "gnwyn", "ynwng", "cvzjz", "rvvuo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string sentence = "mxpluihtessyigvqrmomapjrbrkwgtwzbqxpfitdbafyvyjmng";
    vector<string> validWords = {"ormmq", "gktwr", "rpajb", "plxum", "syvig", "xzbwq", "eshit", "ithse", "idftp", "yivgs", "yivgs", "qmorm", "bvyfa", "jymn", "pxmlu", "zwbxq", "fayvb", "esiht", "uxmlp", "ymjn", "wzqxb", "pabjr", "gwrtk", "qmomr", "xbzqw", "jrbap", "yafvb", "brajp", "mnjy", "umpxl", "ftipd", "vfyba", "krtgw", "oqmmr", "qmmro", "itesh", "njym", "yvfab", "tiehs", "wtrkg", "ivsgy", "njym", "gyvsi", "trkwg", "mxlup", "ptfid", "arpjb", "itpfd", "zbwqx", "tpfdi"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string sentence = "qputtnxeciexyiqzyrhxqpggcsjtfvqekwygmsoakogiixjvea";
    vector<string> validWords = {"hrzxy", "ttuqp", "pgqcg", "iecxn", "inecx", "kgioi", "gikio", "eykwq", "yeqxi", "yewqk", "yewkq", "rzyhx", "jvex", "gcqgp", "ggcpq", "qtutp", "eqiyx", "hyzrx", "ogmas", "goiik", "kgiio", "osmga", "cpgqg", "goiik", "xjev", "tvsfj", "iqxye", "tpuqt", "moasg", "incex", "fjtsv", "pqgcg", "eqykw", "ftsvj", "ejxv", "gmosa", "vjxe", "hyxrz", "gosma", "exnic", "ecxin", "uqptt", "jvxe", "tptqu", "exqiy", "yrzxh", "ywqek", "svfjt", "tfjsv", "eixyq"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string sentence = "oxqixnkbxecnwthjqjgqhogaxvdsatvaocdrlfwylofthrckjl";
    vector<string> validWords = {"hgxao", "gqqjj", "vacod", "lfywr", "frlwy", "ebkxn", "tolhf", "qqjgj", "cadov", "ywlfr", "advoc", "xxiqo", "knxeb", "nbxke", "ixoqx", "krcj", "doacv", "jqgqj", "stvad", "wrlfy", "flhot", "ixoqx", "hcwtn", "xxiqo", "gxoah", "wncth", "vcado", "wctnh", "ckjr", "tadvs", "jrkc", "ckjr", "ioqxx", "jrkc", "nkxbe", "sdatv", "tlhof", "dsvat", "tdsav", "haogx", "whtcn", "hntwc", "oftlh", "goahx", "eknxb", "jqqjg", "frwly", "qjjqg", "hftlo", "aohgx"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string sentence = "neotowheret";
    vector<string> validWords = {"one", "two", "three", "there"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string sentence = "ssssssssssssss";
    vector<string> validWords = {"sssss", "ss", "sss"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string sentence = "ommwreehisymkiml";
    vector<string> validWords = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string sentence = "ancbdkkajwndjdsrunwjdhucnwjudbdsqoioh";
    vector<string> validWords = {"asd", "asddd", "qwe", "qweee", "qweeeeqweqew", "qeqeqweq", "qeqe", "qeetf", "ererer"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string sentence = "abbbacaddaddabbabbbadbbbabbbcbbabbbdbabbbaaaabbbac";
    vector<string> validWords = {"babab", "bbbca", "accbbbbbabdb", "acaddacbbdaabb", "abbab", "aa", "bb", "cc", "abbabbdabbcabcc", "cca", "caaabb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string sentence = "ababababababababababababababababababababababababab";
    vector<string> validWords = {"ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaabaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "aa", "a", "a", "a", "a", "a", "a", "aaaaaa", "aaaaaaaaaa", "aaaaaaaa", "aaa", "aa", "aaa", "aa", "aaa", "aa", "aaa", "aaa", "aaa", "aaa", "aa", "aaa", "aa", "a", "ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string sentence = "abbccaaabbccaabbccaabbccaabbccaabbccaabbccaabbccaa";
    vector<string> validWords = {"ba", "cb", "ac", "ccbba", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string sentence = "ogodtsneeencs";
    vector<string> validWords = {"go", "good", "do", "sentences", "tense", "scen"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string sentence = "aaabbbabcabc";
    vector<string> validWords = {"aa", "ba", "aaa", "bba", "abb", "cba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string sentence = "ssssssssssssssssssssssssssssssssssssssssssssssss";
    vector<string> validWords = {"s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string sentence = "aaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string sentence = "aabaabbaaabaaabaabbaaabaaabaabbaaabaaabaabbaaaba";
    vector<string> validWords = {"aab", "aab", "aab", "aab", "aab", "aab", "aab", "baa", "baa", "baa", "baa", "baa", "baa", "aba", "aba", "aba", "aba", "aba", "aba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string sentence = "ababababababababababababababababababababababababab";
    vector<string> validWords = {"ab", "ba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb";
    vector<string> validWords = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "b", "bb", "bbb", "bbbb", "bbbbb", "bbbbbb", "bbbbbbb", "bbbbbbbb", "bbbbbbbbb", "bbbbbbbbbb", "bbbbbbbbbbb", "bbbbbbbbbbbb", "bbbbbbbbbbbbb", "bbbbbbbbbbbbbb", "bbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string sentence = "xyzababababababababababababababababababababab";
    vector<string> validWords = {"a", "b", "aa", "bb", "zyx", "ab", "ba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string sentence = "asddsaasddsaasddsaasddssdasdadadasddsaasddsaasddsa";
    vector<string> validWords = {"asddsa", "asd", "asdasdasd", "dsadsadsa", "adsasdasdasd", "dsadasdaaddasdadsa", "asdasdasddas", "dsaadsasddsaasdasd", "dsadsadadsadsadas", "adasdasddsa", "sadasdasdas", "dasdasd", "sdadasda", "aasd", "dadads", "asdad", "asdadasdasd", "asddddd", "sdadadad", "asd", "d", "asd", "asdadsadas", "adasdadada", "adasdadasdsad", "asdasdadasda", "adsadasdasda", "dasdadasdad", "dasadsdasadsdas", "daadsadsads", "das", "sadasdadsdsaads", "dasasdadsads", "asasd", "dasdasdasadsdsa", "dasadsadsds", "adsadssa", "ads", "das", "dasads", "ads", "dasdasdsadsa", "dasadsadsasd", "das", "adsdasasdasdads", "adsadsdasdasdasads", "asdadssadadsasd", "adsdasadsads", "dsadsadsadsadda", "asdasd"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string sentence = "ababababababababababababababababababababababababab";
    vector<string> validWords = {"a", "b", "ab", "ba", "ba", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ba", "ba", "ba", "ba", "ba", "ab", "ab", "ab", "ba", "ba", "ba", "ab", "ab", "ba", "ba", "ab", "ba", "ba", "ba", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ba", "ba", "ba", "ba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string sentence = "ssssssssssssssssssssssssssssssssssssssssssssssssss";
    vector<string> validWords = {"s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s", "s"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    string sentence = "sepawaterords";
    vector<string> validWords = {"separate", "words"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    string sentence = "abcbcabc";
    vector<string> validWords = {"abc", "cba", "cb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    string sentence = "aab";
    vector<string> validWords = {"abb"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    string sentence = "ab";
    vector<string> validWords = {"aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    string sentence = "neopayqeabcc";
    vector<string> validWords = {"pay", "yapo", "ne", "one", "baeq", "abcc", "payq", "c"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    string sentence = "aaaa";
    vector<string> validWords = {"bbbbbbb", "aaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    string sentence = "ababababababababababababababababababababababababab";
    vector<string> validWords = {"babab", "bbbca", "dababd", "addadb", "cbacab", "cba", "ba", "cba", "cabcc", "bcc", "aaab", "baaa", "baaa", "aaaaab", "ba", "aaa", "bbb", "ba"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    string sentence = "abb";
    vector<string> validWords = {"aab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    string sentence = "abcdefg";
    vector<string> validWords = {"abc", "efgd", "abcdegf"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    string sentence = "aabb";
    vector<string> validWords = {"ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    string sentence = "ababababababababababababababababababababababababab";
    vector<string> validWords = {"ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaxy";
    vector<string> validWords = {"a", "aa", "yx"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    string sentence = "ogodotsneeencs";
    vector<string> validWords = {"go", "good", "do", "sentences", "tense", "scen", "odo"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    string sentence = "abababababababababababababababababababababababab";
    vector<string> validWords = {"a", "b", "ab", "ba", "aba", "abb", "bba", "bab", "aab", "abab", "a", "ba", "abbb", "aba", "bab", "ab", "b", "a", "abababab", "abababb", "bbaaba", "babab", "ababab", "ababab", "bababababa", "ababababababab", "babababa", "b", "a", "bab", "aba", "babba", "bbbaaaa", "aaaaaaabbbbbbb", "b", "a", "a", "a", "a", "b", "b", "b", "aaaabbbb", "baba", "aba", "bbbaaaa", "ba", "ab", "ab", "bbbaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa", "a", "aa", "aaa", "aaaa", "aaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    string sentence = "abcdefghjiklmnopqrstuvwxyz";
    vector<string> validWords = {"ab", "bc", "cd", "de", "ef", "fg", "gh", "hi", "ij", "jk", "kl", "lm", "mn", "no", "op", "pq", "qr", "rs", "st", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "st", "tu", "uv", "vw", "wx"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "aa", "ab", "ac", "ad", "ae", "af", "ag", "ah", "ai", "aj", "ak", "al", "am", "an", "ao", "ap", "aq", "ar", "as", "at", "aaa", "aaaa", "aaaaa", "aaaaaa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    string sentence = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> validWords = {"aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa", "aa"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    string sentence = "abcdef";
    vector<string> validWords = {"cab", "def", "fedabc"};
    SentenceDecomposition* pObj = new SentenceDecomposition();
    clock_t start = clock();
    int result = pObj->decompose(sentence, validWords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14927744&rd=12183&pm=8692
********************************************************************************
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <functional>
#include <cstdlib>
#include <climits>
#include <sstream>
#include <cctype>
#include <complex>
#include <numeric>
#include <cassert>
using namespace std;
 
const int oo = 1000000000;
typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
#define FORIT(i,c) for (typeof((c).end()) i=(c).begin(); i!=(c).end(); ++i)
 
class SentenceDecomposition { public: int decompose(string sentence, vector <string> validWords); };
 
int SentenceDecomposition::decompose(string sentence, vector <string> validWords)
{
  int n = sentence.size();
  VI dp(n+1, oo);
  dp[0] = 0;
  for (int i=0; i<n; i++)
  {
    FORIT(it, validWords)
    {
      string s = *it, t = *it;
      int m = s.size();
      if (i + m > n)
        continue;
      sort(t.begin(), t.end());
      string a = sentence.substr(i, m);
      string b = a;
      sort(b.begin(), b.end());
      if (b != t)
        continue;
      int cost = 0;
      for (int j=0; j<m; j++)
        if (s[j] != a[j])
          cost++;
      dp[i+m] <?= dp[i] + cost;
    }
  }
  return dp[n] == oo ? -1 : dp[n];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/