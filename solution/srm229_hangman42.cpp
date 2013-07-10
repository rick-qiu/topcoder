/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3068
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

class Hangman42 {
public:
    double probability(vector<string> words);
};

double Hangman42::probability(vector<string> words) {
    double ret;
    return ret;
}


int test0() {
    vector<string> words = {"top", "web", "cam", "buy", "now"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"wwtkmcoj", "lgsyduoi", "oiqisear", "hntxjrkf"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"a"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"ppk", "bez", "ltm", "nev", "roo"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"advanced", "absolute", "anything", "accepted", "reflects", "cleverly", "coaching", "winnings", "overflow"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"abcdefghiz", "abcdefghyj", "abcdefgxik", "abcdefwhil", "abcdevghim", "abcdufghin", "abctefghio", "absdefghio", "arcdefghip", "qbcdefghip"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"aa", "ab", "ac", "ad", "ae", "fg", "fh", "fi", "fj", "fk"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"aaab", "aaba", "aabb", "abaa", "abab", "abba", "abbb", "baaa", "baab", "baba"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"hllba", "zvcjh", "fjftl", "rrxld", "lkodz", "vwugd", "jfodw"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7142857142857143;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"jmmmarhhpvdpopplneruuzjjiaibwbvzogqjaatzs", "adfnkwylckfnlqhspqllqwysjpgefbmrhfekdkgmp", "liaxgnqakfrvuajtogylkxopoabiuavkvxifqmbkb", "qstebvlupnzioarhygtmoefnhmyrfsbhtzuvasuvz", "eaiupcapffctsmziczotdzbwbntdvjifmqzemfajw", "fkuxnlwdvkhfnlwtncsuvjkvfhxsoyxhjgfquxllz", "gcghokcmhsrxzpemihtstabomyfkprduumxbwbbip", "mseqrnzafqdxczihsrlmondelbittrdgeysvbdxee"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"scuzzlaxugqpzcpqqzrzyfgkgqajmxnmchoukvnmfwx", "wdyjtwfohvktljkjiuwszjusgorbjsigusombmlfoxs", "lercedfuauzdrcwrljhvnxzeuhvtfxgfjvecddjqfhr", "sbzxptkjpfneysdqcmxqsftdmdiapqottkgkjmssgza", "uvuubbqnbmjrllhkrnhgykdjdnmjjycyblbjtbvgtlk", "byiqklubhrydhkhdnpqgzlnaiukuhpiundgqwfnllwu", "jrwptqxnowbusyvmsvlkujayjscqaklmbkwusvwdrek", "xhjjgeopmutacxdoodjivsmjvsgpzjecymiueeuxzex"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"abcdefghizqbcdefghizalcdefghizabckefgoizpbndefmhiz", "abcdefghyjabcdefghyjalcdefghyjabckefgoyjpbndefmhyj", "abcdefgxijabcdefgxijalcdefgxijabckefgxijpbndefmxij", "abcdefwhijabcdefwhijalcdefwhijabckefwoijpbndefwhij", "abcdevghijabcdevghijalcdevghijabckevgoijpbndevmhij", "abcdufghijabcdufghijalcdufghijabckufgoijpbndufmhij", "abctefghijabctefghijalctefghijabctefgoijpbntefmhij", "absdefghijabsdefghijalsdefghijabskefgoijpbsdefmhij", "arcdefghijarcdefghijarcdefghijarckefgoijprndefmhij", "qbcdefghijqbcdefghizqlcdefghijqbckefgoijqbndefmhij"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"ozeexsuaihtuucqghqsjzqzugmaebvdrddyztehr", "lvjvwhqyeqpapbjusjtxfbcgfbsudrbhpydzryyp", "cigacdzesqanrlflmsxvhvtvtnzelbzlopcchdob", "edqogzausmjxzoagpsssxwnmfranrrswjsdgqcqv", "ptvbnhdcecegnnsofcxaqtizrkwvazfngvzgcsqb", "guiqkikpwwbzgpvtikaaxxjitqkqfughdlmjtdax", "gbubcxhxscszrcuzbggjmnzlzihftpmpmaamtxcp", "tuijqvgvbiwbyjhjmkmmqlmhayvdqhlkpptqqide", "yidryvjmpbjkdzhmhtoynhbwlbsehcbymltrddsj"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8888888888888888;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"vjbaglrfkwjyuzdrxvhompvpmypqhhaqgjlutukb", "lgujpiqdaxfxoxjavsdlmlsafemjkfglswpcsgiv", "omqhozfneccvlqkscqwtqdxcknvchollwimvncvx", "rmtatqhipgfvwlcpfbmsgmzejgnaefjbmzvrembv", "ocvidozoyrbwptxbwdtgxhhkaxflolwsolwapmzm", "dduisyvjstkhplfexwzbavkqhxgatjxieeatlspt", "ehhpoczjutgnhhzmrsyibaczppytzzrhadtynyhq", "vlrkjqvlnwwdismlggsbouzgneqloddaxxcbjrxz", "uqxfisaynbrvrwwfqtmperqhnljolxpacxdbeetd"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8888888888888888;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"cxrkapsjxnsetbbhgtwxjejfyqdewkdnvgqzcetpalykfn", "vwlaaghwciwahrnxrzkyaftiyasylnphntskssrlmpmcgx", "htjmhyaqcyyrowoxpbmaviicyxlwayonlvmpqznbwwjgam", "wkbcpbpcehadjhqoaroogmjvmmkehshtwvdxxbbgorphrq", "awojqoxbevoeseodeiruiwjuuthiufipdioonwnbfmfpez", "fdmcgwixmchdzqwiqyzgnbeulzosujvjwymdxdlkcvhtvr", "yftzeifmfkekjtioegtkpgtnoeghmpcunpbtqjtuylynzh", "xesxqgqzepssdxywpmgjmxsqlvcxsxivksjncyneiksimg", "qvrvxkzbsskmiltqsoptivlsgknxkywaikcbaxfdoixjsx", "wpqwpnktbocedlfwsxkxbyqhixqpjlevyixaarumojamtw"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"lscozjmdsjwehokektmcrmujmterlxnhbftluhvuv", "rpsdofichtxulskmszribwdbfshfwvejllxdcjvvi", "smrazccwqdlffkczndjfiywfdbzjvimzsmhfixlgz", "cfibnlblfsvuhweulbxyirvnhxwijlofbkdvlwrih", "tatlewxofjppobtuimtcnkclettzumhmnubknjkgt", "kddnfuxeefhcyfhacfghigaagoxbboooonsagmolr", "lggvqmkjwgfysqrdmcscoycwshbizxsmxrfukqumf", "meudentdjdbvxnvwwlsphqgsitrijyataqseyuxit", "ucbhqgspfqyghyjludaauuapfdlkcntimhblqojzd", "wemsyifmrufqssywwgmxggadqogkrizmjcwnwfesk"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"gkverxxipmbwoevwhpvolnrsfafrkohfmknjeslgyvyssepls", "elcuebyrnrhdydzouubocadpjdidbfrysqyezfjoerrxzzjrz", "rbjyjaqjjlyvlesnxdnpcsoidmzovqekqsgfduzkpankhizqa", "ljylhfsqkbeqzavicoyauphthxpjsaaxkyrmlxponwmypvame", "aogxehfrwujrmniensugbzsjicbpxjryrryzqmoabgldevejq", "gbellobqmlxurznewqlendnlcaspnougrzjeesaafttkavqem", "nmiymlusdtrcolqqndkpshnrjdirtkbxfkzezledosannngcv", "sogczbexhfoeldoukpajojexkcihtxlsbrzvjgfkxbqrvbdhe", "nmbbzrnonmyhshmtbirqbrzvmvobaoddtukoakpberqlaywrd", "jyesgpgaovcohfhynfwzbhmcqkktphplvefcrihxawqzkqiuk"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"bjvwmoqbytwkiadrsvhgnwoqrtpjzxpwjtwlipvsbr", "kehqyctlitxccxxvjoattvxxfjdlseqhkrqtglpmpv", "pivicslylnkvoebcncsjfcmimlxprewtzpdyyjszzy", "qearhjnwaminbcsjidlpwplvmllsxjckprefqrkira", "bfmlyirhjnmjwpggjhswjfylcxpzlfqpxxwfcwxtwt", "byoctzknvnvugtrmtgpehoyczzxhpcaalfamnxpzjk", "akrafkdjaqpmnoodnznqrlhaswfmqbisbyincwnbek", "fwqmmcrddhcdskqvgbwbhjcdxpnwzqiqiezezsuwts", "yveqcbvwoguvtwvydcjwpqoupzofnairgcnxlnjrim", "swabzsmamxcrxrannadcemaofohulfsmproezrovcr"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"fnsna", "emrop", "epdkg", "tergs", "ttvjc"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"qkqrfcsusgpffrxmbzpeeuwwehw", "vzgrbbngjxolqwoidtpkhvfisza", "dggyrtuvbgqazgmxmhzaugggmkb", "uyjcntivluwtcgjaepdwlecdaen", "srmalbwzhymeidavnmmtzhucflj", "mwxevwjibfnkcwovuafhnihagji"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8333333333333334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"wikzqaojoxtocrdxf", "lgpugnymrwdhrrqqu", "rzuktdxkxximhanpd", "blsymwicllfzpxtxm", "rdopaqpogozgbepfu", "vjmooyngmxtppkzel", "ryerfbrdgxlqcffsc"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7142857142857143;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"t", "k", "v", "a", "l", "w", "b"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5714285714285714;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"pufohuonaheyevlivuhecdr", "igtzepuuwqfizueuvjehagh", "dbapygjxtkvziliafjspbfj", "aezitwcoxxqdznlujrcnynr", "kapzpsohxzgdbljtdkldphm", "oqsijuezxxrijfoifmytxsy", "blyxyyezoqukkwuorgwvfdp"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8571428571428571;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"tkzcfs", "ojyfeq", "xvahzo", "kxxikc", "tnxmfo", "pheqys", "gbjprb", "vwwtlz"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"zkmcbdod", "iypouxhr", "lbkqplay", "kcxhnhgc", "panzjwfx", "iilsuvwx", "azczjblc", "ntvahxlb", "xywdcxni", "fhrfvwls"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"vjghmnritvyswxo", "zywbrtqipfgryou", "jlenewmenfludzq", "jryzlxpcawofauh", "ljjovaxbghhzceo", "caglxmgryvayzbv", "nqtpstjzynbvwrm", "xolsyzsefgvdqzb", "xfodtoyqvowykso"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7777777777777778;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"sct", "oii", "rmi", "dap", "yba", "tsb", "ifp", "smu", "dwo"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5555555555555556;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"caaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaad"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"ozeexsuaihtuucqghqsjzqzugmaebvdrddyztehr", "lvjvwhqyeqpapbjusjtxfbcgfbsudrbhpydzryyp", "cigacdzesqanrlflmsxvhvtvtnzelbzlopcchdob", "edqogzausmjxzoagpsssxwnmfranrrswjsdgqcqv", "ptvbnhdcecegnnsofcxaqtizrkwvazfngvzgcsqb", "guiqkikpwwbzgpvtikaaxxjitqkqfughdlmjtdax", "gbubcxhxscszrcuzbggjmnzlzihftpmpmaamtxcp", "tuijqvgvbiwbyjhjmkmmqlmhayvdqhlkpptqqide", "yidryvjmpbjkdzhmhtoynhbwlbsehcbymltrddsj"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8888888888888888;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"abcdefgh", "ghghghgh", "fgfgfgfg", "efefefef", "ztztztzt", "tztztztz", "zyzyzyzy", "rrrrrrrr", "rererere", "abdczfgh"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"aab", "aba", "abb"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"top", "web", "cam", "buy", "now"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"a", "b"};
    Hangman42* pObj = new Hangman42();
    clock_t start = clock();
    double result = pObj->probability(words);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=6518&pm=3068
********************************************************************************
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define REP(var, hi) for (int var=0; var<(hi); var++)
#define REPD(var, hi) for (int var=((hi)-1); var>=0; var--)
#define FOR(var, lo, hi) for (int var=(lo); var<(hi); var++)
#define FORD(var, lo, hi) for (int var=((hi)-1); var>=(lo); var--)
 
typedef vector <int> VI;
typedef vector <double> VD;
typedef vector <string> VS;
 
/* ############################ THE REAL CODE ############################ */
 
int N,M;
VS w;
VD cache;
 
double go (int pos) {
 
  if (cache[pos] != -1) return cache[pos];
  int npos=0;
  REP(i,N) if (pos & (1<<i)) npos++;
  if (npos==1) REP(i,N) if (pos & (1<<i)) return cache[pos] = 1;
  
  double best = 0;
  
  FOR(l,'a','z'+1) {
    double tmp = 0;    
    REP(good,N) {
      if (!(pos & (1<<good))) continue;
      int inword=0;
      REP(i,M) if (w[good][i] == l) inword=1;
      int newpos=0;
      REP(i,N) {
        if (!(pos & (1<<i))) continue;
        int ok=1;
        REP(j,M) if (w[good][j]!=w[i][j] && (w[good][j]==l || w[i][j]==l)) ok=0;
        if (ok) newpos |= 1<<i;
      }
      if (newpos == pos) continue;
      if (inword) tmp+=go(newpos) / npos; else tmp+=(1-go(newpos))/npos;
    }
    best >?= tmp;    
  }  
  return cache[pos]=best;
}
 
class Hangman42 {
  public:
  double probability(vector <string> _w) {
    w=_w;
    N=w.SZ;
    M=w[0].SZ;
    cache=VD(1<<N, -1);
    return go((1<<N)-1);
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/