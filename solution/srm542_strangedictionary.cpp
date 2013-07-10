/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11929
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

class StrangeDictionary {
public:
    vector<double> getExpectedPositions(vector<string> words);
};

vector<double> StrangeDictionary::getExpectedPositions(vector<string> words) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<string> words = {"hardesttestever"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
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
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
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
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.8333333333333333, 1.1666666666666665};
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
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 1.0, 2.5, 2.5, 4.0, 4.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"g"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"eykhpjiuzfjbcavbgwynkhakvdlhunmtyqeriiifmggmkcrdbd"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"v", "d", "z", "t", "o", "i", "m", "x", "b", "u", "p", "w", "n", "y", "k", "h", "c", "l", "a", "j", "f", "s", "r", "g", "e", "q"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {21.0, 3.0, 25.0, 19.0, 14.0, 8.0, 12.0, 23.0, 1.0, 20.0, 15.0, 22.0, 13.0, 24.0, 10.0, 7.0, 2.0, 11.0, 0.0, 9.0, 5.0, 18.0, 17.0, 6.0, 4.0, 16.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"aabaaaaaaaaa", "bababaaaabbb", "abaaaaabaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3333333333333333, 1.75, 0.9166666666666666};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"bcabbacacccbabcaacbcacbbacabccbca", "acacabbcbccbbccbccbbcbbbcabbaaaaa", "acaaaaccccaacaacbbcbacaaacbbbcccb", "ccabacbacbaaaccbacabbbcbacaaaabcc", "bbacccabcaabbacaaccbcacbccacbbaaa", "ccaaaccccbabaacbccaaacbbbbaacaccc", "acccbabbcaabbaababaaaabcabcabaaaa", "cbcccbbcccbabcabcacbbbbabacccaaaa", "abbbbbbabcacccacbcacccabababaaccc", "bacbababbcaacbcbbcbbaabbcacbacccb", "aaaabccaacababccbccaacbbcabbcbcac", "cbbabcabbabcacbccacbbacabbbccccca", "ccabbbababaabccabcaacbcbabccaccaa", "babacaacbbbcacabbbbaccacbbaacbacc", "aaccbacaabaabcababbbccaccaabbbbbc", "bcbaacbbbabaabacbcbacccacccbaaaca", "cabbbbcacbabcabbaababaaccbbcbbbca", "cbacabcbcacbacccaaaacbbabaaabcaaa", "cccbaaaacaacbaabcabbccbbaabababaa", "accabcaaacbcabacbbcbcbcbabaabbacb", "ccbbabacacbaaaacbcaaaaabbabbcaaac", "cbbbbaabbccbcaacccbcbcccaccaabcab", "acbbababccabbcbbaaccbabaaccacbcbc", "acbabbbcacccaaaaabcbacbacbcbcacba", "cbaacababbaaccaacccccccbccacababc", "ccaccabcabcabccbaabcabacbacbcaaaa", "abcbccbbbcabcbabbbabacabbccacbcab", "bbaccbccbbbabaacbacccaccbcbcbcaaa", "cbcbacbaaabacbbbcbcabaabcbcbcabcb", "cbabacaabbcacbccbacbbcbbcbbccaaaa", "cacccaabcccbabacbccbbcbbaaabbbabc", "ccaacaaabbbcaacaaacaabbccccbcabcb", "bbcababcacaabcbbaaaaaacaabaaabccb", "cbcacabbabbaccbcacccbacbcabbcaaac", "cbcaaaababbcbabccbcabcaaccbcacabb", "ccbbbcbcbcabacbacbababbacaaabbbbb", "bbbabcabbbbabbaaacacbaacaacabcbac"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {19.96768739081312, 19.650562042415594, 18.263312549388065, 16.921856898828235, 18.259654073485677, 19.093919066144466, 12.507697592686148, 20.66409899585765, 19.569904672310788, 18.517234794714263, 18.28045838582082, 20.87733563674875, 17.70531779612679, 17.40557888208918, 16.540477043932427, 17.55929513617157, 17.271472421129168, 15.278995137839534, 14.34303641184648, 17.82455133907142, 13.888596502583583, 21.825332524372772, 19.107781390996493, 17.785845401314504, 20.343452840887895, 17.66912968404291, 19.473816020431315, 20.677805310531784, 18.63724368066238, 18.57302022071471, 20.202410238888902, 17.528085188917064, 13.161825295763592, 19.992656432311506, 17.957485280948596, 17.865556532204124, 14.807511187007757};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"gdzoggosvfymn", "utdjlisutpkld", "ptfqtjwxkknso", "sfppvsqudtamp", "olpdceucvwjed", "btzrjyqemnipc", "dmhqppokdmzsh", "zzflekzphntuy", "qwrwolwcptshe", "dxhgwolxxufyq", "rdmvcxvzydhhl", "cpatuwsasjkhc", "jusmhtqrxejha", "ynrgjuphuehhp", "lmvlmcsevgror"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.282051282051282, 6.759324009324009, 8.277389277389275, 7.42948717948718, 4.788461538461537, 6.891025641025641, 6.534965034965036, 8.692307692307692, 8.468531468531468, 8.30944055944056, 7.287878787878788, 5.708624708624709, 6.341491841491843, 6.107226107226108, 7.121794871794871};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"abbabbbbbbabaaaabbabbbbabbabb", "bbbaaabbbabaabbbbabbbababaaba", "aabaaaaaaaaaababbaabbbabbbbba", "abbbbbaaabbbaaaaaabbabbbaabaa", "babbababaaaaaaaaababbaaaaaaab", "aabbabaababababbaaabbababbaba", "abaaababaabaaaabbaababbababbb", "aabbaaaabbaababbabbbaabbaaaab", "aabbbbbaabbaaaaababababaabbbb", "aaabbabbbbabaabbaabbaaabaaaab", "abbbbbaabbababbabaababbababba", "abaabbbbaabbbbabbaabaaabaaaba", "aabaabbbabaaaababbabbabaaabba", "babaaabaabbabbbaababaabaababb", "aaabbbbbbaababaababbbabbabaaa", "abbbbbabbbbaaabbbaababbbabbba", "aabbbbabbbbababbabababaaaaabb", "abbababbabbaabaaaabbaaabbaaab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {11.495741758241756, 10.158871121138922, 6.948970525518514, 8.077936025962341, 5.052524926054337, 8.136263684715697, 7.410820225526108, 7.617772964909188, 8.833337006131122, 7.582776975346635, 10.049468505350857, 8.186853291187656, 7.417732267732268, 8.27754579012319, 8.840066877566876, 11.73011604408663, 9.599007476871256, 7.584194533536639};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"cbcbabacacbabccbbcc", "cbbcccacaaaacbcbaac", "aabaaacabbcabbbcbaa", "ccacbcbcaabcbaacabb", "bacbccbbababbaccbbc", "bacbcacabbbcabccbba", "ccabcbcccbacbaaacca", "bacaabcbbbacbcbbcbc", "ccbabcbbbcbbccabcbb", "bcacbbaacbbcbaccbca"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.193223443223443, 4.2895146520146525, 2.718035232741115, 4.3506238859180035, 4.427045177045176, 4.462970362970363, 4.976651126651126, 4.458874458874459, 5.439880952380952, 4.683180708180708};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"tnblzulgjnslqcacpsvlknyk", "cemhjvftnlqxecxtzgzrevgn", "pgyhjxxsghaxzpcbdkptdhbd", "rtawssfylrimhzzdamopynxr", "pxwvaytwvjjjetskpkpdobux", "mslxtzwtsbzgphgodqkvepib"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5181159420289854, 2.3718238283455673, 1.861542443064182, 2.795289855072464, 2.753623188405797, 2.699604743083004};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"bbbbabbbbaab", "aabaabaabbbb", "baabaaaabaaa", "aaaabbaaabbb", "babbaaabbbaa", "aabaaaababab", "bbbaaaaaaaaa", "abbaababbbaa", "abaaaabaaaaa", "baababaaaabb", "bbabaabaaaba", "babbabaabbaa", "bbbabbabbaaa", "babbaaabaaaa", "baaabbbaabba", "babbababbbab", "bbbaabababab", "bbbbabbababb", "aabbbbbbaaab", "abbbaabbbbba", "babaaaababaa", "bbbaababbbba", "ababbbbbaaab", "abbbbabbbbab", "bbbbbabbbbaa", "aaaaababbaaa", "aaaaaabaaaba", "baabbbaaaabb", "bbbabaababaa", "babbabaaaaba", "abbaaaaabbba", "ababbaaabaaa", "abbbbbbaabaa", "bbabaabaabaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {25.486507936507937, 17.191269841269843, 8.323809523809524, 14.67261904761905, 17.302380952380954, 11.116666666666669, 7.976190476190477, 16.73253968253968, 6.19404761904762, 14.265079365079368, 15.12063492063492, 17.084920634920636, 19.9920634920635, 10.880158730158735, 17.59166666666667, 23.617857142857147, 20.264682539682553, 25.404365079365082, 19.39444444444445, 22.62976190476191, 10.506746031746033, 23.61706349206349, 19.426587301587308, 24.8781746031746, 25.95198412698413, 8.608333333333334, 6.898015873015875, 17.80198412698413, 17.307936507936507, 14.425, 14.13015873015873, 11.857142857142858, 19.713095238095242, 14.636111111111113};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"accbbbcaabccbab", "ccbaacbcbbcccbb", "aabaaabaccccbaa", "acabcacacabbbac", "ccabcbcbcbabaac"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.2472222222222222, 2.603968253968254, 1.2735042735042734, 1.621031746031746, 2.2542735042735043};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"iulgwydibivcvxhcjmjkxdxematzxnasxvljnhnxyjr", "wifpkjqngbrsunenzsqlhjgoqjngscodwuajjodjwbf", "otysamuwdwggwiqhatkbaoxcomhmmedydukfcydnqez", "bxqayhnkqnrgzrzdjdudeyoefrmhfmzgihnxesfpjgw", "pdaczwceluktrylbalhuqdxvhqssvgnknvcbqxbvnzp", "yqdntpciavufceaclbcpwoprzfcfixrtymslgwggsbi", "ooommoenorioldvcwrtfvzotldidhvhplofdkdpwqou", "jssfvcftxasbgpwtknhdbrgeobzmugsibwqttklfneq", "nluhktxslkzystotbmfvnxnoouyycgecjglovwsdisk", "hbdjgbervqjmxskemopbwrhytvrzpflazmhuvjhgxbc", "eryxojaqjggfkhvlirkxpmtitcenbfdbylstibkjezu", "odydebubryrxvmmnvyzfkywrtytxcbjaqtazhfehpyo", "shvgmseobsmbqnxbbshmzmtarvfhqdfnjajwpgzutfi", "scxbrlikwcronjthiegfdujvsdazjbwlzpogqswhyof", "kbnjqjmfaklkrrcftedrxalqpsewtbqhvbvoececfwk", "bxbjxinmcuapxwnptkyzlyinwgtzsdxrodyyksebiuz", "qjbglxyxcqpzdvpfrlsqijfyeddgglityiaryyyfwga", "igkwvrakpltfrjvwjumghvujokrfdqiidgcyuhjoggg", "ivcujbmbawsjkkhexlhxaqwffwehgahazauzzhgphus", "wtteijogbsickdqhxmphvaceuctptumwtezejyxquyx", "riezzxhjagnjlsqhpxgliuxyloconduphcprtvibzxh", "lwtutyscytlyjyetaortpcdubujjbmbnmowukfhryfy", "xorpgczeavhsscfpknczkzeutgwjgxdgrnnkwpmlbnu", "dkyxocwpkkobjytonckjrkpexhlerydcpewvkqsmgrz", "uxfgbbzrcnaopqxunsoutpcxqvybimsdcxybvsspdya"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {12.711304175071827, 11.15355101506548, 11.497234982827726, 11.64234362849836, 12.232152310725768, 10.878383781238515, 12.000021764017793, 11.439353915133836, 13.232366366853036, 11.811692969388435, 10.73946452314739, 12.917933895124387, 11.44520874757687, 11.753133862733975, 9.59183277962348, 14.088059485071154, 12.120952931545672, 11.533791832104372, 10.639106323118321, 12.85690306200949, 12.674920891171602, 13.050516259123746, 12.155687109260565, 12.375645522790787, 13.458437866777418};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"babababbaab", "abaababbaaa", "bbabbbaabab", "abaaabaaaaa", "abbbabbbbaa", "aaaababaaab", "baaabaabaaa", "baababababb", "aabbababaaa", "aabaaaabbaa", "abaabaabaaa", "ababaababab", "aaaaaaabbba", "baaaaabaaaa", "bbbaabbbbaa", "bababaabaaa", "aaaabaaabab", "bbababbbaba", "aaaabababab", "aaaaaababab", "abaaaaabaaa", "aaabaaabbaa", "aabababbbba", "baaaabaaaba", "aaaabbbbaaa", "abbbbaaabab", "bbaabbbaaba", "bbbbabbbabb", "bbbbbaabaaa", "bbaaabaaabb", "abaabbbbbaa", "bbaabbaabba", "baabbabbbbb", "bbaabbbbbaa", "bbaaaaababa", "aababbbbbab", "aabaabababa", "bbaabbabbba", "abaaaabbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {23.616666666666667, 16.120238095238093, 25.91746031746033, 8.092857142857145, 26.30595238095239, 12.117857142857142, 11.454761904761908, 22.64047619047619, 16.136904761904766, 12.180952380952379, 11.720238095238093, 19.70515873015873, 12.151190476190479, 8.471428571428572, 26.435714285714297, 16.202777777777776, 12.059523809523807, 26.11269841269842, 16.896031746031746, 11.996428571428572, 7.077380952380955, 12.454761904761902, 23.483333333333334, 11.936904761904767, 15.560714285714283, 22.85753968253968, 23.013095238095232, 31.931349206349218, 23.503571428571426, 19.484920634920634, 23.48809523809524, 22.613095238095237, 29.470238095238102, 27.604761904761915, 15.939285714285715, 27.032142857142865, 16.269444444444446, 27.470238095238102, 23.473809523809525};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"bbcaccabcccbbbacccaabbbcaacbabbabbbbcacc", "baacacbbabaccabcabccaccbacaabbaccbcabbab", "cbacabbaabacbcaabbcccaabbaaaacbbbcbacaac", "bbbaccaabacabaaabaccabbacaabacccaabbacba"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.839994775339603, 1.589962121212121, 1.3536079182630907, 1.2164351851851851};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"haloiytwclq", "smfhyexkoln", "oooxknmlmak", "ishvmuqrgwp", "sgnhwpylrjn", "jrqebkzyjtx", "bdlomxyjfzn", "xkipqxcsfwm", "nctepbcgkhd", "fbzgbpsjgij", "yynbinshdeq", "uvhitylqgdx", "vdqldsztdtl", "tcgujptletk", "oyvusykottn"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.5181818181818185, 6.856818181818181, 6.4646464646464645, 8.253535353535355, 8.19469696969697, 8.018181818181818, 6.915151515151515, 8.037373737373738, 3.8999999999999995, 4.090909090909091, 5.798989898989899, 8.21010101010101, 7.681818181818182, 5.890909090909091, 10.16868686868687};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"abaaabaabababbaaaabbbaabbabb", "aabbbaabbbabaaaaaaaabbababaa", "aaabbbbbabaabbbababaabbaaaab", "baaabbabaaaaaabaaababaabaaab", "aabaaabaaaabaaabaaabaaaaabaa", "bababaaaaaabaabbbbaaabbabbba", "baaaaaaabbbbbabaabaababbbaaa", "baaabaababaababbaaabaabaaaba", "aabbabaaabaaababbbbababaabba", "bbaabababaabababaabbaabbbbab", "ababaaabaaababaabaabbbbabbaa", "ababbaaabaababbbabbbabaaabaa", "baaabaaabbaaaaabbbababbaaaab", "bbaabaabaabaabbbbabbaabaaabb", "baabbbbbabbaabbbabbaaabbbaab", "babaabbaaabbababaabbaaaabaab", "abaababaabbbabbabaabbabbbbbb", "baaabbbaabaabbabbabbabbabbaa", "bbaabaabaaaaabaabaaababbaaab", "babbaabbaabbbbbbabaaaaabbaaa", "bbbbbabbaaaaabbaabaabbaaabab", "abbabbbbaaaaaaabaababbbaaabb", "abbaabaaababbbaaabbaaaaaaaaa", "aabbbbbbabaaabaabaaaaabbaabb", "babbbbaaabbbbbaabbaabbabaaab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {12.310095266790313, 10.681746981089088, 13.19253891533303, 8.431515788133433, 5.845415691120025, 12.418815008520891, 11.457898280769797, 9.545170189287838, 12.38162393162393, 14.254663851800073, 11.453834168927047, 12.412703472997592, 10.47748786301418, 13.362876339346926, 16.06097104649736, 11.44598778414568, 15.832202438084789, 14.201171377641963, 9.232248388866036, 13.19089933544268, 13.308424448788223, 12.440668696628448, 8.749441897971309, 12.254008929666824, 15.05758990751251};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"acbbc", "bcbcc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"sraqosyafafezehjcbnvdjtwaaw", "gjvuctteuqmagwphbjdmfsxxfnp", "xdgauezatpbsiqmsolfvdvvstvt", "xfvsdacnwzzlirwqgqfxyzhrnfo", "oabtupkbphlpslyedrgccimtxet", "klhqpsvnfrqihcpxwbapgjrddtp", "eymuprcmgrioolhivelthomqxfj", "idzhmwmxseyskfkmhirpuirjcpa", "zayvrgtdayuvyvjkgaxuslmljeq", "uyjsgvnfirrmkufghxinmpuyuem", "vgcejheqflkgmtnzlipwriovwid", "vllkdyrdvayacjssqydoomcxdfu", "rtbnzaizlwiaazmwirjfwoiyyho", "vgzsvjyvzsexaerihmgpsgfvkpq", "uougktmjbbtkvsecuefywtadamq", "pscwbatiquazlemnimyqptwqyzf"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.856083916083916, 7.109159544159543, 8.150014245014246, 8.637849002849002, 6.24408831908832, 6.844599844599843, 7.2535754985755, 7.187888021801065, 8.1380056980057, 7.92991452991453, 7.28840455840456, 7.492777777777778, 8.136326025021676, 8.415388331475288, 6.861823361823362, 8.454101325405672};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"bbabbbbbabbaaaabbababbbabbaabbaaaabbabbbaababbbbab", "baaaaaabaaaaaabbbbaabaabaabbbbbabbbbababaabaabbaaa", "aabaaaabbbbbbaabbaabbbabbaaabbabaabbaababaaaabbbbb", "baaaababaabbbaabaaaababaabbababbaaaaaabaabbaaaaabb", "babbbbbaaabbbabaaabbababbaaabbbbbbaaaaabaaaababbbb", "baabbaabbabbbbbbbbaabbaabaaaabbbbbabbbabbbabbaabaa", "abbaaababaaaabaaaababbbaababaabbaabbbbabbabbbaabbb", "baaaaaababbbbabbaaaabbbbabaaabbabaabababbbaabbbbab", "abaaaabbbbaaabaaababaaaaababbbabbabaabbabbababbaab", "baaabbaabaaaaaabbaababaaaababbabaabaaababaabbbabbb", "abaaabbaabaaabbaaaaaaabbbabbbbaaabbbbbbaabaaaabbbb", "abaabaaaaaababaababaabbbbabaabbbabbbbabbbaaaabaabb", "aabbabbbbbabbbbabbaababbbbabbaabbabbbbbaaaababbabb", "bbbaabbbababbababbbabbbabaababaaabbaaabbbaaabbabbb", "bbaaaabbbbbbbbbabbaabbbababbaaaaaabbaabbbbbbaaaaaa", "aabbabababaaaaabbabababbbbbaaaaabbbbbbabaaababbaab", "abbbaaaabaaaababaaabaaabbaabaabbbbaabbabaabbaabbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.588735980944218, 6.812655219449612, 8.187086353886777, 5.888658575030389, 8.483607320499903, 9.465795513771498, 7.8467989531170845, 8.143291945936912, 7.169003633935199, 6.510522743027103, 7.481962012601398, 7.5003326037059175, 10.307488010297286, 9.185849922052642, 8.448143750253724, 7.768406913383124, 7.211660548107212};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"baabbaabbababbababaaabbbababbaaaabbabbab", "bbabbbbabaaabaaaaabbbbbabaaabbbbbbbababb", "aaaabbbabbaabbbabbbbabbbbbbaabbbabaaabba", "abbbabbbbbbbbabaabaaabbabaaababaaabaabbb", "bbbababbaaaabbbbbbabaaabaababababbabbbbb", "abababaababbbbbaababbabbbababbbaaaabbaaa", "babaabaababbaaabbaabbbaaababaabbbbbabaaa", "baaabbbbaababbaaaabaabbbbaaabbbbabbbaabb", "baaabbbbbaaabaaaabbbaaabbbaaabbaaaababbb", "aaabaabbbbbababaaaababaabaabaaaaaaabbaab", "babbabaaaaaababbabbabbabbbababaaabababab", "abbbbaaabbbabbaabbbbaabbbbabbaaabbbbaaab", "babaabababbbbababbbbaabbbaabbaababaabbba", "bbaaabababbabbaaabaabbabbabaabbaaabbbbaa", "bbabbababbabbbbbbbabaababbbababbaaabbbaa", "babbaababbaabbbaabbabaaaabbbabbbbababbbb", "ababbbbaaaaaabaaaabbbaaababbabbabbabaaaa", "aaaaaaabbabbbbbbabaabbbbaaabbababaabbaaa", "abbabbaaaaabaabaaaabbaaaababaaabbabbbaaa", "abbaabbbbbabbaabbbbababababaaaabbbaabbab", "aaabaababbaabaaaabaaabbababbbabbabbababb", "aaaabbbbbababbabbabbbbbbaabbbbbabaaabbab", "abbbbbbbabaabaaabababaaaabaaabaabaabaaab", "baaaaabbbabbaabbbaababbbbaabaabbbbbbbbba", "babaababbabbaabbaabbaabaabaaababaabaaaaa", "bbbabbbaabaabbbabaabbabbbabaaaaaabbababa", "bbbbababbbbaaabaabbbbbaaaaaabbaabaaababa", "bbbbbabbabababaaaabbbabbaabaabbbbaaaaaaa", "abaaababaababbaabbaabbabbbbaababbaaabaab", "abaaababaababbaabaaabbbbaabababbabbbbbaa", "bbaaabbababbabaabbbabaaaabbaaaabbbbbbaab", "bbaaabbbabaabaaaaabaabaabaababbabbbbbbab", "abbbaaaaabaaaabbbbbaabbaaaaabbbbaaaaaaab", "bababaaaaaaabaabababaabaaabbaabbbbbaaaaa", "baabbbbabbaaaaaabbbabaabaaabbbbbbbabbabb", "ababaabbbbaaaababaaabbababbbaaababababbb", "babbababbaabbababaababababbaaaaaabbbaabb", "aaabaaaaabbabbbaababbaabbbabbbbaabbabaab", "aabbbaaaaabbabbababbaabbaaabababababaabb", "baaaabbbabaaaabbbaabababbaabbaaabbbabbaa", "ababaabbbbbaaaaabbaababaaaaabbbbbbbabbab", "bbaaabbbbbbaabababbbababaabbbbababaabaab", "abaabbaabaaaabbabbabbabaabbaabaabbbaaaba", "bbaabbbbababbaabaabaabbbbbabababbaaabbab", "aabbabababbaaabbabbaaabbaaaaabbaabaaabbb", "abaabababbabbbbbbbbbbbabaaaabbaababaaabb", "aabbaabbbaaaaaabababbbaababaabababbbbbbb", "aabbaaabbbaaaabbaababbbababaabaabababbbb", "babbbaabbabaaaaaababaabbbbaaabbaaaabbbab", "babbbaabbaabbbbbbaaabbbaabbabbbaabbaaaba"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {25.071991395643643, 29.128799249239425, 28.878827324430713, 26.46333216078976, 28.78398788958757, 25.186297153438094, 22.83351024209484, 26.35236023923331, 22.453638413417995, 17.411790252231434, 24.021438048672536, 28.930472449433278, 27.637567608615196, 23.871600988793464, 29.87097867087571, 28.958094200111976, 20.18680312229511, 22.57454109096658, 18.090690246908782, 27.660777881725526, 22.394665047901345, 30.2113221814679, 20.16047979064764, 28.958642246436444, 19.104504246507542, 25.086867485948794, 23.970135765283157, 23.95748021936137, 22.549540787841696, 23.78522133570054, 25.14786162055142, 23.83447094048521, 18.908489914275012, 17.76730252320978, 27.68441022104134, 23.902981101871255, 23.967259206769914, 23.90359532131171, 22.772868860155793, 22.48394385101445, 25.106056311760316, 27.694092413920117, 21.36039771812419, 27.65528970157386, 21.36550313660354, 27.515508722107533, 25.21189744735007, 23.90773803405282, 22.651495203171063, 27.612480015049346};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"aaaaabaaaabbbbbbbbaaaabbabbabbaabaaabbaaaaabbaabab", "bbababaabbbabbbbbaabaaaaabbabbabbaabababbbabbaaaba", "aaaabaaabbabbbabbbaabaaabaaababbbbaabbaababbabbaaa", "aaaabbaabbabaaaabbabaaabbaabbabbabaabaaaaababbbbab", "baababababaabbbbbaaabaaabbbbabbabbbbbbbabaabaababb", "bbaaabbabbbbabbbbbaaabbbbbaabbbbabbbbaababbbbabaaa", "baabbaaababbbabaaaaabbbabbaabbaaaaabaaabbbaaaaabbb", "baaaaaaabbababaaaaabaabbabaaaabbabbabbabaaababaaba", "abbaabbabbbaaaababbaababbaaabaabbbbabbaaaabbabbbab", "ababbbababababaabbbbabbaababaababbabaababaaabaabaa", "baabbabaaaababbabbbaaaabbbbaaabbabbabbaabbaabaaaab", "aababbababbbbaabbbabbbaaaabaaaabbbbabaaabbbbbbabba", "bbaabaaaabaaabbbbabbbaabbbababababababbbbaaabaabbb", "aabbabaababbbabbaaabbabababbaabbbbaaaaababbbaaaaba", "abbaaaabbbaabbbaaaabaabaabaabbabbaabbbaaaabbaababb", "bbbbbabbbaaabbbbbbbabaababbbbaaabbaaaaaaabbbbabbaa", "baaaabbaaaaabaaaababbabaaaaaabaabbabaaaaabbbbbaaaa", "baaaabbbaabbbbababaaabbbaaaabaabbabbabbaaabbabbabb", "bbbabaabbbabbbbbbaaaabbbabaaabbbaaaaabbabababbabba", "ababaabbbbabbbabaababaaaabbaababbabbaaaabaaaababbb", "aaaabababaabaababbbaabaabbbababababbaaaababbbbabab", "abaaabababbaaabbabbaaabbbbaaaabbbbbbbbbaaabaabbaaa", "baabbabababbabbabaaabbbbbbabbabababaaaabbbaaaaabaa", "aababaaabbaaaaabbbabbbaaabbaabaabbbbababababbbaaba", "ababbbaaaaaaabbaaabbbababbabbbabaabbababaaabbabbab", "aaabaabaabbaaaaabbbabbabbbaaababbbbbaabbbaababbbba", "aaabbaabaaaababbbbaaaaaaababaabbbaaabbaabaabbabaab", "aabbaaabaaaababaaaabbabbabbaaabaaabbbbaabaaaaabaab", "baabababaabbbabbbbbbabaaaababbbabaababbbababbaabbb", "bbabbaaaabbabaabbabbbbbaaaabbabaaabbbbaababaaabaaa", "abbbbaabbaaabbababaabbabbbaaaabaabbaaabbbbbbaabbaa", "aaaabababaabaaabaabbaaaabbabaabaaaaaabaabaaaabbaab", "bbabaaaabbbababbabaabaabbabbbabababbbbabbaaabbabaa", "abbabaaaaaaababbbababaaaaaaaabbbaaababaaaaaabbbbbb", "babbabbbabaaabaabbbbabbbbaabbabaabbaaabaabbbaaabaa", "aaaaabaabaabbbbbababbbbaaababaaaaaabbbbaabbbbabbab", "bbbabbbbbaaabaabbbbbaabbbbaabababaabaaaabaabbbaaab", "abbbbbbabbbbbaababbababbaaababaabbaabbaaaaaaaabbab", "bbababbbbabbabbbbabaaabbababbbabaaabaaabbaabaaaabb", "abaabbabaabbababbaabaabbbabbbabbaaaababaababaabaab", "aabbaababbabababbabbabbaaaabaaababbbabbaaabbbaaaab", "bbbbababaabbabaaaabaaaaababbbbababbaabbabaaabaabba", "ababaaabbbaabbbbbabaabbbababbabaabaabbabaababbbbaa", "bbbabbbabaabbabbaaabbaabbbbabaaaababbaaabbbabaaaaa", "abababbaaaabbbabaaaaababbaaababaaabbababaabaaababb", "abbaaabbbbbabababbabbabbaabbabbaaaaabbaaaaababbbbb", "aabaabbbbaabbbbbaabbabababbbbbaaaaaabababbbaaababb", "babaaababbbbbbbabaabbbaaababbbabbbbbbbabbbababaaba", "abbaaabaababababbbaabaabbabbabbbababbbababbabbbaaa", "aababbbaaababbababaabbabaabaabaaaaaabaaabbaabbbaab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {21.568585245525274, 26.710357338394722, 22.780047739842196, 21.832301487138608, 28.928566810240333, 31.919201460542055, 21.778248790118827, 18.709470014255043, 25.813133180963103, 23.79147561284337, 23.899885143580025, 27.798894897378577, 26.822088432543634, 23.817873083713874, 22.748491798882263, 28.790268064240202, 16.844203080279435, 25.8649214571339, 27.836419852634833, 23.804810777158785, 23.87975659877294, 24.794467996980323, 24.761165095980004, 23.748493258938574, 24.917209602651702, 25.689849165277014, 19.63248686837639, 18.78960078495429, 28.74688175336101, 23.855952087022075, 25.761171577301, 15.681984793701838, 26.80593558059256, 19.71866641625783, 25.672747405909153, 24.89676235148011, 27.003434387020885, 25.914212363955386, 26.74635896956713, 23.842742507181907, 23.80438792204975, 23.74004072554007, 26.83717097359669, 24.8082888778345, 20.697122964268097, 26.903138725616948, 26.828549663398533, 30.786298803167373, 26.83794978256665, 20.83792772927021};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"baaaaaaabaaccccccabccaccbbababacaccbabcbbacabccaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"cbcabccabbb", "acbaccacbba", "cccbaaacbaa", "abacccbbbab", "cbabcabacab", "cbacacacbcb", "acaacbabcbb", "cbbcbccbacc", "ccbcbbbcbbc", "cbababbcacb", "ababaaccaab", "baabcaaacaa", "bcaccacabca", "cabccbacbac", "ccaaaaaabcb", "caaacbbabca", "ccabccaaaab", "bbccbaaabcb", "cbacabbbaac", "cbbbcbacacb", "abcabbcbabb", "bcbbacbbcaa", "caaaabcbacb", "cbcbbbcbabc", "cbcbbccaacc", "ccccabbcaca", "bbccbccacac", "abccbaabcaa", "aacccbbbcab", "bcabcabbcaa", "caabaccbbac", "bbacbacabca", "abcbcacbaba", "ccbaabbcabb", "caabbbcacac", "ccaccbbcbbb", "acaccccabac", "caabcbccbab", "acacccabaaa", "bbaaaaaabca", "aaacacacccb", "bbcabcbabbc", "aacccbbbacc", "bbcaabacaac", "aacacbcccaa", "aaacbcbabab", "cbcbcacccbc", "bcbaaccabcc", "cbbccacacbc", "acbbbabbbca"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.813708513708523, 24.733802308802307, 21.611904761904757, 24.835714285714285, 21.377777777777784, 29.086111111111123, 22.68506493506493, 35.016991341991364, 35.164213564213576, 23.088492063492062, 14.761111111111116, 12.384126984126986, 26.8, 28.459920634920643, 17.62261904761905, 18.83055555555556, 21.661904761904758, 23.28769841269841, 21.211255411255408, 27.765873015873016, 20.882792207792203, 24.62103174603174, 18.64801587301587, 29.795057720057727, 32.00977633477635, 30.276190476190486, 32.62644300144301, 19.350721500721498, 26.19292929292929, 22.20414862914863, 24.208730158730162, 20.940656565656568, 21.02063492063492, 23.62113997113997, 23.460497835497836, 33.71269841269842, 29.794444444444455, 26.002380952380957, 19.910317460317454, 9.688997113997114, 24.647799422799423, 25.16825396825396, 27.773809523809526, 18.889466089466083, 23.895238095238092, 16.77070707070707, 37.20945165945166, 28.708369408369425, 32.94642857142857, 21.82402597402597};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"bbcccaacaccaaacacaaccaabbcaaacccaabacbcbabbcbbcacc", "aaabaccaabcccbaaabcbbccabbbcbcbabbabcaabaabcccbaac", "baabcaabbcbbccbbccaaccccaccaaaaacbacacccaccbbacaaa", "aaaacaacaacccbccacaaccabacbaabcaaacacbbbacbabbabbb", "babacbcbbbcbacbcbacaacabaccacabaabbaaacacbbcaabcba", "acbacbaccbbabaaabbbbbbbbcbabcacbbbbbbaacaaaacabcba", "abbacacaacbcaccabbcabccbbbbaababaabcaaababbbaabaca", "abcbbcbbcacaabbbbbbaabcbcaccbbaccbacbbbbccbacaacca", "bbcbccccaaacaabccabbcaaababcabbbcaaccbaacacbabcbbc", "acbaaccbbabcbbbabbbabcbbababcacaaacacabbacbacbaabc", "bbcaabcbabacaccbbbccabbaabbbcbbacaabaccccabccabaac", "bbccbbacacccacacbcbccacbcbbcbccbbacacbbbcbacacaaba", "bbaacbcbaabcbccbcbabbcccabbabcaccbcbbabcccbaccccab", "cabcbccaaaaccaccabaaabababccbcbacbaabcccccabbaacaa", "cabcbcaccacaacacbbbbabbaabbccacbbbacbacaccbabbaaaa", "babcabbccaaacbcaaacbabbbccaaccbaacacbacbcacaabaaaa", "bbabbacaccbabccbcccaaababcabaacacbacccbacabccaacca", "cccaacbbbcbbbabaacaaaacaaccbbcabbcbacbccbacbbacccb", "ccbbcbbbcbabcababccbcbbcccabbacacaccbabbbaccaaaaac", "bcacacacbbccacbcabbccbcbbccbaacabbbcaccbbccccccabb", "acaabacabaccbcccabacbbacbaccaccacaabaabcbacbaabcab", "acabbbbcbccaabccbbbcacbcbbbccaacccbcbccccacbcbbcaa", "cbacaaaacaababcaccaababacbcccbbbacabacccabcaabcbac", "abbcccabbcacaacaaccabcacabbbabbbbbcbcaabccbbcbccba", "bcaaabcaaaaabbabcbcacbcbabcbcbbaccbbaabbccccaabbba", "baccabbcacacbacbabcbccbcbcbcbaaacbcbaccaacbabcaaac", "ccabcacccabacabaababbbcbababbcccbabbaaccbcccbcbcaa", "cccabcbcccacacbaaaababcccbaacabcbaaccbacccaccbbbbb", "cbaabbbcabaccbabaaccaacacccbcabbcaccbababcbbcabcbc", "cacbaacaccacbaaaabaacabbbbbcacaabababccabbcbacbbba", "abcacabcbbccbabaaaaabaccabbcbccababcaacbabaccbacbb", "acbacbcccbcacbacbaccabaabbbaaaabcacaabacbabaabaccc", "abacbaababcbbbbccbccccaccbacbcbbcabcccbcbaacbacacb", "caaccabcbacccabccaacccabbccabacbacbacbcbbaabcabcbc", "baaaccaabcbcbbcacccaaaaaccbaabbaabacbccacacbbbabac", "babaacaacaabbaaabbccabbacaaabbbaabaaabbcaccaaccaaa", "ccbaacbacabcaababbbaaccbabbcabbccbcccabbabcbaabccb", "cbbabaaabbaabaaccbabbbcccabaccccbcabaaabbbabaaaacc", "abacaabbcbbbacacbacbbbbbabccbbcbcabacaaccabcacbabb", "cacabbcbccbbababcbcbacabcbaaacaabacbcbbbabacccbaba", "cccbabbcacbcacbcacaaaacbccaaacbcbbbbcaaabcbbccbbcc", "ababbbccaacbbacaabbacbbcacbaabcbaaabacabababcabbaa", "cbaabaacccccccabaaabcbabbabaabbccacbbbcbcacbcbacba", "bbaacbbbabbcccaacccbccababaccbcaaaaacaaacbbaccbbac", "abbcaccbcaaaabbcbaacbbcacccbaaabcacbcbcacabbccccca", "cbbcabbabcbbbacacacaaacacaccbcaccaaccbacbbbbbcbaac", "abccaacaaacbbaaaaccbcbacbbcbbbcbaccabacaacbbbbcbaa", "cacbaccacabbcacbbaaabccabbbbbbbcbcaabcbcbbabaaccca", "abaccbccabaccbccbcbbbaacbabcaccabcaacccaccabcacbba", "bbcaabbabcbacabcbbcbacbcbacccaabacbcaabcabccabcaca"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {25.187225265884987, 23.144389907529632, 25.19246130681118, 21.126633410218943, 22.182132068544774, 21.37536658196671, 19.602560422028034, 25.89460603554838, 24.43531979245261, 21.5559635088932, 24.316741210716078, 28.99220136596768, 29.248312024256883, 23.46006301989871, 22.955024950850138, 21.141836911625067, 25.04138473015114, 26.162654841315224, 26.612728187144466, 31.140385445363435, 23.189317978131555, 30.60665205686778, 23.272581249486606, 26.11952464723856, 23.33725132023682, 25.89601963345967, 26.235388803874926, 27.54655283054136, 25.696172659856874, 20.910648254092767, 22.971793682047423, 22.593243290828596, 28.410982413805982, 27.43859719288942, 22.62858860174414, 16.86750239603406, 25.207782219142246, 21.219840575740538, 23.985401470332675, 23.935285417473384, 27.300222145197434, 19.10076588448403, 24.89771453079355, 23.884001457785264, 26.56543810549614, 25.273151572660442, 23.292719183982477, 24.891308355361346, 27.461772933771943, 25.495788149474716};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"osznloetiicmpduemxoiiukxgiubyumzoykmmkxrczhisozwqs", "pnujvtdyxfiyolpzemdacokubopgenlyranyhtiaprdewikuli", "sevdlklyyffrwepozmzqlxpemwchqaugrfqivsxazjpalvinky", "qttkbyhbnzhpsdxkzyshlonprzeuubxjevrhdlozimlqwbzkxz", "lqmohqdhrgvizoqukbykuyblziajylqhytyihemmjrkaehspcq", "njqtrjcxxzgbdxsaopwbdovraibwhbtfkugazlwykgaswpusql", "ezyiutbqipjflxprokjodmendnqeqntudqvawqnovwpybmzmab", "trlljswsnehbrjeruntfxqlnvokxfxpnjcygglanhhlgrhoirg", "wfwgqepknhinqkvkwkbxyvgwzjwgvusjgqhvcyddflesvuhcsc", "txxsjjtjphljrncdemerfqstwiwqpxpmhhuixvedvytdsekfmb", "xcfkeiohmfcqfxiwqokkhzpcdxvweqxklbnxdlrhgxzngypcby", "czmcmtnohtbwjxegvymmjtmtedixyqsaolazamupfvyebfzfns", "sevjygcrbjwcppxqrgjgxvplvqvqlktmmsqhuxqkhynbchrbnm", "gpwbczuihtuorviczpbeyjfloycehnnkrdbyoqusgccqbquvzb", "ajxlstkfycopapozcbblmkvbdoaeaorjhqfiilcssywyhraogf", "ufncfzkkejevmigskvfkuaqqqdowdqwtvrnexkqkioylxwecwr", "vunhfmiwbqwsouvvysatreacbjxtpjxycdmzjjbeflwoubkmpf", "zqptxtzcvfjzngagiiqxjavgerjnkpprqxehzuxnekdniaontu", "dslpismvyknjuikczjewsasrgicqisnvjrpmiranderjwtlunn", "uqmzmqcgxbnlhwselldkbasgofdzizudrxuzetnpbcgxizqhft", "crsctctedknarujkgxpqifmvtvnczntbyttdfgaretdxwsiqsk", "rxjyohjsjhikdqrnciprclxncytfuruwxzvjzuumqkokdhbeen", "dujxrxdenzhqcwfwxmykeuyghajjpjemlkbdczarsgfeyhnptw", "lgbzqppgheierrmhdeeecdvzgmllkfnxlldrztxoovyprmbwxb", "nfewwhlvklghrprdyxcgybgfshntqeixfmrgfutvygnrwrtfza", "paodsjtohunxbrcqgljgqvzzheahykfwpvfaimfiikiycbtsol", "pfnqzaganrbpnahfwsrsunyloedykgmrzvajqfzejtihbhofvt", "pybewzkmmuerwtxhtrhdezwybhjfkcqaddfoepygdpqsalciia", "rwvpyoulwrttikcygecbkuqbcfjssxyrbsvbejvmcoygppaqfo", "jquxvixjjbyotfwdpuooshqthmyhrhvzkypjgvkfeyyggzmoai", "sjphtgyhqkduckcicipudyzsgidqfwoztwvbhxvdnqugcvyrhu", "wggskbhcgkhugqnzzxlygcnweuibelrbtkwkmsrkoongbganhm", "riciobdtbzqhexjhhfmzjdbfedkjypwdazhzfgbdvbnsmyulmj", "hzmxkyfgladntjindsftqhzcewcdhpsheloehomjuxzhwrmdhh", "eovlkhmrizmpxuujxqavlbinyzmsxasysrlrwkzsftwlemijrz", "bayngilthmbpncevyznmqvhkpnrmpmrefdhunbdthwproicptt", "cyvxcohadfshmemoikwvlqsdbciekmyookbqdtiypjmgycfjyl"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {20.03570969183233, 17.167143635661873, 19.358879842240484, 20.648374253494183, 17.686249255568004, 17.901455285166797, 18.3639858376283, 17.308829429201115, 18.63885982052395, 18.565842763758717, 17.653652267259044, 17.799853976068977, 18.582227755285114, 17.444354853257984, 15.786272489569374, 18.474032809546884, 17.97269822390874, 19.099352808036556, 18.316833971022884, 17.7178920427252, 17.940495006513242, 19.12179104759387, 17.314595483807853, 17.35238296089327, 18.261534702687737, 17.00208939772472, 17.134799174989148, 16.299627297727604, 18.140792883716433, 20.409967276457298, 19.16808439460779, 16.483867660539392, 15.698873744127946, 16.473407490964316, 21.08083406751538, 17.707023463409417, 15.887332934968063};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"iohmzxqizhqfoljckbjudjleapwrkrdmchqf", "oyellgxfozqxrignulythteykgjgoulpzpbe", "ivjyhpgtckwraayoqrqdjexwyokcixyofith", "nqphlwpyftgvjazzgxprthueeeutsolafxyo", "lqsmbghbtsqiysgvrhjhwqdpeqnvtcmhxhdp", "gygkxqksgxnxkxhpwyqgasosdfzhgpoznezx", "ruvhhqnnitvmjzacgympcxebqgqqlezcxkzb", "vzcjyqtatiheipvalxkwmdozuotumxwqdyfq", "zrdcapyrxrfceudtatbiinxaivnowrbgvnlw", "liairmzbqoansmlyosexrfmiodazahyvjgxp", "spjmwhkuamffufuobrlxyvduiombukqjimjz", "ribfuueegnmoojhhwaduxrhltcqidpakwfso", "noqnmzlgagmjhihmcpehvahxbuwqqhqyvpyw", "dlqflxihjxdlfvpljlmmdbybnlsbdbtlfxce", "woyxkhgvsqjpmssspcwuwxgmckuzbutcvtiu", "hlguxgiphlbffammccjylrlhstcsypmkugcz", "qxmditajebvdmgxoycuvbqqiruhkmbnqoexb", "ynurdpggdcvvnkupmrfucnbsvjndxbtjgjds", "ytjelaqcxcfwovtjgmqmpuslpuzdlfwjatob", "bjoafvvvxhtjfjeqzwuqekczgugfpxrxpufk", "aykqpoxdzplkfvzdqrulzlitrdmidfhbhgyw", "vetsslosmknsozieferyafvopbsgwdhqohhs", "vvmkswwvcrfufanydhywtcwumxhicsvkiznm", "ooihiysmkoujmvyhoqfzvgrlkilcoklbvwfo", "ubbsnuvgvphdmwdwpuilrydxckgpzopayjsb", "zyjxcluzujqbbzlxukjkjbrhbuccewhjsdjh", "vxrkxabdvzzbomdgecytuqcxpabojcyuxzmw", "jdoqbfiycjpwbqxctegpxdvcrnmnlsmqpulj", "zxyqkohwlbhoflkosrwdsjdwxotcsslmdrhn", "fdraelomthuxmxwtwmumtnvcfwfipwpbiert", "opgnsbjgvlmwsyuqlwuazplbtmiigghpfbxp", "egalinbmenyrwsqhxhqkubiimeugwlwnwqlf", "rkvhplfecboxuenewdaroiutrsxqtmpmyfwt", "cqtwabrvwrpormehltnkobuunyvjlwschyzy", "yvsdifblnasvacqivaudrougirxuddczaxfm", "jgnrwsdfsjabutlijyxsqvahytcontkajktk", "dsauwwjduzlszwihbwluifmakynitwudgyke", "ewyzqkhbsgzmpmdrobxslxwmthbivrzubqmh", "gvnljhzumsuxdepwrgrsbtbnujosggcnbvxw", "wenaapyulhllojuyetzbleifsbzywxidfiyj", "admhpuevrlcqnevynxtycxlzrkeokpbcsums", "ufurmgfbaqnjoxktdlysprfsgveeorcztfin", "wdplluquevwppyrvnvgzokwsykoarpdyeint", "iksexaippyedldjkqhstgiwbzkxietfkgezb", "riybuczwvykjulwxmcdancnluxrgcgpipdyf", "auusfwqwirefirobgnywbbgziozetfzjdmoi", "favnxqjlpodqhkkgqzyjuuwmxifhevuuycha", "qefylqorbgwirffihhxxpbusxsrjosknfpge", "midunfxxbmokzxgixeqnnhjzjtvkgtguhxyp", "tnmxkgjlsviexdbotvzbjeorcxxioagzyivc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {21.440015703251, 25.96675777838017, 24.7935661336871, 26.541330320006796, 23.529256854256843, 27.557010758848996, 24.31406183685595, 27.479500839925425, 22.95184208580792, 23.59327731092437, 24.506949886503968, 20.820780504283825, 24.102749129955008, 19.239966365334013, 28.621064637976414, 21.507316335625145, 22.440136660724885, 23.0504111493082, 23.90355286053814, 25.074944295900167, 24.521071004159232, 24.325685425685418, 27.81615843307019, 24.080863784907894, 24.617139886257526, 22.628028933958717, 25.696176268650184, 22.964727102962392, 25.60720227484934, 25.507519214919594, 24.818279432985314, 22.97861811391223, 25.621417738649708, 27.962641117052897, 21.534602325778796, 23.882982440287936, 25.842971203632967, 26.414297385620912, 25.44906204906205, 24.4337595082021, 24.752416017726723, 23.170955351837698, 29.056631919630036, 21.520368293945136, 24.47772397326477, 23.79497964875098, 25.106572638830713, 23.645538503769053, 26.735469187675076, 24.601649371869957};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"hwstoemtdljokbkvmfhmxidbadiyeelxsoimwqytividjhairu", "jpjvqnzpdvlfntkydycapzkrzwmsojkkoacqufjcpipmttefhn", "rxgbvvxdcmlzzrkvzrreymyokxghfvcsynjzynajwhxjuhqhoc", "qndaabvxxmivpbiwleniquqrvqvveaenkdstizszuavuztpdhe", "afoyneatfgwbcirxejxojjaivmxompyctspfbiapamdlxcgeti", "siumcagbpbdaqfmcxjmuixsndqsdhkldrqotatstcgimskjhom", "ndjyxqclzovcxiupjwfehhzbxondsnsgdkxxbruxtudkzntkqd", "karjyiqrzuivxxittivqqujjkhdnggslyenknzysxijdkragwc", "lnrisoaqxlehufjnxtoezvjojapsjvizeeqfblbtltaxpryozz", "hfoccfuiuqytaunondyerzhfekttomljlceclkarcjwvvrdapg", "whtgxsgmzcbunmkpsgpfmirzziuvtxvyaadwgaurtxwnygxwpp", "nmadbfrpwxjyptxrbkqrumtdmauvglvvbaadblzqbaefhlolmf", "xatdlsxnlererufoyrzsvxdzmwxvqrwogohhmmarluxjwlkpop", "nfqkvvdqbnfajekdwpwyuuetsxjiytpzegdesnmtuycqxkvvbp", "zpxjktwepknrppuiwelahxnkkhbxmvmvvpqggableclgqexscx", "tnlviimjgkrrerqocmovqjzcrrijmqkhuvnjbknvbcmqvmtupu", "kvxufnegjqzezsyjlhssjasuegdlcrsjqkethdttcneamcgpri", "vovlidppuvcvupciipsvgnhvdwqfuievxamvklwsqjolzijkhq", "mjqnysztztymcfclrscxeckvdoaxlphkooaojinsklggxxyxby", "llutqzmdclsnxdhhcfkgqrqznkpogaupczdzlzlicygqllgmdv", "nhgeeqkxkrpsxebubdpcrlwcvsfueuyhbdyvxdsdwjsouirqhr", "qpmgggfqsebfllkcrhjadkgbroxqjxxqtwmwsdpdyaibhxofjc", "dhyhiqrucahohycynyjwjdvrkjpmjyammnwhowrsxaswllfzjl", "tzbkhnkmbajcoojfdpqujuzqvcqoolrrqnyhzvnpsyvkjqryke", "wghlakodkhwkpozihmbrmuxezdyjdyktbcvlzauaillvlwyhmf", "dwipoxzmgprrlhtzjpfxgmhfnqdrfqyvgmrnenpcnicuiowrom", "gxcuozbmabaqrpkmojcfdgkchgseonqarblnsttdaluszpbaqe", "fabzwdfrkerqgwyyyzphijqbkllbkkdsvfiqezjzwrdpkbdyml", "eqglvklazgrkendlcxscdeaufnwpikrjdntjanvikwaggworzx", "waswidxffstqkgqozimkbilqsiwmkshfccdjnlnxfqlmsgqlmm", "lecjnrhajdalesnezitvvtobcopsrwvrangijwtsclwbrkrxlw", "kwnhecjymjkcatvxvchgmoihvjqtqdbdfmcfvezageaikfcqwq", "gizalohwndjgsrhfcfalzrwuxydjbclmegpgaaqcmmuxdodwbv", "aoqcwgbhjehdmndarvaiuulbdevseelofsmocfrdlbmqbhdoft", "ovmsbuxcnfeywixtmrxupkjiceslcsxxjxrlememiufhdtwcjd", "ymnhjkcsvtjszbtzynupqyuxkmkywjyqsybubujojaskkqprld", "rzuwsrkqfrevehsbdwhefsnpnthaqvzipdssrzqrcimchdikvl", "wmlnfxdlnzlfelrjqwuhvhxturabbgcppgojodjugrpjbhjigw", "ogxxxufeykafufqmthiuziyrwnbhhdfkxlvzuxhjiorqnkdpvc", "klgstidauatgsriqcoqtbervblheqebkltcfdcvcivvnucghuu", "lczhjvfvspnhqqffnhzptmbrlgzjexpqtcxqznvmhmxfiofyrh", "aekjzdagcpjbwecnevqaqduvxjwxsnhxdodlcwytefsdndnazh", "ptvfjcqfbjrjrfifypospqpbzrwseonazogvawywjdjfpuhoiq", "zxpwbsjarqapnrftmqrahoocaxnfmkqyjmumiizteyeeoydiop", "mkhrriyynwizuxgpfxernkdprfbpqvsvuybzyqqswhuygalvce", "mtyewwnwmpxsvfzdgdoutympxhzixtdhtssqtumivcbcwankph", "ysmcwgbdfnmhwsvsmknusxrtvlxxotocgbgbneoorblihonrmg", "qedoxnlgbzqmhmfinqeaoxwhiygqehyrumxcjqwanusbsdgagq", "uzbqfksscwfcfywlqrkcnhylcdbouxkejhqlyzklhuqyvjdzhd", "vtruboidfjcfldgsiqcibmbornpvftkqrhxzwecfrrzrvsxatf"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.843628978432402, 24.739852686372117, 28.27995271200174, 25.542748681761832, 21.249125704552554, 21.32671860480239, 26.78668721851984, 26.391578571495316, 25.920524630758866, 22.545720363692805, 28.851176111012904, 21.801412487597577, 29.578196526613336, 26.21690031485921, 24.860245652069025, 25.873288605914144, 22.967212955795954, 26.588782605549152, 26.198234501941382, 24.021582686728706, 24.921436972568873, 21.128279497766083, 25.574911504842447, 26.181718898475214, 24.02402303968148, 26.000394481258425, 20.245407859104173, 24.150781484348283, 22.57726327348701, 23.138577726804563, 24.35684563927329, 20.239402706195026, 21.33002741645532, 18.358420081709696, 24.77898253666953, 28.827772156040957, 24.98627385829448, 23.059181266401108, 25.92918550368035, 21.026686463361166, 26.624884068363986, 22.166123420102213, 25.23878633414513, 25.037938542669618, 27.76266783401612, 27.882197164207533, 25.071606272565376, 23.035339757044852, 24.537445332041926, 24.223868307954465};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaabaaab", "babababaaabbbaaaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaabaabaaaaaabbbbababbbaabbbbaababab", "aabababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaabaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaabbbbbababbbaabbbbaababab", "babababaaabababaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbaabaaaaabaaaaaabbbbababbbaabbbbaababab", "babbbabaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babaaabaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbbabbbbaababab", "babababaaabbbababaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbaaabbbbaababab", "babababaaaabbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbabaababab", "babababaaabbbabaaaaabaaaaaabbbbabababaabbbbaababab", "babababababbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbaaabbbaabbbbaababab", "babababbaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbabaabbaabbbbaababab", "babababaaabbbabaaaaabaaaababbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaababbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababbb", "babababaaabbbabaaaaabaaaaaababbababbbaabbbbaababab", "bababaaaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbaaababab", "babababaaabbbabaaababaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbbbabbbaabbbbaababab", "bababbbaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbabbbbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaaabbbaababab", "babababaaabbbabaaaaababaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaabbbab", "babababaaabbbabaaaaabaaaaaabbbaababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbabbabab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababaa", "babababaaabbbabaaaaabaaaaaabbabababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaaaabab", "babababaaabbbabaaaaabaaaaaabbbbababbbabbbbbaababab", "babababaaabbbabbaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaabbaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabbaaaaabbbbababbbaabbbbaababab", "baaababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaaaaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaabbbbababbbaabbbbbababab", "babababaabbbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbbbaaaaabaaaaaabbbbababbbaabbbbaababab", "bbbababaaabbbabaaaaabaaaaaabbbbababbbaabbbbaababab", "babababaaabbbabaaaaabaaaaaaabbbababbbaabbbbaababab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {24.0, 11.5, 11.5, 37.0, 11.5, 37.0, 37.0, 11.5, 11.5, 37.0, 11.5, 37.0, 37.0, 11.5, 11.5, 11.5, 11.5, 37.0, 11.5, 37.0, 11.5, 37.0, 11.5, 37.0, 11.5, 11.5, 11.5, 37.0, 37.0, 37.0, 37.0, 11.5, 37.0, 37.0, 11.5, 37.0, 11.5, 11.5, 11.5, 37.0, 37.0, 37.0, 37.0, 11.5, 11.5, 37.0, 37.0, 37.0, 37.0, 11.5};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"baababbabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbabababbb", "baaaabaabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaaababbabbaabbbabbbbaaabbbbabaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbababba", "baaaabbabbabbaabbbaabbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaababbbbababbb", "baaaaababbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaaabbbababbb", "babaabaabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaaabababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbaaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbabaabb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbaaabbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbababab", "baaaabbabbabbaabbbabbbbaaabaababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbabbbaabbaaaabbbbababbb", "bbaaabbaababbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbabbabb", "baaaabbabbabbbabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbbaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbbbabaabbaaaaabbbababbb", "baaaabbabbabbaabbbabbbbaaabbaaabaabbaaaabbbbababba", "baaaabbabaabbaabbbabbbbaaabbababaabbaaaabbbbaaabbb", "baaaabbabbabbaabbbabbbbaaabbababbabbaaaabbbbababbb", "baaaabbabbabbaabbbaabbbaaabbababaabbaaaabbbbbbabbb", "baaaabbabbabbaabbbabbbbaaabbabababbbaaaabbbbababbb", "baaaabbabbabbaabababbbbaaabbabababbbaaaabbbbababbb", "baaaaababbabbaabababbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbaababba", "baaaabbabbabbaabbbabbbbaaabbababaabbaaabbbbbbbabbb", "baaaabbabbbbbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabaabaaaabbaaaabbbbababbb", "aaaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbbbbaabbbabbbbaaaabababaabbaaaabbbbababbb", "baaaaababbabbaabbbabbbbababbababaabbaaaabbbbababbb", "baaaabbabbabaaabbaabbbbaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbbbbbbababbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbababbababaabbaaaababbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbaababbb", "baaaabbabbabbaabbbabbbbaaabbbbabaabbaaaabbbbababbb", "baaaabbabbabbaabbbabaabaaabbababaabbaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbabaaaabbaaaabbbbababbb", "bbaaabbabbabbaabbbabbbbaaabbababaabbaaaabbbbababbb", "aaaaabbabbabbaabbbabbbbaaabbababaabbabaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbabaabbbbababbb", "baaabbbabbabbaabbbabbbbaaabbababaaabaaaabbbbababbb", "baaaabbabbabbaabbbabbbbaaabbababaabbaaabbbbbababbb", "baaaabbabbabbabbbbabbbbaaabbababaabbaaaabbbbababbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {37.666666666666664, 28.0, 15.666666666666666, 15.333333333333334, 26.333333333333332, 16.333333333333332, 15.333333333333332, 37.66666666666667, 15.333333333333334, 15.333333333333334, 26.416666666666664, 15.333333333333332, 15.666666666666666, 15.333333333333334, 16.0, 15.666666666666666, 16.0, 37.66666666666667, 25.75, 26.416666666666664, 37.66666666666667, 37.66666666666667, 26.083333333333332, 10.666666666666668, 10.666666666666668, 37.66666666666667, 26.166666666666664, 38.0, 25.999999999999996, 9.916666666666668, 10.333333333333334, 41.75, 38.0, 10.333333333333334, 15.333333333333332, 26.083333333333332, 26.416666666666664, 11.000000000000002, 41.666666666666664, 25.833333333333332, 16.0, 38.33333333333333, 11.000000000000002, 16.0, 38.0, 26.083333333333332, 38.00000000000001, 26.083333333333332, 37.333333333333336, 37.66666666666667};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"abaababbaaabaabbaabbbaaaaababbbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaabbaabbaaaaaabbabababaaaba", "bbaababbaaabaabbbbbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbbaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaabaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbbbaaaba", "bbaababbaaabaabbabbbbaaaaaaaabbaaaaaabbabbbabaaaba", "bbaababbbaabaabbabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaaabbbaaabaabbabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaaaaabbabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaaababbbabaaaba", "bbaababbaaabaabaabbbbaaababaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaaababbbabaaabb", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaaabaaaaaabbabbbabaabba", "bbaabbbbaaabaabbabbbbbaaaabaabbaaaaaabbabbbabababa", "bbaababbaaabaabbabbbbaaaaabaabbbaaaaabbabbbabababa", "bbaababbaaabaabbabbbbaaaaabaabbbaaaaabbabbbabaaaba", "bbaababbaaabbabbabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbababaaa", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbaaaaaba", "bbaababbaaabaabbabbbbaaaabbaabbabaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbbbbaabaaaba", "bbaababbaaababbaabbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaabaabaaabaabbabbbbaaaaabbabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbabaaabb", "bbaababbaaabaabbabbbbaaaaabaabbabaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaabaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabaabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabababaaaba", "bbaababbaaabaabbbbbbbaaaaabaabbabaaaabbabbbabaaaba", "bbaaaabbaaabaabbabbabaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaabaabaabbaaaaaabbabbbabaaaba", "bbaababbaaaaaabbababbbaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbbabbaaba", "bbaababbaaabaabbabbbbaaaaababbbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbabaaabaabbaaaababbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaaaabbabbaabaaaba", "bbaababbaaabaabbaabbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbaabbbaaaaabaabbaaaaaabbabbbabaaabb", "bbaababbaaabaabbabbbbaaaaaaaabaaaaaabbbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaabaabbaaaababbabbbabaaaba", "bbaababbaaabaabbabbbbaaaabbaabbaaaaaabbabbbabaaaba", "bbaababbaaabaabbabbbbaaaaababbbbaaaaabbabbbabababa", "bbaababbaaababababbbbaaaaabaabbaaaaaabbabbbabaaaba", "bbaababbaabbaabbabbbbaaaabbaabbaaaaaabbabbbabaaaba", "bbaababbaaabaaababbbbaaaaabaabbaaaaaabbabbbbbaaaba", "bbaababbaaababbbabbbbaaaaabaabbaabaaabbabbbabaaaba", "baaababbbaabaabbabbbbaaaaabaabbaaaaaabaabbbabaaaba", "bbaababbaaaaaabbabbbbaaaaabaabbaaaaaabbabbbabababa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {16.43333333333333, 21.38333333333334, 30.833333333333332, 31.166666666666664, 30.833333333333332, 31.499999999999996, 10.500000000000002, 31.416666666666664, 21.933333333333337, 10.166666666666668, 10.166666666666668, 21.883333333333336, 21.883333333333336, 18.166666666666668, 21.883333333333336, 40.16666666666668, 36.616666666666674, 30.58333333333333, 31.166666666666664, 21.233333333333338, 10.500000000000002, 37.16666666666667, 22.21666666666667, 21.633333333333336, 21.883333333333336, 31.833333333333332, 30.499999999999996, 31.166666666666664, 10.500000000000002, 10.166666666666668, 36.91666666666667, 7.266666666666667, 31.166666666666664, 16.433333333333334, 31.166666666666664, 31.166666666666664, 36.583333333333336, 10.166666666666668, 10.166666666666668, 21.950000000000003, 16.916666666666664, 30.833333333333332, 30.833333333333332, 40.550000000000004, 21.633333333333336, 36.833333333333336, 21.550000000000004, 37.083333333333336, 16.666666666666664, 21.633333333333336};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"baaabbbabbbbaabbaaabbabbabbbbaaabbabababbaabababbb", "bababbbabbbbaabbaaabbabbabbbbaaababbababbaabbbabbb", "bababbbabbbbaabbaaabbabbabbbbaaababaababbaaabbabbb", "bababbbababbaabbaaabbabbaabbbaaababbababbaabbbabbb", "bababbbabbbbabbbaaabbbbbabbabaaababbababbaabbbabbb", "bababbbabbbbaabbaaabbabbabbbbbaababbababbaabbaabbb", "bababbbababbaabbaaabbabbabbbbaaababbababbabbbbabbb", "bababbbabbbbaabaaaabbabbaababaaababbababbaabbbabbb", "bababbbabbbbaaabaaabaabbabbbaaaababbababbaabbbabbb", "bababbbabbbbbabbbaabbabbabbbaaaabaabababbaabbbabbb", "bababbbabbbaaabbaaabbabbabbbbaaababbababbaabbbabbb", "bababbbabbbaaabbaaabbaababbbbaaabaabababbaabbbabbb", "bababbbabbbbabbbaaabbabbabbbbaaababbababbaabbaabbb", "bababbbabbbbaabbaaabbabbabbbbabababbabbbbaabbbabbb", "babaabbabbbbaaabaaabbabbabbbbaaababbababbaabbbabbb", "bababbbababbaabbaaabbabbabbbbaaaaabaababbaabbbabbb", "bababbbabbbbaaabaaabbabbabbbbaaababaababbaabababbb", "bababbbabbbbaabbbaabbabbabbbbaaababbababbaabbbabbb", "bababababbbbaabbaaabbabbabbbbaaababbababbabbbbabbb", "bababbbabbbbaabbaaabbabbabbbbaaababbaaabbaabbbabbb", "bababbbabaabaabbaaabbabbabbbbaaababbababbaabbbabbb", "bababbbaababaabbaaabbabbabbbbaaababbababbaabbbabba", "bababbbabbbbaabbaaabbabbabbbbaaababbababbaabbaabba", "bababbbabbbbaabbaaabbabaabbbbaaaaabbababbaabbbabbb", "bababbbabbabaabbaabbbabbabbbbaaababbababbaabbbabbb", "babaabbabbbbaabbaaaaaabbabbbbaaababbababbaaabbabbb", "bababbbababbaabbaaabbabbabbbbaaababbababbaabbbabbb", "bababbbabbabaabbaaabaabbabbbbaaababaabaabaabbbabbb", "bababbbabbbbaabaaaabbabbabbbbaaababbababbaabbbabbb", "babbbbbabbbbaabbaaabbabbabbbbaaabbbbababbaabbbbbab", "bababbbabbbbaabbbaabbabbabbbbaabaabbababbaabbbabbb", "bababbbabbbbaabbaaabbabbabbbaaaababbababbabbbbabbb", "bababbbabbbbaabbaaabbabbabbbbaaababbababbaabababbb", "bababbaabbbbaabbababbabbabbbbaaaaabbababbaabbbabbb", "bababbbabbbbaabbaaabbabbbbbbbaaababbababbbabbbabbb", "bababbbabbbbaabbaaabbabbabbbaaaabaabababbaabbbabbb", "bababbbabbbbaabbaaabbabbababbaaababbabaabaabbbabbb", "bababbbababbaabbaaabbabbababbaaababbababbaabbbabbb", "bababababbbbaabbaabbbabbabbbbaaababaababbaabbbabbb", "bababbbabbbbaabbaaabbabbabbbbaaababbababbaabbbbabb", "babbbbbabbbbaabbaaabbabbabbbbaaababbababbaabababbb", "bababbbabbbbaabbaabbbabbabbbbaaababbababbaabbbbbbb", "bababbbabbbbaabbaaabbabbabbbbaaababbababbaaabbabbb", "bababbbabbbbaaabaaabbabbabbbbbaababbababbaabbbabbb", "bababbbabbbbaaabbaabbabbabbabaaababbababbaabbbabbb", "baaabbbababbaabbaaabbabbabbbbaaababbababbaabbbabbb", "bababbbabbbbaabbaaabaabbababbaaababbababbaabbbabbb", "bababbbabbbbaabbaaabbabbababbaaababbababbaabababbb", "bababababbbbaabbaaabbabbbbbbbaaababbababbaabbbabbb", "bababbaaabbbaabbaaabbabbabbbbaaababbababbaabbbabbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {20.126190476190473, 36.16666666666667, 17.933333333333337, 17.583333333333336, 34.511904761904766, 30.650000000000006, 31.933333333333337, 13.966666666666667, 13.821428571428573, 29.003571428571433, 24.050000000000004, 14.102380952380953, 30.58333333333334, 42.766666666666666, 17.933333333333337, 13.378571428571428, 13.516666666666667, 41.033333333333324, 30.466666666666672, 23.800000000000004, 17.416666666666668, 14.161904761904761, 17.6, 17.833333333333336, 30.83333333333334, 11.68571428571429, 25.05, 11.464285714285715, 24.050000000000004, 36.95357142857144, 34.75714285714286, 30.850000000000005, 24.11666666666667, 24.497619047619047, 43.016666666666666, 17.583333333333336, 18.116666666666667, 17.516666666666666, 24.28333333333334, 30.066666666666674, 31.18333333333334, 43.46666666666667, 24.333333333333336, 31.11666666666667, 24.16904761904762, 17.516666666666666, 18.266666666666666, 17.516666666666666, 30.216666666666672, 18.03333333333333};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"baaababaaaabaabbaaaaaabaabbaaaababbababaaabbaaabba", "baaababaaaababbbaabbbabaabbaaaababaabaaababbababba", "baabbabaaaabaabbaaaabababbbaaaababbabaaaaabbababba", "bbaababaaaabaabbabaababaabbabaabbbbabaaaaabbababba", "baaabbbaaaabbabbaaaababaabbbaaababbabaaaaabbbbabba", "baaababaaaabaabbaaaabababbbaaaababbaaaaaaabbababaa", "baaababaabaaabbbaaaababaabbaaaababbabaabaabbababba", "baaababaaaabaabbabaababaabbabaababaabaabaabbbbabba", "baaababaaaabaabbaaaaaabaabbbaaababbabaaaaaabababba", "aabababaaaabaabbaaaababaabbaaaababaabaaaaabbababba", "babababaababaabbaaaabbbaabbaaaababbabaaaaabbababba", "aaaababaaaabaabbaaabaabaabbaaaaabbbabaaaaabbababba", "baaababaaaababbbababbabaabbbaaaaabbabaaaaabbababba", "baaabababaabaabbaaaabababbbaaaababbabaaaaabbababba", "baaabaaaaaabaabaaababaaaabbaaaababbabaaaaabbbbabba", "baaababaaaabaabbaaaabbbaabbaabababbabaaaaabbababba", "baaababaaaabaabbaaaababaabbaaaababbabbbaaabbababba", "baaababaaabbaabbaaaababaabaaaabbabbabaaaabbbabaaba", "baaababaaaabaabbaaaabaaaabbaaaababbabbbaaabbababba", "baaababaaaabaabbaaaabaaaabbaaaababbabaaaaabbababba", "baaababbbaabaabbaaaababaabbabaababaabbaaaabbababba", "baabbabaaaabaabbaaaababaabbaaabbabbabaaaabbbababaa", "baaababaaaabaabbaaaababaabaaaaababaabaaaaabaababba", "baababbabaabaabbaaaababaabbabaababbabaaaaabbababba", "baaabbaaaaabaabbaaaababaabbabaababbbbaaaaabbababba", "baaababbababaabbaaaabbbaabbaaaababbabaaaaabbabbbba", "baaababaaaabaabbabaabbbaabbabaababbabaaaaabbbbabba", "aaabbabaaaabaabbaaaaaababbbaaaababbabaaaaabbababba", "baaababaaaabaabbaaaababaabbbaaabbbbabaaaaabbababba", "baaababaaaaaaabbabaababbabbaaaababbabaaaaabbababba", "baaababaababaabbaaaababaaabaaabbabbabaaaaabbaaaaba", "baaababaababaaabaaaabaaaabbaaaababbabbaaaabbababba", "baaabaaabaabaabbabaababaabbaaaababbbbaaababbababba", "baaababaaabbaabbaaaababaabbaaaababbabaaaaabbababab", "baaababaabbbaabbaaaabaaabbbaaaababbabaaaaabbababba", "baaabbbaaaababbbbaaababaabbaaaababbabaaaaabaababba", "baaababaaaabaabbaaaabbbaabbaaaababbabaaaaabbbbabba", "aaaababaaaabaabbaaaababaabbaaaabbbbabaaaaabbababba", "baaababaaaabaabaaaaababaabbaaaabbbbabaaaaabaababba", "baaababaaaabaabbaaaababaabbaaabbabbababaaabbababba", "baaabababaabaabbaaaababaabbaaaabaababaaaaabbababba", "baaaaabaaaabaabbabaaaabaabbaaaababbabbaababbabbbba", "baaababaaaabaabbaaaababaabbaaaababbababbaabbababba", "baaababaaaabaabbaaaababaabbaaaabbbabbaaaabbaababaa", "baaabbbbaaabaabbaaaababaabbabaababbabaabaabbababba", "baaabbbaaaabaabbaaaababaabbabaababbabbbaaabbaaabba", "baaababbaaabaabbaaaababaabbaaaaaabbabbaaaaabababba", "baaabaaaaaabaabbaaaababaabbaaaababbabaaaaaabababbb", "bbbabaaaaaabaabbaaaabababbbaaaababbabaaaaabbababba", "baaababaaaabaabbaaaababaaaaaaaababbabaaaabbbababba"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {14.84087301587302, 30.151190476190493, 28.81071428571429, 34.74325396825397, 34.43888888888889, 15.06547619047619, 27.10833333333334, 29.984126984127002, 15.319444444444448, 15.320238095238096, 31.97579365079366, 17.361111111111114, 30.09945887445889, 28.753571428571437, 17.310642135642137, 28.07261904761905, 28.94880952380953, 24.034307359307356, 23.45198412698413, 11.264285714285716, 30.30873015873017, 27.534523809523815, 7.018650793650794, 29.95541125541127, 26.893253968253973, 34.53531746031746, 34.77063492063492, 19.941269841269847, 28.888095238095243, 23.356746031746034, 17.381673881673883, 19.860714285714288, 30.144841269841287, 23.823015873015873, 27.700396825396833, 27.256746031746037, 27.796428571428574, 18.72976190476191, 15.39404761904762, 28.65833333333334, 18.41071428571429, 26.61024531024531, 28.432142857142864, 21.12665945165946, 34.45595238095238, 30.42168109668111, 19.937698412698413, 15.483730158730157, 27.41031746031747, 15.707142857142859};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"baabaabaaabbbaaabaaaababaababbaaaaabbbaabaabbbabbb", "baabaaaaabbbbaaaaabaaaabaaaaabbaaaabbbaabbabbbabab", "baabaabaababbaaabababbabaabbabbbaaabbbabababbbbbbb", "baabbabaabbbbaaabbbaaaabbabaabaabaabbaaabbabbaabbb", "baabaabbabbbaaaababaababaababbaaababbbaabaabababbb", "baabaabaabbbbaaababbbbbbaabaabaaaaabbbaabbbbbbabbb", "bbabaababbbbbaaababaababaabaabaaaabbbbaabbaabbbabb", "baabaabbabbbbaaababaabaaaabaabaaaaabbbaabbbabbabbb", "baabaabaaabbaaaabbbaababaaaaaaaaaabbbbaabbabbbabbb", "baabaabaabbbbbaabbbaaaabbabaababaaababaabbabbbabbb", "baaaaabaababbaaababaababaabaababaaaabbaabbabbbbabb", "bbabaabaabbbbaaababaababaaababaaaaaabbaabaabbbabbb", "baababbaabbbbaaababaababaabaabaaaaabbbaabbabbbabbb", "baabaaababaabaaabaaaabababbaabaaaaabbbaaababbbabbb", "babbaaaabbbbbbbababaababaabaabaabaabbaaabbabbbabbb", "bbabaabaabbbbaaababaabababbaabaaaabbbbaabbabbabbbb", "baabaabbabbbbaaababaababaabbabaabaabbbaabaabbbabbb", "ababaabaaabbbaaababaababaaaaabababbbbbaabbabbbabbb", "baabaabaabbbbaaaabbaababaabaabaaaaabbbaabbabbbabbb", "baabaabaabbababababaabbbaabaabaaaaabbbaabbbbbbaabb", "baaaaabbabbbbabbbabaababaabaabaaaaabbbaabbabbbabba", "bbababbaababbbaabbbaabababbaabaaaaabababbbaabbabbb", "baabaabaabbbbaaababaaaabaabaabaaaaabbbaabbabbbabbb", "baabaabaabbbbababbbbababaabbaaaaaaabbbaaababbbabbb", "baabaabaababbaaababaabababbaabaaaaabbaaabbbabbabbb", "baabaabbabbbbaaabaaaaaabbaaaaaaaababbbaabbabbbabbb", "bbabbabaababbbaababaababaabaabaaaaabbbaaababbbaabb", "baabaaaaabbbbaaabbaabbabaababbaaaaabbbaabbabbbbbbb", "baabaaaabbbabaabbbbaababaabaabaaabbabbaaababbbaabb", "baabaabaabbabaaababaaaabaabaabaaaabbbaaabbabbbabbb", "baaaaaaabbabbabbbaabaaabaabaabaaaaabbbaabbabbbabbb", "baabaaaaabbbbaaababaababaabaabaaaaabbbaabbabbbabbb", "baabaabaaabbbaaababaababaaaaabaaaaabbbabbbabbbaabb", "baaaaabaabbabaaabaaaabaaaabaabaaababbbaabbabbbabbb", "baabaabaabbbbaaabaaaababaabaababaaabbbaabbaabbabba", "baabaabaabbbbaaababaabbbabbaabaaaaabbbabbbbbbbabbb", "baabaababbbaaabababbabbbabbaabaaaaabbbaabbabababbb", "aaabaabbabbbbaaababaababaabaabaabaabbbaabbabbbbabb", "bbabaabaabbbbaaabaaaabbbaabaabbaaaabbbaabbabbaabbb", "aabbaabaabbbbaaababaababaaaaabaaaaabbbaabbabbbabbb", "baabaabaabbabaaaaaaaabbbaabaaaaaaaabbbaaabaabbabbb", "babbbabaabbbbabababbaaabaabaabaaaaabbbaaabaabbabbb", "aaabbbbbabbbbaaaaabaababaabbaaaaaaabbbaaababbabbbb", "baabaabaababbaaabaaaababaabaabaabaabbbbabaabbbabba", "aabbaabaabbbbbaabaaaabbbaaaaabaaaaabbbaabbabbbabab", "baabaabbabbbbaaaaaaaabababbaaaaaaaabbbaabaabbbbbbb", "baabaabaabbbbaaabaaabaababbabbaaaaabbbaabbabbbabbb", "baabaabaababbaaababaabaaaabaababaaababaaababbbabbb", "baabaabbabbbbaaababbabaababaabaaaaabbbaabbababbbbb", "baabaabaabbbbabaaabaababaababbaaaaabbbaabbabbbabbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {18.23723776223776, 14.315873015873015, 33.140466477966484, 26.611818736818744, 24.371614496614495, 36.180056055056056, 29.38821456321457, 24.27900987900988, 19.37706182706182, 29.48092601842603, 19.240356865356862, 21.589979464979468, 28.864502164502163, 17.02279387279388, 31.25463556051791, 32.550666000666006, 30.60967920967922, 26.93622627372628, 24.369264069264066, 26.948287823287824, 27.114208014208014, 30.418786605551315, 19.87893217893218, 29.401928626928637, 21.333225108225104, 22.19925629925629, 24.351134976134976, 29.721325896325904, 24.46925900896489, 18.286408036408037, 22.319376018718117, 19.9271645021645, 18.320629370629373, 16.32236374736375, 18.416810966810967, 36.461824286824296, 28.53476939726941, 27.05937950937951, 27.148778998779, 21.12744755244755, 12.219280719280718, 26.71749916749917, 24.333922235315427, 19.44409479409479, 22.136683251389123, 21.971279210985085, 27.374206349206354, 16.093156843156848, 29.297312409812424, 27.830885780885787};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"baababaabbbbabbbbbaabbbabbbabbaaaabaabbbababbababa", "aaabababbbbbaabbabaabbbaaababababbbbaababbbbbbbaba", "abababaabbbbabbabbaabbbaaabaabaababbabbbabaaaaaaba", "ababaaabbbbbabbabaaabbbaaabaaaaaaabbaabaabaabababa", "baaaabaabbbbabbbabaabbaaaabbbaaaaaabaabaabaabbbaba", "bbbbabaabbbbabbbbbbabbaaaabababaaabbabbaabaaaaaaaa", "aaabaaaabbbaabbbabaababaaababaaaabbbabaaabaababaaa", "aaababbabbaaabbabbabbbbabababbaaaabaabbaabaabababb", "aaabababbbbbbbbbabaabbbababaaaaaaabbabaaabbabaaaba", "aaababaabbbbaabbbbaaabbaaababababbbbabbaabaabaaaaa", "baababbaabbbabbbbbaaabbaaababaabaabbabbbabaababbba", "baaaabaabbbbabbbbbabbbbbaababaabaaababbabbaaaaabba", "aabbabaabbbbabbbbaaababaaababbabaabbabbbaaaabaaaba", "aaabaaabbbbbaababbaaabbbbababaaaabbaabaaabaabababa", "aaaaababbbbbabbbbbaabbbaaababaabaabbabbaabaabaabba", "baababababbbabbbbaaaabbaaababaaaaabbbbbbabaabababa", "aababbaabbbbababbbaabbbbbababaabaaababbaaababababa", "bbbaabaabbbbbbbbbbaabaaaaababaaaaaababbaaabaaababb", "baababaabbbaabbbabaabbbaabbbbaaaaabaabbaabbbaabaaa", "aaabaaaabbbbabbbbbaabbbbaababbaaaabbbbbbabbbbabaaa", "aaababaababbabbabbabbbbaaababaaaaabaaababbaababbba", "bbaaabbabbbbababbbabbabaaababbaaaaaaabaaabaabababa", "aaaabbaabbbbbbbabbabbbbaaabbbaaaaabbabaaabaaaabbba", "aaabbaababbbaaabbaaabbbaaabbbaaaaabbabbaaaaabababa", "aaabbbaababbbbbbbbaabbbbaaaabaaaaabbabbaabaabababa", "aaabbbabbbbbabbabbaabbbaaabababbbabbbbbaabaabababa", "aaaaababbbbbabbbbbaabbbaaababaaaabbbaabbaaaabaaaba", "aaaaabaaabbbabbabbbbabbaaababbabaabbabbaabaaaababa", "abababaaabbbbbbbbbabbbbaabbaababaabbabbaabaabaaaba", "aaabbbbabbbbabbbbbaabaaabababaabaabaabbaabaabababa", "aaabaaaabbbbbabbbbaabbbaaabababaaabbabbaabaaaaabba", "aabbabbabaaaabbbaaaaaabaabaabaaaaabbabbaabaabbaaba", "aaababaababbabbbbbaabbbababbbbaabaabaabaabaabbbaaa", "aaaaaaaabbbbaabbbbaaabbbbabbbaabaabbabaaabaabaaaba", "bbaaaaaabbababbbbaaabaaabababaaaaabbabbaabaabbbabb", "aabbababbbbbababbbaaabbaaabaaaabaababbbabbaabababb", "aaababaababbabbbbaaabbbaababbaaababbbbbaabaaaaaaaa", "aaababaabbababbbbbbabbbaaabaabaaaabbbbbaaaaaaababb", "aaababaabbbaabbbbababbaaaaaabbaaaabbbbbabaabbababa", "baabbbaabbbbabbbbbaabbbabababaaababbabbaabbabbbaba", "bbaaabaababbababababbabbaababaaaaabbabbbabaabababa", "baabbbababbbabbbbaaabbbaaaaaaaaaaabbbbaaabaababaaa", "aabbabbbbbbabbbabbaabbbabaaabaaaaabbabbabaaabababb", "abababaaabbbbbbbabaabbbababaabaaaabbabbaaaaaaababa", "aaabaaaabbbaabbbbbaabbaaaabababaabababbaaabababaaa", "aaaaabaabbbbaabbbbaaabbaaaaabbaaaabaabbaabaabbbaba", "aaababaabbbbbbbbbbaaabbaaaaaaabaabbaabbabaaabababb", "aaabaaaabbababbbababbbbaaaaaabaaaabbabbbabaabbbaba", "baabbbbabbbbababbbaabbbaaabaaaaaaabbabbaabaaaaaaba", "aaabababbbabbbabaabbbbaaaababaaaabbaabbaabaabaaabb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {33.81187595084655, 32.05851603247115, 24.161415317568576, 18.51529532558945, 20.605782465728286, 26.104183651745586, 15.120733678086626, 25.95651632509219, 24.23021586256881, 22.3711752815468, 29.911596899832205, 27.68633502720191, 24.219422828633363, 21.005133269723046, 26.350892163392174, 26.122444222444233, 27.474283804430875, 24.2995416863838, 24.2277794616804, 31.458881018362458, 22.27987156891955, 22.66647684530811, 26.067556544762436, 19.16526904897648, 26.235438172938174, 33.72952332325397, 22.265991443197322, 22.359538663950428, 29.712424082625336, 25.967524060906424, 22.36031533825651, 17.2941019506809, 25.944831342548074, 20.92955424348613, 22.771660245499255, 27.54213060331482, 21.03225824313285, 24.256905104699236, 24.298243015154792, 36.24798302832358, 24.315394267754957, 20.826403747611174, 29.069731463926516, 22.368815987933633, 19.242832661834207, 18.38881404543169, 24.310155384691, 22.592641336991182, 22.114030414030413, 22.951563546532583};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"caaacbccbaaaaabaaacbcacbaacaccabacbcabbabacacbaaab", "caaacaccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbacaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabaacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccaaacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccacacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbcacaccabacbcabbacacacbaaab", "caaacbccbbaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbbcbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaaaaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcaabacacacbaaab", "caaacbccbaaaaabaaacbcacbaacacccbacbcabbacacacbaaab", "caaacbccbaaaaabaabcbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcccbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabccbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabaabcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbabcaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaac", "caaacbccbaaaaabaaacbcacbaacaccabacbcbbbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabcacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabbcbcabbacacacbaaab", "caaacbcbbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacccabbacacacbaaab", "caaacbacbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbbabbacacacbaaab", "baaacbccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaaabccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbbacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabacacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbbacaccabacbcabbacacacbaaab", "caaacbccbaabaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaabbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaaccccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabbacacacbacab", "caaacbccbaaaaabaaacbcbcbaacaccabacbcabbacacacbaaab", "caaabbccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacbccabacbcabbacacacbaaab", "cabacbccbaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaababaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbcaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbcccaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaaabcacbaacaccabacbcabbacacacbaaab", "caaacbccaaaaaabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaccaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabbbcacacbaaab", "caaacbccbaaacabaaacbcacbaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcaabaacaccabacbcabbacacacbaaab", "caaacbccbaaaaabaaacbcacbaacaccabacbcabbacacabbaaab", "caaacbccbaaaaabaaacbcacbaacacbabacbcabbacacacbaaab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {10.0, 10.0, 35.5, 21.0, 10.0, 10.0, 35.5, 36.0, 35.0, 10.5, 10.0, 10.0, 35.5, 35.5, 36.0, 36.0, 10.0, 35.0, 35.5, 35.5, 35.5, 35.0, 10.0, 35.5, 9.5, 10.0, 10.0, 9.5, 10.0, 35.5, 35.0, 35.5, 10.5, 36.0, 35.5, 35.0, 10.5, 35.0, 35.5, 35.0, 36.0, 35.5, 9.5, 10.0, 36.0, 35.5, 36.0, 10.0, 10.0, 10.0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"cbbcaabccacccbcccbccbacabccbbcccccacacacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbccaccacbcacccccaccbaa", "cbbbaabccacccbcbcbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabbcbbcccccacbcacccccaccbaa", "cbbcaabccacccbbccbccbacabacbbcccccabbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacbbacbbcccccacbcacccbcaccbaa", "cbbcaabccacccbcccbacbacacacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbcabacabbcbbcccccacbcacccccaccbaa", "cbbcbabccacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbccbccccaccbaa", "cbbcaabccccccbcccbccbacabccbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcccccccaccbaa", "cbbcaabccacccbcccbccbacabacbbbacccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccacacbcacccccaccbaa", "cbbcaabccacccbcccbccbbcabbcbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcaccccbaccbaa", "cbbcaabccacccbcccbccbacaaacbbcccccacbcacccbcaccbaa", "cbbcaaaccacbcbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcacccccacccba", "cbbcaabccacccbcccbccbacabacbbcccccacbcacccccaccbba", "cbbcaabccacccbcccbccaacabacbbcccccacbcaccbccaccbaa", "cbbcaabccacccbcccbccbacabacbbccabcacbcacccccaccbaa", "cbbccabccacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbccabccbacabacbbcccccacbcacccccaccbaa", "cbbcabbccacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbaacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccabbcacccbcaccbaa", "cbbcaabacacccbcccbccbacabacbbcccccacbcaccccbaccbaa", "cbbcaabccacccbcccbccbacabacabcccccacbcacccccaccbaa", "cbbcaabccacccbcccbcabacabacbbcccccacbcacacccaccbaa", "cbbcaabccacccbcccbccbacacacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcacccccaccbac", "cabcaabccacccbcccbccbababacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacccacccccaccbaa", "cbbcaabccacacbcccbccbacabacbbcccccacbcacccccaccbab", "cbbcaabccacccbbccbccbacabacbbcccccacbcacccccaccbaa", "bbbcaabccabccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabbcacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaacccacccbcccbccbacbbacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcaccaccaccbaa", "cbbcaabccacccbcccbccbacabccbbccccbacbcacccccaccbaa", "ccbcaabccacccbcccbccbacaaacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccaacabacbbccaccacbcacccccaccbaa", "cbbcaabccacccbcbcbccaacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccacccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabaccbaccccacbcacccccaccbaa", "cbbcacbccacccbcccbccbacabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbbcbccabacbbcccccacbcacccccaccbaa", "cbbcaabccacccbcccbccbacabacbbcccccacbcacacccaccbaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.500000000000004, 18.333333333333332, 12.66666666666667, 37.83333333333333, 12.333333333333336, 30.0, 27.416666666666668, 26.416666666666664, 26.25, 38.0, 26.833333333333336, 42.91666666666667, 38.83333333333333, 12.750000000000004, 17.499999999999996, 41.833333333333336, 18.0, 12.250000000000002, 12.750000000000004, 42.00000000000001, 38.166666666666664, 12.833333333333336, 12.500000000000002, 38.99999999999999, 17.666666666666664, 37.99999999999999, 17.666666666666664, 12.41666666666667, 12.0, 17.833333333333332, 12.083333333333336, 38.666666666666664, 38.83333333333333, 12.750000000000004, 38.333333333333336, 26.75, 17.999999999999996, 12.66666666666667, 18.0, 41.91666666666667, 17.499999999999996, 27.333333333333336, 27.66666666666667, 12.333333333333336, 12.66666666666667, 17.666666666666664, 26.916666666666668, 38.99999999999999, 27.41666666666667, 18.0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"abcaabcccccbabbcacabcccbabcacbcbabbbbabbaabacaabaa", "abcaabccbccaabbcacabcccbabcacbcbacbbbabbaabaaaabaa", "abcaabcccccaabbcacabbccbabcacbcbabbbbabbaabaaaaaaa", "abcaabcccccaabbcacabcccbabcacbcaabcbbabbaabaaaabaa", "abcaabbccccaabbcacabcccbabcaabcbaabbbabbaabaaaabaa", "abcaabcccccaabbcacabcccbabcacbcbabbbbacbaabaaabbaa", "abcaabcccccaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abcacbcccccaabccacabcccbabcacbcbabbbbabbaabaaacbaa", "abcaabcccccaabbcacabccabaccacbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcacabcccbabcacbbaabbbbabbaabaaaabaa", "abcaabcccccaabbcacabcccaabcacbcbababbabbaabcaaabaa", "abcaabcccccaabbcacbbcccbabaacbcbabbbbabbaabaaaabaa", "abcbabcccccaabbcacabcccbabcacbcbabbbbabbabbaaaabaa", "abcaabcccccaabbcacabbccbabcccbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcacabcccbabcccbcbabbbbabbaabaaaabaa", "abcaabcccccaabacbcabcccbabcacbcbabbcbabbaabaaaabaa", "accaabcccccaabbcacabcccbabcacbababbbbabbaabaaaabaa", "abcaabcccccbabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abcaabccbccaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abccabcccccaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abcbabcccccaabbcacabcccbabcacbcbabbbbabbaabcaaabaa", "abcaabccccaaabbcacaacccbabcacbcbabbbbabbabbaaaabaa", "abcaabcccccaabbcacabcccbabcacbcbabbababbaabaaaacaa", "abcaabccccccabbcacabccababcacbcbabbbbabbaabaaaabaa", "abcaabaccccaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcacabcccbbbcacbcbabbbbabbaabaaaabac", "abcaabcccccaabbcacbbcccbabcacbcbabbbbabbaabaaaabaa", "abaaabcccacaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcacabbccbabcacbabbbbbbabbaabaaaabaa", "abcaabcccccaabbcaaabaccbabcacbcbabbbbabbaabaababaa", "abcaabccaccaabbcacabcccbabcacbcbabbbbabbaabaaaacaa", "abcaabcccccaabbcacaacccbabcacccbabbbaabbaabaaaabaa", "abcaabcccccaabbcacabcccbabcacbcbabbbcabbaabaaaabaa", "abcaabcccccaacbcacabcccbabcacbcbabbbbabbaabaaaabba", "abcaabcccccaabbcbcabcccbabcacbcbabbbbabbaabaacabaa", "abcaabcccccaaabcacabcccbabcacbcbabbbbabbaabaababaa", "abcaabcccccaabbcacabcccbabcacbababbbbabbaabcaaabaa", "abcaabcbcccaabbcacabcccbabcacbcbabbbcabbaabaaaabaa", "abcaabccccaaabbcacabcccbabcacbcbabbbbabbaabaaaabac", "abcaabcccccaabbcacabcacbabcacbcbabbbbabbaabaacabaa", "abcaabccccccabacacabcccbabcacbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcaccbcccbabcacbcbabbbbabbaabaabaaaa", "abcaabcccccaabbcacabcacbabcacbcbabbbbabbaabaaabbaa", "abcaabacaccaabbcacabcccbabcacbcbabbbbabbacbaaaabaa", "abcaabbccccaabbcacabcccbabcacbcbabbbbabbaabaaaabaa", "abaaabcccccaabbcacabcccbabcacbcbabbbbaabaabaaaabaa", "abcaabcccccaabbcbcaccccbabcacbcbabbbbabbaabaaaabaa", "abcaabcccccaabbcacabccbbaacacbcbabbbbabbaabaaaabaa", "abcaabcccccaabacacabcccbabcbcbcbabbbbabbaabaaaabaa", "abcaabaccccaabbcacabcccbabcacbcbabbababbaabaaaabaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {37.150000000000006, 24.666666666666668, 10.9, 24.216666666666665, 8.933333333333335, 37.08333333333334, 23.166666666666664, 39.66666666666668, 23.816666666666666, 11.166666666666668, 18.91666666666667, 23.583333333333332, 36.96666666666667, 24.366666666666667, 33.41666666666667, 29.200000000000014, 24.05, 32.08333333333334, 14.916666666666668, 33.083333333333336, 37.26666666666667, 18.766666666666673, 24.183333333333334, 24.233333333333334, 14.66666666666667, 37.233333333333334, 32.91666666666667, 11.150000000000002, 18.950000000000003, 18.233333333333338, 23.56666666666667, 19.316666666666674, 33.0, 36.900000000000006, 37.9, 23.73333333333333, 23.866666666666667, 23.633333333333333, 23.883333333333333, 24.233333333333334, 24.299999999999997, 30.00000000000001, 23.616666666666667, 18.683333333333337, 16.166666666666668, 11.150000000000002, 36.95, 11.483333333333334, 23.55, 10.116666666666669};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"acaccbcabcaaacccbaabccbacaccccccbacabacabaacacbbcb", "acaccbaabcacacccbacbccbacaccccccbacaaacabaacacbbcb", "acacccaabcaaacccbacbccbacaccccccbacabaccbabcacbbcb", "acaccbaabcacacccbacbccbcccccccccbacabacabaacbcbbcb", "acaccbaabcacccccbacbccbacacccccccacabacabcacacbbcb", "abaccbaabcacacccbacbacbacaccccbcbacabacabaacacbbcb", "ccaccaaabcacacccbacbccbacaccccccbacabacaaaacacbbcb", "acaccbaabcacaccbbacbccbacacaccccbacabacbbaaaacbbcb", "acacabaabcacacccbacbccbacacccaccbacabacaaaacacbbcb", "acaccbaabcccacccbacbccbaaaccccccbacabacabaacacbbcb", "acbcbbabbcacacccbacbcabacaccccccbacabacabaacacbbcb", "acaccbaabcacacbcbacbcabacaccccccbacabacabaabacabcb", "acaccbbabcacacccbacbccbacabcccccbacabacabaacabbbcb", "acabcbaabcacacccbacbccbacaccccccbacabccabaacacbccb", "ccaccbaabcacacccbacbccbacbccccccaacabaaabaacacbccb", "acacabaabcabccccbacbccbacaccccbcbacabacabaacacbbcb", "acbcabaaccacacccbacbccbacabcccccbacabacabaacacbbcb", "acaccbaabcacacccbacbbcbacaccacccbaaabacabaacacbbcb", "acaccbaabcacacccbacbccbacacccbccaacabacabaacacbbcb", "acaccbaabcacacccbabcccbacaccccccbacabbcabaacacbacb", "acabcbaabcaaacccbacbccbacacccccbbacabacabaacacbbcb", "acaccbacbcacacccbacbccbacaccccccbacabacaaaacacbbcb", "acaccbaabcacacccbacbccbacaacacccbacabacabaacacbbcb", "acaccbcabcacacccbacbccbabcccccccbbcabacabaacacbbcb", "acaccbaabcacaccabacbccbacaccccbcbacabacabaacacbaab", "ccbccbbabcacacccbacbcccacaccccccbacabacabaacacbbcb", "acaccbaabcacacccbacbccbaaaccccccbacabacabaacacbbcb", "acaccbaabcacacccbacbccbacabcacccbacabaaabaacacbbcb", "acaccbaabcacacccbacbccbacaccccabbacabaccbaacacbbcb", "acaccbaaccacacccbacbacbacaccccccbacabacabaacacbbcb", "acaccbabbcacacccbacbccbacaccccccaccabacabaacacbbcb", "acaccbaabcacacccbacbccbaccccccccbacabacabbacacbbcb", "acacabaabcacacccbacbccbacaccccccaababacabaacacbbcb", "aaaccbaabcacacccbacbccbacaccccccbacabacabaacacbacb", "acaccbaaccacacccbacbbcbaccccccacbacabacabaacacbbcb", "acaccbaabcacacccbacbccbacaccccccbacabacabaabacbbcc", "acaccbaaccabacccbacbccbacaccacccbacabacabaacacbccb", "acabcbaabcacacccbacbccbacabcccccbacabbcabaacabbbcb", "aaaccbaabcacacccbacbccbaaaccccccbacabacabaacacbbcb", "acaccbaabcacacccbabbccbacaccccccbacabacabbacacbbcb", "acaacbaabcacacccbacbccbacaccccccbacabacabcccacbbcb", "acaccbaabcacacbcbacbccbacaccccccbacacacabaacbcbbcb", "acacccaabcacacccbacbccbacaccccccbacabacabaabacbbcb", "acaccbaabcaaacccbacbccbacaccccccbacabababaccacbbcb", "bcaccbaabcacacacbabbccbacaccccccbacaaacabaacacbbcb", "acaccbaabcacacccbacbccbccaccbcbcbacacacabaacacbbcb", "acbccbaabcacaccccacbccbacaacccccbacbbacbbaacacbbcb", "acaccbbaacacacccbacbccbacaccccccbacabacabaacacbbcb", "bcaccbaabcacacccbacbccbacaccbcccbacabbcabaacacbbcb", "acaccbaabaacacccbacbccbacbcccaccbacabacabaacaccbcb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {22.10595238095237, 21.7, 33.916269841269845, 39.883333333333326, 39.78095238095237, 13.813095238095237, 22.595238095238088, 18.628571428571426, 13.265476190476187, 27.614285714285714, 26.5861111111111, 11.530952380952382, 22.360714285714273, 31.525000000000016, 29.219841269841282, 19.310317460317457, 26.553968253968247, 13.544047619047616, 16.94285714285714, 26.749999999999996, 13.248809523809522, 27.63095238095238, 15.969047619047616, 34.520634920634926, 11.708730158730157, 41.57142857142858, 21.25, 13.349999999999996, 22.272619047619038, 26.980952380952377, 31.32261904761906, 37.628571428571426, 13.567857142857145, 17.009523809523806, 26.357142857142854, 27.464285714285715, 26.509523809523802, 18.82380952380952, 16.09523809523809, 26.797619047619047, 31.02976190476192, 30.97976190476192, 27.28095238095238, 22.43809523809523, 18.54603174603174, 26.85873015873016, 35.58412698412699, 27.29761904761905, 31.38928571428573, 25.889285714285705};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"abcccbcbbacabccbacbaccaaacbbaabaabbbbcbccbacbababc", "abbbabcbbacbcacbacbacccaabaaaabaabbbbccccaacbababc", "abbbabcbbacacccbacbaacababaaaabaababbbbccbaabababc", "abcbabcbbabacccbacbaccaaabbaccbaabbbbcbccbccaababc", "abbbabcbbacaccabacbaccaaabbaabbaacbbbbbccbacbababc", "abbbabcbbacacccaabbbccaaabbababaaabbbcbccbacbababc", "abbbabcbbbcaccbbacbaccacabbaacbaabbbbbbccbacbababc", "abbcabcbbacacccbacbcbcaaabbaaabababbbcbccbacbabaca", "abbbabcbbacacccbacbaccababcaccbaaabbbcbcbbacbabaca", "abbbabcbbacaccabacbaccaaabbbbcbaabbbbcbccaacbababb", "abbbabcbbccacccbacbbccaacbbaaabaabbbbcbacbacbabcbc", "abbbabcbbccacccbacbaccaaacbaaabaacbabccccbacbababc", "aabbcbcbcacaaccbaccaccaaabbaaabaabbbbcbacbacbababc", "abbbabcbcacacbcbacbaccaaabbaaabaabbbbcbccbacbabaac", "abbbabcbbacacccbacbacaaaabbababaabbbbcbccbacbababc", "abbbabcbbacaccbbacbaccacabbaaacaabbbbcbccbccbaaaac", "cbbbabcbaacacccbacbaacaaabcaaabaabbbbcbcbcacbababc", "abbbabcbbacaccccacbaacaaabbaaabbabcbbcbbcbacbababc", "acbbabcbbacacbcbacbaccbaabbaaabaabbbbcccbbacbababc", "abbbabccbacaaccaacbaccaaabbaaaaaabbbbcbccbacbacbbc", "abbbabcabacacccbccbaccaacbaaaabaabbbbcbccbacbababc", "abababcbbbcacccbaccbccaaabbaaabaabbbbabccbaabababc", "abbbabcbbacccccaacbacbaaabbcaabaabbbbcbccbacbababc", "abbbabcbbacacccbacbaccaaabbaaabaabbbacbccbacaabacc", "abbbcbcbbacacccbaccacbaabbbaaabaabbbbcbacbacbababa", "abbbabcbbacacccbacbbccaaabbaaabaaaabbcbccbacbababa", "abbbaacbbacacccbacbaacaaabbaaaaaabbbbcbcbbacbabaac", "abbbabcbbacaccbbacbaccaaacbaaabaabbbbcbcacccbababc", "abbbaaccbaccbccbabbaccaaabcaaabaacbbbcbccbacbababc", "abababccbacaccabacbaccaaabbaaabaabbbbcbccbacbababc", "abbbabcbbacacccbacbaccaaabbaaacccbbbbcbbcbacbabcac", "acbbaccbbacacccbcbbaccaaabbbaabaabbbbcbccbaccacabc", "abbbabcbbabaccacacbaccaaabbaaabaabbbbcbccbacbababc", "cbbbabcbbacacccbacbbccbaabbaaabaabbbbcbcbbacbbaabc", "abbbabcbbacacccbbcbaccaaabbaabbaaabbbcbcbbacbacabc", "abbbabcbbacacccbacbaccaaabaaaabaabbcbcbccbacbabacc", "abbaabbbbacacbcbacbacbaaabbaaabaabbbbcbccbacbababc", "acbbaccbcacacccbacbaacaaabbbcabcabbbbcbccbacbababc", "abbbabcbbccaaccaacbaccaaacaaaabcabbbbcbccbacbababc", "abbccbcbbacbccbbacbaccaaabbacabaabbbbcbcabbcbababc", "abbbaccbbabacccbacbaccaaabbaaabaabbbbcbbcbacbababc", "ababcbcbaacacccbacbacbaaabbaaabaabbcacbacbabbababc", "abbbabccbacacccbabbaccaaabbaaabaabbbccbccbacbabbbc", "abbbabcbbccacccbacbaccaaabcbaabaabbcacbcbbacbababc", "cbbbabcbbacacccbacbaccababbaaabaabbbacbccbacbcbabc", "abbbaacbbccacccbacbaccababbaaabaabbbccbccbacbababc", "cbababcbbccacccbacbaccaaabbababaabbcbcbccbabbababc", "abbbbbcbbacaccbbacbaccaaabbacaaaabbbbabccbccbababc", "abbbabcbbacacccbacbacaaaabbaacbaabbcbcbccbaccbbabc", "abbbabcbbacaccabacaaccababbaaabaabbbbcbccbacbabacc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {32.94718614718616, 23.47937062937062, 13.493051393051392, 28.536979686979695, 22.301803751803753, 20.38695748695748, 26.63992673992673, 26.09173881673882, 27.929269341769338, 23.037115662115646, 31.456859806859818, 31.40533910533912, 23.113558663558656, 20.207142857142856, 22.225396825396817, 24.201698301698293, 23.223168498168494, 25.72993672993672, 25.99714174714174, 23.205036630036624, 23.72045454545454, 22.787801087801075, 23.937481962481954, 19.51230158730158, 23.265270840270833, 17.227633477633482, 9.89184149184149, 25.809695859695847, 25.48861416361416, 19.311652236652233, 28.84688922188923, 34.1644993894994, 19.102380952380944, 28.3229686979687, 25.70352702852702, 26.443650793650793, 11.919227994227994, 34.72975080475081, 23.501820401820392, 30.14855144855146, 19.667604617604614, 15.144620657120655, 28.643686868686867, 28.207256632256644, 29.299711399711413, 29.04314574314574, 28.38252858252859, 23.552286602286603, 30.960497835497847, 22.653968253968245};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"cbcacbaccbaacaaacacaccbbaacbcccabcaacabacaacbaaaab", "cacacbaacbabaaaacacaccbbaacbcccbbccacabacaacbbaabb", "cacacbaacbabaaaccacaccabaacbcccaccabcababcacaaaacb", "cacacbaacbabaaaabacacccbaacbccaabccacaaabcabbaaabc", "cccacbabababaaaacbaacccbaacbcccabcaacababaacbbabab", "cacabbbacbcbaaaacacacccbaabbcccabcaacabaaaacbaaabb", "cccacbabccabaaaacacaccabaacbccccbcaccabccaacbcaaab", "cacacaabbbabaaaacacacccbaaabcccabcaaccbabbacbcaacb", "aacacbaacbbaaaaacabacccbaacbcccabcabaabababaaaaaab", "cccacbaacbcbaaaacacaccccaacbcccabcaacaaabbcbbcaaab", "cacacaaacaabcaaacacccccbaacbccaaccaacabaaaacbcbacb", "cbcabbaacbabcaaabacbcccbaabbcccabcabcababaacbaabab", "cacacbaacbabbaaacacaccabbacacccabccacbcabaacbaabab", "cacacbaacbabaaaacacacccbaacccaaabcaaaabcbaacbaaaab", "caaacaaacbabaaabaacaccabaacbcccabcbacababcacbaaaab", "cacbabaacbabaaaacabacccbaacbccaabcaacababaacbaaaaa", "cbcacbaacbaaaaaacacacccbaacbccccbbbacababaacbaaaba", "cacabbaacbcbaaaacaccccabaccbcccabcaccababaacbabaac", "cacaccaabbabaaaabacaccaaaacbcccabcaccababaacbaaccb", "cacabbaacbabaaaacacacccbaacbbccabcbccaaaaaacbaaacb", "cacabbaacbabaaaacacacccbaacbcbcabcaacbbabaacbbbacb", "aacacbaacbabaaaacacacccbcacbcccabcaacabababcbaaabb", "cacacbaaababaaaabacacccbaaabccaabcabccbabbacbbaaab", "cacacbabcbabaaaacacacccbaacbcccbacaacabacaacbaacab", "cabacccbcccbaaaabacaccbbaccbcccabcaacababaabbaaaab", "cacacbaacbabaaabcacacccbaacccacabaaacabbbaaabaaaac", "cbcacbcacbabaaaacacacccbaacbccbabcaacbbabcacbcabab", "cabaccaacaabaaaacacaccccaccaaacabcbacababaaababaab", "cccabbaacbbbabaacacacccbbaabcccabcaccababaacbcaaab", "cacacbaacbcbaaabbccacccbbacbcccabccacababaacbcacab", "cacacbaacbabaabaaacccccbabcbbccabcbacababaacbaaaab", "cbcbcbaacbabaaaacacacbcbaacbcccabbaacbbabaacbabaaa", "aacacbaacbabaaaacacaaccaaacbccccbaaacbbabaacbaaaab", "cacaabaacaabaaaacacabccbaacbcccabcaacbcaaaacbaacab", "cacacbaacbcbbaaacacaccbbaacbcccbbcaacabbbaaabaabab", "baaacbaacaabbaaacacacacbaacbaccabbcacababaccbaaaab", "cacacbaacbabcaaacacccccbaacbcccabcabcabcbaacbaaabb", "cacaabaacbabaaaacacbaccbaacbccbcbcaccababcacbaaaaa", "accacbaacbabaaaacacbcccbaacbcccabcaacababaacbacaab", "cababbaacbabaacacacccacbaacbcccabacacacacaacbaaaab", "cacacbaacbabaaaabacacccbaccbaccbbcaacbbbbabcbaabab", "cacacbaaaaabaaabcacacccbabcbccbabcaccababaacbaaaab", "cacaabaabbababaacacaccccaacbcccaccbacbbabaacbaaaab", "cbcacbaacbabaaaaaacacccbaacbcccaacaacbbcbaacbbaaab", "cacacaacccabaabacacbcccbcacbccccbaaacababbacbaaaac", "cacbcaaccbabaaaacaaacccbaacbccaabcaacababaacbaacab", "cacbcbaacbabaaaacacccccbaabbcbbabcaababababcbaaaab", "bacaabcccbabaaabcaaaccccaacbccaabcaacababaacbaaaac", "cbcacbaacbabaabacccccccbaacbccbabcaaabbaaaacbaacab", "cbaacbaacbababaacabaaacbaaabcccabcaaccbababcbaaaab"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {25.425339856222212, 29.268413530913534, 27.450795038295038, 21.70754392666157, 26.484756909756914, 21.400389398183517, 34.63214388380799, 25.905174155909457, 16.174028980994926, 29.697544122544134, 25.93104280910008, 24.78605415052784, 28.496944477091535, 18.58105783105783, 18.741290653790657, 14.114611777111776, 23.250169764875654, 29.55458536561478, 22.12819459951813, 20.172116119174937, 25.626731601731603, 25.354945054945052, 20.71171274545887, 27.359673659673664, 25.409903057039283, 22.75790508511097, 31.774694749694753, 20.293671159421926, 29.467140934401, 33.614601901366605, 25.009917859917863, 23.589800967006852, 16.924925074925078, 19.47204045954046, 26.597152847152852, 17.211974545062784, 32.39018342768342, 21.972015841056088, 25.765584415584424, 23.87863060142472, 28.49078829667066, 21.586646686646688, 26.80677337368514, 24.53506901595137, 31.518312608444205, 21.545714008214, 20.4240061409179, 23.26013610572434, 27.616309047849306, 20.130841376545707};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"bbaccbcbcaccbbcccabcbbcacbbcbbaacbccbacaabbcbcabca", "cbaacbbbccacbbccbcccbbaccbbabaaccaccbacaabacbcabba", "cbcccbcbccccbbccacbcbccccbbcbaaacacabbcaabcbcbabca", "cbbcbbcbcaacbbccccbcbbccbbacbaaacaccbaccabbcbbbaca", "cbacabcbbbaabaccacbcbbcccbbcaaaacaccbcaaabccbcabca", "cbaccaabccbabbccacbccbccbcbcbacacaccbbcabbccbcabba", "abcccbabacaaabccabbcabccabbcbabbcaccbaaaaaccbcabca", "cbaacbccccacbbccacbbcbccbbbcbaaaaaccbacaabcbbbabca", "cbaccbcaccacbbccccbcbbcbbaacbacaaaccbacbccbcbcabcb", "cbaccacbccaacaccaabcccccbbbcbbabcaccbacbaaccbcbbca", "acacbbcbccccbcccacbcbcccbbacbabacacabacabbccbbabca", "baaccbbcccaabbccabbcbcccbabcbacacabcbacaaccbbbabaa", "cbacbbcbccacbcccabbcbbcbcbbbbaacbcacbacaabcabccbca", "ccaccbcacbacbbccaabcbbacbbbcbaaaccbccacaabccbccbcc", "cbaacbcbcbabbbccccbcbaccbbacbaabcbcabacaabacccabab", "cbaccbbbccabbcacabacbaccbabcabaacaccbaccaabcbcbcca", "cbaacccbccbcbbcbaccccbccbbbccacaaaccaabaaaccbcabaa", "cbaccccbacaabbacabbcbbacbbbbcccacaacaccaacccbccbaa", "abcacbcbccaabbcbcabcbaccbcbabaaaccccbbcaabccbccbca", "cbaccbbbcbbbcbccacccbbaabbbcbbabbaccbacacbccbcabca", "ccaccbcbbbacbbccacbcbbccbbbcccaacacccacaababccabcc", "cbaccacbacaccbbcacbbbbacabbcbcaacacacacacbccbaabcb", "cbaccbcbcaacbbccababcbabbbbcbabacaccaacaacccbaabca", "cbbcabcbcccbbbccacacbbbbbabcbbaacbccbaccabbcbaabca", "cbabcbccbcacbbbbacbcbbccabacbaabccbaaacaacccbcabca", "ccabbbbbccacbbccacbcbbccaabcbbaaccccbaccbaccbcabaa", "cbabababccacbaabacbcbaccbbbabccabcccaaaaacccbaabca", "cbaccbabccacbbccbababaacbbccbaaacbcccaabbbcbbccbca", "caaccbcacaacbccbacbcbbccbcbcbcbaaabcbacaabacbcaaca", "cbaccbaaccacabccacbabbcabcbbbaaaaaccbacabbccbbabcb", "cbabcbcbccbcbbccacbabbccbbbccaaaaaacbaaaabaccaabca", "cbbccbcaccacabccacbcbbccbbbcbbabcaacaaabbbbcbccbca", "cbacbbcaccbcbcccacbcabbbbbbcbaaaaaccbccaacccccabca", "abaacbcbcccabcbbacbcbbacbbcbcaaacbcabaaaabccbcacaa", "cbaccccbbaaabbccaabcbbccbbbcbaaacacbbbcaabccacbbca", "cbaacbbcccaabbcbacccbbbcbbbbbacacabcbacaabccbaabaa", "aaacabcbccacbcbaacacbbacbbabbaaacacbcacaabccbcacca", "cbacbbcbccaccbbcaababbccbbbacaaacaccbacbabccbcabca", "cbaccaabccacbbbcbbbaacacabbabaaacbcbbacabbccbaabcb", "cbaccbcbccbcabacaccabcaabbbcbaaacabbbacaabccbcabca", "cbaccbababbcbacaacbcbcccbbbcbbbaccccbaaaaaccbccbca", "cbaccccbccacbbbcacbcbbaabbbccaabbaccbabaabacbcacca", "ccaccbcaacaccccaacbabbccbbbabaaccacbbabaabccacabca", "cbacabcbbcacbacbccbabbccbcccbaaacaccbcbaabccacabca", "cbacbbbbccacbbacccccbbccbbbccaacaaccbacaabccbbabca", "cbaccbcbbcabbbccacacabacbbbcbaaacaccbabbabccacabbb", "cbbacbcbacaaabccacccbbacbbbcbaaacaacbacaabcccbabcc", "cbbccbbbccaaabccabccbbccbbacbacacaccaabacbcabccbca", "abaccbcbbcacbbccacbcbbbcbcbbbababccaccbaabcabcabca", "ccaccbcbccaabbcbacacbbccbbccbaaacacabccaacbbacaacb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.455352842891557, 24.789646919987483, 32.17704689045718, 25.617640592981157, 21.148743125639403, 30.210582521268698, 18.808275683201646, 23.720445551068796, 28.393086853121854, 29.560117972991854, 28.974483360337796, 20.98741350489297, 25.87452596460539, 28.27741946754433, 23.67511203607717, 22.765148230781893, 26.45255385227387, 25.140872632624557, 26.237778822409997, 27.92447965205404, 30.815262264880996, 23.894657567571155, 21.193495109308806, 24.756643030209805, 22.19331109588277, 26.091441509687584, 18.527952555961708, 26.331318508072446, 22.501482643939568, 20.86339364551035, 21.292388638417705, 27.51216464451928, 26.854445894924098, 22.13425374588518, 23.248849061155564, 20.204790131609005, 19.113060950057854, 24.73006105951153, 20.080407956672925, 22.02121092047899, 25.860220748725254, 25.08761910249157, 22.479764015654112, 24.442842475385554, 26.993382765325503, 20.887112846733586, 23.33457582429685, 24.801425773901546, 24.473612533102376, 24.08812650291484};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcrdrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbjndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidkvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrviulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhikrkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhiarkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfet", "qbrfhmdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmdzrfwt", "qbrfhxdlfjsxrvqulbrnohierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqllbrndhierkntwfrvsizcidrvshkmkzrfwt", "gbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrxdhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdgfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkdrfwt", "qbrfpxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierdntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfqt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzwfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfmvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrnxhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxulfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrrsizcidrvshkmkzrfwt", "qbrfhldlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhiercntwfrvsizcidrvshkmkzrfwt", "qbrfhqdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfjt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidtvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhieruntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizsidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierknxwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbcndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhlerkntwfrvsizcidrvshkmkzrfwt", "qbrfhxslfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfjvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierknqwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvphkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhivrkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxpvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrqshkmkzrfwt", "qbrfhxdlfjsxrvgulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbxfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndfierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdqfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkvrfwt", "qbafhxdlfjsxrvqulbrndhierkntwfrvsizcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsszcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsivcidrvshkmkzrfwt", "qbrfhxdlfjsxrvqulbrndhierkntwfrvsihcidrvshkmkzrfwt"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {40.5, 15.5, 15.0, 31.0, 15.5, 40.0, 15.0, 14.0, 15.0, 15.0, 40.0, 15.0, 15.0, 40.5, 15.0, 14.5, 40.5, 15.5, 16.0, 40.5, 15.5, 41.0, 41.0, 15.0, 14.0, 14.5, 16.0, 15.0, 40.5, 40.5, 40.5, 40.5, 14.5, 40.5, 40.0, 14.5, 15.0, 15.0, 41.0, 15.0, 15.0, 14.5, 40.5, 15.0, 40.5, 15.5, 15.0, 40.5, 15.5, 14.5};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"uyxisaiqjuqmaiqtupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtuponwtykazxzsskngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaimdupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykayxzssbngpfjwoobfkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtwkazxzssbggpfjwoobgkkzlbtjtt", "uyxisairjuqcaiqtupoxwtykazxzssbngpfjwoobgkkwlbtjtt", "uyxisaiqjtqcaiqtupoxwtykazxzssbngpfjwvobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykaixzssbngpfjwoobgkkzlbtftt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoorgkkzlbtjtq", "uyxisaiqjuqcaiqtupoxwttkazxzssbngpfjwoobgkkzvbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwaobgkkzlbtjvt", "uyxisaiqjuqcaiqtupoxwtykazxzsxbngpsjwoobgkkzlbtjtt", "uyxisaigjuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlttjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoobfkkzlbtjtt", "uyxisaiqjuqcaiqtuboxwtykgzxzssbngpfjwoobgkkzlbtjtt", "uyxisqiqjuqcaistupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaqqtxpoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoobqkkzlbkjtt", "uyxisaiqjuqcaiqtupoxwtokazxossbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxgtykazxzssbngpfjwoobgakzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoubgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzsskngpfjwoobgkkilbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwnopgkkzlbtjtt", "uyxisaiqjuqcsiqtupoxctykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiijuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzhsbngpfjwoobekkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtckazxzssbmgpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiztupoxwtykazxzssbngpfjwoobgkrzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwooigkkzlbtatt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfbwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxkssbngpfjwlobgkkzlbtjtt", "uyxiaaiqjuqcaiqtupoxwtykazxvssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaoqtupoxwwykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlbtxtq", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjcoobgkbzlbtjtt", "uyxisaiqjuqcaiqtupoxwtyknzxzssbnzpfjwoobgkkzlbtjtt", "uyyisaiqjuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlbtwtt", "uyxisaiqjuqcaiqtuloxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaixjuqcaiqtupoxwtykazxzfsbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqfaiqtupoxwtykazxzssbngpfjwoobgkkzlbtgtt", "uyxisaiqjzqcadqtupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "wyxlsaiqjuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngpfjwoobgkkzlbtptu", "uyxisailjuqcaiqtupoxwtykazxzssbngafjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykazxzssbngcfjwoobgkkclbtjtt", "uyxisaiqmuqcaiqtupoxwtykazxzwsbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupzxwtfkazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtlkazxzssbngpfjtoobgkkzlbtjtt", "uzxisaiqjuqcaiqtupoxwtdkazxzssbngpfjwoobgkkzlbtjtt", "uyxisaiqjuqcaiqtupoxwtykozxzssbngpffwoobgkkzlbtjtt"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {35.49999999999999, 25.833333333333332, 12.833333333333334, 12.916666666666666, 13.416666666666668, 25.666666666666668, 25.583333333333336, 12.583333333333332, 26.25, 26.83333333333334, 25.750000000000004, 38.83333333333333, 25.91666666666667, 18.333333333333332, 25.249999999999996, 38.666666666666664, 38.916666666666664, 25.5, 12.916666666666668, 12.916666666666666, 35.16666666666666, 25.916666666666668, 26.416666666666668, 25.75, 17.833333333333332, 12.5, 11.75, 39.0, 25.583333333333332, 17.166666666666664, 12.416666666666666, 13.166666666666666, 38.583333333333336, 25.75, 12.666666666666668, 38.99999999999999, 38.75, 17.666666666666664, 25.583333333333332, 26.25, 25.833333333333332, 38.83333333333333, 38.16666666666667, 13.083333333333336, 12.5, 38.75, 25.833333333333336, 12.75, 25.5, 26.416666666666664};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"vmqgqtjkydntsvznnhzjrnbjstmnzcllqyfgkpsccdjjlwpuxd", "vmqgskjkydnwsvznnhzjrnbdstmnzcllqyfghpsccdjllwpuxd", "vmqgstwkydnwsvznnhzjrnbdstmnzcllqysgkpsccdjblwpuxd", "vmqgstjkydnwsvznnhzjrnbdstmozcllqyfgkpsecdjjlwpuhd", "vmqgstjkydnwsvznnhujrnbdstmnzcllqyfgkpsccdjflwprxd", "vmqgstjkydnwovznnhzjrnbdsvmnzcllqhfgkpsccdjjlwpuxd", "vmqgstjuydnwsvtnnhzjrnbdstmnzcllqyfgkesccdjjlwpuxd", "vmqgstjkydnwsvzsnhzjrnbdstmnzcllryfgipsccdjjlwpuxd", "vmqghtjkydnwsvznnhzjrnbdstmnzclldyfgkpsccdjjlwpuxi", "vmqgstjkydnwslznnhzjrnbdstmnzcllqyfgkpsccdljlvpuxd", "vmqastjkidnwsvznnhzjrnbdstmgzcllqyfgkpsccdjjlwpuxd", "vmqgstjkydnwsvznnhzjrnbdstknzcllcyfgkfsccdjjlwpuxd", "vmqgstjkydnwsvznehzjrnbdstmbzlllqyfgkpsccdjjlwpuxd", "vmqgstjkydnwsvznnhzjrjbdstmnzcllqyfgkpsccdejhwpuxd", "vmqgstjkydnwsvznnhzjrnbjstbnzcllqyfgkpsccdjjcwpuxd", "vmqwstjrydnwsvannhzjrnbdstmnzcllqyfgkpsccdjjlwpuxd", "pmqgstjkydnwsvznnhzjrnbdstmczcllqyfgkpsccqjjlwpuxd", "veqgstjkydnwsvznnhzjrnzdstmnzcllqyzgkpsccdjjlwpuxd", "vmqgdtjkydnwsvznnhzjrnbdstmnzcllqyfgkpsczdjjlwpucd", "vmqgstjkydcwgvznnhzjrnbdstmnzcllqyfgkpscvdjjlwpuxd", "vmqgssjkydnwsvznnhzjunbdstmnzcllqyfgkpsccejjlwpuxd", "vmqgstjkydnwsvznnhzgrnbdstmnztllqyfgkpsccdjjlzpuxd", "vmqgstjkydnwsvznnhzjrnbdsjmnzellqyfgkpsccojjlwpuxd", "vmqgvtjkydnwskznnhzjrnbdstmnzclhqyfgkpsccdjjlwpuxd", "vmqgstjkydnwsvznyhzjrnbdstmnzcllqyfykpsccdjjlwpuxy", "vmqgstjkrdnwsvznnhzjrnbdstmnzcglqyfgkpsccdjjlwplxd", "vmqgstjkydnwsvznnhzjrmbdsemazcllqyfgkpsccdjjlwpuxd", "jmqgstjhydnwsvznnhzjrnbdstmnzcllqyfikpsccdjjlwpuxd", "vmqgntjkydnwsvznnhzjrnbdvimnzcllqyfgkpsccdjjlwpuxd", "vmqgstjkydnwsvznnhzjrnbdstmnzcllqyfgkpsccdjjswpuud", "vmqgstjkydnwsvznnhzjrnbdstmnzcllqyhgkpsccdjjlwpfxd", "vmqgstjkydnwsvznnhzjrnbdszmnzcllqyfgkpsccdjcmwpuxd", "tmqgstjkydnwsvznnhzjrnbdszmnzcllqyfgkpsccdjjbwpuxd", "vmqgstjkydnwsvjnnhzjrnbdstmhzcllqyhgkpsccdjjlwpuxd", "viqgstjkydnwsvznnhzjrnbtstsnzcllqyfgkpsccdjjlwpuxd", "vmqgstjkydnwovznnhzjrnbdstmwzcllqyrgkpsccdjjlwpuxd", "fmqgstjkydnwsvznnhzjrubdstmnzcllqyfgkpsccdjjlwputd", "vmqgstjuydnwsvznnhzjrnbdstmnzcllqyfgkplccddjlwpuxd", "vmqgstjkydnwsvznnhzjrnbdstmnzcllqyngkpsccdkjlwpuvd", "vxqgstjkydnwsvznnhzjrnbdltmnzcllqyfgkpsmcdjjlwpuxd", "vmqgstjkyxnwsvznnhzjrnbdstmnzcllqyfgqpsccdjjlwpuxi", "vmqgytjkydnwsvznnhpjrnbdstmnzyllqyfgkpsccdjjlwpuxd", "vmqgstjkydnwsvztnhzjrnbdstmnzcllqyfgkbsccdjjlwpuxq", "vmqgstjkydnwsvznnhzjrnbdstmnzcllvyfgkpsccdjnlwpuxc", "vmqhstjkgdnwsvznnhzjrnbdstmnzcllqyfgkpsccdjjlwpuid", "vmqgstjkydnwovznnhzjinbdstfnzcllqyfgkpsccdjjlwpuxd", "vmqgstjkyinwsvznnhzjrnbdstmnzcklqyfgkpsccdjjlwpuxy", "vmqgspjkydnwsvznnhzhrnbdstmnzcllqyfgkpsccdjtlwpuxd", "vmqgstjmydnwsvznnhzjrnbdstmnzcllqyfgkpsccyjjlwpuxd", "vmqgstjkydnwsvznnhzjrnbdstknzcllqyfgkpschxjjlwpuxd"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {21.83333333333333, 20.54999999999999, 30.550000000000008, 29.26666666666667, 13.48333333333333, 21.06666666666666, 21.71666666666666, 29.833333333333336, 21.08333333333333, 21.56666666666666, 13.33333333333333, 13.133333333333331, 21.33333333333333, 13.416666666666664, 21.349999999999994, 29.766666666666676, 21.599999999999998, 30.516666666666673, 20.91666666666666, 21.166666666666664, 29.75000000000001, 29.933333333333337, 30.116666666666674, 20.866666666666667, 38.91666666666667, 13.016666666666664, 12.66666666666666, 21.55, 21.899999999999995, 26.199999999999996, 25.316666666666663, 30.10000000000001, 21.533333333333328, 21.449999999999996, 30.18333333333334, 30.35000000000001, 21.049999999999997, 21.61666666666666, 30.400000000000002, 29.96666666666667, 38.28333333333334, 30.100000000000005, 29.8, 30.250000000000007, 20.91666666666666, 12.75, 30.06666666666667, 21.416666666666657, 36.50000000000001, 30.55000000000001};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"dukzuwmzheclnnzpelinaztdzrehismxymcpocbfywbfstptxq", "dukzqwmzheclnnlpelgnaitdhrmhizmxymcpocbmyrbystptxq", "dukzuwwzheclnnlpelinadtdhrehizmxyhepocbvywbystptxq", "dukzuwmzheclnnlpelinaitdhrehizmxymcpdhbfswjywtptxq", "dukzuwmzheglncmselinaitdhrehizmxymcpocbflwbystptxq", "dukzuwmzheclpnlpeligaitkhrshizmxymcpocbfywbystptxq", "dukzuwmzhecsnnlpelinaitdhrehvzmxyscpocbfywdyotptxq", "yukzuwmzheclnnlfelinaitdhrrhizmxymcprcbaywbystptxq", "dukzuwmzhmclnnlpelinmitdhrehizmxymcplckfywbystwtxq", "dukkuwmyheclnnlpelinaitdqrehizmxymcpocbiywbyszptxq", "dgkzuwmzhxclnnlpelinaxtdhrehizmxymccocbfywbystptxq", "dukzuwmzheclnnlpelinaqtdhremizmxyecpocbfywbystgtxq", "dukzuwmzhpclnjlpelinaitdhrehizmxyqcpocbtywbystptxf", "dukzuwmzhevlnnlpelinxitdhrehizmxrmdpocwfywbystptxq", "dukzuwmzheclsnlpelinaizdfrehizmxymcpocbfywbyztptxq", "dukzuwmzhfclnqlpelinaitdorehizmxymcpocbfywtystpkxq", "dukzuwmzheclnnlpeltnaitdhrehizfuymcpocbfyfbystptxo", "dukzujmzpeclnnhzelinaitdhrekizmxymcpocbfywbystptxq", "dukzuwazheclynlpelinaitdhfehizmxymcpocbfylbrstptxq", "dukzuwmzhecinnlpzlinaitfhrehizmxymcpocnfywbystptxq", "dukzuwmzheclnnlpplinaitdhrehiumxymcpicbfywbysoptxq", "dukzuwmzhfclnnlpelinaitdhrehizaxyjcpocbaywbystptxq", "dukzjwmtheclnnlpelinaitdhrehizmxymzpolbfywbystptxq", "dukzuwkzteclnnlpelinqituhrehizmxymciocbfywbystptxq", "dukzuwmuheclnnlpulinaitdhrehijmxymcpocbfywbyssptxq", "dukzuwmzhecllnlpelinaitdhrehizmxymcpocbhppbystptxc", "dtkzuwmzoeclnnlpelinaitdhrehizmxymcpocbfywbkstbtxq", "dukzvwmzhecgnnmpelmnaithhrehizmxymcpocbfywbystptxq", "dukzqwmzheclnnlpelinaptdhrehizmxymcpocbfywmystvtxr", "dukzuwmzhecrnnlpeliiaitdhrthizmxymcpocbapwbystptxq", "duuzuwmzheclnnlpelinaitdirehizmxymcpocbfywxystptyq", "dukzusmzheclnnlpelinaitdhrgsizmxymcpocbfhwbyszptxq", "dukzuwmzheclnnlpelinaitdqrehehmxymepmcbfywbystptxq", "dukzuwgzheclnnlpvlinaitdhrehizmxyzcpocbflwbystptxk", "djkzuwmzreclnnlpelinaotdhrehizmiymcpocbuywbystptxq", "dukzuwmotecltnlpelinaitdhrehizmxymcpoczfywbyssptxq", "dukzuwmzheclnnlpelinkildhreiizmvymcpocbfywbystptxq", "dpkeuwmzhlclnnlpeligaitdhrehizmxymcpocbfywoystptxq", "duczuomzhetlnnlpelinaitdhrehizmxymcpobbfywbystptxq", "dukzuwmzheclnnlpeuinaitderehizmxymcpodbfyzbystptxq", "dukouxmzheccnnlpelinaitdhrehizmxymcpocbfywbystpttq", "dudzuwmzbeclnnlpelinaijdhvehizmxymcpocbfywbystatxq", "dukzuhmzheclnnlpelinaiydhrehizmxymcpocafywbyjtptxq", "dukzuwmzheclnnlpelsnaitdhrahizmxymcpovbfywbystpuxq", "dukzuwmzheclnnlpelincitwhrehiqmxymcprcbfdwbystptxq", "dukzuwmzheclnnlxelinaitdhuehizmxymcpocbfbwbnstptiq", "dukkuwmzhtclnnlpelinaitdhrehizmxymqpoqbfywbistptxq", "oukzuwmzhecynnlpelinaitdhrehizmuymcpokbfywbyrtptxq", "cukzewmzheclnnlpelinaitdhrehizmxymcpocbfydbysjptxh", "dukiuwmzheilnnlpelinaibdhrehizmxymcpocbfywbybtptxq"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {27.0138888888889, 21.602380952380955, 27.23293650793651, 26.39722222222223, 26.316666666666666, 29.811507936507944, 31.711111111111126, 27.09960317460319, 32.10833333333334, 26.51428571428572, 24.20436507936508, 24.305555555555554, 26.650000000000002, 32.34722222222223, 30.101190476190485, 31.752380952380967, 16.388888888888893, 26.844444444444445, 16.525000000000002, 30.18452380952382, 18.177777777777774, 18.166666666666664, 24.174603174603174, 27.344444444444452, 18.207142857142852, 15.821825396825401, 18.015873015873016, 31.754761904761917, 31.776984126984146, 21.912301587301588, 35.7202380952381, 26.65833333333334, 21.193650793650797, 21.638888888888893, 26.307936507936514, 27.191666666666677, 24.188492063492067, 20.942063492063493, 18.59325396825397, 29.668650793650798, 18.158730158730165, 16.503571428571433, 17.863095238095237, 30.50793650793652, 26.260317460317463, 20.983333333333334, 27.249206349206354, 26.85277777777778, 10.299999999999999, 17.753968253968253};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"fazccczicfsqwemaohoxfhjmpcrwnyozkkkgqylrdytzpqqrqb", "fauzcczicfdwwemaopoifhompcrceyozkkkgqyegdatwpqqrvb", "fazzhcztgfsqwemaopoxfhompakoeyozklkgqylgdatzpqqrqb", "favzcczicfbqwemahpoxfhompcrweaizkkkgqylgdjtzpqdrqb", "fazzcrzicfsqwemaopoxfuomdcrweyozfkkgqplgdatzrqqrqr", "lazzxczijfsqwemawkoxfhwmpcrweyozkkkgqylgdatzpqqrqb", "fazzccxicfuqqemaopoxfhompclweyozkkkgqytgdatzpyqrzb", "fazdcczicfiqwemhouoxfhompclwepozkkkgqylgdatzwqqrqe", "fagzcczicfsqwemjopoxdhempcrweyozkkkgqylgddtzpmqrhb", "fazzucziyfsqwomaopyxfhompcrweyozkktgqylqdatzplqrqb", "fazzcfiicfsqwemaopoxfxdmpcqwebozkrkgqylgdatzpqqrqb", "fazzcczccpsqtemaopoxfhpmpcrweyovkkksqylodatzpqqrqs", "frzzcczicybqwemcopokfhompykweyozkukgqylgdatzpqqrqb", "fazzcczicfsqwemaopbxfhonpcuwpfozkzkgqylgdatzpqirqb", "favzcczikfsqwemaopuxfhompcrweyozjkkhqylgmatzpqqrdb", "fazlcczibfsqwimaoooxfhogpcrweyoskxkgqylgdatzpqqrqw", "fazzcczicfspwqmaopmxfhomporwwyozkkkgqylxgatzpqqrqb", "fwzzcchiafsqwemaowoxrhomezrweyozkkkgqylgdytzpqqrqb", "fazzcqzitfsqwemaohoxfhompnrreyozkkkgqyjguatzjqqrqb", "fazzcczicfsqwemaopohfhsvpcrweyvwkkkuqylgdatzpxqmqb", "qazzcczicxsqwemaopdxfhompxbweyozkkkgqylgdatwpfqrzb", "fazlcczidffqwemfopoafhompcyweyozkkkgqvlgdatzpqqrnb", "fazzcczivvsqwemaopoxfhomplrwerowkkkgqylgdatziqqrqb", "fazzcczicfsdwembopoxfhempcrlezozkkkgqylgdatnpqheqb", "fazqccaicfeqwemaopoxfhompcgxeyozwkkgmyegdatzpqqrqb", "fazzkczimfsqwemaopoxfvompcsweiozikkgqylbdatzpqqrqb", "yazzcczpcfpqwymaipoxfhompcrweyozkkkgqylgdadzphqrqk", "fesznczicfsnwempopoxfhompcrleyozkkkgqylgdatmpqqrqb", "fazzccwirfsqfemzopoxfhwmpcrwsyozkkkgqylgdptzpqqrqb", "fazzcczicfsqwemaopozfhompcrwegozkkkgqmltdvtzubqrqb", "fazzpczidfsqwemaopoxfhompcrwlyozkkkgqylgdqtzsqbrqb", "dxzgcczicfhqwemaopoxfhompcrweyozokkuqylgdatfpqqrqb", "fazzwczfcssqwematpoxfhompmrweyozkmkgqylgdatzymqrqb", "fyzzcczicfsqwemaoposfhomgccwlyolkkkbqylgdatzpqqrqb", "fpzzcczicfsqwemsoroxfhomvcrweyozkkkgqylgtameiqqrqb", "fazccczicfsqwemaopsxfhnmpcrwebozkkdgfyagdagzpqqrqb", "fazzcczixfsqwfmaomoxfhompurweyozkkkgqynsdxtzpdqrqb", "fazzcczicxcqwemkopoxfhompcqceyozbzkgqylgdatipqqrqb", "wazzccvicpjqwemaopoxphoopcrweyozkkkgqylgdttzpqqrqb", "fazxcczecfsqwvmazpoxfhompcrwmyozkkkgmylgdatzpqqrqb", "fazzcczicfslwkmaopoxfhomucaweyotkkkgqylgdatzpqqrqd", "fazzcgzivfsqwemaohoxlhcmpcrweytzkykgqylgdatzpqqxqb", "fazgccbicfsqwemaopoxzhomfcrweyzykkkgqylgdrtzpqqrgb", "fazzcczicfgqeemaopoxfhompdraeyovkkkgqylgdatzpqqrqf", "fazccczicssatemaopoofhvmpcrneyozkkkgqylgdatzpqqrqb", "fozzcczicfrqwemlopoufhompcrweyozkkagqysgdatzpqqeqb", "fazzcczicfsqwemaipoxfhompcrwpyovkkkgqylgdatifqqrhb", "fazzchzicfsqwemaipoxfhompcrweyozkkkgwyjgrarzpqqzqb", "mazzcczicfsqwvmaopoxfhompcrwenozjkkgqylgdatzjqarwb", "fazzcczicfsqwemaopoxfhxmpcrwetozkktgfylgdatzpqqrqb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {24.706954156954158, 16.934011821511824, 25.985447885447886, 14.179370629370633, 26.084015984015988, 32.15173160173161, 26.062237762237768, 24.578309190809183, 18.93919413919414, 34.15396825396827, 22.675263625263625, 27.41263320013321, 28.124000999001005, 26.348951048951047, 26.14628704628705, 21.61368215118215, 30.770895770895773, 28.79458458208459, 25.300203962703968, 27.690830003330014, 24.740397102897106, 20.230540293040296, 25.00603285603286, 17.05682234432235, 16.99549200799201, 25.918897768897775, 25.148201798201804, 22.703912753912753, 30.453896103896113, 25.800882450882455, 31.323859473859482, 22.753629703629702, 31.430257242757254, 18.84578754578755, 27.817353479853484, 13.450062437562433, 31.703134365634384, 21.254316516816512, 30.287462537462552, 25.024103674103678, 23.507009657009657, 31.398101898101903, 21.31071428571429, 19.57534132534132, 18.41476856476857, 23.259673659673666, 16.60114885114885, 26.625990675990675, 22.843906093906096, 24.865728715728714};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"cxjxlxthbocaccfwhuuqbtnnyfwtobuakzwdyrxxjhvzvrkesd", "cgjxlxtybocuccfwduyqbttnyqwiocfakzwdywxdvhchjdjvcd", "xhjxlxtgboxuxcfwhuytbttnyqwtovuaszwdyqxxgcvhjrkezq", "cgbxnxjlvocxccfwomyqbttnytwtobuikzwdyqxxghehjrkqzd", "rgjxldtyxobucchwhuaqcttnlqhtobuakzwqyqxxzhvhnrkezd", "cgjjlxtynocucctuhukqbttnlqwtobuahzddjqxaghdhjrkezj", "chjxlxtybflucffdiuyqbltnuqwtouuakzwdyqcxmhvhjrkszd", "ugjxlxtybocuccfwhuyqmctnvqwtobuakzwgyxxsghvsarknld", "cmjxlxtyboluccfwhuyqctfjaqwtobuavzwdyqexghvhjrkszd", "lgjxlxsybtclccfwhuyqbttnyqwtrbzakzqlyqxxghvvjrkefd", "cgjxlttybpcucrfkhumhbttjyqwtobuqkzwzyqxxghshjvkezd", "cxjblrtlbocuccfwhwyjbgtnyqqtobuakzwdyqxxghvdjrkewd", "cgjxlxtybrcucjfwhuytbttnbfwzobuakzwdcqxrghvhjrnild", "crjslftybocuccfwtuyqettnywwtobmaszkdsexxghkhjrkezd", "cgyalxjbiocvccfwhuyqgctnyqwtoeuakzwdyjxmghvhjrkrzd", "cgjxyxtybvcuccfwhuyqottnyqwtbbuakzwdyqunghvhcrkezo", "cgjilxtyhocucckuhuyqcttnyqwtobuakxidyxwxghvhjrkkzd", "cgjxlxtjbocuccfwbuyqbttnyqutobxtkibdydxxghvhcrkwzd", "chjxlxtybovuccfwhnicmttnyqwtfbuakzwdyqzxghghjrkezd", "cgjxwxtybocuccfdzpyqbttnyqwxobwakzzryqxxshvyjrsezd", "cgjxlxtybociucfthuyqottneqwtubuakzwdyqixgtvujryzzd", "cgjxlutybocurcfwmuzzbttnymwtoduaklwdyqxlghvhgrkezr", "cgjxzxtgahcuhcfwsuypbttnyqwtobuakcwdypsxghvhxrkezd", "cgjxlqovbacuccfwhuyrujpnaqwtobuakzwdyexxghvhjkkezd", "cgaxlzvcbocuucfwhuyvtttncqwtobuakzwdfqyxghkhjrkezd", "cgjxlxtybqcucyfwhuyqbgtxlqwtmyuakzwdyvrxghvhjrkezd", "mgjxlxtsboctccfchuuqxttryqwtybuaazwdyqxxghvhjskend", "cgjxlxayhocuchfwhtyqbttnyjptzbuakzwdyqxxufvhjrkeoz", "cgjklxbyyocuwcfwduyqthtnyqwsebuakzwdyqxxghvvjrkezd", "cgjxwxuybocuccfwouytbttnzqwtobuakzwdyqcxghvhbrkezq", "cgjxlxayrocuacfwhuyqbttgdqltdbsukbwdyqxxghvhorkeou", "pgjxlxtybocuccdohuyqbvtnyqwtobiakzwdndxgghvtjrkrzd", "cgjxlxtyohcyujgehuyqbtrnyqwtobuakzwvyqxxghvhdrkmwd", "csbxldwybocuccfwhayqbttncqwtobuakzwdqqxoghhhjrkezp", "ctjxlxmybocuvvfwhuyqittnyfwtodutkzwdyqlxgwfhjzkezd", "cwjxtxtybgcuccfrheyqbftnyqwtdbuqkzndyqxzahvhjrkwzd", "zgixlxtybocucffwhuyvbttnyqstojuaudwdidxxghvhxrkezd", "tgjxlxtybocucmfwhtuqbttnywwfibuakzwdyqxxghdhjrseod", "cgjxlxtybocyccfwhmypbttnydwwoyuakzldyqxxghvcmrkrzd", "cgjwlxtybocucefehuydbttnyqwtjbuakzmdeqxxghvqjepezd", "yhjxrgtybocuccfwhuahbttcyqwtobuakzwvyqxxghvaprkeed", "czjxlxtybocdccfwhuyqbttnvtwtouuakzwshgxxghvijdmezd", "cgjylltyboquccfwhvyqbyinyqwtoduakzwjyqxjghvjjrkezd", "cgiylxtyhscuzcfwhuyqbtinyqwqobuakzwddqgxghhhjrkezk", "cgjxoktyboguclfwhfzqbttnyqwtokzakzwdyqxxghvdjfkeld", "cgjxjxtybocucibihufqbttnyqwtpvuakzwduxxxghvhjrgeze", "cgjxlxeybocuoctwhuyqetzfykwtobaakzlcyqfwghvxjrkezd", "cgjxlxtynosuccfwhuywittgyqwtdbuakzwdyqsrghvhjrkecd", "vgjxlxtybdiuccfwxuyqbtshyqwtokuahzwwyqxxghvhjrkeie", "cgjnlxtyaoccezfwhqyqbtcnyqipobuakzwsyqxlnhvhjrkeud"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {23.972251205107256, 19.406926241823264, 33.17568062312645, 26.746987224610404, 26.78088345524744, 17.425569304762334, 26.924960299978807, 26.142977318519115, 25.654753304830706, 27.307375055285277, 24.683440373583732, 18.24166644329183, 25.07959403857237, 22.86859763043973, 24.213789375399276, 25.845399225817182, 24.634330925352604, 20.329984497786356, 23.565207702514208, 33.5078330611074, 29.418646270310365, 26.564561973114614, 22.174671806521648, 16.87964590523818, 25.355663455313476, 27.128025332940204, 23.803218440486237, 24.04369647380483, 23.75615079365079, 29.838122266450455, 19.539124061315814, 22.10854626539611, 28.057507404875842, 19.440368021211675, 30.246339799355017, 23.021026008697625, 26.236685667610082, 23.010971445994677, 25.32709145859301, 19.550323837669037, 23.271012188593627, 26.48154681052784, 28.818879973804943, 23.33321879788598, 25.994000486957148, 23.728849938144585, 21.603663473571938, 23.621390344261854, 26.5170622635019, 19.621781727044887};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"ikbbvuxisdnsfkvbghwezxyuolrianoxsazsuebovzsauyscsd", "ikibqejixigkrmvbcjsevbyuogrvanozsazshebldybmdykcxd", "gxdbvexixpnxycnbcqwnebyuogrvanozsazcuybovcktdyscwd", "ikkbveoixclxruwbrhwhvnyuoggvamoxyxzsuebovlmidyscxw", "ikruvsxixdnufcqbcnwevxzuloxvmnozsazsuxbovcbvdyokxd", "ikrbvexiydnxrfvbyhcefxcmogwvhpgzswzsueuovcmvdovtoq", "ikpbvfeixdzqxcvoczwepqyuogrvahozstqsuebovcmgrmscsx", "ipgbvexiydzxmcvbchwevxyhogrjaowusazsuebrvcjvlysptd", "ikibvexwxhqxrjrbchjauxyuogrmanszrazsueiovcmvdynfqf", "ikibveniddnxravjogwrvxygohrvapoziazsuekzbqmveytlxd", "ikiavywixdinecebchwevxquvgivajozsaiozebpwlmvdcscxd", "ibxbvexixenxayvbchweuxyziqrvanfzywakuebogfmxdyscxd", "ikibwzxixdnxrcvbeeaekxuuscovanozsjzsaphpvmmvdyscsd", "iksgjbxixknxrcvbchwevkyuogrtanczzczwuidpvnmddyskxd", "ikifrexixdnxrdpbchieixyuegrvtnoosazgqpcotcmvrajcxd", "yknvvqxkxdnxrcvzchlrvxyubgruazzzoazsueiwvvmcdyscxh", "pkibvexiedborlvkchketyyuogrdanbzsazxubbovcqvdyscxd", "lkiykexixdaxrcvicfwekxyuogbvaroztaasrebovcmvddsqzd", "iccbveugxamxrefbcoeevxuaogrmfkozsazkuebovcmidyscxg", "ikiaqixixdjxrcqbytwevxyuoxrvwnczsazshenohodvdyncff", "ikibvfreapnzrcvbkhwjvwyuozryawgzxahsuebovcvtdetcxd", "hiivoezkxdqxrcvbcjwevxwregrvanozsafguebdvcmvhqhcpk", "ivibonxcxdworcpqkhwevxywogrvenozagzszebmpclvdyssld", "idnbvzxixdnxruvsthwevxypogyfanozsdbsmvvovcmidyacxa", "ikiqvdhixdnxrglocbleqxyuogbvaaodfawduebovcbvdyscad", "ikikreiixzncrcygckmevxyupgxvlnozuazsuebcgcmvdosnxw", "iimivenuxdnerctbzhwevofueorvanodsazguebqocmvdyscud", "ikiqveuyrxnltpvbchsbvxxulgrvanorsalwueboxsmvxyscxd", "ikibuewyxdkxrjvbcywjfxgiogjvlnvmsvxsuebovcmvzyscxl", "ikubvexixdbxrcvbchwyvxyunjcgayezkazsueejvcmvzyscxs", "ikixvexpldnxrcvbchwepxyuogxvangzsggsseboymbidyscxg", "inicvbxixznxjciachszvxydlgreatogsazsuxjovcmveyskrd", "iliuveximbixxcvbchchjxyjogevakozsazohebovcmvdpsbxq", "akkbrkxdxdnxhuvjfhwegxiuogroqkozsazswetovemvdysxbd", "cukbveqixluxrcvlchweaxyugdrvacofsdzsvebofcmvdysgxs", "gmibveyixdnsgcvbhrwevxtuygrvanoksizsqzvvvcmvpysqxd", "ikmbvexzxdngrgvpckwfvxyuogrzanizsarsvebovimgdyscbd", "izmbvexiydkxbcvbcswrvsyuxgrvznozsazsuebjqcmvdfscxd", "ikibveafxongrcxxcmwerjywocrqanozsyzvukouvcmvdysexd", "ikgbvexixalxrcvbckwqvxruomrwhnazsaesujbqvcmtuabcxd", "ikyvvexyxdndgcwkhhweexyvogrvsuoosamsgekoecmvdyscxd", "yktbvexixdntrcvycawwvxyumgryhaozsausppbovcxibbvcxd", "ikihvuximynxrcvbczwextyufgfvpnozsgesuezovilvcyscxd", "jxhuvesixdzzrcvbqswyixyuowrvjnozsazsuebovpkvbyscid", "ikidvevmxvnxfnvvckwevmyuovrvanozstzsuejovcmvclscdd", "iklbvexigdkxzcvbchuukxjuoqrvbnlzsazzuecovvjvdyqihd", "qkixveayxenxycybchwbzxyueanvanozdawsuebovctvdyckxi", "rribqexivdnxfcvsghweveyyogrvanozsaaoezxovcrldhscpd", "qkbbvuxlxwnxrzpbhgwevxlaogrvaeozsazcugbovcmldypcxs", "ckibvecmxdnhxevbczwevnyuodrvanozsgzsuubovcmvuxecbd"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {24.66471176111356, 17.26277912972991, 22.320058235959237, 26.388107238104457, 28.480472401162068, 28.28395252993, 24.856396432806687, 25.59888757313916, 24.266101785453714, 27.538259677125083, 19.531454705071216, 25.37823313381711, 25.16303757750921, 27.285760929477565, 19.656383983672477, 31.26321368127402, 21.991218761803466, 22.73648177966309, 16.80913123151722, 23.828177953602033, 26.35558812118061, 20.0030550658401, 25.49678238929081, 26.20132611368568, 14.812259382565284, 27.03329158590143, 20.139033266461812, 25.597325838410296, 25.393754446538086, 25.043393302775705, 24.475510375639693, 24.01472573244125, 19.020212289873026, 25.149333847053533, 24.060119567687696, 29.316840159387432, 26.68617386389501, 25.956880931273737, 27.605489411198533, 22.889397351239065, 26.620751927592874, 25.315770015091903, 26.97838645311634, 29.629135692753245, 27.337139815318228, 24.439809889313505, 25.718946633486404, 22.945946678563473, 24.479585721696274, 22.98121362879765};
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
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 2.0, 1.0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"gggggggggggggggggggggggggggggggggggggggggggggggggg", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "llllllllllllllllllllllllllllllllllllllllllllllllll", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "dddddddddddddddddddddddddddddddddddddddddddddddddd", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "ffffffffffffffffffffffffffffffffffffffffffffffffff", "tttttttttttttttttttttttttttttttttttttttttttttttttt", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "pppppppppppppppppppppppppppppppppppppppppppppppppp"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.0, 1.0, 20.0, 14.0, 4.0, 7.0, 24.0, 0.0, 22.0, 11.0, 25.0, 10.0, 2.0, 16.0, 13.0, 3.0, 12.0, 17.0, 5.0, 19.0, 23.0, 18.0, 21.0, 9.0, 8.0, 15.0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "bbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaa", "aaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbb", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbb", "aaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaa", "bbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbb", "bbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "aaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbb", "bbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbb", "aaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "babbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbb", "bbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {36.480000000000004, 0.0, 12.5, 12.52, 36.480000000000004, 12.52, 49.0, 36.480000000000004, 12.52, 36.5, 36.48, 12.52, 12.5, 36.5, 12.52, 36.5, 36.5, 36.480000000000004, 36.480000000000004, 12.52, 36.5, 12.5, 12.5, 36.5, 12.5, 12.52, 12.52, 36.480000000000004, 12.5, 12.52, 36.5, 36.5, 36.480000000000004, 36.480000000000004, 12.52, 12.5, 12.5, 12.5, 36.480000000000004, 36.480000000000004, 36.480000000000004, 12.52, 12.52, 36.48, 12.5, 12.52, 36.5, 36.5, 36.480000000000004, 12.52};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbabbbbbbbbbabbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbb", "bbbbbbbbbbbbbbbbbbbaabbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbabbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "bbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "baaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "babbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaabaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaabaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbab", "aaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbb", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbb", "bbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbb", "bbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaabaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {39.62625850340136, 35.458758503401356, 17.020408163265305, 39.33333333333333, 35.146258503401356, 49.0, 35.458758503401356, 12.166666666666668, 12.166666666666668, 0.0, 12.187074829931975, 39.31292517006802, 11.833333333333334, 12.186666666666667, 11.833333333333334, 12.166666666666668, 12.187074829931975, 39.31292517006803, 16.707908163265305, 17.020833333333332, 39.33333333333333, 16.687499999999996, 17.041241496598637, 11.853333333333333, 35.79251700680272, 16.687499999999996, 35.79209183673469, 39.31333333333333, 39.33333333333333, 11.833333333333334, 39.292925170068024, 11.5, 11.873741496598642, 12.247891156462586, 16.999999999999996, 39.33333333333333, 39.29292517006803, 17.020408163265305, 11.853333333333333, 35.81292517006802, 39.666666666666664, 35.458758503401356, 12.207482993197281, 39.33333333333333, 16.68707482993197, 35.81249999999999, 40.31333333333333, 17.333333333333332, 12.166666666666668, 16.999999999999996};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "bbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbabbbbbbbbbb", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaabaaaa", "bbbbbbbbbbbbbbbbabbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbabbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaabaaa", "bbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "bbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaabaaaaa", "aaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaabaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaabaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaabbb", "aaaaababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaa", "bbbbbababbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "bbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbabbbbbbbbb", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbabbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba", "bbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaabaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "bbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbb", "aaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbb", "aaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaabaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaabaaaaaabaaaaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 14.241241496598638, 39.833333333333336, 35.479166666666664, 9.666666666666666, 39.5, 49.0, 9.770408163265307, 14.220833333333331, 35.770390070921984, 14.281666666666666, 40.14625850340136, 35.124556737588655, 10.0, 14.641666666666667, 39.47959183673469, 17.013386524822693, 14.2875, 14.2, 35.41664857432335, 35.77039007092199, 14.154166666666667, 14.620833333333334, 39.8125, 14.266666666666666, 14.2875, 35.47916666666667, 14.266666666666666, 9.666666666666666, 35.77125850340136, 17.107482993197276, 35.77210884353742, 9.687074829931971, 35.730390070921985, 10.040408163265306, 35.812056737588655, 14.2875, 35.770390070921984, 10.0, 39.81333333333334, 35.45833333333333, 14.349149659863944, 14.533333333333331, 39.45875850340136, 39.50000000000001, 39.833333333333336, 14.283333333333333, 39.50000000000001, 17.013829787234037, 16.88005319148936};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"bbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaaaaaaabaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaabaaaabaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbabbbbbbbbbbbbbbbbb", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abbbbabbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaa", "bbbbbbbabbbbbbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba", "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbabbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbabbbbbbbbbbbabbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaababaaaaaa", "aaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbabbbbabbbbabbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbabbbbbbabbabbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaa", "bbbbbbbbabbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbabbbbbbabbbbbbbbbbbbbbbbbbabbbbbbbbb", "aaaabaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaabaa", "aaaaaabaaaabaaaaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbaabbbbbbbbbbbbabbbbbbbbbbbbbaab", "bbbbbbbbbbbbbbbbbabbbbbbabbbbbbbbbbbbbbbbbbabbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbabbbbbbbbbbababbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaabaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaabaaaa", "bbbbbbbbbbbbbbbbbbbbbbbabbbbabbbbbbbbbbbbbbbabbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbabbbbbbbbbbbbbbabbbabbbbbbbbbbbbbbb", "bbbbbbbbabbbaabbbbbbbbbbbbbabbbbbbbbbbbbbbbbabbbbb", "bbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbabbbbbbbb", "aaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaabbbbb", "bbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbb", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbabbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbabbbbabbbbbabbbbbbbbbbbbbabbbbbbbbbbbbbbb", "aaaaaaaaaaaaabaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaa", "aaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaba", "bbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbabbbbbbbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {40.641648574323334, 14.42509819684889, 14.317770876466527, 0.0, 12.218458988590811, 8.566666666666665, 12.093961352657004, 36.740165631469985, 36.42396149949342, 8.566666666666665, 8.60833333333333, 34.12619047619048, 8.587499999999999, 33.85539697223323, 8.255072463768114, 36.91054421768708, 34.187056737588655, 12.173068917668825, 12.13518357697689, 34.062748494402385, 32.17826086956521, 40.91205673758864, 8.607908163265304, 36.847619047619055, 34.133485309017225, 15.770702328791304, 16.103615643249487, 30.985320670229665, 34.066818642350555, 49.0, 12.072222222222223, 34.08317475001102, 12.137460170623909, 12.55136715185612, 34.014675932044106, 8.296276595744677, 34.070985309017225, 30.65198412698412, 34.148954891854984, 12.05, 37.02261904761905, 34.13304204660587, 40.662925170068014, 41.195833333333326, 36.719332298136656, 31.95237294312224, 12.193535002653544, 12.13655437352246, 12.51016548463357, 36.895238095238106};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"bbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbab", "bbbbbbbbbbbbbbabbbbabbbbbbbbbbbbabbabbbbbbbbbbbbbb", "aaaabaaaaaaaaaaaabbaaaaaaaaaaabaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaabaaaaaaaaabaaaaaaaaabaaaaaaaaaaaaaaa", "bbbbbbbabbbbbbbbbabbabbbbbbbbbbbbbbbbbbbbbbbabbbbb", "bbbbbbbbbbbbbbabbbbabbbbbbbbbbabbbbabbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaa", "aaaaaaaaabaaababaaabaaaaaaaaaaaaaaabaaaaaaaaaaaaaa", "bbbbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabab", "aaaaaaaaaaabaaabaaaaaaaaaaaaaaaaabaaaaaaabaaaaabaa", "aaaabaaaaaaaaabaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbbbbb", "abbbbbbbbbabbbbbabbbbbbabbbbbbaabbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaabaaaaaabbaaaaaaaaaaabaaaaaa", "aaaaabaaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaa", "babbabbbbbbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbabbb", "bbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbabbbbbbbb", "bbbbbbbbbbbbbbabbbbbbabbbbbbbbbbabbbbabbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaabaaaaaaa", "babbbbbbbbbbbbbbbbabbaabbbbbbbbbabbbbbbbbbbbbbbbab", "baabaaaaaaaaaaaaabaaaaaabaaabaaaaaaaaaaabaaaaaaaaa", "aaaaaabaaaaaaaaaaaabaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbabbb", "abbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbababbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaabaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaa", "bbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbb", "babbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aabaaabaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaabaaaaaaaaaa", "abbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbab", "bbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbabbbbbbb", "bbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbb", "aabaaaaaaaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaa", "bbbbbabbbbabbbbbbbabbbbbbbbbbbbbbbbbbabbbbbbbbbbbb", "bbbbabbbbbbbbbbabbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbabbbbbbbbbbbbbbbabbbabbbbbbbbbabbbbbbbbbbbbbb", "baaabaaaaaaaaaaabaaaaaaaaaaaaabbaaaaaaaaabaaaaaaaa", "abaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaab", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbabba", "bbbbababbbbbbbbbbbbbbbbbbbbbbababbbbbbbbbbbbbbbbba", "aaaaaaaabbabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "babababbbbbbbbbbabbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabababaaaaaaa", "bbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbabbabbbbbbbbbab", "bbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbabbbbbabbbbbbbbbbb", "bbbbbbbbbbbbbabbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaaaaaaaaabbaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaabaaaaaaaaaaaaaaaaabaaabaaaaaaaabaabaaaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {35.70643547273981, 33.41783518413953, 11.325010906406256, 11.267074398469749, 33.42489177489176, 33.28697691197691, 4.55654761904762, 12.600503372596396, 33.41949310379542, 12.291666666666666, 9.733265104460756, 38.59828251458687, 30.15319422830027, 11.206989073167032, 9.836053411076538, 31.418732008522127, 35.521296688739625, 33.48756822887257, 8.164133738601823, 30.31576127124907, 13.54409073311512, 9.802734027202112, 35.7421277997365, 33.357348400953036, 0.0, 42.43373015873017, 7.9187746463483215, 38.553016019852286, 38.72444459128086, 11.314375081159712, 38.76406926406927, 33.39541062801931, 35.6473107109493, 38.7044513457557, 9.813345410628017, 33.46962481962481, 35.55972304293841, 33.50522274058889, 13.689492844369042, 11.390868273957253, 35.63496929427161, 31.696419342930955, 9.614133738601824, 31.741148868148287, 10.053110295501602, 31.742721907512028, 35.68733631792637, 38.6873015873016, 12.61548322950762, 12.46550320071307};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"bbbbbbbbbbbbabbbbbbbabbbbbbbbbbbabbbbbaabbbbbabbbb", "bbbbbabbbbbbbbbbabbbbbbbbbbbbabbbbbaabbbbbbbbabbbb", "baaaabaaaabaaaaaabaaaaaaaaaaaaaaaaabaaaaaaaabaaaab", "bbbbbbbaabbbabbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbabbbbbbbbbbbb", "bbbbbbbbbabbbbbabbbbbbbbbbbaaabbbbbabbbabbbbbbbbba", "aaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaabaaaaabaabaa", "bbbbbbbabbbbbbbbbbbbbaaabbbbbbbbaabbbbbbbbbbabbbbb", "bbbbbbabbbbbbabbbbbbbbbabbbbabbbbbbbbbababbbbbbbbb", "bbbbbbbabbbabbabbbbbbbbbbabbbbabbbbbbbbbbbbbbbbbaa", "abaaabababaaabaaabaaaaaaaaaabaabaaabaabaaaaaaaaaaa", "bbbbbbbababbbbbbabbabbbbbbbbbbbbbbbbbbabbbbbbbbbba", "aaaaaabaaaaaabaaaaababaaabbbabaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaabbaaaaaaaaaaaaaaaaaaaaabaababbaaaaaaaaaaa", "aaaaaaababaaaaaaaaaaaaaabaaaaaaabaaaaaaaaaaaaaaaba", "bbbbbbababbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabaaabbb", "aaaaaaabaaaaaaaaaaaaaaaaaaaaabaabaaaaaabaaaaabaaaa", "aabaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaabaaaaaaaaaaaa", "bbabbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "abaabbaaaaaaaaaaaaaaaaaaaaaaabaaaabaaababaaaaaaaab", "bbbbbbbbaababbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbaa", "bbbabbbababbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbabbbbbb", "babbbbbbbbbbbbbaababbbbbaabbbbbbbbbbbbbbbbbbbbbbbb", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaababaaaabaaaaaaaaaaaa", "bbbababbbbbbbbbbbbbbbabbbbabbabbbbbbbbbbbbbababbbb", "abaaaaaaaaaaabbaaaaaabaaaaaaaaaaaaaaaaaaabaaaaaaaa", "aaaaaaaabaaaabababaaaaaaaaaabaabaaaaaaaaaaaaaaaaaa", "aaaaaaaabaabaaaaaaaaaaabbaaaaaaaaaaaaaaaaabaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaabbaaababaaaabbaaaabaaabaab", "aaababaaaaaaabaaaaaaaaaaaaaaaaabaaaaaaaaaabaaaaaaa", "aaaaaaaaaaabaaaaaabbaabaaaaabaaaaaaaaaaaaabaaaaaaa", "aaaaabaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaa", "bbbabbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbabbbbbababab", "aaaaaaaabaaaababaaaaaaaaaaaaaaaaabaaaaabaabaabaaaa", "aaaaabaabaaaaaaaaaaaaaaabaaaaaaaaaabaaababaaaaaaaa", "aaaaaaaaaaaaaaaaaaaabaaaaaabaaabbaaaaaaaaaabaaaaba", "bbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbabaabbbbabbabbb", "bbabbbbabbbbbbbabbbbabbbbbbbbbbabbbbbbabbbbbbbabbb", "abbbbbbbabbbbbbbabbbbbabbbbbbbabbababbbbbbbbbbbabb", "bbbbbbbbbbbbbbaabbbbbbbbbbbbaabbbbbababbbbbbbbabab", "bbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbabbbbbbbbbb", "bbabbabbbbbbbabbbbbbaabbbbbbbbbbbbbbbbbbbbbbbbbaba", "bbbabbabbbbabbbbbbbbbbbbbbbbbbbabbabbbbbbbbbbabbbb", "aaaabaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba", "bbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbbb", "aaaaaaaaababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaa", "aaaaaabaaaaaaaaaaaaaabaaaaaaaaaaabaaaaaaaabaabaaaa", "aabaaaabaaaaaaaaaaaaaabaaaaaaaaabbabaaaaaaaabaaaaa", "aabaaaaaaaaaaaaaaaabaaabaaaaaaaaaaaaaaaaaaababaaaa", "aaaaaaaaaaabbaaaabaaaaaaaaaaaaaabaaaaabaaaaaaabaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {36.60538692515587, 36.74310672336093, 14.646592445918506, 39.387040181410576, 39.29092776816668, 34.51030797786253, 12.078644134273743, 35.46214930333086, 36.69678024282393, 35.574472864620496, 18.0545242194236, 36.656482703392875, 15.688808663792619, 13.649304656974747, 12.266677384190146, 35.521176905836725, 12.216651316793119, 8.536721921325118, 41.484293725598064, 15.649999842105105, 36.66663316328183, 37.99993730193673, 36.84932039745456, 10.608118376864835, 35.51288880852424, 12.038599002623393, 13.376877829060115, 12.10703796266757, 17.49167404447552, 12.048498052006769, 13.418586798758161, 6.232801582194908, 35.609273746372594, 14.937314433692467, 13.579176817334714, 13.545613606373527, 36.817341571830035, 35.468042662811605, 34.77726134395695, 34.6058420692246, 43.29057350917816, 35.52440068787503, 36.72040742276437, 10.510453460774679, 41.21053161341825, 10.563424926683577, 12.088569028500965, 14.91487174884569, 12.226772143845315, 13.539105980312655};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"abaaaaaaaaaaaaaaaabaaaabaaaaaaabaaaaaabaabaabbbbaa", "baaaaaaaaaaaabbababaaaaaaaababaaababaaaaaaabaaaaaa", "bbbbaaabbbbababbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbb", "abbbbbbbbbbbabbbabbbbbbbaabbbbbbbbbabbbbabbbbbbbba", "aaaaaabaaaaaaaaaaabaaaaaaaaaaaaaaaaaabaaaababaaaaa", "bbbbbbbbabbbbbbbabbbbbbbbabbbbabbbbbbbbbababbbbbbb", "aabbbbbbbbbbbaabbbbbababbbbbbbabbabbbbbbbbbbbabbbb", "bbbabbbbbbabbbbbbbbabbabbbbbbbbbbababbbbbbbabbbbbb", "abaaabaabaaaaaaabbaaabbaaaaaaaaabaaaaaaaaaaaaaabaa", "bbabbbbbbbbbbbabbbbbbabbbbbbbbbbbbbbbbbbbabbaaaabb", "aaaaaaabaaaaaaaaaabaaaaabaaaaaaabaaaaaaaabaaabaaaa", "bbbbbbbbbbbabbbabbbbbbabbbbbbbbabbbbbbbbbbbbbababb", "aaaaaaabaaabbaaaaaaaaabaaaaaaaaaaabaaabaaaaaaaaaaa", "abbbaabbbbabbabbbbbbbbbbbbbbbbbbbbababbbbbbbbbabbb", "babbbbbbbbbbaaabbabbaabbbbbbabbbbbbbbbbbbabbbbabbb", "bbbbbbbbbabbbbbabbbbbbbbbbbbbbbbbbbbbbbaabbbabbbbb", "aaaaaaaaababaaaaaaaaaaaaaaaaaaaaaababaaaaaaaaaaaaa", "bbbbbbbbbbbabbbbbbbbbbabbabbbbbbaabbbabbabbbbabbbb", "abaaaaaaaaaaaaababbaaaaaaaaaaaabaaaaaabbaaaaaaaaab", "aaaaaaaaaaaaabaaababaaabaaaabaaaaaaaabaaaaabaababa", "bbbbbbabbababbbbbbbbbbbabbbbaabbbbbbbabbbabbbbbbab", "bbbbbbbbbbbbbbbababbbbbabbbbabbbbbbbbbbbbbbbbbaabb", "abbbbabbbbbbbbbbbbbbbbbbbbbbbbbabbabbbbbbbbbbbbbbb", "abbbabaaaaaabaabaaaaaaaaaaaabaaaaabaaabbaabaaabaaa", "bbbbbbbabbbaababbbbbbbbbbbbbbbaabbbbbbbaabababbbbb", "aabaaaaaaaaaabaaabaaaaaaaaaabaaaaaaaaaaabbbbaabaaa", "bbbabbbbaaabbbbbbbabbbaabbbbbbabaaabbbbabbbababbbb", "babaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaa", "baaabaaaaaaabbaabaaaaaaaaaabaaaaaaabaaaabaaaabaaaa", "abbababbbbbbbbbbabbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "babbbbabbbbbbbbbaabbbaabbbbbbbbbbbbabbbbabbbbbbbbb", "aaaaabaaabaabaaaaaaababaaaaaaaabaabbaaaaaaaaaaaaaa", "abbabbbbbabbbbabbbbbbbbbbbbbbabbbbbbbabbabbbbbbbbb", "aaaabaabaaaaaaaaaaaaaaaaaaaaaabbaaaaaaaaabaaaaaaaa", "baaaabbbaaaaaaaaaaaaaaaaaaaabababaaaaaaaaaaaaaaaaa", "aabaaaaaabaabaababaaaabbaaabaaaaaaaabaaaaaaabaaaaa", "aaaaaabaaaaabbabaaaaabaaaaaaaaaaaaaabaababbaabaaab", "aaaaaaabbbaaaaaaaabaabaaaaaaaaabaababbabaabaaabbaa", "bbbbbbbbbbaababbbbbbbbabbbbbbababbbabbbbbbababbbbb", "aabbbaaaabbaaabaaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaba", "bbaabbbabbbbbabababbbabbabbbbabbabbbbbbbbbbbabbaab", "aaabaaaaaababaabbaaaaababaaaaaaabaaaaaabbaaaaaabaa", "babbbbbbbbbbbbbbbbbbabaababaabbbbbbbbbbbbbbabababb", "aaabaaaaaaaaaaabaaaaaaaaabaaaaaaaaabbbaaaabaaaaaaa", "aaaaaaaaaaaabaaaaaaabbaaabbaaaaaaaabaaaaaaaaaabaaa", "bbaabaabbabbbbbbbbbbaabbbbbbbbbbbbbbbbbbbbbabbbbab", "bbbbbbbbbbbbbbbaabbbbbbbbbbabbbbbabbbbbbbbbbbbbaba", "aaaaaaaaaaaaaaabaabaaaaaaaaabbaaaaaaaaaaaaaaaaaaba", "abbbbbbbbbbbbbbbababbbbbbbbabbbbbbbbbbbbbbbbbbbbab", "aababaaaababbaabaaaaaaaaaaaaaabbaaaaaababaaaaaaaba"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {14.785907775404551, 14.928738414713965, 38.03364903469486, 35.52834850655188, 9.26463957711598, 38.012825072075245, 34.87470563637173, 37.14113158513313, 13.962422485686398, 35.76321116830442, 10.582677338876842, 37.96142101627452, 10.556760016821938, 35.39427721029888, 33.695044701432096, 39.25929355524542, 7.720591707983862, 35.82792899087217, 12.581859886905951, 13.778581401244264, 34.7535322276832, 37.90460098740467, 40.74724176196655, 16.454877044865057, 33.58931392444993, 13.899301881665854, 30.75055401463351, 9.445447670974122, 13.994911712011698, 39.43025164440063, 35.659090067480626, 13.040013800555217, 36.833771469638535, 9.211043309023129, 12.012049270897803, 14.861427204812857, 15.63524117252819, 17.175941997262345, 34.65159240977551, 13.907352611454776, 31.375777859731294, 15.771887454339014, 33.88417345308705, 11.742210467014594, 11.726304083613135, 34.70989600999276, 37.933143727021616, 9.237343698552909, 39.17809431367066, 15.829597667484537};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbb", "cccccccccccccccccccccccbcccccccccccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaa", "ccccccccccccccbccccccccccccccccccccccccccccccccccc", "ccaccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccccccbccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccbccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccccccccccccccccccccccccccccccccaccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaaa", "bbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccccccccccccaccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccbccccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba", "cccccccbcccccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbb", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccccccccccccccccccccccccccccccccccccacc", "accccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccacccccccccccccccccccc", "bbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaa", "bbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbb", "caaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbb", "bbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbb", "ccccccccccccccccccccccccccccccccccccccbccccccccccc", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaca", "bbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbb", "cccccacccccccccccccccccccccccccccccccccccccccccccc", "aaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaa", "babbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {28.482857142857146, 41.5, 8.402448979591833, 41.5, 41.115102040816325, 18.476734693877546, 42.0, 0.0, 49.0, 41.480000000000004, 8.362448979591834, 8.382040816326528, 40.63510204081632, 21.979999999999997, 18.47714285714285, 8.382448979591834, 28.482857142857146, 8.0, 41.115102040816325, 41.5, 8.0, 7.5, 41.5, 28.482857142857146, 8.02, 41.09510204081632, 41.09510204081632, 28.502857142857145, 41.11551020408163, 18.476734693877546, 8.0, 28.482857142857146, 18.476734693877546, 8.402448979591833, 18.456734693877547, 28.48244897959184, 28.482857142857146, 28.482857142857146, 41.5, 8.0, 28.482857142857146, 28.502857142857145, 8.862448979591834, 28.482857142857146, 28.482857142857146, 41.11510204081632, 8.382448979591834, 8.402448979591833, 8.0, 18.45673469387755};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"cccccccccccccccccccacccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbb", "cccccccccccccccccccccccbccccccccccccccccccbccccccc", "ccccccccccccccccccccccccccaccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccccccccbcccccccccc", "aaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaacaaaaaaaa", "ccccccccccccccccccccccccccccccccccccbccccccccccccc", "cccccccccccccccccccccbcccccccccccccccccccccccccccc", "cccccccccccccccccccbccccccccccbccccccccccccccccccc", "bbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbb", "aacaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccccccacccccccccccccccccccccccccccccccccccaccccccc", "cccccccccccccccccccccccccccccccccccccbcccccccccccb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbcbb", "cccccccccccccccccccccccacccccccccccccccccccccccacc", "bbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbb", "aaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbb", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "bbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaabaaaaaaaaa", "ccccccccaccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccaccccccacccccc", "bbbbbbbbbbbbcbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbb", "ccccccccaccccccccbcccccccccccccccccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbb", "bbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbcbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbcbbbbbbb", "aaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbcbbbcbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaacaaaaaaaaaaa", "bbbbbbabbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "bbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccacccccccccccccccccccccccccccacccccccc", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbabbbbbbbbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {42.2400850340136, 18.575442176870745, 40.79166666666667, 42.38632653061224, 42.83333333333333, 7.787894413084381, 43.12625850340135, 42.83333333333333, 40.60542517006802, 17.176560283687945, 7.934152916485742, 4.5, 39.51974489795918, 40.48, 23.329965986394566, 39.48183673469387, 17.15654327688522, 5.591598639455781, 30.1275, 7.85374149659864, 18.59585034013605, 27.937023809523815, 27.62287414965987, 7.5, 42.719659863945566, 39.33391156462584, 29.858810609350126, 39.69125524677956, 18.576258503401355, 27.93743197278912, 27.790765306122452, 27.937023809523815, 22.59877551020408, 5.166666666666667, 23.517431972789122, 30.14835142567666, 5.166666666666667, 29.919201765812712, 8.246652916485742, 17.116118106817197, 27.937023809523815, 49.0, 18.59585034013605, 7.561241496598639, 39.6247619047619, 7.953744753220435, 5.758690476190474, 7.540000000000001, 5.611615646258501, 23.704931972789122};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"bbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaabaaaaaaaaabaaaaaaaaaaaaaaaaa", "cccacccccccccccccccccccccccbccccccccccccaccccccccc", "aaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "ccccccccccbcccccccccccccaccccccccccccccccccccccccc", "bbbbbbbbbbbbabbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "cccccccccccccccccccccccccccccccccccccccccccbcccccc", "ccccccccccccccccccccccacccccccccccccccccccaccccccc", "aaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbcbbbbbbbbbabbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbabbbbbbb", "cccbcccccccccccccccccccccccccccccccccacccccccccccc", "ccccccccccccccccccccccaccccccccccccccccccbcccccccc", "bbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbb", "bbbbbbbbbbbabbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbb", "ccccccccccccccccaccccccccbcccccccccccccccccccccccb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcabb", "ccccacccccccccccccccccccccccccbcbccccccccccccccccc", "bbabbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbabbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaa", "aaaaaaaaaacaaaacaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccccccccccbcccccccccccbcccccccccccccccc", "cccccccccccccccccccacccccccaccccccccccccccccccbccc", "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbabbbbbbbabbbbbbbbbbb", "ccccccccccacccccbccccccccccccccccccccccccccccccccc", "ccbccccccccccccccccccccccccccccbaccccccccccccccccc", "aaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaababa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbb", "ccccccccccccccccacccccccccccccccccaccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacbaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaacaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaaaaaaabaaaaaaaaaaa", "bbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbb", "ccccccccccccccccccccbcccccccccccccbccccccccccccccc", "cbcccccccccccbcccccccccccccccccccccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaabaaabaaaa", "cbccccccaccccccccccccccccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccbccccccccbccccccc", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "cccccccccccbcccccccccccccbccccccccccccccccccbccccc", "aaaaaaaaaaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbabb", "bbbbbbbbbbcbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaaaaaaaaaa", "cccccccccccccccccccccccccccccccccccccbcccbcccccccc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {24.314628021421335, 6.693741496598639, 36.79414748878274, 5.283674554928353, 39.20622231871473, 19.485728035895207, 42.49999999999999, 38.53229591836735, 4.686666666666667, 26.033319142643183, 23.14370803362974, 21.217996453900707, 39.063757417860764, 39.01957265885077, 21.129611014618614, 21.207519177883917, 36.95380788763239, 21.25673795049935, 37.250954095791876, 21.238386524822694, 21.257519177883918, 4.686666666666667, 8.97848151749136, 39.43333333333334, 36.72457265885076, 15.912496003951993, 39.17040599218411, 37.05004938423102, 8.066666666666666, 0.0, 21.190409248805906, 38.47435374149661, 7.253815045907353, 17.9941156462585, 21.184132653061223, 7.3400735493087135, 7.2200010855405985, 20.96881278043132, 39.6, 39.43333333333334, 8.094982993197277, 39.059555652048054, 39.6, 49.0, 37.529166666666654, 6.908351425676654, 21.25881278043132, 21.44333441887393, 5.5540827181936585, 39.6};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"bccccccccccccbccccccccccccccccaccccccccccccccccccc", "aacaaaaaaaaaaaaacaaaaaaaaaaaaaaaaacaaaaaaaaaaaaaaa", "aaacaaacaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbabbbbccbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccccccccccccccccccacbcc", "bbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbcbbbbbbbbb", "cccccccccccccacccccccccccccccccccccccccccccccccccc", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaabaaaaaaaaaaaaaa", "aaaacaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcaaaaaaaaaaa", "bbbabbbbbbabbbbbbbbbbbbbbcbbbbbbbbbbcbbbbbbbbbbbbb", "bcbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbb", "ccccccccccbccccaccccccccccccccaccccccccaccccccccca", "ccccccbcccccccbccccbcccccccccccccccccccccccccccacc", "aaaaaaaaaaaaaaaaaaaaaaaaaccaaaaaaaaaaaaacaaaaaaaaa", "bbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbcbbbcbbb", "aaacaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaacaaaaaaaaaaaaccaaaaacaaaaaaaaaa", "bbbbbbbbbbbbbbbbbcbbbbbbaabbbbbbbbbbcbbbbbbbbbcbbb", "bbbbcbbbbbbbbbbbbbbbbbbbbbabcbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbabbcbbbbbbbbbbbbbbbbbbbbbbbbcb", "aaaaacaaaaaaaaaaaaaaaaaaaaaaaaacaaabaaaaaaaaaaaaaa", "ccccccccbcccccccaccccccccccccccccacccccbcccccccccc", "cbcccccccccccccccccccccccaccccccaccccccccccccccccc", "bbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbabbbbbbabbbbbbbb", "ccccccbccccccccccccccccaccccccbccccccbcccccccccccc", "bbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba", "ccccaccccccccccccccccabcccccccccccccaccccccccccccc", "bbbbbcbabbbbbbbbbbbbbbbbbbbbbbbbbcbbcbbbbbabbbbbbb", "ccaccccccccccaccccccccccccccccccccccccccbccbcccccc", "ccccccccccccccccccacccccccccccccccccccbccccccccccc", "bbbbbbbbcbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbabbb", "cccbccccccccccccccccccacbccccccccccccccccccccccccc", "aaaaaaaaaaacaaaaaaaacabaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccbccbccccbcccccccccccccccccbcccccccccccc", "cccccccccccbcccbcccccccccccccccccccccccccacccbbccc", "aaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaac", "aaaaaaaaaaaaaaaaaaaaaabaabbaaaaaaaaaaaaaabaaaaaaaa", "aaaaacaacaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbcbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaabbaaacaaaaaaaaaaaaaaaaaa", "cbaccccccccccccccccccccacccccccccccccccccccccccccc", "aaacaaaaaacaaaaaaaaaaaaaaabaaaaaaaaaaaaacaaaaaaaaa", "aaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaacaabaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaaaaaaaa", "bbbbbbbabbababbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcb", "bbbbbbbbbbbbbbbbbbbbcbcbbbbbbbbbbbbbbbbbcbbbbbbbbb", "ccccaccacccccccccccccccccccccccbcbcccccccccccccccc", "aaaaaaaaaaaaaaaaacaaaaaaaaaaaaacaaaabaaaaacaaaaaaa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {41.581724660374064, 9.697617427174386, 9.49659919009232, 25.955945166421905, 43.074149161669, 24.326394316591887, 45.40402183352527, 7.250169533123147, 7.410857938920248, 7.428432668164398, 24.669998186951737, 28.674096764907848, 38.1715760919623, 40.14140706490589, 10.025968758456205, 29.301278245736235, 7.190932668164398, 12.299755592226518, 25.83268478599357, 25.99715038393907, 26.077236304215294, 9.378622559106901, 39.893136685055545, 41.05990692144882, 23.330445218482097, 40.40924611541972, 21.301714121047745, 39.666493085053936, 25.99787983169896, 39.55125238585328, 42.9680267126894, 22.44171176642103, 41.28087673255046, 9.369756492791382, 26.241863458920417, 40.644975153181846, 39.492831751611156, 10.154962269717124, 10.015335258987959, 9.662438984227673, 23.0881163720499, 8.884931333001903, 41.13745794185698, 11.161739514688502, 3.8000000000000003, 10.297601675155526, 23.83527292550188, 28.964991491348936, 39.98465921605376, 10.975757282561501};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"bbbbbbbcbbbbbbbcbbbbbbbbbbbbbbcbbbbbbbbbcbbaababbb", "aaacaacaaaaacabbaaabaaaaaaaaaaaaaaacaaaaaaaaaacaaa", "aaaaaaaaaaaaaaaaaaaaaacaabacaaaacaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaacaaaaabaaaaaaaaaaaaaaaaaaaaabaaa", "ccccccaccccccccccccccccccccccccaccbccccccccbcccccb", "aaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaacaaaab", "acccccccccacccabcccccccccccccccbcccccccccacccccccc", "bcbbbbbbcbbcbbbbbbbbabbbbbbbbbbbbbbbbbbabbbbbbbbba", "ccccccccbccccccccccccccccbccccccccccccccbccccccccc", "abaaaaaaaaaaaaaaabaaaaaaabcaaaaaaaaabaaaaaaaaaaaab", "ccccbcbccbcccccccccccccccbaccccccccccccccccccccccc", "cbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbabbabbbbbbcbbbb", "aaaaaaaaaaaaaababbbaaaaaaacaacabaaacaaaaaaaaaaaaaa", "cccccccccaccccccbcccccccbccccccccbaccccbcccbcccccc", "aaaaaaaaaabaaaaaaaaaaaaaaaaacaaaaaaaaaaaabaaaaacaa", "aaaaaaaababaababaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba", "aaabaaaacaaaaaaaacaaaaaaaaaaaacaaaaaaaaaaaaacaaaba", "bbbbbbcbbbbbbbbbabbbbbbbbabbbbbbbbbbbbbbbbbcbabbbb", "aaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaacccaaaab", "aaaaabaaacaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaabaaaaca", "ccccccccaccccccccccccccccccccccbccccbbcccccccccccb", "baaaaaaaabcaacaabaaaaaaaaaabaaaacaaaaaaaaaaaaaaaaa", "aaaaaacaaaaaabaaabaaaaaaaaaabaaaacacaaaaaaaaaaaaaa", "bbbcbbbcbbbbbbbabbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbb", "ccccccccccccbccccccccccccccacccbccaccccbcccccccccc", "caccccaccccccaccccbccccccaaccccccccccccccccccccccc", "bbbbabbbbbbbbbbbabbbbbbbbbbbbbbbbbbcbbbbbbbbccbbbb", "aaaaaaaaaaaaaaaaaaaaaabaaabaaacabaaaaabaaaaaaaaaaa", "bbbbabbbbbbbbbcbbbbbbbbbbbbbbcbbbbbbbbbbbabbbbbcbb", "acaaaacaaaaaaaaaaaacaaaaaaaaaaaaaaaaaaacaaacaaaaaa", "cbcccccccccbcccccccaaccccccccccccccccccccccccccccc", "bbabbbbcbbbbbbbbbbbbbbbabbbbbbbbbbbbbcbbbbbbbbbbcb", "cbcccbccccccccbaccccccccccccccccccccbcccccccacccca", "cccccccccccccccccccaccccccccbcccccccacccbcccccccca", "bbbbbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbb", "bbbbbacbbbbbbbbbbbbbbbbcbbbaabbbbbbbbbbbabbbbbbbbb", "aaaaaaabaaaaaaaaaaaaaaaaaaaaacaaaaaaaaaacaaaaaaaac", "bccccccccccbacccaccccacccccccccccccccccccccccccccc", "babbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbabbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaacaaaaabcaaaaaaaaaaaaaaaaaaaaaa", "bbbabbbbbbbcbbbbbbbbcbbbbbbbbbcbbbbbbbbbbbbcbbbbbc", "bbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbabbbbbbbbbabcbbb", "bbbbbbbbbbababbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbcabb", "ccccccccacccccccccccccbcaccccaccbccccccccccccccccc", "bbbcbbbbbbbbbbbbbabbbbbcbbbbbbbbbbbbbbbbbbbcbbbbbb", "bbbbbbbbbbcbbabbbbbbbbbbbbbbbbcbbbbbcbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbbbcccbbbbbabbbbababbcbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaaaabaaacabaaaaaaaaaaaaaaca", "cccccccccccccbcccccccccccbcccccccccccccccccccccccb", "ccccbcccccccccbccbccccccccccccccccccbcccccaccccccc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {26.499795860705483, 12.722836979396048, 9.064848459337266, 6.782124252302324, 40.948923188539275, 6.3608952711238915, 39.55638929633969, 25.416013000772477, 44.06392871826498, 10.073110793859806, 41.5239368782308, 26.309059452960174, 12.101437370649002, 39.62709952397875, 8.411036040996727, 8.450142247001633, 11.065153718797832, 24.355211035197, 10.680735454425028, 9.442501119755972, 41.57267420618855, 11.765247550169189, 10.514009922602309, 25.13945399952112, 41.16749518063035, 38.61941082203489, 26.070781734149787, 8.751480242517363, 26.209258425608212, 10.583047635863721, 42.02721514403985, 26.449212653393207, 39.117341724719275, 40.26900796584417, 28.873341035559367, 23.56017323490504, 8.966014326847553, 40.712639327729505, 21.90912308487969, 7.102598897182286, 29.062574636703264, 23.227241009211298, 24.53756935975068, 40.53042453005906, 27.243937824239993, 27.246013397911018, 26.144378634498132, 8.343390192395741, 44.22290764790765, 41.60685699030339};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"abaaaabaaaaaaacaaaaaaaaaaaaabaaaabaaaabaaaaabaaaaa", "bbbbbbbbababbbbbbbbbccbbcbbcbbbbbbbbbbbbbbbbbbbbbc", "bcccccccccacacaccccccccbccbcccaccccccacccccccccccc", "aaaaaaaaaaaaacabaaaaaacaabaaaaaaaaaaabaaabaaaaacaa", "ccccccccccccccaccacccccccccccccccccccccaccccccaacc", "baaaaaaabbacacaaaabacbaaaaaaaaaacaaaaabaaaacabaaaa", "aaaaaaaababcaaaaaaccaacaaaaaaaaaabaabaaaaaabaaaaab", "bbbbbcbbbbbbbbaabbbbbcbbbbbbcbbbbbbbbbbbcbbbbbcbbb", "accccccccbcaccccacccbcccccacbbbccccacccbccccccbccc", "ccccaccccccccccacccccccccccaccccbccccccccccccccccc", "bababbbbccbbbbcabbbbbbbbbbabbabbbbbbbbbbbbbbbbbbbb", "ccccccbcbcccccccccaccaccccccccccacccacccccccccccbc", "cccccccbcccccaccccccbcccbccbccbcccccccbbcccccacccc", "bbbbcbcabbbbbbcbbbbababbbbaabbbbbbbbbbbbbbbccbbbba", "ccccccccccacccbcbcccccccccbccccccaccccacccbcccccac", "babbbbbbbbbbcbbbabbbbbbabbbcbbbbbabbbbbbbbbbbcabbb", "ccccccccccccccccbcccaccccbccbcccccbccccccccccacccc", "bbccbbbbbcbbbbbbbbbbacbbbbbbcbbbabbabcbbbbbbcbbbbb", "aaaaaaacaaaabbbaaaaaaaaaaaaabaaaaacaaabaaaaaaaaaaa", "ccbcacccbcccccccccccbcbccccacccacccbccccccccccbccc", "aaaaaaaabaaaacaaaacaaaaacaaaacaaaaaaaaaaacaaaaaaaa", "bbbbbbcbbbbbbbcbbcbabbbbbbbaabbbbbbbbbbbbbbbbbbbbb", "babbbbcbbabbbbbbbbbbbbbbabbbbbbbbbbbcbbbabcbbcaabb", "bbbcbbbabbbbbbbabbbbbbbcbbbabbabbbcbbbcbbbbbbabbba", "bbbbbbbabbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbb", "bbaacbbabbbbbbbccbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbcbb", "cacccbcccbcccbbcccccccccccccccccbccccccbccccccaccc", "bbbbbbbbbcbbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbabbbb", "bbbbbbcbbbbbbbbbbbbbbbbcbcbbbbcbabbbcbacbbbbbbbbbc", "cbbbbbcbbbbbabbbbcbbbbbbbbbbbbbbbbbbbbbabbcabbbbcb", "aaacaaaaacaaaaaaabaaaaaaaaaaaaaabaaaacaaaaaaaabaaa", "bbbcbbababbabbbbabbbbbbbbbbbbbbbbbbbabbbbabbbbbbcb", "cccccabccbccacccccccccbccccacccccbccccbbcccbcccccb", "caaaacaaaaaaabaaacaaacaaaaaaaaaaaabaaabaacaaaababa", "bcbcbbbabbbbbbaabbbbcabbbbbbcbbbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbcbcbbbbcbbbbbbbbbababbbbbbbbbcbabbbb", "babbbbacbbbbbbbbabbbbbbbbcbbcbbbbbabbbabbbbabbbbbb", "aaaaabaaaaaaaabacaaccacaaaaaaaaaaaaabaaabaaaaaaaaa", "aaaabaaaaaaaaaaaaaaacaaaacaaaaaaaaaaabaaabacbaabaa", "aaaaaaaaaaaacaaaaaaaaaaaacaabcaaaaababaaaaaaaaaaac", "ccccccacccccccccaccccccacbccccccccccccccccccccaccc", "bbabcbcbabbbbbabbbbbbbbbbabbbbbaabbbbbbbbbbbcabcbb", "bbbcabccbbbcbbaabbbbbbbbcbbbbbbbbbbbbbbbabbbbbbcbb", "aaaaababcaaacaaabaaaaaaaaaaaaaaacacaaaaaaabaaaaaaa", "caccacccccccacccccbcccccabccccccccccaccccbcccccccc", "cacccccccbcbcccccccccccccccbcccccccbacccbccabcbccc", "aaaaabcaaaaaacaabaaaaaaaaaaaaaaaaaaaabaaabaaaabaab", "cbbbbbbbbbbbbbbcbbabbbbcbabcbabbbbbbbbbabbbbbbbbbc", "bccccccccccccccccccacbccccccaccccccccbcaaccccccccc", "bbbbcabbbbbbbbbbabbbbbbbbbbbabbbbbbbccbbbbabcbbbbb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.584652874690487, 26.02556269720995, 38.89717594256766, 7.270644351683355, 40.846140257632655, 10.856324032193143, 9.455789454921534, 26.12442622449104, 36.84263613809064, 43.08600237404858, 21.96213915548167, 39.85311434791779, 40.05632796542595, 22.90564827115796, 39.47094580297747, 21.557074389673996, 41.64263767560608, 26.484209862623338, 6.745652714761119, 39.579824319042736, 7.795661620435418, 23.52305773032232, 21.874844686647243, 22.157704866032233, 22.304128214728575, 25.270815298640727, 40.50028904140926, 24.75828510686201, 27.342639171141087, 25.21349612551291, 6.778109311823781, 20.410060055668783, 38.24050203066205, 9.90882906940058, 23.61328099914661, 24.160741795322394, 21.163325025818693, 8.577211812167093, 7.8211778209777005, 7.930977207112356, 41.28749436689302, 21.289615498418556, 25.109795997823078, 8.631444454924942, 39.003118787006144, 39.16480472969485, 7.35296956482313, 24.04898201999662, 39.922036005354904, 23.597672733035754};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"aaaacaacaaacabcbaaaaabcaaabbaaaaaaaaaaaaabaaacbaab", "aaaabbaaaccaaaacaaabaaacaaabacaaabaacacabcacaaaaab", "baaaabcccaaaaaaaccaaaabaaaaaaaaaaababaaaaaaaaaaacb", "aaaabaaaaaaaaaaaaaaaacabaaaaabaaaacaacbbaaaaaaabcb", "bbbbbbbcbbbbbbbbbbbababbbbabbbcbabbbbcccbbabbbbbbb", "ccbbcccacccccabccaccaccbcbcccccccaacccbccccccccccc", "baaaaaaaabaabaaaaaaaaaaabaaacaaaaacaaaaabaaaaabaaa", "ccccaccccccccccbccccccccaccacaccccccccaacccbcccccc", "ccccbcbacccccbcbcccbcbccccccccbccccbcabccccccbcccc", "cbcbcccccccccacccccaccccaccccbbcaaccccccbcccccacbc", "aaaaaaacccaacabcabaacaaaaaaacaaaaaaaaabaacababaaaa", "abbbbbbbbbbbbbcbbbbbacbbcbbbbcbbbacbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaacbabaaaaaacaabaaacbaabaaaabbbaac", "abcbbcbbbbbbbabbbabbabbbbabcbbabacbbbbbabbbacbbbbc", "bcababbbbbccbbcabbbbacbbbabcbbbbbbbbbbbcaabbbcbbba", "cccbcbcbccccaccccaccbcccccacacccabcaccccaccccccccc", "bcbccccbaccccbcccccbcccccccccbccccbccccbcacccccaca", "baaaacacbaaaaaaaaaaacaaaaaaaaaaaaaabaaabcabaaaaabc", "bbbbbcbbbccbbbcabbbbbbccabbbbbbbbbbabbbbbacbcbbbcb", "bbabbbbabbbbbbbbbabbbcbbbbcbbabbbbbbcbcbbbbababbca", "ccccbcccbcccacccccbcccccbcbcacaccabccccbcccccacbcc", "aaaaaaaaaaaaaaaacaaaaaaaaaacccaacaabccaaacaaaaaaaa", "ccccccccccacacbccbcccbcaccccccccbcccccccccbacccbbc", "acbbbbbbbbbbbbcbbbbbbbbbcbbbaabbbbbbbbbbbabbbabbab", "cacccccccccbccccbcccccccccaacaacacccccaccccccccccc", "bacbbbbbbabbbbbbabbbbbbbcbbbbbbbbcbbbbbbbbbabbacbb", "cabaaaaaacaaacbaaaaaaabaaccaaacaaaaacccabaaaaabaaa", "acaaabbaaaaaaaaaaaaaaaaaaaaaaaaaacaaacaaaaaaabaaaa", "acaaaabacaaaaaaacaaaaababcabaabacbaaaaaaaabaaaaabc", "babcbbbbbcbbbbbbbabbbbbbbbbbabbbbcbbbbbbbbbbbbbbcb", "accccccbbcccccccccccccccccccccbbabcccbccaccacccccc", "ccacbacccccccccccaccbccacaccccccbcbacbccaccccccacc", "bbbccabbcbbbbacbcbbaabbbbbbbbbbbbbbbbcbbbbaabbbbbb", "aaaabaaaaaabaacaaaabaaaaaaaaccaaaabacaaaaaacaacaab", "abbcbbbbbbabbbcbbbbbbbbbbcabbbbcbabababbbbcabccbbb", "abcaccbcccccccacccacbcccccccaccaaccbcccccccccccaab", "aacbaaaaacbaaacaaacaccbcaaaabaaaaaaaaaaaaabcbcaaaa", "ccccccccccccbbacbcccccccacccccccccbcccccbaaccbcacc", "cccccaccccccccccbccaccccbcccccbccbcccccccccccccccb", "aaabbacaaaaaacaacaaaaaaacabaaaacacaaaabaacabaaacaa", "bbbbcbabbbccbbbbbbbacbbbbbbbabbbbccabbabbbccbbbbbb", "bcaabbcbbabbcbbbbacbcbbcbcbbbbbbbbbbbbbbbaacbbbbbb", "aaaaaaaaaacaaaaaabaaaaaaaaaaababaaaaababbaaaaaaaba", "bcbbbbbabbbbabbbaabbbbbbbbbbbbbbbbbaabbbbbabbbbbba", "aaaaccaacaacaacbaaacaaaabbbaaaaaaaacaaabacaaaaaaaa", "bbbcbcbbbabbbbbbbbbbcbcabbacbbabcbbbbbbbbbbbbbbbbc", "cacccacccbbcccbcbcacccbccccccacccccccaccbccccccccc", "acbabbaabaaaacbbacaaaaaaaaaaacbaaaacaaaaaaaaaabaac", "acbccccccccccccccccbccbccbcccccbccaccccccacccccbcb", "ccccbacbcccccccccbccaccbacccccccccccabbaccccccccbc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {12.555559647587648, 14.783691812213451, 11.697084727842642, 10.379624461729188, 24.681542126509488, 37.1831129536773, 7.929473350510443, 39.291310759947145, 38.981767214090695, 37.3412027847052, 12.8603693877363, 25.949892599120403, 10.83402081163747, 22.885581528584055, 24.556087946459375, 37.18526735736337, 38.26424538951682, 11.066978198095438, 26.798659759301824, 23.61727582444564, 37.4839315417199, 10.752480518699453, 38.981367991813705, 22.824181128320205, 38.47490884825992, 24.248335868849022, 13.868945072867742, 6.628727108442383, 12.68421905674327, 25.156840136829707, 39.37268997730277, 36.100961452729806, 24.895869336583786, 10.93365428583464, 24.45627770932089, 35.10168438593836, 13.845627221752416, 38.38947686109192, 42.01861861280394, 13.161510057747986, 25.76119064373589, 25.49131079510932, 7.211337482287036, 20.796346042506606, 13.271113874814855, 26.033093358189305, 37.947420982104745, 12.696760544983615, 39.83647962995173, 37.73189083159117};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"sssssssssssssssssssssssssssssssssgssssssssssssssss", "fffffffffffffffffiffffffffffffffffffffffffffffffff", "ssssssssssssssssssssssssssssssxsssssssssssssssssss", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnunnnnnnnnnnnnn", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuufuuuuuuuuuuuuu", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmvmmmm", "cccccccccccccccccccccccccccccccccccccccctccccccccc", "ggggggggggggggggggggggggggggggggggggggggggggggxggg", "iiiiiciiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "ddddddddddddddddddddddddddddddddddtddddddddddddddd", "rrryrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnpnnnnnnnnn", "qqqqqqqqqqqxqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "vvvvvvvvrvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "duuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "rrrrrrrrrrrrrrrrrrrrqrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "mmmmmmmmrmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyayyyy", "rrrrrrrrrrrrrrrrrrrrrrrrgrrrrrrrrrrrrrrrrrrrrrrrrr", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuhuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssssssssssssssssssssssssssshssssss", "bbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "sssssssssssssssssssssssssssssssssssssssxssssssssss", "yyyyyyyyyyyytyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "qqqqqqqqqqqqqqqqqqqqgqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "hhhhhhhhhhhhhqhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzjzzzzzzzzzzzzzzzzz", "ssssssssssssssssssssssssssssssssssssjsssssssssssss", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyxyyyyyyyyyyyy", "pppppppppppppppppppppppppppppppppppppppppppppppppp", "lllllllllllllllllrllllllllllllllllllllllllllllllll", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiriiiiii", "ddddddddddddddddcddddddddddddddddddddddddddddddddd", "cccccccccccccccccccccccccccccccccccjcccccccccccccc", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiriiiiiiii", "bbbbbbsbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "ttttttttttttttttttttttdttttttttttttttttttttttttttt", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "ffffffffffffffffffffffffffffffffffffffffffffkfffff", "xxxxxxxxxxxxxxxxxnxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "sstsssssssssssssssssssssssssssssssssssssssssssssss", "tttttttttxtttttttttttttttttttttttttttttttttttttttt", "ooooooooooooooooaooooooooooooooooooooooooooooooooo", "ppppppppppppppppppppppppppppppppppppppppppppppuppp", "rrrrrrrrrrrrrrrrrrrrrrrrrrrtrrrrrrrrrrrrrrrrrrrrrr", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeieeeeeeeeeeeeeeee", "pppppppppppppppppppdpppppppppppppppppppppppppppppp", "ttttttttttttttttttttttttttfttttttttttttttttttttttt", "ooooooooooooooooooooooooooooooooooooooooooooyooooo", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxwxxx"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {31.559591836734697, 7.5804081632653055, 35.120408163265296, 18.960816326530605, 40.31959183673469, 17.119999999999994, 3.1808163265306124, 10.701224489795912, 11.938367346938774, 5.620408163265303, 29.840816326530607, 18.620408163265303, 26.340816326530607, 42.69959183673469, 40.25918367346937, 27.53959183673469, 16.800408163265303, 46.099183673469355, 27.21795918367347, 40.37918367346938, 31.600000000000005, 0.04, 35.120408163265296, 46.89999999999999, 24.719183673469388, 11.3204081632653, 48.31999999999997, 31.680000000000003, 47.019999999999996, 23.019999999999996, 15.3804081632653, 13.8404081632653, 3.999183673469388, 2.7408163265306125, 13.8404081632653, 1.6200000000000003, 36.839183673469385, 9.02, 7.639999999999999, 44.01836734693876, 34.980816326530615, 39.0404081632653, 19.64, 24.321224489795913, 29.660816326530608, 6.160408163265306, 21.69918367346939, 36.89918367346939, 21.520408163265294, 44.49999999999999};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"eeeeeeeezeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeereee", "oooooooooooooooooooooxoooooooooooooooooooooioooooo", "aaaaaaaaaaaaaaaaaaaaaaaaraaaaaaaaaaaaaaaaaaaaacaaa", "zzzzzzzzzzzzzzzzzzzzpzzzzzzzzzzzzzzzzzzzzzrzzzzzzz", "tttttttttptttttttttttttttttttttttttttttutttttttttt", "jjjjjjjjjjjjjjjjjjjjjjojjjjjjjjjjjjjjjjjjjcjjjjjjj", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrd", "kkkkkkkkkkkskkkkkkkkkkkkkkkkkkkkkkkkkkkkzkkkkkkkkk", "jjjjjjjjjjjjkjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjb", "xxxxzxxxxxxxxxxxxxxxxxxxxxgxxxxxxxxxxxxxxxxxxxxxxx", "jjjjjjjjjjjjjjjjjjjgjjjjjjjjjjjjkjjjjjjjjjjjjjjjjj", "bbbbbbbbbbbbbvbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbkbbbb", "xxxxxxxxxxxxxxxxxxxxxmxxxxmxxxxxxxxxxxxxxxxxxxxxxx", "ccccccccccccccccccccccccccccccccccccccccccccccccys", "pppppppppppppppppppppppppppppppppppppaptpppppppppp", "dddndddddddddddmdddddddddddddddddddddddddddddddddd", "kkkkkkkkkykkkkkkdkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "tttttttttttsttttttottttttttttttttttttttttttttttttt", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzbbbbbbbbbbbbbebb", "mmmmsmmmmmmmmmmmmmmmmmmmmxmmmmmmmmmmmmmmmmmmmmmmmm", "kkkkkkkkkkkkkkkkkkkkkkkkkkkewkkkkkkkkkkkkkkkkkkkkk", "ggggggggpgggggggggggggggggggggggggggggggggrggggggg", "nnnnnnnnnnnnnnnnonnnnnnnnnnnnnnnnnnknnnnnnnnnnnnnn", "ffffffffffffffffffffffffffqfffffffffffffffffffffmf", "vvvvvvvvvvvvvvvvfvvvvvvvvvvevvvvvvvvvvvvvvvvvvvvvv", "ssssssrssssessssssssssssssssssssssssssssssssssssss", "sssssssssssskrssssssssssssssssssssssssssssssssssss", "aaaavaaaaaaaaaaaaaaaaaaaaaaaajaaaaaaaaaaaaaaaaaaaa", "dddddddddddddddrdddddddddddddddddddddddddddddddkdd", "bbbbbbbbbbbbbbbbbbbbbbpbbbbpbbbbbbbbbbbbbbbbbbbbbb", "qqqqqqqqvqqqqlqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "hhhhhhhhhhhhhhhhahhhhhhhhhhhhhhfhhhhhhhhhhhhhhhhhh", "ssssssssssssssssssssssssusssssssssssssssssssfsssss", "gggggagggggggggggggggggggggggggggggggggggggggggggg", "qqqqqqqqqqqqqqqqjqqqqqqiqqqqqqqqqqqqqqqqqqqqqqqqqq", "vvvvvvvvvvvvvvvvvvvvvdvvvvvvvvvvvvvvvvvvvvvlvvvvvv", "nnnnnnnnnnnnnnnhnnnnnnnnnnbnnnnnnnnnnnnnnnnnnnnnnn", "ssssssssfsssssssssssssssssssssssssspssssssssssssss", "kkkkkkkkkktkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "ppppppppphpppppppppppppppppppppppppppppppppppppapp", "gggggggggggggggggggggggggggggggggggggggggxjggggggg", "qqqqqqqqqqqqyqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqg", "gggggggggggggggggggtgggggggggggggggggggggggggggggg", "qqqqqqqqqqqqqqqqcqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqd", "bbbbbbbbbbbbbbbbbbbbbbbbbxbbbbbbbbsbbbbbbbbbbbbbbb", "gggggggggggggggghgggggggggggggggggggggggggggggggqg", "uuuuuuuuuuuuuuuuuxuuuuuuuuuuuuuuuuuquuuuuuuuuuuuuu", "ttittttttttttttttttttttttttttttttttttttttttttttttt", "wwwwwwwwwwwwwwwwwwwwwwwawvwwwwwwwwwwwwwwwwwwwwwwww", "ssssssssssssssssssssossmssssssssssssssssssssssssss"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {10.20204081632652, 27.100816326530612, 1.222040816326531, 48.358775510204076, 41.13707482993197, 17.91959183673469, 33.52, 22.849948979591826, 17.69714285714285, 46.96625850340134, 17.938758503401356, 4.562857142857141, 46.39251700680273, 7.303265306122445, 28.409166666666664, 7.895782312925168, 21.281275510204072, 40.26006802721088, 4.421224489795917, 24.64328231292516, 21.262925170068016, 14.396598639455778, 25.68836734693877, 10.602857142857136, 43.097959183673474, 36.187551020408165, 36.48630952380953, 1.6436734693877562, 8.329540816326524, 4.423299319727891, 32.00204081632653, 15.438367346938769, 37.51877551020409, 10.798775510204074, 30.645442176870752, 43.29959183673469, 24.626326530612236, 36.10673469387756, 21.947074829931964, 27.507534013605444, 14.122057823129243, 32.20918367346939, 13.460408163265305, 29.63965986394557, 4.904081632653058, 13.947891156462578, 42.81959183673468, 40.45918367346938, 44.99877551020407, 36.34753401360545};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"vvvvvvvvvvvvvtvvvvvvvvvvvvvvpvvvvtvvvvvvvvvvvvvvvv", "zzzzzzzzqzzzzzzzzzzszzzzzzzzzzzzzzzzzzzzzzzzzzzazz", "xxxxxxxxxxxxxxxxxxxxaxxxxxxxxxxxxxxxxaxxxxxxxxtxxx", "pppppppppppppppppppgpppppplpppppppppppeppppppppppp", "npppppppppppppppopppppappppppppppppppppppppppppppp", "rrrrovrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrcrrrrrrrrrrrrr", "rrrrrrrrrrrrrrvrrrqrrrrrrrrrrrrrrrrrrrrrrrarrrrrrr", "jjjjjjjjjjjjjjjjyjjjjjjjjejjjjjjjjjjjjjjjjjjjjajjj", "cccccctscccccccccccccccccccccccccicccccccccccccccc", "iiiiiipiiiiiiiiiimiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii", "mmmmmmmmmmmmmmmmxmmmgmmmmmmmmmmmmmmmmmmmmmmmhmmmmm", "qqqqqqqqqqqqqqqqqqsqmqqqqmqqqqqqqqqqqqqqqqqqqqqqqq", "oooooooooooooooooooooooooooooojooooooooooooooooooo", "zzzzzzuzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzjzzzzzzhzzzz", "jjjfjjgjjjjjjjjjjjjjjjjjjjjjjjjjmjjjjjjjjjjjjjjjjj", "mmmsmmvmmmmwmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "ooqooooqbooooooooooooooooooooooooooooooooooooooooo", "vmmmmmgmmmmmmfmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "rrrrrrrrrrrrrrrrrrlrjrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "araaaaaaaaaaaaaauaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaca", "aaaaaaaaaaapaaaaaaaaaaaaaaaaafaaaaaaacaaaaaaaaaaaa", "ccccccccccccccccccccccccccccccccccccccccwccycccccx", "rrrrrrkrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrxrrrrkrrrrrrr", "ddddddddddddddddddddddbddddddddddddddddqddsddddddd", "fffffbffffffffffffgffffffffffffffffffffffwffffffff", "aaaaaaaaaaaaaaaaaaaaaeaaaaaaaaaaaaaaamaaaaaaaaaaaa", "dddsddddddddddddddddddrddddddadddddddddddddddddddd", "zzzzzzzzzzzzzzzzzzzzzzzzzjzzzzzzzzzzzzzzzzzzzzwzzc", "ccccccccccccccccccccccccccccccccjccccccccccccccccy", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxixxxxxyxxxxxx", "wwbwwwwwwwwwwwwwbwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwcww", "llllllllllllllllllllllqllltllllllgllllllllllllllll", "kkkkkbkkkkkkkvkkkkkkkkkkkkkkkkkkkkkkkkkkkkzkkkkkkk", "qqqqqqqqqqqqqqqqqqqqqqqqyqqqqqqeqqqqhqqqqqqqqqqqqq", "uuuuuuuuuuuuuuuuuuwvuuuuuuuuuuuujuuuuuuuuuuuuuuuuu", "syyyyyyyyyyyyyyyyyyqyyyyyyyyyyyyyypyyyyyyyyyyyyyyy", "vvvvvqvvvvvvvvvvvvvvvvvvvvvkvvvvvvvvvvvvvvvvvvbvvv", "cccccccccccckccccclccccccccxcccccccccccccccccccccc", "iiiiiiiriiiiisiiiiiiiiiiiiiiiiiiiiiiiieiiiiiiiiiii", "llllllllllllllllyllllllllllllllllllllllllllrflllll", "uuuujuuuuuujuuuuuuuuubuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "xxxxxsxxxxxxyxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxyxxx", "cccccccccccjccccccccccccccccccciccccccrccccccccccc", "aaaaeiaaaanaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "qqqqqsqqqqpqqqqqqqqqqqqqqqqqqqqqqqmqqqqqqqqqqqqqqq", "qqqqqzqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqrqqqqs", "eeeeeeejeeeeeeeeeeeeeeeeeeeeeeeeeeecueeeeeeeeeeeee", "xcxxxxxxxxxxxxxxkxxxxxxhxxxxxxxxxxxxxxxxxxxxxxxxxx", "llllllllllllllllllllllnlllllllllllljllllllllllllll", "uuduuuuuuuuuuuuuuuuuuuuuuuuufnuuuuuuuuuuuuuuuuuuuu"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {39.297142857142866, 46.63753401360542, 41.116326530612255, 25.915510204081627, 26.116734693877547, 33.132244897959175, 33.183809523809515, 15.859183673469385, 7.38285714285714, 14.081224489795915, 21.846666666666668, 29.14207482993197, 24.25081632653061, 46.53510204081633, 15.622482993197274, 23.719506802721085, 24.576207482993198, 21.899999999999995, 32.563435374149655, 2.808180272108844, 2.12530612244898, 8.166615646258503, 33.27632653061224, 10.20163265306122, 12.283265306122441, 1.842040816326531, 10.079999999999995, 46.51714285714286, 6.702448979591833, 43.76081632653061, 39.049727891156465, 19.772857142857134, 17.984115646258495, 28.88624149659864, 37.47115646258504, 45.27421768707483, 38.331394557823124, 7.224897959183671, 14.28122448979591, 19.924931972789107, 35.40416666666667, 44.21542517006802, 6.924081632653058, 2.343265306122449, 29.056717687074823, 31.136530612244893, 11.317176870748296, 41.24297619047618, 18.909999999999993, 35.606258503401364};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"ffaffffffffffpffffffffffjffffffsffffffffffffffflff", "llllllllllolllbllllllllllllllllrllzlllllulllllllll", "gggqggggggggggggggggglgggggpggggggggggggdgggggggog", "ccccccccccccccccccccccccccqccccccccccdccccccczccnc", "kukkkkkkkkkkkkgkkkkkkvykkkkkkkkkkkkkkkkkkktkkkkkkk", "dddwdddddddddddddcdudddddddddddddddddddddddddddddd", "bbbbbbbbbbbbpbbbbblbbbbjbbbbbbbbbbbubbbbbbbbbbbbbb", "wwwwwwwwwewwwwwwywwwwwwwwwwwwwwywvwwwwwwwwwwwwwwlw", "ppppppppppappppppppppppptpjpppppppppppqpppppeppppp", "jjjjjjjjjjjjjjjjjjefjjjjjjjcjjjjjjjjjjjjjsjjjjjjjj", "xvxxxwtxxxxxxxxxxxxxxxxxxxxixxxxxxxxxxxxxwxxxxxxxx", "cppppnppppppppppppppppyppppppppppppopppppppppppkpp", "oooooofoooooooooooooooorooooooooooooouooooonoooooo", "ssssssssswsssssgssssssssssssslssssmsssssssssssssss", "eeeeeeeeeeeeeeeeeaeeeeeeeeezeeeeeebeeeeeeeeeeefaee", "bbbbbmbbbbbbbbbbhbbbgbbbybbbbbbbbbbbbbbbwbbbbbbbbb", "bojoooooooooooooiooooooooooooooooooooooooooooozooo", "xxxxxxxxxxzxxxxxxxlxxxxxxxixxxxxxxxxxrxxxxixxxxxxx", "xxxxxxvxxexxxxxxxxjxxxxoxxxxxxxxxxxxxxxxxxxxxxxvxx", "nnxnnnnennnnnnqnnnbnnnnnnnnnnnnnnnnnnnnnnnnnnnnnqn", "sssssssssscsssssssssdssssfsssssssssssgssssssssssss", "kkkkkkkkkkdkkkkkkkkykkkkkkkkklkkkkkkkkqkkkkkkkkkkk", "ttttttttttttttttowtdttttttttttttttttttttttttlbtttt", "uuuxwuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuluuuwuuu", "iiiiiiiiiiiiiiiiiiiiijiiiiiiieiiiiiiiiiiiiiiiyqiii", "avvvvvvvvvevvvvvvvvvsvvvvvvrvvvvvvvvvvvvvvvvvvvfvv", "eeeeeeebeeeneeeeeeeeeseneeeeeeeeeeeeeeeeeeeeeeeeee", "kkvkkkkkkkkkkkkkkkkkkkkkkkkkkjkekkknkckkkkkkkkkkkk", "ddwddddddyddddddddddddxdddddddddddddddddddddxbdddd", "axaaaaaaaaaaaaaaanaaaaaeaaaaaaaaaaaaayaahaaaaaaaaa", "llllnlllllllllllllllbllllllllpllfllullllllllllllll", "cccccccccccqcccccccccccgccccccccccccccccccjcccqecc", "lllllflllllllllllllllolllkllllllllllllvllllllellll", "yyyyyyyyyyyyyyyyrhyyyyyyyyyyyqyyyyfyyyyyyvyyyyyyyy", "mmmmmmmmmmmmmommmmmmmmmmsmwmmmmmmmmmmmmmmummmmmmmm", "jjjjjojjjjjjjjjjjjjbjjjjjjjjjjjosjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjijdjljjjwjjjjjjjjjjjjh", "fffbfffffffjffffffffffffffffffffffffffffcftfffffff", "vrvvvvvvcxvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvuvnvvv", "ttttttjgttttttttttnttttttttttttttttittttttttzttttt", "cccccczcccccccccccjccccccccscccccccxccccccccccyccc", "tttttttttttttttttttttttttttttcttztttfktttttrtttttt", "nnnnnnnnnnnnnvnnnnnnnnnnnnnnnnnnnnvnnnfnnnnnnnhnnn", "kkkkkkkkkkkkkkkkkkknkkkkkkkkkikkkkkkkkkekkakkbkkkk", "uunuuuuuuuupuuuupuuupuuuuuuuuuuuuuuuuuuuuuuuuuuulu", "ggggggggggggggggpggggggggneggggggggggguggggggdgggg", "nxxbxxxxxxcxxxxxxxxxxjxxxxxxxxxxxxxxxxixxxxxxxxxxx", "chccccccccccccccyccccrccvcccdccccccccccccccccccccc", "jddddddddddddddddwdcdddddddddddddddddddddddbdddddb", "cccccccccccccpccaclcccccccccaicccccccccccccccccccc"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {14.322397959183668, 26.442040816326532, 16.564489795918366, 6.914421768707482, 24.291037414965995, 10.015017006802719, 3.5895475708013715, 43.1984013605442, 32.03234910985671, 18.64019274376417, 45.37373015873016, 32.66294543349255, 31.178843537414973, 35.13840136054423, 11.274081632653058, 4.3793140589569175, 30.420966131133312, 44.952392290249435, 44.695725623582774, 28.795997732426304, 33.57654761904761, 23.173577097505675, 36.62160997732426, 40.6134126984127, 17.73034013605442, 39.99219387755102, 12.395697278911566, 22.116360544217677, 11.716598639455778, 2.8952551020408173, 25.441121363438985, 6.817585034013606, 25.393367346938767, 46.89061224489795, 28.33149659863947, 19.826057678390505, 19.1822052154195, 13.349727891156462, 41.31960884353741, 36.85424036281179, 8.604852607709748, 36.74969387755102, 29.14735260770975, 20.651065759637184, 39.18103765619723, 16.161632653061222, 43.34095804988664, 7.541150793650791, 9.034642857142853, 5.467704081632651};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"yyygycyryyryyyyyyyyyqyyyyyyyyyyyyyyyyyyyyyyyyyyysi", "bbbbuubbbbbtbbbsbbbbbbwbbbbbbbbbbbbbblxbbbbbbbbbbb", "nnnnndnnnnqnwnnnnnfnnnnnnnnnnnnnsnnnznnmnnynnnnnnn", "cfcclccccccccccccccccuccccctccccccccccclcccccclfcc", "hhphhhhhhhhhhhhhhhhuhhshhrhhhhhhhhhhhhhhhhhhhhnhch", "nnnnnnnnnnnnnfsnnnnnnnnnpnnnnnnnnnnnnnnnrnnnnnhniy", "iidxiiiiciiiihimiiwiiiiiiiiiiiiiiiiiiiiiiiiiilioii", "mmmmmmmmmtmmgmmimmmmmmmwmmmmmmmmmbmmmmrmmmmmbmmmmm", "kbkkkkkkkqkkkkkkkkkkkvkkkkkkakkkkkkkkkkkmkkkwkkkkc", "cmmmdmmmmwmmmmmmmrmmmmmymammmmmmmmmmmimmmmmmmmmmmm", "eeezkeeeeeeeeeejbeeeeeteeeeeeeeeeeeeeeeeeeereeecej", "lllllllllllhvlllllflldlllkllerllllllllllllclllllll", "jzjjjjjjjjjjjfujjjjfjjjojjjjjjjjjjjjjjjjjjjjrqjjjj", "eeeeeeeeeeebeeeeoeoaeeeeeeeeeeeeeeeeeeeeeeeeceeeee", "gggggggiggggggggggggggggggggggggghgzggggggigegggtr", "iiiiiiiiiiibiiiiiiiieiixqiiiiiaimiiiliiiiiiiiiiiii", "tggggggggggfgggggggggngzgggggggggiggpgggbggggggggg", "ttattttttttttttttttottutmtttttktttttttttttttbtttcm", "qqqqqqmiqqqmqqqqqggqkqqqqqqqqqqqqqqqqqqqqqqaqqqqqq", "bbtbbbbbbbbbdbbbvbbbkbbbbbbbbbbbbbpblbbbbbpbbbbbbo", "kvvvvvvvvvsvcvvvvvvvvvvvjvshvvvvvvvvvvvrvvvvvvvvvx", "ynndnmnnnnnnnnnnnninnlnnnnncnnqnnnnnnnnnnnnnnmnnnn", "ccccscccccccpccccccccdccclccccdccccccccccscccceccc", "mmmmmmmmmmmmhmmemmmvmfmmmmmmmmxmmmmmmmmmmmmmmmmmmm", "eeeefeweeeeeeeeeeteeeeeeeeeeeqeeeeeeeeeeeeeleeeele", "cccccccxccccceccccceczcccccccccccccccmcccccccccccm", "mmmmhmmmumgmmmmmgvmmmmmmmjmmmmmmmmmmmmmdmmmmmmmmmm", "zzzzzznzyzzzgzzzeznzzozzzzzhzzzzzzzzzzzzzzzzzzzzzi", "vvvvvvvcvvvvvvyvvvvvvvvvvvvvvvvuvvovvvvdvvvdvvvvvv", "jjjjjjjjjjjjjjjjjjjjjjjijfrtjdjjjjjjjjjjjjgjnjjmjj", "wwwwwwwwwwwkwwqgwwwwwqrwwwwwwwwwwwwwwkwwwvwwuwwwww", "vnannnsnnnnnnpnnnnnnnnnnmnnjnnnnnnnncnnnnnnfnnnnnn", "sssssssssssssssssssssslwsassasssssssscsssssissssss", "xvxxnxwxxivxxxsxxxxxxxmbxxxxxxxxxxxxxxxxxxxxxxxxxx", "tttttsttttttkttttttttttttttttbttttttttttttttxtttyt", "uuuuuuzuuuuuuuuxutuuuuuuuuuuuuukuuuuuuueubuouuuuuu", "pppppppppppqppppppppsppmpppppppppppwgjpppppppppppp", "fffffffuffffffffnfffffwfdffffffffffsffffzfdfffffff", "bobbbhlbbbbbbbbfbbbbbbbbbbkbbybbbbbbbbbbbbbfbbybbb", "xxxxjxxxxhxxxxxoxxxxxxxxxxxxdxxuxxxxxxxxxxxxxxiyzx", "rrrrrrrrrrzrryorrrrrrryrrrsgrrrrrrrrrrrwrrrrrrrrrr", "ujfuuuuuuduuuwuouuuuuuuuuuuuuuuuuuuuuuuuuuueukuauu", "pcpppppppjpppppoppppppppppjpppppppppppzppppppppppp", "qqqqqqqqqqqqqqqqqqqqqaqqjqoqqyqqnqqkqqqqqqqbnqqqqq", "ggglggbgkgggggggggfggggggggggggggggzggggiggggggggt", "bbbbbbbbbbbbbbubbbfbbbbbbbbobbbbxbbbbbbbqbhbbbbbcb", "jjjjjjjjjjjjmjlwjjjjjjjjjjjzxjjjjjjjjjjjnjjjjjzjjj", "yyyyyyyyyynjwyyyaiyyykyyyzyyyyyyyyyyyyyyyyyyyayyyy", "hhhhhhhhhehhghahhhhhhhhhhzhhhhhhhbhhlhhhhrhhhhhdhh", "aaaaagyaaaarqaaaaaaaaawaaaaafaaaaaaaaaaaaayaaaaafa"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {44.357715660732374, 7.55007935580124, 29.801734693877563, 8.352334166868326, 17.22938252223966, 29.199194139194134, 18.541972789115643, 25.024592576160902, 21.674455782312915, 24.962470624613484, 11.656746272977276, 22.351993587444223, 21.24489795918367, 9.113705936920217, 14.950161922677117, 17.740935374149657, 14.639744897959185, 35.51938392352988, 31.811730351715152, 6.546530612244898, 40.010024856096294, 28.043049645390074, 7.8210442242661085, 25.43505102040816, 11.535482078711562, 8.176621073961497, 24.77839672232529, 45.13586626139817, 40.082594191522766, 19.792761643118784, 41.77244897959184, 27.841843275771843, 34.3338753799392, 43.13190476190476, 37.953421459492915, 39.00048448511974, 32.002843228200376, 13.717528585902445, 6.051912611198327, 42.91702380952382, 36.11094080185268, 36.84420722135008, 31.570762213976497, 32.487664640324226, 14.390454664383238, 5.461377551020408, 22.403377812663535, 43.5375125702455, 15.5676083592193, 4.822152721403085};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"tbuuuuuuuuuufuduuuuuduuuuuzuuuuuspueuuuuubuuuuuuuu", "yyyfyyyyyoyyyyypyyyydyyyjytyyyyyyayoygyryfkyyyyyyy", "cecczccccccfcccccccdcczcchcccccccccacawccccccccccc", "puhhhhhhshhhhhhhhhhphhhhhhhbhrchhqhhqhhhhhyzohhhhh", "mmwzmmmmmmmmmmmmommmmmmfmammmibmmmmmfcmmmfmmmmemmm", "gggfggggggggfggggrcgngzgsgbggggggvggggggegtggdgggg", "upouuuuruueuuutunuuuuuauuuuuuuupcuuuuukduuuuunuuuu", "uhuuuuustuzquuuuuuuuuuuucquuuuuumuuuuuuduuuutuuuuf", "kykkkkkkkkkskkkfkkkkkkkkkyskkkkqkkmykkkkkkgkkkkkok", "eeckeeeeeveeeeeeeeeeqeereeeeeteeeeeeeeeeefrtleeree", "qwaaaaahaaaaaaaaaawaalaaulayaoaaaaaaaapavaaaaaaaja", "euuusuuhkuuuuuulauuutuuuuuuuuuuguuuuuufwuuuuuuuuua", "zzzzzftdzzzzqzzzzzzzdzczzzzzzmzzzzzzzzzxfzfzzzzcoz", "ggggigggbenygggggggngggggggggggedggegggqgzgggggfgg", "rkkkkojkxkkkkwakkkkkkkkknkkkkkkkdkkkkkkkkkkkkmckek", "zzzzzzzzznzazzfezzzzzzzzzaxbzzzzzzzzozzztzsznzzzzz", "tttttqttttttitttttlttttttxttttutcttnwtttatttuttttt", "ycpyyyeyyyyypyyoyyyyyyyyqyyhyyyyyyyyyxyymyzyyyyyyy", "fqqqqqwqqqqdqqqqqqajqqqqjqwqhqqqqkwqqqqqqqqqqhqqqq", "cccccbccjccczccsccccczccccgccccccccccccccqfccwcicc", "fvvvvvvvavrvvvvvvvvfvvvvvvvvkvhvvvvevvvzvvivrvvmvv", "nwwwwwwowwwwwwwwwxwwwwwwkwwgwmdwwwwwqwckwwwwlwwaww", "nnnnnynjnnnnonnnnznwnniznfnnnnnnnnqzlnnnnnnnnnnnbn", "kkkckkoukekkkkkkizkkkkkkkkktkrkkkkkkkkkkrkkkpqkkkk", "bbbbbbbbbbkcbbbybbbbbbbbbfbbdbbbbvbbbbbbbbbbilbubn", "uooooooooopoooooooooooowuoooocoooooooyyooofoooboow", "mmmhkomimmmbmmxmmpmtmmmmmmmmmmammcmmmmmmhmmmmmmmmj", "hllltllllallllolcllwlllplqlphllslllulllllllllllllb", "sssscjssscssssssssssnssssxsssussssssmsssssssssamss", "xxxxxxlkixxxxxxxaxxtxxxxxxxkxxxxxxaxxosxxxxxxxxxfx", "ttpttttttttttttvtttttttntettttbtttmtaupttttttttmtt", "dqyyyyoyyyyyyyyyyyyyhyyuyyyyymyyyyyyyyyyyypyyayyqc", "oooooodoooloigooozooaoobooooooooaocoooqoocoooooooc", "uuuuuuuuuuhueuuusuuuuuuuuuguuufuuvuuugtuyuuuluuuuu", "eeeeaeekeejebeeczeeexfeeeeeeeeeexpeeeeeeeeeeeeeeeb", "wrrrrcrqdrrurjrrxrrdrrrrrirrrerrrrrrrrrrrrrrirrrrr", "ossisswssssstssssssssssssscpssssssssssssbdssssssss", "dgddsddvdddbdddddddzdjdxdddfodddddddddddgddodddddd", "dddngddqdmdddfddddddddddtdndddddddddzytddddddddvdd", "ebbbbabbbedbobbbbbbwbbbnbkbbubbbgbbbbbfbbbxbbbbbbb", "jhibxbbvbbbbbgbbbbbbbbbbbbbbbnbbubbbkbbbbbybbbbbbu", "lxxxxxxxskxixxxxxxxhxxxxexxxxixxxxxxxaxxuxvxoxxxxx", "cccwccyccccxscccccluccccccbwccccccdcchccvkccxccccc", "ooooooosoqfooooooooooooohootoqooooooooopoaoomxdooo", "kkkukkkkkkaknkwkkkwkkkkkakkmkztkkkkikkklkkkkkukkkk", "emfsppkdpppzppipppprppppppppzpppppppppppppppppbppp", "iiwiigiieiiiiiiitibiiiliiiiiiiibiiipiiiiiiuiiiiwig", "ffuffffqcfqffffffaffffdffafpfffkffffffpfffffffffff", "cccccccccccccvmccczcczccccccccccgcofccccckcvvccpco", "ccsccccccscccccjcoccccciccccccrccgccchcccuggcchccu"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {34.910111168767614, 39.94796400829836, 7.985335013064574, 19.50601425676653, 22.187472200721178, 16.412329931972785, 34.06035908040286, 35.87919361062828, 21.94957482993197, 14.667189897235492, 7.534035158929438, 33.81637231873128, 41.71250904617166, 15.940423722680558, 19.90278404979013, 42.421797052154204, 33.42341528563322, 42.27379118313991, 28.61480029199469, 9.62306385898891, 36.81430272108846, 37.080357473239054, 26.451249336614076, 21.910333870390254, 6.117538603347275, 27.886779931830883, 22.492219206831663, 22.452431972789118, 30.899877929895354, 39.07465202393015, 32.63334008071313, 41.28338592883962, 23.63677425580161, 36.112936648343556, 12.881634824142425, 29.490921262121876, 31.48855816794803, 12.582983065566651, 13.66445831524099, 6.559872744170458, 8.136360544217688, 39.219969484247606, 12.25721610505052, 26.508286889223776, 21.65387657974724, 27.84980460269214, 18.738762483716894, 13.94829093432007, 12.028191664802609, 10.376096383133186};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"qfyzyyybyjhyyyyyygydyyyyjyyyygyyyyfyyyouhyhyyyyoyy", "yytjyyxyyyyyyyyyuyoysyyyyyymyysyyyyyyxzoiyyndyxyyg", "vgvuvvvodgvvvvvvvvvrvvcmvvtvvuvjfvvvvvzvvvvcyovlvv", "ygikyaiyyyfyyyyyynyvyywybyvfgybyyyyuhyykywyyyyyyyy", "sbbbbxwqwwbbbxeurbqbrwbbbbbbbbxbbbtbbblbbbbrbbbdbb", "jqqqqjqqqtqqjlwqqqqiqqsqqnnqqqqqbqqqmbptqqqxqfqqqq", "kzivzsazxnzzvzzzwzzzdzzzmzzzzzzzzzzhzzmzzkzzozzzxz", "wlllbzwlelllllllallllllcllllllyllenllldlllnlllallt", "iiiiiiikiipijiiiaiiipiteigniriiiicniiitiiiiaippefz", "iiiiiiiifiiihiiiiwjgiiiciiiviiizsikiiciiiiioiziili", "xxxxxxckxxxxxayxxsxxxxxwaxxxxxxxsxxxxtaeqxxxxxlxnx", "iixiiiiiiiifiiiiiiiipyiiinsilyiiiayiiieimkiiviiibi", "kappipopppppppgpgpfpppwpppnippsropppppppppppysppnp", "ttyyjftttttomttttthtttattxtxcatttztdtttttymtpttote", "pmmmejxmhmmmbcwmvmommmmmmmmmrmxmmdmmmmmmumoxmummmc", "xtddddddddddddkddprdwzxqddddwddudddidsdddddddzwddj", "tatdpttttttttktttvtfttattwtttdqxzttltttttnxqtmtott", "tlzllllllllilwllllllmzlylllzlbldlllllltfhrlllllhil", "qlllmlraldlllljlhlvlhlllglllllllblllllalklllylufll", "yfeyeyqyyypayyoygxtyyyyymycyyyyyzycysymyyyyyynbyuy", "ppppcgvppxpppxpyepzeuppppppptppppguprppppppppapopp", "eeexeseeeeyleefzeebemeeemedeeeeeeeeveseaeteexeedec", "yvapaaayauapaaafaaaaataaaaaaaaiaeaaaaaaqaaaagrgvai", "efgetvekebeeeeeyereeeaeeexefeemeyeeeeeeeeejleleeee", "qqqqlvqqqqqfoqbiqzqvnqxqzqqqsqqxewqkqqqqqqqqqqqqnq", "kcgttttttbtvtvtthtttttrttittttetvxtdctmtttxtettbtt", "xxxfzvxxxxoxxxwxdxoxxwxxhxxxixxxxxxdixxuxucywxxxxu", "raaaauaawaasaavazaaamfaaaczaraaaaaajuahaajafaaaaqa", "rgggggguggggdggguehgjwgggcgggglggsgcgtggggggggiglh", "rwuelpieeeceeneueeveeeeeeeeheeeeeehsfdelzeeeeeeeee", "uuuutuyuturuuvuouuuuvkuukutuuzuuuurujuvouquuuuuqug", "bbbsfbbgrbbwafbebbdwbbbbebbbbgbbbjqbbbbmbsbbbjxbbb", "eubuuuhruiufuuuuuuuuuuuuxuurpuuquruuuuxuuejuzbuuuu", "xxexxxryxxxxxxxxxxxqdauxmxxxxxxxxpxumxtxlxxxpxgdct", "asaalaanzvhaaaaayaaxvaaaaaaiuhaimabaraaacaaaaaaaaa", "bbbbbbhebbbbbbbbokbbbzbbbbxjbtbvbbxbbshbbbgbobbeby", "ypphhhhhmbhhhhdhmthhsyhhfhhhyhheshhhhehhhhhhhhmhhh", "nnnamwpnnnnnnnnsknnnnnnnnnnnvnnnnbnnyeihrgarnnnctn", "vffvffpffpfffcffffxffcfqfgffffffuffawfffybfffzfezf", "fffofofcffffftffffffxfnffwnfvffefvffdfnifvffffouff", "qvvvgvfvvvvvvajvdvevvpvvvaysvtyvvvvxvvvvvvynvvzvvv", "wuvwmwwwvwwwwwwcwwwaxwwwgwwwwuwwywwiuwlwwhwwbwmwwy", "shjxjjujjjjujjyjjjjljjjjvjjzcqjjjjjjzjwjjljacjjbjo", "xxxuxsvxuxxxccxxxdcfoxxxxpxxxgcxxvlxxxxijxxxxxxxxw", "wowwwwwwqwwzgvwwwbwwwzwwwvwwwzwwwwwwhxyrowwawuwaww", "bglulwjhlllklllllbzlllllcllfwlplllqlblllllljllylli", "inznnmnngnnwnnnnsnnnnsnnnnnnnqnnnnnnhiaunnnnvmnunn", "zkzjzjhzyazuzzzzzzzzzdozpnzzzzzkzzqtiyzzzztzzzozzf", "avbvvvvvbdvvvvrejvvvevvdhvvvhevvvcivovvvjkvlvkvvvr", "mmmmmmmmmmhbmmmmmmmmkmlmmmmmmyumjmmrommxktmlmmsqmm"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {37.27437002460559, 40.5705931570689, 32.66863473147307, 36.27196919108112, 13.230791810094372, 26.89722979478563, 41.30952665710132, 20.520865331434244, 17.177843569070603, 17.64852792653705, 36.32584771438037, 18.25116381664188, 25.64776145811859, 29.474858763140446, 23.044093085893014, 14.568251131164764, 29.521253439965623, 22.14675774053997, 19.4612172301339, 36.73173254341132, 26.963325332497064, 13.330117381161134, 8.587960814425612, 12.493603355566082, 28.759976511418625, 27.58314341495986, 36.80659864894076, 9.135840108603968, 14.321944565060072, 13.687731622199701, 32.96671425739583, 9.302077135500433, 30.947373951430716, 35.48429572013819, 9.287724481766933, 10.378593088802669, 16.73394009808672, 23.22983524833828, 15.750048849326966, 15.333140421756122, 33.4476372620159, 34.90903903454265, 20.529485815602836, 34.42103904009091, 35.97764671561309, 20.610585415449933, 24.938909253162592, 39.239687364307436, 27.65490158602607, 23.443794389171032};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"abababab", "babababa", "acacacac", "cacacaca", "bcbcbcbc", "cbcbcbcb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 1.0, 2.5, 2.5, 4.0, 4.0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"aza", "aab", "bba"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.8333333333333333, 1.1666666666666665};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"akldkgneorlmfkc", "kmineufloscnfwy", "qpowimenfuckmfi", "mnfhnduwkslcind", "apomengficnudme", "apoemcnduenfker", "apoemdnfjcnfmek", "aaaaaaaaaaaaaaa", "bfbfbfbfbfbfbfb"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.91978021978022, 5.397069597069597, 5.508608058608059, 5.119047619047619, 4.684337884337884, 4.550216450216451, 4.531562881562882, 0.0, 2.2893772893772892};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdf", "asdfasdfasdfasdfasdfdfsaasdfasdfasdfasdfasdfasdf", "asdfasdfasdfasdfaqdfasdfasdfasdfasdfasdfasdfasdf", "asdfasdfasdfzzdfasdfasdfasdfasdfasdfasdfasdfasdf", "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfaszz", "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfzzzz", "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasda", "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdq", "asdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdx"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.5, 3.4166666666666665, 0.9, 5.833333333333334, 6.166666666666666, 7.416666666666666, 0.9, 3.9333333333333336, 4.933333333333334};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"aaaabbbbbaaaabbbbbaaccaass"};
    StrangeDictionary* pObj = new StrangeDictionary();
    clock_t start = clock();
    vector<double> result = pObj->getExpectedPositions(words);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22744064&rd=14734&pm=11929
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class StrangeDictionary {
public:
 
  double prob( string s, string x )
  {
    double fav = 0, opp = 0;
    
    for( int i=0; s[i]; i++ )
    {
      if( s[i] > x[i] ) fav += 1.0;
      else if ( s[i] < x[i] ) opp += 1.0;
    }
    return fav/(fav+opp);
  }
 
  vector <double> getExpectedPositions(vector <string> words) {
    
    int n = words.size();
    vector<double> rv;
    
    for( int i=0; i<n; i++ )
    {
      double pos = 0;
      
      for( int j=0; j<n; j++ )
      {
        if( i==j ) continue;
        pos += prob(words[i], words[j]);
      }
      rv.push_back( pos );
    }
    return rv;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/