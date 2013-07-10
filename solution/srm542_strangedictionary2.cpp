/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11935
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

class StrangeDictionary2 {
public:
    vector<double> getProbabilities(vector<string> words);
};

vector<double> StrangeDictionary2::getProbabilities(vector<string> words) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<string> words = {"hardesttestever"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"ab", "ba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"aza", "aab", "bba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3333333333333333, 0.5, 0.16666666666666666};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"abababab", "babababa", "acacacac", "cacacaca", "bcbcbcbc", "cbcbcbcb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"o"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"gzhgvzfwzlfdgnwjykqpbaapbzgxfyeuhzjmhofzfkpqhfjchs"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"o", "a", "n", "j", "c", "f", "z", "i", "t", "m", "q", "w", "b", "h", "v", "r"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"abbbbabbababbbbaabbabaaa", "aaaaabbabbbababaabbabbba", "bbabaaaaabaaaabbababbbaa", "aabababaaaaabbbaaabaaabb", "bbabbbabbbbbaaabbbaabbbb", "babbbaaabbabaaabababbbab", "abbbbbabbaababaaaaabbaaa", "baaaaaabaababababababbba", "aaaaaaababbaabaaaaaabbab", "aaabaabbbbabaaaaabaabbba", "bbabaaaaaaabbbabaababbab", "bbbabaabababaaabaababaaa", "baaaaaabbbabaaabaaababab", "babbabbbbaababbabaaababa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.00869444547961874, 0.036923905794669, 0.08268634787473733, 0.1645657412443975, 3.9732734800071597E-4, 0.01452158076573788, 0.06907573812167656, 0.07816529652980295, 0.2017763143068973, 0.06500999239844224, 0.05317852551307893, 0.07851356624811394, 0.11519321753167738, 0.03129800084314949};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"ccccbbaaccababcbbbcbca", "ccbccccbbbbaaaaccaaaba", "bbaccabaccacbccbbaacab", "abcbcaacbacbbcbaaaaaca", "cbcbcaabaaabbbaabcaaac", "cabccabaaacacacacacacc", "accccaccabcbaababacabc", "bbaccbbacabbcbacbccbcc", "bccbccccccccbbcccacbab", "cbabbcccbcbabaababbacc", "acabccccbbaccabcaaaccc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06599261913696902, 0.08946848036437825, 0.06655501379793731, 0.16577499508655957, 0.1954200669093141, 0.16773376956449113, 0.06418043099544649, 0.019689950035344773, 0.003979516868771255, 0.10721809045766917, 0.05398706678311939};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"bgkxlxytyhwavqlxzzjeuvhlpojdugppzxxlszkwfbdishr", "dcxzfelutsshklwyzujzpjmhwjheosgosvpatrsvgdjdhvh", "nqqphlqojzbxzibtodgujotqpgetisirgnuggxvtwbrxweu", "dpmvsbpteaeehpngobgnzsmxtrhupeokgqrwsmdrdqoltkc", "qygxlprfxyzwjelwwsofudtkgzguumocvpmtpwmpklwpeua", "uyhhohotruhwxlbynyphkgxippokkmrswruhcosetuwanks", "muqenoanxjzfixiddortkfdfopighalemxlnlgahyefgsiq", "qocavlxtukdfjenzqxlnyzckekijnrcudfijhzjegjgnjtk", "jradjbpmskjyhmrnmexgiwscwixpxkctccllwpfdsonfsfw", "beylftryajxhigpuwrugktpdlynrnupvbuyzcruqnankzxa", "jmypqnavdkcowwaelhwhlbrothedorxjnvlaojmiiwqoawi", "kovsoahktlshinutabliwnuxakumwitvmgkqchibrgrfbgu", "msidoethucpoyoldvogyrxolmjaxhvaponehopsnlotusff", "kprcthciplvanasttzkfyahfqfflriquimpnqracdfozdch", "euscqafbxzrkopuvrhbsxdnlwkotxddraafkxxzmnnapyea", "ofdosgiyfmgwiabzttpcpxvazlefoubpswibmvridjxglhw"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.029281716330745024, 0.04158607350096706, 0.02127659574468085, 0.049239153795120456, 0.026106318438999198, 0.026148627813752715, 0.08873077277332587, 0.0425531914893617, 0.05319148936170206, 0.07902985929253596, 0.07425363720460838, 0.09417349712081106, 0.08409321175278613, 0.10463796148347464, 0.1260675946044791, 0.059630299292648896};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"ababbaaabbababbaaaaba", "baababbbaaabaaaaaaaba", "ababababbaaaaabbababb", "abbaabaaaababbabbbbbb", "aabbaaaaababaaaabbbaa", "abaababbbabbaaaabbbab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.14856768350615102, 0.27405584426753155, 0.11190645504306496, 0.09147523629334775, 0.2731741236131716, 0.10082065727673307};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"aabcccbcccaaaaacbababbbacacbccbabbccbbca", "cacaaccaacbccacabbbbaabaabbacbcaccbccaba", "bccabcbcababcabcbabcbbbcbbbacbbaaaaccbcc", "bbbaabbccabbccbccacaabbccabbacaaabaacccc", "cacbabcbaaaabaabbbbabcbacbccaccbbabccaaa", "accbcaacccbababbccbcbcbcaabacbbabcbcacab", "bcaccacbaaaabbbcbabcacaaaabcabbcbbcccacc", "bbaccbcbcbcabcccbacbbcccabacccbabbaccbca", "aaccbbbbacbbbaaacbbaaaacbccacbabbcaaacbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.103683570545462, 0.14533886642144828, 0.06788234416529772, 0.09842839624231497, 0.12406313002240188, 0.09858531468473523, 0.13925496159660836, 0.05185430393718715, 0.17090911238454382};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"tdwkgtwqpfuhuyc", "anpwhpfhonpvecf", "miswsgrfptehfpx", "cjrhyqktgdcmzjv", "jkpusejoawnkgne", "oycpyliwbkgrzum", "oxvpvpkaqotfvqp", "nfmzvdnyucewmgb", "ecypdugnokmympu", "gcrjmurxogyjlux", "oyumurdjwxecbgp"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.13333333333333333, 0.0, 0.13333333333333333, 0.06666666666666667, 0.06666666666666667, 0.06666666666666667, 0.2, 0.10555555555555551, 0.02777777777777778, 0.2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"babbabbaababbbbaabbbbbaabaaaaab", "aaababbaaaabbbababababbababbbbb", "ababbbbbaababbbbbbaababaaababba", "abbbaaabbbaababaaabbbababbbabab", "babbaaabbaababbbbababaaababbbab", "bbaabbabaaabbbbaababbaaaaaabbbb", "abbbbabbbaaabbbbbaaabababbaabab", "baabbbbaababbbaaabbabbbabababab", "baabaabbbaabaabbbaaababaaaaaabb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.09027833672136933, 0.1306077216340255, 0.09670110203956872, 0.10953326112843252, 0.07736862635168616, 0.1457220729976197, 0.04931279860456744, 0.06727571379794615, 0.23320036672478434};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"bcabccbbabcbcbbcbaaacaaaccbcaacaca"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"rcaewzxbhgxlcjtc", "crcafqfnfvisxouk", "kdyqizlwyfbllgii", "nfiiilsruxsitqvt", "kpsajoxyymtrgbde", "mbaknwzveynrkioq", "lnqjyvelhkbmchtx", "hgsdjlenrmnsyxwb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1301282051282051, 0.15416666666666676, 0.09583333333333333, 0.09166666666666666, 0.15833333333333344, 0.15833333333333344, 0.09070512820512819, 0.12083333333333332};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"bbbbbaaaaabbbbabaabbabbbabbbbbb", "aaaababbabbbabaaaababaaabbbaabb", "abbbabbabbbbaabbaaababbabbbabaa", "baaaabbabbaabbaabaaabbabbaababa", "bbbbaabbbbbbaabbbbababbabaababa", "aababaaabbaabababababbbaaaaaaab", "baabaabaaabaaababbbbaaaaaababbb", "baababaabababbabaabababaabaaabb", "bbbbabbabbababbbbbbaabbbaabbaba", "abbbbbaaaabaaabbaaabaaabbbbaaaa", "ababbbababaaabbbabbabbbbbbbaabb", "baabbbbbbbbbbabaabaaabaabbaaaba", "baaabbbbbbbbaaaaabbaaaabaabbbaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.01360098566718383, 0.0996894816228444, 0.02803216103729469, 0.11383981115840443, 0.023059425424748287, 0.17799128264288902, 0.13337515495793908, 0.10061177744734799, 0.013680337525696654, 0.15169215012204132, 0.01879495573910599, 0.03887724691278813, 0.08675522974171729};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"baacbababacccabbbacbacbbbcbcacabbab", "abbaaacbacccacbbbaababacbcaaababaab", "aacabcabacbbcbaababbbcbcbaccacbbaaa", "bccbbacbbbbacccabcaccbbccccbbcacbab", "acbbaabaaaaaabbbabbabcccbaaabcbbacb", "accabaacacabacbbcaaaaaababccbccbaba", "bbaabbcbabcbaabcbbcacccbbccabbcbbaa", "accbacacbbaaabbababcacaaabbcbbabbbc", "aacbbacababbbababbbbbaccbbcabcccbaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.09037201124131403, 0.17827493901094418, 0.12732033260659303, 0.011907641776719113, 0.17850555234190923, 0.14259285424145926, 0.05873833129539396, 0.14627859371469637, 0.0660097437709706};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"qveblgyzbkoexbgaltyfyyvchi", "zudlboxszbtbxykjvxrglfwfwt", "btnrgxpofjxxgpzlvmuoubypbg", "jrlnsksqmjclpdjboyytytnazv"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3076923076923077, 0.23076923076923078, 0.3076923076923077, 0.15384615384615385};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"bbabbabaaaaaaabbbaaaabab", "bababababbbbbbaaabaabaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.6, 0.39999999999999997};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"accbabbbcbcbacbbbbabbababcaabacac", "acaabccbcccccabbcbbacbccbbaabccab", "ccbcacaccbabcaaaaccbcabbcaabbbaaa", "cbaacbaccacacccacaaccaccaacacbcca", "cbabbabcaccaaaccccbcaccbacaccabaa", "bbacababaabbbcbcaccaababacacbcccc", "abbcaaaaabacbcbabcccacaabbccbbbaa", "caacccbacabaccbaaccabcbbaaaaaccbb", "cabaccabaabaccbaacaaaacabbcabaacb", "abbcbbaccaacbabbccbaccbbbbaaaacab", "cbbcbbcabcbabbcacccacbcaacabaabbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.07400108219018552, 0.027347718204500195, 0.1253571934321842, 0.1021072607146265, 0.08688310367267595, 0.06681408137037513, 0.1334078900937306, 0.09558594861173395, 0.17974401629031547, 0.07063822462792034, 0.03811348079175129};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"cblyzfievwelcaifrucihchcbwk", "qafavbmygxavyxzbkqpcodocvsb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.4999999999999999, 0.4999999999999999};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"abbbbabbbabaabbabaaaabaabbaabbbbbabaabbababbbaabbb", "baaababbbbbbaabbabbbaabbaabbabaaabbaaaabababbaaabb", "babaababbbbabaaababbaaabbbbbbababbabbbbbaababbabab", "bbabbabbbbbbabbbababbaaaaabbabbbababbaabbbabababab", "baaabbbabababaaaabbbaaabbbababbbababbabaababbabbaa", "bbbbbbaaaabbbbbbaabaaaabaaaabbaabbbbaaabbbaaabaaba", "bbaabaabaaabbabbbbaaababbbaabbaabababbaabbaabababb", "aaaabbbabbbabbaababababbbbabaaabaabbbaaababbbaaaaa", "aaaabbababaabbaaabbbbbbaababaaaaaabbbbabbbaabbabaa", "bbaaabbbbbbbbabbbbaaabbbbabaaabbbbabaababbbaaabbbb", "abababbaabbabbaabaaaaabbbbbbbbbaabbaaaaaababbaaaaa", "bbbbaaaaaaabbbabbbbbbaababbbaabababaaabbaaaaabbbab", "bbaabbaababaaababbabbababbbaabbabaaaababbbbbaababb", "bbaaaaaabaaaaabbaaababbbbaaabaaaabbaabbbbbbabbbbba", "aabbbaabaaaaaaaabbababbbabbaabaaaabbbbababaaabaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.049013122389223424, 0.05634952007960234, 0.03495196854239091, 0.03148869581958035, 0.05923319340727144, 0.07380183220394967, 0.05494007431207409, 0.08310127951398029, 0.07456921753928358, 0.027599411301809828, 0.0921992110910286, 0.07311698635626197, 0.05465554728648231, 0.09018602394714366, 0.14479391620991805};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"bbbaabbaaaaaababaabbaaaabbaabbbaabaabbaba", "baabbabbbaaabbaababbababbabbabbbabbbabbbb", "bbbbbaaabbbbaabaabaabbbbaabbabbabaabaabab", "bbbaaaaabbabbabaaabaaabbaabaaaaaabaaababb", "aaaabaababbababaaabaaaabbbaaaabbabbaaabaa", "aaaababbbbaaaaaabbbababaaaabaaabbbbbabbab", "baabbabbbaaaabbabbabbbbbbaaaaabaaaaaabbba", "baaaaabbabbbaaaaabbaaabaaababaaaabbbaabab", "bbababbabbbaaababbaabbababaabbabbbababbbb", "abbbababababbabbbbabaabbabbaaaaabbbbbaabb", "bbbaaabbbbbabbaabbabbbabbaabbabaaaaaabaab", "abbbabababbabbaabbbbabbbabaaabbbaabbbabba", "aaababbbbbaaaabbbababbabbaaaababaaabbbaab", "baabbaaaaababbaababaaababaaaaaaabaaaabbaa", "aaababbaababababaababbbaabbbbaababbbbbbbb", "bbbbbabaabbaaaaabaababaabaabaaaababaaaaba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.08896993010348767, 0.006538354813080727, 0.03025194190576674, 0.10488381454247467, 0.12675644531014713, 0.04917487133838145, 0.04303916474892922, 0.09784612458532099, 0.015666509938970792, 0.02752711970753776, 0.029796339532984894, 0.01802374859089364, 0.05664704416938582, 0.1782732551756449, 0.019822388840696883, 0.1067829466962975};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"bbbbbbbabaaabbabaaababbbbaaaaabbbbababababbbbbabab", "aabbabbaababbbbaabbaababbaababbaabbaaabaabaaaabbab", "abbaabbaaababababaabababaaabbabbbbbabababbbaabaaaa", "bbbbaaabbabaaabbbabaabaabbabaabbaaaaababaaaaabbbaa", "abaabbabaaabbaabbaabaabaaaaabababbbaabaabaababbbbb", "abaabbaaaaaababbaabaaaaaabaaabbbaaabbbbaaababbbabb", "bbbbbbbababbbbbaaabaababaababaaabaaaaabbbabbbaabbb", "bbbaaaaaaaaaaabbabbabbbbbabbbbbbbbabaaaabbbababbaa", "aaaabbababaabbabababaabaaaabbbbaaababbaaaabaabbaaa", "bbbbaaabbabbbbabaabaaaabaabbababbaaabbabaababaabba", "aabababbbbabbaaaaaabaababaababaabaaaaabaabbabbbbaa", "aabbbbbaaaaabbabbbbbbbbaababbabaaaabbbbaaaababbaba", "aaabbaaabaababaaabaabbbaaabbaaaababaabaabababbbabb", "aababababaabababbbbbbbbbabababbbababbaaaababbaabab", "abbbaabaabbbabbbaababbbaaaaababaaababaabbbbbbabbbb", "baabbabababaabaaaabbbababbabbbaaaabbbbbbbbbbbbbabb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.020058273497276718, 0.07028031313990023, 0.07321744138339535, 0.09568008448877245, 0.07093129644467376, 0.09951595698434733, 0.03689616943118587, 0.04147464538057338, 0.10384674508644974, 0.05968530855481403, 0.09981742204665182, 0.028147807772472076, 0.10690700392958741, 0.03930602837513033, 0.035185176536193755, 0.019050326948575568};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"bbcbcaacbcaaabcbaaaccacabcbbcacacaacaccabaababacbb", "acbaabaabaaaaababcccccbcacaaaaaabcaacbabcacccbabac", "bccbbaabbbbcbabbabbcccccaacbabbccaccccbcbaccacccaa", "babacccacbbccccaccacaacabaabaacaabccbbbaaabaaacbaa", "baaccbcaaaaccbabcacbacabaccbbbbaabcccbbccccacabacb", "cbccabbccacaacbbbcbaabccbaabababaaabccbcbabbabcaac", "bcbabcaacbabbcbbcbcccacbbbabccbbbabcaaacbacacaaaba", "bcbbaabbcbabccaacccabaaabaccacccaccacbccaabaccbbab", "cccbccaacaacbabbacbbbcaacababcbbcbbbccacbabacaacab", "bababcbcbcccccaacbbaabbcbbbbbcbbcbbbbaabbccacbbacb", "ccbccbcacabaccaaabcaaaacbcabacbaaccacccccaccacbcac", "aacbccacbbcaaacccbcbcbcacacaccaabcbabaabcacabccacc", "acbabbccababcaacbcbbcacbaccacbcbcccbbabcabcccabcca", "cabccbaabbaabbcbbcbaaccccbabbcaababbccabbaacbacbca"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1258447317538849, 0.1647922869483149, 0.02642429565714552, 0.1315623863352705, 0.08804591271805291, 0.05913742351414483, 0.055638002338119205, 0.06181878068574117, 0.04737896402437228, 0.024575107266192525, 0.04782246367937326, 0.06031606637081075, 0.05179050723756409, 0.05485307147101209};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"abaa", "bcba", "bacb", "bcca", "cccb", "bbaa", "bccb", "babb", "aaba", "caac", "baab", "ccbb", "caba", "cbac", "bcbb", "acaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.41666666666666663, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.41666666666666663, 0.0, 0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"bbaacbabccabaaabaaabcccaacacbcccccaabbabacbcacaaaa", "abacaaababccaabcbbccbacbbbaacbcbcbabacaacbabbbcaca", "bcccccacbaaabbccbcccbabcaacbbcaabbaccaaacbbcbaaccb", "bbababcbbaabbcccabccccbbbabaaaacacaaaacbccccbaaabb", "bbcbabbcabccbabccacababacccbbacaacaabaaccbcccabacb", "accccaccaaacbcbbbababaabbbaccacbbbccacabaaabbbbbbc", "acbacbbcaacbbcaabccaccbccccaccaabaccabcacbcaacbbca", "cbcbbccbccbcbabcacaaacbacbbaabaaabccaccbabbaaabbbc", "caabcccbbbbcccabacabaacababaabbcbbccacacbbabbaaccb", "abaabccbbbbbcbccccccacabbabcccacbabcbaccbcbbbacacb", "bbbbacbccbaccbbaaccccaaccbaccabcabaacbbcbacaababcb", "cabaaabbcabbbbcbbcaabcbbbabaaabccacbaaacbbcbcacbca", "bbacacbacbbcbbbbaccbbbabacbcabbacbbccaabaacbacccbb", "bccaacaacbacbaabaaabbbccbcccbacccbcaacacbababaaacb", "aaabccacabbccaacbccaacbccaabbbaabcabcaaaacabbbaabc", "abcbbccbccaaccbbcbacabcacccbaccabbbbbccacaabcccbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.14126676538579186, 0.0714166317317366, 0.04509305857260609, 0.06874668905683762, 0.041422369080314964, 0.06355668148347546, 0.06407107347622751, 0.053336967594426965, 0.046557861681761105, 0.024311468058595433, 0.051707969791252494, 0.0750099062303469, 0.04532877308370956, 0.07335761136664395, 0.09885901473682232, 0.03595715866945293};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"tjzystajdozekesgxjeilavgbraitwaixwjijgcnskaxpzctvd", "fbclqihsesrecqdgufkzxwitkwapqorbdccsgbkchwusuaqtsw", "yxreyhszjwhcdlwiskgzjzlgrsgmfhvopbvsgnxjknyjwfwfya", "nanalchpenydvyffyguxzvjgkeqgfjfrmmijvrlerzvjoeiibl", "btmsmcthbayuezciimvvhoeiwbgbwlgoqaaffmsmovrqfjsaao", "bthtckebnpdamxxsjpvfnwnspwtmpuenjcgosnqnguceoswxfy", "eagdtvsigeafqrhptageiufymnpcudexpfymucefgcwnfjnvvf"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.19606921029281268, 0.15086956521739112, 0.032019105514546245, 0.07917987407729049, 0.3140070921985827, 0.09515957446808494, 0.1326955782312924};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"xwbtvrcffnwjzbepumdcgdrmvuvkcqitmbwknpawhytfwei", "xzcbmmhlyhzbcpcgcdxxrpoifscnubwirnvanhupdsqmupo", "agysuogkdhcemruabkjdkfmlcpdyssxkmtamhosnbrtlmjg", "zwdhaydhlgjkbpgkhwihnxgvaqknepwrztrbdghehctskvn", "umlcrlzyixxgbelfprzwvufbzjfgwlalwjnswcdwbfxvlav", "ahyvgrgdvtbbracjxxpqwuatsnjdsrxmvfehwtwudeyrzug", "pauckqqxbkbjiotptqabzioxunbsstnaysyhcdixhctmucr", "nmnugqmqyxdkaiipgarxupxkwgaafmkktdsqmaxbwclxrcd", "mstfowcyejckqifxutsdxrtxlsmxlhjfaddsouhygyziprv", "pxgactqphudfyqboldvpgwuvxctoplprbvpavtamevelftb", "rmhjotvrlitxxumuortezwupktedquiskhwvlqvpzthnqjd", "pomlvbllxpupboaxgnvnvhsroieqfcfgftpetagdfnneqmv", "ajzxuovnstrqqxheoygfluqnicudbkadyzidrkcyrbytjsr", "uirfrbzpqzmcemardpdiaocmmnjseqipjlyugxoooaovkyl", "jbqdkutjqvntwlvdxyisyzvfmtticxzxqqitswdrfmaxbnq", "izvfsuhovmcusltrcuwqjswocthishqvkmdpakvwumctoqj"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.08728777133032445, 0.04519664732430683, 0.08776749581052253, 0.06382978723404255, 0.0603248021379382, 0.08679044433107158, 0.11776348342404756, 0.11702127659574461, 0.029497098646034822, 0.0739952718676124, 0.0, 0.054609929078014145, 0.04967485746856703, 0.062411347517730524, 0.0425531914893617, 0.02127659574468085};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"odhvkuibkseewzixstqgdkbhhvorpamroyuxnfzqxcuattoffn", "lycllwjoecacapcdgivvckllanbmyxlvcjzqxqjvdwpcmkifxs", "uqugxjcmlykawjhoiriqxaktfoxkqfxnkmdrdqgvnsgtugmfax", "uajjkrskmyipkqvoiunsxodxvxeazfshorpjdeftmouhcpkpiy", "rodlzxwfzpgyxdtbnhracvsdcmgbpqvszjgbfsmgrmigihkzuq", "myozexpesuvlnugvuqkjmvprkzfcwdpnzllmodfnvinahcusgr", "kjohdbmcfdleeogxhsvwmirmmkhbbndkswywvvefzovdsrnrnz", "atrqgafavpxlypxhntglwtamjjwrjkzuidnhhfearqserierue", "kpwjpowlcaggtgknqzcawcxhwyposmcyyhdhysbktyuekpgwnh", "jruvpsknjrzgsxfoqxkkhdiayongxvwjuaokwcsujoyscmvbtv", "htaqnuwfkgmrmaklfbxyawxmkbhgigythaqtmoopxxzarufolr", "cfupyhsnqodjzpkfcnhafnurdhanjxfbooafzpfprhozifsgqc", "qsnzixlgwkhabnbytbrqjmfenqqlucuawmszigpwtutrzfyqnm", "hzdgzaoyrjmquuvcozkuzjhfbsikalemwvipzejofgfxbofner", "yqsuozjoiznqezvpdsslknrbchgzeustzhgrgfasooskzdiqzq", "xumhxslyaykwojnfvxwnvwuuussbvqlxkobazwfzneyelstyfs"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.04693877551020412, 0.1, 0.09302036945406547, 0.04930232558139538, 0.026061658706035638, 0.02612244897959186, 0.02, 0.11020408163265319, 0.06629251700680285, 0.06916666666666661, 0.10879251700680273, 0.087645824287162, 0.05749023013460703, 0.07896258503401359, 0.02, 0.04};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"baabbaaaaabaaaabbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaababaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaabaabbbbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaabbaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "aaabbaaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabaaaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaaaaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaabaabaabbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaababbabbbaaaabbbbbbbaaaababaabaaabbbaaaab", "babbbaaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbabaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbbaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "bbabbaaaaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaaaaabbababbbaaaabbbbbbbaaaababaabaaabbbaaaab", "baabbaabaabaababbbaaaabbbbbbbaaaababaabaaabbbaaaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1999999999999988, 0.0, 0.0, 0.0, 0.0, 0.1999999999999988, 0.1999999999999988, 0.1999999999999988, 0.1999999999999988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"aaabaabaabbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabaabbbbabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabbabaabbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabaabbbabbbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaababbbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaaaaabaababaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabbabbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabababbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "abbbaabaabbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabbababbbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabaabbbaaabababbabbaabbbaabbabbaabbaaaabbbbbb", "aaaaaabaabbbabbbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabaabbbaabaababbabbaabbbaabbabbaabbaaaabbbbbb", "baabaabaabbbaabbababbabbaabbbaabbabbaabbaaaabbbbbb", "aaabaabaabbbaaaaababbabbaabbbaabbabbaabbaaaabbbbbb", "aabbaabaabbbaabaababbabbaabbbaabbabbaabbaaaabbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.4166666666666666, 0.0, 0.1666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.4166666666666665, 0.0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"aaaaaabbbaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaaababaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaaababaaabbabbaabaaaababbbbbaaaabaaabbaaabbaaab", "aabaaababaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaaababababbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "baaaaababaaaabbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "baaabababaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aabaabbabaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaababaaaabbbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaabbabbaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "baaaaababaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaabababaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaaabaaaaabbbbbaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaabbabaabbbbabaabaaaababbbbbaaaabaaabbaaabbaaab", "aaaaaababaaabbbabaabaaaababbbbbaaaabaaabbaaabbaaab", "abaaaababaaabbbabaabaaaababbbbbaaaabaaabbaaabbaaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.26666666666666666, 0.0, 0.0, 0.19999999999999998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2666666666666666, 0.0, 0.26666666666666666, 0.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"baaaabbbaabbaaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaabbaaababaaabbaabaaabaababaabaabaaabaabaabbaba", "baabababaababaabbbaabaaabaababaabaabaaabaabaabbaba", "baaaababaababaabbbaabaaabaababaabaabaaabaabaabbaba", "baaabbbbaababaabbbaabaaabaababaabaabaaabaabaabbaba", "baaaabbbbababaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaabbbabbbbaaabbaabaaabaababaabaabaaabaabaabbaba", "baababbbabbabaabbbaabaaabaababaabaabaaabaabaabbaba", "baaaababbababaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaaabbaababaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaabbbaababaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaaabbaaaaaaaabbaabaaabaababaabaabaaabaabaabbaba", "bbaababbaababaaabbaabaaabaababaabaabaaabaabaabbaba", "babbabababbabaaabbaabaaabaababaabaabaaabaabaabbaba", "babaabbaaababaaabbaabaaabaababaabaabaaabaabaabbaba", "baaaabbbaababbaabbaabaaabaababaabaabaaabaabaabbaba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.20168650793650778, 0.0, 0.08746031746031746, 0.0, 0.0, 0.0, 0.0, 0.08746031746031746, 0.0, 0.0, 0.6050595238095235, 0.0, 0.018333333333333333, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"bbaabbaabbbabaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "bbaabbbbbbabaaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "aaaaaaaabbbbaaaabbabbababbbbbabbbabaabbbbabbbbaaaa", "abaabbaabbbbbabbbbabbababbbbbabbbabaabbbbabbbbaaaa", "abaabaaabbbaaaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "abaabbbbabbbbbabbbabbababbbbbabbbabaabbbbabbbbaaaa", "bbaabbabababbabbbbabbababbbbbabbbabaabbbbabbbbaaaa", "ababbaaabbbbaaaabbabbababbbbbabbbabaabbbbabbbbaaaa", "abbabbabbbabbaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "abbbbbaabbabbaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "aababbbabbbbaaaabbabbababbbbbabbbabaabbbbabbbbaaaa", "abbabbaabbbbbaabbbabbababbbbbabbbabaabbbbabbbbaaaa", "aababbaabbbbaaaabbabbababbbbbabbbabaabbbbabbbbaaaa", "abbabaaaabbbaabbbbabbababbbbbabbbabaabbbbabbbbaaaa", "abbabbaabbbbaababbabbababbbbbabbbabaabbbbabbbbaaaa", "abbabbbaababaaabbbabbababbbbbabbbabaabbbbabbbbaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.01984242609242609, 0.5395521145521139, 0.0, 0.17985070485070476, 0.012454212454212453, 0.04139159451659451, 0.0, 0.012339859214859215, 0.015754847004847007, 0.0, 0.0, 0.0, 0.06633366633366632, 0.0, 0.11248057498057498};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"aaabaabbbaaaabaabaabbabaabaabbabababaaaaabbbaababa", "babaaababaaaabbabaabbabaabaabbabababaaaaabbbaababa", "abbaaabababbbaaabaabbabaabaabbabababaaaaabbbaababa", "abbbaaaabbaabaabbaabbabaabaabbabababaaaaabbbaababa", "baabbabababbabaabaabbabaabaabbabababaaaaabbbaababa", "ababaaaabbabaababaabbabaabaabbabababaaaaabbbaababa", "ababaaabbabbbababaabbabaabaabbabababaaaaabbbaababa", "ababaabaaabbbabbbaabbabaabaabbabababaaaaabbbaababa", "bbabaaaabaabbababaabbabaabaabbabababaaaaabbbaababa", "abababbababbbbbabaabbabaabaabbabababaaaaabbbaababa", "ababaaaabaaaaababaabbabaabaabbabababaaaaabbbaababa", "aaababbbbbababaabaabbabaabaabbabababaaaaabbbaababa", "baabbbaabaabaaaabaabbabaabaabbabababaaaaabbbaababa", "aabaabbbbaaaabbabaabbabaabaabbabababaaaaabbbaababa", "baabbabbbbaaaaabbaabbabaabaabbabababaaaaabbbaababa", "abbbaabababbaababaabbabaabaabbabababaaaaabbbaababa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1593101464507714, 0.11212878196905975, 0.08351264668973, 0.047425796425796425, 0.011248972579081706, 0.0, 0.0, 0.1136818428485094, 0.0, 0.0, 0.28596996235686684, 0.0, 0.11898947310405641, 0.0446197986041736, 0.023112578971953967, 0.0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"bbbababaababbaabbbaabababbababbbbbaaabbabbababaaba", "babbbabaabbbaabbbbaabababbababbbbbaaabbabbababaaba", "bbbabaaaababaababbaabababbababbbbbaaabbabbababaaba", "aaaabbbababaaaabbbaabababbababbbbbaaabbabbababaaba", "bbabaabbaabbaabbbbaabababbababbbbbaaabbabbababaaba", "abbaabbabbaaaababbaabababbababbbbbaaabbabbababaaba", "abaababaabaabbbbbbaabababbababbbbbaaabbabbababaaba", "aabbbbbaaaabbbbbbbaabababbababbbbbaaabbabbababaaba", "bbbabbbababbaaaabbaabababbababbbbbaaabbabbababaaba", "aaabbbaaaabbabbbbbaabababbababbbbbaaabbabbababaaba", "abbaabaaaaaabbbbbbaabababbababbbbbaaabbabbababaaba", "bbbaaabbbaabaababbaabababbababbbbbaaabbabbababaaba", "baabaabaaaaaaababbaabababbababbbbbaaabbabbababaaba", "aabaabbbaaababaabbaabababbababbbbbaaabbabbababaaba", "aababababaababbbbbaabababbababbbbbaaabbabbababaaba", "bbbaabbbabababbbbbaabababbababbbbbaaabbabbababaaba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.032185106560106556, 0.0, 0.08797031027834598, 0.1402022966011061, 0.0, 0.053816940499976235, 0.03989573505198503, 8.941710135286524E-4, 0.012772767356100686, 0.05665469045119341, 0.08811578096176313, 0.016798432534543644, 0.30775659640366976, 0.13493142421217813, 0.02800574807550254, 0.0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"bbcaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabccaacaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabccaccacaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbaaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacacbccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabacaccaaaaaaccbbcabbcababcabbaccccacbccabc", "abcaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabcaaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cacaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcbacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabccabcaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacbabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaabaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cccaacaabccaccaaaaaaccbbcabbcababcabbaccccacbccabc", "cbcaacaabcccccaaaaaaccbbcabbcababcabbaccccacbccabc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.14285714285714288, 0.0, 0.0, 0.14285714285714288, 0.0, 0.14285714285714288, 0.14285714285714288, 0.14285714285714288, 0.14285714285714288, 0.0, 0.0, 0.0, 0.14285714285714288, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"babaaaccabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacbabcbaaaacabcbcaccacccabaabbcccccbbcabacacc", "babbaacbcacbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacbacbbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacbabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "baabaacbabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacaabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacbabcbccabcabcbcaccacccabaabbcccccbbcabacacc", "babbcaababcbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaacbaacbccabcabcbcaccacccabaabbcccccbbcabacacc", "babaaacbabcbababcabcbcaccacccabaabbcccccbbcabacacc", "babbaabbabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "bacbaaababcbacabcabcbcaccacccabaabbcccccbbcabacacc", "babbaccbabcbacabcabcbcaccacccabaabbcccccbbcabacacc", "bacbaacbabcbacaccabcbcaccacccabaabbcccccbbcabacacc", "babbaacbabcbababcabcbcaccacccabaabbcccccbbcabacacc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.2509259259259259, 0.0611111111111111, 0.12499999999999996, 0.0, 0.1254629629629629, 0.1254629629629629, 0.0, 0.05569985569985568, 0.0611111111111111, 0.1254629629629629, 0.0, 0.06976310726310724, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"caaccbbabcacbcacaaacacbbaccabcabbccacabaabaaacaaac", "baaccbbcbcacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaccbcabcaabcacaaacacbbaccabcabbccacabaabaaacaaac", "cbaccbcabcacbcacaaacacbbaccabcabbccacabaabaaacaaac", "cabccbaabcacbcccaaacacbbaccabcabbccacabaabaaacaaac", "ccaccbbabbacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaacbaabcacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaccbcabbacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaccbaabcacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaacbbabcacbcbaaaacacbbaccabcabbccacabaabaaacaaac", "ccbccbbabaacbcacaaacacbbaccabcabbccacabaabaaacaaac", "caaccbbabcaabcacaaacacbbaccabcabbccacabaabaaacaaac", "baaccbbabcacbcbcaaacacbbaccabcabbccacabaabaaacaaac", "caaccbbcbcacbccaaaacacbbaccabcabbccacabaabaaacaaac", "caaccbcabcbcbcacaaacacbbaccabcabbccacabaabaaacaaac", "caccabbabbacbcacaaacacbbaccabcabbccacabaabaaacaaac"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.07291666666666666, 0.0, 0.0, 0.0, 0.008495670995670996, 0.2585813492063491, 0.019313922959756293, 0.0, 0.16931216931216922, 0.11284271284271281, 0.1504546957671957, 0.07073412698412697, 0.0, 0.0, 0.13734868526535185};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"cccbcbcbcbccbabccaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbccbcbacbabbcaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbaabcbabbbbccaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbacbcbccbabacaaabbacccacbbbbcbaabacaccccaaccbc", "ccbbbacbbbaababccaaabbacccacbbbbcbaabacaccccaaccbc", "cacbbacccbaababccaaabbacccacbbbbcbaabacaccccaaccbc", "ccbbbaccaaacbabccaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbccbcbabbabbcaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbacbbbacbabacaaabbacccacbbbbcbaabacaccccaaccbc", "caabbbcaabacbabccaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbacbcbaccbbbcaaabbacccacbbbbcbaabacaccccaaccbc", "ccabbaaacbacbabccaaabbacccacbbbbcbaabacaccccaaccbc", "cccbbaabcbacabbccaaabbacccacbbbbcbaabacaccccaaccbc", "ccbbbacbbaacbacccaaabbacccacbbbbcbaabacaccccaaccbc", "ccabbacbcbacbabccaaabbacccacbbbbcbaabacaccccaaccbc", "ccccbacbabacbabccaaabbacccacbbbbcbaabacaccccaaccbc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.019999999999999997, 0.0, 0.084375, 0.08001893939393939, 0.12456860269360269, 0.0, 0.11249999999999998, 0.22222222222222213, 0.0, 0.19648989898989894, 0.11999999999999997, 0.03367003367003367, 0.0, 0.00615530303030303};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"bcbcbacabaaccbbbaacaacbbbabcaccccbcccaabcbaacbaabc", "ccbcbaacbcacbbcbaacaacbbbabcaccccbcccaabcbaacbaabc", "caabbabcbcacbbbbaacaacbbbabcaccccbcccaabcbaacbaabc", "acccbbacbcccabbbaacaacbbbabcaccccbcccaabcbaacbaabc", "aabcbaaabcccabbbaacaacbbbabcaccccbcccaabcbaacbaabc", "acccbaccbcbcabbbaacaacbbbabcaccccbcccaabcbaacbaabc", "acbbbaacbcbcababaacaacbbbabcaccccbcccaabcbaacbaabc", "abacbcaabcacabbbaacaacbbbabcaccccbcccaabcbaacbaabc", "bbbccabcbcacbbbbaacaacbbbabcaccccbcccaabcbaacbaabc", "aaccabbcccacbbbbaacaacbbbabcaccccbcccaabcbaacbaabc", "aabcbbacbcccabcbaacaacbbbabcaccccbcccaabcbaacbaabc", "acbabaacbbabaabbaacaacbbbabcaccccbcccaabcbaacbaabc", "acbabbacbcbabbbbaacaacbbbabcaccccbcccaabcbaacbaabc", "accccaabbcaaababaacaacbbbabcaccccbcccaabcbaacbaabc", "acaabcacacabababaacaacbbbabcaccccbcccaabcbaacbaabc", "acbcabacbcacbabcaacaacbbbabcaccccbcccaabcbaacbaabc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.09558724344438628, 0.0, 0.050787545787545775, 0.0, 0.09916546416546414, 0.0, 0.012689393939393934, 0.06520205984491698, 0.0, 0.04336996336996336, 0.0, 0.1773688194521526, 0.03746099579432913, 0.11314831002331, 0.24111764007597336, 0.0641025641025641};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"acbacccaaaccaabbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbaaacbbcaccbaacbaccabaaccbabccaccbaaccbacbbbaccaa", "cbaaaacabcccbabbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbcabcbabacccacbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbaacaaabbcccabbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbbaaccabacabaaabaccabaaccbabccaccbaaccbacbbbaccaa", "ccccccccbaabacbabaccabaaccbabccaccbaaccbacbbbaccaa", "babacccbbccaaaabbaccabaaccbabccaccbaaccbacbbbaccaa", "cacccbcacbabbcbbbaccabaaccbabccaccbaaccbacbbbaccaa", "aacabacabbcbcabbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbcccbaaaacbacbbbaccabaaccbabccaccbaaccbacbbbaccaa", "cacccababaccbacbbaccabaaccbabccaccbaaccbacbbbaccaa", "aacabcaabacbbcbabaccabaaccbabccaccbaaccbacbbbaccaa", "bbcabcaaccabcabbbaccabaaccbabccaccbaaccbacbbbaccaa", "bbcacccabbbabcbbbaccabaaccbabccaccbaaccbacbbbaccaa", "cbbcaacabaaabbbbbaccabaaccbabccaccbaaccbacbbbaccaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.11098267886214312, 0.06471055619865142, 0.0568831449635021, 3.273824940491607E-4, 0.05830743330743329, 0.16161716122281597, 0.033522297808012094, 0.09660994594030305, 0.01030074044396961, 0.051957591020091023, 0.07041745456924028, 0.018311755594493686, 0.12390733494900162, 0.04552600177600177, 0.004399246586746586, 0.09221927426354506};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"bbbbaacacbbaccccaabbcccaabacabcccbcaaccababaaaaaba", "bcaabacbcbbaabacaabbcccaabacabcccbcaaccababaaaaaba", "baaabbbaaabbaaaaaabbcccaabacabcccbcaaccababaaaaaba", "cacaacababbbacccaabbcccaabacabcccbcaaccababaaaaaba", "acabbabbaacaacccaabbcccaabacabcccbcaaccababaaaaaba", "aaaababaabbbaaccaabbcccaabacabcccbcaaccababaaaaaba", "bcbcccaaaccbacbcaabbcccaabacabcccbcaaccababaaaaaba", "ababbcbacacaabbcaabbcccaabacabcccbcaaccababaaaaaba", "aaacccababbbcaabaabbcccaabacabcccbcaaccababaaaaaba", "baaacccacbbacbbcaabbcccaabacabcccbcaaccababaaaaaba", "bbaacbcccabababbaabbcccaabacabcccbcaaccababaaaaaba", "aaacabcaabaabbbcaabbcccaabacabcccbcaaccababaaaaaba", "baababaabcaaacccaabbcccaabacabcccbcaaccababaaaaaba", "caacbabaaccbaaccaabbcccaabacabcccbcaaccababaaaaaba", "baaaabbaabbababcaabbcccaabacabcccbcaaccababaaaaaba", "bbabbaaaaabbaacbaabbcccaabacabcccbcaaccababaaaaaba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.015316541097791094, 0.04014803676262009, 0.2716728441311772, 0.030197400978650975, 0.03111623495552067, 0.10981909784439547, 0.0018444749694749695, 0.02519474352807686, 0.06514229404854403, 0.0, 0.01622381146190669, 0.11463754320525148, 0.09916939060168224, 0.0, 0.08294553770744252, 0.09657204870746533};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"npapwtswengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwqswengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtspengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwuswengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswenvacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswengwcgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswenggcgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswengakgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtgwengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtscengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswesgacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswengacgrhxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "ipapwtswengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswengaxgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpapwtswengazgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp", "mpacwtswengacgryxwpgjfffmmayfazmwwuulbrjbbhcbmvpbp"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.16666666666666657, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16666666666666657, 0.16666666666666657, 0.0, 0.16666666666666657, 0.16666666666666657, 0.0, 0.0, 0.16666666666666657};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"fghssgdsaotokrocaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghdsgdsaotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghssgdseptoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghssgdsaotoknktaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghssidsaowoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fgtssgdsaozoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fihssrdsaotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghssgcsaotuknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghssgdsaoeoknmcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fgrsygdsaotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghsbgdsaohoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghysgdskotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fgossgdsaotobnvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghsrgdsdotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fghsjgtsaotoknvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc", "fgdssgdsaotokpvcaghqxtgbrncfhiazeuicaafcfiyiyquqtc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.1499669312169312, 0.0, 0.12956349206349205, 0.0, 0.0, 0.0, 0.1273148148148148, 0.1703703703703703, 0.0, 0.1499669312169312, 0.0, 0.14583333333333323, 0.0, 0.0, 0.12698412698412695};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"szpenjslyjxosapywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpjnjslyjxotkfywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpenfsdyjxobtfywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "izpenjslyjxorafywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpenjslqnxohafywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "fzpqnjslyjxobaftwrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpanbslyjxfbafywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpenvslyjeobanywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "rzpenjblyjxobdfywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szhenjslyjkabafywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "bzpengslyjxobalywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpejjslyjxouafywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpqnjilyjxobalywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpedjslyjqobafvwrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpendslyjxabtfywrclsgbthndpssyqpxgygvfmsmkilqvsbl", "szpekjslbjxoaafywrclsgbthndpssyqpxgygvfmsmkilqvsbl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.07692307692307691, 0.0, 0.0, 0.09065934065934066, 0.16804029304029308, 0.07738095238095237, 0.07692307692307691, 0.15544871794871792, 0.07738095238095237, 0.0, 0.005952380952380952, 0.08402014652014651, 0.01923076923076923, 0.16804029304029308};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"wgblisbuyzftddrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "jgblirbumzfbcdplnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgblirblhjuyxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wyelirbsmzftxzrjnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgplijbymzftxdrdnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgbtwrbumlflxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgslirbuukfexdylnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgbbtwbumzftxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgwfirtdmjftxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "weblirbuezftjhalnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "hgblirbureftvdhlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgvlyrbhczotxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wnpliybumzftxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgbsnrbcmzftodrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgbdbcbumzfwxzrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk", "wgblirzuusftxdrlnywjolptwhfwyqmuakyoypxwkeqgvzaiuk"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.17180078891016387, 0.0019406635031635026, 0.0, 0.0846299707237207, 6.61028786028786E-5, 0.0, 0.08463573463573462, 9.480103230103224E-4, 0.16547619047619055, 0.1791682478401229, 0.07179487179487179, 0.0, 0.08477751415251414, 0.15476190476190482, 0.0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"hfhqfyllegvxqbkyxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "huhqdrjlegveltpaxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "mvicdrlledviqtcxxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "huhqdurlniviqttqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "hmhrdqllngvtqtkqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "juheerllegvjqmkqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "hueticlzegniqtnqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "uuhxdncligviqmkkxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "zuhadrlyzcvsuteqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "muaqrnltkgviqtgnxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "hbhekellegvjetmgxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "uyhjdrllegvzmtgqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "xutqzrhlugqeetkqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "tuhqdrllogxeqtkxxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "iuxqdrllcoidqtkqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj", "kuhqtmmlegvioizqxtizuhgjfvzkhzhbpzsfseuqaexeynmonj"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.07589122682872682, 0.10320971356685639, 0.08095238095238094, 0.0, 0.011330047267547267, 1.420454545454545E-4, 0.07692307692307691, 0.08260558885558884, 0.13429487179487182, 0.0625, 0.13481521950271952, 7.251429126429122E-4, 0.022222222222222223, 1.0274943310657595E-4, 0.21428571428571436, 0.0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"tsbnnzuxcnyemgrxtkiorqkomnpwobnrgzbawljgvuvgewshzz", "trbzqcxjcsqkmkyjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "dnbnmcemcsdmhgyjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "tabencejugtnmgyxtkiorqkomnpwobnrgzbawljgvuvgewshzz", "ckbznceikydzmluotkiorqkomnpwobnrgzbawljgvuvgewshzz", "tcbzhcnnpsgcmcymtkiorqkomnpwobnrgzbawljgvuvgewshzz", "tabkfcuxcsiajhsbtkiorqkomnpwobnrgzbawljgvuvgewshzz", "twojvozqpkakmgtjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "udhrtcuxepxtfayjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "jebzocuqcndkmmpttkiorqkomnpwobnrgzbawljgvuvgewshzz", "tvozneubszoawgojtkiorqkomnpwobnrgzbawljgvuvgewshzz", "teztkdaxcudymdyjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "twpznnpxnsdvugyrtkiorqkomnpwobnrgzbawljgvuvgewshzz", "nwednouwtstjpgortkiorqkomnpwobnrgzbawljgvuvgewshzz", "tubzicsxbmhfrgmjtkiorqkomnpwobnrgzbawljgvuvgewshzz", "zpbwwedxbcdkuiijtkiorqkomnpwobnrgzbawljgvuvgewshzz"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.010909229659229655, 0.04468448218448219, 0.08308150183150181, 0.0047619047619047615, 0.24152930402930425, 0.0625, 0.13333333333333336, 0.002121489621489621, 0.07692307692307691, 0.0625, 0.0, 0.0625, 0.04285714285714285, 0.17229853479853488};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"jijrlcrptkxsedjfyhoxaazzveuyreepewabfbxcsjoohwenly", "wpymfzbgthivgjcxyhoxaazzveuyreepewabfbxcsjoohwenly", "zrijfcwrcssglumnyhoxaazzveuyreepewabfbxcsjoohwenly", "rsyerblvwhszpdgkyhoxaazzveuyreepewabfbxcsjoohwenly", "zsuqlctgvhcnluzyyhoxaazzveuyreepewabfbxcsjoohwenly", "bneylhwetjucicemyhoxaazzveuyreepewabfbxcsjoohwenly", "fsdynfqcdvcwyaiwyhoxaazzveuyreepewabfbxcsjoohwenly", "wfaqcdojyhcwcgekyhoxaazzveuyreepewabfbxcsjoohwenly", "zszvbcixtesxcozyyhoxaazzveuyreepewabfbxcsjoohwenly", "zskfpttuylvwkaeiyhoxaazzveuyreepewabfbxcsjoohwenly", "viqalcwatyszinikyhoxaazzveuyreepewabfbxcsjoohwenly", "zkylfzceyopyinykyhoxaazzveuyreepewabfbxcsjoohwenly", "obymbudytgayjzxpyhoxaazzveuyreepewabfbxcsjoohwenly", "ssaocchhzhswhedxyhoxaazzveuyreepewabfbxcsjoohwenly", "yqahrbcctfchiuhkyhoxaazzveuyreepewabfbxcsjoohwenly", "gzylncwibhsbbuvcyhoxaazzveuyreepewabfbxcsjoohwenly"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.125, 0.0, 0.019230769230769232, 0.0, 0.0625, 0.038461538461538464, 0.01391559829059829, 0.08928571428571427, 0.02403846153846154, 0.125, 0.0, 0.1607142857142858, 0.01493055555555556, 0.07692307692307689, 0.25};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0000000000000004, 0.0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0000000000000004, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 1.0000000000000004, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 1.0000000000000016, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbabbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0000000000000018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"baabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.21746031746031785, 0.0, 0.0, 0.05582010582010591, 0.0, 0.01640211640211643, 0.0, 0.0, 0.0, 0.0, 0.057936507936508015, 0.2174603174603177, 0.2174603174603177, 0.21746031746031774, 0.0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"bbbbbbbbbabaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaabaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbbbbabbabbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbaabbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbabbbbabbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbabbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbabbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbabbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbaabbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0000000000000029, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"abbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "baabbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaababaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaababaababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbbbbbbaabbaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaababaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aababbbbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaabaaaababaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbabaabbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbabbbbbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaababaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.11086580086580096, 0.0, 0.0, 0.0557647907647908, 0.0, 0.0, 0.0461156898656899, 0.0, 0.0, 0.21167374292374264, 0.0, 0.0, 0.5273809523809525, 0.048199023199023236};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"bbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbabbbbbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "baaaaabaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaababaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babbaababbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abababbbababaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbaaaaabbaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaababbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabbaaaaaabaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbaaababbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babaabbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baabbbbaabaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.08138577340705001, 0.1487333454848654, 0.11878508185499076, 0.0, 0.006795104892694994, 0.050617239902954136, 0.19437924774442336, 0.0, 0.0, 0.05325930907997774, 5.792291126637631E-5, 0.0, 0.34598697472177686, 0.0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"bbaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbaabbbbbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbabbbaabbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaabaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babaabbababbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbbaaababaababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabbabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babbbbabbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbababbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "baabbbaaabbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabbaaababbbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbabbabbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaabaabbaabbaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbaabbbabbababaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ababaabbabbbaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabbbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {4.929906422504687E-4, 0.0, 9.858149036158816E-4, 0.46908325273732077, 0.0024804526677396897, 0.0, 0.3005132815164577, 0.0, 0.0, 4.147500382016938E-4, 2.9518246637228726E-4, 0.0, 0.19022114132765267, 0.001957144670123016, 0.03355598903027509, 0.0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"ccccccccccbccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccbccccccccccccccccccccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccacccccccccccccccccccccccccccccccccccccc", "acaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccacccccccccccccccccccccccccccccccccccc", "cccbcccccccccccccccccccccccccccccccccccccccccccccc", "ccccccaccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccbcccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 1.000000000000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"cccccbcccccccacccccccccccccccccccccccccccccccccccc", "bbbbbbbbcbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccbcccccccccccccccccccccccccccccccccccc", "ccccccccccaccccccccccccccccccccccccccccccccccccccc", "cccccacccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaaacaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccaccccccaccccccccccccccccccccccccccccccccccc", "ccccaccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbbabcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaacacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0000000000000027, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"cccacbcccccccccbcccccccccccccccccccccccccccccccccc", "bbbbbbbbbbcbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccbcccccccccccccccccccccccccccccccccccccccc", "aaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaacaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaacaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccbcccccacccccccccccccccccccccccccccccccccc", "bbbbbcbbacbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccbccccaccccccccccccccccccccccccccccccccccccc", "cbccccbacccccccccccccccccccccccccccccccccccccccccc", "caaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbcbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbcbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccacccacbccccccccccccccccccccccccccccccccccc", "cccbccccbccccccccccccccccccccccccccccccccccccccccc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.5238095238095243, 0.12142857142857161, 0.14761904761904784, 0.0, 0.0, 0.0, 0.0, 0.0, 0.20714285714285743, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"ccccbcccaccccccccccccccccccccccccccccccccccccccccc", "aaaaaaaacaccaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "acaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbabcbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbcbbbbbbabbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccbccbccccccccccccccccccccccccccccccccccc", "ccbcbcaccccccccccccccccccccccccccccccccccccccccccc", "bbcbcbbbbbbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccbccccaaccccccccccccccccccccccccccccccccccccc", "ccacaccacccccbcccccccccccccccccccccccccccccccccccc", "ccccccbccccccacccccccccccccccccccccccccccccccccccc", "ccaccccccaaccccccccccccccccccccccccccccccccccccccc", "ccccccccccccaccccccccccccccccccccccccccccccccccccc", "baaabaaacacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.13412698412698448, 0.4071428571428584, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03730158730158741, 0.42142857142857276};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"bcaaaacccabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbabcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "accacaccacccbccccccccccccccccccccccccccccccccccccc", "abaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aabacaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bcbabbbbbbbcbbaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbabbbbbbbcbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bacbacaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbcababbcbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "acaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "acabbaacaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccbbcacccccbccccccccccccccccccccccccccccccccccc", "babacbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "accbbbababcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "acccacccccccccaccccccccccccccccccccccccccccccccccc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.28573232323232334, 0.16958874458874448, 0.0, 0.2857323232323232, 0.0, 0.09783771783771787, 0.0, 0.1456665556665557, 0.015442335442335444, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"bcbcabbcbbcabaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbcabbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbcbbcccbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbabbbbcbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "caaccccccbcbccbacccccccccccccccccccccccccccccccccc", "caaaccaaaaacaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabcaaabccacacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccaaacaccaaabaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccbbaabbaaaabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cbcabcaccacbaccbcccccccccccccccccccccccccccccccccc", "ccabaaaabcaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaacacccccabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "acaaabaaaaaaaaccaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaabababbcaacbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccaaccccaccbacccccccccccccccccccccccccccccccccccc", "aaaaabcbabaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.277157726557815E-5, 0.0, 0.0, 8.965542738834663E-5, 0.0, 0.16505104745530247, 0.08004726754726756, 0.0448756655199515, 0.002276747361490728, 0.0, 0.1816781656242851, 0.11266827935694364, 0.27145160886207087, 0.01636135255523011, 0.0, 0.1254774387128026};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"aaccccaaaaabbbcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccccacccccaccccbcccccccccccccccccccccccccccccccccc", "cabbacacbbcccaaccccccccccccccccccccccccccccccccccc", "aacabbcbcababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbaacacabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbccbabbccccccccccccccccccccccccccccccccccccccccc", "acbcaaacbbacbaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "caacaacbbaacbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aabaabcbbaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cbbacbcbbbbbcbccbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccababaccbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaacaccacccccccacccccccccccccccccccccccccccccccccc", "cbbbbbbbaaabbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cabbbbbbcbabbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbcabbbabaabbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaacbcbbaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.146329617269127, 0.0, 2.0465709412129153E-4, 0.033029766124536224, 0.23458687896939026, 3.7757933885857764E-7, 0.05455704214008598, 0.12920864482271735, 0.19580716442403334, 0.0, 0.0014972013520645733, 0.0020494355140101206, 2.7561307161222355E-4, 1.3627006972884575E-6, 3.201208034129177E-4, 0.20213211813485202};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"yyyyyyyyytyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "ppppppppppppppvppppppppppppppppppppppppppppppppppp", "eeeeeeeeeeeeeceeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeueeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "wwwewwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "ottttttttttttttttttttttttttttttttttttttttttttttttt", "eeeeeeeeeeeeteeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "aaaawaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ssssstssssssssssssssssssssssssssssssssssssssssssss", "ssssssssslssssssssssssssssssssssssssssssssssssssss", "ggggggjggggggggggggggggggggggggggggggggggggggggggg", "flffffffffffffffffffffffffffffffffffffffffffffffff", "vvvvvvvvvvvvvvpvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "nnnnnnnknnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "ffqfffffffffffffffffffffffffffffffffffffffffffffff", "ggggggggggggoggggggggggggggggggggggggggggggggggggg"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.02, 0.0, 0.0, 0.0, 0.0, 0.9800000000000005, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"ttyttttttttttttttttttttttttttttttttttttttttttttttt", "lslllllllllllljlllllllllllllllllllllllllllllllllll", "cdcccccccccccccccccccccccccccccccccccccccccccccccc", "uuuukuuuuuuucuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "llllllllllllltzlllllllllllllllllllllllllllllllllll", "toooooooooowoooooooooooooooooooooooooooooooooooooo", "jfjjjjjjjjjjjejjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "gggaggxggggggggggggggggggggggggggggggggggggggggggg", "yccccccccccccccqcccccccccccccccccccccccccccccccccc", "zzzzzzzzzxzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "aaaaaaaaahauaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "jjjohjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "vvqvvvvvvvvvvpvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "tttttjtttttttttttttttttttttttttttttttttttttttttttt", "ssssossbssssssssssssssssssssssssssssssssssssssssss", "uuuuuwuuuunuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.02666666666666667, 0.0, 0.0, 0.0, 0.0, 8.163265306122449E-4, 0.013333333333333334, 0.0, 0.9591836734693885, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"bpnbbbbbbbbbbebbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "gtggbggggggggqgggggggggggggggggggggggggggggggggggg", "yydyyyyyyfyycyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "uuuuuxuuuuuuouuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "ywdyyyyyyyyyyhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "llqlllllklllllhlllllllllllllllllllllllllllllllllll", "sssosssssssgsssossssssssssssssssssssssssssssssssss", "iiiiiuiiiimiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "qqqqyqqqqqqqvqcqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "rrrdrrrrrrrrrsvrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ccnccccvjccccccccccccccccccccccccccccccccccccccccc", "vevlvvvvvvevvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "iyiviiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ffkfffofffffyfffffffffffffffffffffffffffffffffffff", "uuuuuuuucuuouuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "xxxxxbxvxxxvxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9395918367346948, 4.0816326530612246E-4, 0.01, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.04, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"bbipbebbbbbwbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "hyghhuehzhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "nvijiiiigiiiisiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ddgifdddddqdddvddddddddddddddddddddddddddddddddddd", "cqqcqqqqqqcqqhqiqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "hhtqhhhzhhhhhehhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "uuusuuuikuuvuvuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "llcelllwlellllllllllllllllllllllllllllllllllllllll", "kkrkkkkzkkchkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "iiuiiiciigniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "uxxqxxvxdxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "ccchcdcacccacccccccccccccccccccccccccccccccccccccc", "wfwwwzwdwdwwwewwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "gjgwwgggqgggggyggggggggggggggggggggggggggggggggggg", "araaaaaaaaaagmzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "iiitdpiiziiiviiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.08, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0033333333333333335, 0.0, 0.0, 0.916666666666668, 0.0};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"ffpfvydfqffffwefffffffffffffffffffffffffffffffffff", "qcvkkmkkkkkkdkktkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "ccccectnckdcccfccccccccccccccccccccccccccccccccccc", "eqegemaeeeeeyeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "zoogroeofodoooosoooooooooooooooooooooooooooooooooo", "mmfmhezmmmhmmmlmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "lllvdfllllkltlllllllllllllllllllllllllllllllllllll", "lwwmcwwwwkwwhwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "ghhdhhhhhdythdyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "qwqquvpqzqqqqqqyqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qffffkgvfffmkfffffffffffffffffffffffffffffffffffff", "tcfctcycccmcvcckcccccccccccccccccccccccccccccccccc", "hvqhhghhhijhhhhghhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "hhhhqyhvhieshhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "mwwwwlpwwowwwbwpwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "ujgujjsjjbjjmjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 4.0816326530612246E-4, 0.6451836734693884, 0.02, 4.0816326530612246E-4, 0.0, 0.0, 0.02, 0.0, 0.0, 0.0, 0.27400000000000013, 0.0, 0.0, 0.02, 0.02};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"zgxgcgnvgqpngopggggggggggggggggggggggggggggggggggg", "wwwgwwmcovfxwwwiwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "xooosouqtpoosozgoooooooooooooooooooooooooooooooooo", "zmjzszejzzbzezzpzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "nnnxlxndqdnunrrnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "yxwwpwawfwwwnnwfwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "dwofsvwhwwwwsnwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "yydysiydybpvelyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "sbaqbwbbebnzbebkbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "npfnnunononnnkpvnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "fyyyfyjbyyuyjhuoyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "swmwwwoizrwhcnwqwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "cecrgcfrfrctanhccccccccccccccccccccccccccccccccccc", "twkkkzqwwkwvwtrlwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "nwkndhtvnoninynnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "milajrauawaruaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 4.166666666666667E-4, 0.0, 8.163265306122449E-4, 0.09836734693877593, 0.0, 8.163265306122449E-4, 0.02, 0.06, 0.0, 0.0, 0.8195833333333316};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"dbrhnbcwfwcukcancccccccccccccccccccccccccccccccccc", "xrzdrfrburkfeajirrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "bspppwwdblghupxapppppppppppppppppppppppppppppppppp", "vtrzpreeecezbutqeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "kisdxeizztzzzjkwzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "kirphdrhhylwgzhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "bbbsstoymaubgzbmbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "nzrogzzybxrwfgozzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "azzttszkmzcutouzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "eroryrrgdwbhhixyrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "mtafybttcqloxbtttttttttttttttttttttttttttttttttttt", "ayyyykmdyvcqwzluyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "adgmlapsllrxxtvtxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "swmluoxqoquhloomoooooooooooooooooooooooooooooooooo", "ssemsmsizqrgmsyvssssssssssssssssssssssssssssssssss", "jccckcoojgropjcccccccccccccccccccccccccccccccccccc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.043673469387755084, 0.04, 0.03795918367346939, 0.02, 0.0, 0.0, 0.7363265306122454, 0.02204081632653062, 8.588435374149658E-4, 0.02, 0.02, 0.0019982993197278894, 0.03714285714285715, 0.0, 0.0, 0.02};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"gpoflegrzkmvqxyqzanqfgwkhuszknxkvnouvwxhgketshnbbk", "tkpngqypoukecyxjiqxueawxypeaxwvpogaevejpyueosfnxwl", "vwhcwbgepzghfdslwerkrrcrumcnsptimisexfsuzqellglzqk", "uuhpbhqvwubtjlyxgktryrriizeqfsgruouevegeanxrqqzdik"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.2060772904906641, 0.24903741496598647, 0.3293715663878874, 0.21551372815546216};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"cnvfjdcsfdcagqxxoxqensuyijlnkdaxkiddvyroohqbcbfavp", "bavtbzvnyenjkaxkuttzxkkzsndzkaqlzjadoifqhedkciffyj", "btstbrrdfykrtaxnwxshkhbbiywdklgfciqddzxeqasmiaecan", "ddqybxzdfjvihazkjwvlhrxtilveuzbjzhndkmldmwbfcgoivs", "luwjlepdfzkwjaxkluzdyzupfskmzskwliplexxohbelcattew"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.2712100822641037, 0.21839883309868202, 0.2740292515032371, 0.1575554813586736, 0.07880635177530537};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"uceexbhxqoeejhtvmmbbjefcjrrdwcsjlbxccqqjtdjapgqwgd", "ozagdlhxncogrnsxhkbqjldcpqcltwmocbtvmdixtdfcpmutey", "oayrpbzxnbbjseymdmdcjuccrihgcdklcbokdnpyadzzzzwrio", "nymuibrjwfivptopevbijgzofdstktypcbbcmvwmxdlzphziti", "dtlawbhrndcbwstgmwbbsypcnagcnncicgxcmekwidbfpqszoq", "hubwwbhenfmscuwjdmjbrdncdsdvivazcbaclvbhvzvtpamtbt"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.12382145244036698, 0.13444066331604684, 0.18026242790541902, 0.05750671505403826, 0.21272680969881216, 0.29124193158531997};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"wfmfnyqkxxtlykbfrpsgqnbpemwyqcxheidcxouinepeawuwhb", "pcffukqpirtcmjbxfpapinipempbmlzywcrixysuvehnskawtb", "qrsfcecgifwnhndfrpaglnsrjmrbqwfeyyafgejdneunaogieb", "lnfnwvjyifxrxcbhqppgvncjemtbikgeiyukxlrqnmyeakaiab", "qaffefzpifyzzlbftpagynvzemulhfsedmukjmbepefeakkjhj", "nxffroopiotokglfdpagrxopewhbnblexwkiupdtsedkakhhqb", "bjffvzvviftaqbbfbyagrpagemuuzzaealtwyirvnfjfoxaffb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.05375043242707375, 0.08312477584674433, 0.27822046793556493, 0.07741268509795934, 0.12460878150716673, 0.11174998443215144, 0.27113287275334236};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"obbhvrrqopnosvkadnljtaaovybzaovvsypnekaplagfxaaieo", "nbbhcwminfbtdtaazcbbdaabnhtilshfnbclevaslagysqaied", "qbntclqlwvpoayrnoqbflaabkmqjaojmvhqyecaplggfkauied", "pbbhcncizabogszyfrbtoaybonguaoxieimpwkaklagxwajiew", "ubehtvpgzvbobdjsfgbvfaabgmbeaoudqmkfeaapsagfyabxej", "ubshchwirsbofjtrffmrwxabyustaoungwanerjvlrgfjraijd", "gbbhcmmixwbowxpljvbriaebiufgqotadqfnexaplavfgayjxd", "ygchondptvcoqybahjbygaabhibrawkprfiterodlagfaaaied"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06043426403301264, 0.30231028275133914, 0.05388904376625166, 0.08049387761408708, 0.21207382500067062, 0.07486773580477286, 0.11152227245498661, 0.10440869857487867};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"hokipdjplmdtwbrdadgakdzciqikddursbqeabdbxthsffvump", "rbemhxjslydbabidaggaudotiqjkdderwbqjkbdphehgzlqscm", "hbfspupeirdbubkhyghaydociqlkdderabreeldjfehrffzszm", "kbejggpgcwdbebizamgaiwociqokhqerwbrejbdcfnlfgfyycm", "hfecfvpqbydbxbzdazguidoliqgrdvwrydyeubdgfehnpfqscq", "jfedrepaynxbybjiaulawdociwckfdevgrqenldsgehsjfkkom", "hbgicydughdbjbtdargtsdqcozykdderwbqxrydefehvrfpscm", "nferecvigjdbgbldasgaidoriqokddevybqtvbppyeptlffzcw", "hbezmzptyndbtfadaigaidociqqkddnrqbqfzqdrfhhtofascm"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.15328193250257094, 0.09331268057393188, 0.10074605604169194, 0.10087210261414, 0.10574487162413847, 0.1126130460084194, 0.13924294130663298, 0.06905216886630154, 0.1251342004621707};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"cpihamababaiesjldnakdeyocdwkofcbcdssftbcfvimdkpgig", "crinkaawjbaneugldlakbeyocdcczwchgdzlfbbczwczaijyiu", "cdijagabemaiecglvrahbnkoodvhoskncdjkcxfcfocesyrgim", "coiouuabfgaiecglupakbeopclucbhcdcfkybbbcwbcxbopgsg", "cdtoaeacebalecgwddaebewoedgctyctcikvebbcmecxuitgtg", "cdizxcadebaiicgldyakbmqocdisouchcdrazbbcfvcxrikgig", "tdifarasjouiecilddapqofzcdscohczcivhfhbcfrcgqjnhng", "cdyxafybmbaiecrldbakboeocdbkooitcdkdrbbczhcpxingtg", "cdisababebepecjldhaibetocdscbhcacxwrhbbfzucioisgig", "cqiwapabjbarecgldzcnbexocdvkshgycdksgbbcfxcfjimgig"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1144414133661748, 0.1371380300994232, 0.10852539527372816, 0.11748190090630203, 0.07866678232382816, 0.0925498182576235, 0.05211321640384276, 0.13805973964965373, 0.11881645540695317, 0.042207248312464064};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"bukgaedkbcfaconbivqsslaszbtccadmdbmdaljxoxcdrbbici", "bkctamdkbefacicscozgylsiabicckpffpfdaygbcddlbbfkcd", "bbcgagdckcnedicfjbecyladfqlcpadzrbdhplzocdpdbbodyk", "bbcgaedkpcfacrcbaqjcduajubiczaxadhqdalzbcdddbqbdeb", "wougaeyuvcfacicbabecvladatinyadatbdhalsbzdceqbbncz", "bhclaiewbclacimbabfoisassbimcafnybfiangbcdvsbbbycd", "bbzlaezsmclqnjddxbechoadjbvcckwadjddalgbczfdbbbiwy", "bbfguedkbcyacicnibegvlawmtihcansdbddqlgbiddgbxrdcb", "xbcgaedkbczckiobsbecqlnjqbicckdoxbdujlgqcdtxbdfzxd", "bbcgjempqefacidbqgfcwsqoabkccatodbdwapwlcdcdbbynpd", "whxgaedpbcfkyiffweucwzqdvbicxknldbddwwgznjcdbbbdci", "bbcwmgdkjcfcoicfabmcvohdxjiccadakmzdanhyylcjbbldcd", "bbcgaemxbmkacusfabogwladakoicppedbdgalgbcocdbbwdcl", "blcosndqbcracidyxbecyohdabiecadajwddexmncdcdwbvdly", "fhcgvilkjcffcidfzbfgnvadabiicadadeddelgbkscdfbbvcd", "bbcgakyqjcfasicbatpcyotdabiptadvdbinglgbrocvtbddyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.05285091294092251, 0.036465698444839864, 0.08048430678798543, 0.1965309741815821, 0.10545987443123764, 0.03783600727954233, 0.043967357225877975, 0.09047119113799855, 0.04075048350580323, 0.03395508632383912, 0.027746837938799503, 0.03926013314036376, 0.07381896738727423, 0.04529040372318082, 0.0596260573103719, 0.035485708240378167};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"bukgaedkbcfacinbivqsslaszbtccadmdbmdaljucxcdrbficd", "bkctamdkbefacicscozgylsdabicckpfdpfdalgbjddlbbfkcd", "bbcgagdlkcfedicfabecyladaqlcpadzrbdhplgocdpdbbodyd", "bbcgaedkpcfacrcbaqjcdoajubiczadadhqdalzbcdddbqbdez", "wougaeduvcfacicbabecvladatinyawatbddalsbzdceqbbdcz", "bhclaeewbclscidbabfoisassbimcafaybfdangbcdvsbbbdcf", "bbzlaezkmclanjddxbechoadjbvccawadjddalgbczfdbbbiwy", "bbfgaedkbcyacicnibxcvsawmtihcadzdbddqlgbidcdbxrdcb", "xbcgaedkbczakiobsbecqlnjqbicckdaxbdualgqcdtxbdfzxd", "bbcgjedkbefacidbqgfcwsqoabkccatodbddapgbcdcdbbynpd", "whxgaedkbcfkyiffweucwlqdabicxknldbddwwgznjcdbbbdcd", "bbcwmgdkjcfaoicfabmcvohdxjiccadakmddalgyclcdbbldcd", "bbcgaemxbmfacusfabogwladakoicppadbdgalgbcocdbbwdcd", "blcosedqbcracidbxbecyohdabiecadajwddexmncdcdwbvdly", "fhcgvelkjcffcidfzbfgnoadabiicadadeddelgbkscdfbbvcd", "bbcgakyqjcfasicbatecyotdabiptadvdbinalgbrocvtbddyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.04329183020154349, 0.03233726744479101, 0.06046966650696522, 0.15084648699119727, 0.09902497540993106, 0.0457975818740135, 0.047288185395530584, 0.11977645179502533, 0.054574577897609236, 0.06122150666847766, 0.03276846784825812, 0.06713188623370304, 0.06775636672985602, 0.03640395932189494, 0.046828570640649415, 0.034482219040551626};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"bbkgaedkbcfacicbivqsvlaszbtccadadbmdalgucdcdrbfdcd", "bbctaedkbefacicsabzgylsdabicckdfdpfdalgbjdclbbfkcd", "bbcgagdkkcfecicfabecvladaqlccadzrbdhalgocdpdbbbdyd", "bbcgaedkpcfacrcbabjcvoadubiczadadhqdalgbcdddbqbded", "wbcgaedkbcfacicbqbecvladatinyawadbddalsbzdcdbbbdcz", "bhclaeewbcfacidiabfcisadabimcafadbfdalgbcdvsbbbdcf", "bbzlaedkmclanjcbxbechoadabvccawadbddalgbxzfdbbbicd", "bbfgaedkbeyacicbibxcvsawmticcadzdbddqlgbidcdbxrdco", "bbcgaedkbczakiobsbecxlnjabiccadaxbdualgbcdtdsdfzxd", "bbcgjodkbefacicbqgucvsaoabkccadadzddapgbcdcqbbbdpd", "wbcgaedkbcfkticfaeucwladabicckdldbddwwgznjcdbbbdcd", "cbcwzgdkjcfaoicuabmcvzhdxjiccadakbddalgycdcdbbbdcd", "bbcgaedxbmfacusfabecwladaboccppadbddalibcdcdbbwdcd", "blcgsedkbcracidbxbecyoadabiccadajbddaxmbcdcdwbbdly", "bhcgvelkjcffcicfabfgnladabiicadadeddelgbkscdfbbvcd", "bbcgakyqjcfasicbatecyladabiccadvdbidalgbcocvtbddyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06585748835054642, 0.03528130459886264, 0.06956588420825174, 0.08627412140704081, 0.13446225884378218, 0.06111869742616249, 0.0996705641736845, 0.02754441305776042, 0.03764455238854697, 0.047903024318223235, 0.04804073901825079, 0.03851727639734402, 0.10119633771909432, 0.05696352096711856, 0.04860914740586973, 0.04135066971946051};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"bbkgaedkbcfacicbivqsvlaszbtccadadbmdalgucdcdrbbdcd", "bbctaedkbefacicbabegylsdabicckdfdbfdalgbcdclbbfkcd", "bbcgagdkkcfecicfabecvladaqlccadzrbdhalgbcdpdbbbdyd", "bbcgaedkpcfacicpabjcvoadubiczadadhqdalgbcdddbqbded", "wbcgaedkbcfacicbqbecvladatinyawadbddalsbcdcdbbbdcz", "bhclaeewbcfacidiabfcisadabimcafadbfdalgbcdvsbbbdcf", "bbzlaedkbclanjcbxbechoadabvccawadbddalgbxzfdbbbicd", "bbfgaedkbeyacicbibxcvsadmticcadzdbddqlgbidcdbxrdco", "bbcgaedkbczakiobsbecxlnjabiccadaxbdualgbcdtdsdfzxd", "bbcgjedkbefacicbqgucvsaoabkccasadzddapgbqdcqbbbdpd", "wbcgaedkbcfkticfaeucwladabicckdldbddwwgznjcdbbbdcd", "cbcwzgxkjcfacicuabmcvzhdxjiccadakbddalgycdcdbbbdcd", "bbcgaedxbmfacusfabecwladabiccppadbddalibcdcdbbwdcd", "blcgsedkbcracidbxbecyoadabiccadajbddaxmbcdcdwbbdly", "bhcgvelkjcffcicfibfgnladabiccadadeddelgbkscdbbbvcd", "bbcgakyqjcfacicbatecyladabiccadvdbidalgbcocvtbddyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.07285137214183682, 0.09081376585498908, 0.0731455065575274, 0.0657673623878916, 0.14611767489161273, 0.05030502967239044, 0.10584388630845397, 0.029089906278765572, 0.028949377961922318, 0.028246757957916212, 0.04107426136402484, 0.03129654283818461, 0.10416496718409073, 0.0456607603732047, 0.04849699475808494, 0.03817583346910369};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"bbkgaedkbcfacicbivqsvlaszbtccadadbddalgucdcdrbbdcd", "bbctaedkbcfacicbabegylsdabicckdfdbddalgbcdclbbbkfd", "bbcgaedkkcfecicfabecvladaqlccadzrbdhalgbcdpdbbbdyd", "bbcgaedkpcfacicbabjcvoadubiczadadhqdalgbcdddbqbded", "wbcgaedkbcfacicbqbecvladatinyawadbddalsbxdcdbbbdcz", "bhclaeewbcfacidiabfcisadabimcafadbfdalgbcdvsbbbdcf", "bbzlaedkbclanjcbxbechoadabiccawadbddalgbxzfdbbbicd", "bbcgaedkbeyacicbibxcvsadmticcadadbddqlgbidcdbxrdco", "bbcgaedkbczakiobsbecxlnjabiccadaxbdualgbcdtdsdfzxd", "bbcgaedkbefacicbqgecvsaoabkccasadzddapgbqdcqbbbdcd", "wbcgaedkbcfkticfaeecwladabicckdldbddwwgznjcdbbbdcd", "cbcwzgxkjcfacicuabecvzhdxjiccadakbddalgycdcdbbbdcd", "bbcgaedxbmfacusfabecwladabiccpdadbddalibcdcdbbwdcd", "blcgsedkbcfacidbxbecyoadabiccadajbddaxmbcdcdwbbdly", "bhcgvelkjcffcicfibfgnladabiccadadeddelgbkscdbbbvcd", "bbcgakyqjcfacicbatecyladabiccadvdbidalgbcocdtbddyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0767118223138034, 0.11617222201927419, 0.06987411830876322, 0.07638451766525763, 0.08973003906073423, 0.04383480975984319, 0.10819148254400832, 0.03796305954997451, 0.01905962146896534, 0.0512174454587139, 0.03962744076345573, 0.034971183110860254, 0.11819585889110965, 0.04219503228319486, 0.03875582312335827, 0.037115523678682455};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"bbkgaedkkcfaciujabesvladzbiccadadbddalgucdcdrbbdcq", "bbctaedkbcfacicbabegyladabicckdfwbddqlgbcdvlbbbkfd", "bbcgaeykbcfacicfabecvladaqlccadzdbdhawgbcdcdbbbdcd", "bbcgaedkbcfacicbabecvladabiczayadhqdalgbcdddbqbdcd", "wbcgaedkbcfacicxqbecvladaticyadadbddqlgbxncdbbbdez", "bbclaeewbcfacidbabfcisadabimcadadbddalgbcdvdbbbdcd", "bbzlaedkbclanjcbxbechladabiccawadbddalgbczcdbbbicd", "bbcgaedkbeyacicbibxcvladmticcadazbddalgbidcdbbrdco", "bbcgaedkbcfaciobsbecxlnjabiccadaxbdualgbcdtdsdbzxd", "bbcgaedkbefacicbqgecvsaoabiccadadzddapgbqdcqbbbdcd", "bbcgaedkbcfkticbaeecwladabikckdadbddawgznjcdbbbdcd", "cbcwagxkjcfacicbabecvzhdabiccadadbddalgycdudbbbdcd", "bbcgaedxjmfacucfabecvladabiccpdadbddalibcdcdibbdcd", "bbcgsedkbcvacicbxbecyladabiccadadbddalgbcdcdwbbdcd", "bhcgaelkjcffcirbibecnladabiccadatbddelgbcdmdsbbvci", "bbcgakdkjcfacicbacecyladabiccadvdbidalgbcocdkbjdcl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.037613112333221774, 0.027784374433692246, 0.08992334456014561, 0.12616942472751377, 0.02675732946561431, 0.09697570529358306, 0.1277699072132799, 0.02853716501240752, 0.0133493213003962, 0.041437490615391495, 0.04290470282968175, 0.03670536339599672, 0.060985129654259077, 0.1880594907804566, 0.020695372025546218, 0.0343327663588133};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"bbkgaedkkcfaciujabesvladabicvadadbddalgucdcdrbbdcq", "bbctaedkbcfacqcbabegyladabicckdfwbddqlgbcdclbbbkfd", "bbcgaedkbcfacicfabecvladaqlccadzdbddalgbcdcdbbbdcd", "bbcgaeukbcfacicbablcvladabiczwyadhqdalgecdddbqbdcd", "wbcgaedkbcfacicxqbecvladabicyadadbddqlgbxncdbbbdcz", "bbclaeewbcfacidvabfciladabimcahadbddalgbcdvdbbbdcd", "bbclaedkbclanicbxbechladabiccawadbddalgbczcdbbbdcd", "bbcgaedkbefacicbibxcvladmticcadazbdtapgbidcdbbrdco", "bbcgaedkbcfaciobabecxlnjabiccadaxbdualgbcdtdsdbdxw", "bbcgaedkbefacicbqgecvsaoabiccadadzddalgbqdcqbbbdcd", "bbcgaedkbcfkcicbabecwladabikckdadbddawgznjcdbbbdcd", "bbcwagxkjcqacicbabecvzhdaziccndadbddfogbcdudbbbdcd", "bbcgaedkjcfacucbabecvladabiccpdadbddalibcdcdibbdcd", "bbcgsedkbcfacicbxbecyladabiccadadbddalgbcdcdbbbdcd", "bhcgaedkjcfacicbibecnladabiccadatbddelgbcdmdsbbvci", "bbcgakdkjcfacicyacecyladabiccadvdbidalgbcocdkbjocl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.018024997942205596, 0.013468341951099552, 0.16415935346366695, 0.016855559294993754, 0.019938197383277772, 0.04476268347749629, 0.17048901657541302, 0.009075975961488935, 0.015660565798487413, 0.029619155223832794, 0.043038084573614195, 0.007195664318781209, 0.10554436609826837, 0.30041193772819735, 0.03540820427765679, 0.006347895931518362};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"bbkgaedkkcfaciubabecvladabicvadadbddalgucdcdrbbdcq", "bbctaedkbcfacqcbabmcyladabicckdfwbddqlgbcdclbbbkfd", "bbcgaedkbcfacicfabecvladaqlccadzdbddalgbcdcdbbbdcd", "bbcgaeukbcfacicbablcvladariczwyadhqdalgecdddbbbdcd", "wbcgaedkbcfacicxqbecvladabicyadadbddqlgbxncdbbbdcz", "bbclaeewbcfacidvabfciladabiccahadbddalgbcdvdbbbdcd", "bbcgaedkbcfanicbxbechladabiccawadbddalgbczcdbbbdcd", "bbcgaedkbcfacicbabecvladmticcadazbdtapgbcdcdbbrdcd", "bbcgaedkbcfaciogabecxlnjabiocadaxbdualgbcdtdsdbdxw", "bbcgaedkbefacicbqgecvsaoabicuamadbddalggqdcqbbbdcd", "bbcgaedkbcfkcicbabecwladabikckdadbddalgznjcdbbbdcd", "bbcwagxkjcqacicbabecvzhdaziccadadbddfogbcdudbbbdcd", "bbcgaedkjcfacicbabecvladabiccpdadbddalibcdcdibbdcd", "bbcgsedkbcfacicbxbecyladabiccadadbddalgbcdcdbbbdcd", "bhcgaedkjcfacicbibecnladabiccadatbddalgbcdmdsbbvci", "bbcgakdkjcfacicyacegyladabiccadvdbidalgbcocdkbjocl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.026642712386111912, 0.009850717759865502, 0.1276008760843421, 0.008186447594382036, 0.013795120025255857, 0.04510213078155621, 0.24934425180893907, 0.05226815412342997, 0.003990180064031595, 0.008145649391245896, 0.044132069944733246, 0.0071782975785100395, 0.12250499962346695, 0.249324911289104, 0.02910994587820132, 0.002823535666814078};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"mkpvjmxeujbyjftyqlomowtigzjoyijzmepnrxfm", "mepzrdhxjhixdnjhkwonjqgfrebrpgosuhwzixvi", "ybwxyatjmpyxlmnsojhprchzkggeghsbrqwwwewk", "jybvysipvsdanbajkkumrsnsasbuzadbhtyydhjw", "vfppvebmnwahrnjqjxemrpqpvxjcbtmomatpkffr", "jqsbdjgptvcafwxgiurzjqnhmtwafvhfjgbmfuyn", "cqivlqdlgrkzyxeuvorqlwvupxfsijglichfrltd", "ecwtauyhzrendnzdopncdmetbvynvwfxcqduvpip", "fsslmftemitjyrzqzqroapuxxqkeflpahiedsnbk", "rklkxluuqiypjpspjmsmhnuaxwsrichgmvohubtz", "qknouaqyehvuxgvevbyxkvqkthuxrnyliicdsdqz", "npexrvheuclkfkvftalzdugcqdlmsdwixcbqntsg", "jjpwyxlrdkmincuugoyegvrwqwyulrwozamhwhgl", "yqnmniqewwpkvqqhqojvtfadqvpdyldnxpagayzk", "xrvjdgywbhfeudyrcduhydjgwabhebmpxskvtqbp", "dhwiccccyjmejmpjeeepdsvjoqskdhfindcsdgwn"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.017864372469635625, 0.0615384615384615, 0.15918803418803407, 0.10076230076230058, 0.06388888888888884, 0.05, 0.11447368421052637, 0.07373527373527358, 0.05, 0.02562370062370064, 0.05, 0.010135135135135136, 0.08589743589743587, 0.09779014844804321, 0.03910256410256409};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"phqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvsrtkjpre", "pggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxf", "xtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipy", "amyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknly", "jyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiut", "eiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhd", "izcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxo", "hgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjen", "pevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrs", "rtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdz", "qsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtgjoparm", "owzdqyoxytjbbhawdydcprjbxphoohpkwqyuhrqzhnbnfuvqnq", "qlrzjpxiogvliexdzuzosrkrusvojbrzmwzpowkjilefraamdi", "gpnpuuhgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxuglsd", "smzcnockvfajfrmxothowkbjzwucwljfrimpmyhchzriwkbarx", "bgfcbceyhjugixwtbvtrehbbcpxifbxvfbcgkcfqckcotzgkub"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.024689535388623517, 0.021632653061224496, 0.08465838509316785, 0.07733843537414961, 0.03688775510204079, 0.07387264248900301, 0.10160207700101308, 0.032244897959183706, 0.08, 0.07952963053861682, 0.04085144927536227, 0.06857142857142863, 0.06333333333333335, 0.02, 0.05816489361702137, 0.1366228831958317};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"aababababccccaby", "ccccbabababaacby", "bbbbacacacaccbby", "ccacacacabbbbcyb", "bbcbcbcbcaaaabby", "ccbcbcbcbaaaacby", "ddddeeefffgggdby", "eeeedddfffgggeby", "gggeeedddffffgby", "xxxxyyyzzzzzzxby", "zzzzzzxxyyyyyzby", "xxxxxxyyyyyzzxby", "xxyzxyzxyzzzzxby", "xxxxzzzzzyyyyxby", "ttttuuuvvvwwwtyb", "ttttuuuwwvvvvtyb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.34432234432234426, 0.12344426406926409, 0.14515276390276388, 0.21022727272727265, 0.11503080253080254, 0.06182255244755245, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"babaaaabbbabbababaaaabbaabaababbbbbbbbbabbabbbabab", "babaaabbbababbbaabbaabbababbaaaababaabaaabbbabaaab", "aaabbabbbbaabbbaaabbabaaabbabaaaabbbbbabbbbbababbb", "abaabbaaabaaaabbbabbbbbabbababaababbbabaabbbaaabbb", "bbbbaaaaabbaabbababaaabbabbbabababaaaaaababbababba", "babbbaaabaabaabbbbbababaaabaabaaabbbbbaaaabaabaaba", "abbbaaabaaaaabbabbaaaabbabbabaaaaabaaaabbbbbaaabaa", "bbaaabbbabbaabbbbabaaabababbbaabbbaabbbaababaaaaab", "aaabaabbbbbbbbbabbbbaaaabbbbaabaabbaaaaaabababbbaa", "aaababaabaaabaaaabbababbbabaabbbbbaaaabaababbbbbbb", "ababababaaabbbaaababaaababaaabaabaabbbabbbbabbbabb", "abbbaaaababbaabaabbbaaaaaaababbaabaaaababbbaaababb", "ababbabaababbbbaabbbabaabaababbbbabbbabbbabaabbbab", "bbbaabaaaaabaabbaabababaabbbbaabaaaaaabbbbababbabb", "babbbbbaaabbbabbbbabbbabaaabbbbbabaabaabbbababbbab", "babbaaaababaabaabbbbaabaabbbababaabaaaaaabababbaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.04100953087567461, 0.05852567210729516, 0.02889599900885718, 0.049847517092403475, 0.05622465564831787, 0.08843900986119048, 0.12441728441828824, 0.05366679404752594, 0.040098727136792536, 0.06330045355075012, 0.07519823440139768, 0.11008728563973498, 0.03200113502291542, 0.06505994370011337, 0.022185118738398044, 0.09104263875034502};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"abbbbbababbabbbabbabaabbbabaabaabaaababaaaababa", "baabbabaaabaaaababbabababaabbbaaaaabaabababaaba", "bbabaabbbababaabaaaabaabaabbbabbbbbbaabbbbabbaa", "babababbbabaaabbaababbabababaabbbaaaabbbabbbaab", "abababaaabbbaaaaababaaabbabaaaabaabbbabbababbbb", "bbabababbbbbbbbabbbabbabbbbaababbabababbbbaaaba", "babbabbaaabbabaaababbabbbbaababababaabbbbababba", "aabbbaaabbbababbbbbbbaababbbbbaaabbbabbbbabbbbb", "baabbbaaaaabbbbabababbbababbabbbbbabaaaaabbaaba", "abaabbaaabaaaabbaababbabbbaaabaabaaaabaabbbbbba", "aaaaaaabbbabaaababbbbaababbbbabbaabbbabbaabaaab", "abbabbbaababbaaabaaabaaababbabababbbbbbabbaabab", "abbaaababaabaabaaaababaaabaaabbbabbabbbaabaaaba", "aabbbabaaabbbbbaabaaababbbaabaabaaabbaaabbbbbaa", "bbbabababaaaaaabbaaabbabbbbabbbabaaababbabbabbb", "abbaabbaabbbaabbbbababababbabaababbbbaaabbbbaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06834659805533044, 0.13928688581689316, 0.04688597160740335, 0.04894775923596374, 0.07721685644828398, 0.00975159345566618, 0.041064444136208855, 0.011127419777891938, 0.055455874850279835, 0.09978629095367358, 0.07737766583569826, 0.0489608539973115, 0.14295820821439287, 0.07024092572658616, 0.03254970892558488, 0.030042942962831398};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"aabbabbbbbaaaaaaabababbabbabbaabababaaabaabaabaaab", "abbaaaaaabbabbbbbbbbbababbbaabaabbbbbbabbabaabbbaa", "aaabbbababaabbbaaaabbbabaaababbbabbbaaaaaaaaaaabab", "bbbbabbababababaaabbabbbbababbabaabbbbaababaaabaab", "abaabaabbabbbaabaaaaaababbbbbbbaabaabbbbbababaabba", "bbbabbbbaaabbbabbaaaabbaabbbaaabaaaabababbaabbabaa", "babbaabaababbaaaabaaaabaaaabbabbabbababaaaaabbbaab", "abbbabbbaaababbabaabbbaababbbbaababaabbbbbbaabaaba", "ababbabbaabaaaababaaabaaaabbbbbbababbbaaabbaabbbab", "aabbbbabbaabbbabbabbbababaabbabbaaabaaababbbabaaaa", "bbbbbbaaaaabbbbababababbaaabbaabababaaabbbabababab", "bbaabbbabaaaaabbababaaaaaaabbaabbbbbaabaaaaaababab", "baaaaaabbbaabbaaababbababbabaaaabbaabbbababaabbbab", "baaabbabaabaababbbaababaaaabbaabaaaaababaaaaabbaba", "bbababbbaabaaababaabbbaaabbbbaaaabbabbabaaabbbabaa", "abababbbaabbbabaaaaabaaabaabaaaaaabbbbabbbbbaabbba"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06833941527255451, 0.03906856388061955, 0.10426409655150402, 0.04990419621925052, 0.056382614715882955, 0.051654272300443276, 0.09814616804926896, 0.03147507231762539, 0.04443913104945639, 0.03345759037386602, 0.026755135982657833, 0.08882638835052946, 0.061942328896451924, 0.1318077770820785, 0.045993866109474965, 0.06754338284833701};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0666666666666667, 0.0};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"baaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaez", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaez", "aabaaaaaaaaaaaaaaaaaaaaaaaaaabaaaabaaaaaaaaaaaaaez", "aaabaaaaaaaaaaaaaaaaaaaaaaaabaaaaaabaaaaaaaaaaaaez", "aaaabaaaaaaaaaaaaaaaaaaaaaabaaaaaaaabaaaaaaaaaaaez", "aaaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaabaaaaaaaaaaez", "aaaaaabaaaaaaaaaaaaaaaaaabaaaaaaaaaaaabaaaaaaaaaez", "aaaaaaabaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaez", "aaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaaaabaaaaaaaez", "aaaaaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaaaabaaaaaaez", "aaaaaaaaaabaaaaaaaaaabaaaaaaaaaaaaaaaaaaaabaaaaaez", "aaaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaabaaaaez", "aaaaaaaaaaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaabaaaez", "aaaaaaaaaaaaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaabaaez", "aaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaabaez", "aaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabez"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007, 0.06250000000000007};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"cbddaaadbdcdccddbaacbbbcbabcdbdbcdbddbcaabacddbaac", "cbdadbaadabcbabcdbdbbacbccbacbcbcbbccbcbbaadabbdcb", "aabdbdbcdddbacdbabdcdacddcabbdccddbaccdcbcdcacdaac", "dddbccacdbbbdaaabdcabacacddbddaccdaabacbbacbadbbca", "bdaadcdcdcbdbdcbdabcbccddccbaabbdbbddabcddcacabcac", "abacbaadbaaccdddccaaaddcdbdaddcdbcbcccbdcbbabaadca", "dddcbcaacdaadbcadbcaabccbdcbcbbcaaabcacaacaddddcac", "cadacadbcccdacaadcbbdbddaccdacbddadbbdcdbacbccbcbc", "daddddbcdcaabdbabcddbaadbccdadbadbdcaaadcbadababdd", "baabdbdbaaacadddcddcdcddbaabbdbcdbdccdaddabdaaccdb", "acdabbabcbadadadcdcccbcdacdcacabbdbcabadcaccadccca", "aaccdcbcbbabcbadabaaadacbabdcdacdcbcacabdbcccdbcac", "cabdccdaccdcadabbadccddabbdcadacdbbcabccdbadaabcaa", "acdddaacdacddbbadbbbdaddaddbbdbbcbabbbdabbaadbbccc", "abddadcdaacbbaccbadbaacabbbcadaaaddacbdcbcadccbaca", "bdaddbbbdbaabbdabcbbaddacbddbbdcadcabdbaababcabacc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.05432815927582456, 0.046327838961951154, 0.03953676887344854, 0.06636996220532587, 0.05107350830347117, 0.07239375692794048, 0.08289545828627308, 0.040720590933340295, 0.06742317793595974, 0.05154029548090417, 0.06147029568227898, 0.08549325421565576, 0.05281430454099366, 0.043027244833556, 0.11780159304870304, 0.06678379049437402};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazyvlkbujxl", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaafonwnnnivh", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaapbvphavmae", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhgjurxkia", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaagibhimrmsx", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacneqgjagfh", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaauftkiaofob", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahdreefiqnn", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaatazphqqosh", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaakzooxaxojb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaxryoxovyzl", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaalmpspdbsee", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaafnscfyaxtm", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaqicftusrl", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaapoejelrtgw", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaafniuguzjyl"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.13333333333333333, 0.1, 0.1, 0.075, 0.14027777777777775, 0.07777777777777778, 0.1, 0.026388888888888885, 0.0, 0.0, 0.05, 0.17500000000000004, 0.022222222222222223, 0.0};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"bbaabaaaaabbbbbbbababaabaabaabbabababbbabbabbabbba", "baabbbbbbaabaaaaaaaaababaaabbabbaaaaaabaababbaaabb", "bbbaaabababbaaabbbbaaababbbabaaabaaabbbbbbbbbbbaba", "aaaabaabababababbbaabaaaababaababbaaaabbababbbabba", "babbabbaabaaabbabbbbbbabaaaaaaabbabbaaaaabababbaab", "aaabaaaabbbaaabaabbbbaabbaaabbbabbbbababaabbaababb", "abaabbabbabaabbbbabbbbabbbbaabaabaabababbbbbaaabba", "baaabaaabbbabaababbaaabbabaaaabbababbaaaaaabbabbab", "babaabaabbabbbbababbbabbbbaaaaaababaaabbbaabbaaaba", "bbaaaabaabbaaabaabaaabababbaabaabbbabbbabaaababbbb", "aaaaaabbbbbaaaababababaabbbaabbabababbbaaababababa", "aabbaaababbbbbaabababbbbbbbaabbaaaaabbabbbbbbababa", "abbbbbbaaabbaabbbabaababaababbbbaabbaaabababbaaaba", "abbbaababbabbabaaabbababbbbaabbabbbbbababbbbbaabab", "aababaaabbabbbababbaaabbbaaaabbbbaabaababbbaaababb", "bababaaabbaaababbbbbabbbabbabbbbbbaaaabaaaaabbaaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.030406223083555957, 0.1388491098510553, 0.034174895081532944, 0.10355173612675635, 0.08213388653111049, 0.05933680948420915, 0.03779782585604043, 0.09794666885301989, 0.05906652633031033, 0.07128010308698494, 0.08442580716989123, 0.031170980759385736, 0.047385846519794425, 0.02075123755849398, 0.057754440869438706, 0.04396790283842072};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"baaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaa", "aaabaaaaaaaaaaaa", "aaaabaaaaaaaaaaa", "aaaaabaaaaaaaaaa", "aaaaaabaaaaaaaaa", "aaaaaaabaaaaaaaa", "aaaaaaaabaaaaaaa", "aaaaaaaaabaaaaaa", "aaaaaaaaaabaaaaa", "aaaaaaaaaaabaaaa", "aaaaaaaaaaaabaaa", "aaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaba", "aaaaaaaaaaaaaaab"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998, 0.06249999999999998};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"aaaaaaaaaaaabaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaab", "aaabaaabaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaabaaaaaaaa", "abaaaaaaaaaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "aaaaaaaaaaaaaaababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaabaaaaaaaaaababaaaabaaaaaaaaaaaaaaaaaaaabaab", "aaabaabaaaaaaaaaaaaabaaaabaaaaabaabaaaaaaaaabaaaab", "aaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaabaabaaaaabaaa", "abaaaabaaaababaaaaaaaaaaaababaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaabaaaabaaaaaaaaaaaaaaabaabaaaba", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaababaaaa", "aabaaaaabaaaaabaaaaaaaaabaaaaaaaabababaaaaaaaaabaa", "aaaaaabaaaaabaaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaa", "aaaaaaaaaaaaabaaaaaaaaaaaaababaaaaaaaaaaabaabaaaaa", "aaaaaaaaaaababaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "aabaaaaaaaaaaaaabaaaaababaaaaaaaaaabaaaaaaabaaaaaa", "abaabaaaaaaabaaaabaaabaabbaaaaaaaaaaaaaabaaaaaaaaa"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.08318091575925102, 0.08503156273646259, 0.07231600512368078, 0.2934024090105393, 0.02012935940215298, 0.006757716858634565, 0.03110434840832374, 0.015381957606263872, 0.024644085679725522, 0.09031530098787356, 0.011075491636968596, 0.056739400182085425, 0.034321421289841926, 0.14623843981688583, 0.025395520996449532, 0.003966064504860867};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbc"};
    StrangeDictionary2* pObj = new StrangeDictionary2();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=14734&pm=11935
********************************************************************************
#include <algorithm>   
#include <string>   
#include <set>   
#include <map>   
#include <vector>   
#include <queue>    
#include <iostream>   
#include <iterator>   
#include <math.h>   
#include <cstdio>   
#include <cstdlib>   
#include <sstream>   
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
typedef vector<double> vd; 
 
vd d[1<<16]; 
int n,m; 
vector<string> w; 
 
int parse(int mask,int pos){ 
  int best = -1; 
  int bmask = 0; 
  REP(i,n)if(mask&(1<<i)){ 
    if(best==-1 || w[best][pos] > w[i][pos]) best = i, bmask=0; 
    if(w[best][pos] == w[i][pos]) bmask |= (1<<i); 
  } 
  return bmask; 
} 
 
vd solve(int mask){ 
  if(d[mask].size()) return d[mask]; 
  if((mask&(mask-1))==0){ 
    vd x(n); 
    REP(i,n)if(mask==(1<<i)) x[i]++; 
    return d[mask]=x; 
  } 
  vd res(n); 
 
  REP(i,m){ 
    int nm = parse(mask, i); 
    if(nm!=mask){ 
      vd t = solve(nm); 
      REP(j,t.size()) res[j] += t[j]; 
    } 
  } 
 
  double sum = 0; 
  REP(i,res.size()) sum += res[i]; 
  REP(i,res.size()) res[i]/=sum; 
  return d[mask]=res; 
} 
 
class StrangeDictionary2 { 
public: 
 vd getProbabilities(vector <string> words) { 
   w = words; 
   n=w.size(),m=w[0].size(); 
   REP(i,1<<n) d[i].clear(); 
  return solve((1<<n)-1); 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/