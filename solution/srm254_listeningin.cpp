/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4670
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

class ListeningIn {
public:
    string probableMatch(string typed, string phrase);
};

string ListeningIn::probableMatch(string typed, string phrase) {
    string ret;
    return ret;
}


int test0() {
    string typed = "cptr";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aue";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string typed = "port to me";
    string phrase = "teleport to me";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "tele";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string typed = "back to base";
    string phrase = "back to base";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string typed = "b";
    string phrase = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string typed = "xgqa";
    string phrase = "xgqap";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "p";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string typed = "jhgmpql k";
    string phrase = "jhgmpql f nkp";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "fnp";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string typed = "ekxlqccpkupbmkumlxmrte jxxfwfmlg";
    string phrase = "epkxlqccpkupbmkumlxmrtet jxxfwfhumlg";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "pthu";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string typed = "ahdnbo wizdrqw sbrpf";
    string phrase = "oeashswdnbo wicszvdr qw sbrpf";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "oesswcsv ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string typed = "dxc ";
    string phrase = "haidbcxcvqjfwxqhawnvi gkcb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "haibcvqjfwxqhawnvigkcb";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string typed = "hzofohno nusesuvvupgufsufmzmclgnyyrzb";
    string phrase = "hzofohnou nusesuvvupgufstufmzmclgnyyrzb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "ut";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string typed = "ha zjdowpqkjetdsamkkegdna";
    string phrase = "okha nzjdowpqbkjetdsamqbkvepgqvjqmdmna";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string typed = "tquko";
    string phrase = "wgtmyqqufaavattclsnliwkbgxxbeovtewu";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "wgmyqfaavattclsnliwbgxxbevtewu";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string typed = "jgtecajceo qnsnzfctvgvfwmmpijxyzslapjecyhbjx";
    string phrase = "jgtecajceo qnsnzfctvgvfwmmpijxyzslapjecyhbjx";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string typed = "cibnt";
    string phrase = "ciab";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string typed = "pduashdeaqmxbfur";
    string phrase = "pduashdekaqmdbfu";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string typed = "obaehxxpebhckt htgvif";
    string phrase = "obaulrethpjebeyhwfckit rhtbgwiviogf";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string typed = "torgldqjlodz pxgi";
    string phrase = "ctorgscpjvldqjloxdoz pxgei";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "cscpjvxoe";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string typed = "tqmcwonoqnl";
    string phrase = "tqmcvwolnoqnl";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "vl";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string typed = "v";
    string phrase = "vg";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string typed = "monaylqnsam";
    string phrase = "monaaylqnsyam";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "ay";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string typed = "vhmizpdpb";
    string phrase = "vhdrmizipdzpbb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "drizb";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string typed = "it";
    string phrase = "i";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string typed = "japfpaw";
    string phrase = "jpfaw";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string typed = "viodeffspziylbf vtpxkjjspiltfi";
    string phrase = "ocpvhbikodeffspzsiydlbfa vtpxkqjjsupiltgrcf";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string typed = "bj";
    string phrase = "jb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string typed = "xh wpamkxnkghogh";
    string phrase = "xh wpamkxnskghoghc";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sc";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string typed = "tiddfkkeupfmwpzsvcrnfi";
    string phrase = "tiddfkkeupafmwpzsvrnfi";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string typed = "kchbezg qqearnpofiuuzniecuohnwjhgjnpdvyyp";
    string phrase = "kcbezg qqeanpofiuuzniecuohtnwjhgfjnpdvyyp";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string typed = " lty mah";
    string phrase = "q ubmetyau mzahrzd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string typed = "snytpoetekfcdeh";
    string phrase = "snythwpoetekvpfcdeh";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "hwvp";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string typed = "svugvadwvqpzpy";
    string phrase = "svugevzadwvkwhrqpsngzpyb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "ezkwhrsngb";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string typed = "zq";
    string phrase = "zfsg";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string typed = "d khrpqypv";
    string phrase = "omdxcbxhhqirgpqyujtmpryvv";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string typed = "muyinlyycun";
    string phrase = "mluyiar nxhilyyqfcyun";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "lar xhiqfy";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string typed = " telrhibqq mbwquv ";
    string phrase = " uteqvldrxvvqtxhaibbqbtqupnvb mkacj bjwkzpquv ";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "uqvdxvvqtxabbtupnvbkacj jkzp";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string typed = "port to me";
    string phrase = "teleport to me";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "tele";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string typed = "cptn";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string typed = "cptrb";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string typed = "mad";
    string phrase = "damm";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string typed = "asdf";
    string phrase = "asdf";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string typed = "cpture";
    string phrase = "capptture ";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "apt ";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string typed = "cptir";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string typed = "vladut are";
    string phrase = "v adut are";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string typed = "cptr";
    string phrase = "capture e";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aue e";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string typed = "ab";
    string phrase = "ba";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string typed = "sadfsadfdsafsdf";
    string phrase = "lkjlkjlksakfsljfsafjslakfd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string typed = "abc";
    string phrase = "cba";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string typed = "cptr";
    string phrase = "cptr";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string typed = "abc";
    string phrase = "def";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string typed = "login";
    string phrase = "login";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string typed = "back to";
    string phrase = "back to base";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string typed = "senthil kumar";
    string phrase = " enthilk suarm";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string typed = "lol";
    string phrase = "laugh out loud";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "augh ut oud";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string typed = "back to base";
    string phrase = "backe ato ba se";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "e a ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string typed = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string phrase = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string typed = "xzvhsfxcj xhxdhiaxfa nmww yjxuohu vnxtqphup";
    string phrase = "xpzvhsfxficj xhxdhia xfa nmmww yjxuohu vnxtyqphup";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "pfi my";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string typed = "back to bse";
    string phrase = "back to basee";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string typed = "abs";
    string phrase = "abfjdkfjd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string typed = "senthil kumar rajja";
    string phrase = " enthilk suarm jar";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string typed = "a";
    string phrase = "a";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string typed = "xy";
    string phrase = "xzz";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string typed = "ab";
    string phrase = " ab";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string typed = "abcf";
    string phrase = "abcde";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string typed = "a";
    string phrase = " ab";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " b";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string typed = "back to base";
    string phrase = "back to base";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string typed = "aaaaa";
    string phrase = "aaaaa";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string typed = "a b";
    string phrase = "a b";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string typed = "a f f a a f ";
    string phrase = "a f a a fgfdgfd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string typed = "a";
    string phrase = "z";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string typed = "abcd";
    string phrase = "abcdddd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "ddd";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string typed = "bbbbbbbbbbbbbbbbbbbbbbbbbb";
    string phrase = "ababababababababababababababababababababababababab";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string typed = "aaa";
    string phrase = "aaaabbbbbcccc";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbcccc";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string typed = "cptr one";
    string phrase = "captured";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string typed = "a";
    string phrase = "b";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string typed = "btw";
    string phrase = "by the way";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "y he ay";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string typed = "acp";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string typed = "back to back";
    string phrase = "back to back";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string typed = "a";
    string phrase = "bb";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "UNMATCHED";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string typed = "a b";
    string phrase = "a b b";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " b";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string typed = "capture";
    string phrase = "capture";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string typed = "a";
    string phrase = "abcd";
    ListeningIn* pObj = new ListeningIn();
    clock_t start = clock();
    string result = pObj->probableMatch(typed, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "bcd";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=8006&pm=4670
********************************************************************************
#line 2 "ListeningIn.cpp" 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define REP(i,n) for(int i = 0; i < (n); ++i) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define mp make_pair 
#define sz size() 
 
typedef pair<int,int> pi; typedef vector<int> vi; typedef vector<string> vs;  
 
 
struct ListeningIn 
{  
  string probableMatch(string typed, string phrase)  
  {  
    const char *a = typed.c_str(); 
    const char *b = phrase.c_str(); 
    string ret; 
    while(*a && *b) 
    { 
      if(*a == *b) 
      { 
        ++a; ++b; 
      } 
      else 
      { 
        ret += *b; 
        ++b; 
      } 
    } 
    if(*a) return "UNMATCHED"; 
    while(*b) { ret += *b; ++b; } 
    return ret; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/