/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12506
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

class CharacterBoard2 {
public:
    int countGenerators(vector<string> fragment, int W, int i0, int j0);
};

int CharacterBoard2::countGenerators(vector<string> fragment, int W, int i0, int j0) {
    int ret;
    return ret;
}


int test0() {
    vector<string> fragment = {"dea", "abc"};
    int W = 7;
    int i0 = 1;
    int j0 = 1;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
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
    vector<string> fragment = {"xyxxy"};
    int W = 6;
    int i0 = 1;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> fragment = {"gogogo", "jijiji", "rarara"};
    int W = 6;
    int i0 = 0;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
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
    vector<string> fragment = {"abababacac", "aaacacacbb", "ccabababab"};
    int W = 882;
    int i0 = 10;
    int j0 = 62;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 361706985;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> fragment = {"asjkffqw", "basjkffq", "qbasjkff", "qqbasjkf"};
    int W = 9031;
    int i0 = 9024;
    int j0 = 1959;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 173947456;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa"};
    int W = 10000;
    int i0 = 0;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 253373800;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaab"};
    int W = 10000;
    int i0 = 0;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 481162973;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> fragment = {"a", "a"};
    int W = 1;
    int i0 = 125;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
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
    vector<string> fragment = {"a", "a"};
    int W = 2;
    int i0 = 145;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> fragment = {"a", "b"};
    int W = 1;
    int i0 = 125;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaab"};
    int W = 10000;
    int i0 = 8159;
    int j0 = 1230;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 481162973;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> fragment = {"bbbbbbaaaa", "abbbaabbaa", "aabbbbabba", "aabbbbbaaa", "aabbaabaaa", "bbaabaabaa", "bbaaaaaaaa", "babaaabbbb", "aaabbbaaab", "bababbaabb"};
    int W = 10000;
    int i0 = 1275;
    int j0 = 92;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 954403309;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> fragment = {"dqjzzwkax", "enrupfqzx", "roxyelnno"};
    int W = 5029;
    int i0 = 6425;
    int j0 = 413;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 533708449;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> fragment = {"eenrd", "xyofp", "vxxok"};
    int W = 4510;
    int i0 = 5340;
    int j0 = 3953;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 844044003;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> fragment = {"qd", "kc", "zc", "nt", "np"};
    int W = 8593;
    int i0 = 7103;
    int j0 = 3960;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 651086495;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> fragment = {"czfrvlvpp"};
    int W = 7634;
    int i0 = 5529;
    int j0 = 4058;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 490663457;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> fragment = {"ubtqsargxu", "jrhaxcdwmd", "tpqrqhxgbe", "pezkuvvotx", "mxveehtyov", "qpvvtxdzmd", "dftswtdcln", "pbchlocqmu", "exipytuxpv"};
    int W = 3897;
    int i0 = 9186;
    int j0 = 3785;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 714044871;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> fragment = {"tytj", "eajj", "gyyi", "wldm", "gdwv", "ljte", "jzle", "lshh", "tuag", "ujyf"};
    int W = 5480;
    int i0 = 3992;
    int j0 = 3192;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 369980528;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> fragment = {"sgjp", "dcnk", "feqv", "wbfh", "nzpa", "cvob", "ipix", "odfx", "ndri"};
    int W = 5703;
    int i0 = 5089;
    int j0 = 3753;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 517784911;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> fragment = {"zvsnnazg", "vgxueslx", "rlbxazqe", "pocouael", "gfealvaz"};
    int W = 9375;
    int i0 = 877;
    int j0 = 729;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 816068458;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> fragment = {"paxtpex", "rwjsmel", "notosgd", "eytogfr", "kzupfjr", "rseoehg", "qirryik", "osjwzrq", "qzzhvei"};
    int W = 7216;
    int i0 = 6421;
    int j0 = 1038;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 931120584;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> fragment = {"m", "e", "z", "z", "b", "a", "m"};
    int W = 5304;
    int i0 = 8738;
    int j0 = 5072;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 681802875;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> fragment = {"xrdjb"};
    int W = 2193;
    int i0 = 6710;
    int j0 = 1856;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 253662504;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> fragment = {"dgew", "mhrp", "dixm", "xvpk", "mewp", "kvdj", "issi", "tmlr", "ewpu", "bpae"};
    int W = 7036;
    int i0 = 1401;
    int j0 = 390;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 12329671;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> fragment = {"srpomdt", "zjemhhv", "ycqusbg", "dblhmho", "fhcfsfg"};
    int W = 4645;
    int i0 = 4081;
    int j0 = 3788;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 444526770;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> fragment = {"ip", "pv", "gi"};
    int W = 8299;
    int i0 = 636;
    int j0 = 6371;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 689579247;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> fragment = {"jwgyskv", "azraxkh", "eapvmrt", "fnuglpp", "hismjwr", "zfhcwre"};
    int W = 3253;
    int i0 = 7363;
    int j0 = 2190;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 820308701;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> fragment = {"cbgbfv", "zeyrzl", "okbmrv", "uqbyhp"};
    int W = 4052;
    int i0 = 733;
    int j0 = 419;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 382516384;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> fragment = {"su", "lh", "vd", "se", "cf", "ro", "sd", "km"};
    int W = 1172;
    int i0 = 2216;
    int j0 = 351;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 954950596;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> fragment = {"tekgwa", "bzfuwl", "wjbltm"};
    int W = 9286;
    int i0 = 4366;
    int j0 = 4600;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 651904760;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> fragment = {"vwks", "izam", "amvp", "xphi", "ycne"};
    int W = 4148;
    int i0 = 6902;
    int j0 = 2313;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 204930400;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> fragment = {"s", "x", "i", "j", "q", "i", "e"};
    int W = 3879;
    int i0 = 4604;
    int j0 = 2123;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 710328089;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> fragment = {"aimhbgpxn", "xlbijvpcl", "hbzfzgsap", "wpzpuulpt", "gjakjbfce", "pqmpibtqv", "eveeutuny", "gjbfkdnnh", "vuhzofnmj"};
    int W = 9668;
    int i0 = 4651;
    int j0 = 5697;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 167662266;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> fragment = {"nkasdzkj", "tkyjghdm", "xjfpiskm", "ukffcbxm", "thdeunic", "cxocksob", "waahtxzd", "onrmfsmk", "idhvnpfg"};
    int W = 6838;
    int i0 = 938;
    int j0 = 66;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 656602208;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> fragment = {"krtrtgxuo", "yglhaielr", "ppoguroyf", "whxlozbrd", "nipotsswq", "mauwewqcn", "rxgjsbuls", "oqmgpcsof", "dzavfluhc"};
    int W = 584;
    int i0 = 501;
    int j0 = 404;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 44297560;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> fragment = {"aspafgarp", "jcmbpqfbj", "czuazqmvy", "usinbwhul", "xpagogwsz", "vyptiuvlk", "gjkrwerpu", "ffxfmekih", "rzrlpuvrd", "rsdthprjx"};
    int W = 4289;
    int i0 = 2367;
    int j0 = 3403;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 147231832;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> fragment = {"zkzazeyj", "uaipnnaq", "monbzdtn", "igbddzaj", "mwxaucnf", "zljnqyht", "wixtfoga", "vzpajias", "lyqgwfjb"};
    int W = 7380;
    int i0 = 1115;
    int j0 = 1685;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 605258212;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> fragment = {"levtgaytu", "rjlqxrntp", "pigyswcgu", "szetuqfzc", "lvpdkziot", "strhuiepp", "fchbmyfia", "dhbrucicd", "yzygzxczl"};
    int W = 9225;
    int i0 = 113;
    int j0 = 6684;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 712311637;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> fragment = {"lqdkmyup", "ufetjqkl", "uwkxvnak", "mswlbwrt", "bhfhvqvd", "lijcmcyr", "lfwkeoaa", "oobdajgu", "oitaqizl", "xytgmyoa"};
    int W = 7628;
    int i0 = 5476;
    int j0 = 5708;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 349208890;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> fragment = {"zanlmjkqg", "cwcnvhxws", "dqtjhykxw", "hfdvshdhj", "hwcmtkmdb", "iqhhmerrx", "pjumvpovr", "nabgvwpdi", "ztrlahjmo"};
    int W = 7702;
    int i0 = 1985;
    int j0 = 4046;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 991831630;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> fragment = {"ekebgtpdok", "pjtefofxny", "igecbdkmkn", "uzmclskuum", "jhqdxfowfx", "wuoqdydrtd", "vgytdejvcn", "hxmwwlgxcx", "oltuefwdib", "cdjwxqxdqq"};
    int W = 2431;
    int i0 = 5069;
    int j0 = 1199;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 400344995;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> fragment = {"pmpucylvb", "ufyipkbeo", "fnyohjgfl", "rqzinqqep", "ezfossytt", "dwctzclbh", "fszmkhggt", "jfmueggyj", "qbkyqldtu"};
    int W = 1643;
    int i0 = 3623;
    int j0 = 86;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 802976187;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> fragment = {"vyjfrbyrhi", "rhikjtvvyj", "vyjfrbyrhi", "rhikjtvvyj", "vyjfrbyrhi", "rhikjtvvyj", "vyjfrbyrhi", "rhikjtvvyj", "vyjfrbyrhi", "rhikjtvvyj"};
    int W = 8015;
    int i0 = 650;
    int j0 = 3386;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 791546177;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> fragment = {"xknntimzx", "nxknntimz", "hnxknntim", "uhnxknnti", "buhnxknnt", "tbuhnxknn", "ltbuhnxkn", "xltbuhnxk"};
    int W = 9843;
    int i0 = 7762;
    int j0 = 6739;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 850014162;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> fragment = {"zcfarxan", "hizcfarx", "nbhizcfa", "annbhizc", "rxannbhi", "farxannb", "zcfarxan", "hizcfarx", "nbhizcfa", "annbhizc"};
    int W = 7126;
    int i0 = 1779;
    int j0 = 294;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 221359024;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> fragment = {"iwipaqtb", "ipaqtbxi", "aqtbxiph", "tbxiphbu", "xiphbuzo", "phbuzoby", "buzobyui", "zobyuiwi", "byuiwipa"};
    int W = 9616;
    int i0 = 9680;
    int j0 = 6880;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 620616321;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> fragment = {"jsxhdbgcdp", "qbjsxhdbgc", "dpqbjsxhdb", "gcdpqbjsxh", "dbgcdpqbjs", "xhdbgcdpqb", "jsxhdbgcdp", "qbjsxhdbgc", "dpqbjsxhdb", "gcdpqbjsxh"};
    int W = 7978;
    int i0 = 6222;
    int j0 = 923;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 223531031;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> fragment = {"rrxlhribr", "enmrrxlhr", "zavenmrrx", "ticzavenm", "cyfticzav", "pavcyftic", "kbdpavcyf", "ibrkbdpav", "lhribrkbd"};
    int W = 8907;
    int i0 = 1000;
    int j0 = 5913;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 694325584;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> fragment = {"junpoysvn", "uyrorzjun", "oysvnpuyr", "rzjunpoys", "npuyrorzj", "npoysvnpu", "rorzjunpo", "svnpuyror", "junpoysvn", "uyrorzjun"};
    int W = 9754;
    int i0 = 8266;
    int j0 = 9423;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 726038998;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> fragment = {"ugywscfuy", "hhymdeyug", "ljcqlklhh", "fuyjcgalj", "yugywscfu", "lhhymdeyu", "aljcqlklh", "cfuyjcgal", "eyugywscf", "klhhymdey"};
    int W = 9146;
    int i0 = 7991;
    int j0 = 6911;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 428363515;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> fragment = {"mdxbftrn", "tmdxbftr", "atmdxbft", "batmdxbf", "bbatmdxb", "lbbatmdx", "nlbbatmd", "jnlbbatm", "jjnlbbat"};
    int W = 8672;
    int i0 = 9140;
    int j0 = 4880;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 580961481;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> fragment = {"sdbrpeba", "dbrpebae", "brpebaeg", "rpebaegp", "pebaegpy", "ebaegpyi", "baegpyiz", "aegpyizq", "egpyizqx"};
    int W = 9145;
    int i0 = 3841;
    int j0 = 4217;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 771829921;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> fragment = {"pvqozfsdgr", "ejmtoxrqlm", "mugldcsdrm", "pvqozfsdgr", "ejmtoxrqlm", "mugldcsdrm", "pvqozfsdgr", "ejmtoxrqlm", "mugldcsdrm", "pvqozfsdgr"};
    int W = 10000;
    int i0 = 3521;
    int j0 = 4530;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 276277834;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> fragment = {"apwixecsho", "rhlbriedgk", "imweoonrrr", "apwixecsho", "rhlbriedgk", "imweoonrrr", "apwixecsho", "rhlbriedgk"};
    int W = 10000;
    int i0 = 9605;
    int j0 = 438;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 338817711;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> fragment = {"sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc", "sfsrxumc"};
    int W = 10000;
    int i0 = 4052;
    int j0 = 4414;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 573834803;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> fragment = {"skyngepa", "gepaqzlw", "qzlwrhdm", "rhdmcsky", "cskyngep", "ngepaqzl", "aqzlwrhd", "wrhdmcsk"};
    int W = 10000;
    int i0 = 7262;
    int j0 = 6046;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 584970502;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> fragment = {"goranzhjik", "sqnqnyisbr", "jefvvmpyul", "fnfkkzakcn", "qpylbicbnn", "myuxsbvizq", "ygqurwzvnh", "qhirgocmzk", "pqllccjhct"};
    int W = 9512;
    int i0 = 4854;
    int j0 = 5511;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 591699156;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> fragment = {"qhriqrglx", "ymnhsvkgl", "uixvzhfqo", "mrbxwoxze", "inmhzyqif", "hdupuqfib", "ewowfogvv", "ojsebirme", "tdvzjquvy"};
    int W = 9562;
    int i0 = 1239;
    int j0 = 329;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 195920929;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> fragment = {"pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc", "pmiweaalc"};
    int W = 10;
    int i0 = 8604;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> fragment = {"fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb", "fxsytflugb"};
    int W = 10000;
    int i0 = 5819;
    int j0 = 5629;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 569107362;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> fragment = {"vbtwromqv", "omqvbtwro", "twromqvbt", "qvbtwromq", "romqvbtwr", "btwromqvb", "mqvbtwrom", "wromqvbtw", "vbtwromqv"};
    int W = 333;
    int i0 = 1650;
    int j0 = 113;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 444363246;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> fragment = {"taotaota", "aotaotao", "otaotaot", "taotaota", "aotaotao", "otaotaot", "taotaota", "aotaotao", "otaotaot"};
    int W = 334;
    int i0 = 4827;
    int j0 = 11;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 451137862;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> fragment = {"dea", "abc"};
    int W = 7;
    int i0 = 1;
    int j0 = 1;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> fragment = {"asjkffqw", "basjkffq", "qbasjkff", "qqbasjkf"};
    int W = 9031;
    int i0 = 9024;
    int j0 = 1959;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 173947456;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> fragment = {"xyxxy"};
    int W = 6;
    int i0 = 1;
    int j0 = 0;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> fragment = {"aaaa", "aaaa"};
    int W = 5000;
    int i0 = 4888;
    int j0 = 4888;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 362932625;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> fragment = {"asjkffww", "basjkffq", "qbasjkff", "qqbasjkf"};
    int W = 9031;
    int i0 = 9024;
    int j0 = 1959;
    CharacterBoard2* pObj = new CharacterBoard2();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 668576860;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22759845&rd=15496&pm=12506
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
 
#define MOD 1000000009
 
using namespace std;
 
class CharacterBoard2 {
public:
  int countGenerators(vector <string>, int, int, int);
};
 
typedef long long LL;
 
int in[10005];
int R, C;
 
int CharacterBoard2::countGenerators(vector <string> fragment, int W, int i0, int j0) {
  R = fragment.size();
  C = fragment[0].size();
  LL ans = 0;
  for(int i = 1; i <= W; i++ ){
    for(int j = 0; j < i; j++ )
      in[j] = 0;
    int good = 1;
    for(int p1 = 0; p1 < R && good; p1++ ){
      for(int p2 = 0; p2 < C; p2++ ){
        int ii = p1 + i0;
        int jj = p2 + j0;
        int c = fragment[p1][p2];
        int ind = W * ii + jj;
        if(in[ind % i] == 0)
          in[ind % i] = c;
        else if(in[ind % i] != c){
          good = 0;
          break;
        }
      }
    }
    if(good == 0) continue;
    LL temp = 1;
    for(int j = 0; j < i; j++ ){
      if(in[j] == 0){
        temp *= 26LL;
        temp %= MOD;
      }
    }
    ans = (ans + temp) % MOD;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/