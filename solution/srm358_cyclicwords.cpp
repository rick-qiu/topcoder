/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7694
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

class CyclicWords {
public:
    int differentCW(vector<string> words);
};

int CyclicWords::differentCW(vector<string> words) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"picture", "turepic", "icturep", "word", "ordw"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"goran", "igor", "domagoj", "relja"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
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
    vector<string> words = {"ast", "ats", "tas", "tsa", "sat", "sta", "ttt"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"aaaa", "aaa", "aa", "a", "as", "sa", "mmm", "kkk"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"mis", "mi", "je", "polje", "popasel", "ne", "im", "ljepo", "oljep", "sim", "smi"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"aaaa", "aaa", "aa", "aaaa", "aaaaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"ab", "na", "ba", "nb", "bna"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxxyzz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxxzyz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxxzzy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxyxzz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxyzxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxyzzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzxyz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzxzy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzyxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzyzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzzxy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxxzzyx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyxxzz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyxzxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyxzzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyzxxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyzxzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxyzzxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxxyz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxxzy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxyxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxyzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxzxy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzxzyx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzyxxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzyxzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzyzxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzzxxy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzzxyx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxxzzyxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxxxzz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxxzxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxxzzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxzxxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxzxzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyxzzxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyzxxxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyzxxzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyzxzxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxyzzxxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxxyz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxxzy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxyxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxyzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxzxy", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxxzyx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxyxxz", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxyxzx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxyzxx", "aaabbcdddeeegghiijkkmmmnopqqrrrrssstuuvvwwxxzxzxxy"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"mnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjka", "idjlhokswcdjclfpqgjufaeumudzftzanmqtmoyknjqvezewqx", "jpiunqsmawdtoezackljtjfnguemxyqczomqwvezjqdhfkldfu", "qukmaadwqgsdlqzelmuecfojfnvjjnzwczfyoepmidthkxqutj", "yzpgedhudscqmofwnalmojkudceqlvzuwjfnketqtaimjqzxjf", "fqzcwagyezevnomdjcsjzlkfeutdtpquwnifuxjmakolmdqjhq", "omnkqflqleitgqjjoajnquecfpuyumejkdszxvfcamwzwddtzh", "efpduqstydezqljigwqjfdzwjtncklaoanuxqhmejucfmmvkoz", "viulzumqkxudnjjczksmtaeejcjatqwfzpdfdgefmnqoqhloyw", "ajkzpdqehldojqxfmqutnmmuzonwteqsgvzjlakceffcydwiju", "xlhiwvunojgztmjkclaqyokznujpdqdfdctszuqaqefemejwfm", "ccthujvkmnmplldzumdgfajuytwzqeqnazjxjeoqfekqsdwfio", "nnmvcozypfmujmzfdeodjikqwqjewsxjlckqhtfuqzgeatdlau", "ccjmwuujntoqowdjeqqvjfikemzulkxaplfsyenzftdzmhqadg", "ojpcexymavuftuzzeljqclgkeqdjtazounhddfsmfwniqqmwkj", "wvqommdquloatupzqgickjelnjamwzujfstkeydjfzxehfnqcd", "chzjyloucimdmwefauqdoenqzqmanzsqjwvugjtkftdkjflpxe", "qytdfqjeldshgnizuxzmefkeuwozvjwkcmucqqfptlnojadjma", "wknjocdwqjfdnzqutatehkglqemecxjmidfovufjpmzuzasyql", "niyoefnqdaekvcjjwkuqelzpaztgjfmzcqmxdmtfuulhowsjqd", "duyfvaejtkuezwjqedqmfwpmmaluocihtkzjcgsfqxndzojlqn", "vcmxpfyjkznofeegzuuthksqljqmtmnqajodacuzfwijdldeqw", "dozejjwqwzhaypcdmsjiamvxtzflfqludjetnqequknoukgmcf", "xmacfqfeuwzmjhpeewdnzkdyuvdoujcqlzqsimatjgojkqnlft", "ufdnqujegccxkmnsmzthltaqeijepoqwzfyvlqjjfzwuoadkdm", "qqvapmqdujfwfxmusdnfgwiazocteyzemqkojljzdeunhctklj", "efjznjtmdkosouunaffmedmzgytehqqzqlpxujwlicvcdjwkqa", "jctanuzoctuslvojydqelqzfjxwdpfmunkmdzeeqmajikgqhfw", "qfgxwlkmdceqdtvmetnhlymupzqjkcjoewffziouqjsjzaadun", "hzatyaecmjnpxmiuqqlwjkkozvqtqzffmuuefncwlesjddojdg", "zlmnstjcqacwqfegewyfodkqapvjhzuqjlimjtnfudoezkxmud", "noheyjmlzzftjvmcuaqjdtwwaiqzeucqxngddpfoqfmesujkkl", "kqynumdpqteduojslefqemfchgjiclqzzozkdjwawvjxmufnta", "vefqimsthjdjqwzpuxzlykjdguctnuozofanmcajmkleewfdqq", "dqlskufthjqvewxdijjemzncqencazyugzwalqdffmotukmjop", "jekuyvusfmfeoceajthdugxmkwfzjlzwqlmacjidnqtpzqoqdn", "qfioqltcjmjxhazmmqweekejqdnltunzjasuwgvpzcdkfydouf", "luyaojtzzwgdiacfwsmmdqnoevjehucqtzleqfqudnpjxmjkfk", "ywqhxacjmfzvldsjmuqlnfcuewpojukokzzjqdqeetgadfimnt", "qxdjatdaimwhzyeueulkzpcnjguozlffkmctnoqwqveqsdjmfj", "gfvncaowajdefkujqjtiedjkolhmqqmzqsxzudcwutfnlzempy", "fszkldzywqifueuogfzujacewpjqonjxmmdmqqavecktdljnth", "uykqzqmwgljnltanpeafqdcmjioquvejfzjemfkhoucxstdwzd", "nlhovafqkuscffeitjpgkxzmdmjuzdtjdencaqqlmowjqywuez", "xjmzfumfmacoeqnlpjqtsddjwjhltzwqnzekkqacyuidoefugv", "teqdsfeqjjkhxpmmfvtdqzweuuqoonallmnczjdcazkgjifuyw", "jjpdegcmqkkqlunzjxyodhtzaeiwuzffvmcoqulwadqtnfmsej", "ajlwzczzmhmdjqdyfxannqjteldmuksqfiuegkuowjqtpcoefv", "viwngjzfeqekalcdnazojlkmmmseujdftxqoufpcujqtzdywqh", "semiqydujeufguktcqjwanhpfdzlqtcdwqfojvezxnamolkzmj"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"nfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkam", "fztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamn", "ztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnf", "tpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfz", "pnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfzt", "nejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztp", "ejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpn", "jgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpne", "gfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnej", "fzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejg", "zofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgf", "ofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfz", "fczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzo", "czqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzof", "zqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofc", "qvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofcz", "vlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczq", "layustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqv", "ayustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvl", "yustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvla", "ustoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlay", "stoxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayu", "toxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayus", "oxudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayust", "xudheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayusto", "udheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustox", "dheieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxu", "heieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxud", "eieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudh", "ieqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudhe", "eqdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudhei", "qdljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheie", "dljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieq", "ljmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqd", "jmqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdl", "mqwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdlj", "qwdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljm", "wdcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmq", "dcwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqw", "cwkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwd", "wkumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdc", "kumqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcw", "umqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwk", "mqjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwku", "qjjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkum", "jjkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumq", "jkamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqj", "kamnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjj", "amnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjk", "mnfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjka"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"nfztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkam", "fztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamn", "ztpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnf", "tpnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfz", "pnejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfzt", "nejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztp", "ejgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpn", "jgfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpne", "gfzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnej", "fzofczqvlayustoxudheieqdljmqwdcwkumqjjkamnfztpnejg", "qemwsfqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujc", "emwsfqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcq", "mwsfqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqe", "wsfqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqem", "sfqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemw", "fqkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemws", "qkmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemwsf", "kmaqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemwsfq", "maqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemwsfqk", "aqohyzpanetgwmjzuuodxezfkctlijqljddfvnujcqemwsfqkm", "zafcdaklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdg", "afcdaklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgz", "fcdaklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgza", "cdaklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzaf", "daklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafc", "aklqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcd", "klqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcda", "lqtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdak", "qtfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdakl", "tfzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklq", "fzzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqt", "zzqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtf", "zqewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfz", "qewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzz", "ewjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzq", "wjhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqe", "jhojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqew", "hojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewj", "ojqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjh", "jqijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjho", "qijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhoj", "ijucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojq", "jucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqi", "ucfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqij", "cfdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqiju", "fdmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqijuc", "dmueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqijucf", "mueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqijucfd", "ueelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqijucfdm", "eelnvunmwsokqyjpmtxdgzafcdaklqtfzzqewjhojqijucfdmu"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"wszojxenmqrbidckuawcgfbtagosozdygtdxkggbjayhznjspk", "ebsasnaoyihcqkjdkftdcgojxgzwxsyugpdnjozzgbagmktwrb", "bsasnaoyihcqkjdkftdcgojxgzwxsyugpdnjozzgbagmktwrbe", "smptrokfkguobsgogazntweiygxczgkzdjddjsbybnhqcxawja", "mptrokfkguobsgogazntweiygxczgkzdjddjsbybnhqcxawjas", "ptrokfkguobsgogazntweiygxczgkzdjddjsbybnhqcxawjasm", "sogkgczefjaxnnabkydotzmhadbcbsywoigdxgpktwusrjjgqz", "ogkgczefjaxnnabkydotzmhadbcbsywoigdxgpktwusrjjgqzs", "gkgczefjaxnnabkydotzmhadbcbsywoigdxgpktwusrjjgqzso", "jnbfxtgcxdnogkazssiygkwgyhjbwbrcsodagmetkaouqzdpjz", "nbfxtgcxdnogkazssiygkwgyhjbwbrcsodagmetkaouqzdpjzj", "bfxtgcxdnogkazssiygkwgyhjbwbrcsodagmetkaouqzdpjzjn", "pmrsezqsobjxbnghgywbjjyfgddxzccsdkawnoktgotaziuagk", "mrsezqsobjxbnghgywbjjyfgddxzccsdkawnoktgotaziuagkp", "rsezqsobjxbnghgywbjjyfgddxzccsdkawnoktgotaziuagkpm", "gsssawophytodegijkxzkaqnbjxjbrugbzgtngayokmcwzcdfd", "sssawophytodegijkxzkaqnbjxjbrugbzgtngayokmcwzcdfdg", "ssawophytodegijkxzkaqnbjxjbrugbzgtngayokmcwzcdfdgs", "jwgwpjxkjcsiqnobtadzbsgxsbggnoatkzyyohkgdcfrzmedau", "wgwpjxkjcsiqnobtadzbsgxsbggnoatkzyyohkgdcfrzmedauj", "gwpjxkjcsiqnobtadzbsgxsbggnoatkzyyohkgdcfrzmedaujw", "ojepyrswwgsjktbaaqiohxkunzjcdbdtxczmbsggoanfgzgkdy", "jepyrswwgsjktbaaqiohxkunzjcdbdtxczmbsggoanfgzgkdyo", "epyrswwgsjktbaaqiohxkunzjcdbdtxczmbsggoanfgzgkdyoj", "nsdigajsyjzkbegggydzockawogxquzkradbcnbxoswtmhfptj", "sdigajsyjzkbegggydzockawogxquzkradbcnbxoswtmhfptjn", "digajsyjzkbegggydzockawogxquzkradbcnbxoswtmhfptjns", "dstasgbxjaygkhgdsijgcwydnpctxjrofgzkbwonoquzzkameb", "stasgbxjaygkhgdsijgcwydnpctxjrofgzkbwonoquzzkamebd", "tasgbxjaygkhgdsijgcwydnpctxjrofgzkbwonoquzzkamebds", "yewgtdjsbzngaodkntxmsyaxqzkuzwpcofsdcjhkgjiogbabrg", "ewgtdjsbzngaodkntxmsyaxqzkuzwpcofsdcjhkgjiogbabrgy", "wgtdjsbzngaodkntxmsyaxqzkuzwpcofsdcjhkgjiogbabrgye", "ozxfhxjsberqccoddtypwmgagtayzagskjouniwksgzbdngjkb", "zxfhxjsberqccoddtypwmgagtayzagskjouniwksgzbdngjkbo", "xfhxjsberqccoddtypwmgagtayzagskjouniwksgzbdngjkboz", "kgxdadnpszrdewyomgjtfwsynjccgakshxtakgqjzbbugzoobi", "gxdadnpszrdewyomgjtfwsynjccgakshxtakgqjzbbugzoobik", "xdadnpszrdewyomgjtfwsynjccgakshxtakgqjzbbugzoobikg", "hoijjkfkscaggyboduzasxdtnwodygjnzgbxctzbmrqwpsakge", "oijjkfkscaggyboduzasxdtnwodygjnzgbxctzbmrqwpsakgeh", "ijjkfkscaggyboduzasxdtnwodygjnzgbxctzbmrqwpsakgeho"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"liqymodrylkzwkytwddhxezwbupkpmusfleoosnlhbgggolajy", "wysetqujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdys", "ysetqujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdysw", "setqujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswy", "etqujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswys", "tqujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswyse", "qujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswyset", "ujyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswysetq", "jyewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswysetqu", "yewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswysetquj", "ewpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswysetqujy", "wpgnylgzaiomwdukmlpdxrkobhhzboofklllgdyswysetqujye", "ldstqfoyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxk", "dstqfoyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkl", "stqfoyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkld", "tqfoyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxklds", "qfoyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldst", "foyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstq", "oyllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqf", "yllozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqfo", "llozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqfoy", "lozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqfoyl", "ozomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqfoyll", "zomwkdynloeuuziplhbmjaggywdgwsyebhprkxkldstqfoyllo", "dbpoguikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkl", "bpoguikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkld", "poguikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldb", "oguikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbp", "guikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpo", "uikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpog", "ikyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpogu", "kyszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpogui", "yszkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpoguik", "szkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpoguiky", "zkghploetllfsxhyqoyzmdenwragjoldwywubmkldbpoguikys", "kghploetllfsxhyqoyzmdenwragjoldwywubmkldbpoguikysz"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"fdqpidnitmrpbgbolxbfjnjazjwwnbslecteboilfmonzgbfod", "fadmftiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncol", "admftiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolf", "dmftiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfa", "mftiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfad", "ftiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfadm", "tiblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfadmf", "iblrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfadmft", "blrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfadmfti", "lrodpnbjjtgzsffbplnowgbbmebqoxdiiwnzejncolfadmftib", "pflnelnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgniblj", "flnelnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljp", "lnelnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpf", "nelnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpfl", "elnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpfln", "lnojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpflne", "nojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpflnel", "ojfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpflneln", "jfdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpflnelno", "fdtmnizobfbqtjarcpdwdixobeogmwzbfsbgnibljpflnelnoj", "ifpegwxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbd", "fpegwxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdi", "pegwxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdif", "egwxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifp", "gwxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpe", "wxtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpeg", "xtmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpegw", "tmepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpegwx", "mepiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpegwxt", "epiwqjbdlnfbbnmztconfrzfodsolnogbajjbilbdifpegwxtm", "toqbbzfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofo", "oqbbzfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofot", "qbbzfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofoto", "bbzfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoq", "bzfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqb", "zfanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqbb", "fanopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqbbz", "anopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqbbzf", "nopbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqbbzfa", "opbdcbnidireslpbefbtglijnlfndmzmwxjgwjofotoqbbzfan"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"acbcbcacbacbcbaabbcaacbbabcbcbaacababccaccccbccbbc", "ccacacaaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbccc", "cacacaaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbcccc", "acacaaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbccccc", "cacaaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbccccca", "acaaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbcccccac", "caaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbcccccaca", "aaaaabbacccbbcabbcbbaccbbbbcbbcbcacbcaacbcccccacac", "babcccccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabca", "abcccccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcab", "bcccccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcaba", "cccccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcabab", "ccccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcababc", "cccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcababcc", "ccbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcababccc", "cbabcbbacbccacbbaccacbcabcacbaabbcccbbaabcababcccc", "accacbbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccb", "ccacbbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccba", "cacbbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbac", "acbbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbacc", "cbbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbacca", "bbbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbaccac", "bbbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbaccacb", "bbaaaccabccabcbcaccbcbccbcacbcaabcbabbbaccbaccacbb", "accbcbbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaa", "ccbcbbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaa", "cbcbbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaac", "bcbbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaacc", "cbbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaaccb", "bbcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaaccbc", "bcaabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaaccbcb", "caabccacbbcbcacbabbcaccccbccabbabcbcbcbaaaaaccbcbb", "cbccbccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacc", "bccbccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaaccc", "ccbccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccb", "cbccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccbc", "bccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccbcc", "ccabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccbccb", "cabacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccbccbc", "abacbacacbacccbbcbbbaacbabccbcbbacbaacbaacccbccbcc"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"bcabbacbaabbabbaabbaccccacbcabcababbcacabbabbcbaca", "cacabbabbbbabcbccbcbacbbabbcbabaabaacaaacccacbbbaa", "ccaabcbaccbabcbbaababaabbbbbaaacbccbcaabbbbbcacaac", "cabcaacbabbbacbcbbbabacbbaacbcabbaaabaaacccabccbbb", "aabbbccbcabcbbaaabcccaabbcbbcbcbbcbaaacaabbcbbaaaa", "cacbabbbbcaaabaccaababbcabbabbccabbbabacacaccbabcb", "bbacbbacbcccbbabaabaccbcabbaabaaaabaababbcccbbaccb", "accababcabbbacabbbbacaccbaacaabacbacbbacccbbbbabba", "bcabcabcaacbcabbaaabacabbaaccbbbccbbbbcaccbabababa", "cababbbcbcacaacbabcbbcbaabacbbaabbcaabcbaccaabcbab", "bbaaaccbbabbabcbbacacacaabaabcbbbbacbccabacbcbcaba", "cacababcbacaabbababaacbabcbabaacbcbababbcbccbcbbca", "cbbabbacacabbaabaaacaacccbbabcbacbcaabcbccbbbbabab", "caaacaccccacbcbaaabbaabbbbababccbbbbbaabbcbbcbcaaa", "cabcbbaaabaababbbbbabccacababcbcccccbaacbababacabb", "bbcaaacbcbacbbcbabbabacababbccbbbaabaccacabcbabaac", "ccabbaabbbacaacabbbccbbcaabaabbcbbacacbcbbccabbaaa", "acabaacabccbacbaacabbbababbbccbbabccacaacaacbbbbbb", "bcbabaccbbaacbabbbcaccbacbbaaaacccabbacabaabbacbbb", "acbbbbabbbcaaaabcbabacaabcabbacbbcbbcbcaaaacbacccb", "aaacaabaccbbbbbabbaaabcacccabbbbcbaccbbbbabcbcacaa", "acabcbabccacaacbbbbaabcbabbaaacababcbcbaabcbbccbba", "cbabaaabbabcacaabbabccabbbbabbbccbcabcbaacaccabbac", "abaabccaaaabbcbbccbaacabbbacccbbabcabcbaabcbbbbcaa", "bbaababbbaccccccabcbacabaabbacacaabcbbcbcabbabbaba", "aaaacbbabbcabacacbbbabbbbbacbbacacbcabbccbacccbaaa", "cbaccabababbaacabbbbcacbbabccacbccbabababccbbaaaab", "bbbaacaaacbacacababacbbbabaacbbbbccbcaacbbaacbcbbc", "bacbcbbbbcacaaaaacacbbcaabacccbbcaacbcabbbbabbabab", "acbcbcbcacbabcbabcabbbbacaccabcbaacabbbbabbaaabaca"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"abbbbbbbbabaabbbbbaaaababbbaabaabaababaabababaaabb", "bbbaaabbababbaabaaabbbababababbabaaaabbaaabbbabbbb", "abbababaabbabbbbaabbbbbaabbababaabbaaaaaababbbbaba", "aabbababaabababaabbbaaabbbababbbbbbababaabbbbaaaba", "aabbbbabbaabaabbaabbbbbbbbabaababbabababbaaabbaaaa", "babbbabaabbabaaaabaababbbbabaaababbbabbbbabaaaabbb", "abbbaaabbabbaabbabbabaabbabababbbabaaaaabbaaabbbbb", "aabbabbbbabaaaabbbbabaabbbaabbaaaabbabbbaababbabab", "baabbbaababbabbaaababaabbbababababaabbbbbbbaaababa", "abbbabababbaaabbababaaabbbabaaabaaabbbbbababbbabba", "babbbbbabbabbabbbbaabaaaabaaaabaababbbbaabbaababba", "babaabbaaabbbbabbbababbbaaaaabbbbbbaaabbbabbbaaaaa", "bbabbbabbaabaabbbbbabbaaaaabbbbabbaaabbabbaaaabaab", "abbabbabaaabbaaaaabbbabbabbaabbbbbababaabababaabbb", "baabaaabaabbabbbbbbabaabbbaaaabbabaabbaaabbbabbabb", "ababbaabbbbaaabaababbbaaaaababababbbbbbbbabbaababa", "bbaaaaabbabaabbbbabaaababbabbbbbbbabbabaaaaaaabbbb", "bbbbbbaababbaaaabaaabaaabbababbabbbabbaababaababbb", "aabaabbaababbaababbaaaabaabbbbbbbbabbbbababaabbaab", "bbabbaabbbabbbabbaaabaaaabaaaababbbbbbbbbabaaababa", "abaaababbbbbbaabababbbabbabaababaabababbabbabbaaab", "aaaabbbabbabbbbbbabbbbbabaababbbbabaabbaaabaaabaaa", "aabababbaabbbbabbbbabbbbbaaaaaababaabaaabbabababbb", "bbbaabbabbaaaaaababababbbaaabbbbababbbabababbabaab", "bbbbaabaababbbabbabbbabaabbaabbaaaababaaaabbbababb", "bbbaaaaaababbbbbbbaaabbbbbaaabbababbaababbbaabaaab", "aabbbbbbbbbbaababaababababbbabbaaaaabaaabbbabbaaba", "baabbabbabbbbaaabaabbbabaabbabbabbbaaaabbaaabbbaba", "ababbbabbaabbabbbabaabaabaabbbabbaaaaababbabbbbbaa", "baabbabbabbbaabbbababababbbaaaaabbabababbabaabbaba", "aabbaabbabaabbbabbbbabaaaaabaababbbabaaaabbbbabbbb", "aabbbbbabbbabababbbabbbbbaabbbbaaaabaaabaaaaaabbab", "baaabbbabbbbbbaaaaaabbaaabbaaaabababbaaabbbbbbbbab", "baababababbbabbabababbbaaababbbabaababbabaabbabbaa", "bbabbbbabaaaaabbbbbaabbbbbababaabababaaabababbaaab", "aabaababbababbbbabbbbabbabaababbbabbaaabaaababaabb", "bbbababbbabbbbbaaababbbbbaaaaabbbabaabaabbabbaaaaa", "abbbabbbabbaabababaabababbaaabbaaabbaabbbabbbbaaab", "aabbabbbabbbabbbabbaabababaaabbabbbbaaabaaaabaabbb", "baabbbbabaaaabbbbbaabababbbbbbaabbbaaaaabbaabaabba", "abbabbbaabbabbbaaababaabbbaaabbbbbabbababaabaaabab", "aababbbaaabaabbbbbbbbabbbaabaabbbabbabaababbabaaaa", "abaababbbababbaaabbbababbaaabbbbbabaabbbaaabbaabab", "bbababbababaaabaaabbaaaabbbbabaabbbabaaabbbbbbabba", "aaabababaabbbaaaabbabaabbaabbbabbbababbababbababbb", "abbabaabbabbbabaabbababbbbbaabababaaabaababaabbbba", "babbabbbabbbbababaabbaaaabbbabbababbababbaaaaababa", "baabbbbaababaabbabaabbaababaaaaabbbabbbbbaabbbbaba", "bbababbbbabbbabbbbabaaaaababaabaaaaabbbbaabbaabbba"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
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
    vector<string> words = {"qopoqopmnmpqpnmmopomqonmonqpnompomppomppnnqoopqqpo", "poonppqooopommmnmqqqmpppopmpmqmqnoopoqnonpomqnnopp", "oonppqooopommmnmqqqmpppopmpmqmqnoopoqnonpomqnnoppp", "onppqooopommmnmqqqmpppopmpmqmqnoopoqnonpomqnnopppo", "nonqmoqnoonpoooonnppmqpmomoqqppmpqppooppmqomqpmpmn", "onqmoqnoonpoooonnppmqpmomoqqppmpqppooppmqomqpmpmnn", "nqmoqnoonpoooonnppmqpmomoqqppmpqppooppmqomqpmpmnno", "qmoqnoonpoooonnppmqpmomoqqppmpqppooppmqomqpmpmnnon", "moqpooqnqqpmoqoqpmponpmmpmmnpnpqopoopnooopmopmnnqp", "oqpooqnqqpmoqoqpmponpmmpmmnpnpqopoopnooopmopmnnqpm", "qpooqnqqpmoqoqpmponpmmpmmnpnpqopoopnooopmopmnnqpmo", "pooqnqqpmoqoqpmponpmmpmmnpnpqopoopnooopmopmnnqpmoq", "qomqopoqqpmoompqoppomqoopnnmnqnnopppnopppommmqpnom", "omqopoqqpmoompqoppomqoopnnmnqnnopppnopppommmqpnomq", "mqopoqqpmoompqoppomqoopnnmnqnnopppnopppommmqpnomqo", "qopoqqpmoompqoppomqoopnnmnqnnopppnopppommmqpnomqom", "pnmpnonqqopmppoqqmqoppopommopoonqmnnppomonpoqmopmq", "nmpnonqqopmppoqqmqoppopommopoonqmnnppomonpoqmopmqp", "mpnonqqopmppoqqmqoppopommopoonqmnnppomonpoqmopmqpn", "pnonqqopmppoqqmqoppopommopoonqmnnppomonpoqmopmqpnm", "pmopnpqnopoqppmmqqopmnnqoqonpmmopmoomnmqoooppoqppn", "mopnpqnopoqppmmqqopmnnqoqonpmmopmoomnmqoooppoqppnp", "opnpqnopoqppmmqqopmnnqoqonpmmopmoomnmqoooppoqppnpm", "pnpqnopoqppmmqqopmnnqoqonpmmopmoomnmqoooppoqppnpmo", "oqooooppqonmmpppqmpqoqqopmmommnpopoqpnopomqnmppnnn", "qooooppqonmmpppqmpqoqqopmmommnpopoqpnopomqnmppnnno", "ooooppqonmmpppqmpqoqqopmmommnpopoqpnopomqnmppnnnoq", "oooppqonmmpppqmpqoqqopmmommnpopoqpnopomqnmppnnnoqo", "pnnpppoooooppqopmmmpmoomnoqqqmpmmpmonnoppqnqoqnqpo", "nnpppoooooppqopmmmpmoomnoqqqmpmmpmonnoppqnqoqnqpop", "npppoooooppqopmmmpmoomnoqqqmpmmpmonnoppqnqoqnqpopn", "pppoooooppqopmmmpmoomnoqqqmpmmpmonnoppqnqoqnqpopnn", "mpomnnpqpnompmqpnppqoppoooqopomqqnonqoomqpopommpnm", "pomnnpqpnompmqpnppqoppoooqopomqqnonqoomqpopommpnmm", "omnnpqpnompmqpnppqoppoooqopomqqnonqoomqpopommpnmmp", "mnnpqpnompmqpnppqoppoooqopomqqnonqoomqpopommpnmmpo", "oppooopnoqqqppmpnqmqnnnppompmqppmoqmompomnoopoqnmo", "ppooopnoqqqppmpnqmqnnnppompmqppmoqmompomnoopoqnmoo", "pooopnoqqqppmpnqmqnnnppompmqppmoqmompomnoopoqnmoop", "ooopnoqqqppmpnqmqnnnppompmqppmoqmompomnoopoqnmoopp"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"xyxxxxyyyxyyyyyyxxyxxyyyxxyyyyyyyyyyxxyxxxyxyxxyyy", "xxxxyyyyxxyyyyyyyyxxxyyyxyyyyyyyyxxxxyxyxxyxyxyyxy", "xxyyyxyyyxxyxyxxxyyyyyxxyxxyyxxyyyyxxxyyyyxyyyyyyx", "xyyyxyyyxxyxyxxxyyyyyxxyxxyyxxyyyyxxxyyyyxyyyyyyxx", "xyxxyxyxyyyxxxxxyxyyxyyyyyyxyyxyyxyxyyxyxyyyyxyyyx", "yxxyxyxyyyxxxxxyxyyxyyyyyyxyyxyyxyxyyxyxyyyyxyyyxx", "xyyxxyxxyyyyxxyxxyyxyyxyxxyyxxyyyyyxyxyyxxyyxyyyyy", "yyxxyxxyyyyxxyxxyyxyyxyxxyyxxyyyyyxyxyyxxyyxyyyyyx", "yyxyxxyxyxyyxyxxyxyyxyyyyyxyyyxyxxxyxxyxxyyyyxyyyy", "yxyxxyxyxyyxyxxyxyyxyyyyyxyyyxyxxxyxxyxxyyyyxyyyyy", "xyyxxxxxxyyxyyxyyyyyyyxxxyyyyyyxyxxyxyxxyyyxyxyyyy", "yyxxxxxxyyxyyxyyyyyyyxxxyyyyyyxyxxyxyxxyyyxyxyyyyx", "xyyxyyxxxyxyyyxyxyyxxyyyxyxxyxxyyyyyyyyxyyxyyxyxxy", "yyxyyxxxyxyyyxyxyyxxyyyxyxxyxxyyyyyyyyxyyxyyxyxxyx", "yyyyxxxyxyyyxyxxyyxyyxyyxxxxyxxyxyyyxyyyyxyyyyyxyx", "yyyxxxyxyyyxyxxyyxyyxyyxxxxyxxyxyyyxyyyyxyyyyyxyxy", "xyyyxyyyyyxxyyyxxxyyyyxxyyyyxyxyyyxxxyyxxxyxxyyxyy", "yyyxyyyyyxxyyyxxxyyyyxxyyyyxyxyyyxxxyyxxxyxxyyxyyx", "yxxyxyyxxyyyyyxyyyxyyxxxyyyxxyyxxyyxxxyyxyyyxyyyyx", "xxyxyyxxyyyyyxyyyxyyxxxyyyxxyyxxyyxxxyyxyyyxyyyyxy", "yyyyyxyyyyxyyyxxxyxyxxxyyyyxxyyxyyyxxyyxyxyxxyxyxy", "yyyyxyyyyxyyyxxxyxyxxxyyyyxxyyxyyyxxyyxyxyxxyxyxyy", "yxyxyxxyyxxyyxyxxxyyyyxyyyyyxyxyyyyyyyyyyxxxxxyxyx", "xyxyxxyyxxyyxyxxxyyyyxyyyyyxyxyyyyyyyyyyxxxxxyxyxy", "xyyyyxxxxyyyyyyyyyyyyyyxyxyxyxxyxyxyyyxyxxxyyxyxxx", "yyyyxxxxyyyyyyyyyyyyyyxyxyxyxxyxyxyyyxyxxxyyxyxxxx", "yyyyyyxxxxyyxxxyxyyxyxyyxyxyxyyyyxxyxxyyyyyxyxyxyy", "yyyyyxxxxyyxxxyxyyxyxyyxyxyxyyyyxxyxxyyyyyxyxyxyyy", "yyyyxyyyyxxxxxxyxyxyyyyyxxyxxxxxyyyyyyyyyxyyyxxyxy", "yyyxyyyyxxxxxxyxyxyyyyyxxyxxxxxyyyyyyyyyxyyyxxyxyy", "xxxxyyyyxyyyyxxxyyyyyxyyxxyyxxyxxyyxyyyxyyyxyyyyxx", "xxxyyyyxyyyyxxxyyyyyxyyxxyyxxyxxyyxyyyxyyyxyyyyxxx", "xyxxyxyxxyxyyxyxyyyyyxxyyyxyyyxyyyyxyyxxxyyyyxyxxy", "yxxyxyxxyxyyxyxyyyyyxxyyyxyyyxyyyyxyyxxxyyyyxyxxyx", "xyxyyyyxyxxyxxyyyyyxyyyxyxxxyyyyyyyyyxyxyyxxyyxxxx", "yxyyyyxyxxyxxyyyyyxyyyxyxxxyyyyyyyyyxyxyyxxyyxxxxx"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"xyxxxyxyyxxyyxxxyyxxyxyyxxxyxyxxyyxyyxxxxyyyxxyyyy", "xxxxyxxxxyyyxxyxxyxyxyxxyyyxyyxxyyyxyxxxyyxyyyxxyy", "xxyxyyyxxxxyxxxyxxxyxyyyxyxxyxyyxyxyyxyxyxxyyyxxyy", "xyxyxxyxxxyyxyyxxxyxyyxxyyxxyyyyyxxxxyyxxyxxyxyxyy", "yxyxyyyyyxyxxyyxxxyyxyyxxxxyxxyyyxxxxyyxyxxxxxyxyy", "xyxyxxxyxxxyyxxxxyyyxyxyxxxxyxxyyyyyyyyxxyxyyxyxyx", "xxyyyyxxxxxyyyyyyxyxxyxxxxyyxxyxxxyxxxxxyyyyyyyxxy", "yyxxxyxyxyxxyyxyyyyxyyyxyxyyyyxyxxxxxxyxyxxyxxxyxx", "yxxxyxxxxyyxyxyyxxxyxyxyxyyxyyxyyxxyyxxxyyxyxyyxyx", "yyxxyyyxxxyxxxxyyxyxxyxyxxxxyxyxxyxyxxyxyyyxxyyyyy", "xxyxyyxxxxxyyxyyxxyxxxxxyyyyyxyyyxxxxxxyxyyxyyyxyy", "xxyyxxyxxxyxxxyyyyyyyxxyxyxxxyyxyxyyxxyyxxxxyyyyxx", "xxyxxyyxxxyxxxyxxyxyxxyyyxxyxyyyyyxxyxxxyxyxxyyyyy", "yyyyyyxxxyyxyyxyxyxyxxxyyxxxxxyxyyxyxyxxxxxxxyxyyy", "yxyyyxxxxyyxyxyxyxyxxyxyxyxxxxxxyyyyyxyxxxyxyyyxxy", "yxyxyyxyxxxyxxxyxyyxxyyyxyxyyxyxyyxxxxxyxyyyyyxxxx", "yxyyyxxyxyxxyxyxyyxyxxxyxyyyxxyyxyyxyxyxyyxxxxxxxy", "xxyxxyxxyyyxxyxyxyyyxyyxxyxxxxxyxxyyxyyxxyxyyyxyyx", "yyxyxyxxxxxyyyxyyxyyxyyyxxyxxxyyyxxxyyxyyxyxxxxyxx", "xyxyyxxxxxyxyxxyyxyyyxyxxyxxyyxxxyyxyxyxyyxxyyxxyy", "yxyxxyyxxxyyyxyxxyxyxyxyxyxxyxyxxyyyyyyyxxxyxxxxxy", "yxyyyxxxxyxxyxyxyyyxyxxyxyxxxxxxyxyyxyyyyxyxxyxxyy", "yyyyxxxyxxxxyxyyyxxxyyxxxxyxyxyxxyxxyyxyxxxxyyyyyy", "xyyxxyyxxyxyyyyxxxyxxyxyyyyyyyyyxyxxxyxxxxxxxxxxyy", "xyxyxxxyxxxyyxxxxxyyyyxyyyyyxyxxyxyyyyxyxxyyxxxxyx", "xyyxyyxxxxyxyyyyyxxxxxyyxyyyyxyyyxxxxxyxxxyxxyyxyx", "xxyxxyyxxxxxyxxyyyxyyxyyxyyxyyyxyyyyyxxyxxxyxxxxxy", "xyyxyxyxxyxyxyyxxyxxyxxyxyxxyxyyyxyxxxxxyxyyyyxyxy", "yxyxyxyxxyyyxyyxyyyxxxxyxxyyxyxxyyyyyxxyxxxxyxyxxx", "yxyxyxxyxyxxxxxxxyyyxyyyxyyxyyxxyxyxyyxyxxyyxxxyyx", "xyyxyxyyxyxyxxxyxxyyxxyyyyxxxyyyyxyxyxyxxxyxyxxxxy", "yxyxyxyxxyyyxxxxyyyxyyyyyxyxxxyxxyyyxxyxyxxxxyxxyx", "yxxyxxyyxyxyyxxyxyyxyxyxxyyxyxxyxxxxxyxxyyyyxyyxyx", "xyyyyyyxyxyxyxxxxyxxyxxxxyyyxyyxyxyyxxyyxxyxyxxxxy", "yxxxxxyxyxxxyyxxyyyyxxxxxxyyyxyxyyxyyyyxxxyxyyxyxy", "xyxxxxyyxyxxxxyxxyyyxyyyyxyxyxxxyxxxxyyxyyxyxyxyyy"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"xzjoilodwskqyflmjovksvoyrrhmeltqloyxwidyxjwspkgwbg", "qlwxyigljgjkdrsmmpjlxydwoozoyithyvkooxqslrefwvkswb", "gyijqemrzwglooksvslowjlqpkmodxshytwblrxwodvxkyjyif", "txjirwkhsrdsfvpbkyvjoqywmlxxizwooolysklwmeljydoqgg", "dohekyqsodwlrilvgjxqikxokbrlysomjgwopjzymsftvlxwyw", "gboxzojldwesimwjqxylwkyoskiofvsltmldyqkygxvrjwphro", "jpglxikkoolxxhokdmzrlyyqijyrlwseswojsvowmwfbgyvtdq", "ojztlsbkoyvprflwsoilmygwdwhsqxwmlkyxyxevjorkoiqgdj", "rswozlbydeygiqkqyglfsxwooxmxwyrvljodlpktiwjmhosvkj", "xdmbhroyviolfxqjyqmypsoegjwxkjosvwtwsrwdloglzylkik", "iqzpobjoxlvrgfkrytmygwsjsjvdhwlodqkwkoyoywlemlxsix", "vqyokkoyrwwgedwqhoymgflzbroxilowsmjxdlypltksxisjjv", "bioyhwdexytsdsqkowsyoogjrxwrlmgklvmjlvzokqylpfjixw", "roklvgiokozgsqbyoxyvwldmjlethmpdyrsklxsjwwifxywqjo", "wxboqkoyqylxmvvhpzdskryslorxdjygwojllfwsogiekitwjm", "wxqkslwqmktsgmwoybyroiopodkjgldvwrxxyjzvilelfhojys", "lkhdtgkowizyiqkxlqfoljsvwegypooxywrbxjwrmldssjyvmo", "dohsykqsogkytefoyomlwjgbispwliomzjxdwjxlxryqwvlvkr", "wlkloqerysjxmdmvolwyrywookszpjfhxbkglvgjiqodisxytw", "jjylrshwlgbkyopwgxoqkwkmwimtysyddxsoevqzilorlxfvoj", "wxdygilloyvfpjkyxlkysmrikqwjterdooqogxblzwhwsovsmj", "oslipbyyvlkgyqsjrowdtoxyzejilolkmmrjwodqhwkvfwsxxg", "odyxmsdwrhxlgrezpqojkoxokbovgsqmijjysliwwkywlyvtfl", "wlosrwydftwlkqszvwpgxiyoyvygjjlsxehrmolxkokidbomjq", "xoldtskiofwmilvewqlpgojgoyrhsmkjwxrskylwxozyyvbdjq", "yjqmybrqxlowxglyvsymxowtkflkzwiojghevoprldsjiodkws", "gwxkyripbloqxrqhsivdeswmwmwfoljsojyylykgzjklodovtx"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"eci", "peci", "pec", "ja", "sam", "mali", "zec", "ti", "si", "mala", "vjeverica", "eci", "peci", "pec"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"mismas", "masmis", "smismas", "amisma"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"aaaa", "aaa", "aa", "aaaa", "aaaaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"picture", "turepic", "icturep", "word", "ordw"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"picture", "turepic", "icturep", "word", "ordw", "asdfghh"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"a", "b"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"ababababababababababababa", "bababababababababababababa", "bababababababababababababa", "ababababababababababababa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"ast", "ats", "tas", "tsa", "sat", "sta", "ttt"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"a", "a"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"ast", "ats", "tas", "tsa", "sat", "sta", "ttt", "tt", "tt", "adad", "dada"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"qwerty", "wertyq", "ertywq", "ytrewq"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"papper", "perpap"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"abba", "abba", "bbaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"bark", "arkb", "and", "ndan"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"abc", "abc"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"picture", "turepic", "pciture", "icturep", "word", "ordw"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"abracadabra", "abraabracad"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"picture"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"papaja", "pajapa"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
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
    vector<string> words = {"a", "ab", "abc", "acb", "ddf", "ggffg", "sasdfgsdgsdfg", "sdfsdf", "sdf", "sdfsdf", "sdf", "sdfsd", "sdfsdf", "sdfsd", "oipoipo", "yuiyui", "yuiyuigfghfg", "sdfsdfhgdfhfdhdfh", "dfdffdgcvb", "ffdfdfdfddf", "jjjjjj", "hjkhjkjhkjh", "fgsdfssdfds", "weqweqwe", "dxzzxz", "xzczxvvxc", "xccxbcvbcvb", "sdfsdfsd"};
    CyclicWords* pObj = new CyclicWords();
    clock_t start = clock();
    int result = pObj->differentCW(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22656418&rd=10768&pm=7694
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <algorithm> 
#include <ctype.h> 
#include <map> 
#include <cmath> 
 
using namespace std; 
 
#define PI 3.1415926535897932384 
#define inf 123456789 
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define all(c) c.begin(), c.end() 
 
typedef long long ll; 
typedef vector<int> vi; 
 
void rev(string& a) { 
  char t = a[a.size() - 1]; 
  for (int i = a.size() -1;i >= 0;i--) 
    a[i] = a[i - 1]; 
  a[0] = t; 
} 
 
bool same(string a,string b) { 
  for (int i = 0;i < b.size();i++) { 
    if (a == b) 
      return true; 
    else 
    rev(b); 
  } 
   
  return false; 
} 
 
class CyclicWords { 
  public: 
  int differentCW(vector <string> a) { 
    vi v(a.size()); 
     
    int res = 0; 
    for (int i = 0;i < a.size();i++) 
      if (!v[i]) { 
        res++; 
        for (int j = i + 1;j < a.size();j++)  
          if (same(a[i],a[j])) 
            v[j] = 1;   
      } 
       
    return res; 
  } 
}; 
 
 
// Powered by FileEdit 
 
 
// Powered by FileEdit 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/