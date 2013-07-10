/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7290
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

class VowelEncryptor {
public:
    vector<string> encrypt(vector<string> text);
};

vector<string> VowelEncryptor::encrypt(vector<string> text) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> text = {"hello", "world"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hll", "wrld"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {"a", "b", "c"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {"he", "who", "is", "greedy", "is", "disgraced"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h", "wh", "s", "grdy", "s", "dsgrcd"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {"aaaaaaaaaaaaaaaaaaaa", "ooooooooooooooooooop"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaaaaaaaaaaaa", "p"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {"alkjhvicou", "xwqerqwed", "xcmhlksjr", "qwerosdibm", "ponkldfsgjer"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lkjhvc", "xwqrqwd", "xcmhlksjr", "qwrsdbm", "pnkldfsgjr"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {"kv", "gy", "ab", "yd", "qz", "it", "dv", "kr", "tr", "eu", "jt", "wm", "xi", "ek", "bx", "dh", "pf", "qz", "zl", "co", "ka", "eo", "dc", "qx", "hj", "su", "ov", "xd", "pl", "dd", "dm", "eb", "gx", "ew", "oe", "kl", "zt", "te", "cl", "te", "lz", "um", "xt", "wt", "me", "ni", "rm", "hd", "xc", "bq"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kv", "gy", "b", "yd", "qz", "t", "dv", "kr", "tr", "eu", "jt", "wm", "x", "k", "bx", "dh", "pf", "qz", "zl", "c", "k", "eo", "dc", "qx", "hj", "s", "v", "xd", "pl", "dd", "dm", "b", "gx", "w", "oe", "kl", "zt", "t", "cl", "t", "lz", "m", "xt", "wt", "m", "n", "rm", "hd", "xc", "bq"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {"ki", "vz", "ug", "mo", "zv", "kb", "dn", "rb", "pw", "ev", "zh", "ty", "bl", "mo", "pe", "cb", "ve", "zm", "ve", "fz", "ug", "tc", "og", "bc", "wk", "bo", "yu", "zh", "rn", "ox", "zo", "tu", "gj", "nf", "nu", "jc", "gl", "wk", "ug", "kf", "ly", "pw", "eq", "vl", "km", "dl", "xb", "bz", "zq", "cx"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k", "vz", "g", "m", "zv", "kb", "dn", "rb", "pw", "v", "zh", "ty", "bl", "m", "p", "cb", "v", "zm", "v", "fz", "g", "tc", "g", "bc", "wk", "b", "y", "zh", "rn", "x", "z", "t", "gj", "nf", "n", "jc", "gl", "wk", "g", "kf", "ly", "pw", "q", "vl", "km", "dl", "xb", "bz", "zq", "cx"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {"tf", "pl", "km", "zz", "id", "xp", "sm", "qe", "bg", "rk", "ud", "me", "ni", "pr", "tf", "pk", "fp", "mk", "ou", "kb", "zy", "ox", "hh", "dw", "wz", "jm", "vr", "co", "gi", "hz", "ze", "yt", "qw", "hw", "pd", "ag", "nw", "pm", "bl", "ae", "ax", "ho", "tk", "sv", "ki", "yo", "wh", "gn", "wv", "uj"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"tf", "pl", "km", "zz", "d", "xp", "sm", "q", "bg", "rk", "d", "m", "n", "pr", "tf", "pk", "fp", "mk", "ou", "kb", "zy", "x", "hh", "dw", "wz", "jm", "vr", "c", "g", "hz", "z", "yt", "qw", "hw", "pd", "g", "nw", "pm", "bl", "ae", "x", "h", "tk", "sv", "k", "y", "wh", "gn", "wv", "j"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {"gg", "gl", "kn", "di", "cw", "ao", "wg", "hm", "aw", "sy", "cq", "sx", "cz", "gk", "ts", "tn", "sk", "um", "kk", "mt", "sf", "bw", "hs", "rc", "ab", "ry", "vd", "ba", "yd", "sa", "jl", "ta", "pu", "wn", "av", "qa", "ps", "cb", "rr", "ta", "pu", "he", "td", "gn", "iu", "hk", "dh", "hw", "sb", "zn"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gg", "gl", "kn", "d", "cw", "ao", "wg", "hm", "w", "sy", "cq", "sx", "cz", "gk", "ts", "tn", "sk", "m", "kk", "mt", "sf", "bw", "hs", "rc", "b", "ry", "vd", "b", "yd", "s", "jl", "t", "p", "wn", "v", "q", "ps", "cb", "rr", "t", "p", "h", "td", "gn", "iu", "hk", "dh", "hw", "sb", "zn"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {"qnijxffndzk", "rw", "hxgdr", "bwlpszaseembl", "vwedmu", "dqhrnvfocvidvwxup", "zwiszsmxltcvv", "g", "u", "ulnfvijwo", "fpexoxfsp", "bfosldgrxa", "ele", "tpkozmqhi", "dxlfghwgkrowy", "ndicnganptcswo", "aorcvgzvgtskszpjj", "wln", "vvxxlebuwdei", "avmhb", "qsaagtbwnmvkiadzkd", "ojnziglmz", "anrfr", "gculk", "dqftuzlbzsvgbx", "wugn", "uwadskzbjoyirjo", "djnefzbhfizsqunu", "aldemzpkwa", "mlwkxxmvsukxrlchz", "btsmiwbj", "dzsneuuwfmiacpfn", "dlkthiypxayexh", "ktzyiuvrrweqzogutxl", "gkgpckuwsh", "dxjqcjpuvbuecf", "iqecpmhpfdxzo", "ih"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qnjxffndzk", "rw", "hxgdr", "bwlpszsmbl", "vwdm", "dqhrnvfcvdvwxp", "zwszsmxltcvv", "g", "u", "lnfvjw", "fpxxfsp", "bfsldgrx", "l", "tpkzmqh", "dxlfghwgkrwy", "ndcngnptcsw", "rcvgzvgtskszpjj", "wln", "vvxxlbwd", "vmhb", "qsgtbwnmvkdzkd", "jnzglmz", "nrfr", "gclk", "dqftzlbzsvgbx", "wgn", "wdskzbjyrj", "djnfzbhfzsqn", "ldmzpkw", "mlwkxxmvskxrlchz", "btsmwbj", "dzsnwfmcpfn", "dlkthypxyxh", "ktzyvrrwqzgtxl", "gkgpckwsh", "dxjqcjpvbcf", "qcpmhpfdxz", "h"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {"vhao", "bpjkbovsbynayo", "wdfblrnysvu", "tqivjkovwtc", "nvnbiad", "vlruqzsntnnsgp", "vnxnbtstefe", "drkkfmekoxuzpc", "uiv", "dtrectlhecnzuqcnaiu", "sswungjhzes", "zzihsvlwhfbtdyid", "wksfucnyholxm", "aljxkxlv", "phxeaoq", "eewox", "cgeytzzlrbcczo", "ytsbv", "emlfbrzgxydlqimjp", "qsdhldyaehux", "pojswvs", "rxahqgx"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vh", "bpjkbvsbyny", "wdfblrnysv", "tqvjkvwtc", "nvnbd", "vlrqzsntnnsgp", "vnxnbtstf", "drkkfmkxzpc", "v", "dtrctlhcnzqcn", "sswngjhzs", "zzhsvlwhfbtdyd", "wksfcnyhlxm", "ljxkxlv", "phxq", "wx", "cgytzzlrbccz", "ytsbv", "mlfbrzgxydlqmjp", "qsdhldyhx", "pjswvs", "rxhqgx"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {"pwtvhhdqbiobo", "uxyonnx", "rlbphtsbu", "pgbyrpnqmfpdykwhpln", "ovtdrniesxwgrhssn", "k", "wyhplsfga", "nmmcywhsqyzgfe", "sh", "obtmhjda", "uyitqwj", "sa", "xogtf", "jrpthkqz", "vqclalfatejlklh", "qhbrlalspeviw", "vwquiealpsdfijxw", "tnlykqc", "nyh", "leovniirsmfzst", "d", "hbpzdoemjlpv", "qmovmcdmfff", "uwor", "zujcorcvplbyia", "xlpenrgruxxbskknfw", "diznbgf", "fhkegli", "unwbqrjgiwcrvgyr", "sbkmqwwggbtodthc", "oxx", "hn", "asktqcggc", "fzqggrl", "gk", "zjnabrhvznn"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pwtvhhdqbb", "xynnx", "rlbphtsb", "pgbyrpnqmfpdykwhpln", "vtdrnsxwgrhssn", "k", "wyhplsfg", "nmmcywhsqyzgf", "sh", "btmhjd", "ytqwj", "s", "xgtf", "jrpthkqz", "vqcllftjlklh", "qhbrllspvw", "vwqlpsdfjxw", "tnlykqc", "nyh", "lvnrsmfzst", "d", "hbpzdmjlpv", "qmvmcdmfff", "wr", "zjcrcvplby", "xlpnrgrxxbskknfw", "dznbgf", "fhkgl", "nwbqrjgwcrvgyr", "sbkmqwwggbtdthc", "xx", "hn", "sktqcggc", "fzqggrl", "gk", "zjnbrhvznn"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {"zgqagsbsnxgmserbsjbu", "junplwsdtdnmkgeqqehy", "iuavbqxfvgjotppivwhz", "arrxacyhyqncqfoceilz", "xvnylyfokflgnaotkngg", "wlefdgpgpsfynqyolhth", "fztnuecjggbmeuqmfkkg", "vrcktdpcdmyeeemcxxms", "cnqkvypjhyceiogowlyo", "uohzkolhznhnammtwiqm", "ifrugclboxqvvfpkkivr", "sohwlxuiiwmyiksqwise", "rzjirdvrymnfkohizyul", "hxzxfsjwkhobkvushiam", "nxfnquyxceatfanygadk", "tekohuktybxtmishqjsb", "cajsshmbscnzhkcttycw", "csmtiboybopqwmbwidhj", "xfrsdguqvkmyfknsmnbw", "wypfxiqwdqrzzbkyoimc", "cbjlbfqnjftvjvzbalga", "pvarpzvqyrybumbazupf", "svvcvuikewxqtbcprkfc", "fdpcgxxvarbcirilfihv", "rxhjlzdvvnjfwwufiwct", "yxsgorxeumxezxechrad", "eluiarwnwwwrwasnvuwk", "nynphspbhoymtrziucfx", "grnwnrqvqbjzpataaagq", "ukpvogrlbsbwqjzayifn", "onvmygjapvxzetngsrum", "ynkhtdnhzupjbtbbxmpw", "jskhnhinzhqqetxounyq", "mmanaqwetdzivbcqgnof", "syciybozjqgmvkuxjgbc", "arkwsreoevzosmhxnddg", "gkgyaqjjpsqhedhckbap", "kcjbuqhcuooeozbjgodh", "vitpjqezwcrobvnitqjc", "juqkkrmxrejunxnbvepm", "ysugnopxcqkrwallqnhn", "twglwrcxqjugholjwaul", "ygmrctqyphajwfypmcij", "uscrjaqtbjatouifvxdb", "jegovdsqgpnzcdkrtnca", "pxldpwjtohrxadecomim", "ixfrynfnttyqslrryopb", "gfrgoszigyvmevkihlfz", "ykpysorcnpatgywxptgf", "wdzohcriqrqvdgtxvsyr"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zgqgsbsnxgmsrbsjb", "jnplwsdtdnmkgqqhy", "vbqxfvgjtppvwhz", "rrxcyhyqncqfclz", "xvnylyfkflgntkngg", "wlfdgpgpsfynqylhth", "fztncjggbmqmfkkg", "vrcktdpcdmymcxxms", "cnqkvypjhycgwly", "hzklhznhnmmtwqm", "frgclbxqvvfpkkvr", "shwlxwmyksqws", "rzjrdvrymnfkhzyl", "hxzxfsjwkhbkvshm", "nxfnqyxctfnygdk", "tkhktybxtmshqjsb", "cjsshmbscnzhkcttycw", "csmtbybpqwmbwdhj", "xfrsdgqvkmyfknsmnbw", "wypfxqwdqrzzbkymc", "cbjlbfqnjftvjvzblg", "pvrpzvqyrybmbzpf", "svvcvkwxqtbcprkfc", "fdpcgxxvrbcrlfhv", "rxhjlzdvvnjfwwfwct", "yxsgrxmxzxchrd", "lrwnwwwrwsnvwk", "nynphspbhymtrzcfx", "grnwnrqvqbjzptgq", "kpvgrlbsbwqjzyfn", "nvmygjpvxztngsrm", "ynkhtdnhzpjbtbbxmpw", "jskhnhnzhqqtxnyq", "mmnqwtdzvbcqgnf", "sycybzjqgmvkxjgbc", "rkwsrvzsmhxnddg", "gkgyqjjpsqhdhckbp", "kcjbqhczbjgdh", "vtpjqzwcrbvntqjc", "jqkkrmxrjnxnbvpm", "ysgnpxcqkrwllqnhn", "twglwrcxqjghljwl", "ygmrctqyphjwfypmcj", "scrjqtbjtfvxdb", "jgvdsqgpnzcdkrtnc", "pxldpwjthrxdcmm", "xfrynfnttyqslrrypb", "gfrgszgyvmvkhlfz", "ykpysrcnptgywxptgf", "wdzhcrqrqvdgtxvsyr"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"aaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "ffffffffffffffffffff", "gggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllll", "mmmmmmmmmmmmmmmmmmmm", "nnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooo", "pppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssss", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "ffffffffffffffffffff", "gggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllll", "mmmmmmmmmmmmmmmmmmmm", "nnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooo", "pppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssss", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {"aaaaaaaaaaaaaaaaaaab", "eeeeeeeeeeeeeeeeeeeo", "iiiiiiiiiiiiiiiiiiil", "ooooooocoooooooooooo", "uuuuuuuuuuuuuuvuuuuu"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "eeeeeeeeeeeeeeeeeeeo", "l", "c", "v"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {"poooooooooaaaaa", "veeeeeeeeeeeeeiiiiii", "kuuuuuuuuuuukuuuuu"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"p", "v", "kk"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {"hello", "world", "aa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hll", "wrld", "aa"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {"aeio", "b", "c"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aeio", "b", "c"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {"a", "bqwrt", "ctqqw"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "bqwrt", "ctqqw"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {"bb", "aa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bb", "aa"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {"aeio"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aeio"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {"asdfetrerteeee"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sdftrrt"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {"aeiou"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aeiou"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {"aaa", "aaaa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "aaaa"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {"aa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"bbbbbb", "aaaaa", "bbbb"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbbbb", "aaaaa", "bbbb"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {"aaa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {"aioaioaioiau", "aiaoaiaia"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aioaioaioiau", "aiaoaiaia"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {"hello", "world"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hll", "wrld"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {"he", "who", "is", "greedy", "is", "disgraced", "pu"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h", "wh", "s", "grdy", "s", "dsgrcd", "p"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> text = {"he", "who", "is", "erfgfvxceeeesss", "is", "disgraced"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h", "wh", "s", "rfgfvxcsss", "s", "dsgrcd"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> text = {"eaiaiaia"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eaiaiaia"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> text = {"aaaaaaaaa", "aaaaaaaaaab"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaa", "b"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> text = {"aoi"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aoi"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> text = {"aeiou", "dsfjfkeiuue", "uioea"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aeiou", "dsfjfk", "uioea"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> text = {"a", "b", "c", "aaaa"};
    VowelEncryptor* pObj = new VowelEncryptor();
    clock_t start = clock();
    vector<string> result = pObj->encrypt(text);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "aaaa"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10241455&rd=10009&pm=7290
********************************************************************************
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
#define FOR(i, n) for(int i=0; i<(n); i++)
#define FORAB(i, a, b) for(int i=(a); i<(b); i++)
 
 
class VowelEncryptor {
public:
  vector <string> encrypt(vector <string> text) {
    string v = "aeiou";
    FOR(i, text.size()) {
      string s ;
      FOR(j, text[i].length()) if(v.find_first_of( string(1, text[i][j]) ) == string::npos) s += text[i][j];
      if (s == "") s = text[i];
      text[i] = s;
    }
    return text;
  }
};
 
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/