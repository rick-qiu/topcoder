/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11514
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

class RequiredSubstrings {
public:
    int solve(vector<string> words, int C, int L);
};

int RequiredSubstrings::solve(vector<string> words, int C, int L) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"a", "aa", "aaa", "aaaa"};
    int C = 2;
    int L = 3;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"abcdefgh"};
    int C = 0;
    int L = 7;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 31810104;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"abcdefgh"};
    int C = 1;
    int L = 7;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"a", "b", "c", "d"};
    int C = 3;
    int L = 3;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"ab", "bc", "xy", "yz"};
    int C = 2;
    int L = 3;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"abcdef", "cd"};
    int C = 1;
    int L = 6;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2280824;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"q", "w", "e", "r", "t", "y"};
    int C = 0;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 243120666;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"a"};
    int C = 1;
    int L = 2;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"r", "lk", "z", "l", "k", "lr"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 359785210;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"gbrh", "e", "ooc", "yop", "ss", "ufj"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 81615713;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"cr", "ir", "ssrnd", "yr", "scnexm", "tbodm"};
    int C = 3;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 745803426;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"zkmbbxox", "rfdwk", "upynoo", "gycspibn", "sphbozqv", "gqxiomzy"};
    int C = 3;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 188516160;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"yringrpsog", "qodkbtapgo", "vjyshbnmd", "sxtbpq", "pekwug", "uhmuia"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 730443648;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"fcmlgeted", "nzagfuvmoc", "pyaxyqumpqim", "koxevhwezjj", "tseutraysh", "kybeqnig"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 422765326;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"lcketimhos", "upqvkhvnsbp", "blhutrvhvdwx", "nfstjjbqmpvep", "bfnovmzeqfio", "izvpksxztskz"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 924966983;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"mlkgfnbwprwm", "mcxuchwzmoblend", "ggikabkiysxf", "ysbmglshbsnuahit", "nscjfhnyjkojratw", "dxfytbpalwbadr"};
    int C = 2;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 395382076;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"zfyurwmgbutbwmdr", "awwsmrycubsjntq", "ikyeoimgrrdlflaiyi", "rvdfwopkytsxctk", "jpeyjqkdjdqcdie", "izssovgoywytcbgdlu"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 291194816;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"ypyleqgxvkjrjgiydwh", "pkwenibfkrjmggskkivz", "kjxdqhjlqvfklzsg", "yuengxowqksjzjtx", "rdsqbpllbnncjycbg", "dqecjqydvhtmkqty"};
    int C = 3;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 8910;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"hbylqzvcxgnrktgkey", "qgkkfztgqqugocjzopc", "vyhtqpfovaxzbhxtbaheo", "argkwaqsfdrzzztocey", "zjpeyyrldzjnomdpgcuuh", "nyataggmdomzcqkxkby"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 361688375;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"hhrmaiaxasmvvyfzexpjejg", "whonczzsurbobldwsdkcecwi", "jrufswhwivjktwibqyrjwr", "ydhfkhhlrafhplpwnsqfracz", "saumrwktegmtlapuqnxv", "qjfvbcgatdqczdjzoilcp"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"vnurwpdcbnsfydlvonafwuv", "ofmxpxrvdhwjcundfprlzjmum", "inxxembnffmogcesepeldmx", "ukzwituxrfncpteiktcghn", "edwqwrvfqwrzfgaiifkhsmnl", "ulckkqgmvtvjuzmkzwwmdke"};
    int C = 2;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 42637142;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"gtbluiigmrhpsjvqmttyutmcwiyq", "zbkvbsnklpvozqwvfniozeaqf", "ufnnhgwohupsxdizobnvcihyxskr", "tjtfbddmxvwvgukelsrwpkxhodq", "xxlkayuuzmiynnorucoqhakpnkp", "radpynqckwxcbmuyckcqjkalfz"};
    int C = 0;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 518837045;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"ndpdtemdwwrbfugjzsrznpylacyvch", "otdmmufnkraxikahndajftwtvablw", "hrwvowebvlawlzhkxoyqrjpfpgc", "svlmucvxwbflxtoqsxykobrphxp", "naerbwmgcbncywywebuqittwxad", "emiuhgpfcvcuqgrkruiidgiwzzji"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 484004692;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"mpjrgmlwxqvqbuhdmqefllhxjkqfub", "ctontdtwztacnomwvavznocjmzqr", "avbhsumnwupwxrpckfbcsekeectwsx", "jqiniihqmqxxqpdtlpwsvmfzboaxc", "nyjfonbaafaveatvfzssfhjrxffulzdm", "epnobldzmhdgovnfjpmvceazqvrymrf"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"xzridwwzafwofczobtcmvhjqfjadxpkovp", "tkcernnegdzkrgnolfxdxfpqkvupcay", "hajpfrtovkjfriijchcbcyctcdjwljmmd", "mebqhnxggsdbemggyiyqujyfzqpfztk", "qgedpzekaktmzkgelshypsdzmcmhwpmped", "wawbcidibrtxaryhxgcqyvaxvghfoje"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"fjktnswcuhkavcxjckuwelzucjobmvehuftr", "nlpbmfbkzqmujnmucyemugeouogsmjnisuh", "qnomlhrfbyzhqmxruxdigoszwadqzddk", "mbxnafanyayreyderinoumwwajtagpkeyw", "xxhfqqrtjdtmrycqmkhofbwhbcxylpadfi", "zccnuypudymiqqhjrnypuyswjiunzjoxtjwm"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 570686630;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"afwqrrepxzibbpffvssyvoofyiiqyeepmajzj", "hiaqodbtjwjaaftcykweawbrcvtdokjxxbajz", "ylyuusxrngrhhnblztypvmqqgjkoohzwhfp", "jtbmhdrzwaplierjglpmdhnwvnnqecwkcvmpn", "lorkerpkkonzxpvacbvakjpjgtyznesceoihkx", "jueqiceatyruogeeqdateecpdkqzzfttctxvg"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 616582480;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"hckxzehamsrqojatrriencvodgzebubxsxolbzo", "ndkowknwedieyvszekmqonectnsowahliqha", "jrmxqtooegmloopvkipqzpaoztgprbfyrxoaniog", "vepzzsscofbmlgsybzkzfsbsgkvpoecizgqufytx", "uvkgszwlrcdnhbnvtxsmnrusazwniesfhcnh", "xjawlcvapqqzdpofljjozaydqvzehcdwkjhvmk"};
    int C = 0;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 912810561;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"bojgtweykostkeoeswimqufktblwgsqbicjsiur", "gnrwwsfxbjpcoijiubqxkxkoxbgtkekswnlvrqfq", "ccnejrzgudlfbidmiyoynvjqwylboujadtckrv", "swwjypouxqfwyfhdvvtytdwqdtfrrmvtzuviwie", "fvytqhzbezataooygfmelkodkvziaiybwciztf", "zbuilfbskcdgtyfhdscemeyxtbmjdpkhyzvmhq"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"dyqxuhjjgmetayhubntneekadxpjgohznpohqjetu", "romvnkytyvkybkflywqtcgqzyeanzvkaqqpntabxxddk", "wgxqqdmknftmfwpdbwkxtolppfcewrvcwwwimcahvpg", "gcbhtzqpntnzjwtwxzvnyrhzrhrywxzumxpgeimf", "guuhdfczmzwyndgyroscnfytwjdoafnszclxlwnbds", "gcwcmrkavzaqdajudfdgnzovkjhiojkfvgvbufax"};
    int C = 1;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 377592919;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"kuhrxuqjfbggpzrovjycxgtmbwicjeinxjvhtgjijibcgk", "pdgnatqujtwqpcsvvpwedvemepizcifbqqtwwisbgefgyz", "qmrdqzhpfiptyhagonyworxxgwzmtnpmtpleutprpaqz", "tnmwsiesuasgryhriojnrlliexcazrkhrmbwgjnvesexw", "lkepocceblfhmscsmqhsrovcgduliqpcbdgxgonzjf", "tjjsgjbfjzspkzirxcyxvrvrufxbdmzwztwjewbmtruhmi"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"wokvgjdtwewbpzpyqjigxxbzlrbixmdpxchgrikgzdke", "eqwwohozwlfixwgclxehxepockiudwprcwghamibtrrtjeo", "ttnjbvuktnyftmkatesjvaqyqvfgpwttoypthcsezsrcugp", "quubjhxtkoehoblkhbjllrmwtugtsaqwocvxupeacnpf", "jdoxemtacohzffkqowankeefshxpdwqhbnhieaafquirbijg", "alnuhtuxqqzfvpvzxrdaaoycupiwavvovynyxtbewmau"};
    int C = 0;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 635934457;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"auxpyqrdijixlxqsgriylmikluhptzxbuwtvffhfebqjmvca", "dsdodzobjloejmndbsjqldaaafpcocfkfakqrbgnefyemyd", "yfkhwfnbsqhouxxfmtsbysipdopugzllraxbquxoswrrfkziqi", "cthzaalvxvzwtzygqmhpezhptasxqnqtawxrgeoyblocefkn", "seniqblvvfjwbvzsqqmzpqkldljffmuocrursfiituhdhhttlk", "kpxywidfxpxbnkefmfxqhsoxauorgdwucwlcopbwhfnztxfbvd"};
    int C = 0;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 94812097;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"auxpyqrdijixlxqsgriylmikluhptzxbuwtvffhfebqjmvca", "dsdodzobjloejmndbsjqldaaafpcocfkfakqrbgnefyemyd", "yfkhwfnbsqhouxxfmtsbysipdopugzllraxbquxoswrrfkziqi", "cthzaalvxvzwtzygqmhpezhptasxqnqtawxrgeoyblocefkn", "seniqblvvfjwbvzsqqmzpqkldljffmuocrursfiituhdhhttlk", "kpxywidfxpxbnkefmfxqhsoxauorgdwucwlcopbwhfnztxfbvd"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 74363;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"anwqqiljuxilnegl", "xilneglubhatgdptp", "tnhezwjigxnpanw", "neglubha", "neglubh"};
    int C = 0;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 237632172;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"rlqbuv", "lp", "ewnlpxsuvvkmddb", "uvg", "dbz"};
    int C = 1;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 951441340;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"gyoq", "naiwsgyoqkxewe", "yoqkxewe", "o", "irvmusp"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 83105086;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"cgjpkovcye", "dfvfstnphmumxctbvhjwotvme", "pkovcyemjbdfvfstnphmumxctbvhjw", "e", "mjbdfvfstnphm", "otvmejd"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 116510845;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"iyaqad", "rnxqgzqszviyaqad", "oywmvqirrnxqgzqszviyaqadjmkucloamzx", "ywmvqir", "qirrnxqgzqszviyaqad"};
    int C = 4;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 758757679;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"qpjulooiupv", "g", "v", "grtcaqpjulooiup", "aqpjul", "ulooiupv"};
    int C = 5;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 298345993;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"zesf", "ywzes", "wzesf", "zfdfejrowrurgtspxnvau", "nirtpfwscxajywzes"};
    int C = 4;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 371130735;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"kmmiaor", "mm", "awizpek", "awizpekmmiaorkt", "iaorktocwjpid", "wjpidnzcq"};
    int C = 4;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 355791323;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"mifslp", "bkd", "l", "dtckdg", "tj"};
    int C = 2;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 993428212;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"zqpa", "jqchegl", "zq", "glwzqp", "zqp", "yjqcheglwzqpaf"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 478351568;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"y", "gwpjxpahmcdbmmsm", "krdzplqc", "xpahmc", "bmmsm"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 225355076;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"puxuixnvwvlallatsi", "a", "hbkabywsfdail", "jlelzb", "bpm", "wvlallatsihbkabywsf"};
    int C = 1;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 110938415;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"bxailzgbluabxzxsepbudm", "b", "ailzgbl", "xse", "bluabxzxs", "w"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 221053621;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"kiewllr", "ewllrxy", "p", "ewl", "ynwpt", "lrxynwpt"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 480363333;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"nxuuecvjnoulebktlambmcwczmjxb", "np", "t", "ambmcwczmjxbjua", "jxbjuautn"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 57607270;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"j", "xuk", "nnxukruejuie", "hzaieavpxenn", "avpxennxu", "e"};
    int C = 1;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 881913904;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"u", "qnehkoi", "bi", "zmzbtrlbevkzmteqnehk", "iq", "iqxfwgbieu"};
    int C = 4;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 342190207;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"lyvgfmooyb", "zmbqsua", "reoufaizmbqs", "oybffreoufaizmbqsuabwsdckjfsu", "suab"};
    int C = 5;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 685240461;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"xkqqmybozmlx", "pxkqqmybo", "fkmcxblblztwrljdb", "p", "xkqqmybozmlxi"};
    int C = 2;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 507301772;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"lztjfta", "uilflztjftakwppezdj", "muilflztjft", "jyg", "ftak", "l"};
    int C = 6;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 175521257;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"v", "dzwfinvorbfldlxy", "gdzwfinvorbfldlxy", "ngdzwfinvorbfldlxyyfvycle", "nvo", "dzwfinvorbfldlx"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 973402739;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"zjnziusoducijujwn", "jwn", "wn", "zzjnziusoducijujw", "cijujwnhs"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 213219100;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"wxtvorr", "rx", "xwxtv", "mefmfzrxgwrxwxtvorrpw", "tvor", "gwrxwxtvorrpwe"};
    int C = 3;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 343695833;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"qk", "oycqozblwbpgckqv", "bb", "o", "ufes"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 505593281;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"wycwmhrykrnllg", "omucrtrzirwkb", "irwkb", "rtrzirwkbwpmcwycwmh", "c"};
    int C = 4;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 267268615;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"mf", "otfmh", "tkkpbovjdntbglix", "ubkytkkpbovjdntbglix", "ootfm"};
    int C = 4;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 158109521;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"y", "qzftxqyfezsag", "gqzftxqyfez", "gfqdnnbgifs", "rgfqdnnbgifszdfqgqzftxqyfez"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 514992436;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"jit", "nekyhhnzt", "ipjqgqd", "tr", "blnpeyrji"};
    int C = 5;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 64448813;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"u", "npgmovuks", "miraacn", "hs", "miraac", "k"};
    int C = 0;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 208861428;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"di", "xdrrhnaux", "prkdxdrrhnauxhd", "xdrrhnauxh", "d", "fdiykyprkd"};
    int C = 0;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 347608150;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"cjgxvmitmneyhebnbnvbfz", "e", "g", "bnvbfzeqnnol", "h"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 793890355;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"q", "sicvfvpp", "haqsqlbsicvfvppbzazil", "kcohhaqsqlbsicvfvppbzazilk", "ppbzazilk"};
    int C = 3;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 647153575;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"urousxpx", "w", "tsussmucxxwzkpurousxpxz", "o", "wzkpurous", "cxxwzkp"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 450904631;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"lxtuafnxowqvcjtue", "wknaud", "towervgovdbitdpshm", "kiffs", "nusbwwepnhgklnau", "vujswooaonoabwknau"};
    int C = 5;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
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
    vector<string> words = {"vodjnhvdqdxdau", "dxdausqot", "nhvdqdxdausqo", "i", "qdxdausq"};
    int C = 3;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 283283079;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"zsarslxsypfpowmkfkh", "pqduuuhnmzlsykpedgrhrxnutuxeny", "kfnsyawbvobrhpynvnr", "igtwta", "xatrphobvhrukjhvul"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 500095923;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"svbcxaqutthtkmvkgpqwy", "brgsvbcxaquttht", "nk", "htkmvkgpqwyf", "dikyyfhorywbgvlm"};
    int C = 4;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 235618265;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"eawrbdjfuqjpjjlhiz", "zzxoicyqlmwsfkcojnse", "zw", "pwggqaskyeawrbdjfuqjpjjlhizw", "l"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 944197276;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"bakwpomglhymt", "chlxpogbvjadbeiszdp", "g", "gbvjad", "biayhyjmdcjey", "auochlxpogbvjad"};
    int C = 1;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 350028571;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"zhacguonw", "acguonw", "zoicaictthesy", "wszrnxymwrx", "uoyfvebafkwu", "imvkvlxwkbntm"};
    int C = 1;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 316935695;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"wrazxrmyqpoefkm", "yhwrpufcirtafecsx", "btivkhleoxnsn", "hviuyainjp", "fsuqedzmnzhviuyai"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 271568556;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"vkhztmeduhzyvlz", "snygv", "lbsrnzssnotrlq", "vvhylnvjxeomu", "sbugxjets"};
    int C = 3;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 34936820;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"fpabhdqirfwifpxa", "lwjbbtznluzgtnkhya", "wovvfhysaaylrmdelbez", "epguxvlqubytlrpt", "y"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 661017644;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"ajogeynvnjnmqnqajdls", "gwdymborildeyfazjeqfd", "gzfhkjpqdcx", "fwnfcvjenwppkfifldp", "dwxsjlhlhkssfkdzi"};
    int C = 3;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 41346;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"xpp", "p", "eprsaxub", "ljbqzyf", "sxwtrqvm", "cjcrpgvdqp"};
    int C = 6;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 182108087;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"eobmxtswh", "yjihjnugelane", "sxcsglgykjfduryjucq", "fevvpwmnvyzzyjkhvtxgg", "fwnthaltwlyfossgahsv"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"mrzmhimkfgfnvi", "fppwfbiuwclc", "fhiwsrzrt", "kxahtvrgbx", "mh", "oywmonsoibyf"};
    int C = 6;
    int L = 49;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
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
    vector<string> words = {"mqcvdmlbkigja", "defewfkodgp", "zodbqcipljbrcoazemfqwrw", "emfqwrw", "surnfvyawj"};
    int C = 2;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 181574786;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"cxhlvzlvdaawvk", "xvhucmibwmlxljhu", "d", "nxofgdyyznvstdiaf", "wmwfewmnexphmtkua", "uueoduaqrhvjwo"};
    int C = 5;
    int L = 48;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"rkgxcasjqnkbssjt", "vlyckwkuqkzgkx", "nlxchocghaeokjn", "dcxvtgjckysmtr", "foksixzyitbfas"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 817723296;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"abababbababab", "abababbbabab", "ababab", "abababababa", "ababbbbbbabab", "bababbaababa"};
    int C = 6;
    int L = 47;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 917116092;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"ab", "ba"};
    int C = 1;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 517547928;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"aaaab", "baaaa", "baaaab"};
    int C = 2;
    int L = 6;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"aaaab", "baaaa", "baaaab"};
    int C = 2;
    int L = 7;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"a", "b", "c", "ab", "bc", "abc"};
    int C = 2;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 762189100;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"ab", "abcd", "xab", "abyx", "cd", "cabyxcdab"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 11119541;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"axabc", "abd", "bfgbfh", "z", "aaaaa"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 112297820;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"zyzyzyzyzyz", "zyzyzyzyzyzyzyzyzyzyzyzyzyz", "zyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzyzy", "topcoderalgorithmsingleroundmatch", "np", "complete"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 666437996;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"aabbcc", "ddaabb", "eebbaa", "ffeebb", "ccffee", "bbccff"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 951970479;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"aaaaaaaaaa", "aaaaaaaaaaaaaabbbbbbb", "aaaaaabbbbbb", "aaaaaaabbbbbbb", "aaaaabbbbbbb", "aaabbb"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 373078186;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb", "wertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb", "rtyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb", "tyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb", "yuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb", "uiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"ababababa", "ababababab", "abababababababababab", "ababababababababababababababab", "abababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    int C = 6;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"phqghum", "eaylnlf", "dxfircv", "scxggbw", "kfnqdux", "wfnfozv"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 326621741;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"abvldortyu", "vdkgoyd", "afhyr", "kvvfre", "sdfght", "wfreglhyr"};
    int C = 5;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 862507961;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"a", "aa", "aaa", "aaaa"};
    int C = 2;
    int L = 3;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"a", "b", "c", "d", "e", "f"};
    int C = 6;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 165945116;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"abcd", "bcd", "cd", "bc", "c"};
    int C = 5;
    int L = 4;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int C = 6;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "baaaaaaaaaaaaaaaaaaaaaaaaaaa", "caaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "daaaaaaaaaaaaaaaaaaaaaaaaaa", "eaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 774257083;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"jagfkgafkgakgfkgafkjhk", "adhfgjagjgfm", "adfhkjagf", "dgsdg", "sarwefw", "aadgfagadg"};
    int C = 0;
    int L = 47;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 515425990;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"aaaaaaaaaaaazzzzzzzzzza", "aaaaaaaaaaaaaag", "aaaaaaaaaaaazzzzzzc", "aaaaaaaak", "aaaaaaaaaaaaa", "aaaaazzzzaaaaaaaaaa"};
    int C = 3;
    int L = 50;
    RequiredSubstrings* pObj = new RequiredSubstrings();
    clock_t start = clock();
    int result = pObj->solve(words, C, L);
    clock_t end = clock();
    delete pObj;
    int expected = 430809240;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694621&rd=14544&pm=11514
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstdarg>
#include <cstring>
using namespace std;
 
#define ALL(c) (c).begin(), (c).end()
#define FOR(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOREACH(i, n) for (typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))
typedef long long llint;
typedef pair<int, int> PII;
#ifndef WATASHI_PC
#define errf(fmt, ...) do { } while (false)
#endif
 
struct RequiredSubstrings {
  int solve(vector <string> words, int C, int L);
};
 
struct AhoCorasick {
  static const int UNDEF = 0;
  static const int MAXN = 360;
  static const int CHARSET = 26;
 
  int end;
  int tag[MAXN];
  int fail[MAXN];
  int trie[MAXN][CHARSET];
 
  void init() {
    tag[0] = UNDEF;
    fill(trie[0], trie[0] + CHARSET, -1);
    end = 1;
  }
 
  void add(int m, const int* s, int t) {
    int p = 0;
    for (int i = 0; i < m; ++i) {
      if (trie[p][*s] == -1) {
        tag[end] = UNDEF;
        fill(trie[end], trie[end] + CHARSET, -1);
        trie[p][*s] = end++;
      }
      p = trie[p][*s];
      ++s;
    }
    tag[p] = t;
  }
 
  void build() {
    queue<int> bfs;
    fail[0] = 0;
    for (int i = 0; i < CHARSET; ++i) {
      if (trie[0][i] != -1) {
        fail[trie[0][i]] = 0;
        bfs.push(trie[0][i]);
      } else {
        trie[0][i] = 0;
      }
    }
    while (!bfs.empty()) {
      int p = bfs.front();
      tag[p] |= tag[fail[p]];
      bfs.pop();
      for (int i = 0; i < CHARSET; ++i) {
        if (trie[p][i] != -1) {
          fail[trie[p][i]] = trie[fail[p]][i];
          bfs.push(trie[p][i]);
        } else {
          trie[p][i] = trie[fail[p]][i];
        }
      }
    }
  }
} ac;
 
const int MAXN = 6;
const int MAXL = 60;
const int MOD = 1000000009;
 
int a[MAXL];
int dp[MAXL][AhoCorasick::MAXN][1 << MAXN];
 
int RequiredSubstrings::solve(vector <string> words, int C, int L) {
  int n = words.size();
  ac.init();
  for (int i = 0; i < n; ++i) {
    int m = words[i].length();
    for (int j = 0; j < m; ++j) {
      a[j] = words[i][j] - 'a';
    }
    ac.add(m, a, 1 << i);
  }
  ac.build();
 
  fill(dp[0][0], dp[L + 1][0], 0);
  dp[0][0][ac.tag[0]] = 1;
  for (int i = 0; i < L; ++i) {
    for (int j = 0; j < ac.end; ++j) {
      for (int k = 0; k < (1 << n); ++k) {
        if (dp[i][j][k] != 0) {
          for (int t = 0; t < AhoCorasick::CHARSET; ++t) {
            int jj = ac.trie[j][t];
            int kk = k | ac.tag[jj];
            dp[i + 1][jj][kk] = (dp[i + 1][jj][kk] + dp[i][j][k]) % MOD;
          }
        }
      }
    }
  }
 
  int ans = 0;
  for (int j = 0; j < ac.end; ++j) {
    for (int k = 0; k < (1 << n); ++k) {
      if (__builtin_popcount(k) == C) {
        ans = (ans + dp[L][j][k]) % MOD;
      }
    }
  }
  return ans;
}
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/